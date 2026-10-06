// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: BTCardClient
// Superclass: NSObject
// Address: 0x112ac67b8

@interface BTCardClient

// Property: apiClient; attributes: T@"BTAPIClient",&,N,V_apiClient

// -[BTCardClient initWithAPIClient:]
// Type encoding: @24@0:8@16
// Implementation: 0x1060e8eec

// -[BTCardClient init]
// Type encoding: @16@0:8
// Implementation: 0x1060e8f80

// -[BTCardClient tokenizeCard:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1060e8f98

// -[BTCardClient tokenizeCard:options:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1060e9018

// -[BTCardClient clientAPIParametersForCard:options:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1060e9b5c

// -[BTCardClient isGraphQLEnabledForCardTokenization:]
// Type encoding: B24@0:8@16
// Implementation: 0x1060e9fe8

// -[BTCardClient isPayPalDataCollectorAvailable]
// Type encoding: B16@0:8
// Implementation: 0x1060ea0dc

// -[BTCardClient collectRiskData:configuration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1060ea12c

// -[BTCardClient getPPDataCollectorClass]
// Type encoding: #16@0:8
// Implementation: 0x1060ea518

// -[BTCardClient apiClient]
// Type encoding: @16@0:8
// Implementation: 0x1060ea564

// -[BTCardClient setApiClient:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060ea56c

// -[BTCardClient .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060ea59c

// +[BTCardClient load]
// Type encoding: v16@0:8
// Implementation: 0x10002a208

// +[BTCardClient validationErrorUserInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x1060e9938

// +[BTCardClient setPayPalDataCollectorClassString:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060ea0a0

// +[BTCardClient setPayPalDataCollectorClass:]
// Type encoding: v24@0:8#16
// Implementation: 0x1060ea0d0

@end
