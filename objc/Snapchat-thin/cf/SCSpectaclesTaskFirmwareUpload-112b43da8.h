// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesTaskFirmwareUpload
// Superclass: SCSpectaclesTask
// Address: 0x112b43da8

@interface SCSpectaclesTaskFirmwareUpload

// Property: fileHandle; attributes: T@"NSFileHandle",&,N,V_fileHandle
// Property: currentChunk; attributes: T@"NSData",&,N,V_currentChunk
// Property: bytesSent; attributes: TQ,N,V_bytesSent
// Property: fileSize; attributes: TQ,N,V_fileSize
// Property: chunkSize; attributes: TQ,R,N,V_chunkSize

// -[SCSpectaclesTaskFirmwareUpload initWithFilepath:chunkSize:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x106ebfbd0

// -[SCSpectaclesTaskFirmwareUpload type]
// Type encoding: Q16@0:8
// Implementation: 0x106ebfd20

// -[SCSpectaclesTaskFirmwareUpload nextRequest:]
// Type encoding: @24@0:8q16
// Implementation: 0x106ebfd28

// -[SCSpectaclesTaskFirmwareUpload handleResponse:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ebfe44

// -[SCSpectaclesTaskFirmwareUpload isFinished]
// Type encoding: B16@0:8
// Implementation: 0x106ebfec8

// -[SCSpectaclesTaskFirmwareUpload maxReTryCount]
// Type encoding: q16@0:8
// Implementation: 0x106ebfefc

// -[SCSpectaclesTaskFirmwareUpload bytesSent]
// Type encoding: Q16@0:8
// Implementation: 0x106ebff04

// -[SCSpectaclesTaskFirmwareUpload setBytesSent:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106ebff14

// -[SCSpectaclesTaskFirmwareUpload fileSize]
// Type encoding: Q16@0:8
// Implementation: 0x106ebff24

// -[SCSpectaclesTaskFirmwareUpload setFileSize:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106ebff34

// -[SCSpectaclesTaskFirmwareUpload chunkSize]
// Type encoding: Q16@0:8
// Implementation: 0x106ebff44

// -[SCSpectaclesTaskFirmwareUpload fileHandle]
// Type encoding: @16@0:8
// Implementation: 0x106ebff54

// -[SCSpectaclesTaskFirmwareUpload setFileHandle:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ebff64

// -[SCSpectaclesTaskFirmwareUpload currentChunk]
// Type encoding: @16@0:8
// Implementation: 0x106ebffa4

// -[SCSpectaclesTaskFirmwareUpload setCurrentChunk:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ebffb4

// -[SCSpectaclesTaskFirmwareUpload .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ebfff4

@end
