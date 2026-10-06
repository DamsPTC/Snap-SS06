// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRequestManagerHTTPMetadataService
// Superclass: NSObject
// Address: 0x112c712e8

@interface SCRequestManagerHTTPMetadataService

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCRequestManagerHTTPMetadataService submit:callbackExecutor:callback:uploadDataProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10b25c124

// -[SCRequestManagerHTTPMetadataService _handleNativeResponseCallback:result:data:error:callbackQueue:nativeCallback:]
// Type encoding: v64@0:8@16Q24@32@40@48@56
// Implementation: 0x10b25c794

// -[SCRequestManagerHTTPMetadataService initWithRequestManager:clientSwitchboardConfigFetcher:requestKeyGenerator:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x10028d5a4

// -[SCRequestManagerHTTPMetadataService initWithRequestManager:clientSwitchboardConfigFetcher:requestKeyGenerator:snapTokenProvider:snapTokenLogger:]
// Type encoding: @56@0:8@16@24@?32@40@48
// Implementation: 0x100b41b60

// -[SCRequestManagerHTTPMetadataService initWithRequestManager:clientSwitchboardConfigFetcher:requestKeyGenerator:snapTokenProvider:snapTokenLogger:clientAttestationProvider:]
// Type encoding: @64@0:8@16@24@?32@40@48@56
// Implementation: 0x100b41ac8

// -[SCRequestManagerHTTPMetadataService submitRequest:context:queue:onComplete:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x100b41c80

// -[SCRequestManagerHTTPMetadataService setContexts:withRequestManagerMode:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b25ced0

// -[SCRequestManagerHTTPMetadataService addContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b25ced8

// -[SCRequestManagerHTTPMetadataService removeContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b25cee0

// -[SCRequestManagerHTTPMetadataService setContexts:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b25cee8

// -[SCRequestManagerHTTPMetadataService _requestForHTTPRequest:context:requestKey:additionalHeaders:clientSBConfig:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x100b42a5c

// -[SCRequestManagerHTTPMetadataService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b25cef0

@end
