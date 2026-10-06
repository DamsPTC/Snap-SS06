// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPaymentsPageLogger
// Superclass: NSObject
// Address: 0x1129faeb0

@interface SCPaymentsPageLogger

// Property: pageSequenceId; attributes: TQ,N,V_pageSequenceId
// Property: adAccountId; attributes: T@"NSString",&,N,V_adAccountId
// Property: pageName; attributes: Tq,N,V_pageName
// Property: previousPage; attributes: Tq,N,V_previousPage
// Property: nextPage; attributes: Tq,N,V_nextPage

// -[SCPaymentsPageLogger initWithSessionId:sourcePage:userBlizzardLogger:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104da1334

// -[SCPaymentsPageLogger paymentsSessionId]
// Type encoding: @16@0:8
// Implementation: 0x104da146c

// -[SCPaymentsPageLogger sourcePage]
// Type encoding: @16@0:8
// Implementation: 0x104da1494

// -[SCPaymentsPageLogger didBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x104da14bc

// -[SCPaymentsPageLogger willResignActive]
// Type encoding: v16@0:8
// Implementation: 0x104da14fc

// -[SCPaymentsPageLogger onPageChanged:withExitEvent:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x104da1508

// -[SCPaymentsPageLogger onPageEnter:]
// Type encoding: v24@0:8q16
// Implementation: 0x104da15c0

// -[SCPaymentsPageLogger trackPaymentsEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x104da1630

// -[SCPaymentsPageLogger pageSequenceId]
// Type encoding: Q16@0:8
// Implementation: 0x104da16b8

// -[SCPaymentsPageLogger setPageSequenceId:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104da16c0

// -[SCPaymentsPageLogger adAccountId]
// Type encoding: @16@0:8
// Implementation: 0x104da16c8

// -[SCPaymentsPageLogger setAdAccountId:]
// Type encoding: v24@0:8@16
// Implementation: 0x104da16d0

// -[SCPaymentsPageLogger pageName]
// Type encoding: q16@0:8
// Implementation: 0x104da1700

// -[SCPaymentsPageLogger setPageName:]
// Type encoding: v24@0:8q16
// Implementation: 0x104da1708

// -[SCPaymentsPageLogger previousPage]
// Type encoding: q16@0:8
// Implementation: 0x104da1710

// -[SCPaymentsPageLogger setPreviousPage:]
// Type encoding: v24@0:8q16
// Implementation: 0x104da1718

// -[SCPaymentsPageLogger nextPage]
// Type encoding: q16@0:8
// Implementation: 0x104da1720

// -[SCPaymentsPageLogger setNextPage:]
// Type encoding: v24@0:8q16
// Implementation: 0x104da1728

// -[SCPaymentsPageLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104da1730

@end
