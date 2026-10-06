// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTIVRequestPresenter
// Superclass: NSObject
// Address: 0x112afefc8

@interface SCTIVRequestPresenter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTIVRequestPresenter initWithUserId:username:systemScope:grapheneRegistry:shakeToReportScopeExposer:shakeToReportScopeServices:shakeToReportInfoProviderRegistry:configProvider:cofStore:avatarProvider:selfieProvider:performerProvider:grcpServiceFactory:valdiRuntimeProvider:notificationPool:deepLinkHandling:pageLauncher:deckHierarchyFactory:composerDeckConverter:nativeSessionManager:webBrowsingScopeExposer:blizzardLogger:]
// Type encoding: @192@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184
// Implementation: 0x100969c9c

// -[SCTIVRequestPresenter _createTIVGrcpService]
// Type encoding: @16@0:8
// Implementation: 0x1067d780c

// -[SCTIVRequestPresenter nativeConversationManager]
// Type encoding: @16@0:8
// Implementation: 0x1067d78ec

// -[SCTIVRequestPresenter _createTIVViewController:isExpiredOnClient:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1067d7934

// -[SCTIVRequestPresenter _createTIVV2ViewController:]
// Type encoding: @24@0:8@16
// Implementation: 0x1067d8428

// -[SCTIVRequestPresenter _composerReceiptTypeFromClient:]
// Type encoding: @24@0:8q16
// Implementation: 0x1067d8950

// -[SCTIVRequestPresenter _presentTIVView:isExpiredOnClient:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1067d89a0

// -[SCTIVRequestPresenter _presentTIVV2View:]
// Type encoding: v24@0:8@16
// Implementation: 0x1067d8b30

// -[SCTIVRequestPresenter _setupWebLauncher]
// Type encoding: @16@0:8
// Implementation: 0x1067d8c4c

// -[SCTIVRequestPresenter _approveTIV:]
// Type encoding: v24@0:8@16
// Implementation: 0x1067d8cd4

// -[SCTIVRequestPresenter _approveTIVDoNotDismiss]
// Type encoding: v16@0:8
// Implementation: 0x1067d8d90

// -[SCTIVRequestPresenter _denyTIV:]
// Type encoding: v24@0:8@16
// Implementation: 0x1067d8e18

// -[SCTIVRequestPresenter _errorTIV:]
// Type encoding: v24@0:8@16
// Implementation: 0x1067d8eac

// -[SCTIVRequestPresenter _startTIVBootstrapReencryption:version:completedCallback:]
// Type encoding: v40@0:8@16d24@?32
// Implementation: 0x1067d8f40

// -[SCTIVRequestPresenter _setTIVResult:tivRequest:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1067d9090

// -[SCTIVRequestPresenter _dismissTIV:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1067d917c

// -[SCTIVRequestPresenter _deepLinkChangePassword:]
// Type encoding: v24@0:8@16
// Implementation: 0x1067d93bc

// -[SCTIVRequestPresenter _makeDeepLinkURLForFeature:path:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1067d9484

// -[SCTIVRequestPresenter _deepLinkContactSuppport:]
// Type encoding: v24@0:8@16
// Implementation: 0x1067d94c4

// -[SCTIVRequestPresenter _deepLink:]
// Type encoding: v24@0:8@16
// Implementation: 0x1067d958c

// -[SCTIVRequestPresenter presentTIVRequest:isExpiredOnClient:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1067d9670

// -[SCTIVRequestPresenter presentTIVRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x1067d974c

// -[SCTIVRequestPresenter _showConfirmationToast]
// Type encoding: v16@0:8
// Implementation: 0x1067d9814

// -[SCTIVRequestPresenter _enableEelTivReencryption]
// Type encoding: B16@0:8
// Implementation: 0x1067d98ec

// -[SCTIVRequestPresenter _waitForDialogTimeoutMs]
// Type encoding: I16@0:8
// Implementation: 0x1067d99f4

// -[SCTIVRequestPresenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1067d9a44

@end
