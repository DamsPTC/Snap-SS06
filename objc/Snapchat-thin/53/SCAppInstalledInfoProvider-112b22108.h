// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAppInstalledInfoProvider
// Superclass: NSObject
// Address: 0x112b22108

@interface SCAppInstalledInfoProvider

// Property: lastCOUploadingTimestampInSec; attributes: T@"NSNumber",&,N,V_lastCOUploadingTimestampInSec

// -[SCAppInstalledInfoProvider initWithAdConfigProvider:metricsManager:commonMetricsManager:persistedDataAdapter:canOpenUrlProvider:requestInfoProvider:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x106bf9038

// -[SCAppInstalledInfoProvider fetchAppInstalledInfoAndLogBlizzard]
// Type encoding: v16@0:8
// Implementation: 0x106bf9210

// -[SCAppInstalledInfoProvider getAppInstallInfoWithAppURLSchemaList:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bf94d0

// -[SCAppInstalledInfoProvider _logAppInstallInfoBlizzard:said:idfv:idfa:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106bf96dc

// -[SCAppInstalledInfoProvider _logResultsInBlizzard:said:idfv:idfa:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106bf986c

// -[SCAppInstalledInfoProvider lastCOUploadingTimestampInSec]
// Type encoding: @16@0:8
// Implementation: 0x106bf9958

// -[SCAppInstalledInfoProvider setLastCOUploadingTimestampInSec:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bf9960

// -[SCAppInstalledInfoProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106bf9990

@end
