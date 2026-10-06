// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVenueStickerView
// Superclass: SCPreviewStickerViewContentView
// Address: 0x112bc5448

@interface SCVenueStickerView

// Property: stickerView; attributes: T@"UIView",&,N,V_stickerView
// Property: pillType; attributes: TQ,N,V_pillType
// Property: interactionDelegate; attributes: T@"<SCVenueStickerViewInteractionDelegate>",W,N,V_interactionDelegate
// Property: config; attributes: T@"NSDictionary",R,N,V_config
// Property: venue; attributes: T@"SCCheckInOption",R,N,V_venue
// Property: placeTag; attributes: T@"SCPlaceTag",R,N,V_placeTag
// Property: viewType; attributes: Ti,R,N,V_viewType
// Property: venueIsFromSearch; attributes: TB,N,V_venueIsFromSearch
// Property: venueDistanceFromSnap; attributes: Td,N,V_venueDistanceFromSnap
// Property: infoType; attributes: TQ,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: item; attributes: T@"CTPItem",R,N,V_item
// Property: itemInstance; attributes: T@"SCCTPCTItemInstance",R,N,V_itemInstance
// Property: loadedFromCache; attributes: TB,N,V_loadedFromCache
// Property: imageView; attributes: T@"UIImageView",R,N
// Property: imageFuture; attributes: T@"SCFuture",?,R,N

// -[SCVenueStickerView initWithVenueStyle:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e6cdcc

// -[SCVenueStickerView initWithVenue:placeTag:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108e6d060

// -[SCVenueStickerView initForStickerPickerWithInteractiveStickerPillType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x108e6d070

// -[SCVenueStickerView initWithItemInstance:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e6d0f8

// -[SCVenueStickerView updateWithItemInstance:venueIsFromSearch:venueDistanceFromSnap:]
// Type encoding: v36@0:8@16B24d28
// Implementation: 0x108e6d4ec

// -[SCVenueStickerView initWithVenue:viewType:pillType:placeTag:]
// Type encoding: @44@0:8@16i24Q28@36
// Implementation: 0x108e6d604

// -[SCVenueStickerView initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e6d7ec

// -[SCVenueStickerView encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e6d820

// -[SCVenueStickerView copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x108e6d824

// -[SCVenueStickerView loggingParameters]
// Type encoding: @16@0:8
// Implementation: 0x108e6d848

// -[SCVenueStickerView packId]
// Type encoding: @16@0:8
// Implementation: 0x108e6d854

// -[SCVenueStickerView shortLoggingName]
// Type encoding: @16@0:8
// Implementation: 0x108e6d860

// -[SCVenueStickerView stickerId]
// Type encoding: @16@0:8
// Implementation: 0x108e6d8c4

// -[SCVenueStickerView text]
// Type encoding: @16@0:8
// Implementation: 0x108e6d8cc

// -[SCVenueStickerView venueName]
// Type encoding: @16@0:8
// Implementation: 0x108e6d8dc

// -[SCVenueStickerView toCTPItem]
// Type encoding: @16@0:8
// Implementation: 0x108e6d92c

// -[SCVenueStickerView toCTItemInstance]
// Type encoding: @16@0:8
// Implementation: 0x108e6d934

// -[SCVenueStickerView type]
// Type encoding: Q16@0:8
// Implementation: 0x108e6d964

// -[SCVenueStickerView infoType]
// Type encoding: Q16@0:8
// Implementation: 0x108e6d96c

// -[SCVenueStickerView intrinsicSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x108e6d974

// -[SCVenueStickerView setViewType:]
// Type encoding: v20@0:8i16
// Implementation: 0x108e6d99c

// -[SCVenueStickerView _rebuildStickerView]
// Type encoding: v16@0:8
// Implementation: 0x108e6d9bc

// -[SCVenueStickerView _setViewTypeToPillStyle:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108e6dab8

// -[SCVenueStickerView tappableElementBounds]
// Type encoding: @16@0:8
// Implementation: 0x108e6dbb0

// -[SCVenueStickerView shouldRespondToTap:]
// Type encoding: B24@0:8@16
// Implementation: 0x108e6dc44

// -[SCVenueStickerView cycleStickerToNextStyle]
// Type encoding: v16@0:8
// Implementation: 0x108e6dc88

// -[SCVenueStickerView scaleLimit]
// Type encoding: q16@0:8
// Implementation: 0x108e6dcb4

// -[SCVenueStickerView imageView]
// Type encoding: @16@0:8
// Implementation: 0x108e6dcbc

// -[SCVenueStickerView didEndDisplay]
// Type encoding: v16@0:8
// Implementation: 0x108e6dd5c

// -[SCVenueStickerView willDisplay]
// Type encoding: v16@0:8
// Implementation: 0x108e6dd60

// -[SCVenueStickerView _itemInstanceFromVenueId:name:type:]
// Type encoding: @36@0:8@16@24i32
// Implementation: 0x108e6dd64

// -[SCVenueStickerView loadedFromCache]
// Type encoding: B16@0:8
// Implementation: 0x108e6df20

// -[SCVenueStickerView setLoadedFromCache:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e6df30

// -[SCVenueStickerView item]
// Type encoding: @16@0:8
// Implementation: 0x108e6df40

// -[SCVenueStickerView itemInstance]
// Type encoding: @16@0:8
// Implementation: 0x108e6df50

// -[SCVenueStickerView interactionDelegate]
// Type encoding: @16@0:8
// Implementation: 0x108e6df60

// -[SCVenueStickerView setInteractionDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e6df80

// -[SCVenueStickerView config]
// Type encoding: @16@0:8
// Implementation: 0x108e6df94

// -[SCVenueStickerView venue]
// Type encoding: @16@0:8
// Implementation: 0x108e6dfa4

// -[SCVenueStickerView placeTag]
// Type encoding: @16@0:8
// Implementation: 0x108e6dfb4

// -[SCVenueStickerView viewType]
// Type encoding: i16@0:8
// Implementation: 0x108e6dfc4

// -[SCVenueStickerView venueIsFromSearch]
// Type encoding: B16@0:8
// Implementation: 0x108e6dfd4

// -[SCVenueStickerView setVenueIsFromSearch:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e6dfe4

// -[SCVenueStickerView venueDistanceFromSnap]
// Type encoding: d16@0:8
// Implementation: 0x108e6dff4

// -[SCVenueStickerView setVenueDistanceFromSnap:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e6e004

// -[SCVenueStickerView stickerView]
// Type encoding: @16@0:8
// Implementation: 0x108e6e014

// -[SCVenueStickerView setStickerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e6e024

// -[SCVenueStickerView pillType]
// Type encoding: Q16@0:8
// Implementation: 0x108e6e064

// -[SCVenueStickerView setPillType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108e6e074

// -[SCVenueStickerView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e6e084

// +[SCVenueStickerView placeholderVenueWithTitle:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e6cd1c

@end
