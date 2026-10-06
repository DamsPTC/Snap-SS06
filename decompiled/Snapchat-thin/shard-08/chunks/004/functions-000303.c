/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10613b9ec; end: 10613b9fb; -[SCFeatureBatchCaptureImpl isCameraModeActivated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10613b9ec(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112740420);
}



/* Entry: 10613b9fc; end: 10613ba03; -[SCFeatureBatchCaptureImpl cameraModeType] */

undefined8 FUN_10613b9fc(void)

{
  return 0;
}



/* Entry: 10613ba04; end: 10613baa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613ba04(long param_1,undefined8 param_2)

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
    puVar3 = PTR_PTR_1126c84b0;
    _objc_alloc(PTR_PTR_1126c84b0);
    lVar1 = param_1;
    func_0x00010bf4b2a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf2bbc0(param_1);
    func_0x00010c033dc0(puVar3,param_2,lVar1,lVar2,*(undefined8 *)(param_1 + _DAT_11274040c));
    _objc_release(lVar1);
    func_0x00010c18b5e0(puVar3,param_2,param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10613baa8; end: 10613baf7;  */

void FUN_10613baa8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bdeb840(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10613baf8; end: 10613bba3; -[SCFeatureBatchCaptureImpl configureWithCameraToolbar:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613baf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740438;
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + lVar2,param_3);
  lVar1 = param_1;
  func_0x00010bdf4da0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc4a0(param_3);
  _objc_release(param_3);
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c06b680();
  if ((int)lVar1 != 0) {
    lVar2 = param_1 + lVar2;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c216f40();
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc5170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__activeBatchCaptureFromInitialCo_11254edf8);
  return;
}



/* Entry: 10613bba4; end: 10613bcbb; -[SCFeatureBatchCaptureImpl shortcutEnableIfNecessary:cameraShortcutId:scanSessionId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10613bba4(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf2ae40();
  uVar1 = param_1;
  func_0x00010bf2ae20();
  if ((uVar1 & param_3) != 0) {
    uVar2 = param_1 + (long)_DAT_112740438;
    _objc_loadWeakRetained();
    uVar3 = uVar2;
    func_0x00010bf25540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar3;
    func_0x00010c159240();
    if ((uVar2 & 1) == 0) {
      func_0x00010c1fadc0(uVar3,param_2,1);
      lVar5 = (long)_DAT_112740440;
      _objc_retain(param_4);
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      *(undefined8 *)(param_1 + lVar5) = param_4;
      _objc_release(uVar4);
      lVar5 = (long)_DAT_112740444;
      _objc_retain(param_5);
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      *(undefined8 *)(param_1 + lVar5) = param_5;
      _objc_release(uVar4);
    }
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (uVar1 & param_3) != 0;
}



/* Entry: 10613bcbc; end: 10613bd47; -[SCFeatureBatchCaptureImpl shortcutDisable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613bcbc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + _DAT_112740438;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010bf25540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  func_0x00010c1fadc0(lVar2,param_2,0);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112740440);
  *(undefined8 *)(param_1 + _DAT_112740440) = 0;
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112740444);
  *(undefined8 *)(param_1 + _DAT_112740444) = 0;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10613bd48; end: 10613bd4f; -[SCFeatureBatchCaptureImpl cameraShortcutFeatureType] */

undefined8 FUN_10613bd48(void)

{
  return 1;
}



/* Entry: 10613bd50; end: 10613bd57; -[SCFeatureBatchCaptureImpl cameraShortcutFeatureOption] */

undefined8 FUN_10613bd50(void)

{
  return 2;
}



/* Entry: 10613bd58; end: 10613bd97; -[SCFeatureBatchCaptureImpl hasPendingContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613bd58(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11274043c);
  func_0x00010c07d660();
  if (iVar1 != 0) {
    func_0x00010bed1f00(param_1);
  }
  return;
}



/* Entry: 10613bd98; end: 10613bda3; -[SCFeatureBatchCaptureImpl cameraShortcutFeatureName] */

undefined ** FUN_10613bd98(void)

{
  return &PTR____CFConstantStringClassReference_110e427d8;
}



/* Entry: 10613bda4; end: 10613bee3; -[SCFeatureBatchCaptureImpl alertContentEraseWithConfiguration:confirmAction:cancelAction:] */

void FUN_10613bda4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010be7a040(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10613bee4; end: 10613bf2b;  */

void FUN_10613bee4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c22d5e0(lVar1);
    if (*(long *)(param_1 + 0x20) != 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10613bf2c; end: 10613bf3f;  */

void FUN_10613bf2c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010613bf38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10613bf40; end: 10613bf5b; -[SCFeatureBatchCaptureImpl resetMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613bf40(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_112740448) = 0;
  *(undefined8 *)(param_1 + _DAT_11274044c) = 0;
  return;
}



/* Entry: 10613bf5c; end: 10613c04b; -[SCFeatureBatchCaptureImpl usageMetrics] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613bf5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_58 = &PTR____CFConstantStringClassReference_110e42798;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined8 *)(param_1 + _DAT_112740448));
  _objc_retainAutoreleasedReturnValue();
  ppuStack_50 = &PTR____CFConstantStringClassReference_110e427b8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_48 = puVar1;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      *(undefined8 *)(param_1 + _DAT_11274044c));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar2;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_48,&ppuStack_58,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
    puVar2 = puVar1 + _DAT_112740438;
    _objc_loadWeakRetained();
    puVar4 = puVar2;
    func_0x00010bfecd60();
    _objc_release(puVar2);
    if (puVar4 != (undefined *)0x7fffffffffffffff) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar3,param_2,puVar2,&PTR____CFConstantStringClassReference_110e42758);
      _objc_release(puVar2);
    }
    lVar5 = *(long *)(puVar1 + _DAT_112740450);
    if (lVar5 == 0) {
      func_0x00010c1d0560(puVar3,param_2,&PTR____CFConstantStringClassReference_110daafd8,
                          &PTR____CFConstantStringClassReference_110db16f8);
    }
    else {
      func_0x0001061a7e54();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar3,param_2,lVar5,&PTR____CFConstantStringClassReference_110db16f8);
      _objc_release(lVar5);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10613c04c; end: 10613c14f; -[SCFeatureBatchCaptureImpl detailedCameraModeLogInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613c04c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  lVar4 = param_1 + _DAT_112740438;
  _objc_loadWeakRetained();
  lVar2 = lVar4;
  func_0x00010bfecd60();
  _objc_release(lVar4);
  if (lVar2 != 0x7fffffffffffffff) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar1,param_2,puVar3,&PTR____CFConstantStringClassReference_110e42758);
    _objc_release(puVar3);
  }
  lVar4 = *(long *)(param_1 + _DAT_112740450);
  if (lVar4 == 0) {
    func_0x00010c1d0560(puVar1,param_2,&PTR____CFConstantStringClassReference_110daafd8,
                        &PTR____CFConstantStringClassReference_110db16f8);
  }
  else {
    func_0x0001061a7e54();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar1,param_2,lVar4,&PTR____CFConstantStringClassReference_110db16f8);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10613c150; end: 10613c4ab; -[SCFeatureBatchCaptureImpl _createToolbarItem] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613c150(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  lVar5 = (long)_DAT_11274043c;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126c7918;
    _objc_alloc();
    func_0x00010c037be0();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    func_0x00010c1cdb60(*(undefined8 *)(param_1 + lVar5));
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c1fb140(uVar3);
    func_0x00010b0aebdc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cdba0(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    func_0x00010b0aebf4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fb640(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c160fc0(uVar3);
    func_0x00010b0aebdc();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    func_0x0001008b0f58();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1610c0(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    func_0x0001008b0f70();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1610e0(*(undefined8 *)(param_1 + lVar5));
    _objc_release(uVar3);
    func_0x00010c177460(*(undefined8 *)(param_1 + lVar5));
    _objc_initWeak(auStack_78,param_1);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf7ca60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10613c4ac;
    puStack_88 = &UNK_11090ba70;
    _objc_copyWeak(auStack_80,auStack_78);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf2c660(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_10613c54c;
    puStack_b0 = &UNK_11090ba70;
    _objc_copyWeak(auStack_a8,auStack_78);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf735a0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_d0,auStack_78);
    uVar3 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar4 = *(long *)(param_1 + lVar5);
    _objc_retain(lVar4);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  else {
    _objc_retain(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10613c4ac; end: 10613c54b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613c4ac(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_2;
    func_0x00010c273a00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c104260();
    _objc_release(lVar1);
    if (lVar2 == 2) {
      *(long *)(param_1 + _DAT_11274044c) = *(long *)(param_1 + _DAT_11274044c) + 1;
    }
    *(long *)(param_1 + _DAT_112740448) = *(long *)(param_1 + _DAT_112740448) + 1;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10613c54c; end: 10613c65b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613c54c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(lVar2 + _DAT_11274043c);
    func_0x00010c07d660();
    if ((iVar1 == 0) || (lVar3 = lVar2, func_0x00010bed1f00(), lVar3 == 0)) {
      func_0x00010c200100(param_2);
    }
    else {
      func_0x00010c200100(param_2);
      _objc_copyWeak(auStack_38,param_1 + 0x20);
      _objc_retain(param_2);
      func_0x00010be7a040(lVar2);
      _objc_release(param_2);
      _objc_destroyWeak(auStack_38);
    }
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 10613c65c; end: 10613c737;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613c65c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010c273a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      lVar2 = lVar1 + _DAT_112740438;
      _objc_loadWeakRetained(lVar2);
      func_0x00010c216f40();
    }
    else {
      func_0x00010c1b4280(*(undefined8 *)(lVar1 + _DAT_11274043c),param_2,0);
      lVar2 = lVar1 + _DAT_112740438;
      _objc_loadWeakRetained(lVar2);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c273a80(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216f40(lVar2,param_2,uVar3,1);
      _objc_release(uVar3);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10613c738; end: 10613c79f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613c738(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = (long)_DAT_11274043c;
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010c07d660(uVar1);
    func_0x00010bea23a0(param_1,param_2,uVar1);
    lVar2 = *(long *)(param_1 + lVar2);
    func_0x00010c104260();
    if (lVar2 == 2) {
      *(undefined8 *)(param_1 + _DAT_112740450) = 4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10613c7a0; end: 10613c9f7; -[SCFeatureBatchCaptureImpl _presentAlertDialogWithConfirmAction:cancelAction:] */

void FUN_10613c7a0(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *unaff_x25;
  
  puVar2 = PTR_PTR_1126af180;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  ppuVar1 = &PTR____CFConstantStringClassReference_110db1898;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110db1898,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(ppuVar1);
  func_0x00010c160fc0(puVar2);
  puVar3 = PTR_PTR_1126af180;
  ppuVar1 = &PTR____CFConstantStringClassReference_110daf8b8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110daf8b8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(ppuVar1);
  func_0x00010c160fc0(puVar3);
  puVar4 = PTR_PTR_1126af178;
  func_0x00010c22b900(PTR_PTR_1126af178);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010703cde8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed1f00();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_1 < (undefined *)0x2) {
    puVar6 = param_1;
    func_0x00010703ce18();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    unaff_x25 = param_1;
    func_0x00010703ce00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed1f00();
    func_0x00010c14de00(puVar6);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c40(puVar4);
  _objc_release(puVar7);
  if ((undefined *)0x1 < param_1) {
    _objc_release(puVar6);
    puVar6 = unaff_x25;
  }
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,1);
  return;
}



/* Entry: 10613c9f8; end: 10613ca07;  */

void FUN_10613c9f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,1);
  return;
}



