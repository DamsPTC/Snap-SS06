// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaMuteSwitchPlugin
// Superclass: NSObject
// Address: 0x112b0f508

@interface SCOperaMuteSwitchPlugin

// Property: delegate; attributes: T@"<SCOperaMuteSwitchPluginDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOperaMuteSwitchPlugin initWithMuteIntent:restoreNativeVolumeOnTeardown:performPlaylistUpdates:gradualVolumeRampUpDuration:]
// Type encoding: @40@0:8Q16B24B28d32
// Implementation: 0x106a90258

// -[SCOperaMuteSwitchPlugin setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a90304

// -[SCOperaMuteSwitchPlugin setOperaControlling:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a90310

// -[SCOperaMuteSwitchPlugin shouldPauseMusicOnOverride]
// Type encoding: B16@0:8
// Implementation: 0x106a9031c

// -[SCOperaMuteSwitchPlugin updateOperaDependencies:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a9038c

// -[SCOperaMuteSwitchPlugin updateOperaConfiguration:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a903b4

// -[SCOperaMuteSwitchPlugin extraPropertiesProvider]
// Type encoding: @16@0:8
// Implementation: 0x106a903dc

// -[SCOperaMuteSwitchPlugin registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x106a903e0

// -[SCOperaMuteSwitchPlugin operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106a90554

// -[SCOperaMuteSwitchPlugin _mute]
// Type encoding: v16@0:8
// Implementation: 0x106a9078c

// -[SCOperaMuteSwitchPlugin _unmute:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a907dc

// -[SCOperaMuteSwitchPlugin performInitialGradualVolumeRampUpIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106a908d8

// -[SCOperaMuteSwitchPlugin _updatePlaylistItems]
// Type encoding: v16@0:8
// Implementation: 0x106a90afc

// -[SCOperaMuteSwitchPlugin _updateCurrentItem]
// Type encoding: v16@0:8
// Implementation: 0x106a90b54

// -[SCOperaMuteSwitchPlugin _updatePreviousNextGroupItems]
// Type encoding: v16@0:8
// Implementation: 0x106a90c0c

// -[SCOperaMuteSwitchPlugin _updatePreviousNextItems]
// Type encoding: v16@0:8
// Implementation: 0x106a90ea0

// -[SCOperaMuteSwitchPlugin _startMonitoringDeviceMuteStateIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106a9106c

// -[SCOperaMuteSwitchPlugin _applyInitialMuteIntentIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106a91160

// -[SCOperaMuteSwitchPlugin _stopDeviceMuteStateMonitoring]
// Type encoding: v16@0:8
// Implementation: 0x106a91184

// -[SCOperaMuteSwitchPlugin _updateMuteStateWithIsMuted:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a911ec

// -[SCOperaMuteSwitchPlugin extraPropertiesForDataModel:item:baseOperaPage:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106a91290

// -[SCOperaMuteSwitchPlugin deviceMuteControllerDidUpdateAudioSessionState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a91498

// -[SCOperaMuteSwitchPlugin deviceMuteController:didChangeVolume:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x106a9154c

// -[SCOperaMuteSwitchPlugin delegate]
// Type encoding: @16@0:8
// Implementation: 0x106a91574

// -[SCOperaMuteSwitchPlugin setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a9158c

// -[SCOperaMuteSwitchPlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106a91598

@end
