// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDefaultInAppNotificationPresentingPlugin
// Superclass: NSObject
// Address: 0x112afd2b8

@interface SCDefaultInAppNotificationPresentingPlugin

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDefaultInAppNotificationPresentingPlugin initWithNotificationPool:bitmojiSelfieFetcher:bitmojiSelfieProvider:bitmojiAvatarProvider:snapchattersDataFetcher:groupsDataFetcher:grapheneRegistry:notificationEmitter:userId:asyncQueueProvider:imageFetchingService:composerRuntimeProvider:paramProvider:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x1067bbdd4

// -[SCDefaultInAppNotificationPresentingPlugin presentInAppNotification:delegate:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1067bc2a8

// -[SCDefaultInAppNotificationPresentingPlugin presentInAppNotificationAsync:delegate:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1067bc2b0

// -[SCDefaultInAppNotificationPresentingPlugin dismissInAppNotification]
// Type encoding: v16@0:8
// Implementation: 0x1067bc7d0

// -[SCDefaultInAppNotificationPresentingPlugin shouldHandleAppNotification:]
// Type encoding: B24@0:8@16
// Implementation: 0x1067bc81c

// -[SCDefaultInAppNotificationPresentingPlugin _createPresenterWithBitmojiFetch:callbackBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1067bc824

// -[SCDefaultInAppNotificationPresentingPlugin _getBitmojiForUserId:withBitmojiAvatarId:andBitmojiSelfieId:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1067bced0

// -[SCDefaultInAppNotificationPresentingPlugin _reportSIGNotificationNotSubmitted:]
// Type encoding: v24@0:8@16
// Implementation: 0x1067bd288

// -[SCDefaultInAppNotificationPresentingPlugin _reportSIGNotificationSubmitted:notification:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1067bd340

// -[SCDefaultInAppNotificationPresentingPlugin _getSilouetteImage:]
// Type encoding: @24@0:8@16
// Implementation: 0x1067bd468

// -[SCDefaultInAppNotificationPresentingPlugin _finishWithConcreteImage:rightImage:notification:scaleImage:actionHandler:dismissReasonHandler:]
// Type encoding: v60@0:8@16@24@32B40@?44@?52
// Implementation: 0x1067bd4dc

// -[SCDefaultInAppNotificationPresentingPlugin _finishPresentingSIGNotification:rightImage:notification:scaleImage:actionHandler:dismissReasonHandler:]
// Type encoding: v60@0:8@16@24@32B40@?44@?52
// Implementation: 0x1067bd5f4

// -[SCDefaultInAppNotificationPresentingPlugin _finishPresentingComposerNotification:rightImage:notification:actionHandler:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1067bd898

// -[SCDefaultInAppNotificationPresentingPlugin _subTitleColorNumber:]
// Type encoding: @24@0:8@16
// Implementation: 0x1067bdb20

// -[SCDefaultInAppNotificationPresentingPlugin _imageFutureForUrl:]
// Type encoding: @24@0:8@16
// Implementation: 0x1067bdc54

// -[SCDefaultInAppNotificationPresentingPlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1067bdfa8

// +[SCDefaultInAppNotificationPresentingPlugin _isTyping:]
// Type encoding: B24@0:8@16
// Implementation: 0x1067bdbfc

@end
