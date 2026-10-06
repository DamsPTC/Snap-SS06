// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCObservable
// Superclass: NSObject
// Address: 0xae0bd8

@interface SCObservable


// -[SCObservable withLatestFrom:combiner:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x619214

// -[SCObservable timerInterval:performer:]
// Type encoding: @32@0:8d16@24
// Implementation: 0x61904c

// -[SCObservable timeoutInterval:]
// Type encoding: @24@0:8d16
// Implementation: 0x618f1c

// -[SCObservable throttle:onPerformer:]
// Type encoding: @32@0:8d16@24
// Implementation: 0x618764

// -[SCObservable throttle:onPerformer:timeProvider:]
// Type encoding: @40@0:8d16@24@32
// Implementation: 0x6187e8

// -[SCObservable take:]
// Type encoding: @24@0:8Q16
// Implementation: 0x618640

// -[SCObservable switchMap:]
// Type encoding: @24@0:8@?16
// Implementation: 0x6184a4

// -[SCObservable startWith:]
// Type encoding: @24@0:8@16
// Implementation: 0x618254

// -[SCObservable share]
// Type encoding: @16@0:8
// Implementation: 0x617d2c

// -[SCObservable shareReplay:]
// Type encoding: @24@0:8Q16
// Implementation: 0x617d90

// -[SCObservable scanWithinInitialValue:accumulator:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x61797c

// -[SCObservable publish]
// Type encoding: @16@0:8
// Implementation: 0x6176c0

// -[SCObservable subscribeOnPerformer:]
// Type encoding: @24@0:8@16
// Implementation: 0x616d4c

// -[SCObservable subscribeOnPerformer:preferSynchronous:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x616d54

// -[SCObservable observeOnPerformer:]
// Type encoding: @24@0:8@16
// Implementation: 0x616ce0

// -[SCObservable observeOnPerformer:preferSynchronous:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x616ce8

// -[SCObservable map:]
// Type encoding: @24@0:8@?16
// Implementation: 0x616850

// -[SCObservable flatMapLatest:]
// Type encoding: @24@0:8@?16
// Implementation: 0x616564

// -[SCObservable flatMap:]
// Type encoding: @24@0:8@?16
// Implementation: 0x6163c8

// -[SCObservable first]
// Type encoding: @16@0:8
// Implementation: 0x616254

// -[SCObservable filter:]
// Type encoding: @24@0:8@?16
// Implementation: 0x6161f8

// -[SCObservable doOnDispose:]
// Type encoding: @24@0:8@?16
// Implementation: 0x615f30

// -[SCObservable doOnNext:]
// Type encoding: @24@0:8@?16
// Implementation: 0x615d34

// -[SCObservable doOnComplete:]
// Type encoding: @24@0:8@?16
// Implementation: 0x615d3c

// -[SCObservable _doOnNext:onComplete:]
// Type encoding: @32@0:8@?16@?24
// Implementation: 0x615d48

// -[SCObservable distinctUntilChanged]
// Type encoding: @16@0:8
// Implementation: 0x615898

// -[SCObservable distinctUntilChangedWithKeySelector:]
// Type encoding: @24@0:8@?16
// Implementation: 0x615908

// -[SCObservable distinctUntilChangedWithComparer:]
// Type encoding: @24@0:8@?16
// Implementation: 0x615974

// -[SCObservable debounceWithTimeInterval:performer:]
// Type encoding: @32@0:8d16@24
// Implementation: 0x615684

// -[SCObservable compactMap]
// Type encoding: @16@0:8
// Implementation: 0x6151ac

// -[SCObservable compactMap:]
// Type encoding: @24@0:8@?16
// Implementation: 0x61520c

// -[SCObservable combineLatest:combiner:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x614ea0

// -[SCObservable observeOn:]
// Type encoding: @24@0:8@16
// Implementation: 0x614aac

// -[SCObservable observeOn:preferSynchronous:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x614ab4

// -[SCObservable subscribe:]
// Type encoding: @24@0:8@16
// Implementation: 0x61aeac

// -[SCObservable subscribeOnNext:]
// Type encoding: @24@0:8@?16
// Implementation: 0x61af08

// -[SCObservable subscribeOnComplete:]
// Type encoding: @24@0:8@?16
// Implementation: 0x61af84

// -[SCObservable subscribeOnNext:onComplete:]
// Type encoding: @32@0:8@?16@?24
// Implementation: 0x61b000

// -[SCObservable unsubscribe:]
// Type encoding: v24@0:8@16
// Implementation: 0x61b090

// +[SCObservable never]
// Type encoding: @16@0:8
// Implementation: 0x61ac10

// +[SCObservable just:]
// Type encoding: @24@0:8@16
// Implementation: 0x61ab1c

// +[SCObservable justAll:]
// Type encoding: @24@0:8@16
// Implementation: 0x61ab68

// +[SCObservable future:]
// Type encoding: @24@0:8@16
// Implementation: 0x61a7a4

// +[SCObservable future:performer:preferSynchronous:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x61a7f8

// +[SCObservable from:]
// Type encoding: @24@0:8@16
// Implementation: 0x61a508

// +[SCObservable empty]
// Type encoding: @16@0:8
// Implementation: 0x61a310

// +[SCObservable deferred:]
// Type encoding: @24@0:8@?16
// Implementation: 0x61a13c

// +[SCObservable create:]
// Type encoding: @24@0:8@?16
// Implementation: 0x619f0c

// +[SCObservable merge:]
// Type encoding: @24@0:8@16
// Implementation: 0x616c94

// +[SCObservable combineLatest:combiner:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x614e34

@end
