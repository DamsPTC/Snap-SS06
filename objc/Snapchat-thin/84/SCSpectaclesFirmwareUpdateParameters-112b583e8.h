// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesFirmwareUpdateParameters
// Superclass: NSObject
// Address: 0x112b583e8

@interface SCSpectaclesFirmwareUpdateParameters

// Property: targetVersion; attributes: T@"<SCSpectaclesFirmwareVersion>",&,N,V_targetVersion
// Property: targetDigest; attributes: T@"NSString",C,N,V_targetDigest
// Property: updateWindowStart; attributes: T@"NSDate",&,N,V_updateWindowStart
// Property: updateWindowLength; attributes: Td,N,V_updateWindowLength
// Property: updateIsActive; attributes: TB,N,V_updateIsActive
// Property: userInfo; attributes: T@"<NSCoding>",&,N,V_userInfo

// -[SCSpectaclesFirmwareUpdateParameters initWithTargetVersion:targetDigest:updateWindowStart:windowLength:updateIsActive:]
// Type encoding: @52@0:8@16@24@32d40B48
// Implementation: 0x106fcf710

// -[SCSpectaclesFirmwareUpdateParameters initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x106fcf7fc

// -[SCSpectaclesFirmwareUpdateParameters encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fcf914

// -[SCSpectaclesFirmwareUpdateParameters matchesParameters:withErrorMargin:]
// Type encoding: B32@0:8@16d24
// Implementation: 0x106fcfa20

// -[SCSpectaclesFirmwareUpdateParameters targetVersion]
// Type encoding: @16@0:8
// Implementation: 0x106fcfb98

// -[SCSpectaclesFirmwareUpdateParameters setTargetVersion:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fcfba0

// -[SCSpectaclesFirmwareUpdateParameters targetDigest]
// Type encoding: @16@0:8
// Implementation: 0x106fcfbd0

// -[SCSpectaclesFirmwareUpdateParameters setTargetDigest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fcfbd8

// -[SCSpectaclesFirmwareUpdateParameters updateWindowStart]
// Type encoding: @16@0:8
// Implementation: 0x106fcfbe0

// -[SCSpectaclesFirmwareUpdateParameters setUpdateWindowStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fcfbe8

// -[SCSpectaclesFirmwareUpdateParameters updateWindowLength]
// Type encoding: d16@0:8
// Implementation: 0x106fcfc18

// -[SCSpectaclesFirmwareUpdateParameters setUpdateWindowLength:]
// Type encoding: v24@0:8d16
// Implementation: 0x106fcfc20

// -[SCSpectaclesFirmwareUpdateParameters updateIsActive]
// Type encoding: B16@0:8
// Implementation: 0x106fcfc28

// -[SCSpectaclesFirmwareUpdateParameters setUpdateIsActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x106fcfc30

// -[SCSpectaclesFirmwareUpdateParameters userInfo]
// Type encoding: @16@0:8
// Implementation: 0x106fcfc38

// -[SCSpectaclesFirmwareUpdateParameters setUserInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fcfc40

// -[SCSpectaclesFirmwareUpdateParameters .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106fcfc70

// +[SCSpectaclesFirmwareUpdateParameters activeUpdateParametersWithTargetVersion:targetDigest:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106fcf608

// +[SCSpectaclesFirmwareUpdateParameters passiveUpdateParametersWithTargetVersion:targetDigest:updateWindowStart:windowLength:]
// Type encoding: @48@0:8@16@24@32d40
// Implementation: 0x106fcf67c

@end
