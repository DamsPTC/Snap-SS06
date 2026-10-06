// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSAARFrameDepthDataProvider
// Superclass: NSObject
// Address: 0x112bf9d38

@interface LSAARFrameDepthDataProvider


// -[LSAARFrameDepthDataProvider getDepthsFromFrame:depthParameters:arFrame:]
// Type encoding: {unique_ptr<LS::Depth::Frames, std::default_delete<LS::Depth::Frames>>=^{Frames}}40@0:8{LSAObjCppPtrWrapper<const LS::Tracking::CameraImageCRef>=^{CameraImageCRef}}16{LSAObjCppPtrWrapper<const LS::Depth::NativeTrackingParameters>=^{NativeTrackingParameters}}24@32
// Implementation: 0x10adbc964

// -[LSAARFrameDepthDataProvider dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10adbca54

// -[LSAARFrameDepthDataProvider _getDepthsFromFrame:depthParameters:arFrame:fromDepthMap:fromConfidenceMap:]
// Type encoding: {unique_ptr<LS::Depth::Frames, std::default_delete<LS::Depth::Frames>>=^{Frames}}56@0:8{LSAObjCppPtrWrapper<const LS::Tracking::CameraImageCRef>=^{CameraImageCRef}}16{LSAObjCppPtrWrapper<const LS::Depth::NativeTrackingParameters>=^{NativeTrackingParameters}}24@32^{__CVBuffer=}40^{__CVBuffer=}48
// Implementation: 0x10adbcaac

// -[LSAARFrameDepthDataProvider _internalProvideDepthTrackingData:depthParameters:arFrame:fromDepthMap:fromConfidenceMap:]
// Type encoding: {unique_ptr<LS::Depth::Frames, std::default_delete<LS::Depth::Frames>>=^{Frames}}56@0:8{LSAObjCppPtrWrapper<const LS::Tracking::CameraImageCRef>=^{CameraImageCRef}}16{LSAObjCppPtrWrapper<const LS::Depth::NativeTrackingParameters>=^{NativeTrackingParameters}}24@32^{__CVBuffer=}40^{__CVBuffer=}48
// Implementation: 0x10adbcde4

// -[LSAARFrameDepthDataProvider _setRetainedContainerWithSelector:containter:arFrame:]
// Type encoding: v40@0:8:16@24@32
// Implementation: 0x10adbd214

// -[LSAARFrameDepthDataProvider _depthContainerForFrame:]
// Type encoding: @24@0:8@16
// Implementation: 0x10adbd228

// -[LSAARFrameDepthDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10adbd250

@end
