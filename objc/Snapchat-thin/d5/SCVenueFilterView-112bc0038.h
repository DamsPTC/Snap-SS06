// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVenueFilterView
// Superclass: SCOverlayFilterView
// Address: 0x112bc0038

@interface SCVenueFilterView

// Property: tooltip; attributes: T@"SCPreviewTooltipBalloon",&,N,V_tooltip
// Property: selectedVenueId; attributes: T@"NSString",R,N
// Property: selectedVenueName; attributes: T@"NSString",R,N
// Property: delegate; attributes: T@"<SCVenueFilterViewDelegate>",W,N,V_delegate
// Property: firstVenueId; attributes: T@"NSString",R,N,V_firstVenueId
// Property: geoFilterView; attributes: T@"SCOverlayFilterView<SCGeoFilterView>",R,N,V_geoFilterView
// Property: venueFilterSelector; attributes: T@"SCVenueFilterSelector",&,N,V_venueFilterSelector
// Property: selectedPlaceTag; attributes: T@"SCPlaceTag",R,N

// -[SCVenueFilterView initWithFrame:config:]
// Type encoding: @56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48
// Implementation: 0x108d0db0c

// -[SCVenueFilterView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x108d0e040

// -[SCVenueFilterView _setupWithPlace:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d0e2a8

// -[SCVenueFilterView _clearBackgroundGeoFilter]
// Type encoding: v16@0:8
// Implementation: 0x108d0e66c

// -[SCVenueFilterView _formatPlaceName:withMaxTextWidth:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x108d0e6bc

// -[SCVenueFilterView _dismissTooltipWithAnimation:]
// Type encoding: v20@0:8B16
// Implementation: 0x108d0ea34

// -[SCVenueFilterView tap:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d0eb44

// -[SCVenueFilterView shouldRespondToTap:]
// Type encoding: B24@0:8@16
// Implementation: 0x108d0efdc

// -[SCVenueFilterView shouldRespondToTouchControl:]
// Type encoding: B24@0:8@16
// Implementation: 0x108d0efe0

// -[SCVenueFilterView pan:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d0f050

// -[SCVenueFilterView rotation:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d0f0cc

// -[SCVenueFilterView pinch:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d0f0d0

// -[SCVenueFilterView setDisplayed:]
// Type encoding: v20@0:8B16
// Implementation: 0x108d0f0d4

// -[SCVenueFilterView updateConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d0f1d8

// -[SCVenueFilterView drawScreenshotImageInCurrentContextWithRect:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108d0f2d4

// -[SCVenueFilterView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d0f384

// -[SCVenueFilterView selectedPlaceID]
// Type encoding: @16@0:8
// Implementation: 0x108d0f3e0

// -[SCVenueFilterView selectedVenueId]
// Type encoding: @16@0:8
// Implementation: 0x108d0f444

// -[SCVenueFilterView selectedVenueName]
// Type encoding: @16@0:8
// Implementation: 0x108d0f494

// -[SCVenueFilterView venueFilterArray]
// Type encoding: @16@0:8
// Implementation: 0x108d0f4e4

// -[SCVenueFilterView selectedVenueIndex]
// Type encoding: Q16@0:8
// Implementation: 0x108d0f4f4

// -[SCVenueFilterView selectedPlaceTag]
// Type encoding: @16@0:8
// Implementation: 0x108d0f504

// -[SCVenueFilterView venueYOffset]
// Type encoding: d16@0:8
// Implementation: 0x108d0f514

// -[SCVenueFilterView _totalHeight]
// Type encoding: d16@0:8
// Implementation: 0x108d0f59c

// -[SCVenueFilterView hasBackgroundFilter]
// Type encoding: B16@0:8
// Implementation: 0x108d0f5e4

// -[SCVenueFilterView _yOffsetFromVenueSelector]
// Type encoding: d16@0:8
// Implementation: 0x108d0f5fc

// -[SCVenueFilterView _updateVenueSelectorYOffsetForViewOffset:]
// Type encoding: v24@0:8d16
// Implementation: 0x108d0f670

// -[SCVenueFilterView displayName]
// Type encoding: @16@0:8
// Implementation: 0x108d0f6c4

// -[SCVenueFilterView _textAttributesWithFont:kerning:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x108d0f6c8

// -[SCVenueFilterView _makeLabel]
// Type encoding: @16@0:8
// Implementation: 0x108d0f938

// -[SCVenueFilterView _makeDividerView]
// Type encoding: @16@0:8
// Implementation: 0x108d0f978

// -[SCVenueFilterView _setupTooltip]
// Type encoding: B16@0:8
// Implementation: 0x108d0fb38

// -[SCVenueFilterView _maximumNameFontSize]
// Type encoding: d16@0:8
// Implementation: 0x108d0fc8c

// -[SCVenueFilterView _labelFontSize]
// Type encoding: d16@0:8
// Implementation: 0x108d0fcf4

// -[SCVenueFilterView _updateRelativeFilterSizeAndCenter]
// Type encoding: v16@0:8
// Implementation: 0x108d0fd5c

// -[SCVenueFilterView _identityScaleTransform]
// Type encoding: v16@0:8
// Implementation: 0x108d0fe9c

// -[SCVenueFilterView _isAnimatingSingleEntityBounce]
// Type encoding: B16@0:8
// Implementation: 0x108d0ff58

// -[SCVenueFilterView moveVenueFilterWithTranslationY:]
// Type encoding: v24@0:8d16
// Implementation: 0x108d0ffc4

// -[SCVenueFilterView moveVenueFilterToTop]
// Type encoding: v16@0:8
// Implementation: 0x108d100c4

// -[SCVenueFilterView delegate]
// Type encoding: @16@0:8
// Implementation: 0x108d1011c

// -[SCVenueFilterView firstVenueId]
// Type encoding: @16@0:8
// Implementation: 0x108d1013c

// -[SCVenueFilterView geoFilterView]
// Type encoding: @16@0:8
// Implementation: 0x108d1014c

// -[SCVenueFilterView venueFilterSelector]
// Type encoding: @16@0:8
// Implementation: 0x108d1015c

// -[SCVenueFilterView setVenueFilterSelector:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d1016c

// -[SCVenueFilterView tooltip]
// Type encoding: @16@0:8
// Implementation: 0x108d101ac

// -[SCVenueFilterView setTooltip:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d101bc

// -[SCVenueFilterView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108d101fc

@end
