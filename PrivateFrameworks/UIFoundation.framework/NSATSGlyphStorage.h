/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSATSGlyphStorage : CTGlyphStorageInterface {
    long  _bufferSize;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _characterRange;
    struct __CFSet { } * _children;
    struct { 
        unsigned int _hasNonNominalGlyph : 1; 
        unsigned int _hasPositionalStake : 1; 
        unsigned int _hasBidiRun : 1; 
        unsigned int _isEllipsisStorage : 1; 
        unsigned int _hasNonNominalStringIndexes : 1; 
        unsigned int _isUnordered : 1; 
        unsigned int _hasTotalAbsorbedCount : 1; 
        unsigned int _reserved : 25; 
    }  _gFlags;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _glyphRange;
    struct __CTGlyphStorage { } * _glyphStorage;
    const struct { id x1; int x2; int x3; float x4; float x5; float x6; float x7; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_8_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_8_1_2; } x8; struct { unsigned int x_9_1_1 : 1; unsigned int x_9_1_2 : 1; unsigned int x_9_1_3 : 1; unsigned int x_9_1_4 : 1; unsigned int x_9_1_5 : 1; unsigned int x_9_1_6 : 1; unsigned int x_9_1_7 : 1; unsigned int x_9_1_8 : 1; unsigned int x_9_1_9 : 24; } x9; } * _lastElasticRun;
    long  _lastElasticRunLocation;
    struct __CFArray { } * _masterRuns;
    long  _numRuns;
    long  _paraEndElasticCharIndex;
    float  _paraEndElasticCharWidth;
    NSATSGlyphStorage * _parent;
    long  _runBufferSize;
    struct { id x1; int x2; int x3; float x4; float x5; float x6; float x7; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_8_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_8_1_2; } x8; struct { unsigned int x_9_1_1 : 1; unsigned int x_9_1_2 : 1; unsigned int x_9_1_3 : 1; unsigned int x_9_1_4 : 1; unsigned int x_9_1_5 : 1; unsigned int x_9_1_6 : 1; unsigned int x_9_1_7 : 1; unsigned int x_9_1_8 : 1; unsigned int x_9_1_9 : 24; } x9; } * _runs;
    struct { int x1; struct { unsigned short x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; unsigned int x_2_1_3; int x_2_1_4; int x_2_1_5; } x2[0]; } * _stack;
    NSString * _textString;
    long  _totalAbsorbedCount;
    NSATSTypesetter * _typesetter;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (const struct { id x1; int x2; int x3; float x4; float x5; float x6; float x7; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_8_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_8_1_2; } x8; struct { unsigned int x_9_1_1 : 1; unsigned int x_9_1_2 : 1; unsigned int x_9_1_3 : 1; unsigned int x_9_1_4 : 1; unsigned int x_9_1_5 : 1; unsigned int x_9_1_6 : 1; unsigned int x_9_1_7 : 1; unsigned int x_9_1_8 : 1; unsigned int x_9_1_9 : 24; } x9; }*)_attributeRunForCharacterAtIndex:(long)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_collectElasticRangeSurroundingCharacterAtIndex:(long)arg1 minimumCharacterIndex:(long)arg2;
- (struct __CTRun { }*)_createEllipsisRunWithStringRange:(struct { int x1; int x2; })arg1 attributes:(struct __CFDictionary { }*)arg2;
- (void)_flushCachedObjects;
- (void)_invalidate;
- (BOOL)_isDeallocating;
- (bool)_resolvePositionalStakeGlyphsForLineFragment:(struct __CTLine { }*)arg1 lineFragmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 minPosition:(float)arg3 maxPosition:(float)arg4 maxLineFragmentWidth:(float)arg5 breakHint:(int*)arg6;
- (BOOL)_tryRetain;
- (float)_widthForStringRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)childGlyphStorageWithCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct __CTTypesetter { }*)createCTTypesetter;
- (struct __CTGlyphStorage { }*)createCopy:(struct { int x1; int x2; })arg1;
- (void)dealloc;
- (void)disposeGlyphStack;
- (void)finalize;
- (void)getCustomAdvance:(struct CGSize { float x1; float x2; }*)arg1 forIndex:(long)arg2;
- (void)initGlyphStack:(long)arg1;
- (id)initWithTypesetter:(id)arg1;
- (void)insertGlyphs:(struct { int x1; int x2; })arg1;
- (void)moveGlyphsTo:(long)arg1 from:(struct { int x1; int x2; })arg2;
- (void)popGlyph:(long)arg1;
- (void)pushGlyph:(long)arg1;
- (oneway void)release;
- (void)setAbsorbedCount:(long)arg1 forIndex:(long)arg2;
- (void)setAdvance:(struct CGSize { float x1; float x2; })arg1 forIndex:(long)arg2;
- (void)setGlyphID:(unsigned short)arg1 forIndex:(long)arg2;
- (void)setGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 characterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setProps:(unsigned int)arg1 forIndex:(long)arg2;
- (void)setStringIndex:(long)arg1 forIndex:(long)arg2;
- (void)swapGlyph:(long)arg1 withIndex:(long)arg2;
- (id)typesetter;

@end
