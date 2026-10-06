// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapComposerStoryPlayer
// Superclass: NSObject
// Address: 0x112b16df8

@interface SCMapComposerStoryPlayer

// Property: presentingUIContainer; attributes: T@"<SCUIContainer>",&,N,V_presentingUIContainer
// Property: presentingViewController; attributes: T@"UIViewController",W,N,V_presentingViewController
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapComposerStoryPlayer initWithPresentingViewController:uiContainer:pageLauncher:mapStoryFetcher:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106b14ec8

// -[SCMapComposerStoryPlayer preparePlaylistForPlaceID:source:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106b14fe0

// -[SCMapComposerStoryPlayer launchRecencyOrderedPlaybackWithPlaceId:node:analytics:providerPhotoType:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106b15158

// -[SCMapComposerStoryPlayer launchRankOrderedPlaybackWithPlaceId:node:startingSnapId:analytics:providerPhotoType:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x106b152f4

// -[SCMapComposerStoryPlayer pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x106b15484

// -[SCMapComposerStoryPlayer _payloadWithPlaceId:baseView:analytics:providerPhotoType:useAlternateRanking:requestId:initialSnapId:prefetchedStorySequences:transition:]
// Type encoding: @80@0:8@16@24@32i40B44@48@56@64q72
// Implementation: 0x106b15490

// -[SCMapComposerStoryPlayer _launchWithPayload:placeId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106b1582c

// -[SCMapComposerStoryPlayer _publishPlaybackFailureAsynchronouslyForPlaceId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106b15a48

// -[SCMapComposerStoryPlayer _forceDismissKeyboard]
// Type encoding: v16@0:8
// Implementation: 0x106b15ac8

// -[SCMapComposerStoryPlayer presentingUIContainer]
// Type encoding: @16@0:8
// Implementation: 0x106b15b28

// -[SCMapComposerStoryPlayer setPresentingUIContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b15b30

// -[SCMapComposerStoryPlayer presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x106b15b60

// -[SCMapComposerStoryPlayer setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b15b78

// -[SCMapComposerStoryPlayer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106b15b84

@end
