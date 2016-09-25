/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKMultipleSelectPicker : UIPickerView <UIPickerViewDataSource, UIPickerViewDelegate, WKFormControl> {
    bool  _allowsMultipleSelection;
    float  _fontSize;
    float  _layoutWidth;
    float  _maximumTextWidth;
    unsigned int  _singleSelectionIndex;
    int  _textAlignment;
    WKContentView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)controlView;
- (void)dealloc;
- (int)findItemIndexAt:(int)arg1;
- (id)initWithView:(id)arg1;
- (void)layoutSubviews;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (void)pickerView:(id)arg1 row:(int)arg2 column:(int)arg3 checked:(BOOL)arg4;
- (id)pickerView:(id)arg1 viewForRow:(int)arg2 forComponent:(int)arg3 reusingView:(id)arg4;

@end
