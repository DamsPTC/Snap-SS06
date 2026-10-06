// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerSUPStore
// Superclass: NSObject
// Address: 0x112b696e8

@interface SCComposerSUPStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerSUPStore initWithFeatureSettingsService:]
// Type encoding: @24@0:8@16
// Implementation: 0x1079fcf8c

// -[SCComposerSUPStore getBoolAsyncForWithConfigKey:defaultValue:completion:]
// Type encoding: v36@0:8d16B24@?28
// Implementation: 0x1079fd058

// -[SCComposerSUPStore setBoolConfirmedForWithConfigKey:newValue:completion:]
// Type encoding: v36@0:8d16B24@?28
// Implementation: 0x1079fd1f8

// -[SCComposerSUPStore setBoolSpeculativeForWithConfigKey:newValue:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x1079fd3f8

// -[SCComposerSUPStore observeBoolWithConfigKey:defaultValue:]
// Type encoding: @28@0:8d16B24
// Implementation: 0x1079fd44c

// -[SCComposerSUPStore getIntAsyncForWithConfigKey:defaultValue:completion:]
// Type encoding: v40@0:8d16d24@?32
// Implementation: 0x1079fd850

// -[SCComposerSUPStore setIntConfirmedForWithConfigKey:newValue:completion:]
// Type encoding: v40@0:8d16d24@?32
// Implementation: 0x1079fd9e8

// -[SCComposerSUPStore setIntSpeculativeForWithConfigKey:newValue:]
// Type encoding: v32@0:8d16d24
// Implementation: 0x1079fdbec

// -[SCComposerSUPStore observeIntWithConfigKey:defaultValue:]
// Type encoding: @32@0:8d16d24
// Implementation: 0x1079fdc44

// -[SCComposerSUPStore getStringAsyncForWithConfigKey:defaultValue:completion:]
// Type encoding: v40@0:8d16@24@?32
// Implementation: 0x1079fe048

// -[SCComposerSUPStore setStringConfirmedForWithConfigKey:newValue:completion:]
// Type encoding: v40@0:8d16@24@?32
// Implementation: 0x1079fe1fc

// -[SCComposerSUPStore setStringSpeculativeForWithConfigKey:newValue:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x1079fe3e8

// -[SCComposerSUPStore observeStringWithConfigKey:defaultValue:]
// Type encoding: @32@0:8d16@24
// Implementation: 0x1079fe3f8

// -[SCComposerSUPStore pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x1079fe80c

// -[SCComposerSUPStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1079fe818

@end
