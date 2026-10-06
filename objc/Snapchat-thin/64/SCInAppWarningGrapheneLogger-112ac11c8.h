// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCInAppWarningGrapheneLogger
// Superclass: NSObject
// Address: 0x112ac11c8

@interface SCInAppWarningGrapheneLogger


// -[SCInAppWarningGrapheneLogger initWithGrapheneRegistry:]
// Type encoding: @24@0:8@16
// Implementation: 0x106055a0c

// -[SCInAppWarningGrapheneLogger incrementMetric:]
// Type encoding: v24@0:8@16
// Implementation: 0x106055aac

// -[SCInAppWarningGrapheneLogger logTakeoverFgCheck:]
// Type encoding: v20@0:8B16
// Implementation: 0x106055ab4

// -[SCInAppWarningGrapheneLogger logLaunchTriggered]
// Type encoding: v16@0:8
// Implementation: 0x106055b58

// -[SCInAppWarningGrapheneLogger logLaunchWarningCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x106055b9c

// -[SCInAppWarningGrapheneLogger logLaunchMultiWarnings]
// Type encoding: v16@0:8
// Implementation: 0x106055bfc

// -[SCInAppWarningGrapheneLogger logWarningPresentedMetric:]
// Type encoding: v20@0:8i16
// Implementation: 0x106055c40

// -[SCInAppWarningGrapheneLogger logWarningAcknowledgedMetric:]
// Type encoding: v20@0:8i16
// Implementation: 0x106055ce4

// -[SCInAppWarningGrapheneLogger logWarningToAckElapseMs:]
// Type encoding: v24@0:8d16
// Implementation: 0x106055d88

// -[SCInAppWarningGrapheneLogger logWarningNotDismissed:]
// Type encoding: v20@0:8i16
// Implementation: 0x106055ddc

// -[SCInAppWarningGrapheneLogger logWarningNoInternet:]
// Type encoding: v20@0:8i16
// Implementation: 0x106055e80

// -[SCInAppWarningGrapheneLogger logWarningGuidelinesToDismissElapseMs:warningType:]
// Type encoding: v28@0:8d16i24
// Implementation: 0x106055f24

// -[SCInAppWarningGrapheneLogger logWarningDefaultFallback:]
// Type encoding: v20@0:8i16
// Implementation: 0x106055fd8

// -[SCInAppWarningGrapheneLogger logDbUpsertWarningMetric]
// Type encoding: v16@0:8
// Implementation: 0x10605607c

// -[SCInAppWarningGrapheneLogger logDbAcknowledgeWarningMetric]
// Type encoding: v16@0:8
// Implementation: 0x1060560c0

// -[SCInAppWarningGrapheneLogger logDbDeleteWarningMetric]
// Type encoding: v16@0:8
// Implementation: 0x106056104

// -[SCInAppWarningGrapheneLogger logDbClearWarningsMetric]
// Type encoding: v16@0:8
// Implementation: 0x106056148

// -[SCInAppWarningGrapheneLogger logDfSyncCompletedMetric]
// Type encoding: v16@0:8
// Implementation: 0x10605618c

// -[SCInAppWarningGrapheneLogger logDfSyncFailedMetric]
// Type encoding: v16@0:8
// Implementation: 0x1060561d0

// -[SCInAppWarningGrapheneLogger logDfWriteMissingUserIdMetric]
// Type encoding: v16@0:8
// Implementation: 0x106056214

// -[SCInAppWarningGrapheneLogger logDfPendingWriteCompletedMetric]
// Type encoding: v16@0:8
// Implementation: 0x106056258

// -[SCInAppWarningGrapheneLogger logDfHandleUpdatesMetric:]
// Type encoding: v24@0:8q16
// Implementation: 0x10605629c

// -[SCInAppWarningGrapheneLogger logDfCondWriteCompletedMetric]
// Type encoding: v16@0:8
// Implementation: 0x1060562f0

// -[SCInAppWarningGrapheneLogger logDfHandleDeletesMetric:]
// Type encoding: v24@0:8q16
// Implementation: 0x106056334

// -[SCInAppWarningGrapheneLogger logDfSyncUploadServiceFail]
// Type encoding: v16@0:8
// Implementation: 0x106056388

// -[SCInAppWarningGrapheneLogger logSyncAckMissingUserIdMetric]
// Type encoding: v16@0:8
// Implementation: 0x1060563cc

// -[SCInAppWarningGrapheneLogger logSyncAckInvalidTimestampMetric]
// Type encoding: v16@0:8
// Implementation: 0x106056410

// -[SCInAppWarningGrapheneLogger logItemInvalidAcknowledgeAtMetric]
// Type encoding: v16@0:8
// Implementation: 0x106056454

// -[SCInAppWarningGrapheneLogger logItemKeyMissingWarningIdMetric]
// Type encoding: v16@0:8
// Implementation: 0x106056498

// -[SCInAppWarningGrapheneLogger logItemInvalidWarningTypeMetric]
// Type encoding: v16@0:8
// Implementation: 0x1060564dc

// -[SCInAppWarningGrapheneLogger logItemInvalidCreatedAtMetric]
// Type encoding: v16@0:8
// Implementation: 0x106056520

// -[SCInAppWarningGrapheneLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106056564

@end
