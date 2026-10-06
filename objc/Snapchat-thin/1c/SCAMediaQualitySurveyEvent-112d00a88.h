// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAMediaQualitySurveyEvent
// Superclass: SCAUserTrackedEvent
// Address: 0x112d00a88

@interface SCAMediaQualitySurveyEvent


// -[SCAMediaQualitySurveyEvent getEventName]
// Type encoding: @16@0:8
// Implementation: 0x10ba078e4

// -[SCAMediaQualitySurveyEvent getEventQoS]
// Type encoding: q16@0:8
// Implementation: 0x10ba078f0

// -[SCAMediaQualitySurveyEvent getPerUserSamplingRate]
// Type encoding: d16@0:8
// Implementation: 0x10ba078f8

// -[SCAMediaQualitySurveyEvent getPerUserSamplingRateV2]
// Type encoding: d16@0:8
// Implementation: 0x10ba07904

// -[SCAMediaQualitySurveyEvent setIso:]
// Type encoding: v24@0:8q16
// Implementation: 0x10ba07910

// -[SCAMediaQualitySurveyEvent setNumDiscards:]
// Type encoding: v24@0:8q16
// Implementation: 0x10ba07964

// -[SCAMediaQualitySurveyEvent setQuestionResponseMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ba079b8

// -[SCAMediaQualitySurveyEvent setSharedCameraMetricParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ba079d0

// -[SCAMediaQualitySurveyEvent setSurveyId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ba07a18

// -[SCAMediaQualitySurveyEvent setSurveyState:]
// Type encoding: v24@0:8q16
// Implementation: 0x10ba07a30

// -[SCAMediaQualitySurveyEvent prepareDictionary:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ba07ab0

// -[SCAMediaQualitySurveyEvent getFieldNumberToFieldDict]
// Type encoding: @16@0:8
// Implementation: 0x10ba07b70

// -[SCAMediaQualitySurveyEvent toProtoWithAllowedFields:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ba07b74

// -[SCAMediaQualitySurveyEvent getPayloadIdentifier]
// Type encoding: q16@0:8
// Implementation: 0x10ba07b80

@end
