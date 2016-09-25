/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKDatePicker : UIView {
    NSDate * _date;
    <PKDatePickerDelegate> * _delegate;
    struct UIView { Class x1; } * _internalPicker;
    BOOL  _representsCardExpiration;
    BOOL  _showsDay;
    BOOL  _showsMonth;
    BOOL  _showsYear;
    BOOL  _usesDarkAppearance;
}

@property (nonatomic, retain) NSDate *date;
@property (nonatomic) <PKDatePickerDelegate> *delegate;
@property (nonatomic, readonly) BOOL representsCardExpiration;
@property (nonatomic, readonly) BOOL showsDay;
@property (nonatomic, readonly) BOOL showsMonth;
@property (nonatomic, readonly) BOOL showsYear;
@property (nonatomic) BOOL usesDarkAppearance;

+ (BOOL)_preventsAppearanceProxyCustomization;

- (void).cxx_destruct;
- (Class)_classForDay:(BOOL)arg1 month:(BOOL)arg2 year:(BOOL)arg3 representingCardExpiration:(BOOL)arg4;
- (void)_dateValueChanged:(struct UIView { Class x1; }*)arg1;
- (void)_forceReloadInternalPicker;
- (id)date;
- (void)dealloc;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
- (void)reconfigureToShowDay:(BOOL)arg1 month:(BOOL)arg2 year:(BOOL)arg3 representingCardExpiration:(BOOL)arg4;
- (BOOL)representsCardExpiration;
- (void)setBackgroundColor:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUsesDarkAppearance:(BOOL)arg1;
- (BOOL)showsDay;
- (BOOL)showsMonth;
- (BOOL)showsYear;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)usesDarkAppearance;

@end
