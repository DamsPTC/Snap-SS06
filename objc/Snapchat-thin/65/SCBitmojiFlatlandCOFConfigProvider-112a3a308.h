// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBitmojiFlatlandCOFConfigProvider
// Superclass: NSObject
// Address: 0x112a3a308

@interface SCBitmojiFlatlandCOFConfigProvider

// Property: useStagingHost; attributes: TB,R,N
// Property: pistachioContentTag; attributes: T@"NSString",R,N
// Property: engineType; attributes: Ti,R,N
// Property: previewEngineType; attributes: Ti,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBitmojiFlatlandCOFConfigProvider initWithCircumstanceEngine:callbackPerformer:userHasher:userSessionScope:opsMetricsLogger:preferences:avatarIdProvider:clientRenderGatingProvider:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x10548354c

// -[SCBitmojiFlatlandCOFConfigProvider useStagingHost]
// Type encoding: B16@0:8
// Implementation: 0x105483708

// -[SCBitmojiFlatlandCOFConfigProvider pistachioContentTag]
// Type encoding: @16@0:8
// Implementation: 0x105483720

// -[SCBitmojiFlatlandCOFConfigProvider engineType]
// Type encoding: i16@0:8
// Implementation: 0x10548376c

// -[SCBitmojiFlatlandCOFConfigProvider previewEngineType]
// Type encoding: i16@0:8
// Implementation: 0x105483784

// -[SCBitmojiFlatlandCOFConfigProvider backgroundIdentifiers]
// Type encoding: @16@0:8
// Implementation: 0x10548379c

// -[SCBitmojiFlatlandCOFConfigProvider sceneIdentifiers]
// Type encoding: @16@0:8
// Implementation: 0x105483988

// -[SCBitmojiFlatlandCOFConfigProvider defaultBackgroundIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105483b74

// -[SCBitmojiFlatlandCOFConfigProvider defaultBackgroundIdentifierForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105483bf8

// -[SCBitmojiFlatlandCOFConfigProvider allDefaultBackgroundIdentifiers]
// Type encoding: @16@0:8
// Implementation: 0x105483ed4

// -[SCBitmojiFlatlandCOFConfigProvider defaultSceneIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1054842b4

// -[SCBitmojiFlatlandCOFConfigProvider defaultSceneIdentifierForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105484338

// -[SCBitmojiFlatlandCOFConfigProvider allDefaultSceneIdentifiers]
// Type encoding: @16@0:8
// Implementation: 0x105484614

// -[SCBitmojiFlatlandCOFConfigProvider newContentAlertsConfig]
// Type encoding: @16@0:8
// Implementation: 0x1054849dc

// -[SCBitmojiFlatlandCOFConfigProvider cacheVersionForAvatarID:friendAvatarID:sceneID:]
// Type encoding: Q40@0:8@16@24@32
// Implementation: 0x105484b44

// -[SCBitmojiFlatlandCOFConfigProvider clientRendererLensIdForAvatarId:friendAvatarId:featureAttribution:renderStyle:]
// Type encoding: i44@0:8@16@24i32q36
// Implementation: 0x105484d44

// -[SCBitmojiFlatlandCOFConfigProvider _requestCOFProtoForKey:transform:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x105484df8

// -[SCBitmojiFlatlandCOFConfigProvider _createCOFProtoDisposableObserverForKey:observer:transform:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x105484f74

// -[SCBitmojiFlatlandCOFConfigProvider _handleBackgroundIdentifiersResponse:]
// Type encoding: @24@0:8@16
// Implementation: 0x105485214

// -[SCBitmojiFlatlandCOFConfigProvider _handleSceneIdentifiersResponse:]
// Type encoding: @24@0:8@16
// Implementation: 0x105485554

// -[SCBitmojiFlatlandCOFConfigProvider _handleBackgroundDefaultsResponse:]
// Type encoding: @24@0:8@16
// Implementation: 0x105485760

// -[SCBitmojiFlatlandCOFConfigProvider _handleSceneDefaultsResponse:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054858c0

// -[SCBitmojiFlatlandCOFConfigProvider _handleNewContentAlertsConfigResponse:]
// Type encoding: @24@0:8@16
// Implementation: 0x105485a20

// -[SCBitmojiFlatlandCOFConfigProvider _stringFromInt:]
// Type encoding: @20@0:8i16
// Implementation: 0x105485b5c

// -[SCBitmojiFlatlandCOFConfigProvider _stringArrayFromProtoIntArray:]
// Type encoding: @24@0:8@16
// Implementation: 0x105485b8c

// -[SCBitmojiFlatlandCOFConfigProvider _identifierResultFromListResult:userId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105485c94

// -[SCBitmojiFlatlandCOFConfigProvider _combineSceneIdentifiers:withWheelChairIdentifiers:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105485ec8

// -[SCBitmojiFlatlandCOFConfigProvider _defaultProtoForConfigKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x105486018

// -[SCBitmojiFlatlandCOFConfigProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054861c0

@end
