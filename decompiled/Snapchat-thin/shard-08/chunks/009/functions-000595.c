/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10673ca00; end: 10673ca0f; -[SCFeatureMainCameraScan scanTrayActivationStateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10673ca00(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274f2b8);
}



/* Entry: 10673ca10; end: 10673cb93; -[SCFeatureMainCameraScan .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10673ca10(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11274f2a4);
  _objc_destroyWeak(param_1 + _DAT_11274f2c8);
  _objc_storeStrong(param_1 + _DAT_11274f2d8,0);
  _objc_storeStrong(param_1 + _DAT_11274f2e8,0);
  _objc_storeStrong(param_1 + _DAT_11274f2a0,0);
  _objc_storeStrong(param_1 + _DAT_11274f2d0,0);
  _objc_storeStrong(param_1 + _DAT_11274f2b8,0);
  _objc_destroyWeak(param_1 + _DAT_11274f2c4);
  _objc_storeStrong(param_1 + _DAT_11274f29c,0);
  _objc_storeStrong(param_1 + _DAT_11274f298,0);
  _objc_destroyWeak(param_1 + _DAT_11274f2c0);
  _objc_storeStrong(param_1 + _DAT_11274f294,0);
  _objc_destroyWeak(param_1 + _DAT_11274f290);
  _objc_storeStrong(param_1 + _DAT_11274f2b4,0);
  _objc_storeStrong(param_1 + _DAT_11274f2b0,0);
  _objc_storeStrong(param_1 + _DAT_11274f2d4,0);
  _objc_storeStrong(param_1 + _DAT_11274f2e0,0);
  _objc_storeStrong(param_1 + _DAT_11274f2e4,0);
  _objc_storeStrong(param_1 + _DAT_11274f2cc,0);
  _objc_storeStrong(param_1 + _DAT_11274f2ac,0);
  _objc_storeStrong(param_1 + _DAT_11274f2a8,0);
  _objc_storeStrong(param_1 + _DAT_11274f2f0,0);
  _objc_destroyWeak(param_1 + _DAT_11274f2ec);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274f28c);
  return;
}



/* Entry: 10673cb94; end: 10673cd5b; -[SCMainCameraScanCapturer initWithCameraHardwareResource:] */

undefined1 * FUN_10673cb94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  puStack_68 = PTR_PTR_1126f2d48;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar10 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar10);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126ae568;
    _objc_alloc_init();
    uVar10 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar10);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_3);
    uVar10 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar10;
    func_0x00010bf318a0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c252440();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf51e00();
    uVar8 = param_3;
    func_0x00010c269d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c0b7ea0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24f8a0(puVar1);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar10);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10673cd5c; end: 10673cdb3; -[SCMainCameraScanCapturer dealloc] */

