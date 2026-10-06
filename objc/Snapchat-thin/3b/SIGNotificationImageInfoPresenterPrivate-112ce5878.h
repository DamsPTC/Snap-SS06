// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SIGNotificationImageInfoPresenterPrivate
// Superclass: NSObject
// Address: 0x112ce5878

@interface SIGNotificationImageInfoPresenterPrivate

// Property: containerView; attributes: T@"UIView",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SIGNotificationImageInfoPresenterPrivate initWithPresenterNotificationImage:primaryText:secondaryText:actionHandler:swipeToDismissEnabled:accessibilityIdentifier:legacyImage:]
// Type encoding: @68@0:8@16@24@32@?40B48@52@60
// Implementation: 0x10b80af68

// -[SIGNotificationImageInfoPresenterPrivate initWithPresenterNotificationImage:primaryText:primaryTextStyle:primaryTextMaxLines:secondaryText:secondaryTextStyle:actionHandler:notificationButton:buttonActionHandler:dismissalHandler:dismissalReasonHandler:swipeToDismissEnabled:maxPresentationDurationSecs:accessibilityIdentifier:legacyImage:legacyImageContentMode:legacyButtonTitle:callerOptedInForDTNotification:]
// Type encoding: @152@0:8@16@24Q32@40@48Q56@?64@72@?80@?88@?96B104d108@116@124q132@140B148
// Implementation: 0x10b80b13c

// -[SIGNotificationImageInfoPresenterPrivate initWithPresenterImage:imageContentMode:primaryText:secondaryText:buttonText:url:swipeToDismissEnabled:accessibilityIdentifier:]
// Type encoding: @76@0:8@16q24@32@40@48@56B64@68
// Implementation: 0x10b80b478

// -[SIGNotificationImageInfoPresenterPrivate dialog]
// Type encoding: @16@0:8
// Implementation: 0x10b80b74c

// -[SIGNotificationImageInfoPresenterPrivate createDynamicSizeTypographyDialog]
// Type encoding: @16@0:8
// Implementation: 0x10b80b7b4

// -[SIGNotificationImageInfoPresenterPrivate containerView]
// Type encoding: @16@0:8
// Implementation: 0x10b80bc50

// -[SIGNotificationImageInfoPresenterPrivate presentNotificationOverView:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b80bc54

// -[SIGNotificationImageInfoPresenterPrivate internalPresentNotificationOverView:animateAndRemoveAfterDelay:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x10b80bc60

// -[SIGNotificationImageInfoPresenterPrivate dismissPresenter]
// Type encoding: v16@0:8
// Implementation: 0x10b80c118

// -[SIGNotificationImageInfoPresenterPrivate debugInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b80c140

// -[SIGNotificationImageInfoPresenterPrivate _translationMulitplierForPositionY:]
// Type encoding: d24@0:8d16
// Implementation: 0x10b80c168

// -[SIGNotificationImageInfoPresenterPrivate _scheduleDismissBlock]
// Type encoding: v16@0:8
// Implementation: 0x10b80c17c

// -[SIGNotificationImageInfoPresenterPrivate _cancelDismissBlock]
// Type encoding: v16@0:8
// Implementation: 0x10b80c284

// -[SIGNotificationImageInfoPresenterPrivate _addSwipeToDismissGestureRecognizer]
// Type encoding: v16@0:8
// Implementation: 0x10b80c2c0

// -[SIGNotificationImageInfoPresenterPrivate _handlePanGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b80c338

// -[SIGNotificationImageInfoPresenterPrivate _handleTapAction]
// Type encoding: v16@0:8
// Implementation: 0x10b80c4c0

// -[SIGNotificationImageInfoPresenterPrivate _handleURL]
// Type encoding: v16@0:8
// Implementation: 0x10b80c4dc

// -[SIGNotificationImageInfoPresenterPrivate _resetToInitialState]
// Type encoding: v16@0:8
// Implementation: 0x10b80c594

// -[SIGNotificationImageInfoPresenterPrivate _executeDismissAnimationWithReason:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b80c68c

// -[SIGNotificationImageInfoPresenterPrivate _executeCompletionBlockWithReason:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b80c818

