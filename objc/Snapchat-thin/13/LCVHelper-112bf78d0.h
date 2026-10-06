// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LCVHelper
// Superclass: NSObject
// Address: 0x112bf78d0

@interface LCVHelper


// +[LCVHelper convert:toLcvDepthFrameData:]
// Type encoding: v32@0:8{LabsCVObjCppReferenceWrapper<const LabsCV::DepthFrameData>=^{DepthFrameData}}16@24
// Implementation: 0x109224a20

// +[LCVHelper convert:toCameraData:]
// Type encoding: v32@0:8@16{LabsCVObjCppReferenceWrapper<LabsCV::Core::CameraData>=^{CameraData}}24
// Implementation: 0x109224d7c

// +[LCVHelper convert:toLcvCameraData:]
// Type encoding: v32@0:8{LabsCVObjCppReferenceWrapper<const LabsCV::Core::CameraData>=^{CameraData}}16@24
// Implementation: 0x109224f90

// +[LCVHelper convert:toImuDataRaw:]
// Type encoding: v32@0:8@16{LabsCVObjCppReferenceWrapper<LabsCV::ImuSensorFusion::ImuDataRaw>=^{ImuDataRaw}}24
// Implementation: 0x1092251b0

// +[LCVHelper convert:toVideoTimestampsDataRaw:]
// Type encoding: v32@0:8@16{LabsCVObjCppReferenceWrapper<LabsCV::ImuSensorFusion::VideoTimestampsDataRaw>=^{VideoTimestampsDataRaw}}24
// Implementation: 0x109225678

// +[LCVHelper convert:toAccelDataRaw:gyroDataRaw:]
// Type encoding: v40@0:8@16{LabsCVObjCppReferenceWrapper<LabsCV::ImuSensorFusion::AccelerometerFrameDataRaw>=^{AccelerometerFrameDataRaw}}24{LabsCVObjCppReferenceWrapper<LabsCV::ImuSensorFusion::GyroFrameDataRaw>=^{GyroFrameDataRaw}}32
// Implementation: 0x1092256d0

// +[LCVHelper convertAccelDataRaw:gyroDataRaw:toLcvImuFrameDataRaw:]
// Type encoding: v40@0:8{LabsCVObjCppReferenceWrapper<const LabsCV::ImuSensorFusion::AccelerometerFrameDataRaw>=^{AccelerometerFrameDataRaw}}16{LabsCVObjCppReferenceWrapper<const LabsCV::ImuSensorFusion::GyroFrameDataRaw>=^{GyroFrameDataRaw}}24@32
// Implementation: 0x109225830

// +[LCVHelper convert:toLcvPoseFrameData:]
// Type encoding: v32@0:8{LabsCVObjCppReferenceWrapper<const LabsCV::Core::PoseFrameData>=^{PoseFrameData}}16@24
// Implementation: 0x1092259ac

// +[LCVHelper convert:toLcvAlignmentData:]
// Type encoding: v32@0:8{LabsCVObjCppReferenceWrapper<const std::vector<LabsCV::Core::AlignmentFrameData>>=^v}16@24
// Implementation: 0x109225c2c

// +[LCVHelper convert:toLcvAlignmentFrameData:]
// Type encoding: v32@0:8{LabsCVObjCppReferenceWrapper<const LabsCV::Core::AlignmentFrameData>=^{AlignmentFrameData}}16@24
// Implementation: 0x109225d60

// +[LCVHelper convert:toLcvPoseData:]
// Type encoding: v32@0:8{LabsCVObjCppReferenceWrapper<const std::vector<LabsCV::Core::PoseFrameData>>=^v}16@24
// Implementation: 0x109225f80

// +[LCVHelper convert:toPoseData:]
// Type encoding: v32@0:8@16{LabsCVObjCppReferenceWrapper<std::vector<LabsCV::Core::PoseFrameData>>=^v}24
// Implementation: 0x1092260b4

// +[LCVHelper convert:toPoseFrameData:]
// Type encoding: v32@0:8@16{LabsCVObjCppReferenceWrapper<LabsCV::Core::PoseFrameData>=^{PoseFrameData}}24
// Implementation: 0x109226418

// +[LCVHelper convert:toLcvTimestampData:]
// Type encoding: v32@0:8{LabsCVObjCppReferenceWrapper<const std::vector<double>>=^v}16@24
// Implementation: 0x109226660

// +[LCVHelper convert:toLcvCalibrationData:]
// Type encoding: v32@0:8{LabsCVObjCppReferenceWrapper<const LabsCV::Depth::CalibrationData>=^{CalibrationData}}16@24
// Implementation: 0x109226738

// +[LCVHelper convert:toLcvStabilizerFrameData:]
// Type encoding: v32@0:8{LabsCVObjCppReferenceWrapper<const LabsCV::Core::StabilizerFrameData>=^{StabilizerFrameData}}16@24
// Implementation: 0x109226874

// +[LCVHelper convert:toLcvStabilizerData:]
// Type encoding: v32@0:8{LabsCVObjCppReferenceWrapper<const std::vector<LabsCV::Core::StabilizerFrameData>>=^v}16@24
// Implementation: 0x1092269c4

// +[LCVHelper copy:toCvMat:]
// Type encoding: v32@0:8@16{LabsCVObjCppReferenceWrapper<cv::Mat>=^{Mat}}24
// Implementation: 0x109226aec

// +[LCVHelper copy:toLcvImage:]
// Type encoding: v32@0:8{LabsCVObjCppReferenceWrapper<const cv::Mat>=^{Mat}}16@24
// Implementation: 0x109226c70

// +[LCVHelper wrap:withLcvImage:]
// Type encoding: v32@0:8{LabsCVObjCppReferenceWrapper<const cv::Mat>=^{Mat}}16@24
// Implementation: 0x109226d38

// +[LCVHelper convert:toArray:]
// Type encoding: v32@0:8{LabsCVObjCppReferenceWrapper<const cv::Mat>=^{Mat}}16@24
// Implementation: 0x109226e04

// +[LCVHelper primaryCameraFromNativePrimaryCamera:]
// Type encoding: q20@0:8C16
// Implementation: 0x109226ef0

// +[LCVHelper depthQualityFromNativeDepthQuality:]
// Type encoding: q20@0:8C16
// Implementation: 0x109226f58

@end
