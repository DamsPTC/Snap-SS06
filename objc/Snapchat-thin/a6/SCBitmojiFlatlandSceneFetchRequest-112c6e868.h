// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBitmojiFlatlandSceneFetchRequest
// Superclass: NSObject
// Address: 0x112c6e868

@interface SCBitmojiFlatlandSceneFetchRequest

// Property: avatarID; attributes: T@"NSString",R,C,N,V_avatarID
// Property: friendAvatarID; attributes: T@"NSString",R,C,N,V_friendAvatarID
// Property: sceneID; attributes: T@"NSString",R,C,N,V_sceneID
// Property: format; attributes: TQ,R,N,V_format
// Property: scale; attributes: TQ,R,N,V_scale
// Property: feature; attributes: Ti,R,N,V_feature
// Property: renderStyle; attributes: Tq,R,N,V_renderStyle
// Property: from2DFetcher; attributes: TB,R,N,V_from2DFetcher
// Property: isReaction; attributes: TB,R,N,V_isReaction
// Property: desiredSize; attributes: T{CGSize=dd},R,N,V_desiredSize

// -[SCBitmojiFlatlandSceneFetchRequest initWithAvatarID:sceneID:format:scale:feature:renderStyle:]
// Type encoding: @60@0:8@16@24Q32Q40i48q52
// Implementation: 0x10b0e5090

// -[SCBitmojiFlatlandSceneFetchRequest initWithAvatarID:sceneID:format:scale:feature:]
// Type encoding: @52@0:8@16@24Q32Q40i48
// Implementation: 0x10b0e50d8

// -[SCBitmojiFlatlandSceneFetchRequest initWithAvatarID:friendAvatarID:sceneID:format:scale:feature:]
// Type encoding: @60@0:8@16@24@32Q40Q48i56
// Implementation: 0x10b0e50f0

// -[SCBitmojiFlatlandSceneFetchRequest cacheKeyForUniversalAvatarType:cacheVersion:isUsingStagingHost:engineType:customojiText:rendererId:]
// Type encoding: @56@0:8Q16Q24B32i36@40@48
// Implementation: 0x10570d074

// -[SCBitmojiFlatlandSceneFetchRequest initWithAvatarID:friendAvatarID:sceneID:format:scale:feature:renderStyle:from2DFetcher:isReaction:desiredSize:]
// Type encoding: @92@0:8@16@24@32Q40Q48i56q60B68B72{CGSize=dd}76
// Implementation: 0x10b0e6088

// -[SCBitmojiFlatlandSceneFetchRequest copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b0e61b8

// -[SCBitmojiFlatlandSceneFetchRequest hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b0e61dc

// -[SCBitmojiFlatlandSceneFetchRequest isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b0e62c0

// -[SCBitmojiFlatlandSceneFetchRequest avatarID]
// Type encoding: @16@0:8
// Implementation: 0x10b0e6404

// -[SCBitmojiFlatlandSceneFetchRequest friendAvatarID]
// Type encoding: @16@0:8
// Implementation: 0x10b0e640c

// -[SCBitmojiFlatlandSceneFetchRequest sceneID]
// Type encoding: @16@0:8
// Implementation: 0x10b0e6414

// -[SCBitmojiFlatlandSceneFetchRequest format]
// Type encoding: Q16@0:8
// Implementation: 0x10b0e641c

// -[SCBitmojiFlatlandSceneFetchRequest scale]
// Type encoding: Q16@0:8
// Implementation: 0x10b0e6424

// -[SCBitmojiFlatlandSceneFetchRequest feature]
// Type encoding: i16@0:8
// Implementation: 0x10b0e642c

// -[SCBitmojiFlatlandSceneFetchRequest renderStyle]
// Type encoding: q16@0:8
// Implementation: 0x10b0e6434

// -[SCBitmojiFlatlandSceneFetchRequest from2DFetcher]
// Type encoding: B16@0:8
// Implementation: 0x10b0e643c

// -[SCBitmojiFlatlandSceneFetchRequest isReaction]
// Type encoding: B16@0:8
// Implementation: 0x10b0e6444

// -[SCBitmojiFlatlandSceneFetchRequest desiredSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10b0e644c

// -[SCBitmojiFlatlandSceneFetchRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0e6454

@end