/* Entry: 10613ca08; end: 10613ca77; -[SCFeatureBatchCaptureImpl _createButtonIconView] */

void FUN_10613ca08(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e42878);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01bf60(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1a7f60(puVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10613ca78; end: 10613cb67; -[SCFeatureBatchCaptureImpl shouldBlockTouchAtPoint:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10613ca78(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar1 = *(ulong *)(param_3 + _DAT_11274042c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010c0efe60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf30980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar1);
  lVar3 = param_3;
  func_0x00010c06b680();
  if (((int)lVar3 == 0) || (uVar5 = uVar2, func_0x00010c074c20(), (uVar5 & 1) != 0)) {
    uVar5 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_3 + _DAT_112740424);
    func_0x00010bfe12e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf512a0(param_1,param_2);
    uVar5 = uVar2;
    func_0x00010c102b20(uVar2,param_4,0);
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
  return uVar5;
}



/* Entry: 10613cb68; end: 10613cb6b; -[SCFeatureBatchCaptureImpl interruptGestures] */

void FUN_10613cb68(void)

{
  return;
}



/* Entry: 10613cb6c; end: 10613cc23; -[SCFeatureBatchCaptureImpl batchCaptureConfiguration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613cb6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112740434;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR_PTR_1126c84b8;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    func_0x00010bef9980(*(undefined8 *)(param_1 + lVar5),param_2,param_1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127403e8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010bf16c80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a1880(uVar3,param_2,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar3);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10613cc24; end: 10613cc83; -[SCFeatureBatchCaptureImpl batchCaptureRecoveryData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613cc24(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112740454;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126b0028;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10613cc84; end: 10613cd1f; -[SCFeatureBatchCaptureImpl setActivated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613cc84(long param_1,undefined8 param_2,uint param_3)

{
  if ((*(byte *)(param_1 + _DAT_112740420) != param_3) && (*(long *)(param_1 + _DAT_112740424) != 0)
     ) {
    if (*(long *)(param_1 + _DAT_11274043c) != 0) {
      func_0x00010bea23a0(param_1);
      param_1 = param_1 + _DAT_112740438;
      _objc_loadWeakRetained(param_1);
      func_0x00010c216f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 10613cd20; end: 10613cda3; -[SCFeatureBatchCaptureImpl reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613cd20(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + _DAT_112740434) != 0) {
    *(undefined8 *)(param_1 + _DAT_112740434) = 0;
    _objc_release();
    uVar1 = *(undefined8 *)(param_1 + _DAT_112740454);
    *(undefined8 *)(param_1 + _DAT_112740454) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127403e8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2df40();
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beda570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__updateLastSegmentThumbnailAndTo_112594300,0);
    return;
  }
  return;
}



/* Entry: 10613cda4; end: 10613cde7; -[SCFeatureBatchCaptureImpl prepareForRecording] */

void FUN_10613cda4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1856c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10613cde8; end: 10613cf7f; -[SCFeatureBatchCaptureImpl flashScreenWithScreenShotImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613cde8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11274042c;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112740404);
  func_0x00010bf2b140(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071800();
  func_0x00010befc260(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (param_3 != 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2506c0();
    _objc_release(uVar3);
    _objc_initWeak(auStack_58,param_1);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010bfb2560(uVar3);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10613cf80; end: 10613cfab;  */

void FUN_10613cf80(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1389e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10613cfac; end: 10613cfff; -[SCFeatureBatchCaptureImpl resetFlashScreen] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613cfac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274042c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0efe60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10613d000; end: 10613d043; -[SCFeatureBatchCaptureImpl setIsCapturing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613d000(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274042c);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1afe00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10613d044; end: 10613d07b; -[SCFeatureBatchCaptureImpl setCameraShortcutId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613d044(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740440);
  *(undefined8 *)(param_1 + _DAT_112740440) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10613d07c; end: 10613d1db; -[SCFeatureBatchCaptureImpl _setBatchCaptureActivated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613d07c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((uint)*(byte *)(param_1 + _DAT_112740420) == (uint)param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_112740420) = (char)param_3;
  func_0x00010bee00a0();
  func_0x00010bea23c0(param_1,param_2,param_3);
  if ((param_3 & 1) == 0) {
    func_0x00010bf6b5e0(*(undefined8 *)(param_1 + _DAT_112740434),param_2,0);
    func_0x00010c137fe0(param_1);
  }
  lVar3 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(lVar3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112740414);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010bdfc7c0(param_1,param_2,param_3);
  lVar3 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e900();
  _objc_release(lVar3);
  lVar3 = (long)_DAT_1127403e4;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bfa1820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b760();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bfa1820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2b740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10613d1dc; end: 10613d327; -[SCFeatureBatchCaptureImpl _updateSnapDocEditorResetSubscription] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613d1dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  lVar6 = (long)_DAT_112740458;
  func_0x00010bf86d40(*(undefined8 *)(param_1 + lVar6));
  if (*(char *)(param_1 + _DAT_112740420) == '\x01') {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_1127403d4);
    func_0x00010c0cfdc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c240040();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar4 = uVar3;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 10613d328; end: 10613d35b;  */

void FUN_10613d328(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c137fe0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10613d35c; end: 10613d553; -[SCFeatureBatchCaptureImpl _setBatchCaptureUIVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613d35c(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112740430;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    func_0x00010c1a7f60();
    _objc_release(uVar1);
    lVar4 = param_1;
    func_0x00010bf4b2a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf2b240();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d75c0(lVar5);
    _objc_release(uVar1);
    _objc_release(lVar5);
    _objc_release(lVar4);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274042c);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + _DAT_112740404);
    func_0x00010bf2b140(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071800();
    func_0x00010befc260(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bed2490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateAccentColorIfNeeded_1125922c8);
    return;
  }
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  lVar4 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf2b240();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d7a0(lVar5);
  _objc_release(uVar1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11274042c);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0efe60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10613d554; end: 10613d7e7; -[SCFeatureBatchCaptureImpl _updateAccentColorIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613d554(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = (long)_DAT_112740408;
  lVar1 = *(long *)(param_1 + lVar8);
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar1;
  func_0x00010bf30b00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar9 != 0) {
    uVar2 = *(undefined8 *)(param_1 + lVar8);
    func_0x00010bfa1820(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf30b00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = (long)_DAT_11274042c;
    uVar5 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0efe60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bf30980();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0ef5a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0efe60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bf30980();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c26d9e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0efe60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bf30980();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf6e520();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar5);
    uVar5 = *(undefined8 *)(param_1 + lVar9);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0efe60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bf30980();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010bf0a220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 10613d7e8; end: 10613d8a7;  */

void FUN_10613d7e8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0be6c0(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10613d8a8; end: 10613d907;  */

void FUN_10613d8a8(void)

{
  return;
}



/* Entry: 10613d908; end: 10613d99b;  */

void FUN_10613d908(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = param_2;
    func_0x00010c067fc0();
    if (uVar2 < 7) {
      *(char *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) =
           (char)(0x1010101010100 >> ((uVar2 & 7) << 3));
    }
    func_0x00010bee25e0(lVar1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10613d99c; end: 10613da23; -[SCFeatureBatchCaptureImpl _setToolbarItemVisible:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613d99c(long param_1,undefined8 param_2,int param_3)

{
  if (*(long *)(param_1 + _DAT_11274043c) != 0) {
    param_1 = param_1 + _DAT_112740438;
    _objc_loadWeakRetained(param_1);
    if (param_3 == 0) {
      func_0x00010bfe2c00();
    }
    else {
      func_0x00010c23a840();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10613da24; end: 10613da6f; -[SCFeatureBatchCaptureImpl _updateToolbarVisibilityWithIsContinuousCaptureOn:isFullScreenLensActive:] */

void FUN_10613da24(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4)

{
  if ((param_3 | param_4) == 1) {
    func_0x00010c162320(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bea88f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__setToolbarItemVisible_animated__112587be0,(param_3 | param_4) ^ 1,
             param_3 ^ 1);
  return;
}



/* Entry: 10613da70; end: 10613daef; -[SCFeatureBatchCaptureImpl _lastSegmentThumbnailFuture] */

void FUN_10613da70(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf167e0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  uVar1 = uVar2;
  func_0x00010c26db40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10613daf0; end: 10613dbf3; -[SCFeatureBatchCaptureImpl _removeActiveVideoPathsForSegment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613daf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127403ec;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf0b7e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0899c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12f0c0(uVar3,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c120480(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c0899c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12f0c0(uVar3,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10613dbf4; end: 10613dc3b; -[SCFeatureBatchCaptureImpl _unsavedSegmentCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10613dbf4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_112740460;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfa1ae0();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 10613dc3c; end: 10613dc97; -[SCFeatureBatchCaptureImpl _updateLastSegmentThumbnailAndTotalCountAnimated:] */

void FUN_10613dc3c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_10613dc98;
  puStack_28 = &UNK_110845ce0;
  uStack_20 = param_1;
  uStack_18 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_40);
  return;
}



/* Entry: 10613dc98; end: 10613dd3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613dc98(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112740464;
  lVar1 = *(long *)(param_1 + 0x20) + lVar3;
  _objc_loadWeakRetained();
  _objc_release();
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = lVar2 + lVar3;
    _objc_loadWeakRetained(lVar2);
    func_0x00010be9d520(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c136e00(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  lVar1 = lVar2;
  func_0x00010be9d520(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c177570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (lVar2,PTR_s_setCameraUIVisible_animated_arbi_11263b778,lVar1 != 0,
             *(undefined1 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 10613dd3c; end: 10613e02b; -[SCFeatureBatchCaptureImpl _showLimitReachedAlertIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613dd3c(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined **unaff_x27;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010bf167e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf529e0();
  lVar16 = (long)_DAT_112740404;
  puVar4 = *(undefined1 **)(param_1 + lVar16);
  func_0x00010bf16700();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0c2840();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (puVar6 <= puVar3) {
    func_0x00010c177320(*(undefined8 *)(param_1 + _DAT_112740424));
    _objc_initWeak(auStack_78,param_1);
    puVar8 = PTR_PTR_1126af180;
    ppuVar7 = &PTR____CFConstantStringClassReference_110dad758;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    func_0x00010c160fc0(puVar8);
    puVar9 = PTR_PTR_1126af178;
    func_0x00010c22b900(PTR_PTR_1126af178);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010619f6f4();
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar11 = puVar10;
    func_0x00010619f70c();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = *(undefined8 *)(param_1 + lVar16);
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c2840();
    func_0x00010c14de00(puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_70 = puVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10613e03c;
    puStack_88 = &UNK_1108485e8;
    unaff_x27 = &puStack_a0;
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010c235c40(puVar9);
    _objc_release(puVar15);
    _objc_release(puVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(puVar11);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_destroyWeak(auStack_80);
    _objc_release(puVar8);
    puVar1 = auStack_78;
    _objc_destroyWeak(puVar1);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x27 + 4);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,1);
  return;
}



/* Entry: 10613e02c; end: 10613e03b;  */

void FUN_10613e02c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,1);
  return;
}



/* Entry: 10613e03c; end: 10613e08b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613e03c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112740460;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bfa1a00();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10613e08c; end: 10613eb27; -[SCFeatureBatchCaptureImpl _loadBatchCaptureRecoveryDataAndShowPreview:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10613e08c(undefined8 param_1,double param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  undefined1 *puVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  long unaff_x23;
  long unaff_x24;
  undefined8 *unaff_x25;
  undefined8 unaff_x26;
  undefined **unaff_x27;
  undefined8 *unaff_x28;
  double dVar24;
  double dVar25;
  double unaff_d8;
  undefined8 unaff_d9;
  undefined1 auStack_348 [8];
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 *puStack_308;
  long lStack_300;
  undefined8 uStack_2f0;
  double dStack_2e8;
  undefined8 *puStack_2e0;
  undefined **ppuStack_2d8;
  undefined8 uStack_2d0;
  undefined8 *puStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined1 *puStack_290;
  code *pcStack_288;
  undefined8 *puStack_280;
  long lStack_278;
  undefined8 *puStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  undefined **ppuStack_240;
  undefined8 *puStack_238;
  undefined *puStack_230;
  undefined8 *puStack_228;
  double dStack_220;
  undefined8 uStack_218;
  double dStack_210;
  undefined8 uStack_208;
  double dStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  double dStack_1d8;
  undefined8 uStack_1d0;
  double dStack_1c8;
  undefined8 uStack_1c0;
  double dStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  double dStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  double dStack_158;
  undefined8 uStack_150;
  double dStack_148;
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
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)((long)param_3 + (long)_DAT_112740454);
  *(undefined8 *)((long)param_3 + (long)_DAT_112740454) = 0;
  puStack_228 = param_3;
  _objc_release(uVar1);
  puVar2 = param_5;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = param_5;
  func_0x00010c243340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar23 != (undefined8 *)0x0) {
    puVar23 = param_5;
    func_0x00010c243340(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puStack_228;
    func_0x00010bf167e0(puStack_228);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16f760();
    _objc_release(puVar3);
    _objc_release(puVar23);
  }
  dVar24 = 0.0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  puStack_280 = param_5;
  _objc_retain(puVar2);
  puVar23 = &uStack_140;
  puVar20 = auStack_100;
  lVar21 = 0x10;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  puStack_238 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    lVar22 = *plStack_130;
    unaff_x27 = &PTR____CFConstantStringClassReference_110f31478;
    unaff_d9 = 0x4024000000000000;
    ppuStack_240 = &PTR____CFConstantStringClassReference_110f31478;
    lStack_278 = lVar22;
    puStack_270 = puVar2;
    do {
      unaff_x28 = (undefined8 *)0x0;
      do {
        if (*plStack_130 != lVar22) {
          _objc_enumerationMutation(puVar2);
        }
        unaff_x26 = *(undefined8 *)(lStack_138 + (long)unaff_x28 * 8);
        lVar21 = (long)puStack_228 + (long)_DAT_1127403d8;
        _objc_loadWeakRetained();
        func_0x00010c074fe0();
        unaff_x23 = lVar21;
        func_0x00010bf26680();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar21);
        uVar1 = unaff_x26;
        func_0x00010c0c4f40(unaff_x26);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        func_0x00010c0899c0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = unaff_x23;
        func_0x00010c25ce00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        _objc_release(uVar1);
        puVar5 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x00010bf69bc0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bfacbe0();
        _objc_release(puVar5);
        puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
        if ((int)puVar6 != 0) {
          func_0x00010bf31380(unaff_x26);
          func_0x00010bf655e0();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = unaff_x26;
          func_0x00010c074fe0();
          puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
          puStack_230 = puVar5;
          if ((int)uVar1 == 0) {
            puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
            func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c299e20(PTR_PTR_1126b0010);
            if (0.0 < dVar24) {
              puVar8 = PTR_PTR_1126b5fb0;
              _objc_alloc();
              param_8 = 0;
              func_0x00010c0613a0(dVar24);
              puVar5 = PTR__OBJC_CLASS___AVAsset_1126aff38;
              puVar9 = puVar8;
              func_0x00010c29bb40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bf0b9e0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(puVar9);
              puVar9 = PTR__OBJC_CLASS___AVAssetImageGenerator_1126ba170;
              _objc_alloc();
              puStack_248 = puVar5;
              func_0x00010bff41a0();
              func_0x00010c169b80();
              _CMTimeMakeWithSeconds(&dStack_170,0,600);
              uStack_190 = 0;
              uStack_218 = uStack_168;
              dStack_220 = dStack_170;
              dStack_210 = (double)uStack_160;
              puStack_258 = puVar9;
              func_0x00010bf51e60(puVar9);
              uStack_260 = uStack_190;
              _objc_retain();
              puVar10 = PTR__OBJC_CLASS___UIImage_1126aea68;
              _objc_alloc();
              func_0x00010bffa220();
              _CGImageRelease(puVar9);
              puVar9 = PTR_PTR_1126c4280;
              _objc_alloc(PTR_PTR_1126c4280);
              puVar11 = puVar8;
              func_0x00010c29bb40(puVar8);
              _objc_retainAutoreleasedReturnValue();
              puStack_268 = puVar10;
              func_0x00010c057a60(puVar9);
              _objc_release(puVar11);
              uVar1 = unaff_x26;
              func_0x00010bf31200(unaff_x26);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c179260(puVar9);
              _objc_release(uVar1);
              uVar1 = unaff_x26;
              func_0x00010c096b60(unaff_x26);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1bcbe0(puVar9);
              _objc_release(uVar1);
              puVar10 = puVar8;
              func_0x00010c29bb40(puVar8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1e7980(puVar9);
              _objc_release(puVar10);
              func_0x00010c299760(puVar5);
              func_0x00010c17dde0(puVar9);
              uVar1 = unaff_x26;
              func_0x00010bef0a40(unaff_x26);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar1;
              func_0x00010c0d3a80();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1bc3a0(puVar9);
              _objc_release(uVar4);
              _objc_release(uVar1);
              puStack_250 = puVar8;
              func_0x00010c299d80(puVar8);
              func_0x00010c1b2a60(puVar9);
              puVar8 = PTR_PTR_1126c84c0;
              _objc_alloc_init(PTR_PTR_1126c84c0);
              func_0x00010c2aa200();
              _objc_unsafeClaimAutoreleasedReturnValue();
              func_0x00010c2ab340(puVar8);
              _objc_unsafeClaimAutoreleasedReturnValue();
              puVar2 = puStack_228;
              uVar1 = *(undefined8 *)((long)puStack_228 + (long)_DAT_1127403f0);
              func_0x00010c269d40(uVar1);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfe8380();
              func_0x00010c2b3980(puVar8);
              _objc_unsafeClaimAutoreleasedReturnValue();
              _objc_release(uVar1);
              puVar5 = puStack_248;
              func_0x00010be1e420(puVar2);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2b3020(puVar8);
              _objc_unsafeClaimAutoreleasedReturnValue();
              _objc_release(puVar2);
              func_0x00010c2b2dc0(puVar8);
              _objc_unsafeClaimAutoreleasedReturnValue();
              puVar10 = puVar8;
              func_0x00010bf21f60(puVar8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1c73c0(puVar9);
              _objc_release(puVar10);
              puVar10 = PTR_PTR_1126affb0;
              func_0x00010bfc04c0(PTR_PTR_1126affb0);
              _objc_retainAutoreleasedReturnValue();
              if (puVar5 == (undefined *)0x0) {
                uStack_1a8 = 0;
                uStack_1a0 = 0;
                uStack_198 = 0;
              }
              else {
                func_0x00010bf8b160(&uStack_1a8,puVar5);
              }
              func_0x00010c214080(puVar9);
              uStack_218 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
              dStack_220 = *(double *)PTR__kCMTimeZero_110348670;
              dStack_210 = *(double *)(PTR__kCMTimeZero_110348670 + 0x10);
              uStack_1e8 = uStack_1a0;
              uStack_1f0 = uStack_1a8;
              uStack_1e0 = uStack_198;
              param_4 = &uStack_1f0;
              _CMTimeRangeMake(&dStack_1d8,&dStack_220);
              uStack_218 = uStack_1d0;
              dStack_220 = dStack_1d8;
              uStack_208 = uStack_1c0;
              dStack_210 = dStack_1c8;
              uStack_1f8 = uStack_1b0;
              dStack_200 = dStack_1b8;
              dVar25 = dStack_1b8;
              param_2 = dStack_1c8;
              func_0x00010c1bf0a0(puVar9);
              unaff_x25 = puStack_228;
              puVar2 = puStack_228;
              func_0x00010bf167e0(puStack_228);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bef7120();
              _objc_unsafeClaimAutoreleasedReturnValue();
              _objc_release(puVar2);
              func_0x00010bf16ac0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befada0();
              _objc_release(unaff_x25);
              _objc_release(puVar10);
              _objc_release(puVar8);
              _objc_release(puVar9);
              _objc_release(puStack_268);
              _objc_release(uStack_260);
              puVar5 = puStack_248;
              lVar22 = lStack_278;
              puVar2 = puStack_270;
LAB_10613e9ec:
              _objc_release(puStack_258);
              _objc_release(puVar5);
              puVar5 = puStack_230;
              puVar8 = puStack_250;
              unaff_d8 = dVar24;
              goto LAB_10613ea04;
            }
LAB_10613ea0c:
            _objc_release(puVar6);
          }
          else {
            puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
            func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puStack_230;
            func_0x00010bf64ac0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar8);
            if (puVar6 != (undefined *)0x0) {
              puVar8 = PTR__OBJC_CLASS___UIImage_1126aea68;
              func_0x00010c14d040();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c23d0a0();
              dVar25 = dVar24;
              if ((0.0 < dVar24) && (func_0x00010c23d0a0(puVar8), dVar25 = dVar24, 0.0 < param_2)) {
                puVar5 = PTR_PTR_1126c4270;
                _objc_alloc(PTR_PTR_1126c4270);
                func_0x000108cde39c();
                puStack_250 = puVar8;
                func_0x00010c14e300(puVar8);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c01bf60(puVar5);
                _objc_release(puVar8);
                uVar1 = unaff_x26;
                func_0x00010bf31200(unaff_x26);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c179260(puVar5);
                _objc_release(uVar1);
                uVar1 = unaff_x26;
                func_0x00010c096b60(unaff_x26);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1bcbe0(puVar5);
                _objc_release(uVar1);
                unaff_x25 = puStack_228;
                lVar7 = *(long *)((long)puStack_228 + (long)_DAT_1127403e0);
                func_0x00010bf16a00(lVar7);
                _objc_retainAutoreleasedReturnValue();
                lVar21 = lVar7;
                func_0x00010c067fc0();
                _CMTimeMakeWithSeconds(&dStack_158,(double)lVar21,1);
                uStack_218 = uStack_150;
                dStack_220 = dStack_158;
                dStack_210 = dStack_148;
                dVar25 = dStack_158;
                func_0x00010c192d40(puVar5);
                _objc_release(lVar7);
                puVar8 = PTR_PTR_1126c84c0;
                _objc_alloc_init();
                func_0x00010c2aa200();
                _objc_unsafeClaimAutoreleasedReturnValue();
                func_0x00010c2ab340(puVar8);
                _objc_unsafeClaimAutoreleasedReturnValue();
                uVar1 = *(undefined8 *)((long)unaff_x25 + (long)_DAT_1127403f0);
                func_0x00010c269d40(uVar1);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfe8380();
                func_0x00010c2b3980(puVar8);
                _objc_unsafeClaimAutoreleasedReturnValue();
                _objc_release(uVar1);
                puVar2 = unaff_x25;
                func_0x00010be1e420(unaff_x25);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c2b3020(puVar8);
                _objc_unsafeClaimAutoreleasedReturnValue();
                _objc_release(puVar2);
                func_0x00010c2b2dc0(puVar8);
                _objc_unsafeClaimAutoreleasedReturnValue();
                puVar2 = puStack_270;
                puStack_258 = puVar8;
                func_0x00010bf21f60(puVar8);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1c73c0(puVar5);
                _objc_release(puVar8);
                puVar23 = unaff_x25;
                func_0x00010bf167e0(unaff_x25);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bef7120();
                _objc_unsafeClaimAutoreleasedReturnValue();
                _objc_release(puVar23);
                puVar23 = unaff_x25;
                func_0x00010bf16ac0(unaff_x25);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010befada0();
                _objc_release(puVar23);
                dVar24 = unaff_d8;
                goto LAB_10613e9ec;
              }
LAB_10613ea04:
              _objc_release(puVar8);
              dVar24 = dVar25;
              goto LAB_10613ea0c;
            }
          }
          _objc_release(puVar5);
          unaff_x27 = ppuStack_240;
        }
        _objc_release(unaff_x24);
        _objc_release(unaff_x23);
        unaff_x28 = (undefined8 *)((long)unaff_x28 + 1);
      } while (puStack_238 != unaff_x28);
      puVar23 = &uStack_140;
      puVar20 = auStack_100;
      lVar21 = 0x10;
      puVar3 = puVar2;
      func_0x00010bf52a60();
      puStack_238 = puVar3;
    } while (puVar3 != (undefined8 *)0x0);
  }
  _objc_release(puVar2);
  puVar3 = puStack_228;
  func_0x00010bf167e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar3;
  func_0x00010c1585e0();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010bf529e0();
  _objc_release(puVar12);
  _objc_release(puVar3);
  puVar14 = puStack_228;
  if (puVar13 != (undefined8 *)0x0) {
    func_0x00010beda560(puStack_228);
    puVar3 = (undefined8 *)((long)puVar14 + (long)_DAT_112740460);
    _objc_loadWeakRetained();
    puVar23 = puVar14;
    func_0x00010bfa1a00();
    _objc_release(puVar3);
    puVar12 = puVar14;
  }
  _objc_release(puVar2);
  puVar14 = puStack_280;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puVar14;
  }
  ___stack_chk_fail();
  pcStack_288 = FUN_10613eb28;
  lStack_300 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_2f0 = unaff_d9;
  dStack_2e8 = unaff_d8;
  puStack_2e0 = unaff_x28;
  ppuStack_2d8 = unaff_x27;
  uStack_2d0 = unaff_x26;
  puStack_2c8 = unaff_x25;
  lStack_2c0 = unaff_x24;
  lStack_2b8 = unaff_x23;
  puStack_2b0 = puVar2;
  puStack_2a8 = puVar13;
  puStack_2a0 = puVar12;
  puStack_298 = puVar3;
  puStack_290 = &stack0xfffffffffffffff0;
  _objc_retain(puVar23);
  _objc_retain(puVar20);
  _objc_retain(lVar21);
  _objc_retain(param_8);
  puVar2 = puVar14;
  func_0x00010c06b680();
  if ((int)puVar2 != 0) {
    puVar2 = puVar14;
    func_0x00010bf167e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar3;
    func_0x00010bf529e0();
    puVar15 = *(undefined8 **)((long)puVar14 + (long)_DAT_112740404);
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar15;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar13;
    func_0x00010c0c2840();
    _objc_release(puVar13);
    _objc_release(puVar15);
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (puVar12 < puVar16) {
      puVar17 = puVar20;
      func_0x00010bfe6ac0(puVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      if (param_2 <= 0.0) {
        _objc_release(puVar17);
      }
      else {
        puVar18 = puVar20;
        func_0x00010bfe6ac0(puVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c23d0a0();
        _objc_release(puVar18);
        _objc_release(puVar17);
        if (0.0 < dVar24) {
          uVar1 = *(undefined8 *)((long)puVar14 + (long)_DAT_1127403e8);
          func_0x00010c269d40(uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0a1820();
          _objc_release(uVar1);
          puVar5 = PTR_PTR_1126c4270;
          _objc_alloc();
          puVar17 = puVar20;
          func_0x00010bfe6ac0(puVar20);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c01bf60();
          _objc_release(puVar17);
          uVar1 = param_8;
          func_0x00010bf311e0(param_8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c179260(puVar5);
          _objc_release(uVar1);
          uVar1 = param_8;
          func_0x00010c096b40(param_8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1bcbe0(puVar5);
          _objc_release(uVar1);
          lVar7 = *(long *)((long)puVar14 + (long)_DAT_1127403e0);
          func_0x00010bf16a00(lVar7);
          _objc_retainAutoreleasedReturnValue();
          lVar22 = lVar7;
          func_0x00010c067fc0();
          _CMTimeMakeWithSeconds(&uStack_320,(double)lVar22,1);
          uStack_338 = uStack_318;
          uStack_340 = uStack_320;
          uStack_330 = uStack_310;
          func_0x00010c192d40(puVar5);
          _objc_release(lVar7);
          if (lVar21 != 0) {
            puVar6 = PTR_PTR_1126c84c8;
            _objc_alloc_init(PTR_PTR_1126c84c8);
            func_0x00010c2af220();
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010bf21200(lVar21);
            func_0x00010c2a9920(puVar6);
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010c083ec0(lVar21);
            func_0x00010c2b1a20(puVar6);
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010bf04ae0(lVar21);
            func_0x00010c2a8460(puVar6);
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010befdac0(lVar21);
            func_0x00010c2a8040(puVar6);
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010befdaa0(lVar21);
            func_0x00010c2a8000(puVar6);
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010c23b560(lVar21);
            func_0x00010c2b8fe0(puVar6);
            _objc_unsafeClaimAutoreleasedReturnValue();
            puVar8 = puVar5;
            func_0x00010bf311e0(puVar5);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2aa1c0(puVar6);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar8);
            uVar1 = *(undefined8 *)((long)puVar14 + (long)_DAT_112740434);
            func_0x00010bf16c80(uVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2b9740(puVar6);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(uVar1);
            uVar1 = param_8;
            func_0x00010bef0520(param_8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2a9de0(puVar6);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(uVar1);
            uVar1 = param_8;
            func_0x00010bef0a60(param_8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2b2880(puVar6);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(uVar1);
            puVar8 = puVar6;
            func_0x00010bf21f60(puVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c18ed20(puVar5);
            _objc_release(puVar8);
            _objc_release(puVar6);
          }
          puVar9 = PTR_PTR_1126c84c0;
          _objc_alloc_init();
          puVar2 = puVar14;
          func_0x00010bf5aac0(puVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2aa200(puVar9);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar2);
          puVar2 = puVar14;
          func_0x00010bf5aac0(puVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2ab340(puVar9);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar2);
          uVar1 = *(undefined8 *)((long)puVar14 + (long)_DAT_1127403f0);
          func_0x00010c269d40(uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe8380();
          func_0x00010c2b3980(puVar9);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar1);
          puVar2 = puVar14;
          func_0x00010be1e420(puVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2b3020(puVar9);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar2);
          lVar22 = (long)_DAT_112740468;
          func_0x00010c0982a0(*(undefined8 *)((long)puVar14 + lVar22));
          func_0x00010c2b2dc0(puVar9);
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010bf70d80(*(undefined8 *)((long)puVar14 + lVar22));
          func_0x00010c2ae800(puVar9);
          _objc_unsafeClaimAutoreleasedReturnValue();
          puVar6 = puVar9;
          func_0x00010bf21f60(puVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c73c0(puVar5);
          _objc_release(puVar6);
          puVar2 = puVar14;
          func_0x00010bf167e0(puVar14);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef7120();
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar2);
          uVar19 = *(undefined8 *)((long)puVar14 + (long)_DAT_1127403d4);
          func_0x00010c0cfdc0();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar19;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar1;
          func_0x00010c240000();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar1);
          _objc_release(uVar19);
          uVar1 = uVar4;
          func_0x00010c0ff5a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0();
          _objc_release(uVar1);
          func_0x00010c179060(uVar4);
          uVar1 = param_8;
          func_0x00010bf311e0(param_8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c179280(uVar4);
          _objc_release(uVar1);
          puVar10 = PTR_PTR_1126b3068;
          _objc_opt_new();
          puVar6 = PTR_PTR_1126b25e8;
          _objc_opt_new(PTR_PTR_1126b25e8);
          func_0x00010c1dd220(puVar10);
          _objc_release(puVar6);
          func_0x00010c1dd500(uVar4);
          uVar1 = param_8;
          func_0x00010bef0a60(param_8);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar14;
          func_0x00010bdd92a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar1);
          puVar8 = PTR_PTR_1126affe0;
          puVar6 = PTR_PTR_1126affc0;
          puVar17 = puVar20;
          func_0x00010bfe6ac0(puVar20);
          _objc_retainAutoreleasedReturnValue();
          _CMTimeMakeWithSeconds(&uStack_340,0x4008000000000000,1000);
          func_0x00010c27eee0(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb24e0(*(undefined8 *)((long)puVar14 + lVar22));
          func_0x00010bf70d80(*(undefined8 *)((long)puVar14 + lVar22));
          puVar11 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_308 = puVar2;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef70e0(puVar8);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar11);
          _objc_release(puVar6);
          _objc_release(puVar17);
          lVar22 = (long)puVar14 + (long)_DAT_112740460;
          _objc_loadWeakRetained(lVar22);
          puVar17 = puVar20;
          func_0x00010bfe6ac0(puVar20);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa1940(lVar22);
          _objc_release(puVar17);
          _objc_release(lVar22);
          func_0x00010c1afe00(puVar14);
          _objc_initWeak(&uStack_340,puVar14);
          puVar3 = puVar14;
          func_0x00010be47040(puVar14);
          _objc_retainAutoreleasedReturnValue();
          puVar17 = auStack_348;
          param_4 = &uStack_340;
          _objc_copyWeak(puVar17);
          func_0x000100078e94();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c297260(puVar3);
          _objc_release(puVar17);
          _objc_release(puVar3);
          func_0x00010beda560(puVar14);
          func_0x00010beb98c0(puVar14);
          _objc_destroyWeak(auStack_348);
          _objc_destroyWeak(&uStack_340);
          _objc_release(puVar2);
          _objc_release(puVar10);
          _objc_release(uVar4);
          _objc_release(puVar9);
          _objc_release(puVar5);
        }
      }
    }
  }
  _objc_release(param_8);
  _objc_release(lVar21);
  _objc_release(puVar20);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_300) {
    return puVar23;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(&uStack_340);
  __Unwind_Resume(puVar23);
  _objc_retain(param_4);
  puVar2 = param_4;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = puVar2;
  func_0x00010bf0b760();
  if ((int)puVar23 == 5) {
    puVar3 = param_4;
    func_0x00010c0c3fe0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar3;
    func_0x00010bfd8fc0();
    _objc_release(puVar3);
  }
  else {
    puVar23 = (undefined8 *)0x0;
  }
  _objc_release(puVar2);
  _objc_release(param_4);
  return puVar23;
}



/* Entry: 10613eb28; end: 10613f487; -[SCFeatureBatchCaptureImpl captureComponent:willCompleteWithStillImageData:discardRelatedData:captureConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10613eb28(double param_1,double param_2,ulong param_3,undefined8 *param_4,undefined8 *param_5,
             undefined8 param_6,long param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulong uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_3;
  func_0x00010c06b680();
  if ((int)uVar1 != 0) {
    uVar1 = param_3;
    func_0x00010bf167e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c1585e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    uVar4 = *(ulong *)(param_3 + (long)_DAT_112740404);
    func_0x00010bf16700();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0c2840();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if (uVar3 < uVar6) {
      uVar8 = param_6;
      func_0x00010bfe6ac0(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      if (param_2 <= 0.0) {
        _objc_release(uVar8);
      }
      else {
        uVar7 = param_6;
        func_0x00010bfe6ac0(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c23d0a0();
        _objc_release(uVar7);
        _objc_release(uVar8);
        if (0.0 < param_1) {
          uVar8 = *(undefined8 *)(param_3 + (long)_DAT_1127403e8);
          func_0x00010c269d40(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0a1820();
          _objc_release(uVar8);
          puVar9 = PTR_PTR_1126c4270;
          _objc_alloc();
          uVar8 = param_6;
          func_0x00010bfe6ac0(param_6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c01bf60();
          _objc_release(uVar8);
          uVar8 = param_8;
          func_0x00010bf311e0(param_8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c179260(puVar9);
          _objc_release(uVar8);
          uVar8 = param_8;
          func_0x00010c096b40(param_8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1bcbe0(puVar9);
          _objc_release(uVar8);
          lVar10 = *(long *)(param_3 + (long)_DAT_1127403e0);
          func_0x00010bf16a00(lVar10);
          _objc_retainAutoreleasedReturnValue();
          lVar20 = lVar10;
          func_0x00010c067fc0();
          _CMTimeMakeWithSeconds(&uStack_a0,(double)lVar20,1);
          uStack_b8 = uStack_98;
          uStack_c0 = uStack_a0;
          uStack_b0 = uStack_90;
          func_0x00010c192d40(puVar9);
          _objc_release(lVar10);
          if (param_7 != 0) {
            puVar11 = PTR_PTR_1126c84c8;
            _objc_alloc_init(PTR_PTR_1126c84c8);
            func_0x00010c2af220();
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010bf21200(param_7);
            func_0x00010c2a9920(puVar11);
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010c083ec0(param_7);
            func_0x00010c2b1a20(puVar11);
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010bf04ae0(param_7);
            func_0x00010c2a8460(puVar11);
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010befdac0(param_7);
            func_0x00010c2a8040(puVar11);
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010befdaa0(param_7);
            func_0x00010c2a8000(puVar11);
            _objc_unsafeClaimAutoreleasedReturnValue();
            func_0x00010c23b560(param_7);
            func_0x00010c2b8fe0(puVar11);
            _objc_unsafeClaimAutoreleasedReturnValue();
            puVar12 = puVar9;
            func_0x00010bf311e0(puVar9);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2aa1c0(puVar11);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar12);
            uVar8 = *(undefined8 *)(param_3 + (long)_DAT_112740434);
            func_0x00010bf16c80(uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2b9740(puVar11);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(uVar8);
            uVar8 = param_8;
            func_0x00010bef0520(param_8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2a9de0(puVar11);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(uVar8);
            uVar8 = param_8;
            func_0x00010bef0a60(param_8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2b2880(puVar11);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(uVar8);
            puVar12 = puVar11;
            func_0x00010bf21f60(puVar11);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c18ed20(puVar9);
            _objc_release(puVar12);
            _objc_release(puVar11);
          }
          puVar13 = PTR_PTR_1126c84c0;
          _objc_alloc_init();
          uVar1 = param_3;
          func_0x00010bf5aac0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2aa200(puVar13);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar1);
          uVar1 = param_3;
          func_0x00010bf5aac0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2ab340(puVar13);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar1);
          uVar8 = *(undefined8 *)(param_3 + (long)_DAT_1127403f0);
          func_0x00010c269d40(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfe8380();
          func_0x00010c2b3980(puVar13);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar8);
          uVar1 = param_3;
          func_0x00010be1e420(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2b3020(puVar13);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar1);
          lVar20 = (long)_DAT_112740468;
          func_0x00010c0982a0(*(undefined8 *)(param_3 + lVar20));
          func_0x00010c2b2dc0(puVar13);
          _objc_unsafeClaimAutoreleasedReturnValue();
          func_0x00010bf70d80(*(undefined8 *)(param_3 + lVar20));
          func_0x00010c2ae800(puVar13);
          _objc_unsafeClaimAutoreleasedReturnValue();
          puVar11 = puVar13;
          func_0x00010bf21f60(puVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1c73c0(puVar9);
          _objc_release(puVar11);
          uVar1 = param_3;
          func_0x00010bf167e0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef7120();
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar1);
          uVar14 = *(undefined8 *)(param_3 + (long)_DAT_1127403d4);
          func_0x00010c0cfdc0();
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar14;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar8;
          func_0x00010c240000();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar8);
          _objc_release(uVar14);
          uVar8 = uVar7;
          func_0x00010c0ff5a0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0();
          _objc_release(uVar8);
          func_0x00010c179060(uVar7);
          uVar8 = param_8;
          func_0x00010bf311e0(param_8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c179280(uVar7);
          _objc_release(uVar8);
          puVar15 = PTR_PTR_1126b3068;
          _objc_opt_new();
          puVar11 = PTR_PTR_1126b25e8;
          _objc_opt_new(PTR_PTR_1126b25e8);
          func_0x00010c1dd220(puVar15);
          _objc_release(puVar11);
          func_0x00010c1dd500(uVar7);
          uVar8 = param_8;
          func_0x00010bef0a60(param_8);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = param_3;
          func_0x00010bdd92a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar8);
          puVar12 = PTR_PTR_1126affe0;
          puVar11 = PTR_PTR_1126affc0;
          uVar8 = param_6;
          func_0x00010bfe6ac0(param_6);
          _objc_retainAutoreleasedReturnValue();
          _CMTimeMakeWithSeconds(&uStack_c0,0x4008000000000000,1000);
          func_0x00010c27eee0(puVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb24e0(*(undefined8 *)(param_3 + lVar20));
          func_0x00010bf70d80(*(undefined8 *)(param_3 + lVar20));
          puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
          uStack_88 = uVar1;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bef70e0(puVar12);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar16);
          _objc_release(puVar11);
          _objc_release(uVar8);
          lVar20 = param_3 + (long)_DAT_112740460;
          _objc_loadWeakRetained(lVar20);
          uVar8 = param_6;
          func_0x00010bfe6ac0(param_6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfa1940(lVar20);
          _objc_release(uVar8);
          _objc_release(lVar20);
          func_0x00010c1afe00(param_3);
          _objc_initWeak(&uStack_c0,param_3);
          uVar2 = param_3;
          func_0x00010be47040(param_3);
          _objc_retainAutoreleasedReturnValue();
          puVar17 = auStack_c8;
          param_4 = &uStack_c0;
          _objc_copyWeak(puVar17);
          func_0x000100078e94();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c297260(uVar2);
          _objc_release(puVar17);
          _objc_release(uVar2);
          func_0x00010beda560(param_3);
          func_0x00010beb98c0(param_3);
          _objc_destroyWeak(auStack_c8);
          _objc_destroyWeak(&uStack_c0);
          _objc_release(uVar1);
          _objc_release(puVar15);
          _objc_release(uVar7);
          _objc_release(puVar13);
          _objc_release(puVar9);
        }
      }
    }
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return param_5;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(&uStack_c0);
  __Unwind_Resume(param_5);
  _objc_retain(param_4);
  puVar18 = param_4;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar18;
  func_0x00010bf0b760();
  if ((int)puVar21 == 5) {
    puVar19 = param_4;
    func_0x00010c0c3fe0(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar19;
    func_0x00010bfd8fc0();
    _objc_release(puVar19);
  }
  else {
    puVar21 = (undefined8 *)0x0;
  }
  _objc_release(puVar18);
  _objc_release(param_4);
  return puVar21;
}



/* Entry: 10613f488; end: 10613f5af;  */

undefined8 FUN_10613f488(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf0b760();
  if ((int)uVar3 == 5) {
    uVar2 = param_2;
    func_0x00010c0c3fe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd8fc0();
    _objc_release(uVar2);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 10613f5b0; end: 10613f633; -[SCFeatureBatchCaptureImpl captureComponent:didCompleteWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613f5b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c06b680();
  if ((int)lVar1 != 0) {
    lVar1 = param_1 + _DAT_112740460;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bfa1940();
    _objc_release(lVar1);
    func_0x00010c1afe00(param_1,param_2,0);
    func_0x00010beda560(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10613f634; end: 10613f637; -[SCFeatureBatchCaptureImpl captureComponent:didCompleteRecoveryWithImage:recoveryData:] */

void FUN_10613f634(void)

{
  return;
}



/* Entry: 10613f638; end: 10613f63b; -[SCFeatureBatchCaptureImpl imageCaptureDidComplete] */

void FUN_10613f638(void)

{
  return;
}



/* Entry: 10613f63c; end: 10613f693; -[SCFeatureBatchCaptureImpl exposeCaptureServiceScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613f63c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11274046c;
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d500();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10613f694; end: 10613f6c7; -[SCFeatureBatchCaptureImpl removeCaptureServiceScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613f694(long param_1)

{
  param_1 = param_1 + _DAT_11274046c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c12b640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10613f6c8; end: 10613f723; -[SCFeatureBatchCaptureImpl videoCaptureWillStartRecordingWithCaptureConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613f6c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c1afe00(param_1,param_2,1);
  param_1 = param_1 + _DAT_11274046c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c299640();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10613f724; end: 10613f757; -[SCFeatureBatchCaptureImpl videoCaptureDidReachUnlimitedMovementThreshold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10613f724(long param_1)

{
  param_1 = param_1 + _DAT_11274046c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c299500();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10613f758; end: 10613f75b; -[SCFeatureBatchCaptureImpl captureComponent:willFinishRecordingWithVideoSize:placeholderImage:videoFuture:] */

void FUN_10613f758(void)

{
  return;
}



/* Entry: 10613f75c; end: 1061400a3; -[SCFeatureBatchCaptureImpl videoCaptureDidFinishRecordingWithRecordedVideo:captureConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10613f75c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  undefined1 auStack_118 [8];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_1;
  func_0x00010c06b680();
  if ((int)lVar2 != 0) {
    lVar19 = (long)_DAT_1127403dc;
    lVar2 = param_1 + lVar19;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bfaf0c0();
    _objc_release(lVar2);
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127403e8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a18a0();
    _objc_release(uVar3);
    puVar5 = PTR__OBJC_CLASS___AVAsset_1126aff38;
    puVar4 = param_3;
    func_0x00010c29bb40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0b9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar6 = PTR_PTR_1126c4280;
    _objc_alloc();
    puVar4 = param_3;
    func_0x00010c29bb40(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = param_3;
    func_0x00010c0fd9a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c057a60();
    _objc_release(puVar18);
    _objc_release(puVar4);
    uVar3 = param_4;
    func_0x00010bf311e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179260(puVar6);
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x00010c096b40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bcbe0(puVar6);
    _objc_release(uVar3);
    puVar4 = param_3;
    func_0x00010c120480(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e7980(puVar6);
    _objc_release(puVar4);
    func_0x00010c299760(puVar5);
    func_0x00010c17dde0(puVar6);
    lVar2 = param_1 + lVar19;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bf926c0();
    func_0x00010c1b2a60(puVar6);
    _objc_release(lVar2);
    uVar3 = param_4;
    func_0x00010bef0b60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bc3a0(puVar6);
    _objc_release(uVar3);
    puVar7 = PTR_PTR_1126c84c8;
    _objc_alloc_init();
    puVar8 = puVar6;
    func_0x00010bf311e0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2aa1c0(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
    uVar3 = *(undefined8 *)(param_1 + _DAT_112740434);
    func_0x00010bf16c80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b9740(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x00010bef0520(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a9de0(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    uVar3 = param_4;
    func_0x00010bef0a60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b2880(puVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    puVar8 = puVar7;
    func_0x00010bf21f60(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18ed20(puVar6);
    _objc_release(puVar8);
    func_0x00010c299d80(param_3);
    _CMTimeMakeWithSeconds(&uStack_90,600);
    puVar9 = PTR_PTR_1126c84c0;
    _objc_alloc_init();
    lVar2 = param_1;
    func_0x00010bf5aac0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2aa200(puVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bf5aac0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2ab340(puVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127403f0);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe8380();
    func_0x00010c2b3980(puVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    lVar2 = param_1;
    func_0x00010be1e420(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2b3020(puVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar20 = (long)_DAT_112740468;
    func_0x00010c0982a0(*(undefined8 *)(param_1 + lVar20));
    func_0x00010c2b2dc0(puVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010bf70d80(*(undefined8 *)(param_1 + lVar20));
    func_0x00010c2ae800(puVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar8 = puVar9;
    func_0x00010bf21f60(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c73c0(puVar6);
    _objc_release(puVar8);
    lVar19 = param_1 + lVar19;
    _objc_loadWeakRetained();
    uStack_108 = uStack_88;
    uStack_110 = uStack_90;
    uStack_100 = uStack_80;
    lVar2 = lVar19;
    func_0x00010bf46940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar19);
    lVar19 = lVar2;
    func_0x00010c1585e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar19;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar10;
    func_0x00010bf8c620();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c193aa0(puVar6);
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar19);
    uStack_108 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    uStack_110 = *(undefined8 *)PTR__kCMTimeZero_110348670;
    uStack_100 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
    uStack_d8 = uStack_88;
    uStack_e0 = uStack_90;
    uStack_d0 = uStack_80;
    _CMTimeRangeMake(&uStack_c0,&uStack_110,&uStack_e0);
    uStack_108 = uStack_b8;
    uStack_110 = uStack_c0;
    uStack_f8 = uStack_a8;
    uStack_100 = uStack_b0;
    uStack_e8 = uStack_98;
    uStack_f0 = uStack_a0;
    func_0x00010c1bf0a0(puVar6);
    func_0x00010c1afe00(param_1);
    lVar19 = param_1;
    func_0x00010bf167e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7120();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar19);
    uVar12 = *(undefined8 *)(param_1 + _DAT_1127403d4);
    func_0x00010c0cfdc0();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar13;
    func_0x00010c240000();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar13);
    _objc_release(uVar12);
    uVar13 = param_4;
    func_0x00010bf311e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c179280(uVar3);
    _objc_release(uVar13);
    uVar13 = uVar3;
    func_0x00010c0ff5a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    _objc_release(uVar13);
    func_0x00010c179060(uVar3);
    puVar14 = PTR_PTR_1126b3068;
    _objc_opt_new();
    puVar8 = PTR_PTR_1126b25e8;
    _objc_opt_new(PTR_PTR_1126b25e8);
    func_0x00010c1dd220(puVar14);
    _objc_release(puVar8);
    func_0x00010c1dd500(uVar3);
    uVar13 = param_4;
    func_0x00010bef0a60(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_1;
    func_0x00010bdd92a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar13);
    puVar1 = PTR_PTR_1126affe0;
    puVar8 = PTR_PTR_1126affc0;
    puVar4 = param_3;
    func_0x00010c29bb40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29a0a0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb24e0(*(undefined8 *)(param_1 + lVar20));
    func_0x00010bf70d80(*(undefined8 *)(param_1 + lVar20));
    puVar15 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_78 = lVar19;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef70e0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar15);
    _objc_release(puVar8);
    _objc_release(puVar4);
    lVar10 = param_1;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa1960();
    _objc_release(lVar10);
    func_0x00010beb98c0(param_1);
    _objc_initWeak(&uStack_110,param_1);
    lVar10 = param_1;
    func_0x00010be47040();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = auStack_118;
    param_2 = &uStack_110;
    _objc_copyWeak(puVar16);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(lVar10);
    _objc_release(puVar16);
    _objc_release(lVar10);
    func_0x00010beda560(param_1);
    param_1 = param_1 + _DAT_11274046c;
    _objc_loadWeakRetained(param_1);
    func_0x00010c2994c0();
    _objc_release(param_1);
    _objc_destroyWeak(auStack_118);
    _objc_destroyWeak(&uStack_110);
    _objc_release(lVar19);
    _objc_release(puVar14);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(puVar9);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(&uStack_110);
  __Unwind_Resume(param_3);
  _objc_retain(param_2);
  puVar4 = param_2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar4;
  func_0x00010bf0b760();
  if ((int)puVar18 == 5) {
    puVar17 = param_2;
    func_0x00010c0c3fe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar17;
    func_0x00010bfd8fc0();
    _objc_release(puVar17);
  }
  else {
    puVar18 = (undefined8 *)0x0;
  }
  _objc_release(puVar4);
  _objc_release(param_2);
  return puVar18;
}



/* Entry: 1061400a4; end: 1061401a7;  */

undefined8 FUN_1061400a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf0b760();
  if ((int)uVar3 == 5) {
    uVar2 = param_2;
    func_0x00010c0c3fe0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfd8fc0();
    _objc_release(uVar2);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 1061401a8; end: 1061401eb; -[SCFeatureBatchCaptureImpl videoCaptureDidFailRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061401a8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_11274046c;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c2994a0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010beda570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateLastSegmentThumbnailAndTo_112594300,1)
  ;
  return;
}



/* Entry: 1061401ec; end: 10614021f; -[SCFeatureBatchCaptureImpl videoCaptureDidCancelRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061401ec(long param_1)

{
  param_1 = param_1 + _DAT_11274046c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c299460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106140220; end: 106140253; -[SCFeatureBatchCaptureImpl videoCaptureDidAbortRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106140220(long param_1)

{
  param_1 = param_1 + _DAT_11274046c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c299440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106140254; end: 106140287; -[SCFeatureBatchCaptureImpl videoCaptureRecordingTooShort] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106140254(long param_1)

{
  param_1 = param_1 + _DAT_11274046c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2995a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106140288; end: 1061402bb; -[SCFeatureBatchCaptureImpl videoCaptureDidReachEnd] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106140288(long param_1)

{
  param_1 = param_1 + _DAT_11274046c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c2994e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061402bc; end: 1061402ef; -[SCFeatureBatchCaptureImpl videoCaptureDidStopRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061402bc(long param_1)

{
  param_1 = param_1 + _DAT_11274046c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c299520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061402f0; end: 10614035f; -[SCFeatureBatchCaptureImpl videoCaptureDidCompleteRecoveryWithRecoveryData:videoFuture:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061402f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11274046c;
  _objc_retain(param_4);
  _objc_retain(param_3);
  param_1 = param_1 + lVar1;
  _objc_loadWeakRetained(param_1);
  func_0x00010c299480();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106140360; end: 10614039f; -[SCFeatureBatchCaptureImpl videoCaptureShouldPrepareRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106140360(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11274046c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c2995e0();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1061403a0; end: 1061403df; -[SCFeatureBatchCaptureImpl videoCaptureShouldStartRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1061403a0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11274046c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c299600();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1061403e0; end: 10614041f; -[SCFeatureBatchCaptureImpl videoCaptureShouldEndRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1061403e0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11274046c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c2995c0();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 106140420; end: 10614045f; -[SCFeatureBatchCaptureImpl videoCaptureHasStartedRecording] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106140420(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11274046c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c299560();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 106140460; end: 10614049b; -[SCFeatureBatchCaptureImpl setRecordingState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106140460(long param_1)

{
  param_1 = param_1 + _DAT_11274046c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1e9000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10614049c; end: 106140587; -[SCFeatureBatchCaptureImpl _cameraMediaOriginWithCapturedLensId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10614049c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126affc8;
  _objc_retain(param_3);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126affd8;
  func_0x00010c0cb140(PTR_PTR_1126affd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c4d00(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  lVar3 = *(long *)(param_1 + _DAT_11274041c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0c54c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar3);
  if (lVar4 != 0) {
    puVar2 = puVar1;
    func_0x00010c0c5b40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bbee0();
    _objc_release(puVar2);
  }
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106140588; end: 1061405d7; -[SCFeatureBatchCaptureImpl _getCurrentLocation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106140588(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740410);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09ea00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1061405d8; end: 10614076f; -[SCFeatureBatchCaptureImpl setCameraUIVisible:animated:arbitrator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061405d8(long param_1,undefined8 param_2,int param_3,undefined1 param_4,undefined8 param_5
                  )

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_5);
  if (param_3 == 0) {
    lVar2 = param_1;
    func_0x00010c233e60();
    uVar3 = *(undefined8 *)(param_1 + _DAT_11274042c);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    if ((int)lVar2 == 0) {
      func_0x00010c286f60();
    }
    else {
      uVar4 = uVar3;
      func_0x00010c0efe60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar4);
    }
    _objc_release(uVar3);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    lVar2 = param_1;
    func_0x00010be47040(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = auStack_58;
    _objc_copyWeak(puVar1,auStack_48);
    uStack_50 = param_4;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(lVar2);
    _objc_release(puVar1);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  func_0x00010c138480(*(undefined8 *)(param_1 + _DAT_112740424));
  _objc_release(param_5);
  return;
}



/* Entry: 106140770; end: 10614083f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106140770(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar3 = (long)_DAT_11274042c;
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0efe60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be9d520(param_1);
    func_0x00010c286f60(uVar2);
    _objc_release(uVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106140840; end: 1061408c3; -[SCFeatureBatchCaptureImpl batchCaptureOverlayViewControllerDidPressReviewAndEdit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106140840(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010be9d520();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127403e8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a1860();
    _objc_release(uVar2);
    param_1 = param_1 + _DAT_112740460;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfa1a00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1061408c4; end: 10614094f; -[SCFeatureBatchCaptureImpl batchCaptureOverlayViewController:previewButtonDidBecomeVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061408c4(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  
  lVar1 = param_1 + _DAT_112740460;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfa1980();
  _objc_release(lVar1);
  if ((param_4 & 1) != 0) {
    return;
  }
  param_1 = param_1 + _DAT_112740464;
  _objc_loadWeakRetained(param_1);
  func_0x00010c136e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106140950; end: 106140b7b; -[SCFeatureBatchCaptureImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106140950(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_78,param_1);
  lVar6 = (long)_DAT_112740470;
  if (*(long *)(param_1 + lVar6) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar1;
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
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_106140b7c;
    puStack_88 = &UNK_110872b30;
    _objc_copyWeak(auStack_80,auStack_78);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_a8,auStack_78);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar5);
    _objc_release(uVar5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
  }
  _objc_destroyWeak(auStack_78);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106140b7c; end: 106140c1f;  */

void FUN_106140b7c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  func_0x00010c0e38c0(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 106140c20; end: 106140c9b;  */

void FUN_106140c20(long param_1,undefined8 param_2)

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



/* Entry: 106140c9c; end: 106140ccf; -[SCFeatureBatchCaptureImpl stopObservingCapturerStateUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106140c9c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740470;
  func_0x00010bf86d80(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106140cd0; end: 106140d2f; -[SCFeatureBatchCaptureImpl _didChangeBatchCaptureActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106140cd0(long param_1,undefined8 param_2,ulong param_3)

{
  func_0x00010be64900();
  if ((param_3 & 1) != 0) {
    return;
  }
  func_0x00010c137fe0(param_1);
  param_1 = param_1 + _DAT_112740460;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfa1980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106140d30; end: 106140e67; -[SCFeatureBatchCaptureImpl _notifyExternalComponentsWithBatchCaptureActive:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106140d30(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + _DAT_112740460;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bfa1920();
  _objc_release(lVar1);
  lVar3 = (long)_DAT_1127403d0;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (param_3 == 0) {
    if (lVar2 != param_1) {
      return;
    }
    lVar1 = param_1 + _DAT_11274046c;
    _objc_loadWeakRetained(lVar1);
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c18b5e0();
    _objc_release(param_1);
  }
  else {
    if (lVar2 == param_1) {
      return;
    }
    lVar1 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    _objc_storeWeak(param_1 + _DAT_11274046c,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1 + lVar3;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c18b5e0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106140e68; end: 106140e9f; -[SCFeatureBatchCaptureImpl _didChangeCaptureDevicePosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106140e68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112740468);
  *(undefined8 *)(param_1 + _DAT_112740468) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106140ea0; end: 106140ebf; -[SCFeatureBatchCaptureImpl delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106140ea0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112740460);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106140ec0; end: 106140edf; -[SCFeatureBatchCaptureImpl cameraBottomUIArbitrator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106140ec0(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112740464);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106140ee0; end: 106140f1f; -[SCFeatureBatchCaptureImpl setIsActivatedObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106140ee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740414;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106140f20; end: 106140f2f; -[SCFeatureBatchCaptureImpl containerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106140f20(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112740424);
}



/* Entry: 106140f30; end: 106140f3f; -[SCFeatureBatchCaptureImpl appLifecycle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106140f30(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127403fc);
}



/* Entry: 106140f40; end: 106140f7f; -[SCFeatureBatchCaptureImpl setAppLifecycle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106140f40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127403fc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106140f80; end: 106140fbf; -[SCFeatureBatchCaptureImpl setBatchCaptureConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106140f80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112740434;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


