// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStickerInjectorBase
// Superclass: NSObject
// Address: 0x112a9af50

@interface SCStickerInjectorBase


// -[SCStickerInjectorBase registerInjector:config:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d050f0

// -[SCStickerInjectorBase expectedCTPEntityTypeNum]
// Type encoding: @16@0:8
// Implementation: 0x105d051cc

// -[SCStickerInjectorBase expectedCTItemInstanceTypeNum]
// Type encoding: @16@0:8
// Implementation: 0x105d051d4

// -[SCStickerInjectorBase expectedStickerTypeNum]
// Type encoding: @16@0:8
// Implementation: 0x105d051dc

// -[SCStickerInjectorBase expectedSOJUGalleryStickerTypeNum]
// Type encoding: @16@0:8
// Implementation: 0x105d051e4

// -[SCStickerInjectorBase typeForCTPItem:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105d051ec

// -[SCStickerInjectorBase typeForCTItemInstance:]
// Type encoding: q24@0:8@16
// Implementation: 0x105d051f4

// -[SCStickerInjectorBase typeForStickerState:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105d051fc

// -[SCStickerInjectorBase typeForSOJUGallerySticker:]
// Type encoding: q24@0:8@16
// Implementation: 0x105d05204

// -[SCStickerInjectorBase isStickerSupportedWithCTPItem:]
// Type encoding: B24@0:8@16
// Implementation: 0x105d0520c

// -[SCStickerInjectorBase isStickerSupportedWithStickerState:]
// Type encoding: B24@0:8@16
// Implementation: 0x105d052e4

// -[SCStickerInjectorBase isStickerSupportedWithSOJUGallerySticker:]
// Type encoding: B24@0:8@16
// Implementation: 0x105d053bc

// -[SCStickerInjectorBase addLoggingParamsWithLoggingParamsBuilder:stickerViews:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d05494

// -[SCStickerInjectorBase ctpItemsForTestingInTarget:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105d055f0

// -[SCStickerInjectorBase isConversionSupportedForStickerState:]
// Type encoding: B24@0:8@16
// Implementation: 0x105d05790

// -[SCStickerInjectorBase isConversionSupportedForSOJUGallerySticker:]
// Type encoding: B24@0:8@16
// Implementation: 0x105d058a4

// -[SCStickerInjectorBase isConversionSupportedForCTItemInstance:]
// Type encoding: B24@0:8@16
// Implementation: 0x105d059b8

// -[SCStickerInjectorBase isConversionSupportedForCTPItem:]
// Type encoding: B24@0:8@16
// Implementation: 0x105d05b08

// -[SCStickerInjectorBase sojuGalleryStickerForStickerState:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d05c1c

// -[SCStickerInjectorBase stickerStateForSOJUGallerySticker:sojuGalleryInfoFilters:uniqueId:timelineSegmentTimeRanges:editCapabilities:]
// Type encoding: @56@0:8@16@24q32@40@48
// Implementation: 0x105d05cb4

// -[SCStickerInjectorBase ctItemInstanceForSojuGallerySticker:sojuGalleryInfoFilters:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105d05dac

// -[SCStickerInjectorBase sojuGalleryStickerForCTItemInstance:stickerTransformState:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105d05e64

// -[SCStickerInjectorBase sojuGalleryInfoFilterForCTItemInstance:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d05f1c

// -[SCStickerInjectorBase ctItemInstanceForStickerState:infoFiltersState:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105d05fb4

// -[SCStickerInjectorBase stickerForCTPItem:presentationModelProviderType:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105d060d0

// -[SCStickerInjectorBase stickerForCTItemInstance:presentationModelProviderType:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105d061bc

// -[SCStickerInjectorBase isContextUnlockSupportedForStickerState:]
// Type encoding: B24@0:8@16
// Implementation: 0x105d062a8

// -[SCStickerInjectorBase shouldPrepareItemInstanceForContextAction:]
// Type encoding: B24@0:8@16
// Implementation: 0x105d06380

// -[SCStickerInjectorBase prepareItemInstanceForContextAction:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d06494

// -[SCStickerInjectorBase doesCTItemInstanceHaveAttachmentMetadata:]
// Type encoding: B24@0:8@16
// Implementation: 0x105d06514

// -[SCStickerInjectorBase attachmentURLForCTItemInstance:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d06628

// -[SCStickerInjectorBase presentationModelProviderTypeForCTItemInstance:imageSize:durationMs:]
// Type encoding: @40@0:8@16Q24@32
// Implementation: 0x105d066a8

// -[SCStickerInjectorBase isAnimatedItemInstance:]
// Type encoding: B24@0:8@16
// Implementation: 0x105d0675c

// -[SCStickerInjectorBase shouldPrepareCTPItem:forAction:]
// Type encoding: B32@0:8@16Q24
// Implementation: 0x105d067d4

// -[SCStickerInjectorBase shouldPrepareStickerView:forAction:]
// Type encoding: B32@0:8@16Q24
// Implementation: 0x105d0689c

// -[SCStickerInjectorBase prepareCTPItem:forAction:presentingViewController:completion:]
// Type encoding: v48@0:8@16Q24@32@?40
// Implementation: 0x105d06a38

// -[SCStickerInjectorBase prepareStickerView:forAction:completion:]
// Type encoding: v40@0:8@16Q24@?32
// Implementation: 0x105d06b44

