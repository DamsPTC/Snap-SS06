// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensCarouselLoggingWorkflow
// Superclass: NSObject
// Address: 0x112ad3738

@interface SCLensCarouselLoggingWorkflow


// -[SCLensCarouselLoggingWorkflow initWithLensCarouselSnapshotBlizzardLogger:lensCarouselManager:lensCarouselSessionLogger:lensScheduleServiceProvider:placement:performer:]
// Type encoding: @64@0:8@16@24@32@40q48@56
// Implementation: 0x1061ff7bc

// -[SCLensCarouselLoggingWorkflow _startObserving]
// Type encoding: v16@0:8
// Implementation: 0x1061ff8f8

// -[SCLensCarouselLoggingWorkflow _observeCarouselLensOrder]
// Type encoding: v16@0:8
// Implementation: 0x1061ff944

// -[SCLensCarouselLoggingWorkflow _observeLensSessionId]
// Type encoding: v16@0:8
// Implementation: 0x1061ffb50

// -[SCLensCarouselLoggingWorkflow _observeLensScheduleNamespaceData]
// Type encoding: v16@0:8
// Implementation: 0x1061ffcc0

// -[SCLensCarouselLoggingWorkflow _onLensSessionChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061ffeb8

// -[SCLensCarouselLoggingWorkflow _onLensScheduleNamespaceDataChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061fff74

// -[SCLensCarouselLoggingWorkflow _currentCarouselNamespaces]
// Type encoding: @16@0:8
// Implementation: 0x1061ffffc

// -[SCLensCarouselLoggingWorkflow _isUpdateNeededForCarouselLenses:lastCarouselLenses:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1062000ec

// -[SCLensCarouselLoggingWorkflow _isUpdateNeededForNamespaceData:lastLensOrder:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10620045c

// -[SCLensCarouselLoggingWorkflow _fireLensCarouselSnapshotEventWithCarouselChanged:arBarTabSessionId:arBarTabCategoryId:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x106200788

// -[SCLensCarouselLoggingWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106200838

@end
