// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaPlayerQueueManager
// Superclass: NSObject
// Address: 0x112b73af8

@interface SCOperaPlayerQueueManager

// Property: player; attributes: T@"AVPlayer",R,N,V_player
// Property: playbackLifecycleEventObserver; attributes: T@"SCObservable",R,N,V_playbackLifecycleEventObserver

// -[SCOperaPlayerQueueManager initWithKVOController:configuration:configProvider:notificationCenter:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107b87d08

// -[SCOperaPlayerQueueManager dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107b87e28

// -[SCOperaPlayerQueueManager _setupPlayer]
// Type encoding: v16@0:8
// Implementation: 0x107b87e84

// -[SCOperaPlayerQueueManager promoteItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b88150

// -[SCOperaPlayerQueueManager insertItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b88398

// -[SCOperaPlayerQueueManager removeItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b88428

// -[SCOperaPlayerQueueManager removeAll]
// Type encoding: v16@0:8
// Implementation: 0x107b88494

// -[SCOperaPlayerQueueManager advance]
// Type encoding: v16@0:8
// Implementation: 0x107b8849c

// -[SCOperaPlayerQueueManager didReceiveMediaServicesWereResetNotification]
// Type encoding: v16@0:8
// Implementation: 0x107b88500

// -[SCOperaPlayerQueueManager _automaticallyMinimizeStallingIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b88504

// -[SCOperaPlayerQueueManager _playerStatusDidChange]
// Type encoding: v16@0:8
// Implementation: 0x107b885e8

// -[SCOperaPlayerQueueManager _clearKVOObserversForPlayerItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b88624

// -[SCOperaPlayerQueueManager _clearTimeObserverTokenIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x107b8862c

// -[SCOperaPlayerQueueManager _clearObserversForCurrentItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b88664

// -[SCOperaPlayerQueueManager _observersForPlayerItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b88688

// -[SCOperaPlayerQueueManager _observerStatusForPlayerItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b886cc

// -[SCOperaPlayerQueueManager _observeEndOfPlaybackForPlayerItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b88990

// -[SCOperaPlayerQueueManager _observerStatusForPlayer]
// Type encoding: v16@0:8
// Implementation: 0x107b88cb8

// -[SCOperaPlayerQueueManager _observeProgressOfPlayer]
// Type encoding: v16@0:8
// Implementation: 0x107b88f20

// -[SCOperaPlayerQueueManager player]
// Type encoding: @16@0:8
// Implementation: 0x107b89138

// -[SCOperaPlayerQueueManager playbackLifecycleEventObserver]
// Type encoding: @16@0:8
// Implementation: 0x107b89140

// -[SCOperaPlayerQueueManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107b89148

@end
