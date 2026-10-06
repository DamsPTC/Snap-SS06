// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBitmojiFlatlandUserUpdater
// Superclass: NSObject
// Address: 0x1129f8228

@interface SCBitmojiFlatlandUserUpdater

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBitmojiFlatlandUserUpdater initWithBitmojiFlatlandInfoMutator:grpcClientFactory:opsMetricsLogger:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104d545a0

// -[SCBitmojiFlatlandUserUpdater updateSceneId:backgroundId:backgroundURL:withCompletion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x104d547cc

// -[SCBitmojiFlatlandUserUpdater _handleSuccessForSceneId:backgroundId:backgroundURL:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104d54b74

// -[SCBitmojiFlatlandUserUpdater _handleFailureOutcomeWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d54c10

// -[SCBitmojiFlatlandUserUpdater _backgroundTypeFromFlatlandBackgroundURLType:]
// Type encoding: i24@0:8q16
// Implementation: 0x104d54c18

// -[SCBitmojiFlatlandUserUpdater .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104d54c34

@end
