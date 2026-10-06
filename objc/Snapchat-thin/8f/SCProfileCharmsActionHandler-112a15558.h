// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCProfileCharmsActionHandler
// Superclass: NSObject
// Address: 0x112a15558

@interface SCProfileCharmsActionHandler

// Property: unifiedProfileViewController; attributes: T@"SCUnifiedProfileViewController",W,N,V_unifiedProfileViewController
// Property: loggingService; attributes: T@"SCUnifiedProfileLoggingService",W,N,V_loggingService
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCProfileCharmsActionHandler initWithUserSession:profileSessionId:charmsDataCoordinator:charmsViewingDataCoordinator:charmsBlizzardLogger:webBrowsingScopeExposer:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1050ac380

// -[SCProfileCharmsActionHandler handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x1050ac6dc

// -[SCProfileCharmsActionHandler _presentCharmPageView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050ac8ac

// -[SCProfileCharmsActionHandler _dismissCharmPageView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050aca9c

// -[SCProfileCharmsActionHandler _setCharmViewed:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050acc7c

// -[SCProfileCharmsActionHandler _presentMenu:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050acd54

// -[SCProfileCharmsActionHandler _presentHiddenCharmsMenu:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050aceb0

// -[SCProfileCharmsActionHandler flushCharmsViewingsDataForOwner:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050ad00c

// -[SCProfileCharmsActionHandler _initializeCharmsActionMenuActionHandler]
// Type encoding: @16@0:8
// Implementation: 0x1050ad050

// -[SCProfileCharmsActionHandler _initializeHiddenCharmsActionMenuActionHandler]
// Type encoding: @16@0:8
// Implementation: 0x1050ad108

// -[SCProfileCharmsActionHandler unifiedProfileViewController]
// Type encoding: @16@0:8
// Implementation: 0x1050ad194

// -[SCProfileCharmsActionHandler setUnifiedProfileViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050ad1ac

// -[SCProfileCharmsActionHandler loggingService]
// Type encoding: @16@0:8
// Implementation: 0x1050ad1b8

// -[SCProfileCharmsActionHandler setLoggingService:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050ad1d0

// -[SCProfileCharmsActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1050ad1dc

@end
