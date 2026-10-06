// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNetworkInterfaceAddress
// Superclass: NSObject
// Address: 0x112c72dc8

@interface SCNetworkInterfaceAddress

// Property: name; attributes: T@"NSString",R,N,V_name
// Property: address; attributes: T^{sockaddr=CC[14c]},R,N,V_address

// -[SCNetworkInterfaceAddress initWithName:address:]
// Type encoding: @32@0:8*16r^{sockaddr=CC[14c]}24
// Implementation: 0x10b28f250

// -[SCNetworkInterfaceAddress dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10b28f30c

// -[SCNetworkInterfaceAddress isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b28f358

// -[SCNetworkInterfaceAddress isWifi]
// Type encoding: B16@0:8
// Implementation: 0x10b28f3c4

// -[SCNetworkInterfaceAddress isWwan]
// Type encoding: B16@0:8
// Implementation: 0x10b28f408

// -[SCNetworkInterfaceAddress isIPv6]
// Type encoding: B16@0:8
// Implementation: 0x10b28f44c

// -[SCNetworkInterfaceAddress hasRoutableAddress]
// Type encoding: B16@0:8
// Implementation: 0x10b28f460

// -[SCNetworkInterfaceAddress name]
// Type encoding: @16@0:8
// Implementation: 0x10b28f4bc

// -[SCNetworkInterfaceAddress address]
// Type encoding: ^{sockaddr=CC[14c]}16@0:8
// Implementation: 0x10b28f4c4

// -[SCNetworkInterfaceAddress .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b28f4cc

@end
