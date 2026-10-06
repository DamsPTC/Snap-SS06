// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatPageLoadMetricsTracker
// Superclass: NSObject
// Address: 0x112b5e568

@interface SCChatPageLoadMetricsTracker

// Property: trackingId; attributes: T@"NSString",R,C,V_trackingId

// -[SCChatPageLoadMetricsTracker initWithTimeProvider:performer:type:source:conversationSource:pluginIdentifier:]
// Type encoding: @64@0:8@16@24Q32Q40q48@56
// Implementation: 0x1070b9148

// -[SCChatPageLoadMetricsTracker initWithType:source:conversationSource:pluginIdentifier:]
// Type encoding: @48@0:8Q16Q24q32@40
// Implementation: 0x1070b936c

// -[SCChatPageLoadMetricsTracker copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x1070b9460

// -[SCChatPageLoadMetricsTracker type]
// Type encoding: Q16@0:8
// Implementation: 0x1070b9484

// -[SCChatPageLoadMetricsTracker source]
// Type encoding: Q16@0:8
// Implementation: 0x1070b948c

// -[SCChatPageLoadMetricsTracker hasCompletedRenderRequest]
// Type encoding: B16@0:8
// Implementation: 0x1070b9494

// -[SCChatPageLoadMetricsTracker setIsGroup:]
// Type encoding: v20@0:8B16
// Implementation: 0x1070b94b0

// -[SCChatPageLoadMetricsTracker setParticipantCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1070b94c4

// -[SCChatPageLoadMetricsTracker trackStep:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1070b94cc

// -[SCChatPageLoadMetricsTracker completeAtStep:withResult:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x1070b959c

// -[SCChatPageLoadMetricsTracker metricsResult]
// Type encoding: @16@0:8
// Implementation: 0x1070b96c8

// -[SCChatPageLoadMetricsTracker _resultForResult:finalTimestamp:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x1070b96d0

// -[SCChatPageLoadMetricsTracker _timestampForStep:currentTime:]
// Type encoding: @32@0:8Q16d24
// Implementation: 0x1070b97a8

// -[SCChatPageLoadMetricsTracker _endTimestampOfMostRecentSerialStep]
// Type encoding: d16@0:8
// Implementation: 0x1070b9814

// -[SCChatPageLoadMetricsTracker trackingId]
// Type encoding: @16@0:8
// Implementation: 0x1070b9944

// -[SCChatPageLoadMetricsTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1070b9950

// +[SCChatPageLoadMetricsTracker chatReloadMetricsTrackerWithPluginIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x1070b929c

// +[SCChatPageLoadMetricsTracker chatReloadMetricsTrackerWithSource:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1070b92f4

// +[SCChatPageLoadMetricsTracker chatLoadMetricsTrackerWithConversationSource:]
// Type encoding: @24@0:8q16
// Implementation: 0x1070b9330

@end
