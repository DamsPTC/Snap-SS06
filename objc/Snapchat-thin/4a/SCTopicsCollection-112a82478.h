// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTopicsCollection
// Superclass: NSObject
// Address: 0x112a82478

@interface SCTopicsCollection

// Property: includeSelectedTopicsInOurStorySubtext; attributes: TB,N,V_includeSelectedTopicsInOurStorySubtext
// Property: ourStorySubtextObservable; attributes: T@"SCObservable",R,N
// Property: selectedTopicsObservable; attributes: T@"SCObservable",R,N
// Property: spotlightDescriptionObservable; attributes: T@"SCObservable",R,N
// Property: ourStorySubtextAndPlaceTagObservable; attributes: T@"SCObservable",R,N
// Property: placesTaggedObservable; attributes: T@"SCObservable",R,N
// Property: taggedPlace; attributes: T@"SCPlaceTag",R,N
// Property: availablePlaceTags; attributes: T@"NSArray",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTopicsCollection init]
// Type encoding: @16@0:8
// Implementation: 0x1059ec680

// -[SCTopicsCollection availablePlaceTags]
// Type encoding: @16@0:8
// Implementation: 0x1059ec7bc

// -[SCTopicsCollection getPlaceTagForSource:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1059ec814

// -[SCTopicsCollection addPlaceTag:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059ec86c

// -[SCTopicsCollection _addPlaceTag:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059ec960

// -[SCTopicsCollection updatePlaceTagDisplayStateForSource:shouldDisplayAsTag:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x1059eca90

// -[SCTopicsCollection removePlaceTag:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059ecbc0

// -[SCTopicsCollection _removePlaceTag:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059eccb4

// -[SCTopicsCollection taggedPlace]
// Type encoding: @16@0:8
// Implementation: 0x1059ecde0

// -[SCTopicsCollection placesTaggedObservable]
// Type encoding: @16@0:8
// Implementation: 0x1059ecf5c

// -[SCTopicsCollection selectedTopicsObservable]
// Type encoding: @16@0:8
// Implementation: 0x1059ecf84

// -[SCTopicsCollection ourStorySubtextAndPlaceTagObservable]
// Type encoding: @16@0:8
// Implementation: 0x1059ecfac

// -[SCTopicsCollection spotlightDescriptionObservable]
// Type encoding: @16@0:8
// Implementation: 0x1059ecfb4

// -[SCTopicsCollection ourStorySubtextObservable]
// Type encoding: @16@0:8
// Implementation: 0x1059ecfbc

// -[SCTopicsCollection addTopic:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059ed010

// -[SCTopicsCollection notifyObservablesIfSpotlightDescriptionDidUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1059ed104

// -[SCTopicsCollection setSpotlightDescription:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059ed110

// -[SCTopicsCollection spotlightDescription]
// Type encoding: @16@0:8
// Implementation: 0x1059ed140

// -[SCTopicsCollection _addTopic:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059ed158

// -[SCTopicsCollection removeTopic:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059ed1bc

// -[SCTopicsCollection _removeTopic:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059ed2b0

// -[SCTopicsCollection updateCaptionTopicsWithNewTopics:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059ed300

// -[SCTopicsCollection _updateCaptionTopicsWithNewTopics:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059ed3f0

// -[SCTopicsCollection getSelectedTopicsWithCompletion:completionQueue:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x1059ed700

// -[SCTopicsCollection _copyAndReturnTopicsAsyncWithCompletion:completionQueue:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x1059ed81c

// -[SCTopicsCollection setTopicStickers:venueStickers:selectedVenueFilterName:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1059ed94c

// -[SCTopicsCollection updatePlaceTagsWithVenueStickers:venueFilter:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1059eda94

// -[SCTopicsCollection _setTopicStickers:venueStickers:selectedVenueFilterName:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1059edba8

// -[SCTopicsCollection _setTaggedPlacesWithVenueStickers:venueFilter:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1059edc48

// -[SCTopicsCollection getOurStorySubtextWithCompletionQueue:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1059ede0c

// -[SCTopicsCollection getOurStorySubtextIncludingTopics:completionQueue:completion:]
// Type encoding: v36@0:8B16@20@?28
// Implementation: 0x1059edf34

// -[SCTopicsCollection _getOurStorySubtextIncludingTopics:completionQueue:completion:]
// Type encoding: v36@0:8B16@20@?28
// Implementation: 0x1059ee05c

// -[SCTopicsCollection getSpotlightSubtextWithCompletionQueue:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1059ee440

// -[SCTopicsCollection _getSpotlightSubtextWithCompletionQueue:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1059ee554

// -[SCTopicsCollection isValidHashtag:]
// Type encoding: B24@0:8@16
// Implementation: 0x1059ee730

// -[SCTopicsCollection _asyncAnnounceUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1059ee828

// -[SCTopicsCollection _announceUpdateWithPostingHint:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059ee92c

// -[SCTopicsCollection includeSelectedTopicsInOurStorySubtext]
// Type encoding: B16@0:8
// Implementation: 0x1059ee9b4

// -[SCTopicsCollection setIncludeSelectedTopicsInOurStorySubtext:]
// Type encoding: v20@0:8B16
// Implementation: 0x1059ee9bc

// -[SCTopicsCollection .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059ee9c4

@end
