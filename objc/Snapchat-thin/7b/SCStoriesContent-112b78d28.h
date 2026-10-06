// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesContent
// Superclass: NSObject
// Address: 0x112b78d28

@interface SCStoriesContent

// Property: streamingContent; attributes: T@"<SCStoriesStreamingContentModel>",R,C,N,V_streamingContent
// Property: nonStreamingContent; attributes: T@"<SCStoriesNonStreamingContentModel>",R,C,N,V_nonStreamingContent
// Property: error; attributes: T@"NSError",R,N,V_error
// Property: firstFrameData; attributes: T@"NSData",R,C,N,V_firstFrameData
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesContent initWithContentResult:withOverlayData:firstFrameData:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107cc549c

// -[SCStoriesContent initWithContentBundle:metadata:withOverlayData:firstFrameData:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107cc5568

// -[SCStoriesContent initWithSnapData:overlayData:unarchivingFailed:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x107cc5654

// -[SCStoriesContent initWithNonStreamingContent:firstFrameData:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107cc5700

// -[SCStoriesContent streamingContent]
// Type encoding: @16@0:8
// Implementation: 0x107cc57a4

// -[SCStoriesContent nonStreamingContent]
// Type encoding: @16@0:8
// Implementation: 0x107cc57ac

// -[SCStoriesContent firstFrameData]
// Type encoding: @16@0:8
// Implementation: 0x107cc57b4

// -[SCStoriesContent error]
// Type encoding: @16@0:8
// Implementation: 0x107cc57bc

// -[SCStoriesContent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107cc57c4

// +[SCStoriesContent storiesContentWithError:]
// Type encoding: @24@0:8@16
// Implementation: 0x107cc5458

@end
