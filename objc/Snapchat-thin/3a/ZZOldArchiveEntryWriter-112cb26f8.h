// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: ZZOldArchiveEntryWriter
// Superclass: NSObject
// Address: 0x112cb26f8

@interface ZZOldArchiveEntryWriter


// -[ZZOldArchiveEntryWriter initWithCentralFileHeader:localFileHeader:shouldSkipLocalFile:]
// Type encoding: @36@0:8^{ZZCentralFileHeader=ICCSSSSSIIISSSSSII}16^{ZZLocalFileHeader=ISSSSSIIISS}24B32
// Implementation: 0x10b71e770

// -[ZZOldArchiveEntryWriter offsetToLocalFileEnd]
// Type encoding: I16@0:8
// Implementation: 0x10b71e8bc

// -[ZZOldArchiveEntryWriter writeLocalFileToChannelOutput:withInitialSkip:error:]
// Type encoding: B36@0:8@16I24o^@28
// Implementation: 0x10b71e8fc

// -[ZZOldArchiveEntryWriter writeCentralFileHeaderToChannelOutput:error:]
// Type encoding: B32@0:8@16o^@24
// Implementation: 0x10b71e9a0

// -[ZZOldArchiveEntryWriter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b71e9b0

@end
