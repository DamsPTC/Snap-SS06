// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUcoLoggerImpl
// Superclass: NSObject
// Address: 0x112be1cd8

@interface SCUcoLoggerImpl

// Property: swipeFunnel; attributes: T@"NSDictionary",&,V_swipeFunnel
// Property: swipeFunnelId; attributes: T@"NSString",&,V_swipeFunnelId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: lensReadyTracker; attributes: T@"<SCLensProcessingReadyTracking>",&,V_lensReadyTracker
// Property: fpsTracker; attributes: T@"<SCLensProcessingFPSTracking>",&,V_fpsTracker

// -[SCUcoLoggerImpl initWithBlizzardLogger:performanceAutomationLogger:lensMetadataRepository:ucoStudySettingsProvider:lensPlusTierService:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10902c87c

// -[SCUcoLoggerImpl logSwipeOrSpinForFilterId:swipeId:range:viewTime:commonLoggingParameters:]
// Type encoding: v64@0:8@16@24{_NSRange=QQ}32d48@56
// Implementation: 0x10902c9a0

// -[SCUcoLoggerImpl updateSwipeFunnel:forFunnelId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10902d23c

// -[SCUcoLoggerImpl hasSwipeFunnelForFunnelId:]
// Type encoding: B24@0:8@16
// Implementation: 0x10902d2d0

// -[SCUcoLoggerImpl _setSwipeFunnelForEvent:forLensId:shouldCleanupData:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10902d360

// -[SCUcoLoggerImpl updateLensConfigBuilder:forLensId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10902d530

// -[SCUcoLoggerImpl _updateLensPlusParameters:lens:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10902d900

// -[SCUcoLoggerImpl _postCaptureLensTypeFromCarouselGroup:]
// Type encoding: q24@0:8@16
// Implementation: 0x10902d9b4

// -[SCUcoLoggerImpl _cameraSourceFromUcoLoggingParameters:]
// Type encoding: q24@0:8@16
// Implementation: 0x10902da1c

// -[SCUcoLoggerImpl lensReadyTracker]
// Type encoding: @16@0:8
// Implementation: 0x10902da80

// -[SCUcoLoggerImpl setLensReadyTracker:]
// Type encoding: v24@0:8@16
// Implementation: 0x10902da8c

// -[SCUcoLoggerImpl fpsTracker]
// Type encoding: @16@0:8
// Implementation: 0x10902da94

// -[SCUcoLoggerImpl setFpsTracker:]
// Type encoding: v24@0:8@16
// Implementation: 0x10902daa0

// -[SCUcoLoggerImpl swipeFunnel]
// Type encoding: @16@0:8
// Implementation: 0x10902daa8

// -[SCUcoLoggerImpl setSwipeFunnel:]
// Type encoding: v24@0:8@16
// Implementation: 0x10902dab4

// -[SCUcoLoggerImpl swipeFunnelId]
// Type encoding: @16@0:8
// Implementation: 0x10902dabc

// -[SCUcoLoggerImpl setSwipeFunnelId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10902dac8

// -[SCUcoLoggerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10902dad0

@end
