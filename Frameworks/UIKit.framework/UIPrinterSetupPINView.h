/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrinterSetupPINView : UIControl <UITextFieldDelegate> {
    UILabel * _enterLabel;
    int  _failedAttemptCount;
    UIImageView * _failedBackground;
    UILabel * _failedLabel;
    UIPasscodeField * _passcodeField;
    UITextField * _textEntryField;
    UILabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *enterLabel;
@property (nonatomic) int failedAttemptCount;
@property (nonatomic, retain) UIImageView *failedBackground;
@property (nonatomic, retain) UILabel *failedLabel;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIPasscodeField *passcodeField;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITextField *textEntryField;
@property (nonatomic, retain) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)PIN;
- (id)__scalarStatisticsForUserTouchUpInsideEvent;
- (void)dealloc;
- (id)enterLabel;
- (int)failedAttemptCount;
- (id)failedBackground;
- (id)failedLabel;
- (id)initWithPrinterName:(id)arg1;
- (void)layoutSubviews;
- (id)passcodeField;
- (void)setEnterLabel:(id)arg1;
- (void)setFailedAttemptCount:(int)arg1;
- (void)setFailedBackground:(id)arg1;
- (void)setFailedLabel:(id)arg1;
- (void)setPasscodeField:(id)arg1;
- (void)setTextEntryField:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)showSuccess:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)startPINInput;
- (void)stopPINInput;
- (void)textDidChange:(id)arg1;
- (id)textEntryField;
- (id)titleLabel;

@end
