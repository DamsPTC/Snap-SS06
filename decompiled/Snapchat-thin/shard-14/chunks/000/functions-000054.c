/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10af745c0; end: 10af745d7; -[SCMainAppSnapTokenAuthenticatedRequestsProvider httpMetadataService] */

void FUN_10af745c0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af745d8; end: 10af745ef; -[SCMainAppSnapTokenAuthenticatedRequestsProvider httpRequestModifier] */

void FUN_10af745d8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10af745f0; end: 10af7462f; -[SCMainAppSnapTokenAuthenticatedRequestsProvider .cxx_destruct] */

void FUN_10af745f0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af74630; end: 10af7474b; -[SCSnapTokenMainAppLogger _logSnapTokenPrefetchError:metricsInfo:] */

void FUN_10af74630(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_5);
  func_0x00010bf8d0e0(param_5);
  lVar1 = param_2;
  func_0x00010bf06140(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126decd8;
  func_0x00010bdc2480(PTR_PTR_1126decd8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = param_5;
  func_0x00010c124fc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  FUN_10af764c0(uVar5,lVar1,puVar3,uVar4,1);
  _objc_release(uVar4);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = param_5;
  func_0x00010c124fc0(param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  FUN_10af76a40(param_1,uVar5,lVar1,puVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10af7474c; end: 10af7499f; -[SCSnapTokenMainAppLogger logAccessTokenRetrievalErrorWithError:forMetricsInfo:] */

void FUN_10af7474c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  
  _objc_retain(param_5);
  lVar2 = param_5;
  func_0x00010c07a9c0();
  if ((int)lVar2 == 0) {
    puVar3 = PTR_PTR_1126dece0;
    func_0x00010bfbeec0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b29e0();
    _objc_release(uVar4);
    puVar5 = PTR_PTR_1126decc8;
    func_0x00010bfc7a40(param_5);
    func_0x00010c25da00(puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126bd360;
    func_0x00010beecdc0(param_5);
    func_0x00010c22d480(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    lVar2 = param_2;
    func_0x00010c26f780(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = param_5;
    func_0x00010c0819e0();
    ppuVar1 = &PTR____CFConstantStringClassReference_110f3de18;
    if ((int)lVar8 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f3ddf8;
    }
    _objc_retain(ppuVar1);
    lVar8 = param_2;
    func_0x00010bf06140(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    puVar6 = PTR_PTR_1126decd8;
    func_0x00010bdc2480(PTR_PTR_1126decd8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar6;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    FUN_10af751d0(uVar4,ppuVar1,lVar8,puVar5,puVar9,puVar7,lVar2,1);
    _objc_release(ppuVar1);
    _objc_release(puVar9);
    _objc_release(puVar6);
    lVar10 = param_5;
    func_0x00010bfc7a40();
    if (lVar10 == 3) {
      func_0x00010c0d81e0(param_5);
      if (0.0 < param_1) {
        FUN_10af75ccc(*(undefined8 *)(param_2 + 0x10),puVar7);
      }
      func_0x00010c13bbc0(param_5);
      if (0.0 < param_1) {
        FUN_10af76c68(*(undefined8 *)(param_2 + 0x10),puVar7);
      }
    }
    _objc_release(lVar8);
    _objc_release(lVar2);
    _objc_release(puVar7);
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  else {
    func_0x00010be58c80(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10af749a0; end: 10af749af; -[SCSnapTokenMainAppLogger logAccessTokenFetchWithNeedsCloud1TLToken:] */

/* WARNING: Removing unreachable block (ram,0x00010af755a4) */
/* WARNING: Removing unreachable block (ram,0x00010af758e8) */

void FUN_10af749a0(double param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined *param_5,undefined *param_6,undefined *param_7,undefined *param_8,
                  undefined *param_9)

{
  undefined1 **ppuVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long *plVar16;
  undefined8 *unaff_x21;
  long lVar17;
  undefined1 *puVar18;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined1 *puStack_378;
  undefined8 auStack_370 [2];
  char cStack_359;
  long lStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 ***pppuStack_320;
  code *pcStack_318;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 auStack_2e8 [2];
  char cStack_2d1;
  undefined8 auStack_2d0 [2];
  char cStack_2b9;
  long lStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined1 ***pppuStack_280;
  code *pcStack_278;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 *puStack_250;
  undefined8 auStack_248 [3];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined1 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 *puStack_178;
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined8 auStack_f8 [2];
  char cStack_e1;
  long alStack_e0 [2];
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  puVar2 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined1 **)0x0;
  puVar6 = (undefined8 *)0x1;
  if (*(long *)(param_2 + 0x10) != 0) {
    plVar16 = *(long **)(*(long *)(param_2 + 0x10) + 8);
    puVar3 = &UNK_10f6ed252;
    if ((int)param_4 == 0) {
      puVar3 = &UNK_10f6ed257;
    }
    func_0x000107c278b8(appuStack_50,puVar3);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x000107c27984(&uStack_70,appuStack_50,&lStack_38,1);
    param_4 = (undefined8 *)&UNK_110c99f50;
    param_5 = (undefined *)0x1;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    ppuVar1 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x000107c278ac();
    puVar6 = puVar2;
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar1 = appuStack_50[0];
      __ZdlPv();
      puVar6 = puVar2;
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x000107c278ac(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  puVar4 = &uStack_190;
  pcStack_78 = FUN_10af751d0;
  alStack_e0[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_4;
  puVar9 = puVar6;
  puVar3 = param_5;
  puVar15 = param_6;
  puVar14 = param_7;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(param_4);
  _objc_retain(puVar6);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar18 = (undefined1 *)0x0;
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar16 = (long *)ppuVar1[1];
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      puVar2 = param_4;
      _objc_retainAutorelease(param_4);
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_170,puVar2);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar2 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_158,puVar2);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar3 = &UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar3 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_140,puVar3);
    _objc_retain(param_6);
    if (param_6 == (undefined *)0x0) {
      puVar3 = &UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_6);
      puVar3 = param_6;
      func_0x00010bdc3520(param_6);
    }
    _objc_release(param_6);
    func_0x000107c278b8(auStack_128,puVar3);
    _objc_retain(param_7);
    if (param_7 == (undefined *)0x0) {
      puVar3 = &UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_7);
      puVar3 = param_7;
      func_0x00010bdc3520(param_7);
    }
    _objc_release(param_7);
    func_0x000107c278b8(auStack_110,puVar3);
    _objc_retain(param_8);
    if (param_8 == (undefined *)0x0) {
      puVar3 = &UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_8);
      puVar3 = param_8;
      func_0x00010bdc3520(param_8);
    }
    _objc_release(param_8);
    func_0x000107c278b8(auStack_f8,puVar3);
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    func_0x000107c27984(&uStack_190,auStack_170,alStack_e0,6);
    puVar2 = (undefined8 *)&UNK_110c99fa0;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_178 = (undefined1 *)&uStack_190;
    func_0x000107c278ac(&puStack_178);
    lVar17 = 0;
    puVar18 = auStack_170;
    puVar9 = puVar4;
    puVar3 = param_9;
    do {
      if ((&cStack_e1)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_f8 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x90);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar6);
  puVar4 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_e0[0]) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_8);
  do {
    puVar18 = puVar18 + -0x18;
  } while (puVar18 != auStack_170);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar6);
  _objc_release(param_4);
  puVar5 = puVar4;
  __Unwind_Resume();
  pcStack_198 = FUN_10af755f4;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar11 = puVar2;
  puVar12 = puVar9;
  puVar7 = puVar3;
  puStack_1e0 = puVar18;
  puStack_1d8 = puVar4;
  puStack_1d0 = param_8;
  puStack_1c8 = param_7;
  puStack_1c0 = param_6;
  puStack_1b8 = param_5;
  puStack_1b0 = puVar6;
  puStack_1a8 = param_4;
  ppuStack_1a0 = &puStack_80;
  _objc_retain(puVar2);
  _objc_retain(puVar9);
  _objc_retain(puVar3);
  _objc_retain(puVar15);
  if (puVar5 != (undefined8 *)0x0) {
    plVar16 = (long *)puVar5[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      puVar6 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_248,puVar6);
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(puVar9);
      puVar6 = puVar9;
      func_0x00010bdc3520(puVar9);
    }
    _objc_release(puVar9);
    func_0x000107c278b8(auStack_230,puVar6);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar7 = &UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar7 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x000107c278b8(auStack_218,puVar7);
    _objc_retain(puVar15);
    if (puVar15 == (undefined *)0x0) {
      puVar7 = &UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(puVar15);
      puVar7 = puVar15;
      func_0x00010bdc3520(puVar15);
    }
    _objc_release(puVar15);
    func_0x000107c278b8(auStack_200,puVar7);
    uStack_268 = 0;
    uStack_260 = 0;
    uStack_258 = 0;
    func_0x000107c27984(&uStack_268,auStack_248,&lStack_1e8,4);
    puVar11 = (undefined8 *)&UNK_110c99ff0;
    puVar4 = &uStack_268;
    puVar12 = &uStack_268;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110c99ff0,puVar12,puVar14);
    puStack_250 = puVar4;
    func_0x000107c278ac(&puStack_250);
    lVar17 = 0;
    puVar7 = puVar14;
    do {
      if ((&cStack_1e9)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x60);
  }
  _objc_release(puVar15);
  _objc_release(puVar3);
  _objc_release(puVar9);
  puVar6 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar15);
  puVar5 = auStack_248;
  do {
    puVar4 = puVar4 + -3;
  } while (puVar4 != puVar5);
  _objc_release(puVar15);
  _objc_release(puVar3);
  _objc_release(puVar9);
  _objc_release(puVar2);
  puVar8 = puVar6;
  __Unwind_Resume();
  pcStack_278 = FUN_10af75928;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar11;
  puVar13 = puVar12;
  puStack_2b0 = puVar5;
  puStack_2a8 = puVar6;
  puStack_2a0 = puVar15;
  puStack_298 = puVar3;
  puStack_290 = puVar9;
  puStack_288 = puVar2;
  pppuStack_280 = &ppuStack_1a0;
  _objc_retain(puVar11);
  _objc_retain(puVar12);
  puVar2 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    plVar16 = (long *)puVar8[1];
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      puVar6 = puVar11;
      _objc_retainAutorelease(puVar11);
      func_0x00010bdc3520();
    }
    _objc_release(puVar11);
    puVar5 = auStack_2e8;
    func_0x000107c278b8(auStack_2e8,puVar6);
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(puVar12);
      puVar6 = puVar12;
      func_0x00010bdc3520(puVar12);
    }
    _objc_release(puVar12);
    func_0x000107c278b8(auStack_2d0,puVar6);
    uStack_308 = 0;
    uStack_300 = 0;
    uStack_2f8 = 0;
    func_0x000107c27984(&uStack_308,auStack_2e8,&lStack_2b8,2);
    puVar4 = (undefined8 *)&UNK_110c9a040;
    puVar6 = &uStack_308;
    puVar13 = &uStack_308;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110c9a040,puVar13,puVar7);
    puStack_2f0 = puVar6;
    func_0x000107c278ac(&puStack_2f0);
    lVar17 = 0;
    puVar2 = auStack_2e8;
    do {
      if ((&cStack_2b9)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2d0 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x30);
  }
  _objc_release(puVar12);
  puVar9 = puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2b8) {
    ___stack_chk_fail();
    _objc_release(puVar12);
    if (cStack_2d1 < '\0') {
      __ZdlPv(auStack_2e8[0]);
    }
    _objc_release(puVar12);
    _objc_release(puVar11);
    puVar10 = puVar9;
    __Unwind_Resume();
    pcStack_318 = FUN_10af75b58;
    lStack_358 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar8 = puVar4;
    puStack_350 = puVar5;
    puStack_348 = puVar6;
    puStack_340 = puVar2;
    puStack_338 = puVar9;
    puStack_330 = puVar12;
    puStack_328 = puVar11;
    pppuStack_320 = &pppuStack_280;
    _objc_retain(puVar4);
    if (puVar10 != (undefined8 *)0x0) {
      plVar16 = (long *)puVar10[1];
      _objc_retain(puVar4);
      if (puVar4 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)&UNK_10f6ed215;
      }
      else {
        puVar6 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      func_0x000107c278b8(auStack_370,puVar6);
      uStack_390 = 0;
      uStack_388 = 0;
      uStack_380 = 0;
      func_0x000107c27984(&uStack_390,auStack_370,&lStack_358,1);
      puVar8 = (undefined8 *)&UNK_110c9a0e0;
      (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110c9a0e0,&uStack_390,puVar13);
      puStack_378 = (undefined1 *)&uStack_390;
      func_0x000107c278ac(&puStack_378);
      if (cStack_359 < '\0') {
        __ZdlPv(auStack_370[0]);
      }
    }
    puVar6 = puVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_358) {
      ___stack_chk_fail();
      _objc_release(puVar4);
      _objc_release(puVar4);
      __Unwind_Resume();
      _objc_retain(puVar8);
      if (puVar6 != (undefined8 *)0x0) {
        FUN_10af75b58(puVar6,puVar8,(long)(param_1 * 1000.0));
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar8);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10af749b0; end: 10af74a37; -[SCSnapTokenMainAppLogger logSnapTokenSessionRequestSuccessWithLatencySecs:] */

void FUN_10af749b0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  func_0x00010c26f780();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  func_0x00010bf06140(param_2);
  _objc_retainAutoreleasedReturnValue();
  FUN_10af76f98(*(undefined8 *)(param_2 + 0x10),lVar2,lVar1,1);
  FUN_10af773f8(param_1,*(undefined8 *)(param_2 + 0x10),lVar2,lVar1);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10af74a38; end: 10af74b3f; -[SCSnapTokenMainAppLogger logSnapTokenSessionRequestErrorWithError:] */

void FUN_10af74a38(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126dece0;
  func_0x00010bfc01e0(PTR_PTR_1126dece0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b29e0();
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x00010c26f780(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010bf06140(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar5 = PTR_PTR_1126decd8;
  func_0x00010bdc2480(PTR_PTR_1126decd8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  FUN_10af755f4(uVar2,&PTR____CFConstantStringClassReference_110f3de38,lVar4,puVar6,lVar3,1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af74b40; end: 10af74ba7; -[SCSnapTokenMainAppLogger logAccessTokenPrefetchInThePastErrorWithMagnitudeSecs:forType:] */

void FUN_10af74b40(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bd360;
  func_0x00010c22d480(PTR_PTR_1126bd360,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  FUN_10af77d04((double)param_3,*(undefined8 *)(param_1 + 0x10),puVar1);
  FUN_10af77a1c(*(undefined8 *)(param_1 + 0x10),puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af74ba8; end: 10af74bc7; -[SCSnapTokenMainAppLogger logSnapTokenLoginProcessingLatency:] */

void FUN_10af74ba8(double param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  lVar1 = *(long *)(param_2 + 0x10);
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      (**(code **)(**(long **)(lVar1 + 8) + 0x18))
                (*(long **)(lVar1 + 8),&UNK_110c9a4f0,&uStack_40,(long)(param_1 * 1000.0));
      puStack_28 = (undefined1 *)&uStack_40;
      func_0x000107c278ac(&puStack_28);
    }
    return;
  }
  return;
}



/* Entry: 10af74bc8; end: 10af74bd7; -[SCSnapTokenMainAppLogger logSnapTokensOnJanusLoginProcessedWithStatus:] */

void FUN_10af74bc8(double param_1,long param_2,undefined8 param_3,undefined *param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_2 + 0x10);
  puVar8 = (undefined8 *)0x1;
  puVar4 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_4;
  _objc_retain(param_4);
  if (lVar1 != 0) {
    plVar11 = *(long **)(lVar1 + 8);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ed215;
    }
    else {
      puVar2 = param_4;
      _objc_retainAutorelease(param_4);
      func_0x00010bdc3520();
    }
    _objc_release(param_4);
    unaff_x23 = auStack_60;
    func_0x000107c278b8(auStack_60,puVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar2 = &UNK_110c9a540;
    param_5 = 1;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c9a540,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar8 = puVar4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar8 = puVar4;
    }
  }
  puVar3 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  _objc_release(param_4);
  __Unwind_Resume();
  pcStack_88 = FUN_10af77678;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar4 = puVar8;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar8);
  puVar12 = (undefined8 *)0x0;
  if (puVar3 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar3 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f6ed215;
    }
    else {
      puVar3 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x24 = auStack_f8;
    func_0x000107c278b8(auStack_f8,puVar3);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar4 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x000107c278b8(auStack_e0,puVar4);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x000107c27984(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar6 = &UNK_110c9a590;
    unaff_x23 = &uStack_118;
    puVar4 = &uStack_118;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c9a590,puVar4,param_5);
    puStack_100 = unaff_x23;
    func_0x000107c278ac(&puStack_100);
    lVar1 = 0;
    puVar12 = auStack_f8;
    do {
      if ((&cStack_c9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(puVar8);
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar2);
  puVar5 = puVar3;
  __Unwind_Resume();
  puVar10 = &uStack_1a0;
  pcStack_128 = FUN_10af778a8;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar9 = puVar4;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar12;
  puStack_148 = puVar3;
  puStack_140 = puVar8;
  puStack_138 = puVar2;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar6);
  plVar11 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar5 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ed215;
    }
    else {
      puVar2 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_180;
    func_0x000107c278b8(auStack_180,puVar2);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x000107c27984(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar7 = &UNK_110c9a5e0;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c9a5e0,&uStack_1a0,puVar4);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x000107c278ac(&puStack_188);
    puVar9 = puVar10;
    puVar12 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar9 = puVar10;
      puVar12 = &uStack_1a0;
    }
  }
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar5 = puVar2;
  __Unwind_Resume();
  puVar4 = &uStack_220;
  pcStack_1a8 = FUN_10af77a1c;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar7;
  puVar8 = puVar9;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar12;
  plStack_1c8 = plVar11;
  puStack_1c0 = puVar2;
  puStack_1b8 = puVar6;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(puVar7);
  plVar11 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar5 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ed215;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    unaff_x23 = auStack_200;
    func_0x000107c278b8(auStack_200,puVar2);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x000107c27984(&uStack_220,auStack_200,&lStack_1e8,1);
    puVar3 = &UNK_110c9a630;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c9a630,&uStack_220,puVar9);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x000107c278ac(&puStack_208);
    puVar8 = puVar4;
    puVar12 = &uStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      puVar8 = puVar4;
      puVar12 = &uStack_220;
    }
  }
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar5 = puVar2;
  __Unwind_Resume();
  pcStack_228 = FUN_10af77b90;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar3;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar12;
  plStack_248 = plVar11;
  puStack_240 = puVar2;
  puStack_238 = puVar7;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(puVar3);
  if (puVar5 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar5 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ed215;
    }
    else {
      puVar2 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x000107c278b8(auStack_280,puVar2);
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    func_0x000107c27984(&uStack_2a0,auStack_280,&lStack_268,1);
    puVar6 = &UNK_110c9a680;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c9a680,&uStack_2a0,puVar8);
    puStack_288 = (undefined1 *)&uStack_2a0;
    func_0x000107c278ac(&puStack_288);
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  _objc_retain(puVar6);
  if (puVar2 != (undefined *)0x0) {
    FUN_10af77b90(puVar2,puVar6,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 10af74bd8; end: 10af74bf7; -[SCSnapTokenMainAppLogger logSnapTokensOnLoginEntryPointProcessingWithStatus:referrer:] */

void FUN_10af74bd8(double param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long lVar7;
  undefined8 *unaff_x22;
  long *plVar8;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined1 *unaff_x29;
  code *unaff_x30;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  char acStack_1e9 [337];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  if (param_5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x1;
    puVar3 = param_4;
  }
  else {
    unaff_x29 = &stack0xfffffffffffffff0;
    lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = param_5;
    puVar5 = param_4;
    _objc_retain(param_5);
    _objc_retain(param_4);
    unaff_x22 = (undefined8 *)0x0;
    if (puVar1 != (undefined8 *)0x0) {
      plVar8 = (long *)puVar1[1];
      _objc_retain(param_5);
      if (param_5 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f6ed215;
      }
      else {
        puVar1 = param_5;
        _objc_retainAutorelease(param_5);
        func_0x00010bdc3520();
      }
      _objc_release(param_5);
      unaff_x24 = auStack_78;
      func_0x000107c278b8(auStack_78,puVar1);
      _objc_retain(param_4);
      if (param_4 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f6ed215;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar1 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x000107c278b8(auStack_60,puVar1);
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
      puVar3 = (undefined8 *)&UNK_110c9a590;
      unaff_x23 = &uStack_98;
      puVar5 = &uStack_98;
      (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110c9a590,puVar5,1);
      puStack_80 = unaff_x23;
      func_0x000107c278ac(&puStack_80);
      lVar7 = 0;
      unaff_x22 = auStack_78;
      do {
        if ((&cStack_49)[lVar7] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar7));
        }
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != -0x30);
    }
    _objc_release(param_4);
    unaff_x21 = param_5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(param_4);
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    _objc_release(param_4);
    _objc_release(param_5);
    unaff_x30 = FUN_10af778a8;
    puVar1 = unaff_x21;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)(acStack_1e9 + 0x149);
    unaff_x19 = param_5;
    unaff_x20 = param_4;
  }
  puVar6 = (undefined8 *)((long)register0x00000008 + -0x80);
  *(undefined8 **)((long)register0x00000008 + -0x40) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0x38) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(undefined8 **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  *(undefined8 *)((long)register0x00000008 + -0x48) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar3;
  puVar2 = puVar5;
  _objc_retain(puVar3);
  plVar8 = (long *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    plVar8 = (long *)puVar1[1];
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    unaff_x23 = (undefined8 *)((long)register0x00000008 + -0x60);
    func_0x000107c278b8((undefined1 *)((long)register0x00000008 + -0x60),puVar1);
    *(undefined8 *)((long)register0x00000008 + -0x80) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x78) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
    func_0x000107c27984((undefined1 *)((long)register0x00000008 + -0x80),
                        (undefined1 *)((long)register0x00000008 + -0x60),
                        (undefined1 *)((long)register0x00000008 + -0x48),1);
    puVar4 = (undefined8 *)&UNK_110c9a5e0;
    (**(code **)(*plVar8 + 0x18))
              (plVar8,&UNK_110c9a5e0,(undefined1 *)((long)register0x00000008 + -0x80),puVar5);
    *(undefined1 **)((long)register0x00000008 + -0x68) =
         (undefined1 *)((long)register0x00000008 + -0x80);
    func_0x000107c278ac((undefined1 *)((long)register0x00000008 + -0x68));
    puVar2 = puVar6;
    unaff_x22 = (undefined8 *)((long)register0x00000008 + -0x80);
    if (*(char *)((long)register0x00000008 + -0x49) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x60));
      puVar2 = puVar6;
      unaff_x22 = (undefined8 *)((long)register0x00000008 + -0x80);
    }
  }
  puVar1 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x48)) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  puVar5 = puVar1;
  __Unwind_Resume();
  puVar6 = (undefined8 *)((long)register0x00000008 + -0x100);
  *(undefined8 **)((long)register0x00000008 + -0xc0) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0xb8) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0xb0) = unaff_x22;
  *(long **)((long)register0x00000008 + -0xa8) = plVar8;
  *(undefined8 **)((long)register0x00000008 + -0xa0) = puVar1;
  *(undefined8 **)((long)register0x00000008 + -0x98) = puVar3;
  *(undefined1 **)((long)register0x00000008 + -0x90) =
       (undefined1 *)((long)register0x00000008 + -0x10);
  *(code **)((long)register0x00000008 + -0x88) = FUN_10af77a1c;
  *(undefined8 *)((long)register0x00000008 + -200) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0
  ;
  puVar1 = puVar4;
  puVar3 = puVar2;
  _objc_retain(puVar4);
  plVar8 = (long *)0x0;
  if (puVar5 != (undefined8 *)0x0) {
    plVar8 = (long *)puVar5[1];
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    unaff_x23 = (undefined8 *)((long)register0x00000008 + -0xe0);
    func_0x000107c278b8((undefined1 *)((long)register0x00000008 + -0xe0),puVar1);
    *(undefined8 *)((long)register0x00000008 + -0x100) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xf8) = 0;
    *(undefined8 *)((long)register0x00000008 + -0xf0) = 0;
    func_0x000107c27984((undefined1 *)((long)register0x00000008 + -0x100),
                        (undefined1 *)((long)register0x00000008 + -0xe0),
                        (undefined1 *)((long)register0x00000008 + -200),1);
    puVar1 = (undefined8 *)&UNK_110c9a630;
    (**(code **)(*plVar8 + 0x18))
              (plVar8,&UNK_110c9a630,(undefined1 *)((long)register0x00000008 + -0x100),puVar2);
    *(undefined1 **)((long)register0x00000008 + -0xe8) =
         (undefined1 *)((long)register0x00000008 + -0x100);
    func_0x000107c278ac((undefined1 *)((long)register0x00000008 + -0xe8));
    puVar3 = puVar6;
    unaff_x22 = (undefined8 *)((long)register0x00000008 + -0x100);
    if (*(char *)((long)register0x00000008 + -0xc9) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0xe0));
      puVar3 = puVar6;
      unaff_x22 = (undefined8 *)((long)register0x00000008 + -0x100);
    }
  }
  puVar5 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -200)) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  puVar2 = puVar5;
  __Unwind_Resume();
  *(undefined8 **)((long)register0x00000008 + -0x140) = unaff_x24;
  *(undefined8 **)((long)register0x00000008 + -0x138) = unaff_x23;
  *(undefined8 **)((long)register0x00000008 + -0x130) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x128) = plVar8;
  *(undefined8 **)((long)register0x00000008 + -0x120) = puVar5;
  *(undefined8 **)((long)register0x00000008 + -0x118) = puVar4;
  *(undefined1 **)((long)register0x00000008 + -0x110) =
       (undefined1 *)((long)register0x00000008 + -0x90);
  *(code **)((long)register0x00000008 + -0x108) = FUN_10af77b90;
  *(undefined8 *)((long)register0x00000008 + -0x148) =
       *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  _objc_retain(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    plVar8 = (long *)puVar2[1];
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      puVar5 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8((undefined1 *)((long)register0x00000008 + -0x160),puVar5);
    *(undefined8 *)((long)register0x00000008 + -0x180) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x178) = 0;
    *(undefined8 *)((long)register0x00000008 + -0x170) = 0;
    func_0x000107c27984((undefined1 *)((long)register0x00000008 + -0x180),
                        (undefined1 *)((long)register0x00000008 + -0x160),
                        (undefined1 *)((long)register0x00000008 + -0x148),1);
    puVar5 = (undefined8 *)&UNK_110c9a680;
    (**(code **)(*plVar8 + 0x18))
              (plVar8,&UNK_110c9a680,(undefined1 *)((long)register0x00000008 + -0x180),puVar3);
    *(undefined1 **)((long)register0x00000008 + -0x168) =
         (undefined1 *)((long)register0x00000008 + -0x180);
    func_0x000107c278ac((undefined1 *)((long)register0x00000008 + -0x168));
    if (*(char *)((long)register0x00000008 + -0x149) < '\0') {
      __ZdlPv(*(undefined8 *)((long)register0x00000008 + -0x160));
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x148)) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar4 = puVar3;
  __Unwind_Resume();
  *(undefined8 *)((long)register0x00000008 + -0x1b0) = unaff_d9;
  *(undefined8 *)((long)register0x00000008 + -0x1a8) = unaff_d8;
  *(undefined8 **)((long)register0x00000008 + -0x1a0) = puVar3;
  *(undefined8 **)((long)register0x00000008 + -0x198) = puVar1;
  *(undefined1 **)((long)register0x00000008 + -400) =
       (undefined1 *)((long)register0x00000008 + -0x110);
  *(code **)((long)register0x00000008 + -0x188) = FUN_10af77d04;
  _objc_retain(puVar5);
  if (puVar4 != (undefined8 *)0x0) {
    FUN_10af77b90(puVar4,puVar5,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 10af74bf8; end: 10af74c07; -[SCSnapTokenMainAppLogger logInvalidRefreshTokenOnAccessTokenFetchWithStatus:] */

void FUN_10af74bf8(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 0x10);
  puVar8 = (undefined8 *)0x1;
  puVar4 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar11 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ed215;
    }
    else {
      puVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x23 = auStack_60;
    func_0x000107c278b8(auStack_60,puVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar2 = &UNK_110c9a770;
    param_4 = 1;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c9a770,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar8 = puVar4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar8 = puVar4;
    }
  }
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_88 = FUN_10af783f8;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar2;
  puVar4 = puVar8;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar8);
  puVar12 = (undefined8 *)0x0;
  if (puVar3 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar3 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f6ed215;
    }
    else {
      puVar3 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x24 = auStack_f8;
    func_0x000107c278b8(auStack_f8,puVar3);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar4 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x000107c278b8(auStack_e0,puVar4);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x000107c27984(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar6 = &UNK_110c9a7c0;
    unaff_x23 = &uStack_118;
    puVar4 = &uStack_118;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c9a7c0,puVar4,param_4);
    puStack_100 = unaff_x23;
    func_0x000107c278ac(&puStack_100);
    lVar1 = 0;
    puVar12 = auStack_f8;
    do {
      if ((&cStack_c9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(puVar8);
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar8);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar8);
  _objc_release(puVar2);
  puVar5 = puVar3;
  __Unwind_Resume();
  puVar10 = &uStack_1a0;
  pcStack_128 = FUN_10af78628;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar6;
  puVar9 = puVar4;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar12;
  puStack_148 = puVar3;
  puStack_140 = puVar8;
  puStack_138 = puVar2;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar6);
  plVar11 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar5 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ed215;
    }
    else {
      puVar2 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_180;
    func_0x000107c278b8(auStack_180,puVar2);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x000107c27984(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar7 = &UNK_110c9a810;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c9a810,&uStack_1a0,puVar4);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x000107c278ac(&puStack_188);
    puVar9 = puVar10;
    puVar12 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar9 = puVar10;
      puVar12 = &uStack_1a0;
    }
  }
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar5 = puVar2;
  __Unwind_Resume();
  pcStack_1a8 = FUN_10af7879c;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar7;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar12;
  plStack_1c8 = plVar11;
  puStack_1c0 = puVar2;
  puStack_1b8 = puVar6;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(puVar7);
  if (puVar5 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar5 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ed215;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_200,puVar2);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x000107c27984(&uStack_220,auStack_200,&lStack_1e8,1);
    puVar3 = &UNK_110c9a860;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c9a860,&uStack_220,puVar9);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x000107c278ac(&puStack_208);
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
    }
  }
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar6 = puVar2;
  __Unwind_Resume();
  puStack_248 = (undefined1 *)&uStack_260;
  pcStack_228 = FUN_10af78910;
  if (puVar6 != (undefined *)0x0) {
    uStack_260 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    puStack_240 = puVar2;
    puStack_238 = puVar7;
    pppuStack_230 = &pppuStack_1b0;
    (**(code **)(**(long **)(puVar6 + 8) + 0x18))
              (*(long **)(puVar6 + 8),&UNK_110c9a8b0,&uStack_260,puVar3);
    func_0x000107c278ac(&puStack_248);
  }
  return;
}



