// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNetworkInterfaceUtils
// Superclass: NSObject
// Address: 0x112c71540

@interface SCNetworkInterfaceUtils


// +[SCNetworkInterfaceUtils getIpAddressesOfRemoteHost:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b25e874

// +[SCNetworkInterfaceUtils stringFromAddress4:]
// Type encoding: @24@0:8^{sockaddr_in=CCS{in_addr=I}[8c]}16
// Implementation: 0x10b25e9cc

// +[SCNetworkInterfaceUtils stringFromAddress6:]
// Type encoding: @24@0:8^{sockaddr_in6=CCSI{in6_addr=(?=[16C][8S][4I])}I}16
// Implementation: 0x10b25ea44

@end
