// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensFriendApiPluginHandler
// Superclass: NSObject
// Address: 0x112a05b08

@interface SCLensFriendApiPluginHandler


// -[SCLensFriendApiPluginHandler initWithSnapchatterServices:addFriendsScopeServices:lensUserFeatureLauncherServices:contactPermissionInfoServices:contactPermissionRequestScopeExposer:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x104eba35c

// -[SCLensFriendApiPluginHandler handleRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x104eba494

// -[SCLensFriendApiPluginHandler reset]
// Type encoding: v16@0:8
// Implementation: 0x104eba818

// -[SCLensFriendApiPluginHandler _invalidRequestErrorWithResponseSubject:requestId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104eba81c

// -[SCLensFriendApiPluginHandler _handleSyncContactsWithResponseSubject:requestId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104eba8c0

// -[SCLensFriendApiPluginHandler _handleAddFriendsWithResponseSubject:requestId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104ebaa98

// -[SCLensFriendApiPluginHandler _handleGetContactStatusWithResponseSubject:requestId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104ebac38

// -[SCLensFriendApiPluginHandler _handleGetFriendsWithResponseSubject:requestId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104ebae24

// -[SCLensFriendApiPluginHandler _handleGetFriendsCompletionWithResponseSubject:incomingCount:suggestedCount:error:requestId:]
// Type encoding: v56@0:8@16q24q32@40@48
// Implementation: 0x104ebb30c

// -[SCLensFriendApiPluginHandler _dataFetcher]
// Type encoding: @16@0:8
// Implementation: 0x104ebb524

// -[SCLensFriendApiPluginHandler _cleanupIvars]
// Type encoding: v16@0:8
// Implementation: 0x104ebb56c

// -[SCLensFriendApiPluginHandler addFriendsWorkflowCompleted:]
// Type encoding: v20@0:8B16
// Implementation: 0x104ebb640

// -[SCLensFriendApiPluginHandler addFriendsWorkflowSkipped:]
// Type encoding: v20@0:8B16
// Implementation: 0x104ebb6d8

// -[SCLensFriendApiPluginHandler contactPermissionWorkflowCompletedWithGoToSettings:]
// Type encoding: v20@0:8B16
// Implementation: 0x104ebb6dc

// -[SCLensFriendApiPluginHandler contactPermissionWorkflowCompletedWithPermissionGranted:]
// Type encoding: v20@0:8B16
// Implementation: 0x104ebb6e4

// -[SCLensFriendApiPluginHandler contactPermissionWorkflowSkipped]
// Type encoding: v16@0:8
// Implementation: 0x104ebb844

// -[SCLensFriendApiPluginHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104ebb84c

@end
