// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatInputViewController
// Superclass: UIViewController
// Address: 0x112ae5de8

@interface SCChatInputViewController

// Property: coordinator; attributes: T@"SCChatInputItemDrawerCoordinator",&,N,V_coordinator
// Property: textView; attributes: T@"SCChatInputTextView",&,N,V_textView
// Property: inputBar; attributes: T@"SCChatInputBar",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCChatInputContextDelegate>",W,N,V_delegate
// Property: drawerHeight; attributes: Td,N
// Property: state; attributes: TQ,R,N
// Property: style; attributes: TQ,N,V_style
// Property: text; attributes: T@"NSString",&,N
// Property: attributedText; attributes: T@"NSAttributedString",&,N
// Property: scale; attributes: Td,N,V_scale
// Property: currentDrawer; attributes: T@"<SCChatInputDrawerRenderable>",R,N
// Property: drawerSessionId; attributes: T@"NSString",R,N
// Property: parentViewController; attributes: T@"UIViewController",R,N
// Property: persistentViewController; attributes: T@"UIViewController",W,N,V_persistentViewController
// Property: view; attributes: T@"UIView",R,N
// Property: inputTextViewContainer; attributes: T@"UIView",R,N
// Property: leadingStackView; attributes: T@"UIView",R,N
// Property: backgroundView; attributes: T@"SCLazy",R,N
// Property: accessoryContainerView; attributes: T@"UIView",R,N
// Property: cursorColor; attributes: T@"UIColor",&,N
// Property: demiBoldFont; attributes: T@"UIFont",R,N
// Property: selectedRange; attributes: T{_NSRange=QQ},N
// Property: inputViewTransparent; attributes: TB,N
// Property: placeholderText; attributes: T@"NSString",&,N
// Property: shortPlaceholderText; attributes: T@"NSString",&,N
// Property: logger; attributes: T@"<SCChatInputViewControllerLogging>",&,N,V_logger
// Property: ignoresSafeAreaLayoutGuides; attributes: TB,N
// Property: PPVNavigationLogger; attributes: T@"<SCNavigationLogging>",?,&,N

// -[SCChatInputViewController initWithPageName:enforceKeyWindowCheck:circumstanceEngine:messagingExperimentService:chatDisplayReadyLogger:displaySnapchatPlusBorder:nglStudySettings:featureSettingsService:activeConversationInformation:preferences:backgroundPerformer:messageActionHandler:]
// Type encoding: @104@0:8q16B24@28@36@44B52@56@64@72@80@88@96
// Implementation: 0x106581070

// -[SCChatInputViewController traitCollectionDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x10658155c

// -[SCChatInputViewController _registerNotifications]
// Type encoding: v16@0:8
// Implementation: 0x106581644

// -[SCChatInputViewController _createCoordinator]
// Type encoding: v16@0:8
// Implementation: 0x10658171c

// -[SCChatInputViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x1065818ac

// -[SCChatInputViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x1065818bc

// -[SCChatInputViewController viewDidLayoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x1065819b4

// -[SCChatInputViewController inputViewDidDisappear]
// Type encoding: v16@0:8
// Implementation: 0x106581abc

// -[SCChatInputViewController inputViewDidAppear]
// Type encoding: v16@0:8
// Implementation: 0x106581bec

// -[SCChatInputViewController pluginWantsToSendCurrentText]
// Type encoding: v16@0:8
// Implementation: 0x106581d1c

// -[SCChatInputViewController showInputBarHintWithText:]
// Type encoding: v24@0:8@16
// Implementation: 0x106581d80

// -[SCChatInputViewController hideInputBarHint]
// Type encoding: v16@0:8
// Implementation: 0x106581dd0

// -[SCChatInputViewController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x106581e00

// -[SCChatInputViewController persistentViewController]
// Type encoding: @16@0:8
// Implementation: 0x106581e10

// -[SCChatInputViewController topAccessoryContainerWithIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x106581e5c

// -[SCChatInputViewController drawerSessionId]
// Type encoding: @16@0:8
// Implementation: 0x106581e6c

// -[SCChatInputViewController chatInputView]
// Type encoding: @16@0:8
// Implementation: 0x106581eb0

// -[SCChatInputViewController inputBar]
// Type encoding: @16@0:8
// Implementation: 0x106581ee0

// -[SCChatInputViewController textView]
// Type encoding: @16@0:8
// Implementation: 0x106581f24

