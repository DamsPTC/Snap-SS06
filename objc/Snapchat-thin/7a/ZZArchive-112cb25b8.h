// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: ZZArchive
// Superclass: NSObject
// Address: 0x112cb25b8

@interface ZZArchive

// Property: URL; attributes: T@"NSURL",R,N
// Property: contents; attributes: T@"NSData",R,N,V_contents
// Property: entries; attributes: T@"NSArray",R,N,V_entries

// -[ZZArchive initWithURL:options:error:]
// Type encoding: @40@0:8@16@24o^@32
// Implementation: 0x10b71b130

// -[ZZArchive initWithData:options:error:]
// Type encoding: @40@0:8@16@24o^@32
// Implementation: 0x10b71b1f4

// -[ZZArchive initWithChannel:options:error:]
// Type encoding: @40@0:8@16@24o^@32
// Implementation: 0x10b71b2b8

// -[ZZArchive URL]
// Type encoding: @16@0:8
// Implementation: 0x10b71b3f0

// -[ZZArchive unarchiveWithDirectoryURL:error:]
// Type encoding: B32@0:8@16o^@24
// Implementation: 0x10b71b3f8

// -[ZZArchive entryWithFileName:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b71b988

// -[ZZArchive loadCanMiss:error:]
// Type encoding: B28@0:8B16o^@20
// Implementation: 0x10b71bbc4

// -[ZZArchive updateEntries:error:]
// Type encoding: B32@0:8@16o^@24
// Implementation: 0x10b71c08c

// -[ZZArchive contents]
// Type encoding: @16@0:8
// Implementation: 0x10b71cccc

// -[ZZArchive entries]
// Type encoding: @16@0:8
// Implementation: 0x10b71ccd4

// -[ZZArchive .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b71ccdc

// +[ZZArchive archiveWithURL:error:]
// Type encoding: @32@0:8@16o^@24
// Implementation: 0x10b71afe0

// +[ZZArchive archiveWithData:error:]
// Type encoding: @32@0:8@16o^@24
// Implementation: 0x10b71b088

@end
