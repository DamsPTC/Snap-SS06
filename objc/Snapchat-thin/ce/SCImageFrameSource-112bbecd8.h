// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageFrameSource
// Superclass: NSObject
// Address: 0x112bbecd8

@interface SCImageFrameSource

// Property: delegate; attributes: T@"<SCImageFrameSourceDelegate>",W,N,V_delegate
// Property: duration; attributes: T{?=qiIq},N,V_duration
// Property: itemTimeStartOffset; attributes: T{?=qiIq},N,V_itemTimeStartOffset
// Property: rate; attributes: Td,N,V_rate
// Property: renderOrientation; attributes: Tq,N,V_renderOrientation
// Property: didProcessFirstFrame; attributes: TB,N,VdidProcessFirstFrame
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImageFrameSource initWithPixelBuffer:imageOrientation:duration:]
// Type encoding: @56@0:8^{__CVBuffer=}16q24{?=qiIq}32
// Implementation: 0x108cdfa00

// -[SCImageFrameSource dealloc]
// Type encoding: v16@0:8
// Implementation: 0x108cdfaa4

// -[SCImageFrameSource startReading]
// Type encoding: v16@0:8
// Implementation: 0x108cdfaec

// -[SCImageFrameSource cancelReading]
// Type encoding: v16@0:8
// Implementation: 0x108cdfb20

// -[SCImageFrameSource itemTimeRange]
// Type encoding: {?={?=qiIq}{?=qiIq}}16@0:8
// Implementation: 0x108cdfb2c

// -[SCImageFrameSource setRate:]
// Type encoding: v24@0:8d16
// Implementation: 0x108cdfb70

// -[SCImageFrameSource isSourceReady]
// Type encoding: B16@0:8
// Implementation: 0x108cdfbc4

// -[SCImageFrameSource itemTimeForHostTime:]
// Type encoding: {?=qiIq}24@0:8d16
// Implementation: 0x108cdfbcc

// -[SCImageFrameSource hasNewPixelBufferForItemTime:]
// Type encoding: B40@0:8{?=qiIq}16
// Implementation: 0x108cdfbe4

// -[SCImageFrameSource acquirePixelBufferForItemTime:itemTimeForDisplay:]
// Type encoding: ^{__CVBuffer=}48@0:8{?=qiIq}16^{?=qiIq}40
// Implementation: 0x108cdfc30

// -[SCImageFrameSource acquirePixelBufferForItemTime:forSegmentAtIndex:itemTimeForDisplay:]
// Type encoding: ^{__CVBuffer=}56@0:8{?=qiIq}16q40^{?=qiIq}48
// Implementation: 0x108cdfd08

// -[SCImageFrameSource seekToTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x108cdfd3c

// -[SCImageFrameSource itemTimeStartOffset]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x108cdfdc4

// -[SCImageFrameSource setItemTimeStartOffset:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x108cdfdd8

// -[SCImageFrameSource rate]
// Type encoding: d16@0:8
// Implementation: 0x108cdfdec

// -[SCImageFrameSource renderOrientation]
// Type encoding: q16@0:8
// Implementation: 0x108cdfdf4

// -[SCImageFrameSource setRenderOrientation:]
// Type encoding: v24@0:8q16
// Implementation: 0x108cdfdfc

// -[SCImageFrameSource didProcessFirstFrame]
// Type encoding: B16@0:8
// Implementation: 0x108cdfe04

// -[SCImageFrameSource setDidProcessFirstFrame:]
// Type encoding: v20@0:8B16
// Implementation: 0x108cdfe0c

// -[SCImageFrameSource delegate]
// Type encoding: @16@0:8
// Implementation: 0x108cdfe14

// -[SCImageFrameSource setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108cdfe2c

// -[SCImageFrameSource duration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x108cdfe38

// -[SCImageFrameSource setDuration:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x108cdfe4c

// -[SCImageFrameSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108cdfe60

@end
