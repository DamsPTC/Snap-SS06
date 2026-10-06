// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapDropsWorkflow
// Superclass: NSObject
// Address: 0x112aa8ee8

@interface SCMapDropsWorkflow

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapDropsWorkflow initWithDropsScope:trayRouter:annotationController:persistenceProvider:logger:locationProvider:circumstanceEngine:trayDataProvider:emojiPickerFactoryServices:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x105ed3cb4

// -[SCMapDropsWorkflow startWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x105ed3fcc

// -[SCMapDropsWorkflow endWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x105ed4124

// -[SCMapDropsWorkflow _handleLocationUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ed414c

// -[SCMapDropsWorkflow _getCurrentLocation]
// Type encoding: {CLLocationCoordinate2D=dd}16@0:8
// Implementation: 0x105ed41d8

// -[SCMapDropsWorkflow _fetchNearbyPlacesFromDropCoordinate:]
// Type encoding: v32@0:8{CLLocationCoordinate2D=dd}16
// Implementation: 0x105ed4268

// -[SCMapDropsWorkflow _updateFocusedDropWithTitle:icon:sendToChat:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x105ed4274

// -[SCMapDropsWorkflow _updateFocusedDropWithResultType:]
// Type encoding: v24@0:8q16
// Implementation: 0x105ed43f0

// -[SCMapDropsWorkflow _notifyPinTitleNotPermissible]
// Type encoding: v16@0:8
// Implementation: 0x105ed44bc

// -[SCMapDropsWorkflow getDirectionsWithLat:lng:travelMode:openSource:pinId:address:]
// Type encoding: v60@0:8d16d24i32@36@44@52
// Implementation: 0x105ed44cc

// -[SCMapDropsWorkflow onClose]
// Type encoding: v16@0:8
// Implementation: 0x105ed4568

// -[SCMapDropsWorkflow sendPinToChatWithInitialTitle:lat:lng:editedTitle:icon:]
// Type encoding: v56@0:8@16d24d32@40@48
// Implementation: 0x105ed4570

// -[SCMapDropsWorkflow launchEmojiPicker]
// Type encoding: v16@0:8
// Implementation: 0x105ed4604

// -[SCMapDropsWorkflow onTextFieldFocusChangeWithIsFocused:]
// Type encoding: v20@0:8B16
// Implementation: 0x105ed469c

// -[SCMapDropsWorkflow onMoreButtonTap]
// Type encoding: v16@0:8
// Implementation: 0x105ed46a4

// -[SCMapDropsWorkflow onSavePinTapWithTitle:icon:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ed49cc

// -[SCMapDropsWorkflow onDeletePinWithDeleteForEveryone:]
// Type encoding: v20@0:8B16
// Implementation: 0x105ed4a6c

// -[SCMapDropsWorkflow _hidePin]
// Type encoding: v16@0:8
// Implementation: 0x105ed4bd0

// -[SCMapDropsWorkflow _removeDropFromMap]
// Type encoding: v16@0:8
// Implementation: 0x105ed4d18

// -[SCMapDropsWorkflow _verifyEditedPinTitle:icon:sendToChat:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x105ed4dbc

// -[SCMapDropsWorkflow onNearbyPlaceTapWithPlaceData:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ed4f48

// -[SCMapDropsWorkflow onNearbyPlaceSendWithPlaceData:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ed5088

// -[SCMapDropsWorkflow onSuggestAPlaceTap]
// Type encoding: v16@0:8
// Implementation: 0x105ed5298

// -[SCMapDropsWorkflow getNearbyPlacePreviewThumbnailObservableWithPlaceId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105ed52fc

// -[SCMapDropsWorkflow onNearbyPlaceStoryTapWithPlaceId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ed5378

// -[SCMapDropsWorkflow getVenueStoryAnalytics]
// Type encoding: @16@0:8
// Implementation: 0x105ed5390

// -[SCMapDropsWorkflow onViewMoreOrLessTapWithIsViewMore:]
// Type encoding: v20@0:8B16
// Implementation: 0x105ed5404

// -[SCMapDropsWorkflow shouldRetainInstanceWhenMarshalling]
// Type encoding: B16@0:8
// Implementation: 0x105ed5424

// -[SCMapDropsWorkflow didCloseTray]
// Type encoding: v16@0:8
// Implementation: 0x105ed542c

// -[SCMapDropsWorkflow didSendDropSuccessfully]
// Type encoding: v16@0:8
// Implementation: 0x105ed5460

// -[SCMapDropsWorkflow emojiPickerScopeDidCompleteWith:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ed54d0

// -[SCMapDropsWorkflow emojiPickerScopeWillDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ed5514

// -[SCMapDropsWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105ed5524

@end
