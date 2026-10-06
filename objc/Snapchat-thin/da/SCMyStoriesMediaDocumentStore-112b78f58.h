// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMyStoriesMediaDocumentStore
// Superclass: NSObject
// Address: 0x112b78f58

@interface SCMyStoriesMediaDocumentStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMyStoriesMediaDocumentStore initWithMediaPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x107cc7bb4

// -[SCMyStoriesMediaDocumentStore fetchMediaFromDiskForKey:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107cc7d38

// -[SCMyStoriesMediaDocumentStore _fetchMediaFromDiskForKey:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107cc7ea0

// -[SCMyStoriesMediaDocumentStore setMediaToDiskForKey:media:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107cc80b4

// -[SCMyStoriesMediaDocumentStore _setMediaToDiskForKey:media:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107cc8244

// -[SCMyStoriesMediaDocumentStore deleteMediaFromDiskWithKeys:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107cc845c

// -[SCMyStoriesMediaDocumentStore _deleteMediaFromDiskWithKeys:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107cc85c4

// -[SCMyStoriesMediaDocumentStore deleteAllMediaWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107cc878c

// -[SCMyStoriesMediaDocumentStore _deleteAllMediaWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107cc8898

// -[SCMyStoriesMediaDocumentStore _performDeleteExpiredMedia]
// Type encoding: v16@0:8
// Implementation: 0x107cc8ab4

// -[SCMyStoriesMediaDocumentStore _deleteExpiredMedia]
// Type encoding: v16@0:8
// Implementation: 0x107cc8b88

// -[SCMyStoriesMediaDocumentStore _createTrashURL]
// Type encoding: @16@0:8
// Implementation: 0x107cc8e68

// -[SCMyStoriesMediaDocumentStore _moveFileToTrashWithFileURL:trashURL:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107cc8f7c

// -[SCMyStoriesMediaDocumentStore _performEmptyTrashWithUrl:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107cc90c8

// -[SCMyStoriesMediaDocumentStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107cc9204

@end