// -[SCChatInputViewController accessoryStackView]
// Type encoding: @16@0:8
// Implementation: 0x106581f68

// -[SCChatInputViewController accessoryContainerView]
// Type encoding: @16@0:8
// Implementation: 0x106581f78

// -[SCChatInputViewController backgroundView]
// Type encoding: @16@0:8
// Implementation: 0x106581f88

// -[SCChatInputViewController text]
// Type encoding: @16@0:8
// Implementation: 0x106581f98

// -[SCChatInputViewController replaceText:]
// Type encoding: v24@0:8@16
// Implementation: 0x106581ffc

// -[SCChatInputViewController setText:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065820b8

// -[SCChatInputViewController attributedText]
// Type encoding: @16@0:8
// Implementation: 0x106582128

// -[SCChatInputViewController setAttributedText:]
// Type encoding: v24@0:8@16
// Implementation: 0x10658218c

// -[SCChatInputViewController setScale:]
// Type encoding: v24@0:8d16
// Implementation: 0x1065821fc

// -[SCChatInputViewController state]
// Type encoding: Q16@0:8
// Implementation: 0x106582204

// -[SCChatInputViewController setDrawerHeight:]
// Type encoding: v24@0:8d16
// Implementation: 0x106582214

// -[SCChatInputViewController drawerHeight]
// Type encoding: d16@0:8
// Implementation: 0x106582254

// -[SCChatInputViewController setInputViewKeyboardLayoutActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x106582298

// -[SCChatInputViewController setStyle:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1065822a8

// -[SCChatInputViewController currentDrawer]
// Type encoding: @16@0:8
// Implementation: 0x10658231c

// -[SCChatInputViewController placeholderText]
// Type encoding: @16@0:8
// Implementation: 0x10658232c

// -[SCChatInputViewController setPlaceholderText:]
// Type encoding: v24@0:8@16
// Implementation: 0x106582390

// -[SCChatInputViewController shortPlaceholderText]
// Type encoding: @16@0:8
// Implementation: 0x106582400

// -[SCChatInputViewController setShortPlaceholderText:]
// Type encoding: v24@0:8@16
// Implementation: 0x106582464

// -[SCChatInputViewController setPlaceholderText:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1065824d4

// -[SCChatInputViewController setEditText:messageId:scale:mentions:]
// Type encoding: v48@0:8@16@24d32@40
// Implementation: 0x10658254c

// -[SCChatInputViewController ignoresSafeAreaLayoutGuides]
// Type encoding: B16@0:8
// Implementation: 0x1065826b8

// -[SCChatInputViewController setIgnoresSafeAreaLayoutGuides:]
// Type encoding: v20@0:8B16
// Implementation: 0x1065826f4

// -[SCChatInputViewController setInputViewTransparent:]
// Type encoding: v20@0:8B16
// Implementation: 0x10658272c

// -[SCChatInputViewController inputViewTransparent]
// Type encoding: B16@0:8
// Implementation: 0x106582764

// -[SCChatInputViewController leadingStackView]
// Type encoding: @16@0:8
// Implementation: 0x1065827a0

// -[SCChatInputViewController inputTextViewContainer]
// Type encoding: @16@0:8
// Implementation: 0x1065827e4

// -[SCChatInputViewController cursorColor]
// Type encoding: @16@0:8
// Implementation: 0x106582828

// -[SCChatInputViewController setCursorColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x10658286c

// -[SCChatInputViewController demiBoldFont]
// Type encoding: @16@0:8
// Implementation: 0x1065828bc

// -[SCChatInputViewController selectedRange]
// Type encoding: {_NSRange=QQ}16@0:8
// Implementation: 0x1065829c4

// -[SCChatInputViewController setSelectedRange:]
// Type encoding: v32@0:8{_NSRange=QQ}16
// Implementation: 0x106582a10

// -[SCChatInputViewController setInputBarHeight:]
// Type encoding: v24@0:8d16
// Implementation: 0x106582a58

// -[SCChatInputViewController _subscribeToDrawerEvents]
// Type encoding: v16@0:8
// Implementation: 0x106582aa8

// -[SCChatInputViewController _handleDrawerHeight:]
// Type encoding: v24@0:8d16
// Implementation: 0x106582c88

// -[SCChatInputViewController resetInputBarHeight]
// Type encoding: v16@0:8
// Implementation: 0x106582cfc

