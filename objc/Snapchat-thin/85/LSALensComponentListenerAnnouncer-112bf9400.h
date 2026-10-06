// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSALensComponentListenerAnnouncer
// Superclass: NSObject
// Address: 0x112bf9400

@interface LSALensComponentListenerAnnouncer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[LSALensComponentListenerAnnouncer description]
// Type encoding: @16@0:8
// Implementation: 0x10ada90c8

// -[LSALensComponentListenerAnnouncer addListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x10ada92a4

// -[LSALensComponentListenerAnnouncer removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ada96e8

// -[LSALensComponentListenerAnnouncer hasAnyListeners]
// Type encoding: B16@0:8
// Implementation: 0x10ada9918

// -[LSALensComponentListenerAnnouncer lensComponent:willTurnOnLensWithId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10ada9964

// -[LSALensComponentListenerAnnouncer lensComponent:didTurnOnLensWithId:features:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x10ada9a8c

// -[LSALensComponentListenerAnnouncer lensComponent:willTurnOffLensWithId:features:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x10ada9bc4

// -[LSALensComponentListenerAnnouncer lensComponent:didTurnOffLensWithId:features:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x10ada9cfc

// -[LSALensComponentListenerAnnouncer lensComponent:didLoadResourcesForLensId:applyDelay:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x10ada9e34

// -[LSALensComponentListenerAnnouncer lensComponent:firstFrameDidBecomeReadyWithLensId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10ada9f6c

// -[LSALensComponentListenerAnnouncer lensComponent:lensId:showHintWithId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10adaa094

// -[LSALensComponentListenerAnnouncer lensComponent:hideAllHintsForLensWithId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10adaa1e4

// -[LSALensComponentListenerAnnouncer lensComponent:lensId:performHapticFeedback:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x10adaa30c

// -[LSALensComponentListenerAnnouncer lensComponent:lensId:performInterfaceAction:interfaceElement:interfaceData:]
// Type encoding: v56@0:8@16@24Q32Q40@48
// Implementation: 0x10adaa444

// -[LSALensComponentListenerAnnouncer lensComponent:lensId:setScreenDimmingEnabled:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10adaa5ac

// -[LSALensComponentListenerAnnouncer lensComponent:loadPersistentStoreForLensWithId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10adaa6e4

// -[LSALensComponentListenerAnnouncer lensComponent:lensId:savePersistentStore:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10adaa80c

// -[LSALensComponentListenerAnnouncer lensComponent:didInstantiatedLensWithId:isFromCache:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10adaa95c

// -[LSALensComponentListenerAnnouncer lensComponentDidStartPlayingAudio:]
// Type encoding: v24@0:8@16
// Implementation: 0x10adaaa94

// -[LSALensComponentListenerAnnouncer lensComponentDidStopPlayingAudio:]
// Type encoding: v24@0:8@16
// Implementation: 0x10adaab9c

// -[LSALensComponentListenerAnnouncer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10adaaca4

// -[LSALensComponentListenerAnnouncer .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10adaaccc

@end
