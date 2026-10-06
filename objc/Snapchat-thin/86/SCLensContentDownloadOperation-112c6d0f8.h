// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensContentDownloadOperation
// Superclass: SCLensDownloadOperation
// Address: 0x112c6d0f8

@interface SCLensContentDownloadOperation

// Property: contentDataFetcher; attributes: T@"<SCLensContentDataFetching>",&,N,V_contentDataFetcher
// Property: contentValidator; attributes: T@"SCLensSecurity",&,N,V_contentValidator
// Property: lensPreferences; attributes: T@"<SCLensPreferences>",&,N,V_lensPreferences
// Property: lensDownloadLogger; attributes: T@"<SCLensDownloadLogger>",&,N,V_lensDownloadLogger
// Property: lensResourceDownloadLogger; attributes: T@"<SCLensResourceDownloadLogging>",&,N,V_lensResourceDownloadLogger
// Property: lensResourceResolver; attributes: T@"<SCLensResourceResolving>",&,N,V_lensResourceResolver
// Property: userInitiated; attributes: TB,N,V_userInitiated
// Property: fetchType; attributes: Tq,N,V_fetchType
// Property: progressSubject; attributes: T@"SCBehaviorSubject",&,N,V_progressSubject
// Property: migrationEnabled; attributes: TB,N,V_migrationEnabled

// -[SCLensContentDownloadOperation initWithLens:requestTiming:contentDataFetcher:contentValidator:lensPreferences:lensDownloadLogger:lensResourceDownloadLogger:lensResourceResolver:userInitiated:fetchType:migrationEnabled:]
// Type encoding: @96@0:8@16q24@32@40@48@56@64@72B80q84B92
// Implementation: 0x10b0c9050

// -[SCLensContentDownloadOperation executeWithSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0c922c

// -[SCLensContentDownloadOperation boostWithSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0c9514

// -[SCLensContentDownloadOperation finishWithResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0c95dc

// -[SCLensContentDownloadOperation progressObservable]
// Type encoding: @16@0:8
// Implementation: 0x10b0c9694

// -[SCLensContentDownloadOperation _fetchResource:settings:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0c96c4

// -[SCLensContentDownloadOperation _processDataFetcherResponseForResource:contentResult:resourceType:cached:cacheKey:downloadSize:inputSettings:error:boltContentId:statusCode:]
// Type encoding: v92@0:8@16@24q32B40@44Q52@60@68@76q84
// Implementation: 0x10b0c9bfc

// -[SCLensContentDownloadOperation _verifySignatureForContentResource:contentPath:resourceType:completion:]
// Type encoding: v48@0:8@16@24q32@?40
// Implementation: 0x10b0ca304

// -[SCLensContentDownloadOperation processContentVerificationError:resource:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0ca5dc

// -[SCLensContentDownloadOperation verifyContentForResource:contentPath:resourceType:completion:]
// Type encoding: v48@0:8@16@24q32@?40
// Implementation: 0x10b0ca6a0

// -[SCLensContentDownloadOperation _sendCustomEvent:resource:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0ca914

// -[SCLensContentDownloadOperation isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b0cab48

// -[SCLensContentDownloadOperation hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b0cad2c

// -[SCLensContentDownloadOperation contentDataFetcher]
// Type encoding: @16@0:8
// Implementation: 0x10b0cae80

// -[SCLensContentDownloadOperation setContentDataFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0cae90

// -[SCLensContentDownloadOperation contentValidator]
// Type encoding: @16@0:8
// Implementation: 0x10b0caed0

// -[SCLensContentDownloadOperation setContentValidator:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0caee0

// -[SCLensContentDownloadOperation lensPreferences]
// Type encoding: @16@0:8
// Implementation: 0x10b0caf20

// -[SCLensContentDownloadOperation setLensPreferences:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0caf30

// -[SCLensContentDownloadOperation lensDownloadLogger]
// Type encoding: @16@0:8
// Implementation: 0x10b0caf70

// -[SCLensContentDownloadOperation setLensDownloadLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0caf80

// -[SCLensContentDownloadOperation lensResourceDownloadLogger]
// Type encoding: @16@0:8
// Implementation: 0x10b0cafc0

// -[SCLensContentDownloadOperation setLensResourceDownloadLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0cafd0

// -[SCLensContentDownloadOperation lensResourceResolver]
// Type encoding: @16@0:8
// Implementation: 0x10b0cb010

// -[SCLensContentDownloadOperation setLensResourceResolver:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0cb020

// -[SCLensContentDownloadOperation userInitiated]
// Type encoding: B16@0:8
// Implementation: 0x10b0cb060

// -[SCLensContentDownloadOperation setUserInitiated:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b0cb070

// -[SCLensContentDownloadOperation fetchType]
// Type encoding: q16@0:8
// Implementation: 0x10b0cb080

// -[SCLensContentDownloadOperation setFetchType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b0cb090

// -[SCLensContentDownloadOperation progressSubject]
// Type encoding: @16@0:8
// Implementation: 0x10b0cb0a0

// -[SCLensContentDownloadOperation setProgressSubject:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0cb0b0

// -[SCLensContentDownloadOperation migrationEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10b0cb0f0

// -[SCLensContentDownloadOperation setMigrationEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b0cb100

// -[SCLensContentDownloadOperation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0cb110

@end
