// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserSegments
// Superclass: NSObject
// Address: 0x112bb0048

@interface SCUserSegments

// Property: isNewUser; attributes: TB,R,N,V_isNewUser
// Property: is14DaysNewUser; attributes: TB,R,N,V_is14DaysNewUser
// Property: isResurrectedUser; attributes: TB,R,N,V_isResurrectedUser
// Property: isNewOrHighRiskUser; attributes: TB,R,N,V_isNewOrHighRiskUser
// Property: isInAppRatingPromptTargetUser; attributes: TB,R,N,V_isInAppRatingPromptTargetUser

// -[SCUserSegments initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x108ba744c

// -[SCUserSegments initWithIsNewUser:is14DaysNewUser:isResurrectedUser:isNewOrHighRiskUser:isInAppRatingPromptTargetUser:]
// Type encoding: @36@0:8B16B20B24B28B32
// Implementation: 0x108ba7510

// -[SCUserSegments copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x108ba7588

// -[SCUserSegments encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ba75ac

// -[SCUserSegments hash]
// Type encoding: Q16@0:8
// Implementation: 0x108ba7648

// -[SCUserSegments isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x108ba76c8

// -[SCUserSegments isNewUser]
// Type encoding: B16@0:8
// Implementation: 0x108ba7790

// -[SCUserSegments is14DaysNewUser]
// Type encoding: B16@0:8
// Implementation: 0x108ba7798

// -[SCUserSegments isResurrectedUser]
// Type encoding: B16@0:8
// Implementation: 0x108ba77a0

// -[SCUserSegments isNewOrHighRiskUser]
// Type encoding: B16@0:8
// Implementation: 0x108ba77a8

// -[SCUserSegments isInAppRatingPromptTargetUser]
// Type encoding: B16@0:8
// Implementation: 0x108ba77b0

@end
