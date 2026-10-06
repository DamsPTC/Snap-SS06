// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesMutableTransferSession
// Superclass: NSObject
// Address: 0x112b438f8

@interface SCSpectaclesMutableTransferSession

// Property: transferChannel; attributes: Tq,N,V_transferChannel
// Property: currentTransferTask; attributes: T@"SCSpectaclesTaskTransfer",&,N,V_currentTransferTask
// Property: batchID; attributes: T@"NSUUID",R,C,N,V_batchID

// -[SCSpectaclesMutableTransferSession initWithDevice:transferType:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x106eb9df4

// -[SCSpectaclesMutableTransferSession _groupedContentForTransferTasks:]
// Type encoding: @24@0:8@16
// Implementation: 0x106eb9edc

// -[SCSpectaclesMutableTransferSession _untransferredContentByComponent]
// Type encoding: @16@0:8
// Implementation: 0x106eba148

// -[SCSpectaclesMutableTransferSession _transferredContentByComponent]
// Type encoding: @16@0:8
// Implementation: 0x106eba1ec

// -[SCSpectaclesMutableTransferSession _currentlyTransferringContent]
// Type encoding: @16@0:8
// Implementation: 0x106eba298

// -[SCSpectaclesMutableTransferSession _component]
// Type encoding: Q16@0:8
// Implementation: 0x106eba2dc

// -[SCSpectaclesMutableTransferSession _progress]
// Type encoding: f16@0:8
// Implementation: 0x106eba340

// -[SCSpectaclesMutableTransferSession markTaskComplete:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eba3dc

// -[SCSpectaclesMutableTransferSession completedTasks]
// Type encoding: @16@0:8
// Implementation: 0x106eba4a0

// -[SCSpectaclesMutableTransferSession transferSession]
// Type encoding: @16@0:8
// Implementation: 0x106eba504

// -[SCSpectaclesMutableTransferSession transferChannel]
// Type encoding: q16@0:8
// Implementation: 0x106eba610

// -[SCSpectaclesMutableTransferSession setTransferChannel:]
// Type encoding: v24@0:8q16
// Implementation: 0x106eba618

// -[SCSpectaclesMutableTransferSession currentTransferTask]
// Type encoding: @16@0:8
// Implementation: 0x106eba620

// -[SCSpectaclesMutableTransferSession setCurrentTransferTask:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eba628

// -[SCSpectaclesMutableTransferSession batchID]
// Type encoding: @16@0:8
// Implementation: 0x106eba658

// -[SCSpectaclesMutableTransferSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106eba660

@end
