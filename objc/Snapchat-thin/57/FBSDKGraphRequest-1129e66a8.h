// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKGraphRequest
// Superclass: NSObject
// Address: 0x1129e66a8

@interface FBSDKGraphRequest

// Property: flags; attributes: TQ,N,Vflags
// Property: HTTPMethod; attributes: T@"NSString",C,N,VHTTPMethod
// Property: graphRequestConnectionFactory; attributes: T@"<FBSDKGraphRequestConnectionFactory>",&,N,V_graphRequestConnectionFactory
// Property: parameters; attributes: T@"NSDictionary",C,N,V_parameters
// Property: tokenString; attributes: T@"NSString",R,C,N,V_tokenString
// Property: graphPath; attributes: T@"NSString",R,C,N,V_graphPath
// Property: version; attributes: T@"NSString",R,C,N,V_version
// Property: forAppEvents; attributes: TB,R,N,V_forAppEvents
// Property: useAlternativeDefaultDomainPrefix; attributes: TB,R,N,V_useAlternativeDefaultDomainPrefix
// Property: graphErrorRecoveryDisabled; attributes: TB,N,GisGraphErrorRecoveryDisabled
// Property: hasAttachments; attributes: TB,R,N

// -[FBSDKGraphRequest initWithGraphPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x104961638

// -[FBSDKGraphRequest initWithGraphPath:useAlternativeDefaultDomainPrefix:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x104961640

// -[FBSDKGraphRequest initWithGraphPath:HTTPMethod:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104961714

// -[FBSDKGraphRequest initWithGraphPath:parameters:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104961854

// -[FBSDKGraphRequest initWithGraphPath:parameters:useAlternativeDefaultDomainPrefix:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x10496185c

// -[FBSDKGraphRequest initWithGraphPath:parameters:HTTPMethod:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104961888

// -[FBSDKGraphRequest initWithGraphPath:parameters:HTTPMethod:useAlternativeDefaultDomainPrefix:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x104961890

// -[FBSDKGraphRequest initWithGraphPath:parameters:flags:]
// Type encoding: @40@0:8@16@24Q32
// Implementation: 0x10496195c

// -[FBSDKGraphRequest initWithGraphPath:parameters:flags:useAlternativeDefaultDomainPrefix:]
// Type encoding: @44@0:8@16@24Q32B40
// Implementation: 0x104961964

// -[FBSDKGraphRequest initWithGraphPath:parameters:tokenString:HTTPMethod:flags:]
// Type encoding: @56@0:8@16@24@32@40Q48
// Implementation: 0x104961a18

// -[FBSDKGraphRequest initWithGraphPath:parameters:tokenString:HTTPMethod:flags:useAlternativeDefaultDomainPrefix:]
// Type encoding: @60@0:8@16@24@32@40Q48B56
// Implementation: 0x104961a20

// -[FBSDKGraphRequest initWithGraphPath:parameters:tokenString:HTTPMethod:flags:graphRequestConnectionFactory:]
// Type encoding: @64@0:8@16@24@32@40Q48@56
// Implementation: 0x104961b38

// -[FBSDKGraphRequest initWithGraphPath:parameters:tokenString:HTTPMethod:version:flags:graphRequestConnectionFactory:]
// Type encoding: @72@0:8@16@24@32@40@48Q56@64
// Implementation: 0x104961c58

// -[FBSDKGraphRequest initWithGraphPath:parameters:tokenString:HTTPMethod:version:flags:useAlternativeDefaultDomainPrefix:graphRequestConnectionFactory:]
// Type encoding: @76@0:8@16@24@32@40@48Q56B64@68
// Implementation: 0x104961c84

// -[FBSDKGraphRequest initWithGraphPath:parameters:tokenString:version:HTTPMethod:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x104961d34

// -[FBSDKGraphRequest initWithGraphPath:parameters:tokenString:HTTPMethod:flags:forAppEvents:]
// Type encoding: @60@0:8@16@24@32@40Q48B56
// Implementation: 0x104961d3c

// -[FBSDKGraphRequest initWithGraphPath:parameters:tokenString:HTTPMethod:flags:forAppEvents:useAlternativeDefaultDomainPrefix:]
// Type encoding: @64@0:8@16@24@32@40Q48B56B60
// Implementation: 0x104961d60

