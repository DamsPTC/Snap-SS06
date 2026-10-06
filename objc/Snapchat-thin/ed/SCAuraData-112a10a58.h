// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAuraData
// Superclass: SCDocObject
// Address: 0x112a10a58

@interface SCAuraData

// Property: ownerId; attributes: T@"NSString",R,C,N,V_ownerId
// Property: personalityProfile; attributes: T@"SCAuraProfile",R,C,N,V_personalityProfile
// Property: compatibilityProfile; attributes: T@"SCAuraProfile",R,C,N,V_compatibilityProfile
// Property: syncToken; attributes: T@"NSData",R,C,N,V_syncToken
// Property: nextSyncEpocSec; attributes: Tq,R,N,V_nextSyncEpocSec
// Property: lastSyncReqParamsHash; attributes: T@"NSData",R,C,N,V_lastSyncReqParamsHash
// Property: hasSeenPersonalityProfileDiviningPage; attributes: TB,R,N,V_hasSeenPersonalityProfileDiviningPage
// Property: hasSeenCompatibilityProfileDiviningPage; attributes: TB,R,N,V_hasSeenCompatibilityProfileDiviningPage

// -[SCAuraData initWithOwnerId:personalityProfile:compatibilityProfile:syncToken:nextSyncEpocSec:lastSyncReqParamsHash:hasSeenPersonalityProfileDiviningPage:hasSeenCompatibilityProfileDiviningPage:]
// Type encoding: @72@0:8@16@24@32@40q48@56B64B68
// Implementation: 0x105005ef4

// -[SCAuraData copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10500607c

// -[SCAuraData hash]
// Type encoding: Q16@0:8
// Implementation: 0x1050060a0

// -[SCAuraData isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x105006170

// -[SCAuraData ownerId]
// Type encoding: @16@0:8
// Implementation: 0x1050062d0

// -[SCAuraData personalityProfile]
// Type encoding: @16@0:8
// Implementation: 0x1050062e0

// -[SCAuraData compatibilityProfile]
// Type encoding: @16@0:8
// Implementation: 0x1050062f0

// -[SCAuraData syncToken]
// Type encoding: @16@0:8
// Implementation: 0x105006300

// -[SCAuraData nextSyncEpocSec]
// Type encoding: q16@0:8
// Implementation: 0x105006310

// -[SCAuraData lastSyncReqParamsHash]
// Type encoding: @16@0:8
// Implementation: 0x105006320

// -[SCAuraData hasSeenPersonalityProfileDiviningPage]
// Type encoding: B16@0:8
// Implementation: 0x105006330

// -[SCAuraData hasSeenCompatibilityProfileDiviningPage]
// Type encoding: B16@0:8
// Implementation: 0x105006340

// -[SCAuraData .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105006350

// +[SCAuraData table]
// Type encoding: r*16@0:8
// Implementation: 0x105007c54

// +[SCAuraData immutableObjectParse:bufferSize:]
// Type encoding: @32@0:8r^v16Q24
// Implementation: 0x105007c60

// +[SCAuraData objectClassFunctionPointer]
// Type encoding: {SCDocObjectClassFunctionPointer=^?^?}16@0:8
// Implementation: 0x105007f74

@end
