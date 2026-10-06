// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTimePickerViewController
// Superclass: UIViewController
// Address: 0x112a9f2f8

@interface SCTimePickerViewController

// Property: contentView; attributes: T@"UIView",&,N,V_contentView
// Property: contentScrollView; attributes: T@"UIScrollView",&,N,V_contentScrollView
// Property: trackingScrollView; attributes: T@"UIScrollView",&,N,V_trackingScrollView
// Property: backgroundImageView; attributes: T@"UIImageView",&,N,V_backgroundImageView
// Property: scaledBackgroundImage; attributes: T@"UIImage",&,N,V_scaledBackgroundImage
// Property: blurView; attributes: T@"UIVisualEffectView",&,N,V_blurView
// Property: selectionView; attributes: T@"UIView",&,N,V_selectionView
// Property: gradientView; attributes: T@"SCGradientView",&,N,V_gradientView
// Property: detailTimeLabel; attributes: T@"UILabel",&,N,V_detailTimeLabel
// Property: explainerLabel; attributes: T@"UILabel",&,N,V_explainerLabel
// Property: items; attributes: T@"NSArray",C,N,V_items
// Property: views; attributes: T@"NSArray",C,N,V_views
// Property: selectedItem; attributes: T@"SCTimePickerItem",&,N,V_selectedItem
// Property: tapGestureRecognizer; attributes: T@"UITapGestureRecognizer",&,N,V_tapGestureRecognizer
// Property: gestureBeginLocation; attributes: T{CGPoint=dd},N,V_gestureBeginLocation
// Property: delegate; attributes: T@"<SCTimePickerViewControllerDelegate>",W,N,V_delegate
// Property: selectedTime; attributes: T@"SCTimePickerItem",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTimePickerViewController initWithSelectedTimeItem:backgroundImageView:showInfinity:showLightningSnaps:lightningSnapsLast:messagingExperimentService:]
// Type encoding: @52@0:8@16@24B32B36B40@44
// Implementation: 0x105dd1f8c

// -[SCTimePickerViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x105dd2540

// -[SCTimePickerViewController viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x105dd2a2c

// -[SCTimePickerViewController viewWillLayoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x105dd2ad0

// -[SCTimePickerViewController viewDidLayoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x105dd2ca0

// -[SCTimePickerViewController viewWillTransitionToSize:withTransitionCoordinator:]
// Type encoding: v40@0:8{CGSize=dd}16@32
// Implementation: 0x105dd2e84

// -[SCTimePickerViewController animateIn]
// Type encoding: v16@0:8
// Implementation: 0x105dd3394

// -[SCTimePickerViewController animateOut:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105dd34e0

// -[SCTimePickerViewController _setupTrackingView]
// Type encoding: v16@0:8
// Implementation: 0x105dd3790

// -[SCTimePickerViewController _setupSelectedView]
// Type encoding: v16@0:8
// Implementation: 0x105dd3ad8

// -[SCTimePickerViewController _setupExplainerLabel]
// Type encoding: v16@0:8
// Implementation: 0x105dd3eb4

// -[SCTimePickerViewController _setupTimeItemViews]
// Type encoding: v16@0:8
// Implementation: 0x105dd4324

// -[SCTimePickerViewController _updatecontentScrollViewOffset]
// Type encoding: v16@0:8
// Implementation: 0x105dd4a4c

// -[SCTimePickerViewController _updateDetailTimeLabel]
// Type encoding: v16@0:8
// Implementation: 0x105dd4c44

// -[SCTimePickerViewController _updateExplainerLabelVisibility]
// Type encoding: v16@0:8
// Implementation: 0x105dd4eb0

// -[SCTimePickerViewController _updateScrollOffset]
// Type encoding: v16@0:8
// Implementation: 0x105dd4f14

// -[SCTimePickerViewController updateSelectionWithGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dd54b4

// -[SCTimePickerViewController setSelectedItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dd59f4

// -[SCTimePickerViewController itemIndexForLocation:]
// Type encoding: q32@0:8{CGPoint=dd}16
// Implementation: 0x105dd5b04

