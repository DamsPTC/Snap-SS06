// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapHomeLocationEditorController
// Superclass: NSObject
// Address: 0x112a06648

@interface SCMapHomeLocationEditorController

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapHomeLocationEditorController initWithValdiRuntime:nativeMapSDK:configProvider:uiContainer:currentUserID:delegate:blizzardLogger:plusServices:basemapPersonalization:locationSearchTrayFactoryServices:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x104ec95f0

// -[SCMapHomeLocationEditorController presentHomeLocationEditorWithHomeModel:shouldHideHome:metrics:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x104ec9810

// -[SCMapHomeLocationEditorController onHomeFeatureUpdatedWithHomeModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ec9838

// -[SCMapHomeLocationEditorController _createHomeLocationEditorWithHomeModel:shouldHideHome:metrics:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x104ec98e0

// -[SCMapHomeLocationEditorController _createHomeLocationEditorContextWithMetrics:initialHomeModel:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104ec9a3c

// -[SCMapHomeLocationEditorController _handleDismissHomeLocationEditor]
// Type encoding: v16@0:8
// Implementation: 0x104eca04c

// -[SCMapHomeLocationEditorController _handleSaveHomeModelWithLocation:initialHomeModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104eca138

// -[SCMapHomeLocationEditorController _handleDisplaySearchTray]
// Type encoding: v16@0:8
// Implementation: 0x104eca1b4

// -[SCMapHomeLocationEditorController mapLocationSearchTrayDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x104eca2ec

// -[SCMapHomeLocationEditorController mapLocationSearchTrayDidSelectLocationWithCoordinates:placeSelectionUpdate:]
// Type encoding: v40@0:8{CLLocationCoordinate2D=dd}16@32
// Implementation: 0x104eca2fc

// -[SCMapHomeLocationEditorController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104eca3f0

@end
