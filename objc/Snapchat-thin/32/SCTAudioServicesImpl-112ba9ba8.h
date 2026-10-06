// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTAudioServicesImpl
// Superclass: NSObject
// Address: 0x112ba9ba8

@interface SCTAudioServicesImpl

// Property: audioConfigurationToken; attributes: T@"SCAudioConfigurationToken",&,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTAudioServicesImpl initWithSoundEffects:mutableAudioSession:identityServices:grapheneLogger:plusFeatureGating:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1085e0228

// -[SCTAudioServicesImpl audioConfigurationToken]
// Type encoding: @16@0:8
// Implementation: 0x1085e03e4

// -[SCTAudioServicesImpl setAudioConfigurationToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085e0494

// -[SCTAudioServicesImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1085e04c4

// -[SCTAudioServicesImpl updateAudioSessionConfigMode:isForCallKit:avoidExternalAudioMixing:completion:]
// Type encoding: v40@0:8Q16B24B28@?32
// Implementation: 0x1085e0588

// -[SCTAudioServicesImpl updateProximityMonitoring:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x1085e07f4

// -[SCTAudioServicesImpl applyAudioRoute:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1085e0930

// -[SCTAudioServicesImpl availableRoutes]
// Type encoding: @16@0:8
// Implementation: 0x1085e09b0

// -[SCTAudioServicesImpl currentAudioRoute]
// Type encoding: @16@0:8
// Implementation: 0x1085e0a10

// -[SCTAudioServicesImpl processIncomingCallNotificationShown:forTalkContextId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1085e0a70

// -[SCTAudioServicesImpl processIncomingCallNotificationRemoved:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085e0b34

// -[SCTAudioServicesImpl processCallForTalkContextId:visibilityChanged:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1085e0d58

// -[SCTAudioServicesImpl playSound:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1085e0d8c

// -[SCTAudioServicesImpl lockRingingWithLabel:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085e0dc4

// -[SCTAudioServicesImpl unlockRingingWithToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085e0e30

// -[SCTAudioServicesImpl startRingingInTalkContext:incoming:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1085e0e80

// -[SCTAudioServicesImpl stopRingingInTalkContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085e0fcc

// -[SCTAudioServicesImpl _updateRingingIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1085e1070

// -[SCTAudioServicesImpl _getRequiredRingingState]
// Type encoding: {SCTAudioRingingState=BBB@}16@0:8
// Implementation: 0x1085e1474

// -[SCTAudioServicesImpl _updateRingingWithRequiredState:customRingtoneId:]
// Type encoding: v40@0:8{SCTAudioRingingState=BBB@}16@32
// Implementation: 0x1085e16f8

// -[SCTAudioServicesImpl _canPlayIncomingCallRingtoneForTalkContextId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1085e1a44

// -[SCTAudioServicesImpl _generateRingingSituationMessage:incoming:bestFriend:]
// Type encoding: @28@0:8B16B20B24
// Implementation: 0x1085e1ac0

// -[SCTAudioServicesImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085e1b38

@end
