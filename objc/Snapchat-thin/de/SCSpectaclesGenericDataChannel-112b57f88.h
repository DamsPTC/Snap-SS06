// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesGenericDataChannel
// Superclass: NSObject
// Address: 0x112b57f88

@interface SCSpectaclesGenericDataChannel

// Property: delegate; attributes: T@"<SCSpectaclesGenericDataChannelDelegate>",W,N,V_delegate
// Property: isOpen; attributes: TB,R,N,V_isOpen
// Property: logPackets; attributes: TB,N,V_logPackets
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesGenericDataChannel initWithInputStream:outputStream:label:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106fcc3dc

// -[SCSpectaclesGenericDataChannel open]
// Type encoding: v16@0:8
// Implementation: 0x106fcc4fc

// -[SCSpectaclesGenericDataChannel writeData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fcc60c

// -[SCSpectaclesGenericDataChannel close]
// Type encoding: v16@0:8
// Implementation: 0x106fcc6e8

// -[SCSpectaclesGenericDataChannel _writeData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fcc6f0

// -[SCSpectaclesGenericDataChannel _threadMain]
// Type encoding: v16@0:8
// Implementation: 0x106fcc718

// -[SCSpectaclesGenericDataChannel _readDataInternal]
// Type encoding: v16@0:8
// Implementation: 0x106fcc8b4

// -[SCSpectaclesGenericDataChannel _writeDataInternal]
// Type encoding: v16@0:8
// Implementation: 0x106fcca24

// -[SCSpectaclesGenericDataChannel _sendErrorForStream:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fccb6c

// -[SCSpectaclesGenericDataChannel _areBothStreamsOpen]
// Type encoding: B16@0:8
// Implementation: 0x106fccc84

// -[SCSpectaclesGenericDataChannel stream:handleEvent:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106fccd20

// -[SCSpectaclesGenericDataChannel delegate]
// Type encoding: @16@0:8
// Implementation: 0x106fccf1c

// -[SCSpectaclesGenericDataChannel setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fccf34

// -[SCSpectaclesGenericDataChannel isOpen]
// Type encoding: B16@0:8
// Implementation: 0x106fccf40

// -[SCSpectaclesGenericDataChannel logPackets]
// Type encoding: B16@0:8
// Implementation: 0x106fccf48

// -[SCSpectaclesGenericDataChannel setLogPackets:]
// Type encoding: v20@0:8B16
// Implementation: 0x106fccf50

// -[SCSpectaclesGenericDataChannel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106fccf58

@end
