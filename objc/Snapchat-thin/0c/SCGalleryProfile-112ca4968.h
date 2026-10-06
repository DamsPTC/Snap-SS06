// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryProfile
// Superclass: NSObject
// Address: 0x112ca4968

@interface SCGalleryProfile

// Property: objectID; attributes: T@"NSString",R,C,N,V_objectID
// Property: inferredUserGender; attributes: Ti,R,N,V_inferredUserGender
// Property: lastBackupNotificationTime; attributes: T@"NSDate",R,C,N,V_lastBackupNotificationTime
// Property: lastFeaturedStorySyncTime; attributes: T@"NSDate",R,C,N,V_lastFeaturedStorySyncTime
// Property: lastFullSyncTime; attributes: T@"NSDate",R,C,N,V_lastFullSyncTime
// Property: snapTotalQuota; attributes: Ti,R,N,V_snapTotalQuota
// Property: syncState; attributes: T@"SCMemoriesSyncState",R,C,N,V_syncState
// Property: syncToken; attributes: T@"NSString",R,C,N,V_syncToken
// Property: userId; attributes: T@"NSString",R,C,N,V_userId
// Property: version; attributes: Tq,R,N,V_version
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGalleryProfile initWithObjectID:inferredUserGender:lastBackupNotificationTime:lastFeaturedStorySyncTime:lastFullSyncTime:snapTotalQuota:syncState:syncToken:userId:version:]
// Type encoding: @88@0:8@16i24@28@36@44i52@56@64@72q80
// Implementation: 0x10b6ee838

// -[SCGalleryProfile copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b6ee9f4

// -[SCGalleryProfile initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b6eea18

// -[SCGalleryProfile encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6eebcc

// -[SCGalleryProfile preferFasterCoding]
// Type encoding: B16@0:8
// Implementation: 0x10b6eeccc

// -[SCGalleryProfile encodeWithFasterCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6eecd4

// -[SCGalleryProfile decodeWithFasterDecoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6eed84

// -[SCGalleryProfile setObject:forUInt64Key:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b6eeec4

// -[SCGalleryProfile setSInt32:forUInt64Key:]
// Type encoding: v28@0:8i16Q20
// Implementation: 0x10b6ef01c

// -[SCGalleryProfile setSInt64:forUInt64Key:]
// Type encoding: v32@0:8q16Q24
// Implementation: 0x10b6ef060

// -[SCGalleryProfile isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b6ef0a0

// -[SCGalleryProfile hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b6ef148

// -[SCGalleryProfile description]
// Type encoding: @16@0:8
// Implementation: 0x10b6ef23c

// -[SCGalleryProfile objectID]
// Type encoding: @16@0:8
// Implementation: 0x10b6ef4f4

// -[SCGalleryProfile inferredUserGender]
// Type encoding: i16@0:8
// Implementation: 0x10b6ef4fc

// -[SCGalleryProfile lastBackupNotificationTime]
// Type encoding: @16@0:8
// Implementation: 0x10b6ef504

// -[SCGalleryProfile lastFeaturedStorySyncTime]
// Type encoding: @16@0:8
// Implementation: 0x10b6ef50c

// -[SCGalleryProfile lastFullSyncTime]
// Type encoding: @16@0:8
// Implementation: 0x10b6ef514

// -[SCGalleryProfile snapTotalQuota]
// Type encoding: i16@0:8
// Implementation: 0x10b6ef51c

// -[SCGalleryProfile syncState]
// Type encoding: @16@0:8
// Implementation: 0x10b6ef524

// -[SCGalleryProfile syncToken]
// Type encoding: @16@0:8
// Implementation: 0x10b6ef52c

// -[SCGalleryProfile userId]
// Type encoding: @16@0:8
// Implementation: 0x10b6ef534

// -[SCGalleryProfile version]
// Type encoding: q16@0:8
// Implementation: 0x10b6ef53c

// -[SCGalleryProfile .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b6ef544

// +[SCGalleryProfile observe:dataObjectContext:queue:changeHandler:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x10b6e2a8c

// +[SCGalleryProfile allKeys]
// Type encoding: @16@0:8
// Implementation: 0x10b6e2b3c

// +[SCGalleryProfile galleryProfileWithInferredUserGender:lastBackupNotificationTime:lastFeaturedStorySyncTime:lastFullSyncTime:snapTotalQuota:syncState:syncToken:userId:version:]
// Type encoding: @80@0:8i16@20@28@36i44@48@56@64q72
// Implementation: 0x10b6d88fc

// +[SCGalleryProfile fetchGalleryProfilesWithOptions:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b6c12ec

// +[SCGalleryProfile countOfGalleryProfilesWithOptions:dataObjectContext:]
// Type encoding: Q32@0:8@16@24
// Implementation: 0x10b6c180c

// +[SCGalleryProfile fetchGalleryProfileForDeletedEntry:options:dataObjectContext:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10b6c1afc

// +[SCGalleryProfile fetchGalleryProfileForDeletedSnap:options:dataObjectContext:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10b6c212c

// +[SCGalleryProfile fetchGalleryProfileForEntry:options:dataObjectContext:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10b6c275c

// +[SCGalleryProfile fetchGalleryProfileForFailedEntry:options:dataObjectContext:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10b6c2d8c

// +[SCGalleryProfile fetchGalleryProfileForOperation:options:dataObjectContext:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10b6c33bc

// +[SCGalleryProfile fetchGalleryProfileForQuotaStatus:options:dataObjectContext:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10b6c39ec

// +[SCGalleryProfile fetchGalleryProfileForSnap:options:dataObjectContext:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10b6c401c

// +[SCGalleryProfile fetchGalleryProfileForUserDefault:options:dataObjectContext:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10b6c464c

// +[SCGalleryProfile fetchGalleryProfileWithUserId:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b6b3630

// +[SCGalleryProfile parseManagedObject:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b6ade30

// +[SCGalleryProfile fasterCodingVersion]
// Type encoding: Q16@0:8
// Implementation: 0x10b6ef080

// +[SCGalleryProfile fasterCodingKeys]
// Type encoding: ^Q16@0:8
// Implementation: 0x10b6ef094

@end
