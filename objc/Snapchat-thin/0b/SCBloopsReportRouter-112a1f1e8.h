// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBloopsReportRouter
// Superclass: NSObject
// Address: 0x112a1f1e8

@interface SCBloopsReportRouter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBloopsReportRouter initWithReportScope:valdiRuntimeProvider:customReportComposerFactory:composerNetworkingGrpcServiceFactory:contentUploader:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1051a36c0

// -[SCBloopsReportRouter begin]
// Type encoding: v16@0:8
// Implementation: 0x1051a37e4

// -[SCBloopsReportRouter makeReportPageWithCameosDeps:coreDeps:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1051a3960

// -[SCBloopsReportRouter makeCameosDeps]
// Type encoding: @16@0:8
// Implementation: 0x1051a3a9c

// -[SCBloopsReportRouter reportDidCompleteWithCancelled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1051a3af4

// -[SCBloopsReportRouter reportDidSubmitWithReasonId:comment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1051a3b88

// -[SCBloopsReportRouter pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x1051a3c6c

// -[SCBloopsReportRouter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1051a3c78

@end
