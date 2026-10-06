// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapPlaceShareWorkflow
// Superclass: NSObject
// Address: 0x112a070e8

@interface SCMapPlaceShareWorkflow

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapPlaceShareWorkflow initWithPlaceSharingScope:uiContainer:messageSender:destinationParser:sendToScopeExposer:sendToScopeServices:valdiRuntimeProvider:userLocationHelpers:placeProfileDataFetcher:placeDiscoveryDataFetcher:mapStoryPreviewFetcher:offPlatformLinkGenerationService:blizzardLogger:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x104ef1698

// -[SCMapPlaceShareWorkflow sendPlaceShareToChat]
// Type encoding: v16@0:8
// Implementation: 0x104ef1978

// -[SCMapPlaceShareWorkflow didDismissWithSelectedItems:sendToDismissSource:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x104ef1ad8

// -[SCMapPlaceShareWorkflow didSendWithSelectionState:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ef1adc

// -[SCMapPlaceShareWorkflow _sendPlaceMessageToConversations:additionalText:analyticsDestinationInfo:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104ef1f7c

// -[SCMapPlaceShareWorkflow _platformAnalyticsWithDestinationInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x104ef2084

// -[SCMapPlaceShareWorkflow _sendToScopeDidFinish]
// Type encoding: v16@0:8
// Implementation: 0x104ef21e8

// -[SCMapPlaceShareWorkflow _createSendToPreviewConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x104ef226c

// -[SCMapPlaceShareWorkflow _createPlaceShareSendToViewForPlaceID:]
// Type encoding: @24@0:8@16
// Implementation: 0x104ef2434

// -[SCMapPlaceShareWorkflow _createSendToShareSheetConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x104ef2528

// -[SCMapPlaceShareWorkflow _createTextConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x104ef2660

// -[SCMapPlaceShareWorkflow _placeCardContextForPlaceID:]
// Type encoding: @24@0:8@16
// Implementation: 0x104ef2794

// -[SCMapPlaceShareWorkflow _getFormattedDistanceToLocationWithLat:lng:]
// Type encoding: @32@0:8d16d24
// Implementation: 0x104ef2940

// -[SCMapPlaceShareWorkflow _fetchPlaceProfileDataForPlaceID:placeCardDataSubject:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104ef29a0

// -[SCMapPlaceShareWorkflow _placeAnnotationObservableForPlaceID:]
// Type encoding: @24@0:8@16
// Implementation: 0x104ef2be8

// -[SCMapPlaceShareWorkflow _fetchPlaceStoryPreviewForPlaceID:placeCardData:placeCardDataSubject:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104ef2e7c

// -[SCMapPlaceShareWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104ef3004

@end