// -[SCChatInputViewController setScaleForMessageEdit:]
// Type encoding: v24@0:8d16
// Implementation: 0x106582d54

// -[SCChatInputViewController _setScale:isEdit:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x106582d5c

// -[SCChatInputViewController setMessageStreamingState:]
// Type encoding: v20@0:8B16
// Implementation: 0x106582dc4

// -[SCChatInputViewController textWillChangeEvent]
// Type encoding: @16@0:8
// Implementation: 0x106582e04

// -[SCChatInputViewController textDidChangeEvent]
// Type encoding: @16@0:8
// Implementation: 0x106582e34

// -[SCChatInputViewController inputStateEvents]
// Type encoding: @16@0:8
// Implementation: 0x106582e64

// -[SCChatInputViewController keyboardDidHideEvents]
// Type encoding: @16@0:8
// Implementation: 0x106582e74

// -[SCChatInputViewController inputSizeEvents]
// Type encoding: @16@0:8
// Implementation: 0x106582e84

// -[SCChatInputViewController accessorySizeEvents]
// Type encoding: @16@0:8
// Implementation: 0x106582eb4

// -[SCChatInputViewController interactiveDrawerEvent]
// Type encoding: @16@0:8
// Implementation: 0x106582f94

// -[SCChatInputViewController inputTextViewEditingEvents]
// Type encoding: @16@0:8
// Implementation: 0x106582fc4

// -[SCChatInputViewController inputTypingEvents]
// Type encoding: @16@0:8
// Implementation: 0x106582ff4

// -[SCChatInputViewController pasteEvents]
// Type encoding: @16@0:8
// Implementation: 0x106583024

// -[SCChatInputViewController inputText]
// Type encoding: @16@0:8
// Implementation: 0x106583054

// -[SCChatInputViewController restoreDraft]
// Type encoding: @16@0:8
// Implementation: 0x106583084

// -[SCChatInputViewController messageEditingEvent]
// Type encoding: @16@0:8
// Implementation: 0x1065830b4

// -[SCChatInputViewController stickerTappedEvent]
// Type encoding: @16@0:8
// Implementation: 0x1065830e4

// -[SCChatInputViewController registerPlugins:]
// Type encoding: v24@0:8@16
// Implementation: 0x106583114

// -[SCChatInputViewController registerObservers:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065832b4

// -[SCChatInputViewController _registerPlugins:]
// Type encoding: v24@0:8@16
// Implementation: 0x106583454

// -[SCChatInputViewController _registerObservers:]
// Type encoding: v24@0:8@16
// Implementation: 0x106583788

// -[SCChatInputViewController addFeature:atPosition:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106583798

// -[SCChatInputViewController prependFeature:position:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106583828

// -[SCChatInputViewController _addFeature:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065838b8

// -[SCChatInputViewController _shouldEnableKeyboard]
// Type encoding: B16@0:8
// Implementation: 0x1065839b4

// -[SCChatInputViewController enableKeyboard]
// Type encoding: v16@0:8
// Implementation: 0x106583a98

// -[SCChatInputViewController enableKeyboardAsynchronously]
// Type encoding: v16@0:8
// Implementation: 0x106583aa4

// -[SCChatInputViewController enableKeyboardAsynchronously:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106583aac

// -[SCChatInputViewController enableKeyboardAsynchronouslyForLegacyOS]
// Type encoding: v16@0:8
// Implementation: 0x106583ab8

// -[SCChatInputViewController enableKeyboardIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106583ac4

// -[SCChatInputViewController enableKeyboardIfNecessaryAsynchronouslyForLegacyOS]
// Type encoding: v16@0:8
// Implementation: 0x106583acc

// -[SCChatInputViewController _enableKeyboardIfNecessaryAsynchronously:]
// Type encoding: v20@0:8B16
// Implementation: 0x106583ad4

// -[SCChatInputViewController _enableKeyboardAsynchronously:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x106583b50

// -[SCChatInputViewController _shouldDisableKeyboard]
// Type encoding: B16@0:8
// Implementation: 0x106583d80

// -[SCChatInputViewController disableKeyboard]
// Type encoding: v16@0:8
// Implementation: 0x106583de4

// -[SCChatInputViewController disableKeyboardIfNecessaryAsynchronously]
// Type encoding: v16@0:8
// Implementation: 0x106583df0

