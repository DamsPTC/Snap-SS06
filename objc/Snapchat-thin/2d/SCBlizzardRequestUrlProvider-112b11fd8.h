// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBlizzardRequestUrlProvider
// Superclass: NSObject
// Address: 0x112b11fd8

@interface SCBlizzardRequestUrlProvider

// Property: collectorURLs; attributes: T@"NSDictionary",&,N,V_collectorURLs
// Property: uploadUrl; attributes: T@"NSURL",&,N,V_uploadUrl
// Property: spectrumUrl; attributes: T@"NSURL",&,N,V_spectrumUrl

// -[SCBlizzardRequestUrlProvider initWithShouldSpectrumLogToStaging:]
// Type encoding: @20@0:8B16
// Implementation: 0x1002f4f7c

// -[SCBlizzardRequestUrlProvider _getCollectorUrl]
// Type encoding: @16@0:8
// Implementation: 0x1002f5090

// -[SCBlizzardRequestUrlProvider _getSpectrumUrl:]
// Type encoding: @20@0:8B16
// Implementation: 0x1002f9e08

// -[SCBlizzardRequestUrlProvider collectorUrlForlogQueueName:appInBackground:numEventsOnDisk:numEventsInRequest:]
// Type encoding: @44@0:8@16B24Q28Q36
// Implementation: 0x106adae28

// -[SCBlizzardRequestUrlProvider collectorUrlForlogQueueName:appInBackground:numEventsOnDisk:numEventsInRequest:maxPriority:]
// Type encoding: @52@0:8@16B24Q28Q36Q44
// Implementation: 0x106adafbc

// -[SCBlizzardRequestUrlProvider collectorUrlForSpectrum]
// Type encoding: @16@0:8
// Implementation: 0x106adb1a4

// -[SCBlizzardRequestUrlProvider _getUploadUrlWithQueryItemDictionary:]
// Type encoding: @24@0:8@16
// Implementation: 0x106adb1cc

// -[SCBlizzardRequestUrlProvider uploadUrl]
// Type encoding: @16@0:8
// Implementation: 0x106adb40c

// -[SCBlizzardRequestUrlProvider setUploadUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x106adb414

// -[SCBlizzardRequestUrlProvider spectrumUrl]
// Type encoding: @16@0:8
// Implementation: 0x106adb444

// -[SCBlizzardRequestUrlProvider setSpectrumUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x106adb44c

// -[SCBlizzardRequestUrlProvider collectorURLs]
// Type encoding: @16@0:8
// Implementation: 0x1002f5130

// -[SCBlizzardRequestUrlProvider setCollectorURLs:]
// Type encoding: v24@0:8@16
// Implementation: 0x106adb47c

// -[SCBlizzardRequestUrlProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106adb4ac

@end
