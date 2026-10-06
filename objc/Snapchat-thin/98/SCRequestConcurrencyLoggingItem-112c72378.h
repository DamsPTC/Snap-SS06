// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRequestConcurrencyLoggingItem
// Superclass: NSObject
// Address: 0x112c72378

@interface SCRequestConcurrencyLoggingItem

// Property: startTimestamp; attributes: Td,N,V_startTimestamp
// Property: finishTimestamp; attributes: Td,N,V_finishTimestamp
// Property: requestType; attributes: Tq,N,V_requestType
// Property: accumulatedOverlappedDownloadDurationOfOtherRequests; attributes: Td,N,V_accumulatedOverlappedDownloadDurationOfOtherRequests
// Property: accumulatedOverlappedDownloadDurationOfOtherDownloadRequests; attributes: Td,N,V_accumulatedOverlappedDownloadDurationOfOtherDownloadRequests
// Property: accumulatedOverlappedDownloadDurationOfOtherMetadataRequests; attributes: Td,N,V_accumulatedOverlappedDownloadDurationOfOtherMetadataRequests
// Property: accumulatedOverlappedUploadDurationOfOtherRequests; attributes: Td,N,V_accumulatedOverlappedUploadDurationOfOtherRequests
// Property: accumulatedOverlappedUploadDurationOfOtherUploadRequests; attributes: Td,N,V_accumulatedOverlappedUploadDurationOfOtherUploadRequests
// Property: accumulatedOverlappedUploadDurationOfOtherAnalyticsRequests; attributes: Td,N,V_accumulatedOverlappedUploadDurationOfOtherAnalyticsRequests
// Property: accumulatedOverlappedUploadDurationOfOtherAnalyticsV2Requests; attributes: Td,N,V_accumulatedOverlappedUploadDurationOfOtherAnalyticsV2Requests

// -[SCRequestConcurrencyLoggingItem initRequestConcurrencyLoggingItemWithStartTimestamp:requestType:]
// Type encoding: @32@0:8d16q24
// Implementation: 0x1006929fc

// -[SCRequestConcurrencyLoggingItem updateRequestConcurrencyLoggingItemWithFinishTimestamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x1008a17b0

// -[SCRequestConcurrencyLoggingItem updateAccumulatedOverlappedDurationOfOtherRequestsWithDuration:overlappedRequest:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x10b275a80

// -[SCRequestConcurrencyLoggingItem isReceiveDataRequestItem]
// Type encoding: B16@0:8
// Implementation: 0x10b275b54

// -[SCRequestConcurrencyLoggingItem isSendDataRequestItem]
// Type encoding: B16@0:8
// Implementation: 0x10b275b8c

// -[SCRequestConcurrencyLoggingItem isDownloadRequestItem]
// Type encoding: B16@0:8
// Implementation: 0x10b275bd0

// -[SCRequestConcurrencyLoggingItem isMetadataRequestItem]
// Type encoding: B16@0:8
// Implementation: 0x10b275be0

// -[SCRequestConcurrencyLoggingItem isUploadRequestItem]
// Type encoding: B16@0:8
// Implementation: 0x10b275bf0

// -[SCRequestConcurrencyLoggingItem isAnalyticsRequestItem]
// Type encoding: B16@0:8
// Implementation: 0x10b275c00

// -[SCRequestConcurrencyLoggingItem isAnalyticsV2RequestItem]
// Type encoding: B16@0:8
// Implementation: 0x10b275c10

// -[SCRequestConcurrencyLoggingItem startTimestamp]
// Type encoding: d16@0:8
// Implementation: 0x1008a17c0

// -[SCRequestConcurrencyLoggingItem setStartTimestamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b275c20

// -[SCRequestConcurrencyLoggingItem finishTimestamp]
// Type encoding: d16@0:8
// Implementation: 0x1008a17b8

// -[SCRequestConcurrencyLoggingItem setFinishTimestamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b275c28

// -[SCRequestConcurrencyLoggingItem requestType]
// Type encoding: q16@0:8
// Implementation: 0x1008a18a4

// -[SCRequestConcurrencyLoggingItem setRequestType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b275c30

// -[SCRequestConcurrencyLoggingItem accumulatedOverlappedDownloadDurationOfOtherRequests]
// Type encoding: d16@0:8
// Implementation: 0x1008a17c8

// -[SCRequestConcurrencyLoggingItem setAccumulatedOverlappedDownloadDurationOfOtherRequests:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b275c38

// -[SCRequestConcurrencyLoggingItem accumulatedOverlappedDownloadDurationOfOtherDownloadRequests]
// Type encoding: d16@0:8
// Implementation: 0x1008a17d8

// -[SCRequestConcurrencyLoggingItem setAccumulatedOverlappedDownloadDurationOfOtherDownloadRequests:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b275c40

// -[SCRequestConcurrencyLoggingItem accumulatedOverlappedDownloadDurationOfOtherMetadataRequests]
// Type encoding: d16@0:8
// Implementation: 0x1008a17e0

// -[SCRequestConcurrencyLoggingItem setAccumulatedOverlappedDownloadDurationOfOtherMetadataRequests:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b275c48

// -[SCRequestConcurrencyLoggingItem accumulatedOverlappedUploadDurationOfOtherRequests]
// Type encoding: d16@0:8
// Implementation: 0x1008a17d0

// -[SCRequestConcurrencyLoggingItem setAccumulatedOverlappedUploadDurationOfOtherRequests:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b275c50

// -[SCRequestConcurrencyLoggingItem accumulatedOverlappedUploadDurationOfOtherUploadRequests]
// Type encoding: d16@0:8
// Implementation: 0x1008a17e8

// -[SCRequestConcurrencyLoggingItem setAccumulatedOverlappedUploadDurationOfOtherUploadRequests:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b275c58

// -[SCRequestConcurrencyLoggingItem accumulatedOverlappedUploadDurationOfOtherAnalyticsRequests]
// Type encoding: d16@0:8
// Implementation: 0x1008a17f0

// -[SCRequestConcurrencyLoggingItem setAccumulatedOverlappedUploadDurationOfOtherAnalyticsRequests:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b275c60

// -[SCRequestConcurrencyLoggingItem accumulatedOverlappedUploadDurationOfOtherAnalyticsV2Requests]
// Type encoding: d16@0:8
// Implementation: 0x1008a17f8

// -[SCRequestConcurrencyLoggingItem setAccumulatedOverlappedUploadDurationOfOtherAnalyticsV2Requests:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b275c68

@end
