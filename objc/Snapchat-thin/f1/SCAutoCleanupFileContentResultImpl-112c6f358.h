// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAutoCleanupFileContentResultImpl
// Superclass: NSObject
// Address: 0x112c6f358

@interface SCAutoCleanupFileContentResultImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAutoCleanupFileContentResultImpl initWithContentKey:filePath:isPlatformSafe:deleteOnCleanup:]
// Type encoding: @40@0:8@16@24B32B36
// Implementation: 0x10b0ecb54

// -[SCAutoCleanupFileContentResultImpl getTotalSize]
// Type encoding: q16@0:8
// Implementation: 0x10b0ecc70

// -[SCAutoCleanupFileContentResultImpl getPrefetchSize]
// Type encoding: q16@0:8
// Implementation: 0x10b0ecc78

// -[SCAutoCleanupFileContentResultImpl getAvailableSize]
// Type encoding: q16@0:8
// Implementation: 0x10b0ecc80

// -[SCAutoCleanupFileContentResultImpl pushBytesToWriteStream:start:count:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x10b0ecc88

// -[SCAutoCleanupFileContentResultImpl getContentKey]
// Type encoding: @16@0:8
// Implementation: 0x10b0ecc90

// -[SCAutoCleanupFileContentResultImpl getStatus]
// Type encoding: q16@0:8
// Implementation: 0x10b0eccb8

// -[SCAutoCleanupFileContentResultImpl createReadStream]
// Type encoding: @16@0:8
// Implementation: 0x10b0eccc0

// -[SCAutoCleanupFileContentResultImpl retrieveIfSingleFile]
// Type encoding: @16@0:8
// Implementation: 0x10b0ecd20

// -[SCAutoCleanupFileContentResultImpl getMetrics]
// Type encoding: @16@0:8
// Implementation: 0x10b0ecd34

// -[SCAutoCleanupFileContentResultImpl getIsStreaming]
// Type encoding: B16@0:8
// Implementation: 0x10b0ecd7c

// -[SCAutoCleanupFileContentResultImpl updateStreamingRequestContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0ecd84

// -[SCAutoCleanupFileContentResultImpl getCurrentStreamingRequestContext]
// Type encoding: @16@0:8
// Implementation: 0x10b0ecd88

// -[SCAutoCleanupFileContentResultImpl free]
// Type encoding: v16@0:8
// Implementation: 0x10b0ecd90

// -[SCAutoCleanupFileContentResultImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10b0ecd94

// -[SCAutoCleanupFileContentResultImpl _deleteTemporaryFile]
// Type encoding: v16@0:8
// Implementation: 0x10b0ecde8

// -[SCAutoCleanupFileContentResultImpl getIsZipArchive]
// Type encoding: B16@0:8
// Implementation: 0x10b0ecf18

// -[SCAutoCleanupFileContentResultImpl getZipEntryData:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0ecf20

// -[SCAutoCleanupFileContentResultImpl getZipArchiveForLocalContent]
// Type encoding: @16@0:8
// Implementation: 0x10b0ecf28

// -[SCAutoCleanupFileContentResultImpl getFilePath]
// Type encoding: @16@0:8
// Implementation: 0x10b0ecf30

// -[SCAutoCleanupFileContentResultImpl getZipEntryFilePath:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0ecf58

// -[SCAutoCleanupFileContentResultImpl addDownloadCompletionListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0ecf60

// -[SCAutoCleanupFileContentResultImpl getIsAuthoritative]
// Type encoding: B16@0:8
// Implementation: 0x10b0ecf64

// -[SCAutoCleanupFileContentResultImpl hasEncryptionData]
// Type encoding: B16@0:8
// Implementation: 0x10b0ecf6c

// -[SCAutoCleanupFileContentResultImpl getErrorMessage]
// Type encoding: @16@0:8
// Implementation: 0x10b0ecf74

// -[SCAutoCleanupFileContentResultImpl stitchFilePath]
// Type encoding: @16@0:8
// Implementation: 0x10b0ecf7c

// -[SCAutoCleanupFileContentResultImpl streamingProtocol]
// Type encoding: @16@0:8
// Implementation: 0x10b0ecf84

// -[SCAutoCleanupFileContentResultImpl resolvedUrl]
// Type encoding: @16@0:8
// Implementation: 0x10b0ecf8c

// -[SCAutoCleanupFileContentResultImpl isEncrypted]
// Type encoding: q16@0:8
// Implementation: 0x10b0ecf94

// -[SCAutoCleanupFileContentResultImpl logConsumed:bytesRange:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10b0ecf9c

// -[SCAutoCleanupFileContentResultImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0ecfa0

@end
