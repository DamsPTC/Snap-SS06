// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSABaseComponent
// Superclass: NSObject
// Address: 0x112bf8a78

@interface LSABaseComponent

// Property: performerMigrationEnabled; attributes: TB,N,V_performerMigrationEnabled
// Property: performer; attributes: T@"<LSAQueuePerforming>",R,W,N,V_performer
// Property: announcerQueuePerformer; attributes: T@"<LSAQueuePerforming>",R,W,N,V_announcerQueuePerformer
// Property: announcer; attributes: T@"LSAComponentListenerAnnouncer",R,W,N,V_announcer
// Property: coreManager; attributes: T{weak_ptr<LS::CoreManager>=^{CoreManager}^{__shared_weak_count}},R,N,V_coreManager

// -[LSABaseComponent init]
// Type encoding: @16@0:8
// Implementation: 0x10ad8d1f4

// -[LSABaseComponent initWithPerformer:announcerQueuePerformer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10ad8d250

// -[LSABaseComponent setCoreManager:announcer:configuration:]
// Type encoding: v48@0:8{shared_ptr<LS::CoreManager>=^{CoreManager}^{__shared_weak_count}}16@32@40
// Implementation: 0x10ad8d304

// -[LSABaseComponent executeWithTrackingManagerBlock:synchronously:]
// Type encoding: v28@0:8@?16B24
// Implementation: 0x10ad8d378

// -[LSABaseComponent clearResources]
// Type encoding: v16@0:8
// Implementation: 0x10ad8d950

// -[LSABaseComponent performerMigrationEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10ad8d954

// -[LSABaseComponent setPerformerMigrationEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10ad8d95c

// -[LSABaseComponent performer]
// Type encoding: @16@0:8
// Implementation: 0x10ad8d964

// -[LSABaseComponent announcerQueuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x10ad8d97c

// -[LSABaseComponent announcer]
// Type encoding: @16@0:8
// Implementation: 0x10ad8d994

// -[LSABaseComponent coreManager]
// Type encoding: {weak_ptr<LS::CoreManager>=^{CoreManager}^{__shared_weak_count}}16@0:8
// Implementation: 0x10ad8d9ac

// -[LSABaseComponent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10ad8d9d4

// -[LSABaseComponent .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10ad8da1c

@end
