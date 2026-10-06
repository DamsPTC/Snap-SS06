// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapSnapshotView
// Superclass: UIImageView
// Address: 0x112b029e8

@interface SCMapSnapshotView

// Property: zoomLevel; attributes: Td,R,N,V_zoomLevel
// Property: centerCoordinate; attributes: T{CLLocationCoordinate2D=dd},R,N,V_centerCoordinate

// -[SCMapSnapshotView composer_setViewport:snapshotView:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10687264c

// -[SCMapSnapshotView willEnqueueIntoComposerPool]
// Type encoding: B16@0:8
// Implementation: 0x1068727f8

// -[SCMapSnapshotView initWithFrame:snapshotCache:snapshotProvider:]
// Type encoding: @64@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48@56
// Implementation: 0x106872800

// -[SCMapSnapshotView initWithFrame:snapshotProvider:]
// Type encoding: @56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48
// Implementation: 0x1068728bc

// -[SCMapSnapshotView initWithSnapshotProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068728c8

// -[SCMapSnapshotView setBounds:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x1068728dc

// -[SCMapSnapshotView setFrame:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x106872948

// -[SCMapSnapshotView traitCollectionDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068729b4

// -[SCMapSnapshotView setCenterCoordinate:zoomLevel:completion:]
// Type encoding: v48@0:8{CLLocationCoordinate2D=dd}16d32@?40
// Implementation: 0x106872a7c

// -[SCMapSnapshotView prepareForReuse]
// Type encoding: v16@0:8
// Implementation: 0x106872b80

// -[SCMapSnapshotView _addLoadingCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106872bf0

// -[SCMapSnapshotView _updateImage]
// Type encoding: v16@0:8
// Implementation: 0x106872c90

// -[SCMapSnapshotView zoomLevel]
// Type encoding: d16@0:8
// Implementation: 0x1068732d0

// -[SCMapSnapshotView centerCoordinate]
// Type encoding: {CLLocationCoordinate2D=dd}16@0:8
// Implementation: 0x1068732e0

// -[SCMapSnapshotView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1068732f4

// +[SCMapSnapshotView bindAttributes:]
// Type encoding: v24@0:8@16
// Implementation: 0x106872780

@end
