/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10530f060; end: 10530f15b; -[SCIsChargingPropertyHandler evaluatePropertyWithFeatureProvidedSignals:supValueGetter:] */

void FUN_10530f060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong unaff_x21;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10530f15c;
  puStack_60 = &UNK_110847658;
  puStack_48 = puStack_58;
  func_0x00010bcbe2c4("APPSTORE",&puStack_78);
  if ((ulong)puStack_48[3] < 4) {
    unaff_x21 = (ulong)(4U >> (ulong)((uint)puStack_48[3] & 0x1f) & 1);
    func_0x000106cb4b44(unaff_x21);
    _objc_retainAutoreleasedReturnValue();
  }
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x21);
  return;
}



/* Entry: 10530f15c; end: 10530f1a3;  */

void FUN_10530f15c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf176e0();
  *(undefined **)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10530f1a4; end: 10530f1bf; -[SCIsOfflinePropertyHandler evaluatePropertyWithFeatureProvidedSignals:supValueGetter:] */

void FUN_10530f1a4(long param_1)

{
  undefined *puVar1;
  
  func_0x00010c06f000(*(undefined8 *)(param_1 + 8));
  puVar1 = PTR_PTR_1126af9b8;
  _objc_alloc_init(PTR_PTR_1126af9b8);
  func_0x00010c173040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10530f1c0; end: 10530f1cb; -[SCIsOfflinePropertyHandler .cxx_destruct] */

void FUN_10530f1c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10530f1cc; end: 10530f1df; +[SCNetworkRadioAccessTechnologyPropertyHandler radioAccessTechnologyToMobileNetworkGeneration:] */

int FUN_10530f1cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  
  iVar1 = (int)(param_3 - 2U) + 2;
  if (3 < param_3 - 2U) {
    iVar1 = 0;
  }
  return iVar1;
}



/* Entry: 10530f1e0; end: 10530f2c7; -[SCNetworkRadioAccessTechnologyPropertyHandler evaluatePropertyWithFeatureProvidedSignals:supValueGetter:] */

void FUN_10530f1e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b7420;
  _objc_opt_class(PTR_PTR_1126b7420);
  uVar2 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar1,&PTR___NSConcreteGlobalBlock_110878ac0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010bfe63a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126b7428;
  uVar3 = uVar4;
  func_0x00010bf5e340(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c121ba0();
  func_0x00010c11ef40(puVar1,param_2,uVar5);
  func_0x000106cb4bbc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10530f2c8; end: 10530f2cf;  */

void FUN_10530f2c8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf32dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_carrierNetworkInfoProvider_1125aa518);
  return;
}



/* Entry: 10530f2d0; end: 10530f313; -[SCRealtimeNetworkTypePropertyHandler evaluatePropertyWithFeatureProvidedSignals:supValueGetter:] */

