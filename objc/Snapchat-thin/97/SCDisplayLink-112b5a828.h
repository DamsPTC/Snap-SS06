// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDisplayLink
// Superclass: NSObject
// Address: 0x112b5a828

@interface SCDisplayLink

// Property: timestamp; attributes: Td,R,N
// Property: duration; attributes: Td,R,N
// Property: targetTimestamp; attributes: Td,R,N
// Property: paused; attributes: TB,N,GisPaused
// Property: preferredFramesPerSecond; attributes: Tq,N

// -[SCDisplayLink initWithTarget:selector:]
// Type encoding: @32@0:8@16:24
// Implementation: 0x10702cba8

// -[SCDisplayLink dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10702ccc8

// -[SCDisplayLink addToRunLoop:forMode:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10702cd28

// -[SCDisplayLink removeFromRunLoop:forMode:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10702cd30

// -[SCDisplayLink invalidate]
// Type encoding: v16@0:8
// Implementation: 0x10702cd38

// -[SCDisplayLink timestamp]
// Type encoding: d16@0:8
// Implementation: 0x10702cd40

// -[SCDisplayLink duration]
// Type encoding: d16@0:8
// Implementation: 0x10702cd48

// -[SCDisplayLink targetTimestamp]
// Type encoding: d16@0:8
// Implementation: 0x10702cd50

// -[SCDisplayLink isPaused]
// Type encoding: B16@0:8
// Implementation: 0x10702cd58

// -[SCDisplayLink setPaused:]
// Type encoding: v20@0:8B16
// Implementation: 0x10702cd60

// -[SCDisplayLink preferredFramesPerSecond]
// Type encoding: q16@0:8
// Implementation: 0x10702cd68

// -[SCDisplayLink setPreferredFramesPerSecond:]
// Type encoding: v24@0:8q16
// Implementation: 0x10702cd70

// -[SCDisplayLink .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10702cd78

// +[SCDisplayLink displayLinkWithTarget:selector:]
// Type encoding: @32@0:8@16:24
// Implementation: 0x10702cc70

@end
