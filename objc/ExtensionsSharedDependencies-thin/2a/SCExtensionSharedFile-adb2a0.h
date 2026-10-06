// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCExtensionSharedFile
// Superclass: NSObject
// Address: 0xadb2a0

@interface SCExtensionSharedFile

// Property: presentedItemOperationQueue; attributes: T@"NSOperationQueue",&,V_presentedItemOperationQueue
// Property: delegate; attributes: T@"<SCExtensionSharedFileDelegate>",W,N,V_delegate
// Property: presentedItemURL; attributes: T@"NSURL",&,N,V_presentedItemURL
// Property: primaryPresentedItemURL; attributes: T@"NSURL",?,R,C
// Property: observedPresentedItemUbiquityAttributes; attributes: T@"NSSet",?,R
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCExtensionSharedFile initWithName:delegate:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x5b07e4

// -[SCExtensionSharedFile initWithName:groupContainerURL:delegate:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x5b0870

// -[SCExtensionSharedFile initUserScopedFileWithUserId:filename:delegate:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x5b0888

// -[SCExtensionSharedFile initFileWithDirectoryURL:filename:delegate:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x5b0924

// -[SCExtensionSharedFile _initFileWithDirectoryURL:filename:autoCreateDirectory:delegate:]
// Type encoding: @44@0:8@16@24B32@36
// Implementation: 0x5b0930

// -[SCExtensionSharedFile dealloc]
// Type encoding: v16@0:8
// Implementation: 0x5b0a5c

// -[SCExtensionSharedFile _getAutoCreateDirectory]
// Type encoding: B16@0:8
// Implementation: 0x5b0aac

// -[SCExtensionSharedFile _createFileIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x5b0ab4

// -[SCExtensionSharedFile _createDirectoryIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x5b0b90

// -[SCExtensionSharedFile presentedItemDidChange]
// Type encoding: v16@0:8
// Implementation: 0x5b0c74

// -[SCExtensionSharedFile _atomicallyWriteData:toURL:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x5b0cac

// -[SCExtensionSharedFile writeData:]
// Type encoding: @24@0:8@16
// Implementation: 0x5b0dc8

// -[SCExtensionSharedFile appendData:withSizeLimit:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x5b0fa8

// -[SCExtensionSharedFile _appendDataToFile:withData:sizeLimit:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x5b10a4

// -[SCExtensionSharedFile appendData:]
// Type encoding: @24@0:8@16
// Implementation: 0x5b1248

// -[SCExtensionSharedFile modifyDataWithModificationBlock:error:]
// Type encoding: v32@0:8@?16^@24
// Implementation: 0x5b156c

// -[SCExtensionSharedFile copyDataFromURL:error:]
// Type encoding: v32@0:8@16^@24
// Implementation: 0x5b1914

// -[SCExtensionSharedFile fileExists]
// Type encoding: B16@0:8
// Implementation: 0x5b1b30

// -[SCExtensionSharedFile readData]
// Type encoding: @16@0:8
// Implementation: 0x5b1ba4

// -[SCExtensionSharedFile deleteFileWithError:]
// Type encoding: v24@0:8^@16
// Implementation: 0x5b1d14

// -[SCExtensionSharedFile createSymbolicLinkToFilename:error:]
// Type encoding: v32@0:8@16^@24
// Implementation: 0x5b2098

// -[SCExtensionSharedFile delegate]
// Type encoding: @16@0:8
// Implementation: 0x5b2164

// -[SCExtensionSharedFile setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x5b217c

// -[SCExtensionSharedFile presentedItemURL]
// Type encoding: @16@0:8
// Implementation: 0x5b2188

// -[SCExtensionSharedFile setPresentedItemURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x5b2190

// -[SCExtensionSharedFile presentedItemOperationQueue]
// Type encoding: @16@0:8
// Implementation: 0x5b21c0

// -[SCExtensionSharedFile setPresentedItemOperationQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x5b21cc

// -[SCExtensionSharedFile .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x5b21d4

@end
