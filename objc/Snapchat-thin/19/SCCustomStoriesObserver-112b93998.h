// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCustomStoriesObserver
// Superclass: NSObject
// Address: 0x112b93998

@interface SCCustomStoriesObserver

// Property: delegate; attributes: T@"<SCCustomStoriesObserverDelegate>",W,N,V_delegate

// -[SCCustomStoriesObserver initWithDocObjectContext:performer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100445f14

// -[SCCustomStoriesObserver startObservingCustomStoriesMetadata]
// Type encoding: v16@0:8
// Implementation: 0x1004471c8

// -[SCCustomStoriesObserver startObservingPendingCustomStoriesMetadata]
// Type encoding: v16@0:8
// Implementation: 0x100447220

// -[SCCustomStoriesObserver _updatePendingCustomStoryMetadataDictionaryWithFetchedResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x100559138

// -[SCCustomStoriesObserver _updateCustomStoryMetadataDictionaryWithFetchedResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x1005566c4

// -[SCCustomStoriesObserver customStoryMetadataForPublicationIds:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1080508f8

// -[SCCustomStoriesObserver customStoryMetadataWithCompletionQueue:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108050b8c

// -[SCCustomStoriesObserver pendingCustomStoryMetadataForPublicationIds:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108050c60

// -[SCCustomStoriesObserver pendingCustomStoryMetadataWithCompletionQueue:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108050ef4

// -[SCCustomStoriesObserver customStoryMetadataByCreatorUserId:storyType:completionQueue:completion:]
// Type encoding: v48@0:8@16q24@32@?40
// Implementation: 0x108050fc8

// -[SCCustomStoriesObserver customStoryMetadataObservableForPublicationId:observationQueue:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108051240

// -[SCCustomStoriesObserver customStoryPublicGroupMetadataObservableForFriendId:groupId:observationQueue:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108051328

// -[SCCustomStoriesObserver customStoryMetadataMapObservable]
// Type encoding: @16@0:8
// Implementation: 0x1080513f8

// -[SCCustomStoriesObserver pendingCustomStoryMetadataMapObservable]
// Type encoding: @16@0:8
// Implementation: 0x108051420

// -[SCCustomStoriesObserver customStoryMetadataWithPublicationId:]
// Type encoding: @24@0:8@16
// Implementation: 0x108051448

// -[SCCustomStoriesObserver delegate]
// Type encoding: @16@0:8
// Implementation: 0x1080515bc

// -[SCCustomStoriesObserver setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x100446030

// -[SCCustomStoriesObserver .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1080515d4

@end
