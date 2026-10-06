// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSAComponentManager
// Superclass: NSObject
// Address: 0x112bfa468

@interface LSAComponentManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[LSAComponentManager analyticsComponent]
// Type encoding: @16@0:8
// Implementation: 0x10ade1b10

// -[LSAComponentManager audioProcessingComponent]
// Type encoding: @16@0:8
// Implementation: 0x10ade1b40

// -[LSAComponentManager bitmojiComponent]
// Type encoding: @16@0:8
// Implementation: 0x10ade1b70

// -[LSAComponentManager deviceMotionComponent]
// Type encoding: @16@0:8
// Implementation: 0x10ade1ba0

// -[LSAComponentManager lensComponent]
// Type encoding: @16@0:8
// Implementation: 0x10ade1bd0

// -[LSAComponentManager lensFilterFactoryComponent]
// Type encoding: @16@0:8
// Implementation: 0x10ade1c00

// -[LSAComponentManager externalImageComponent]
// Type encoding: @16@0:8
// Implementation: 0x10ade1c30

// -[LSAComponentManager presetsComponent]
// Type encoding: @16@0:8
// Implementation: 0x10ade1c60

// -[LSAComponentManager touchProcessingComponent]
// Type encoding: @16@0:8
// Implementation: 0x10ade1c90

// -[LSAComponentManager trackingComponent]
// Type encoding: @16@0:8
// Implementation: 0x10ade1cc0

// -[LSAComponentManager trackingSerializationComponent]
// Type encoding: @16@0:8
// Implementation: 0x10ade1cf0

// -[LSAComponentManager videoProcessingComponent]
// Type encoding: @16@0:8
// Implementation: 0x10ade1d20

// -[LSAComponentManager locationComponent]
// Type encoding: @16@0:8
// Implementation: 0x10ade1d50

// -[LSAComponentManager compassComponent]
// Type encoding: @16@0:8
// Implementation: 0x10ade1d80

// -[LSAComponentManager remoteAssetsComponent]
// Type encoding: @16@0:8
// Implementation: 0x10ade1db0

// -[LSAComponentManager uriServiceComponent]
// Type encoding: @16@0:8
// Implementation: 0x10ade1de0

// -[LSAComponentManager geoDataComponent]
// Type encoding: @16@0:8
// Implementation: 0x10ade1e10

// -[LSAComponentManager metricsComponent]
// Type encoding: @16@0:8
// Implementation: 0x10ade1e40

// -[LSAComponentManager snapRecordingComponent]
// Type encoding: @16@0:8
// Implementation: 0x10ade1e70

// -[LSAComponentManager serializationComponent]
// Type encoding: @16@0:8
// Implementation: 0x10ade1ea0

// -[LSAComponentManager metadataRecordingComponent]
// Type encoding: @16@0:8
// Implementation: 0x10ade1ed0

// -[LSAComponentManager connectedLensComponent]
// Type encoding: @16@0:8
// Implementation: 0x10ade1f00

// -[LSAComponentManager externalStreamComponent]
// Type encoding: @16@0:8
// Implementation: 0x10ade1f30

// -[LSAComponentManager init]
// Type encoding: @16@0:8
// Implementation: 0x10addee1c

// -[LSAComponentManager initWithContext:performer:trackerAvailability:enableAudioPlayback:configurationProvider:componentClasses:cacheParams:resourcesInitMode:configurationsToPreload:]
// Type encoding: @84@0:8@16@24@32B40@44@52@60Q68@76
// Implementation: 0x10addee78

// -[LSAComponentManager initWithContext:trackerAvailability:enableAudioPlayback:configurationProvider:componentClasses:cacheParams:resourcesInitMode:]
// Type encoding: @68@0:8@16@24B32@36@44@52Q60
// Implementation: 0x10addf46c

// -[LSAComponentManager initWithContext:trackerAvailability:enableAudioPlayback:configurationProvider:componentClasses:cacheParams:]
// Type encoding: @60@0:8@16@24B32@36@44@52
// Implementation: 0x10addf4ac

// -[LSAComponentManager initWithContext:performer:trackerAvailability:enableAudioPlayback:configurationProvider:componentClasses:cacheParams:configurationsToPreload:]
// Type encoding: @76@0:8@16@24@32B40@44@52@60@68
// Implementation: 0x10addf4d0

// -[LSAComponentManager initWithContext:trackerAvailability:configurationProvider:componentClasses:cacheParams:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10addf4fc

// -[LSAComponentManager dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10addf510

// -[LSAComponentManager invalidateWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10addf714

// -[LSAComponentManager createCoreManagerWithCacheParams:context:configurationProvider:configurationsToPreload:trackerAvailability:resourcesInitMode:]
// Type encoding: v64@0:8@16@24@32@40@48Q56
// Implementation: 0x10addf934

// -[LSAComponentManager performWithCoreContext:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10ade0058

// -[LSAComponentManager setShouldCatchExceptions:]
// Type encoding: v20@0:8B16
// Implementation: 0x10ade02cc

// -[LSAComponentManager setDeviceClass:completion:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x10ade02d4

// -[LSAComponentManager componentWithClass:]
// Type encoding: @24@0:8#16
// Implementation: 0x10ade0450

// -[LSAComponentManager clearAllResourcesWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10ade0650

// -[LSAComponentManager clearAllResourcesAndFinishContext]
// Type encoding: v16@0:8
// Implementation: 0x10ade07b4

// -[LSAComponentManager setShouldCatchLensJSExceptions:]
// Type encoding: B20@0:8B16
// Implementation: 0x10ade0878

// -[LSAComponentManager setShouldSyncCleanupOnAppBackground:]
// Type encoding: B20@0:8B16
// Implementation: 0x10ade0880

// -[LSAComponentManager applicationDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x10ade088c

// -[LSAComponentManager _setResourceCachePath:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ade089c

// -[LSAComponentManager _setUserDataCachePath:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ade09c8

// -[LSAComponentManager _prepareDirectoryAtPath:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x10ade0af4

// -[LSAComponentManager prepareComponentsWithClasses:configuration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10ade0c0c

// -[LSAComponentManager clearResources]
// Type encoding: v16@0:8
// Implementation: 0x10ade138c

// -[LSAComponentManager enableOutputTexturesCaching:]
// Type encoding: v20@0:8B16
// Implementation: 0x10ade14c0

// -[LSAComponentManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10ade154c

// -[LSAComponentManager .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10ade1598

// +[LSAComponentManager defaultComponentManagerWithContext:performer:trackerAvailability:enableAudioPlayback:configurationProvider:cacheParams:configurationsToPreload:]
// Type encoding: @68@0:8@16@24@32B40@44@52@60
// Implementation: 0x10ade179c

// +[LSAComponentManager defaultComponentManagerWithContext:performer:trackerAvailability:enableAudioPlayback:configurationProvider:cacheParams:]
// Type encoding: @60@0:8@16@24@32B40@44@52
// Implementation: 0x10ade1a7c

// +[LSAComponentManager defaultComponentManagerWithContext:performer:trackerAvailability:configurationProvider:cacheParams:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10ade1aa4

// +[LSAComponentManager defaultComponentManagerWithContext:performer:trackerAvailability:configurationProvider:cacheParams:configurationsToPreload:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10ade1ad8

// +[LSAComponentManager setLogLevel:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10ade011c

// +[LSAComponentManager setLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ade01b4

@end
