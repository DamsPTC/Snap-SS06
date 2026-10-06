// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRecipientList
// Superclass: SCDocObject
// Address: 0x112b415a8

@interface SCRecipientList

// Property: listId; attributes: T@"NSString",R,C,N,V_listId
// Property: name; attributes: T@"NSString",R,C,N,V_name
// Property: rank; attributes: Ti,R,N,V_rank
// Property: creationTimestamp; attributes: Td,R,N,V_creationTimestamp
// Property: listItems; attributes: T@"NSArray",R,C,N,V_listItems

// -[SCRecipientList initWithListId:name:rank:creationTimestamp:listItems:]
// Type encoding: @52@0:8@16@24i32d36@44
// Implementation: 0x106e79acc

// -[SCRecipientList copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x106e79be0

// -[SCRecipientList hash]
// Type encoding: Q16@0:8
// Implementation: 0x106e79c04

// -[SCRecipientList isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x106e79cc8

// -[SCRecipientList listId]
// Type encoding: @16@0:8
// Implementation: 0x106e79df4

// -[SCRecipientList name]
// Type encoding: @16@0:8
// Implementation: 0x106e79e04

// -[SCRecipientList rank]
// Type encoding: i16@0:8
// Implementation: 0x106e79e14

// -[SCRecipientList creationTimestamp]
// Type encoding: d16@0:8
// Implementation: 0x106e79e24

// -[SCRecipientList listItems]
// Type encoding: @16@0:8
// Implementation: 0x106e79e34

// -[SCRecipientList .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106e79e44

// +[SCRecipientList table]
// Type encoding: r*16@0:8
// Implementation: 0x106e7a1d8

// +[SCRecipientList immutableObjectParse:bufferSize:]
// Type encoding: @32@0:8r^v16Q24
// Implementation: 0x106e7a1e4

// +[SCRecipientList objectClassFunctionPointer]
// Type encoding: {SCDocObjectClassFunctionPointer=^?^?}16@0:8
// Implementation: 0x106e7a544

@end