void FUN_10673cd5c(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf94360();
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f2d48;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10673cdb4; end: 10673ce93; -[SCMainCameraScanCapturer startObservingManagedVideoDataSourceOutputEvent:] */

void FUN_10673cdb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 0x28) == 0) {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    uVar1 = param_3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar1;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10673ce94; end: 10673cf3f;  */

void FUN_10673ce94(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0bd5e0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10673cf40; end: 10673cf9f;  */

void FUN_10673cf40(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1494c0(param_2);
  _objc_release(param_2);
  func_0x00010bdff540(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10673cfa0; end: 10673cfcb; -[SCMainCameraScanCapturer stopObservingManagedVideoDataSourceOutputEvent] */

void FUN_10673cfa0(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10673cfcc; end: 10673d05f; -[SCMainCameraScanCapturer _didReceiveManagedVideoDataSourceEvent:] */

void FUN_10673cfcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  FUN_10674110c(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdff3c0(param_1,param_2,param_3);
  _objc_release(param_3);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d560();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10673d060; end: 10673d087; -[SCMainCameraScanCapturer imageDataObservable] */

void FUN_10673d060(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10673d088; end: 10673d197; -[SCMainCameraScanCapturer beginCaptureWithTouchPoint:] */

void FUN_10673d088(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  *(undefined8 *)(param_3 + 0x40) = param_1;
  *(undefined8 *)(param_3 + 0x48) = param_2;
  _objc_initWeak(auStack_48,param_3);
  func_0x00010c069d00(*(undefined8 *)(param_3 + 8));
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_1;
  uStack_50 = param_2;
  func_0x00010c150360(0x3ff0000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_3 + 8);
  *(undefined **)(param_3 + 8) = puVar1;
  _objc_release(uVar2);
  func_0x00010bddb7c0(param_1,param_2,param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10673d198; end: 10673d1cb;  */

void FUN_10673d198(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bddb7c0(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10673d1cc; end: 10673d1f7; -[SCMainCameraScanCapturer endCapture] */

void FUN_10673d1cc(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c069d00(*(undefined8 *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10673d1f8; end: 10673d267; -[SCMainCameraScanCapturer _captureSingleFrameWithTouchPoint:] */

void FUN_10673d1f8(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c299c60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa260();
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10673d268; end: 10673d33f; -[SCMainCameraScanCapturer _didReceiveFrame:] */

void FUN_10673d268(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10673d340; end: 10673d38f;  */

void FUN_10673d340(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be29f20(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x48),lVar1,param_2,
                        *(undefined8 *)(param_1 + 0x20));
    uVar2 = *(undefined8 *)PTR__CGPointZero_110347540;
    *(undefined8 *)(lVar1 + 0x48) = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
    *(undefined8 *)(lVar1 + 0x40) = uVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10673d390; end: 10673d573; -[SCMainCameraScanCapturer _handleFrame:withTouchPoint:] */

void FUN_10673d390(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  double dStack_f0;
  double dStack_e8;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar12 = param_1;
  dVar13 = param_2;
  _objc_retain(param_5);
  func_0x00010c23d0a0(param_5);
  if ((dVar12 == 0.0) || (func_0x00010c23d0a0(param_5), dVar13 == 0.0)) {
    param_1 = *(double *)PTR__CGPointZero_110347540;
    param_2 = *(double *)(PTR__CGPointZero_110347540 + 8);
  }
  else {
    func_0x00010c23d0a0(param_5);
    param_1 = param_1 / dVar12;
    func_0x00010c23d0a0(param_5);
    param_2 = param_2 / dVar13;
  }
  puVar1 = PTR_PTR_1126b3140;
  func_0x00010bf30ee0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b3140;
  func_0x00010c277300(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b30f8;
  lVar3 = param_5;
  func_0x00010bfe9820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe94a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar6 = PTR_PTR_1126b3100;
  uVar11 = *(undefined8 *)(param_3 + 0x18);
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  puVar9 = puVar5;
  func_0x00010bfe9500();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c0d9840(uVar11);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar3);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  dStack_f0 = param_1;
  dStack_e8 = param_2;
  _objc_retain(puVar7);
  _objc_retain(lVar8);
  _objc_retain(puVar9);
  _objc_initWeak(auStack_f8,param_5);
  uVar11 = *(undefined8 *)(param_5 + 0x10);
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_10673d774;
  puStack_110 = &UNK_110841fb0;
  _objc_copyWeak(auStack_100,auStack_f8);
  _objc_retain(lVar8);
  lStack_108 = lVar8;
  func_0x00010c0f7fc0(uVar11);
  if (*(long *)(param_5 + 0x30) == 0) {
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar11 = *(undefined8 *)(param_5 + 0x30);
    *(undefined **)(param_5 + 0x30) = puVar4;
    _objc_release(uVar11);
    puVar4 = puVar9;
    func_0x00010c269d40(puVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c160440();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar6;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_130,auStack_f8);
    puVar2 = puVar1;
    func_0x00010c25ff60(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_130);
  }
  _objc_release(lStack_108);
  _objc_destroyWeak(auStack_100);
  _objc_destroyWeak(auStack_f8);
  _objc_release(puVar9);
  _objc_release(lVar8);
  _objc_release(puVar7);
  return;
}



/* Entry: 10673d574; end: 10673d773; -[SCMainCameraScanCapturer startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

void FUN_10673d574(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_78,param_1);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10673d774;
  puStack_90 = &UNK_110841fb0;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_4);
  uStack_88 = param_4;
  func_0x00010c0f7fc0(uVar5);
  if (*(long *)(param_1 + 0x30) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar1;
    _objc_release(uVar5);
    uVar5 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c160440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b0,auStack_78);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_destroyWeak(auStack_b0);
  }
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10673d774; end: 10673d7a7;  */

void FUN_10673d774(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc800();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10673d7a8; end: 10673d84b;  */

void FUN_10673d7a8(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e38c0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10673d84c; end: 10673d893;  */

void FUN_10673d84c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfc800();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10673d894; end: 10673d8bf; -[SCMainCameraScanCapturer stopObservingCapturerStateUpdate] */

void FUN_10673d894(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x30));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10673d8c0; end: 10673d8f3; -[SCMainCameraScanCapturer _didChangeCaptureDevicePosition:] */

void FUN_10673d8c0(long param_1,undefined8 param_2,long param_3)

{
  func_0x00010bf70d80();
  if (param_3 + 1U < 3) {
    *(ulong *)(param_1 + 0x20) = param_3 + 1U;
  }
  return;
}



/* Entry: 10673d8f4; end: 10673d94f; -[SCMainCameraScanCapturer .cxx_destruct] */

void FUN_10673d8f4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10673d950; end: 10673d9c3; -[SCScanScopeLauncherImpl initWithScanScopeExposer:] */

undefined1 * FUN_10673d950(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2d50;
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



/* Entry: 10673d9c4; end: 10673d9cb; -[SCScanScopeLauncherImpl isLaunched] */

undefined1 FUN_10673d9c4(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 10673d9cc; end: 10673da0b; -[SCScanScopeLauncherImpl scopeLaunchSource] */

undefined8 FUN_10673d9cc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c150520(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c247520();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10673da0c; end: 10673da37; -[SCScanScopeLauncherImpl launchScanScope:] */

void FUN_10673da0c(long param_1)

{
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



/* Entry: 10673da38; end: 10673dae3; -[SCScanScopeLauncherImpl dismissScanScopeWithCompletion:] */

void FUN_10673da38(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c12e1c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined1 *)(param_1 + 0x10) = 0;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10673dae4;
  puStack_40 = &UNK_110849530;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c2a4ae0(uVar1,param_2,&puStack_58);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(uVar1);
  return;
}



/* Entry: 10673dae4; end: 10673daf7;  */

void FUN_10673dae4(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010673daf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10673daf8; end: 10673db03; -[SCScanScopeLauncherImpl .cxx_destruct] */

void FUN_10673daf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10673db04; end: 10673db83; -[SCMainCameraRealTimeScanSubviewAttachedSafeUIContainer initWithSubviewUIContainer:] */

undefined1 * FUN_10673db04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2d58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x18) = 0;
    func_0x00010bdf2ba0(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10673db84; end: 10673db8b; -[SCMainCameraRealTimeScanSubviewAttachedSafeUIContainer attachUI:] */

void FUN_10673db84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0c990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_attachUI__1125a0c08);
  return;
}



/* Entry: 10673db8c; end: 10673db93; -[SCMainCameraRealTimeScanSubviewAttachedSafeUIContainer detachUI:] */

void FUN_10673db8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_detachUI__1125b96b8);
  return;
}



/* Entry: 10673db94; end: 10673dbeb; -[SCMainCameraRealTimeScanSubviewAttachedSafeUIContainer attachToSafeModalContainer:] */

void FUN_10673db94(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010bf6f2a0(param_1,param_2,0);
  }
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  *(undefined1 *)(param_1 + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10673dbec; end: 10673dc43; -[SCMainCameraRealTimeScanSubviewAttachedSafeUIContainer detachFromSafeModalContainerWithCompletion:] */

void FUN_10673dbec(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3);
    }
  }
  else {
    func_0x00010bf6f440(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10673dc44; end: 10673dd5f; -[SCMainCameraRealTimeScanSubviewAttachedSafeUIContainer _createSafeContainer] */

void FUN_10673dc44(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126aeaf8;
  _objc_alloc();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10673dd60;
  puStack_58 = &UNK_110849680;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c0311a0();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10673dd60; end: 10673ddef;  */

void FUN_10673dd60(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf0c900();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10673ddf0; end: 10673de1f; -[SCMainCameraRealTimeScanSubviewAttachedSafeUIContainer .cxx_destruct] */

void FUN_10673ddf0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10673de20; end: 10673df83; -[SCMainCameraRealTimeScanActivationWorkflow initWithRealTimeScanConfiguration:performer:rtsLogger:] */

undefined1 *
FUN_10673de20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f2d60;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x29) = 1;
    *(undefined1 *)((long)puVar1 + 0x39) = 1;
    uVar2 = param_3;
    func_0x00010bfe9cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar5);
    *(undefined1 *)((long)puVar1 + 0x3d) = 1;
    *(undefined2 *)((long)puVar1 + 0x3b) = 0x101;
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bdd91e0();
    *(char *)((long)puVar1 + 0x3a) = (char)puVar4;
    *(undefined2 *)((long)puVar1 + 0x3e) = 0;
    *(undefined1 *)((long)puVar1 + 0x40) = 0;
    *(undefined1 *)((long)puVar1 + 0x28) = 0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10673df84; end: 10673dfb3;  */

void FUN_10673df84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfe66c0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,param_2);
  return;
}



/* Entry: 10673dfb4; end: 10673e96b; -[SCMainCameraRealTimeScanActivationWorkflow beginWithCurrentCapturerState:appLifecycleManager:applicationLifecycleEvents:lensCarouselActiveStateObservable:mainCameraViewControllerLifecycleEvents:cameraFeatureUpdateEventObservable:trayActivationStateObservable:activeLensIdObservable:batchCaptureActivatedObservable:rtsLogger:managedCapturerStateCoordinator:] */

void FUN_10673dfb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_1f8 [8];
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  code *pcStack_1e0;
  undefined *puStack_1d8;
  undefined1 auStack_1d0 [8];
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *puStack_1b0;
  undefined1 auStack_1a8 [8];
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined1 auStack_180 [8];
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  lVar1 = param_1;
  func_0x00010bddba00();
  *(char *)(param_1 + 0x38) = (char)lVar1;
  _objc_retain(param_13);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_13;
  _objc_release(uVar2);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x10));
  _objc_initWeak(auStack_80,param_1);
  uVar2 = param_10;
  func_0x00010c0e0ea0(param_10);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10673e96c;
  puStack_90 = &UNK_11084eff0;
  _objc_copyWeak(auStack_88,auStack_80);
  uVar6 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c269d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae960;
  puVar3 = PTR_PTR_1126cd588;
  func_0x00010c121d00(PTR_PTR_1126cd588);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fb60(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ae970;
  func_0x00010bfe2ec0(PTR_PTR_1126ae970);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c11de00(uVar6);
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x10673e9b4;
  puStack_c0 = &UNK_110841fb0;
  _objc_copyWeak(auStack_b0,auStack_80);
  _objc_retain(param_5);
  uStack_b8 = param_5;
  func_0x00010c2a1660(uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  func_0x00010bec6aa0(param_1);
  if (*(long *)(param_1 + 0x50) == 0) {
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    *(undefined **)(param_1 + 0x50) = puVar4;
    _objc_release(uVar2);
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010c0987a0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_10673e9f8;
    puStack_e8 = &UNK_11090d210;
    _objc_copyWeak(auStack_e0,auStack_80);
    uVar9 = uVar8;
    func_0x00010c25ff60(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar7);
    uVar2 = param_13;
    func_0x00010c269d40(param_13);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c160440();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_120 = 0xc2000000;
    pcStack_118 = FUN_10673eb8c;
    puStack_110 = &UNK_110872b30;
    _objc_copyWeak(auStack_108,auStack_80);
    uVar7 = uVar9;
    func_0x00010c25ff60(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar2);
    uVar2 = param_13;
    func_0x00010c269d40(param_13);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c0c42e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar6;
    func_0x00010c2880c0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_148 = 0xc2000000;
    pcStack_140 = FUN_10673ec7c;
    puStack_138 = &UNK_11084e400;
    _objc_copyWeak(auStack_130,auStack_80);
    uVar7 = uVar9;
    func_0x00010c25ff60(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar2);
    uVar10 = *(ulong *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010bf1f3c0();
    _objc_release(uVar10);
    if ((uVar11 & 1) == 0) {
      uVar2 = param_6;
      func_0x00010c0e0ea0(param_6);
      _objc_retainAutoreleasedReturnValue();
      puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_170 = 0xc2000000;
      pcStack_168 = FUN_10673ee10;
      puStack_160 = &UNK_110842a38;
      _objc_copyWeak(auStack_158,auStack_80);
      uVar6 = uVar2;
      func_0x00010c25ff60(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar6);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_158);
    }
    uVar2 = param_7;
    func_0x00010c0e0ea0(param_7);
    _objc_retainAutoreleasedReturnValue();
    puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_198 = 0xc2000000;
    pcStack_190 = FUN_10673ee70;
    puStack_188 = &UNK_11090b470;
    _objc_copyWeak(auStack_180,auStack_80);
    uVar6 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar2);
    uVar2 = param_8;
    func_0x00010c0e0ea0(param_8);
    _objc_retainAutoreleasedReturnValue();
    puStack_1c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1c0 = 0xc2000000;
    uStack_1b8 = 0x10673eeb8;
    puStack_1b0 = &UNK_110911260;
    _objc_copyWeak(auStack_1a8,auStack_80);
    uVar6 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar2);
    uVar2 = param_9;
    func_0x00010c0e0ea0(param_9);
    _objc_retainAutoreleasedReturnValue();
    puStack_1f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1e8 = 0xc2000000;
    pcStack_1e0 = FUN_10673ef00;
    puStack_1d8 = &UNK_110842a38;
    _objc_copyWeak(auStack_1d0,auStack_80);
    uVar6 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar2);
    uVar2 = param_11;
    func_0x00010c0e0ea0(param_11);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_1f8,auStack_80);
    uVar6 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = param_12;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_1f8);
    _objc_destroyWeak(auStack_1d0);
    _objc_destroyWeak(auStack_1a8);
    _objc_destroyWeak(auStack_180);
    _objc_destroyWeak(auStack_130);
    _objc_destroyWeak(auStack_108);
    _objc_destroyWeak(auStack_e0);
  }
  _objc_release(uStack_b8);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10673e96c; end: 10673e9f7;  */

void FUN_10673e96c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be25400();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10673e9f8; end: 10673eaf3;  */

void FUN_10673e9f8(long param_1,undefined8 param_2)

{
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10673eaf4;
  puStack_60 = &UNK_110872b00;
  _objc_copyWeak(auStack_58,param_1 + 0x20);
  func_0x00010c0e3960(param_2);
  _objc_copyWeak(auStack_80,param_1 + 0x20);
  func_0x00010c0e3880(param_2);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_2);
  return;
}



/* Entry: 10673eaf4; end: 10673eb8b;  */

void FUN_10673eaf4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be84040();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10673eb8c; end: 10673ec2f;  */

void FUN_10673eb8c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e38c0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10673ec30; end: 10673ec7b;  */

void FUN_10673ec30(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be84040();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10673ec7c; end: 10673ed77;  */

void FUN_10673ec7c(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10673ed78;
  puStack_50 = &UNK_110872b00;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  func_0x00010c0e7bc0(param_2);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0e7be0(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 10673ed78; end: 10673ee0f;  */

void FUN_10673ed78(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be84040();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10673ee10; end: 10673ee6f;  */

void FUN_10673ee10(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010be2b380(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10673ee70; end: 10673eeff;  */

void FUN_10673ee70(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be26cc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10673ef00; end: 10673efbf;  */

void FUN_10673ef00(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010be2f940(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10673efc0; end: 10673efe7; -[SCMainCameraRealTimeScanActivationWorkflow rtsActivationUpdateObservable] */

void FUN_10673efc0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10673efe8; end: 10673efef; -[SCMainCameraRealTimeScanActivationWorkflow rtsSupported] */

undefined1 FUN_10673efe8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x60);
}



/* Entry: 10673eff0; end: 10673f0e7; -[SCMainCameraRealTimeScanActivationWorkflow setRtsSupported:] */

/* WARNING: Removing unreachable block (ram,0x00010673f014) */
/* WARNING: Removing unreachable block (ram,0x00010673f028) */

void FUN_10673eff0(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  uint uVar3;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x60);
  if ((param_3 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
      uVar3 = 0;
      if (*(char *)(param_1 + 0x41) != *(char *)(param_1 + 0x42)) goto LAB_10673f04c;
    }
    else {
      uVar3 = 1;
    }
  }
  if (uVar3 == param_3) {
    return;
  }
LAB_10673f04c:
  *(char *)(param_1 + 0x60) = (char)param_3;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c121d80();
  _objc_release(uVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10673f0e8;
  puStack_30 = &UNK_110938270;
  ppuVar2 = &puStack_48;
  lStack_28 = param_1;
  FUN_10673f0e8(ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  *(undefined1 *)(param_1 + 0x42) = *(undefined1 *)(param_1 + 0x41);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x18),param_2,ppuVar2);
  *(undefined1 *)(param_1 + 0x40) = 0;
  _objc_release(ppuVar2);
  return;
}



/* Entry: 10673f0e8; end: 10673f133;  */

void FUN_10673f0e8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(char *)(lVar1 + 0x60) == '\x01') {
    func_0x00010c080520(PTR_PTR_1126cd590,param_2,*(undefined1 *)(lVar1 + 0x40));
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c082220(PTR_PTR_1126cd590,param_2,*(undefined1 *)(lVar1 + 0x41));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10673f134; end: 10673f19b; -[SCMainCameraRealTimeScanActivationWorkflow _computeIsRtsSupported] */

byte FUN_10673f134(long param_1)

{
  byte bVar1;
  
  if ((((*(char *)(param_1 + 0x29) == '\x01') && (*(char *)(param_1 + 0x38) == '\x01')) &&
      (*(char *)(param_1 + 0x3e) == '\x01')) &&
     (((*(char *)(param_1 + 0x28) == '\x01' && (*(char *)(param_1 + 0x3a) == '\x01')) &&
      (*(char *)(param_1 + 0x3f) == '\x01')))) {
    bVar1 = *(byte *)(param_1 + 0x39);
    *(byte *)(param_1 + 0x41) = bVar1 ^ 1;
  }
  else {
    bVar1 = 0;
    *(undefined1 *)(param_1 + 0x41) = 0;
  }
  return bVar1 & 1;
}



/* Entry: 10673f19c; end: 10673f1db; -[SCMainCameraRealTimeScanActivationWorkflow _handleScanTrayActiveStateUpdate:] */

void FUN_10673f19c(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  if ((uint)*(byte *)(param_1 + 0x39) == (param_3 ^ 1)) {
    return;
  }
  *(char *)(param_1 + 0x39) = (char)(param_3 ^ 1);
  lVar1 = param_1;
  func_0x00010bde43a0();
                    /* WARNING: Could not recover jumptable at 0x00010c1eec30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setRtsSupported__112659530,lVar1);
  return;
}



/* Entry: 10673f1dc; end: 10673f2d7; -[SCMainCameraRealTimeScanActivationWorkflow _handleActiveLensIdUpdate:] */

void FUN_10673f1dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0bf0a0(param_3);
  if (*(char *)(param_1 + 0x28) != *(char *)(puStack_38 + 3)) {
    *(char *)(param_1 + 0x28) = *(char *)(puStack_38 + 3);
    func_0x00010bde43a0(param_1);
    func_0x00010c1eec20(param_1);
  }
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return;
}



/* Entry: 10673f2d8; end: 10673f35b;  */

void FUN_10673f2d8(long param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10673f35c; end: 10673f397; -[SCMainCameraRealTimeScanActivationWorkflow _handleLensCarouselActiveStateUpdate:] */

void FUN_10673f35c(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  if (*(byte *)(param_1 + 0x29) == param_3) {
    return;
  }
  *(char *)(param_1 + 0x29) = (char)param_3;
  lVar1 = param_1;
  func_0x00010bde43a0();
                    /* WARNING: Could not recover jumptable at 0x00010c1eec30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setRtsSupported__112659530,lVar1);
  return;
}



/* Entry: 10673f398; end: 10673f49b; -[SCMainCameraRealTimeScanActivationWorkflow _handleCameraLifecycleEventUpdate:] */

void FUN_10673f398(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c1540(param_3);
  if (*(char *)(puStack_38 + 3) != *(char *)(param_1 + 0x3e)) {
    *(char *)(param_1 + 0x3e) = *(char *)(puStack_38 + 3);
    func_0x00010bde43a0(param_1);
    func_0x00010c1eec20(param_1);
  }
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return;
}



/* Entry: 10673f49c; end: 10673f4cb;  */

void FUN_10673f49c(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 10673f4cc; end: 10673f577; -[SCMainCameraRealTimeScanActivationWorkflow _handleCameraFeatureUpdateEventUpdate:] */

void FUN_10673f4cc(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a52b8);
  if ((param_3 == 0) || ((int)lVar2 == 0)) {
    lVar2 = param_3;
    func_0x00010010fab4(param_3,PTR_DAT_1126a5610);
    if ((param_3 == 0) || ((int)lVar2 == 0)) goto LAB_10673f53c;
    lVar2 = param_3;
    func_0x00010bf926c0();
    bVar1 = (byte)lVar2;
    lVar2 = 0x3c;
  }
  else {
    lVar2 = param_3;
    func_0x00010c078380();
    bVar1 = (byte)lVar2;
    lVar2 = 0x3b;
  }
  *(byte *)(param_1 + lVar2) = bVar1 ^ 1;
LAB_10673f53c:
  lVar2 = param_1;
  func_0x00010bdd91e0();
  if ((uint)*(byte *)(param_1 + 0x3a) != (uint)lVar2) {
    *(char *)(param_1 + 0x3a) = (char)lVar2;
    func_0x00010bde43a0(param_1);
    func_0x00010c1eec20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10673f578; end: 10673f5d7; -[SCMainCameraRealTimeScanActivationWorkflow _handleBatchCaptureActiveStateUpdate:] */

void FUN_10673f578(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  if ((uint)*(byte *)(param_1 + 0x3d) != (param_3 ^ 1)) {
    *(char *)(param_1 + 0x3d) = (char)(param_3 ^ 1);
    lVar1 = param_1;
    func_0x00010bdd91e0();
    if ((uint)*(byte *)(param_1 + 0x3a) != (uint)lVar1) {
      *(char *)(param_1 + 0x3a) = (char)lVar1;
      lVar1 = param_1;
      func_0x00010bde43a0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1eec30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setRtsSupported__112659530,lVar1);
      return;
    }
  }
  return;
}



/* Entry: 10673f5d8; end: 10673f607; -[SCMainCameraRealTimeScanActivationWorkflow _handleAppLifecycleStartupCompletion] */

void FUN_10673f5d8(long param_1)

{
  long lVar1;
  
  *(undefined2 *)(param_1 + 0x3f) = 0x101;
  lVar1 = param_1;
  func_0x00010bde43a0();
                    /* WARNING: Could not recover jumptable at 0x00010c1eec30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setRtsSupported__112659530,lVar1);
  return;
}



/* Entry: 10673f608; end: 10673f72b; -[SCMainCameraRealTimeScanActivationWorkflow _subscribeOnAppBecomeActive:] */

void FUN_10673f608(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bf72840(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10673f72c; end: 10673f773;  */

void FUN_10673f72c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x3f) = 1;
    lVar1 = param_1;
    func_0x00010bde43a0(param_1);
    func_0x00010c1eec20(param_1,param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10673f774; end: 10673f897; -[SCMainCameraRealTimeScanActivationWorkflow _subscribeOnAppEnterBackground:] */

void FUN_10673f774(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = param_3;
  func_0x00010bf75dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 10673f898; end: 10673f8db;  */

void FUN_10673f898(long param_1,undefined8 param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x3f) = 0;
    lVar1 = param_1;
    func_0x00010bde43a0(param_1);
    func_0x00010c1eec20(param_1,param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10673f8dc; end: 10673f907; -[SCMainCameraRealTimeScanActivationWorkflow _cameraFeaturesSupportRts] */

byte FUN_10673f8dc(long param_1)

{
  byte bVar1;
  
  if ((*(char *)(param_1 + 0x3b) == '\x01') && (*(char *)(param_1 + 0x3c) == '\x01')) {
    bVar1 = *(byte *)(param_1 + 0x3d);
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}



/* Entry: 10673f908; end: 10673f97b; -[SCMainCameraRealTimeScanActivationWorkflow _publishIsRtsSupportedForCapturerState:isWillCaptureUpdate:] */

void FUN_10673f908(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if ((param_4 & 1) == 0) {
    lVar2 = param_1;
    func_0x00010bddba00(param_1,param_2,param_3);
    uVar1 = (uint)lVar2;
  }
  else {
    uVar1 = 0;
  }
  if (*(byte *)(param_1 + 0x38) != uVar1) {
    *(char *)(param_1 + 0x38) = (char)uVar1;
    lVar2 = param_1;
    func_0x00010bde43a0(param_1);
    func_0x00010c1eec20(param_1,param_2,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10673f97c; end: 10673f9eb; -[SCMainCameraRealTimeScanActivationWorkflow _capturerStateSupportsRts:] */

uint FUN_10673f97c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf70d80(param_3);
  func_0x00010be3f980(param_1,param_2,uVar1);
  uVar1 = param_3;
  func_0x00010c0982a0();
  if ((int)uVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x00010bf093c0(param_3);
    uVar2 = ((uint)uVar1 ^ 1) & (uint)param_1;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 10673f9ec; end: 10673f9f7; -[SCMainCameraRealTimeScanActivationWorkflow _isDevicePositionSupported:] */

bool FUN_10673f9ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 1;
}



/* Entry: 10673f9f8; end: 10673fa6f; -[SCMainCameraRealTimeScanActivationWorkflow .cxx_destruct] */

void FUN_10673f9f8(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10673fa70; end: 10673fb13; -[SCRealTimeScanBridgingConfiguration initWithScanBridgingConfiguration:realTimeScanActivationSupportStateUpdateObservable:] */

undefined1 *
FUN_10673fa70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2d68;
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



/* Entry: 10673fb14; end: 10673fb1b; -[SCRealTimeScanBridgingConfiguration scanBridgingConfiguration] */

undefined8 FUN_10673fb14(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10673fb1c; end: 10673fb23; -[SCRealTimeScanBridgingConfiguration realTimeScanActivationSupportStateUpdateObservable] */

undefined8 FUN_10673fb1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10673fb24; end: 10673fb53; -[SCRealTimeScanBridgingConfiguration .cxx_destruct] */

void FUN_10673fb24(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10673fb54; end: 10673fbf7; -[SCRealTimeScanQuery initWithQueryId:dataObservable:] */

undefined1 *
FUN_10673fb54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2d70;
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



/* Entry: 10673fbf8; end: 10673fbff; -[SCRealTimeScanQuery queryId] */

undefined8 FUN_10673fbf8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10673fc00; end: 10673fc07; -[SCRealTimeScanQuery dataObservable] */

undefined8 FUN_10673fc00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10673fc08; end: 10673fc37; -[SCRealTimeScanQuery .cxx_destruct] */

void FUN_10673fc08(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10673fc38; end: 10673fcab; -[SCRealTimeScanTriggerContext initWithDataObservable:] */

undefined1 * FUN_10673fc38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2d78;
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



/* Entry: 10673fcac; end: 10673fcb3; -[SCRealTimeScanTriggerContext dataObservable] */

undefined8 FUN_10673fcac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10673fcb4; end: 10673fcbf; -[SCRealTimeScanTriggerContext .cxx_destruct] */

void FUN_10673fcb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10673fcc0; end: 10673fd33; -[SCRealTimeScanTriggerScope initWithPlugInRegistry:] */

undefined1 * FUN_10673fcc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2d80;
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



/* Entry: 10673fd34; end: 10673fd3b; -[SCRealTimeScanTriggerScope plugInRegistry] */

undefined8 FUN_10673fd34(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10673fd3c; end: 10673fd6b; -[SCRealTimeScanTriggerScope setPlugInRegistry:] */

void FUN_10673fd3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10673fd6c; end: 10673fd77; -[SCRealTimeScanTriggerScope .cxx_destruct] */

void FUN_10673fd6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10673fd78; end: 10673fe6b; -[SCRealTimeScanScope initWithUIContainer:queryObservable:bridgingConfiguration:delegate:] */

undefined1 *
FUN_10673fd78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f2d88;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10673fe6c; end: 10673fe73; -[SCRealTimeScanScope uiContainer] */

undefined8 FUN_10673fe6c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10673fe74; end: 10673fe7b; -[SCRealTimeScanScope queryObservable] */

undefined8 FUN_10673fe74(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10673fe7c; end: 10673fe83; -[SCRealTimeScanScope bridgingConfiguration] */

undefined8 FUN_10673fe7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10673fe84; end: 10673fe9b; -[SCRealTimeScanScope delegate] */

void FUN_10673fe84(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10673fe9c; end: 10673fedf; -[SCRealTimeScanScope .cxx_destruct] */

void FUN_10673fe9c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10673fee0; end: 10673ff37; +[SCMainCameraRealTimeScanActivationUpdate isSupportedWithDidObserveAppStartup:] */

void FUN_10673fee0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cd590;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[0x10] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10673ff38; end: 10673ff93; +[SCMainCameraRealTimeScanActivationUpdate isUnsupportedWithIsTrayOnlyReason:] */

void FUN_10673ff38(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cd590;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  puVar2[0x11] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10673ff94; end: 10673ffb7; -[SCMainCameraRealTimeScanActivationUpdate copyWithZone:] */

undefined8 FUN_10673ff94(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10673ffb8; end: 10674001b; -[SCMainCameraRealTimeScanActivationUpdate hash] */

void FUN_10673ffb8(long param_1)

{
  undefined8 *puVar1;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_30;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  puVar1 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = *(undefined8 *)(param_1 + 8);
  uStack_28 = (ulong)*(byte *)(param_1 + 0x10);
  uStack_20 = (ulong)*(byte *)(param_1 + 0x11);
  func_0x000100505190(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126f2d90;
  puStack_60 = (undefined1 *)puVar1;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


