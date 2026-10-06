// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensProcessingLensMode
// Superclass: NSObject
// Address: 0x11295e0e8

@interface SCLensProcessingLensMode

// Property: isEffectApplied; attributes: TB,N,VisEffectApplied
// Property: isEffectLoaded; attributes: TB,N,VisEffectLoaded
// Property: effect; attributes: T@"SCLens",N,&,Veffect
// Property: effectId; attributes: T@"NSString",N,&,VeffectId
// Property: identifier; attributes: T@"NSString",N,R,Videntifier
// Property: didDeactivateObservable; attributes: T@,N,R
// Property: delegate; attributes: T@"<SCLensModeDelegate>",N,W,Vdelegate

// -[SCLensProcessingLensMode isEffectApplied]
// Type encoding: B16@0:8
// Implementation: 0x103e98cc4

// -[SCLensProcessingLensMode setIsEffectApplied:]
// Type encoding: v20@0:8B16
// Implementation: 0x103e98d08

// -[SCLensProcessingLensMode isEffectLoaded]
// Type encoding: B16@0:8
// Implementation: 0x103e98d58

// -[SCLensProcessingLensMode setIsEffectLoaded:]
// Type encoding: v20@0:8B16
// Implementation: 0x103e98d9c

// -[SCLensProcessingLensMode effect]
// Type encoding: @16@0:8
// Implementation: 0x103e98dec

// -[SCLensProcessingLensMode setEffect:]
// Type encoding: v24@0:8@16
// Implementation: 0x103e98e34

// -[SCLensProcessingLensMode effectId]
// Type encoding: @16@0:8
// Implementation: 0x103e98e40

// -[SCLensProcessingLensMode setEffectId:]
// Type encoding: v24@0:8@16
// Implementation: 0x103e98e88

// -[SCLensProcessingLensMode identifier]
// Type encoding: @16@0:8
// Implementation: 0x103e98ef4

// -[SCLensProcessingLensMode didDeactivateObservable]
// Type encoding: @16@0:8
// Implementation: 0x103e98f04

// -[SCLensProcessingLensMode initWithIdentifier:effect:lensObservable:lensEffectFetcher:lensModeApplicator:performer:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x103e99cac

// -[SCLensProcessingLensMode initWithIdentifier:lensMode:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x103e99fb8

// -[SCLensProcessingLensMode initWithIdentifier:effectId:lensObservable:lensEffectFetcher:lensModeApplicator:performer:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x103e9a000

// -[SCLensProcessingLensMode delegate]
// Type encoding: @16@0:8
// Implementation: 0x103e9a0ac

// -[SCLensProcessingLensMode setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x103e9a0f4

// -[SCLensProcessingLensMode prepareLensMode]
// Type encoding: @16@0:8
// Implementation: 0x103e9a414

// -[SCLensProcessingLensMode forceActivateLensMode]
// Type encoding: @16@0:8
// Implementation: 0x103e9a668

// -[SCLensProcessingLensMode activateLensMode]
// Type encoding: @16@0:8
// Implementation: 0x103e9a6a0

// -[SCLensProcessingLensMode deactivate]
// Type encoding: v16@0:8
// Implementation: 0x103e9a9d4

// -[SCLensProcessingLensMode init]
// Type encoding: @16@0:8
// Implementation: 0x103e9b1d8

// -[SCLensProcessingLensMode .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x103e9b238

@end
