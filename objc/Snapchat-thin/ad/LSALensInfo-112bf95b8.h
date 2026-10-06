// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSALensInfo
// Superclass: NSObject
// Address: 0x112bf95b8

@interface LSALensInfo

// Property: lensId; attributes: T@"NSString",R,C,V_lensId
// Property: allowReloadingForRestarting; attributes: TB,V_allowReloadingForRestarting
// Property: contentPath; attributes: T@"NSString",R,C,V_contentPath
// Property: apiLevel; attributes: TQ,R,V_apiLevel
// Property: publicApiUserDataAccess; attributes: TQ,R,V_publicApiUserDataAccess
// Property: launchMetadata; attributes: T@"NSData",R,V_launchMetadata
// Property: renderOrder; attributes: Tq,R,V_renderOrder
// Property: chainGroup; attributes: Tq,R,V_chainGroup
// Property: randomSeed; attributes: Tq,R,V_randomSeed
// Property: lensStudioDevFlags; attributes: TQ,R,V_lensStudioDevFlags
// Property: isWarmup; attributes: TB,R,V_isWarmup

// -[LSALensInfo initWithLensId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10adabc28

// -[LSALensInfo initWithLensId:contentPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10adabc68

// -[LSALensInfo initWithLensId:contentPath:isThirdParty:launchMetadata:]
// Type encoding: @44@0:8@16@24B32@36
// Implementation: 0x10adabca4

// -[LSALensInfo initWithLensId:contentPath:apiLevel:launchMetadata:]
// Type encoding: @48@0:8@16@24Q32@40
// Implementation: 0x10adabce8

// -[LSALensInfo initWithLensId:contentPath:apiLevel:launchMetadata:randomSeed:]
// Type encoding: @56@0:8@16@24Q32@40q48
// Implementation: 0x10adabcf4

// -[LSALensInfo initWithLensId:contentPath:apiLevel:launchMetadata:renderOrder:chainGroup:randomSeed:]
// Type encoding: @72@0:8@16@24Q32@40q48q56q64
// Implementation: 0x10adabd04

// -[LSALensInfo initWithLensId:contentPath:apiLevel:publicApiUserDataAccess:launchMetadata:]
// Type encoding: @56@0:8@16@24Q32Q40@48
// Implementation: 0x10adabd40

// -[LSALensInfo initWithLensId:contentPath:apiLevel:publicApiUserDataAccess:launchMetadata:randomSeed:]
// Type encoding: @64@0:8@16@24Q32Q40@48q56
// Implementation: 0x10adabd70

// -[LSALensInfo initWithLensId:contentPath:isThirdParty:launchMetadata:renderOrder:chainGroup:]
// Type encoding: @60@0:8@16@24B32@36q44q52
// Implementation: 0x10adabda0

// -[LSALensInfo initWithLensId:contentPath:apiLevel:publicApiUserDataAccess:launchMetadata:renderOrder:chainGroup:randomSeed:]
// Type encoding: @80@0:8@16@24Q32Q40@48q56q64q72
// Implementation: 0x10adabde8

// -[LSALensInfo initWithLensId:contentPath:apiLevel:publicApiUserDataAccess:launchMetadata:renderOrder:chainGroup:randomSeed:lensStudioDevFlags:isWarmup:]
// Type encoding: @92@0:8@16@24Q32Q40@48q56q64q72Q80B88
// Implementation: 0x10adabe14

// -[LSALensInfo lensId]
// Type encoding: @16@0:8
// Implementation: 0x10adabf28

// -[LSALensInfo allowReloadingForRestarting]
// Type encoding: B16@0:8
// Implementation: 0x10adabf34

// -[LSALensInfo setAllowReloadingForRestarting:]
// Type encoding: v20@0:8B16
// Implementation: 0x10adabf40

// -[LSALensInfo contentPath]
// Type encoding: @16@0:8
// Implementation: 0x10adabf48

// -[LSALensInfo apiLevel]
// Type encoding: Q16@0:8
// Implementation: 0x10adabf54

// -[LSALensInfo publicApiUserDataAccess]
// Type encoding: Q16@0:8
// Implementation: 0x10adabf5c

// -[LSALensInfo launchMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10adabf64

// -[LSALensInfo renderOrder]
// Type encoding: q16@0:8
// Implementation: 0x10adabf70

// -[LSALensInfo chainGroup]
// Type encoding: q16@0:8
// Implementation: 0x10adabf78

// -[LSALensInfo randomSeed]
// Type encoding: q16@0:8
// Implementation: 0x10adabf80

// -[LSALensInfo lensStudioDevFlags]
// Type encoding: Q16@0:8
// Implementation: 0x10adabf88

// -[LSALensInfo isWarmup]
// Type encoding: B16@0:8
// Implementation: 0x10adabf90

// -[LSALensInfo .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10adabf9c

@end
