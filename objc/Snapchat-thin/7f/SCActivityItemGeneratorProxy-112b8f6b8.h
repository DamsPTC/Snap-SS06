// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCActivityItemGeneratorProxy
// Superclass: NSObject
// Address: 0x112b8f6b8

@interface SCActivityItemGeneratorProxy

// Property: isGenerating; attributes: TB,V_isGenerating
// Property: delegate; attributes: T@"<SCActivityItemGeneratingDelegate>",W,N,V_delegate
// Property: progress; attributes: Tf,?,R,N,V_progress
// Property: item; attributes: T@,?,R,N,V_item
// Property: itemCount; attributes: TQ,?,R,N,V_itemCount
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCActivityItemGeneratorProxy initWithGenerator:performer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107f717b0

// -[SCActivityItemGeneratorProxy setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f71888

// -[SCActivityItemGeneratorProxy itemDuration]
// Type encoding: q16@0:8
// Implementation: 0x107f718d8

// -[SCActivityItemGeneratorProxy itemId]
// Type encoding: @16@0:8
// Implementation: 0x107f718e0

// -[SCActivityItemGeneratorProxy estimatedMediaSize]
// Type encoding: Q16@0:8
// Implementation: 0x107f718e8

// -[SCActivityItemGeneratorProxy primarySortDate]
// Type encoding: @16@0:8
// Implementation: 0x107f718f0

// -[SCActivityItemGeneratorProxy secondarySortDate]
// Type encoding: @16@0:8
// Implementation: 0x107f718f8

// -[SCActivityItemGeneratorProxy generateItemForActivityType:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f71900

// -[SCActivityItemGeneratorProxy generateThumbnailForExport:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107f71a18

// -[SCActivityItemGeneratorProxy cancel]
// Type encoding: v16@0:8
// Implementation: 0x107f71a20

// -[SCActivityItemGeneratorProxy activityItemGenerator:didGenerateItem:itemId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107f71a94

// -[SCActivityItemGeneratorProxy activityItemGenerator:didFailGeneratingItemWithError:itemId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107f71b4c

// -[SCActivityItemGeneratorProxy activityItemGenerator:didUpdateProgress:]
// Type encoding: v28@0:8@16f24
// Implementation: 0x107f71bec

// -[SCActivityItemGeneratorProxy respondsToSelector:]
// Type encoding: B24@0:8:16
// Implementation: 0x107f71c34

// -[SCActivityItemGeneratorProxy itemCount]
// Type encoding: Q16@0:8
// Implementation: 0x107f71c54

// -[SCActivityItemGeneratorProxy progress]
// Type encoding: f16@0:8
// Implementation: 0x107f71c5c

// -[SCActivityItemGeneratorProxy item]
// Type encoding: @16@0:8
// Implementation: 0x107f71c64

// -[SCActivityItemGeneratorProxy delegate]
// Type encoding: @16@0:8
// Implementation: 0x107f71c6c

// -[SCActivityItemGeneratorProxy isGenerating]
// Type encoding: B16@0:8
// Implementation: 0x107f71c84

// -[SCActivityItemGeneratorProxy setIsGenerating:]
// Type encoding: v20@0:8B16
// Implementation: 0x107f71c90

// -[SCActivityItemGeneratorProxy .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107f71c98

@end
