// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraInclusionPanelSurveySettingsViewModel
// Superclass: NSObject
// Address: 0x112b0e478

@interface SCCameraInclusionPanelSurveySettingsViewModel

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCameraInclusionPanelSurveySettingsViewModel initWithSurveyNetworkManager:contentDeliveryServices:jobSchedulerServices:grapheneServices:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106a565d8

// -[SCCameraInclusionPanelSurveySettingsViewModel didFinishSurvey]
// Type encoding: v16@0:8
// Implementation: 0x106a56718

// -[SCCameraInclusionPanelSurveySettingsViewModel loadSurveyDataWithCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106a5680c

// -[SCCameraInclusionPanelSurveySettingsViewModel setLatestSurveyDataWithSurveyData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a56b30

// -[SCCameraInclusionPanelSurveySettingsViewModel pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x106a56c74

// -[SCCameraInclusionPanelSurveySettingsViewModel _readSurveyDataFromCacheWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106a56c80

// -[SCCameraInclusionPanelSurveySettingsViewModel _writeSurveyData:toCacheWithCompletion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106a56ef4

// -[SCCameraInclusionPanelSurveySettingsViewModel _fetchSurveyDataWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106a572b4

// -[SCCameraInclusionPanelSurveySettingsViewModel _updateSurveyData:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a57314

// -[SCCameraInclusionPanelSurveySettingsViewModel _createRequestFromSurveyData:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a57410

// -[SCCameraInclusionPanelSurveySettingsViewModel _adaptDataFromGetSurveyDataResponse:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a57680

// -[SCCameraInclusionPanelSurveySettingsViewModel _numberArrayFromProtoIntArray:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a578c8

// -[SCCameraInclusionPanelSurveySettingsViewModel _protoIntArrayFromNumberArray:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a579c4

// -[SCCameraInclusionPanelSurveySettingsViewModel _expirationDateFromDate:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a57a98

// -[SCCameraInclusionPanelSurveySettingsViewModel _onReadCache:error:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x106a57b58

// -[SCCameraInclusionPanelSurveySettingsViewModel _onWriteCache:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a57c64

// -[SCCameraInclusionPanelSurveySettingsViewModel _onDataInit:source:error:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x106a57d24

// -[SCCameraInclusionPanelSurveySettingsViewModel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106a57e78

@end
