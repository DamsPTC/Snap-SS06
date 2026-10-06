// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKWebDialog
// Superclass: NSObject
// Address: 0x1129e9ab8

@interface FBSDKWebDialog

// Property: shouldDeferVisibility; attributes: TB,N,VshouldDeferVisibility
// Property: delegate; attributes: T@"<FBSDKWebDialogDelegate>",N,W,Vdelegate
// Property: name; attributes: T@"NSString",N,C
// Property: webViewFrame; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},N,VwebViewFrame
// Property: parameters; attributes: T@"NSDictionary",N,C
// Property: backgroundView; attributes: T@"UIView",N,&,VbackgroundView
// Property: dialogView; attributes: T@"FBSDKWebDialogView",N,&,VdialogView
// Property: path; attributes: T@"NSString",N,C

// -[FBSDKWebDialog webDialogView:didCompleteWithResults:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104a08ec4

// -[FBSDKWebDialog webDialogView:didFailWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104a09054

// -[FBSDKWebDialog webDialogViewDidCancel:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a09180

// -[FBSDKWebDialog webDialogViewDidFinishLoad:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a09258

// -[FBSDKWebDialog shouldDeferVisibility]
// Type encoding: B16@0:8
// Implementation: 0x104a056d4

// -[FBSDKWebDialog setShouldDeferVisibility:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a05758

// -[FBSDKWebDialog delegate]
// Type encoding: @16@0:8
// Implementation: 0x104a05834

// -[FBSDKWebDialog setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a058c0

// -[FBSDKWebDialog name]
// Type encoding: @16@0:8
// Implementation: 0x104a05a64

// -[FBSDKWebDialog setName:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a05b20

// -[FBSDKWebDialog webViewFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x104a05c24

// -[FBSDKWebDialog setWebViewFrame:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x104a05cb4

// -[FBSDKWebDialog parameters]
// Type encoding: @16@0:8
// Implementation: 0x104a05dc4

// -[FBSDKWebDialog setParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a05e88

// -[FBSDKWebDialog backgroundView]
// Type encoding: @16@0:8
// Implementation: 0x104a05f9c

// -[FBSDKWebDialog setBackgroundView:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a06030

// -[FBSDKWebDialog dialogView]
// Type encoding: @16@0:8
// Implementation: 0x104a060d0

// -[FBSDKWebDialog setDialogView:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a06164

// -[FBSDKWebDialog path]
// Type encoding: @16@0:8
// Implementation: 0x104a06268

// -[FBSDKWebDialog setPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a06334

// -[FBSDKWebDialog initWithName:parameters:webViewFrame:path:]
// Type encoding: @72@0:8@16@24{CGRect={CGPoint=dd}{CGSize=dd}}32@64
// Implementation: 0x104a0671c

// -[FBSDKWebDialog initWithName:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a068dc

// -[FBSDKWebDialog show]
// Type encoding: v16@0:8
// Implementation: 0x104a07a30

// -[FBSDKWebDialog addObservers]
// Type encoding: v16@0:8
// Implementation: 0x104a07ac0

// -[FBSDKWebDialog deviceOrientationDidChangeNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a08074

// -[FBSDKWebDialog removeObservers]
// Type encoding: v16@0:8
// Implementation: 0x104a08168

// -[FBSDKWebDialog cancel]
// Type encoding: v16@0:8
// Implementation: 0x104a08490

// -[FBSDKWebDialog completeWith:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a085c8

// -[FBSDKWebDialog dismissWithAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a087dc

// -[FBSDKWebDialog failWith:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a0880c

// -[FBSDKWebDialog generateURLAndReturnError:]
// Type encoding: @24@0:8^@16
// Implementation: 0x104a088cc

// -[FBSDKWebDialog showWebView]
// Type encoding: v16@0:8
// Implementation: 0x104a08a20

// -[FBSDKWebDialog applicationFrameForOrientation]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x104a08a48

// -[FBSDKWebDialog updateViewWithScale:alpha:animationDuration:completion:]
// Type encoding: v48@0:8d16d24d32@?40
// Implementation: 0x104a08c34

// -[FBSDKWebDialog init]
// Type encoding: @16@0:8
// Implementation: 0x104a08d34

// -[FBSDKWebDialog .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104a08d94

@end
