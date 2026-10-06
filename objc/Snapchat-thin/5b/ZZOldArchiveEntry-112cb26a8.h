// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: ZZOldArchiveEntry
// Superclass: ZZArchiveEntry
// Address: 0x112cb26a8

@interface ZZOldArchiveEntry

// Property: compressed; attributes: TB,R,N
// Property: lastModified; attributes: T@"NSDate",R,N
// Property: crc32; attributes: TQ,R,N
// Property: compressedSize; attributes: TQ,R,N
// Property: uncompressedSize; attributes: TQ,R,N
// Property: fileMode; attributes: TS,R,N
// Property: rawFileName; attributes: T@"NSData",R,N
// Property: encoding; attributes: TQ,R,N

// -[ZZOldArchiveEntry initWithCentralFileHeader:localFileHeader:]
// Type encoding: @32@0:8^{ZZCentralFileHeader=ICCSSSSSIIISSSSSII}16^{ZZLocalFileHeader=ISSSSSIIISS}24
// Implementation: 0x10b71dc2c

// -[ZZOldArchiveEntry fileData]
// Type encoding: @16@0:8
// Implementation: 0x10b71dd10

// -[ZZOldArchiveEntry compressionMethod]
// Type encoding: S16@0:8
// Implementation: 0x10b71dd4c

// -[ZZOldArchiveEntry compressed]
// Type encoding: B16@0:8
// Implementation: 0x10b71dd60

// -[ZZOldArchiveEntry lastModified]
// Type encoding: @16@0:8
// Implementation: 0x10b71dd7c

// -[ZZOldArchiveEntry crc32]
// Type encoding: Q16@0:8
// Implementation: 0x10b71de9c

// -[ZZOldArchiveEntry compressedSize]
// Type encoding: Q16@0:8
// Implementation: 0x10b71deb0

// -[ZZOldArchiveEntry uncompressedSize]
// Type encoding: Q16@0:8
// Implementation: 0x10b71dec4

// -[ZZOldArchiveEntry fileMode]
// Type encoding: S16@0:8
// Implementation: 0x10b71ded8

// -[ZZOldArchiveEntry rawFileName]
// Type encoding: @16@0:8
// Implementation: 0x10b71df30

// -[ZZOldArchiveEntry encoding]
// Type encoding: Q16@0:8
// Implementation: 0x10b71df54

// -[ZZOldArchiveEntry check:]
// Type encoding: B24@0:8o^@16
// Implementation: 0x10b71df78

// -[ZZOldArchiveEntry fileNameWithEncoding:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10b71e138

// -[ZZOldArchiveEntry checkCompression:]
// Type encoding: B24@0:8o^@16
// Implementation: 0x10b71e180

// -[ZZOldArchiveEntry streamForData:error:]
// Type encoding: @32@0:8@16o^@24
// Implementation: 0x10b71e1f8

// -[ZZOldArchiveEntry newStreamWithError:]
// Type encoding: @24@0:8o^@16
// Implementation: 0x10b71e290

// -[ZZOldArchiveEntry newDataWithError:]
// Type encoding: @24@0:8o^@16
// Implementation: 0x10b71e304

// -[ZZOldArchiveEntry newDataProviderWithError:]
// Type encoding: ^{CGDataProvider=}24@0:8o^@16
// Implementation: 0x10b71e3dc

// -[ZZOldArchiveEntry newWriterCanSkipLocalFile:]
// Type encoding: @20@0:8B16
// Implementation: 0x10b71e554

@end
