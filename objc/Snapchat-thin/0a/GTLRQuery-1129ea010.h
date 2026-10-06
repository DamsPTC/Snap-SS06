// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GTLRQuery
// Superclass: NSObject
// Address: 0x1129ea010

@interface GTLRQuery

// Property: bodyObject; attributes: T@"GTLRObject",&,V_bodyObject
// Property: requestID; attributes: T@"NSString",C,V_requestID
// Property: uploadParameters; attributes: T@"GTLRUploadParameters",C,V_uploadParameters
// Property: additionalURLQueryParameters; attributes: T@"NSDictionary",C,V_additionalURLQueryParameters
// Property: additionalHTTPHeaders; attributes: T@"NSDictionary",C,V_additionalHTTPHeaders
// Property: downloadAsDataObjectType; attributes: T@"NSString",C,V_downloadAsDataObjectType
// Property: useMediaDownloadService; attributes: TB,V_useMediaDownloadService
// Property: shouldSkipAuthorization; attributes: TB,V_shouldSkipAuthorization
// Property: completionBlock; attributes: T@?,C,V_completionBlock
// Property: loggingName; attributes: T@"NSString",C,V_loggingName
// Property: pathURITemplate; attributes: T@"NSString",R,V_pathURITemplate
// Property: httpMethod; attributes: T@"NSString",R,V_httpMethod
// Property: pathParameterNames; attributes: T@"NSArray",R,V_pathParameterNames
// Property: JSON; attributes: T@"NSMutableDictionary",&,N,V_json
// Property: resumableUploadPathURITemplateOverride; attributes: T@"NSString",C,V_resumableUploadPathURITemplateOverride
// Property: simpleUploadPathURITemplateOverride; attributes: T@"NSString",C,V_simpleUploadPathURITemplateOverride
// Property: expectedObjectClass; attributes: T#,V_expectedObjectClass
// Property: queryInvalid; attributes: TB,GisQueryInvalid,V_queryInvalid
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: executionParameters; attributes: T@"GTLRServiceExecutionParameters",&

// -[GTLRQuery initWithPathURITemplate:HTTPMethod:pathParameterNames:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104a0f4c4

// -[GTLRQuery copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x104a0f5e0

// -[GTLRQuery isBatchQuery]
// Type encoding: B16@0:8
// Implementation: 0x104a0f8d4

// -[GTLRQuery invalidateQuery]
// Type encoding: v16@0:8
// Implementation: 0x104a0f8dc

// -[GTLRQuery executionParameters]
// Type encoding: @16@0:8
// Implementation: 0x104a0f914

// -[GTLRQuery setExecutionParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a0f994

// -[GTLRQuery hasExecutionParameters]
// Type encoding: B16@0:8
// Implementation: 0x104a0f9e4

// -[GTLRQuery setJSONValue:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104a0fab8

// -[GTLRQuery JSONValueForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a0fb60

// -[GTLRQuery setCacheChild:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104a0fbcc

// -[GTLRQuery cacheChildForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a0fc90

// -[GTLRQuery objectClassResolver]
// Type encoding: @16@0:8
// Implementation: 0x104a0fdd0

// -[GTLRQuery additionalURLQueryParameters]
// Type encoding: @16@0:8
// Implementation: 0x104a0fe48

// -[GTLRQuery setAdditionalURLQueryParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a0fe54

// -[GTLRQuery additionalHTTPHeaders]
// Type encoding: @16@0:8
// Implementation: 0x104a0fe5c

// -[GTLRQuery setAdditionalHTTPHeaders:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a0fe68

// -[GTLRQuery bodyObject]
// Type encoding: @16@0:8
// Implementation: 0x104a0fe70

// -[GTLRQuery setBodyObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a0fe7c

// -[GTLRQuery completionBlock]
// Type encoding: @?16@0:8
// Implementation: 0x104a0fe84

// -[GTLRQuery setCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104a0fe90

// -[GTLRQuery downloadAsDataObjectType]
// Type encoding: @16@0:8
// Implementation: 0x104a0fe98

// -[GTLRQuery setDownloadAsDataObjectType:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a0fea4

// -[GTLRQuery expectedObjectClass]
// Type encoding: #16@0:8
// Implementation: 0x104a0feac

// -[GTLRQuery setExpectedObjectClass:]
// Type encoding: v24@0:8#16
// Implementation: 0x104a0feb4

// -[GTLRQuery httpMethod]
// Type encoding: @16@0:8
// Implementation: 0x104a0febc

// -[GTLRQuery JSON]
// Type encoding: @16@0:8
// Implementation: 0x104a0fec8

// -[GTLRQuery setJSON:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a0fed0

// -[GTLRQuery loggingName]
// Type encoding: @16@0:8
// Implementation: 0x104a0fedc

// -[GTLRQuery setLoggingName:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a0fee8

// -[GTLRQuery pathParameterNames]
// Type encoding: @16@0:8
// Implementation: 0x104a0fef0

// -[GTLRQuery pathURITemplate]
// Type encoding: @16@0:8
// Implementation: 0x104a0fefc

// -[GTLRQuery isQueryInvalid]
// Type encoding: B16@0:8
// Implementation: 0x104a0ff08

// -[GTLRQuery setQueryInvalid:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a0ff14

// -[GTLRQuery requestID]
// Type encoding: @16@0:8
// Implementation: 0x104a0ff1c

// -[GTLRQuery setRequestID:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a0ff28

// -[GTLRQuery resumableUploadPathURITemplateOverride]
// Type encoding: @16@0:8
// Implementation: 0x104a0ff30

// -[GTLRQuery setResumableUploadPathURITemplateOverride:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a0ff3c

// -[GTLRQuery shouldSkipAuthorization]
// Type encoding: B16@0:8
// Implementation: 0x104a0ff44

// -[GTLRQuery setShouldSkipAuthorization:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a0ff50

// -[GTLRQuery simpleUploadPathURITemplateOverride]
// Type encoding: @16@0:8
// Implementation: 0x104a0ff58

// -[GTLRQuery setSimpleUploadPathURITemplateOverride:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a0ff64

// -[GTLRQuery uploadParameters]
// Type encoding: @16@0:8
// Implementation: 0x104a0ff6c

// -[GTLRQuery setUploadParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a0ff78

// -[GTLRQuery useMediaDownloadService]
// Type encoding: B16@0:8
// Implementation: 0x104a0ff80

// -[GTLRQuery setUseMediaDownloadService:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a0ff8c

// -[GTLRQuery .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104a0ff94

// +[GTLRQuery nextRequestID]
// Type encoding: @16@0:8
// Implementation: 0x104a0fa20

// +[GTLRQuery parameterNameMap]
// Type encoding: @16@0:8
// Implementation: 0x104a0fc98

// +[GTLRQuery arrayPropertyToClassMap]
// Type encoding: @16@0:8
// Implementation: 0x104a0fca0

// +[GTLRQuery initialize]
// Type encoding: v16@0:8
// Implementation: 0x104a0fca8

// +[GTLRQuery propertyToJSONKeyMapForClass:]
// Type encoding: @24@0:8#16
// Implementation: 0x104a0fd20

// +[GTLRQuery arrayPropertyToClassMapForClass:]
// Type encoding: @24@0:8#16
// Implementation: 0x104a0fd78

// +[GTLRQuery ancestorClass]
// Type encoding: #16@0:8
// Implementation: 0x104a0fdd8

// +[GTLRQuery resolveInstanceMethod:]
// Type encoding: B24@0:8:16
// Implementation: 0x104a0fde4

@end
