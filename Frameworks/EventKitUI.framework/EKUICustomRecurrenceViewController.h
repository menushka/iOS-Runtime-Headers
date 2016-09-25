/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUICustomRecurrenceViewController : UIViewController <EKRecurrenceChooserControllerDelegate, UIPickerViewDataSource, UIPickerViewDelegate, UITableViewDataSource, UITableViewDelegate> {
    int  _cachedFrequency;
    int  _cachedInterval;
    EKRecurrenceRule * _cachedRecurrenceRule;
    id /* block */  _completionBlock;
    EKRecurrenceChooserController * _currentChooser;
    UIPickerView * _frequencyPickerView;
    UITableViewCell * _frequencySummaryCell;
    EKUICustomRecurrenceIntervalViewController * _intervalPickerViewController;
    UITableViewCell * _intervalSummaryCell;
    EKRecurrenceMonthlyChooserController * _monthlyChooser;
    BOOL  _prohibitsYearlyRecurrenceInterval;
    NSString * _recurrenceSummaryString;
    BOOL  _showingFrequencyPicker;
    BOOL  _showingIntervalPicker;
    NSDate * _startDate;
    UITableView * _tableView;
    NSTimeZone * _timeZone;
    BOOL  _useClearBackground;
    EKRecurrenceWeekdayChooserController * _weeklyChooser;
    UISwitch * _yearOrdinalSwitch;
    EKRecurrenceMonthChooserController * _yearlyChooser;
    EKRecurrenceOrdinalChooserController * _yearlyOrdinalChooser;
}

@property (copy) id /* block */ completionBlock;
@property EKRecurrenceChooserController *currentChooser;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) UIPickerView *frequencyPickerView;
@property (readonly) unsigned int hash;
@property (retain) EKUICustomRecurrenceIntervalViewController *intervalPickerViewController;
@property (retain) EKRecurrenceMonthlyChooserController *monthlyChooser;
@property (nonatomic) BOOL prohibitsMultipleDaysInMonthlyRecurrence;
@property (nonatomic) BOOL prohibitsMultipleMonthsInYearlyRecurrence;
@property BOOL prohibitsYearlyRecurrenceInterval;
@property (copy) NSString *recurrenceSummaryString;
@property (retain) NSDate *startDate;
@property (readonly) Class superclass;
@property (retain) UITableView *tableView;
@property (retain) NSTimeZone *timeZone;
@property (retain) EKRecurrenceWeekdayChooserController *weeklyChooser;
@property (retain) UISwitch *yearOrdinalSwitch;
@property (retain) EKRecurrenceMonthChooserController *yearlyChooser;
@property (retain) EKRecurrenceOrdinalChooserController *yearlyOrdinalChooser;

+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (BOOL)isRecurrenceRuleOrdinal:(id)arg1;

- (void).cxx_destruct;
- (id)_chooserForFrequency:(int)arg1;
- (void)_collapseAllPickers;
- (void)_createChoosersAndControls;
- (void)_frequencyPickerViewUpdated;
- (int)_numberOfRowsForSection:(int)arg1;
- (void)_refreshCacheAndPickers;
- (void)_setShowingFrequencyPicker:(BOOL)arg1;
- (void)_setShowingIntervalPicker:(BOOL)arg1;
- (id)_stringForFrequency:(int)arg1;
- (id)_stringForFrequency:(int)arg1 interval:(int)arg2;
- (int)_tagForIndexPath:(id)arg1;
- (void)_toggleInlineSpinnerForTag:(int)arg1;
- (void)_updateCustomPickerView;
- (void)_updateFrequencyRows;
- (void)_updateIntervalPicker;
- (void)_updateRecurrenceRule;
- (void)_updateSummaryLabel;
- (void)_updateTableSectionsFromFrequency:(int)arg1 toFrequency:(int)arg2;
- (void)_yearOrdinalSwitchChanged:(id)arg1;
- (struct CGSize { float x1; float x2; })calculatePreferredContentSize;
- (id /* block */)completionBlock;
- (id)currentChooser;
- (id)frequencyPickerView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStartDate:(id)arg1 timeZone:(id)arg2 clearBackground:(BOOL)arg3;
- (id)intervalPickerViewController;
- (void)loadView;
- (id)monthlyChooser;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (struct CGSize { float x1; float x2; })preferredContentSize;
- (BOOL)prohibitsMultipleDaysInMonthlyRecurrence;
- (BOOL)prohibitsMultipleMonthsInYearlyRecurrence;
- (BOOL)prohibitsYearlyRecurrenceInterval;
- (void)recurrenceChooser:(id)arg1 wantsRowReload:(int)arg2;
- (void)recurrenceChooserUpdated:(id)arg1;
- (void)recurrenceChooserWantsReload:(id)arg1;
- (id)recurrenceRule;
- (id)recurrenceSummaryString;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setCurrentChooser:(id)arg1;
- (void)setFrequencyPickerView:(id)arg1;
- (void)setIntervalPickerViewController:(id)arg1;
- (void)setMonthlyChooser:(id)arg1;
- (void)setProhibitsMultipleDaysInMonthlyRecurrence:(BOOL)arg1;
- (void)setProhibitsMultipleMonthsInYearlyRecurrence:(BOOL)arg1;
- (void)setProhibitsYearlyRecurrenceInterval:(BOOL)arg1;
- (void)setRecurrenceRule:(id)arg1;
- (void)setRecurrenceRule:(id)arg1 shouldUpdatePickers:(BOOL)arg2;
- (void)setRecurrenceSummaryString:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setWeeklyChooser:(id)arg1;
- (void)setYearOrdinalSwitch:(id)arg1;
- (void)setYearlyChooser:(id)arg1;
- (void)setYearlyOrdinalChooser:(id)arg1;
- (id)startDate;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)timeZone;
- (void)viewWillDisappear:(BOOL)arg1;
- (id)weeklyChooser;
- (id)yearOrdinalSwitch;
- (id)yearlyChooser;
- (id)yearlyOrdinalChooser;

@end
