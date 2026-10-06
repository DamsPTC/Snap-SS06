// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKGraphRequestBody
// Superclass: NSObject
// Address: 0x1129e66f8

@interface FBSDKGraphRequestBody

// Property: data; attributes: T@"NSMutableData",&,N,V_data
// Property: json; attributes: T@"NSMutableDictionary",&,N,V_json
// Property: stringBoundary; attributes: T@"NSString",&,N,V_stringBoundary
// Property: requiresMultipartDataFormat; attributes: TB,N,V_requiresMultipartDataFormat

// -[FBSDKGraphRequestBody init]
// Type encoding: @16@0:8
// Implementation: 0x104962afc

// -[FBSDKGraphRequestBody mimeContentType]
// Type encoding: @16@0:8
// Implementation: 0x104962ba8

// -[FBSDKGraphRequestBody appendUTF8:]
// Type encoding: v24@0:8@16
// Implementation: 0x104962c04

// -[FBSDKGraphRequestBody appendWithKey:formValue:logger:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104962cd8

// -[FBSDKGraphRequestBody appendWithKey:imageValue:logger:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104962de8

// -[FBSDKGraphRequestBody appendWithKey:dataValue:logger:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104962f3c

// -[FBSDKGraphRequestBody appendWithKey:dataAttachmentValue:logger:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10496303c

// -[FBSDKGraphRequestBody data]
// Type encoding: @16@0:8
// Implementation: 0x1049631dc

// -[FBSDKGraphRequestBody _appendWithKey:filename:contentType:contentBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x104963274

// -[FBSDKGraphRequestBody compressedData]
// Type encoding: @16@0:8
// Implementation: 0x1049634b0

// -[FBSDKGraphRequestBody setData:]
// Type encoding: v24@0:8@16
// Implementation: 0x104963574

// -[FBSDKGraphRequestBody requiresMultipartDataFormat]
// Type encoding: B16@0:8
// Implementation: 0x104963580

// -[FBSDKGraphRequestBody setRequiresMultipartDataFormat:]
// Type encoding: v20@0:8B16
// Implementation: 0x104963588

// -[FBSDKGraphRequestBody json]
// Type encoding: @16@0:8
// Implementation: 0x104963590

// -[FBSDKGraphRequestBody setJson:]
// Type encoding: v24@0:8@16
// Implementation: 0x104963598

// -[FBSDKGraphRequestBody stringBoundary]
// Type encoding: @16@0:8
// Implementation: 0x1049635a4

// -[FBSDKGraphRequestBody setStringBoundary:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049635ac

// -[FBSDKGraphRequestBody .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1049635b8

@end
