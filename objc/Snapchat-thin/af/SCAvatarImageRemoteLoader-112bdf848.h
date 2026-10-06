// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAvatarImageRemoteLoader
// Superclass: NSObject
// Address: 0x112bdf848

@interface SCAvatarImageRemoteLoader

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAvatarImageRemoteLoader initWithBitmojiImageFetcher:bitmojiSelfieFetcher:bitmojiContentFetcher:bitmojiConfigProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x108fea044

// -[SCAvatarImageRemoteLoader downloadItem:callbackQueue:completionBlock:retryCount:]
// Type encoding: v48@0:8@16@24@?32Q40
// Implementation: 0x108fea210

// -[SCAvatarImageRemoteLoader _fetchSelfieWithUserId:avatarId:selfieId:type:contexts:feature:scale:canUsePrior:modifier:callbackQueue:completion:]
// Type encoding: v96@0:8@16@24@32Q40@48i56Q60B68Q72@80@?88
// Implementation: 0x108fea668

// -[SCAvatarImageRemoteLoader _fetchBitmojiWithTemplateId:avatarId:friendAvatarId:scale:imageType:contexts:feature:canUsePrior:callbackQueue:completion:]
// Type encoding: v88@0:8@16@24@32Q40Q48@56i64B68@72@?80
// Implementation: 0x108fea810

// -[SCAvatarImageRemoteLoader _fetchBitmojiWithImageParams:contexts:feature:canUsePrior:callbackQueue:completion:]
// Type encoding: v56@0:8@16@24i32B36@40@?48
// Implementation: 0x108fea934

// -[SCAvatarImageRemoteLoader _fetchBitmojiSelfieWithRequest:contexts:feature:callbackQueue:completion:]
// Type encoding: v52@0:8@16@24i32@36@?44
// Implementation: 0x108feab90

// -[SCAvatarImageRemoteLoader _didFetchImageData:imageType:forImageParams:responseContext:originalParams:completion:]
// Type encoding: v64@0:8@16Q24@32@40@48@?56
// Implementation: 0x108fead5c

// -[SCAvatarImageRemoteLoader _didFetchImageData:forSelfieRequest:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108feae64

// -[SCAvatarImageRemoteLoader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108feaf2c

@end
