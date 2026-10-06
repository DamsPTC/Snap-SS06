/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b0c95dc; end: 10b0c9693; -[SCLensContentDownloadOperation finishWithResult:] */

void FUN_10b0c95dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126ae6a8;
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c13cc60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c08fb40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf26520(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puStack_48 = PTR_PTR_112705970;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_finishWithResult__1125c9960,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0c9694; end: 10b0c96c3; -[SCLensContentDownloadOperation progressObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c9694(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278ced4);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b0c96c4; end: 10b0c9aab; -[SCLensContentDownloadOperation _fetchResource:settings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c96c4(undefined8 param_1,ulong param_2,undefined1 *param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined **ppuStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010bf38a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010be9edc0(param_2);
    func_0x00010bfafea0(param_2);
  }
  else {
    uVar2 = param_2;
    func_0x00010bf4dca0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_4;
    func_0x00010bdc3360(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_4;
    func_0x00010bf38a80(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c06bf20();
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_release(uVar2);
    puVar11 = PTR__OBJC_CLASS___NSError_1126ae858;
    if ((uVar4 & 1) == 0) {
      uStack_90 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_88 = &PTR____CFConstantStringClassReference_110f5dd98;
      puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      func_0x00010bfafea0(param_2);
      _objc_release(puVar11);
    }
    else {
      _CACurrentMediaTime();
      *(undefined8 *)(param_2 + (long)_DAT_11278ceac) = param_1;
      _objc_initWeak(auStack_98,param_2);
      uVar2 = param_2;
      func_0x00010bf4c1c0();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_2;
      func_0x00010c08fb40(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_2;
      func_0x00010c08fb40(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa2fa0();
      uVar7 = param_2;
      func_0x00010c08fb40(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010bf9c720();
      _objc_retainAutoreleasedReturnValue();
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      pcStack_b0 = FUN_10b0c9aac;
      puStack_a8 = &UNK_1108cfa68;
      _objc_copyWeak(auStack_a0,auStack_98);
      param_3 = auStack_98;
      _objc_copyWeak(auStack_c8,param_3);
      _objc_retain(param_4);
      _objc_retain(param_5);
      uVar9 = uVar2;
      func_0x00010bfa5e20(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1964c0(param_2);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_release(param_5);
      _objc_release(param_4);
      _objc_destroyWeak(auStack_c8);
      _objc_destroyWeak(auStack_a0);
      _objc_destroyWeak(auStack_98);
    }
  }
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
  __Unwind_Resume();
  _objc_retain(param_3);
  param_4 = param_4 + 0x20;
  _objc_loadWeakRetained();
  if (param_4 != 0) {
    lVar1 = param_4;
    func_0x00010c117a20(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0c9aac; end: 10b0c9b1b;  */

void FUN_10b0c9aac(long param_1,undefined8 param_2)

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



/* Entry: 10b0c9b1c; end: 10b0c9bfb;  */

void FUN_10b0c9b1c(long param_1,undefined8 param_2)

{
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  
  _objc_retain(param_2);
  _objc_retain(in_x5);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be80ba0(param_1);
  }
  _objc_release(param_1);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(in_x5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0c9bfc; end: 10b0ca0f3; -[SCLensContentDownloadOperation _processDataFetcherResponseForResource:contentResult:resourceType:cached:cacheKey:downloadSize:inputSettings:error:boltContentId:statusCode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0c9bfc(ulong param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined *param_10,undefined8 param_11)

{
  undefined **ppuVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong unaff_x26;
  undefined8 uVar13;
  ulong unaff_x28;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  ulong uStack_160;
  undefined *puStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined *puStack_140;
  ulong uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  undefined *puStack_118;
  undefined1 *puStack_110;
  code *pcStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined **ppuStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined **ppuStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_f8 = param_8;
  uStack_f0 = param_5;
  _objc_retain(param_3);
  puStack_d8 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  uStack_e8 = param_11;
  _objc_retain(param_11);
  _objc_initWeak(auStack_88,param_1);
  puVar12 = puStack_d8;
  func_0x00010bfcaaa0();
  if (puVar12 == (undefined *)0x0) {
    puVar12 = puStack_d8;
    func_0x00010bfc5880();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = (ulong)(puVar12 != (undefined *)0x0);
  }
  else {
    uVar10 = 0;
    puVar12 = (undefined *)0x0;
  }
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_10b0ca0f4;
  puStack_b8 = &UNK_110cb8bf0;
  iVar9 = (int)auStack_88;
  _objc_copyWeak(auStack_90);
  _objc_retain(puVar12);
  puStack_b0 = puVar12;
  _objc_retain(param_9);
  lStack_a8 = param_9;
  _objc_retain(param_3);
  puStack_a0 = param_3;
  _objc_retain(param_7);
  ppuVar1 = &puStack_d0;
  uStack_98 = param_7;
  _objc_retainBlock();
  ppuStack_e0 = ppuVar1;
  if (*(char *)(param_1 + (long)_DAT_11278ced0) == '\x01') {
    unaff_x26 = *(ulong *)(param_1 + (long)_DAT_11278cec0);
    unaff_x28 = param_1;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c072920(param_3);
    func_0x00010c0ae5e0(unaff_x26);
    _objc_release(unaff_x28);
  }
  puVar5 = param_3;
  if (((param_10 == (undefined *)0x0) && ((param_6 & 1) == 0)) && (puVar12 != (undefined *)0x0)) {
    uVar13 = *(undefined8 *)(param_1 + (long)_DAT_11278cec4);
    uVar2 = param_1;
    func_0x00010c08fb40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaaf80(param_1);
    func_0x00010c292920(param_1);
    func_0x00010c0a94e0(uVar13);
    _objc_release(uVar2);
    param_6 = param_1;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    unaff_x26 = param_6;
    func_0x00010c080040();
    _objc_release(param_6);
    if ((int)unaff_x26 != 0) {
      param_6 = param_1;
      func_0x00010c095f60();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_1;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x26 = uVar2;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c181b60(param_6);
      _objc_release(unaff_x26);
      _objc_release(uVar2);
      _objc_release(param_6);
    }
    func_0x00010bee87c0(param_1);
  }
  else if ((param_10 == (undefined *)0x0) && (((uint)param_6 & (uint)uVar10) != 0)) {
    func_0x00010c298720(param_1);
  }
  else {
    lVar3 = param_9;
    func_0x00010bfa9580();
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    if ((param_10 != (undefined *)0x0) || (lVar3 != 1)) {
      if (param_10 == (undefined *)0x0) {
        uStack_80 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        ppuStack_78 = &PTR____CFConstantStringClassReference_110e75378;
        puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf99240();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar4);
        param_10 = puVar5;
      }
      puVar5 = param_10;
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar5;
      func_0x00010c0720c0();
      _objc_release(puVar5);
      if ((int)puVar4 != 0) {
        func_0x00010c114760(param_1);
      }
      unaff_x28 = *(ulong *)(param_1 + (long)_DAT_11278cec4);
      param_6 = param_1;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x26 = param_1;
      func_0x00010bfaaf80();
      func_0x00010c292920(param_1);
      func_0x00010c0a94e0(unaff_x28);
      _objc_release(param_6);
      puVar5 = param_10;
      func_0x00010bfafea0(param_1);
      goto LAB_10b0c9eec;
    }
    puVar5 = puVar12;
    func_0x00010bfaff00(param_1);
  }
  param_10 = (undefined *)0x0;
LAB_10b0c9eec:
  _objc_release(ppuStack_e0);
  _objc_release(uStack_98);
  _objc_release(puStack_a0);
  _objc_release(lStack_a8);
  _objc_release(puStack_b0);
  _objc_destroyWeak(auStack_90);
  _objc_release(puVar12);
  _objc_destroyWeak(auStack_88);
  _objc_release(uStack_e8);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(puStack_d8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  puVar4 = param_3;
  __Unwind_Resume();
  lStack_130 = param_9;
  pcStack_108 = FUN_10b0ca0f4;
  uStack_160 = unaff_x28;
  puStack_158 = param_10;
  uStack_150 = unaff_x26;
  uStack_148 = param_1;
  puStack_140 = puVar12;
  uStack_138 = param_6;
  uStack_128 = param_7;
  uStack_120 = uVar10;
  puStack_118 = param_3;
  puStack_110 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  puVar12 = puVar4 + 0x40;
  _objc_loadWeakRetained();
  if (puVar12 != (undefined *)0x0) {
    if (iVar9 == 0) {
      _objc_initWeak(auStack_168,puVar12);
      puVar6 = puVar12;
      func_0x00010bf4c1c0(puVar12);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
      uVar13 = *(undefined8 *)(puVar4 + 0x30);
      func_0x00010bdc3360(uVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(puVar4 + 0x30);
      func_0x00010bf38a80(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80(*(undefined8 *)(puVar4 + 0x30));
      _objc_copyWeak(auStack_170,auStack_168);
      _objc_retain(puVar5);
      uVar11 = *(undefined8 *)(puVar4 + 0x28);
      _objc_retain(uVar11);
      func_0x00010c12b9c0(puVar6);
      _objc_release(uVar8);
      _objc_release(puVar7);
      _objc_release(uVar13);
      _objc_release(puVar6);
      _objc_release(uVar11);
      _objc_release(puVar5);
      _objc_destroyWeak(auStack_170);
      _objc_destroyWeak(auStack_168);
    }
    else {
      func_0x00010bfaff00(puVar12);
    }
  }
  _objc_release(puVar12);
  _objc_release(puVar5);
  return;
}



/* Entry: 10b0ca0f4; end: 10b0ca2c7;  */

void FUN_10b0ca0f4(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_2 == 0) {
      _objc_initWeak(auStack_68,lVar1);
      lVar2 = lVar1;
      func_0x00010bf4c1c0(lVar1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bdc3360(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bf38a80(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c27dd80(*(undefined8 *)(param_1 + 0x30));
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(param_3);
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar6);
      func_0x00010c12b9c0(lVar2);
      _objc_release(uVar5);
      _objc_release(puVar4);
      _objc_release(uVar3);
      _objc_release(lVar2);
      _objc_release(uVar6);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
    }
    else {
      func_0x00010bfaff00(lVar1);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0ca2c8; end: 10b0ca303;  */

void FUN_10b0ca2c8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bfafea0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0ca304; end: 10b0ca54f; -[SCLensContentDownloadOperation _verifySignatureForContentResource:contentPath:resourceType:completion:] */

void FUN_10b0ca304(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_5 - 3U < 2) {
    if (param_6 == (undefined *)0x0) goto LAB_10b0ca4f8;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10b0ca550;
    puStack_60 = &UNK_110849530;
    _objc_retain(param_6);
    puStack_58 = param_6;
    func_0x000107c312d0("APPSTORE",&puStack_78);
    puVar1 = puStack_58;
  }
  else {
    puVar1 = PTR_PTR_1126b7fb8;
    func_0x00010bf384c0();
    if (((ulong)puVar1 & 1) != 0) goto LAB_10b0ca4f8;
    puVar1 = PTR_PTR_1126df9c8;
    _objc_alloc(PTR_PTR_1126df9c8);
    uVar2 = param_1;
    func_0x00010c08fb40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c003580(puVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_initWeak(auStack_80,param_1);
    func_0x00010bf4dca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010bf4cf00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(param_3);
    _objc_retain(param_6);
    func_0x00010c298ae0(param_1);
    _objc_release(puVar4);
    _objc_release(param_1);
    _objc_release(param_6);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
  }
  _objc_release(puVar1);
LAB_10b0ca4f8:
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0ca550; end: 10b0ca563;  */

void FUN_10b0ca550(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b0ca560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1,0);
  return;
}



/* Entry: 10b0ca564; end: 10b0ca5db;  */

void FUN_10b0ca564(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_4);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  if ((param_2 & 1) == 0) {
    func_0x00010c114760(lVar1);
  }
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_2,param_4);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b0ca5dc; end: 10b0ca69f; -[SCLensContentDownloadOperation processContentVerificationError:resource:] */

void FUN_10b0ca5dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126bb928;
  _objc_retain(param_4);
  func_0x00010c296be0(puVar1);
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
  func_0x00010be9edc0(param_1,param_2,&PTR____CFConstantStringClassReference_110f5ddb8,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b0ca6a0; end: 10b0ca873; -[SCLensContentDownloadOperation verifyContentForResource:contentPath:resourceType:completion:] */

void FUN_10b0ca6a0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 auStack_80 [8];
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010c23c2c0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar1 == 0) || (_objc_release(), param_5 - 3U < 2)) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10b0ca874;
    puStack_50 = &UNK_110849530;
    _objc_retain(param_6);
    uStack_48 = param_6;
    func_0x000107c312d0("APPSTORE",&puStack_68);
    _objc_release(uStack_48);
  }
  else {
    _objc_initWeak(auStack_70,param_1);
    func_0x00010bf4dca0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_70);
    _objc_retain(param_3);
    _objc_retain(param_4);
    lStack_78 = param_5;
    _objc_retain(param_6);
    func_0x00010c2986e0(param_1);
    _objc_release(param_1);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_70);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b0ca874; end: 10b0ca887;  */

void FUN_10b0ca874(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b0ca884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1,0);
  return;
}



/* Entry: 10b0ca888; end: 10b0ca913;  */

void FUN_10b0ca888(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  uVar3 = 0;
  if (param_3 == 0) {
    uVar3 = (uint)param_2;
  }
  if (((uVar3 & 1) == 0) && (lVar1 != 0)) {
    func_0x00010bee87c0(lVar1);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x30);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2,param_3);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0ca914; end: 10b0cab47; -[SCLensContentDownloadOperation _sendCustomEvent:resource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0ca914(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_3);
  puVar1 = param_4;
  func_0x00010c27dd80();
  func_0x00010b72dca4();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puStack_68 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar2 = param_4;
  func_0x00010bdc3360();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = param_4;
  func_0x00010bf38a80();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar6 = param_4;
  func_0x00010c23c2c0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 == (undefined *)0x0) {
    puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar8,param_2,&PTR____CFConstantStringClassReference_110df4998);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
  }
  else {
    func_0x00010c14de00(puVar8,param_2,&PTR____CFConstantStringClassReference_110df4998);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar6);
  if (puVar4 == (undefined *)0x0) {
    _objc_release(puVar5);
  }
  _objc_release(puVar4);
  if (puVar2 == (undefined *)0x0) {
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
  if (puVar1 == (undefined *)0x0) {
    _objc_release(puStack_68);
  }
  _objc_release(puVar1);
  uVar9 = *(undefined8 *)(param_1 + _DAT_11278cec0);
  func_0x00010c08fb40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a43a0(uVar9,param_2,param_1,param_3,puVar8);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b0cab48; end: 10b0cad2b; -[SCLensContentDownloadOperation isEqual:] */

bool FUN_10b0cab48(long param_1,undefined8 param_2,long param_3)

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
      lVar2 = param_1;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c13b280();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf5fe00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar2);
      lVar2 = param_3;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c13b280();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010bf5fe00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(lVar2);
      lVar2 = lVar5;
      func_0x00010c27dd80();
      lVar3 = lVar4;
      func_0x00010c27dd80();
      if (lVar2 == lVar3) {
        lVar2 = lVar5;
        func_0x00010bdc3360();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar4;
        func_0x00010bdc3360(lVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar2;
        func_0x00010c071ae0(lVar2,param_2,lVar3);
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
        _objc_release(lVar3);
        _objc_release(lVar2);
      }
      else {
        bVar1 = false;
      }
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(param_3);
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b0cad2c; end: 10b0cae7f; -[SCLensContentDownloadOperation hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b0cad2c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  puVar9 = &uStack_70;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c13b280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5fe00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bdc3360();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfde980();
  uVar6 = param_1;
  uStack_70 = uVar5;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010c13b280();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010bf5fe00();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c27dd80();
  uStack_68 = uVar8;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010bfa2fa0();
  uStack_60 = uVar8;
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x000107c3191c(&uStack_70,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar9;
  }
  ___stack_chk_fail();
  return (undefined8 *)*(undefined1 **)((long)puVar9 + (long)_DAT_11278ceb0);
}



/* Entry: 10b0cae80; end: 10b0cae8f; -[SCLensContentDownloadOperation contentDataFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0cae80(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278ceb0);
}



/* Entry: 10b0cae90; end: 10b0caecf; -[SCLensContentDownloadOperation setContentDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0cae90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278ceb0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0caed0; end: 10b0caedf; -[SCLensContentDownloadOperation contentValidator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0caed0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278ceb4);
}



/* Entry: 10b0caee0; end: 10b0caf1f; -[SCLensContentDownloadOperation setContentValidator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0caee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278ceb4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0caf20; end: 10b0caf2f; -[SCLensContentDownloadOperation lensPreferences] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0caf20(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278ceb8);
}



/* Entry: 10b0caf30; end: 10b0caf6f; -[SCLensContentDownloadOperation setLensPreferences:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0caf30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278ceb8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0caf70; end: 10b0caf7f; -[SCLensContentDownloadOperation lensDownloadLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0caf70(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278cec0);
}



/* Entry: 10b0caf80; end: 10b0cafbf; -[SCLensContentDownloadOperation setLensDownloadLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0caf80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278cec0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0cafc0; end: 10b0cafcf; -[SCLensContentDownloadOperation lensResourceDownloadLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0cafc0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278cec4);
}



/* Entry: 10b0cafd0; end: 10b0cb00f; -[SCLensContentDownloadOperation setLensResourceDownloadLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0cafd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278cec4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0cb010; end: 10b0cb01f; -[SCLensContentDownloadOperation lensResourceResolver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0cb010(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278cec8);
}



/* Entry: 10b0cb020; end: 10b0cb05f; -[SCLensContentDownloadOperation setLensResourceResolver:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0cb020(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278cec8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0cb060; end: 10b0cb06f; -[SCLensContentDownloadOperation userInitiated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b0cb060(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278cebc);
}



/* Entry: 10b0cb070; end: 10b0cb07f; -[SCLensContentDownloadOperation setUserInitiated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0cb070(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11278cebc) = param_3;
  return;
}



/* Entry: 10b0cb080; end: 10b0cb08f; -[SCLensContentDownloadOperation fetchType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0cb080(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278cecc);
}



/* Entry: 10b0cb090; end: 10b0cb09f; -[SCLensContentDownloadOperation setFetchType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0cb090(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11278cecc) = param_3;
  return;
}



/* Entry: 10b0cb0a0; end: 10b0cb0af; -[SCLensContentDownloadOperation progressSubject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0cb0a0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278ced4);
}



/* Entry: 10b0cb0b0; end: 10b0cb0ef; -[SCLensContentDownloadOperation setProgressSubject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0cb0b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278ced4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0cb0f0; end: 10b0cb0ff; -[SCLensContentDownloadOperation migrationEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b0cb0f0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278ced0);
}



/* Entry: 10b0cb100; end: 10b0cb10f; -[SCLensContentDownloadOperation setMigrationEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0cb100(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11278ced0) = param_3;
  return;
}



/* Entry: 10b0cb110; end: 10b0cb19f; -[SCLensContentDownloadOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0cb110(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278ced4,0);
  _objc_storeStrong(param_1 + _DAT_11278cec8,0);
  _objc_storeStrong(param_1 + _DAT_11278cec4,0);
  _objc_storeStrong(param_1 + _DAT_11278cec0,0);
  _objc_storeStrong(param_1 + _DAT_11278ceb8,0);
  _objc_storeStrong(param_1 + _DAT_11278ceb4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278ceb0,0);
  return;
}



/* Entry: 10b0cb1a0; end: 10b0cb24b; -[SCLensExternalContentDownloadOperation initWithLens:externalContentDataFetcher:requestTiming:fetchType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b0cb1a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_112705978;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithLens_requestTiming__1125419e0,param_3,param_5);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11278ced8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278cedc) = param_6;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0cb24c; end: 10b0cb463; -[SCLensExternalContentDownloadOperation executeWithSettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0cb24c(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    func_0x00010bfafea0(param_1);
  }
  else {
    puVar1 = param_1;
    func_0x00010c08fb40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c072d20();
    _objc_release(puVar1);
    if ((int)puVar3 == 0) {
      puVar1 = param_1;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      lVar4 = (long)_DAT_11278ced8;
      uVar2 = *(ulong *)(param_1 + lVar4);
      func_0x00010bf2ca00();
      if ((uVar2 & 1) == 0) {
        func_0x00010bf9dfe0(PTR_PTR_1126ae6a8);
        puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfaff00(param_1);
      }
      else {
        puVar3 = *(undefined **)(param_1 + lVar4);
        func_0x00010bfa69c0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar3 == (undefined *)0x0) {
          func_0x00010bfafea0(param_1);
        }
        else {
          _objc_initWeak(auStack_38,param_1);
          _objc_copyWeak(auStack_40,auStack_38);
          _objc_retain(param_3);
          _objc_retain(puVar1);
          func_0x00010c297260(puVar3);
          _objc_release(puVar1);
          _objc_release(param_3);
          _objc_destroyWeak(auStack_40);
          _objc_destroyWeak(auStack_38);
        }
      }
      _objc_release(puVar3);
      _objc_release(puVar1);
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfaff00(param_1);
    }
    _objc_release(puVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b0cb464; end: 10b0cb4fb;  */

void FUN_10b0cb464(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == 0) {
    func_0x00010bf9dfe0(PTR_PTR_1126ae6a8);
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfaff00();
  }
  else {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010bfafea0();
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0cb4fc; end: 10b0cb4ff; -[SCLensExternalContentDownloadOperation boostWithSettings:] */

void FUN_10b0cb4fc(void)

{
  return;
}



/* Entry: 10b0cb500; end: 10b0cb5b3; -[SCLensExternalContentDownloadOperation isEqual:] */

long FUN_10b0cb500(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    lVar2 = 1;
  }
  else {
    lVar2 = param_1;
    _objc_opt_class(param_1);
    lVar1 = param_3;
    func_0x00010c077980(param_3,param_2,lVar2);
    if ((int)lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar1 = param_3;
      func_0x00010c08fb40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fb40(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c071ae0(lVar1,param_2,param_1);
      _objc_release(param_1);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_3);
  return lVar2;
}



/* Entry: 10b0cb5b4; end: 10b0cb63f; -[SCLensExternalContentDownloadOperation hash] */

ulong FUN_10b0cb5b4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfde980();
  _objc_release(uVar2);
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfde980();
  uVar2 = uVar2 | uVar1 << 0x20;
  _objc_release(param_1);
  uVar2 = ~uVar2 + uVar2 * 0x40000;
  uVar2 = (uVar2 ^ uVar2 >> 0x1f) * 0x15;
  uVar2 = (uVar2 ^ uVar2 >> 0xb) * 0x41;
  return uVar2 ^ uVar2 >> 0x16;
}



/* Entry: 10b0cb640; end: 10b0cb653; -[SCLensExternalContentDownloadOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0cb640(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278ced8,0);
  return;
}



/* Entry: 10b0cb654; end: 10b0cb707; -[SCLensResourceResolver initWithCachedMetadataProvider:lensDataConfig:] */

undefined1 *
FUN_10b0cb654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112705980;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c091d60();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0cb708; end: 10b0cb877; -[SCLensResourceResolver lensResourceFromContainer:lensId:] */

void FUN_10b0cb708(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126ae558;
  if (*(long *)(param_1 + 0x10) == 1) {
    func_0x00010be95040(param_1,param_2,param_3,param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ae558;
  }
  else {
    if (*(long *)(param_1 + 0x10) != 0) {
      param_1 = *(undefined **)(param_1 + 8);
      func_0x00010c269d40(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = param_1;
      func_0x00010bfab880();
      _objc_retainAutoreleasedReturnValue();
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_10b0cb878;
      puStack_58 = &UNK_110cb8cb0;
      _objc_retain(param_3);
      puStack_50 = param_3;
      _objc_retain(param_4);
      puVar2 = puVar1;
      uStack_48 = param_4;
      func_0x00010c0b8600(puVar1,param_2,&puStack_70);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uStack_48);
      _objc_release(puStack_50);
      _objc_release(puVar1);
      goto LAB_10b0cb844;
    }
    param_1 = param_3;
    func_0x00010bf6a160(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bfe9ca0(puVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
LAB_10b0cb844:
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b0cb878; end: 10b0cb88f;  */

void FUN_10b0cb878(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be95070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126bb9b8,PTR_s__resourceForMigrationFromContain_112582db8,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),param_2);
  return;
}



/* Entry: 10b0cb890; end: 10b0cb9bb; -[SCLensResourceResolver _resourceForMigrationFromContainer:lensId:] */

void FUN_10b0cb890(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010c13b540(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10b0cb9bc;
  puStack_58 = &UNK_110cb8ce0;
  uStack_50 = param_1;
  _objc_retain(param_4);
  puVar2 = puVar1;
  uStack_48 = param_4;
  func_0x00010bfaea20(puVar1,param_2,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126bb9b8;
  func_0x00010bdd8280(PTR_PTR_1126bb9b8,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar3 = param_3;
    func_0x00010bf6a160(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
    puVar3 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b0cb9bc; end: 10b0cba4f;  */

undefined8 FUN_10b0cb9bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf38a80(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar2 = uVar3;
  func_0x00010c072d60(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return uVar2;
}



/* Entry: 10b0cba50; end: 10b0cbc3f; +[SCLensResourceResolver _resourceForMigrationFromContainer:lensId:cachedResources:] */

void FUN_10b0cba50(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = param_3;
  func_0x00010c13b540(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x10b0cbb9c;
  puStack_58 = &UNK_110cb8ce0;
  _objc_retain(param_4);
  uStack_50 = param_4;
  _objc_retain(param_5);
  puVar2 = puVar1;
  uStack_48 = param_5;
  func_0x00010bfaea20(puVar1,param_2,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126bb9b8;
  func_0x00010bdd8280(PTR_PTR_1126bb9b8,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar3 = param_3;
    func_0x00010bf6a160(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
    puVar3 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b0cbc40; end: 10b0cbccb; +[SCLensResourceResolver _cachedResourceFromResources:] */

void FUN_10b0cbc40(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfb2040(param_3,param_2,&PTR___NSConcreteGlobalBlock_110cb8d10);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = param_3;
    func_0x00010bfb2040(param_3,param_2,&PTR___NSConcreteGlobalBlock_110cb8d30);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10b0cbccc; end: 10b0cbce7;  */

uint FUN_10b0cbccc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c072920(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 10b0cbce8; end: 10b0cbcef;  */

void FUN_10b0cbce8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c072930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isFallback_1125fa458);
  return;
}



/* Entry: 10b0cbcf0; end: 10b0cbcfb; -[SCLensResourceResolver .cxx_destruct] */

void FUN_10b0cbcf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b0cbcfc; end: 10b0cbe27; -[SCLensBitmojiImageDownloadOperation initWithLens:requestTiming:bitmojiImageFetcher:lensUserProvider:lensIconRepository:fallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b0cbcfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112705988;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithLens_requestTiming__1125419e0,param_3,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11278cee8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11278ceec;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11278cef0;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11278cef4;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0cbe28; end: 10b0cc23b; -[SCLensBitmojiImageDownloadOperation executeWithSettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0cbe28(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **unaff_x26;
  long lVar14;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 == 0) {
    func_0x00010bfafea0(param_1);
  }
  else {
    puVar1 = param_1;
    func_0x00010bf1ba60();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined1 *)0x0) {
      lVar14 = (long)_DAT_11278cef0;
      lVar2 = *(long *)(param_1 + lVar14);
      func_0x00010bf1c5a0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c08fa60();
      if (lVar4 == 0) {
        _objc_release(lVar3);
        _objc_release(lVar2);
        _objc_release(puVar1);
      }
      else {
        puVar5 = param_1;
        func_0x00010c08fb40();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010bf1b100();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = (undefined **)puVar6;
        func_0x00010c08fa60();
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(lVar3);
        _objc_release(lVar2);
        _objc_release(puVar1);
        if (unaff_x26 != (undefined **)0x0) {
          lVar3 = param_3;
          func_0x00010bfa9580();
          if (lVar3 == 1) {
            func_0x00010bfaff00(param_1);
          }
          else {
            puVar8 = PTR_PTR_1126b58e0;
            _objc_opt_new();
            puVar1 = param_1;
            func_0x00010c08fb40(param_1);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar1;
            func_0x00010bf1b100();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2bae20(puVar8);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar5);
            _objc_release(puVar1);
            uVar9 = *(undefined8 *)(param_1 + lVar14);
            func_0x00010bf1c5a0(uVar9);
            _objc_retainAutoreleasedReturnValue();
            uVar10 = uVar9;
            func_0x00010bf1acc0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2a8ea0(puVar8);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(uVar10);
            _objc_release(uVar9);
            _objc_initWeak(auStack_90,param_1);
            func_0x00010bf1ba60();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar8;
            func_0x00010bf21f60();
            _objc_retainAutoreleasedReturnValue();
            puVar11 = PTR_PTR_1126b19f8;
            func_0x00010bf28e60();
            _objc_retainAutoreleasedReturnValue();
            puVar12 = PTR_PTR_1126b19f8;
            puStack_88 = puVar11;
            func_0x00010c08fb40();
            _objc_retainAutoreleasedReturnValue();
            puVar13 = PTR__OBJC_CLASS___NSArray_1126ae530;
            puStack_80 = puVar12;
            func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
            _objc_retainAutoreleasedReturnValue();
            puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_b8 = 0xc2000000;
            pcStack_b0 = FUN_10b0cc23c;
            puStack_a8 = &UNK_1108acaf0;
            param_2 = auStack_90;
            _objc_copyWeak(auStack_98,param_2);
            _objc_retain(param_3);
            lStack_a0 = param_3;
            func_0x00010bfa5420(param_1);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar13);
            _objc_release(puVar12);
            _objc_release(puVar11);
            _objc_release(puVar7);
            _objc_release(param_1);
            _objc_release(lStack_a0);
            _objc_destroyWeak(auStack_98);
            _objc_destroyWeak(auStack_90);
            _objc_release(puVar8);
            unaff_x26 = &puStack_c0;
          }
          goto LAB_10b0cbfec;
        }
      }
    }
    puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
    uStack_78 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    ppuStack_70 = &PTR____CFConstantStringClassReference_110f5dcd8;
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    func_0x00010bfafea0(param_1);
    _objc_release(puVar8);
  }
LAB_10b0cbfec:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x26 + 0x28));
  _objc_destroyWeak(auStack_90);
  __Unwind_Resume();
  _objc_retain(param_2);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    lVar3 = param_3;
    func_0x00010c08fb40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06b200();
    func_0x00010c1145e0(param_3);
    _objc_release(lVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0cc23c; end: 10b0cc2bf;  */

void FUN_10b0cc23c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010c08fb40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06b200();
    func_0x00010c1145e0(param_1);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0cc2c0; end: 10b0cc2c3; -[SCLensBitmojiImageDownloadOperation boostWithSettings:] */

void FUN_10b0cc2c0(void)

{
  return;
}



/* Entry: 10b0cc2c4; end: 10b0cc49b; -[SCLensBitmojiImageDownloadOperation finishWithResult:] */

void FUN_10b0cc2c4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long lStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c27dd80();
  if (lVar1 == 1) {
    lVar1 = param_1;
    func_0x00010bfa0500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      _objc_initWeak(auStack_58,param_1);
      lVar1 = param_1;
      func_0x00010bfa0500(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c13ccc0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfbc3e0();
      _objc_retainAutoreleasedReturnValue();
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_10b0cc49c;
      puStack_68 = &UNK_110cb8d50;
      puVar4 = auStack_60;
      _objc_copyWeak(puVar4,auStack_58);
      func_0x000107c30a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c297260(lVar3);
      _objc_release(puVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      func_0x00010bfa0500(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010c136600(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9b160(param_1);
      _objc_release(lVar1);
      _objc_release(param_1);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      goto LAB_10b0cc450;
    }
  }
  puStack_88 = PTR_PTR_112705988;
  lStack_90 = param_1;
  _objc_msgSendSuper2(&lStack_90,PTR_s_finishWithResult__1125c9960,param_3);
LAB_10b0cc450:
  _objc_release(param_3);
  return;
}



/* Entry: 10b0cc49c; end: 10b0cc50f;  */

void FUN_10b0cc49c(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (param_1 != 0)) {
    lVar1 = param_1;
    func_0x00010c13ccc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf43d60();
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0cc510; end: 10b0cc77b; -[SCLensBitmojiImageDownloadOperation processBitmojiImageResponse:inputSettings:useSquareStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0cc510(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar6 = *(long *)(param_1 + _DAT_11278cef4);
  lVar1 = param_1;
  func_0x00010c08fb40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4c6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c094380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar6 == 0) {
    if (param_3 == 0) {
      uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      ppuStack_60 = &PTR____CFConstantStringClassReference_110f5dcf8;
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf99240(puVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      func_0x00010bfafea0(param_1);
      _objc_release(puVar5);
    }
    else {
      _objc_initWeak(auStack_70,param_1);
      uVar3 = 0x15;
      func_0x000107c312b8(0x15,0);
      _objc_retainAutoreleasedReturnValue();
      puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = 0xc2000000;
      pcStack_a0 = FUN_10b0cc77c;
      puStack_98 = &UNK_110844dd0;
      _objc_copyWeak(auStack_80,auStack_70);
      _objc_retain(param_3);
      lStack_90 = param_3;
      _objc_retain(param_4);
      uStack_88 = param_4;
      uStack_78 = param_5;
      func_0x000107c27d8c(uVar3,&puStack_b0);
      _objc_release(uVar3);
      _objc_release(uStack_88);
      _objc_release(lStack_90);
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_70);
    }
  }
  else {
    func_0x00010bfaff00(param_1);
  }
  _objc_release(lVar6);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  __Unwind_Resume();
  param_3 = param_3 + 0x30;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010be80500(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaff00(param_3);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b0cc77c; end: 10b0cc7e7;  */

void FUN_10b0cc77c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010be80500(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x38));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaff00(lVar1,param_2,lVar2,*(undefined8 *)(param_1 + 0x28));
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b0cc7e8; end: 10b0cc8df; -[SCLensBitmojiImageDownloadOperation _processAndStoreWithImage:inputSettings:useSquareStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0cc7e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  ppuVar1 = &PTR____CFConstantStringClassReference_110f5ddd8;
  if ((int)param_5 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f5ddf8;
  }
  _objc_retain(param_3);
  func_0x00010bfe8220(puVar2,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bfe6e00(param_1,param_2,puVar2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11278cef4);
  func_0x00010c08fb40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf4c6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bbcc0(uVar5,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b0cc8e0; end: 10b0ccc7b; -[SCLensBitmojiImageDownloadOperation imageByComposingBorderImage:bitmojiImage:useSquareStyle:] */

void FUN_10b0cc8e0(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,ulong param_8,int param_9)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  _objc_retainAutorelease(param_7);
  _objc_retain(param_8);
  func_0x00010bdc1020();
  uVar1 = param_8;
  _objc_retainAutorelease(param_8);
  func_0x00010bdc1020();
  _objc_release(param_8);
  uVar2 = param_7;
  _CGImageGetWidth();
  dVar13 = (double)uVar2;
  uVar2 = param_7;
  _CGImageGetHeight();
  dVar10 = (double)uVar2;
  func_0x000107c308a4();
  _CGColorSpaceCreateDeviceRGB();
  dVar8 = dVar13;
  _CGRectGetWidth(dVar13,dVar10,param_3,param_4);
  dVar9 = dVar13;
  _CGRectGetHeight(dVar13,dVar10,param_3,param_4);
  dVar14 = dVar13;
  dVar12 = param_3;
  uVar7 = param_4;
  _CGRectGetWidth(dVar13,dVar10,param_3);
  uVar3 = 0;
  _CGBitmapContextCreate(0,(long)dVar8,(long)dVar9,8,(long)(dVar14 * 4.0),uVar2,1);
  uVar4 = uVar1;
  _CGImageGetWidth(uVar1);
  dVar14 = (double)uVar4;
  uVar4 = uVar1;
  _CGImageGetHeight(uVar1);
  dVar11 = (double)uVar4;
  func_0x000107c308a4(dVar14,dVar11);
  dVar8 = dVar13;
  _CGRectGetWidth(dVar13,dVar10,param_3,param_4);
  dVar9 = dVar14;
  _CGRectGetWidth(dVar14,dVar11,dVar12,uVar7);
  FUN_10b690a2c(dVar14,dVar11,dVar12,uVar7,dVar8 / dVar9);
  dVar8 = dVar13;
  _CGRectGetHeight(dVar13,dVar10,param_3,param_4);
  dVar9 = dVar14;
  _CGRectGetHeight(dVar14,dVar11,dVar12,uVar7);
  _CGRectOffset(dVar14,dVar11,dVar12,uVar7,0,(dVar8 - dVar9) * 0.5);
  if (param_9 == 0) {
    _CGContextDrawImage(dVar13,dVar10,param_3,param_4,uVar3,param_7);
    dVar8 = dVar13;
    _CGRectGetMidX(dVar13,dVar10,param_3,param_4);
    _CGRectGetMidY(dVar13,dVar10,param_3,param_4);
    _CGContextAddArc(dVar8,dVar8,dVar8 + -14.0,0,0x401921fb54442d18,uVar3,0);
    _CGContextClosePath(uVar3);
    _CGContextClip(uVar3);
    _CGContextDrawImage(dVar14,dVar11,dVar12,uVar7,uVar3,uVar1);
  }
  else {
    puVar5 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf19a00(dVar14,dVar11,dVar12,uVar7,dVar12 * 0.23,
                        PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    _CGContextAddPath(uVar3,puVar6);
    _CGContextClip(uVar3);
    _CGContextDrawImage(dVar14,dVar11,dVar12,uVar7,uVar3,uVar1);
    _CGContextDrawImage(dVar13,dVar10,param_3,param_4,uVar3,param_7);
    _objc_release(puVar5);
  }
  uVar7 = uVar3;
  _CGBitmapContextCreateImage(uVar3);
  puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe9240(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  _CGImageRelease(uVar7);
  _CGColorSpaceRelease(uVar2);
  _CGContextRelease(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10b0ccc7c; end: 10b0ccd67; -[SCLensBitmojiImageDownloadOperation isEqual:] */

long FUN_10b0ccc7c(long param_1,undefined8 param_2,long param_3)

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
      func_0x00010c08fb40(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf1b100();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fb40(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010bf1b100();
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



/* Entry: 10b0ccd68; end: 10b0ccdc3; -[SCLensBitmojiImageDownloadOperation hash] */

undefined8 FUN_10b0ccd68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf1b100();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfde980();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 10b0ccdc4; end: 10b0ccdd3; -[SCLensBitmojiImageDownloadOperation fallbackOperation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0ccdc4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278ceec);
}



/* Entry: 10b0ccdd4; end: 10b0cce13; -[SCLensBitmojiImageDownloadOperation setFallbackOperation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0ccdd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278ceec;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0cce14; end: 10b0cce23; -[SCLensBitmojiImageDownloadOperation bitmojiImageFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0cce14(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278cee8);
}



/* Entry: 10b0cce24; end: 10b0cce63; -[SCLensBitmojiImageDownloadOperation setBitmojiImageFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0cce24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278cee8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0cce64; end: 10b0ccec3; -[SCLensBitmojiImageDownloadOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0cce64(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278cee8,0);
  _objc_storeStrong(param_1 + _DAT_11278ceec,0);
  _objc_storeStrong(param_1 + _DAT_11278cef4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278cef0,0);
  return;
}



/* Entry: 10b0ccec4; end: 10b0ccf8f; -[SCLensImageDownloadOperation initWithLens:requestTiming:urlDataFetcher:lensIconRepository:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b0ccec4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112705990;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithLens_requestTiming__1125419e0,param_3,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11278cef8;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11278cefc;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0ccf90; end: 10b0cd27b; -[SCLensImageDownloadOperation executeWithSettings:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0ccf90(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    func_0x00010bfafea0(param_1);
  }
  else {
    lVar9 = *(long *)(param_1 + _DAT_11278cefc);
    lVar1 = param_1;
    func_0x00010c08fb40(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf4c6e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c094380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (lVar9 == 0) {
      lVar1 = param_1;
      func_0x00010c08fb40(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bfe5b40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_initWeak(auStack_68,param_1);
      lVar1 = param_1;
      func_0x00010c28f440();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010c08fb40(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfa2fa0();
      lVar6 = param_1;
      func_0x00010c08fb40(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf9c720();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(puVar3);
      _objc_retain(param_3);
      lVar8 = lVar1;
      func_0x00010bfa7940(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1964c0(param_1);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(param_3);
      _objc_release(puVar3);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      _objc_release(puVar3);
    }
    else {
      func_0x00010bfaff00(param_1);
    }
    _objc_release(lVar9);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b0cd27c; end: 10b0cd2ff;  */

void FUN_10b0cd27c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_2);
  _objc_retain(param_4);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c114820(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b0cd300; end: 10b0cd3c7; -[SCLensImageDownloadOperation boostWithSettings:] */

void FUN_10b0cd300(long param_1,undefined8 param_2,undefined8 param_3)

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
    func_0x00010c28f440(param_1);
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



/* Entry: 10b0cd3c8; end: 10b0cd5f3; -[SCLensImageDownloadOperation processDataFetcherResponseForUrl:image:cached:inputSettings:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_10b0cd3c8(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
             undefined8 param_5,long param_6,undefined *param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar12 = (long)_DAT_11278cefc;
  puVar10 = *(undefined **)(param_1 + lVar12);
  lVar1 = param_1;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf4c6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c094380(puVar10,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (puVar10 == (undefined *)0x0) {
    if ((param_4 == (undefined *)0x0) || (param_7 != (undefined *)0x0)) {
      lVar1 = param_6;
      func_0x00010bfa9580();
      puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
      if ((param_7 != (undefined *)0x0) || (lVar1 != 1)) {
        if (param_7 == (undefined *)0x0) {
          uStack_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
          ppuStack_60 = &PTR____CFConstantStringClassReference_110e75378;
          puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
          func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_60,
                              &uStack_68,1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf99240(puVar9,param_2,&PTR____CFConstantStringClassReference_110f5de18,0,
                              puVar3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar3);
          param_7 = puVar9;
        }
        puVar9 = param_7;
        func_0x00010bfafea0(param_1,param_2,param_7,param_6);
        goto LAB_10b0cd488;
      }
      puVar9 = (undefined *)0x0;
    }
    else {
      uVar11 = *(undefined8 *)(param_1 + lVar12);
      lVar1 = param_1;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf4c6e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bbcc0(uVar11,param_2,param_4,lVar2);
      _objc_release(lVar2);
      _objc_release(lVar1);
      puVar9 = param_4;
    }
    func_0x00010bfaff00(param_1,param_2,puVar9,param_6);
  }
  else {
    puVar9 = puVar10;
    func_0x00010bfaff00(param_1,param_2,puVar10,param_6);
LAB_10b0cd488:
    _objc_release(param_7);
  }
  _objc_release(puVar10);
  _objc_release(param_6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_4;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  if (param_4 == puVar9) {
    puVar10 = (undefined *)0x1;
  }
  else {
    puVar10 = param_4;
    _objc_opt_class(param_4);
    puVar3 = puVar9;
    func_0x00010c077980(puVar9,param_2,puVar10);
    if ((int)puVar3 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      _objc_retain(puVar9);
      puVar3 = puVar9;
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010bfe5b40();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_4;
      func_0x00010c08fb40(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010bfe5b40();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar4;
      func_0x00010c071ae0(puVar4,param_2,puVar6);
      if ((int)puVar10 == 0) {
        puVar10 = (undefined *)0x0;
      }
      else {
        func_0x00010c08fb40(param_4);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = param_4;
        func_0x00010bfa2fa0();
        puVar7 = puVar9;
        func_0x00010c08fb40(puVar9);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        func_0x00010bfa2fa0();
        puVar10 = (undefined *)(ulong)(puVar10 == puVar8);
        _objc_release(puVar7);
        _objc_release(param_4);
      }
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar9);
    }
  }
  _objc_release(puVar9);
  return puVar10;
}



/* Entry: 10b0cd5f4; end: 10b0cd74b; -[SCLensImageDownloadOperation isEqual:] */

bool FUN_10b0cd5f4(long param_1,undefined8 param_2,long param_3)

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
      func_0x00010c08fb40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfe5b40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1;
      func_0x00010c08fb40(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bfe5b40();
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



/* Entry: 10b0cd74c; end: 10b0cd80b; -[SCLensImageDownloadOperation hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10b0cd74c(undefined8 param_1)

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
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe5b40();
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
    return puVar4;
  }
  ___stack_chk_fail();
  return *(undefined8 **)((long)puVar4 + (long)_DAT_11278cef8);
}



/* Entry: 10b0cd80c; end: 10b0cd81b; -[SCLensImageDownloadOperation urlDataFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b0cd80c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278cef8);
}



/* Entry: 10b0cd81c; end: 10b0cd85b; -[SCLensImageDownloadOperation setUrlDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0cd81c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278cef8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b0cd85c; end: 10b0cd89b; -[SCLensImageDownloadOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b0cd85c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278cef8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278cefc,0);
  return;
}



/* Entry: 10b0cd89c; end: 10b0cd957; -[SCLensDownloadOperation initWithLens:requestTiming:] */

undefined1 *
FUN_10b0cd89c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_112705998;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x000107c31920();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    puVar3 = PTR_PTR_1126ae560;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b0cd958; end: 10b0cd9b7; -[SCLensDownloadOperation executeWithSettings:] */

void FUN_10b0cd958(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_2;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw(puVar1);
  _objc_retain(lVar3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(lVar2);
  _objc_exception_throw();
  if (*(long *)(puVar1 + 0x18) < lVar3) {
    *(long *)(puVar1 + 0x18) = lVar3;
  }
  return;
}



/* Entry: 10b0cd9b8; end: 10b0cda17; -[SCLensDownloadOperation boostWithSettings:] */

void FUN_10b0cd9b8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010c2803a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(param_2);
  _objc_exception_throw();
  if (*(long *)(puVar1 + 0x18) < lVar2) {
    *(long *)(puVar1 + 0x18) = lVar2;
  }
  return;
}



/* Entry: 10b0cda18; end: 10b0cda2b; -[SCLensDownloadOperation boostWithRequestTiming:] */

void FUN_10b0cda18(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + 0x18) < param_3) {
    *(long *)(param_1 + 0x18) = param_3;
  }
  return;
}



/* Entry: 10b0cda2c; end: 10b0cda7b; -[SCLensDownloadOperation finishWithResult:] */

void FUN_10b0cda2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c13ccc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b0cda7c; end: 10b0cdabf; -[SCLensDownloadOperation finishWithSuccess:settings:] */

void FUN_10b0cda7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df9d0;
  func_0x00010c261aa0(PTR_PTR_1126df9d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfafee0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b0cdac0; end: 10b0cdb03; -[SCLensDownloadOperation finishWithFailure:settings:] */

void FUN_10b0cdac0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df9d0;
  func_0x00010bfa01e0(PTR_PTR_1126df9d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfafee0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b0cdb04; end: 10b0cdb0b; -[SCLensDownloadOperation progressObservable] */

undefined8 FUN_10b0cdb04(void)

{
  return 0;
}



/* Entry: 10b0cdb0c; end: 10b0cdb2f; -[SCLensDownloadOperation copyWithZone:] */

undefined8 FUN_10b0cdb0c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b0cdb30; end: 10b0cdb37; -[SCLensDownloadOperation operationId] */

undefined8 FUN_10b0cdb30(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b0cdb38; end: 10b0cdb3f; -[SCLensDownloadOperation lens] */

undefined8 FUN_10b0cdb38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b0cdb40; end: 10b0cdb47; -[SCLensDownloadOperation requestTiming] */

undefined8 FUN_10b0cdb40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b0cdb48; end: 10b0cdb4f; -[SCLensDownloadOperation fetchPriority] */

undefined8 FUN_10b0cdb48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b0cdb50; end: 10b0cdb57; -[SCLensDownloadOperation setFetchPriority:] */

void FUN_10b0cdb50(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10b0cdb58; end: 10b0cdb5f; -[SCLensDownloadOperation resultPromise] */

undefined8 FUN_10b0cdb58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10b0cdb60; end: 10b0cdb6b; -[SCLensDownloadOperation enqueuedRequestId] */

void FUN_10b0cdb60(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x30,1);
  return;
}



/* Entry: 10b0cdb6c; end: 10b0cdb73; -[SCLensDownloadOperation setEnqueuedRequestId:] */

void FUN_10b0cdb6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf458. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_copy_11034d318)();
  return;
}


