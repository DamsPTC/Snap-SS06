// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerMediaCameraRollLibrary
// Superclass: NSObject
// Address: 0x112b39f38

@interface SCComposerMediaCameraRollLibrary

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerMediaCameraRollLibrary initWithImageFactory:videoFactory:photoPermissionCoordinator:config:fetchLimit:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x106dbe370

// -[SCComposerMediaCameraRollLibrary getAuthorizationHandler]
// Type encoding: @16@0:8
// Implementation: 0x106dbe4c0

// -[SCComposerMediaCameraRollLibrary getImageItemsWithOptions:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106dbe4e8

// -[SCComposerMediaCameraRollLibrary getVideoItemsWithOptions:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106dbec1c

// -[SCComposerMediaCameraRollLibrary getThumbnailUrlsForItemsWithItemIds:preferredWidth:preferredHeight:callback:]
// Type encoding: v48@0:8@16d24d32@?40
// Implementation: 0x106dbedd0

// -[SCComposerMediaCameraRollLibrary getImageForItemWithItemId:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106dbf050

// -[SCComposerMediaCameraRollLibrary _getImageForItemWithItemId:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106dbf19c

// -[SCComposerMediaCameraRollLibrary getVideoForItemWithItemId:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106dbf410

// -[SCComposerMediaCameraRollLibrary _getVideoForItemWithItemId:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106dbf55c

// -[SCComposerMediaCameraRollLibrary getItemUriWithItemId:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106dbf76c

// -[SCComposerMediaCameraRollLibrary _getItemUriWithItemId:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106dbf8b8

// -[SCComposerMediaCameraRollLibrary pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x106dbf960

// -[SCComposerMediaCameraRollLibrary .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106dbf96c

@end
