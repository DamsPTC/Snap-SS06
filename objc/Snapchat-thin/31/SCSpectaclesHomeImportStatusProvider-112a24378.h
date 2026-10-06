// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesHomeImportStatusProvider
// Superclass: NSObject
// Address: 0x112a24378

@interface SCSpectaclesHomeImportStatusProvider

// Property: currentStatusObservable; attributes: T@"SCBridgeObservable",&,N,V_currentStatusObservable
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesHomeImportStatusProvider initWithDevice:contentStatusProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10523779c

// -[SCSpectaclesHomeImportStatusProvider pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x105237848

// -[SCSpectaclesHomeImportStatusProvider _setupStatusObservations]
// Type encoding: v16@0:8
// Implementation: 0x105237854

// -[SCSpectaclesHomeImportStatusProvider _emitInitialStatus]
// Type encoding: v16@0:8
// Implementation: 0x105237a2c

// -[SCSpectaclesHomeImportStatusProvider _refreshStatusIfNeededWithNewContentStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x105237a80

// -[SCSpectaclesHomeImportStatusProvider currentStatusObservable]
// Type encoding: @16@0:8
// Implementation: 0x105237cb4

// -[SCSpectaclesHomeImportStatusProvider setCurrentStatusObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105237cbc

// -[SCSpectaclesHomeImportStatusProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105237cec

@end
