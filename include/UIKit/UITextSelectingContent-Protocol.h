/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

@protocol UITextSelectingContent
- (BOOL)hasSelection;
- (BOOL)hasEditableSelection;
- (BOOL)hasMarkedText;
- (unsigned int)selectionOffsetInMarkedText;
- (id)selectionRects;
- (id)selectionRectsForRange:(id)fp8;
- (struct CGRect)caretRect;
- (void)startAutoscroll:(struct CGPoint)fp8;
- (void)cancelAutoscroll;
- (void)scrollSelectionToVisible:(BOOL)fp8;
- (void)setSelectionWithPoint:(struct CGPoint)fp8;
- (void)setRangedSelectionBaseToCurrentSelection;
- (void)setRangedSelectionBaseToCurrentSelectionStart;
- (void)setRangedSelectionBaseToCurrentSelectionEnd;
- (void)clearRangedSelectionInitialExtent;
- (void)setRangedSelectionInitialExtentToCurrentSelectionStart;
- (void)setRangedSelectionInitialExtentToCurrentSelectionEnd;
- (BOOL)setRangedSelectionExtentPoint:(struct CGPoint)fp8 baseIsStart:(BOOL)fp16;
- (void)setSelectionWithFirstPoint:(struct CGPoint)fp8 secondPoint:(struct CGPoint)fp16;
- (void)setRangedSelectionWithExtentPoint:(struct CGPoint)fp8;
- (void)setSelectionToStart;
- (void)setSelectionToEnd;
- (void)selectAll;
- (void)collapseSelection;
- (void)smartExtendRangedSelection:(int)fp8;
- (struct CGRect)closestCaretRectForPoint:(struct CGPoint)fp8 inSelection:(BOOL)fp16;
- (struct CGRect)closestCaretRectInMarkedTextRangeForPoint:(struct CGPoint)fp8;
- (id)wordAtPoint:(struct CGPoint)fp8;
- (void)clearSelection;
- (void)setSelectionToNextGranularity:(struct CGPoint)fp8;
- (void)moveSelectionToStartOrEndOfCurrentWord;
- (BOOL)pointAtStartOfLine:(struct CGPoint)fp8;
- (BOOL)pointAtEndOfLine:(struct CGPoint)fp8;
- (int)selectionBaseWritingDirection:(char *)fp8;
- (void)toggleBaseWritingDirection;
- (void)setBaseWritingDirection:(int)fp8;
- (BOOL)isPoint:(struct CGPoint)fp8 inRange:(id)fp16;
- (struct CGRect)visibleBounds;
- (BOOL)selectionGranularityIncreasing;
- (void)setSelectionGranularityIncreasing:(BOOL)fp8;
- (int)selectionGranularity;
- (void)setSelectionGranularity:(int)fp8;
- (int)selectionState;
@end
