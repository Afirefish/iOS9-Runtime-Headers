/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKRecurrenceTypeEditItemViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate> {
    EKCalendarItem *_calendarItem;
    NSIndexPath *_checkedItem;
    EKUICustomRecurrenceViewController *_customRecurrenceViewController;
    <EKRecurrenceTypeEditItemViewControllerDelegate> *_delegate;
    EKRecurrenceRule *_recurrenceRule;
    int _repeatType;
    NSDate *_suggestedStartDate;
    NSString *_summaryString;
    UITableView *_table;
}

@property (retain) EKCalendarItem *calendarItem;
@property (retain) EKUICustomRecurrenceViewController *customRecurrenceViewController;
@property (readonly, copy) NSString *debugDescription;
@property <EKRecurrenceTypeEditItemViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) EKRecurrenceRule *recurrenceRule;
@property (nonatomic) int repeatType;
@property (nonatomic, retain) NSDate *suggestedStartDate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_checkItemAtIndexPath:(id)arg1;
- (id)_recurrenceCellForIndexPath:(id)arg1;
- (id)calendarItem;
- (id)customRecurrenceViewController;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 styleProvider:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 styleProvider:(id)arg2 calendarItem:(id)arg3;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)recurrenceRule;
- (int)repeatType;
- (void)setCalendarItem:(id)arg1;
- (void)setCustomRecurrenceViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRecurrenceRule:(id)arg1;
- (void)setRecurrenceRuleFromRepeatType:(int)arg1;
- (void)setRepeatType:(int)arg1;
- (void)setSuggestedStartDate:(id)arg1;
- (id)suggestedStartDate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (void)viewDidLoad;

@end