/* Entry: 10af74c08; end: 10af74c1b; -[SCSnapTokenMainAppLogger logInvalidRefreshTokenOnSnapSessionFetchWithStatus:source:] */

void FUN_10af74c08(long param_1,undefined8 param_2,undefined *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar3 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar11 = (undefined8 *)0x0;
  if (lVar1 != 0) {
    plVar10 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ed215;
    }
    else {
      puVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,puVar2);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar3 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_60,puVar3);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar2 = &UNK_110c9a7c0;
    unaff_x23 = &uStack_98;
    puVar3 = &uStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c9a7c0,puVar3,1);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar1 = 0;
    puVar11 = auStack_78;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  _objc_release(param_4);
  puVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar5 = puVar4;
  __Unwind_Resume();
  puVar9 = &uStack_120;
  pcStack_a8 = FUN_10af78628;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = puVar2;
  puVar8 = puVar3;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar11;
  puStack_c8 = puVar4;
  puStack_c0 = param_4;
  puStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  plVar10 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar5 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar4 = &UNK_10f6ed215;
    }
    else {
      puVar4 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    unaff_x23 = auStack_100;
    func_0x000107c278b8(auStack_100,puVar4);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x000107c27984(&uStack_120,auStack_100,&lStack_e8,1);
    puVar7 = &UNK_110c9a810;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c9a810,&uStack_120,puVar3);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x000107c278ac(&puStack_108);
    puVar8 = puVar9;
    puVar11 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar8 = puVar9;
      puVar11 = &uStack_120;
    }
  }
  puVar4 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar6 = puVar4;
  __Unwind_Resume();
  pcStack_128 = FUN_10af7879c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar7;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar11;
  plStack_148 = plVar10;
  puStack_140 = puVar4;
  puStack_138 = puVar2;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar7);
  if (puVar6 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar6 + 8);
    _objc_retain(puVar7);
    if (puVar7 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ed215;
    }
    else {
      puVar2 = puVar7;
      _objc_retainAutorelease(puVar7);
      func_0x00010bdc3520();
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_180,puVar2);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x000107c27984(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar5 = &UNK_110c9a860;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c9a860,&uStack_1a0,puVar8);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x000107c278ac(&puStack_188);
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
    }
  }
  puVar2 = puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  _objc_release(puVar7);
  puVar4 = puVar2;
  __Unwind_Resume();
  puStack_1c8 = (undefined1 *)&uStack_1e0;
  pcStack_1a8 = FUN_10af78910;
  if (puVar4 != (undefined *)0x0) {
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    puStack_1c0 = puVar2;
    puStack_1b8 = puVar7;
    pppuStack_1b0 = &ppuStack_130;
    (**(code **)(**(long **)(puVar4 + 8) + 0x18))
              (*(long **)(puVar4 + 8),&UNK_110c9a8b0,&uStack_1e0,puVar5);
    func_0x000107c278ac(&puStack_1c8);
  }
  return;
}



