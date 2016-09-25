/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedInsertionToken : NSObject {
    FCFDBFeed * _fromFeed;
    unsigned long long  _fromOrder;
    unsigned long long  _toOrder;
}

@property (nonatomic, retain) FCFDBFeed *fromFeed;
@property (nonatomic) unsigned long long fromOrder;
@property (nonatomic) unsigned long long toOrder;

- (void).cxx_destruct;
- (id)fromFeed;
- (unsigned long long)fromOrder;
- (void)setFromFeed:(id)arg1;
- (void)setFromOrder:(unsigned long long)arg1;
- (void)setToOrder:(unsigned long long)arg1;
- (unsigned long long)toOrder;

@end
