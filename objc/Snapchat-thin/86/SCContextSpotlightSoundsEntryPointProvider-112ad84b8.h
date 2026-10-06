// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextSpotlightSoundsEntryPointProvider
// Superclass: NSObject
// Address: 0x112ad84b8

@interface SCContextSpotlightSoundsEntryPointProvider

// Property: soundEntryParamsObservable; attributes: T@"SCObservable",R,N

// -[SCContextSpotlightSoundsEntryPointProvider initWithParamsResponse:headerParamsObservable:musicMediaLoader:experiments:musicTrackAssetLoader:contextExperimentService:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1062a648c

// -[SCContextSpotlightSoundsEntryPointProvider _processSpotlightResponse:spotlightParams:headerParams:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1062a6960

// -[SCContextSpotlightSoundsEntryPointProvider _hasTrendingMusicInParams:]
// Type encoding: B24@0:8@16
// Implementation: 0x1062a6a70

// -[SCContextSpotlightSoundsEntryPointProvider _isCreatorAttributionRenderedWithHeaderParams:]
// Type encoding: B24@0:8@16
// Implementation: 0x1062a6c64

// -[SCContextSpotlightSoundsEntryPointProvider _shouldUseOriginalSoundTitleForAction:isCreatorAttributionRendered:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x1062a6ca8

// -[SCContextSpotlightSoundsEntryPointProvider _handleCards:hasTrendingMusic:isCreatorAttributionRendered:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x1062a6cd4

// -[SCContextSpotlightSoundsEntryPointProvider _generateSoundInfoWithSoundCard:hasTrendingMusic:isCreatorAttributionRendered:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x1062a6e30

// -[SCContextSpotlightSoundsEntryPointProvider soundEntryParamsObservable]
// Type encoding: @16@0:8
// Implementation: 0x1062a7130

// -[SCContextSpotlightSoundsEntryPointProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1062a7158

@end