/* Entry: 10af74c1c; end: 10af74c2b; -[SCSnapTokenMainAppLogger logSuccesfulRefreshTokenOnSessionFetchWithSource:] */

void FUN_10af74c1c(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 0x10);
  puVar6 = (undefined1 *)0x1;
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar8 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ed215;
    }
    else {
      puVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar2 = &UNK_110c9a810;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110c9a810,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar6 = (undefined1 *)puVar7;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar6 = (undefined1 *)puVar7;
    }
  }
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_88 = FUN_10af7879c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    plVar8 = *(long **)(puVar3 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar3 = &UNK_10f6ed215;
    }
    else {
      puVar3 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_e0,puVar3);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar5 = &UNK_110c9a860;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_110c9a860,&uStack_100,puVar6);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar4 = puVar3;
  __Unwind_Resume();
  puStack_128 = (undefined1 *)&uStack_140;
  pcStack_108 = FUN_10af78910;
  if (puVar4 != (undefined *)0x0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    puStack_120 = puVar3;
    puStack_118 = puVar2;
    ppuStack_110 = &puStack_90;
    (**(code **)(**(long **)(puVar4 + 8) + 0x18))
              (*(long **)(puVar4 + 8),&UNK_110c9a8b0,&uStack_140,puVar5);
    func_0x000107c278ac(&puStack_128);
  }
  return;
}



/* Entry: 10af74c2c; end: 10af74c3b; -[SCSnapTokenMainAppLogger logSnapTokenStorageHadToBeBackedUpWithOperation:] */

void FUN_10af74c2c(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar5 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ed215;
    }
    else {
      puVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar2 = &UNK_110c9a860;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110c9a860,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  puVar4 = puVar3;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_10af78910;
  if (puVar4 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar3;
    puStack_98 = param_3;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar4 + 8) + 0x18))
              (*(long **)(puVar4 + 8),&UNK_110c9a8b0,&uStack_c0,puVar2);
    func_0x000107c278ac(&puStack_a8);
  }
  return;
}



/* Entry: 10af74c3c; end: 10af74c47; -[SCSnapTokenMainAppLogger logSnapSessionStartWithoutRefreshToken] */

void FUN_10af74c3c(long param_1)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110c9a8b0,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 10af74c48; end: 10af74c67; -[SCSnapTokenMainAppLogger logAttestationTotalLatencyWithSecs:] */

void FUN_10af74c48(double param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  lVar1 = *(long *)(param_2 + 0x10);
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      (**(code **)(**(long **)(lVar1 + 8) + 0x18))
                (*(long **)(lVar1 + 8),&UNK_110c9a9a0,&uStack_40,(long)(param_1 * 1000.0));
      puStack_28 = (undefined1 *)&uStack_40;
      func_0x000107c278ac(&puStack_28);
    }
    return;
  }
  return;
}



/* Entry: 10af74c68; end: 10af74c87; -[SCSnapTokenMainAppLogger logAttestationGenerationLatencyWithSecs:] */

void FUN_10af74c68(double param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  lVar1 = *(long *)(param_2 + 0x10);
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      uStack_40 = 0;
      uStack_38 = 0;
      uStack_30 = 0;
      (**(code **)(**(long **)(lVar1 + 8) + 0x18))
                (*(long **)(lVar1 + 8),&UNK_110c9a9f0,&uStack_40,(long)(param_1 * 1000.0));
      puStack_28 = (undefined1 *)&uStack_40;
      func_0x000107c278ac(&puStack_28);
    }
    return;
  }
  return;
}



/* Entry: 10af74c88; end: 10af74c93; -[SCSnapTokenMainAppLogger logSnapTokenStorageLatency:forMethodWithName:] */

void FUN_10af74c88(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x10);
  _objc_retain(param_4);
  if (lVar1 != 0) {
    FUN_10af77d70(lVar1,param_4,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10af74c94; end: 10af74cab; -[SCSnapTokenMainAppLogger logSnapTokenDiskStorageTokenReadOperationWithSuccess:errorCode:tokenType:] */

void FUN_10af74c94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be58c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logSnapTokenDiskStorageTokenOpe_112573cb0,
             &PTR____CFConstantStringClassReference_110df35d8,param_3,param_4,param_5);
  return;
}



/* Entry: 10af74cac; end: 10af74cc3; -[SCSnapTokenMainAppLogger logSnapTokenDiskStorageTokenWriteOperationWithSuccess:errorCode:tokenType:] */

void FUN_10af74cac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be58c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logSnapTokenDiskStorageTokenOpe_112573cb0,
             &PTR____CFConstantStringClassReference_110e0e998,param_3,param_4,param_5);
  return;
}



/* Entry: 10af74cc4; end: 10af74cdb; -[SCSnapTokenMainAppLogger logSnapTokenDiskStorageTokenDeleteOperationWithSuccess:errorCode:tokenType:] */

void FUN_10af74cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be58c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__logSnapTokenDiskStorageTokenOpe_112573cb0,
             &PTR____CFConstantStringClassReference_110db18b8,param_3,param_4,param_5);
  return;
}



/* Entry: 10af74cdc; end: 10af74ce7; -[SCSnapTokenMainAppLogger logSnapTokenAccessPostInvalidation] */

void FUN_10af74cdc(long param_1)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110c9a900,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 10af74ce8; end: 10af74cf7; -[SCSnapTokenMainAppLogger logSnapTokenDiskStorageAccessPostInvalidationWithOperation:] */

void FUN_10af74ce8(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lVar1 = *(long *)(param_1 + 0x10);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  if (lVar1 != 0) {
    plVar5 = *(long **)(lVar1 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ed215;
    }
    else {
      puVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar2);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar2 = &UNK_110c9a950;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110c9a950,&uStack_80,1);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  puVar4 = puVar3;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_10af78b74;
  if (puVar4 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar3;
    puStack_98 = param_3;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar4 + 8) + 0x18))
              (*(long **)(puVar4 + 8),&UNK_110c9a9a0,&uStack_c0,puVar2);
    func_0x000107c278ac(&puStack_a8);
  }
  return;
}



/* Entry: 10af74cf8; end: 10af74db7; -[SCSnapTokenMainAppLogger _logSnapTokenDiskStorageTokenOperation:success:errorCode:tokenType:] */

void FUN_10af74cf8(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c14de00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110dab0d8;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110daeeb8;
  }
  FUN_10af77f50(uVar3,puVar2,param_3,ppuVar1,param_6,1,param_7,param_8,param_5);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10af74db8; end: 10af74e1b; -[SCSnapTokenMainAppLogger logFatalCondition:] */

