// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCShakeTicketTable
// Superclass: NSObject
// Address: 0x112b65778

@interface SCShakeTicketTable

// Property: workDir; attributes: T@"NSString",R,C,N,V_workDir

// -[SCShakeTicketTable initWithPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x1079678b0

// -[SCShakeTicketTable deleteDatabase]
// Type encoding: v16@0:8
// Implementation: 0x10796792c

// -[SCShakeTicketTable deleteAllPendingTickets]
// Type encoding: v16@0:8
// Implementation: 0x1079679dc

// -[SCShakeTicketTable saveShakeTicket:]
// Type encoding: B24@0:8@16
// Implementation: 0x1079679ec

// -[SCShakeTicketTable updateTicketStatusWithID:uploadStatus:]
// Type encoding: B32@0:8@16q24
// Implementation: 0x10796835c

// -[SCShakeTicketTable updateTicketUploadUrl:metadataUploaded:forID:]
// Type encoding: B36@0:8@16B24@28
// Implementation: 0x10796847c

// -[SCShakeTicketTable getNextPendingTicket]
// Type encoding: @16@0:8
// Implementation: 0x1079685f4

// -[SCShakeTicketTable setupDatabase]
// Type encoding: v16@0:8
// Implementation: 0x107968db4

// -[SCShakeTicketTable _databaseURL]
// Type encoding: @16@0:8
// Implementation: 0x107968ff4

// -[SCShakeTicketTable workDir]
// Type encoding: @16@0:8
// Implementation: 0x10796914c

// -[SCShakeTicketTable .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107969154

// +[SCShakeTicketTable sharedInPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x1079677a8

@end
