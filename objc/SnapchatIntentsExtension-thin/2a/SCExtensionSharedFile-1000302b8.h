// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCExtensionSharedFile
// Superclass: NSObject
// Address: 0x1000302b8

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
// Implementation: 0x100019514

// -[SCExtensionSharedFile initWithName:groupContainerURL:delegate:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1000195a0

// -[SCExtensionSharedFile initUserScopedFileWithUserId:filename:delegate:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1000195b8

// -[SCExtensionSharedFile initFileWithDirectoryURL:filename:delegate:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100019654

// -[SCExtensionSharedFile _initFileWithDirectoryURL:filename:autoCreateDirectory:delegate:]
// Type encoding: @44@0:8@16@24B32@36
// Implementation: 0x100019660

// -[SCExtensionSharedFile dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10001978c

// -[SCExtensionSharedFile _getAutoCreateDirectory]
// Type encoding: B16@0:8
// Implementation: 0x1000197dc

// -[SCExtensionSharedFile _createFileIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1000197e4

// -[SCExtensionSharedFile _createDirectoryIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1000198c0

// -[SCExtensionSharedFile presentedItemDidChange]
// Type encoding: v16@0:8
// Implementation: 0x1000199a4

// -[SCExtensionSharedFile _atomicallyWriteData:toURL:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1000199dc

// -[SCExtensionSharedFile writeData:]
// Type encoding: @24@0:8@16
// Implementation: 0x100019af8

// -[SCExtensionSharedFile appendData:withSizeLimit:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x100019d48

// -[SCExtensionSharedFile _appendDataToFile:withData:sizeLimit:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x100019e44

// -[SCExtensionSharedFile appendData:]
// Type encoding: @24@0:8@16
// Implementation: 0x100019fe8

// -[SCExtensionSharedFile modifyDataWithModificationBlock:error:]
// Type encoding: v32@0:8@?16^@24
// Implementation: 0x10001a36c

// -[SCExtensionSharedFile copyDataFromURL:error:]
// Type encoding: v32@0:8@16^@24
// Implementation: 0x10001a714

// -[SCExtensionSharedFile fileExists]
// Type encoding: B16@0:8
// Implementation: 0x10001a94c

// -[SCExtensionSharedFile readData]
// Type encoding: @16@0:8
// Implementation: 0x10001a9c0

// -[SCExtensionSharedFile deleteFileWithError:]
// Type encoding: v24@0:8^@16
// Implementation: 0x10001ab30

// -[SCExtensionSharedFile createSymbolicLinkToFilename:error:]
// Type encoding: v32@0:8@16^@24
// Implementation: 0x10001aeb4

// -[SCExtensionSharedFile delegate]
// Type encoding: @16@0:8
// Implementation: 0x10001af80

// -[SCExtensionSharedFile setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10001af98

// -[SCExtensionSharedFile presentedItemURL]
// Type encoding: @16@0:8
// Implementation: 0x10001afa4

// -[SCExtensionSharedFile setPresentedItemURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x10001afac

// -[SCExtensionSharedFile presentedItemOperationQueue]
// Type encoding: @16@0:8
// Implementation: 0x10001afdc

// -[SCExtensionSharedFile setPresentedItemOperationQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x10001afe8

// -[SCExtensionSharedFile .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10001aff0

@end
