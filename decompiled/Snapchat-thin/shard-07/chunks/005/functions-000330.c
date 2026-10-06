/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1055fe4c8; end: 1055fe4cb; -[SCLocationManager _onApplicationWillEnterForeground] */

void FUN_1055fe4c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea1e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setAppForegrounded_112586138);
  return;
}



/* Entry: 1055fe4cc; end: 1055fe4cf; -[SCLocationManager _onApplicationDidEnterBackground] */

void FUN_1055fe4cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea1e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setAppBackgrounded_112586130);
  return;
}



/* Entry: 1055fe4d0; end: 1055fe4d3; -[SCLocationManager _onApplicationWillResignActive] */

void FUN_1055fe4d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea1e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setAppBackgrounded_112586130);
  return;
}



/* Entry: 1055fe4d4; end: 1055fe4eb; -[SCLocationManager _setAppBackgrounded] */

void FUN_1055fe4d4(long param_1)

{
  *(undefined1 *)(param_1 + 0x40) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010be86bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__recalculateDesiredLocationSetti_11257f490,
             &PTR____CFConstantStringClassReference_110df1a58,0);
  return;
}



/* Entry: 1055fe4ec; end: 1055fe617; -[SCLocationManager tweakDidChange:] */

void FUN_1055fe4ec(long param_1)

{
  long lVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  long lStack_30;
  long lStack_28;
  
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_release(lVar1);
  if (lVar1 != 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x1055fe590;
    puStack_38 = &UNK_110841f80;
    lStack_30 = param_1;
    _objc_retain(lVar1);
    lStack_28 = lVar1;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
    _objc_release(lStack_28);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1055fe618; end: 1055fe657; -[SCLocationManager _appStateDescription] */

void FUN_1055fe618(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dcdfb8;
  if (*(char *)(param_1 + 0x40) == '\0') {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dcdf98;
  }
  _objc_retain(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1055fe658; end: 1055fe6d7; -[SCLocationManager _logStartUpdatingLocationFromSource:observerIdentifier:] */

void FUN_1055fe658(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bdccde0(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_10560448c(uVar1,param_1,param_4,param_3,1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055fe6d8; end: 1055fe757; -[SCLocationManager _logStopUpdatingLocationFromSource:observerIdentifier:] */

void FUN_1055fe6d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bdccde0(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_10560474c(uVar1,param_1,param_4,param_3,1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055fe758; end: 1055fe75f; -[SCLocationManager setLocation:] */

void FUN_1055fe758(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 1055fe760; end: 1055fe76b; -[SCLocationManager heading] */

void FUN_1055fe760(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,200,1);
  return;
}



/* Entry: 1055fe76c; end: 1055fe773; -[SCLocationManager setHeading:] */

void FUN_1055fe76c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 1055fe774; end: 1055fe77b; -[SCLocationManager currentAuthorizationStatus] */

undefined4 FUN_1055fe774(long param_1)

{
  return *(undefined4 *)(param_1 + 0xb8);
}



/* Entry: 1055fe77c; end: 1055fe783; -[SCLocationManager setState:] */

void FUN_1055fe77c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}



/* Entry: 1055fe784; end: 1055fe8ef; -[SCLocationManager .cxx_destruct] */

void FUN_1055fe784(long param_1)

{
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055fe8f0; end: 1055fea1b; -[SCLocationManagerRequestWithTimeoutObserver initWithLocationManager:desiredAccuracy:callbackQueue:callback:observerAttributedFeature:] */

undefined1 *
FUN_1055fe8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126e9578;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x30) = param_1;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar4);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_4);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar4);
    puVar3 = &UNK_10f2ddcbb;
    _dispatch_queue_create(&UNK_10f2ddcbb,0);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1055fea1c; end: 1055fea77; -[SCLocationManagerRequestWithTimeoutObserver startWithTimeout:] */

void FUN_1055fea1c(undefined8 param_1,long param_2)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1055fea78;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_2;
  uStack_18 = param_1;
  func_0x00010007380c(*(undefined8 *)(param_2 + 0x20),&puStack_40);
  return;
}



/* Entry: 1055fea78; end: 1055febc7;  */

void FUN_1055fea78(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar4 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained();
  lVar1 = lVar4;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  if ((lVar1 != 0) && (lVar4 = lVar1, func_0x000107f492b0(0x404e000000000000), (int)lVar4 != 0)) {
    func_0x00010c0e5000(*(undefined8 *)(param_1 + 0x20));
  }
  lVar4 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar4);
  func_0x00010befa200();
  _objc_release(lVar4);
  lVar4 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar4 + 0x18) != 0) {
    _dispatch_block_cancel();
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = 0;
    _objc_release(uVar2);
    lVar4 = *(long *)(param_1 + 0x20);
  }
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1055febc8;
  puStack_40 = &UNK_110842e18;
  lStack_38 = lVar4;
  _objc_retain(lVar4);
  uVar2 = 0;
  func_0x0001008553e8(0,&puStack_58);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = uVar2;
  _objc_release(uVar3);
  _dispatch_time(0,(long)(*(double *)(param_1 + 0x28) * 1000000000.0));
  func_0x00010058c530();
  _objc_release(lVar4);
  _objc_release(lVar1);
  return;
}



/* Entry: 1055febc8; end: 1055febcf;  */

void FUN_1055febc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdfaa90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__deliverFinalCallbackAndStopObse_11255c440);
  return;
}



/* Entry: 1055febd0; end: 1055feca3; -[SCLocationManagerRequestWithTimeoutObserver _deliverFinalCallbackAndStopObserving] */

