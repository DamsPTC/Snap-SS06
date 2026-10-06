// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaDeviceMuteController
// Superclass: NSObject
// Address: 0x112b0f4b8

@interface SCOperaDeviceMuteController

// Property: isMuteOverridden; attributes: TB,R,N,V_isMuteOverridden
// Property: isMuteSwitchOn; attributes: TB,R,N,V_isMuteSwitchOn
// Property: isSoundPlaying; attributes: TB,R,N,V_isSoundPlaying
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOperaDeviceMuteController initWithAudioSession:customVolumeController:delegate:pauseMusicOnOverride:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x106a8f99c

// -[SCOperaDeviceMuteController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106a8fb00

// -[SCOperaDeviceMuteController startMonitoring]
// Type encoding: v16@0:8
// Implementation: 0x106a8fb44

// -[SCOperaDeviceMuteController stopMonitoring]
// Type encoding: v16@0:8
// Implementation: 0x106a8fbfc

// -[SCOperaDeviceMuteController overrideMuteSwitch]
// Type encoding: v16@0:8
// Implementation: 0x106a8fc5c

// -[SCOperaDeviceMuteController restoreNativeVolume]
// Type encoding: v16@0:8
// Implementation: 0x106a8fd58

// -[SCOperaDeviceMuteController updateAudioState]
// Type encoding: v16@0:8
// Implementation: 0x106a8fd60

// -[SCOperaDeviceMuteController _checkAudioSessionStatus]
// Type encoding: v16@0:8
// Implementation: 0x106a8fd84

// -[SCOperaDeviceMuteController audioSession:didChangeVolume:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x106a8feb8

// -[SCOperaDeviceMuteController customVolumeController:didChangeMuteSwitchOverride:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106a8ffe4

// -[SCOperaDeviceMuteController secretFeatureChecker:didCheckSecretFeatureMode:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106a900d4

// -[SCOperaDeviceMuteController _secretFeatureModeDidChange:]
// Type encoding: v24@0:8q16
// Implementation: 0x106a900ec

// -[SCOperaDeviceMuteController isMuteOverridden]
// Type encoding: B16@0:8
// Implementation: 0x106a901f0

// -[SCOperaDeviceMuteController isMuteSwitchOn]
// Type encoding: B16@0:8
// Implementation: 0x106a901f8

// -[SCOperaDeviceMuteController isSoundPlaying]
// Type encoding: B16@0:8
// Implementation: 0x106a90200

// -[SCOperaDeviceMuteController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106a90208

@end
