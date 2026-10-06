// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdBrowserController
// Superclass: NSObject
// Address: 0x112a60aa8

@interface SCAdBrowserController

// Property: attachmentOpened; attributes: TB,N,V_attachmentOpened
// Property: backgroundOnAttachment; attributes: TB,N,V_backgroundOnAttachment
// Property: deactivating; attributes: TB,N,V_deactivating
// Property: browserReset; attributes: TB,N,V_browserReset
// Property: timer; attributes: T@"SCWeakTimer",&,N,V_timer
// Property: presenterBrowsingDelegate; attributes: T@"<SCWebBrowsingDelegate>",W,N,V_presenterBrowsingDelegate
// Property: originalEventDelegate; attributes: T@"<SCWebviewEventDelegate>",W,N,V_originalEventDelegate
// Property: lastBrowserOpenTimestamp; attributes: Td,N,V_lastBrowserOpenTimestamp
// Property: browserDwellTimeSec; attributes: Td,N,V_browserDwellTimeSec
// Property: browser; attributes: T@"UIViewController<SCWebBrowsing>",&,N,V_browser
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdBrowserController initWithWebBrowser:browserClientId:browserInteractiveIndex:presenterBrowsingDelegate:adBrowserControllerDelegate:timerProvider:adConfigProvider:adCrashLogging:blizzardLogger:adBrowsingConfig:webBrowsingConfigProvider:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x105740544

// -[SCAdBrowserController onAdTopSnapOpened]
// Type encoding: v16@0:8
// Implementation: 0x105740758

// -[SCAdBrowserController onAdAttachmentOpened]
// Type encoding: v16@0:8
// Implementation: 0x105740794

// -[SCAdBrowserController onAdAttachmentDismissed]
// Type encoding: v16@0:8
// Implementation: 0x1057407c4

// -[SCAdBrowserController background:]
// Type encoding: v20@0:8B16
// Implementation: 0x1057407f8

// -[SCAdBrowserController foreground]
// Type encoding: v16@0:8
// Implementation: 0x105740800

// -[SCAdBrowserController onLeaveAd]
// Type encoding: v16@0:8
// Implementation: 0x105740808

// -[SCAdBrowserController deactivateController]
// Type encoding: v16@0:8
// Implementation: 0x105740818

// -[SCAdBrowserController reactivateController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10574081c

// -[SCAdBrowserController setControllerWithEventDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057409b0

// -[SCAdBrowserController webBrowserDidReceiveGAHit:hitTimestampMs:isPageView:isLandingPage:]
// Type encoding: v40@0:8@16d24B32B36
// Implementation: 0x1057409f4

// -[SCAdBrowserController webBrowserDidFinalizeJavaScriptMetrics:eventType:common:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x105740ae4

// -[SCAdBrowserController webBrowserDidReceiveGAHit:isPageView:isLandingPage:didFullyAppearTimestampMs:common:]
// Type encoding: v48@0:8@16B24B28d32@40
// Implementation: 0x105740ae8

// -[SCAdBrowserController webBrowserInterimJavaScriptMetricsUpdate:eventType:performanceMetrics:common:]
// Type encoding: v48@0:8@16q24@32@40
// Implementation: 0x105740aec

// -[SCAdBrowserController webBrowser:didNavigate:common:exitMethod:]
// Type encoding: v48@0:8@16q24@32q40
// Implementation: 0x105740af0

// -[SCAdBrowserController webBrowser:onWebviewUserEvent:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105740af4

// -[SCAdBrowserController webBrowser:onWebvewConfigEvent:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105740af8

// -[SCAdBrowserController onWebviewAsmEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105740afc

// -[SCAdBrowserController webBrowser:onWebviewOperationEvent:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105740b00

// -[SCAdBrowserController webBrowser:onWebviewUrlParameterModificationEvent:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105740b04

// -[SCAdBrowserController _tryDeactivateController]
// Type encoding: v16@0:8
// Implementation: 0x105740b08

// -[SCAdBrowserController _isBrowserLifecycleExtensionEligible]
// Type encoding: B16@0:8
// Implementation: 0x105740c50

// -[SCAdBrowserController _getExtensionTtlSec]
// Type encoding: f16@0:8
// Implementation: 0x105740d28

// -[SCAdBrowserController _onBrowserLifecycleComplete]
// Type encoding: v16@0:8
// Implementation: 0x105740db8

// -[SCAdBrowserController browser]
// Type encoding: @16@0:8
// Implementation: 0x105740f30

// -[SCAdBrowserController setBrowser:]
// Type encoding: v24@0:8@16
// Implementation: 0x105740f38

// -[SCAdBrowserController attachmentOpened]
// Type encoding: B16@0:8
// Implementation: 0x105740f68

// -[SCAdBrowserController setAttachmentOpened:]
// Type encoding: v20@0:8B16
// Implementation: 0x105740f70

// -[SCAdBrowserController backgroundOnAttachment]
// Type encoding: B16@0:8
// Implementation: 0x105740f78

// -[SCAdBrowserController setBackgroundOnAttachment:]
// Type encoding: v20@0:8B16
// Implementation: 0x105740f80

// -[SCAdBrowserController deactivating]
// Type encoding: B16@0:8
// Implementation: 0x105740f88

// -[SCAdBrowserController setDeactivating:]
// Type encoding: v20@0:8B16
// Implementation: 0x105740f90

// -[SCAdBrowserController browserReset]
// Type encoding: B16@0:8
// Implementation: 0x105740f98

// -[SCAdBrowserController setBrowserReset:]
// Type encoding: v20@0:8B16
// Implementation: 0x105740fa0

// -[SCAdBrowserController timer]
// Type encoding: @16@0:8
// Implementation: 0x105740fa8

// -[SCAdBrowserController setTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105740fb0

// -[SCAdBrowserController presenterBrowsingDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105740fe0

// -[SCAdBrowserController setPresenterBrowsingDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105740ff8

// -[SCAdBrowserController originalEventDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105741004

// -[SCAdBrowserController setOriginalEventDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10574101c

// -[SCAdBrowserController lastBrowserOpenTimestamp]
// Type encoding: d16@0:8
// Implementation: 0x105741028

// -[SCAdBrowserController setLastBrowserOpenTimestamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x105741030

// -[SCAdBrowserController browserDwellTimeSec]
// Type encoding: d16@0:8
// Implementation: 0x105741038

// -[SCAdBrowserController setBrowserDwellTimeSec:]
// Type encoding: v24@0:8d16
// Implementation: 0x105741040

// -[SCAdBrowserController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105741048

@end
