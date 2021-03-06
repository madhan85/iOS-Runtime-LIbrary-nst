/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventPrivacyLevelDetailItem : EKEventDetailItem {
    UITableViewCell *_cell;
    UISwitch *_control;
    BOOL _switchStateIsOn;
}

- (void).cxx_destruct;
- (void)_switchChanged:(id)arg1;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (void)reset;
- (void)setEvent:(id)arg1 store:(id)arg2;

@end