void FUN_10af74db8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf06140(param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_10af75928(*(undefined8 *)(param_1 + 0x10),lVar1,param_3,1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10af74e1c; end: 10af74e9f;  */

void FUN_10af74e1c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be67b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10af74ea0; end: 10af74ebb; -[SCSnapTokenMainAppLogger _onAppWillEnterForeground] */

void FUN_10af74ea0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if (*(char *)(param_1 + 0x20) == '\0') {
    uVar1 = 3;
  }
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined1 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 10af74ebc; end: 10af74ec3; -[SCSnapTokenMainAppLogger _onAppDidEnterBackground] */

void FUN_10af74ebc(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10af74ec4; end: 10af74ecb; -[SCSnapTokenMainAppLogger _onAppWillTerminate] */

void FUN_10af74ec4(long param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10af74ecc; end: 10af74f13; -[SCSnapTokenMainAppLogger .cxx_destruct] */

void FUN_10af74ecc(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af74f14; end: 10af74f43; -[SCSnapTokenManagerMainAppInternalDelegate .cxx_destruct] */

void FUN_10af74f14(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af74f44; end: 10af750b7;  */

/* WARNING: Removing unreachable block (ram,0x00010af755a4) */
/* WARNING: Removing unreachable block (ram,0x00010af758e8) */

void FUN_10af74f44(double param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined *param_6,undefined8 *param_7,undefined *param_8,
                  undefined8 *param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long **pplVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  long *plVar16;
  undefined8 *unaff_x22;
  long lVar17;
  undefined1 *puVar18;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined1 *puStack_3f8;
  undefined8 auStack_3f0 [2];
  char cStack_3d9;
  long lStack_3d8;
  undefined8 *puStack_3d0;
  undefined8 *puStack_3c8;
  undefined8 *puStack_3c0;
  undefined8 *puStack_3b8;
  undefined8 *puStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 ***pppuStack_3a0;
  code *pcStack_398;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 *puStack_370;
  undefined8 auStack_368 [2];
  char cStack_351;
  undefined8 auStack_350 [2];
  char cStack_339;
  long lStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined *puStack_320;
  undefined8 *puStack_318;
  undefined8 *puStack_310;
  undefined8 *puStack_308;
  undefined8 ***pppuStack_300;
  code *pcStack_2f8;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 auStack_2c8 [3];
  undefined1 auStack_2b0 [24];
  undefined1 auStack_298 [24];
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined1 *puStack_260;
  undefined8 *puStack_258;
  undefined *puStack_250;
  undefined8 *puStack_248;
  undefined *puStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined1 ***pppuStack_220;
  code *pcStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 *puStack_1f8;
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [24];
  undefined8 auStack_178 [2];
  char cStack_161;
  long alStack_160 [2];
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  long alStack_f0 [3];
  long *plStack_d8;
  long **applStack_d0 [2];
  char cStack_b9;
  long lStack_b8;
  undefined1 *puStack_b0;
  long *plStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar2 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar5 = param_4;
  _objc_retain(param_3);
  plVar16 = (long *)0x0;
  if (param_2 != 0) {
    plVar16 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = (undefined8 *)&UNK_110c99f00;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar5 = puVar2;
    param_5 = param_4;
    unaff_x22 = &uStack_80;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = puVar2;
      param_5 = param_4;
      unaff_x22 = &uStack_80;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  puVar3 = puVar2;
  __Unwind_Resume();
  plVar11 = alStack_f0;
  pcStack_88 = FUN_10af750b8;
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pplVar4 = (long **)0x0;
  puVar12 = puVar5;
  puStack_b0 = (undefined1 *)unaff_x22;
  plStack_a8 = plVar16;
  puStack_a0 = puVar2;
  puStack_98 = param_3;
  puStack_90 = &stack0xfffffffffffffff0;
  if (puVar3 != (undefined8 *)0x0) {
    plVar16 = (long *)puVar3[1];
    puVar15 = &UNK_10f6ed252;
    if ((int)puVar1 == 0) {
      puVar15 = &UNK_10f6ed257;
    }
    func_0x000107c278b8(applStack_d0,puVar15);
    alStack_f0[0] = 0;
    alStack_f0[1] = 0;
    alStack_f0[2] = 0;
    func_0x000107c27984(alStack_f0,applStack_d0,&lStack_b8,1);
    puVar1 = (undefined8 *)&UNK_110c99f50;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    pplVar4 = &plStack_d8;
    plStack_d8 = alStack_f0;
    func_0x000107c278ac();
    puVar12 = plVar11;
    param_5 = puVar5;
    plVar16 = alStack_f0;
    if (cStack_b9 < '\0') {
      pplVar4 = applStack_d0[0];
      __ZdlPv();
      puVar12 = plVar11;
      param_5 = puVar5;
      plVar16 = alStack_f0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return;
  }
  ___stack_chk_fail();
  plStack_d8 = plVar16;
  func_0x000107c278ac(&plStack_d8);
  if (cStack_b9 < '\0') {
    __ZdlPv(applStack_d0[0]);
  }
  __Unwind_Resume();
  puVar7 = &uStack_210;
  pcStack_f8 = FUN_10af751d0;
  alStack_160[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar2 = puVar12;
  puVar3 = param_5;
  puVar15 = param_6;
  puVar10 = param_7;
  ppuStack_100 = &puStack_90;
  _objc_retain(puVar1);
  _objc_retain(puVar12);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar18 = (undefined1 *)0x0;
  if (pplVar4 != (long **)0x0) {
    plVar16 = pplVar4[1];
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      puVar5 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_1f0,puVar5);
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(puVar12);
      puVar5 = puVar12;
      func_0x00010bdc3520(puVar12);
    }
    _objc_release(puVar12);
    func_0x000107c278b8(auStack_1d8,puVar5);
    _objc_retain(param_5);
    if (param_5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar5 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_1c0,puVar5);
    _objc_retain(param_6);
    if (param_6 == (undefined *)0x0) {
      puVar6 = &UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_6);
      puVar6 = param_6;
      func_0x00010bdc3520(param_6);
    }
    _objc_release(param_6);
    func_0x000107c278b8(auStack_1a8,puVar6);
    _objc_retain(param_7);
    if (param_7 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_7);
      puVar5 = param_7;
      func_0x00010bdc3520(param_7);
    }
    _objc_release(param_7);
    func_0x000107c278b8(auStack_190,puVar5);
    _objc_retain(param_8);
    if (param_8 == (undefined *)0x0) {
      puVar6 = &UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_8);
      puVar6 = param_8;
      func_0x00010bdc3520(param_8);
    }
    _objc_release(param_8);
    func_0x000107c278b8(auStack_178,puVar6);
    uStack_210 = 0;
    uStack_208 = 0;
    uStack_200 = 0;
    func_0x000107c27984(&uStack_210,auStack_1f0,alStack_160,6);
    puVar5 = (undefined8 *)&UNK_110c99fa0;
    (**(code **)(*plVar16 + 0x18))(plVar16);
    puStack_1f8 = (undefined1 *)&uStack_210;
    func_0x000107c278ac(&puStack_1f8);
    lVar17 = 0;
    puVar18 = auStack_1f0;
    puVar2 = puVar7;
    puVar3 = param_9;
    do {
      if ((&cStack_161)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_178 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x90);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar12);
  puVar7 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_160[0]) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_8);
  do {
    puVar18 = puVar18 + -0x18;
  } while (puVar18 != auStack_1f0);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar12);
  _objc_release(puVar1);
  puVar8 = puVar7;
  __Unwind_Resume();
  pcStack_218 = FUN_10af755f4;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar5;
  puVar13 = puVar2;
  puVar14 = puVar3;
  puStack_260 = puVar18;
  puStack_258 = puVar7;
  puStack_250 = param_8;
  puStack_248 = param_7;
  puStack_240 = param_6;
  puStack_238 = param_5;
  puStack_230 = puVar12;
  puStack_228 = puVar1;
  pppuStack_220 = &ppuStack_100;
  _objc_retain(puVar5);
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  _objc_retain(puVar15);
  if (puVar8 != (undefined8 *)0x0) {
    plVar16 = (long *)puVar8[1];
    _objc_retain(puVar5);
    if (puVar5 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    func_0x000107c278b8(auStack_2c8,puVar1);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar1 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_2b0,puVar1);
    _objc_retain(puVar3);
    if (puVar3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(puVar3);
      puVar1 = puVar3;
      func_0x00010bdc3520(puVar3);
    }
    _objc_release(puVar3);
    func_0x000107c278b8(auStack_298,puVar1);
    _objc_retain(puVar15);
    if (puVar15 == (undefined *)0x0) {
      puVar6 = &UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(puVar15);
      puVar6 = puVar15;
      func_0x00010bdc3520(puVar15);
    }
    _objc_release(puVar15);
    func_0x000107c278b8(auStack_280,puVar6);
    uStack_2e8 = 0;
    uStack_2e0 = 0;
    uStack_2d8 = 0;
    func_0x000107c27984(&uStack_2e8,auStack_2c8,&lStack_268,4);
    puVar9 = (undefined8 *)&UNK_110c99ff0;
    puVar7 = &uStack_2e8;
    puVar13 = &uStack_2e8;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110c99ff0,puVar13,puVar10);
    puStack_2d0 = puVar7;
    func_0x000107c278ac(&puStack_2d0);
    lVar17 = 0;
    puVar14 = puVar10;
    do {
      if ((&cStack_269)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_280 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x60);
  }
  _objc_release(puVar15);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar15);
  puVar12 = auStack_2c8;
  do {
    puVar7 = puVar7 + -3;
  } while (puVar7 != puVar12);
  _objc_release(puVar15);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar5);
  puVar8 = puVar1;
  __Unwind_Resume();
  pcStack_2f8 = FUN_10af75928;
  lStack_338 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar9;
  puVar7 = puVar13;
  puStack_330 = puVar12;
  puStack_328 = puVar1;
  puStack_320 = puVar15;
  puStack_318 = puVar3;
  puStack_310 = puVar2;
  puStack_308 = puVar5;
  pppuStack_300 = &pppuStack_220;
  _objc_retain(puVar9);
  _objc_retain(puVar13);
  puVar5 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    plVar16 = (long *)puVar8[1];
    _objc_retain(puVar9);
    if (puVar9 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      puVar1 = puVar9;
      _objc_retainAutorelease(puVar9);
      func_0x00010bdc3520();
    }
    _objc_release(puVar9);
    puVar12 = auStack_368;
    func_0x000107c278b8(auStack_368,puVar1);
    _objc_retain(puVar13);
    if (puVar13 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(puVar13);
      puVar1 = puVar13;
      func_0x00010bdc3520(puVar13);
    }
    _objc_release(puVar13);
    func_0x000107c278b8(auStack_350,puVar1);
    uStack_388 = 0;
    uStack_380 = 0;
    uStack_378 = 0;
    func_0x000107c27984(&uStack_388,auStack_368,&lStack_338,2);
    puVar10 = (undefined8 *)&UNK_110c9a040;
    puVar1 = &uStack_388;
    puVar7 = &uStack_388;
    (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110c9a040,puVar7,puVar14);
    puStack_370 = puVar1;
    func_0x000107c278ac(&puStack_370);
    lVar17 = 0;
    puVar5 = auStack_368;
    do {
      if ((&cStack_339)[lVar17] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_350 + lVar17));
      }
      lVar17 = lVar17 + -0x18;
    } while (lVar17 != -0x30);
  }
  _objc_release(puVar13);
  puVar2 = puVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_338) {
    ___stack_chk_fail();
    _objc_release(puVar13);
    if (cStack_351 < '\0') {
      __ZdlPv(auStack_368[0]);
    }
    _objc_release(puVar13);
    _objc_release(puVar9);
    puVar8 = puVar2;
    __Unwind_Resume();
    pcStack_398 = FUN_10af75b58;
    lStack_3d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = puVar10;
    puStack_3d0 = puVar12;
    puStack_3c8 = puVar1;
    puStack_3c0 = puVar5;
    puStack_3b8 = puVar2;
    puStack_3b0 = puVar13;
    puStack_3a8 = puVar9;
    pppuStack_3a0 = &pppuStack_300;
    _objc_retain(puVar10);
    if (puVar8 != (undefined8 *)0x0) {
      plVar16 = (long *)puVar8[1];
      _objc_retain(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f6ed215;
      }
      else {
        puVar1 = puVar10;
        _objc_retainAutorelease(puVar10);
        func_0x00010bdc3520();
      }
      _objc_release(puVar10);
      func_0x000107c278b8(auStack_3f0,puVar1);
      uStack_410 = 0;
      uStack_408 = 0;
      uStack_400 = 0;
      func_0x000107c27984(&uStack_410,auStack_3f0,&lStack_3d8,1);
      puVar3 = (undefined8 *)&UNK_110c9a0e0;
      (**(code **)(*plVar16 + 0x18))(plVar16,&UNK_110c9a0e0,&uStack_410,puVar7);
      puStack_3f8 = (undefined1 *)&uStack_410;
      func_0x000107c278ac(&puStack_3f8);
      if (cStack_3d9 < '\0') {
        __ZdlPv(auStack_3f0[0]);
      }
    }
    puVar1 = puVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3d8) {
      ___stack_chk_fail();
      _objc_release(puVar10);
      _objc_release(puVar10);
      __Unwind_Resume();
      _objc_retain(puVar3);
      if (puVar1 != (undefined8 *)0x0) {
        FUN_10af75b58(puVar1,puVar3,(long)(param_1 * 1000.0));
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar3);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10af750b8; end: 10af751cf;  */

/* WARNING: Removing unreachable block (ram,0x00010af755a4) */
/* WARNING: Removing unreachable block (ram,0x00010af758e8) */

void FUN_10af750b8(double param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined *param_6,undefined8 *param_7,undefined *param_8,
                  undefined8 *param_9)

{
  undefined1 **ppuVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  long *plVar15;
  undefined8 *unaff_x21;
  long lVar16;
  undefined1 *puVar17;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined1 *puStack_378;
  undefined8 auStack_370 [2];
  char cStack_359;
  long lStack_358;
  undefined8 *puStack_350;
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 ***pppuStack_320;
  code *pcStack_318;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 auStack_2e8 [2];
  char cStack_2d1;
  undefined8 auStack_2d0 [2];
  char cStack_2b9;
  long lStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined1 ***pppuStack_280;
  code *pcStack_278;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 *puStack_250;
  undefined8 auStack_248 [3];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined1 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined1 **ppuStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 *puStack_178;
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined8 auStack_f8 [2];
  char cStack_e1;
  long alStack_e0 [2];
  undefined1 *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 *puStack_58;
  undefined1 **appuStack_50 [2];
  char cStack_39;
  long lStack_38;
  
  puVar2 = &uStack_70;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined1 **)0x0;
  puVar6 = param_4;
  if (param_2 != 0) {
    plVar15 = *(long **)(param_2 + 8);
    puVar14 = &UNK_10f6ed252;
    if ((int)param_3 == 0) {
      puVar14 = &UNK_10f6ed257;
    }
    func_0x000107c278b8(appuStack_50,puVar14);
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    func_0x000107c27984(&uStack_70,appuStack_50,&lStack_38,1);
    param_3 = (undefined8 *)&UNK_110c99f50;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    ppuVar1 = &puStack_58;
    puStack_58 = (undefined1 *)&uStack_70;
    func_0x000107c278ac();
    puVar6 = puVar2;
    param_5 = param_4;
    unaff_x21 = &uStack_70;
    if (cStack_39 < '\0') {
      ppuVar1 = appuStack_50[0];
      __ZdlPv();
      puVar6 = puVar2;
      param_5 = param_4;
      unaff_x21 = &uStack_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  puStack_58 = (undefined1 *)unaff_x21;
  func_0x000107c278ac(&puStack_58);
  if (cStack_39 < '\0') {
    __ZdlPv(appuStack_50[0]);
  }
  __Unwind_Resume();
  puVar4 = &uStack_190;
  pcStack_78 = FUN_10af751d0;
  alStack_e0[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar8 = puVar6;
  puVar11 = param_5;
  puVar14 = param_6;
  puVar13 = param_7;
  puStack_80 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  _objc_retain(puVar6);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar17 = (undefined1 *)0x0;
  if (ppuVar1 != (undefined1 **)0x0) {
    plVar15 = (long *)ppuVar1[1];
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      puVar2 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_170,puVar2);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar2 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_158,puVar2);
    _objc_retain(param_5);
    if (param_5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar2 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_140,puVar2);
    _objc_retain(param_6);
    if (param_6 == (undefined *)0x0) {
      puVar3 = &UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_6);
      puVar3 = param_6;
      func_0x00010bdc3520(param_6);
    }
    _objc_release(param_6);
    func_0x000107c278b8(auStack_128,puVar3);
    _objc_retain(param_7);
    if (param_7 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_7);
      puVar2 = param_7;
      func_0x00010bdc3520(param_7);
    }
    _objc_release(param_7);
    func_0x000107c278b8(auStack_110,puVar2);
    _objc_retain(param_8);
    if (param_8 == (undefined *)0x0) {
      puVar3 = &UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_8);
      puVar3 = param_8;
      func_0x00010bdc3520(param_8);
    }
    _objc_release(param_8);
    func_0x000107c278b8(auStack_f8,puVar3);
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    func_0x000107c27984(&uStack_190,auStack_170,alStack_e0,6);
    puVar2 = (undefined8 *)&UNK_110c99fa0;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    puStack_178 = (undefined1 *)&uStack_190;
    func_0x000107c278ac(&puStack_178);
    lVar16 = 0;
    puVar17 = auStack_170;
    puVar8 = puVar4;
    puVar11 = param_9;
    do {
      if ((&cStack_e1)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_f8 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x90);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar6);
  puVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_e0[0]) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_8);
  do {
    puVar17 = puVar17 + -0x18;
  } while (puVar17 != auStack_170);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar6);
  _objc_release(param_3);
  puVar5 = puVar4;
  __Unwind_Resume();
  pcStack_198 = FUN_10af755f4;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = puVar2;
  puVar12 = puVar8;
  puVar9 = puVar11;
  puStack_1e0 = puVar17;
  puStack_1d8 = puVar4;
  puStack_1d0 = param_8;
  puStack_1c8 = param_7;
  puStack_1c0 = param_6;
  puStack_1b8 = param_5;
  puStack_1b0 = puVar6;
  puStack_1a8 = param_3;
  ppuStack_1a0 = &puStack_80;
  _objc_retain(puVar2);
  _objc_retain(puVar8);
  _objc_retain(puVar11);
  _objc_retain(puVar14);
  if (puVar5 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar5[1];
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      puVar6 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_248,puVar6);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar6 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x000107c278b8(auStack_230,puVar6);
    _objc_retain(puVar11);
    if (puVar11 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(puVar11);
      puVar6 = puVar11;
      func_0x00010bdc3520(puVar11);
    }
    _objc_release(puVar11);
    func_0x000107c278b8(auStack_218,puVar6);
    _objc_retain(puVar14);
    if (puVar14 == (undefined *)0x0) {
      puVar3 = &UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(puVar14);
      puVar3 = puVar14;
      func_0x00010bdc3520(puVar14);
    }
    _objc_release(puVar14);
    func_0x000107c278b8(auStack_200,puVar3);
    uStack_268 = 0;
    uStack_260 = 0;
    uStack_258 = 0;
    func_0x000107c27984(&uStack_268,auStack_248,&lStack_1e8,4);
    puVar10 = (undefined8 *)&UNK_110c99ff0;
    puVar4 = &uStack_268;
    puVar12 = &uStack_268;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110c99ff0,puVar12,puVar13);
    puStack_250 = puVar4;
    func_0x000107c278ac(&puStack_250);
    lVar16 = 0;
    puVar9 = puVar13;
    do {
      if ((&cStack_1e9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_200 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x60);
  }
  _objc_release(puVar14);
  _objc_release(puVar11);
  _objc_release(puVar8);
  puVar6 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar14);
  puVar13 = auStack_248;
  do {
    puVar4 = puVar4 + -3;
  } while (puVar4 != puVar13);
  _objc_release(puVar14);
  _objc_release(puVar11);
  _objc_release(puVar8);
  _objc_release(puVar2);
  puVar7 = puVar6;
  __Unwind_Resume();
  pcStack_278 = FUN_10af75928;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar10;
  puVar5 = puVar12;
  puStack_2b0 = puVar13;
  puStack_2a8 = puVar6;
  puStack_2a0 = puVar14;
  puStack_298 = puVar11;
  puStack_290 = puVar8;
  puStack_288 = puVar2;
  pppuStack_280 = &ppuStack_1a0;
  _objc_retain(puVar10);
  _objc_retain(puVar12);
  puVar2 = (undefined8 *)0x0;
  if (puVar7 != (undefined8 *)0x0) {
    plVar15 = (long *)puVar7[1];
    _objc_retain(puVar10);
    if (puVar10 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      puVar6 = puVar10;
      _objc_retainAutorelease(puVar10);
      func_0x00010bdc3520();
    }
    _objc_release(puVar10);
    puVar13 = auStack_2e8;
    func_0x000107c278b8(auStack_2e8,puVar6);
    _objc_retain(puVar12);
    if (puVar12 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(puVar12);
      puVar6 = puVar12;
      func_0x00010bdc3520(puVar12);
    }
    _objc_release(puVar12);
    func_0x000107c278b8(auStack_2d0,puVar6);
    uStack_308 = 0;
    uStack_300 = 0;
    uStack_2f8 = 0;
    func_0x000107c27984(&uStack_308,auStack_2e8,&lStack_2b8,2);
    puVar4 = (undefined8 *)&UNK_110c9a040;
    puVar6 = &uStack_308;
    puVar5 = &uStack_308;
    (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110c9a040,puVar5,puVar9);
    puStack_2f0 = puVar6;
    func_0x000107c278ac(&puStack_2f0);
    lVar16 = 0;
    puVar2 = auStack_2e8;
    do {
      if ((&cStack_2b9)[lVar16] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_2d0 + lVar16));
      }
      lVar16 = lVar16 + -0x18;
    } while (lVar16 != -0x30);
  }
  _objc_release(puVar12);
  puVar8 = puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2b8) {
    ___stack_chk_fail();
    _objc_release(puVar12);
    if (cStack_2d1 < '\0') {
      __ZdlPv(auStack_2e8[0]);
    }
    _objc_release(puVar12);
    _objc_release(puVar10);
    puVar9 = puVar8;
    __Unwind_Resume();
    pcStack_318 = FUN_10af75b58;
    lStack_358 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar11 = puVar4;
    puStack_350 = puVar13;
    puStack_348 = puVar6;
    puStack_340 = puVar2;
    puStack_338 = puVar8;
    puStack_330 = puVar12;
    puStack_328 = puVar10;
    pppuStack_320 = &pppuStack_280;
    _objc_retain(puVar4);
    if (puVar9 != (undefined8 *)0x0) {
      plVar15 = (long *)puVar9[1];
      _objc_retain(puVar4);
      if (puVar4 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)&UNK_10f6ed215;
      }
      else {
        puVar6 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      func_0x000107c278b8(auStack_370,puVar6);
      uStack_390 = 0;
      uStack_388 = 0;
      uStack_380 = 0;
      func_0x000107c27984(&uStack_390,auStack_370,&lStack_358,1);
      puVar11 = (undefined8 *)&UNK_110c9a0e0;
      (**(code **)(*plVar15 + 0x18))(plVar15,&UNK_110c9a0e0,&uStack_390,puVar5);
      puStack_378 = (undefined1 *)&uStack_390;
      func_0x000107c278ac(&puStack_378);
      if (cStack_359 < '\0') {
        __ZdlPv(auStack_370[0]);
      }
    }
    puVar6 = puVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_358) {
      ___stack_chk_fail();
      _objc_release(puVar4);
      _objc_release(puVar4);
      __Unwind_Resume();
      _objc_retain(puVar11);
      if (puVar6 != (undefined8 *)0x0) {
        FUN_10af75b58(puVar6,puVar11,(long)(param_1 * 1000.0));
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar11);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10af751d0; end: 10af755f3;  */

/* WARNING: Removing unreachable block (ram,0x00010af755a4) */
/* WARNING: Removing unreachable block (ram,0x00010af758e8) */

void FUN_10af751d0(double param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined *param_5,undefined *param_6,undefined *param_7,undefined *param_8,
                  undefined *param_9)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined1 *puVar16;
  long *plVar17;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined1 *puStack_308;
  undefined8 auStack_300 [2];
  char cStack_2e9;
  long lStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined1 ***pppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined8 auStack_278 [2];
  char cStack_261;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined1 **ppuStack_210;
  code *pcStack_208;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 auStack_1d8 [3];
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined8 auStack_190 [2];
  char cStack_179;
  long lStack_178;
  undefined1 *puStack_170;
  undefined8 *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined8 auStack_88 [2];
  char cStack_71;
  long alStack_70 [2];
  
  puVar3 = &uStack_120;
  alStack_70[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar7 = param_4;
  puVar2 = param_5;
  puVar13 = param_6;
  puVar12 = param_7;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar16 = (undefined1 *)0x0;
  if (param_2 != 0) {
    plVar17 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_100,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_e8,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar2 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_d0,puVar2);
    _objc_retain(param_6);
    if (param_6 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_6);
      puVar2 = param_6;
      func_0x00010bdc3520(param_6);
    }
    _objc_release(param_6);
    func_0x000107c278b8(auStack_b8,puVar2);
    _objc_retain(param_7);
    if (param_7 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_7);
      puVar2 = param_7;
      func_0x00010bdc3520(param_7);
    }
    _objc_release(param_7);
    func_0x000107c278b8(auStack_a0,puVar2);
    _objc_retain(param_8);
    if (param_8 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_8);
      puVar2 = param_8;
      func_0x00010bdc3520(param_8);
    }
    _objc_release(param_8);
    func_0x000107c278b8(auStack_88,puVar2);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x000107c27984(&uStack_120,auStack_100,alStack_70,6);
    puVar1 = (undefined8 *)&UNK_110c99fa0;
    (**(code **)(*plVar17 + 0x18))(plVar17);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x000107c278ac(&puStack_108);
    lVar15 = 0;
    puVar16 = auStack_100;
    puVar7 = puVar3;
    puVar2 = param_9;
    do {
      if ((&cStack_71)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_88 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x90);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == alStack_70[0]) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_8);
  do {
    puVar16 = puVar16 + -0x18;
  } while (puVar16 != auStack_100);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_128 = FUN_10af755f4;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar1;
  puVar10 = puVar7;
  puVar5 = puVar2;
  puStack_170 = puVar16;
  puStack_168 = puVar3;
  puStack_160 = param_8;
  puStack_158 = param_7;
  puStack_150 = param_6;
  puStack_148 = param_5;
  puStack_140 = param_4;
  puStack_138 = param_3;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar7);
  _objc_retain(puVar2);
  _objc_retain(puVar13);
  if (puVar4 != (undefined8 *)0x0) {
    plVar17 = (long *)puVar4[1];
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_1d8,puVar3);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar3 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_1c0,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar5 = &UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_1a8,puVar5);
    _objc_retain(puVar13);
    if (puVar13 == (undefined *)0x0) {
      puVar5 = &UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(puVar13);
      puVar5 = puVar13;
      func_0x00010bdc3520(puVar13);
    }
    _objc_release(puVar13);
    func_0x000107c278b8(auStack_190,puVar5);
    uStack_1f8 = 0;
    uStack_1f0 = 0;
    uStack_1e8 = 0;
    func_0x000107c27984(&uStack_1f8,auStack_1d8,&lStack_178,4);
    puVar9 = (undefined8 *)&UNK_110c99ff0;
    puVar3 = &uStack_1f8;
    puVar10 = &uStack_1f8;
    (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110c99ff0,puVar10,puVar12);
    puStack_1e0 = puVar3;
    func_0x000107c278ac(&puStack_1e0);
    lVar15 = 0;
    puVar5 = puVar12;
    do {
      if ((&cStack_179)[lVar15] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_190 + lVar15));
      }
      lVar15 = lVar15 + -0x18;
    } while (lVar15 != -0x60);
  }
  _objc_release(puVar13);
  _objc_release(puVar2);
  _objc_release(puVar7);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_178) {
    ___stack_chk_fail();
    _objc_release(puVar13);
    puVar14 = auStack_1d8;
    do {
      puVar3 = puVar3 + -3;
    } while (puVar3 != puVar14);
    _objc_release(puVar13);
    _objc_release(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar1);
    puVar6 = puVar4;
    __Unwind_Resume();
    pcStack_208 = FUN_10af75928;
    lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar3 = puVar9;
    puVar11 = puVar10;
    puStack_240 = puVar14;
    puStack_238 = puVar4;
    puStack_230 = puVar13;
    puStack_228 = puVar2;
    puStack_220 = puVar7;
    puStack_218 = puVar1;
    ppuStack_210 = &puStack_130;
    _objc_retain(puVar9);
    _objc_retain(puVar10);
    puVar1 = (undefined8 *)0x0;
    if (puVar6 != (undefined8 *)0x0) {
      plVar17 = (long *)puVar6[1];
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f6ed215;
      }
      else {
        puVar1 = puVar9;
        _objc_retainAutorelease(puVar9);
        func_0x00010bdc3520();
      }
      _objc_release(puVar9);
      puVar14 = auStack_278;
      func_0x000107c278b8(auStack_278,puVar1);
      _objc_retain(puVar10);
      if (puVar10 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f6ed215;
      }
      else {
        _objc_retainAutorelease(puVar10);
        puVar1 = puVar10;
        func_0x00010bdc3520(puVar10);
      }
      _objc_release(puVar10);
      func_0x000107c278b8(auStack_260,puVar1);
      uStack_298 = 0;
      uStack_290 = 0;
      uStack_288 = 0;
      func_0x000107c27984(&uStack_298,auStack_278,&lStack_248,2);
      puVar3 = (undefined8 *)&UNK_110c9a040;
      puVar4 = &uStack_298;
      puVar11 = &uStack_298;
      (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110c9a040,puVar11,puVar5);
      puStack_280 = puVar4;
      func_0x000107c278ac(&puStack_280);
      lVar15 = 0;
      puVar1 = auStack_278;
      do {
        if ((&cStack_249)[lVar15] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_260 + lVar15));
        }
        lVar15 = lVar15 + -0x18;
      } while (lVar15 != -0x30);
    }
    _objc_release(puVar10);
    puVar7 = puVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_248) {
      ___stack_chk_fail();
      _objc_release(puVar10);
      if (cStack_261 < '\0') {
        __ZdlPv(auStack_278[0]);
      }
      _objc_release(puVar10);
      _objc_release(puVar9);
      puVar8 = puVar7;
      __Unwind_Resume();
      pcStack_2a8 = FUN_10af75b58;
      lStack_2e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar6 = puVar3;
      puStack_2e0 = puVar14;
      puStack_2d8 = puVar4;
      puStack_2d0 = puVar1;
      puStack_2c8 = puVar7;
      puStack_2c0 = puVar10;
      puStack_2b8 = puVar9;
      pppuStack_2b0 = &ppuStack_210;
      _objc_retain(puVar3);
      if (puVar8 != (undefined8 *)0x0) {
        plVar17 = (long *)puVar8[1];
        _objc_retain(puVar3);
        if (puVar3 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)&UNK_10f6ed215;
        }
        else {
          puVar1 = puVar3;
          _objc_retainAutorelease(puVar3);
          func_0x00010bdc3520();
        }
        _objc_release(puVar3);
        func_0x000107c278b8(auStack_300,puVar1);
        uStack_320 = 0;
        uStack_318 = 0;
        uStack_310 = 0;
        func_0x000107c27984(&uStack_320,auStack_300,&lStack_2e8,1);
        puVar6 = (undefined8 *)&UNK_110c9a0e0;
        (**(code **)(*plVar17 + 0x18))(plVar17,&UNK_110c9a0e0,&uStack_320,puVar11);
        puStack_308 = (undefined1 *)&uStack_320;
        func_0x000107c278ac(&puStack_308);
        if (cStack_2e9 < '\0') {
          __ZdlPv(auStack_300[0]);
        }
      }
      puVar1 = puVar3;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2e8) {
        ___stack_chk_fail();
        _objc_release(puVar3);
        _objc_release(puVar3);
        __Unwind_Resume();
        _objc_retain(puVar6);
        if (puVar1 != (undefined8 *)0x0) {
          FUN_10af75b58(puVar1,puVar6,(long)(param_1 * 1000.0));
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar6);
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10af755f4; end: 10af75927;  */

/* WARNING: Removing unreachable block (ram,0x00010af758e8) */

void FUN_10af755f4(double param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined *param_5,undefined *param_6,undefined *param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *unaff_x25;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined1 *puStack_1e8;
  undefined8 auStack_1e0 [2];
  char cStack_1c9;
  long lStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 *puStack_160;
  undefined8 auStack_158 [2];
  char cStack_141;
  undefined8 auStack_140 [2];
  char cStack_129;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 auStack_b8 [3];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar8 = param_4;
  puVar2 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_2 != 0) {
    plVar12 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_b8,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_a0,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar2 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_88,puVar2);
    _objc_retain(param_6);
    if (param_6 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_6);
      puVar2 = param_6;
      func_0x00010bdc3520(param_6);
    }
    _objc_release(param_6);
    func_0x000107c278b8(auStack_70,puVar2);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    func_0x000107c27984(&uStack_d8,auStack_b8,&lStack_58,4);
    puVar1 = (undefined8 *)&UNK_110c99ff0;
    unaff_x25 = &uStack_d8;
    puVar8 = &uStack_d8;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110c99ff0,puVar8,param_7);
    puStack_c0 = unaff_x25;
    func_0x000107c278ac(&puStack_c0);
    lVar11 = 0;
    puVar2 = param_7;
    do {
      if ((&cStack_59)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x60);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_6);
  puVar13 = auStack_b8;
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != puVar13);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_e8 = FUN_10af75928;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar9 = puVar8;
  puStack_120 = puVar13;
  puStack_118 = puVar3;
  puStack_110 = param_6;
  puStack_108 = param_5;
  puStack_100 = param_4;
  puStack_f8 = param_3;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar8);
  puVar10 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar12 = (long *)puVar4[1];
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    puVar13 = auStack_158;
    func_0x000107c278b8(auStack_158,puVar3);
    _objc_retain(puVar8);
    if (puVar8 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar3 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x000107c278b8(auStack_140,puVar3);
    uStack_178 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    func_0x000107c27984(&uStack_178,auStack_158,&lStack_128,2);
    puVar6 = (undefined8 *)&UNK_110c9a040;
    puVar3 = &uStack_178;
    puVar9 = &uStack_178;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110c9a040,puVar9,puVar2);
    puStack_160 = puVar3;
    func_0x000107c278ac(&puStack_160);
    lVar11 = 0;
    puVar10 = auStack_158;
    do {
      if ((&cStack_129)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_140 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar8);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
    ___stack_chk_fail();
    _objc_release(puVar8);
    if (cStack_141 < '\0') {
      __ZdlPv(auStack_158[0]);
    }
    _objc_release(puVar8);
    _objc_release(puVar1);
    puVar5 = puVar4;
    __Unwind_Resume();
    pcStack_188 = FUN_10af75b58;
    lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar7 = puVar6;
    puStack_1c0 = puVar13;
    puStack_1b8 = puVar3;
    puStack_1b0 = puVar10;
    puStack_1a8 = puVar4;
    puStack_1a0 = puVar8;
    puStack_198 = puVar1;
    ppuStack_190 = &puStack_f0;
    _objc_retain(puVar6);
    if (puVar5 != (undefined8 *)0x0) {
      plVar12 = (long *)puVar5[1];
      _objc_retain(puVar6);
      if (puVar6 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f6ed215;
      }
      else {
        puVar1 = puVar6;
        _objc_retainAutorelease(puVar6);
        func_0x00010bdc3520();
      }
      _objc_release(puVar6);
      func_0x000107c278b8(auStack_1e0,puVar1);
      uStack_200 = 0;
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      func_0x000107c27984(&uStack_200,auStack_1e0,&lStack_1c8,1);
      puVar7 = (undefined8 *)&UNK_110c9a0e0;
      (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_110c9a0e0,&uStack_200,puVar9);
      puStack_1e8 = (undefined1 *)&uStack_200;
      func_0x000107c278ac(&puStack_1e8);
      if (cStack_1c9 < '\0') {
        __ZdlPv(auStack_1e0[0]);
      }
    }
    puVar1 = puVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c8) {
      ___stack_chk_fail();
      _objc_release(puVar6);
      _objc_release(puVar6);
      __Unwind_Resume();
      _objc_retain(puVar7);
      if (puVar1 != (undefined8 *)0x0) {
        FUN_10af75b58(puVar1,puVar7,(long)(param_1 * 1000.0));
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar7);
      return;
    }
    return;
  }
  return;
}



