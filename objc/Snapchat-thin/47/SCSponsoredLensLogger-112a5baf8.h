// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSponsoredLensLogger
// Superclass: NSObject
// Address: 0x112a5baf8

@interface SCSponsoredLensLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSponsoredLensLogger initWithBlizzard:lensDownloadStatusProvider:countryCodeProvider:grapheneRegistry:sponsoredLensScheduleService:adConfigProvider:cameraType:placement:]
// Type encoding: @80@0:8@16@24@32@40@48@56q64q72
// Implementation: 0x1056f2db4

// -[SCSponsoredLensLogger logLenses:lensSessionId:selectionCounts:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1056f2f18

// -[SCSponsoredLensLogger logSponsoredLensCarouselInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056f326c

// -[SCSponsoredLensLogger _lensMetricForPlacementType]
// Type encoding: @16@0:8
// Implementation: 0x1056f35d8

// -[SCSponsoredLensLogger _lensTypeForIndex:noFillsIndices:isSponsored:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x1056f3630

// -[SCSponsoredLensLogger _loadStatusForLens:]
// Type encoding: q24@0:8@16
// Implementation: 0x1056f367c

// -[SCSponsoredLensLogger _scheduleNamespaceDataForLens:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056f36f8

// -[SCSponsoredLensLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056f37c8

@end
