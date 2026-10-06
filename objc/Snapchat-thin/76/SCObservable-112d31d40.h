// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCObservable
// Superclass: NSObject
// Address: 0x112d31d40

@interface SCObservable


// -[SCObservable withLatestFrom:combiner:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x1006c0500

// -[SCObservable timerInterval:performer:]
// Type encoding: @32@0:8d16@24
// Implementation: 0x10bcbb018

// -[SCObservable timeoutInterval:]
// Type encoding: @24@0:8d16
// Implementation: 0x10bcbaee8

// -[SCObservable throttle:onPerformer:]
// Type encoding: @32@0:8d16@24
// Implementation: 0x10bcba730

// -[SCObservable throttle:onPerformer:timeProvider:]
// Type encoding: @40@0:8d16@24@32
// Implementation: 0x10bcba7b4

// -[SCObservable take:]
// Type encoding: @24@0:8Q16
// Implementation: 0x100077358

// -[SCObservable switchMap:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10052973c

// -[SCObservable startWith:]
// Type encoding: @24@0:8@16
// Implementation: 0x1004e85d4

// -[SCObservable share]
// Type encoding: @16@0:8
// Implementation: 0x10bcba1f4

// -[SCObservable shareReplay:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10bcba258

// -[SCObservable scanWithinInitialValue:accumulator:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x10bcb9e44

// -[SCObservable publish]
// Type encoding: @16@0:8
// Implementation: 0x10bcb9c30

// -[SCObservable subscribeOnPerformer:]
// Type encoding: @24@0:8@16
// Implementation: 0x100bce170

// -[SCObservable subscribeOnPerformer:preferSynchronous:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x100bce178

// -[SCObservable observeOnPerformer:]
// Type encoding: @24@0:8@16
// Implementation: 0x1000d81f0

// -[SCObservable observeOnPerformer:preferSynchronous:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1000d81f8

// -[SCObservable map:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10041eda4

// -[SCObservable flatMapLatest:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10bcb9974

// -[SCObservable flatMap:]
// Type encoding: @24@0:8@?16
// Implementation: 0x100672530

// -[SCObservable first]
// Type encoding: @16@0:8
// Implementation: 0x100077350

// -[SCObservable filter:]
// Type encoding: @24@0:8@?16
// Implementation: 0x1003c2fc4

// -[SCObservable doOnDispose:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10bcb97a0

// -[SCObservable doOnNext:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10bcb95a4

// -[SCObservable doOnComplete:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10bcb95ac

// -[SCObservable _doOnNext:onComplete:]
// Type encoding: @32@0:8@?16@?24
// Implementation: 0x10bcb95b8

// -[SCObservable distinctUntilChanged]
// Type encoding: @16@0:8
// Implementation: 0x100425ce8

// -[SCObservable distinctUntilChangedWithKeySelector:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10bcb9178

// -[SCObservable distinctUntilChangedWithComparer:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10bcb91e4

// -[SCObservable debounceWithTimeInterval:performer:]
// Type encoding: @32@0:8d16@24
// Implementation: 0x1006b94e8

// -[SCObservable compactMap]
// Type encoding: @16@0:8
// Implementation: 0x1006c04c0

// -[SCObservable compactMap:]
// Type encoding: @24@0:8@?16
// Implementation: 0x1006b93fc

// -[SCObservable combineLatest:combiner:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x1003c2e64

// -[SCObservable observeOn:]
// Type encoding: @24@0:8@16
// Implementation: 0x1000bcf14

// -[SCObservable observeOn:preferSynchronous:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1000bcf1c

// -[SCObservable toSCBridgeObservable]
// Type encoding: @16@0:8
// Implementation: 0x10b09bdc0

// -[SCObservable mapResultToImage]
// Type encoding: @16@0:8
// Implementation: 0x1090125fc

// -[SCObservable mapImageToResult]
// Type encoding: @16@0:8
// Implementation: 0x1090125e0

// -[SCObservable synchronizedWith:performer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x109011b24

// -[SCObservable switchOnNext]
// Type encoding: @16@0:8
// Implementation: 0x108e3ebd4

// -[SCObservable creativeTools_debounce:]
// Type encoding: @24@0:8d16
// Implementation: 0x108e3eb94

// -[SCObservable snapcodeMetadataObservable]
// Type encoding: @16@0:8
// Implementation: 0x10600fd8c

// -[SCObservable barcodeResultObservable]
// Type encoding: @16@0:8
// Implementation: 0x10600ff68

// -[SCObservable subscribe:]
// Type encoding: @24@0:8@16
// Implementation: 0x10041ea50

// -[SCObservable subscribeOnNext:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10007e9f0

// -[SCObservable subscribeOnComplete:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10bcbbc10

// -[SCObservable subscribeOnNext:onComplete:]
// Type encoding: @32@0:8@?16@?24
// Implementation: 0x1000b6ca0

// -[SCObservable unsubscribe:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bcbbc8c

// +[SCObservable never]
// Type encoding: @16@0:8
// Implementation: 0x10bcbbbc0

// +[SCObservable just:]
// Type encoding: @24@0:8@16
// Implementation: 0x10052a290

// +[SCObservable justAll:]
// Type encoding: @24@0:8@16
// Implementation: 0x10bcbbb18

// +[SCObservable future:]
// Type encoding: @24@0:8@16
// Implementation: 0x10bcbb9cc

// +[SCObservable future:performer:preferSynchronous:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x10bcbba20

// +[SCObservable from:]
// Type encoding: @24@0:8@16
// Implementation: 0x10bcbb730

// +[SCObservable empty]
// Type encoding: @16@0:8
// Implementation: 0x100b976a8

// +[SCObservable deferred:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10049b2d0

// +[SCObservable create:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10041e870

// +[SCObservable merge:]
// Type encoding: @24@0:8@16
// Implementation: 0x100527214

// +[SCObservable combineLatest:combiner:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x100526558

// +[SCObservable loadingObservable:targetObservable:failureObservable:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x109011f9c

// +[SCObservable imageSynchronizationFutureFromObservables:]
// Type encoding: @24@0:8@16
// Implementation: 0x109011a68

// +[SCObservable resizedImage:imageViewContext:performer:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x109011848

// +[SCObservable resizedImageResult:imageViewContext:performer:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10901190c

// +[SCObservable imageNamed:performer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x109011790

// +[SCObservable imageOnPerformer:provider:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x109011500

// +[SCObservable imageOnPerformer:future:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x109011634

// +[SCObservable imageResultOnPerformer:future:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x109011678

@end
