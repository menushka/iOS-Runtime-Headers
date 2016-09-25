/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyPickerViewController : ABPickerViewController <ABCardPropertyPickerDelegate> {
    void * _addressBook;
    ABUIPerson * _person;
    NSArray * _policies;
    struct __CFArray { } * _properties;
}

@property (nonatomic) void*addressBook;
@property (nonatomic, retain) ABUIPerson *person;
@property (nonatomic, retain) NSArray *policies;
@property (nonatomic) struct __CFArray { }*properties;

- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; float x6; int x7; }*)arg1;
- (float)ab_heightToFitForViewInPopoverView;
- (void*)addressBook;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)person;
- (id)policies;
- (struct __CFArray { }*)properties;
- (id)propertyPicker;
- (void)propertyPicker:(id)arg1 selectedProperty:(int)arg2;
- (void)propertyPicker:(id)arg1 selectedProperty:(int)arg2 withDefaultValue:(id)arg3;
- (void)setAddressBook:(void*)arg1;
- (void)setPerson:(id)arg1;
- (void)setPolicies:(id)arg1;
- (void)setProperties:(struct __CFArray { }*)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
