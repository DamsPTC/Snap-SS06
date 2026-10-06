// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCThirdPartyAccessServiceClient
// Superclass: NSObject
// Address: 0x112a61638

@interface SCThirdPartyAccessServiceClient


// -[SCThirdPartyAccessServiceClient initWithGRPCClientFactory:userId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105771dc8

// -[SCThirdPartyAccessServiceClient createLoginDataForLoginSource:withAuthCode:authCodeVerifier:]
// Type encoding: @40@0:8q16@24@32
// Implementation: 0x105771e9c

// -[SCThirdPartyAccessServiceClient getLoginDataForLoginSource:]
// Type encoding: @24@0:8q16
// Implementation: 0x1057722c4

// -[SCThirdPartyAccessServiceClient deleteLoginDataForLoginSource:]
// Type encoding: @24@0:8q16
// Implementation: 0x10577259c

// -[SCThirdPartyAccessServiceClient _makeThirdPartyAccessServiceWithGRPCClientFactory:]
// Type encoding: @24@0:8@16
// Implementation: 0x105772794

// -[SCThirdPartyAccessServiceClient _makeGRPCCallOptionsBuilder]
// Type encoding: @16@0:8
// Implementation: 0x1057728b4

// -[SCThirdPartyAccessServiceClient _parseError:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057728f8

// -[SCThirdPartyAccessServiceClient .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105772a48

@end
