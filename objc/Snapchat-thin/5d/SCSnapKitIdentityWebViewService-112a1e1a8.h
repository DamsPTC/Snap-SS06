// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapKitIdentityWebViewService
// Superclass: NSObject
// Address: 0x112a1e1a8

@interface SCSnapKitIdentityWebViewService


// -[SCSnapKitIdentityWebViewService initWithUserNetworkServices:appStateController:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105182100

// -[SCSnapKitIdentityWebViewService hasAuthorizedIdentityWebViewForAppId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1051821a4

// -[SCSnapKitIdentityWebViewService updateAuthorizedIdentityWebViewForAppId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1051821ac

// -[SCSnapKitIdentityWebViewService fetchIdentityWebBrowserHeadersForAppId:didPresentAuthModal:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x105182250

// -[SCSnapKitIdentityWebViewService fetchConsentForAppId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105182468

// -[SCSnapKitIdentityWebViewService _createHeadersFetchRequestWithAppId:didPresentAuthModal:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x105182678

// -[SCSnapKitIdentityWebViewService _identityHeadersFetchRequestCompleted:data:error:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1051827f4

// -[SCSnapKitIdentityWebViewService _createConsentFetchRequestForAppId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1051829fc

// -[SCSnapKitIdentityWebViewService _consentFetchRequestCompleted:data:error:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105182bc8

// -[SCSnapKitIdentityWebViewService _constructHeaders]
// Type encoding: @16@0:8
// Implementation: 0x105182d24

// -[SCSnapKitIdentityWebViewService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105182dd4

@end
