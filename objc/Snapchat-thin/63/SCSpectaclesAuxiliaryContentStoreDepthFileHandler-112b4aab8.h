// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesAuxiliaryContentStoreDepthFileHandler
// Superclass: NSObject
// Address: 0x112b4aab8

@interface SCSpectaclesAuxiliaryContentStoreDepthFileHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesAuxiliaryContentStoreDepthFileHandler initWithAuxiliaryContentDirectory:mediaId:fileManager:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106f63450

// -[SCSpectaclesAuxiliaryContentStoreDepthFileHandler outputDepthDirectory]
// Type encoding: @16@0:8
// Implementation: 0x106f63544

// -[SCSpectaclesAuxiliaryContentStoreDepthFileHandler dataPathForCamera:dataSource:index:]
// Type encoding: @40@0:8Q16Q24q32
// Implementation: 0x106f63558

// -[SCSpectaclesAuxiliaryContentStoreDepthFileHandler depthProtobufWithError:]
// Type encoding: @24@0:8^@16
// Implementation: 0x106f635d4

// -[SCSpectaclesAuxiliaryContentStoreDepthFileHandler createOutputDepthDirectoryWithError:]
// Type encoding: B24@0:8^@16
// Implementation: 0x106f63660

// -[SCSpectaclesAuxiliaryContentStoreDepthFileHandler writeDepthProtobuf:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x106f636dc

// -[SCSpectaclesAuxiliaryContentStoreDepthFileHandler writeData:forCamera:dataSource:index:]
// Type encoding: B48@0:8@16Q24Q32q40
// Implementation: 0x106f63750

// -[SCSpectaclesAuxiliaryContentStoreDepthFileHandler _depthProtobufFilePath]
// Type encoding: @16@0:8
// Implementation: 0x106f63830

// -[SCSpectaclesAuxiliaryContentStoreDepthFileHandler _directoryForCamera:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106f63840

// -[SCSpectaclesAuxiliaryContentStoreDepthFileHandler _directoryForDataSource:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106f6387c

// -[SCSpectaclesAuxiliaryContentStoreDepthFileHandler _directoryPathForCamera:dataSource:]
// Type encoding: @32@0:8Q16Q24
// Implementation: 0x106f638b8

// -[SCSpectaclesAuxiliaryContentStoreDepthFileHandler _singleFrameFileNameWithIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x106f63950

// -[SCSpectaclesAuxiliaryContentStoreDepthFileHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f63980

@end