// -[FBSDKGraphRequest initWithGraphPath:parameters:tokenString:version:HTTPMethod:forAppEvents:]
// Type encoding: @60@0:8@16@24@32@40@48B56
// Implementation: 0x104961e80

// -[FBSDKGraphRequest initWithGraphPath:parameters:tokenString:version:HTTPMethod:forAppEvents:useAlternativeDefaultDomainPrefix:]
// Type encoding: @64@0:8@16@24@32@40@48B56B60
// Implementation: 0x104961ea4

// -[FBSDKGraphRequest isGraphErrorRecoveryDisabled]
// Type encoding: B16@0:8
// Implementation: 0x1049620dc

// -[FBSDKGraphRequest setGraphErrorRecoveryDisabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1049620f4

// -[FBSDKGraphRequest hasAttachments]
// Type encoding: B16@0:8
// Implementation: 0x104962130

// -[FBSDKGraphRequest startWithCompletion:]
// Type encoding: @24@0:8@?16
// Implementation: 0x104962244

// -[FBSDKGraphRequest description]
// Type encoding: @16@0:8
// Implementation: 0x1049628d8

// -[FBSDKGraphRequest formattedDescription]
// Type encoding: @16@0:8
// Implementation: 0x1049628dc

// -[FBSDKGraphRequest HTTPMethod]
// Type encoding: @16@0:8
// Implementation: 0x104962a30

// -[FBSDKGraphRequest setHTTPMethod:]
// Type encoding: v24@0:8@16
// Implementation: 0x104962a38

// -[FBSDKGraphRequest flags]
// Type encoding: Q16@0:8
// Implementation: 0x104962a40

// -[FBSDKGraphRequest setFlags:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104962a48

// -[FBSDKGraphRequest parameters]
// Type encoding: @16@0:8
// Implementation: 0x104962a50

// -[FBSDKGraphRequest setParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x104962a58

// -[FBSDKGraphRequest tokenString]
// Type encoding: @16@0:8
// Implementation: 0x104962a60

// -[FBSDKGraphRequest graphPath]
// Type encoding: @16@0:8
// Implementation: 0x104962a68

// -[FBSDKGraphRequest version]
// Type encoding: @16@0:8
// Implementation: 0x104962a70

// -[FBSDKGraphRequest forAppEvents]
// Type encoding: B16@0:8
// Implementation: 0x104962a78

// -[FBSDKGraphRequest useAlternativeDefaultDomainPrefix]
// Type encoding: B16@0:8
// Implementation: 0x104962a80

// -[FBSDKGraphRequest graphRequestConnectionFactory]
// Type encoding: @16@0:8
// Implementation: 0x104962a88

// -[FBSDKGraphRequest setGraphRequestConnectionFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x104962a90

// -[FBSDKGraphRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104962a9c

// +[FBSDKGraphRequest isForFetchingDomainConfiguration:]
// Type encoding: B24@0:8@16
// Implementation: 0x1049622c4

// +[FBSDKGraphRequest isAttachment:]
// Type encoding: B24@0:8@16
// Implementation: 0x10496245c

// +[FBSDKGraphRequest serializeURL:params:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1049624e8

// +[FBSDKGraphRequest serializeURL:params:httpMethod:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1049624f4

// +[FBSDKGraphRequest serializeURL:params:httpMethod:forBatch:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x1049624fc

// +[FBSDKGraphRequest preprocessParams:]
// Type encoding: @24@0:8@16
// Implementation: 0x10496276c

// +[FBSDKGraphRequest settings]
// Type encoding: @16@0:8
// Implementation: 0x104962828

// +[FBSDKGraphRequest setSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x104962834

// +[FBSDKGraphRequest accessTokenProvider]
// Type encoding: #16@0:8
// Implementation: 0x104962844

// +[FBSDKGraphRequest setAccessTokenProvider:]
// Type encoding: v24@0:8#16
// Implementation: 0x104962850

// +[FBSDKGraphRequest graphRequestConnectionFactory]
// Type encoding: @16@0:8
// Implementation: 0x10496285c

// +[FBSDKGraphRequest setGraphRequestConnectionFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x104962868

// +[FBSDKGraphRequest configureWithSettings:currentAccessTokenStringProvider:graphRequestConnectionFactory:]
// Type encoding: v40@0:8@16#24@32
// Implementation: 0x104962878

@end
