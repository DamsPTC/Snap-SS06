// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTopicStickerView
// Superclass: SCPreviewStickerViewContentView
// Address: 0x112bc5268

@interface SCTopicStickerView

// Property: stickerView; attributes: T@"UIView",&,N,V_stickerView
// Property: pillType; attributes: TQ,N,V_pillType
// Property: topic; attributes: T@"SCTopic",R,N,V_topic
// Property: viewType; attributes: Tq,R,N,V_viewType
// Property: infoType; attributes: TQ,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTopicStickerView initWithTopicStyle:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e69444

// -[SCTopicStickerView initWithTopicStyle:pillType:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x108e6944c

// -[SCTopicStickerView initWithTopic:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e69530

// -[SCTopicStickerView initWithTopic:pillType:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x108e69538

// -[SCTopicStickerView initWithTopic:viewType:pillType:]
// Type encoding: @40@0:8@16q24Q32
// Implementation: 0x108e69548

// -[SCTopicStickerView initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e69600

// -[SCTopicStickerView encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e69634

// -[SCTopicStickerView copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x108e69638

// -[SCTopicStickerView displayName]
// Type encoding: @16@0:8
// Implementation: 0x108e6965c

// -[SCTopicStickerView text]
// Type encoding: @16@0:8
// Implementation: 0x108e6966c

// -[SCTopicStickerView loggingParameters]
// Type encoding: @16@0:8
// Implementation: 0x108e696bc

// -[SCTopicStickerView packId]
// Type encoding: @16@0:8
// Implementation: 0x108e69734

// -[SCTopicStickerView shortLoggingName]
// Type encoding: @16@0:8
// Implementation: 0x108e69740

// -[SCTopicStickerView stickerId]
// Type encoding: @16@0:8
// Implementation: 0x108e697a4

// -[SCTopicStickerView toCTPItem]
// Type encoding: @16@0:8
// Implementation: 0x108e697b4

// -[SCTopicStickerView toCTItemInstance]
// Type encoding: @16@0:8
// Implementation: 0x108e697bc

// -[SCTopicStickerView type]
// Type encoding: Q16@0:8
// Implementation: 0x108e697c4

// -[SCTopicStickerView infoType]
// Type encoding: Q16@0:8
// Implementation: 0x108e697cc

// -[SCTopicStickerView intrinsicSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x108e697d4

// -[SCTopicStickerView setViewType:]
// Type encoding: v24@0:8q16
// Implementation: 0x108e697e4

// -[SCTopicStickerView _setViewTypeToPillStyle:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108e69884

// -[SCTopicStickerView tappableElementBounds]
// Type encoding: @16@0:8
// Implementation: 0x108e69994

// -[SCTopicStickerView shouldRespondToTap:]
// Type encoding: B24@0:8@16
// Implementation: 0x108e69a28

// -[SCTopicStickerView cycleStickerToNextStyle]
// Type encoding: v16@0:8
// Implementation: 0x108e69a30

// -[SCTopicStickerView scaleLimit]
// Type encoding: q16@0:8
// Implementation: 0x108e69a90

// -[SCTopicStickerView topic]
// Type encoding: @16@0:8
// Implementation: 0x108e69a98

// -[SCTopicStickerView viewType]
// Type encoding: q16@0:8
// Implementation: 0x108e69aa8

// -[SCTopicStickerView stickerView]
// Type encoding: @16@0:8
// Implementation: 0x108e69ab8

// -[SCTopicStickerView setStickerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e69ac8

// -[SCTopicStickerView pillType]
// Type encoding: Q16@0:8
// Implementation: 0x108e69b08

// -[SCTopicStickerView setPillType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108e69b18

// -[SCTopicStickerView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e69b28

// +[SCTopicStickerView placeholderTopic]
// Type encoding: @16@0:8
// Implementation: 0x108e69318

// +[SCTopicStickerView viewForStickerPickerWithInteractiveStickerPillType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x108e6934c

@end
