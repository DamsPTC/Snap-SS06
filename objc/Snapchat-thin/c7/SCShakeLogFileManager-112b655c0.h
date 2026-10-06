// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCShakeLogFileManager
// Superclass: NSObject
// Address: 0x112b655c0

@interface SCShakeLogFileManager


// +[SCShakeLogFileManager saveLogsToFileForShake:logWriter:inPath:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x10795fd90

// +[SCShakeLogFileManager saveScreenshot:screenshot:inPath:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x10795ff34

// +[SCShakeLogFileManager saveVideo:atPath:inPath:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x10795ffe8

// +[SCShakeLogFileManager saveExtraAttachmentImages:images:inPath:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1079600bc

// +[SCShakeLogFileManager saveExtraAttachmentsVideos:videos:inPath:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10796026c

// +[SCShakeLogFileManager saveExtraFile:file:inPath:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x10796041c

// +[SCShakeLogFileManager saveOtherDataToFile:data:shakeId:inPath:]
// Type encoding: B48@0:8@16@24@32@40
// Implementation: 0x1079604f4

// +[SCShakeLogFileManager areLogsCompressedForId:inPath:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107960590

// +[SCShakeLogFileManager getCompressedFilePath:error:inPath:]
// Type encoding: @40@0:8@16^@24@32
// Implementation: 0x107960638

// +[SCShakeLogFileManager getCompressedFileSize:inPath:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x107960cd8

// +[SCShakeLogFileManager removeTicketFolder:inPath:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107960d50

// +[SCShakeLogFileManager deleteAllLogsInPath:]
// Type encoding: B24@0:8@16
// Implementation: 0x107960dbc

// +[SCShakeLogFileManager getBaseURL:inPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107960e60

// +[SCShakeLogFileManager _writeDataWithFileName:data:baseUrl:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x107960fa8

// +[SCShakeLogFileManager _copyFile:baseUrl:toFileName:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x107961028

// +[SCShakeLogFileManager _getCompressingPathForId:inPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10796113c

@end
