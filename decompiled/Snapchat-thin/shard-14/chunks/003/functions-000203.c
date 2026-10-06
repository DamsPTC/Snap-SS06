/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0c4d74; end: 10b0c4fcf; -[SCLens2DBitmojiMegapackDownloadOperation executeWithSettings:] */

void FUN_10b0c4d74(long param_1,undefined1 *param_2,long param_3,undefined8 param_4,
                  undefined *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **unaff_x25;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  ppuVar7 = &puStack_a0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == 0) {
    func_0x00010bfafea0(param_1);
  }
  else {
    lVar1 = param_1;
    func_0x00010bf1bd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (lVar1 == 0) {
      uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_60 = &PTR____CFConstantStringClassReference_110f5dd18;
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      param_5 = puVar5;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar5);
      func_0x00010bfafea0(param_1);
      _objc_release(puVar6);
    }
    else {
      _objc_initWeak(auStack_70,param_1);
      lVar1 = param_1;
      func_0x00010bf1bd00();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010bf0af00();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_10b0c4fd0;
      puStack_88 = &UNK_110cb8a70;
      param_2 = auStack_70;
      _objc_copyWeak(auStack_78,param_2);
      _objc_retain(param_3);
      lVar4 = lVar1;
      lStack_80 = param_3;
      func_0x00010bfa54e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1964c0(param_1);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(lStack_80);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_70);
      param_5 = (undefined *)ppuVar7;
      unaff_x25 = &puStack_a0;
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x25 + 0x28));
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume();
  _objc_retain(param_2);
  _objc_retain(param_5);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    func_0x00010c114600(param_3);
  }
  _objc_release(param_3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0c4fd0; end: 10b0c5053;  */

void FUN_10b0c4fd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_2);
  _objc_retain(param_5);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c114600(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0c5054; end: 10b0c50f7; -[SCLens2DBitmojiMegapackDownloadOperation boostWithSettings:] */

void FUN_10b0c5054(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf96560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010bf1bd00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf96560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f780(lVar1,param_2,param_1,param_3);
    _objc_release(param_1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0c50f8; end: 10b0c527f; -[SCLens2DBitmojiMegapackDownloadOperation processBitmojiListResponse:cached:inputSettings:error:] */

undefined *
FUN_10b0c50f8(undefined8 param_1,undefined8 param_2,undefined *param_3,uint param_4,long param_5,
             undefined *param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar6 = param_3;
  func_0x00010bf529e0();
  puVar2 = param_3;
  if ((((param_6 != (undefined *)0x0) || ((param_4 & 1) != 0)) || (puVar6 == (undefined *)0x0)) &&
     (((puVar6 = param_3, func_0x00010bf529e0(), param_6 != (undefined *)0x0 || (param_4 == 0)) ||
      (puVar6 == (undefined *)0x0)))) {
    lVar1 = param_5;
    func_0x00010bfa9580();
    puVar6 = PTR__OBJC_CLASS___NSError_1126ae858;
    if ((param_6 != (undefined *)0x0) || (lVar1 != 1)) {
      if (param_6 == (undefined *)0x0) {
        uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        ppuStack_50 = &PTR____CFConstantStringClassReference_110f5dd18;
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_50,&uStack_58
                            ,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240(puVar6,param_2,&PTR____CFConstantStringClassReference_110f5de18,0,puVar2
                           );
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        param_6 = puVar6;
      }
      puVar2 = param_6;
      func_0x00010bfafea0(param_1,param_2,param_6,param_5);
      _objc_release(param_6);
      goto LAB_10b0c5184;
    }
    puVar2 = (undefined *)0x0;
  }
  func_0x00010bfaff00(param_1,param_2,puVar2,param_5);
LAB_10b0c5184:
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_retain(puVar2);
    if (param_3 == puVar2) {
      puVar6 = (undefined *)0x1;
    }
    else {
      puVar6 = param_3;
      _objc_opt_class(param_3);
      puVar3 = puVar2;
      func_0x00010c077980(puVar2,param_2,puVar6);
      if ((int)puVar3 == 0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        puVar3 = puVar2;
        func_0x00010bf0af00(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0af00(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = param_3;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        func_0x00010c071ae0(puVar4,param_2,puVar5);
        _objc_release(puVar5);
        _objc_release(param_3);
        _objc_release(puVar4);
        _objc_release(puVar3);
      }
    }
    _objc_release(puVar2);
    return puVar6;
  }
  return param_3;
}



/* Entry: 10b0c5280; end: 10b0c536b; -[SCLens2DBitmojiMegapackDownloadOperation isEqual:] */

long FUN_10b0c5280(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    lVar4 = 1;
  }
  else {
    lVar4 = param_1;
    _objc_opt_class(param_1);
    lVar1 = param_3;
    func_0x00010c077980(param_3,param_2,lVar4);
    if ((int)lVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar1 = param_3;
      func_0x00010bf0af00(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0af00(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c071ae0(lVar2,param_2,lVar3);
      _objc_release(lVar3);
      _objc_release(param_1);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b0c536c; end: 10b0c53c7; -[SCLens2DBitmojiMegapackDownloadOperation hash] */

undefined8 FUN_10b0c536c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf933c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b0c53c8; end: 10b0c53d7; -[SCLens2DBitmojiMegapackDownloadOperation bitmojiListManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0c53c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278ce30);
}



/* Entry: 10b0c53d8; end: 10b0c5417; -[SCLens2DBitmojiMegapackDownloadOperation setBitmojiListManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c53d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278ce30;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0c5418; end: 10b0c542b; -[SCLens2DBitmojiMegapackDownloadOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c5418(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278ce30,0);
  return;
}



/* Entry: 10b0c542c; end: 10b0c54f3; -[SCLensBitmojiDynamicAssetDownloadOperation initWithLens:requestTiming:asset:bitmojiAssetDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b0c542c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112705940;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithLens_requestTiming_asset_112541980,param_3,param_4,
                      param_5);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11278ce34;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278ce38);
    *(undefined **)((long)puVar1 + (long)_DAT_11278ce38) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0c54f4; end: 10b0c579f; -[SCLensBitmojiDynamicAssetDownloadOperation executeWithSettings:] */

void FUN_10b0c54f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    func_0x00010bfafea0(param_1);
  }
  _objc_initWeak(auStack_80,param_1);
  uVar1 = param_1;
  func_0x00010bf1aa80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bf0af00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010c08fb40(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf9c720();
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10b0c57a0;
  puStack_90 = &UNK_1108cfa68;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_b0,auStack_80);
  _objc_retain(param_3);
  uVar10 = uVar1;
  func_0x00010bfa53e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1964c0(param_1);
  _objc_release(uVar10);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0c57a0; end: 10b0c588f;  */

void FUN_10b0c57a0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c117a20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0c5890; end: 10b0c5933; -[SCLensBitmojiDynamicAssetDownloadOperation boostWithSettings:] */

void FUN_10b0c5890(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf96560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010bf1aa80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf96560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f780(lVar1,param_2,param_1,param_3);
    _objc_release(param_1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0c5934; end: 10b0c5963; -[SCLensBitmojiDynamicAssetDownloadOperation progressObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c5934(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278ce38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0c5964; end: 10b0c5973; -[SCLensBitmojiDynamicAssetDownloadOperation bitmojiAssetDataFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0c5964(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278ce34);
}



/* Entry: 10b0c5974; end: 10b0c59b3; -[SCLensBitmojiDynamicAssetDownloadOperation setBitmojiAssetDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c5974(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278ce34;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0c59b4; end: 10b0c59c3; -[SCLensBitmojiDynamicAssetDownloadOperation progressSubject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0c59b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278ce38);
}



/* Entry: 10b0c59c4; end: 10b0c5a03; -[SCLensBitmojiDynamicAssetDownloadOperation setProgressSubject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c59c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278ce38;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0c5a04; end: 10b0c5a43; -[SCLensBitmojiDynamicAssetDownloadOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c5a04(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278ce38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278ce34,0);
  return;
}



/* Entry: 10b0c5a44; end: 10b0c5ba7; -[SCLensDeviceDependentRemoteAssetDownloadOperation initWithLens:requestTiming:asset:assetFetchType:contentDataFetcher:assetLensResourceResolver:lensRemoteAssetLogger:resourceDownloadLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b0c5a44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_112705948;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithLens_requestTiming_asset_112541980,param_3,param_4,
                      param_5);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11278ce3c;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11278ce40;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11278ce44;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11278ce48;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278ce4c) = param_6;
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278ce50);
    *(undefined **)((long)puVar1 + (long)_DAT_11278ce50) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0c5ba8; end: 10b0c5d17; -[SCLensDeviceDependentRemoteAssetDownloadOperation executeWithSettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c5ba8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  if (param_4 == 0) {
    func_0x00010bfafea0(param_2);
  }
  else {
    func_0x00010bf0b180(*(undefined8 *)(param_2 + _DAT_11278ce44));
    _CACurrentMediaTime();
    _objc_initWeak(auStack_58,param_2);
    uVar2 = *(undefined8 *)(param_2 + _DAT_11278ce40);
    lVar1 = param_2;
    func_0x00010bf0af00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fb40(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retain(param_4);
    uStack_60 = param_1;
    func_0x00010c096840(uVar2);
    _objc_release(param_2);
    _objc_release(lVar1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 10b0c5d18; end: 10b0c5da3;  */

void FUN_10b0c5d18(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if ((param_2 == 0) || (param_3 != 0)) {
      func_0x00010bfafea0(lVar1);
    }
    else {
      func_0x00010be2b4e0(*(undefined8 *)(param_1 + 0x30),lVar1);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0c5da4; end: 10b0c5fef; -[SCLensDeviceDependentRemoteAssetDownloadOperation _handleLensResourceLoaded:settings:startTime:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c5da4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_80,param_2);
  lVar1 = param_2;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar5 = *(undefined8 *)(param_2 + _DAT_11278ce3c);
  lVar1 = param_2;
  func_0x00010c08fb40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa2fa0();
  lVar3 = param_2;
  func_0x00010c08fb40(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf9c720();
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10b0c5ff0;
  puStack_90 = &UNK_1108cfa68;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_copyWeak(auStack_b8,auStack_80);
  uStack_b0 = param_1;
  _objc_retain(lVar2);
  _objc_retain(param_5);
  func_0x00010bfa5e20(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1964c0(param_2);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_88);
  _objc_release(lVar2);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10b0c5ff0; end: 10b0c6047;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c5ff0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11278ce50));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0c6048; end: 10b0c6163;  */

void FUN_10b0c6048(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 in_x6;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(in_x6);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar4 = param_2;
    func_0x00010bfcaaa0();
    if (lVar4 == 0) {
      lVar4 = param_2;
      func_0x00010bfc5880(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar4 = 0;
    }
    func_0x00010be527a0(*(undefined8 *)(param_1 + 0x38),lVar1);
    lVar2 = lVar1;
    func_0x00010bf0af00(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf38a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be80b60(lVar1);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar4);
  }
  _objc_release(lVar1);
  _objc_release(in_x6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0c6164; end: 10b0c621b; -[SCLensDeviceDependentRemoteAssetDownloadOperation boostWithSettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c6164(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf96560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11278ce3c);
    lVar1 = param_1;
    func_0x00010bf96560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fb40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bfa2fa0();
    func_0x00010bf1f7a0(uVar3,param_2,lVar1,param_3,lVar2);
    _objc_release(param_1);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0c621c; end: 10b0c624b; -[SCLensDeviceDependentRemoteAssetDownloadOperation progressObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c621c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278ce50);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0c624c; end: 10b0c638f; -[SCLensDeviceDependentRemoteAssetDownloadOperation _processDataFetcherResponseContentPath:checksum:cached:inputSettings:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c624c(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined *param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_6;
  puVar6 = param_7;
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((param_3 == (undefined *)0x0) || (param_7 != (undefined *)0x0)) {
    lVar1 = param_6;
    func_0x00010bfa9580();
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    if ((param_7 != (undefined *)0x0) || (lVar1 != 1)) {
      if (param_7 == (undefined *)0x0) {
        uStack_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        ppuStack_40 = &PTR____CFConstantStringClassReference_110e75378;
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&uStack_48
                            ,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240(puVar3,param_2,&PTR____CFConstantStringClassReference_110f5dd38,0,puVar2
                           );
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        param_7 = puVar3;
      }
      param_3 = param_7;
      func_0x00010bfafea0(param_1,param_2,param_7,param_6);
      _objc_release(param_7);
      goto LAB_10b0c6358;
    }
    param_3 = (undefined *)0x0;
  }
  func_0x00010bfaff00(param_1,param_2,param_3,param_6);
LAB_10b0c6358:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    uVar7 = *(undefined8 *)(param_6 + _DAT_11278ce48);
    _objc_retain(param_3);
    lVar1 = param_6;
    func_0x00010bf0af00(param_6);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_6;
    func_0x00010c08fb40(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a94c0(uVar7,param_2,lVar1,lVar4,param_3,*(undefined8 *)(param_6 + _DAT_11278ce4c),
                        puVar6,lVar5);
    _objc_release(param_3);
    _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b0c6390; end: 10b0c6447; -[SCLensDeviceDependentRemoteAssetDownloadOperation _logDownloadFinishedWithStartTime:contentResult:requestingLensId:downloadSize:cached:statusCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c6390(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_11278ce48);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf0af00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08fb40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a94c0(uVar3,param_2,lVar1,lVar2,param_3,*(undefined8 *)(param_1 + _DAT_11278ce4c),
                      param_7,param_6);
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0c6448; end: 10b0c659f; -[SCLensDeviceDependentRemoteAssetDownloadOperation isEqual:] */

bool FUN_10b0c6448(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    lVar2 = param_1;
    _objc_opt_class(param_1);
    lVar3 = param_3;
    func_0x00010c077980(param_3,param_2,lVar2);
    if ((int)lVar3 == 0) {
      bVar1 = false;
    }
    else {
      _objc_retain(param_3);
      lVar2 = param_3;
      func_0x00010bf0af00();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010bf0af00(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar3;
      func_0x00010c071ae0(lVar3,param_2,lVar5);
      if ((int)lVar6 == 0) {
        bVar1 = false;
      }
      else {
        func_0x00010c08fb40(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = param_1;
        func_0x00010bfa2fa0();
        lVar7 = param_3;
        func_0x00010c08fb40(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010bfa2fa0();
        bVar1 = lVar6 == lVar8;
        _objc_release(lVar7);
        _objc_release(param_1);
      }
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(param_3);
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b0c65a0; end: 10b0c665f; -[SCLensDeviceDependentRemoteAssetDownloadOperation hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c65a0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfde980();
  uStack_48 = uVar3;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfa2fa0();
  uStack_40 = uVar3;
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = &uStack_48;
  func_0x000107c3191c(puVar4,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong((long)puVar4 + (long)_DAT_11278ce50,0);
  _objc_storeStrong((long)puVar4 + (long)_DAT_11278ce48,0);
  _objc_storeStrong((long)puVar4 + (long)_DAT_11278ce44,0);
  _objc_storeStrong((long)puVar4 + (long)_DAT_11278ce3c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)((long)puVar4 + (long)_DAT_11278ce40,0);
  return;
}



/* Entry: 10b0c6660; end: 10b0c66cf; -[SCLensDeviceDependentRemoteAssetDownloadOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c6660(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278ce50,0);
  _objc_storeStrong(param_1 + _DAT_11278ce48,0);
  _objc_storeStrong(param_1 + _DAT_11278ce44,0);
  _objc_storeStrong(param_1 + _DAT_11278ce3c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278ce40,0);
  return;
}



/* Entry: 10b0c66d0; end: 10b0c687b; -[SCLensDynamicRemoteAssetDownloadOperation initWithLens:requestTiming:asset:assetFetchType:contentDataFetcher:blobDataFetcher:lensRemoteAssetLogger:resourceDownloadLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b0c66d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_112705950;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithLens_requestTiming_asset_112541980,param_3,param_4,
                      param_5);
  if (puVar1 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_11278ce54;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_7;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11278ce58;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_8;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11278ce5c;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_9;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11278ce60;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_10;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278ce64);
    *(undefined1 **)((long)puVar1 + (long)_DAT_11278ce64) = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278ce68) = 1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278ce6c) = param_6;
    puVar5 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278ce70);
    *(undefined **)((long)puVar1 + (long)_DAT_11278ce70) = puVar5;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0c687c; end: 10b0c6ceb; -[SCLensDynamicRemoteAssetDownloadOperation executeWithSettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c687c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 auStack_118 [8];
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  if (param_4 == 0) {
    func_0x00010bfafea0(param_2);
  }
  else {
    lVar2 = param_2;
    func_0x00010bdcf9a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0b180(*(undefined8 *)(param_2 + _DAT_11278ce5c));
    _CACurrentMediaTime();
    _objc_initWeak(auStack_80,param_2);
    lVar3 = param_2;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf93ec0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar3);
    if (lVar4 == 0) {
      lVar3 = param_2;
      func_0x00010bf4c1c0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_2;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_2;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa2fa0();
      lVar8 = param_2;
      func_0x00010c08fb40(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bf9c720();
      _objc_retainAutoreleasedReturnValue();
      puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_100 = 0xc2000000;
      pcStack_f8 = FUN_10b0c6e54;
      puStack_f0 = &UNK_1108cfa68;
      puVar12 = auStack_e8;
      _objc_copyWeak(puVar12,auStack_80);
      puVar13 = auStack_118;
      _objc_copyWeak(puVar13,auStack_80);
      uStack_110 = param_1;
      _objc_retain(param_4);
      lVar10 = lVar3;
      func_0x00010bfa5e20(lVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1964c0(param_2);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar4);
      _objc_release(lVar3);
      lVar3 = param_4;
    }
    else {
      uVar11 = *(undefined8 *)(param_2 + _DAT_11278ce58);
      lVar3 = param_2;
      func_0x00010bf0af00();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_2;
      func_0x00010bf0af00();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c28f340();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_2;
      func_0x00010bf0af00(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bf93ec0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_2;
      func_0x00010bf0af00(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar10;
      func_0x00010bf93e80();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      pcStack_98 = FUN_10b0c6cec;
      puStack_90 = &UNK_1108cfa68;
      puVar12 = auStack_88;
      _objc_copyWeak(puVar12,auStack_80);
      puStack_e0 = puVar1;
      uStack_d8 = 0xc2000000;
      pcStack_d0 = FUN_10b0c6d44;
      puStack_c8 = &UNK_110cb8b00;
      puVar13 = auStack_b8;
      _objc_copyWeak(puVar13,auStack_80);
      uStack_b0 = param_1;
      _objc_retain(param_4);
      lStack_c0 = param_4;
      func_0x00010bfa55e0(uVar11);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1964c0(param_2);
      _objc_release(uVar11);
      _objc_release(lVar5);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar4);
      _objc_release(lVar3);
      lVar3 = lStack_c0;
    }
    _objc_release(lVar3);
    _objc_destroyWeak(puVar13);
    _objc_destroyWeak(puVar12);
    _objc_destroyWeak(auStack_80);
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 10b0c6cec; end: 10b0c6d43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c6cec(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11278ce70));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0c6d44; end: 10b0c6e53;  */

void FUN_10b0c6d44(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_6);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c252f60(PTR_PTR_1126df9b0);
    if ((param_6 == 0) && (lVar2 = param_2, func_0x00010c08fa60(), lVar2 != 0)) {
      func_0x00010be52780(*(undefined8 *)(param_1 + 0x30),lVar1);
      func_0x00010bfaff00(lVar1);
    }
    else {
      func_0x00010be52780(*(undefined8 *)(param_1 + 0x30),lVar1);
      func_0x00010bfafea0(lVar1);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0c6e54; end: 10b0c6ec3;  */

void FUN_10b0c6e54(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c117a20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0c6ec4; end: 10b0c6fd7;  */

void FUN_10b0c6ec4(long param_1,long param_2)

{
  long lVar1;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010bfcaaa0();
    if (lVar2 == 0) {
      lVar2 = param_2;
      func_0x00010bfc5880(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar2 = 0;
    }
    func_0x00010be52780(*(undefined8 *)(param_1 + 0x30),lVar1);
    func_0x00010be80b80(lVar1);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(in_x6);
  _objc_release(in_x5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0c6fd8; end: 10b0c709f; -[SCLensDynamicRemoteAssetDownloadOperation boostWithSettings:] */

void FUN_10b0c6fd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf96560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010bf4c1c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf96560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fb40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bfa2fa0();
    func_0x00010bf1f7a0(lVar1,param_2,lVar2,param_3,lVar3);
    _objc_release(param_1);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0c70a0; end: 10b0c70cf; -[SCLensDynamicRemoteAssetDownloadOperation progressObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c70a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278ce70);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0c70d0; end: 10b0c7167; -[SCLensDynamicRemoteAssetDownloadOperation _assetResource] */

void FUN_10b0c70d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126de6c8;
  _objc_alloc(PTR_PTR_1126de6c8);
  uVar2 = param_1;
  func_0x00010bf0b680(param_1);
  func_0x00010bf0b840(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0558e0(puVar1,param_2,uVar2,uVar3,0,0,0);
  _objc_release(uVar3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0c7168; end: 10b0c72bb; -[SCLensDynamicRemoteAssetDownloadOperation _processDataFetcherResponseContentPath:checksum:resourceType:cached:cacheKey:inputSettings:error:] */

void FUN_10b0c7168(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long in_x7;
  undefined *in_stack_00000000;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(in_x7);
  _objc_retain(in_stack_00000000);
  if ((param_3 == 0) || (in_stack_00000000 != (undefined *)0x0)) {
    lVar1 = in_x7;
    func_0x00010bfa9580();
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    if ((in_stack_00000000 != (undefined *)0x0) || (lVar1 != 1)) {
      if (in_stack_00000000 == (undefined *)0x0) {
        uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        ppuStack_50 = &PTR____CFConstantStringClassReference_110e75378;
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_50,&uStack_58
                            ,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240(puVar3,param_2,&PTR____CFConstantStringClassReference_110f5de18,0,puVar2
                           );
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        in_stack_00000000 = puVar3;
      }
      func_0x00010bfafea0(param_1,param_2,in_stack_00000000,in_x7);
      _objc_release(in_stack_00000000);
      goto LAB_10b0c7280;
    }
    param_3 = 0;
  }
  func_0x00010bfaff00(param_1,param_2,param_3,in_x7);
LAB_10b0c7280:
  _objc_release(in_x7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar3 = PTR_PTR_1126bb928;
    func_0x00010bf0b940(PTR_PTR_1126bb928);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010b256a70();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c094240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 10b0c72bc; end: 10b0c7347; -[SCLensDynamicRemoteAssetDownloadOperation processContentVerificationError:withChecksum:] */

void FUN_10b0c72bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126bb928;
  func_0x00010bf0b940(PTR_PTR_1126bb928);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010b256a70();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c094240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b0c7348; end: 10b0c73ff; -[SCLensDynamicRemoteAssetDownloadOperation _logDownloadFinishedWithStartTime:contentResult:downloadSize:cached:statusCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c7348(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_11278ce60);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf0af00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08fb40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a94c0(uVar3,param_2,lVar1,lVar2,param_3,*(undefined8 *)(param_1 + _DAT_11278ce6c),
                      param_6,param_5);
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0c7400; end: 10b0c751f; -[SCLensDynamicRemoteAssetDownloadOperation isEqual:] */

bool FUN_10b0c7400(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    lVar2 = param_1;
    _objc_opt_class(param_1);
    lVar3 = param_3;
    func_0x00010c077980(param_3,param_2,lVar2);
    if ((int)lVar3 == 0) {
      bVar1 = false;
    }
    else {
      _objc_retain(param_3);
      lVar2 = param_3;
      func_0x00010bf0b840();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bf0b840(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c071ae0(lVar2,param_2,lVar3);
      if ((int)lVar4 == 0) {
        bVar1 = false;
      }
      else {
        func_0x00010c08fb40(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_1;
        func_0x00010bfa2fa0();
        lVar5 = param_3;
        func_0x00010c08fb40(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bfa2fa0();
        bVar1 = lVar4 == lVar6;
        _objc_release(lVar5);
        _objc_release(param_1);
      }
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(param_3);
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b0c7520; end: 10b0c75bf; -[SCLensDynamicRemoteAssetDownloadOperation hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b0c7520(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010bf0b840();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfde980();
  uStack_38 = uVar2;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfa2fa0();
  uStack_30 = uVar2;
  _objc_release(param_1);
  _objc_release(uVar1);
  puVar3 = &uStack_38;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  return *(undefined8 **)((long)puVar3 + (long)_DAT_11278ce54);
}



/* Entry: 10b0c75c0; end: 10b0c75cf; -[SCLensDynamicRemoteAssetDownloadOperation contentDataFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0c75c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278ce54);
}



/* Entry: 10b0c75d0; end: 10b0c760f; -[SCLensDynamicRemoteAssetDownloadOperation setContentDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c75d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278ce54;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0c7610; end: 10b0c761f; -[SCLensDynamicRemoteAssetDownloadOperation assetURLAccordingResourceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0c7610(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278ce64);
}



/* Entry: 10b0c7620; end: 10b0c765f; -[SCLensDynamicRemoteAssetDownloadOperation setAssetURLAccordingResourceType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c7620(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278ce64;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0c7660; end: 10b0c766f; -[SCLensDynamicRemoteAssetDownloadOperation assetResourceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0c7660(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278ce68);
}



/* Entry: 10b0c7670; end: 10b0c767f; -[SCLensDynamicRemoteAssetDownloadOperation setAssetResourceType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c7670(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11278ce68) = param_3;
  return;
}



/* Entry: 10b0c7680; end: 10b0c768f; -[SCLensDynamicRemoteAssetDownloadOperation assetFetchType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0c7680(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278ce6c);
}



/* Entry: 10b0c7690; end: 10b0c769f; -[SCLensDynamicRemoteAssetDownloadOperation setAssetFetchType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c7690(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11278ce6c) = param_3;
  return;
}



/* Entry: 10b0c76a0; end: 10b0c76af; -[SCLensDynamicRemoteAssetDownloadOperation progressSubject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0c76a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278ce70);
}



/* Entry: 10b0c76b0; end: 10b0c76ef; -[SCLensDynamicRemoteAssetDownloadOperation setProgressSubject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c76b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278ce70;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0c76f0; end: 10b0c776f; -[SCLensDynamicRemoteAssetDownloadOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c76f0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278ce70,0);
  _objc_storeStrong(param_1 + _DAT_11278ce64,0);
  _objc_storeStrong(param_1 + _DAT_11278ce54,0);
  _objc_storeStrong(param_1 + _DAT_11278ce58,0);
  _objc_storeStrong(param_1 + _DAT_11278ce60,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278ce5c,0);
  return;
}



/* Entry: 10b0c7770; end: 10b0c7a5f; -[SCLensRemoteAssetDownloadOperation initWithLens:requestTiming:asset:assetFetchType:contentDataFetcher:lensRemoteAssetLogger:resourceDownloadLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b0c7770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_112705958;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithLens_requestTiming_asset_112541980,param_3,param_4,
                      param_5);
  if (puVar1 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_11278ce74;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_7;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11278ce78;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_8;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11278ce7c;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_9;
    _objc_release(uVar2);
    puVar7 = (undefined1 *)puVar1;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_11278ce80;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined1 **)((long)puVar1 + lVar6) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar7);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278ce84) = 4;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278ce88) = param_6;
    puVar7 = (undefined1 *)puVar1;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar7;
    func_0x00010c09ac20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    if (puVar3 == (undefined1 *)0x0) {
LAB_10b0c7950:
      puVar7 = (undefined1 *)puVar1;
      func_0x00010bf0af00();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar7;
      func_0x00010bf38a80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar7);
      if (puVar5 != (undefined1 *)0x0) {
        puVar7 = (undefined1 *)puVar1;
        func_0x00010bf0af00();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar7;
        func_0x00010bf38a80();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278ce8c);
        *(undefined1 **)((long)puVar1 + (long)_DAT_11278ce8c) = puVar5;
        _objc_release(uVar2);
        goto LAB_10b0c79b8;
      }
    }
    else {
      puVar7 = puVar3;
      func_0x00010bf38a80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
      if (puVar7 == (undefined1 *)0x0) goto LAB_10b0c7950;
      puVar7 = puVar3;
      func_0x00010c28f340(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
      *(undefined **)((long)puVar1 + lVar6) = puVar4;
      _objc_release(uVar2);
      _objc_release(puVar7);
      puVar5 = puVar3;
      func_0x00010bf38a80();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = *(undefined1 **)((long)puVar1 + (long)_DAT_11278ce8c);
      *(undefined1 **)((long)puVar1 + (long)_DAT_11278ce8c) = puVar5;
LAB_10b0c79b8:
      _objc_release(puVar7);
    }
    if ((*(long *)((long)puVar1 + lVar6) == 0) ||
       (*(long *)((long)puVar1 + (long)_DAT_11278ce8c) == 0)) {
      _objc_release(puVar3);
      puVar7 = (undefined1 *)0x0;
      goto LAB_10b0c7a1c;
    }
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278ce90);
    *(undefined **)((long)puVar1 + (long)_DAT_11278ce90) = puVar4;
    _objc_release(uVar2);
    _objc_release(puVar3);
  }
  _objc_retain(puVar1);
  puVar7 = (undefined1 *)puVar1;
LAB_10b0c7a1c:
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(puVar1);
  return puVar7;
}



/* Entry: 10b0c7a60; end: 10b0c7b1b; -[SCLensRemoteAssetDownloadOperation assetResource] */

void FUN_10b0c7a60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126de6c8;
  _objc_alloc(PTR_PTR_1126de6c8);
  uVar2 = param_1;
  func_0x00010bf0b680(param_1);
  uVar3 = param_1;
  func_0x00010bf0b840(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0afa0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0558e0(puVar1,param_2,uVar2,uVar4,param_1,0,0);
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b0c7b1c; end: 10b0c7d9b; -[SCLensRemoteAssetDownloadOperation executeWithSettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c7b1c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  if (param_4 == 0) {
    func_0x00010bfafea0(param_2);
  }
  else {
    lVar1 = param_2;
    func_0x00010bf0b660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0b180(*(undefined8 *)(param_2 + _DAT_11278ce78));
    _CACurrentMediaTime();
    _objc_initWeak(auStack_80,param_2);
    lVar2 = param_2;
    func_0x00010bf4c1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2;
    func_0x00010c08fb40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa2fa0();
    lVar6 = param_2;
    func_0x00010c08fb40(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf9c720();
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_10b0c7d9c;
    puStack_90 = &UNK_1108cfa68;
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_copyWeak(auStack_b8,auStack_80);
    uStack_b0 = param_1;
    _objc_retain(param_4);
    lVar8 = lVar2;
    func_0x00010bfa5e20(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1964c0(param_2);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 10b0c7d9c; end: 10b0c7e0b;  */

void FUN_10b0c7d9c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c117a20(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0c7e0c; end: 10b0c7f27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c7e0c(long param_1,long param_2)

{
  long lVar1;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010bfcaaa0();
    if (lVar2 == 0) {
      lVar2 = param_2;
      func_0x00010bfc5880(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar2 = 0;
    }
    func_0x00010be52780(*(undefined8 *)(param_1 + 0x30),lVar1);
    func_0x00010c114800(lVar1);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(in_x6);
  _objc_release(in_x5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0c7f28; end: 10b0c7fef; -[SCLensRemoteAssetDownloadOperation boostWithSettings:] */

void FUN_10b0c7f28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf96560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010bf4c1c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf96560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fb40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bfa2fa0();
    func_0x00010bf1f7a0(lVar1,param_2,lVar2,param_3,lVar3);
    _objc_release(param_1);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0c7ff0; end: 10b0c801f; -[SCLensRemoteAssetDownloadOperation progressObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c7ff0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278ce90);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0c8020; end: 10b0c8173; -[SCLensRemoteAssetDownloadOperation processDataFetcherResponseContentPath:checksum:resourceType:cached:cacheKey:inputSettings:error:] */

void FUN_10b0c8020(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long in_x7;
  undefined *in_stack_00000000;
  undefined8 uStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(in_x7);
  _objc_retain(in_stack_00000000);
  if ((param_3 == 0) || (in_stack_00000000 != (undefined *)0x0)) {
    lVar1 = in_x7;
    func_0x00010bfa9580();
    puVar3 = PTR__OBJC_CLASS___NSError_1126ae858;
    if ((in_stack_00000000 != (undefined *)0x0) || (lVar1 != 1)) {
      if (in_stack_00000000 == (undefined *)0x0) {
        uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        ppuStack_50 = &PTR____CFConstantStringClassReference_110e75378;
        puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_50,&uStack_58
                            ,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240(puVar3,param_2,&PTR____CFConstantStringClassReference_110f5de18,0,puVar2
                           );
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
        in_stack_00000000 = puVar3;
      }
      func_0x00010bfafea0(param_1,param_2,in_stack_00000000,in_x7);
      _objc_release(in_stack_00000000);
      goto LAB_10b0c8138;
    }
    param_3 = 0;
  }
  func_0x00010bfaff00(param_1,param_2,param_3,in_x7);
LAB_10b0c8138:
  _objc_release(in_x7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar3 = PTR_PTR_1126bb928;
    func_0x00010bf0b940(PTR_PTR_1126bb928);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    func_0x00010b256a70();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c094240();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 10b0c8174; end: 10b0c81ff; -[SCLensRemoteAssetDownloadOperation processContentVerificationError:withChecksum:] */

void FUN_10b0c8174(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126bb928;
  func_0x00010bf0b940(PTR_PTR_1126bb928);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010b256a70();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c094240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b0c8200; end: 10b0c82b7; -[SCLensRemoteAssetDownloadOperation _logDownloadFinishedWithStartTime:contentResult:downloadSize:cached:statusCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c8200(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_11278ce7c);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf0af00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08fb40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a94c0(uVar3,param_2,lVar1,lVar2,param_3,*(undefined8 *)(param_1 + _DAT_11278ce88),
                      param_6,param_5);
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0c82b8; end: 10b0c83d7; -[SCLensRemoteAssetDownloadOperation isEqual:] */

bool FUN_10b0c82b8(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    lVar2 = param_1;
    _objc_opt_class(param_1);
    lVar3 = param_3;
    func_0x00010c077980(param_3,param_2,lVar2);
    if ((int)lVar3 == 0) {
      bVar1 = false;
    }
    else {
      _objc_retain(param_3);
      lVar2 = param_3;
      func_0x00010bf0b840();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bf0b840(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c071ae0(lVar2,param_2,lVar3);
      if ((int)lVar4 == 0) {
        bVar1 = false;
      }
      else {
        func_0x00010c08fb40(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_1;
        func_0x00010bfa2fa0();
        lVar5 = param_3;
        func_0x00010c08fb40(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010bfa2fa0();
        bVar1 = lVar4 == lVar6;
        _objc_release(lVar5);
        _objc_release(param_1);
      }
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(param_3);
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b0c83d8; end: 10b0c8477; -[SCLensRemoteAssetDownloadOperation hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b0c83d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010bf0b840();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfde980();
  uStack_38 = uVar2;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfa2fa0();
  uStack_30 = uVar2;
  _objc_release(param_1);
  _objc_release(uVar1);
  puVar3 = &uStack_38;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  return *(undefined8 **)((long)puVar3 + (long)_DAT_11278ce74);
}



/* Entry: 10b0c8478; end: 10b0c8487; -[SCLensRemoteAssetDownloadOperation contentDataFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0c8478(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278ce74);
}



/* Entry: 10b0c8488; end: 10b0c84c7; -[SCLensRemoteAssetDownloadOperation setContentDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c8488(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278ce74;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0c84c8; end: 10b0c84d7; -[SCLensRemoteAssetDownloadOperation assetURLAccordingResourceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0c84c8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278ce80);
}



/* Entry: 10b0c84d8; end: 10b0c8517; -[SCLensRemoteAssetDownloadOperation setAssetURLAccordingResourceType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c84d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278ce80;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0c8518; end: 10b0c8527; -[SCLensRemoteAssetDownloadOperation assetChecksum] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0c8518(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278ce8c);
}



/* Entry: 10b0c8528; end: 10b0c8567; -[SCLensRemoteAssetDownloadOperation setAssetChecksum:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c8528(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278ce8c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0c8568; end: 10b0c8577; -[SCLensRemoteAssetDownloadOperation assetResourceType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0c8568(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278ce84);
}



/* Entry: 10b0c8578; end: 10b0c8587; -[SCLensRemoteAssetDownloadOperation setAssetResourceType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c8578(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11278ce84) = param_3;
  return;
}



/* Entry: 10b0c8588; end: 10b0c8597; -[SCLensRemoteAssetDownloadOperation assetFetchType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0c8588(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278ce88);
}



/* Entry: 10b0c8598; end: 10b0c85a7; -[SCLensRemoteAssetDownloadOperation setAssetFetchType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c8598(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11278ce88) = param_3;
  return;
}



/* Entry: 10b0c85a8; end: 10b0c85b7; -[SCLensRemoteAssetDownloadOperation progressSubject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0c85a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278ce90);
}



/* Entry: 10b0c85b8; end: 10b0c85f7; -[SCLensRemoteAssetDownloadOperation setProgressSubject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c85b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278ce90;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0c85f8; end: 10b0c8677; -[SCLensRemoteAssetDownloadOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c85f8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278ce90,0);
  _objc_storeStrong(param_1 + _DAT_11278ce8c,0);
  _objc_storeStrong(param_1 + _DAT_11278ce80,0);
  _objc_storeStrong(param_1 + _DAT_11278ce74,0);
  _objc_storeStrong(param_1 + _DAT_11278ce7c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278ce78,0);
  return;
}



/* Entry: 10b0c8678; end: 10b0c87ab; -[SCLensUserGeneratedRemoteAssetV2DownloadOperation initWithLens:requestTiming:asset:assetFetchType:contentManagerBlobDataFetcher:lensRemoteAssetLogger:resourceDownloadLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b0c8678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_112705960;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithLens_requestTiming_asset_112541980,param_3,param_4,
                      param_5);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11278ce94;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11278ce98;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278ce9c) = param_6;
    lVar4 = (long)_DAT_11278cea0;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278cea4);
    *(undefined **)((long)puVar1 + (long)_DAT_11278cea4) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0c87ac; end: 10b0c8a2f; -[SCLensUserGeneratedRemoteAssetV2DownloadOperation executeWithSettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c87ac(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    func_0x00010bfafea0(param_1);
  }
  else {
    func_0x00010bf0b180(*(undefined8 *)(param_1 + _DAT_11278ce98));
    _objc_initWeak(auStack_78,param_1);
    uVar9 = *(undefined8 *)(param_1 + _DAT_11278ce94);
    lVar1 = param_1;
    func_0x00010bf0af00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bf0af00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c28f340();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_1;
    func_0x00010bf0af00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf93ec0();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_1;
    func_0x00010bf0af00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf93e80();
    _objc_retainAutoreleasedReturnValue();
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_10b0c8a30;
    puStack_88 = &UNK_1108cfa68;
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_copyWeak(auStack_a8,auStack_78);
    _objc_retain(param_3);
    func_0x00010bfa55e0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1964c0(param_1);
    _objc_release(uVar9);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b0c8a30; end: 10b0c8a87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c8a30(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11278cea4));
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0c8a88; end: 10b0c8b63;  */

void FUN_10b0c8a88(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_6);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c252f60(PTR_PTR_1126df9b0);
    func_0x00010be52760(param_1);
    if ((param_6 == 0) && (lVar1 = param_2, func_0x00010c08fa60(), lVar1 != 0)) {
      func_0x00010bfaff00(param_1);
    }
    else {
      func_0x00010bfafea0(param_1);
    }
  }
  _objc_release(param_1);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0c8b64; end: 10b0c8c1b; -[SCLensUserGeneratedRemoteAssetV2DownloadOperation _logDownloadFinishedWithContentResult:cached:statusCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c8b64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + _DAT_11278cea0);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf0af00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c08fb40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a94c0(uVar3,param_2,lVar1,lVar2,param_3,*(undefined8 *)(param_1 + _DAT_11278ce9c),
                      param_5,param_4);
  _objc_release(param_3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0c8c1c; end: 10b0c8caf; -[SCLensUserGeneratedRemoteAssetV2DownloadOperation boostWithSettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c8c1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf96560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11278ce94);
    func_0x00010bf96560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1f780(uVar3,param_2,param_1,param_3);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0c8cb0; end: 10b0c8cdf; -[SCLensUserGeneratedRemoteAssetV2DownloadOperation progressObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c8cb0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278cea4);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0c8ce0; end: 10b0c8dcb; -[SCLensUserGeneratedRemoteAssetV2DownloadOperation isEqual:] */

long FUN_10b0c8ce0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    lVar4 = 1;
  }
  else {
    lVar4 = param_1;
    _objc_opt_class(param_1);
    lVar1 = param_3;
    func_0x00010c077980(param_3,param_2,lVar4);
    if ((int)lVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar1 = param_3;
      func_0x00010bf0af00(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0af00(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c071ae0(lVar2,param_2,lVar3);
      _objc_release(lVar3);
      _objc_release(param_1);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10b0c8dcc; end: 10b0c8e27; -[SCLensUserGeneratedRemoteAssetV2DownloadOperation hash] */

undefined8 FUN_10b0c8dcc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b0c8e28; end: 10b0c8e87; -[SCLensUserGeneratedRemoteAssetV2DownloadOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c8e28(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278cea4,0);
  _objc_storeStrong(param_1 + _DAT_11278cea0,0);
  _objc_storeStrong(param_1 + _DAT_11278ce94,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278ce98,0);
  return;
}



/* Entry: 10b0c8e88; end: 10b0c8f1b; -[SCLensAssetDownloadOperation initWithLens:requestTiming:asset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b0c8e88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_112705968;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithLens_requestTiming__1125419e0,param_3,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11278cea8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0c8f1c; end: 10b0c902b; -[SCLensAssetDownloadOperation finishWithSuccess:settings:] */

void FUN_10b0c8f1c(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112705968;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_finishWithSuccess_settings__1125c9968,param_3,param_4);
  lVar2 = param_1;
  func_0x00010bf0af00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c136b80();
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar3 == 6) {
    _objc_retain(param_3);
    _objc_opt_class(puVar4);
    uVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    uVar1 = param_3;
    if ((uVar5 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    puVar4 = PTR_PTR_1126ae6a8;
    if (uVar1 != 0) {
      func_0x00010bf0af00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf26be0(puVar4);
      _objc_release(param_1);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b0c902c; end: 10b0c903b; -[SCLensAssetDownloadOperation asset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0c902c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278cea8);
}



/* Entry: 10b0c903c; end: 10b0c904f; -[SCLensAssetDownloadOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c903c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278cea8,0);
  return;
}



/* Entry: 10b0c9050; end: 10b0c922b; -[SCLensContentDownloadOperation initWithLens:requestTiming:contentDataFetcher:contentValidator:lensPreferences:lensDownloadLogger:lensResourceDownloadLogger:lensResourceResolver:userInitiated:fetchType:migrationEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10b0c9050(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
             undefined8 param_13,undefined1 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_112705970;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithLens_requestTiming__1125419e0,param_3,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11278ceb0;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11278ceb4;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11278ceb8;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278cebc) = param_11;
    lVar4 = (long)_DAT_11278cec0;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11278cec4;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11278cec8;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_10;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278cecc) = param_13;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11278ced0) = param_14;
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11278ced4);
    *(undefined **)((long)puVar1 + (long)_DAT_11278ced4) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return puVar1;
}



/* Entry: 10b0c922c; end: 10b0c94bf; -[SCLensContentDownloadOperation executeWithSettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c922c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    func_0x00010bfafea0(param_1);
  }
  else {
    lVar1 = param_1;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf4cf00();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 == 0) {
      lVar1 = param_3;
      func_0x00010bfa9580();
      if (lVar1 == 1) {
        _objc_initWeak(auStack_58,param_1);
        uVar4 = *(undefined8 *)(param_1 + _DAT_11278cec8);
        lVar1 = param_1;
        func_0x00010c08fb40(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010c13b280();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08fb40(param_1);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_1;
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c096860(uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_60,auStack_58);
        _objc_retain(param_3);
        func_0x00010c297260(uVar4);
        _objc_release(uVar4);
        _objc_release(lVar3);
        _objc_release(param_1);
        _objc_release(lVar2);
        _objc_release(lVar1);
        _objc_release(param_3);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_58);
        goto LAB_10b0c9478;
      }
      lVar1 = param_1;
      func_0x00010c08fb40(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c13b280();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf6a160();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      func_0x00010be13a60(param_1);
    }
    else {
      lVar3 = param_1;
      func_0x00010c08fb40(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar3;
      func_0x00010bf4cf00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfaff00(param_1);
      _objc_release(lVar1);
    }
    _objc_release(lVar3);
  }
LAB_10b0c9478:
  _objc_release(param_3);
  return;
}



/* Entry: 10b0c94c0; end: 10b0c9513;  */

void FUN_10b0c94c0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be13a60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b0c9514; end: 10b0c95db; -[SCLensContentDownloadOperation boostWithSettings:] */

void FUN_10b0c9514(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf96560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar1 = param_1;
    func_0x00010bf4c1c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf96560(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fb40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010bfa2fa0();
    func_0x00010bf1f7a0(lVar1,param_2,lVar2,param_3,lVar3);
    _objc_release(param_1);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


