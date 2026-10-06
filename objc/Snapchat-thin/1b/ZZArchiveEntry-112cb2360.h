// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: ZZArchiveEntry
// Superclass: NSObject
// Address: 0x112cb2360

@interface ZZArchiveEntry

// Property: compressed; attributes: TB,R,N
// Property: lastModified; attributes: T@"NSDate",R,N
// Property: crc32; attributes: TQ,R,N
// Property: compressedSize; attributes: TQ,R,N
// Property: uncompressedSize; attributes: TQ,R,N
// Property: fileMode; attributes: TS,R,N
// Property: fileName; attributes: T@"NSString",R,N
// Property: rawFileName; attributes: T@"NSData",R,N
// Property: encoding; attributes: TQ,R,N

// -[ZZArchiveEntry compressed]
// Type encoding: B16@0:8
// Implementation: 0x10b719aac

// -[ZZArchiveEntry lastModified]
// Type encoding: @16@0:8
// Implementation: 0x10b719ab4

// -[ZZArchiveEntry crc32]
// Type encoding: Q16@0:8
// Implementation: 0x10b719abc

// -[ZZArchiveEntry compressedSize]
// Type encoding: Q16@0:8
// Implementation: 0x10b719ac4

// -[ZZArchiveEntry uncompressedSize]
// Type encoding: Q16@0:8
// Implementation: 0x10b719acc

// -[ZZArchiveEntry fileMode]
// Type encoding: S16@0:8
// Implementation: 0x10b719ad4

// -[ZZArchiveEntry fileName]
// Type encoding: @16@0:8
// Implementation: 0x10b719adc

// -[ZZArchiveEntry rawFileName]
// Type encoding: @16@0:8
// Implementation: 0x10b719b04

// -[ZZArchiveEntry encoding]
// Type encoding: Q16@0:8
// Implementation: 0x10b719b0c

// -[ZZArchiveEntry newStreamWithError:]
// Type encoding: @24@0:8^@16
// Implementation: 0x10b719b14

// -[ZZArchiveEntry check:]
// Type encoding: B24@0:8^@16
// Implementation: 0x10b719b1c

// -[ZZArchiveEntry fileNameWithEncoding:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10b719b24

// -[ZZArchiveEntry newDataWithError:]
// Type encoding: @24@0:8^@16
// Implementation: 0x10b719b2c

// -[ZZArchiveEntry newDataProviderWithError:]
// Type encoding: ^{CGDataProvider=}24@0:8^@16
// Implementation: 0x10b719b34

// -[ZZArchiveEntry newWriterCanSkipLocalFile:]
// Type encoding: @20@0:8B16
// Implementation: 0x10b719b3c

// +[ZZArchiveEntry archiveEntryWithFileName:compress:dataBlock:]
// Type encoding: @36@0:8@16B24@?28
// Implementation: 0x10b719710

// +[ZZArchiveEntry archiveEntryWithFileName:compress:streamBlock:]
// Type encoding: @36@0:8@16B24@?28
// Implementation: 0x10b7197c8

// +[ZZArchiveEntry archiveEntryWithFileName:compress:dataConsumerBlock:]
// Type encoding: @36@0:8@16B24@?28
// Implementation: 0x10b719880

// +[ZZArchiveEntry archiveEntryWithDirectoryName:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b719938

// +[ZZArchiveEntry archiveEntryWithFileName:fileMode:lastModified:compressionLevel:dataBlock:streamBlock:dataConsumerBlock:]
// Type encoding: @68@0:8@16S24@28q36@?44@?52@?60
// Implementation: 0x10b7199d0

@end