// -[SIGNotificationImageInfoPresenterPrivate .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b80c8d8

// +[SIGNotificationImageInfoPresenterPrivate createPresenterImage:text:actionHandler:swipeToDismissEnabled:accessibilityIdentifier:]
// Type encoding: @52@0:8@16@24@?32B40@44
// Implementation: 0x10b80a560

// +[SIGNotificationImageInfoPresenterPrivate createPresenterImage:primaryText:secondaryText:actionHandler:swipeToDismissEnabled:accessibilityIdentifier:]
// Type encoding: @60@0:8@16@24@32@?40B48@52
// Implementation: 0x10b80a61c

// +[SIGNotificationImageInfoPresenterPrivate createPresenterImage:imageContentMode:title:actionHandler:buttonTitle:buttonActionHandler:swipeToDismissEnabled:accessibilityIdentifier:]
// Type encoding: @76@0:8@16q24@32@?40@48@?56B64@68
// Implementation: 0x10b80a6f4

// +[SIGNotificationImageInfoPresenterPrivate createPresenterNotificationImage:primaryText:secondaryText:actionHandler:swipeToDismissEnabled:accessibilityIdentifier:]
// Type encoding: @60@0:8@16@24@32@?40B48@52
// Implementation: 0x10b80a808

// +[SIGNotificationImageInfoPresenterPrivate createPresenterNotificationImage:primaryText:secondaryText:actionHandler:notificationButton:buttonActionHandler:swipeToDismissEnabled:accessibilityIdentifier:]
// Type encoding: @76@0:8@16@24@32@?40@48@?56B64@68
// Implementation: 0x10b80a8e0

// +[SIGNotificationImageInfoPresenterPrivate createPresenterDynamicTypeNotificationWithImage:primaryText:primaryTextStyle:secondaryText:actionHandler:notificationButton:buttonActionHandler:dismissalHandler:swipeToDismissEnabled:maxPresentationDurationSecs:accessibilityIdentifier:]
// Type encoding: @100@0:8@16@24Q32@40@?48@56@?64@?72B80d84@92
// Implementation: 0x10b80aa08

// +[SIGNotificationImageInfoPresenterPrivate createPresenterDynamicTypeNotificationWithImage:primaryText:primaryTextStyle:primaryTextMaxLines:secondaryText:actionHandler:notificationButton:buttonActionHandler:dismissalHandler:swipeToDismissEnabled:maxPresentationDurationSecs:accessibilityIdentifier:]
// Type encoding: @108@0:8@16@24Q32@40@48@?56@64@?72@?80B88d92@100
// Implementation: 0x10b80ab50

// +[SIGNotificationImageInfoPresenterPrivate createPresenterDynamicTypeNotificationWithImage:primaryText:primaryTextStyle:primaryTextMaxLines:secondaryText:secondaryTextStyle:actionHandler:notificationButton:buttonActionHandler:dismissalHandler:swipeToDismissEnabled:maxPresentationDurationSecs:accessibilityIdentifier:]
// Type encoding: @116@0:8@16@24Q32@40@48Q56@?64@72@?80@?88B96d100@108
// Implementation: 0x10b80ab94

// +[SIGNotificationImageInfoPresenterPrivate createPresenterDynamicTypeNotificationWithImage:primaryText:primaryTextStyle:primaryTextMaxLines:secondaryText:secondaryTextStyle:actionHandler:notificationButton:buttonActionHandler:dismissalHandler:dismissalReasonHandler:swipeToDismissEnabled:maxPresentationDurationSecs:accessibilityIdentifier:]
// Type encoding: @124@0:8@16@24Q32@40@48Q56@?64@72@?80@?88@?96B104d108@116
// Implementation: 0x10b80acf0

// +[SIGNotificationImageInfoPresenterPrivate createPresenterWithImage:imageContentMode:primaryText:secondaryText:buttonText:url:swipeToDismissEnabled:accessibilityIdentifier:]
// Type encoding: @76@0:8@16q24@32@40@48@56B64@68
// Implementation: 0x10b80ae6c

@end
