// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: CTPPersistedItem
// Superclass: NSObject
// Address: 0x112cb6c58

@interface CTPPersistedItem

// Property: itemId; attributes: T@"NSString",R,C,N,V_itemId
// Property: rankId; attributes: T@"NSString",R,C,N,V_rankId
// Property: data; attributes: T@"NSData",R,C,N,V_data
// Property: section; attributes: T@"CTPPersistedSectionMetadata",R,C,N,V_section
// Property: feedIdentifiers; attributes: T@"CTPFeedIdentifiers",R,C,N,V_feedIdentifiers
// Property: version; attributes: T@"NSString",R,C,N,V_version
// Property: clientCacheTtlMinutes; attributes: Tq,R,N,V_clientCacheTtlMinutes
// Property: requestId; attributes: T@"NSString",R,C,N,V_requestId
// Property: sectionName; attributes: T@"NSString",R,C,N,V_sectionName

// -[CTPPersistedItem initWithItemId:rankId:data:section:feedIdentifiers:version:clientCacheTtlMinutes:requestId:sectionName:]
// Type encoding: @88@0:8@16@24@32@40@48@56q64@72@80
// Implementation: 0x10b74f19c

// -[CTPPersistedItem copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b74f36c

// -[CTPPersistedItem hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b74f390

// -[CTPPersistedItem isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b74f458

// -[CTPPersistedItem itemId]
// Type encoding: @16@0:8
// Implementation: 0x10b74f5a0

// -[CTPPersistedItem rankId]
// Type encoding: @16@0:8
// Implementation: 0x10b74f5a8

// -[CTPPersistedItem data]
// Type encoding: @16@0:8
// Implementation: 0x10b74f5b0

// -[CTPPersistedItem section]
// Type encoding: @16@0:8
// Implementation: 0x10b74f5b8

// -[CTPPersistedItem feedIdentifiers]
// Type encoding: @16@0:8
// Implementation: 0x10b74f5c0

// -[CTPPersistedItem version]
// Type encoding: @16@0:8
// Implementation: 0x10b74f5c8

// -[CTPPersistedItem clientCacheTtlMinutes]
// Type encoding: q16@0:8
// Implementation: 0x10b74f5d0

// -[CTPPersistedItem requestId]
// Type encoding: @16@0:8
// Implementation: 0x10b74f5d8

// -[CTPPersistedItem sectionName]
// Type encoding: @16@0:8
// Implementation: 0x10b74f5e0

// -[CTPPersistedItem .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b74f5e8

@end
