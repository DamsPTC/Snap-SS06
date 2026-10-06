// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdPreviewManager
// Superclass: NSObject
// Address: 0x112a5bc38

@interface SCAdPreviewManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdPreviewManager initWithRequestManager:adConfigProvider:snapTokenProvider:adRenderDataParser:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1056f4a9c

// -[SCAdPreviewManager fetchAdCreativeForPreviewFromV3WithEntityType:entityId:successBlock:failureBlock:]
// Type encoding: v48@0:8Q16@24@?32@?40
// Implementation: 0x1056f4b98

// -[SCAdPreviewManager _onSendRequestToEndpointSuccessWithResponseData:entityId:endpointUrl:successBlock:failureBlock:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x1056f4e44

// -[SCAdPreviewManager _sendRequestToEndpoint:parameters:requestManager:successBlock:failureBlock:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x1056f5094

// -[SCAdPreviewManager _sendGetRequestToEndpoint:parameters:requestManager:successBlock:failureBlock:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x1056f5360

// -[SCAdPreviewManager _makeRequestWithSnapToken:endpoint:parameters:requestManager:successBlock:failureBlock:]
// Type encoding: v64@0:8@16@24@32@40@?48@?56
// Implementation: 0x1056f55e8

// -[SCAdPreviewManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056f58a0

@end
