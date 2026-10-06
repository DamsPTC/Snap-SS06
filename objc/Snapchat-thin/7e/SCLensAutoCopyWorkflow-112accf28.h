// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensAutoCopyWorkflow
// Superclass: NSObject
// Address: 0x112accf28

@interface SCLensAutoCopyWorkflow

// Property: delegate; attributes: T@"<SCLensAutoCopyWorkflowDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensAutoCopyWorkflow initWithLens:infoCardDataProvider:notificationPool:offPlatformLinkGenerationService:blizzardLogger:inviteService:autoCopySource:offPlatformShareFeatureProvider:circumstanceEngine:]
// Type encoding: @88@0:8@16@24@32@40@48@56q64@72@80
// Implementation: 0x10612a768

// -[SCLensAutoCopyWorkflow beginAutoCopyLensLinkWorkFlow]
// Type encoding: v16@0:8
// Implementation: 0x10612a934

// -[SCLensAutoCopyWorkflow beginAutoCopyLensLinkWorkFlowWithDeeplink:]
// Type encoding: v24@0:8@16
// Implementation: 0x10612ab74

// -[SCLensAutoCopyWorkflow _verifyLensIdWithInfoCardData:]
// Type encoding: B24@0:8@16
// Implementation: 0x10612ab78

// -[SCLensAutoCopyWorkflow _handleAutoCopyLensLink:]
// Type encoding: v24@0:8@16
// Implementation: 0x10612abe8

// -[SCLensAutoCopyWorkflow _handleAutoCopyLensWithDeepLink:]
// Type encoding: v24@0:8@16
// Implementation: 0x10612ac48

// -[SCLensAutoCopyWorkflow _handleAutoCopyLensWithDeepLinkViaOPSService:]
// Type encoding: v24@0:8@16
// Implementation: 0x10612ae9c

// -[SCLensAutoCopyWorkflow handleShareDestination:standardExternalContentShareScope:]
// Type encoding: B32@0:8q16@24
// Implementation: 0x10612b230

// -[SCLensAutoCopyWorkflow shareSheetDismissedWithShareDestination:]
// Type encoding: v24@0:8q16
// Implementation: 0x10612b238

// -[SCLensAutoCopyWorkflow _copyLink:notify:logEvent:shortLinkURL:]
// Type encoding: v40@0:8@16B24B28@32
// Implementation: 0x10612b268

// -[SCLensAutoCopyWorkflow _generateLinkToShare:]
// Type encoding: @24@0:8@16
// Implementation: 0x10612b364

// -[SCLensAutoCopyWorkflow _showDropdownNotificationForLinkCopied]
// Type encoding: v16@0:8
// Implementation: 0x10612b3ec

// -[SCLensAutoCopyWorkflow _logAutoCopyEvent:shortLinkURL:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10612b474

// -[SCLensAutoCopyWorkflow _shareSourceForAutoCopySource:]
// Type encoding: q24@0:8q16
// Implementation: 0x10612b5f0

// -[SCLensAutoCopyWorkflow delegate]
// Type encoding: @16@0:8
// Implementation: 0x10612b604

// -[SCLensAutoCopyWorkflow setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10612b61c

// -[SCLensAutoCopyWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10612b628

@end
