// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBloopsUserDataModelObtainingOperation
// Superclass: SCBloopsAsyncOperation
// Address: 0x112a3d6e8

@interface SCBloopsUserDataModelObtainingOperation

// Property: usersIds; attributes: T@"NSArray",&,V_usersIds
// Property: groupId; attributes: T@"NSString",&,V_groupId
// Property: friendRequestSource; attributes: Tq,V_friendRequestSource
// Property: checkDiskCacheForFirstUser; attributes: TB,V_checkDiskCacheForFirstUser
// Property: userDataModel; attributes: T@"SCBloopsUserDataModel",&,N,V_userDataModel

// -[SCBloopsUserDataModelObtainingOperation initWithTargersService:cacheAnalyticsModel:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1054b6250

// -[SCBloopsUserDataModelObtainingOperation start]
// Type encoding: v16@0:8
// Implementation: 0x1054b6370

// -[SCBloopsUserDataModelObtainingOperation _obtainBloopsUserDataModelFromCacheOperationWithUserId:completion:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x1054b695c

// -[SCBloopsUserDataModelObtainingOperation _obtainBloopsUserDataModelOperationWithUsersIds:groupId:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x1054b6c14

// -[SCBloopsUserDataModelObtainingOperation usersIds]
// Type encoding: @16@0:8
// Implementation: 0x1054b6ed0

// -[SCBloopsUserDataModelObtainingOperation setUsersIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054b6ee0

// -[SCBloopsUserDataModelObtainingOperation groupId]
// Type encoding: @16@0:8
// Implementation: 0x1054b6eec

// -[SCBloopsUserDataModelObtainingOperation setGroupId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054b6efc

// -[SCBloopsUserDataModelObtainingOperation friendRequestSource]
// Type encoding: q16@0:8
// Implementation: 0x1054b6f08

// -[SCBloopsUserDataModelObtainingOperation setFriendRequestSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x1054b6f18

// -[SCBloopsUserDataModelObtainingOperation checkDiskCacheForFirstUser]
// Type encoding: B16@0:8
// Implementation: 0x1054b6f28

// -[SCBloopsUserDataModelObtainingOperation setCheckDiskCacheForFirstUser:]
// Type encoding: v20@0:8B16
// Implementation: 0x1054b6f3c

// -[SCBloopsUserDataModelObtainingOperation userDataModel]
// Type encoding: @16@0:8
// Implementation: 0x1054b6f4c

// -[SCBloopsUserDataModelObtainingOperation setUserDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054b6f5c

// -[SCBloopsUserDataModelObtainingOperation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054b6f9c

@end
