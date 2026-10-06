// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCExtensionSharedFile
// Superclass: NSObject
// Address: 0x112d2c458

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
// Implementation: 0x10bc7f43c

// -[SCExtensionSharedFile initWithName:groupContainerURL:delegate:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10bc7f4c8

// -[SCExtensionSharedFile initUserScopedFileWithUserId:filename:delegate:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10063b67c

// -[SCExtensionSharedFile initFileWithDirectoryURL:filename:delegate:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100647bd8

// -[SCExtensionSharedFile _initFileWithDirectoryURL:filename:autoCreateDirectory:delegate:]
// Type encoding: @44@0:8@16@24B32@36
// Implementation: 0x100647be4

// -[SCExtensionSharedFile dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10bc7f4e0

// -[SCExtensionSharedFile _getAutoCreateDirectory]
// Type encoding: B16@0:8
// Implementation: 0x10bc7f530

// -[SCExtensionSharedFile _createFileIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x100bfba6c

// -[SCExtensionSharedFile _createDirectoryIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x100bfbb48

// -[SCExtensionSharedFile presentedItemDidChange]
// Type encoding: v16@0:8
// Implementation: 0x10bc7f538

// -[SCExtensionSharedFile _atomicallyWriteData:toURL:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100bfe130

// -[SCExtensionSharedFile writeData:]
// Type encoding: @24@0:8@16
// Implementation: 0x100bfb8ec

// -[SCExtensionSharedFile appendData:withSizeLimit:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10bc7f588

// -[SCExtensionSharedFile _appendDataToFile:withData:sizeLimit:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x10bc7f684

// -[SCExtensionSharedFile appendData:]
// Type encoding: @24@0:8@16
// Implementation: 0x10bc7f828

// -[SCExtensionSharedFile modifyDataWithModificationBlock:error:]
// Type encoding: v32@0:8@?16^@24
// Implementation: 0x10bc7fb4c

// -[SCExtensionSharedFile copyDataFromURL:error:]
// Type encoding: v32@0:8@16^@24
// Implementation: 0x10bc7feb0

// -[SCExtensionSharedFile fileExists]
// Type encoding: B16@0:8
// Implementation: 0x100665938

// -[SCExtensionSharedFile readData]
// Type encoding: @16@0:8
// Implementation: 0x100665810

// -[SCExtensionSharedFile deleteFileWithError:]
// Type encoding: v24@0:8^@16
// Implementation: 0x10bc800cc

// -[SCExtensionSharedFile createSymbolicLinkToFilename:error:]
// Type encoding: v32@0:8@16^@24
// Implementation: 0x10bc80450

// -[SCExtensionSharedFile delegate]
// Type encoding: @16@0:8
// Implementation: 0x10bc8051c

// -[SCExtensionSharedFile setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bc80534

// -[SCExtensionSharedFile presentedItemURL]
// Type encoding: @16@0:8
// Implementation: 0x10067541c

// -[SCExtensionSharedFile setPresentedItemURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bc80540

// -[SCExtensionSharedFile presentedItemOperationQueue]
// Type encoding: @16@0:8
// Implementation: 0x10bc80570

// -[SCExtensionSharedFile setPresentedItemOperationQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bc8057c

// -[SCExtensionSharedFile .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10bc80584

@end
