/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGQPEmotivePhraseDefinition : NSObject {
    BOOL  _anchoredAtWordBoundaries;
    BOOL  _matchReceived;
    BOOL  _matchSent;
    NSString * _pattern;
    unsigned short  _phraseId;
    NSString * _predictions;
    long long  _type;
    float  _weight;
}

@property (nonatomic, readonly) BOOL matchReceived;
@property (nonatomic, readonly) BOOL matchSent;
@property (nonatomic, readonly) long long type;

+ (id)phraseDefinitionFromRawPhrase:(id)arg1;
+ (void)seedRng:(unsigned long long)arg1;

- (void).cxx_destruct;
- (BOOL)existsInString:(id)arg1 wordBoundaries:(id)arg2;
- (id)init;
- (id)initWithPattern:(id)arg1 predictions:(id)arg2 type:(long long)arg3 matchSent:(BOOL)arg4 matchReceived:(BOOL)arg5 phraseId:(unsigned int)arg6 weight:(double)arg7 anchoredAtWordBoundaries:(BOOL)arg8;
- (BOOL)matchReceived;
- (BOOL)matchSent;
- (id)predictionWithScore:(double)arg1;
- (id)randomPrediction;
- (long long)type;

@end
