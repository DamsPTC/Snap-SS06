// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPayoutsFetcherImpl
// Superclass: NSObject
// Address: 0x112ad97c8

@interface SCPayoutsFetcherImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPayoutsFetcherImpl initWithGrpcService:userId:didPassSecurityCheck:routeTag:configuration:]
// Type encoding: @52@0:8@16@24B32@36@44
// Implementation: 0x1062d5bec

// -[SCPayoutsFetcherImpl getCrystalsSummaryWithCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1062d5ed8

// -[SCPayoutsFetcherImpl startCashoutWithEarnings:timestamp:callback:valueCents:]
// Type encoding: v48@0:8d16d24@?32d40
// Implementation: 0x1062d6058

// -[SCPayoutsFetcherImpl getCrystalsActivityWithPayoutDate:cashoutDate:pageSize:callback:]
// Type encoding: v48@0:8@16@24d32@?40
// Implementation: 0x1062d611c

// -[SCPayoutsFetcherImpl _getCrystalsInfoFromSummary:]
// Type encoding: @24@0:8@16
// Implementation: 0x1062d62e4

// -[SCPayoutsFetcherImpl _getCrystalsActivity:]
// Type encoding: @24@0:8@16
// Implementation: 0x1062d65e4

// -[SCPayoutsFetcherImpl _getCrystalsSummaryDataWithHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1062d66f8

// -[SCPayoutsFetcherImpl _startCashOutWithEarnings:timestamp:valueCents:handler:]
// Type encoding: v48@0:8d16d24d32@?40
// Implementation: 0x1062d67e4

// -[SCPayoutsFetcherImpl _getActivityDataWithPayoutDate:cashoutDate:pageSize:handler:]
// Type encoding: v48@0:8@16@24d32@?40
// Implementation: 0x1062d6948

// -[SCPayoutsFetcherImpl pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x1062d6a88

// -[SCPayoutsFetcherImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1062d6a94

@end
