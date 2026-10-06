// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMultiSnapSegmentImpl
// Superclass: NSObject
// Address: 0x112bbf598

@interface SCMultiSnapSegmentImpl

// Property: timeRange; attributes: T{?={?=qiIq}{?=qiIq}},R,N,V_timeRange
// Property: thumbnail; attributes: T@"UIImage",R,N,V_thumbnail
// Property: thumbnailTime; attributes: T{?=qiIq},R,N,V_thumbnailTime
// Property: editedThumbnail; attributes: T@"UIImage",R,N,V_editedThumbnail
// Property: trimmedTimeRange; attributes: T{?={?=qiIq}{?=qiIq}},R,N,V_trimmedTimeRange
// Property: uniqueId; attributes: Tq,R,N,V_uniqueId
// Property: editedThumbnails; attributes: T@"NSArray",R,N,V_editedThumbnails
// Property: thumbnailFutures; attributes: T@"NSArray",R,N,V_thumbnailFutures
// Property: minimumSegmentDuration; attributes: T{?=qiIq},R,N,V_minimumSegmentDuration
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMultiSnapSegmentImpl initWithThumbnail:editedThumbnail:thumbnailTime:timeRange:]
// Type encoding: @104@0:8@16@24{?=qiIq}32{?={?=qiIq}{?=qiIq}}56
// Implementation: 0x108cf0578

// -[SCMultiSnapSegmentImpl initWithThumbnail:thumbnailTime:]
// Type encoding: @48@0:8@16{?=qiIq}24
// Implementation: 0x108cf065c

// -[SCMultiSnapSegmentImpl initWithTimeRange:trimmedTimeRange:editedThumbnails:thumbnailFutures:]
// Type encoding: @128@0:8{?={?=qiIq}{?=qiIq}}16{?={?=qiIq}{?=qiIq}}64@112@120
// Implementation: 0x108cf0708

// -[SCMultiSnapSegmentImpl initWithTimeRange:trimmedTimeRange:editedThumbnails:thumbnailFutures:minimumSegmentDuration:]
// Type encoding: @152@0:8{?={?=qiIq}{?=qiIq}}16{?={?=qiIq}{?=qiIq}}64@112@120{?=qiIq}128
// Implementation: 0x108cf0768

// -[SCMultiSnapSegmentImpl setUniqueId:]
// Type encoding: v24@0:8q16
// Implementation: 0x108cf0878

// -[SCMultiSnapSegmentImpl setTrimmedTimeRange:]
// Type encoding: v64@0:8{?={?=qiIq}{?=qiIq}}16
// Implementation: 0x108cf0880

// -[SCMultiSnapSegmentImpl editedThumbnail]
// Type encoding: @16@0:8
// Implementation: 0x108cf08f8

// -[SCMultiSnapSegmentImpl editedThumbnails]
// Type encoding: @16@0:8
// Implementation: 0x108cf0900

// -[SCMultiSnapSegmentImpl thumbnail]
// Type encoding: @16@0:8
// Implementation: 0x108cf0908

// -[SCMultiSnapSegmentImpl thumbnailTime]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x108cf0910

// -[SCMultiSnapSegmentImpl timeRange]
// Type encoding: {?={?=qiIq}{?=qiIq}}16@0:8
// Implementation: 0x108cf0924

// -[SCMultiSnapSegmentImpl trimmedTimeRange]
// Type encoding: {?={?=qiIq}{?=qiIq}}16@0:8
// Implementation: 0x108cf0938

// -[SCMultiSnapSegmentImpl minimumSegmentDuration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x108cf094c

// -[SCMultiSnapSegmentImpl thumbnailFutures]
// Type encoding: @16@0:8
// Implementation: 0x108cf0960

// -[SCMultiSnapSegmentImpl uniqueId]
// Type encoding: q16@0:8
// Implementation: 0x108cf0968

// -[SCMultiSnapSegmentImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108cf0970

@end