// -[SCTimePickerViewController scaledItemIndexForLocation:]
// Type encoding: q32@0:8{CGPoint=dd}16
// Implementation: 0x105dd5b60

// -[SCTimePickerViewController selectedTime]
// Type encoding: @16@0:8
// Implementation: 0x105dd5bbc

// -[SCTimePickerViewController centerForItemAtIndex:]
// Type encoding: {CGPoint=dd}24@0:8q16
// Implementation: 0x105dd5c3c

// -[SCTimePickerViewController tapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dd5ca4

// -[SCTimePickerViewController scrollViewWillBeginDragging:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dd5f68

// -[SCTimePickerViewController scrollViewDidEndDragging:willDecelerate:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105dd5fa0

// -[SCTimePickerViewController scrollViewDidScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dd5fe0

// -[SCTimePickerViewController scrollViewWillEndDragging:withVelocity:targetContentOffset:]
// Type encoding: v48@0:8@16{CGPoint=dd}24N^{CGPoint=dd}40
// Implementation: 0x105dd5fe4

// -[SCTimePickerViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105dd6094

// -[SCTimePickerViewController delegate]
// Type encoding: @16@0:8
// Implementation: 0x105dd61a8

// -[SCTimePickerViewController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dd61c8

// -[SCTimePickerViewController contentView]
// Type encoding: @16@0:8
// Implementation: 0x105dd61dc

// -[SCTimePickerViewController setContentView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dd61ec

// -[SCTimePickerViewController contentScrollView]
// Type encoding: @16@0:8
// Implementation: 0x105dd622c

// -[SCTimePickerViewController setContentScrollView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dd623c

// -[SCTimePickerViewController trackingScrollView]
// Type encoding: @16@0:8
// Implementation: 0x105dd627c

// -[SCTimePickerViewController setTrackingScrollView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dd628c

// -[SCTimePickerViewController backgroundImageView]
// Type encoding: @16@0:8
// Implementation: 0x105dd62cc

// -[SCTimePickerViewController setBackgroundImageView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dd62dc

// -[SCTimePickerViewController scaledBackgroundImage]
// Type encoding: @16@0:8
// Implementation: 0x105dd631c

// -[SCTimePickerViewController setScaledBackgroundImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dd632c

// -[SCTimePickerViewController blurView]
// Type encoding: @16@0:8
// Implementation: 0x105dd636c

// -[SCTimePickerViewController setBlurView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dd637c

// -[SCTimePickerViewController selectionView]
// Type encoding: @16@0:8
// Implementation: 0x105dd63bc

// -[SCTimePickerViewController setSelectionView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dd63cc

// -[SCTimePickerViewController gradientView]
// Type encoding: @16@0:8
// Implementation: 0x105dd640c

// -[SCTimePickerViewController setGradientView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dd641c

// -[SCTimePickerViewController detailTimeLabel]
// Type encoding: @16@0:8
// Implementation: 0x105dd645c

// -[SCTimePickerViewController setDetailTimeLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dd646c

// -[SCTimePickerViewController explainerLabel]
// Type encoding: @16@0:8
// Implementation: 0x105dd64ac

// -[SCTimePickerViewController setExplainerLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dd64bc

// -[SCTimePickerViewController items]
// Type encoding: @16@0:8
// Implementation: 0x105dd64fc

// -[SCTimePickerViewController setItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dd650c

// -[SCTimePickerViewController views]
// Type encoding: @16@0:8
// Implementation: 0x105dd6518

// -[SCTimePickerViewController setViews:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dd6528

// -[SCTimePickerViewController selectedItem]
// Type encoding: @16@0:8
// Implementation: 0x105dd6534

// -[SCTimePickerViewController tapGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x105dd6544

// -[SCTimePickerViewController setTapGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dd6554

// -[SCTimePickerViewController gestureBeginLocation]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x105dd6594

// -[SCTimePickerViewController setGestureBeginLocation:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x105dd65a8

// -[SCTimePickerViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105dd65bc

@end
