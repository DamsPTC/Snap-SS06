// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCActivityItemCompositeGenerator
// Superclass: NSObject
// Address: 0x112b8f668

@interface SCActivityItemCompositeGenerator

// Property: delegate; attributes: T@"<SCActivityItemGeneratingDelegate>",W,N,V_delegate
// Property: progress; attributes: Tf,?,R,N,V_progress
// Property: item; attributes: T@,?,R,N,V_item
// Property: itemCount; attributes: TQ,?,R,N,V_itemCount
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCActivityItemCompositeGenerator initWithGenerators:compositor:shouldGenerateSerially:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x107f706e4

// -[SCActivityItemCompositeGenerator generateItemForActivityType:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f7090c

// -[SCActivityItemCompositeGenerator generateThumbnailForExport:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107f70a58

// -[SCActivityItemCompositeGenerator cancel]
// Type encoding: v16@0:8
// Implementation: 0x107f70aa8

// -[SCActivityItemCompositeGenerator _items]
// Type encoding: @16@0:8
// Implementation: 0x107f70b98

// -[SCActivityItemCompositeGenerator itemId]
// Type encoding: @16@0:8
// Implementation: 0x107f70bb0

// -[SCActivityItemCompositeGenerator activityItemGenerator:didGenerateItem:itemId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107f70c60

// -[SCActivityItemCompositeGenerator estimatedMediaSize]
// Type encoding: Q16@0:8
// Implementation: 0x107f70e34

// -[SCActivityItemCompositeGenerator itemDuration]
// Type encoding: q16@0:8
// Implementation: 0x107f70ee4

// -[SCActivityItemCompositeGenerator primarySortDate]
// Type encoding: @16@0:8
// Implementation: 0x107f70f94

// -[SCActivityItemCompositeGenerator secondarySortDate]
// Type encoding: @16@0:8
// Implementation: 0x107f70fdc

// -[SCActivityItemCompositeGenerator activityItemGenerator:didFailGeneratingItemWithError:itemId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107f71024

// -[SCActivityItemCompositeGenerator activityItemGenerator:didUpdateProgress:]
// Type encoding: v28@0:8@16f24
// Implementation: 0x107f7124c

// -[SCActivityItemCompositeGenerator activityItemCompositor:didFinishWithComposite:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107f71430

// -[SCActivityItemCompositeGenerator activityItemCompositor:didProgress:]
// Type encoding: v28@0:8@16f24
// Implementation: 0x107f714d4

// -[SCActivityItemCompositeGenerator activityItemCompositor:didFailWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107f71550

// -[SCActivityItemCompositeGenerator activityItemCompositor:requestsDurationForItem:]
// Type encoding: f32@0:8@16@24
// Implementation: 0x107f715d0

// -[SCActivityItemCompositeGenerator delegate]
// Type encoding: @16@0:8
// Implementation: 0x107f71700

// -[SCActivityItemCompositeGenerator setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f71718

// -[SCActivityItemCompositeGenerator itemCount]
// Type encoding: Q16@0:8
// Implementation: 0x107f71724

// -[SCActivityItemCompositeGenerator progress]
// Type encoding: f16@0:8
// Implementation: 0x107f7172c

// -[SCActivityItemCompositeGenerator item]
// Type encoding: @16@0:8
// Implementation: 0x107f71734

// -[SCActivityItemCompositeGenerator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107f7173c

@end
