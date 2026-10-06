// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCWebServerStreamedResponse
// Superclass: SCWebServerResponse
// Address: 0x112b83c78

@interface SCWebServerStreamedResponse

// Property: didFinishSendingData; attributes: TB,V_didFinishSendingData
// Property: contentType; attributes: T@"NSString",C,D,N

// -[SCWebServerStreamedResponse initWithContentType:streamBlock:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x107df133c

// -[SCWebServerStreamedResponse initWithContentType:asyncStreamBlock:connectionClosedBlock:]
// Type encoding: @40@0:8@16@?24@?32
// Implementation: 0x107df146c

// -[SCWebServerStreamedResponse asyncReadDataWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107df154c

// -[SCWebServerStreamedResponse close]
// Type encoding: v16@0:8
// Implementation: 0x107df16bc

// -[SCWebServerStreamedResponse didFinishSendingData]
// Type encoding: B16@0:8
// Implementation: 0x107df1768

// -[SCWebServerStreamedResponse setDidFinishSendingData:]
// Type encoding: v20@0:8B16
// Implementation: 0x107df177c

// -[SCWebServerStreamedResponse .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107df178c

// +[SCWebServerStreamedResponse responseWithContentType:streamBlock:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x107df1260

// +[SCWebServerStreamedResponse responseWithContentType:asyncStreamBlock:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x107df12cc

@end
