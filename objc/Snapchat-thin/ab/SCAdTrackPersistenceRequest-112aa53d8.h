// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdTrackPersistenceRequest
// Superclass: NSObject
// Address: 0x112aa53d8

@interface SCAdTrackPersistenceRequest

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: url; attributes: T@"NSString",R,C,N,V_url
// Property: userAgent; attributes: T@"NSString",R,C,N,V_userAgent
// Property: type; attributes: Tq,R,N,V_type
// Property: overrideHeaders; attributes: T@"NSDictionary",R,C,N,V_overrideHeaders
// Property: body; attributes: T@,R,C,N,V_body
// Property: key; attributes: T@"NSString",R,C,N,V_key
// Property: cookies; attributes: T@"NSDictionary",R,C,N,V_cookies
// Property: adIdentifier; attributes: T@"NSString",R,C,N,V_adIdentifier
// Property: adType; attributes: T@"NSString",R,C,N,V_adType
// Property: requestType; attributes: TQ,R,N,V_requestType
// Property: adProductType; attributes: TQ,R,N,V_adProductType
// Property: requestFormat; attributes: Tq,R,N,V_requestFormat
// Property: retroType; attributes: Tq,R,N,V_retroType
// Property: serveItemId; attributes: T@"NSString",R,C,N,V_serveItemId
// Property: adServeTimestamp; attributes: Td,R,N,V_adServeTimestamp
// Property: adId; attributes: T@"NSString",R,C,N,V_adId

// -[SCAdTrackPersistenceRequest toRetriableRequest:adConfigProviderV2:userAdIdProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105e7a294

// -[SCAdTrackPersistenceRequest initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x105e81820

// -[SCAdTrackPersistenceRequest initWithUrl:userAgent:type:overrideHeaders:body:key:cookies:adIdentifier:adType:requestType:adProductType:requestFormat:retroType:serveItemId:adServeTimestamp:adId:]
// Type encoding: @144@0:8@16@24q32@40@48@56@64@72@80Q88Q96q104q112@120d128@136
// Implementation: 0x105e81a88

// -[SCAdTrackPersistenceRequest copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x105e81cf0

// -[SCAdTrackPersistenceRequest encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e81d14

// -[SCAdTrackPersistenceRequest url]
// Type encoding: @16@0:8
// Implementation: 0x105e81e8c

// -[SCAdTrackPersistenceRequest userAgent]
// Type encoding: @16@0:8
// Implementation: 0x105e81e94

// -[SCAdTrackPersistenceRequest type]
// Type encoding: q16@0:8
// Implementation: 0x105e81e9c

// -[SCAdTrackPersistenceRequest overrideHeaders]
// Type encoding: @16@0:8
// Implementation: 0x105e81ea4

// -[SCAdTrackPersistenceRequest body]
// Type encoding: @16@0:8
// Implementation: 0x105e81eac

// -[SCAdTrackPersistenceRequest key]
// Type encoding: @16@0:8
// Implementation: 0x105e81eb4

// -[SCAdTrackPersistenceRequest cookies]
// Type encoding: @16@0:8
// Implementation: 0x105e81ebc

// -[SCAdTrackPersistenceRequest adIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105e81ec4

// -[SCAdTrackPersistenceRequest adType]
// Type encoding: @16@0:8
// Implementation: 0x105e81ecc

// -[SCAdTrackPersistenceRequest requestType]
// Type encoding: Q16@0:8
// Implementation: 0x105e81ed4

// -[SCAdTrackPersistenceRequest adProductType]
// Type encoding: Q16@0:8
// Implementation: 0x105e81edc

// -[SCAdTrackPersistenceRequest requestFormat]
// Type encoding: q16@0:8
// Implementation: 0x105e81ee4

// -[SCAdTrackPersistenceRequest retroType]
// Type encoding: q16@0:8
// Implementation: 0x105e81eec

// -[SCAdTrackPersistenceRequest serveItemId]
// Type encoding: @16@0:8
// Implementation: 0x105e81ef4

// -[SCAdTrackPersistenceRequest adServeTimestamp]
// Type encoding: d16@0:8
// Implementation: 0x105e81efc

// -[SCAdTrackPersistenceRequest adId]
// Type encoding: @16@0:8
// Implementation: 0x105e81f04

// -[SCAdTrackPersistenceRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105e81f0c

@end
