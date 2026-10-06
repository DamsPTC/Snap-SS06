// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStickerTopicPickerViewController
// Superclass: UIViewController
// Address: 0x112bc53a8

@interface SCStickerTopicPickerViewController

// Property: emptyView; attributes: T@"SCStickerTopicPickerEmptyView",&,N,V_emptyView
// Property: pickerView; attributes: T@"SCStickerTopicPickerView",&,N,V_pickerView
// Property: topics; attributes: T@"NSArray",C,N,V_topics
// Property: lastCheckedYOffsetForHaptics; attributes: Td,N,V_lastCheckedYOffsetForHaptics
// Property: state; attributes: TQ,N,V_state
// Property: delegate; attributes: T@"<SCStickerTopicPickerDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStickerTopicPickerViewController init]
// Type encoding: @16@0:8
// Implementation: 0x108e6ad30

// -[SCStickerTopicPickerViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x108e6adac

// -[SCStickerTopicPickerViewController updateWithTopics:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e6b540

// -[SCStickerTopicPickerViewController _updateState:topics:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x108e6b588

// -[SCStickerTopicPickerViewController _viewForState:]
// Type encoding: @24@0:8Q16
// Implementation: 0x108e6b77c

// -[SCStickerTopicPickerViewController tableView:numberOfRowsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x108e6b7c0

// -[SCStickerTopicPickerViewController tableView:cellForRowAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108e6b804

// -[SCStickerTopicPickerViewController tableView:didSelectRowAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108e6b8fc

// -[SCStickerTopicPickerViewController scrollViewWillEndDragging:withVelocity:targetContentOffset:]
// Type encoding: v48@0:8@16{CGPoint=dd}24N^{CGPoint=dd}40
// Implementation: 0x108e6b9ec

// -[SCStickerTopicPickerViewController scrollViewWillBeginDragging:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e6ba8c

// -[SCStickerTopicPickerViewController scrollViewDidScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e6bac0

// -[SCStickerTopicPickerViewController _yOffsetIsOnCenterOfRow:]
// Type encoding: B24@0:8d16
// Implementation: 0x108e6bbb4

// -[SCStickerTopicPickerViewController _yOffsetPassedCenterOfRowSinceLastCheck:]
// Type encoding: B24@0:8d16
// Implementation: 0x108e6bbd8

// -[SCStickerTopicPickerViewController _rowFloatForYOffset:]
// Type encoding: d24@0:8d16
// Implementation: 0x108e6bc5c

// -[SCStickerTopicPickerViewController _highlightedRow]
// Type encoding: q16@0:8
// Implementation: 0x108e6bc6c

// -[SCStickerTopicPickerViewController delegate]
// Type encoding: @16@0:8
// Implementation: 0x108e6bcf0

// -[SCStickerTopicPickerViewController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e6bd10

// -[SCStickerTopicPickerViewController topics]
// Type encoding: @16@0:8
// Implementation: 0x108e6bd24

// -[SCStickerTopicPickerViewController setTopics:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e6bd34

// -[SCStickerTopicPickerViewController emptyView]
// Type encoding: @16@0:8
// Implementation: 0x108e6bd40

// -[SCStickerTopicPickerViewController setEmptyView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e6bd50

// -[SCStickerTopicPickerViewController pickerView]
// Type encoding: @16@0:8
// Implementation: 0x108e6bd90

// -[SCStickerTopicPickerViewController setPickerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e6bda0

// -[SCStickerTopicPickerViewController lastCheckedYOffsetForHaptics]
// Type encoding: d16@0:8
// Implementation: 0x108e6bde0

// -[SCStickerTopicPickerViewController setLastCheckedYOffsetForHaptics:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e6bdf0

// -[SCStickerTopicPickerViewController state]
// Type encoding: Q16@0:8
// Implementation: 0x108e6be00

// -[SCStickerTopicPickerViewController setState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108e6be10

// -[SCStickerTopicPickerViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e6be20

@end
