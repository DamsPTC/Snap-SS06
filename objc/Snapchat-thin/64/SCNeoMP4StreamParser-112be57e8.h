// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoMP4StreamParser
// Superclass: NSObject
// Address: 0x112be57e8

@interface SCNeoMP4StreamParser

// Property: delegate; attributes: T@"<SCNeoMediaStreamParserDelegate>",W,N,Vdelegate
// Property: shouldParseSPSReorderDepth; attributes: TB,N,V_shouldParseSPSReorderDepth
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNeoMP4StreamParser init]
// Type encoding: @16@0:8
// Implementation: 0x109098060

// -[SCNeoMP4StreamParser dealloc]
// Type encoding: v16@0:8
// Implementation: 0x109098144

// -[SCNeoMP4StreamParser mutableCopy]
// Type encoding: @16@0:8
// Implementation: 0x109098194

// -[SCNeoMP4StreamParser _parseSamplesOfStream:movieInfo:streamInfoType:trackInfo:overallBufferOffset:singleSegmentInfo:buffer:error:]
// Type encoding: Q76@0:8^{mp4d_stream_info_t_=IIIQS[4C][4C]IIIIIIIIIIIII}16^{mp4d_movie_info_t_=IIQ}24Q32i40Q44^@52@60^@68
// Implementation: 0x109098324

// -[SCNeoMP4StreamParser _processBoxMovieWithBoxSize:overallBufferOffset:buffer:error:instruments:]
// Type encoding: Q56@0:8Q16Q24@32^@40@48
// Implementation: 0x109098a1c

// -[SCNeoMP4StreamParser _processBoxMovieFragmentWithOverallBufferOffset:buffer:error:]
// Type encoding: Q40@0:8Q16@24^@32
// Implementation: 0x109099014

// -[SCNeoMP4StreamParser _processSegmentIndexWithOverallBufferOffset:error:]
// Type encoding: Q32@0:8Q16^@24
// Implementation: 0x10909917c

// -[SCNeoMP4StreamParser _processBoxWithSize:overallBufferOffset:buffer:instruments:error:]
// Type encoding: Q56@0:8Q16Q24@32@40^@48
// Implementation: 0x1090992a4

// -[SCNeoMP4StreamParser _handleNeedMoreDataWithEOF:boxRange:buffer:error:]
// Type encoding: Q52@0:8B16{_NSRange=QQ}20@36^@44
// Implementation: 0x10909943c

// -[SCNeoMP4StreamParser parseBuffer:bufferOffset:outParsedLength:instruments:error:]
// Type encoding: Q56@0:8@16Q24^Q32@40^@48
// Implementation: 0x1090994ec

// -[SCNeoMP4StreamParser parseEntireBuffer:error:instruments:]
// Type encoding: Q40@0:8@16^@24@32
// Implementation: 0x1090998f8

// -[SCNeoMP4StreamParser _debugDataDictWithBuffer:]
// Type encoding: @24@0:8@16
// Implementation: 0x109099970

// -[SCNeoMP4StreamParser delegate]
// Type encoding: @16@0:8
// Implementation: 0x109099b78

// -[SCNeoMP4StreamParser setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x109099b90

// -[SCNeoMP4StreamParser shouldParseSPSReorderDepth]
// Type encoding: B16@0:8
// Implementation: 0x109099b9c

// -[SCNeoMP4StreamParser setShouldParseSPSReorderDepth:]
// Type encoding: v20@0:8B16
// Implementation: 0x109099ba4

// -[SCNeoMP4StreamParser .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109099bac

// +[SCNeoMP4StreamParser canParseBuffer:]
// Type encoding: B24@0:8@16
// Implementation: 0x109098224

@end