void FUN_1055febd0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 uStack_41;
  
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c09ea00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x000107f492b0(0x404e000000000000);
    if ((int)lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      lVar3 = param_1 + 8;
      _objc_loadWeakRetained(lVar3);
      lVar4 = lVar3;
      func_0x00010c09ea00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
    _objc_release(lVar2);
    _objc_release(lVar1);
    uStack_41 = 1;
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),lVar4,1,&uStack_41);
    func_0x00010be03fe0(param_1);
    _objc_release(lVar4);
  }
  return;
}



/* Entry: 1055feca4; end: 1055fecab; -[SCLocationManagerRequestWithTimeoutObserver locationObserverWantsActiveLocationMonitoring] */

undefined8 FUN_1055feca4(void)

{
  return 1;
}



/* Entry: 1055fecac; end: 1055fed6f; -[SCLocationManagerRequestWithTimeoutObserver onLocationUpdate:] */

void FUN_1055fecac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_1055fed70;
    puStack_50 = &UNK_110841fb0;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    uStack_48 = param_3;
    func_0x00010007380c(uVar1,&puStack_68);
    _objc_release(uStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1055fed70; end: 1055feda3;  */

void FUN_1055fed70(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4f660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055feda4; end: 1055fedcb; -[SCLocationManagerRequestWithTimeoutObserver locationObserverAttributedFeature] */

void FUN_1055feda4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055fedcc; end: 1055fee23; -[SCLocationManagerRequestWithTimeoutObserver _locationListenerHelperWithLocation:] */

void FUN_1055fedcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  char cStack_21;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    cStack_21 = '\0';
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,0,&cStack_21);
    if (cStack_21 == '\x01') {
      func_0x00010be03fe0(param_1);
    }
  }
  return;
}



/* Entry: 1055fee24; end: 1055feedb; -[SCLocationManagerRequestWithTimeoutObserver _dispatchStopObserving] */

void FUN_1055fee24(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x1055feeb0;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010007380c(uVar1,&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1055feedc; end: 1055fef33; -[SCLocationManagerRequestWithTimeoutObserver _stopObserving] */

void FUN_1055feedc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
    _objc_release(uVar1);
  }
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c12d560();
  _objc_release(lVar2);
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



/* Entry: 1055fef34; end: 1055fef3b; -[SCLocationManagerRequestWithTimeoutObserver locationObserverDispatchQueue] */

undefined8 FUN_1055fef34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1055fef3c; end: 1055fef43; -[SCLocationManagerRequestWithTimeoutObserver locationObserverDesiredAccuracy] */

undefined8 FUN_1055fef3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1055fef44; end: 1055fef4b; -[SCLocationManagerRequestWithTimeoutObserver callbackBlock] */

undefined8 FUN_1055fef44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1055fef4c; end: 1055fef53; -[SCLocationManagerRequestWithTimeoutObserver attributedFeature] */

undefined8 FUN_1055fef4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1055fef54; end: 1055fefaf; -[SCLocationManagerRequestWithTimeoutObserver .cxx_destruct] */

void FUN_1055fef54(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1055fefb0; end: 1055fefc7; -[SCLocationRequest initWithAttributedFeature:wantsActiveLocationMonitoring:desiredLocationAccuracy:] */

void FUN_1055fefb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff4e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,*(undefined8 *)PTR__kCLDistanceFilterNone_110349b68,param_2,
             PTR_s_initWithAttributedFeature_wantsA_1125dad60,param_4,param_5,0,0);
  return;
}



/* Entry: 1055fefc8; end: 1055ff077; -[SCLocationRequest initWithAttributedFeature:wantsActiveLocationMonitoring:desiredLocationAccuracy:desiredDistanceFilter:wantsActiveHeadingMonitoring:wantsBackgroundLocationMonitoring:] */

undefined1 *
FUN_1055fefc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126e9580;
  uStack_60 = param_3;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = param_6;
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined8 *)((long)puVar1 + 0x20) = param_2;
    *(undefined1 *)((long)puVar1 + 0x28) = param_7;
    *(undefined1 *)((long)puVar1 + 0x29) = param_8;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 1055ff078; end: 1055ff09b; -[SCLocationRequest copyWithZone:] */

undefined8 FUN_1055ff078(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1055ff09c; end: 1055ff0c3; -[SCLocationRequest attributedFeature] */

void FUN_1055ff09c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055ff0c4; end: 1055ff0cb; -[SCLocationRequest wantsActiveLocationMonitoring] */

undefined1 FUN_1055ff0c4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 1055ff0cc; end: 1055ff0d3; -[SCLocationRequest desiredLocationAccuracy] */

undefined8 FUN_1055ff0cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1055ff0d4; end: 1055ff0db; -[SCLocationRequest desiredDistanceFilter] */

undefined8 FUN_1055ff0d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1055ff0dc; end: 1055ff0e3; -[SCLocationRequest wantsActiveHeadingMonitoring] */

undefined1 FUN_1055ff0dc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 1055ff0e4; end: 1055ff0eb; -[SCLocationRequest wantsBackgroundLocationMonitoring] */

undefined1 FUN_1055ff0e4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x29);
}



/* Entry: 1055ff0ec; end: 1055ff0fb; -[SCLocationRequest .cxx_destruct] */

void FUN_1055ff0ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055ff0fc; end: 1055ff103; -[SCDeviceLocationPermissionsManager hasAuthorizationStatus] */

void FUN_1055ff0fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd45d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_hasAuthorizationStatus_1125d2b18);
  return;
}



/* Entry: 1055ff104; end: 1055ff10b; -[SCDeviceLocationPermissionsManager locationAccuracy] */

void FUN_1055ff104(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09eab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_locationAccuracy_1126054b8);
  return;
}



/* Entry: 1055ff10c; end: 1055ff113; -[SCDeviceLocationPermissionsManager requestLocationAuthorizationWithHandler:] */

void FUN_1055ff10c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c135c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_requestLocationPermissionWithCom_11262b120);
  return;
}



/* Entry: 1055ff114; end: 1055ff18b; -[SCDeviceLocationPermissionsManager .cxx_destruct] */

