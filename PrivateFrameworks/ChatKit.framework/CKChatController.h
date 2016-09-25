/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKChatController : CKCoreChatController <AFContextProvider, CKActionMenuGestureRecognizerButtonDelegate, CKBrowserDragControllerTranscriptDelegate, CKChatInputControllerDelegate, CKDetailsControllerDelegate, CKEffectPickerViewControllerDelegate, CKFullScreenBalloonViewControllerDelegate, CKMessageEntryViewDelegate, CKNavbarCanvasViewControllerDelegate, CKPhotoPickerControllerDelegate, CKReaderViewControllerDelegate, CKSendAnimationBalloonProvider, CKSendAnimationManagerDelegate, CKThrowAnimationManagerDelegate, CKTrimControllerDelegate, CKUnexpectedlyLoggedOutNotificationViewDelegate, CKVideoMessageRecordingViewControllerDelegate, CNContactViewControllerDelegate, EKEventEditViewDelegate, PHPhotoLibraryChangeObserver, PKAddPassesViewControllerDelegate, QLPreviewControllerDelegate, SGUIBannerViewDelegate, UIGestureRecognizerDelegate, UIInteractionProgressObserver, UIPopoverPresentationControllerDelegate, UIPreviewInteractionDelegate, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private, UIViewControllerTransitioningDelegate> {
    UIToolbar * _actionsToolbar;
    CKAudioTrimViewController * _audioTrimController;
    IMScheduledUpdater * _autorotationUpdater;
    SGUIBannerView * _bannerView;
    CKComposition * _compositionBeingTrimmed;
    BOOL  _effectPickerIsPresented;
    CKEffectPickerViewController * _effectPickerViewController;
    UIWindow * _effectPickerWindow;
    CKQLDetailsPreviewController * _entryPreviewController;
    CKMessageEntryView * _entryView;
    BOOL  _entryViewWasActiveBeforePresentingDataDetector;
    BOOL  _entryViewWasActiveOnPreview;
    IMPluginPayload * _extensionPayloadBeingSent;
    UIImagePickerController * _imagePickerController;
    CKComposition * _initialComposition;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _initialContentInset;
    struct CGPoint { 
        float x; 
        float y; 
    }  _initialContentOffset;
    CKChatInputController * _inputController;
    BOOL  _isAnimatingMessageSend;
    BOOL  _isShowingAcknowledgmentPicker;
    BOOL  _isShowingPreview;
    int  _lastKnownDeviceOrientation;
    CKNavbarCanvasViewController * _navbarCanvasViewController;
    CKPhotoPickerController * _photoPickerController;
    CKQLPreviewController * _previewController;
    CKInvisibleInkEffectController * _previewInvisibleInkEffectController;
    UIView * _previewRevealView;
    UIView * _previewSourceView;
    BOOL  _primeTranscriptWithInitialScrollGeometries;
    CKRaiseGesture * _raiseGesture;
    NSObject<OS_dispatch_group> * _revealAnimationGroup;
    id /* block */  _scrollBlock;
    BOOL  _scrollDownIsValid;
    BOOL  _shouldBecomeFirstResponderWhenDismissingModalBrowser;
    BOOL  _showingVideoMessageRecordingView;
    struct CGPoint { 
        float x; 
        float y; 
    }  _startingScrollOffset;
    float  _stickerTranscriptScrollDelta;
    CADisplayLink * _stickerTranscriptScrollDisplayLink;
    int  _targetFirstResponder;
    CKThrowAnimationManager * _throwAnimationManager;
    CKScheduledUpdater * _transcriptInlineNotificationUpdater;
    BOOL  _transitioningSize;
    CKScheduledUpdater * _typingUpdater;
    CKUnexpectedlyLoggedOutNotificationView * _unexpectedlyLoggedOutNotificationView;
    CKVideoMessageRecordingViewController * _videoMessageRecordingViewController;
    CKVideoTrimController * _videoTrimController;
}

