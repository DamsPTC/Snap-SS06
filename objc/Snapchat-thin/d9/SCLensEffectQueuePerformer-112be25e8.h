// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensEffectQueuePerformer
// Superclass: NSObject
// Address: 0x112be25e8

@interface SCLensEffectQueuePerformer

// Property: performer; attributes: T@"<SCAsyncPerforming>",R,N,V_performer
// Property: cancelationDelegate; attributes: T@"<LSAQueuePerformingCancelationDelegate>",W,N,V_cancelationDelegate
// Property: delegate; attributes: T@"<LSAQueuePerformingDelegate>",W,N,Vdelegate
// Property: queue; attributes: T@"NSObject<OS_dispatch_queue>",R,N
// Property: isValid; attributes: TB,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensEffectQueuePerformer initWithPerformer:lensCrashLogger:cancelationController:shouldCatchExceptions:shouldCatchJSExceptions:]
// Type encoding: @48@0:8@16@24@32B40B44
// Implementation: 0x10903b6d4

// -[SCLensEffectQueuePerformer queue]
// Type encoding: @16@0:8
// Implementation: 0x10903b7f0

// -[SCLensEffectQueuePerformer isValid]
// Type encoding: B16@0:8
// Implementation: 0x10903b7f8

// -[SCLensEffectQueuePerformer perform:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10903b820

// -[SCLensEffectQueuePerformer performV2:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10903b85c

// -[SCLensEffectQueuePerformer performImmediatelyIfCurrentPerformer:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10903b8c8

// -[SCLensEffectQueuePerformer performAndWait:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10903b904

// -[SCLensEffectQueuePerformer perform:after:]
// Type encoding: v32@0:8@?16d24
// Implementation: 0x10903b970

// -[SCLensEffectQueuePerformer invalidate]
// Type encoding: v16@0:8
// Implementation: 0x10903b9bc

// -[SCLensEffectQueuePerformer performUnsafeBlockWithInfo:block:completion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x10903b9e4

// -[SCLensEffectQueuePerformer performUnsafeBlockV2WithInfo:block:completion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x10903ba2c

// -[SCLensEffectQueuePerformer performUnsafeBlockImmediatelyIfCurrentPerformerWithInfo:block:completion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x10903bad0

// -[SCLensEffectQueuePerformer performUnsafeBlockAndWaitWithInfo:block:completion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x10903bb18

// -[SCLensEffectQueuePerformer isCurrentPerformer]
// Type encoding: B16@0:8
// Implementation: 0x10903bb1c

// -[SCLensEffectQueuePerformer _makeBlock:]
// Type encoding: @?24@0:8@?16
// Implementation: 0x10903bb38

// -[SCLensEffectQueuePerformer _makeUnsafeBlock:blockInfo:completion:]
// Type encoding: @?40@0:8@?16@24@?32
// Implementation: 0x10903bc2c

// -[SCLensEffectQueuePerformer _tryToExecuteUnsafeBlock:blockInfo:completion:]
// Type encoding: v40@0:8@?16@24@?32
// Implementation: 0x10903be10

// -[SCLensEffectQueuePerformer delegate]
// Type encoding: @16@0:8
// Implementation: 0x10903c184

// -[SCLensEffectQueuePerformer setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10903c19c

// -[SCLensEffectQueuePerformer cancelationDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10903c1a8

// -[SCLensEffectQueuePerformer setCancelationDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10903c1c0

// -[SCLensEffectQueuePerformer performer]
// Type encoding: @16@0:8
// Implementation: 0x10903c1cc

// -[SCLensEffectQueuePerformer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10903c1d4

@end
