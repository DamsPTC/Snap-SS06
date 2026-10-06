// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesMediaListReconciler
// Superclass: NSObject
// Address: 0x112b438a8

@interface SCSpectaclesMediaListReconciler

// Property: mediaList; attributes: T@"NSArray",&,N,V_mediaList
// Property: contentList; attributes: T@"NSArray",&,N,V_contentList
// Property: contentForName; attributes: T@"NSDictionary",&,N,V_contentForName
// Property: remoteFilesForName; attributes: T@"NSDictionary",&,N,V_remoteFilesForName
// Property: corruptedContentNames; attributes: T@"NSSet",&,N,V_corruptedContentNames

// -[SCSpectaclesMediaListReconciler initWithMediaList:contentList:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106eb873c

// -[SCSpectaclesMediaListReconciler updateContentWithMediaList]
// Type encoding: v16@0:8
// Implementation: 0x106eb8adc

// -[SCSpectaclesMediaListReconciler _deleteImuFileFromContentIfRemoteFileMissingImuData]
// Type encoding: v16@0:8
// Implementation: 0x106eb8d90

// -[SCSpectaclesMediaListReconciler contentToDelete]
// Type encoding: @16@0:8
// Implementation: 0x106eb8f2c

// -[SCSpectaclesMediaListReconciler necessaryDeletionLogicTasks]
// Type encoding: @16@0:8
// Implementation: 0x106eb9174

// -[SCSpectaclesMediaListReconciler necessaryMediaTransferTasks]
// Type encoding: @16@0:8
// Implementation: 0x106eb945c

// -[SCSpectaclesMediaListReconciler necessaryMetadataTasks]
// Type encoding: @16@0:8
// Implementation: 0x106eb9664

// -[SCSpectaclesMediaListReconciler _updateFilesizeIfNecessaryForFile:content:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106eb98cc

// -[SCSpectaclesMediaListReconciler _containsFileType:contentName:]
// Type encoding: B32@0:8Q16@24
// Implementation: 0x106eb9998

// -[SCSpectaclesMediaListReconciler _isContentFullySynced:]
// Type encoding: B24@0:8@16
// Implementation: 0x106eb9a88

// -[SCSpectaclesMediaListReconciler _lowTrafficMediaTaskForContent:component:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x106eb9ae4

// -[SCSpectaclesMediaListReconciler _sanityCheckForMediaList]
// Type encoding: v16@0:8
// Implementation: 0x106eb9b54

// -[SCSpectaclesMediaListReconciler mediaList]
// Type encoding: @16@0:8
// Implementation: 0x106eb9c88

// -[SCSpectaclesMediaListReconciler setMediaList:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb9c90

// -[SCSpectaclesMediaListReconciler contentList]
// Type encoding: @16@0:8
// Implementation: 0x106eb9cc0

// -[SCSpectaclesMediaListReconciler setContentList:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb9cc8

// -[SCSpectaclesMediaListReconciler contentForName]
// Type encoding: @16@0:8
// Implementation: 0x106eb9cf8

// -[SCSpectaclesMediaListReconciler setContentForName:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb9d00

// -[SCSpectaclesMediaListReconciler remoteFilesForName]
// Type encoding: @16@0:8
// Implementation: 0x106eb9d30

// -[SCSpectaclesMediaListReconciler setRemoteFilesForName:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb9d38

// -[SCSpectaclesMediaListReconciler corruptedContentNames]
// Type encoding: @16@0:8
// Implementation: 0x106eb9d68

// -[SCSpectaclesMediaListReconciler setCorruptedContentNames:]
// Type encoding: v24@0:8@16
// Implementation: 0x106eb9d70

// -[SCSpectaclesMediaListReconciler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106eb9da0

@end
