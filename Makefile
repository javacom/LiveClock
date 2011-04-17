# Makefile for mobilesubstrate dylib for iPhone gcc compiler

PROJECTNAME:=LiveClock
BUNDLENAME:=$(PROJECTNAME)Settings
toolchain=/toolchain3
CC=$(toolchain)/pre/bin/arm-apple-darwin9-gcc.exe
CPP=$(toolchain)/pre/bin/arm-apple-darwin9-g++.exe
#CC:=arm-apple-darwin9-gcc
#CPP:=arm-apple-darwin9-g++
LD=$(CC)
SDK=$(toolchain)/sys
DEBUG=DEBUGOFF
ifneq (,$(wildcard Debian/control))
DEBNAME:=$(shell grep ^Package: Debian/control | cut -d ' ' -f 2).$(shell grep ^Version: Debian/control | cut -d ' ' -f 2).deb
endif

LDFLAGS = -arch arm -lobjc
LDFLAGS += -ObjC++
LDFLAGS += -lsubstrate
LDFLAGS += -framework Foundation 
LDFLAGS += -framework UIKit 
LDFLAGS += -framework CoreFoundation
LDFLAGS += -framework CoreGraphics
LDFLAGS += -framework QuartzCore
LDFLAGS += -L"./lib"
LDFLAGS += -L"$(SDK)/usr/lib"
LDFLAGS += -F"$(SDK)/System/Library/Frameworks"
LDFLAGS += -F"$(SDK)/System/Library/PrivateFrameworks"
//LDFLAGS += -bind_at_load
LDFLAGS += -multiply_defined suppress
LDFLAGS += -march=armv6
LDFLAGS += -mcpu=arm1176jzf-s 
//LDFLAGS += -dynamiclib
//LDFLAGS += -init _$(PROJECTNAME)Initialize

CFLAGS += -I"$(SDK)/usr/include" 
#CFLAGS = -I"$(toolchain)/sys30/usr/include"
CFLAGS += -I"./include"
CFLAGS += -std=gnu99 -O1 -g0
CFLAGS += -Wno-attributes -Wno-trigraphs -Wreturn-type -Wunused-variable
CFLAGS += -Wall -Werror
CFLAGS += -D$(DEBUG)

CPPFLAGS = -I"$(SDK)/usr/include"
#CPPFLAGS = -I"$(toolchain)/sys30/usr/include"
CPPFLAGS += -I"./include"
CPPFLAGS += -g0 -O1
CPPFLAGS += -Wall -Werror
CPPFLAGS += -fobjc-exceptions
CPPFLAGS += -fobjc-call-cxx-cdtors
CPPFLAGS += -D$(DEBUG)

OBJS:=$(PROJECTNAME).o TimeView.o

dylib_obj:=$(PROJECTNAME).dylib

ifneq (,$(wildcard $(BUNDLENAME)Controller))
bndl_obj:=$(BUNDLENAME)Controller
endif

all:	$(dylib_obj) $(bndl_obj)

$(dylib_obj):	$(OBJS)
		$(LD) $(LDFLAGS) -dynamiclib $^ -o $@ 
		#$(LD) $(LDFLAGS) -dynamiclib -init _$(PROJECTNAME)Initialize $^ -o $@ 
		export CODESIGN_ALLOCATE=$(toolchain)/pre/bin/arm-apple-darwin9-codesign_allocate; $(toolchain)/pre/bin/ldid.exe -S "$(dylib_obj)"

$(bndl_obj):	$(bndl_obj).o
		$(LD) $(LDFLAGS) -framework Preferences -bundle $^ -o $@ 
		export CODESIGN_ALLOCATE=$(toolchain)/pre/bin/arm-apple-darwin9-codesign_allocate; $(toolchain)/pre/bin/ldid.exe -S "$(bndl_obj)"

%.o:	%.m
		$(CC) -c $(CFLAGS) $< -o $@

%.o:	%.mm
		$(CPP) -c $(CPPFLAGS) $< -o $@

clean:
		rm -f *.o "$(dylib_obj)" "$(bndl_obj)"

