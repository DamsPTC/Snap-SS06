// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaPlayerView
// Superclass: UIView
// Address: 0x112b83548

@interface SCOperaPlayerView

// Property: player; attributes: T@"AVPlayer",&,N,V_player
// Property: playerItem; attributes: T@"AVPlayerItem",&,N,V_playerItem
// Property: playerLayer; attributes: T@"AVPlayerLayer",R,N
// Property: playerViewMonitor; attributes: T@"SCOperaPlayerViewMonitor",&,N,V_playerViewMonitor
// Property: timeToPrepareSec; attributes: Td,R,N,V_timeToPrepareSec
// Property: startPreparingTimeSec; attributes: Td,R,N,V_startPreparingTimeSec
// Property: prerollOnReadyEnabled; attributes: TB,R,N,V_prerollOnReadyEnabled
// Property: pageId; attributes: T@"NSString",C,N,V_pageId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOperaPlayerView initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x107de4668

// -[SCOperaPlayerView initWithPrerollOnReadyEnabled:]
// Type encoding: @20@0:8B16
// Implementation: 0x107de4670

// -[SCOperaPlayerView initWithFrame:prerollOnReadyEnabled:]
// Type encoding: @52@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16B48
// Implementation: 0x107de4684

// -[SCOperaPlayerView setPlayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x107de4780

// -[SCOperaPlayerView addPlayerChangeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107de491c

// -[SCOperaPlayerView removePlayerChangeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107de492c

// -[SCOperaPlayerView setPlayerItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107de493c

// -[SCOperaPlayerView _playerItemStatusDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x107de4b74

// -[SCOperaPlayerView _prerollIfReadyAtRate:]
// Type encoding: v20@0:8f16
// Implementation: 0x107de4c94

// -[SCOperaPlayerView _cancelPendingPrerolls]
// Type encoding: v16@0:8
// Implementation: 0x107de4ee8

// -[SCOperaPlayerView setViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x107de4f38

// -[SCOperaPlayerView snapShotFromPlayer]
// Type encoding: @16@0:8
// Implementation: 0x107de4fdc

// -[SCOperaPlayerView dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107de5040

// -[SCOperaPlayerView playerLayer]
// Type encoding: @16@0:8
// Implementation: 0x107de50b0

// -[SCOperaPlayerView player]
// Type encoding: @16@0:8
// Implementation: 0x107de510c

// -[SCOperaPlayerView playerItem]
// Type encoding: @16@0:8
// Implementation: 0x107de511c

// -[SCOperaPlayerView playerViewMonitor]
// Type encoding: @16@0:8
// Implementation: 0x107de512c

// -[SCOperaPlayerView setPlayerViewMonitor:]
// Type encoding: v24@0:8@16
// Implementation: 0x107de513c

// -[SCOperaPlayerView timeToPrepareSec]
// Type encoding: d16@0:8
// Implementation: 0x107de517c

// -[SCOperaPlayerView startPreparingTimeSec]
// Type encoding: d16@0:8
// Implementation: 0x107de518c

// -[SCOperaPlayerView prerollOnReadyEnabled]
// Type encoding: B16@0:8
// Implementation: 0x107de519c

// -[SCOperaPlayerView pageId]
// Type encoding: @16@0:8
// Implementation: 0x107de51ac

// -[SCOperaPlayerView setPageId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107de51bc

// -[SCOperaPlayerView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107de51c8

// +[SCOperaPlayerView layerClass]
// Type encoding: #16@0:8
// Implementation: 0x107de465c

@end
