// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdReportEvent
// Superclass: NSObject
// Address: 0x1129d0890

@interface SCAdReportEvent

// Property: subType; attributes: Tq,R,N
// Property: adHidden; attributes: TB,R,N
// Property: common; attributes: T@"SCAdTrackCommon",N,R,Vcommon
// Property: type; attributes: T@"SCAdReportEventType",N,R,Vtype
// Property: hash; attributes: Tq,N,R
// Property: description; attributes: T@"NSString",N,R

// -[SCAdReportEvent subType]
// Type encoding: q16@0:8
// Implementation: 0x1084c0838

// -[SCAdReportEvent adHidden]
// Type encoding: B16@0:8
// Implementation: 0x1084c0a80

// -[SCAdReportEvent common]
// Type encoding: @16@0:8
// Implementation: 0x10468e348

// -[SCAdReportEvent type]
// Type encoding: @16@0:8
// Implementation: 0x10468e358

// -[SCAdReportEvent initWithCommon:type:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10468e3cc

// -[SCAdReportEvent hash]
// Type encoding: q16@0:8
// Implementation: 0x10468e518

// -[SCAdReportEvent isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10468e6a8

// -[SCAdReportEvent copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x10468e728

// -[SCAdReportEvent description]
// Type encoding: @16@0:8
// Implementation: 0x10468e72c

// -[SCAdReportEvent init]
// Type encoding: @16@0:8
// Implementation: 0x10468e7a8

// -[SCAdReportEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10468e824

@end