// -[SCChatInputViewController disableKeyboardIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106583df8

// -[SCChatInputViewController _disableKeyboardIfNecessaryAsynchronously:]
// Type encoding: v20@0:8B16
// Implementation: 0x106583e00

// -[SCChatInputViewController _disableKeyboardAsynchronously:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x106583e68

// -[SCChatInputViewController collapseKeyboardAfterExternalResign]
// Type encoding: v16@0:8
// Implementation: 0x106583fd4

// -[SCChatInputViewController becomeFirstResponder]
// Type encoding: B16@0:8
// Implementation: 0x106584194

// -[SCChatInputViewController resignFirstResponder]
// Type encoding: B16@0:8
// Implementation: 0x10658421c

// -[SCChatInputViewController isFirstResponder]
// Type encoding: B16@0:8
// Implementation: 0x1065842b0

// -[SCChatInputViewController selectAll:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065842ec

// -[SCChatInputViewController transitionDrawerToState:animated:completion:]
// Type encoding: v36@0:8Q16B24@?28
// Implementation: 0x10658433c

// -[SCChatInputViewController registerPanGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x10658434c

// -[SCChatInputViewController unregisterPanGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x10658435c

// -[SCChatInputViewController restoreAttributedString:coloredRanges:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10658436c

// -[SCChatInputViewController restoreDefaultAttributesInRange:]
// Type encoding: v32@0:8{_NSRange=QQ}16
// Implementation: 0x106584714

// -[SCChatInputViewController selectItemWithDeeplinkIdentifier:subitemDeeplinkIdentifier:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10658475c

// -[SCChatInputViewController drawerMode]
// Type encoding: q16@0:8
// Implementation: 0x10658476c

// -[SCChatInputViewController insertTextAtRange:range:]
// Type encoding: v40@0:8@16{_NSRange=QQ}24
// Implementation: 0x106584794

// -[SCChatInputViewController _setAttributedTextInTextView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106584898

// -[SCChatInputViewController insertAttributedTextAtRange:range:]
// Type encoding: v40@0:8@16{_NSRange=QQ}24
// Implementation: 0x106584908

// -[SCChatInputViewController clearText]
// Type encoding: v16@0:8
// Implementation: 0x106584a14

// -[SCChatInputViewController presentInputBar]
// Type encoding: v16@0:8
// Implementation: 0x106584b30

// -[SCChatInputViewController dismissInputBar]
// Type encoding: v16@0:8
// Implementation: 0x106584b40

// -[SCChatInputViewController collapseInputItemsInContainingStackView:withCollapseAnimation:excludingInputItemWithIdentifier:]
// Type encoding: v32@0:8B16B20@24
// Implementation: 0x106584b50

// -[SCChatInputViewController addTextViewListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106584cec

// -[SCChatInputViewController removeTextViewListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106584cfc

// -[SCChatInputViewController hideSubmenu]
// Type encoding: v16@0:8
// Implementation: 0x106584d0c

// -[SCChatInputViewController isTouchOnSubmenuButton:]
// Type encoding: B24@0:8@16
// Implementation: 0x106584d14

// -[SCChatInputViewController resetSubmenu]
// Type encoding: v16@0:8
// Implementation: 0x106584d80

// -[SCChatInputViewController updateSubmenuForSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x106584dc0

// -[SCChatInputViewController _createAndAddSubmenuButtonWithModalities:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106584e88

// -[SCChatInputViewController _setSubmenuIcon]
// Type encoding: v16@0:8
// Implementation: 0x106584f60

// -[SCChatInputViewController _submenuButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x106585078

// -[SCChatInputViewController _showSubmenuWithEventLog:]
// Type encoding: v20@0:8B16
// Implementation: 0x106585098

// -[SCChatInputViewController _hideSubmenuWithEventLog:]
// Type encoding: v20@0:8B16
// Implementation: 0x106585174

// -[SCChatInputViewController _updateSubmenuForExpandedState:]
// Type encoding: v20@0:8B16
// Implementation: 0x106585214

// -[SCChatInputViewController _showSubmenuWithDelay]
// Type encoding: v16@0:8
// Implementation: 0x1065853fc

// -[SCChatInputViewController _showSubmenuWithTimeout]
// Type encoding: v16@0:8
// Implementation: 0x106585514

// -[SCChatInputViewController _observeActiveConversationInformation]
// Type encoding: v16@0:8
// Implementation: 0x1065855bc