void FUN_1055ff114(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055ff18c; end: 1055ff203; -[SCUserLocationPermissionsManager isUnderAgeLocationConsentEnabled] */

undefined8 FUN_1055ff18c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c06f220();
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0xa8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c081ca0();
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 1055ff204; end: 1055ff21b; -[SCUserLocationPermissionsManager showMHMDSpecificCopy] */

void FUN_1055ff204(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110df1af8,0,0);
  return;
}



/* Entry: 1055ff21c; end: 1055ff2cb;  */

void FUN_1055ff21c(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010bdd15a0();
  _objc_release(lVar3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1055ff2cc;
  puStack_50 = &UNK_11089efc0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_48 = uVar2;
  lStack_40 = lVar4;
  uStack_38 = param_2 == 4;
  func_0x00010007380c(uVar1,&puStack_68);
  _objc_release(uStack_48);
  return;
}



/* Entry: 1055ff2cc; end: 1055ff2df;  */

void FUN_1055ff2cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001055ff2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
             *(undefined1 *)(param_1 + 0x30));
  return;
}



/* Entry: 1055ff2e0; end: 1055ff2ef; -[SCUserLocationPermissionsManager requestLocationPermissionWithRequestType:presentationDelegate:handler:] */

void FUN_1055ff2e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010c135c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_requestLocationPermissionWithReq_11262b138,param_3,0,param_4,param_5);
  return;
}



/* Entry: 1055ff2f0; end: 1055ff40b; -[SCUserLocationPermissionsManager requestLocationPermissionWithRequestType:promptType:presentationDelegate:handler:] */

