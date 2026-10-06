// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapViewportMetadataProviderUpdate
// Superclass: NSObject
// Address: 0x112aadda8

@interface SCMapViewportMetadataProviderUpdate

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapViewportMetadataProviderUpdate initWithAsyncQueueServices:grpcService:mapUserPreferences:footstepsMemoryStreamServices:featureSettingsService:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105f4aecc

// -[SCMapViewportMetadataProviderUpdate _updateViewportMetadataOnMainThreadWithViewportInfo:footstepsActivityDictionary:isSyncingMemories:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x105f4b1f8

// -[SCMapViewportMetadataProviderUpdate _updateViewportMetadataWithViewportInfo:footstepsActivityDictionary:isSyncingMemories:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x105f4b35c

// -[SCMapViewportMetadataProviderUpdate _fetchCurrentUserFootstepsSummary]
// Type encoding: v16@0:8
// Implementation: 0x105f4b420

// -[SCMapViewportMetadataProviderUpdate _handleFootstepsRequestCompletionWithResponse:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105f4b588

// -[SCMapViewportMetadataProviderUpdate _handleFootstepsMemorySyncStatusUpdate:]
// Type encoding: v24@0:8q16
// Implementation: 0x105f4b5e4

// -[SCMapViewportMetadataProviderUpdate _logSyncStatus:]
// Type encoding: v24@0:8q16
// Implementation: 0x105f4b660

// -[SCMapViewportMetadataProviderUpdate _startMonitoringForFootstepsDataRemoval]
// Type encoding: v16@0:8
// Implementation: 0x105f4b664

// -[SCMapViewportMetadataProviderUpdate onNewViewportInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f4b7d4

// -[SCMapViewportMetadataProviderUpdate viewportMetadataObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f4b7e0

// -[SCMapViewportMetadataProviderUpdate .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f4b808

@end
