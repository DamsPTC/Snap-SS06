// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFaceDetectionResult
// Superclass: NSObject
// Address: 0x112b8be28

@interface SCFaceDetectionResult

// Property: bounds; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},R,N,V_bounds
// Property: leftEyePosition; attributes: T{CGPoint=dd},R,N,V_leftEyePosition
// Property: leftEyeClosed; attributes: TB,R,N,V_leftEyeClosed
// Property: rightEyePosition; attributes: T{CGPoint=dd},R,N,V_rightEyePosition
// Property: rightEyeClosed; attributes: TB,R,N,V_rightEyeClosed
// Property: mouthPosition; attributes: T{CGPoint=dd},R,N,V_mouthPosition
// Property: hasSmile; attributes: TB,R,N,V_hasSmile

// -[SCFaceDetectionResult initWithBounds:leftEyePosition:leftEyeClosed:rightEyePosition:rightEyeClosed:mouthPosition:hasSmile:]
// Type encoding: @108@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16{CGPoint=dd}48B64{CGPoint=dd}68B84{CGPoint=dd}88B104
// Implementation: 0x107f48c5c

// -[SCFaceDetectionResult copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x107f48d14

// -[SCFaceDetectionResult hash]
// Type encoding: Q16@0:8
// Implementation: 0x107f48d38

// -[SCFaceDetectionResult isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x107f48ee0

// -[SCFaceDetectionResult bounds]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x107f49000

// -[SCFaceDetectionResult leftEyePosition]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x107f4900c

// -[SCFaceDetectionResult leftEyeClosed]
// Type encoding: B16@0:8
// Implementation: 0x107f49014

// -[SCFaceDetectionResult rightEyePosition]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x107f4901c

// -[SCFaceDetectionResult rightEyeClosed]
// Type encoding: B16@0:8
// Implementation: 0x107f49024

// -[SCFaceDetectionResult mouthPosition]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x107f4902c

// -[SCFaceDetectionResult hasSmile]
// Type encoding: B16@0:8
// Implementation: 0x107f49034

@end
