// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdBrowserLifecycleServiceImpl
// Superclass: NSObject
// Address: 0x112a60b48

@interface SCAdBrowserLifecycleServiceImpl

// Property: eventDelegate; attributes: T@"<SCWebviewEventDelegate>",W,N,V_eventDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdBrowserLifecycleServiceImpl initWithAdBrowserControllerProvider:adConfigProvider:adCrashLogging:eventDelegate:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105741b14

// -[SCAdBrowserLifecycleServiceImpl provideBrowsingVCWithAdConfig:browsingDelegate:deepLinkHandling:additionalBrowsingScripts:shareHandler:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105741ccc

// -[SCAdBrowserLifecycleServiceImpl provideNonReuseableBrowsingVCWithAdConfig:browsingDelegate:deepLinkHandling:additionalBrowsingScripts:uiContainer:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105742480

// -[SCAdBrowserLifecycleServiceImpl beginObservationWithAdUnifiedEventStreams:]
// Type encoding: v24@0:8@16
// Implementation: 0x105742518

// -[SCAdBrowserLifecycleServiceImpl _onAdLifecycleEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105742668

// -[SCAdBrowserLifecycleServiceImpl leaveAdItemForAdIdentifier:adSnapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1057428d4

// -[SCAdBrowserLifecycleServiceImpl adBrowserInteractiveIndexUpdate:adSnapIndex:interactiveIndex:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x105742924

// -[SCAdBrowserLifecycleServiceImpl adSessionEnd]
// Type encoding: v16@0:8
// Implementation: 0x105742a20

// -[SCAdBrowserLifecycleServiceImpl eventDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105742a88

// -[SCAdBrowserLifecycleServiceImpl adBrowserLifecycleComplete:interactiveIndex:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105742adc

// -[SCAdBrowserLifecycleServiceImpl _deactivateBrowsersOnAdSessionEnd]
// Type encoding: v16@0:8
// Implementation: 0x105742bd8

// -[SCAdBrowserLifecycleServiceImpl _deactivateInteractiveIndexBrowsersOnAdSessionEnd]
// Type encoding: v16@0:8
// Implementation: 0x105742d9c

// -[SCAdBrowserLifecycleServiceImpl _enqueuePendingRemoval:interactiveIndex:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105742f94

// -[SCAdBrowserLifecycleServiceImpl _releaseBrowser:interactiveIndex:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105743060

// -[SCAdBrowserLifecycleServiceImpl _findMatchingBrowser:]
// Type encoding: @24@0:8@16
// Implementation: 0x10574311c

// -[SCAdBrowserLifecycleServiceImpl _notifyLeaveAdForNonInteractiveIndexAdBrowser:]
// Type encoding: v24@0:8@16
// Implementation: 0x105743234

// -[SCAdBrowserLifecycleServiceImpl _notifyLeaveAdForInteractiveIndexAdBrowser:]
// Type encoding: v24@0:8@16
// Implementation: 0x105743270

// -[SCAdBrowserLifecycleServiceImpl _releasePendingReleaseInteractiveIndexedBrowser]
// Type encoding: v16@0:8
// Implementation: 0x1057433bc

// -[SCAdBrowserLifecycleServiceImpl setEventDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105743568

// -[SCAdBrowserLifecycleServiceImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105743574

@end