/* Entry: 10af75928; end: 10af75b57;  */

void FUN_10af75928(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar2 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar8 = (undefined8 *)0x0;
  if (param_2 != 0) {
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ed215;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110c9a040;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110c9a040,puVar2,param_5);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar6 = 0;
    puVar8 = auStack_78;
    do {
      if ((&cStack_49)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != -0x30);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_10af75b58;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar8;
  puStack_c8 = puVar3;
  puStack_c0 = param_4;
  puStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar4 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f6ed215;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x000107c27984(&uStack_120,auStack_100,&lStack_e8,1);
    puVar5 = &UNK_110c9a0e0;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110c9a0e0,&uStack_120,puVar2);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x000107c278ac(&puStack_108);
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  _objc_retain(puVar5);
  if (puVar3 != (undefined *)0x0) {
    FUN_10af75b58(puVar3,puVar5,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 10af75b58; end: 10af75ccb;  */

void FUN_10af75b58(double param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar3 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ed215;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110c9a0e0;
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110c9a0e0,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    FUN_10af75b58(puVar2,puVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af75ccc; end: 10af75d37;  */

void FUN_10af75ccc(double param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_10af75b58(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af75d38; end: 10af7608f;  */

/* WARNING: Removing unreachable block (ram,0x00010af76050) */
/* WARNING: Removing unreachable block (ram,0x00010af763a4) */

void FUN_10af75d38(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined *param_5,undefined *param_6,undefined *param_7)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 *unaff_x25;
  undefined *unaff_x26;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 auStack_198 [3];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined8 auStack_150 [2];
  char cStack_139;
  long lStack_138;
  undefined *puStack_130;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 *puStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 auStack_b8 [3];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar3 = param_4;
  puVar9 = param_5;
  puVar11 = param_6;
  puVar7 = param_7;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    puVar2 = &UNK_110c9a130;
    (**(code **)(*plVar1 + 0x28))();
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f6ed215;
      }
      else {
        puVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x000107c278b8(auStack_b8,puVar2);
      _objc_retain(param_4);
      if (param_4 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f6ed215;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar3 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x000107c278b8(auStack_a0,puVar3);
      _objc_retain(param_5);
      if (param_5 == (undefined *)0x0) {
        puVar2 = &UNK_10f6ed215;
      }
      else {
        _objc_retainAutorelease(param_5);
        puVar2 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x000107c278b8(auStack_88,puVar2);
      _objc_retain(param_6);
      if (param_6 == (undefined *)0x0) {
        unaff_x26 = &UNK_10f6ed215;
      }
      else {
        _objc_retainAutorelease(param_6);
        unaff_x26 = param_6;
        func_0x00010bdc3520();
      }
      _objc_release(param_6);
      func_0x000107c278b8(auStack_70,unaff_x26);
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      func_0x000107c27984(&uStack_d8,auStack_b8,&lStack_58,4);
      puVar9 = (undefined *)((long)param_7 * 100);
      puVar2 = &UNK_110c9a130;
      unaff_x25 = &uStack_d8;
      puVar3 = &uStack_d8;
      (**(code **)(*plVar1 + 0x18))(plVar1);
      puStack_c0 = unaff_x25;
      func_0x000107c278ac(&puStack_c0);
      lVar13 = 0;
      do {
        if ((&cStack_59)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x60);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_6);
  puStack_120 = auStack_b8;
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != puStack_120);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar5 = puVar4;
  __Unwind_Resume();
  pcStack_e8 = FUN_10af76090;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = puVar2;
  puVar6 = puVar3;
  puVar10 = puVar9;
  puVar12 = puVar11;
  puStack_130 = unaff_x26;
  puStack_128 = unaff_x25;
  puStack_118 = puVar4;
  puStack_110 = param_6;
  puStack_108 = param_5;
  puStack_100 = param_4;
  puStack_f8 = param_3;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(puVar3);
  _objc_retain(puVar9);
  _objc_retain(puVar11);
  if (puVar5 != (undefined *)0x0) {
    plVar1 = *(long **)(puVar5 + 8);
    puVar8 = &UNK_110c9a180;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110c9a180);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(puVar5 + 8);
      _objc_retain(puVar2);
      if (puVar2 == (undefined *)0x0) {
        puVar4 = &UNK_10f6ed215;
      }
      else {
        puVar4 = puVar2;
        _objc_retainAutorelease(puVar2);
        func_0x00010bdc3520();
      }
      _objc_release(puVar2);
      func_0x000107c278b8(auStack_198,puVar4);
      _objc_retain(puVar3);
      if (puVar3 == (undefined8 *)0x0) {
        puVar6 = (undefined8 *)&UNK_10f6ed215;
      }
      else {
        _objc_retainAutorelease(puVar3);
        puVar6 = puVar3;
        func_0x00010bdc3520(puVar3);
      }
      _objc_release(puVar3);
      func_0x000107c278b8(auStack_180,puVar6);
      _objc_retain(puVar9);
      if (puVar9 == (undefined *)0x0) {
        puVar4 = &UNK_10f6ed215;
      }
      else {
        _objc_retainAutorelease(puVar9);
        puVar4 = puVar9;
        func_0x00010bdc3520(puVar9);
      }
      _objc_release(puVar9);
      func_0x000107c278b8(auStack_168,puVar4);
      _objc_retain(puVar11);
      if (puVar11 == (undefined *)0x0) {
        puVar4 = &UNK_10f6ed215;
      }
      else {
        _objc_retainAutorelease(puVar11);
        puVar4 = puVar11;
        func_0x00010bdc3520(puVar11);
      }
      _objc_release(puVar11);
      func_0x000107c278b8(auStack_150,puVar4);
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      func_0x000107c27984(&uStack_1b8,auStack_198,&lStack_138,4);
      puVar8 = &UNK_110c9a180;
      unaff_x25 = &uStack_1b8;
      puVar6 = &uStack_1b8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110c9a180,puVar6,puVar7);
      puStack_1a0 = unaff_x25;
      func_0x000107c278ac(&puStack_1a0);
      lVar13 = 0;
      puVar10 = puVar7;
      do {
        if ((&cStack_139)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_150 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x60);
    }
  }
  _objc_release(puVar11);
  _objc_release(puVar9);
  _objc_release(puVar3);
  puVar7 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
    ___stack_chk_fail();
    _objc_release(puVar11);
    do {
      unaff_x25 = unaff_x25 + -3;
    } while (unaff_x25 != auStack_198);
    _objc_release(puVar11);
    _objc_release(puVar9);
    _objc_release(puVar3);
    _objc_release(puVar2);
    __Unwind_Resume();
    _objc_retain(puVar8);
    _objc_retain(puVar6);
    _objc_retain(puVar10);
    _objc_retain(puVar12);
    if (puVar7 != (undefined *)0x0) {
      FUN_10af76090(puVar7,puVar8,puVar6,puVar10,puVar12,(long)(param_1 * 1000.0));
    }
    _objc_release(puVar12);
    _objc_release(puVar10);
    _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar8);
    return;
  }
  return;
}



/* Entry: 10af76090; end: 10af763e3;  */

/* WARNING: Removing unreachable block (ram,0x00010af763a4) */

void FUN_10af76090(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined *param_5,undefined *param_6,undefined *param_7)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *unaff_x25;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 auStack_b8 [3];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  puVar3 = param_4;
  puVar5 = param_5;
  puVar6 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_2 != 0) {
    plVar1 = *(long **)(param_2 + 8);
    puVar2 = &UNK_110c9a180;
    (**(code **)(*plVar1 + 0x28))(plVar1,&UNK_110c9a180);
    if ((int)plVar1 != 0) {
      plVar1 = *(long **)(param_2 + 8);
      _objc_retain(param_3);
      if (param_3 == (undefined *)0x0) {
        puVar2 = &UNK_10f6ed215;
      }
      else {
        puVar2 = param_3;
        _objc_retainAutorelease(param_3);
        func_0x00010bdc3520();
      }
      _objc_release(param_3);
      func_0x000107c278b8(auStack_b8,puVar2);
      _objc_retain(param_4);
      if (param_4 == (undefined8 *)0x0) {
        puVar3 = (undefined8 *)&UNK_10f6ed215;
      }
      else {
        _objc_retainAutorelease(param_4);
        puVar3 = param_4;
        func_0x00010bdc3520(param_4);
      }
      _objc_release(param_4);
      func_0x000107c278b8(auStack_a0,puVar3);
      _objc_retain(param_5);
      if (param_5 == (undefined *)0x0) {
        puVar2 = &UNK_10f6ed215;
      }
      else {
        _objc_retainAutorelease(param_5);
        puVar2 = param_5;
        func_0x00010bdc3520(param_5);
      }
      _objc_release(param_5);
      func_0x000107c278b8(auStack_88,puVar2);
      _objc_retain(param_6);
      if (param_6 == (undefined *)0x0) {
        puVar2 = &UNK_10f6ed215;
      }
      else {
        _objc_retainAutorelease(param_6);
        puVar2 = param_6;
        func_0x00010bdc3520(param_6);
      }
      _objc_release(param_6);
      func_0x000107c278b8(auStack_70,puVar2);
      uStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      func_0x000107c27984(&uStack_d8,auStack_b8,&lStack_58,4);
      puVar2 = &UNK_110c9a180;
      unaff_x25 = &uStack_d8;
      puVar3 = &uStack_d8;
      (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110c9a180,puVar3,param_7);
      puStack_c0 = unaff_x25;
      func_0x000107c278ac(&puStack_c0);
      lVar7 = 0;
      puVar5 = param_7;
      do {
        if ((&cStack_59)[lVar7] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar7));
        }
        lVar7 = lVar7 + -0x18;
      } while (lVar7 != -0x60);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  puVar4 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_6);
    do {
      unaff_x25 = unaff_x25 + -3;
    } while (unaff_x25 != auStack_b8);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    __Unwind_Resume();
    _objc_retain(puVar2);
    _objc_retain(puVar3);
    _objc_retain(puVar5);
    _objc_retain(puVar6);
    if (puVar4 != (undefined *)0x0) {
      FUN_10af76090(puVar4,puVar2,puVar3,puVar5,puVar6,(long)(param_1 * 1000.0));
    }
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10af763e4; end: 10af764bf;  */

void FUN_10af763e4(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_2 != 0) {
    FUN_10af76090(param_2,param_3,param_4,param_5,param_6,(long)(param_1 * 1000.0));
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af764c0; end: 10af7677f;  */

/* WARNING: Removing unreachable block (ram,0x00010af76748) */
/* WARNING: Removing unreachable block (ram,0x00010af76a08) */

void FUN_10af764c0(double param_1,long param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 *unaff_x24;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined8 auStack_130 [2];
  char cStack_119;
  long lStack_118;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar6 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar5 = param_4;
  puVar8 = param_5;
  puVar3 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    plVar11 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ed215;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_a0,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_88,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar1 = param_5;
      func_0x00010bdc3520();
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_110c9a310;
    (**(code **)(*plVar11 + 0x18))(plVar11);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar10 = 0;
    puVar5 = (undefined *)puVar6;
    puVar8 = param_6;
    do {
      if ((&cStack_59)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar10 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  do {
    unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
  } while (unaff_x24 != (undefined8 *)auStack_a0);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar6 = &uStack_180;
  lStack_118 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puVar7 = puVar5;
  puVar9 = puVar8;
  _objc_retain(puVar1);
  _objc_retain(puVar5);
  _objc_retain(puVar8);
  if (puVar2 != (undefined *)0x0) {
    plVar11 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ed215;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_160,puVar2);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(puVar5);
      puVar2 = puVar5;
      func_0x00010bdc3520(puVar5);
    }
    _objc_release(puVar5);
    func_0x000107c278b8(auStack_148,puVar2);
    _objc_retain(puVar8);
    if (puVar8 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(puVar8);
      puVar2 = puVar8;
      func_0x00010bdc3520(puVar8);
    }
    _objc_release(puVar8);
    func_0x000107c278b8(auStack_130,puVar2);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_118,3);
    puVar4 = &UNK_110c9a360;
    (**(code **)(*plVar11 + 0x18))(plVar11,&UNK_110c9a360,&uStack_180,puVar3);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    lVar10 = 0;
    puVar7 = (undefined *)puVar6;
    puVar9 = puVar3;
    do {
      if ((&cStack_119)[lVar10] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_130 + lVar10));
      }
      lVar10 = lVar10 + -0x18;
      unaff_x24 = &uStack_180;
    } while (lVar10 != -0x48);
  }
  _objc_release(puVar8);
  _objc_release(puVar5);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_118) {
    ___stack_chk_fail();
    _objc_release(puVar8);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_160);
    _objc_release(puVar8);
    _objc_release(puVar5);
    _objc_release(puVar1);
    __Unwind_Resume();
    _objc_retain(puVar4);
    _objc_retain(puVar7);
    _objc_retain(puVar9);
    if (puVar3 != (undefined *)0x0) {
      FUN_10af76780(puVar3,puVar4,puVar7,puVar9,(long)(param_1 * 1000.0));
    }
    _objc_release(puVar9);
    _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar4);
    return;
  }
  return;
}



