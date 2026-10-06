// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserPropertiesDefaultService
// Superclass: NSObject
// Address: 0x112a97dc8

@interface SCUserPropertiesDefaultService

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUserPropertiesDefaultService initWithRepository:uploadService:syncService:jobScheduler:performer:metricsReporter:userId:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x1003dbc88

// -[SCUserPropertiesDefaultService putItemWithKey:boolValue:isSpeculative:completionQueue:completionHandler:]
// Type encoding: v48@0:8@16B24B28@32@?40
// Implementation: 0x105c7bac4

// -[SCUserPropertiesDefaultService putItemWithKey:dataValue:isSpeculative:completionQueue:completionHandler:]
// Type encoding: v52@0:8@16@24B32@36@?44
// Implementation: 0x105c7bc0c

// -[SCUserPropertiesDefaultService putItemWithKey:doubleValue:isSpeculative:completionQueue:completionHandler:]
// Type encoding: v52@0:8@16d24B32@36@?44
// Implementation: 0x105c7bd88

// -[SCUserPropertiesDefaultService putItemWithKey:floatValue:isSpeculative:completionQueue:completionHandler:]
// Type encoding: v48@0:8@16f24B28@32@?40
// Implementation: 0x105c7bd90

// -[SCUserPropertiesDefaultService putItemWithKey:intValue:isSpeculative:completionQueue:completionHandler:]
// Type encoding: v52@0:8@16q24B32@36@?44
// Implementation: 0x105c7bd98

// -[SCUserPropertiesDefaultService putItemWithKey:longValue:isSpeculative:completionQueue:completionHandler:]
// Type encoding: v52@0:8@16q24B32@36@?44
// Implementation: 0x105c7bda0

// -[SCUserPropertiesDefaultService putItemWithKey:stringValue:isSpeculative:completionQueue:completionHandler:]
// Type encoding: v52@0:8@16@24B32@36@?44
// Implementation: 0x105c7bda8

// -[SCUserPropertiesDefaultService putItemWithKey:unsignedIntValue:isSpeculative:completionQueue:completionHandler:]
// Type encoding: v52@0:8@16Q24B32@36@?44
// Implementation: 0x105c7bf24

// -[SCUserPropertiesDefaultService putLargerValueItemWithKey:doubleValue:completionQueue:completionHandler:]
// Type encoding: v48@0:8@16d24@32@?40
// Implementation: 0x105c7bf2c

// -[SCUserPropertiesDefaultService putLargerValueItemWithKey:longValue:completionQueue:completionHandler:]
// Type encoding: v48@0:8@16q24@32@?40
// Implementation: 0x105c7bf3c

// -[SCUserPropertiesDefaultService putLargerValueItemWithKey:floatValue:completionQueue:completionHandler:]
// Type encoding: v44@0:8@16f24@28@?36
// Implementation: 0x105c7bf4c

// -[SCUserPropertiesDefaultService putLargerValueItemWithKey:intValue:completionQueue:completionHandler:]
// Type encoding: v48@0:8@16q24@32@?40
// Implementation: 0x105c7bf5c

// -[SCUserPropertiesDefaultService putLargerValueItemWithKey:unsignedIntValue:completionQueue:completionHandler:]
// Type encoding: v48@0:8@16Q24@32@?40
// Implementation: 0x105c7bf6c

// -[SCUserPropertiesDefaultService updateItemWithKey:addValue:completionQueue:completionHandler:]
// Type encoding: v48@0:8@16Q24@32@?40
// Implementation: 0x105c7bf7c

// -[SCUserPropertiesDefaultService boolForUserPropertyWithKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x105c7c354

// -[SCUserPropertiesDefaultService doubleForUserPropertyWithKey:]
// Type encoding: d24@0:8@16
// Implementation: 0x105c7c3d0

// -[SCUserPropertiesDefaultService floatForUserPropertyWithKey:]
// Type encoding: f24@0:8@16
// Implementation: 0x105c7c454

// -[SCUserPropertiesDefaultService integerForUserPropertyWithKey:]
// Type encoding: q24@0:8@16
// Implementation: 0x105c7c4d8

// -[SCUserPropertiesDefaultService longForUserPropertyWithKey:]
// Type encoding: q24@0:8@16
// Implementation: 0x105c7c554

// -[SCUserPropertiesDefaultService rawItemForUserPropertyWithKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x105c7c5d0

// -[SCUserPropertiesDefaultService stringForUserPropertyWithKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x105c7c654

// -[SCUserPropertiesDefaultService unsignedIntegerForUserPropertyWithKey:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105c7c6d8

// -[SCUserPropertiesDefaultService valueForItemWithKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x1004fc21c

// -[SCUserPropertiesDefaultService observeKeys:queue:changeHandler:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x100503cac

// -[SCUserPropertiesDefaultService hasSyncedLogInResponse]
// Type encoding: B16@0:8
// Implementation: 0x105c7c754

// -[SCUserPropertiesDefaultService observeLoginComplete]
// Type encoding: @16@0:8
// Implementation: 0x105c7c794

// -[SCUserPropertiesDefaultService _putItemWithKey:doubleValue:writeType:completionQueue:completionHandler:]
// Type encoding: v56@0:8@16d24Q32@40@?48
// Implementation: 0x105c7c7dc

// -[SCUserPropertiesDefaultService _putItemWithKey:floatValue:writeType:completionQueue:completionHandler:]
// Type encoding: v52@0:8@16f24Q28@36@?44
// Implementation: 0x105c7c92c

// -[SCUserPropertiesDefaultService _putItemWithKey:intValue:writeType:completionQueue:completionHandler:]
// Type encoding: v56@0:8@16q24Q32@40@?48
// Implementation: 0x105c7ca7c

// -[SCUserPropertiesDefaultService _putItemWithKey:longValue:writeType:completionQueue:completionHandler:]
// Type encoding: v56@0:8@16q24Q32@40@?48
// Implementation: 0x105c7cbc4

// -[SCUserPropertiesDefaultService _putItemWithKey:unsignedIntValue:writeType:completionQueue:completionHandler:]
// Type encoding: v56@0:8@16Q24Q32@40@?48
// Implementation: 0x105c7cd0c

// -[SCUserPropertiesDefaultService _confirmedWrite:completionQueue:key:value:useLargerValueWrite:]
// Type encoding: v52@0:8@?16@24@32@40B48
// Implementation: 0x105c7ce54

// -[SCUserPropertiesDefaultService _speculativeWrite:completionQueue:key:value:]
// Type encoding: v48@0:8@?16@24@32@40
// Implementation: 0x105c7d474

// -[SCUserPropertiesDefaultService _putAndUploadForItemKey:withValue:writeType:completionQueue:completionHandler:]
// Type encoding: v56@0:8@16@24Q32@40@?48
// Implementation: 0x105c7d6c4

// -[SCUserPropertiesDefaultService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105c7d7c8

@end
