// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTermsOfUseLoggerImpl
// Superclass: NSObject
// Address: 0x112b226a8

@interface SCTermsOfUseLoggerImpl


// -[SCTermsOfUseLoggerImpl initWithUserSessionContext:userTrackedLogger:grapheneRegistry:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100262a50

// -[SCTermsOfUseLoggerImpl logTermsOfUseAction:version:]
// Type encoding: v32@0:8q16Q24
// Implementation: 0x106bffa84

// -[SCTermsOfUseLoggerImpl logServerDrivenTermsOfUseAction:version:complianceRequirement:]
// Type encoding: v36@0:8q16i24q28
// Implementation: 0x106bffac0

// -[SCTermsOfUseLoggerImpl logServerDrivenTermsOfUseComplianceStatus:complianceStatusCheckCount:isCompliant:tosAvailable:tosVersion:]
// Type encoding: v48@0:8q16q24B32B36q40
// Implementation: 0x106bffb04

// -[SCTermsOfUseLoggerImpl logAcceptedTosVersionViaAtlasResult:success:errorCode:]
// Type encoding: v28@0:8i16B20i24
// Implementation: 0x106bffb60

// -[SCTermsOfUseLoggerImpl logFetchCdnFileResultWithSuccess:errorCode:]
// Type encoding: v24@0:8B16i20
// Implementation: 0x106bffc04

// -[SCTermsOfUseLoggerImpl logMigratedLatestAcceptVersion:]
// Type encoding: v20@0:8B16
// Implementation: 0x106bffc70

// -[SCTermsOfUseLoggerImpl _scTosVersionToLegalPromptType:]
// Type encoding: q24@0:8Q16
// Implementation: 0x106bffc80

// -[SCTermsOfUseLoggerImpl _logServerDrivenTermsOfUseBlizzardAction:version:complianceRequirement:]
// Type encoding: v36@0:8q16i24q28
// Implementation: 0x106bffc90

// -[SCTermsOfUseLoggerImpl _logServerDrivenTermsOfUseGrapheneWithAction:version:complianceRequirement:]
// Type encoding: v36@0:8q16i24q28
// Implementation: 0x106bffd2c

// -[SCTermsOfUseLoggerImpl _logServerDrivenTermsOfUseBlizzardComplianceStatus:complianceStatusCheckCount:isCompliant:tosAvailable:tosVersion:]
// Type encoding: v48@0:8q16q24B32B36q40
// Implementation: 0x106bffe1c

// -[SCTermsOfUseLoggerImpl _logServerDrivenTermsOfUseGrapheneWithComplianceStatus:complianceStatusCheckCount:isCompliant:tosAvailable:tosVersion:]
// Type encoding: v48@0:8q16q24B32B36q40
// Implementation: 0x106bffed4

// -[SCTermsOfUseLoggerImpl _logBlizzardAction:version:]
// Type encoding: v32@0:8q16Q24
// Implementation: 0x106bfffb4

// -[SCTermsOfUseLoggerImpl _logGrapheneWithAction:version:]
// Type encoding: v32@0:8q16Q24
// Implementation: 0x106c00038

// -[SCTermsOfUseLoggerImpl _sessionContext]
// Type encoding: @16@0:8
// Implementation: 0x106c0018c

// -[SCTermsOfUseLoggerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c00300

@end
