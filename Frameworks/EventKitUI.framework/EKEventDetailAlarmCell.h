/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UILabel;



@interface EKEventDetailAlarmCell : EKEventDetailCell <EKEventEditItemViewControllerDelegate>
{
    UILabel *_alertTitleView;
    UILabel *_alertView;
    UILabel *_alert2View;
    NSUInteger _visibleItems;
}


- (id)_alertView;
- (BOOL)update;
- (BOOL)isEditable;
- (void)dealloc;
- (BOOL)hasCustomLayout;
- (void)editItemViewController:(id)arg1 didCompleteWithAction:(NSInteger)arg2;
- (BOOL)eventEditItemViewControllerCommit:(id)arg1;
- (id)viewControllerForCell;
- (void)_alarmsChanged;
- (void)setAlarms:(id)arg1;
- (id)_alert2View;
- (id)_alertTitleView;
- (void)layoutForWidth:(float)arg1 position:(NSInteger)arg2;

@end