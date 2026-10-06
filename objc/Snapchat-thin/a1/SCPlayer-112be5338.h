// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlayer
// Superclass: AVPlayer
// Address: 0x112be5338

@interface SCPlayer

// Property: playerSuspendHandler; attributes: T@"<SCPlayerSuspendHandler>",&,N,V_playerSuspendHandler
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: sc_statusObservable; attributes: T@"SCObservable",R,N
// Property: sc_timeControlStatusObservable; attributes: T@"SCObservable",R,N
// Property: sc_rateObservable; attributes: T@"SCObservable",R,N
// Property: sc_status; attributes: Tq,R,N
// Property: sc_timeControlStatus; attributes: Tq,R,N
// Property: sc_rate; attributes: Tf,R,N

// -[SCPlayer initWithPlayerDomain:]
// Type encoding: @24@0:8q16
// Implementation: 0x10908e354

// -[SCPlayer initWithPlayerDomain:URL:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x10908e3d4

// -[SCPlayer initWithPlayerDomain:playerItem:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x10908e458

// -[SCPlayer initWithPlayerDomainString:]
// Type encoding: @24@0:8@16
// Implementation: 0x10908e4e4

// -[SCPlayer initWithPlayerDomainString:enableStateObserving:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10908e4ec

// -[SCPlayer initWithPlayerDomainString:URL:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10908e5cc

// -[SCPlayer initWithPlayerDomainString:playerItem:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10908e680

// -[SCPlayer suspend]
// Type encoding: B16@0:8
// Implementation: 0x10908e73c

// -[SCPlayer playerDomainString]
// Type encoding: @16@0:8
// Implementation: 0x10908e7c0

// -[SCPlayer dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10908e7dc

// -[SCPlayer sc_status]
// Type encoding: q16@0:8
// Implementation: 0x10908e854

// -[SCPlayer sc_timeControlStatus]
// Type encoding: q16@0:8
// Implementation: 0x10908e870

// -[SCPlayer sc_rate]
// Type encoding: f16@0:8
// Implementation: 0x10908e88c

// -[SCPlayer sc_statusObservable]
// Type encoding: @16@0:8
// Implementation: 0x10908e8a8

// -[SCPlayer sc_timeControlStatusObservable]
// Type encoding: @16@0:8
// Implementation: 0x10908e8b8

// -[SCPlayer sc_rateObservable]
// Type encoding: @16@0:8
// Implementation: 0x10908e8c8

// -[SCPlayer replaceCurrentItemWithPlayerItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x10908e8d8

// -[SCPlayer _removeAssetResourceLoaderPlayerDelegate]
// Type encoding: v16@0:8
// Implementation: 0x10908e940

// -[SCPlayer _addAssetResourceLoaderPlayerDelegate]
// Type encoding: v16@0:8
// Implementation: 0x10908e9e0

// -[SCPlayer _currentURLAsset]
// Type encoding: @16@0:8
// Implementation: 0x10908ea84

// -[SCPlayer playerSuspendHandler]
// Type encoding: @16@0:8
// Implementation: 0x10908ebd4

// -[SCPlayer setPlayerSuspendHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x10908ebe4

// -[SCPlayer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10908ec24

@end
