/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassPaymentSummaryView : UIView <PKPassPaymentSummaryCellDelegate, UITableViewDataSource, UITableViewDelegate> {
    BOOL  _deepLinkingEnabled;
    <PKPassPaymentSummaryViewDelegate> * _delegate;
    PKPaymentMessage * _message;
    NSString * _messageAppLaunchToken;
    NSNumberFormatter * _numberFormatter;
    PKPaymentPass * _pass;
    UITableView * _tableView;
    PKPaymentTransaction * _transaction;
    NSString * _transactionAppLaunchToken;
    float  _transactionCellHeight;
    PKStackedTextItemGroup * _transactionDisplayItem;
    PKStackedTextItemGroupView * _transactionHeaderView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPassPaymentSummaryViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) PKPaymentMessage *message;
@property (nonatomic, readonly) NSString *messageAppLaunchToken;
@property (nonatomic, readonly) PKPaymentPass *pass;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PKPaymentTransaction *transaction;
@property (nonatomic, readonly) NSString *transactionAppLaunchToken;

- (void).cxx_destruct;
- (id)_amountTextFromTransaction:(id)arg1;
- (void)_configureCell:(id)arg1 forMessage:(id)arg2;
- (void)_configureCell:(id)arg1 forTransaction:(id)arg2;
- (id)_imageFromTransaction:(id)arg1;
- (BOOL)_isSectionIndexOfMessage:(int)arg1;
- (BOOL)_isSectionIndexOfTransaction:(int)arg1;
- (id)_locationTextFromTransaction:(id)arg1;
- (id)_merchantTextFromTransaction:(id)arg1;
- (void)_performAction:(int)arg1 forSection:(int)arg2 animated:(BOOL)arg3;
- (id)_relativeDateTextFromTransaction:(id)arg1;
- (int)_sectionIndexOfMessage;
- (int)_sectionIndexOfTransaction;
- (BOOL)_showTransaction;
- (id)_statusTextFromTransaction:(id)arg1;
- (void)_updateTransactionRowAnimated:(BOOL)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithPaymentPass:(id)arg1;
- (void)layoutSubviews;
- (id)message;
- (id)messageAppLaunchToken;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)pass;
- (void)paymentSummaryCellDetailsButtonPressed:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMessage:(id)arg1 appLaunchToken:(id)arg2 animated:(BOOL)arg3;
- (void)setTransaction:(id)arg1 appLaunchToken:(id)arg2 animated:(BOOL)arg3;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)transaction;
- (id)transactionAppLaunchToken;

@end