void FUN_1055ff2f0(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_60,auStack_48);
  _objc_retain(param_5);
  uStack_58 = param_3;
  uStack_50 = param_4;
  _objc_retain(param_6);
  func_0x00010bfa8140(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 1055ff40c; end: 1055ff46b;  */

void FUN_1055ff40c(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be91460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055ff46c; end: 1055ff59f; -[SCUserLocationPermissionsManager requestBackgroundLocationPermissionWithFriendName:presentationDelegate:handler:] */

void FUN_1055ff46c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010bfa8140(uVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1055ff5a0; end: 1055ff5ff;  */

void FUN_1055ff5a0(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be91460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055ff600; end: 1055ff8f7; -[SCUserLocationPermissionsManager _requestLocationPermissionForSystemStatus:presentationDelegate:requestType:promptType:friendName:feature:handler:] */

void FUN_1055ff600(ulong param_1,undefined8 param_2,int param_3,undefined8 param_4,long param_5,
                  undefined4 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined **ppuVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [8];
  ulong uStack_108;
  long lStack_100;
  int iStack_f8;
  undefined4 uStack_f4;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined4 uStack_78;
  undefined1 auStack_70 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  if ((param_3 == 0) && (param_5 == 3)) {
    _objc_initWeak(auStack_70,param_1);
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_1055ff8f8;
    puStack_a8 = &UNK_11089f080;
    _objc_copyWeak(auStack_80,auStack_70);
    _objc_retain(param_4);
    uStack_a0 = param_4;
    uStack_78 = param_6;
    _objc_retain(param_7);
    uStack_98 = param_7;
    _objc_retain(param_8);
    uStack_90 = param_8;
    _objc_retain(param_9);
    uStack_88 = param_9;
    ppuVar1 = &puStack_c0;
    _objc_retainBlock(ppuVar1);
    func_0x00010c135c40(param_1);
    _objc_release(ppuVar1);
    _objc_release(uStack_88);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    puVar4 = auStack_80;
  }
  else {
    uVar2 = param_1;
    func_0x00010bdd15a0();
    uVar3 = param_1;
    func_0x00010be62720();
    if (((uVar3 & 1) == 0) && (((uVar2 != 4 && uVar2 != 2) && param_5 == 0 || (uVar2 == 1)))) {
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e8 = 0xc2000000;
      pcStack_e0 = FUN_1055ff964;
      puStack_d8 = &UNK_11084a9b8;
      _objc_retain(param_9);
      uStack_d0 = param_9;
      uStack_c8 = uVar2 == 1;
      func_0x000100162d98("APPSTORE",&puStack_f0);
      _objc_release(uStack_d0);
      goto LAB_1055ff844;
    }
    _objc_initWeak(auStack_70,param_1);
    puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_148 = 0xc2000000;
    pcStack_140 = FUN_1055ff978;
    puStack_138 = &UNK_1108926b0;
    _objc_copyWeak(auStack_110,auStack_70);
    uStack_108 = uVar2;
    iStack_f8 = param_3;
    _objc_retain(param_4);
    uStack_130 = param_4;
    lStack_100 = param_5;
    uStack_f4 = param_6;
    _objc_retain(param_7);
    uStack_128 = param_7;
    _objc_retain(param_8);
    uStack_120 = param_8;
    _objc_retain(param_9);
    uStack_118 = param_9;
    func_0x000100162d98("APPSTORE",&puStack_150);
    _objc_release(uStack_118);
    _objc_release(uStack_120);
    _objc_release(uStack_128);
    _objc_release(uStack_130);
    puVar4 = auStack_110;
  }
  _objc_destroyWeak(puVar4);
  _objc_destroyWeak(auStack_70);
LAB_1055ff844:
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_4);
  return;
}



/* Entry: 1055ff8f8; end: 1055ff963;  */

void FUN_1055ff8f8(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained(param_1);
    func_0x00010be91460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001055ff960. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))();
  return;
}



/* Entry: 1055ff964; end: 1055ff977;  */

void FUN_1055ff964(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001055ff974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 1055ff978; end: 1055ff9c3;  */

void FUN_1055ff978(long param_1)

{
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be83240();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055ff9c4; end: 1055ffa57; -[SCUserLocationPermissionsManager _dismissDialog:presentationDelegate:completion:] */

void FUN_1055ff9c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 == 0) ||
     (uVar1 = param_4,
     _objc_opt_respondsToSelector(param_4,PTR_s_permissionsManagerWantsToDismiss_11261c1b0),
     (uVar1 & 1) == 0)) {
    func_0x00010bf84b00(param_3);
  }
  else {
    func_0x00010c0f9e40(param_4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055ffa58; end: 1055fffe3; -[SCUserLocationPermissionsManager _promptForLocationPermissionsWithPermissionStatus:systemStatus:presentationDelegate:requestType:promptType:friendName:feature:completionHandler:] */

void FUN_1055ffa58(undefined **param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined **ppuStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined1 auStack_150 [8];
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  ulong uStack_128;
  undefined **ppuStack_120;
  undefined1 auStack_118 [8];
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  ulong uStack_e8;
  undefined **ppuStack_e0;
  undefined1 auStack_d8 [8];
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retainBlock();
  puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1055fffe4;
  puStack_b0 = &UNK_11089f0b0;
  puStack_90 = puStack_a0;
  _objc_retain();
  ppuVar2 = &puStack_c8;
  uStack_a8 = param_10;
  _objc_retainBlock();
  func_0x00010bea4da0(param_1);
  _objc_initWeak(auStack_d0,param_1);
  puStack_108 = puVar6;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_10560000c;
  puStack_f0 = &UNK_11089f0e0;
  _objc_copyWeak(auStack_d8,auStack_d0);
  _objc_retain(param_5);
  uStack_e8 = param_5;
  _objc_retain(ppuVar2);
  ppuVar3 = &puStack_108;
  ppuStack_e0 = ppuVar2;
  _objc_retainBlock();
  ppuVar4 = param_1;
  func_0x00010beb5b40();
  if (((ulong)ppuVar4 & 1) == 0) {
    if (param_3 < 2) {
      if (param_3 == 0) goto LAB_1055ffc94;
      if (param_3 != 1) goto LAB_1055ffefc;
      ppuVar4 = param_1;
      func_0x00010be62720();
      if ((int)ppuVar4 == 0) {
        (*(code *)ppuVar2[2])(ppuVar2,1);
        goto LAB_1055ffefc;
      }
      puStack_1b8 = puVar6;
      uStack_1b0 = 0xc2000000;
      uStack_1a8 = 0x105600400;
      puStack_1a0 = &UNK_11089f140;
      _objc_retain(ppuVar2);
      ppuVar4 = &puStack_1b8;
      ppuStack_198 = ppuVar2;
      _objc_retainBlock(ppuVar4);
      func_0x00010bebb260(param_1);
      _objc_release(ppuVar4);
      ppuVar4 = ppuStack_198;
    }
    else if (param_3 == 4) {
LAB_1055ffc94:
      if ((param_6 == 3) &&
         (uVar5 = param_5,
         _objc_opt_respondsToSelector(param_5,PTR_s_permissionsManagerModalPresentat_11261c1a8),
         (uVar5 & 1) != 0)) goto LAB_1055ffb94;
      ppuVar4 = param_1;
      func_0x00010c238400();
      uVar1 = (uint)ppuVar4 ^ 1;
      if (param_5 == 0) {
        uVar1 = 1;
      }
      if ((uVar1 & 1) == 0) {
        puStack_148 = puVar6;
        uStack_140 = 0xc2000000;
        pcStack_138 = FUN_1056000e4;
        puStack_130 = &UNK_11089f110;
        _objc_copyWeak(auStack_118,auStack_d0);
        _objc_retain(param_5);
        uStack_128 = param_5;
        lStack_110 = param_6;
        _objc_retain(ppuVar2);
        ppuVar4 = &puStack_148;
        ppuStack_120 = ppuVar2;
        _objc_retainBlock(ppuVar4);
        func_0x00010bebb260(param_1);
        _objc_release(ppuVar4);
        _objc_release(ppuStack_120);
        _objc_release(uStack_128);
        _objc_destroyWeak(auStack_118);
        goto LAB_1055ffefc;
      }
      ppuVar4 = param_1;
      func_0x00010be62720();
      if ((int)ppuVar4 == 0) {
        puVar6 = param_1[6];
        func_0x00010beca260(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c135c20(puVar6);
        ppuVar4 = param_1;
      }
      else {
        puStack_190 = puVar6;
        uStack_188 = 0xc2000000;
        uStack_180 = 0x105600244;
        puStack_178 = &UNK_11089f170;
        _objc_retain(ppuVar2);
        ppuStack_160 = ppuVar2;
        _objc_copyWeak(auStack_150,auStack_d0);
        _objc_retain(param_5);
        uStack_170 = param_5;
        _objc_retain(param_9);
        uStack_168 = param_9;
        _objc_retain(ppuVar3);
        ppuVar4 = &puStack_190;
        ppuStack_158 = ppuVar3;
        _objc_retainBlock(ppuVar4);
        puVar6 = param_1[6];
        func_0x00010beca260(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c135c20(puVar6);
        _objc_release(param_1);
        _objc_release(ppuVar4);
        _objc_release(ppuStack_158);
        _objc_release(uStack_168);
        _objc_release(uStack_170);
        _objc_destroyWeak(auStack_150);
        ppuVar4 = ppuStack_160;
      }
    }
    else {
      ppuVar4 = param_1;
      if (param_3 == 3) {
        func_0x00010be24340(param_1);
        _objc_retainAutoreleasedReturnValue();
        if (param_5 == 0) {
          (*(code *)ppuVar3[2])(ppuVar3,0);
        }
        else {
          func_0x00010beb94e0(param_1);
        }
      }
      else {
        if (param_3 != 2) goto LAB_1055ffefc;
        func_0x00010bee6f60(param_1);
        _objc_retainAutoreleasedReturnValue();
        if (param_5 == 0) {
          (*(code *)ppuVar3[2])(ppuVar3,0);
        }
        else {
          func_0x00010bebb260(param_1);
        }
      }
    }
    _objc_release(ppuVar4);
  }
  else {
LAB_1055ffb94:
    func_0x00010be7a220(param_1);
  }
LAB_1055ffefc:
  _objc_release(ppuVar3);
  _objc_release(ppuStack_e0);
  _objc_release(uStack_e8);
  _objc_destroyWeak(auStack_d8);
  _objc_destroyWeak(auStack_d0);
  _objc_release(uStack_a8);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(param_10);
  _objc_release(ppuVar2);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  return;
}



/* Entry: 1055fffe4; end: 10560000b;  */

void FUN_1055fffe4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  if ((*(byte *)(lVar1 + 0x18) & 1) != 0) {
    return;
  }
  *(undefined1 *)(lVar1 + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x000105600008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10560000c; end: 1056000d3;  */

void FUN_10560000c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be56f60();
  _objc_release(lVar2);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  func_0x00010be02960(lVar2);
  _objc_release(param_2);
  _objc_release(lVar2);
  _objc_release(uVar1);
  return;
}



/* Entry: 1056000d4; end: 1056000e3;  */

void FUN_1056000d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001056000e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1056000e4; end: 1056001d7;  */

void FUN_1056000e4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0x38);
    _objc_copyWeak(auStack_50,param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    func_0x00010be02960(lVar1);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1056001d8; end: 1056003ef;  */

void FUN_1056001d8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010beca260();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c135c20(uVar2,param_2,uVar3,lVar1);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056003f0; end: 10560040f;  */

void FUN_1056003f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001056003fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
  return;
}



/* Entry: 105600410; end: 105600443; -[SCUserLocationPermissionsManager _shouldShowAlwaysLocationPermissionsPromptV2WithRequestType:permissionStatus:presentationDelegate:] */

uint FUN_105600410(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  
  if (param_3 == 3) {
    _objc_opt_respondsToSelector(param_5,PTR_s_permissionsManagerModalPresentat_11261c1a8);
    uVar1 = (uint)param_5;
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 105600444; end: 105600747; -[SCUserLocationPermissionsManager _presentAlwaysLocationPermissionsPromptWithPresentationDelegate:permissionStatus:promptType:friendName:feature:completionHandler:] */

void FUN_105600444(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_3;
  _objc_opt_respondsToSelector(param_3,PTR_s_permissionsManagerModalPresentat_11261c1a8);
  if ((uVar1 & 1) != 0) {
    lVar2 = param_1;
    func_0x00010be62720();
    if ((int)lVar2 == 0) {
      uVar4 = param_8;
      _objc_retainBlock();
      uVar7 = *(undefined8 *)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x78) = uVar4;
      _objc_release(uVar7);
      uVar1 = param_3;
      func_0x00010c0f9e20();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = param_3;
      _objc_opt_respondsToSelector(param_3,PTR_s_permissionsPromptSource_11261c1c8);
      if ((uVar8 & 1) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = param_3;
        func_0x00010c0f9ea0(param_3);
        _objc_retainAutoreleasedReturnValue();
      }
      uVar4 = *(undefined8 *)(param_1 + 0xa8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c081ca0();
      _objc_release(uVar4);
      puVar5 = PTR_PTR_1126bc360;
      _objc_alloc();
      func_0x00010c00b300();
      puVar6 = PTR_PTR_1126b0a08;
      _objc_alloc();
      func_0x00010c055600();
      uVar4 = *(undefined8 *)(param_1 + 0x68);
      *(undefined **)(param_1 + 0x68) = puVar6;
      _objc_release(uVar4);
      func_0x00010c219e20(*(undefined8 *)(param_1 + 0x68));
      func_0x00010c219d60(*(undefined8 *)(param_1 + 0x68));
      func_0x00010c167420(*(undefined8 *)(param_1 + 0x68));
      func_0x00010c219c20(*(undefined8 *)(param_1 + 0x68));
      func_0x00010c10c720(0x3ff0000000000000,*(undefined8 *)(param_1 + 0x68));
      uVar4 = *(undefined8 *)(param_1 + 0x70);
      *(undefined **)(param_1 + 0x70) = puVar5;
      _objc_release(uVar4);
      _objc_release(uVar8);
      _objc_release(uVar1);
    }
    else {
      _objc_initWeak(auStack_68,param_1);
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      pcStack_b0 = FUN_105600748;
      puStack_a8 = &UNK_11089f1a0;
      _objc_copyWeak(auStack_80,auStack_68);
      _objc_retain(param_7);
      uStack_a0 = param_7;
      uStack_78 = param_4;
      _objc_retain(param_8);
      uStack_88 = param_8;
      _objc_retain(param_3);
      uStack_98 = param_3;
      uStack_70 = param_5;
      _objc_retain(param_6);
      ppuVar3 = &puStack_c0;
      uStack_90 = param_6;
      _objc_retainBlock(ppuVar3);
      func_0x00010beb8620(param_1);
      _objc_release(ppuVar3);
      _objc_release(uStack_90);
      _objc_release(uStack_98);
      _objc_release(uStack_88);
      _objc_release(uStack_a0);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_68);
    }
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 105600748; end: 1056007cb;  */

void FUN_105600748(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be73160();
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x48) == 1) {
                    /* WARNING: Could not recover jumptable at 0x000105600794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),1);
    return;
  }
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7a220();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056007cc; end: 10560081f; -[SCUserLocationPermissionsManager _alwaysLocationPromptCallbackWithAuthorized:] */

void FUN_1056007cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    *(undefined8 *)(param_1 + 0x78) = 0;
    _objc_release(uVar2);
    if (*(long *)(param_1 + 0x68) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf83190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(long *)(param_1 + 0x68),PTR_s_dismissAnimated__1125be608,1);
      return;
    }
  }
  return;
}



/* Entry: 105600820; end: 105600987; -[SCUserLocationPermissionsManager _systemPermissionsAcceptCallbackWithCompletionHandler:] */

void FUN_105600820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1056008ec;
  puStack_50 = &UNK_110849380;
  _objc_copyWeak(auStack_40,auStack_38);
  uStack_48 = param_3;
  _objc_retain(param_3);
  ppuVar1 = &puStack_68;
  _objc_retainBlock(ppuVar1);
  ppuVar2 = ppuVar1;
  _objc_retainBlock();
  _objc_release(ppuVar1);
  _objc_release(uStack_48);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105600988; end: 105600a7f; -[SCUserLocationPermissionsManager _userPermissionsAcceptCallbackWithCompletionHandler:presentationDelegate:] */

void FUN_105600988(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_80;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105600a80;
  puStack_68 = &UNK_11089f0e0;
  _objc_copyWeak(auStack_50,auStack_48);
  uStack_60 = param_4;
  uStack_58 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retainBlock(&puStack_80);
  puVar2 = (undefined1 *)ppuVar1;
  _objc_retainBlock();
  _objc_release(ppuVar1);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105600a80; end: 105600b93;  */

void FUN_105600a80(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  func_0x00010bea56e0();
  _objc_release(lVar2);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  func_0x00010be56f60();
  _objc_release(lVar2);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0e4fa0();
  _objc_release(lVar2);
  if (param_2 == 0) {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),1);
  }
  else {
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar1);
    func_0x00010be02960(lVar2);
    _objc_release(lVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 105600b94; end: 105600ba3;  */

void FUN_105600b94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105600ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1);
  return;
}



/* Entry: 105600ba4; end: 105600d33; -[SCUserLocationPermissionsManager _showStandardPermissionsPromptWithPresentationDelegate:feature:acceptCallback:cancelCallback:completionHandler:] */

void FUN_105600ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  ppuVar2 = &puStack_90;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((param_4 == 0) || (uVar1 = param_1, func_0x00010c081de0(), (int)uVar1 == 0)) {
    func_0x00010beb78e0(param_1);
  }
  else {
    _objc_initWeak(auStack_58,param_1);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105600d34;
    puStack_78 = &UNK_11089f0e0;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    lStack_70 = param_4;
    _objc_retain(param_5);
    uStack_68 = param_5;
    _objc_retainBlock(&puStack_90);
    func_0x00010beb8620(param_1);
    _objc_release(ppuVar2);
    _objc_release(uStack_68);
    _objc_release(lStack_70);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105600d34; end: 105600d93;  */

void FUN_105600d34(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be73160();
  _objc_release(lVar1);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105600d94; end: 105600f5f; -[SCUserLocationPermissionsManager _showComposerUnderAgePermissionsPromptWithFeature:presentationDelegate:acceptCallback:completionHandler:] */

void FUN_105600d94(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b1c10;
  _objc_alloc();
  func_0x00010c063240(*(undefined8 *)PTR__UIWindowLevelNormal_110345e88);
  if (puVar1 != (undefined *)0x0) {
    uVar2 = param_5;
    _objc_retainBlock();
    uVar6 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = uVar2;
    _objc_release(uVar6);
    uVar2 = param_6;
    _objc_retainBlock();
    uVar6 = *(undefined8 *)(param_1 + 0x90);
    *(undefined8 *)(param_1 + 0x90) = uVar2;
    _objc_release(uVar6);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    *(ulong *)(param_1 + 0x98) = param_3;
    _objc_release(uVar2);
    FUN_105605088(*(undefined8 *)(param_1 + 0xa0),param_3,1);
    puVar3 = PTR_PTR_1126bc368;
    _objc_alloc();
    _objc_retain(param_3);
    uVar4 = param_3;
    func_0x00010c0720c0();
    if ((uVar4 & 1) == 0) {
      func_0x00010c0720c0(param_3);
    }
    _objc_release(param_3);
    func_0x00010c0118a0();
    puVar5 = PTR_PTR_1126b0a08;
    _objc_alloc();
    func_0x00010c055600();
    uVar2 = *(undefined8 *)(param_1 + 0x68);
    *(undefined **)(param_1 + 0x68) = puVar5;
    _objc_release(uVar2);
    func_0x00010c219e20(*(undefined8 *)(param_1 + 0x68));
    func_0x00010c219d60(*(undefined8 *)(param_1 + 0x68));
    func_0x00010c167420(*(undefined8 *)(param_1 + 0x68));
    func_0x00010c219c20(*(undefined8 *)(param_1 + 0x68));
    func_0x00010c10c720(0x3ff0000000000000,*(undefined8 *)(param_1 + 0x68));
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    *(undefined **)(param_1 + 0x80) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105600f60; end: 105601193; -[SCUserLocationPermissionsManager _showAlertDialogStandardPermissionsPromptWithPresentationDelegate:acceptCallback:cancelCallback:] */

void FUN_105600f60(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  long lStack_148;
  undefined **ppuStack_140;
  undefined1 auStack_138 [8];
  undefined *puStack_130;
  undefined1 auStack_128 [8];
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined1 auStack_f8 [8];
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_3;
  _objc_retain();
  func_0x000105603c6c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aed70;
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_1126aed70;
  func_0x000105603c84();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beff480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release();
  func_0x000105603c3c();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010c238400();
  if ((int)lVar4 != 0) {
    func_0x000105603c54();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    FUN_105605010(*(undefined8 *)(param_1 + 0xa0),1);
    param_4 = lVar4;
  }
  func_0x00010bf1f440(*(undefined8 *)(param_1 + 0x40));
  puVar5 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar6 = puVar5;
  func_0x000105603c24();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_4;
  puVar11 = puVar7;
  func_0x00010c052ee0();
  _objc_release(puVar7);
  _objc_release(puVar6);
  func_0x00010c211b40(puVar5);
  puVar6 = puVar5;
  func_0x00010c0f9e60(param_3);
  _objc_release(param_3);
  _objc_release(puVar5);
  _objc_release(param_4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar4);
  _objc_retain(puVar11);
  _objc_initWeak(auStack_e8,uVar1);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_105601318;
  puStack_108 = &UNK_110848558;
  _objc_copyWeak(auStack_f8,auStack_e8);
  puStack_100 = puVar11;
  puStack_f0 = puVar6;
  _objc_retain(puVar11);
  ppuVar8 = &puStack_120;
  _objc_retainBlock();
  _objc_initWeak(auStack_128,uVar1);
  puStack_168 = puVar3;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_1056013c8;
  puStack_150 = &UNK_11089f110;
  _objc_copyWeak(auStack_138,auStack_128);
  lStack_148 = lVar4;
  ppuStack_140 = ppuVar8;
  puStack_130 = puVar6;
  _objc_retain(lVar4);
  _objc_retain(ppuVar8);
  ppuVar9 = &puStack_168;
  _objc_retainBlock(ppuVar9);
  ppuVar10 = ppuVar9;
  _objc_retainBlock();
  _objc_release(ppuVar9);
  _objc_release(lStack_148);
  _objc_release(ppuStack_140);
  _objc_release(ppuVar8);
  _objc_destroyWeak(auStack_138);
  _objc_destroyWeak(auStack_128);
  _objc_release(puStack_100);
  _objc_release(lVar4);
  _objc_release(puVar11);
  _objc_destroyWeak(auStack_f8);
  _objc_destroyWeak(auStack_e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar10);
  return;
}



/* Entry: 105601194; end: 105601317; -[SCUserLocationPermissionsManager _goToSettingsAcceptCallbackWithRequestType:presentationDelegate:completionHandler:] */

void FUN_105601194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined **ppuStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_68,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105601318;
  puStack_88 = &UNK_110848558;
  _objc_copyWeak(auStack_78,auStack_68);
  uStack_80 = param_5;
  uStack_70 = param_3;
  _objc_retain(param_5);
  ppuVar2 = &puStack_a0;
  _objc_retainBlock();
  _objc_initWeak(auStack_a8,param_1);
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_1056013c8;
  puStack_d0 = &UNK_11089f110;
  _objc_copyWeak(auStack_b8,auStack_a8);
  uStack_c8 = param_4;
  ppuStack_c0 = ppuVar2;
  uStack_b0 = param_3;
  _objc_retain(param_4);
  _objc_retain(ppuVar2);
  ppuVar3 = &puStack_e8;
  _objc_retainBlock(ppuVar3);
  ppuVar4 = ppuVar3;
  _objc_retainBlock();
  _objc_release(ppuVar3);
  _objc_release(uStack_c8);
  _objc_release(ppuStack_c0);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uStack_80);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
  return;
}



/* Entry: 105601318; end: 1056013b3;  */

void FUN_105601318(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1056013b4;
  puStack_40 = &UNK_11089f1d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uStack_38 = uVar2;
  func_0x00010bfa8220(lVar1,param_2,uVar3,&puStack_58,0);
  _objc_release(lVar1);
  _objc_release(uStack_38);
  return;
}



/* Entry: 1056013b4; end: 1056013c7;  */

void FUN_1056013b4(long param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001056013c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2 == 1);
  return;
}



/* Entry: 1056013c8; end: 105601497;  */

void FUN_1056013c8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be56f60(lVar1);
    if (*(long *)(param_1 + 0x38) != 1) {
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      _objc_retainBlock();
      uVar4 = *(undefined8 *)(lVar1 + 0x48);
      *(undefined8 *)(lVar1 + 0x48) = uVar2;
      _objc_release(uVar4);
      func_0x00010bec7c20(lVar1);
    }
    func_0x00010bea56e0(lVar1);
    if (param_2 == 0) {
      puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14d6e0();
      _objc_release(puVar3);
    }
    else {
      func_0x00010be02960(lVar1);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105601498; end: 1056014cf;  */

void FUN_105601498(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d6e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1056014d0; end: 105601587; -[SCUserLocationPermissionsManager _showGoToSettingsPromptWithPresentationDelegate:requestType:feature:acceptCallback:cancelCallback:completionHandler:] */

void FUN_1056014d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_3);
  if (param_4 == 3) {
    func_0x000105f09380(param_6,param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c211b40();
    func_0x00010c0f9e60(param_3);
    _objc_release(param_3);
    param_3 = param_6;
  }
  else {
    func_0x00010bebb260(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105601588; end: 1056015bb;  */

void FUN_105601588(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0e4fa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1056015bc; end: 105601677; -[SCUserLocationPermissionsManager hasFeatureRequestedLocationPermission:] */

undefined8 FUN_1056015bc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          &PTR____CFConstantStringClassReference_110df1b78);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010bf1f320();
      _objc_release(uVar3);
      _objc_release(puVar2);
      goto LAB_105601658;
    }
  }
  uVar4 = 0;
LAB_105601658:
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 105601678; end: 10560175b; -[SCUserLocationPermissionsManager setFeatureHasRequestedLocationPermission:value:] */

void FUN_105601678(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    func_0x00010c08fa60();
    if (lVar1 != 0) {
      if (lRam00000001136bd3a0 != -1) {
        func_0x00010002a2fc(0x1136bd3a0,&PTR___NSConcreteGlobalBlock_11089f280);
      }
      if ((bRam00000001136bd398 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c172fe0();
        _objc_release(uVar3);
        _objc_release(puVar2);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10560175c; end: 10560180f; -[SCUserLocationPermissionsManager isAuthorizedForFeature:] */

undefined8 FUN_10560175c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c081de0();
  if ((int)lVar1 == 0) {
    uVar4 = 1;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110df1bf8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf1f320(uVar2,param_2,puVar3);
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 105601810; end: 105601867; -[SCUserLocationPermissionsManager isLocationAuthorizedForCurrentUserAndFeature:] */

undefined8 FUN_105601810(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c076e40();
  if ((int)uVar1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x00010c06cae0(param_1,param_2,param_3);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105601868; end: 105601877; -[SCUserLocationPermissionsManager requestAuthorizationForFeature:requestType:presentationDelegate:completion:] */

void FUN_105601868(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010c134a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_requestAuthorizationForFeature_r_11262aca0,param_3,param_4,0,param_5,
             param_6);
  return;
}



/* Entry: 105601878; end: 105601a9b; -[SCUserLocationPermissionsManager requestAuthorizationForFeature:requestType:promptType:presentationDelegate:completion:] */

void FUN_105601878(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6,undefined *param_7)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_7 != (undefined *)0x0) {
    uVar1 = param_3;
    func_0x00010c0720c0();
    if (((uVar1 & 1) == 0) && (uVar1 = param_3, func_0x00010c0720c0(), (uVar1 & 1) == 0)) {
      puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_7 + 0x10))(param_7,0,puVar3);
    }
    else {
      lVar2 = param_1;
      func_0x00010c081de0();
      if ((int)lVar2 != 0) {
        _objc_initWeak(auStack_58,param_1);
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        _objc_copyWeak(auStack_70,auStack_58);
        _objc_retain(param_6);
        uStack_68 = param_4;
        uStack_60 = param_5;
        _objc_retain(param_3);
        _objc_retain(param_7);
        func_0x00010bfa8140(uVar4);
        _objc_release(param_7);
        _objc_release(param_3);
        _objc_release(param_6);
        _objc_destroyWeak(auStack_70);
        _objc_destroyWeak(auStack_58);
        goto LAB_105601a4c;
      }
      _objc_retain(param_7);
      func_0x00010c135c60(param_1);
      puVar3 = param_7;
    }
    _objc_release(puVar3);
  }
LAB_105601a4c:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 105601a9c; end: 105601b67;  */

void FUN_105601a9c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar2);
  func_0x00010be91460(lVar1);
  _objc_release(lVar1);
  _objc_release(uVar2);
  return;
}



/* Entry: 105601b68; end: 105601b87;  */

void FUN_105601b68(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000105601b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,0);
  return;
}



/* Entry: 105601b88; end: 105601b8f; -[SCUserLocationPermissionsManager locationAccuracy] */

void FUN_105601b88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c09eab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_locationAccuracy_1126054b8);
  return;
}



/* Entry: 105601b90; end: 105601bd3; -[SCUserLocationPermissionsManager onLocationError:] */

void FUN_105601b90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126bc370;
  func_0x00010bf764a0(PTR_PTR_1126bc370);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105601bd4; end: 105601c17; -[SCUserLocationPermissionsManager onLocationPermissionStatusChange:] */

void FUN_105601bd4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126bc370;
  func_0x00010bf7e040(PTR_PTR_1126bc370);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105601c18; end: 105601d0b; -[SCUserLocationPermissionsManager _authorizationStatusWithSystemStatus:requestType:] */

undefined8 FUN_105601c18(uint param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if (lRam00000001136bd3a0 != -1) {
    func_0x00010002a2fc(0x1136bd3a0,&PTR___NSConcreteGlobalBlock_11089f280);
  }
  if ((param_3 - 3U < 2) && ((bRam00000001136bd398 & 1) != 0)) {
    uVar5 = 1;
  }
  else {
    uVar3 = param_1;
    func_0x00010be40820();
    uVar4 = param_1;
    func_0x00010be419e0();
    func_0x00010bdd98c0();
    if (param_3 - 1U < 2) {
      uVar5 = 3;
    }
    else {
      uVar5 = 1;
      if (((uVar3 | uVar4) & 1) == 0) {
        uVar5 = 2;
      }
      uVar1 = 3;
      if (param_1 != 0) {
        uVar1 = 4;
      }
      if (param_4 == 3) {
        uVar5 = uVar1;
      }
      uVar1 = 1;
      if (((uVar3 | uVar4) & 1) == 0) {
        uVar1 = 2;
      }
      uVar2 = 4;
      if (param_3 == 3) {
        uVar2 = uVar1;
      }
      if (param_3 != 4) {
        uVar5 = uVar2;
      }
    }
  }
  return uVar5;
}



/* Entry: 105601d0c; end: 105601d93; -[SCUserLocationPermissionsManager _isFirstTimeAskingGlobally] */

uint FUN_105601d0c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if (lRam00000001136bd3a0 != -1) {
    func_0x00010002a2fc(0x1136bd3a0,&PTR___NSConcreteGlobalBlock_11089f280);
  }
  if ((bRam00000001136bd398 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1f320();
    uVar3 = (uint)uVar2 ^ 1;
    _objc_release(uVar1);
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 105601d94; end: 105601e23; -[SCUserLocationPermissionsManager _setIsNotFirstTimeAskingGloballyIfNecessary] */

void FUN_105601d94(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (lRam00000001136bd3a0 != -1) {
    func_0x00010002a2fc(0x1136bd3a0,&PTR___NSConcreteGlobalBlock_11089f280);
  }
  if (((bRam00000001136bd398 & 1) == 0) && (lVar1 = param_1, func_0x00010be40820(), (int)lVar1 != 0)
     ) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c172fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105601e24; end: 105601eb3; -[SCUserLocationPermissionsManager _isLocationPermissionEnabledForCurrentUser] */

undefined8 FUN_105601e24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110df1c18);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf1f320();
  _objc_release(uVar2);
  _objc_release(puVar1);
  return uVar3;
}


