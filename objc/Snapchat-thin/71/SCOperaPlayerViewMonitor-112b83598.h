// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaPlayerViewMonitor
// Superclass: NSObject
// Address: 0x112b83598

@interface SCOperaPlayerViewMonitor

// Property: playbackLogObservable; attributes: T@"SCObservable",R,N,V_playbackLogSubject
// Property: hasDetached; attributes: TB,R,N,V_hasDetached
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOperaPlayerViewMonitor initWithLogInterval:networkBandwidthEstimator:]
// Type encoding: @32@0:8d16@24
// Implementation: 0x107de5248

// -[SCOperaPlayerViewMonitor activate]
// Type encoding: v16@0:8
// Implementation: 0x107de530c

// -[SCOperaPlayerViewMonitor deactivate]
// Type encoding: v16@0:8
// Implementation: 0x107de5324

// -[SCOperaPlayerViewMonitor detach]
// Type encoding: v16@0:8
// Implementation: 0x107de535c

// -[SCOperaPlayerViewMonitor didAddPlayerItemToPlayerView:item:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107de5368

// -[SCOperaPlayerViewMonitor didRemovePlayerItemFromPlayerView:item:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107de536c

// -[SCOperaPlayerViewMonitor didDisplayPlayerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107de5370

// -[SCOperaPlayerViewMonitor willDisplayPlayerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107de5374

// -[SCOperaPlayerViewMonitor didHidePlayerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107de5380

// -[SCOperaPlayerViewMonitor willHidePlayerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107de5384

// -[SCOperaPlayerViewMonitor _setupTimer]
// Type encoding: v16@0:8
// Implementation: 0x107de538c

// -[SCOperaPlayerViewMonitor _suspendTimer]
// Type encoding: v16@0:8
// Implementation: 0x107de5584

// -[SCOperaPlayerViewMonitor _reset]
// Type encoding: v16@0:8
// Implementation: 0x107de558c

// -[SCOperaPlayerViewMonitor hasDetached]
// Type encoding: B16@0:8
// Implementation: 0x107de5984

// -[SCOperaPlayerViewMonitor playbackLogObservable]
// Type encoding: @16@0:8
// Implementation: 0x107de598c

// -[SCOperaPlayerViewMonitor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107de5994

// +[SCOperaPlayerViewMonitor _generatePlaybackLogFor:didRemovePlayerItem:playerItemVisibility:downloadBandwidth:logTimestampMs:]
// Type encoding: @48@0:8@16B24B28q32Q40
// Implementation: 0x107de55c0

@end
