// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesTransferSession
// Superclass: NSObject
// Address: 0x112ca5f48

@interface SCSpectaclesTransferSession

// Property: device; attributes: T@"<SCSpectaclesDevice>",R,N,V_device
// Property: batchID; attributes: T@"NSUUID",R,N,V_batchID
// Property: sessionStartTime; attributes: T@"NSDate",R,N,V_sessionStartTime
// Property: channel; attributes: Tq,R,N,V_channel
// Property: transferType; attributes: TQ,R,N,V_transferType
// Property: untransferredContentByComponent; attributes: T@"NSDictionary",R,N,V_untransferredContentByComponent
// Property: transferredContentByComponent; attributes: T@"NSDictionary",R,N,V_transferredContentByComponent
// Property: currentlyTransferringContent; attributes: T@"<SCSpectaclesContent>",R,N,V_currentlyTransferringContent
// Property: component; attributes: TQ,R,N,V_component
// Property: progress; attributes: Tf,R,N,V_progress

// -[SCSpectaclesTransferSession fetchContentWithOptions:]
// Type encoding: @24@0:8Q16
// Implementation: 0x109026758

// -[SCSpectaclesTransferSession _filterContentDictionary:options:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x109026860

// -[SCSpectaclesTransferSession allContent]
// Type encoding: @16@0:8
// Implementation: 0x109026a48

// -[SCSpectaclesTransferSession pendingImportContent]
// Type encoding: @16@0:8
// Implementation: 0x109026a50

// -[SCSpectaclesTransferSession importedContent]
// Type encoding: @16@0:8
// Implementation: 0x109026a58

// -[SCSpectaclesTransferSession pendingExportContent]
// Type encoding: @16@0:8
// Implementation: 0x109026a60

// -[SCSpectaclesTransferSession exportedContent]
// Type encoding: @16@0:8
// Implementation: 0x109026a68

// -[SCSpectaclesTransferSession initWithDevice:batchId:sessionStartTime:channel:transferType:untransferredContentByComponent:transferredContentByComponent:currentlyTransferringContent:component:progress:]
// Type encoding: @92@0:8@16@24@32q40Q48@56@64@72Q80f88
// Implementation: 0x10b6fc3e8

// -[SCSpectaclesTransferSession device]
// Type encoding: @16@0:8
// Implementation: 0x10b6fc570

// -[SCSpectaclesTransferSession batchID]
// Type encoding: @16@0:8
// Implementation: 0x10b6fc578

// -[SCSpectaclesTransferSession sessionStartTime]
// Type encoding: @16@0:8
// Implementation: 0x10b6fc580

// -[SCSpectaclesTransferSession channel]
// Type encoding: q16@0:8
// Implementation: 0x10b6fc588

// -[SCSpectaclesTransferSession transferType]
// Type encoding: Q16@0:8
// Implementation: 0x10b6fc590

// -[SCSpectaclesTransferSession untransferredContentByComponent]
// Type encoding: @16@0:8
// Implementation: 0x10b6fc598

// -[SCSpectaclesTransferSession transferredContentByComponent]
// Type encoding: @16@0:8
// Implementation: 0x10b6fc5a0

// -[SCSpectaclesTransferSession currentlyTransferringContent]
// Type encoding: @16@0:8
// Implementation: 0x10b6fc5a8

// -[SCSpectaclesTransferSession component]
// Type encoding: Q16@0:8
// Implementation: 0x10b6fc5b0

// -[SCSpectaclesTransferSession progress]
// Type encoding: f16@0:8
// Implementation: 0x10b6fc5b8

// -[SCSpectaclesTransferSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b6fc5c0

@end