@property (nonatomic, retain) UIToolbar *actionsToolbar;
@property (nonatomic, retain) CKAudioTrimViewController *audioTrimController;
@property (nonatomic, retain) IMScheduledUpdater *autorotationUpdater;
@property (nonatomic, retain) SGUIBannerView *bannerView;
@property (nonatomic, retain) CKComposition *composition;
@property (nonatomic, retain) CKComposition *compositionBeingTrimmed;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKChatControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL effectPickerIsPresented;
@property (nonatomic, retain) CKEffectPickerViewController *effectPickerViewController;
@property (nonatomic, retain) UIWindow *effectPickerWindow;
@property (nonatomic, retain) CKQLDetailsPreviewController *entryPreviewController;
@property (nonatomic, retain) CKMessageEntryView *entryView;
@property (nonatomic) BOOL entryViewWasActiveBeforePresentingDataDetector;
@property (nonatomic) BOOL entryViewWasActiveOnPreview;
@property (nonatomic, retain) IMPluginPayload *extensionPayloadBeingSent;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIImagePickerController *imagePickerController;
@property (nonatomic, retain) CKComposition *initialComposition;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } initialContentInset;
@property (nonatomic) struct CGPoint { float x1; float x2; } initialContentOffset;
@property (nonatomic, retain) CKChatInputController *inputController;
@property (nonatomic) BOOL isAnimatingMessageSend;
@property (nonatomic) BOOL isShowingAcknowledgmentPicker;
@property (nonatomic) BOOL isShowingPreview;
@property (nonatomic) int lastKnownDeviceOrientation;
@property (nonatomic, retain) CKNavbarCanvasViewController *navbarCanvasViewController;
@property (nonatomic, retain) CKPhotoPickerController *photoPickerController;
@property (nonatomic, retain) CKQLPreviewController *previewController;
@property (nonatomic, retain) CKInvisibleInkEffectController *previewInvisibleInkEffectController;
@property (nonatomic, retain) UIView *previewRevealView;
@property (nonatomic) UIView *previewSourceView;
@property (nonatomic) BOOL primeTranscriptWithInitialScrollGeometries;
@property (nonatomic, retain) CKRaiseGesture *raiseGesture;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *revealAnimationGroup;
@property (nonatomic, copy) id /* block */ scrollBlock;
@property (nonatomic) BOOL scrollDownIsValid;
@property (getter=isShowingVideoMessageRecordingView, nonatomic) BOOL showingVideoMessageRecordingView;
@property (nonatomic) float stickerTranscriptScrollDelta;
@property (nonatomic, retain) CADisplayLink *stickerTranscriptScrollDisplayLink;
@property (readonly) Class superclass;
@property (nonatomic) int targetFirstResponder;
@property (nonatomic, retain) CKThrowAnimationManager *throwAnimationManager;
@property (nonatomic, retain) CKScheduledUpdater *transcriptInlineNotificationUpdater;
@property (getter=isTransitioningSize, nonatomic) BOOL transitioningSize;
@property (nonatomic, retain) CKScheduledUpdater *typingUpdater;
@property (nonatomic, retain) CKUnexpectedlyLoggedOutNotificationView *unexpectedlyLoggedOutNotificationView;
@property (nonatomic, retain) CKVideoMessageRecordingViewController *videoMessageRecordingViewController;
@property (nonatomic, retain) CKVideoTrimController *videoTrimController;

