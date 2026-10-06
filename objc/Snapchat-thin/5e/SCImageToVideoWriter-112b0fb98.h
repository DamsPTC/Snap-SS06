// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageToVideoWriter
// Superclass: NSObject
// Address: 0x112b0fb98

@interface SCImageToVideoWriter


// -[SCImageToVideoWriter initWithImageArray:temporaryFileWriter:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106a99360

// -[SCImageToVideoWriter dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106a9943c

// -[SCImageToVideoWriter _generateOutputMovieURL]
// Type encoding: @16@0:8
// Implementation: 0x106a99480

// -[SCImageToVideoWriter writeToVideoURLWithSize:duration:maximumEdgeResolution:progress:completion:]
// Type encoding: v64@0:8{CGSize=dd}16d32@40@?48@?56
// Implementation: 0x106a99550

// -[SCImageToVideoWriter writeFrames]
// Type encoding: v16@0:8
// Implementation: 0x106a99a7c

// -[SCImageToVideoWriter writeImage:at:]
// Type encoding: B48@0:8@16{?=qiIq}24
// Implementation: 0x106a99e90

// -[SCImageToVideoWriter didFinish]
// Type encoding: v16@0:8
// Implementation: 0x106a9a130

// -[SCImageToVideoWriter didFailWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a9a1f4

// -[SCImageToVideoWriter completeWithURL:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a9a238

// -[SCImageToVideoWriter cleanup]
// Type encoding: v16@0:8
// Implementation: 0x106a9a270

// -[SCImageToVideoWriter createCVPixelBufferFromCGImage:orientation:andSize:]
// Type encoding: ^{__CVBuffer=}48@0:8^{CGImage=}16q24{CGSize=dd}32
// Implementation: 0x106a9a2bc

// -[SCImageToVideoWriter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106a9a594

@end