// -[SCStickerInjectorBase shouldPresentHintForStickerView:forAction:]
// Type encoding: B32@0:8@16Q24
// Implementation: 0x105d06cc4

// -[SCStickerInjectorBase presentHintForStickerView:forAction:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105d06d8c

// -[SCStickerInjectorBase setDependencies:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d06e5c

// -[SCStickerInjectorBase shouldFilterCTPItem:presentationModelProvider:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105d06fc4

// -[SCStickerInjectorBase tappableElementActionForItemInstance:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d070b8

// -[SCStickerInjectorBase tappableElementTypeForItemInstance:]
// Type encoding: i24@0:8@16
// Implementation: 0x105d0717c

// -[SCStickerInjectorBase shouldShowMenuForCTItemInstance:mediaType:]
// Type encoding: B32@0:8@16Q24
// Implementation: 0x105d07238

// -[SCStickerInjectorBase menuActionsForCTItemInstance:actionHandler:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105d07304

// -[SCStickerInjectorBase shouldDisplayValdiEditingViewForItemInstance:]
// Type encoding: B24@0:8@16
// Implementation: 0x105d07420

// -[SCStickerInjectorBase _isInjectorRegisteredForCTPType:]
// Type encoding: B24@0:8Q16
// Implementation: 0x105d074dc

// -[SCStickerInjectorBase _mapConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d0753c

// -[SCStickerInjectorBase _isExpectedType:expectedTypeNum:typeString:]
// Type encoding: B40@0:8Q16@24@32
// Implementation: 0x105d079d4

// -[SCStickerInjectorBase _isExpectedCTPEntityType:]
// Type encoding: B24@0:8Q16
// Implementation: 0x105d07a0c

// -[SCStickerInjectorBase _isExpectedCTItemInstanceType:]
// Type encoding: B20@0:8i16
// Implementation: 0x105d07a6c

// -[SCStickerInjectorBase _isExpectedStickerType:]
// Type encoding: B24@0:8Q16
// Implementation: 0x105d07adc

// -[SCStickerInjectorBase _isExpectedSOJUGalleryStickerType:]
// Type encoding: B24@0:8q16
// Implementation: 0x105d07b3c

// -[SCStickerInjectorBase _ctpTypeForCTItemInstance:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105d07b9c

// -[SCStickerInjectorBase _ctpTypeForStickerState:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105d07c18

// -[SCStickerInjectorBase _ctpTypeForSOJUGallerySticker:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105d07c94

// -[SCStickerInjectorBase _isStickerTypeGatedForCTPItem:]
// Type encoding: B24@0:8@16
// Implementation: 0x105d07d10

// -[SCStickerInjectorBase _gatedInjectorForCTPType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105d07ddc

// -[SCStickerInjectorBase _isStickerSupportedWithCTPType:safeInjectorBlock:]
// Type encoding: B32@0:8Q16@?24
// Implementation: 0x105d07e60

// -[SCStickerInjectorBase _injectorForCTPType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105d07f2c

// -[SCStickerInjectorBase _injectorForCTPItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d07f6c

// -[SCStickerInjectorBase _injectorForCTItemInstance:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d07fe8

// -[SCStickerInjectorBase _injectorForSOJUGallerySticker:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d080a8

// -[SCStickerInjectorBase _injectorForStickerState:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d08124

// -[SCStickerInjectorBase _injectorFromStickerView:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d081a0

// -[SCStickerInjectorBase _safeConversionInjectorForCTPType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105d08214

// -[SCStickerInjectorBase _conversionInjectorForCTPType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105d08254

// -[SCStickerInjectorBase _conversionInjectorForCTPItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d08294

// -[SCStickerInjectorBase _conversionInjectorForCTItemInstance:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d08310

// -[SCStickerInjectorBase _conversionInjectorForSOJUGallerySticker:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d083d0

// -[SCStickerInjectorBase _conversionInjectorForStickerState:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d0844c

// -[SCStickerInjectorBase _isConversionSupportedWithCTPType:injectorBlock:]
// Type encoding: B32@0:8Q16@?24
// Implementation: 0x105d084c8

// -[SCStickerInjectorBase _animatedInjectorForCTPType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105d08548

// -[SCStickerInjectorBase _animatedInjectorForCTItemInstance:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d085e4

// -[SCStickerInjectorBase _isContextUnlockSupportedWithCTPType:injectorBlock:]
// Type encoding: B32@0:8Q16@?24
// Implementation: 0x105d086a4

// -[SCStickerInjectorBase _contextUnlockInjectorForItemInstance:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d08770

// -[SCStickerInjectorBase _contextUnlockInjectorForCTPType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105d08830

// -[SCStickerInjectorBase _attachmentInjectorForCTPType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105d088cc

// -[SCStickerInjectorBase _attachmentInjectorForCTItemInstance:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d08968

// -[SCStickerInjectorBase _isAttachmentSupportedWithCTPType:injectorBlock:]
// Type encoding: B32@0:8Q16@?24
// Implementation: 0x105d08a28

// -[SCStickerInjectorBase _presentationModelInjectorForCTPType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105d08af4

// -[SCStickerInjectorBase _presentationModelInjectorForCTItemInstance:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d08b90

// -[SCStickerInjectorBase .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105d08c50

@end
