// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBandwidthEstimatorExperiment
// Superclass: NSObject
// Address: 0x112c715b8

@interface SCBandwidthEstimatorExperiment

// Property: uploadBandwidth; attributes: Tq,V_uploadBandwidth
// Property: uploadWorkload; attributes: Tq,V_uploadWorkload
// Property: lastDownloadBandwidthClass; attributes: Tq,V_lastDownloadBandwidthClass
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBandwidthEstimatorExperiment init]
// Type encoding: @16@0:8
// Implementation: 0x10010ff0c

// -[SCBandwidthEstimatorExperiment setBlizzardLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x100265a44

// -[SCBandwidthEstimatorExperiment _resetFiltering]
// Type encoding: v16@0:8
// Implementation: 0x100113a50

// -[SCBandwidthEstimatorExperiment networkConnectivityStatusDidChange:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b25eb50

// -[SCBandwidthEstimatorExperiment registerDownloadListener:]
// Type encoding: q24@0:8@16
// Implementation: 0x1006683ac

// -[SCBandwidthEstimatorExperiment notifyDownloadListeners:]
// Type encoding: v24@0:8q16
// Implementation: 0x1008a03f0

// -[SCBandwidthEstimatorExperiment downloadConnectionClassDidChange:]
// Type encoding: v24@0:8q16
// Implementation: 0x1008a0360

// -[SCBandwidthEstimatorExperiment currentDownloadBandwidthClassAsString]
// Type encoding: @16@0:8
// Implementation: 0x10b25ebb0

// -[SCBandwidthEstimatorExperiment finishDownloadBandwidthEstimationWithRequestKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008a0010

// -[SCBandwidthEstimatorExperiment startUploadBandwidthEstimationWithRequestKey:totalBytesExpectedToSend:bytesLeft:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x10b25ebdc

// -[SCBandwidthEstimatorExperiment finishUploadBandwidthEstimationWithRequestKey:totalBytesExpectedToSend:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10078cd80

// -[SCBandwidthEstimatorExperiment _updateUploadWorkloadWithRequestKey:totalBytesExpectedToSend:requestStart:]
// Type encoding: v36@0:8@16q24B32
// Implementation: 0x10078d764

// -[SCBandwidthEstimatorExperiment _shouldStartUploadBandwidthEstimationWithRequestKey:totalBytesExpectedToSend:bytesLeft:]
// Type encoding: B40@0:8@16q24q32
// Implementation: 0x10b25ed94

// -[SCBandwidthEstimatorExperiment _shouldFinishUploadBandwidthEstimationEarlyWithRequestKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b25ee14

// -[SCBandwidthEstimatorExperiment _updateUploadBandwidthEstimatorWithRequestKey:totalBytesExpectedToSend:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10078d614

// -[SCBandwidthEstimatorExperiment onConnectivityChanged:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b25eecc

// -[SCBandwidthEstimatorExperiment onDownstreamBandwidthChanged:bandwidthKbps:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x10b25ef0c

// -[SCBandwidthEstimatorExperiment nativeDownloadBandwidthWithTTL:]
// Type encoding: q24@0:8d16
// Implementation: 0x10b25ef10

// -[SCBandwidthEstimatorExperiment downloadBandwidth]
// Type encoding: q16@0:8
// Implementation: 0x10b25eff0

// -[SCBandwidthEstimatorExperiment cachedDownloadBpsForLogging]
// Type encoding: q16@0:8
// Implementation: 0x100265af0

// -[SCBandwidthEstimatorExperiment nqeDownloadBandwidthBps]
// Type encoding: q16@0:8
// Implementation: 0x100265af4

// -[SCBandwidthEstimatorExperiment httpRTT]
// Type encoding: q16@0:8
// Implementation: 0x10b25eff8

// -[SCBandwidthEstimatorExperiment transportRTT]
// Type encoding: q16@0:8
// Implementation: 0x10b25f050

// -[SCBandwidthEstimatorExperiment networkRequestCount:]
// Type encoding: q20@0:8B16
// Implementation: 0x10b25f0a8

// -[SCBandwidthEstimatorExperiment networkRequestErrorCount:]
// Type encoding: q20@0:8B16
// Implementation: 0x10b25f108

// -[SCBandwidthEstimatorExperiment currentDownloadBandwidthClass]
// Type encoding: q16@0:8
// Implementation: 0x10b25f168

// -[SCBandwidthEstimatorExperiment nqeDownloadBandwidthClass]
// Type encoding: q16@0:8
// Implementation: 0x10b25f194

// -[SCBandwidthEstimatorExperiment currentConnectionClassification]
// Type encoding: q16@0:8
// Implementation: 0x10b25f1c0

// -[SCBandwidthEstimatorExperiment setBandwidthChangeNotifierPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1005c918c

// -[SCBandwidthEstimatorExperiment setNativeNetworkManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x1006753a4

// -[SCBandwidthEstimatorExperiment setCircumstanceEngine:]
// Type encoding: v24@0:8@16
// Implementation: 0x100675428

// -[SCBandwidthEstimatorExperiment getNetworkQueueStateWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b25f210

// -[SCBandwidthEstimatorExperiment uploadBandwidth]
// Type encoding: q16@0:8
// Implementation: 0x10b25f360

// -[SCBandwidthEstimatorExperiment setUploadBandwidth:]
// Type encoding: v24@0:8q16
// Implementation: 0x100113acc

// -[SCBandwidthEstimatorExperiment uploadWorkload]
// Type encoding: q16@0:8
// Implementation: 0x10b25f368

// -[SCBandwidthEstimatorExperiment setUploadWorkload:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b25f370

// -[SCBandwidthEstimatorExperiment lastDownloadBandwidthClass]
// Type encoding: q16@0:8
// Implementation: 0x100668474

// -[SCBandwidthEstimatorExperiment setLastDownloadBandwidthClass:]
// Type encoding: v24@0:8q16
// Implementation: 0x10011418c

// -[SCBandwidthEstimatorExperiment .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b25f378

// +[SCBandwidthEstimatorExperiment shared]
// Type encoding: @16@0:8
// Implementation: 0x10010fe5c

@end
