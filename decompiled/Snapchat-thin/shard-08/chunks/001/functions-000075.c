/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105d04024; end: 105d0406b; -[SCEmojiBrushResourceImpl displayedNewEmojiBrushListForVersion:] */

void FUN_105d04024(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  if ((param_3 != 0) &&
     (lVar1 = param_3, func_0x00010c0720c0(param_3,param_2,*(undefined8 *)(param_1 + 0x18)),
     (int)lVar1 != 0)) {
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d0406c; end: 105d04073; -[SCEmojiBrushResourceImpl hasSeenNewEmojiList] */

undefined1 FUN_105d0406c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



/* Entry: 105d04074; end: 105d040df; -[SCEmojiBrushResourceImpl _isEmojiListTTLExpired] */

bool FUN_105d04074(double param_1,long param_2)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  dVar2 = param_1;
  func_0x00010c26f320(*(undefined8 *)(param_2 + 0x10));
  _objc_release(puVar1);
  return 14400.0 < param_1 - dVar2;
}



/* Entry: 105d040e0; end: 105d04297; -[SCEmojiBrushResourceImpl _updateEmojiBrushEmojiList:withVersion:shouldSkipVersionCheck:] */

undefined8 FUN_105d040e0(long param_1,undefined8 param_2,ulong param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010beda2e0(param_1);
  if (((param_3 == 0) || (uVar1 = param_3, func_0x00010bf529e0(), uVar1 == 0)) ||
     (((param_5 & 1) == 0 &&
      (lVar2 = param_4, func_0x00010bf32ee0(param_4,param_2,*(undefined8 *)(param_1 + 0x18)),
      lVar2 == 0)))) {
    uVar3 = 0;
  }
  else {
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 0x18) = param_4;
    _objc_release(uVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_3;
    func_0x00010bf529e0();
    if (0xf < uVar1) {
      uVar1 = 0x10;
    }
    uVar5 = param_3;
    func_0x00010c25e980(param_3,param_2,0,uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa160(puVar4,param_2,uVar5);
    _objc_release(uVar5);
    *(undefined1 *)(param_1 + 0x20) = 0;
    puVar6 = PTR_PTR_1126c3f78;
    func_0x00010bf69420();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar4;
    func_0x00010bf529e0();
    puVar8 = puVar6;
    func_0x00010bf529e0();
    if (puVar7 < puVar8) {
      puVar7 = puVar4;
      func_0x00010bf529e0(puVar4);
      puVar8 = puVar6;
      func_0x00010bf529e0(puVar6);
      puVar9 = puVar4;
      func_0x00010bf529e0(puVar4);
      puVar10 = puVar6;
      func_0x00010c25e980(puVar6,param_2,puVar7,(long)puVar8 - (long)puVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160(puVar4,param_2,puVar10);
      _objc_release(puVar10);
    }
    puVar7 = puVar4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar7;
    _objc_release(uVar3);
    _objc_release(puVar6);
    _objc_release(puVar4);
    uVar3 = 1;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 105d04298; end: 105d042d3; -[SCEmojiBrushResourceImpl _updateLastCheckingEmojiListTimestamp] */

void FUN_105d04298(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105d042d4; end: 105d0440b; -[SCEmojiBrushResourceImpl initWithCoder:] */

undefined1 * FUN_105d042d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126ece28;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 0x20) = (char)uVar3;
    _objc_release(uVar4);
    if (*(long *)((long)puVar1 + 8) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)((long)puVar1 + 8);
      *(undefined **)((long)puVar1 + 8) = puVar2;
      _objc_release(uVar4);
    }
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105d0440c; end: 105d044b7; -[SCEmojiBrushResourceImpl encodeWithCoder:] */

void FUN_105d0440c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf93020(param_3,param_2,uVar2,&PTR____CFConstantStringClassReference_110e28858);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e28878);
  func_0x00010bf93020(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e28898);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,*(undefined1 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,puVar1,&PTR____CFConstantStringClassReference_110e288b8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105d044b8; end: 105d044c3; +[SCEmojiBrushResourceImpl defaultEmojiArray] */

undefined ** FUN_105d044b8(void)

{
  return &PTR__OBJC_CLASS___NSConstantArray_11117f498;
}



/* Entry: 105d044c4; end: 105d044ff; -[SCEmojiBrushResourceImpl .cxx_destruct] */

void FUN_105d044c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d04500; end: 105d045cb; -[SCEmojiBrushResourceProviderImpl initWithEmojiBrushResourceFetcher:preferences:repositoryExperiments:] */

undefined1 *
FUN_105d04500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ece30;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
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



/* Entry: 105d045cc; end: 105d0460f; -[SCEmojiBrushResourceProviderImpl currentAvailableEmojiBrushList] */

void FUN_105d045cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be1ec80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfc4480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d04610; end: 105d04653; -[SCEmojiBrushResourceProviderImpl currentAvailableEmojiBrushListVersion] */

void FUN_105d04610(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be1ec80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfc44a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105d04654; end: 105d046eb; -[SCEmojiBrushResourceProviderImpl checkEmojiBrushListAndUpdateIfNecessary] */

void FUN_105d04654(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x00010be1ec80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_105d046ec;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  lStack_38 = lVar1;
  _objc_retain();
  func_0x00010bf37e00(lVar1,param_2,uVar2,&puStack_60,1);
  _objc_release(lStack_38);
  _objc_release(lVar1);
  return;
}



/* Entry: 105d046ec; end: 105d046f7;  */

void FUN_105d046ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea3a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setEmojiBrushResource__112586828,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105d046f8; end: 105d0475b; -[SCEmojiBrushResourceProviderImpl displayedNewEmojiBrushListForVersion:] */

void FUN_105d046f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be1ec80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf86ac0();
  _objc_release(param_3);
  func_0x00010bea3a00(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105d0475c; end: 105d04797; -[SCEmojiBrushResourceProviderImpl hasSeenNewEmojiBrushList] */

undefined8 FUN_105d0475c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be1ec80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfdba40();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105d04798; end: 105d0481b; -[SCEmojiBrushResourceProviderImpl _getEmojiBrushResource] */

void FUN_105d04798(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = *(undefined **)(param_1 + 8);
  func_0x00010c0dff20(puVar2,param_2,&PTR____CFConstantStringClassReference_110e28a58);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010010fab4();
  puVar1 = puVar2;
  if ((int)puVar3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126c3f78;
    _objc_alloc_init(PTR_PTR_1126c3f78);
  }
  else {
    _objc_retain(puVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105d0481c; end: 105d0482b; -[SCEmojiBrushResourceProviderImpl _setEmojiBrushResource:] */

void FUN_105d0481c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setObject_forKey__112651b80,param_3,
             &PTR____CFConstantStringClassReference_110e28a58);
  return;
}



/* Entry: 105d0482c; end: 105d04867; -[SCEmojiBrushResourceProviderImpl .cxx_destruct] */

void FUN_105d0482c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d04868; end: 105d04ab3; -[SCPreviewScopedEmojiBrushResourceServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d04868(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126c3f80;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112734754;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf10b80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112734758;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11273475c;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010bf9c660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03f180();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_112734760;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar8 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(puVar1);
  _objc_retain(lVar2);
  func_0x00010bf11fe0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126c3f90;
  _objc_alloc(PTR_PTR_1126c3f90);
  func_0x00010c00f5e0();
  puVar10 = PTR_PTR_1126c3f98;
  _objc_alloc(PTR_PTR_1126c3f98);
  func_0x00010c00f600();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105d04ab4; end: 105d04b83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d04ab4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126c3f88;
    _objc_alloc(PTR_PTR_1126c3f88);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2 + _DAT_11273475c;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010bf9c660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00f5c0(puVar6,param_2,uVar1,uVar3,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105d04b84; end: 105d04bdf; -[SCPreviewScopedEmojiBrushResourceServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d04b84(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11273475c);
  _objc_destroyWeak(param_1 + _DAT_112734758);
  _objc_destroyWeak(param_1 + _DAT_112734760);
  _objc_destroyWeak(param_1 + _DAT_112734754);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734764);
  return;
}



/* Entry: 105d04be0; end: 105d04e2b; -[SCSnapEditorPluginScopedEmojiBrushResourceServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d04be0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126c3f80;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112734768;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf10b80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_11273476c;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_112734770;
  _objc_loadWeakRetained(lVar6);
  lVar7 = lVar6;
  func_0x00010bf9c660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03f180();
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_112734774;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar8 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(puVar1);
  _objc_retain(lVar2);
  func_0x00010bf11fe0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126c3f90;
  _objc_alloc(PTR_PTR_1126c3f90);
  func_0x00010c00f5e0();
  puVar10 = PTR_PTR_1126c3fa0;
  _objc_alloc(PTR_PTR_1126c3fa0);
  func_0x00010c00f600();
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_release(lVar2);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 105d04e2c; end: 105d04efb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d04e2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = PTR_PTR_1126c3f88;
    _objc_alloc(PTR_PTR_1126c3f88);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2 + _DAT_112734770;
    _objc_loadWeakRetained(lVar4);
    lVar5 = lVar4;
    func_0x00010bf9c660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00f5c0(puVar6,param_2,uVar1,uVar3,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105d04efc; end: 105d04f57; -[SCSnapEditorPluginScopedEmojiBrushResourceServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105d04efc(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112734770);
  _objc_destroyWeak(param_1 + _DAT_11273476c);
  _objc_destroyWeak(param_1 + _DAT_112734774);
  _objc_destroyWeak(param_1 + _DAT_112734768);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112734778);
  return;
}



/* Entry: 105d04f58; end: 105d04fcb; -[SCEmojiBrushResourceServices initWithEmojiBrushResourceProvider:] */

undefined1 * FUN_105d04f58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ece38;
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



/* Entry: 105d04fcc; end: 105d04fd3; -[SCEmojiBrushResourceServices emojiBrushResourceProvider] */

undefined8 FUN_105d04fcc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105d04fd4; end: 105d04fdf; -[SCEmojiBrushResourceServices .cxx_destruct] */

void FUN_105d04fd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d04fe0; end: 105d05053; -[SCPreviewScopedEmojiBrushResourceServices initWithEmojiBrushResourceServices:] */

undefined1 * FUN_105d04fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ece40;
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



/* Entry: 105d05054; end: 105d0505b; -[SCPreviewScopedEmojiBrushResourceServices emojiBrushResourceServices] */

undefined8 FUN_105d05054(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105d0505c; end: 105d05067; -[SCPreviewScopedEmojiBrushResourceServices .cxx_destruct] */

void FUN_105d0505c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d05068; end: 105d050db; -[SCSnapEditorPluginScopedEmojiBrushResourceServices initWithEmojiBrushResourceServices:] */

undefined1 * FUN_105d05068(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ece48;
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



/* Entry: 105d050dc; end: 105d050e3; -[SCSnapEditorPluginScopedEmojiBrushResourceServices emojiBrushResourceServices] */

undefined8 FUN_105d050dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105d050e4; end: 105d050ef; -[SCSnapEditorPluginScopedEmojiBrushResourceServices .cxx_destruct] */

void FUN_105d050e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105d050f0; end: 105d051cb; -[SCStickerInjectorBase registerInjector:config:] */

void FUN_105d050f0(ulong param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar1 = param_4;
    func_0x00010bf5d9a0(param_4);
    uVar2 = param_1;
    func_0x00010be41240(param_1,param_2,lVar1);
    if ((uVar2 & 1) == 0) {
      lVar5 = *(long *)(param_1 + 8);
      if (lVar5 == 0) {
        puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        _objc_opt_new();
        uVar4 = *(undefined8 *)(param_1 + 8);
        *(undefined **)(param_1 + 8) = puVar3;
        _objc_release(uVar4);
        lVar5 = *(long *)(param_1 + 8);
      }
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(lVar5,param_2,param_3,puVar3);
      _objc_release(puVar3);
      func_0x00010be5ca60(param_1,param_2,param_4);
    }
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d051cc; end: 105d051d3; -[SCStickerInjectorBase expectedCTPEntityTypeNum] */

undefined8 FUN_105d051cc(void)

{
  return 0;
}



/* Entry: 105d051d4; end: 105d051db; -[SCStickerInjectorBase expectedCTItemInstanceTypeNum] */

undefined8 FUN_105d051d4(void)

{
  return 0;
}



/* Entry: 105d051dc; end: 105d051e3; -[SCStickerInjectorBase expectedStickerTypeNum] */

undefined8 FUN_105d051dc(void)

{
  return 0;
}



/* Entry: 105d051e4; end: 105d051eb; -[SCStickerInjectorBase expectedSOJUGalleryStickerTypeNum] */

undefined8 FUN_105d051e4(void)

{
  return 0;
}



/* Entry: 105d051ec; end: 105d051f3; -[SCStickerInjectorBase typeForCTPItem:] */

undefined8 FUN_105d051ec(void)

{
  return 0;
}



/* Entry: 105d051f4; end: 105d051fb; -[SCStickerInjectorBase typeForCTItemInstance:] */

undefined8 FUN_105d051f4(void)

{
  return 0;
}



/* Entry: 105d051fc; end: 105d05203; -[SCStickerInjectorBase typeForStickerState:] */

undefined8 FUN_105d051fc(void)

{
  return 0;
}



/* Entry: 105d05204; end: 105d0520b; -[SCStickerInjectorBase typeForSOJUGallerySticker:] */

undefined8 FUN_105d05204(void)

{
  return 0;
}



/* Entry: 105d0520c; end: 105d052d7; -[SCStickerInjectorBase isStickerSupportedWithCTPItem:] */

undefined8 FUN_105d0520c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bf96f00(param_3);
    uVar2 = param_1;
    func_0x00010be40340(param_1,param_2,lVar1);
    if ((int)uVar2 != 0) {
      uVar2 = param_1;
      func_0x00010c27de20(param_1,param_2,param_3);
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_105d052d8;
      puStack_40 = &UNK_1108e56a8;
      _objc_retain(param_3);
      lStack_38 = param_3;
      func_0x00010be44300(param_1,param_2,uVar2,&puStack_58);
      _objc_release(lStack_38);
      goto LAB_105d052b8;
    }
  }
  param_1 = 0;
LAB_105d052b8:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105d052d8; end: 105d052e3;  */

void FUN_105d052d8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07fab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_isStickerSupportedWithCTPItem__1125fd8b8,*(undefined8 *)(param_1 + 0x20))
  ;
  return;
}



/* Entry: 105d052e4; end: 105d053af; -[SCStickerInjectorBase isStickerSupportedWithStickerState:] */

undefined8 FUN_105d052e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c27dd80(param_3);
    uVar2 = param_1;
    func_0x00010be40380(param_1,param_2,lVar1);
    if ((int)uVar2 != 0) {
      uVar2 = param_1;
      func_0x00010bdf6620(param_1,param_2,param_3);
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_105d053b0;
      puStack_40 = &UNK_1108e56a8;
      _objc_retain(param_3);
      lStack_38 = param_3;
      func_0x00010be44300(param_1,param_2,uVar2,&puStack_58);
      _objc_release(lStack_38);
      goto LAB_105d05390;
    }
  }
  param_1 = 0;
LAB_105d05390:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105d053b0; end: 105d053bb;  */

void FUN_105d053b0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07faf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_isStickerSupportedWithStickerSta_1125fd8c8,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105d053bc; end: 105d05487; -[SCStickerInjectorBase isStickerSupportedWithSOJUGallerySticker:] */

undefined8 FUN_105d053bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c27dde0(param_3);
    uVar2 = param_1;
    func_0x00010be40360(param_1,param_2,lVar1);
    if ((int)uVar2 != 0) {
      uVar2 = param_1;
      func_0x00010bdf6600(param_1,param_2,param_3);
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_105d05488;
      puStack_40 = &UNK_1108e56a8;
      _objc_retain(param_3);
      lStack_38 = param_3;
      func_0x00010be44300(param_1,param_2,uVar2,&puStack_58);
      _objc_release(lStack_38);
      goto LAB_105d05468;
    }
  }
  param_1 = 0;
LAB_105d05468:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105d05488; end: 105d05493;  */

void FUN_105d05488(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07fad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_isStickerSupportedWithSOJUGaller_1125fd8c0,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105d05494; end: 105d055ef; -[SCStickerInjectorBase addLoggingParamsWithLoggingParamsBuilder:stickerViews:] */

void FUN_105d05494(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (((param_3 != 0) && (param_4 != 0)) && (lVar2 = param_4, func_0x00010bf529e0(), lVar2 != 0)) {
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        uVar4 = *(undefined8 *)(lVar7 * 8);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef9b00();
        _objc_release(uVar4);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
  }
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  uVar5 = *(undefined8 *)(param_3 + 8);
  func_0x00010bf00d20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010bfb2660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105d055f0; end: 105d05677; -[SCStickerInjectorBase ctpItemsForTestingInTarget:] */

void FUN_105d055f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf00d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb2660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105d05678; end: 105d0571f;  */

void FUN_105d05678(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  FUN_105d05720();
  if ((uVar1 & 1) == 0) {
    uVar3 = param_2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010010fab4();
    uVar1 = uVar3;
    if ((int)uVar2 == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar3);
    uVar3 = uVar1;
    func_0x00010bf5d8e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105d05720; end: 105d0578f;  */

uint FUN_105d05720(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010010fab4();
  lVar1 = param_1;
  if ((int)lVar2 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(param_1);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010c07fb00(param_1);
    uVar3 = (uint)param_1 ^ 1;
  }
  _objc_release(lVar1);
  return uVar3;
}



/* Entry: 105d05790; end: 105d0585b; -[SCStickerInjectorBase isConversionSupportedForStickerState:] */

undefined8 FUN_105d05790(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c27dd80(param_3);
    uVar2 = param_1;
    func_0x00010be40380(param_1,param_2,lVar1);
    if ((int)uVar2 != 0) {
      uVar2 = param_1;
      func_0x00010bdf6620(param_1,param_2,param_3);
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_105d0585c;
      puStack_40 = &UNK_1108e56f8;
      _objc_retain(param_3);
      lStack_38 = param_3;
      func_0x00010be3f3c0(param_1,param_2,uVar2,&puStack_58);
      _objc_release(lStack_38);
      goto LAB_105d0583c;
    }
  }
  param_1 = 0;
LAB_105d0583c:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105d0585c; end: 105d058a3;  */

undefined8 FUN_105d0585c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c06f760();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105d058a4; end: 105d0596f; -[SCStickerInjectorBase isConversionSupportedForSOJUGallerySticker:] */

undefined8 FUN_105d058a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c27dde0(param_3);
    uVar2 = param_1;
    func_0x00010be40360(param_1,param_2,lVar1);
    if ((int)uVar2 != 0) {
      uVar2 = param_1;
      func_0x00010bdf6600(param_1,param_2,param_3);
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_105d05970;
      puStack_40 = &UNK_1108e56f8;
      _objc_retain(param_3);
      lStack_38 = param_3;
      func_0x00010be3f3c0(param_1,param_2,uVar2,&puStack_58);
      _objc_release(lStack_38);
      goto LAB_105d05950;
    }
  }
  param_1 = 0;
LAB_105d05950:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105d05970; end: 105d059b7;  */

undefined8 FUN_105d05970(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c06f740();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105d059b8; end: 105d05abf; -[SCStickerInjectorBase isConversionSupportedForCTItemInstance:] */

undefined8 FUN_105d059b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c0840e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf96ee0();
    uVar4 = param_1;
    func_0x00010be40320(param_1,param_2,lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)uVar4 != 0) {
      uVar4 = param_1;
      func_0x00010bdf65e0(param_1,param_2,param_3);
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_105d05ac0;
      puStack_50 = &UNK_1108e56f8;
      _objc_retain(param_3);
      lStack_48 = param_3;
      func_0x00010be3f3c0(param_1,param_2,uVar4,&puStack_68);
      _objc_release(lStack_48);
      goto LAB_105d05a9c;
    }
  }
  param_1 = 0;
LAB_105d05a9c:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105d05ac0; end: 105d05b07;  */

undefined8 FUN_105d05ac0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c06f700();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105d05b08; end: 105d05bd3; -[SCStickerInjectorBase isConversionSupportedForCTPItem:] */

undefined8 FUN_105d05b08(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010bf96f00(param_3);
    uVar2 = param_1;
    func_0x00010be40340(param_1,param_2,lVar1);
    if ((int)uVar2 != 0) {
      uVar2 = param_1;
      func_0x00010c27de20(param_1,param_2,param_3);
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_105d05bd4;
      puStack_40 = &UNK_1108e56f8;
      _objc_retain(param_3);
      lStack_38 = param_3;
      func_0x00010be3f3c0(param_1,param_2,uVar2,&puStack_58);
      _objc_release(lStack_38);
      goto LAB_105d05bb4;
    }
  }
  param_1 = 0;
LAB_105d05bb4:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105d05bd4; end: 105d05c1b;  */

undefined8 FUN_105d05bd4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c269d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c06f720();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105d05c1c; end: 105d05cb3; -[SCStickerInjectorBase sojuGalleryStickerForStickerState:] */

void FUN_105d05c1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010bde8e60(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c269d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c2465a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105d05cb4; end: 105d05dab; -[SCStickerInjectorBase stickerStateForSOJUGallerySticker:sojuGalleryInfoFilters:uniqueId:timelineSegmentTimeRanges:editCapabilities:] */

void FUN_105d05cb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010bde8e40(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c269d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c255020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105d05dac; end: 105d05e63; -[SCStickerInjectorBase ctItemInstanceForSojuGallerySticker:sojuGalleryInfoFilters:] */

void FUN_105d05dac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bde8e40(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c269d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf5cd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105d05e64; end: 105d05f1b; -[SCStickerInjectorBase sojuGalleryStickerForCTItemInstance:stickerTransformState:] */

void FUN_105d05e64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bde8de0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c269d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c246580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105d05f1c; end: 105d05fb3; -[SCStickerInjectorBase sojuGalleryInfoFilterForCTItemInstance:] */

void FUN_105d05f1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  func_0x00010bde8de0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c269d40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c246520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105d05fb4; end: 105d060cf; -[SCStickerInjectorBase ctItemInstanceForStickerState:infoFiltersState:] */

void FUN_105d05fb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_1;
  func_0x00010bde8e60(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar6 = 0;
  }
  else {
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010bf5cd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    func_0x00010c06f560(param_1,param_2,param_3);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (((int)param_1 != 0) && (lVar6 != 0)) {
      uVar4 = param_3;
      func_0x00010bf5d7a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c0844e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078c00(puVar1,param_2,uVar5);
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
  }
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
  return;
}



/* Entry: 105d060d0; end: 105d061bb; -[SCStickerInjectorBase stickerForCTPItem:presentationModelProviderType:] */

void FUN_105d060d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bde8e00(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar1;
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c253f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010c27dd80(lVar2);
    func_0x00010be40380(param_1,param_2,lVar3);
    if ((int)param_1 == 0) {
      lVar3 = 0;
    }
    else {
      _objc_retain(lVar2);
      lVar3 = lVar2;
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105d061bc; end: 105d062a7; -[SCStickerInjectorBase stickerForCTItemInstance:presentationModelProviderType:] */

void FUN_105d061bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bde8de0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar1;
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x00010c253ee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar2;
    func_0x00010c27dd80(lVar2);
    func_0x00010be40380(param_1,param_2,lVar3);
    if ((int)param_1 == 0) {
      lVar3 = 0;
    }
    else {
      _objc_retain(lVar2);
      lVar3 = lVar2;
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105d062a8; end: 105d06373; -[SCStickerInjectorBase isContextUnlockSupportedForStickerState:] */

undefined8 FUN_105d062a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c27dd80(param_3);
    uVar2 = param_1;
    func_0x00010be40380(param_1,param_2,lVar1);
    if ((int)uVar2 != 0) {
      uVar2 = param_1;
      func_0x00010bdf6620(param_1,param_2,param_3);
      puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_50 = 0xc2000000;
      pcStack_48 = FUN_105d06374;
      puStack_40 = &UNK_1108e5728;
      _objc_retain(param_3);
      lStack_38 = param_3;
      func_0x00010be3f2c0(param_1,param_2,uVar2,&puStack_58);
      _objc_release(lStack_38);
      goto LAB_105d06354;
    }
  }
  param_1 = 0;
LAB_105d06354:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105d06374; end: 105d0637f;  */

void FUN_105d06374(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c06f570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_isContextUnlockSupportedForStick_1125f9768,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105d06380; end: 105d06487; -[SCStickerInjectorBase shouldPrepareItemInstanceForContextAction:] */

undefined8 FUN_105d06380(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c0840e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf96ee0();
    uVar4 = param_1;
    func_0x00010be40320(param_1,param_2,lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)uVar4 != 0) {
      uVar4 = param_1;
      func_0x00010bdf65e0(param_1,param_2,param_3);
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_105d06488;
      puStack_50 = &UNK_1108e5728;
      _objc_retain(param_3);
      lStack_48 = param_3;
      func_0x00010be3f2c0(param_1,param_2,uVar4,&puStack_68);
      _objc_release(lStack_48);
      goto LAB_105d06464;
    }
  }
  param_1 = 0;
LAB_105d06464:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105d06488; end: 105d06493;  */

void FUN_105d06488(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c231ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_shouldPrepareItemInstanceForCont_11266a1d8,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105d06494; end: 105d06513; -[SCStickerInjectorBase prepareItemInstanceForContextAction:] */

void FUN_105d06494(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010bde8640(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c109960(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105d06514; end: 105d0661b; -[SCStickerInjectorBase doesCTItemInstanceHaveAttachmentMetadata:] */

undefined8 FUN_105d06514(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c0840e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf96da0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf96ee0();
    uVar4 = param_1;
    func_0x00010be40320(param_1,param_2,lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)uVar4 != 0) {
      uVar4 = param_1;
      func_0x00010bdf65e0(param_1,param_2,param_3);
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_105d0661c;
      puStack_50 = &UNK_1108e5758;
      _objc_retain(param_3);
      lStack_48 = param_3;
      func_0x00010be3e380(param_1,param_2,uVar4,&puStack_68);
      _objc_release(lStack_48);
      goto LAB_105d065f8;
    }
  }
  param_1 = 0;
LAB_105d065f8:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105d0661c; end: 105d06627;  */

void FUN_105d0661c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf87910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_doesCTItemInstanceHaveAttachment_1125bf7e8,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 105d06628; end: 105d066a7; -[SCStickerInjectorBase attachmentURLForCTItemInstance:] */

void FUN_105d06628(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010bdd0a60(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bf0d680(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105d066a8; end: 105d0675b; -[SCStickerInjectorBase presentationModelProviderTypeForCTItemInstance:imageSize:durationMs:] */

void FUN_105d066a8(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010be7f7e0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126bc960;
    func_0x00010c290480(PTR_PTR_1126bc960,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = param_1;
    func_0x00010c10f5a0(param_1,param_2,param_3,param_4,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105d0675c; end: 105d067d3; -[SCStickerInjectorBase isAnimatedItemInstance:] */

long FUN_105d0675c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010bdcb480(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c06c020(param_1,param_2,param_3);
  }
  _objc_release(param_1);
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 105d067d4; end: 105d0689b; -[SCStickerInjectorBase shouldPrepareCTPItem:forAction:] */

long FUN_105d067d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010be3c000();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010010fab4();
    lVar3 = lVar1;
    if ((int)lVar2 == 0) {
      lVar3 = 0;
    }
    _objc_retain(lVar3);
    _objc_release(lVar1);
    _objc_release(param_1);
    if (lVar3 != 0) {
      lVar3 = lVar1;
      func_0x00010c231ea0(lVar1);
      _objc_release(lVar1);
      goto LAB_105d0687c;
    }
  }
  lVar3 = 0;
LAB_105d0687c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105d0689c; end: 105d06983; -[SCStickerInjectorBase shouldPrepareStickerView:forAction:] */

long FUN_105d0689c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  FUN_105d06984();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010be3c000();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 != 0) {
      lVar2 = param_1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010010fab4();
      lVar4 = lVar2;
      if ((int)lVar3 == 0) {
        lVar4 = 0;
      }
      _objc_retain(lVar4);
      _objc_release(lVar2);
      _objc_release(param_1);
      if (lVar4 != 0) {
        lVar4 = lVar2;
        func_0x00010c231f00(lVar2);
        _objc_release(lVar2);
        goto LAB_105d0695c;
      }
    }
  }
  lVar4 = 0;
LAB_105d0695c:
  _objc_release(lVar1);
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 105d06984; end: 105d06a37;  */

void FUN_105d06984(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain();
  _objc_retain(param_1);
  puVar1 = PTR_PTR_1126ba960;
  _objc_opt_class(PTR_PTR_1126ba960);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar1);
  if ((param_1 == 0) || ((uVar3 & 1) == 0)) {
    _objc_release(param_1);
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    _objc_retain(param_1);
    _objc_release(param_1);
    uVar2 = param_1;
    func_0x00010c253880(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c271a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = param_1;
  }
  _objc_release(uVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105d06a38; end: 105d06b43; -[SCStickerInjectorBase prepareCTPItem:forAction:presentingViewController:completion:] */

void FUN_105d06a38(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_6 == 0) goto LAB_105d06b18;
  func_0x00010be3c000();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
LAB_105d06b0c:
    lVar3 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010010fab4();
    lVar2 = lVar3;
    if ((int)lVar1 == 0) {
      lVar2 = 0;
    }
    _objc_retain(lVar2);
    _objc_release(lVar3);
    _objc_release(param_1);
    if (lVar2 == 0) goto LAB_105d06b0c;
    lVar2 = lVar3;
    func_0x00010c231ea0();
    if ((int)lVar2 != 0) {
      func_0x00010c109040(lVar3);
    }
  }
  _objc_release(lVar3);
LAB_105d06b18:
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d06b44; end: 105d06cb7; -[SCStickerInjectorBase prepareStickerView:forAction:completion:] */

void FUN_105d06b44(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  if (param_5 == 0) goto LAB_105d06c8c;
  if (param_3 == 0) {
    (**(code **)(param_5 + 0x10))(param_5);
    goto LAB_105d06c8c;
  }
  lVar1 = param_3;
  FUN_105d06984(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c07faa0();
  if ((uVar2 & 1) == 0) {
LAB_105d06c68:
    (**(code **)(param_5 + 0x10))(param_5);
  }
  else {
    func_0x00010be3c000();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) goto LAB_105d06c68;
    uVar3 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010010fab4();
    uVar2 = uVar3;
    if ((int)uVar4 == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    _objc_release(param_1);
    if (uVar2 == 0) goto LAB_105d06c68;
    _objc_retain(param_5);
    func_0x00010c109fc0(uVar3);
    _objc_release(param_5);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
LAB_105d06c8c:
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105d06cb8; end: 105d06cc3;  */

void FUN_105d06cb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105d06cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 105d06cc4; end: 105d06d8b; -[SCStickerInjectorBase shouldPresentHintForStickerView:forAction:] */

long FUN_105d06cc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010be3c040();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010010fab4();
    lVar3 = lVar1;
    if ((int)lVar2 == 0) {
      lVar3 = 0;
    }
    _objc_retain(lVar3);
    _objc_release(lVar1);
    _objc_release(param_1);
    if (lVar3 != 0) {
      lVar3 = lVar1;
      func_0x00010c231f80(lVar1);
      _objc_release(lVar1);
      goto LAB_105d06d6c;
    }
  }
  lVar3 = 0;
LAB_105d06d6c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105d06d8c; end: 105d06e5b; -[SCStickerInjectorBase presentHintForStickerView:forAction:] */

void FUN_105d06d8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010be3c040();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    lVar3 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010010fab4();
    lVar2 = lVar3;
    if ((int)lVar1 == 0) {
      lVar2 = 0;
    }
    _objc_retain(lVar2);
    _objc_release(lVar3);
    _objc_release(param_1);
    if (lVar2 != 0) {
      lVar2 = lVar3;
      func_0x00010c231f80();
      if ((int)lVar2 != 0) {
        func_0x00010c10c4a0(lVar3);
      }
      goto LAB_105d06e3c;
    }
  }
  lVar3 = 0;
LAB_105d06e3c:
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105d06e5c; end: 105d06fc3; -[SCStickerInjectorBase setDependencies:] */

undefined1 * FUN_105d06e5c(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar10 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = param_3;
  _objc_retain(param_3);
  if (param_3 != (undefined1 *)0x0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    param_4 = auStack_e8;
    lVar3 = lVar2;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar11 = *plStack_120;
      do {
        lVar12 = 0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(lVar2);
          }
          lVar4 = *(long *)(lStack_128 + lVar12 * 8);
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010010fab4();
          lVar1 = lVar4;
          if ((int)lVar5 == 0) {
            lVar1 = 0;
          }
          _objc_retain(lVar1);
          _objc_release(lVar4);
          if (lVar1 != 0) {
            func_0x00010c18bd00(lVar4);
          }
          _objc_release(lVar1);
          lVar12 = lVar12 + 1;
        } while (lVar3 != lVar12);
        param_4 = auStack_e8;
        lVar3 = lVar2;
        puVar10 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar3 != 0);
    }
    _objc_release(lVar2);
    puVar9 = (undefined1 *)puVar10;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  _objc_retain(param_4);
  puVar6 = param_3;
  func_0x00010be44320();
  if (((ulong)puVar6 & 1) == 0) {
    func_0x00010be3c000();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 != (undefined1 *)0x0) {
      puVar7 = param_3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010010fab4();
      puVar6 = puVar7;
      if ((int)puVar8 == 0) {
        puVar6 = (undefined1 *)0x0;
      }
      _objc_retain(puVar6);
      _objc_release(puVar7);
      _objc_release(param_3);
      if (puVar6 == (undefined1 *)0x0) {
        param_3 = (undefined1 *)0x0;
      }
      else {
        param_3 = puVar7;
        func_0x00010c230560(puVar7);
        _objc_release(puVar7);
      }
    }
  }
  else {
    param_3 = (undefined1 *)0x1;
  }
  _objc_release(param_4);
  _objc_release(puVar9);
  return param_3;
}



/* Entry: 105d06fc4; end: 105d070b7; -[SCStickerInjectorBase shouldFilterCTPItem:presentationModelProvider:] */

ulong FUN_105d06fc4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010be44320();
  if ((uVar1 & 1) == 0) {
    func_0x00010be3c000();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 != 0) {
      uVar2 = param_1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010010fab4();
      uVar1 = uVar2;
      if ((int)uVar3 == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar2);
      _objc_release(param_1);
      if (uVar1 == 0) {
        param_1 = 0;
      }
      else {
        param_1 = uVar2;
        func_0x00010c230560(uVar2);
        _objc_release(uVar2);
      }
    }
  }
  else {
    param_1 = 1;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105d070b8; end: 105d0717b; -[SCStickerInjectorBase tappableElementActionForItemInstance:] */

void FUN_105d070b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010be3bfe0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010010fab4();
    lVar1 = lVar2;
    if ((int)lVar3 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lVar2);
    _objc_release(param_1);
    if (lVar1 == 0) {
      param_1 = 0;
    }
    else {
      param_1 = lVar2;
      func_0x00010c269860(lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105d0717c; end: 105d07237; -[SCStickerInjectorBase tappableElementTypeForItemInstance:] */

long FUN_105d0717c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010be3bfe0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010010fab4();
    lVar1 = lVar2;
    if ((int)lVar3 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lVar2);
    _objc_release(param_1);
    if (lVar1 == 0) {
      param_1 = 0;
    }
    else {
      param_1 = lVar2;
      func_0x00010c269900(lVar2);
      _objc_release(lVar2);
    }
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105d07238; end: 105d07303; -[SCStickerInjectorBase shouldShowMenuForCTItemInstance:mediaType:] */

long FUN_105d07238(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010be3bfe0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 != 0) {
      lVar1 = param_1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010010fab4();
      lVar3 = lVar1;
      if ((int)lVar2 == 0) {
        lVar3 = 0;
      }
      _objc_retain(lVar3);
      _objc_release(lVar1);
      _objc_release(param_1);
      if (lVar3 != 0) {
        lVar3 = lVar1;
        func_0x00010c233bc0(lVar1);
        _objc_release(lVar1);
        goto LAB_105d072e4;
      }
    }
  }
  lVar3 = 0;
LAB_105d072e4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105d07304; end: 105d0741f; -[SCStickerInjectorBase menuActionsForCTItemInstance:actionHandler:] */

void FUN_105d07304(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_4);
  if (param_3 != 0) {
    func_0x00010be3bfe0();
    _objc_retainAutoreleasedReturnValue();
    if (param_1 == 0) goto LAB_105d073dc;
    lVar2 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010010fab4();
    lVar1 = lVar2;
    if ((int)lVar3 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lVar2);
    _objc_release(param_1);
    if (lVar1 != 0) {
      puVar4 = auStack_38;
      _objc_loadWeakRetained(puVar4);
      param_1 = lVar2;
      func_0x00010c0ca900(lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(lVar2);
      goto LAB_105d073dc;
    }
  }
  param_1 = 0;
LAB_105d073dc:
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 105d07420; end: 105d074db; -[SCStickerInjectorBase shouldDisplayValdiEditingViewForItemInstance:] */

long FUN_105d07420(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010be3bfe0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010010fab4();
    lVar1 = lVar2;
    if ((int)lVar3 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lVar2);
    _objc_release(param_1);
    if (lVar1 == 0) {
      param_1 = 0;
    }
    else {
      param_1 = lVar2;
      func_0x00010c22fe40(lVar2);
      _objc_release(lVar2);
    }
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105d074dc; end: 105d0753b; -[SCStickerInjectorBase _isInjectorRegisteredForCTPType:] */

bool FUN_105d074dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  return lVar2 != 0;
}



/* Entry: 105d0753c; end: 105d079d3; -[SCStickerInjectorBase _mapConfig:] */

ulong FUN_105d0753c(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 auStack_270 [16];
  undefined1 auStack_1f0 [128];
  undefined8 auStack_170 [16];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar10 = &uStack_370;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf5cd60(param_3);
  lVar12 = *(long *)(param_1 + 0x10);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(lVar12,param_2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = lVar12 != 0;
  _objc_release();
  _objc_release(puVar3);
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  plStack_2a0 = (long *)0x0;
  uVar4 = param_3;
  func_0x00010c255220();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf52a60();
  if (uVar5 != 0) {
    lVar12 = *plStack_2a0;
    do {
      uVar13 = 0;
      do {
        if (*plStack_2a0 != lVar12) {
          _objc_enumerationMutation(uVar4);
        }
        lVar6 = *(long *)(param_1 + 0x18);
        func_0x00010c0e00e0(lVar6,param_2,*(undefined8 *)(lStack_2a8 + uVar13 * 8));
        _objc_retainAutoreleasedReturnValue();
        bVar1 = (bool)(bVar1 | lVar6 != 0);
        _objc_release();
        uVar13 = uVar13 + 1;
      } while (uVar5 != uVar13);
      uVar5 = uVar4;
      func_0x00010bf52a60(uVar4,param_2,&uStack_2b0,auStack_f0,0x10);
    } while (uVar5 != 0);
  }
  _objc_release(uVar4);
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  lStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  plStack_2e0 = (long *)0x0;
  uVar4 = param_3;
  func_0x00010c2465e0();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = &uStack_2f0;
  puVar8 = auStack_170;
  uVar5 = uVar4;
  func_0x00010bf52a60();
  if (uVar5 != 0) {
    lVar12 = *plStack_2e0;
    do {
      uVar13 = 0;
      do {
        if (*plStack_2e0 != lVar12) {
          _objc_enumerationMutation(uVar4);
        }
        lVar6 = *(long *)(param_1 + 0x20);
        func_0x00010c0e00e0(lVar6,param_2,*(undefined8 *)(lStack_2e8 + uVar13 * 8));
        _objc_retainAutoreleasedReturnValue();
        bVar1 = (bool)(bVar1 | lVar6 != 0);
        _objc_release();
        uVar13 = uVar13 + 1;
      } while (uVar5 != uVar13);
      puVar9 = &uStack_2f0;
      puVar8 = auStack_170;
      uVar5 = uVar4;
      func_0x00010bf52a60(uVar4,param_2,puVar9,puVar8,0x10);
    } while (uVar5 != 0);
  }
  _objc_release(uVar4);
  if (!bVar1) {
    uVar4 = param_3;
    func_0x00010bf5d9a0(param_3);
    if (*(long *)(param_1 + 0x10) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      *(undefined **)(param_1 + 0x10) = puVar3;
      _objc_release(uVar11);
    }
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar11,param_2,puVar3,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar3);
    if (*(long *)(param_1 + 0x18) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      uVar11 = *(undefined8 *)(param_1 + 0x18);
      *(undefined **)(param_1 + 0x18) = puVar3;
      _objc_release(uVar11);
    }
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
    lStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    plStack_320 = (long *)0x0;
    uVar2 = param_3;
    func_0x00010c255220();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bf52a60();
    if (uVar5 != 0) {
      lVar12 = *plStack_320;
      do {
        uVar13 = 0;
        do {
          if (*plStack_320 != lVar12) {
            _objc_enumerationMutation(uVar2);
          }
          uVar11 = *(undefined8 *)(lStack_328 + uVar13 * 8);
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x18),param_2,puVar3,uVar11);
          _objc_release(puVar3);
          uVar13 = uVar13 + 1;
        } while (uVar5 != uVar13);
        uVar5 = uVar2;
        func_0x00010bf52a60(uVar2,param_2,&uStack_330,auStack_1f0,0x10);
      } while (uVar5 != 0);
    }
    _objc_release(uVar2);
    if (*(long *)(param_1 + 0x20) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_opt_new();
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      *(undefined **)(param_1 + 0x20) = puVar3;
      _objc_release(uVar11);
    }
    uStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    lStack_368 = 0;
    uStack_370 = 0;
    uStack_358 = 0;
    plStack_360 = (long *)0x0;
    uVar2 = param_3;
    func_0x00010c2465e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = auStack_270;
    uVar5 = uVar2;
    func_0x00010bf52a60();
    if (uVar5 != 0) {
      lVar12 = *plStack_360;
      do {
        uVar13 = 0;
        do {
          if (*plStack_360 != lVar12) {
            _objc_enumerationMutation(uVar2);
          }
          uVar11 = *(undefined8 *)(lStack_368 + uVar13 * 8);
          puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,puVar3,uVar11);
          _objc_release(puVar3);
          uVar13 = uVar13 + 1;
        } while (uVar5 != uVar13);
        puVar8 = auStack_270;
        uVar5 = uVar2;
        puVar10 = &uStack_370;
        func_0x00010bf52a60(uVar2,param_2,&uStack_370,puVar8,0x10);
      } while (uVar5 != 0);
    }
    _objc_release(uVar2);
    puVar9 = puVar10;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_3;
  }
  ___stack_chk_fail();
  if (puVar8 != (undefined8 *)0x0) {
    func_0x00010c2827c0(puVar8);
    return (ulong)(puVar9 == puVar8);
  }
  return 1;
}



/* Entry: 105d079d4; end: 105d07a0b; -[SCStickerInjectorBase _isExpectedType:expectedTypeNum:typeString:] */

bool FUN_105d079d4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  if (param_4 != 0) {
    func_0x00010c2827c0(param_4);
    return param_3 == param_4;
  }
  return true;
}



/* Entry: 105d07a0c; end: 105d07a6b; -[SCStickerInjectorBase _isExpectedCTPEntityType:] */

undefined8 FUN_105d07a0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf9c1a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be403a0(param_1,param_2,param_3,uVar1,&PTR____CFConstantStringClassReference_110e28a78
                     );
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105d07a6c; end: 105d07adb; -[SCStickerInjectorBase _isExpectedCTItemInstanceType:] */

undefined8 FUN_105d07a6c(undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 9;
  if (param_3 != 7 && param_3 != 0x18) {
    lVar1 = (long)param_3;
  }
  uVar2 = param_1;
  func_0x00010bf9c180();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be403a0(param_1,param_2,lVar1,uVar2,&PTR____CFConstantStringClassReference_110e28a98);
  _objc_release(uVar2);
  return param_1;
}



/* Entry: 105d07adc; end: 105d07b3b; -[SCStickerInjectorBase _isExpectedStickerType:] */

undefined8 FUN_105d07adc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf9c3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be403a0(param_1,param_2,param_3,uVar1,&PTR____CFConstantStringClassReference_110e11bf8
                     );
  _objc_release(uVar1);
  return param_1;
}


