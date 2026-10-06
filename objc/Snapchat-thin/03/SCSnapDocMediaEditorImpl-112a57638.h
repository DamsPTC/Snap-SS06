// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapDocMediaEditorImpl
// Superclass: NSObject
// Address: 0x112a57638

@interface SCSnapDocMediaEditorImpl

// Property: snapDoc; attributes: T@"SDMSnapDoc",R,N,V_snapDoc
// Property: serialSnapDocUpdatePerformer; attributes: T@"<SCPerforming>",&,N,V_serialSnapDocUpdatePerformer
// Property: mediaChangeObservable; attributes: T@"SCObservable",R,N,V_mediaChangeSubject
// Property: snapDocKey; attributes: T@"SCSnapDocKey",R,N
// Property: shouldKeepClaimOnDealloc; attributes: TB,N,VshouldKeepClaimOnDealloc
// Property: mediaIdToAssetId; attributes: T@"GPBInt64ObjectDictionary",R,C,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapDocMediaEditorImpl initWithSnapDoc:lock:serialSnapDocUpdatePerformer:mediaIdToAssetId:snapDocKey:snapDocManagerServices:nsDataWriterServices:temporaryFileWriterServices:mediaVideoImportServices:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x1056b693c

// -[SCSnapDocMediaEditorImpl resetWithSnapDoc:snapDocKey:mediaIdToAssetId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1056b6c10

// -[SCSnapDocMediaEditorImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1056b7064

// -[SCSnapDocMediaEditorImpl dispose]
// Type encoding: v16@0:8
// Implementation: 0x1056b712c

// -[SCSnapDocMediaEditorImpl snapDocKey]
// Type encoding: @16@0:8
// Implementation: 0x1056b7130

// -[SCSnapDocMediaEditorImpl mediaIdToAssetId]
// Type encoding: @16@0:8
// Implementation: 0x1056b7158

// -[SCSnapDocMediaEditorImpl mediaReferenceWithId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056b7170

// -[SCSnapDocMediaEditorImpl mediaUrlWithId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056b71f8

// -[SCSnapDocMediaEditorImpl mediaWithId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056b777c

// -[SCSnapDocMediaEditorImpl contentResultWithMediaId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056b77d0

// -[SCSnapDocMediaEditorImpl deleteMediaWithId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056b7d9c

// -[SCSnapDocMediaEditorImpl addBaseMediaWithInput:removeSoftTrim:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1056b8090

// -[SCSnapDocMediaEditorImpl addMediaWithInput:type:]
// Type encoding: @28@0:8@16i24
// Implementation: 0x1056b8af8

// -[SCSnapDocMediaEditorImpl updateMediaReferenceWithInput:mediaId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1056b8cf8

// -[SCSnapDocMediaEditorImpl syncAddMediaWithInput:type:]
// Type encoding: @28@0:8@16i24
// Implementation: 0x1056b8f24

// -[SCSnapDocMediaEditorImpl localCacheKeyWithInput:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056b8fe8

// -[SCSnapDocMediaEditorImpl _importAndRemapMediaReferencesFromSnapDocs:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056b9290

// -[SCSnapDocMediaEditorImpl _importMediaReferencesFrom:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056b9794

// -[SCSnapDocMediaEditorImpl _runInSerialQueueIfPresent:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1056b9e20

// -[SCSnapDocMediaEditorImpl _cloneSnapDocOnSerialQueueIfPresent]
// Type encoding: @16@0:8
// Implementation: 0x1056b9ec8

// -[SCSnapDocMediaEditorImpl _runInSerialQueueIfPresentAndWait:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1056b9fc8

// -[SCSnapDocMediaEditorImpl _canPerformOnSnapDocUpdatePerformer]
// Type encoding: B16@0:8
// Implementation: 0x1056ba07c

// -[SCSnapDocMediaEditorImpl _isDisposedCheck]
// Type encoding: B16@0:8
// Implementation: 0x1056ba0b8

// -[SCSnapDocMediaEditorImpl _setDisposed]
// Type encoding: v16@0:8
// Implementation: 0x1056ba0ec

// -[SCSnapDocMediaEditorImpl _isComposerThread]
// Type encoding: B16@0:8
// Implementation: 0x1056ba11c

// -[SCSnapDocMediaEditorImpl _addMediaWithType:metadataMediaType:mediaInputBlock:mediaMetadataBlock:]
// Type encoding: @40@0:8i16i20@?24@?32
// Implementation: 0x1056ba158

// -[SCSnapDocMediaEditorImpl _contentWriterWithInput:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056ba520

// -[SCSnapDocMediaEditorImpl _addMediaReferenceWithInputAsync:type:promise:]
// Type encoding: v36@0:8@16i24@28
// Implementation: 0x1056ba92c

// -[SCSnapDocMediaEditorImpl _addMediaReferenceWithInputBlocking:type:snapDoc:]
// Type encoding: @36@0:8@16i24@28
// Implementation: 0x1056bae4c

// -[SCSnapDocMediaEditorImpl _addMediaReferenceWithContentWriterBlocking:input:type:snapDoc:]
// Type encoding: @44@0:8@16@24i32@36
// Implementation: 0x1056bb238

// -[SCSnapDocMediaEditorImpl _addMediaReferenceWithContentWriterAsync:input:type:promise:]
// Type encoding: v44@0:8@16@24i32@36
// Implementation: 0x1056bb2f0

// -[SCSnapDocMediaEditorImpl _updateMediaReferenceWithInputAsync:mediaId:promise:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1056bb7d8

// -[SCSnapDocMediaEditorImpl _updateMediaReferenceWithContentWriterAsync:mediaId:promise:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1056bbd10

// -[SCSnapDocMediaEditorImpl _lockSnapdocLock]
// Type encoding: v16@0:8
// Implementation: 0x1056bc04c

// -[SCSnapDocMediaEditorImpl _unlockSnapdocLock]
// Type encoding: v16@0:8
// Implementation: 0x1056bc068

// -[SCSnapDocMediaEditorImpl _errorWithCode:message:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x1056bc084

// -[SCSnapDocMediaEditorImpl _layerWithMediaId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056bc160

// -[SCSnapDocMediaEditorImpl _mediaReferenceWithId:snapDoc:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1056bc2f8

// -[SCSnapDocMediaEditorImpl _incrementAndGetMediaListID]
// Type encoding: Q16@0:8
// Implementation: 0x1056bc438

// -[SCSnapDocMediaEditorImpl mediaChangeObservable]
// Type encoding: @16@0:8
// Implementation: 0x1056bc580

// -[SCSnapDocMediaEditorImpl shouldKeepClaimOnDealloc]
// Type encoding: B16@0:8
// Implementation: 0x1056bc588

// -[SCSnapDocMediaEditorImpl setShouldKeepClaimOnDealloc:]
// Type encoding: v20@0:8B16
// Implementation: 0x1056bc590

// -[SCSnapDocMediaEditorImpl snapDoc]
// Type encoding: @16@0:8
// Implementation: 0x1056bc598

// -[SCSnapDocMediaEditorImpl serialSnapDocUpdatePerformer]
// Type encoding: @16@0:8
// Implementation: 0x1056bc5a0

// -[SCSnapDocMediaEditorImpl setSerialSnapDocUpdatePerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056bc5a8

// -[SCSnapDocMediaEditorImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056bc5d8

// +[SCSnapDocMediaEditorImpl _removeClaimForMediaReferences:snapDocKey:snapDocManager:performer:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1056bc474

@end
