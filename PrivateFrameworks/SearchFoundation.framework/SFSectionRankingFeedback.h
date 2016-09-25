/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFSectionRankingFeedback : SFFeedback <NSCopying> {
    unsigned int  _localSectionPosition;
    float  _personalizationScore;
    NSArray * _results;
    SFResultSection * _section;
}

@property (nonatomic) unsigned int localSectionPosition;
@property (nonatomic) float personalizationScore;
@property (nonatomic, copy) NSArray *results;
@property (nonatomic, copy) SFResultSection *section;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResults:(id)arg1 section:(id)arg2 localSectionPosition:(unsigned int)arg3 personalizationScore:(float)arg4;
- (unsigned int)localSectionPosition;
- (float)personalizationScore;
- (id)results;
- (id)section;
- (void)setLocalSectionPosition:(unsigned int)arg1;
- (void)setPersonalizationScore:(float)arg1;
- (void)setResults:(id)arg1;
- (void)setSection:(id)arg1;

@end
