// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAppSession
// Superclass: NSObject
// Address: 0x112ba8c58

@interface SCAppSession

// Property: shouldCheckCameraStatus; attributes: TB,N,V_shouldCheckCameraStatus
// Property: appStatus; attributes: TQ,N,V_appStatus
// Property: cameraStatus; attributes: TQ,N,V_cameraStatus
// Property: appOpenType; attributes: TQ,N,V_appOpenType
// Property: appLaunchStatus; attributes: TQ,N,V_appLaunchStatus
// Property: didSetCaptureVideoPreviewView; attributes: TB,N,V_didSetCaptureVideoPreviewView
// Property: didAppStartupComplete; attributes: TB,N,V_didAppStartupComplete
// Property: lastAppSessionEndTime; attributes: Td,N
// Property: loggedIn; attributes: TB,N,GisLoggedIn,V_loggedIn
// Property: appOpeningToNonCameraVC; attributes: TB,N,V_appOpeningToNonCameraVC
// Property: didBecomeActiveWithRemoteNotification; attributes: TB,N,V_didBecomeActiveWithRemoteNotification
// Property: didLaunchWithDidFinishLaunching; attributes: TB,N,V_didLaunchWithDidFinishLaunching

// -[SCAppSession init]
// Type encoding: @16@0:8
// Implementation: 0x100080d1c

// -[SCAppSession initWithApplication:]
// Type encoding: @24@0:8@16
// Implementation: 0x100080d6c

// -[SCAppSession getStartupCompleteObserver]
// Type encoding: @16@0:8
// Implementation: 0x100081124

// -[SCAppSession handleOpenAppFromNotificationSettings]
// Type encoding: v16@0:8
// Implementation: 0x1085ab980

// -[SCAppSession handleOpenAppFromQuickAction]
// Type encoding: v16@0:8
// Implementation: 0x1085ab9ac

// -[SCAppSession handleOpenAppToNonCameraVCFromNotif:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085ab9d8

// -[SCAppSession handleOpenAppFromDeepLink]
// Type encoding: v16@0:8
// Implementation: 0x1085aba18

// -[SCAppSession handleCapturerStartRunning]
// Type encoding: v16@0:8
// Implementation: 0x1085aba44

// -[SCAppSession handleSetCaptureVideoPreviewView]
// Type encoding: v16@0:8
// Implementation: 0x100852008

// -[SCAppSession handleAppBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x1008ee3e8

// -[SCAppSession isAppOpenFromPushNotification]
// Type encoding: B16@0:8
// Implementation: 0x1085aba6c

// -[SCAppSession isAppOpenFromDeepLink]
// Type encoding: B16@0:8
// Implementation: 0x1085aba88

// -[SCAppSession isAppStatusActive]
// Type encoding: B16@0:8
// Implementation: 0x1085abaa4

// -[SCAppSession didCameraBecomeRunning]
// Type encoding: B16@0:8
// Implementation: 0x1008ee428

// -[SCAppSession isAppStartupCompleted]
// Type encoding: B16@0:8
// Implementation: 0x100851fcc

// -[SCAppSession markAppLaunchStart:]
// Type encoding: v20@0:8B16
// Implementation: 0x100a0a058

// -[SCAppSession markAppLaunchFinish]
// Type encoding: v16@0:8
// Implementation: 0x1085abac0

// -[SCAppSession didEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x1085abac8

// -[SCAppSession willEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x1085abb0c

// -[SCAppSession willLogin]
// Type encoding: v16@0:8
// Implementation: 0x1085abb68

// -[SCAppSession didLogout]
// Type encoding: v16@0:8
// Implementation: 0x1085abbbc

// -[SCAppSession didCameraViewDisappear]
// Type encoding: v16@0:8
// Implementation: 0x1085abbd0

// -[SCAppSession didAppStartupComplete]
// Type encoding: B16@0:8
// Implementation: 0x100851fd0

// -[SCAppSession setDidAppStartupComplete:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085abc10

// -[SCAppSession signalWhenAppStartupComplete]
// Type encoding: v16@0:8
// Implementation: 0x1085abc44

// -[SCAppSession determineIfAppStartupComplete]
// Type encoding: v16@0:8
// Implementation: 0x100852038

// -[SCAppSession timeLapseBetweenLaunches]
// Type encoding: d16@0:8
// Implementation: 0x1085abc84

// -[SCAppSession lastAppSessionEndTime]
// Type encoding: d16@0:8
// Implementation: 0x1085abcb8

// -[SCAppSession setLastAppSessionEndTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x1085abd0c

// -[SCAppSession isTimeStampInCurrentAppSession:]
// Type encoding: B24@0:8d16
// Implementation: 0x1085abd84

// -[SCAppSession isLoggedIn]
// Type encoding: B16@0:8
// Implementation: 0x1085abdb4

// -[SCAppSession setLoggedIn:]
// Type encoding: v20@0:8B16
// Implementation: 0x1002fbb48

// -[SCAppSession appOpeningToNonCameraVC]
// Type encoding: B16@0:8
// Implementation: 0x1085abdbc

// -[SCAppSession setAppOpeningToNonCameraVC:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085abdc4

// -[SCAppSession didBecomeActiveWithRemoteNotification]
// Type encoding: B16@0:8
// Implementation: 0x100c748b4

// -[SCAppSession setDidBecomeActiveWithRemoteNotification:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085abdcc

// -[SCAppSession didLaunchWithDidFinishLaunching]
// Type encoding: B16@0:8
// Implementation: 0x1085abdd4

// -[SCAppSession setDidLaunchWithDidFinishLaunching:]
// Type encoding: v20@0:8B16
// Implementation: 0x100a0407c

// -[SCAppSession shouldCheckCameraStatus]
// Type encoding: B16@0:8
// Implementation: 0x1008ee420

// -[SCAppSession setShouldCheckCameraStatus:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085abddc

// -[SCAppSession appStatus]
// Type encoding: Q16@0:8
// Implementation: 0x100852108

// -[SCAppSession setAppStatus:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1008ee410

// -[SCAppSession cameraStatus]
// Type encoding: Q16@0:8
// Implementation: 0x1008ee444

// -[SCAppSession setCameraStatus:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1085abde4

// -[SCAppSession appOpenType]
// Type encoding: Q16@0:8
// Implementation: 0x1085abdec

// -[SCAppSession setAppOpenType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1085abdf4

// -[SCAppSession appLaunchStatus]
// Type encoding: Q16@0:8
// Implementation: 0x1008ee418

// -[SCAppSession setAppLaunchStatus:]
// Type encoding: v24@0:8Q16
// Implementation: 0x100a0a060

// -[SCAppSession didSetCaptureVideoPreviewView]
// Type encoding: B16@0:8
// Implementation: 0x1085abdfc

// -[SCAppSession setDidSetCaptureVideoPreviewView:]
// Type encoding: v20@0:8B16
// Implementation: 0x100852030

// -[SCAppSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085abe04

// +[SCAppSession sharedInstance]
// Type encoding: @16@0:8
// Implementation: 0x100080c6c

@end