install:	all
		cp "$(dylib_obj)" "/Library/MobileSubstrate/DynamicLibraries/"
ifneq ($(PROJECTNAME).plist,)
		cp "$(PROJECTNAME).plist" "/Library/MobileSubstrate/DynamicLibraries/"
endif
ifneq ($(BUNDLENAME).plist,)
		cp "$(BUNDLENAME).plist" "/Library/PreferenceLoader/Preferences/$(PROJECTNAME).plist"
endif
ifneq ($(BUNDLENAME)Icon.png,)
		cp "$(BUNDLENAME)Icon.png" "/Library/PreferenceLoader/Preferences/$(PROJECTNAME)Icon.png"
endif
ifneq ($(BUNDLENAME)Icon@2x.png,)
		cp "$(BUNDLENAME)Icon@2x.png" "/Library/PreferenceLoader/Preferences/$(PROJECTNAME)Icon@2x.png"
endif
ifneq ($(bndl_obj),)
		rm -fr /System/Library/PreferenceBundles/$(BUNDLENAME).bundle 
		mkdir -p /System/Library/PreferenceBundles/$(BUNDLENAME).bundle
		cp $(bndl_obj) /System/Library/PreferenceBundles/$(BUNDLENAME).bundle/
		cp AdsKillerSettingsController.plist /System/Library/PreferenceBundles/$(BUNDLENAME).bundle/
		cp Info.plist /System/Library/PreferenceBundles/$(BUNDLENAME).bundle/
endif
		killall SpringBoard

uninstall:
		rm -f "/Library/MobileSubstrate/DynamicLibraries/$(dylib_obj)"
		rm -f "/Library/MobileSubstrate/DynamicLibraries/$(PROJECTNAME).plist"
		rm -f "/Library/PreferenceLoader/Preferences/$(PROJECTNAME).plist"
		rm -f "/Library/PreferenceLoader/Preferences/$(PROJECTNAME)Icon.png" 
		rm -f "/Library/PreferenceLoader/Preferences/$(PROJECTNAME)Icon@2x.png" 
		rm -fr /System/Library/PreferenceBundles/$(BUNDLENAME).bundle 
		killall SpringBoard

package:	all
		rm -f ${DEBNAME}
		rm -fr package
		mkdir -p package/DEBIAN
		cp Debian/control package/DEBIAN/
		cp Debian/prerm package/DEBIAN/
		cp Debian/preinst package/DEBIAN/
		mkdir -p package/Library/MobileSubstrate/DynamicLibraries
		cp "$(dylib_obj)" "package/Library/MobileSubstrate/DynamicLibraries/"
ifneq ($(PROJECTNAME).plist,)
		cp "$(PROJECTNAME).plist" "package/Library/MobileSubstrate/DynamicLibraries/"
endif
ifneq ($(BUNDLENAME).plist,)
		mkdir -p package/Library/PreferenceLoader/Preferences
		cp "$(BUNDLENAME).plist" "package/Library/PreferenceLoader/Preferences/$(PROJECTNAME).plist"
endif
ifneq ($(BUNDLENAME)Icon.png,)
		cp "$(BUNDLENAME)Icon.png" "package/Library/PreferenceLoader/Preferences/$(PROJECTNAME)Icon.png"
endif
ifneq ($(BUNDLENAME)Icon@2x.png,)
		cp "$(BUNDLENAME)Icon@2x.png" "package/Library/PreferenceLoader/Preferences/$(PROJECTNAME)Icon@2x.png"
endif
ifneq ($(bndl_obj),)
		mkdir -p package/System/Library/PreferenceBundles/$(BUNDLENAME).bundle
		cp $(bndl_obj) package/System/Library/PreferenceBundles/$(BUNDLENAME).bundle/
		cp AdsKillerSettingsController.plist package/System/Library/PreferenceBundles/$(BUNDLENAME).bundle/
		cp Info.plist package/System/Library/PreferenceBundles/$(BUNDLENAME).bundle/
endif
		dpkg-deb -b package "${DEBNAME}"
		cp Debian/control Packages.txt
		./showdeb.sh "${DEBNAME}" >> Packages.txt

.PHONY: all install uninstall package clean

