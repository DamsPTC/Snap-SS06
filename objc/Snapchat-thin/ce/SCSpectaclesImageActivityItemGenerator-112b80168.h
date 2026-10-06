// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesImageActivityItemGenerator
// Superclass: NSObject
// Address: 0x112b80168

@interface SCSpectaclesImageActivityItemGenerator

// Property: userSession; attributes: T@"SCUserSession",R,N,V_userSession
// Property: dataObjectContext; attributes: T@"SCLazy",R,N,V_dataObjectContext
// Property: snap; attributes: T@"<SCGallerySnap>",R,N,V_snap
// Property: spectaclesCustomExportFormat; attributes: Tq,R,N,V_spectaclesCustomExportFormat
// Property: uploadToYoutube; attributes: TB,R,N,V_uploadToYoutube
// Property: delegate; attributes: T@"<SCActivityItemGeneratingDelegate>",W,N,V_delegate
// Property: progress; attributes: Tf,?,R,N
// Property: item; attributes: T@,?,R,N
// Property: itemCount; attributes: TQ,?,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesImageActivityItemGenerator initWithGallerySnap:dataObjectContext:cloudFS:encryptedContentManager:cachingMediaManager:userSession:spectaclesCustomExportFormat:uploadToYoutube:spectaclesAuxiliaryContentServices:targetTrajectoryFactory:circumstanceEngine:memoriesCachingMediaHelper:memoriesTranscodingHelper:]
// Type encoding: @116@0:8@16@24@32@40@48@56q64B72@76@84@92@100@108
// Implementation: 0x107da1528

// -[SCSpectaclesImageActivityItemGenerator generateItemForActivityType:]
// Type encoding: v24@0:8@16
// Implementation: 0x107da18e0

// -[SCSpectaclesImageActivityItemGenerator _generateItemWithCloudFile:]
// Type encoding: v24@0:8@16
// Implementation: 0x107da1a5c

// -[SCSpectaclesImageActivityItemGenerator generateThumbnailForExport:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107da2350

// -[SCSpectaclesImageActivityItemGenerator estimatedMediaSize]
// Type encoding: Q16@0:8
// Implementation: 0x107da2360

// -[SCSpectaclesImageActivityItemGenerator cancel]
// Type encoding: v16@0:8
// Implementation: 0x107da23a8

// -[SCSpectaclesImageActivityItemGenerator itemId]
// Type encoding: @16@0:8
// Implementation: 0x107da23b0

// -[SCSpectaclesImageActivityItemGenerator itemDuration]
// Type encoding: q16@0:8
// Implementation: 0x107da23b8

// -[SCSpectaclesImageActivityItemGenerator primarySortDate]
// Type encoding: @16@0:8
// Implementation: 0x107da23f4

// -[SCSpectaclesImageActivityItemGenerator secondarySortDate]
// Type encoding: @16@0:8
// Implementation: 0x107da23fc

// -[SCSpectaclesImageActivityItemGenerator delegate]
// Type encoding: @16@0:8
// Implementation: 0x107da2404

// -[SCSpectaclesImageActivityItemGenerator setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107da241c

// -[SCSpectaclesImageActivityItemGenerator userSession]
// Type encoding: @16@0:8
// Implementation: 0x107da2428

// -[SCSpectaclesImageActivityItemGenerator dataObjectContext]
// Type encoding: @16@0:8
// Implementation: 0x107da2430

// -[SCSpectaclesImageActivityItemGenerator snap]
// Type encoding: @16@0:8
// Implementation: 0x107da2438

// -[SCSpectaclesImageActivityItemGenerator spectaclesCustomExportFormat]
// Type encoding: q16@0:8
// Implementation: 0x107da2440

// -[SCSpectaclesImageActivityItemGenerator uploadToYoutube]
// Type encoding: B16@0:8
// Implementation: 0x107da2448

// -[SCSpectaclesImageActivityItemGenerator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107da2450

@end
