// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensInfoCardOnCameraScopePresenter
// Superclass: NSObject
// Address: 0x112b1d658

@interface SCLensInfoCardOnCameraScopePresenter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: isPresented; attributes: TB,R,N
// Property: infoCardsLifecycleObservable; attributes: T@"SCObservable",R,N
// Property: isInfoCardPresented; attributes: TB,R,N
// Property: isInfoCardActive; attributes: TB,R,N

// -[SCLensInfoCardOnCameraScopePresenter initWithScopeExposer:scopeServices:actionHandler:lensCarouselManagementServices:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106b9ca74

// -[SCLensInfoCardOnCameraScopePresenter presentInfoCardFromViewController:lensMetadata:source:dismissBlock:]
// Type encoding: v48@0:8@16@24Q32@?40
// Implementation: 0x106b9cba8

// -[SCLensInfoCardOnCameraScopePresenter isPresented]
// Type encoding: B16@0:8
// Implementation: 0x106b9cc94

// -[SCLensInfoCardOnCameraScopePresenter lensInfoCard:didDismissWithActionType:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106b9ccc0

// -[SCLensInfoCardOnCameraScopePresenter lensInfoCardDidSuspend:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b9cdd0

// -[SCLensInfoCardOnCameraScopePresenter lensInfoCardDidResume:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b9cec0

// -[SCLensInfoCardOnCameraScopePresenter isInfoCardPresented]
// Type encoding: B16@0:8
// Implementation: 0x106b9cfb0

// -[SCLensInfoCardOnCameraScopePresenter isInfoCardActive]
// Type encoding: B16@0:8
// Implementation: 0x106b9cfb4

// -[SCLensInfoCardOnCameraScopePresenter infoCardsLifecycleObservable]
// Type encoding: @16@0:8
// Implementation: 0x106b9cfd4

// -[SCLensInfoCardOnCameraScopePresenter _reportScopeLifecycleEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b9cfdc

// -[SCLensInfoCardOnCameraScopePresenter _reportScopeBegan]
// Type encoding: v16@0:8
// Implementation: 0x106b9cfe4

// -[SCLensInfoCardOnCameraScopePresenter _reportScopeEndedIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106b9d028

// -[SCLensInfoCardOnCameraScopePresenter _indexOfScope:]
// Type encoding: Q24@0:8@16
// Implementation: 0x106b9d080

// -[SCLensInfoCardOnCameraScopePresenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106b9d15c

@end