void FUN_10530f2d0(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010bfc4580();
  if (lVar2 - 1U < 4) {
    uVar1 = *(undefined4 *)(&UNK_10dd961a0 + (lVar2 - 1U) * 4);
  }
  else {
    uVar1 = 0;
  }
  func_0x000106cb4bbc(uVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10530f314; end: 10530f31f; -[SCRealtimeNetworkTypePropertyHandler .cxx_destruct] */

void FUN_10530f314(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10530f320; end: 10530f407; -[SCStickyMaxConnectionTypePropertyHandler evaluatePropertyWithFeatureProvidedSignals:supValueGetter:] */

void FUN_10530f320(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x0001004fa310();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b7420;
  _objc_opt_class(PTR_PTR_1126b7420);
  uVar2 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar1,&PTR___NSConcreteGlobalBlock_110878ae0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010bfe63a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar1 = PTR_PTR_1126b7428;
  uVar3 = uVar4;
  func_0x00010bf5e340(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0c1f20();
  func_0x00010c11ef40(puVar1,param_2,uVar5);
  func_0x000106cb4bbc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10530f408; end: 10530f40f;  */

void FUN_10530f408(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf32dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_carrierNetworkInfoProvider_1125aa518);
  return;
}



/* Entry: 10530f410; end: 10530f45f; -[SCUploadBandwidthPropertyHandler evaluatePropertyWithFeatureProvidedSignals:supValueGetter:] */

void FUN_10530f410(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b7410;
  func_0x00010c22b6a0(PTR_PTR_1126b7410);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c28d9a0();
  func_0x000106cb4bbc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10530f460; end: 10530f46f; -[SCLegacyPropertyHandlerEntryPoint legacyPropertyHandlerServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10530f460(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127215fc);
}



/* Entry: 10530f470; end: 10530f4af; -[SCLegacyPropertyHandlerEntryPoint setLegacyPropertyHandlerServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10530f470(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127215fc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10530f4b0; end: 10530f50f; -[SCLegacyPropertyHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10530f4b0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127215fc,0);
  _objc_destroyWeak(param_1 + _DAT_112721604);
  _objc_destroyWeak(param_1 + _DAT_112721600);
  _objc_destroyWeak(param_1 + _DAT_112721608);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272160c);
  return;
}



/* Entry: 10530f510; end: 10530f583; -[SCWatchDetectorImpl initWithSessionDidActivate:sessionIsSupported:] */

long FUN_10530f510(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 0x20) = 0;
  puVar1 = PTR_PTR_1126ae810;
  _objc_retain(param_3);
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar2);
  *(undefined1 *)(param_1 + 0x10) = param_4;
  func_0x00010be66cc0(param_1,param_2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10530f584; end: 10530f65f; -[SCWatchDetectorImpl _observeSessionActivationEvent:] */

void FUN_10530f584(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10530f660; end: 10530f707;  */

void FUN_10530f660(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bf0a0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10530f708; end: 10530f74f;  */

void FUN_10530f708(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be822e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10530f750; end: 10530f7db; -[SCWatchDetectorImpl _processSessionActivationEvent:] */

void FUN_10530f750(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  uVar1 = param_3;
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = uVar1;
  _objc_release(uVar2);
  if ((*(long *)(param_1 + 0x28) != 0) && (*(char *)(param_1 + 0x30) == '\x01')) {
    _dispatch_group_leave();
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  _os_unfair_lock_unlock(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10530f7dc; end: 10530f947; -[SCWatchDetectorImpl retrieveWatchStatusFromWCSession] */

void FUN_10530f7dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    _os_unfair_lock_lock(param_1 + 0x20);
    if (*(long *)(param_1 + 8) == 0) {
      if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
        lVar1 = *(long *)(param_1 + 0x28);
        if (lVar1 == 0) {
          _dispatch_group_create();
          uVar2 = *(undefined8 *)(param_1 + 0x28);
          *(long *)(param_1 + 0x28) = lVar1;
          _objc_release(uVar2);
          lVar1 = *(long *)(param_1 + 0x28);
        }
        _dispatch_group_enter(lVar1);
        *(undefined1 *)(param_1 + 0x30) = 1;
      }
      lVar1 = *(long *)(param_1 + 0x28);
      _objc_retain(lVar1);
      _os_unfair_lock_unlock(param_1 + 0x20);
      if (lVar1 != 0) {
        uVar2 = 0;
        _dispatch_time(0,3000000000);
        _dispatch_group_wait(lVar1,uVar2);
      }
      _os_unfair_lock_lock(param_1 + 0x20);
      if (*(long *)(param_1 + 8) == 0) {
        puVar3 = (undefined *)0x0;
      }
      else {
        puVar3 = PTR_PTR_1126b7480;
        _objc_alloc(PTR_PTR_1126b7480);
        func_0x00010c0798c0(*(undefined8 *)(param_1 + 8));
        func_0x00010c0839e0(*(undefined8 *)(param_1 + 8));
        func_0x00010c01fc00(puVar3);
      }
      _os_unfair_lock_unlock(param_1 + 0x20);
      _objc_release(lVar1);
    }
    else {
      _os_unfair_lock_unlock(param_1 + 0x20);
      puVar3 = PTR_PTR_1126b7480;
      _objc_alloc(PTR_PTR_1126b7480);
      func_0x00010c0798c0(*(undefined8 *)(param_1 + 8));
      func_0x00010c0839e0(*(undefined8 *)(param_1 + 8));
      func_0x00010c01fc00(puVar3);
    }
  }
  else {
    puVar3 = (undefined *)0x0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10530f948; end: 10530f983; -[SCWatchDetectorImpl .cxx_destruct] */

void FUN_10530f948(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10530f984; end: 10530fa27; -[SCExtensionShakeToReportInfoProvider initWithExtensionLogName:s2rLogName:] */

undefined1 *
FUN_10530f984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7830;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10530fa28; end: 10530faa3; -[SCExtensionShakeToReportInfoProvider provideShakeLog] */

void FUN_10530fa28(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010be1eea0(param_1,param_2,*(undefined8 *)(param_1 + 8));
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b7488;
  _objc_alloc(PTR_PTR_1126b7488);
  func_0x00010c0270a0();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10530faa4; end: 10530fc4b; -[SCExtensionShakeToReportInfoProvider _getExtensionLogOfFilename:] */

void FUN_10530faa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd1998);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b7490;
  _objc_alloc();
  func_0x00010c02d600();
  puVar3 = PTR_PTR_1126b7490;
  _objc_alloc();
  func_0x00010c02d600();
  _objc_release(param_3);
  puVar4 = puVar3;
  func_0x00010c121280();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar4 == (undefined *)0x0) ||
     (puVar5 = puVar4, func_0x00010c08fa60(), puVar5 == (undefined *)0x0)) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    puVar5 = puVar2;
    func_0x00010c121280();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSMutableString_1126af7f8;
    func_0x00010c25cd40(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
    _objc_retainAutoreleasedReturnValue();
    if ((puVar5 != (undefined *)0x0) &&
       (puVar7 = puVar5, func_0x00010c08fa60(), puVar7 != (undefined *)0x0)) {
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc();
      func_0x00010c008340();
      func_0x00010bf06ba0(ppuVar6,param_2,&PTR____CFConstantStringClassReference_110dd19b8);
      _objc_release(puVar7);
    }
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    func_0x00010c008340();
    func_0x00010bf06ba0(ppuVar6,param_2,&PTR____CFConstantStringClassReference_110dd19d8);
    _objc_release(puVar7);
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
  return;
}



/* Entry: 10530fc4c; end: 10530fc7b; -[SCExtensionShakeToReportInfoProvider .cxx_destruct] */

void FUN_10530fc4c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10530fc7c; end: 10530fc7f; -[SCExtensionShakeToReportInfoProviderEntryPoint begin] */

void FUN_10530fc7c(void)

{
  return;
}



/* Entry: 10530fc80; end: 10530fd37; -[SCExtensionShakeToReportInfoProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10530fc80(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112721634);
  _objc_destroyWeak(param_1 + _DAT_112721654);
  _objc_storeStrong(param_1 + _DAT_112721650,0);
  _objc_storeStrong(param_1 + _DAT_11272164c,0);
  _objc_storeStrong(param_1 + _DAT_112721648,0);
  _objc_storeStrong(param_1 + _DAT_112721644,0);
  _objc_storeStrong(param_1 + _DAT_112721640,0);
  _objc_storeStrong(param_1 + _DAT_11272163c,0);
  _objc_storeStrong(param_1 + _DAT_112721638,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112721630,0);
  return;
}



/* Entry: 10530fd38; end: 10530fdeb; -[SCScopeGraphC2RExceptionReporter reportNeverEndingEntryPointWithLifecycle:entryPoint:timeout:] */

void FUN_10530fd38(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd19f8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b3e90;
  _objc_opt_new(PTR_PTR_1126b3e90);
  func_0x00010c1f6b20();
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar3 = PTR_PTR_1126b3e98;
  func_0x00010bf60460(PTR_PTR_1126b3e98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c133420(uVar4,param_2,puVar2,0,puVar1,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10530fdec; end: 10530feb3; -[SCScopeGraphC2RExceptionReporter reportNilScopedAccessWithClassName:] */

void FUN_10530fdec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b3e90;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1f6b20();
  uVar4 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd1a18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR_PTR_1126b3e98;
  func_0x00010bf60460(PTR_PTR_1126b3e98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c133420(uVar4,param_2,puVar1,0,puVar2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10530feb4; end: 10530ff23; -[SCScopeGraphC2RExceptionReporterEntryPoint end] */

void FUN_10530feb4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = PTR_PTR_1126b33e0;
  func_0x00010c22b6a0(PTR_PTR_1126b33e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f6b40();
  _objc_release(puVar1);
  puStack_28 = PTR_PTR_1126e7840;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10530ff24; end: 10530ff93; -[SCScopeGraphC2RExceptionReporterEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10530ff24(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112721660);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272165c);
  return;
}



/* Entry: 10530ff94; end: 10531002f; -[SCScopeGraphDebugExceptionReporter reportNeverEndingEntryPointWithLifecycle:entryPoint:timeout:] */

void FUN_10530ff94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd1a78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bd860c0();
  if ((int)puVar2 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSException_1126af520;
    func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520,param_2,
                        &PTR____CFConstantStringClassReference_110dd1a38,puVar1,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11f000();
    _objc_release(puVar2);
  }
  else {
    func_0x00010530ff5c(&PTR____CFConstantStringClassReference_110dc4658);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105310030; end: 10531005f; -[SCScopeGraphDebugExceptionReporter reportNilScopedAccessWithClassName:] */

void FUN_105310030(void)

{
  func_0x00010530ff5c(&PTR____CFConstantStringClassReference_110dd1a98);
  return;
}



/* Entry: 105310060; end: 1053100e3; -[SCGrapheneLogItem initWithStartTimestamp:grapheneMetric:] */

undefined1 *
FUN_105310060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7848;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1053100e4; end: 1053100eb; -[SCGrapheneLogItem uniqueId] */

undefined8 FUN_1053100e4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1053100ec; end: 1053100f3; -[SCGrapheneLogItem startTimestamp] */

undefined8 FUN_1053100ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1053100f4; end: 1053100fb; -[SCGrapheneLogItem metric] */

undefined8 FUN_1053100f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1053100fc; end: 10531012b; -[SCGrapheneLogItem setMetric:] */

void FUN_1053100fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10531012c; end: 10531015b; -[SCGrapheneLogItem .cxx_destruct] */

void FUN_10531012c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10531015c; end: 105310177;  */

void FUN_10531015c(void)

{
  _objc_alloc_init(PTR_PTR_1126b74b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105310178; end: 1053101bf; -[SCGraphenePerformanceLoggerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105310178(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112721670,0);
  _objc_destroyWeak(param_1 + _DAT_112721678);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112721674);
  return;
}



/* Entry: 1053101c0; end: 1053102cf; -[SCGraphenePerformanceLoggerImpl initWithGrapheneLogger:performer:timeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1053101c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e7850;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11272167c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112721680;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112721684;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112721688);
    *(undefined **)((long)puVar1 + (long)_DAT_112721688) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053102d0; end: 1053103bb; -[SCGraphenePerformanceLoggerImpl logTimeMetricsStart:uniqueId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053102d0(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 != 0) && (param_5 != 0)) {
    func_0x00010bf5fd80(*(undefined8 *)(param_2 + _DAT_112721684));
    uVar1 = *(undefined8 *)(param_2 + _DAT_112721680);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1053103bc;
    puStack_68 = &UNK_11084d788;
    lStack_60 = param_2;
    _objc_retain(param_5);
    lStack_58 = param_5;
    uStack_48 = param_1;
    _objc_retain(param_4);
    lStack_50 = param_4;
    func_0x00010c0f7fc0(uVar1,param_3,&puStack_80);
    _objc_release(lStack_50);
    _objc_release(lStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1053103bc; end: 10531040f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053103bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b74c0;
  _objc_alloc(PTR_PTR_1126b74c0);
  func_0x00010c04bc40(*(undefined8 *)(param_1 + 0x38));
  func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112721688),param_2,
                      puVar1,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105310410; end: 105310527; -[SCGraphenePerformanceLoggerImpl updateMetricWithUniqueId:dimensionNameToValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105310410(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112721680);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x1053104d0;
  puStack_50 = &UNK_110848ba8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105310528; end: 10531062f; -[SCGraphenePerformanceLoggerImpl _updateMetricLogItem:dimensionNameToValue:] */

void FUN_105310528(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_105310630;
    uStack_40 = 0x105310640;
    lVar1 = param_3;
    func_0x00010c0ccaa0();
    _objc_retainAutoreleasedReturnValue();
    lStack_38 = lVar1;
    func_0x00010bf97ce0(param_4);
    func_0x00010c1c76a0(param_3);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(lStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105310630; end: 105310647;  */

void FUN_105310630(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105310648; end: 105310697;  */

void FUN_105310648(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  func_0x00010c2ac460(uVar1,param_2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105310698; end: 10531072f; -[SCGraphenePerformanceLoggerImpl incrementCounterWithUniqueId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105310698(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112721680);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105310730;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105310730; end: 105310777;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105310730(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(lVar1 + _DAT_112721688);
  func_0x00010c0e00e0(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be38380(lVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105310778; end: 1053107c7; -[SCGraphenePerformanceLoggerImpl _incrementCounterWithLogItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105310778(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11272167c);
    func_0x00010c0ccaa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0(uVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 1053107c8; end: 1053108bf; -[SCGraphenePerformanceLoggerImpl logHistogramWithUniqueId:value:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053107c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112721680);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x105310868;
  puStack_50 = &UNK_110844b80;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 1053108c0; end: 10531091f; -[SCGraphenePerformanceLoggerImpl _logHistogramWithLogItem:value:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053108c0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11272167c);
    func_0x00010c0ccaa0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9180(uVar1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 105310920; end: 1053109df; -[SCGraphenePerformanceLoggerImpl logTimeMetricEndWithUniqueId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105310920(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  if (param_4 != 0) {
    func_0x00010bf5fd80(*(undefined8 *)(param_2 + _DAT_112721684));
    uVar1 = *(undefined8 *)(param_2 + _DAT_112721680);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1053109e0;
    puStack_60 = &UNK_110844b80;
    lStack_58 = param_2;
    _objc_retain(param_4);
    lStack_50 = param_4;
    uStack_48 = param_1;
    func_0x00010c0f7fc0(uVar1,param_3,&puStack_78);
    _objc_release(lStack_50);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 1053109e0; end: 105310a3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053109e0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(lVar1 + _DAT_112721688);
  func_0x00010c0e00e0(uVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be59c60(*(undefined8 *)(param_1 + 0x30),lVar1,param_2,uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105310a40; end: 105310b07; -[SCGraphenePerformanceLoggerImpl _logTimeEndForUniqueId:logItem:endTimestamp:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105310a40(double param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  
  if ((param_4 != 0) && (param_5 != 0)) {
    uVar2 = *(undefined8 *)(param_2 + _DAT_112721688);
    dVar3 = param_1;
    _objc_retain(param_5);
    func_0x00010c12d3e0(uVar2,param_3,param_4);
    uVar2 = *(undefined8 *)(param_2 + _DAT_11272167c);
    lVar1 = param_5;
    func_0x00010c0ccaa0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2510e0(param_5);
    _objc_release(param_5);
    func_0x00010befc000(param_1 - dVar3,uVar2,param_3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 105310b08; end: 105310b67; -[SCGraphenePerformanceLoggerImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105310b08(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112721688,0);
  _objc_storeStrong(param_1 + _DAT_11272167c,0);
  _objc_storeStrong(param_1 + _DAT_112721684,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112721680,0);
  return;
}



/* Entry: 105310b68; end: 105310bdb; -[SCGraphenePerformanceLoggerProviderImpl initWithPerformerProvider:] */

undefined1 * FUN_105310b68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7858;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105310bdc; end: 105310cab; -[SCGraphenePerformanceLoggerProviderImpl performanceLoggerWithGrapheneLogger:] */

void FUN_105310bdc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b74c8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0f9920();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126aeea8;
  _objc_opt_new(PTR_PTR_1126aeea8);
  func_0x00010c0183a0(puVar1,param_2,param_3,uVar3,puVar4);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105310cac; end: 105310cb7; -[SCGraphenePerformanceLoggerProviderImpl .cxx_destruct] */

void FUN_105310cac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105310cb8; end: 105310d4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105310cb8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b74d0;
    _objc_alloc(PTR_PTR_1126b74d0);
    lVar1 = param_1 + _DAT_112721690;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf398e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bffe1e0(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105310d50; end: 105310d8f;  */

void FUN_105310d50(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be64400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105310d90; end: 105310dab; -[SCNotificationDisplayServicesEntryPoint _notificationScreenAccessor] */

void FUN_105310d90(void)

{
  _objc_opt_new(PTR_PTR_1126b74e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105310dac; end: 105310e17; -[SCNotificationDisplayServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105310dac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127216a4,0);
  _objc_destroyWeak(param_1 + _DAT_112721698);
  _objc_destroyWeak(param_1 + _DAT_1127216a0);
  _objc_destroyWeak(param_1 + _DAT_112721690);
  _objc_destroyWeak(param_1 + _DAT_112721694);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272169c);
  return;
}



/* Entry: 105310e18; end: 105310f87; -[SCNotificationUIEmitter submit:clientGeneratedCustomAction:] */

void FUN_105310e18(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b0 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_105310f88;
  uStack_60 = 0x105310f98;
  uStack_58 = 0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_105310fa0;
  puStack_90 = &UNK_110878c30;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x10531100c;
  puStack_b8 = &UNK_110878c30;
  puStack_88 = puStack_b0;
  puStack_78 = puStack_b0;
  func_0x00010c0be580(param_3);
  if (param_4 == 1) {
    uVar3 = puStack_78[5];
    puVar2 = PTR_PTR_1126b74f0;
    func_0x00010c26b300(PTR_PTR_1126b74f0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17a120(uVar3);
    _objc_release(puVar2);
  }
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_105311078;
  puStack_e8 = &UNK_11084b9d0;
  puStack_d8 = &uStack_80;
  uStack_e0 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_100);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_3);
  return;
}



/* Entry: 105310f88; end: 105310f9f;  */

void FUN_105310f88(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105310fa0; end: 105311077;  */

void FUN_105310fa0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 in_x5;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b1370;
  _objc_retain(in_x5);
  _objc_alloc();
  func_0x00010c030320();
  _objc_release(in_x5);
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105311078; end: 10531108b;  */

void FUN_105311078(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be04a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__displayNotificationMaybe__11255ec40,
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  return;
}



/* Entry: 10531108c; end: 10531139b; -[SCNotificationUIEmitter submitLocalInAppNotificationWithTitle:subtitle:pushType:displayDurationSeconds:senderUserId:conversationId:groupConversationId:targetScreen:friendsFeedShortcutType:] */

void FUN_10531108c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7,long param_8,long param_9,
                  long param_10,long param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  _objc_retain(param_4);
  func_0x00010bdc3540();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  puVar3 = PTR_PTR_1126b1370;
  func_0x00010c25d500(PTR_PTR_1126b1370);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c1d0640(puVar1);
  _objc_release(param_4);
  if (param_5 != 0) {
    func_0x00010c1d0640(puVar1);
  }
  if (param_7 != 0) {
    func_0x00010c1d0640(puVar1);
  }
  if (param_8 != 0) {
    func_0x00010c1d0640(puVar1);
  }
  if (param_9 != 0) {
    func_0x00010c1d0640(puVar1);
  }
  if (param_10 != 0) {
    func_0x00010c1d0640(puVar1);
  }
  if (param_11 != 0) {
    func_0x00010c1d0640(puVar1);
  }
  puVar3 = PTR_PTR_1126b1370;
  _objc_alloc();
  func_0x00010c030320();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10531139c;
  puStack_88 = &UNK_110841f80;
  uStack_80 = param_2;
  puStack_78 = puVar3;
  _objc_retain();
  func_0x000100162d98("APPSTORE",&puStack_a0);
  _objc_release(puStack_78);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10531139c; end: 1053113a7;  */

void FUN_10531139c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be04a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__displayNotificationMaybe__11255ec40,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1053113a8; end: 1053113af; -[SCNotificationUIEmitter publishEvent:] */

void FUN_1053113a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_next__112614028);
  return;
}



/* Entry: 1053113b0; end: 1053115b3; -[SCNotificationUIEmitter _displayNotificationMaybe:] */

void FUN_1053113b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bf07b60();
  uVar2 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  if (lVar1 == 0) {
    func_0x00010bfc9420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar4;
    func_0x00010bf2c7c0();
    if ((uVar2 & 1) != 0) {
      func_0x00010be04a60(param_1);
      goto LAB_105311570;
    }
  }
  else {
    func_0x00010bfc9420();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar4;
    func_0x00010bf2c7c0();
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c13ecc0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_48,param_1);
      _objc_copyWeak(auStack_58,auStack_48);
      uStack_50 = lVar1 == 0;
      _objc_retain(param_3);
      uVar2 = uVar4;
      _objc_retain(uVar4);
      func_0x000100078e94();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297280(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_58);
      _objc_destroyWeak(auStack_48);
      _objc_release(uVar3);
      goto LAB_105311570;
    }
  }
  func_0x00010be069e0(param_1);
LAB_105311570:
  _objc_release(uVar4);
  _objc_release(param_3);
  return;
}



/* Entry: 1053115b4; end: 10531164b;  */

void FUN_1053115b4(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (((param_2 == 0) || (param_3 != 0)) || (lVar1 = param_2, func_0x00010bf10fa0(), lVar1 != 2))
    {
      func_0x00010be04a60(param_1);
    }
    else {
      func_0x00010be069e0(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10531164c; end: 1053116c7; -[SCNotificationUIEmitter _displayNotification:presenter:appIsForegrounded:] */

void FUN_10531164c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  func_0x00010bf86100(param_4,param_2,param_3);
  puVar1 = PTR_PTR_1126b6b90;
  func_0x00010c0dcb80(PTR_PTR_1126b6b90,param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053116c8; end: 105311727; -[SCNotificationUIEmitter _dropNotification:dueToOSPermission:appIsForegrounded:suppressionReason:] */

void FUN_1053116c8(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  ,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6b90;
  if (param_4 == 0) {
    func_0x00010c0dc1e0(PTR_PTR_1126b6b90,param_2,param_3,param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c0dc1c0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105311728; end: 105311787; -[SCNotificationUIEmitter .cxx_destruct] */

void FUN_105311728(long param_1)

{
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



/* Entry: 105311788; end: 1053117cf; -[SCNotificationScreenAccessor init] */

undefined8 FUN_105311788(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae820;
  _objc_opt_new(PTR_PTR_1126ae820);
  func_0x00010bff7660(param_1,param_2,puVar1);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1053117d0; end: 105311843; -[SCNotificationScreenAccessor initWithBehaviorSubject:] */

undefined1 * FUN_1053117d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e7868;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105311844; end: 10531186b; -[SCNotificationScreenAccessor notificationScreenAccessEventObservable] */

void FUN_105311844(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10531186c; end: 105311873; -[SCNotificationScreenAccessor publishEvent:] */

void FUN_10531186c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_next__112614028);
  return;
}



/* Entry: 105311874; end: 10531187f; -[SCNotificationScreenAccessor .cxx_destruct] */

void FUN_105311874(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105311880; end: 1053118f3; -[SCSystemTrayNotificationRemover initWithCircumstanceEngine:] */

undefined8 FUN_105311880(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UNUserNotificationCenter_1126aed58;
  _objc_retain(param_3);
  func_0x00010bf5f5a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02fd60(param_1,param_2,puVar1,param_3);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1053118f4; end: 1053119db; -[SCSystemTrayNotificationRemover initWithNotificationCenter:circumstanceEngine:] */

undefined8 *
FUN_1053118f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7870;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    uVar2 = puVar1[3];
    puVar1[3] = 0;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c226900();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1053119dc; end: 105311ac3; -[SCSystemTrayNotificationRemover removePushNotifications:] */

void FUN_1053119dc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bfc4a60(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105311ac4; end: 105311d0b;  */

void FUN_105311ac4(long param_1,undefined **param_2)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined **unaff_x21;
  undefined *puVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  undefined1 auStack_190 [8];
  undefined1 auStack_188 [8];
  long lStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined8 *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  func_0x00010be568a0(*(undefined8 *)(param_1 + 0x20));
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_140 = puVar1;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puStack_148 = puVar7;
  _objc_retain(param_2);
  puVar1 = &uStack_130;
  ppuVar2 = param_2;
  ppuStack_138 = param_2;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    lVar10 = *plStack_120;
    param_2 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    do {
      unaff_x21 = (undefined **)0x0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(ppuStack_138);
        }
        uVar8 = *(undefined8 *)(lStack_128 + (long)unaff_x21 * 8);
        puVar3 = PTR_PTR_1126b1370;
        _objc_alloc(PTR_PTR_1126b1370);
        func_0x00010c05c980();
        puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        iVar9 = (int)*(undefined8 *)(param_1 + 0x28);
        func_0x00010c11c420();
        func_0x00010c0df780(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900();
        _objc_release(puVar7);
        if (iVar9 != 0) {
          func_0x00010c134680(uVar8);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar8;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puStack_140);
          _objc_release(uVar4);
          _objc_release(uVar8);
          puVar7 = puVar3;
          func_0x00010c0dc140(puVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puStack_148);
          _objc_release(puVar7);
        }
        _objc_release(puVar3);
        unaff_x21 = (undefined **)((long)unaff_x21 + 1);
      } while (ppuVar2 != unaff_x21);
      puVar1 = &uStack_130;
      ppuVar2 = ppuStack_138;
      func_0x00010bf52a60();
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(ppuStack_138);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  puVar6 = puStack_140;
  if ((param_1 != 0) && (puVar5 = puStack_140, func_0x00010bf529e0(), puVar5 != (undefined8 *)0x0))
  {
    puVar1 = puVar6;
    func_0x00010c12bf00(*(undefined8 *)(param_1 + 8));
  }
  _objc_release(param_1);
  _objc_release(puStack_148);
  _objc_release(puVar6);
  ppuVar2 = ppuStack_138;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puStack_168 = puVar6;
  pcStack_158 = FUN_105311d0c;
  lStack_180 = param_1;
  ppuStack_178 = unaff_x21;
  ppuStack_170 = param_2;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  puVar6 = puVar1;
  func_0x00010c08fa60();
  if (puVar6 != (undefined8 *)0x0) {
    _objc_initWeak(auStack_188,ppuVar2);
    puVar7 = ppuVar2[1];
    _objc_retain(puVar1);
    _objc_copyWeak(auStack_190,auStack_188);
    func_0x00010bfc4a60(puVar7);
    _objc_destroyWeak(auStack_190);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_188);
  }
  _objc_release(puVar1);
  return;
}



/* Entry: 105311d0c; end: 105311def; -[SCSystemTrayNotificationRemover removePushNotificationsFromConversation:] */

void FUN_105311d0c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bfc4a60(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105311df0; end: 105312107;  */

void FUN_105311df0(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined **ppuVar13;
  long unaff_x20;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  long lStack_190;
  long lStack_188;
  long lStack_180;
  undefined **ppuStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 *puStack_160;
  long lStack_158;
  ulong uStack_150;
  undefined *puStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  ppuVar13 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puStack_148 = puVar2;
  _objc_retain(param_2);
  puVar11 = &uStack_130;
  puVar12 = auStack_f0;
  lVar15 = param_2;
  func_0x00010bf52a60();
  lStack_138 = lVar15;
  if (lVar15 != 0) {
    lStack_140 = *plStack_120;
    puStack_160 = puVar1;
    lStack_158 = param_2;
    do {
      lVar15 = 0;
      do {
        if (*plStack_120 != lStack_140) {
          _objc_enumerationMutation(param_2);
        }
        lVar16 = *(long *)(lStack_128 + lVar15 * 8);
        ppuVar3 = (undefined **)PTR_PTR_1126b1370;
        _objc_alloc();
        func_0x00010c05c980();
        uVar17 = *(ulong *)(param_1 + 0x20);
        ppuVar4 = ppuVar3;
        func_0x00010bfce860();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0();
        if ((uVar17 & 1) == 0) {
          iVar18 = (int)*(undefined8 *)(param_1 + 0x20);
          ppuVar5 = ppuVar3;
          func_0x00010bf0a2c0(ppuVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0720c0();
          if (iVar18 != 0) {
            _objc_release(ppuVar5);
            goto LAB_105311f28;
          }
          uStack_150 = *(undefined8 *)(param_1 + 0x20);
          ppuVar13 = *(undefined ***)(param_1 + 0x28);
          lVar6 = lVar16;
          func_0x00010c134680(lVar16);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010bf4bc60();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010c292820();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be1e180();
          _objc_retainAutoreleasedReturnValue();
          uVar17 = uStack_150;
          func_0x00010c0720c0();
          uStack_150 = CONCAT44(uStack_150._4_4_,(int)uVar17);
          _objc_release(ppuVar13);
          puVar1 = puStack_160;
          _objc_release(lVar8);
          param_2 = lStack_158;
          _objc_release(lVar7);
          _objc_release(lVar6);
          _objc_release(ppuVar5);
          _objc_release(ppuVar4);
          unaff_x20 = param_1;
          if ((uStack_150 & 1) != 0) goto LAB_105311f30;
        }
        else {
LAB_105311f28:
          _objc_release(ppuVar4);
LAB_105311f30:
          func_0x00010c134680();
          _objc_retainAutoreleasedReturnValue();
          unaff_x20 = lVar16;
          func_0x00010bfe5ec0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(unaff_x20);
          _objc_release(lVar16);
          ppuVar13 = ppuVar3;
          func_0x00010c0dc140();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puStack_148);
          _objc_release(ppuVar13);
        }
        _objc_release(ppuVar3);
        lVar15 = lVar15 + 1;
      } while (lStack_138 != lVar15);
      puVar11 = &uStack_130;
      puVar12 = auStack_f0;
      lVar15 = param_2;
      func_0x00010bf52a60();
      lStack_138 = lVar15;
    } while (lVar15 != 0);
  }
  _objc_release(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && (puVar9 = puVar1, func_0x00010bf529e0(), puVar9 != (undefined8 *)0x0)) {
    puVar11 = puVar1;
    func_0x00010c12bf00(*(undefined8 *)(param_1 + 8));
  }
  _objc_release(param_1);
  _objc_release(puStack_148);
  _objc_release(puVar1);
  lVar15 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_168 = FUN_105312108;
    lStack_190 = param_1;
    lStack_188 = param_2;
    lStack_180 = unaff_x20;
    ppuStack_178 = ppuVar13;
    puStack_170 = &stack0xfffffffffffffff0;
    _objc_retain(puVar11);
    _objc_retain(puVar12);
    puVar1 = puVar11;
    func_0x00010c08fa60();
    if ((puVar1 != (undefined8 *)0x0) &&
       (puVar10 = puVar12, func_0x00010bf529e0(), puVar10 != (undefined1 *)0x0)) {
      _objc_initWeak(auStack_198,lVar15);
      uVar14 = *(undefined8 *)(lVar15 + 8);
      _objc_retain(puVar11);
      _objc_retain(puVar12);
      _objc_copyWeak(auStack_1a0,auStack_198);
      func_0x00010bfc4a60(uVar14);
      _objc_destroyWeak(auStack_1a0);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_destroyWeak(auStack_198);
    }
    _objc_release(puVar12);
    _objc_release(puVar11);
    return;
  }
  return;
}



/* Entry: 105312108; end: 10531221f; -[SCSystemTrayNotificationRemover removePushNotificationsFromConversation:withTypes:] */

void FUN_105312108(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if ((lVar1 != 0) && (lVar1 = param_4, func_0x00010bf529e0(), lVar1 != 0)) {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bfc4a60(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105312220; end: 105312587;  */

void FUN_105312220(long param_1,long param_2,undefined8 *param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined *unaff_x25;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_2);
    param_3 = &uStack_130;
    lStack_138 = param_2;
    func_0x00010bf52a60();
    if (lStack_138 != 0) {
      lVar9 = *plStack_120;
      do {
        lVar17 = 0;
        do {
          if (*plStack_120 != lVar9) {
            _objc_enumerationMutation(param_2);
          }
          uVar11 = *(undefined8 *)(lStack_128 + lVar17 * 8);
          puVar5 = PTR_PTR_1126b1370;
          _objc_alloc();
          func_0x00010c05c980();
          uVar14 = *(ulong *)(param_1 + 0x20);
          puVar6 = puVar5;
          func_0x00010bfce860();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0720c0();
          if ((uVar14 & 1) == 0) {
            uVar16 = *(ulong *)(param_1 + 0x20);
            unaff_x25 = puVar5;
            func_0x00010bf0a2c0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0720c0();
            if ((uVar16 & 1) != 0) goto LAB_10531235c;
            iVar15 = (int)*(undefined8 *)(param_1 + 0x20);
            uStack_148 = uVar11;
            func_0x00010c134680();
            _objc_retainAutoreleasedReturnValue();
            uStack_150 = uStack_148;
            func_0x00010bf4bc60();
            _objc_retainAutoreleasedReturnValue();
            uStack_158 = uStack_150;
            func_0x00010c292820();
            _objc_retainAutoreleasedReturnValue();
            lStack_160 = lVar2;
            func_0x00010be1e180();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0720c0();
            uVar12 = 1;
            bVar1 = true;
            if (iVar15 != 0) goto LAB_105312360;
            uVar16 = 0;
LAB_105312434:
            iVar15 = (int)uVar16;
            _objc_release(lStack_160);
            _objc_release(uStack_158);
            _objc_release(uStack_150);
            _objc_release(uStack_148);
            if ((uVar12 & 1) != 0) goto LAB_1053123b4;
LAB_105312458:
            _objc_release(puVar6);
            if (iVar15 != 0) goto LAB_105312464;
          }
          else {
LAB_10531235c:
            bVar1 = false;
LAB_105312360:
            puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            uVar16 = *(ulong *)(param_1 + 0x28);
            func_0x00010c11c420(puVar5);
            func_0x00010c0df780();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf4b900();
            iVar15 = (int)uVar16;
            _objc_release(puVar7);
            if (bVar1) {
              uVar12 = (uint)uVar14 ^ 1;
              goto LAB_105312434;
            }
            if ((uVar14 & 1) != 0) goto LAB_105312458;
LAB_1053123b4:
            _objc_release(unaff_x25);
            _objc_release(puVar6);
            if ((uVar16 & 1) != 0) {
LAB_105312464:
              func_0x00010c134680();
              _objc_retainAutoreleasedReturnValue();
              uVar10 = uVar11;
              func_0x00010bfe5ec0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar3);
              _objc_release(uVar10);
              _objc_release(uVar11);
              puVar6 = puVar5;
              func_0x00010c0dc140(puVar5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar4);
              _objc_release(puVar6);
            }
          }
          _objc_release(puVar5);
          lVar17 = lVar17 + 1;
        } while (lStack_138 != lVar17);
        param_3 = &uStack_130;
        lStack_138 = param_2;
        func_0x00010bf52a60();
      } while (lStack_138 != 0);
    }
    _objc_release(param_2);
    puVar8 = puVar3;
    func_0x00010bf529e0();
    if (puVar8 != (undefined8 *)0x0) {
      param_3 = puVar3;
      func_0x00010c12bf00(*(undefined8 *)(lVar2 + 8));
    }
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(param_3);
    uVar11 = *(undefined8 *)(param_2 + 8);
    _objc_retain(uVar11);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (*(long *)(param_2 + 0x18) == 0) {
      func_0x0001070c2228(*(undefined8 *)(param_2 + 0x10));
      func_0x00010c0df6e0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_2 + 0x18);
      *(undefined **)(param_2 + 0x18) = puVar4;
      _objc_release(uVar10);
    }
    func_0x00010bf1f3c0();
    uVar10 = *(undefined8 *)(param_2 + 0x20);
    _objc_retain(uVar10);
    uVar13 = *(undefined8 *)(param_2 + 8);
    _objc_retain(uVar11);
    _objc_retain(param_3);
    _objc_retain(uVar10);
    func_0x00010bfc4a60(uVar13);
    _objc_release(uVar11);
    _objc_release(param_3);
    _objc_release(uVar10);
    _objc_release(uVar10);
    _objc_release(uVar11);
    _objc_release(param_3);
    return;
  }
  return;
}



/* Entry: 105312588; end: 1053126b7; -[SCSystemTrayNotificationRemover removePushNotificationsForClearingPolicies:] */

void FUN_105312588(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  uVar5 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar5);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x0001070c2228(uVar3);
    func_0x00010c0df6e0(puVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(undefined **)(param_1 + 0x18) = puVar4;
    _objc_release(uVar3);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  uVar1 = (undefined1)lVar2;
  func_0x00010bf1f3c0();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar6 = *(undefined8 *)(param_1 + 8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1053126b8;
  puStack_70 = &UNK_110878c90;
  uStack_68 = uVar3;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = uVar5;
  uStack_48 = uVar1;
  _objc_retain(uVar5);
  _objc_retain(param_3);
  _objc_retain(uVar3);
  func_0x00010bfc4a60(uVar6,param_2,&puStack_88);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_68);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(param_3);
  return;
}



/* Entry: 1053126b8; end: 105312927;  */

undefined8 * FUN_1053126b8(long param_1,undefined8 *param_2)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x22;
  long lVar14;
  undefined8 unaff_x23;
  long lVar15;
  undefined *unaff_x24;
  undefined8 *puVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined *unaff_x27;
  long unaff_x28;
  undefined8 uStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 uStack_3b0;
  undefined1 uStack_3a8;
  undefined8 uStack_3a0;
  long lStack_398;
  long *plStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 auStack_360 [16];
  long lStack_2e0;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 auStack_218 [16];
  long lStack_198;
  long lStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  long lStack_160;
  undefined8 *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 auStack_f0 [16];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_138 = puVar3;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puStack_140 = puVar4;
  _objc_retain(param_2);
  puVar3 = &uStack_130;
  puVar13 = auStack_f0;
  puVar5 = param_2;
  func_0x00010bf52a60();
  if (puVar5 != (undefined8 *)0x0) {
    unaff_x28 = *plStack_120;
    do {
      unaff_x22 = (undefined8 *)0x0;
      do {
        if (*plStack_120 != unaff_x28) {
          _objc_enumerationMutation(param_2);
        }
        puVar17 = *(undefined **)(lStack_128 + (long)unaff_x22 * 8);
        unaff_x24 = PTR_PTR_1126b1370;
        _objc_alloc();
        func_0x00010c05c980();
        puVar6 = unaff_x24;
        func_0x00010c07cda0();
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if ((int)puVar6 != 0) {
          if (*(char *)(param_1 + 0x40) == '\x01') {
            uVar18 = *(ulong *)(param_1 + 0x20);
            func_0x00010c11c420(unaff_x24);
            func_0x00010c0df780();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf4b900();
            _objc_release(puVar4);
            unaff_x27 = puVar4;
            if ((uVar18 & 1) != 0) goto LAB_105312880;
          }
          puVar4 = unaff_x24;
          func_0x00010bf3c640();
          _objc_retainAutoreleasedReturnValue();
          iVar2 = (int)*(undefined8 *)(param_1 + 0x28);
          _objc_opt_class();
          func_0x00010beb2d00();
          if (iVar2 != 0) {
            func_0x00010c134680();
            _objc_retainAutoreleasedReturnValue();
            unaff_x27 = puVar17;
            func_0x00010bfe5ec0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puStack_138);
            _objc_release(unaff_x27);
            _objc_release(puVar17);
            puVar6 = unaff_x24;
            func_0x00010c0dc140();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puStack_140);
            _objc_release(puVar6);
          }
          _objc_release(puVar4);
        }
LAB_105312880:
        _objc_release(unaff_x24);
        unaff_x22 = (undefined8 *)((long)unaff_x22 + 1);
      } while (puVar5 != unaff_x22);
      puVar3 = &uStack_130;
      puVar13 = auStack_f0;
      puVar5 = param_2;
      func_0x00010bf52a60();
      unaff_x23 = 0;
    } while (puVar5 != (undefined8 *)0x0);
  }
  _objc_release(param_2);
  puVar5 = puStack_138;
  puVar12 = puStack_138;
  func_0x00010bf529e0();
  if (puVar12 != (undefined8 *)0x0) {
    puVar3 = puVar5;
    func_0x00010c12bf00(*(undefined8 *)(param_1 + 0x38));
  }
  _objc_release(puStack_140);
  _objc_release(puVar5);
  puVar12 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar12;
  }
  ___stack_chk_fail();
  puVar11 = &uStack_260;
  puStack_168 = puVar5;
  pcStack_148 = FUN_105312928;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = puVar3;
  puVar5 = puVar13;
  lStack_190 = unaff_x28;
  puStack_188 = unaff_x27;
  puStack_180 = unaff_x24;
  uStack_178 = unaff_x23;
  puStack_170 = unaff_x22;
  lStack_160 = param_1;
  puStack_158 = param_2;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  _objc_retain(puVar13);
  puVar7 = puVar3;
  func_0x00010bf529e0();
  if (puVar7 == (undefined8 *)0x0) {
    puVar12 = (undefined8 *)0x0;
  }
  else {
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    lStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    plStack_250 = (long *)0x0;
    _objc_retain(puVar3);
    puVar5 = auStack_218;
    puVar7 = puVar3;
    func_0x00010bf52a60();
    if (puVar7 != (undefined8 *)0x0) {
      lVar15 = *plStack_250;
      do {
        puVar16 = (undefined8 *)0x0;
        do {
          if (*plStack_250 != lVar15) {
            _objc_enumerationMutation(puVar3);
          }
          puVar11 = *(undefined8 **)(lStack_258 + (long)puVar16 * 8);
          puVar8 = puVar12;
          puVar5 = puVar13;
          func_0x00010beb2d20();
          if (((ulong)puVar8 & 1) != 0) {
            puVar12 = (undefined8 *)0x1;
            goto LAB_105312a1c;
          }
          puVar16 = (undefined8 *)((long)puVar16 + 1);
        } while (puVar7 != puVar16);
        puVar5 = auStack_218;
        puVar7 = puVar3;
        puVar11 = &uStack_260;
        func_0x00010bf52a60();
      } while (puVar7 != (undefined8 *)0x0);
    }
    puVar12 = (undefined8 *)0x0;
LAB_105312a1c:
    _objc_release(puVar3);
    puVar16 = puVar11;
  }
  _objc_release(puVar13);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return puVar12;
  }
  ___stack_chk_fail();
  lStack_2e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar5;
  _objc_retain(puVar16);
  _objc_retain(puVar5);
  if ((puVar16 == (undefined8 *)0x0) ||
     (puVar13 = puVar5, func_0x00010bf529e0(), puVar13 == (undefined8 *)0x0)) {
LAB_105312cfc:
    puVar13 = (undefined8 *)0x0;
  }
  else {
    puVar13 = puVar16;
    func_0x00010c103180();
    if ((int)puVar13 == 3) {
      puVar13 = puVar16;
      func_0x00010bfa1860();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar13;
      func_0x00010beeed20();
      _objc_release(puVar13);
      if ((int)puVar12 == 3) {
        uStack_378 = 0;
        uStack_380 = 0;
        uStack_368 = 0;
        uStack_370 = 0;
        lStack_398 = 0;
        uStack_3a0 = 0;
        uStack_388 = 0;
        plStack_390 = (long *)0x0;
        _objc_retain(puVar5);
        puVar3 = auStack_360;
        puVar13 = puVar5;
        func_0x00010bf52a60();
        if (puVar13 != (undefined8 *)0x0) {
          lVar15 = *plStack_390;
          do {
            puVar12 = (undefined8 *)0x0;
            do {
              if (*plStack_390 != lVar15) {
                _objc_enumerationMutation(puVar5);
              }
              lVar14 = *(long *)(lStack_398 + (long)puVar12 * 8);
              lVar9 = lVar14;
              func_0x00010c103180();
              if ((int)lVar9 == 3) {
                func_0x00010bfa1860();
                _objc_retainAutoreleasedReturnValue();
                lVar9 = lVar14;
                func_0x00010beeed20();
                if ((int)lVar9 == 3) {
                  lVar9 = lVar14;
                  func_0x00010c0ea880();
                  _objc_retainAutoreleasedReturnValue();
                  lVar10 = lVar9;
                  func_0x00010c0e9200();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(lVar9);
                  lVar9 = lVar10;
                  func_0x00010bf529e0();
                  if (lVar9 != 0) {
                    lVar9 = lVar10;
                    func_0x00010c296de0();
                    if (((int)lVar9 != -0x4524111) && ((int)lVar9 != 0)) {
                      puStack_3b8 = &uStack_3c0;
                      uStack_3c0 = 0;
                      uStack_3b0 = 0x2020000000;
                      uStack_3a8 = 0;
                      puVar7 = puVar16;
                      func_0x00010bfa1860(puVar16);
                      _objc_retainAutoreleasedReturnValue();
                      puVar11 = puVar7;
                      func_0x00010c0ea880();
                      _objc_retainAutoreleasedReturnValue();
                      puVar8 = puVar11;
                      func_0x00010c0e9200();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(puVar11);
                      _objc_release(puVar7);
                      func_0x00010bf980c0(puVar8);
                      bVar1 = *(byte *)(puStack_3b8 + 3);
                      _objc_release(puVar8);
                      __Block_object_dispose(&uStack_3c0,8);
                      if ((bVar1 & 1) != 0) {
                        _objc_release(lVar10);
                        _objc_release(lVar14);
                        _objc_release(puVar5);
                        puVar13 = (undefined8 *)0x1;
                        goto LAB_105312d14;
                      }
                    }
                  }
                  _objc_release(lVar10);
                }
                _objc_release(lVar14);
              }
              puVar12 = (undefined8 *)((long)puVar12 + 1);
            } while (puVar13 != puVar12);
            puVar3 = auStack_360;
            puVar13 = puVar5;
            func_0x00010bf52a60();
          } while (puVar13 != (undefined8 *)0x0);
        }
        _objc_release(puVar5);
        goto LAB_105312cfc;
      }
    }
    puVar13 = puVar5;
    func_0x00010bf4b900(puVar5);
  }
LAB_105312d14:
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2e0) {
    return puVar13;
  }
  ___stack_chk_fail();
  iVar2 = 8;
  __Block_object_dispose(&uStack_3c0);
  __Unwind_Resume();
  if (iVar2 == *(int *)(puVar16 + 5)) {
    *(undefined1 *)(*(long *)(puVar16[4] + 8) + 0x18) = 1;
    *(undefined1 *)puVar3 = 1;
  }
  return puVar16;
}



/* Entry: 105312928; end: 105312a77; +[SCSystemTrayNotificationRemover _shouldClearNotifContainingMultiPolicies:clearingPolicies:] */

undefined1 * FUN_105312928(ulong param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined8 uStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  undefined1 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [128];
  long lStack_1a0;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar9 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar16 = param_3;
  puVar10 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar12 = param_3;
  func_0x00010bf529e0();
  if (puVar12 == (undefined1 *)0x0) {
    puVar12 = (undefined1 *)0x0;
  }
  else {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    _objc_retain(param_3);
    puVar10 = auStack_d8;
    puVar12 = param_3;
    func_0x00010bf52a60();
    if (puVar12 != (undefined1 *)0x0) {
      lVar15 = *plStack_110;
      do {
        puVar16 = (undefined1 *)0x0;
        do {
          if (*plStack_110 != lVar15) {
            _objc_enumerationMutation(param_3);
          }
          puVar9 = *(undefined8 **)(lStack_118 + (long)puVar16 * 8);
          uVar2 = param_1;
          puVar10 = param_4;
          func_0x00010beb2d20();
          if ((uVar2 & 1) != 0) {
            puVar12 = (undefined1 *)0x1;
            goto LAB_105312a1c;
          }
          puVar16 = puVar16 + 1;
        } while (puVar12 != puVar16);
        puVar10 = auStack_d8;
        puVar12 = param_3;
        puVar9 = &uStack_120;
        func_0x00010bf52a60();
      } while (puVar12 != (undefined1 *)0x0);
    }
    puVar12 = (undefined1 *)0x0;
LAB_105312a1c:
    _objc_release(param_3);
    puVar16 = (undefined1 *)puVar9;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar12;
  }
  ___stack_chk_fail();
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = puVar10;
  _objc_retain(puVar16);
  _objc_retain(puVar10);
  if ((puVar16 == (undefined1 *)0x0) ||
     (puVar13 = puVar10, func_0x00010bf529e0(), puVar13 == (undefined1 *)0x0)) {
LAB_105312cfc:
    puVar13 = (undefined1 *)0x0;
  }
  else {
    puVar13 = puVar16;
    func_0x00010c103180();
    if ((int)puVar13 == 3) {
      puVar13 = puVar16;
      func_0x00010bfa1860();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar13;
      func_0x00010beeed20();
      _objc_release(puVar13);
      if ((int)puVar11 == 3) {
        uStack_238 = 0;
        uStack_240 = 0;
        uStack_228 = 0;
        uStack_230 = 0;
        lStack_258 = 0;
        uStack_260 = 0;
        uStack_248 = 0;
        plStack_250 = (long *)0x0;
        _objc_retain(puVar10);
        puVar12 = auStack_220;
        puVar13 = puVar10;
        func_0x00010bf52a60();
        if (puVar13 != (undefined1 *)0x0) {
          lVar15 = *plStack_250;
          do {
            puVar11 = (undefined1 *)0x0;
            do {
              if (*plStack_250 != lVar15) {
                _objc_enumerationMutation(puVar10);
              }
              lVar14 = *(long *)(lStack_258 + (long)puVar11 * 8);
              lVar3 = lVar14;
              func_0x00010c103180();
              if ((int)lVar3 == 3) {
                func_0x00010bfa1860();
                _objc_retainAutoreleasedReturnValue();
                lVar3 = lVar14;
                func_0x00010beeed20();
                if ((int)lVar3 == 3) {
                  lVar3 = lVar14;
                  func_0x00010c0ea880();
                  _objc_retainAutoreleasedReturnValue();
                  lVar4 = lVar3;
                  func_0x00010c0e9200();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(lVar3);
                  lVar3 = lVar4;
                  func_0x00010bf529e0();
                  if (lVar3 != 0) {
                    lVar3 = lVar4;
                    func_0x00010c296de0();
                    if (((int)lVar3 != -0x4524111) && ((int)lVar3 != 0)) {
                      puStack_278 = &uStack_280;
                      uStack_280 = 0;
                      uStack_270 = 0x2020000000;
                      uStack_268 = 0;
                      puVar5 = puVar16;
                      func_0x00010bfa1860(puVar16);
                      _objc_retainAutoreleasedReturnValue();
                      puVar6 = puVar5;
                      func_0x00010c0ea880();
                      _objc_retainAutoreleasedReturnValue();
                      puVar7 = puVar6;
                      func_0x00010c0e9200();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(puVar6);
                      _objc_release(puVar5);
                      func_0x00010bf980c0(puVar7);
                      bVar1 = *(byte *)(puStack_278 + 3);
                      _objc_release(puVar7);
                      __Block_object_dispose(&uStack_280,8);
                      if ((bVar1 & 1) != 0) {
                        _objc_release(lVar4);
                        _objc_release(lVar14);
                        _objc_release(puVar10);
                        puVar13 = (undefined1 *)0x1;
                        goto LAB_105312d14;
                      }
                    }
                  }
                  _objc_release(lVar4);
                }
                _objc_release(lVar14);
              }
              puVar11 = puVar11 + 1;
            } while (puVar13 != puVar11);
            puVar12 = auStack_220;
            puVar13 = puVar10;
            func_0x00010bf52a60();
          } while (puVar13 != (undefined1 *)0x0);
        }
        _objc_release(puVar10);
        goto LAB_105312cfc;
      }
    }
    puVar13 = puVar10;
    func_0x00010bf4b900(puVar10);
  }
LAB_105312d14:
  _objc_release(puVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return puVar13;
  }
  ___stack_chk_fail();
  iVar8 = 8;
  __Block_object_dispose(&uStack_280);
  __Unwind_Resume();
  if (iVar8 == *(int *)(puVar16 + 0x28)) {
    *(undefined1 *)(*(long *)(*(long *)(puVar16 + 0x20) + 8) + 0x18) = 1;
    *puVar12 = 1;
  }
  return puVar16;
}



/* Entry: 105312a78; end: 105312da7; +[SCSystemTrayNotificationRemover _shouldClearNotifContainingSinglePolicy:clearingPolicies:] */

undefined1 *
FUN_105312a78(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 == (undefined1 *)0x0) ||
     (puVar10 = param_4, func_0x00010bf529e0(), puVar10 == (undefined1 *)0x0)) {
LAB_105312cfc:
    puVar10 = (undefined1 *)0x0;
  }
  else {
    puVar10 = param_3;
    func_0x00010c103180();
    if ((int)puVar10 == 3) {
      puVar10 = param_3;
      func_0x00010bfa1860();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar10;
      func_0x00010beeed20();
      _objc_release(puVar10);
      if ((int)puVar9 == 3) {
        uStack_118 = 0;
        uStack_120 = 0;
        uStack_108 = 0;
        uStack_110 = 0;
        lStack_138 = 0;
        uStack_140 = 0;
        uStack_128 = 0;
        plStack_130 = (long *)0x0;
        _objc_retain(param_4);
        puVar8 = auStack_100;
        puVar10 = param_4;
        func_0x00010bf52a60();
        if (puVar10 != (undefined1 *)0x0) {
          lVar12 = *plStack_130;
          do {
            puVar9 = (undefined1 *)0x0;
            do {
              if (*plStack_130 != lVar12) {
                _objc_enumerationMutation(param_4);
              }
              lVar11 = *(long *)(lStack_138 + (long)puVar9 * 8);
              lVar2 = lVar11;
              func_0x00010c103180();
              if ((int)lVar2 == 3) {
                func_0x00010bfa1860();
                _objc_retainAutoreleasedReturnValue();
                lVar2 = lVar11;
                func_0x00010beeed20();
                if ((int)lVar2 == 3) {
                  lVar2 = lVar11;
                  func_0x00010c0ea880();
                  _objc_retainAutoreleasedReturnValue();
                  lVar3 = lVar2;
                  func_0x00010c0e9200();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(lVar2);
                  lVar2 = lVar3;
                  func_0x00010bf529e0();
                  if (lVar2 != 0) {
                    lVar2 = lVar3;
                    func_0x00010c296de0();
                    if (((int)lVar2 != -0x4524111) && ((int)lVar2 != 0)) {
                      puStack_158 = &uStack_160;
                      uStack_160 = 0;
                      uStack_150 = 0x2020000000;
                      uStack_148 = 0;
                      puVar4 = param_3;
                      func_0x00010bfa1860(param_3);
                      _objc_retainAutoreleasedReturnValue();
                      puVar5 = puVar4;
                      func_0x00010c0ea880();
                      _objc_retainAutoreleasedReturnValue();
                      puVar6 = puVar5;
                      func_0x00010c0e9200();
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(puVar5);
                      _objc_release(puVar4);
                      func_0x00010bf980c0(puVar6);
                      bVar1 = *(byte *)(puStack_158 + 3);
                      _objc_release(puVar6);
                      __Block_object_dispose(&uStack_160,8);
                      if ((bVar1 & 1) != 0) {
                        _objc_release(lVar3);
                        _objc_release(lVar11);
                        _objc_release(param_4);
                        puVar10 = (undefined1 *)0x1;
                        goto LAB_105312d14;
                      }
                    }
                  }
                  _objc_release(lVar3);
                }
                _objc_release(lVar11);
              }
              puVar9 = puVar9 + 1;
            } while (puVar10 != puVar9);
            puVar8 = auStack_100;
            puVar10 = param_4;
            func_0x00010bf52a60();
          } while (puVar10 != (undefined1 *)0x0);
        }
        _objc_release(param_4);
        goto LAB_105312cfc;
      }
    }
    puVar10 = param_4;
    func_0x00010bf4b900(param_4);
  }
LAB_105312d14:
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar10;
  }
  ___stack_chk_fail();
  iVar7 = 8;
  __Block_object_dispose(&uStack_160);
  __Unwind_Resume();
  if (iVar7 == *(int *)(param_3 + 0x28)) {
    *(undefined1 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x18) = 1;
    *puVar8 = 1;
  }
  return param_3;
}



/* Entry: 105312da8; end: 105312dcb;  */

void FUN_105312da8(long param_1,int param_2,undefined8 param_3,undefined1 *param_4)

{
  if (param_2 == *(int *)(param_1 + 0x28)) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
    *param_4 = 1;
  }
  return;
}



/* Entry: 105312dcc; end: 105312f77; -[SCSystemTrayNotificationRemover _getConversationIdFromUserInfo:] */

undefined ** FUN_105312dcc(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  ppuVar3 = &PTR____CFConstantStringClassReference_110f9e898;
  ppuVar4 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daccd8;
    ppuVar1 = param_3;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(ppuVar4);
    if (ppuVar1 != (undefined **)0x0) {
      ppuVar3 = &PTR____CFConstantStringClassReference_110e0fcf8;
      ppuVar4 = param_3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (ppuVar4 == (undefined **)0x0) {
        ppuVar3 = param_3;
        func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110f9e898);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = param_3;
        ppuStack_58 = ppuVar3;
        func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110daccd8);
        _objc_retainAutoreleasedReturnValue();
        ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSArray_1126ae530;
        ppuStack_50 = ppuVar4;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_58,2);
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = ppuVar1;
        func_0x00010c246d00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar1);
        _objc_release(ppuVar4);
        _objc_release(ppuVar3);
        ppuVar3 = &PTR____CFConstantStringClassReference_110dbdd98;
        ppuVar4 = ppuVar2;
        func_0x00010bf446e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar2);
      }
      goto LAB_105312f38;
    }
  }
  ppuVar4 = &PTR____CFConstantStringClassReference_110daafd8;
LAB_105312f38:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
    return ppuVar4;
  }
  ___stack_chk_fail();
  func_0x00010c0e00e0(ppuVar3,param_2,&PTR____CFConstantStringClassReference_110dd1ad8);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar4 = (undefined **)0x0;
  }
  else {
    ppuVar1 = ppuVar3;
    func_0x00010c260c80(ppuVar3,param_2,0,2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar1;
    func_0x00010c0720c0();
    _objc_release(ppuVar1);
  }
  _objc_release(ppuVar3);
  return ppuVar4;
}



/* Entry: 105312f78; end: 105312fff; -[SCSystemTrayNotificationRemover _isNotificationFromFriend:] */

long FUN_105312f78(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dd1ad8);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_3;
    func_0x00010c260c80(param_3,param_2,0,2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0720c0();
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 105313000; end: 105313117; -[SCSystemTrayNotificationRemover _logNotificationTypesToBeRemoved:] */

void FUN_105313000(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      puVar2 = PTR_PTR_1126b1370;
      func_0x00010c067fc0(*(undefined8 *)(lVar5 * 8));
      func_0x00010c25d500(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      lVar5 = lVar5 + 1;
    } while (lVar3 != lVar5);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_3 + 0x20,0);
  _objc_storeStrong(param_3 + 0x18,0);
  _objc_storeStrong(param_3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_3 + 8,0);
  return;
}



/* Entry: 105313118; end: 10531315f; -[SCSystemTrayNotificationRemover .cxx_destruct] */

void FUN_105313118(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105313160; end: 10531322b; -[SCNotificationAcknowledger initWithAckClient:graphene:notificationOSSettingsRetriever:] */

undefined1 *
FUN_105313160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e7878;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


