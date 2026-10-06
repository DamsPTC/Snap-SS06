// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapDocSdomEditorImpl
// Superclass: NSObject
// Address: 0x112a57728

@interface SCSnapDocSdomEditorImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapDocSdomEditorImpl initWithSnapDoc:mediaEditor:valdiRuntimeProvider:capabilitiesManager:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1056bd404

// -[SCSnapDocSdomEditorImpl resetWithSnapDoc:snapDocKey:mediaIdToAssetId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1056bd540

// -[SCSnapDocSdomEditorImpl applySDOMCommands:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056bd570

// -[SCSnapDocSdomEditorImpl _executePendingCommands]
// Type encoding: v16@0:8
// Implementation: 0x1056bd6f8

// -[SCSnapDocSdomEditorImpl _executeCommand:inRuntime:completionBlock:errorBlock:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x1056bdbd4

// -[SCSnapDocSdomEditorImpl validate]
// Type encoding: @16@0:8
// Implementation: 0x1056bddc0

// -[SCSnapDocSdomEditorImpl getSnapDocTextualView]
// Type encoding: @16@0:8
// Implementation: 0x1056be08c

// -[SCSnapDocSdomEditorImpl _createSDOMService]
// Type encoding: @16@0:8
// Implementation: 0x1056be31c

// -[SCSnapDocSdomEditorImpl addBlobToLocalCacheWithBlob:onSuccess:onError:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1056be544

// -[SCSnapDocSdomEditorImpl addFileToLocalCacheWithFilePath:onSuccess:onError:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1056be5d4

// -[SCSnapDocSdomEditorImpl removeCachedContentWithCacheKeys:onSuccess:onError:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1056be68c

// -[SCSnapDocSdomEditorImpl calculateMediaEffectCapabilitiesWithSnapDoc:onSuccess:onError:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1056be698

// -[SCSnapDocSdomEditorImpl isCompatibleWithClientWithSnapDoc:onSuccess:onError:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1056be7f4

// -[SCSnapDocSdomEditorImpl _addFileToLocalCacheWithMediaInput:onSuccess:onError:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1056be938

// -[SCSnapDocSdomEditorImpl _reportSDOMGrapheneMetricsWithStartTime:commandType:didSuccess:]
// Type encoding: v36@0:8d16@24B32
// Implementation: 0x1056bea68

// -[SCSnapDocSdomEditorImpl _reportSDOMGrapheneMetricsWithCommandStartTime:executionStartTime:commandType:didSucceed:]
// Type encoding: v44@0:8d16d24@32B40
// Implementation: 0x1056beb24

// -[SCSnapDocSdomEditorImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056bec00

@end
