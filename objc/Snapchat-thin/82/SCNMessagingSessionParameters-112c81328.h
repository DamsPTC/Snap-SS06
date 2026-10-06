// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMessagingSessionParameters
// Superclass: NSObject
// Address: 0x112c81328

@interface SCNMessagingSessionParameters

// Property: databaseLocation; attributes: T@"NSString",C,N,V_databaseLocation
// Property: userId; attributes: T@"SCNMessagingUUID",&,N,V_userId
// Property: userAgentPrefix; attributes: T@"NSString",C,N,V_userAgentPrefix
// Property: debug; attributes: TB,N,V_debug
// Property: tweaks; attributes: T@"SCNMessagingTweaks",&,N,V_tweaks
// Property: cofOverrides; attributes: T@"SCNShimsCOFOverrides",&,N,V_cofOverrides
// Property: launchTrigger; attributes: T@"NSNumber",&,N,V_launchTrigger

// -[SCNMessagingSessionParameters initWithDatabaseLocation:userId:userAgentPrefix:debug:tweaks:cofOverrides:launchTrigger:]
// Type encoding: @68@0:8@16@24@32B40@44@52@60
// Implementation: 0x100449c90

// -[SCNMessagingSessionParameters initWithDatabaseLocation:userId:userAgentPrefix:debug:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x10b640fe4

// -[SCNMessagingSessionParameters databaseLocation]
// Type encoding: @16@0:8
// Implementation: 0x10049c270

// -[SCNMessagingSessionParameters setDatabaseLocation:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b64100c

// -[SCNMessagingSessionParameters userId]
// Type encoding: @16@0:8
// Implementation: 0x10049c278

// -[SCNMessagingSessionParameters setUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b641014

// -[SCNMessagingSessionParameters userAgentPrefix]
// Type encoding: @16@0:8
// Implementation: 0x10049c2f8

// -[SCNMessagingSessionParameters setUserAgentPrefix:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b641034

// -[SCNMessagingSessionParameters debug]
// Type encoding: B16@0:8
// Implementation: 0x10049c300

// -[SCNMessagingSessionParameters setDebug:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b64103c

// -[SCNMessagingSessionParameters tweaks]
// Type encoding: @16@0:8
// Implementation: 0x10049c308

// -[SCNMessagingSessionParameters setTweaks:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b641044

// -[SCNMessagingSessionParameters cofOverrides]
// Type encoding: @16@0:8
// Implementation: 0x10049cee4

// -[SCNMessagingSessionParameters setCofOverrides:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b641064

// -[SCNMessagingSessionParameters launchTrigger]
// Type encoding: @16@0:8
// Implementation: 0x10049cf68

// -[SCNMessagingSessionParameters setLaunchTrigger:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b641084

// -[SCNMessagingSessionParameters .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b6410a4

@end
