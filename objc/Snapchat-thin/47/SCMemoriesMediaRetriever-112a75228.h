// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesMediaRetriever
// Superclass: NSObject
// Address: 0x112a75228

@interface SCMemoriesMediaRetriever

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesMediaRetriever initWithMemoriesCloudFS:encryptedContentManager:dataObjectContext:snapDocManager:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1058a222c

// -[SCMemoriesMediaRetriever retrieveMediaForSnapId:shouldReportProgress:representation:]
// Type encoding: @36@0:8@16B24@28
// Implementation: 0x1058a23b4

// -[SCMemoriesMediaRetriever retrieveLocalMediaIfExistsForSnapId:representation:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1058a23c4

// -[SCMemoriesMediaRetriever retrieveVideoMediaForSnapId:representation:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1058a23d8

// -[SCMemoriesMediaRetriever _observableForSnapId:shouldReportProgress:shouldDecryptData:localOnly:representation:]
// Type encoding: @44@0:8@16B24B28B32@36
// Implementation: 0x1058a23ec

// -[SCMemoriesMediaRetriever _retrieveMediaWithProgressFor:shouldReportProgress:shouldDecryptData:localOnly:representation:observer:]
// Type encoding: v52@0:8@16B24B28B32@36@44
// Implementation: 0x1058a2724

// -[SCMemoriesMediaRetriever _protoAssetTypeFromRepresentation:]
// Type encoding: i24@0:8@16
// Implementation: 0x1058a2dcc

// -[SCMemoriesMediaRetriever _entryAssetForRepresentation:entryId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1058a2eac

// -[SCMemoriesMediaRetriever _cloudFSFileForEntryId:entryAsset:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1058a2f58

// -[SCMemoriesMediaRetriever _cloudFSFileForSnap:representation:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1058a3034

// -[SCMemoriesMediaRetriever _fileURLForFile:representation:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1058a32a8

// -[SCMemoriesMediaRetriever _downloadFile:snap:snapDoc:shouldReportProgress:shouldDecryptData:representation:observer:]
// Type encoding: v64@0:8@16@24@32B40B44@48@56
// Implementation: 0x1058a33cc

// -[SCMemoriesMediaRetriever _completeWithDecryptedDataFromSnapDoc:representation:observer:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1058a3978

// -[SCMemoriesMediaRetriever _completeWithDecryptedDataForSnap:cloudFile:representation:encryptionHint:observer:]
// Type encoding: v56@0:8@16@24@32q40@48
// Implementation: 0x1058a3bb0

// -[SCMemoriesMediaRetriever _completeWithUrl:snap:observer:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1058a3e44

// -[SCMemoriesMediaRetriever .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1058a4084

@end
