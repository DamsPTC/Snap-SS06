// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBackgroundMediaLinkUpdaterProcessor
// Superclass: NSObject
// Address: 0x112a975f8

@interface SCBackgroundMediaLinkUpdaterProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBackgroundMediaLinkUpdaterProcessor initWithSocialSmsSender:boltUploader:grapheneLogger:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105c6a3b8

// -[SCBackgroundMediaLinkUpdaterProcessor processJobWithJobConfig:input:context:onComplete:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x105c6a484

// -[SCBackgroundMediaLinkUpdaterProcessor _updateMediaInBackgroundWithMemoriesMissingMedia:linkId:completionCallback:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105c6a6c4

// -[SCBackgroundMediaLinkUpdaterProcessor uploadMissingMediaToBolt:missingSnapInfo:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105c6ab7c

// -[SCBackgroundMediaLinkUpdaterProcessor _updateMemoryLinkWithLinkId:mediaUpdatesArray:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105c6b15c

// -[SCBackgroundMediaLinkUpdaterProcessor _logMemoriesUpdateLinkSucceededGraphene]
// Type encoding: v16@0:8
// Implementation: 0x105c6b274

// -[SCBackgroundMediaLinkUpdaterProcessor _logMemoriesUpdateLinkFailedGraphene]
// Type encoding: v16@0:8
// Implementation: 0x105c6b280

// -[SCBackgroundMediaLinkUpdaterProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105c6b28c

@end
