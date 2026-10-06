// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesFirmwareDownloader
// Superclass: NSObject
// Address: 0x112a847c8

@interface SCSpectaclesFirmwareDownloader

// Property: delegate; attributes: T@"<SCSpectaclesFirmwareDownloaderDelegate>",W,N,V_delegate
// Property: resourceDownloader; attributes: T@"SCVersionResourceDownloader",&,N,V_resourceDownloader
// Property: filePath; attributes: T@"NSString",R,N,V_filePath
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesFirmwareDownloader initWithServerMetadataFetcher:delegate:temporaryFileWriter:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100c5afc4

// -[SCSpectaclesFirmwareDownloader reset]
// Type encoding: v16@0:8
// Implementation: 0x105a464d0

// -[SCSpectaclesFirmwareDownloader startCheckingUpdateWithTag:digest:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a464d8

// -[SCSpectaclesFirmwareDownloader startDownloadingUpdate]
// Type encoding: v16@0:8
// Implementation: 0x105a465ac

// -[SCSpectaclesFirmwareDownloader versionResourceDownloader:didCheckUpdateAvailable:metadata:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x105a465b4

// -[SCSpectaclesFirmwareDownloader _handleBadRequestForMetadata:]
// Type encoding: B24@0:8@16
// Implementation: 0x105a46794

// -[SCSpectaclesFirmwareDownloader versionResourceDownloader:didDownloadFileBlob:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a468c8

// -[SCSpectaclesFirmwareDownloader versionResourceDownloader:didVerifyFileContent:didSaveToDisk:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105a468cc

// -[SCSpectaclesFirmwareDownloader didFailCheckingUpdateWithDownloader:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a46938

// -[SCSpectaclesFirmwareDownloader didFailDownloadingFileBlobWithDownloader:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a46970

// -[SCSpectaclesFirmwareDownloader didFailVerifyingFileContentWithDownloader:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a469a4

// -[SCSpectaclesFirmwareDownloader filePath]
// Type encoding: @16@0:8
// Implementation: 0x105a469d8

// -[SCSpectaclesFirmwareDownloader delegate]
// Type encoding: @16@0:8
// Implementation: 0x105a469e0

// -[SCSpectaclesFirmwareDownloader setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a469f8

// -[SCSpectaclesFirmwareDownloader resourceDownloader]
// Type encoding: @16@0:8
// Implementation: 0x105a46a04

// -[SCSpectaclesFirmwareDownloader setResourceDownloader:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a46a0c

// -[SCSpectaclesFirmwareDownloader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a46a3c

@end
