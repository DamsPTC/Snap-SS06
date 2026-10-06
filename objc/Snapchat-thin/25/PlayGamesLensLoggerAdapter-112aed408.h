// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: PlayGamesLensLoggerAdapter
// Superclass: NSObject
// Address: 0x112aed408

@interface PlayGamesLensLoggerAdapter

// Property: lensSessionId; attributes: T@"NSString",R,N
// Property: lensSwipeId; attributes: T@"NSString",C,N
// Property: lensSwipeIdObservable; attributes: T@"SCObservable",R,N
// Property: contextSessionId; attributes: T@"NSString",C,N
// Property: currentLens; attributes: T@"SCLens",R,N
// Property: hasSwipeFunnelForCurrentLens; attributes: TB,R,N
// Property: lensCarouselLocationType; attributes: Tq,R,N
// Property: lensSessionFlowStateObservable; attributes: T@"SCObservable",R,N
// Property: isSessionActive; attributes: TB,R,N

// -[PlayGamesLensLoggerAdapter initWithLensLogger:lensSourceType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10667fd28

// -[PlayGamesLensLoggerAdapter beginSession]
// Type encoding: v16@0:8
// Implementation: 0x10667fdec

// -[PlayGamesLensLoggerAdapter lensCarouselLocationType]
// Type encoding: q16@0:8
// Implementation: 0x10667fe54

// -[PlayGamesLensLoggerAdapter lensSessionFlowStateObservable]
// Type encoding: @16@0:8
// Implementation: 0x10667fe5c

// -[PlayGamesLensLoggerAdapter stopSession]
// Type encoding: v16@0:8
// Implementation: 0x10667fe84

// -[PlayGamesLensLoggerAdapter isSessionActive]
// Type encoding: B16@0:8
// Implementation: 0x10667fee0

// -[PlayGamesLensLoggerAdapter lensSessionId]
// Type encoding: @16@0:8
// Implementation: 0x10667fef0

// -[PlayGamesLensLoggerAdapter lensSwipeId]
// Type encoding: @16@0:8
// Implementation: 0x10667fef8

// -[PlayGamesLensLoggerAdapter setLensSwipeId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10667ff00

// -[PlayGamesLensLoggerAdapter lensSwipeIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x10667ff08

// -[PlayGamesLensLoggerAdapter contextSessionId]
// Type encoding: @16@0:8
// Implementation: 0x10667ff10

// -[PlayGamesLensLoggerAdapter setContextSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10667ff18

// -[PlayGamesLensLoggerAdapter currentLens]
// Type encoding: @16@0:8
// Implementation: 0x10667ff20

// -[PlayGamesLensLoggerAdapter hasSwipeFunnelForCurrentLens]
// Type encoding: B16@0:8
// Implementation: 0x10667ff28

// -[PlayGamesLensLoggerAdapter lensPresented:]
// Type encoding: v24@0:8@16
// Implementation: 0x10667ffc0

// -[PlayGamesLensLoggerAdapter setSnapSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x10667fff8

// -[PlayGamesLensLoggerAdapter setGamePlayInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x106680000

// -[PlayGamesLensLoggerAdapter updateSwipeFunnelForCurrentLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x106680008

// -[PlayGamesLensLoggerAdapter reset]
// Type encoding: v16@0:8
// Implementation: 0x1066800c0

// -[PlayGamesLensLoggerAdapter _startNewSession]
// Type encoding: v16@0:8
// Implementation: 0x106680130

// -[PlayGamesLensLoggerAdapter _emitFlowStateTransitionTo:]
// Type encoding: v24@0:8@16
// Implementation: 0x106680260

// -[PlayGamesLensLoggerAdapter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1066802f0

@end