/* Entry: 10af76780; end: 10af76a3f;  */

/* WARNING: Removing unreachable block (ram,0x00010af76a08) */

void FUN_10af76780(double param_1,long param_2,undefined *param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *unaff_x24;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  puVar4 = &uStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar3 = param_4;
  puVar5 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ed215;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_a0,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_88,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar1 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_70,puVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x000107c27984(&uStack_c0,auStack_a0,&lStack_58,3);
    puVar1 = &UNK_110c9a360;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110c9a360,&uStack_c0,param_6);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x000107c278ac(&puStack_a8);
    lVar6 = 0;
    puVar3 = (undefined *)puVar4;
    puVar5 = param_6;
    do {
      if ((&cStack_59)[lVar6] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar6));
      }
      lVar6 = lVar6 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar6 != -0x48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_5);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_a0);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    __Unwind_Resume();
    _objc_retain(puVar1);
    _objc_retain(puVar3);
    _objc_retain(puVar5);
    if (puVar2 != (undefined *)0x0) {
      FUN_10af76780(puVar2,puVar1,puVar3,puVar5,(long)(param_1 * 1000.0));
    }
    _objc_release(puVar5);
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 10af76a40; end: 10af76af3;  */

void FUN_10af76a40(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_2 != 0) {
    FUN_10af76780(param_2,param_3,param_4,param_5,(long)(param_1 * 1000.0));
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af76af4; end: 10af76c67;  */

void FUN_10af76af4(double param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar3 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ed215;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110c9a3b0;
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110c9a3b0,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    FUN_10af76af4(puVar2,puVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af76c68; end: 10af76cd3;  */

void FUN_10af76c68(double param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_10af76af4(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af76cd4; end: 10af76f03;  */

void FUN_10af76cd4(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar2 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar5 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ed215;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110c9a400;
    puVar2 = &uStack_98;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110c9a400,puVar2,param_5);
    puStack_80 = &uStack_98;
    func_0x000107c278ac(&puStack_80);
    lVar4 = 0;
    do {
      if ((&cStack_49)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x30);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    FUN_10af76cd4(puVar3,puVar1,puVar2,(long)(param_1 * 1000.0));
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af76f04; end: 10af76f97;  */

void FUN_10af76f04(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    FUN_10af76cd4(param_2,param_3,param_4,(long)(param_1 * 1000.0));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af76f98; end: 10af771c7;  */

void FUN_10af76f98(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar2 = param_4;
  uVar8 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar5 = (undefined8 *)0x0;
  if (param_2 != 0) {
    plVar10 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ed215;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110c9a450;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c9a450,puVar2,param_5);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar9 = 0;
    puVar5 = auStack_78;
    uVar8 = param_5;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = puVar3;
  __Unwind_Resume();
  pcStack_a8 = FUN_10af771c8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar7 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar5;
  puStack_c8 = puVar3;
  puStack_c0 = param_4;
  puStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f6ed215;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_118,puVar3);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar5 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_100,puVar5);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x000107c27984(&uStack_138,auStack_118,&lStack_e8,2);
    puVar6 = &UNK_110c9a4a0;
    puVar7 = &uStack_138;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c9a4a0,puVar7,uVar8);
    puStack_120 = &uStack_138;
    func_0x000107c278ac(&puStack_120);
    lVar9 = 0;
    do {
      if ((&cStack_e9)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(puVar2);
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_101 < '\0') {
    __ZdlPv(auStack_118[0]);
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  __Unwind_Resume();
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  if (puVar3 != (undefined *)0x0) {
    FUN_10af771c8(puVar3,puVar6,puVar7,(long)(param_1 * 1000.0));
  }
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 10af771c8; end: 10af773f7;  */

void FUN_10af771c8(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar2 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    plVar5 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ed215;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110c9a4a0;
    puVar2 = &uStack_98;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_110c9a4a0,puVar2,param_5);
    puStack_80 = &uStack_98;
    func_0x000107c278ac(&puStack_80);
    lVar4 = 0;
    do {
      if ((&cStack_49)[lVar4] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar4));
      }
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != -0x30);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  if (puVar3 != (undefined *)0x0) {
    FUN_10af771c8(puVar3,puVar1,puVar2,(long)(param_1 * 1000.0));
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af773f8; end: 10af7748b;  */

void FUN_10af773f8(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_2 != 0) {
    FUN_10af771c8(param_2,param_3,param_4,(long)(param_1 * 1000.0));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af7748c; end: 10af77503;  */

void FUN_10af7748c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110c9a4f0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 10af77504; end: 10af77677;  */

void FUN_10af77504(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 *puStack_288;
  undefined8 auStack_280 [2];
  char cStack_269;
  long lStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined8 *puStack_250;
  long *plStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar7 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar10 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ed215;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x23 = auStack_60;
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110c9a540;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c9a540,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar7 = puVar3;
    param_5 = param_4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = puVar3;
      param_5 = param_4;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  pcStack_88 = FUN_10af77678;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar3 = puVar7;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar7);
  puVar12 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ed215;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_f8;
    func_0x000107c278b8(auStack_f8,puVar2);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar3 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x000107c27984(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar5 = &UNK_110c9a590;
    unaff_x23 = &uStack_118;
    puVar3 = &uStack_118;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c9a590,puVar3,param_5);
    puStack_100 = unaff_x23;
    func_0x000107c278ac(&puStack_100);
    lVar11 = 0;
    puVar12 = auStack_f8;
    do {
      if ((&cStack_c9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar7);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar9 = &uStack_1a0;
  pcStack_128 = FUN_10af778a8;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar5;
  puVar8 = puVar3;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar12;
  puStack_148 = puVar2;
  puStack_140 = puVar7;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar5);
  plVar10 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ed215;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = auStack_180;
    func_0x000107c278b8(auStack_180,puVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x000107c27984(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar6 = &UNK_110c9a5e0;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c9a5e0,&uStack_1a0,puVar3);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x000107c278ac(&puStack_188);
    puVar8 = puVar9;
    puVar12 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar8 = puVar9;
      puVar12 = &uStack_1a0;
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar4 = puVar1;
  __Unwind_Resume();
  puVar3 = &uStack_220;
  pcStack_1a8 = FUN_10af77a1c;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar6;
  puVar7 = puVar8;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar12;
  plStack_1c8 = plVar10;
  puStack_1c0 = puVar1;
  puStack_1b8 = puVar5;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(puVar6);
  plVar10 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ed215;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_200;
    func_0x000107c278b8(auStack_200,puVar1);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x000107c27984(&uStack_220,auStack_200,&lStack_1e8,1);
    puVar2 = &UNK_110c9a630;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c9a630,&uStack_220,puVar8);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x000107c278ac(&puStack_208);
    puVar7 = puVar3;
    puVar12 = &uStack_220;
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
      puVar7 = puVar3;
      puVar12 = &uStack_220;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_228 = FUN_10af77b90;
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar2;
  puStack_260 = unaff_x24;
  puStack_258 = unaff_x23;
  puStack_250 = puVar12;
  plStack_248 = plVar10;
  puStack_240 = puVar1;
  puStack_238 = puVar6;
  pppuStack_230 = &pppuStack_1b0;
  _objc_retain(puVar2);
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar2);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ed215;
    }
    else {
      puVar1 = puVar2;
      _objc_retainAutorelease(puVar2);
      func_0x00010bdc3520();
    }
    _objc_release(puVar2);
    func_0x000107c278b8(auStack_280,puVar1);
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    func_0x000107c27984(&uStack_2a0,auStack_280,&lStack_268,1);
    puVar5 = &UNK_110c9a680;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c9a680,&uStack_2a0,puVar7);
    puStack_288 = (undefined1 *)&uStack_2a0;
    func_0x000107c278ac(&puStack_288);
    if (cStack_269 < '\0') {
      __ZdlPv(auStack_280[0]);
    }
  }
  puVar1 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  __Unwind_Resume();
  _objc_retain(puVar5);
  if (puVar1 != (undefined *)0x0) {
    FUN_10af77b90(puVar1,puVar5,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 10af77678; end: 10af778a7;  */

void FUN_10af77678(double param_1,long param_2,undefined *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar2 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar11 = (undefined8 *)0x0;
  if (param_2 != 0) {
    plVar10 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ed215;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar2 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110c9a590;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c9a590,puVar2,param_5);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar9 = 0;
    puVar11 = auStack_78;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_4);
  puVar3 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_4);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar8 = &uStack_120;
  pcStack_a8 = FUN_10af778a8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar7 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar11;
  puStack_c8 = puVar3;
  puStack_c0 = param_4;
  puStack_b8 = param_3;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar10 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f6ed215;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_100;
    func_0x000107c278b8(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x000107c27984(&uStack_120,auStack_100,&lStack_e8,1);
    puVar6 = &UNK_110c9a5e0;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c9a5e0,&uStack_120,puVar2);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x000107c278ac(&puStack_108);
    puVar7 = puVar8;
    puVar11 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar7 = puVar8;
      puVar11 = &uStack_120;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar5 = puVar3;
  __Unwind_Resume();
  puVar8 = &uStack_1a0;
  pcStack_128 = FUN_10af77a1c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar6;
  puVar2 = puVar7;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar11;
  plStack_148 = plVar10;
  puStack_140 = puVar3;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar6);
  plVar10 = (long *)0x0;
  if (puVar5 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar5 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ed215;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    unaff_x23 = auStack_180;
    func_0x000107c278b8(auStack_180,puVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x000107c27984(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar4 = &UNK_110c9a630;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c9a630,&uStack_1a0,puVar7);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x000107c278ac(&puStack_188);
    puVar2 = puVar8;
    puVar11 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar2 = puVar8;
      puVar11 = &uStack_1a0;
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar5 = puVar1;
  __Unwind_Resume();
  pcStack_1a8 = FUN_10af77b90;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar4;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar11;
  plStack_1c8 = plVar10;
  puStack_1c0 = puVar1;
  puStack_1b8 = puVar6;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(puVar4);
  if (puVar5 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar5 + 8);
    _objc_retain(puVar4);
    if (puVar4 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ed215;
    }
    else {
      puVar1 = puVar4;
      _objc_retainAutorelease(puVar4);
      func_0x00010bdc3520();
    }
    _objc_release(puVar4);
    func_0x000107c278b8(auStack_200,puVar1);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x000107c27984(&uStack_220,auStack_200,&lStack_1e8,1);
    puVar3 = &UNK_110c9a680;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c9a680,&uStack_220,puVar2);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x000107c278ac(&puStack_208);
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
    }
  }
  puVar1 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  __Unwind_Resume();
  _objc_retain(puVar3);
  if (puVar1 != (undefined *)0x0) {
    FUN_10af77b90(puVar1,puVar3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10af778a8; end: 10af77a1b;  */

void FUN_10af778a8(double param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 auStack_160 [2];
  char cStack_149;
  long lStack_148;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar4 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar7 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ed215;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110c9a5e0;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110c9a5e0,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  puVar5 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  puVar6 = puVar4;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ed215;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar3 = &UNK_110c9a630;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110c9a630,&uStack_100,puVar4);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    puVar6 = (undefined1 *)puVar5;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar6 = (undefined1 *)puVar5;
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = puVar3;
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar3);
    if (puVar3 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ed215;
    }
    else {
      puVar1 = puVar3;
      _objc_retainAutorelease(puVar3);
      func_0x00010bdc3520();
    }
    _objc_release(puVar3);
    func_0x000107c278b8(auStack_160,puVar1);
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    func_0x000107c27984(&uStack_180,auStack_160,&lStack_148,1);
    puVar1 = &UNK_110c9a680;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110c9a680,&uStack_180,puVar6);
    puStack_168 = (undefined1 *)&uStack_180;
    func_0x000107c278ac(&puStack_168);
    if (cStack_149 < '\0') {
      __ZdlPv(auStack_160[0]);
    }
  }
  puVar2 = puVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    FUN_10af77b90(puVar2,puVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af77a1c; end: 10af77b8f;  */

void FUN_10af77a1c(double param_1,long param_2,undefined *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar5 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  puVar4 = param_4;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar6 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ed215;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110c9a630;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110c9a630,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar4 = (undefined1 *)puVar5;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar4 = (undefined1 *)puVar5;
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = puVar1;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar6 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ed215;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar3 = &UNK_110c9a680;
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110c9a680,&uStack_100,puVar4);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  __Unwind_Resume();
  _objc_retain(puVar3);
  if (puVar2 != (undefined *)0x0) {
    FUN_10af77b90(puVar2,puVar3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10af77b90; end: 10af77d03;  */

void FUN_10af77b90(double param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar3 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ed215;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110c9a680;
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110c9a680,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    FUN_10af77b90(puVar2,puVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af77d04; end: 10af77d6f;  */

void FUN_10af77d04(double param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_10af77b90(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af77d70; end: 10af77ee3;  */

void FUN_10af77d70(double param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_3;
  _objc_retain(param_3);
  if (param_2 != 0) {
    plVar3 = *(long **)(param_2 + 8);
    _objc_retain(param_3);
    if (param_3 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ed215;
    }
    else {
      puVar1 = param_3;
      _objc_retainAutorelease(param_3);
      func_0x00010bdc3520();
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110c9a6d0;
    (**(code **)(*plVar3 + 0x18))(plVar3,&UNK_110c9a6d0,&uStack_80,param_4);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  _objc_release(param_3);
  __Unwind_Resume();
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    FUN_10af77d70(puVar2,puVar1,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10af77ee4; end: 10af77f4f;  */

void FUN_10af77ee4(double param_1,long param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  if (param_2 != 0) {
    FUN_10af77d70(param_2,param_3,(long)(param_1 * 1000.0));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10af77f50; end: 10af78283;  */

/* WARNING: Removing unreachable block (ram,0x00010af78244) */

void FUN_10af77f50(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *unaff_x25;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined1 *puStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined8 ***pppuStack_310;
  code *pcStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined8 auStack_2e0 [2];
  char cStack_2c9;
  long lStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined8 *puStack_2b0;
  long *plStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 *puStack_268;
  undefined8 auStack_260 [2];
  char cStack_249;
  long lStack_248;
  undefined8 *puStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined1 ***pppuStack_210;
  code *pcStack_208;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 auStack_1d8 [2];
  char cStack_1c1;
  undefined8 auStack_1c0 [2];
  char cStack_1a9;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined *puStack_190;
  long *plStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined8 auStack_140 [2];
  char cStack_129;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined *puStack_110;
  undefined8 *puStack_108;
  undefined8 *puStack_100;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 auStack_b8 [3];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar6 = param_3;
  puVar5 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_1 != 0) {
    plVar14 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_b8,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_a0,puVar1);
    _objc_retain(param_4);
    if (param_4 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_4);
      puVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x000107c278b8(auStack_88,puVar1);
    _objc_retain(param_5);
    if (param_5 == (undefined8 *)0x0) {
      puVar2 = &UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar2 = (undefined *)param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x000107c278b8(auStack_70,puVar2);
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    func_0x000107c27984(&uStack_d8,auStack_b8,&lStack_58,4);
    puVar1 = (undefined8 *)&UNK_110c9a720;
    unaff_x25 = &uStack_d8;
    puVar6 = &uStack_d8;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110c9a720,puVar6,param_6);
    puStack_c0 = unaff_x25;
    func_0x000107c278ac(&puStack_c0);
    lVar13 = 0;
    puVar5 = param_6;
    do {
      if ((&cStack_59)[lVar13] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar13));
      }
      lVar13 = lVar13 + -0x18;
    } while (lVar13 != -0x60);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  puVar15 = auStack_b8;
  do {
    unaff_x25 = unaff_x25 + -3;
  } while (unaff_x25 != puVar15);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar10 = &uStack_160;
  pcStack_e8 = FUN_10af78284;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar9 = puVar1;
  puVar8 = puVar6;
  puStack_120 = puVar15;
  puStack_118 = puVar3;
  puStack_110 = (undefined *)param_5;
  puStack_108 = param_4;
  puStack_100 = param_3;
  puStack_f8 = param_2;
  puStack_f0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar14 = (long *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar14 = (long *)puVar4[1];
    _objc_retain(puVar1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      puVar5 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    puVar3 = auStack_140;
    func_0x000107c278b8(auStack_140,puVar5);
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    func_0x000107c27984(&uStack_160,auStack_140,&lStack_128,1);
    puVar9 = (undefined8 *)&UNK_110c9a770;
    (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110c9a770,&uStack_160,puVar6);
    puStack_148 = (undefined1 *)&uStack_160;
    func_0x000107c278ac(&puStack_148);
    puVar8 = puVar10;
    puVar5 = puVar6;
    param_5 = &uStack_160;
    if (cStack_129 < '\0') {
      __ZdlPv(auStack_140[0]);
      puVar8 = puVar10;
      puVar5 = puVar6;
      param_5 = &uStack_160;
    }
  }
  puVar6 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
    ___stack_chk_fail();
    _objc_release(puVar1);
    _objc_release(puVar1);
    puVar7 = puVar6;
    __Unwind_Resume();
    pcStack_168 = FUN_10af783f8;
    lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar4 = puVar9;
    puVar10 = puVar8;
    puStack_1a0 = puVar15;
    puStack_198 = puVar3;
    puStack_190 = (undefined *)param_5;
    plStack_188 = plVar14;
    puStack_180 = puVar6;
    puStack_178 = puVar1;
    ppuStack_170 = &puStack_f0;
    _objc_retain(puVar9);
    _objc_retain(puVar8);
    puVar1 = (undefined8 *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      plVar14 = (long *)puVar7[1];
      _objc_retain(puVar9);
      if (puVar9 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f6ed215;
      }
      else {
        puVar1 = puVar9;
        _objc_retainAutorelease(puVar9);
        func_0x00010bdc3520();
      }
      _objc_release(puVar9);
      puVar15 = auStack_1d8;
      func_0x000107c278b8(auStack_1d8,puVar1);
      _objc_retain(puVar8);
      if (puVar8 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f6ed215;
      }
      else {
        _objc_retainAutorelease(puVar8);
        puVar1 = puVar8;
        func_0x00010bdc3520(puVar8);
      }
      _objc_release(puVar8);
      func_0x000107c278b8(auStack_1c0,puVar1);
      uStack_1f8 = 0;
      uStack_1f0 = 0;
      uStack_1e8 = 0;
      func_0x000107c27984(&uStack_1f8,auStack_1d8,&lStack_1a8,2);
      puVar4 = (undefined8 *)&UNK_110c9a7c0;
      puVar3 = &uStack_1f8;
      puVar10 = &uStack_1f8;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110c9a7c0,puVar10,puVar5);
      puStack_1e0 = puVar3;
      func_0x000107c278ac(&puStack_1e0);
      lVar13 = 0;
      puVar1 = auStack_1d8;
      do {
        if ((&cStack_1a9)[lVar13] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_1c0 + lVar13));
        }
        lVar13 = lVar13 + -0x18;
      } while (lVar13 != -0x30);
    }
    _objc_release(puVar8);
    puVar6 = puVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar8);
    if (cStack_1c1 < '\0') {
      __ZdlPv(auStack_1d8[0]);
    }
    _objc_release(puVar8);
    _objc_release(puVar9);
    puVar7 = puVar6;
    __Unwind_Resume();
    puVar12 = &uStack_280;
    pcStack_208 = FUN_10af78628;
    lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar5 = puVar4;
    puVar11 = puVar10;
    puStack_240 = puVar15;
    puStack_238 = puVar3;
    puStack_230 = puVar1;
    puStack_228 = puVar6;
    puStack_220 = puVar8;
    puStack_218 = puVar9;
    pppuStack_210 = &ppuStack_170;
    _objc_retain(puVar4);
    plVar14 = (long *)0x0;
    if (puVar7 != (undefined8 *)0x0) {
      plVar14 = (long *)puVar7[1];
      _objc_retain(puVar4);
      if (puVar4 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)&UNK_10f6ed215;
      }
      else {
        puVar1 = puVar4;
        _objc_retainAutorelease(puVar4);
        func_0x00010bdc3520();
      }
      _objc_release(puVar4);
      puVar3 = auStack_260;
      func_0x000107c278b8(auStack_260,puVar1);
      uStack_280 = 0;
      uStack_278 = 0;
      uStack_270 = 0;
      func_0x000107c27984(&uStack_280,auStack_260,&lStack_248,1);
      puVar5 = (undefined8 *)&UNK_110c9a810;
      (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110c9a810,&uStack_280,puVar10);
      puStack_268 = (undefined1 *)&uStack_280;
      func_0x000107c278ac(&puStack_268);
      puVar11 = puVar12;
      puVar1 = &uStack_280;
      if (cStack_249 < '\0') {
        __ZdlPv(auStack_260[0]);
        puVar11 = puVar12;
        puVar1 = &uStack_280;
      }
    }
    puVar6 = puVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_248) {
      ___stack_chk_fail();
      _objc_release(puVar4);
      _objc_release(puVar4);
      puVar8 = puVar6;
      __Unwind_Resume();
      pcStack_288 = FUN_10af7879c;
      lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar9 = puVar5;
      puStack_2c0 = puVar15;
      puStack_2b8 = puVar3;
      puStack_2b0 = puVar1;
      plStack_2a8 = plVar14;
      puStack_2a0 = puVar6;
      puStack_298 = puVar4;
      pppuStack_290 = &pppuStack_210;
      _objc_retain(puVar5);
      if (puVar8 != (undefined8 *)0x0) {
        plVar14 = (long *)puVar8[1];
        _objc_retain(puVar5);
        if (puVar5 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)&UNK_10f6ed215;
        }
        else {
          puVar1 = puVar5;
          _objc_retainAutorelease(puVar5);
          func_0x00010bdc3520();
        }
        _objc_release(puVar5);
        func_0x000107c278b8(auStack_2e0,puVar1);
        uStack_300 = 0;
        uStack_2f8 = 0;
        uStack_2f0 = 0;
        func_0x000107c27984(&uStack_300,auStack_2e0,&lStack_2c8,1);
        puVar9 = (undefined8 *)&UNK_110c9a860;
        (**(code **)(*plVar14 + 0x18))(plVar14,&UNK_110c9a860,&uStack_300,puVar11);
        puStack_2e8 = (undefined1 *)&uStack_300;
        func_0x000107c278ac(&puStack_2e8);
        if (cStack_2c9 < '\0') {
          __ZdlPv(auStack_2e0[0]);
        }
      }
      puVar1 = puVar5;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2c8) {
        ___stack_chk_fail();
        _objc_release(puVar5);
        _objc_release(puVar5);
        puVar6 = puVar1;
        __Unwind_Resume();
        puStack_328 = (undefined1 *)&uStack_340;
        pcStack_308 = FUN_10af78910;
        if (puVar6 != (undefined8 *)0x0) {
          uStack_340 = 0;
          uStack_338 = 0;
          uStack_330 = 0;
          puStack_320 = puVar1;
          puStack_318 = puVar5;
          pppuStack_310 = &pppuStack_290;
          (**(code **)(*(long *)puVar6[1] + 0x18))
                    ((long *)puVar6[1],&UNK_110c9a8b0,&uStack_340,puVar9);
          func_0x000107c278ac(&puStack_328);
        }
        return;
      }
      return;
    }
    return;
  }
  return;
}



/* Entry: 10af78284; end: 10af783f7;  */

void FUN_10af78284(long param_1,undefined *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 *puStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 ***pppuStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 auStack_200 [2];
  char cStack_1e9;
  long lStack_1e8;
  undefined8 *puStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 auStack_f8 [2];
  char cStack_e1;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar7 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ed215;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x23 = auStack_60;
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110c9a770;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c9a770,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar7 = puVar3;
    param_4 = param_3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar7 = puVar3;
      param_4 = param_3;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_10af783f8;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar1;
  puVar3 = puVar7;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  _objc_retain(puVar7);
  puVar12 = (undefined8 *)0x0;
  if (puVar2 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ed215;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x24 = auStack_f8;
    func_0x000107c278b8(auStack_f8,puVar2);
    _objc_retain(puVar7);
    if (puVar7 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(puVar7);
      puVar3 = puVar7;
      func_0x00010bdc3520(puVar7);
    }
    _objc_release(puVar7);
    func_0x000107c278b8(auStack_e0,puVar3);
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x000107c27984(&uStack_118,auStack_f8,&lStack_c8,2);
    puVar5 = &UNK_110c9a7c0;
    unaff_x23 = &uStack_118;
    puVar3 = &uStack_118;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c9a7c0,puVar3,param_4);
    puStack_100 = unaff_x23;
    func_0x000107c278ac(&puStack_100);
    lVar11 = 0;
    puVar12 = auStack_f8;
    do {
      if ((&cStack_c9)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_e0 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(puVar7);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar7);
  if (cStack_e1 < '\0') {
    __ZdlPv(auStack_f8[0]);
  }
  _objc_release(puVar7);
  _objc_release(puVar1);
  puVar4 = puVar2;
  __Unwind_Resume();
  puVar9 = &uStack_1a0;
  pcStack_128 = FUN_10af78628;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar5;
  puVar8 = puVar3;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar12;
  puStack_148 = puVar2;
  puStack_140 = puVar7;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_90;
  _objc_retain(puVar5);
  plVar10 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar5);
    if (puVar5 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ed215;
    }
    else {
      puVar1 = puVar5;
      _objc_retainAutorelease(puVar5);
      func_0x00010bdc3520();
    }
    _objc_release(puVar5);
    unaff_x23 = auStack_180;
    func_0x000107c278b8(auStack_180,puVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x000107c27984(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar6 = &UNK_110c9a810;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c9a810,&uStack_1a0,puVar3);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x000107c278ac(&puStack_188);
    puVar8 = puVar9;
    puVar12 = &uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      puVar8 = puVar9;
      puVar12 = &uStack_1a0;
    }
  }
  puVar1 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_1a8 = FUN_10af7879c;
  lStack_1e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = puVar6;
  puStack_1e0 = unaff_x24;
  puStack_1d8 = unaff_x23;
  puStack_1d0 = puVar12;
  plStack_1c8 = plVar10;
  puStack_1c0 = puVar1;
  puStack_1b8 = puVar5;
  pppuStack_1b0 = &ppuStack_130;
  _objc_retain(puVar6);
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ed215;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_200,puVar1);
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    func_0x000107c27984(&uStack_220,auStack_200,&lStack_1e8,1);
    puVar2 = &UNK_110c9a860;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c9a860,&uStack_220,puVar8);
    puStack_208 = (undefined1 *)&uStack_220;
    func_0x000107c278ac(&puStack_208);
    if (cStack_1e9 < '\0') {
      __ZdlPv(auStack_200[0]);
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar5 = puVar1;
  __Unwind_Resume();
  puStack_248 = (undefined1 *)&uStack_260;
  pcStack_228 = FUN_10af78910;
  if (puVar5 != (undefined *)0x0) {
    uStack_260 = 0;
    uStack_258 = 0;
    uStack_250 = 0;
    puStack_240 = puVar1;
    puStack_238 = puVar6;
    pppuStack_230 = &pppuStack_1b0;
    (**(code **)(**(long **)(puVar5 + 8) + 0x18))
              (*(long **)(puVar5 + 8),&UNK_110c9a8b0,&uStack_260,puVar2);
    func_0x000107c278ac(&puStack_248);
  }
  return;
}



/* Entry: 10af783f8; end: 10af78627;  */

void FUN_10af783f8(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined *puStack_c8;
  undefined8 *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar2 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar11 = (undefined8 *)0x0;
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ed215;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,puVar1);
    _objc_retain(param_3);
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f6ed215;
    }
    else {
      _objc_retainAutorelease(param_3);
      puVar2 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x000107c278b8(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    puVar1 = &UNK_110c9a7c0;
    unaff_x23 = &uStack_98;
    puVar2 = &uStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c9a7c0,puVar2,param_4);
    puStack_80 = unaff_x23;
    func_0x000107c278ac(&puStack_80);
    lVar9 = 0;
    puVar11 = auStack_78;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  _objc_release(param_3);
  puVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  puVar4 = puVar3;
  __Unwind_Resume();
  puVar8 = &uStack_120;
  pcStack_a8 = FUN_10af78628;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar1;
  puVar7 = puVar2;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = puVar11;
  puStack_c8 = puVar3;
  puStack_c0 = param_3;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  plVar10 = (long *)0x0;
  if (puVar4 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar4 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar3 = &UNK_10f6ed215;
    }
    else {
      puVar3 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    unaff_x23 = auStack_100;
    func_0x000107c278b8(auStack_100,puVar3);
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    func_0x000107c27984(&uStack_120,auStack_100,&lStack_e8,1);
    puVar6 = &UNK_110c9a810;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c9a810,&uStack_120,puVar2);
    puStack_108 = (undefined1 *)&uStack_120;
    func_0x000107c278ac(&puStack_108);
    puVar7 = puVar8;
    puVar11 = &uStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      puVar7 = puVar8;
      puVar11 = &uStack_120;
    }
  }
  puVar3 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar5 = puVar3;
  __Unwind_Resume();
  pcStack_128 = FUN_10af7879c;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar6;
  puStack_160 = unaff_x24;
  puStack_158 = unaff_x23;
  puStack_150 = puVar11;
  plStack_148 = plVar10;
  puStack_140 = puVar3;
  puStack_138 = puVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(puVar6);
  if (puVar5 != (undefined *)0x0) {
    plVar10 = *(long **)(puVar5 + 8);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ed215;
    }
    else {
      puVar1 = puVar6;
      _objc_retainAutorelease(puVar6);
      func_0x00010bdc3520();
    }
    _objc_release(puVar6);
    func_0x000107c278b8(auStack_180,puVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x000107c27984(&uStack_1a0,auStack_180,&lStack_168,1);
    puVar4 = &UNK_110c9a860;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110c9a860,&uStack_1a0,puVar7);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x000107c278ac(&puStack_188);
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
    }
  }
  puVar1 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  _objc_release(puVar6);
  puVar3 = puVar1;
  __Unwind_Resume();
  puStack_1c8 = (undefined1 *)&uStack_1e0;
  pcStack_1a8 = FUN_10af78910;
  if (puVar3 != (undefined *)0x0) {
    uStack_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    puStack_1c0 = puVar1;
    puStack_1b8 = puVar6;
    pppuStack_1b0 = &ppuStack_130;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110c9a8b0,&uStack_1e0,puVar4);
    func_0x000107c278ac(&puStack_1c8);
  }
  return;
}



