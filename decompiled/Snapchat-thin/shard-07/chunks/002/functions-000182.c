/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105354f78; end: 105354f83; -[SCBitmojiUnauthenticatedFetchServices .cxx_destruct] */

void FUN_105354f78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105354f84; end: 1053550ff; -[SCNotificationActionHandlerSystemScopedEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105354f84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126b79e8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112721c64;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0dc6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02fec0(puVar1,param_2,lVar3);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112721c68);
  *(undefined **)(param_1 + _DAT_112721c68) = puVar1;
  _objc_release(uVar5);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar6 = (long)_DAT_112721c6c;
  lVar2 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c267140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7e40();
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar1 = PTR_PTR_1126b79f0;
  _objc_alloc();
  lVar2 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar2);
  lVar4 = lVar2;
  func_0x00010c0dc260();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1 + _DAT_112721c70;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c02fea0(puVar1,param_2,lVar4,lVar3);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112721c74);
  *(undefined **)(param_1 + _DAT_112721c74) = puVar1;
  _objc_release(uVar5);
  _objc_release(lVar3);
  _objc_release(lVar4);
  _objc_release(lVar2);
  param_1 = param_1 + lVar6;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c267140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7e40();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105355100; end: 1053551eb; -[SCNotificationActionHandlerSystemScopedEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105355100(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_50;
  undefined *puStack_48;
  
  lVar4 = (long)_DAT_112721c6c;
  lVar1 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c267140();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_112721c68;
  func_0x00010c12c0c0();
  _objc_release(lVar3);
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = 0;
  _objc_release(uVar2);
  lVar4 = param_1 + lVar4;
  _objc_loadWeakRetained(lVar4);
  lVar1 = lVar4;
  func_0x00010c267140();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112721c74;
  func_0x00010c12c0c0();
  _objc_release(lVar1);
  _objc_release(lVar4);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  puStack_48 = PTR_PTR_1126e7a10;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053551ec; end: 10535524f; -[SCNotificationActionHandlerSystemScopedEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053551ec(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112721c70);
  _objc_destroyWeak(param_1 + _DAT_112721c64);
  _objc_destroyWeak(param_1 + _DAT_112721c6c);
  _objc_storeStrong(param_1 + _DAT_112721c74,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112721c68,0);
  return;
}



/* Entry: 105355250; end: 105355353; -[SCNotificationActionHandlerUnauthenticatedScopedEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105355250(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b79f8;
  _objc_alloc();
  lVar2 = param_1 + _DAT_112721c78;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf118c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1 + _DAT_112721c7c;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c0f7340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff5ce0(puVar1,param_2,lVar3,lVar5);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112721c80);
  *(undefined **)(param_1 + _DAT_112721c80) = puVar1;
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_112721c84;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c267140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7e40();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105355354; end: 1053553f3; -[SCNotificationActionHandlerUnauthenticatedScopedEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105355354(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_112721c84;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c267140();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112721c80;
  func_0x00010c12c0c0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0;
  _objc_release(uVar3);
  puStack_38 = PTR_PTR_1126e7a18;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053553f4; end: 105355453; -[SCNotificationActionHandlerUnauthenticatedScopedEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053553f4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112721c88);
  _objc_destroyWeak(param_1 + _DAT_112721c7c);
  _objc_destroyWeak(param_1 + _DAT_112721c78);
  _objc_destroyWeak(param_1 + _DAT_112721c84);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112721c80,0);
  return;
}



/* Entry: 105355454; end: 1053557d7; -[SCNotificationActionHandlerUserNavigationScopedEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105355454(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_initWeak(auStack_80,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1053557d8;
  puStack_90 = &UNK_11084d4a8;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_b0,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126ae720;
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b7a08;
  _objc_alloc();
  lVar5 = param_1 + _DAT_112721c8c;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c0dc260();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = (long)_DAT_112721c90;
  lVar7 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar9 = lVar19;
  func_0x00010bf07a20();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1 + _DAT_112721c94;
  _objc_loadWeakRetained(lVar10);
  lVar11 = lVar10;
  func_0x00010bf680e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + _DAT_112721c98;
  _objc_loadWeakRetained(lVar12);
  lVar13 = lVar12;
  func_0x00010c0f14e0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1 + _DAT_112721c9c;
  _objc_loadWeakRetained(lVar14);
  lVar15 = lVar14;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_1 + _DAT_112721ca0;
  _objc_loadWeakRetained();
  lVar17 = lVar16;
  func_0x00010bf05fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02fe80();
  uVar18 = *(undefined8 *)(param_1 + _DAT_112721ca4);
  *(undefined **)(param_1 + _DAT_112721ca4) = puVar4;
  _objc_release(uVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(lVar19);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_b0);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 1053557d8; end: 105355943;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053557d8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1 + _DAT_112721cac;
    _objc_loadWeakRetained(lVar4);
  }
  lVar1 = lVar4;
  func_0x00010bfcdfa0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0dcc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 105355944; end: 105355973;  */

void FUN_105355944(void)

{
  _objc_alloc(PTR_PTR_1126b7a00);
  func_0x00010c018200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105355974; end: 1053559cf; -[SCNotificationActionHandlerUserNavigationScopedEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105355974(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112721ca4);
  *(undefined8 *)(param_1 + _DAT_112721ca4) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126e7a20;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053559d0; end: 105355a6b; -[SCNotificationActionHandlerUserNavigationScopedEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053559d0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112721cb0);
  _objc_destroyWeak(param_1 + _DAT_112721cac);
  _objc_destroyWeak(param_1 + _DAT_112721ca0);
  _objc_destroyWeak(param_1 + _DAT_112721c9c);
  _objc_destroyWeak(param_1 + _DAT_112721c94);
  _objc_destroyWeak(param_1 + _DAT_112721c98);
  _objc_destroyWeak(param_1 + _DAT_112721c90);
  _objc_destroyWeak(param_1 + _DAT_112721c8c);
  _objc_destroyWeak(param_1 + _DAT_112721ca8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112721ca4,0);
  return;
}



/* Entry: 105355a6c; end: 105355b5b; -[SCNotificationActionHandlerPostprocessPlugin initWithNotificationLifecycleEvents:systemApplicationLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105355a6c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e7a28;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  puVar3 = PTR_PTR_1126b7a10;
  if (puVar2 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    _objc_opt_class(puVar3);
    uVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar3);
    uVar1 = param_3;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_3);
    uVar5 = *(undefined8 *)((long)puVar2 + (long)_DAT_112721cb4);
    *(ulong *)((long)puVar2 + (long)_DAT_112721cb4) = uVar1;
    _objc_release(uVar5);
    lVar6 = (long)_DAT_112721cb8;
    _objc_retain(param_4);
    uVar5 = *(undefined8 *)((long)puVar2 + lVar6);
    *(undefined8 *)((long)puVar2 + lVar6) = param_4;
    _objc_release(uVar5);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 105355b5c; end: 105355b63; -[SCNotificationActionHandlerPostprocessPlugin uniquePluginType] */

undefined8 FUN_105355b5c(void)

{
  return 2;
}



/* Entry: 105355b64; end: 105355cd7; -[SCNotificationActionHandlerPostprocessPlugin processEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105355b64(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b1370;
  _objc_opt_class(PTR_PTR_1126b1370);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010c2a2380();
  if ((int)uVar3 != 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112721cb4);
    puVar2 = PTR_PTR_1126b6b98;
    func_0x00010c269ae0(PTR_PTR_1126b6b98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar5);
    _objc_release(puVar2);
  }
  uVar3 = uVar1;
  func_0x00010c073540();
  if ((int)uVar3 != 0) {
    func_0x00010be87460(param_1);
    uVar5 = *(undefined8 *)(param_1 + _DAT_112721cb4);
    puVar2 = PTR_PTR_1126b6b98;
    func_0x00010c0e8ec0(PTR_PTR_1126b6b98);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar5);
    _objc_release(puVar2);
  }
  uVar4 = *(undefined8 *)(param_1 + _DAT_112721cb8);
  func_0x00010c266da0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c11c460(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab1a0(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(param_3);
  return 1;
}



/* Entry: 105355cd8; end: 105355de7; -[SCNotificationActionHandlerPostprocessPlugin _recordAppOpenAttributionForNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105355cd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aec70;
  func_0x00010c22ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf72880();
  _objc_release(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112721cb8);
    func_0x00010c266da0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c0dc140(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c11c460(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ce1a0(uVar4,param_2,uVar5,uVar6);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  puVar1 = PTR_PTR_1126aec70;
  func_0x00010c22ba80(PTR_PTR_1126aec70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18d520();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105355de8; end: 105355e27; -[SCNotificationActionHandlerPostprocessPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105355de8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112721cb8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112721cb4,0);
  return;
}



/* Entry: 105355e28; end: 105355eab; -[SCNotificationActionHandlerPreprocessPlugin initWithNotificationManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_105355e28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e7a30;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112721cbc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105355eac; end: 105355eb3; -[SCNotificationActionHandlerPreprocessPlugin uniquePluginType] */

undefined8 FUN_105355eac(void)

{
  return 0;
}



/* Entry: 105355eb4; end: 105355f73; -[SCNotificationActionHandlerPreprocessPlugin processEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105355eb4(long param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126b1370;
  _objc_opt_class(PTR_PTR_1126b1370);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar2 = param_3;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112721cbc);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d300();
  _objc_release(uVar5);
  uVar4 = uVar2;
  func_0x00010c2a23a0();
  bVar1 = (int)uVar4 != 0;
  if (bVar1) {
    func_0x00010c0ab080(PTR_PTR_1126b7550);
  }
  _objc_release(uVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105355f74; end: 105355f87; -[SCNotificationActionHandlerPreprocessPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105355f74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112721cbc,0);
  return;
}



/* Entry: 105355f88; end: 105356043; -[SCNotificationActionHandlerUnauthenticatedPlugin initWithAutoOneTapLoginEventService:pendingAppNotificationStorage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105355f88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e7a38;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112721cc0;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112721cc4;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105356044; end: 10535604b; -[SCNotificationActionHandlerUnauthenticatedPlugin uniquePluginType] */

undefined8 FUN_105356044(void)

{
  return 1;
}



/* Entry: 10535604c; end: 1053560cf; -[SCNotificationActionHandlerUnauthenticatedPlugin processEvent:] */

undefined8 FUN_10535604c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b1370;
  _objc_opt_class(PTR_PTR_1126b1370);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010c077000();
  if ((int)uVar3 != 0) {
    func_0x00010bfd1740(param_1);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return 1;
}



/* Entry: 1053560d0; end: 10535617f; -[SCNotificationActionHandlerUnauthenticatedPlugin handleLogoutEligibleNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053560d0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c2943e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(param_1 + _DAT_112721cc0);
    puVar3 = PTR_PTR_1126b7a18;
    _objc_alloc(PTR_PTR_1126b7a18);
    func_0x00010c05bbe0();
    func_0x00010bf8dd60(uVar4,param_2,puVar3);
    _objc_release(puVar3);
    func_0x00010c1da320(*(undefined8 *)(param_1 + _DAT_112721cc4),param_2,param_3);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105356180; end: 1053561bf; -[SCNotificationActionHandlerUnauthenticatedPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105356180(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112721cc4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112721cc0,0);
  return;
}



/* Entry: 1053561c0; end: 105356263; -[SCNotifOpenLogger initWithGraphene:performer:] */

undefined1 *
FUN_1053561c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7a40;
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



/* Entry: 105356264; end: 105356313; -[SCNotifOpenLogger logNotificationTap:isInAppNotification:] */

void FUN_105356264(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105356314;
  puStack_50 = &UNK_11084d5f8;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 105356314; end: 105356323;  */

void FUN_105356314(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be56810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__logNotificationTap_isInAppNotif_1125733a0,
             *(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30));
  return;
}



/* Entry: 105356324; end: 10535667b; -[SCNotifOpenLogger _logNotificationTap:isInAppNotification:] */

void FUN_105356324(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b7a20;
  func_0x00010c0dbb20(PTR_PTR_1126b7a20);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c11c460(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  FUN_10535667c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar4 = puVar2;
  func_0x00010c2ac460(puVar2,param_2,&PTR____CFConstantStringClassReference_110dad058,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd3438;
  if (param_4 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd3418;
  }
  puVar2 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dbf3b8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  puVar4 = PTR_PTR_1126b7a20;
  func_0x00010bfcd2a0(PTR_PTR_1126b7a20);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar6;
  func_0x00010c2ac460(puVar6,param_2,&PTR____CFConstantStringClassReference_110dbf3b8,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126b7538;
  _objc_alloc(PTR_PTR_1126b7538);
  func_0x00010c02fc60();
  puVar7 = puVar6;
  func_0x00010bf2c2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  FUN_10535667c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dd3458,puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar6;
  func_0x00010c292ba0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar4;
  FUN_10535667c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar7;
  func_0x00010c2ac460(puVar7,param_2,&PTR____CFConstantStringClassReference_110dd3478,puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = puVar6;
  func_0x00010c2934c0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar7;
  FUN_10535667c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = puVar4;
  func_0x00010c2ac460(puVar4,param_2,&PTR____CFConstantStringClassReference_110dd3498,puVar10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar6;
  func_0x00010c26a920(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar4;
  FUN_10535667c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar4 = puVar7;
  func_0x00010c2ac460(puVar7,param_2,&PTR____CFConstantStringClassReference_110dd34b8,puVar11);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10535667c; end: 1053566cb;  */

void FUN_10535667c(undefined **param_1)

{
  undefined **ppuVar1;
  
  _objc_retain();
  ppuVar1 = param_1;
  func_0x00010c08fa60();
  if (ppuVar1 == (undefined **)0x0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd34d8;
  }
  else {
    _objc_retain(param_1);
    ppuVar1 = param_1;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1053566cc; end: 1053566fb; -[SCNotifOpenLogger .cxx_destruct] */

void FUN_1053566cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053566fc; end: 10535698b; -[SCNotificationActionHandlingNavigationWorkflow initWithNotificationLifecycleEvents:navigationController:applicationLifecycleNavigationHandler:deepLinkOnAppLaunchHandling:pageLauncher:configProvider:appStartExperimentReader:notifOpenLogger:] */

undefined8 *
FUN_1053566fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_78 = PTR_PTR_1126e7a48;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
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
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_9);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_9);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    func_0x00010bec7ec0(puVar1);
    _objc_release(param_9);
    _objc_release(param_9);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10535698c; end: 105356a0b;  */

void FUN_10535698c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110dd3538,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 105356a0c; end: 105356ad7; -[SCNotificationActionHandlingNavigationWorkflow _subscribeToNotificationLifeCycleEvents] */

void FUN_105356a0c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105356ad8; end: 105356bd3;  */

void FUN_105356ad8(long param_1,undefined8 param_2)

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
  pcStack_58 = FUN_105356bd4;
  puStack_50 = &UNK_11087d448;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0c0b80(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 105356bd4; end: 105356c7b;  */

void FUN_105356bd4(long param_1,int param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ab180();
    _objc_release(uVar1);
    if ((param_2 != 0) && (uVar2 = param_3, func_0x00010c07cda0(), (int)uVar2 != 0)) {
      uVar2 = param_3;
      func_0x00010c11c420();
      func_0x0001070c22c8();
      if ((uVar2 & 1) == 0) {
        func_0x00010be620c0(param_1);
      }
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105356c7c; end: 105356c83;  */

void FUN_105356c7c(void)

{
  return;
}



/* Entry: 105356c84; end: 105356ccb;  */

void FUN_105356c84(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be620c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105356ccc; end: 1053573c7; -[SCNotificationActionHandlingNavigationWorkflow _navigateAccordingToNotification:] */

/* WARNING: Removing unreachable block (ram,0x000105356dfc) */

void FUN_105356ccc(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c26a060(param_3);
  func_0x000106fd8208();
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a0180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar6 = PTR_DAT_1126a4f70;
  _objc_retain(lVar4);
  lVar3 = lVar4;
  func_0x00010010fab4(lVar4,puVar6);
  _objc_release(lVar4);
  puVar6 = PTR_PTR_1126b7550;
  if ((int)lVar3 != 0 && lVar4 != 0) goto LAB_10535735c;
  uVar5 = param_3;
  func_0x00010c26a060(param_3);
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab0c0(puVar6);
  _objc_release(uVar5);
  puVar6 = PTR_PTR_1126aec70;
  func_0x00010c22ba80(PTR_PTR_1126aec70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1b00();
  _objc_release(puVar6);
  uVar5 = param_3;
  func_0x00010c11c420();
  func_0x0001070c22c8();
  if ((uVar5 & 1) == 0) {
    uVar5 = param_1;
    func_0x00010beb47c0();
    uVar2 = (uint)uVar5;
    uVar10 = param_1;
    func_0x00010beb47e0();
    iVar9 = (int)uVar10;
    uVar12 = param_1;
    func_0x00010beb4800();
    iVar11 = (int)uVar12;
    if ((uVar5 & 1) == 0) goto LAB_105356e34;
  }
  else {
    uVar12 = 0;
    uVar10 = 0;
    uVar2 = 0;
LAB_105356e34:
    iVar11 = (int)uVar12;
    iVar9 = (int)uVar10;
    if (((uVar10 & 1) == 0) && ((uVar12 & 1) == 0)) {
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd0180();
      _objc_release(uVar7);
      goto LAB_10535735c;
    }
  }
  uVar10 = *(ulong *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar10;
  func_0x00010bf1f3c0();
  if (((uVar5 & 1) == 0) && (((uVar2 ^ 1) & 1) == 0)) {
    uVar12 = *(ulong *)(param_1 + 0x58);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar12;
    func_0x00010bf1f3c0();
    _objc_release(uVar12);
    _objc_release(uVar10);
    if ((uVar5 & 1) != 0) {
LAB_105356ed0:
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd0180();
      _objc_release(uVar7);
    }
  }
  else {
    _objc_release(uVar10);
    if ((int)uVar5 != 0) goto LAB_105356ed0;
  }
  uVar5 = param_3;
  func_0x00010c0752e0();
  puVar6 = PTR_PTR_1126ae820;
  if ((uVar5 & 1) == 0) {
    uVar12 = *(ulong *)(param_1 + 8);
    _objc_retain(uVar12);
    _objc_opt_class(puVar6);
    uVar10 = uVar12;
    _objc_opt_isKindOfClass(uVar12,puVar6);
    uVar5 = uVar12;
    if ((uVar10 & 1) == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar12);
    puVar6 = PTR_PTR_1126b6b98;
    func_0x00010c0752e0(param_3);
    func_0x00010c269b80(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar5);
    _objc_release(uVar5);
    _objc_release(puVar6);
  }
  if (uVar2 == 0) {
    if (iVar9 == 0) {
      if (iVar11 != 0) {
        uVar5 = param_3;
        func_0x00010c0d6ac0(param_3);
        _objc_retainAutoreleasedReturnValue();
        puStack_f0 = &uStack_f8;
        uStack_f8 = 0;
        uStack_e8 = 0x3032000000;
        uStack_e0 = 0x1053573cc;
        uStack_d8 = 0x1053573dc;
        uStack_d0 = 0;
        func_0x00010c0bc880();
        if (puStack_f0[5] != 0) {
          uVar7 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c269d40(uVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfd1c80();
          _objc_release(uVar7);
        }
        __Block_object_dispose(&uStack_f8,8);
        _objc_release(uStack_d0);
        _objc_release(uVar5);
      }
    }
    else {
      uVar5 = param_3;
      func_0x00010c0f14c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b0ea8;
      _objc_alloc();
      lStack_a0 = 0;
      func_0x00010c008360();
      lVar3 = lStack_a0;
      _objc_retain(lStack_a0);
      puVar8 = puVar6;
      func_0x00010c247940();
      if ((int)puVar8 != 6) {
        puVar8 = PTR_PTR_1126b6370;
        _objc_alloc_init(PTR_PTR_1126b6370);
        uVar10 = param_3;
        func_0x00010c0dc140(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1ce180(puVar8);
        _objc_release(uVar10);
        uVar10 = param_3;
        func_0x00010c11c460(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1e6040(puVar8);
        _objc_release(uVar10);
        func_0x00010c0752e0(param_3);
        func_0x00010c1b1c20(puVar8);
        func_0x00010c1cdde0(puVar6);
        _objc_release(puVar8);
      }
      if (lVar3 == 0) {
        if (puVar6 != (undefined *)0x0) {
          puVar8 = puVar6;
          func_0x00010c151180();
          uVar7 = 2;
          if ((int)puVar8 != 4) {
            uVar7 = 0;
          }
          uVar1 = 3;
          if ((int)puVar8 != 0x23) {
            uVar1 = uVar7;
          }
          func_0x000106fd8208(uVar1);
        }
        uVar7 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c0 = 0xc2000000;
        pcStack_b8 = FUN_1053573c8;
        puStack_b0 = &UNK_110849810;
        _objc_retain(param_3);
        uStack_a8 = param_3;
        func_0x00010c08c020(uVar7);
        _objc_release(uVar7);
        _objc_release(uStack_a8);
      }
      _objc_release(puVar6);
      _objc_release(lVar3);
      _objc_release(uVar5);
    }
  }
  else {
    ppuStack_98 = &PTR____CFConstantStringClassReference_110e60d98;
    uVar5 = param_3;
    func_0x00010c0dc140();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_90 = &PTR____CFConstantStringClassReference_110ea1438;
    uVar10 = param_3;
    uStack_80 = uVar5;
    func_0x00010c11c460();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    ppuStack_88 = &PTR____CFConstantStringClassReference_110ea1418;
    uStack_78 = uVar10;
    func_0x00010c0752e0(param_3);
    func_0x00010c0df6e0();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_70 = puVar6;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(uVar10);
    _objc_release(uVar5);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
    uVar5 = param_3;
    func_0x00010bf68960(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd1c80(uVar7);
    _objc_release(puVar6);
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(puVar8);
  }
LAB_10535735c:
  _objc_release(lVar4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_f8,8);
    __Unwind_Resume(param_3);
    return;
  }
  return;
}



/* Entry: 1053573c8; end: 1053573e3;  */

void FUN_1053573c8(void)

{
  return;
}



/* Entry: 1053573e4; end: 10535745b;  */

void FUN_1053573e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010c25d780(uVar1,param_2,&PTR____CFConstantStringClassReference_110dd3558,
                      &PTR____CFConstantStringClassReference_110dd34f8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_alloc();
  func_0x00010c04e820();
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10535745c; end: 105357547; -[SCNotificationActionHandlingNavigationWorkflow _shouldNavigateAccordingToDeepLink:] */

undefined8 FUN_10535745c(ulong param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  func_0x00010c11c420(param_3);
  func_0x00010bdca400();
  if (((param_1 & 1) == 0) && (lVar2 = param_3, func_0x00010c07cda0(), (int)lVar2 == 0)) {
    uVar5 = 0;
  }
  else {
    lVar2 = param_3;
    func_0x00010bf68960();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    if (lVar3 == 0) {
      uVar5 = 0;
    }
    else {
      iVar1 = 2;
      func_0x000100029b9c(2,0x11,0,0);
      puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
      if (iVar1 == 0) {
        func_0x00010bdc3460();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010bdc3480();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release();
      uVar5 = 0;
      if (puVar4 != (undefined *)0x0) {
        uVar5 = 1;
      }
    }
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 105357548; end: 1053575a7; -[SCNotificationActionHandlingNavigationWorkflow _shouldNavigateAccordingToPageLaunchCommand:] */

bool FUN_105357548(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c07cda0();
  if ((int)lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010c0f14c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != 0;
    _objc_release();
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 1053575a8; end: 105357607; -[SCNotificationActionHandlingNavigationWorkflow _shouldNavigateAccordingToRoute:] */

bool FUN_1053575a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c07cda0();
  if ((int)lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_3;
    func_0x00010c0d6ac0(param_3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != 0;
    _objc_release();
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105357608; end: 105357627; -[SCNotificationActionHandlingNavigationWorkflow _allowlistedDeeplinkPushType:] */

uint FUN_105357608(undefined8 param_1,undefined8 param_2,long param_3)

{
  return (uint)(param_3 - 0xb9U < 0x1c) & 0xff80781U >> (ulong)((uint)(param_3 - 0xb9U) & 0x1f);
}



/* Entry: 105357628; end: 1053576c3; -[SCNotificationActionHandlingNavigationWorkflow .cxx_destruct] */

void FUN_105357628(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
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



/* Entry: 1053576c4; end: 1053576ff; -[SCUnauthenticatedBadgeEntryPoint begin] */

void FUN_1053576c4(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1698c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105357700; end: 10535770f; -[SCUnauthenticatedBadgeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105357700(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112721cfc);
  return;
}



/* Entry: 105357710; end: 105357887; -[SCAppAttestEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105357710(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105357888;
  puStack_68 = &UNK_11087d4b8;
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_88,auStack_58);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112721d00);
  puVar3 = PTR_PTR_1126b7a28;
  _objc_alloc(PTR_PTR_1126b7a28);
  func_0x00010c03dac0();
  func_0x00010bf9d660(uVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105357888; end: 105357907;  */

void FUN_105357888(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be8a020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105357908; end: 105357a57; -[SCAppAttestEntryPoint _registrationAppAttestStateManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105357908(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR_PTR_1126b7a30;
  _objc_alloc(PTR_PTR_1126b7a30);
  lVar2 = param_2;
  func_0x00010bdcc940(param_2);
  func_0x00010be467e0(param_2);
  uVar8 = param_1;
  func_0x00010bdcf7a0(param_2);
  uVar9 = uVar8;
  func_0x00010be0b140(param_2);
  lVar3 = param_2;
  func_0x00010be0b040(param_2);
  lVar4 = param_2 + _DAT_112721d04;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010c292f40();
  _objc_retainAutoreleasedReturnValue();
  param_2 = param_2 + _DAT_112721d08;
  _objc_loadWeakRetained(param_2);
  lVar6 = param_2;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03f740(param_1,uVar8,uVar9,puVar1,param_3,lVar2,lVar3,lVar5,lVar6);
  _objc_release(lVar6);
  _objc_release(param_2);
  _objc_release(lVar5);
  _objc_release(lVar4);
  puVar7 = PTR__OBJC_CLASS___DCAppAttestService_1126b7a38;
  func_0x00010c22bf80(PTR__OBJC_CLASS___DCAppAttestService_1126b7a38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ff0e0(puVar1,param_3,puVar7);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105357a58; end: 105357b57; -[SCAppAttestEntryPoint _loginAppAttestStateManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105357a58(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126b7a30;
  _objc_alloc(PTR_PTR_1126b7a30);
  lVar2 = param_1 + _DAT_112721d04;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c292f40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112721d08;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03f740(0x4030000000000000,0x4008000000000000,0x3fd3333333333333,puVar1,param_2,2,3,
                      lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar5 = PTR__OBJC_CLASS___DCAppAttestService_1126b7a38;
  func_0x00010c22bf80(PTR__OBJC_CLASS___DCAppAttestService_1126b7a38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ff0e0(puVar1,param_2,puVar5);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105357b58; end: 105357bc3; -[SCAppAttestEntryPoint _appAttestRequirement] */

undefined8 FUN_105357b58(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_105357bc4();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067f00();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 105357bc4; end: 105357be7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105357bc4(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112721d10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105357be8; end: 105357c53; -[SCAppAttestEntryPoint _keyGenerationAndAttestationTimeout] */

double FUN_105357be8(undefined8 param_1)

{
  undefined8 uVar1;
  float fVar2;
  
  FUN_105357bc4();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  fVar2 = 8.0;
  func_0x00010bfb2cc0(0x41000000);
  _objc_release(uVar1);
  _objc_release(param_1);
  return (double)fVar2;
}



/* Entry: 105357c54; end: 105357cbf; -[SCAppAttestEntryPoint _assertionTimeout] */

double FUN_105357c54(undefined8 param_1)

{
  undefined8 uVar1;
  float fVar2;
  
  FUN_105357bc4();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  fVar2 = 3.0;
  func_0x00010bfb2cc0(0x40400000);
  _objc_release(uVar1);
  _objc_release(param_1);
  return (double)fVar2;
}



/* Entry: 105357cc0; end: 105357d2f; -[SCAppAttestEntryPoint _errorRetryBackoff] */

double FUN_105357cc0(undefined8 param_1)

{
  undefined8 uVar1;
  float fVar2;
  
  FUN_105357bc4();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  fVar2 = 0.3;
  func_0x00010bfb2cc0(0x3e99999a);
  _objc_release(uVar1);
  _objc_release(param_1);
  return (double)fVar2;
}



/* Entry: 105357d30; end: 105357d9b; -[SCAppAttestEntryPoint _errorMaxRetries] */

undefined8 FUN_105357d30(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_105357bc4();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c067f00();
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 105357d9c; end: 105357dfb; -[SCAppAttestEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105357d9c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112721d00,0);
  _objc_destroyWeak(param_1 + _DAT_112721d08);
  _objc_destroyWeak(param_1 + _DAT_112721d04);
  _objc_destroyWeak(param_1 + _DAT_112721d10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112721d0c);
  return;
}



/* Entry: 105357dfc; end: 105357e7f; -[SCAppAttestGeneratingKeyEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105357dfc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_112721d14;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c1279a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbf6a0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105357e80; end: 105357eb7; -[SCAppAttestGeneratingKeyEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105357e80(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112721d14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112721d18);
  return;
}



/* Entry: 105357eb8; end: 105357f0f; -[SCAppAttestRetrier initWithBackoff:maxRetries:] */

void FUN_105357eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e7a50;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined4 *)((long)puVar1 + 0x10) = param_4;
  }
  return;
}



/* Entry: 105357f10; end: 105357fbb; -[SCAppAttestRetrier retryBlock:onQueue:onMaximumRetries:] */

void FUN_105357f10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  piVar1 = (int *)(param_1 + 0x10);
  do {
    iVar2 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar2 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar2 == 0) {
    (**(code **)(param_5 + 0x10))(param_5);
  }
  else {
    puVar5 = PTR_PTR_1126ae888;
    _objc_alloc(PTR_PTR_1126ae888);
    func_0x00010c0522e0(*(undefined8 *)(param_1 + 8));
    func_0x00010c1edb80(param_1,param_2,puVar5);
    _objc_release(puVar5);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105357fbc; end: 105357fc7; -[SCAppAttestRetrier retryTimer] */

void FUN_105357fbc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x18,1);
  return;
}



/* Entry: 105357fc8; end: 105357fcf; -[SCAppAttestRetrier setRetryTimer:] */

void FUN_105357fc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 105357fd0; end: 105357fdb; -[SCAppAttestRetrier .cxx_destruct] */

void FUN_105357fd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 105357fdc; end: 10535810f; -[SCAppAttestStateImpl initWithRequirement:keyAttestationAndGenerationTimeout:assertionTimeout:errorRetryBackoff:errorMaxRetries:blizzardLogger:grapheneRegistry:] */

undefined1 *
FUN_105357fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126e7a58;
  uStack_70 = param_4;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_9;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x18) = param_6;
    *(undefined8 *)((long)puVar1 + 0x20) = param_1;
    *(undefined8 *)((long)puVar1 + 0x28) = param_2;
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    *(undefined4 *)((long)puVar1 + 0x38) = param_7;
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x48) = 0;
    puVar3 = PTR_PTR_1126b7a40;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  return (undefined1 *)puVar1;
}



/* Entry: 105358110; end: 105358263; -[SCAppAttestStateImpl generateKeyAndAttestation] */

void FUN_105358110(ulong param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  pbVar1 = (byte *)(param_1 + 0x48);
  do {
    bVar2 = *pbVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
    if (bVar4) {
      *pbVar1 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((bVar2 & 1) == 0) && (*(int *)(param_1 + 0x18) != 0)) {
    uVar5 = param_1;
    func_0x00010c22bf80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c080420();
    _objc_release();
    if ((uVar6 & 1) == 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010be0b240(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43ca0(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    *(ulong *)(param_1 + 0x58) = uVar5;
    _objc_release(uVar7);
    _objc_initWeak(auStack_38,param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010c0f7fc0(uVar7);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 105358264; end: 10535828f;  */

void FUN_105358264(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1a840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105358290; end: 1053583a3; -[SCAppAttestStateImpl generateAssertionWithData:completionHandler:] */

void FUN_105358290(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_50 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1053583a4; end: 1053584b7;  */

void FUN_1053583a4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) == 1) {
      _objc_copyWeak(auStack_40,param_1 + 0x30);
      uStack_38 = *(undefined8 *)(param_1 + 0x38);
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar2);
      func_0x00010be1fe40(lVar1);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_40);
    }
    else if (*(int *)(lVar1 + 0x18) == 2) {
      func_0x00010be1aaa0(*(undefined8 *)(param_1 + 0x38),lVar1);
    }
    else {
      func_0x00010be1c440(*(undefined8 *)(param_1 + 0x38),lVar1);
    }
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1053584b8; end: 105358553;  */

void FUN_1053584b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be1c440(*(undefined8 *)(param_1 + 0x30),lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105358554; end: 1053586bf; -[SCAppAttestStateImpl _generateAndAttestKey] */

void FUN_105358554(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  puVar1 = PTR_PTR_1126b7a48;
  _objc_alloc(PTR_PTR_1126b7a48);
  func_0x00010bff66c0(*(undefined8 *)(param_1 + 0x30));
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  lVar2 = param_1;
  func_0x00010be0b240(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f580(uVar5,uVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  func_0x00010be1a860(param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bfbc3e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  func_0x00010c297260(uVar3);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_60);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 1053586c0; end: 10535871b;  */

void FUN_1053586c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c26fa40(*(undefined8 *)(param_1 + 0x50));
    func_0x00010be59000(param_1,param_2,0,param_3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10535871c; end: 105358813; -[SCAppAttestStateImpl _generateAndAttestKeyWithRetrier:] */

void FUN_10535871c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c22bf80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bfbf700(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105358814; end: 105358a3b;  */

void FUN_105358814(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_1053589dc;
  if (param_3 == 0) {
    uVar4 = *(undefined8 *)(lVar1 + 0x40);
    _objc_retain(param_2);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(uVar3);
    param_1 = param_2;
  }
  else {
    lVar2 = lVar1;
    func_0x00010be43520();
    if ((int)lVar2 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_105358a3c;
      puStack_88 = &UNK_110841fb0;
      _objc_copyWeak(auStack_78,param_1 + 0x28);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar5);
      uVar3 = *(undefined8 *)(lVar1 + 0x40);
      uStack_80 = uVar5;
      func_0x00010c11de00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_a8,param_1 + 0x28);
      _objc_retain(param_3);
      func_0x00010c13f420(uVar4);
      _objc_release(uVar3);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_a8);
      _objc_release(uStack_80);
      _objc_destroyWeak(auStack_78);
      goto LAB_1053589dc;
    }
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (param_1 == 0) goto LAB_1053589dc;
    func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x50));
  }
  _objc_release(param_1);
LAB_1053589dc:
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105358a3c; end: 105358ab3;  */

void FUN_105358a3c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be1a860(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105358ab4; end: 105358ac3;  */

void FUN_105358ab4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd0f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__attestKey_withRetrier__112551d68,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 105358ac4; end: 105358c4b; -[SCAppAttestStateImpl _attestKey:withRetrier:] */

void FUN_105358ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = param_1;
  func_0x00010c22bf80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0db0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bdc25c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf0dc60(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105358c4c; end: 105358e87;  */

void FUN_105358c4c(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **unaff_x25;
  undefined **unaff_x26;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_3 == 0) {
      uStack_88 = *(undefined8 *)(param_1 + 0x20);
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_80 = param_2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43d60(*(undefined8 *)(lVar1 + 0x50));
      _objc_release(puVar3);
    }
    else {
      lVar2 = lVar1;
      func_0x00010be43520();
      puVar3 = PTR___NSConcreteStackBlock_11034bd00;
      if ((int)lVar2 == 0) {
        func_0x00010bf43ca0(*(undefined8 *)(lVar1 + 0x50));
      }
      else {
        uVar4 = *(undefined8 *)(param_1 + 0x28);
        puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0xc2000000;
        pcStack_b0 = FUN_105358e88;
        puStack_a8 = &UNK_110848218;
        unaff_x25 = &puStack_c0;
        _objc_copyWeak(auStack_90,param_1 + 0x30);
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(uVar5);
        uVar6 = *(undefined8 *)(param_1 + 0x28);
        uStack_a0 = uVar5;
        _objc_retain(uVar6);
        uVar5 = *(undefined8 *)(lVar1 + 0x40);
        uStack_98 = uVar6;
        func_0x00010c11de00(uVar5);
        _objc_retainAutoreleasedReturnValue();
        puStack_f0 = puVar3;
        uStack_e8 = 0xc2000000;
        uStack_e0 = 0x105358ec4;
        puStack_d8 = &UNK_110841fb0;
        _objc_copyWeak(auStack_c8,param_1 + 0x30);
        _objc_retain(param_3);
        lStack_d0 = param_3;
        func_0x00010c13f420(uVar4);
        _objc_release(uVar5);
        _objc_release(lStack_d0);
        _objc_destroyWeak(auStack_c8);
        _objc_release(uStack_98);
        _objc_release(uStack_a0);
        _objc_destroyWeak(auStack_90);
        unaff_x26 = &puStack_f0;
      }
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x26 + 0x28));
  _objc_destroyWeak(unaff_x25 + 6);
  __Unwind_Resume();
  param_2 = param_2 + 0x30;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    func_0x00010bdd0f20(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105358e88; end: 105358eff;  */

void FUN_105358e88(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bdd0f20(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105358f00; end: 105358faf; -[SCAppAttestStateImpl _getKeyIdAndAttestationWithCompletionHandler:] */

void FUN_105358f00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bfbc3e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105358fb0;
  puStack_40 = &UNK_11084e3a0;
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c297260(uVar1,param_2,&puStack_58,uVar2);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105358fb0; end: 105359067;  */

void FUN_105358fb0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    _objc_retain(param_2);
    uVar1 = param_2;
    func_0x00010c0dfd40(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010c0dfd40(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
  else {
    uVar1 = 0;
    uVar2 = 0;
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar1,uVar2,param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105359068; end: 105359173; -[SCAppAttestStateImpl _generateAssertionWithData:completionHandler:overheadStartSec:] */

void FUN_105359068(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_2);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_50 = param_1;
  func_0x00010be1fe40(param_2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105359174; end: 1053593cb;  */

void FUN_105359174(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_4 == 0) {
      puVar2 = PTR_PTR_1126b7a40;
      _objc_opt_new();
      puVar3 = PTR_PTR_1126b7a48;
      _objc_alloc(PTR_PTR_1126b7a48);
      func_0x00010bff66c0(*(undefined8 *)(lVar1 + 0x30));
      uVar7 = *(undefined8 *)(lVar1 + 0x28);
      lVar4 = lVar1;
      func_0x00010be0b240(lVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(lVar1 + 0x40);
      func_0x00010c11de00(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f580(uVar7,puVar2);
      _objc_release(uVar5);
      _objc_release(lVar4);
      func_0x00010be1aac0(*(undefined8 *)(param_1 + 0x38),lVar1);
      puVar6 = puVar2;
      func_0x00010bfbc3e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_80,param_1 + 0x30);
      _objc_retain(puVar2);
      _objc_retain(param_2);
      _objc_retain(param_3);
      uStack_78 = *(undefined8 *)(param_1 + 0x38);
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar5);
      func_0x00010c297260(puVar6);
      _objc_release(puVar6);
      _objc_release(uVar5);
      _objc_release(param_3);
      _objc_release(param_2);
      _objc_release(puVar2);
      _objc_destroyWeak(auStack_80);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    else {
      func_0x00010be1c440(*(undefined8 *)(param_1 + 0x38),lVar1);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1053593cc; end: 10535946b;  */

void FUN_1053593cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c26fa40(*(undefined8 *)(param_1 + 0x20));
  func_0x00010be59000(lVar1);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be1c440(*(undefined8 *)(param_1 + 0x48));
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10535946c; end: 105359677; -[SCAppAttestStateImpl _generateAssertionWithData:completionHandler:overheadStartSec:keyId:attestation:promise:retrier:] */

void FUN_10535946c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_initWeak(auStack_78,param_2);
  func_0x00010c22bf80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010bdc25c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_78);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uStack_80 = param_1;
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010bfbef60(param_2);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105359678; end: 1053598cb;  */

void FUN_105359678(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_d8 [8];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    if (param_3 == 0) {
      func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x20));
    }
    else {
      lVar2 = lVar1;
      func_0x00010be43520();
      if ((int)lVar2 == 0) {
        func_0x00010bf43ca0(*(undefined8 *)(param_1 + 0x20));
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x28);
        puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c8 = 0xc2000000;
        pcStack_c0 = FUN_1053598cc;
        puStack_b8 = &UNK_11087d5a8;
        _objc_copyWeak(auStack_80,param_1 + 0x50);
        uVar4 = *(undefined8 *)(param_1 + 0x30);
        _objc_retain(uVar4);
        uVar5 = *(undefined8 *)(param_1 + 0x48);
        uStack_b0 = uVar4;
        _objc_retain(uVar5);
        uStack_78 = *(undefined8 *)(param_1 + 0x58);
        uVar4 = *(undefined8 *)(param_1 + 0x38);
        uStack_88 = uVar5;
        _objc_retain(uVar4);
        uVar5 = *(undefined8 *)(param_1 + 0x40);
        uStack_a8 = uVar4;
        _objc_retain(uVar5);
        uVar4 = *(undefined8 *)(param_1 + 0x20);
        uStack_a0 = uVar5;
        _objc_retain(uVar4);
        uVar5 = *(undefined8 *)(param_1 + 0x28);
        uStack_98 = uVar4;
        _objc_retain(uVar5);
        uVar4 = *(undefined8 *)(lVar1 + 0x40);
        uStack_90 = uVar5;
        func_0x00010c11de00(uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_d8,param_1 + 0x50);
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(uVar5);
        _objc_retain(param_3);
        func_0x00010c13f420(uVar3);
        _objc_release(uVar4);
        _objc_release(param_3);
        _objc_release(uVar5);
        _objc_destroyWeak(auStack_d8);
        _objc_release(uStack_90);
        _objc_release(uStack_98);
        _objc_release(uStack_a0);
        _objc_release(uStack_a8);
        _objc_release(uStack_88);
        _objc_release(uStack_b0);
        _objc_destroyWeak(auStack_80);
      }
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1053598cc; end: 10535994b;  */

void FUN_1053598cc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be1aac0(*(undefined8 *)(param_1 + 0x58),lVar1,param_2,
                        *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x48),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),
                        *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10535994c; end: 105359af3; -[SCAppAttestStateImpl _generateVendorAttestationWithKeyId:attestation:assertion:error:overheadStartSec:completionHandler:] */

void FUN_10535994c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  
  dVar3 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _CACurrentMediaTime();
  func_0x00010be56b60(dVar3 - param_1,param_2);
  if (*(int *)(param_2 + 0x18) == 0) {
    (**(code **)(param_8 + 0x10))(param_8,0);
  }
  else {
    puVar1 = PTR_PTR_1126b7a50;
    func_0x00010c0cb140(PTR_PTR_1126b7a50);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21acc0();
    func_0x00010c168760(puVar1);
    func_0x00010c168780(puVar1);
    func_0x00010c1687a0(puVar1);
    func_0x00010c1d9a60(puVar1);
    func_0x00010c168740(puVar1);
    if (param_7 != 0) {
      func_0x00010bf3ec40(param_7);
      func_0x00010be0b1e0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c196ee0(puVar1);
      _objc_release(param_2);
      func_0x00010bf3ec40(param_7);
      func_0x00010c209300(puVar1);
    }
    puVar2 = puVar1;
    func_0x00010bf63640(puVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_8 + 0x10))(param_8,puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105359af4; end: 105359b0f; -[SCAppAttestStateImpl _errorWithCode:] */

void FUN_105359af4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_code_userInfo__1125c3e38,
             &PTR____CFConstantStringClassReference_110dd3618,param_3,0);
  return;
}



/* Entry: 105359b10; end: 105359b73; -[SCAppAttestStateImpl _isRetryableError:] */

bool FUN_105359b10(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf3ec40();
  if ((lVar2 == 4) || (lVar2 = param_3, func_0x00010bf3ec40(), lVar2 == 0)) {
    bVar1 = true;
  }
  else {
    lVar2 = param_3;
    func_0x00010bf3ec40(param_3);
    bVar1 = lVar2 == 3;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 105359b74; end: 105359bd7; -[SCAppAttestStateImpl _objectOrNil:] */

void FUN_105359b74(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  puVar2 = param_3;
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  _objc_opt_class();
  if (puVar2 == puVar1) {
    puVar2 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_3);
    puVar2 = param_3;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105359bd8; end: 105359bf3; -[SCAppAttestStateImpl _appAttestStepToString:] */

undefined ** FUN_105359bd8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd3698;
  if (param_3 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110dd36b8;
  }
  return ppuVar1;
}



/* Entry: 105359bf4; end: 105359cef; -[SCAppAttestStateImpl _errorToString:] */

void FUN_105359bf4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 < 0) {
    if (param_3 < -0x66) {
      if ((param_3 == -0x68) || (param_3 == -0x67)) goto _objc_autoreleaseReturnValue;
    }
    else if ((param_3 == -0x66) || (param_3 == -0x65)) goto _objc_autoreleaseReturnValue;
  }
  else if (param_3 < 2) {
    if ((param_3 == 0) || (param_3 == 1)) goto _objc_autoreleaseReturnValue;
  }
  else if ((param_3 == 4) || ((param_3 == 3 || (param_3 == 2)))) goto _objc_autoreleaseReturnValue;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd37f8);
  _objc_retainAutoreleasedReturnValue();
_objc_autoreleaseReturnValue:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105359cf0; end: 105359d5b; -[SCAppAttestStateImpl _logStep:latencySec:error:] */

void FUN_105359cf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  func_0x00010be50a00(param_1,param_2,param_3,param_4,param_5);
  func_0x00010be54320(param_1,param_2,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105359d5c; end: 105359eaf; -[SCAppAttestStateImpl _logBlizzardEventForStep:latencySec:error:] */

void FUN_105359d5c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b7a58;
  _objc_opt_new(PTR_PTR_1126b7a58);
  if (param_5 == 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110db78d8;
  }
  else {
    lVar2 = param_5;
    func_0x00010bf3ec40(param_5);
    func_0x00010c196fe0(puVar1,param_3,lVar2);
    lVar2 = param_5;
    func_0x00010bf3ec40();
    ppuVar4 = &PTR____CFConstantStringClassReference_110dd3638;
    if (lVar2 != -0x67) {
      lVar2 = param_5;
      func_0x00010bf3ec40();
      if (lVar2 != -0x68) {
        ppuVar4 = &PTR____CFConstantStringClassReference_110dacbf8;
      }
    }
  }
  func_0x00010c19df20(puVar1,param_3,1);
  lVar2 = param_2;
  func_0x00010bdcc960(param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20a620(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  func_0x00010c21a380(puVar1,param_3,&PTR____CFConstantStringClassReference_110dd3658);
  func_0x00010c21acc0(puVar1,param_3,2);
  func_0x00010c1b92e0(puVar1,param_3,(long)(param_1 * 1000.0));
  func_0x00010c161ce0(puVar1,param_3,ppuVar4);
  uVar3 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b29e0();
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 105359eb0; end: 10535a023; -[SCAppAttestStateImpl _logGrapheneMetricForStep:latencySec:error:] */

void FUN_105359eb0(undefined8 param_1,undefined **param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_5);
  puVar5 = PTR_PTR_1126b7a60;
  if (param_4 == 1) {
    func_0x00010bf0aec0(PTR_PTR_1126b7a60);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_4 == 0) {
    func_0x00010c0867a0(PTR_PTR_1126b7a60);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  if (param_5 == 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110db78d8;
  }
  else {
    lVar1 = param_5;
    func_0x00010bf3ec40(param_5);
    ppuVar2 = param_2;
    func_0x00010be0b1e0(param_2,param_3,lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar3 = puVar5;
  func_0x00010c2ac460(puVar5,param_3,&PTR____CFConstantStringClassReference_110daf4d8,ppuVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar4 = param_2[2];
  func_0x00010c269d40(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf04d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(puVar5);
  _objc_release(puVar4);
  puVar4 = param_2[2];
  func_0x00010c269d40(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf04d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(ppuVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10535a024; end: 10535a0af; -[SCAppAttestStateImpl _logOverheadOnRegistration:] */

void FUN_10535a024(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b7a60;
  func_0x00010c0ef400(PTR_PTR_1126b7a60);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf04d00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc000(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


