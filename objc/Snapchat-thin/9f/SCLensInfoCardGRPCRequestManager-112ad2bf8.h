// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensInfoCardGRPCRequestManager
// Superclass: NSObject
// Address: 0x112ad2bf8

@interface SCLensInfoCardGRPCRequestManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensInfoCardGRPCRequestManager initWithLensInfoCardNetworkConfig:grpcClientFactory:performer:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1061ee884

// -[SCLensInfoCardGRPCRequestManager submitLensInfoCardRequestWithLensIds:contexts:successBlock:failureBlock:]
// Type encoding: v48@0:8@16Q24@?32@?40
// Implementation: 0x1061ee9cc

// -[SCLensInfoCardGRPCRequestManager submitLensInfoCardRequestWithLensId:lensSource:contexts:successBlock:failureBlock:]
// Type encoding: v56@0:8@16Q24Q32@?40@?48
// Implementation: 0x1061ee9e0

// -[SCLensInfoCardGRPCRequestManager _submitLensInfoCardRequestWithLensIds:lensSource:contexts:successBlock:failureBlock:]
// Type encoding: v56@0:8@16Q24Q32@?40@?48
// Implementation: 0x1061eeaec

// -[SCLensInfoCardGRPCRequestManager _callOptions]
// Type encoding: @16@0:8
// Implementation: 0x1061eecf0

// -[SCLensInfoCardGRPCRequestManager _submitRequest:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1061eee90

// -[SCLensInfoCardGRPCRequestManager _submitPerformerRequest:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1061ef048

// -[SCLensInfoCardGRPCRequestManager _httpRequestWithLensIds:lensSource:contexts:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x1061ef13c

// -[SCLensInfoCardGRPCRequestManager _carouselLensSourceFromLensSource:]
// Type encoding: i24@0:8Q16
// Implementation: 0x1061ef20c

// -[SCLensInfoCardGRPCRequestManager _unlockablesIdsFromLensIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x1061ef230

// -[SCLensInfoCardGRPCRequestManager _contextsEnumArrayForContexts:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1061ef354

// -[SCLensInfoCardGRPCRequestManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1061ef3f8

// +[SCLensInfoCardGRPCRequestManager _grpcServiceWithNetworkConfig:grpcClientFactory:performer:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1061eebc8

@end
