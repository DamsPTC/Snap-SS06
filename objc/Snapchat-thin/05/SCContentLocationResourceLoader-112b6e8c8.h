// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContentLocationResourceLoader
// Superclass: NSObject
// Address: 0x112b6e8c8

@interface SCContentLocationResourceLoader

// Property: player; attributes: T@"AVPlayer",W,N,V_player
// Property: viewLocation; attributes: Tq,N,V_viewLocation
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCContentLocationResourceLoader initWithContentStreamer:queuePerformer:configProvider:estimatedBitrate:]
// Type encoding: @44@0:8@16@24@32f40
// Implementation: 0x107aa8c50

// -[SCContentLocationResourceLoader resourceLoader:didCancelLoadingRequest:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107aa8d54

// -[SCContentLocationResourceLoader resourceLoader:shouldWaitForLoadingOfRequestedResource:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107aa8e4c

// -[SCContentLocationResourceLoader cancel]
// Type encoding: v16@0:8
// Implementation: 0x107aa916c

// -[SCContentLocationResourceLoader onMetadataAvailable:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aa9240

// -[SCContentLocationResourceLoader onDataReceived:dataSlice:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107aa934c

// -[SCContentLocationResourceLoader onFailure:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107aa956c

// -[SCContentLocationResourceLoader onComplete]
// Type encoding: v16@0:8
// Implementation: 0x107aa96fc

// -[SCContentLocationResourceLoader setViewLocation:]
// Type encoding: v24@0:8q16
// Implementation: 0x107aa9700

// -[SCContentLocationResourceLoader _cancel]
// Type encoding: v16@0:8
// Implementation: 0x107aa9780

// -[SCContentLocationResourceLoader _setMetadata:forLoadingRequest:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107aa98b8

// -[SCContentLocationResourceLoader _onMetadataAvailable:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aa9984

// -[SCContentLocationResourceLoader _onDataReceived:data:]
// Type encoding: v40@0:8{_NSRange=QQ}16@32
// Implementation: 0x107aa9be0

// -[SCContentLocationResourceLoader _onFailure:error:]
// Type encoding: v40@0:8{_NSRange=QQ}16@32
// Implementation: 0x107aa9f4c

// -[SCContentLocationResourceLoader _shimsErrorToNSError:]
// Type encoding: @24@0:8@16
// Implementation: 0x107aaa1c0

// -[SCContentLocationResourceLoader _regenerateConfigsWithFeatureProvidedSignals:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aaa2c0

// -[SCContentLocationResourceLoader player]
// Type encoding: @16@0:8
// Implementation: 0x107aaa35c

// -[SCContentLocationResourceLoader setPlayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aaa374

// -[SCContentLocationResourceLoader viewLocation]
// Type encoding: q16@0:8
// Implementation: 0x107aaa380

// -[SCContentLocationResourceLoader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107aaa388

@end
