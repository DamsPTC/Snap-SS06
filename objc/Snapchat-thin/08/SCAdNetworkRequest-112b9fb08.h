// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdNetworkRequest
// Superclass: NSObject
// Address: 0x112b9fb08

@interface SCAdNetworkRequest

// Property: url; attributes: T@"NSString",R,C,N,V_url
// Property: retryUrl; attributes: T@"NSString",R,C,N,V_retryUrl
// Property: userAgent; attributes: T@"NSString",R,C,N,V_userAgent
// Property: overrideHeaders; attributes: T@"NSDictionary",R,C,N,V_overrideHeaders
// Property: type; attributes: Tq,R,N,V_type
// Property: body; attributes: T@"NSObject",R,N,V_body
// Property: serialize; attributes: TB,R,N,V_serialize
// Property: retroType; attributes: Tq,R,N,V_retroType
// Property: snapAdsId; attributes: T@"NSString",R,N,V_snapAdsId
// Property: adType; attributes: T@"NSString",R,N,V_adType
// Property: requestType; attributes: TQ,R,N,V_requestType
// Property: requestKey; attributes: T@"NSString",R,N,V_requestKey
// Property: isPrimaryRequest; attributes: TB,R,N,V_isPrimaryRequest
// Property: format; attributes: Tq,R,N,V_format
// Property: adProductType; attributes: TQ,R,N,V_adProductType
// Property: serveItemId; attributes: T@"NSString",R,N,V_serveItemId
// Property: adServeTimestamp; attributes: Td,R,N,V_adServeTimestamp
// Property: adId; attributes: T@"NSString",R,N,V_adId
// Property: trackSeqNum; attributes: Tq,R,N,V_trackSeqNum
// Property: trackIsSwiped; attributes: TB,R,N,V_trackIsSwiped

// -[SCAdNetworkRequest initWithUrl:userAgent:adRequestType:overrideHeaders:body:serialize:retroType:]
// Type encoding: @68@0:8@16@24q32@40@48B56q60
// Implementation: 0x108488ab4

// -[SCAdNetworkRequest initWithUrl:userAgent:adRequestType:overrideHeaders:body:serialize:retroType:isPrimaryRequest:adProductType:requestKey:]
// Type encoding: @88@0:8@16@24q32@40@48B56q60B68Q72@80
// Implementation: 0x108488ae4

// -[SCAdNetworkRequest initWithUrl:userAgent:adRequestType:overrideHeaders:body:serialize:retroType:snapAdsId:adType:requestType:isPrimaryRequest:requestFormat:adProductType:serveItemId:adServeTimestamp:adId:requestKey:]
// Type encoding: @144@0:8@16@24q32@40@48B56q60@68@76Q84B92q96Q104@112d120@128@136
// Implementation: 0x108488b50

// -[SCAdNetworkRequest initWithUrl:retryUrl:userAgent:adRequestType:overrideHeaders:body:serialize:retroType:snapAdsId:adType:requestType:isPrimaryRequest:requestFormat:adProductType:serveItemId:adServeTimestamp:adId:requestKey:]
// Type encoding: @152@0:8@16@24@32q40@48@56B64q68@76@84Q92B100q104Q112@120d128@136@144
// Implementation: 0x108488bb4

// -[SCAdNetworkRequest initWithUrl:retryUrl:userAgent:adRequestType:overrideHeaders:body:serialize:retroType:snapAdsId:adType:requestType:isPrimaryRequest:requestFormat:adProductType:serveItemId:adServeTimestamp:adId:requestKey:trackSeqNum:trackIsSwiped:]
// Type encoding: @164@0:8@16@24@32q40@48@56B64q68@76@84Q92B100q104Q112@120d128@136@144q152B160
// Implementation: 0x108488c04

// -[SCAdNetworkRequest getUrl]
// Type encoding: @16@0:8
// Implementation: 0x108488f2c

// -[SCAdNetworkRequest getRetryUrl]
// Type encoding: @16@0:8
// Implementation: 0x108488f54

// -[SCAdNetworkRequest getUserAgent]
// Type encoding: @16@0:8
// Implementation: 0x108488f7c

// -[SCAdNetworkRequest getType]
// Type encoding: q16@0:8
// Implementation: 0x108488fa4

// -[SCAdNetworkRequest getBody]
// Type encoding: @16@0:8
// Implementation: 0x108488fac

// -[SCAdNetworkRequest shouldSerializeRequest]
// Type encoding: B16@0:8
// Implementation: 0x108488fd4

// -[SCAdNetworkRequest getOverrideHeaders]
// Type encoding: @16@0:8
// Implementation: 0x108488fdc

// -[SCAdNetworkRequest updateUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x108489004

// -[SCAdNetworkRequest updateBody:]
// Type encoding: v24@0:8@16
// Implementation: 0x108489034

// -[SCAdNetworkRequest updateRetroType:]
// Type encoding: v24@0:8q16
// Implementation: 0x108489064

// -[SCAdNetworkRequest snapAdsId]
// Type encoding: @16@0:8
// Implementation: 0x10848906c

// -[SCAdNetworkRequest adType]
// Type encoding: @16@0:8
// Implementation: 0x108489074

// -[SCAdNetworkRequest requestType]
// Type encoding: Q16@0:8
// Implementation: 0x10848907c

// -[SCAdNetworkRequest requestKey]
// Type encoding: @16@0:8
// Implementation: 0x108489084

// -[SCAdNetworkRequest isPrimaryRequest]
// Type encoding: B16@0:8
// Implementation: 0x10848908c

// -[SCAdNetworkRequest format]
// Type encoding: q16@0:8
// Implementation: 0x108489094

// -[SCAdNetworkRequest adProductType]
// Type encoding: Q16@0:8
// Implementation: 0x10848909c

// -[SCAdNetworkRequest serveItemId]
// Type encoding: @16@0:8
// Implementation: 0x1084890a4

// -[SCAdNetworkRequest adServeTimestamp]
// Type encoding: d16@0:8
// Implementation: 0x1084890ac

// -[SCAdNetworkRequest adId]
// Type encoding: @16@0:8
// Implementation: 0x1084890b4

// -[SCAdNetworkRequest trackSeqNum]
// Type encoding: q16@0:8
// Implementation: 0x1084890bc

// -[SCAdNetworkRequest trackIsSwiped]
// Type encoding: B16@0:8
// Implementation: 0x1084890c4

// -[SCAdNetworkRequest url]
// Type encoding: @16@0:8
// Implementation: 0x1084890cc

// -[SCAdNetworkRequest retryUrl]
// Type encoding: @16@0:8
// Implementation: 0x1084890d4

// -[SCAdNetworkRequest userAgent]
// Type encoding: @16@0:8
// Implementation: 0x1084890dc

// -[SCAdNetworkRequest overrideHeaders]
// Type encoding: @16@0:8
// Implementation: 0x1084890e4

// -[SCAdNetworkRequest type]
// Type encoding: q16@0:8
// Implementation: 0x1084890ec

// -[SCAdNetworkRequest body]
// Type encoding: @16@0:8
// Implementation: 0x1084890f4

// -[SCAdNetworkRequest serialize]
// Type encoding: B16@0:8
// Implementation: 0x1084890fc

// -[SCAdNetworkRequest retroType]
// Type encoding: q16@0:8
// Implementation: 0x108489104

// -[SCAdNetworkRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10848910c

@end
