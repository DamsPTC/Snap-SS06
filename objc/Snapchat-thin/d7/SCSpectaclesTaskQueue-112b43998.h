// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesTaskQueue
// Superclass: NSObject
// Address: 0x112b43998

@interface SCSpectaclesTaskQueue

// Property: highPriorityQueue; attributes: T@"NSMutableArray",&,N,V_highPriorityQueue
// Property: normalPriorityQueue; attributes: T@"NSMutableArray",&,N,V_normalPriorityQueue
// Property: lowPriorityQueue; attributes: T@"NSMutableArray",&,N,V_lowPriorityQueue
// Property: memoriesPrioritizedUUIDs; attributes: T@"NSArray",&,N,V_memoriesPrioritizedUUIDs
// Property: memoriesPriorityDescriptor; attributes: T@"NSSortDescriptor",&,N,V_memoriesPriorityDescriptor
// Property: thumbnailFirstDescriptor; attributes: T@"NSSortDescriptor",&,N,V_thumbnailFirstDescriptor
// Property: animatedThumbnailFirstDescriptor; attributes: T@"NSSortDescriptor",&,N,V_animatedThumbnailFirstDescriptor
// Property: imuDataFirstDescriptor; attributes: T@"NSSortDescriptor",&,N,V_imuDataFirstDescriptor
// Property: genericAssetsFirstDescriptor; attributes: T@"NSSortDescriptor",&,N,V_genericAssetsFirstDescriptor
// Property: dayDescriptor; attributes: T@"NSSortDescriptor",&,N,V_dayDescriptor
// Property: timeDescriptor; attributes: T@"NSSortDescriptor",&,N,V_timeDescriptor

// -[SCSpectaclesTaskQueue initWithSortingInDescendingOrder:]
// Type encoding: @20@0:8B16
// Implementation: 0x106ebb6cc

// -[SCSpectaclesTaskQueue nextTaskForTransferChannel:]
// Type encoding: @24@0:8q16
// Implementation: 0x106ebbe04

// -[SCSpectaclesTaskQueue allTasksForTransferChannel:]
// Type encoding: @24@0:8q16
// Implementation: 0x106ebc15c

// -[SCSpectaclesTaskQueue batchableTasksForTransferChannel:]
// Type encoding: @24@0:8q16
// Implementation: 0x106ebc4c4

// -[SCSpectaclesTaskQueue hasTaskForTransferChannel:]
// Type encoding: B24@0:8q16
// Implementation: 0x106ebc75c

// -[SCSpectaclesTaskQueue addTask:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ebc790

// -[SCSpectaclesTaskQueue addTaskIfNotFinished:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ebc834

// -[SCSpectaclesTaskQueue removeTask:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ebc88c

// -[SCSpectaclesTaskQueue removeAllTasks]
// Type encoding: v16@0:8
// Implementation: 0x106ebc9c0

// -[SCSpectaclesTaskQueue _allTasks]
// Type encoding: @16@0:8
// Implementation: 0x106ebcad0

// -[SCSpectaclesTaskQueue allContentForMediaTasks]
// Type encoding: @16@0:8
// Implementation: 0x106ebcc38

// -[SCSpectaclesTaskQueue allTasksOfType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106ebcdb0

// -[SCSpectaclesTaskQueue removeAllTasksOfType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106ebce60

// -[SCSpectaclesTaskQueue numberOfRemainingTaskType:]
// Type encoding: q24@0:8Q16
// Implementation: 0x106ebcf58

// -[SCSpectaclesTaskQueue numberOfRemainingTransferTasksForContentComponent:]
// Type encoding: q24@0:8Q16
// Implementation: 0x106ebcf94

// -[SCSpectaclesTaskQueue numberOfRemainingTransferTasks]
// Type encoding: q16@0:8
// Implementation: 0x106ebd0d0

// -[SCSpectaclesTaskQueue prioritize:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ebd168

// -[SCSpectaclesTaskQueue allTransferTasks]
// Type encoding: @16@0:8
// Implementation: 0x106ebd20c

// -[SCSpectaclesTaskQueue transferTaskForContent:component:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x106ebd2f0

// -[SCSpectaclesTaskQueue _descriptorForTaskType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106ebd528

// -[SCSpectaclesTaskQueue _resortNormalQueue]
// Type encoding: v16@0:8
// Implementation: 0x106ebd65c

// -[SCSpectaclesTaskQueue _queueHighPriorityTask:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ebd7f8

// -[SCSpectaclesTaskQueue _queueNormalTask:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ebd8d8

// -[SCSpectaclesTaskQueue _queueLowPriorityTask:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ebd9c0

// -[SCSpectaclesTaskQueue addListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ebdaa0

// -[SCSpectaclesTaskQueue removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ebdaa8

// -[SCSpectaclesTaskQueue highPriorityQueue]
// Type encoding: @16@0:8
// Implementation: 0x106ebdab0

// -[SCSpectaclesTaskQueue setHighPriorityQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ebdab8

// -[SCSpectaclesTaskQueue normalPriorityQueue]
// Type encoding: @16@0:8
// Implementation: 0x106ebdae8

// -[SCSpectaclesTaskQueue setNormalPriorityQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ebdaf0

// -[SCSpectaclesTaskQueue lowPriorityQueue]
// Type encoding: @16@0:8
// Implementation: 0x106ebdb20

// -[SCSpectaclesTaskQueue setLowPriorityQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ebdb28

// -[SCSpectaclesTaskQueue memoriesPrioritizedUUIDs]
// Type encoding: @16@0:8
// Implementation: 0x106ebdb58

// -[SCSpectaclesTaskQueue setMemoriesPrioritizedUUIDs:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ebdb60

// -[SCSpectaclesTaskQueue memoriesPriorityDescriptor]
// Type encoding: @16@0:8
// Implementation: 0x106ebdb90

// -[SCSpectaclesTaskQueue setMemoriesPriorityDescriptor:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ebdb98

// -[SCSpectaclesTaskQueue thumbnailFirstDescriptor]
// Type encoding: @16@0:8
// Implementation: 0x106ebdbc8

// -[SCSpectaclesTaskQueue setThumbnailFirstDescriptor:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ebdbd0

// -[SCSpectaclesTaskQueue animatedThumbnailFirstDescriptor]
// Type encoding: @16@0:8
// Implementation: 0x106ebdc00

// -[SCSpectaclesTaskQueue setAnimatedThumbnailFirstDescriptor:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ebdc08

// -[SCSpectaclesTaskQueue imuDataFirstDescriptor]
// Type encoding: @16@0:8
// Implementation: 0x106ebdc38

// -[SCSpectaclesTaskQueue setImuDataFirstDescriptor:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ebdc40

// -[SCSpectaclesTaskQueue genericAssetsFirstDescriptor]
// Type encoding: @16@0:8
// Implementation: 0x106ebdc70

// -[SCSpectaclesTaskQueue setGenericAssetsFirstDescriptor:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ebdc78

// -[SCSpectaclesTaskQueue dayDescriptor]
// Type encoding: @16@0:8
// Implementation: 0x106ebdca8

// -[SCSpectaclesTaskQueue setDayDescriptor:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ebdcb0

// -[SCSpectaclesTaskQueue timeDescriptor]
// Type encoding: @16@0:8
// Implementation: 0x106ebdce0

// -[SCSpectaclesTaskQueue setTimeDescriptor:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ebdce8

// -[SCSpectaclesTaskQueue .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ebdd18

@end
