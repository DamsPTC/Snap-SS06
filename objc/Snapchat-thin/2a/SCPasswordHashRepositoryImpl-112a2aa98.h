// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPasswordHashRepositoryImpl
// Superclass: NSObject
// Address: 0x112a2aa98

@interface SCPasswordHashRepositoryImpl


// -[SCPasswordHashRepositoryImpl initWithPreferences:circumstanceEngine:graphene:blizzard:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105317ce4

// -[SCPasswordHashRepositoryImpl hashPasswordAndSave:password:source:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10531802c

// -[SCPasswordHashRepositoryImpl getPasswordHash:]
// Type encoding: @24@0:8@16
// Implementation: 0x1053181c0

// -[SCPasswordHashRepositoryImpl removePasswordHash:]
// Type encoding: v24@0:8@16
// Implementation: 0x105318274

// -[SCPasswordHashRepositoryImpl hashUpdatedObservableWithUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105318354

// -[SCPasswordHashRepositoryImpl _saveHash:userId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1053185e4

// -[SCPasswordHashRepositoryImpl _logSaveMetric:ASCII:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x1053186dc

// -[SCPasswordHashRepositoryImpl _logDeleteMetric]
// Type encoding: v16@0:8
// Implementation: 0x105318840

// -[SCPasswordHashRepositoryImpl _logLoadMetric:count:]
// Type encoding: v28@0:8B16Q20
// Implementation: 0x1053188d4

// -[SCPasswordHashRepositoryImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105318a50

@end
