// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFideliusAckRetryService
// Superclass: NSObject
// Address: 0x112a7d108

@interface SCFideliusAckRetryService


// -[SCFideliusAckRetryService initWithDataSource:httpMetadataService:httpRequestModifier:betaSyncDelegate:userIdentity:dbManager:logger:backgroundTaskWrapper:circumstanceEngine:grpcFideliusRecryptService:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x100613890

// -[SCFideliusAckRetryService _processArroyoRetries:recipientId:recipientKeys:source:withBackground:retryType:]
// Type encoding: v56@0:8@16@24@32@40B48i52
// Implementation: 0x105927e00

// -[SCFideliusAckRetryService _processArroyoRetriesV2:recipientId:recipientKeys:source:withBackground:retryType:]
// Type encoding: v56@0:8@16@24@32@40B48i52
// Implementation: 0x105928094

// -[SCFideliusAckRetryService _rewrapAndSubmitSingleMessage:recipientId:recipientKeys:source:arroyoId:uniqueId:isCrossDeviceRetry:withBackground:retryType:]
// Type encoding: v76@0:8@16@24@32@40@48@56B64B68i72
// Implementation: 0x1059283fc

// -[SCFideliusAckRetryService _rewrapAndSubmitSingleMessageV2:recipientId:recipientKeys:source:arroyoId:uniqueId:isCrossDeviceRetry:withBackground:retryType:]
// Type encoding: v76@0:8@16@24@32@40@48@56B64B68i72
// Implementation: 0x1059289a4

// -[SCFideliusAckRetryService _unwrapSingleArroyoRetryInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x105929044

// -[SCFideliusAckRetryService _unwrapSingleArroyoRetryInfoV2:recipientId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1059294c8

// -[SCFideliusAckRetryService _processArroyoRetryInfos:recipientId:recipientKeys:source:withBackground:retryType:]
// Type encoding: v56@0:8@16@24@32@40B48i52
// Implementation: 0x105929840

// -[SCFideliusAckRetryService _processArroyoRetryInfosV2:recipientId:recipientKeys:source:withBackground:retryType:]
// Type encoding: v56@0:8@16@24@32@40B48i52
// Implementation: 0x105929b44

// -[SCFideliusAckRetryService _prepareSOJUAndSubmit:recipientId:arroyoId:myBetaString:source:retryType:]
// Type encoding: v60@0:8@16@24@32@40@48i56
// Implementation: 0x105929f24

// -[SCFideliusAckRetryService _prepareRecryptAndSubmitV2:recipientId:arroyoId:myBetaString:source:retryType:]
// Type encoding: v60@0:8@16@24@32@40@48i56
// Implementation: 0x10592a448

// -[SCFideliusAckRetryService _keyForArroyoMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x10592a6ec

// -[SCFideliusAckRetryService _keyForArroyoMessageV2:]
// Type encoding: @24@0:8@16
// Implementation: 0x10592a6f0

// -[SCFideliusAckRetryService _keyFromMessageEncryptionKeyTable:]
// Type encoding: @24@0:8@16
// Implementation: 0x10592a7f8

// -[SCFideliusAckRetryService processRetriesV2:source:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100837f54

// -[SCFideliusAckRetryService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10592a8c4

@end
