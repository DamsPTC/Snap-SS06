// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryQuotaStatus
// Superclass: NSObject
// Address: 0x112ca49b8

@interface SCGalleryQuotaStatus

// Property: objectID; attributes: T@"NSString",R,C,N,V_objectID
// Property: lastWarningPercentage; attributes: Ti,R,N,V_lastWarningPercentage
// Property: numOfNoticesLeftForSuccessfulSave; attributes: Ti,R,N,V_numOfNoticesLeftForSuccessfulSave
// Property: numOfSuccessSavesAfterFullGallery; attributes: Ti,R,N,V_numOfSuccessSavesAfterFullGallery
// Property: numOfWarningsForFullGallery; attributes: Ti,R,N,V_numOfWarningsForFullGallery
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGalleryQuotaStatus initWithObjectID:lastWarningPercentage:numOfNoticesLeftForSuccessfulSave:numOfSuccessSavesAfterFullGallery:numOfWarningsForFullGallery:]
// Type encoding: @40@0:8@16i24i28i32i36
// Implementation: 0x10b6ef5b0

// -[SCGalleryQuotaStatus copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b6ef650

// -[SCGalleryQuotaStatus initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b6ef674

// -[SCGalleryQuotaStatus encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6ef74c

// -[SCGalleryQuotaStatus preferFasterCoding]
// Type encoding: B16@0:8
// Implementation: 0x10b6ef7e8

// -[SCGalleryQuotaStatus encodeWithFasterCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6ef7f0

// -[SCGalleryQuotaStatus decodeWithFasterDecoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6ef864

// -[SCGalleryQuotaStatus setObject:forUInt64Key:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b6ef8e8

// -[SCGalleryQuotaStatus setSInt32:forUInt64Key:]
// Type encoding: v28@0:8i16Q20
// Implementation: 0x10b6ef94c

// -[SCGalleryQuotaStatus isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b6efa08

// -[SCGalleryQuotaStatus hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b6efac0

// -[SCGalleryQuotaStatus description]
// Type encoding: @16@0:8
// Implementation: 0x10b6efb68

// -[SCGalleryQuotaStatus objectID]
// Type encoding: @16@0:8
// Implementation: 0x10b6efd4c

// -[SCGalleryQuotaStatus lastWarningPercentage]
// Type encoding: i16@0:8
// Implementation: 0x10b6efd54

// -[SCGalleryQuotaStatus numOfNoticesLeftForSuccessfulSave]
// Type encoding: i16@0:8
// Implementation: 0x10b6efd5c

// -[SCGalleryQuotaStatus numOfSuccessSavesAfterFullGallery]
// Type encoding: i16@0:8
// Implementation: 0x10b6efd64

// -[SCGalleryQuotaStatus numOfWarningsForFullGallery]
// Type encoding: i16@0:8
// Implementation: 0x10b6efd6c

// -[SCGalleryQuotaStatus .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b6efd74

// +[SCGalleryQuotaStatus observe:dataObjectContext:queue:changeHandler:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x10b6e2c78

// +[SCGalleryQuotaStatus allKeys]
// Type encoding: @16@0:8
// Implementation: 0x10b6e2d28

// +[SCGalleryQuotaStatus galleryQuotaStatusWithLastWarningPercentage:numOfNoticesLeftForSuccessfulSave:numOfSuccessSavesAfterFullGallery:numOfWarningsForFullGallery:]
// Type encoding: @32@0:8i16i20i24i28
// Implementation: 0x10b6db770

// +[SCGalleryQuotaStatus fetchGalleryQuotaStatusesWithOptions:dataObjectContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b6c4c7c

// +[SCGalleryQuotaStatus countOfGalleryQuotaStatusesWithOptions:dataObjectContext:]
// Type encoding: Q32@0:8@16@24
// Implementation: 0x10b6c519c

// +[SCGalleryQuotaStatus fetchGalleryQuotaStatusForProfile:options:dataObjectContext:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10b6c548c

// +[SCGalleryQuotaStatus parseManagedObject:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b6adfe0

// +[SCGalleryQuotaStatus fasterCodingVersion]
// Type encoding: Q16@0:8
// Implementation: 0x10b6ef9e8

// +[SCGalleryQuotaStatus fasterCodingKeys]
// Type encoding: ^Q16@0:8
// Implementation: 0x10b6ef9fc

@end
