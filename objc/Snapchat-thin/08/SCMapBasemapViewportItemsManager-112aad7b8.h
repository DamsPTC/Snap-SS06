// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapBasemapViewportItemsManager
// Superclass: NSObject
// Address: 0x112aad7b8

@interface SCMapBasemapViewportItemsManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapBasemapViewportItemsManager initWithViewport:basemapViewportLogger:mapLoggerSession:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105f40b84

// -[SCMapBasemapViewportItemsManager mapViewportItemsManagerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105f40c54

// -[SCMapBasemapViewportItemsManager getCurrentVisibleMapViewportItemsWithCreationBlock:queue:completionHandler:]
// Type encoding: v40@0:8@?16@24@?32
// Implementation: 0x105f40c68

// -[SCMapBasemapViewportItemsManager onBasemapFeaturesCaptured:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f40e64

// -[SCMapBasemapViewportItemsManager _getScreenLocationDecimalForViewportItems:]
// Type encoding: @24@0:8@16
// Implementation: 0x105f41000

// -[SCMapBasemapViewportItemsManager _handleBasemapFeatures:viewportItemsToScreenLocations:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105f411d4

// -[SCMapBasemapViewportItemsManager _emitBasemapViewportItems:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105f414c4

// -[SCMapBasemapViewportItemsManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f414e0

@end
