// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserPropertiesSpeculativeWritesJobProcessor
// Superclass: NSObject
// Address: 0x112a97f58

@interface SCUserPropertiesSpeculativeWritesJobProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUserPropertiesSpeculativeWritesJobProcessor initWithUploadService:repository:syncService:performer:metricsReporter:userId:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x105c7ebe8

// -[SCUserPropertiesSpeculativeWritesJobProcessor deleteJobWithJobConfig:jobData:jobDeletionReason:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x105c7ed40

// -[SCUserPropertiesSpeculativeWritesJobProcessor processJobWithJobConfig:input:context:onComplete:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x105c7ed6c

// -[SCUserPropertiesSpeculativeWritesJobProcessor _uploadPendingUserProperties:jobCompletionCallback:]
// Type encoding: v28@0:8i16@?20
// Implementation: 0x105c7ed8c

// -[SCUserPropertiesSpeculativeWritesJobProcessor _handleVersionMismatchFailure:jobCompletionCallback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105c7f41c

// -[SCUserPropertiesSpeculativeWritesJobProcessor _uploadPropertyAtIndex:properties:failedItems:putCompletionHandler:]
// Type encoding: v48@0:8Q16@24@32@?40
// Implementation: 0x105c7f570

// -[SCUserPropertiesSpeculativeWritesJobProcessor _handleFailure:jobCompletionCallback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105c7fb74

// -[SCUserPropertiesSpeculativeWritesJobProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105c7feac

@end
