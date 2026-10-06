// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSASnapMLModel
// Superclass: NSObject
// Address: 0x112bf9b08

@interface LSASnapMLModel

// Property: model; attributes: T@"MLModel",&,N,V_model
// Property: runSynchronizer; attributes: T@?,C,N,V_runSynchronizer

// -[LSASnapMLModel initWithCoreMLModel:runSynchronizer:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x10adb630c

// -[LSASnapMLModel predictionFromFeatures:error:]
// Type encoding: @32@0:8@16^@24
// Implementation: 0x10adb6fd0

// -[LSASnapMLModel predictionFromFeatures:options:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x10adb7248

// -[LSASnapMLModel model]
// Type encoding: @16@0:8
// Implementation: 0x10adb74e8

// -[LSASnapMLModel setModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x10adb74f0

// -[LSASnapMLModel runSynchronizer]
// Type encoding: @?16@0:8
// Implementation: 0x10adb7520

// -[LSASnapMLModel setRunSynchronizer:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10adb7528

// -[LSASnapMLModel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10adb7530

// +[LSASnapMLModel setErrorWithCode:description:error:]
// Type encoding: v40@0:8q16@24^@32
// Implementation: 0x10adb61a8

// +[LSASnapMLModel convertToComputeUnits:]
// Type encoding: C24@0:8q16
// Implementation: 0x10adb62ec

// +[LSASnapMLModel loadFrom:cacheDirectory:inferenceMode:error:]
// Type encoding: @48@0:8@16@24q32^@40
// Implementation: 0x10adb63d0

// +[LSASnapMLModel prefetchFrom:cacheDirectory:inferenceMode:error:]
// Type encoding: v48@0:8@16@24q32^@40
// Implementation: 0x10adb6af8

@end
