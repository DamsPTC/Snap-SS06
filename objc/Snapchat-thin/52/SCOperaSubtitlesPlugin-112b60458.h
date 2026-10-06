// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaSubtitlesPlugin
// Superclass: NSObject
// Address: 0x112b60458

@interface SCOperaSubtitlesPlugin

// Property: availableSubtitlesLocales; attributes: T@"NSArray",C,N,V_availableSubtitlesLocales
// Property: defaultLanguage; attributes: T@"NSString",C,N,V_defaultLanguage
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOperaSubtitlesPlugin initWithImageDownloader:imageFetchingService:circumstanceEngine:preferences:viewLocation:]
// Type encoding: @56@0:8@16@24@32@40q48
// Implementation: 0x1071d6554

// -[SCOperaSubtitlesPlugin setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071d6784

// -[SCOperaSubtitlesPlugin setOperaControlling:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071d6790

// -[SCOperaSubtitlesPlugin audioSession:didChangeVolume:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1071d682c

// -[SCOperaSubtitlesPlugin extraPropertiesProvider]
// Type encoding: @16@0:8
// Implementation: 0x1071d68c0

// -[SCOperaSubtitlesPlugin extraPropertiesForDataModel:item:baseOperaPage:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1071d68c4

// -[SCOperaSubtitlesPlugin registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x1071d6d08

// -[SCOperaSubtitlesPlugin operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1071d6e58

// -[SCOperaSubtitlesPlugin _handleSSPSubtitlesTextChangeWithParams:event:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071d7158

// -[SCOperaSubtitlesPlugin _updateCurrentMediaTimeIfNecessary:page:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071d72c4

// -[SCOperaSubtitlesPlugin _removeCurrentMediaTimeIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071d73cc

// -[SCOperaSubtitlesPlugin unifiedActionMenuPresenterDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071d7414

// -[SCOperaSubtitlesPlugin didTapDone:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071d755c

// -[SCOperaSubtitlesPlugin didFinishItemSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071d756c

// -[SCOperaSubtitlesPlugin _presentLanguageSelection]
// Type encoding: v16@0:8
// Implementation: 0x1071d757c

// -[SCOperaSubtitlesPlugin _checkSubtitlesAvailabilityWithPage:params:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071d7724

// -[SCOperaSubtitlesPlugin _processSubtitlesAvailabilityFromMediaSelectionGroup:canEnableSubtitles:showSubtitlesOnSpotlightContext:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x1071d7c54

// -[SCOperaSubtitlesPlugin _processSubtitlesAvailabilityFromOperaPage:canEnableSubtitles:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1071d7e68

// -[SCOperaSubtitlesPlugin _updateAvailableLocals:canEnableSubtitles:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1071d80f4

// -[SCOperaSubtitlesPlugin _processedSubtitleAvailability:canEnableSubtitles:preferredLanguageCode:showSubtitlesOnSpotlightContext:]
// Type encoding: v36@0:8B16B20@24B32
// Implementation: 0x1071d81b4

// -[SCOperaSubtitlesPlugin _shouldDisplaySubtitlesForLanguage:]
// Type encoding: B24@0:8@16
// Implementation: 0x1071d82b0

// -[SCOperaSubtitlesPlugin _shouldDisplaySubtitlesOnSettingsUpdateForLanguage:]
// Type encoding: B24@0:8@16
// Implementation: 0x1071d83bc

// -[SCOperaSubtitlesPlugin _shouldDisplaySubtitlesOnVolumeUpdateForLanguage:]
// Type encoding: B24@0:8@16
// Implementation: 0x1071d8400

// -[SCOperaSubtitlesPlugin _automaticUpdateSubtitlesEnabled:subtitlesAvailable:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x1071d84bc

// -[SCOperaSubtitlesPlugin _updateSubtitlesEnabled:withLanguage:subtitlesAvailable:userTriggered:showSubtitlesOnSpotlightContext:]
// Type encoding: v40@0:8B16@20B28B32B36
// Implementation: 0x1071d8524

// -[SCOperaSubtitlesPlugin _announceSubtitlesUpdate:]
// Type encoding: v20@0:8B16
// Implementation: 0x1071d86b8

// -[SCOperaSubtitlesPlugin availableSubtitlesLocales]
// Type encoding: @16@0:8
// Implementation: 0x1071d8950

// -[SCOperaSubtitlesPlugin setAvailableSubtitlesLocales:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071d8958

// -[SCOperaSubtitlesPlugin defaultLanguage]
// Type encoding: @16@0:8
// Implementation: 0x1071d8960

// -[SCOperaSubtitlesPlugin setDefaultLanguage:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071d8968

// -[SCOperaSubtitlesPlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1071d8970

@end
