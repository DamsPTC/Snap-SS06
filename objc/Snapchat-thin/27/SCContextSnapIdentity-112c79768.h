// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextSnapIdentity
// Superclass: NSObject
// Address: 0x112c79768

@interface SCContextSnapIdentity

// Property: clientId; attributes: T@"NSString",R,C,N,V_clientId
// Property: storySnapId; attributes: T@"NSString",R,C,N,V_storySnapId
// Property: storyId; attributes: T@"NSString",R,C,N,V_storyId
// Property: chatMessageId; attributes: T@"NSString",R,C,N,V_chatMessageId
// Property: launchSource; attributes: Tq,R,N,V_launchSource
// Property: isUserGeneratedContent; attributes: TB,R,N,V_isUserGeneratedContent
// Property: creatorID; attributes: T@"NSString",R,C,N,V_creatorID
// Property: shouldBoostOnSnapLevel; attributes: TB,R,N,V_shouldBoostOnSnapLevel
// Property: discoverStoryCompositeId; attributes: T@"NSString",R,C,N,V_discoverStoryCompositeId
// Property: businessProfileId; attributes: T@"NSString",R,C,N,V_businessProfileId
// Property: discoverStoryDedupeFp; attributes: T@"NSNumber",R,C,N,V_discoverStoryDedupeFp

// -[SCContextSnapIdentity initWithContextData:]
// Type encoding: @24@0:8@16
// Implementation: 0x1065eeac8

// -[SCContextSnapIdentity initWithClientId:storySnapId:storyId:chatMessageId:launchSource:isUserGeneratedContent:creatorID:shouldBoostOnSnapLevel:discoverStoryCompositeId:businessProfileId:discoverStoryDedupeFp:]
// Type encoding: @96@0:8@16@24@32@40q48B56@60B68@72@80@88
// Implementation: 0x10b6063dc

// -[SCContextSnapIdentity copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b6065c8

// -[SCContextSnapIdentity hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b6065ec

// -[SCContextSnapIdentity isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b6066c0

// -[SCContextSnapIdentity clientId]
// Type encoding: @16@0:8
// Implementation: 0x10b606828

// -[SCContextSnapIdentity storySnapId]
// Type encoding: @16@0:8
// Implementation: 0x10b606830

// -[SCContextSnapIdentity storyId]
// Type encoding: @16@0:8
// Implementation: 0x10b606838

// -[SCContextSnapIdentity chatMessageId]
// Type encoding: @16@0:8
// Implementation: 0x10b606840

// -[SCContextSnapIdentity launchSource]
// Type encoding: q16@0:8
// Implementation: 0x10b606848

// -[SCContextSnapIdentity isUserGeneratedContent]
// Type encoding: B16@0:8
// Implementation: 0x10b606850

// -[SCContextSnapIdentity creatorID]
// Type encoding: @16@0:8
// Implementation: 0x10b606858

// -[SCContextSnapIdentity shouldBoostOnSnapLevel]
// Type encoding: B16@0:8
// Implementation: 0x10b606860

// -[SCContextSnapIdentity discoverStoryCompositeId]
// Type encoding: @16@0:8
// Implementation: 0x10b606868

// -[SCContextSnapIdentity businessProfileId]
// Type encoding: @16@0:8
// Implementation: 0x10b606870

// -[SCContextSnapIdentity discoverStoryDedupeFp]
// Type encoding: @16@0:8
// Implementation: 0x10b606878

// -[SCContextSnapIdentity .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b606880

@end
