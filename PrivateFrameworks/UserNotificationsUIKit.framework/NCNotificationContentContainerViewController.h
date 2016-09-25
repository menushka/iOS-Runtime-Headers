/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationContentContainerViewController : UIViewController <NCNotificationCustomContent, NCNotificationCustomContentDelegate, NCNotificationTextInputViewDelegate> {
    UIViewController<NCNotificationCustomContent> * _contentViewController;
    <NCNotificationCustomContentDelegate> * _delegate;
    NCNotificationTextInputView * _inputAccessoryView;
    NCNotificationRequest * _notificationRequest;
}

@property (nonatomic, readonly) NSString *contentExtensionIdentifier;
@property (nonatomic, retain) UIViewController<NCNotificationCustomContent> *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationCustomContentDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NCNotificationTextInputView *inputAccessoryView;
@property (nonatomic, readonly) NCNotificationRequest *notificationRequest;
@property (nonatomic) NCNotificationAction *presentationSourceAction;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_loadContentViewControllerForNotificationRequest:(id)arg1;
- (void)_removeInputAccessoryView:(id)arg1;
- (void)_setupContentViewController:(id)arg1;
- (void)_setupQuickReplyForNotificationAction:(id)arg1;
- (void)_setupQuickReplyForNotificationRequest:(id)arg1;
- (BOOL)_shouldShowTextInputOnAppearance;
- (id)_textInputActionInNotification:(id)arg1;
- (BOOL)allowManualDismiss;
- (BOOL)canBecomeFirstResponder;
- (id)contentExtensionIdentifier;
- (id)contentViewController;
- (void)customContent:(id)arg1 didLoadAudioAccessoryView:(id)arg2;
- (void)customContent:(id)arg1 forwardAction:(id)arg2 forNotification:(id)arg3 withUserInfo:(id)arg4;
- (void)customContent:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotification:(id)arg3 withUserInfo:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)customContentDidLoadExtension:(id)arg1;
- (unsigned int)customContentLocation;
- (void)customContentRequestsDismiss:(id)arg1;
- (BOOL)defaultContentHidden;
- (id)delegate;
- (void)didReceiveNotificationRequest:(id)arg1;
- (id)initWithNotificationRequest:(id)arg1;
- (id)inputAccessoryView;
- (void)loadAudioAccessoryView;
- (void)loadExtension;
- (id)notificationRequest;
- (void)notificationTextInputView:(id)arg1 didConfirmText:(id)arg2 forAction:(id)arg3;
- (BOOL)performAction:(id)arg1 forNotification:(id)arg2;
- (BOOL)performAction:(id)arg1 forNotification:(id)arg2 withUserInfo:(id)arg3;
- (void)playAudioMessage;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setContentViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInputAccessoryView:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { float x1; float x2; })arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
