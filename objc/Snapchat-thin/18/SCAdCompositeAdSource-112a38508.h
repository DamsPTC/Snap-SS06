// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdCompositeAdSource
// Superclass: NSObject
// Address: 0x112a38508

@interface SCAdCompositeAdSource

// Property: primary; attributes: T@"SCAdSource",&,N,V_primary
// Property: shadow; attributes: T@"SCAdSource",&,N,V_shadow
// Property: isShadowEnabled; attributes: TB,N,V_isShadowEnabled
// Property: configAdapter; attributes: T@"SCLazy",&,N,V_configAdapter
// Property: shadowAdResponseDataStore; attributes: T@"SCAdServeResponseDataStore",&,N,V_shadowAdResponseDataStore
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdCompositeAdSource initWithPrimaryAdSource:shadowAdSource:configAdapter:shadowAdResponseDataStore:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1054173f0

// -[SCAdCompositeAdSource initializeWithMetadata:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1054174f0

// -[SCAdCompositeAdSource request:willMakeRequest:successBlock:failureBlock:]
// Type encoding: v48@0:8@16@?24@?32@?40
// Implementation: 0x10541758c

// -[SCAdCompositeAdSource protoAdRequestWithMetadata:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1054176dc

// -[SCAdCompositeAdSource track:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054176e4

// -[SCAdCompositeAdSource adExpired:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054178e8

// -[SCAdCompositeAdSource tearDown]
// Type encoding: v16@0:8
// Implementation: 0x105417938

// -[SCAdCompositeAdSource primary]
// Type encoding: @16@0:8
// Implementation: 0x105417960

// -[SCAdCompositeAdSource setPrimary:]
// Type encoding: v24@0:8@16
// Implementation: 0x105417968

// -[SCAdCompositeAdSource shadow]
// Type encoding: @16@0:8
// Implementation: 0x105417998

// -[SCAdCompositeAdSource setShadow:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054179a0

// -[SCAdCompositeAdSource isShadowEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1054179d0

// -[SCAdCompositeAdSource setIsShadowEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1054179d8

// -[SCAdCompositeAdSource configAdapter]
// Type encoding: @16@0:8
// Implementation: 0x1054179e0

// -[SCAdCompositeAdSource setConfigAdapter:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054179e8

// -[SCAdCompositeAdSource shadowAdResponseDataStore]
// Type encoding: @16@0:8
// Implementation: 0x105417a18

// -[SCAdCompositeAdSource setShadowAdResponseDataStore:]
// Type encoding: v24@0:8@16
// Implementation: 0x105417a20

// -[SCAdCompositeAdSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105417a50

@end
