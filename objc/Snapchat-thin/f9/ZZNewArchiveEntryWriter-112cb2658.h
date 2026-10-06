// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: ZZNewArchiveEntryWriter
// Superclass: NSObject
// Address: 0x112cb2658

@interface ZZNewArchiveEntryWriter


// -[ZZNewArchiveEntryWriter initWithFileName:fileMode:lastModified:compressionLevel:dataBlock:streamBlock:dataConsumerBlock:]
// Type encoding: @68@0:8@16S24@28q36@?44@?52@?60
// Implementation: 0x10b71d084

// -[ZZNewArchiveEntryWriter centralFileHeader]
// Type encoding: ^{ZZCentralFileHeader=ICCSSSSSIIISSSSSII}16@0:8
// Implementation: 0x10b71d46c

// -[ZZNewArchiveEntryWriter localFileHeader]
// Type encoding: ^{ZZLocalFileHeader=ISSSSSIIISS}16@0:8
// Implementation: 0x10b71d474

// -[ZZNewArchiveEntryWriter offsetToLocalFileEnd]
// Type encoding: I16@0:8
// Implementation: 0x10b71d47c

// -[ZZNewArchiveEntryWriter writeLocalFileToChannelOutput:withInitialSkip:error:]
// Type encoding: B36@0:8@16I24o^@28
// Implementation: 0x10b71d484

// -[ZZNewArchiveEntryWriter writeCentralFileHeaderToChannelOutput:error:]
// Type encoding: B32@0:8@16o^@24
// Implementation: 0x10b71dbbc

// -[ZZNewArchiveEntryWriter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b71dbcc

@end
