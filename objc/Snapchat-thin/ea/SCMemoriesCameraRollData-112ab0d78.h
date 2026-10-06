// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesCameraRollData
// Superclass: NSObject
// Address: 0x112ab0d78

@interface SCMemoriesCameraRollData

// Property: itemCount; attributes: Td,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesCameraRollData initWithFetchResult:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f60d68

// -[SCMemoriesCameraRollData itemCount]
// Type encoding: d16@0:8
// Implementation: 0x105f60ddc

// -[SCMemoriesCameraRollData setItemCount:]
// Type encoding: v24@0:8d16
// Implementation: 0x105f60df8

// -[SCMemoriesCameraRollData getItemWithIndex:preferredWidth:preferredHeight:]
// Type encoding: @40@0:8d16d24d32
// Implementation: 0x105f60dfc

// -[SCMemoriesCameraRollData pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x105f60e80

// -[SCMemoriesCameraRollData isValidIndex:]
// Type encoding: B24@0:8d16
// Implementation: 0x105f60e8c

// -[SCMemoriesCameraRollData .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f60ec4

@end
