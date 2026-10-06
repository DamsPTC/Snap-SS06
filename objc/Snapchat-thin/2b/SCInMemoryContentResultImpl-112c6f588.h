// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCInMemoryContentResultImpl
// Superclass: NSObject
// Address: 0x112c6f588

@interface SCInMemoryContentResultImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCInMemoryContentResultImpl initWithContentKey:data:isPlatformSafe:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x10b0eebe0

// -[SCInMemoryContentResultImpl getTotalSize]
// Type encoding: q16@0:8
// Implementation: 0x10b0eec8c

// -[SCInMemoryContentResultImpl getPrefetchSize]
// Type encoding: q16@0:8
// Implementation: 0x10b0eec94

// -[SCInMemoryContentResultImpl getAvailableSize]
// Type encoding: q16@0:8
// Implementation: 0x10b0eec9c

// -[SCInMemoryContentResultImpl pushBytesToWriteStream:start:count:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x10b0eeca4

// -[SCInMemoryContentResultImpl getContentKey]
// Type encoding: @16@0:8
// Implementation: 0x10b0eecac

// -[SCInMemoryContentResultImpl getStatus]
// Type encoding: q16@0:8
// Implementation: 0x10b0eecd4

// -[SCInMemoryContentResultImpl createReadStream]
// Type encoding: @16@0:8
// Implementation: 0x10b0eecdc

// -[SCInMemoryContentResultImpl retrieveIfSingleFile]
// Type encoding: @16@0:8
// Implementation: 0x10b0eed10

// -[SCInMemoryContentResultImpl getMetrics]
// Type encoding: @16@0:8
// Implementation: 0x10b0eed38

// -[SCInMemoryContentResultImpl getIsStreaming]
// Type encoding: B16@0:8
// Implementation: 0x10b0eed80

// -[SCInMemoryContentResultImpl updateStreamingRequestContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0eed88

// -[SCInMemoryContentResultImpl getCurrentStreamingRequestContext]
// Type encoding: @16@0:8
// Implementation: 0x10b0eed8c

// -[SCInMemoryContentResultImpl free]
// Type encoding: v16@0:8
// Implementation: 0x10b0eed94

// -[SCInMemoryContentResultImpl getIsZipArchive]
// Type encoding: B16@0:8
// Implementation: 0x10b0eed98

// -[SCInMemoryContentResultImpl getZipEntryData:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0eeda0

// -[SCInMemoryContentResultImpl getZipArchiveForLocalContent]
// Type encoding: @16@0:8
// Implementation: 0x10b0eeda8

// -[SCInMemoryContentResultImpl getFilePath]
// Type encoding: @16@0:8
// Implementation: 0x10b0eedb0

// -[SCInMemoryContentResultImpl getZipEntryFilePath:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0eedb8

// -[SCInMemoryContentResultImpl addDownloadCompletionListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0eedc0

// -[SCInMemoryContentResultImpl getIsAuthoritative]
// Type encoding: B16@0:8
// Implementation: 0x10b0eedc4

// -[SCInMemoryContentResultImpl hasEncryptionData]
// Type encoding: B16@0:8
// Implementation: 0x10b0eedcc

// -[SCInMemoryContentResultImpl getErrorMessage]
// Type encoding: @16@0:8
// Implementation: 0x10b0eedd4

// -[SCInMemoryContentResultImpl stitchFilePath]
// Type encoding: @16@0:8
// Implementation: 0x10b0eeddc

// -[SCInMemoryContentResultImpl streamingProtocol]
// Type encoding: @16@0:8
// Implementation: 0x10b0eede4

// -[SCInMemoryContentResultImpl resolvedUrl]
// Type encoding: @16@0:8
// Implementation: 0x10b0eedec

// -[SCInMemoryContentResultImpl isEncrypted]
// Type encoding: q16@0:8
// Implementation: 0x10b0eedf4

// -[SCInMemoryContentResultImpl logConsumed:bytesRange:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10b0eedfc

// -[SCInMemoryContentResultImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0eee00

@end
