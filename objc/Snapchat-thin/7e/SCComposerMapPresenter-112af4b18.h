// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerMapPresenter
// Superclass: NSObject
// Address: 0x112af4b18

@interface SCComposerMapPresenter

// Property: uiContainer; attributes: T@"<SCUIContainer>",&,N,V_uiContainer
// Property: composerVenueFavoritesStoreObservable; attributes: T@"SCBridgeObservable",?,&,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerMapPresenter initWithPageLauncher:venueFavoritesStore:userLocationHelpers:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106744e64

// -[SCComposerMapPresenter initWithMapDestinationSubject:venueFavoritesStore:userLocationHelpers:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106744f30

// -[SCComposerMapPresenter _openMapWithDestination:mapOpenSource:grapheneSource:]
// Type encoding: v40@0:8@16q24Q32
// Implementation: 0x106744ffc

// -[SCComposerMapPresenter pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x1067451b4

// -[SCComposerMapPresenter composerVenueFavoritesStoreObservable]
// Type encoding: @16@0:8
// Implementation: 0x1067451c0

// -[SCComposerMapPresenter openMapToUserWithUserId:openSource:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106745238

// -[SCComposerMapPresenter presentPlaceOnSnapMapWithBoundsWithPlaceId:boundingBox:placeType:openSource:]
// Type encoding: v44@0:8@16@24i32@36
// Implementation: 0x1067452c4

// -[SCComposerMapPresenter openMapToRecentMovesWithUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1067454b0

// -[SCComposerMapPresenter getFormattedDistanceToLocationWithLat:lng:]
// Type encoding: @32@0:8d16d24
// Implementation: 0x1067454b4

// -[SCComposerMapPresenter uiContainer]
// Type encoding: @16@0:8
// Implementation: 0x106745514

// -[SCComposerMapPresenter setUiContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10674551c

// -[SCComposerMapPresenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10674554c

@end
