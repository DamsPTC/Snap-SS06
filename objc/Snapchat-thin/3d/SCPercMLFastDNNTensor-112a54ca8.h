// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPercMLFastDNNTensor
// Superclass: NSObject
// Address: 0x112a54ca8

@interface SCPercMLFastDNNTensor

// Property: count; attributes: TQ,R,N,V_count
// Property: shape; attributes: T@"NSArray",R,N,V_shape
// Property: dataType; attributes: TQ,R,N,V_dataType
// Property: dataPtr; attributes: T^v,R,N,V_dataPtr

// -[SCPercMLFastDNNTensor initWithTensor:]
// Type encoding: @96@0:8{SCPercMLFastDNNBridgeTensor={Tensor=^^?{TensorShape=IIII}{TensorFormat=ii}{shared_ptr<unsigned char>=*^{__shared_weak_count}}{optional<std::vector<unsigned int>>=(?=c{vector<unsigned int, std::allocator<unsigned int>>=^I^I{?=^I}})B}}}16
// Implementation: 0x105675508

// -[SCPercMLFastDNNTensor objectAtIndexedSubscript:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105675630

// -[SCPercMLFastDNNTensor objectForKeyedSubscript:]
// Type encoding: @24@0:8@16
// Implementation: 0x105675668

// -[SCPercMLFastDNNTensor countByEnumeratingWithState:objects:count:]
// Type encoding: Q40@0:8^{?=Q^@^Q[5Q]}16^@24Q32
// Implementation: 0x105675860

// -[SCPercMLFastDNNTensor count]
// Type encoding: Q16@0:8
// Implementation: 0x105675964

// -[SCPercMLFastDNNTensor shape]
// Type encoding: @16@0:8
// Implementation: 0x10567596c

// -[SCPercMLFastDNNTensor dataType]
// Type encoding: Q16@0:8
// Implementation: 0x105675974

// -[SCPercMLFastDNNTensor dataPtr]
// Type encoding: ^v16@0:8
// Implementation: 0x10567597c

// -[SCPercMLFastDNNTensor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105675984

// -[SCPercMLFastDNNTensor .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x1056759c8

@end
