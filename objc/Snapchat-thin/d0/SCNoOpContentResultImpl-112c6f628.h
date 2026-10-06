// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNoOpContentResultImpl
// Superclass: NSObject
// Address: 0x112c6f628

@interface SCNoOpContentResultImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNoOpContentResultImpl initWithContentKey:status:error:assertionEnabled:]
// Type encoding: @44@0:8@16q24@32B40
// Implementation: 0x10b0ef014

// -[SCNoOpContentResultImpl getTotalSize]
// Type encoding: q16@0:8
// Implementation: 0x10b0ef118

// -[SCNoOpContentResultImpl getPrefetchSize]
// Type encoding: q16@0:8
// Implementation: 0x10b0ef120

// -[SCNoOpContentResultImpl getAvailableSize]
// Type encoding: q16@0:8
// Implementation: 0x10b0ef128

// -[SCNoOpContentResultImpl pushBytesToWriteStream:start:count:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x10b0ef130

// -[SCNoOpContentResultImpl getContentKey]
// Type encoding: @16@0:8
// Implementation: 0x10b0ef138

// -[SCNoOpContentResultImpl getStatus]
// Type encoding: q16@0:8
// Implementation: 0x10b0ef160

// -[SCNoOpContentResultImpl createReadStream]
// Type encoding: @16@0:8
// Implementation: 0x10b0ef168

// -[SCNoOpContentResultImpl retrieveIfSingleFile]
// Type encoding: @16@0:8
// Implementation: 0x10b0ef170

// -[SCNoOpContentResultImpl getMetrics]
// Type encoding: @16@0:8
// Implementation: 0x10b0ef178

// -[SCNoOpContentResultImpl getIsStreaming]
// Type encoding: B16@0:8
// Implementation: 0x10b0ef1a0

// -[SCNoOpContentResultImpl updateStreamingRequestContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0ef1a8

// -[SCNoOpContentResultImpl getCurrentStreamingRequestContext]
// Type encoding: @16@0:8
// Implementation: 0x10b0ef1ac

// -[SCNoOpContentResultImpl free]
// Type encoding: v16@0:8
// Implementation: 0x10b0ef1b4

// -[SCNoOpContentResultImpl getIsZipArchive]
// Type encoding: B16@0:8
// Implementation: 0x10b0ef1b8

// -[SCNoOpContentResultImpl getZipEntryData:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0ef1c0

// -[SCNoOpContentResultImpl getZipArchiveForLocalContent]
// Type encoding: @16@0:8
// Implementation: 0x10b0ef1c8

// -[SCNoOpContentResultImpl getFilePath]
// Type encoding: @16@0:8
// Implementation: 0x10b0ef1d0

// -[SCNoOpContentResultImpl getZipEntryFilePath:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0ef1d8

// -[SCNoOpContentResultImpl addDownloadCompletionListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0ef1e0

// -[SCNoOpContentResultImpl getIsAuthoritative]
// Type encoding: B16@0:8
// Implementation: 0x10b0ef1e4

// -[SCNoOpContentResultImpl hasEncryptionData]
// Type encoding: B16@0:8
// Implementation: 0x10b0ef1ec

// -[SCNoOpContentResultImpl getErrorMessage]
// Type encoding: @16@0:8
// Implementation: 0x10b0ef1f4

// -[SCNoOpContentResultImpl stitchFilePath]
// Type encoding: @16@0:8
// Implementation: 0x10b0ef1fc

// -[SCNoOpContentResultImpl streamingProtocol]
// Type encoding: @16@0:8
// Implementation: 0x10b0ef204

// -[SCNoOpContentResultImpl resolvedUrl]
// Type encoding: @16@0:8
// Implementation: 0x10b0ef20c

// -[SCNoOpContentResultImpl isEncrypted]
// Type encoding: q16@0:8
// Implementation: 0x10b0ef214

// -[SCNoOpContentResultImpl logConsumed:bytesRange:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10b0ef21c

// -[SCNoOpContentResultImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0ef220

@end
