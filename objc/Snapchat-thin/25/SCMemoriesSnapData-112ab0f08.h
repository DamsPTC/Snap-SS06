// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesSnapData
// Superclass: NSObject
// Address: 0x112ab0f08

@interface SCMemoriesSnapData

// Property: itemCount; attributes: Td,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesSnapData initWithMemoriesSnapItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f64158

// -[SCMemoriesSnapData itemCount]
// Type encoding: d16@0:8
// Implementation: 0x105f641cc

// -[SCMemoriesSnapData setItemCount:]
// Type encoding: v24@0:8d16
// Implementation: 0x105f641e8

// -[SCMemoriesSnapData getItemWithIndex:preferredWidth:preferredHeight:]
// Type encoding: @40@0:8d16d24d32
// Implementation: 0x105f641ec

// -[SCMemoriesSnapData pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x105f641f8

// -[SCMemoriesSnapData isValidIndex:]
// Type encoding: B24@0:8d16
// Implementation: 0x105f64204

// -[SCMemoriesSnapData .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f64244

@end
