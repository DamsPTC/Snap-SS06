// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVoiceMLLensNotificationServicesImpl
// Superclass: NSObject
// Address: 0x112ac3a18

@interface SCVoiceMLLensNotificationServicesImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCVoiceMLLensNotificationServicesImpl initWithNotificationPool:lensFavoritesNotificationService:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1060828e0

// -[SCVoiceMLLensNotificationServicesImpl _submitSIGDestructiveNotificationWithText:]
// Type encoding: v24@0:8@16
// Implementation: 0x106082984

// -[SCVoiceMLLensNotificationServicesImpl _submitSIGNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060829cc

// -[SCVoiceMLLensNotificationServicesImpl presentFavoriteNotificatonForResult:imageFuture:actionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106082af8

// -[SCVoiceMLLensNotificationServicesImpl presentLensAlreadyFavoritedErrorNotificaton]
// Type encoding: v16@0:8
// Implementation: 0x106082b80

// -[SCVoiceMLLensNotificationServicesImpl presentCannotFavoriteUnpublishedLensErrorNotificaton]
// Type encoding: v16@0:8
// Implementation: 0x106082bbc

// -[SCVoiceMLLensNotificationServicesImpl presentCannotShareUnpublishedLensErrorNotificaton]
// Type encoding: v16@0:8
// Implementation: 0x106082bf8

// -[SCVoiceMLLensNotificationServicesImpl presentFTUENotificationWithImageFuture:title:description:accessibilityIdentifier:actionHandler:]
// Type encoding: @56@0:8@16@24@32@40@?48
// Implementation: 0x106082c34

// -[SCVoiceMLLensNotificationServicesImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106082c8c

@end
