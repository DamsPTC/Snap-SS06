// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSATrackingSerializationComponent
// Superclass: LSABaseComponent
// Address: 0x112bfa008

@interface LSATrackingSerializationComponent


// -[LSATrackingSerializationComponent setShouldSerializeTrackingData:]
// Type encoding: v20@0:8B16
// Implementation: 0x10adcc5fc

// -[LSATrackingSerializationComponent resetAndWriteTrackingData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10adcc6b4

// -[LSATrackingSerializationComponent setRecordedTrackingDataWithPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x10adcc808

// -[LSATrackingSerializationComponent clearRecordedTrackingData]
// Type encoding: v16@0:8
// Implementation: 0x10adcca40

// -[LSATrackingSerializationComponent setRecordedMarkerTrackingDataWithPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x10adccb34

// -[LSATrackingSerializationComponent clearRecordedMarkerTrackingData]
// Type encoding: v16@0:8
// Implementation: 0x10adccd90

// -[LSATrackingSerializationComponent _addTrackingDataProvider:]
// Type encoding: v32@0:8{weak_ptr<LS::Tracking::DataProvider>=^{DataProvider}^{__shared_weak_count}}16
// Implementation: 0x10adcce84

// -[LSATrackingSerializationComponent initWithPerformer:announcerQueuePerformer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10adccfd8

// -[LSATrackingSerializationComponent setCoreManager:announcer:configuration:]
// Type encoding: v48@0:8{shared_ptr<LS::CoreManager>=^{CoreManager}^{__shared_weak_count}}16@32@40
// Implementation: 0x10adcd0b8

// -[LSATrackingSerializationComponent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10adcd220

// -[LSATrackingSerializationComponent .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10adcd310

@end
