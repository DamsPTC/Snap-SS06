// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewFeatureScanImpl
// Superclass: NSObject
// Address: 0x112a9e4e8

@interface SCPreviewFeatureScanImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: parentViewControllerDelegate; attributes: T@"<SCPreviewFeatureViewControllerDismissingDelegate>",W,N,V_parentViewControllerDelegate

// -[SCPreviewFeatureScanImpl initWithScanScopeLauncher:scanConfiguration:scanCodeDecoder:scanNotificationUIScopeExposer:scanNotificationUIScopeServices:configuration:logger:scanScopeServices:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x105d9c028

// -[SCPreviewFeatureScanImpl activate]
// Type encoding: v16@0:8
// Implementation: 0x105d9c1d0

// -[SCPreviewFeatureScanImpl _scaledImage:scaledSize:]
// Type encoding: @40@0:8@16{CGSize=dd}24
// Implementation: 0x105d9c448

// -[SCPreviewFeatureScanImpl responderChainPriority]
// Type encoding: q16@0:8
// Implementation: 0x105d9c56c

// -[SCPreviewFeatureScanImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d9c574

// -[SCPreviewFeatureScanImpl sendActionGuard]
// Type encoding: @16@0:8
// Implementation: 0x105d9c5e0

// -[SCPreviewFeatureScanImpl endScan]
// Type encoding: v16@0:8
// Implementation: 0x105d9c708

// -[SCPreviewFeatureScanImpl scanWantsDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d9c86c

// -[SCPreviewFeatureScanImpl scanWantsQueryWithSource:requestedAnalyzerServiceIds:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x105d9c984

// -[SCPreviewFeatureScanImpl _decodeAndPresentBannerIfNeededForImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d9c988

// -[SCPreviewFeatureScanImpl _launchPreviewBannerWithMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d9ccf0

// -[SCPreviewFeatureScanImpl _launchScanWithImage:imageMetadata:analyzerIds:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105d9ce68

// -[SCPreviewFeatureScanImpl _dimissPreviewViewController]
// Type encoding: v16@0:8
// Implementation: 0x105d9d2d0

// -[SCPreviewFeatureScanImpl _detachUI]
// Type encoding: v16@0:8
// Implementation: 0x105d9d348

// -[SCPreviewFeatureScanImpl notificationDidPresentWithId:resultType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105d9d374

// -[SCPreviewFeatureScanImpl notificationDidTapWithId:resultType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105d9d37c

// -[SCPreviewFeatureScanImpl notificationDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x105d9d45c

// -[SCPreviewFeatureScanImpl parentViewControllerDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105d9d460

// -[SCPreviewFeatureScanImpl setParentViewControllerDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d9d478

// -[SCPreviewFeatureScanImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105d9d484

@end