// -[SCChatInputViewController _allowedModalitiesForConversationInformation:conversationSubtypeMetadata:]
// Type encoding: Q32@0:8@16@24
// Implementation: 0x106585b9c

// -[SCChatInputViewController _trackSubmenuImpression]
// Type encoding: v16@0:8
// Implementation: 0x106585dec

// -[SCChatInputViewController _checkImpressionsAndShowSubmenuIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106585fa4

// -[SCChatInputViewController announceMessageEditAttemptFromPlugin:]
// Type encoding: v24@0:8@16
// Implementation: 0x106586120

// -[SCChatInputViewController announceMessageSendAttemptFromPlugin:]
// Type encoding: v24@0:8@16
// Implementation: 0x106586178

// -[SCChatInputViewController announceMessageEditResult:fromPlugin:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x1065861d0

// -[SCChatInputViewController announceMessageSendResult:fromPlugin:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x106586230

// -[SCChatInputViewController announcePresentFullscreen:]
// Type encoding: v24@0:8@16
// Implementation: 0x106586290

// -[SCChatInputViewController announceDismissFullscreen:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065862e8

// -[SCChatInputViewController pluginDidAttachToAccessoryContainer]
// Type encoding: v16@0:8
// Implementation: 0x106586340

// -[SCChatInputViewController pluginDidDetachFromAccessoryContainer]
// Type encoding: v16@0:8
// Implementation: 0x106586374

// -[SCChatInputViewController interceptMessageSendAttemptForPlugin:]
// Type encoding: @24@0:8@16
// Implementation: 0x1065863a8

// -[SCChatInputViewController textViewDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065865e8

// -[SCChatInputViewController textViewDidEndEditing:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065866e4

// -[SCChatInputViewController textViewDidBeginEditing:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065867bc

// -[SCChatInputViewController textView:shouldChangeTextInRange:replacementText:]
// Type encoding: B48@0:8@16{_NSRange=QQ}24@40
// Implementation: 0x106586860

// -[SCChatInputViewController _changeWithTextView:textInRange:replacementText:]
// Type encoding: B48@0:8@16{_NSRange=QQ}24@40
// Implementation: 0x10658690c

// -[SCChatInputViewController _filterImageGlyphs:]
// Type encoding: v24@0:8@16
// Implementation: 0x106586c90

// -[SCChatInputViewController textViewShouldBeginEditing:]
// Type encoding: B24@0:8@16
// Implementation: 0x106586fe4

// -[SCChatInputViewController textViewShouldEndEditing:]
// Type encoding: B24@0:8@16
// Implementation: 0x1065871c4

// -[SCChatInputViewController inputTextView:didPasteGif:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106587258

// -[SCChatInputViewController inputTextView:didPasteImage:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065872f4

// -[SCChatInputViewController inputTextView:didPasteSticker:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106587390

// -[SCChatInputViewController inputTextView:didPasteVideo:contentType:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10658742c

// -[SCChatInputViewController sendItemControllerDidPressSend:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065874e4

// -[SCChatInputViewController expendItemDidPressExpand:]
// Type encoding: v24@0:8@16
// Implementation: 0x106587520

// -[SCChatInputViewController _returnKeyPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x106587554

// -[SCChatInputViewController applicationWillResignActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x106587678

// -[SCChatInputViewController applicationDidBecomeActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065876cc

// -[SCChatInputViewController keyboardDidShow:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065876fc

// -[SCChatInputViewController style]
// Type encoding: Q16@0:8
// Implementation: 0x10658773c

// -[SCChatInputViewController logger]
// Type encoding: @16@0:8
// Implementation: 0x10658774c

// -[SCChatInputViewController setLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x10658775c

// -[SCChatInputViewController delegate]
// Type encoding: @16@0:8
// Implementation: 0x10658779c

// -[SCChatInputViewController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065877bc

// -[SCChatInputViewController setPersistentViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065877d0

// -[SCChatInputViewController scale]
// Type encoding: d16@0:8
// Implementation: 0x1065877e4

// -[SCChatInputViewController coordinator]
// Type encoding: @16@0:8
// Implementation: 0x1065877f4

// -[SCChatInputViewController setCoordinator:]
// Type encoding: v24@0:8@16
// Implementation: 0x106587804

// -[SCChatInputViewController setTextView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106587844

// -[SCChatInputViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106587884

@end
