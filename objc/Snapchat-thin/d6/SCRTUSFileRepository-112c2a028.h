// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRTUSFileRepository
// Superclass: NSObject
// Address: 0x112c2a028

@interface SCRTUSFileRepository


// -[SCRTUSFileRepository initWithFileWriter:fileManager:graphene:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10af65bb0

// -[SCRTUSFileRepository writeData:filePath:productName:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x10af65cec

// -[SCRTUSFileRepository readDataFromPath:productName:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10af65ecc

// -[SCRTUSFileRepository deleteFileAtPath:productName:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10af66004

// -[SCRTUSFileRepository getAllFilesInDirectoryForProduct:]
// Type encoding: @24@0:8@16
// Implementation: 0x10af66144

// -[SCRTUSFileRepository getNewFileNameForProduct:creationTimeMillis:fileNumBytes:]
// Type encoding: @40@0:8@16q24Q32
// Implementation: 0x10af663e4

// -[SCRTUSFileRepository _contentsOfDirAtPath:productName:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10af664c0

// -[SCRTUSFileRepository _createDirectoryIfNecessaryAtPath:productName:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10af665ec

// -[SCRTUSFileRepository .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af66770

@end
