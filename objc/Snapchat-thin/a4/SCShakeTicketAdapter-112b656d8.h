// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCShakeTicketAdapter
// Superclass: NSObject
// Address: 0x112b656d8

@interface SCShakeTicketAdapter


// -[SCShakeTicketAdapter initWithCircumstanceEngine:networkConnectivityMonitor:blizzardSessionIDProvider:appInsightsMetadataStorage:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107962a78

// -[SCShakeTicketAdapter _userShakeQueue]
// Type encoding: @16@0:8
// Implementation: 0x107962bc8

// -[SCShakeTicketAdapter _submitShakeQueue]
// Type encoding: @16@0:8
// Implementation: 0x107962cd0

// -[SCShakeTicketAdapter fileBetaShakeTicket:reportType:reportSource:bugDescription:project:subProject:screenShot:createTimestamp:viewControllerName:viewControllerFeature:withConfiguration:hasCameraRollAttachment:otherInfo:carrierInfo:infoProviderRegistry:]
// Type encoding: v132@0:8@16q24q32@40@48@56@64q72@80@88@96B104@108@116@124
// Implementation: 0x107962d80

// -[SCShakeTicketAdapter fileInternalShakeTicket:reportType:reportSource:bugDescription:project:subProject:selfAssign:email:shakeCaptureData:createTimestamp:videoFilePath:extraAttachmentImages:extraAttachmentVideos:viewControllerName:viewControllerFeature:jiraMetaInfo:lastCrashReportId:linkedNonFatalId:infoProviderRegistry:withConfiguration:carrierInfo:jiraLabels:]
// Type encoding: v188@0:8@16q24q32@40@48@56B64@68@76q84@92@100@108@116@124@132@140@148@156@164@172@180
// Implementation: 0x10796398c

// -[SCShakeTicketAdapter _appendJiraMetaInfo:bugDescription:project:subProject:infoProviderRegistry:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x107964604

// -[SCShakeTicketAdapter _fetchJiraLabelsForProject:infoProviderRegistry:additionalLabels:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107964820

// -[SCShakeTicketAdapter _fileShakeTicket:reportType:reportSource:bugDescription:project:subProject:emails:selfAssign:isAutoTicket:withScreenshot:createTimestamp:shouldCreateJiraTicket:withAttachments:viewControllerName:viewControllerFeature:jiraMetaInfo:configuration:hasScreenCaptured:hasVideoAttachedL:hasCameraRollAttachment:cameraRollAttachmentFileNames:spectaclesVersion:lastCrashReportId:otherInfo:allJiraLabels:linkedNonFatalId:carrierInfo:]
// Type encoding: v200@0:8@16q24q32@40@48@56@64B72B76B80q84B92B96@100@108@116@124B132B136B140@144@152@160@168@176@184@192
// Implementation: 0x107964990

// -[SCShakeTicketAdapter _getUpdatedOtherInfo:withHasScreenshot:jiraMetaInfo:viewControllerName:viewControllerFeature:]
// Type encoding: @52@0:8@16B24@28@36@44
// Implementation: 0x10796551c

// -[SCShakeTicketAdapter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1079658b0

// +[SCShakeTicketAdapter willEnterForegroundWithConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x107962b74

@end
