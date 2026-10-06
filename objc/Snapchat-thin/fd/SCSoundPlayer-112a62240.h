// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSoundPlayer
// Superclass: NSObject
// Address: 0x112a62240

@interface SCSoundPlayer

// Property: player; attributes: T@"AVAudioPlayer",&,V_player
// Property: cachedSoundPlaying; attributes: TQ,V_cachedSoundPlaying
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSoundPlayer initWithSoundContentDelivery:graphene:respectMuteSwitchForSounds:cachePlayingState:]
// Type encoding: @44@0:8@16@24B32@36
// Implementation: 0x10577e0f8

// -[SCSoundPlayer dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10577e28c

// -[SCSoundPlayer playing]
// Type encoding: B16@0:8
// Implementation: 0x10577e2e4

// -[SCSoundPlayer soundPlaying]
// Type encoding: Q16@0:8
// Implementation: 0x10577e300

// -[SCSoundPlayer playOnce:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10577e394

// -[SCSoundPlayer playContinuously:customRingtoneId:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x10577e488

// -[SCSoundPlayer stop]
// Type encoding: v16@0:8
// Implementation: 0x10577e5d4

// -[SCSoundPlayer _appWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x10577e714

// -[SCSoundPlayer _isUsingBuiltInSpeaker]
// Type encoding: B16@0:8
// Implementation: 0x10577e758

// -[SCSoundPlayer _preparePlayerAndPlaySound:continuously:customRingtoneId:]
// Type encoding: v36@0:8Q16B24@28
// Implementation: 0x10577e818

// -[SCSoundPlayer _createPlayerForSound:continuously:preparationStartTime:]
// Type encoding: v36@0:8Q16B24@28
// Implementation: 0x10577ea00

// -[SCSoundPlayer _createPlayerWithCustomRingtoneForSound:customRingtoneId:preparationStartTime:]
// Type encoding: v40@0:8Q16@24@32
// Implementation: 0x10577ec00

// -[SCSoundPlayer _playSound:preparationStartTime:continuously:]
// Type encoding: v36@0:8Q16@24B32
// Implementation: 0x10577ed44

// -[SCSoundPlayer secretFeatureChecker:didCheckSecretFeatureMode:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10577ef9c

// -[SCSoundPlayer audioPlayerDidFinishPlaying:successfully:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10577f100

// -[SCSoundPlayer player]
// Type encoding: @16@0:8
// Implementation: 0x10577f280

// -[SCSoundPlayer setPlayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10577f28c

// -[SCSoundPlayer cachedSoundPlaying]
// Type encoding: Q16@0:8
// Implementation: 0x10577f294

// -[SCSoundPlayer setCachedSoundPlaying:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10577f29c

// -[SCSoundPlayer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10577f2a4

@end
