// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlatformAnalyticsDetailedRecipientInfo
// Superclass: NSObject
// Address: 0x112c65e48

@interface SCPlatformAnalyticsDetailedRecipientInfo

// Property: numOfUniqueRecipients; attributes: Tq,R,N,V_numOfUniqueRecipients
// Property: numOfGroupRecipients; attributes: Tq,R,N,V_numOfGroupRecipients
// Property: numOfUniqueGroupRecipients; attributes: Tq,R,N,V_numOfUniqueGroupRecipients
// Property: recipientRelationshipCounts; attributes: T@"SCPlatformAnalyticsRecipientRelationshipCounts",R,C,N,V_recipientRelationshipCounts

// -[SCPlatformAnalyticsDetailedRecipientInfo initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b069030

// -[SCPlatformAnalyticsDetailedRecipientInfo initWithNumOfUniqueRecipients:numOfGroupRecipients:numOfUniqueGroupRecipients:recipientRelationshipCounts:]
// Type encoding: @48@0:8q16q24q32@40
// Implementation: 0x10b0690f4

// -[SCPlatformAnalyticsDetailedRecipientInfo copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b069190

// -[SCPlatformAnalyticsDetailedRecipientInfo encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0691b4

// -[SCPlatformAnalyticsDetailedRecipientInfo hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b06923c

// -[SCPlatformAnalyticsDetailedRecipientInfo isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b0692b0

// -[SCPlatformAnalyticsDetailedRecipientInfo numOfUniqueRecipients]
// Type encoding: q16@0:8
// Implementation: 0x10b069370

// -[SCPlatformAnalyticsDetailedRecipientInfo numOfGroupRecipients]
// Type encoding: q16@0:8
// Implementation: 0x10b069378

// -[SCPlatformAnalyticsDetailedRecipientInfo numOfUniqueGroupRecipients]
// Type encoding: q16@0:8
// Implementation: 0x10b069380

// -[SCPlatformAnalyticsDetailedRecipientInfo recipientRelationshipCounts]
// Type encoding: @16@0:8
// Implementation: 0x10b069388

// -[SCPlatformAnalyticsDetailedRecipientInfo .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b069390

@end