/* Entry: 10af78628; end: 10af7879b;  */

void FUN_10af78628(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar6 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar5 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ed215;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110c9a810;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110c9a810,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_10af7879c;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f6ed215;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x000107c278b8(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x000107c27984(&uStack_100,auStack_e0,&lStack_c8,1);
    puVar4 = &UNK_110c9a860;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_110c9a860,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x000107c278ac(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_128 = (undefined1 *)&uStack_140;
  pcStack_108 = FUN_10af78910;
  if (puVar3 != (undefined *)0x0) {
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    puStack_120 = puVar2;
    puStack_118 = puVar1;
    ppuStack_110 = &puStack_90;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110c9a8b0,&uStack_140,puVar4);
    func_0x000107c278ac(&puStack_128);
  }
  return;
}



/* Entry: 10af7879c; end: 10af7890f;  */

void FUN_10af7879c(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ed215;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110c9a860;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110c9a860,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_10af78910;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110c9a8b0,&uStack_c0,puVar1);
    func_0x000107c278ac(&puStack_a8);
  }
  return;
}



/* Entry: 10af78910; end: 10af78987;  */

void FUN_10af78910(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110c9a8b0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 10af78988; end: 10af789ff;  */

void FUN_10af78988(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110c9a900,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 10af78a00; end: 10af78b73;  */

void FUN_10af78a00(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar4 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f6ed215;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x000107c27984(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_110c9a950;
    (**(code **)(*plVar4 + 0x18))(plVar4,&UNK_110c9a950,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x000107c278ac(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_a8 = (undefined1 *)&uStack_c0;
  pcStack_88 = FUN_10af78b74;
  if (puVar3 != (undefined *)0x0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    puStack_a0 = puVar2;
    puStack_98 = param_2;
    puStack_90 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar3 + 8) + 0x18))
              (*(long **)(puVar3 + 8),&UNK_110c9a9a0,&uStack_c0,puVar1);
    func_0x000107c278ac(&puStack_a8);
  }
  return;
}



/* Entry: 10af78b74; end: 10af78beb;  */

void FUN_10af78b74(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110c9a9a0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 10af78bec; end: 10af78c63;  */

void FUN_10af78bec(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110c9a9f0,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 10af78c64; end: 10af78c6f; -[SCAppUserLifecycleEventHandlerServices .cxx_destruct] */

void FUN_10af78c64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af78c70; end: 10af78cfb; -[SCSnapTokenKeychainBackedByArchiveDiskStorage setAccessTokenDataWithData:userId:accessType:] */

undefined8
FUN_10af78c70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar1 = &UNK_10f6ed4fe;
  func_0x000107c31820(&UNK_10f6ed4fe);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c160de0(uVar2,param_2,param_3,param_4,param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x000107c31828(puVar1);
  return uVar2;
}



/* Entry: 10af78cfc; end: 10af78d67; -[SCSnapTokenKeychainBackedByArchiveDiskStorage removeAccessTokenDataWithUserId:accessType:] */

undefined8 FUN_10af78cfc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f6ed531;
  func_0x000107c31820(&UNK_10f6ed531);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c12a960(uVar2,param_2,param_3,param_4);
  _objc_release(param_3);
  func_0x000107c31828(puVar1);
  return uVar2;
}



/* Entry: 10af78d68; end: 10af78e1b; -[SCSnapTokenKeychainBackedByArchiveDiskStorage setRefreshTokenDataWithData:userId:] */

uint FUN_10af78d68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar1 = &UNK_10f6ed587;
  func_0x000107c31820(&UNK_10f6ed587);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c1e9620(uVar2,param_2,param_3,param_4);
  lVar3 = param_1;
  func_0x00010bdcf1e0(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  if (((uint)uVar2 == 0) && ((uint)lVar3 != 0)) {
    func_0x00010c0aff00(*(undefined8 *)(param_1 + 8),param_2,
                        &PTR____CFConstantStringClassReference_110e0e998);
  }
  func_0x000107c31828(puVar1);
  return ((uint)uVar2 | (uint)lVar3) & 1;
}



/* Entry: 10af78e1c; end: 10af78eb7; -[SCSnapTokenKeychainBackedByArchiveDiskStorage removeRefreshTokenDataWithUserId:] */

uint FUN_10af78e1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f6ed5af;
  func_0x000107c31820(&UNK_10f6ed5af);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c12df80(uVar2,param_2,param_3);
  lVar3 = param_1;
  func_0x00010bdcf1c0(param_1,param_2,param_3);
  _objc_release(param_3);
  if ((uint)uVar2 == 0 || (uint)lVar3 != 0) {
    func_0x00010c0aff00(*(undefined8 *)(param_1 + 8),param_2,
                        &PTR____CFConstantStringClassReference_110dac918);
  }
  func_0x000107c31828(puVar1);
  return ((uint)uVar2 | (uint)lVar3) & 1;
}



/* Entry: 10af78eb8; end: 10af78f33; -[SCSnapTokenKeychainBackedByArchiveDiskStorage setCloud1TLTokenDataWithData:forUserId:] */

undefined8 FUN_10af78eb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  puVar1 = &UNK_10f6ed5fd;
  func_0x000107c31820(&UNK_10f6ed5fd);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c17d740(uVar2,param_2,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x000107c31828(puVar1);
  return uVar2;
}



/* Entry: 10af78f34; end: 10af78f97; -[SCSnapTokenKeychainBackedByArchiveDiskStorage removeCloud1TLTokenDataWithUserId:] */

undefined8 FUN_10af78f34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f6ed627;
  func_0x000107c31820(&UNK_10f6ed627);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c12b800(uVar2,param_2,param_3);
  _objc_release(param_3);
  func_0x000107c31828(puVar1);
  return uVar2;
}



/* Entry: 10af78f98; end: 10af79063; -[SCSnapTokenKeychainBackedByArchiveDiskStorage _archiveSetRefreshTokenData:forUserId:] */

undefined *
FUN_10af78f98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c008340();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126b85c8;
  func_0x00010c22b6a0(PTR_PTR_1126b85c8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f59a0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = puVar2;
  func_0x00010c14aa80(puVar2,param_2,puVar1,param_1);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  return puVar3;
}



/* Entry: 10af79064; end: 10af790f3; -[SCSnapTokenKeychainBackedByArchiveDiskStorage _archiveRemoveRefreshTokenDataForUserId:] */

undefined * FUN_10af79064(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b85c8;
  _objc_retain(param_3);
  func_0x00010c22b6a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f59a0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010c12c5e0(puVar1,param_2,param_1);
  _objc_release(param_1);
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 10af790f4; end: 10af791f3; -[SCSnapTokenKeychainBackedByArchiveDiskStorage _archiveRefreshTokenDataForUserId:] */

void FUN_10af790f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b85c8;
  func_0x00010c22b6a0(PTR_PTR_1126b85c8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f59a0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c09bd60(puVar1,param_2,puVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = puVar3;
  func_0x00010bf64920(puVar3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af791f4; end: 10af7927f; -[SCSnapTokenKeychainBackedByArchiveDiskStorage pathForUserId:] */

void FUN_10af791f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110f3de98);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b85c8;
  func_0x00010c22b6a0(PTR_PTR_1126b85c8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c0f5a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10af79280; end: 10af792af; -[SCSnapTokenKeychainBackedByArchiveDiskStorage .cxx_destruct] */

void FUN_10af79280(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10af792b0; end: 10af79403; +[SCSnapTokenMetricsUtil generateAccessTokenFetchErrorBlizzardEventWithError:metricsInfo:] */

void FUN_10af792b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ded00;
  _objc_alloc_init(PTR_PTR_1126ded00);
  puVar3 = PTR_PTR_1126bd360;
  lVar2 = param_4;
  func_0x00010beecdc0(param_4);
  func_0x00010c22d480(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f69c0(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126decd8;
  func_0x00010bdc2480(PTR_PTR_1126decd8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196ee0(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  lVar2 = param_4;
  func_0x00010c0819e0(param_4);
  func_0x00010c21a820(puVar1,param_2,lVar2);
  lVar2 = param_4;
  func_0x00010c136120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010c136120(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebf60(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  lVar2 = param_4;
  func_0x00010c135700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010c135700(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebd20(puVar1,param_2,lVar2);
    _objc_release(lVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af79404; end: 10af79463; +[SCSnapTokenMetricsUtil generateSnapSessionFetchErrorBlizzardEventWithError:] */

void FUN_10af79404(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ded08;
  _objc_alloc_init(PTR_PTR_1126ded08);
  puVar2 = PTR_PTR_1126decd8;
  func_0x00010bdc2480(PTR_PTR_1126decd8,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196ee0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af79464; end: 10af794d7; +[SCSnapTokenMetricsUtil generateSnapTokenAppSessionPeriodBlizzardEventWithScope:misses:] */

void FUN_10af79464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ded10;
  _objc_alloc_init(PTR_PTR_1126ded10);
  func_0x00010c1c86a0();
  puVar2 = PTR_PTR_1126bd360;
  func_0x00010c22d480(PTR_PTR_1126bd360,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f69c0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10af794d8; end: 10af79567; -[SCSnapTokenKeychainDiskStorage setRefreshTokenDataWithData:userId:] */

long FUN_10af794d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be88b40(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010be24ec0();
  }
  else {
    func_0x00010bea21e0(param_1,param_2,param_3,lVar1,
                        &PTR____CFConstantStringClassReference_110e18ed8);
  }
  _objc_release(param_3);
  _objc_release(lVar1);
  return param_1;
}



/* Entry: 10af79568; end: 10af795cb; -[SCSnapTokenKeychainDiskStorage removeRefreshTokenDataWithUserId:] */

long FUN_10af79568(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be88b40();
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010be24ea0();
  }
  else {
    func_0x00010be8bd40(param_1,param_2,lVar1,&PTR____CFConstantStringClassReference_110e18ed8);
  }
  _objc_release(lVar1);
  return param_1;
}



/* Entry: 10af795cc; end: 10af79687; -[SCSnapTokenKeychainDiskStorage setAccessTokenDataWithData:userId:accessType:] */

long FUN_10af795cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bdc3e80(param_1,param_2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  cVar1 = *(char *)(param_1 + 0x18);
  lVar3 = param_1;
  func_0x00010bdc3ea0(param_1,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  if (cVar1 == '\x01') {
    func_0x00010be24ec0();
  }
  else {
    func_0x00010bea21e0(param_1,param_2,param_3,lVar2,lVar3);
  }
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  return param_1;
}



/* Entry: 10af79688; end: 10af79713; -[SCSnapTokenKeychainDiskStorage removeAccessTokenDataWithUserId:accessType:] */

long FUN_10af79688(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010bdc3e80();
  _objc_retainAutoreleasedReturnValue();
  cVar1 = *(char *)(param_1 + 0x18);
  lVar3 = param_1;
  func_0x00010bdc3ea0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (cVar1 == '\x01') {
    func_0x00010be24ea0();
  }
  else {
    func_0x00010be8bd40(param_1,param_2,lVar2,lVar3);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  return param_1;
}



/* Entry: 10af79714; end: 10af797a3; -[SCSnapTokenKeychainDiskStorage setCloud1TLTokenDataWithData:forUserId:] */

long FUN_10af79714(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bde17e0(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010be24ec0();
  }
  else {
    func_0x00010bea21e0(param_1,param_2,param_3,lVar1,
                        &PTR____CFConstantStringClassReference_110f3df18);
  }
  _objc_release(param_3);
  _objc_release(lVar1);
  return param_1;
}



/* Entry: 10af797a4; end: 10af79807; -[SCSnapTokenKeychainDiskStorage removeCloud1TLTokenDataWithUserId:] */

long FUN_10af797a4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bde17e0();
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x00010be24ea0();
  }
  else {
    func_0x00010be8bd40(param_1,param_2,lVar1,&PTR____CFConstantStringClassReference_110f3df18);
  }
  _objc_release(lVar1);
  return param_1;
}



/* Entry: 10af79808; end: 10af79933; -[SCSnapTokenKeychainDiskStorage _guardedDataForKey:tokenType:] */

void FUN_10af79808(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_10af79934;
  uStack_40 = 0x10af79944;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10af79934; end: 10af7994b;  */

void FUN_10af79934(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10af7994c; end: 10af7998f;  */

void FUN_10af7994c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdf7c20(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30))
  ;
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10af79990; end: 10af79a4b; -[SCSnapTokenKeychainDiskStorage _guardedRemoveDataForKeyWithStatus:tokenType:] */

undefined8 FUN_10af79990(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10af79a4c;
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
  return 1;
}



/* Entry: 10af79a4c; end: 10af79a5b;  */

void FUN_10af79a4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8bd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__removeDataForKeyWithStatus_toke_1125808f0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10af79a5c; end: 10af79b43; -[SCSnapTokenKeychainDiskStorage _guardedSetBackgroundDataWithStatus:forKey:tokenType:] */

undefined8
FUN_10af79a5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_10af79b44;
  puStack_68 = &UNK_11084c4a0;
  lStack_60 = param_1;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_80);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return 1;
}



/* Entry: 10af79b44; end: 10af79b53;  */

void FUN_10af79b44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea21f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setBackgroundDataWithStatus_for_112586220,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38));
  return;
}


