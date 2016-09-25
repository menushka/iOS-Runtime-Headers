/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPHomeSharingRentalErrorResolver : MPAVErrorResolver <SSRequestDelegate> {
    unsigned long long  _accountID;
    MPHomeSharingML3DataProvider * _dataProvider;
    NSError * _error;
    unsigned long long  _homeSharingID;
    unsigned long long  _itemID;
    unsigned long long  _rentalID;
    SSRentalCheckoutRequest * _request;
}

@property (nonatomic, retain) MPHomeSharingML3DataProvider *dataProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) unsigned long long itemID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_errorIsFairPlayError:(id)arg1;
- (id)dataProvider;
- (void)dealloc;
- (id)initWithItemID:(unsigned long long)arg1 homeSharingID:(unsigned long long)arg2 rentalID:(unsigned long long)arg3 accountID:(unsigned long long)arg4;
- (unsigned long long)itemID;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)resolveError:(id)arg1;
- (void)setDataProvider:(id)arg1;

@end