- (void).cxx_destruct;
- (id)_actionsToolbar;
- (void)_addSuggestedContactViewControllerDidCancel:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_askToTurnOnReadReceiptsIfNeeded;
- (void)_askToTurnOnSMSRelayIfNeeded;
- (void)_autorotationUpdaterFired;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_avoidanceInsets;
- (void)_backbuttonPressed;
- (BOOL)_canReloadEntryView;
- (BOOL)_canShowBackButtonView;
- (BOOL)_chatShowsUnexpectedlyLoggedOutNotification;
- (void)_confirmReadReceiptSettings;
- (void)_conversationJoinStateDidChange:(id)arg1;
- (void)_conversationParticipantsChanged:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_convertedNavigationBarFrameInSendAnimationContainerView:(id)arg1;
- (void)_dataDetectorsDidDismissNotification:(id)arg1;
- (void)_dataDetectorsWillPresentNotification:(id)arg1;
- (void)_deleteSelectedMessages:(id)arg1;
- (void)_detailsButtonPressed;
- (void)_didSendCompositionInConversation:(id)arg1;
- (BOOL)_displayMediaObjectFullscreen:(id)arg1;
- (void)_displayNameUpdatedNotification:(id)arg1;
- (BOOL)_displayPreviewItemForMediaObject:(id)arg1;
- (void)_editCancelButtonPressed;
- (float)_entryViewTopInsetPadding;
- (void)_finishSendAnimation;
- (void)_forwardSelectedMessages:(id)arg1;
- (id)_fullScreenBalloonViewControllerWithChatItem:(id)arg1 showActionMenu:(BOOL)arg2;
- (id)_fullscreenEffectsManager;
- (void)_handleChatItemDidChange:(id)arg1;
- (void)_handleExpireCache:(id)arg1;
- (void)_handleIsUnexpectedlyLoggedOutChanged:(id)arg1;
- (void)_initializeEffectPicker;
- (void)_initializeNavigationBarCanvasViewIfNecessary;
- (id)_interfaceActionsForChatItem:(id)arg1;
- (void)_invalidateChatItemLayoutIfNecessary;
- (void)_kickPhotoKit;
- (void)_markAsReadIfNecessary;
- (float)_maxEntryViewHeight;
- (BOOL)_mediaObjectNeedsTrimming:(id)arg1;
- (id)_menuTitleForChatItem:(id)arg1;
- (id)_navigationControllerToPop;
- (void)_performResume;
- (void)_presentDetailsViewController;
- (void)_presentEffectPicker;
- (void)_raiseToListenSettingChanged:(id)arg1;
- (void)_resizeNavigationBarIfNecessary;
- (void)_saveDraftState;
- (void)_setConversationDeferredSetup;
- (void)_setEntryViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (void)_setTitle:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_shouldHideNavigationBarForSendAnimationContext:(id)arg1;
- (BOOL)_shouldShowAcknowledgmentPickerForBalloon;
- (BOOL)_shouldShowReadRecieptAlert;
- (void)_showMapViewerForMediaObject:(id)arg1;
- (void)_showPassbookCardViewForMediaObject:(id)arg1;
- (void)_showPhotoPickerController;
- (void)_showPhotoPickerWithSourceType:(int)arg1;
- (void)_showReaderForAggregateChatItem:(id)arg1;
- (void)_showVCalViewerForMediaObject:(id)arg1;
- (void)_showVCardViewerForMediaObject:(id)arg1;
- (void)_sizeAndPositionBannerView:(id)arg1 animated:(BOOL)arg2;
- (void)_sizeEffectPickerWindow;
- (void)_stickerTranscriptScrollDisplayLinkFired;
- (id)_suggestionsNotificationNameForChat:(id)arg1;
- (id)_supportedMediaTypesForPhotoPicker;
- (void)_textInputModeDidChange:(id)arg1;
- (void)_transferFinishedNotification:(id)arg1;
- (void)_transferRestoredNotification:(id)arg1;
- (void)_updateActionsToolbarItems;
- (void)_updateEntryViewFrameIfNeeded:(BOOL)arg1;
- (void)_updateInputViewFrameIfNecessary;
- (void)_updateNavigationButtons;
- (void)_updateTranscriptInlineNotification;
- (void)_updateTranscriptOffsetForBannerView;
- (void)_willSendComposition:(id)arg1 inConversation:(id)arg2;
- (void)actionMenuGestureRecognizerButtonDidTouchDownButton:(id)arg1;
- (void)actionMenuGestureRecognizerButtonDidTouchUpInsideButton:(id)arg1;
- (void)actionMenuGestureRecognizerButtonGestureDidBegin:(id)arg1;
- (void)actionMenuGestureRecognizerButtonGestureDidEnd:(id)arg1;
- (BOOL)actionMenuGestureRecognizerButtonIsShowingHint:(id)arg1;
- (BOOL)actionMenuGestureRecognizerButtonShouldRecognizeGesture:(id)arg1;
- (BOOL)actionMenuGestureRecognizerButtonShouldShowHint:(id)arg1;
- (void)actionMenuGestureRecognizerButtonShowHint:(id)arg1;
- (id)actionsToolbar;
- (void)addMedia:(id)arg1;
- (void)addPassesViewControllerDidFinish:(id)arg1;
- (BOOL)allowContextProvider:(id)arg1;
- (BOOL)allowEffectPickerToBePresented;
- (void)animateRevealWithInteractionProgress:(id)arg1 forPreviewingAtLocation:(struct CGPoint { float x1; float x2; })arg2 inSourceView:(id)arg3 containerView:(id)arg4;
- (id)audioTrimController;
- (id)autorotationUpdater;
- (float)balloonMaxWidth;
- (id)bannerView;
- (BOOL)becomeFirstResponder;
- (void)beginHoldingAutorotationForKey:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (id)chatForSendAnimationManager:(id)arg1;
- (void)chatInputControllerDidDismissModalBrowserViewController:(id)arg1;
- (void)chatInputControllerDidPresentModalBrowserViewController:(id)arg1;
- (void)chatInputControllerDidShowHandwriting:(id)arg1;
- (void)chatInputControllerDidTransitionCollapsed:(id)arg1;
- (void)chatInputControllerDidTransitionExpanded:(id)arg1;
- (void)chatInputControllerRequestInputViewFocusFromFullscreen:(id)arg1;
- (void)chatInputControllerWillDismissModalBrowserViewController:(id)arg1;
- (void)chatInputControllerWillHideHandwriting:(id)arg1;
- (void)chatInputControllerWillPresentModalBrowserViewController:(id)arg1;
- (void)chatInputControllerWillTransitionCollapsed:(id)arg1;
- (void)chatInputControllerWillTransitionExpanded:(id)arg1;
- (void)chatInputDidChangeSize;
- (void)chatInputDidSelectPhotoPicker;
- (void)chatInputDidUpdateInputViewShowingBrowser:(BOOL)arg1 entryFieldCollapsed:(BOOL)arg2 animated:(BOOL)arg3;
- (void)chatInputDidUpdateWithNewInputViewController:(id)arg1;
- (void)chatInputSentComposition:(id)arg1;
- (void)checkSuggestionsForBanner;
- (void)ckVideoMessageRecordingViewController:(id)arg1 mediaObjectCaptured:(id)arg2 error:(id)arg3;
- (void)ckVideoMessageRecordingViewControllerRecordingCanceled:(id)arg1;
- (void)cleanUpDarkEffectStyle;
- (void)clearCurrentMessageThread;
- (id)collectionViewControllerForImpactEffectManager:(id)arg1;
- (void)composeRecipientViewShouldResignFirstResponder;
- (id)composition;
- (id)compositionBeingTrimmed;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)dealloc;
- (void)detailsControllerDidDismiss:(id)arg1;
- (void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2;
- (void)didReceiveMemoryWarning;
- (void)dismissDetailsController:(id)arg1;
- (void)dismissKeyboard;
- (void)dismissPresentedViewController:(id)arg1;
- (void)dismissPresentedViewController:(id)arg1;
- (void)dismissVideoMessageRecordingViewController;
- (id)dragControllerTranscriptDelegate;
- (void)dragManager:(id)arg1 draggedItemWithTarget:(id)arg2;
- (int)dragManager:(id)arg1 dropAreaForDragTarget:(id)arg2;
- (void)dragManagerDidBeginDragging:(id)arg1;
- (void)dragManagerDidEndDragging:(id)arg1;
- (BOOL)effectPickerIsPresented;
- (id)effectPickerViewController;
- (void)effectPickerViewController:(id)arg1 effectWithIdentifierSelected:(id)arg2;
- (void)effectPickerViewControllerClose:(id)arg1;
- (id)effectPickerWindow;
- (void)endHoldingAutorotationForKey:(id)arg1;
- (id)entryPreviewController;
- (id)entryView;
- (BOOL)entryViewWasActiveBeforePresentingDataDetector;
- (BOOL)entryViewWasActiveOnPreview;
- (id)evaluateSendMetricsForComposition:(id)arg1;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (id)extensionPayloadBeingSent;
- (void)forciblyUnloadChatInputController;
- (void)fullScreenBalloonViewController:(id)arg1 deleteStickerWithTransferGUID:(id)arg2;
- (void)fullScreenBalloonViewController:(id)arg1 sendMessageAcknowledgment:(int)arg2 forChatItem:(id)arg3;
- (void)fullScreenBalloonViewController:(id)arg1 stickerPackTappedWithAdamID:(id)arg2;
- (void)fullScreenBalloonViewController:(id)arg1 verticallyScrollTranscriptByAmount:(float)arg2 animated:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)fullScreenBalloonViewController:(id)arg1 willAppearAnimated:(BOOL)arg2;
- (void)fullScreenBalloonViewController:(id)arg1 willDisappearWithSendAnimation:(BOOL)arg2;
- (void)fullScreenBalloonViewControllerDidDisappear:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)getContainerWidth:(float*)arg1 offset:(float*)arg2;
- (id)getCurrentContext;
- (float)gradientBottomPlaceholderHeight;
- (void)hideMediaPickerAnimated:(BOOL)arg1;
- (void)hideMediaPickerAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)imagePickerController;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithConversation:(id)arg1;
- (id)initialComposition;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })initialContentInset;
- (struct CGPoint { float x1; float x2; })initialContentOffset;
- (id)inputAccessoryView;
- (id)inputController;
- (id)inputViewController;
- (void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (id)invisibleInkEffectControllerForPreviewController:(id)arg1;
- (BOOL)isAnimatingMessageSend;
- (BOOL)isCollapsed;
- (BOOL)isSafeToMarkAsRead;
- (BOOL)isShowingAcknowledgmentPicker;
- (BOOL)isShowingPreview;
- (BOOL)isShowingVideoMessageRecordingView;
- (BOOL)isTransitioningSize;
- (int)lastKnownDeviceOrientation;
- (void)loadChatInputController;
- (void)loadView;
- (void)makeEntryViewActiveAfterSend;
- (void)messageEntryView:(id)arg1 didTapMediaObject:(id)arg2;
- (void)messageEntryView:(id)arg1 sendButtonLongPressEnded:(struct CGPoint { float x1; float x2; })arg2;
- (void)messageEntryView:(id)arg1 sendButtonLongPressMoved:(struct CGPoint { float x1; float x2; })arg2;
- (BOOL)messageEntryView:(id)arg1 shouldInsertMediaObjects:(id)arg2;
- (void)messageEntryViewDidBeginEditing:(id)arg1;
- (void)messageEntryViewDidChange:(id)arg1;
- (void)messageEntryViewDidEndEditing:(id)arg1;
- (float)messageEntryViewMaxHeight:(id)arg1;
- (struct CGSize { float x1; float x2; })messageEntryViewMaxShelfPluginViewSize:(id)arg1;
- (void)messageEntryViewRaiseGestureAutoSend:(id)arg1;
- (void)messageEntryViewRecordingDidChange:(id)arg1;
- (void)messageEntryViewSendButtonHit:(id)arg1;
- (void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1;
- (void)messageEntryViewSendButtonLongPressBegan:(id)arg1;
- (BOOL)messageEntryViewShouldBeginEditing:(id)arg1;
- (float)minimumBottomInset;
- (id)navbarCanvasViewController;
- (void)navbarCanvasViewController:(id)arg1 didTapView:(id)arg2;
- (void)navbarCanvasViewControllerWantsNavbarResize:(id)arg1;
- (id)nextMediaObjectToTrimInComposition:(id)arg1;
- (id)outgoingComposeViewForSendAnimation;
- (void)parentControllerDidBecomeActive;
- (void)performResumeDeferredSetup;
- (void)photoLibraryDidChange:(id)arg1;
- (id)photoPickerController;
- (void)photoPickerController:(id)arg1 requestsSendAssets:(id)arg2 sendImmediately:(BOOL)arg3;
- (void)photoPickerControllerRequestPresentCamera:(id)arg1;
- (void)photoPickerControllerRequestPresentPhotoLibrary:(id)arg1;
- (void)photoPickerControllerWillCancel:(id)arg1;
- (BOOL)pluginButtonsEnabled;
- (int)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (void)prepareForSuspend;
- (void)presentTrimControllerForMediaObject:(id)arg1;
- (void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(int)arg2 transitionCoordinator:(id)arg3;
- (id)presentedControllerDoneButtonItem;
- (id)previewActionsForPreviewController:(id)arg1;
- (id)previewController;
- (BOOL)previewController:(id)arg1 canShareItem:(id)arg2;
- (void)previewController:(id)arg1 didTransitionToState:(int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3;
- (BOOL)previewController:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3;
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3;
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2 uncroppedSourceFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3 realSize:(struct CGSize { float x1; float x2; }*)arg4;
- (void)previewController:(id)arg1 willTransitionToState:(int)arg2;
- (void)previewControllerDidDismiss:(id)arg1;
- (void)previewControllerWillDismiss:(id)arg1;
- (void)previewInteraction:(id)arg1 didUpdateCommitTransition:(float)arg2 ended:(BOOL)arg3;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(float)arg2 ended:(BOOL)arg3;
- (void)previewInteractionDidCancel:(id)arg1;
- (BOOL)previewInteractionShouldBegin:(id)arg1;
- (id)previewInvisibleInkEffectController;
- (id)previewItemsForMediaObject:(id)arg1 currentItemIndex:(int*)arg2 containsRestoring:(BOOL*)arg3;
- (id)previewRevealView;
- (id)previewSourceView;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { float x1; float x2; })arg2;
- (void)prewarmCamera:(id)arg1;
- (void)primeTranscriptWithInitialOffset:(struct CGPoint { float x1; float x2; })arg1 inset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2;
- (BOOL)primeTranscriptWithInitialScrollGeometries;
- (id)progressBar;
- (id)raiseGesture;
- (void)raiseGestureRecognized:(id)arg1;
- (void)readerViewControllerWillDismiss:(id)arg1;
- (void)registerNotifications;
- (void)registerNotificationsForConversation:(id)arg1;
- (void)reloadEntryViewIfNeeded;
- (void)removeSuggestionsBannerAnimated:(BOOL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)restoreContentOffsetChanges;
- (void)restoreEntryViewAfterPreview;
- (id)revealAnimationGroup;
- (id)rotatingFooterView;
- (id /* block */)scrollBlock;
- (BOOL)scrollDownIsValid;
- (void)scrollToMessage:(id)arg1 highlight:(BOOL)arg2;
- (id)selectedBalloonForTarget:(id)arg1;
- (void)sendAnimationManagerDidStopAnimation:(id)arg1 context:(id)arg2;
- (void)sendAnimationManagerWillStartAnimation:(id)arg1 context:(id)arg2;
- (void)sendComposition:(id)arg1;
- (void)sendCurrentLocationMessage:(id)arg1;
- (void)sendSticker:(id)arg1;
- (void)sendSticker:(id)arg1 withDragTarget:(id)arg2;
- (void)sendStickerWithMediaObject:(id)arg1 parentMessagePartChatItem:(id)arg2;
- (void)setActionsToolbar:(id)arg1;
- (void)setAudioTrimController:(id)arg1;
- (void)setAutorotationUpdater:(id)arg1;
- (void)setBannerView:(id)arg1;
- (void)setComposition:(id)arg1;
- (void)setCompositionBeingTrimmed:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setEffectPickerIsPresented:(BOOL)arg1;
- (void)setEffectPickerViewController:(id)arg1;
- (void)setEffectPickerWindow:(id)arg1;
- (void)setEntryPreviewController:(id)arg1;
- (void)setEntryView:(id)arg1;
- (void)setEntryViewWasActiveBeforePresentingDataDetector:(BOOL)arg1;
- (void)setEntryViewWasActiveOnPreview:(BOOL)arg1;
- (void)setExtensionPayloadBeingSent:(id)arg1;
- (void)setImagePickerController:(id)arg1;
- (void)setInitialComposition:(id)arg1;
- (void)setInitialContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setInitialContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setInputController:(id)arg1;
- (void)setIsAnimatingMessageSend:(BOOL)arg1;
- (void)setIsShowingAcknowledgmentPicker:(BOOL)arg1;
- (void)setIsShowingPreview:(BOOL)arg1;
- (void)setLastKnownDeviceOrientation:(int)arg1;
- (void)setLocalUserIsComposing:(BOOL)arg1 withPluginBundleID:(id)arg2 typingIndicatorData:(id)arg3;
- (void)setNavbarCanvasViewController:(id)arg1;
- (void)setPhotoPickerController:(id)arg1;
- (void)setPreviewController:(id)arg1;
- (void)setPreviewInvisibleInkEffectController:(id)arg1;
- (void)setPreviewRevealView:(id)arg1;
- (void)setPreviewSourceView:(id)arg1;
- (void)setPrimeTranscriptWithInitialScrollGeometries:(BOOL)arg1;
- (void)setRaiseGesture:(id)arg1;
- (void)setRevealAnimationGroup:(id)arg1;
- (void)setScrollBlock:(id /* block */)arg1;
- (void)setScrollDownIsValid:(BOOL)arg1;
- (void)setSendingMessage:(BOOL)arg1;
- (void)setShowingVideoMessageRecordingView:(BOOL)arg1;
- (void)setStickerTranscriptScrollDelta:(float)arg1;
- (void)setStickerTranscriptScrollDisplayLink:(id)arg1;
- (void)setTargetFirstResponder:(int)arg1;
- (void)setThrowAnimationManager:(id)arg1;
- (void)setTranscriptInlineNotificationUpdater:(id)arg1;
- (void)setTransitioningSize:(BOOL)arg1;
- (void)setTypingUpdater:(id)arg1;
- (void)setUnexpectedlyLoggedOutNotificationView:(id)arg1;
- (void)setUpStyleForDarkEffect;
- (void)setVideoMessageRecordingViewController:(id)arg1;
- (void)setVideoTrimController:(id)arg1;
- (void)setupScrollingForKeyboardInteraction;
- (void)setupStateForLaunchURL:(id)arg1;
- (BOOL)shouldAutorotate;
- (BOOL)shouldUseNavigationBarCanvasView;
- (void)showAlternateViewerForMediaObject:(id)arg1;
- (void)showFullScreenAcknowledgmentPickerForBalloonAtIndexPath:(id)arg1 showActionMenu:(BOOL)arg2;
- (void)showKeyboard;
- (void)showKeyboardForReply;
- (void)showMediaPicker:(id)arg1 animated:(BOOL)arg2;
- (void)showViewerForMediaObject:(id)arg1;
- (void)startTrimmingMediaObjectsInComposition:(id)arg1;
- (id)stickerInfoDictionaryWithLayoutIntent:(unsigned int)arg1 parentPreviewWidth:(float)arg2 xScalar:(float)arg3 yScalar:(float)arg4 scale:(float)arg5 rotation:(float)arg6;
- (float)stickerTranscriptScrollDelta;
- (id)stickerTranscriptScrollDisplayLink;
- (void)suggestionsBannerView:(id)arg1 didTapAddForContact:(id)arg2 wantsToPresentContactViewController:(id)arg3;
- (void)suggestionsBannerView:(id)arg1 didTapAddForEvent:(id)arg2 wantsToPresentEventViewController:(id)arg3;
- (void)suggestionsBannerView:(id)arg1 wantsToPushMixedSuggestionsViewController:(id)arg2;
- (void)suggestionsBannerViewDidDismiss:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (id)supportedMediaTypesForPhotoPicker:(id)arg1;
- (void)tapGestureRecognized:(id)arg1;
- (int)targetFirstResponder;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })throwAnimationKeyboardFrame:(id)arg1;
- (id)throwAnimationManager;
- (void)throwAnimationManager:(id)arg1 canNowSendMessages:(id)arg2;
- (float)throwAnimationManagerAccessoryViewHeight:(id)arg1;
- (id)throwAnimationManagerEntryView:(id)arg1;
- (void)throwAnimationManagerPrepareForThrowAnimation:(id)arg1 context:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })throwAnimationWindowFrame:(id)arg1;
- (id)throwBalloonsForSendAnimationContext:(id)arg1;
- (float)topInsetPadding;
- (void)traitCollectionDidChange:(id)arg1;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 tappedForChatItem:(id)arg3;
- (void)transcriptCollectionViewController:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didEndImpactEffectAnimationWithSendAnimationContext:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didTapAttributionButtonForChatItem:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didTapPluginStatusButtonForChatItem:(id)arg2;
- (BOOL)transcriptCollectionViewController:(id)arg1 shouldCleanupFullscreenEffectUI:(id)arg2;
- (BOOL)transcriptCollectionViewController:(id)arg1 shouldSetupFullscreenEffectUI:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 willBeginImpactEffectAnimationWithSendAnimationContext:(id)arg2;
- (void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1;
- (void)transcriptCollectionViewControllerDidInset:(id)arg1;
- (void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1;
- (BOOL)transcriptCollectionViewControllerShouldPlayAudio:(id)arg1;
- (id)transcriptInlineNotificationUpdater;
- (void)trimController:(id)arg1 didFinishTrimmingMediaObject:(id)arg2 withReplacementMediaObject:(id)arg3;
- (void)trimControllerDidCancel:(id)arg1;
- (id)typingUpdater;
- (id)unexpectedlyLoggedOutNotificationView;
- (void)unexpectedlyLoggedOutNotificationView:(id)arg1 didChangeRequestedHeight:(float)arg2;
- (void)updateQLPreviewControllerIfVisible;
- (void)updateRaiseGesture;
- (void)updateStyleForCurrentEffect;
- (void)updateTyping;
- (void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void*)arg3;
- (id)videoMessageRecordingViewController;
- (id)videoTrimController;
- (id)viewControllerForChatInputModalPresentation;
- (id)viewControllerForPresentingFromSuggestionsBannerView:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidAppearDeferredSetup;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (id)viewForDragAndChatInputDropTarget;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (BOOL)wantsOverKeyboardAnimationForSendAnimationContext:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint { float x1; float x2; })arg2 inSourceView:(id)arg3;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
