/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106f9f8b0; end: 106f9f90b; -[SCSpectaclesBleMonitor .cxx_destruct] */

void FUN_106f9f8b0(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106f9f90c; end: 106f9f95f; +[SCSpectaclesCBCentralManager shared] */

void FUN_106f9f90c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c8968 != -1) {
    func_0x00010002a2fc(0x1136c8968,&PTR___NSConcreteGlobalBlock_110986228);
  }
  uVar1 = uRam00000001136c8970;
  _objc_retain(uRam00000001136c8970);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106f9f960; end: 106f9fa8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_106f9f960(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puStack_b0;
  undefined *puStack_a8;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126d3a98;
  _objc_alloc_init();
  puVar2 = PTR_PTR_1126ae790;
  _objc_alloc();
  func_0x00010c021520();
  puVar3 = PTR_PTR_1126c0d20;
  _objc_alloc();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  puVar7 = puVar2;
  puVar8 = puVar4;
  func_0x00010be3aaa0();
  uVar10 = puRam00000001136c8970;
  puRam00000001136c8970 = puVar3;
  _objc_release(uVar10);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return puVar1;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_b0;
  _objc_retain(puVar6);
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  puVar2 = puVar7;
  func_0x00010c11de00(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puStack_a8 = PTR_PTR_1126f8160;
  puStack_b0 = puVar1;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_initWithDelegate_queue_options__112536578,puVar6,puVar2,
                      puVar8);
  _objc_release(puVar8);
  _objc_release(puVar2);
  if (ppuVar5 != (undefined **)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)ppuVar5 + (long)_DAT_112761d88);
    *(undefined **)((long)ppuVar5 + (long)_DAT_112761d88) = puVar1;
    _objc_release(uVar10);
    lVar11 = (long)_DAT_112761d8c;
    _objc_retain(puVar6);
    uVar10 = *(undefined8 *)((long)ppuVar5 + lVar11);
    *(undefined **)((long)ppuVar5 + lVar11) = puVar6;
    _objc_release(uVar10);
    lVar9 = (long)_DAT_112761d90;
    _objc_retain(puVar7);
    uVar10 = *(undefined8 *)((long)ppuVar5 + lVar9);
    *(undefined **)((long)ppuVar5 + lVar9) = puVar7;
    _objc_release(uVar10);
    func_0x00010bef9980(*(undefined8 *)((long)ppuVar5 + lVar11));
  }
  _objc_release(puVar7);
  _objc_release(puVar6);
  return (undefined *)ppuVar5;
}



/* Entry: 106f9fa90; end: 106f9fbbb; -[SCSpectaclesCBCentralManager _initWithAnnouncer:performer:options:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106f9fa90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar3 = param_4;
  func_0x00010c11de00(param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR_PTR_1126f8160;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithDelegate_queue_options__112536578,param_3,uVar3,
                      param_5);
  _objc_release(param_5);
  _objc_release(uVar3);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112761d88);
    *(undefined **)((long)puVar1 + (long)_DAT_112761d88) = puVar2;
    _objc_release(uVar3);
    lVar5 = (long)_DAT_112761d8c;
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined8 *)((long)puVar1 + lVar5) = param_3;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112761d90;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar3);
    func_0x00010bef9980(*(undefined8 *)((long)puVar1 + lVar5));
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106f9fbbc; end: 106f9fbcb; -[SCSpectaclesCBCentralManager addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f9fbbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112761d8c),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 106f9fbcc; end: 106f9fbdb; -[SCSpectaclesCBCentralManager removeListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f9fbcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112761d8c),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 106f9fbdc; end: 106f9fc9b; -[SCSpectaclesCBCentralManager connectPeripheral:options:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f9fbdc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  func_0x00010befa120(*(undefined8 *)(param_1 + _DAT_112761d88));
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  puStack_38 = PTR_PTR_1126f8160;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_connectPeripheral_options__1125afa60,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106f9fc9c; end: 106f9fd3b; -[SCSpectaclesCBCentralManager cancelPeripheralConnection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f9fc9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8160;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_cancelPeripheralConnection__1125a9428,param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  func_0x00010c12d360(*(undefined8 *)(param_1 + _DAT_112761d88));
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
  return;
}



/* Entry: 106f9fd3c; end: 106f9fd3f; -[SCSpectaclesCBCentralManager centralManager:willRestoreState:] */

void FUN_106f9fd3c(void)

{
  return;
}



/* Entry: 106f9fd40; end: 106f9feeb; -[SCSpectaclesCBCentralManager shutdown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f9fd40(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_f8;
  undefined *puStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_f0 = PTR_PTR_1126f8160;
  lStack_f8 = param_1;
  _objc_msgSendSuper2(&lStack_f8,PTR_s_stopScan_112673468);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar5 = (long)_DAT_112761d88;
  lVar4 = *(long *)(param_1 + lVar5);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar6 = *plStack_130;
    do {
      puVar2 = PTR_s_cancelPeripheralConnection__1125a9428;
      lVar7 = 0;
      do {
        if (*plStack_130 != lVar6) {
          _objc_enumerationMutation(lVar4);
        }
        puStack_148 = PTR_PTR_1126f8160;
        lStack_150 = param_1;
        _objc_msgSendSuper2(&lStack_150,puVar2,*(undefined8 *)(lStack_138 + lVar7 * 8));
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar4;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar4);
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar3);
  _objc_sync_exit(param_1);
  lVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_sync_exit(param_1);
  __Unwind_Resume();
  func_0x00010bf51e00(*(undefined8 *)(lVar1 + _DAT_112761d88));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f9feec; end: 106f9ff0b; -[SCSpectaclesCBCentralManager hitList] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f9feec(long param_1)

{
  func_0x00010bf51e00(*(undefined8 *)(param_1 + _DAT_112761d88));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106f9ff0c; end: 106f9ff1b; -[SCSpectaclesCBCentralManager performer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106f9ff0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112761d90);
}



/* Entry: 106f9ff1c; end: 106f9ff6b; -[SCSpectaclesCBCentralManager .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106f9ff1c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112761d90,0);
  _objc_storeStrong(param_1 + _DAT_112761d8c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112761d88,0);
  return;
}



/* Entry: 106f9ff6c; end: 106fa00a7; -[SCSpectaclesCBCentralManagerEventListenerAnnouncer centralManagerDidUpdateState:] */

void FUN_106f9ff6c(undefined **param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined *unaff_x24;
  undefined **unaff_x25;
  undefined **unaff_x26;
  long lVar16;
  undefined **unaff_x27;
  undefined *unaff_x28;
  undefined1 *puVar17;
  undefined8 uStack_720;
  long lStack_718;
  long *plStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  long lStack_660;
  undefined *puStack_650;
  undefined **ppuStack_648;
  undefined **ppuStack_640;
  undefined **ppuStack_638;
  undefined *puStack_630;
  undefined *puStack_628;
  undefined *puStack_620;
  undefined8 uStack_618;
  undefined1 *puStack_610;
  undefined1 *puStack_608;
  undefined8 ***pppuStack_600;
  code *pcStack_5f8;
  undefined8 uStack_5f0;
  long lStack_5e8;
  ulong *puStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined1 auStack_5b0 [128];
  long lStack_530;
  undefined *puStack_520;
  undefined **ppuStack_518;
  undefined **ppuStack_510;
  undefined **ppuStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined8 uStack_4f0;
  undefined **ppuStack_4e8;
  undefined1 *puStack_4e0;
  undefined *puStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  undefined8 uStack_4c0;
  long lStack_4b8;
  undefined8 *puStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined1 auStack_478 [128];
  long lStack_3f8;
  undefined *puStack_3f0;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined **ppuStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined1 *puStack_3b0;
  undefined **ppuStack_3a8;
  undefined1 ***pppuStack_3a0;
  code *pcStack_398;
  undefined8 uStack_390;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 auStack_350 [128];
  long lStack_2d0;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined *puStack_260;
  long lStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar4 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar12 = auStack_e8;
  ppuVar1 = param_1;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x24 = (undefined *)*puStack_120;
    unaff_x25 = &PTR_s_card_1125aa000;
    do {
      puVar5 = PTR_s_centralManagerDidUpdateState__1125aac28;
      unaff_x26 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_120 != unaff_x24) {
          _objc_enumerationMutation(param_1);
        }
        uVar15 = *(ulong *)(lStack_128 + (long)unaff_x26 * 8);
        uVar2 = uVar15;
        _objc_opt_respondsToSelector(uVar15,puVar5);
        if ((uVar2 & 1) != 0) {
          func_0x00010bf34a00(uVar15);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar1 != unaff_x26);
      puVar12 = auStack_e8;
      ppuVar1 = param_1;
      puVar4 = &uStack_130;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  ppuVar6 = &puStack_260;
  pcStack_138 = FUN_106fa00a8;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar4);
  _objc_retain(puVar12);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_258 = 0;
  puStack_260 = (undefined *)0x0;
  uStack_248 = 0;
  puStack_250 = (undefined8 *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  puVar8 = auStack_218;
  uVar13 = 0x10;
  ppuVar1 = param_3;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_250;
    unaff_x26 = &PTR_s_card_1125aa000;
    do {
      puVar5 = PTR_s_centralManager_willRestoreState__1125aac20;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_250 != unaff_x25) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x24 = *(undefined **)(lStack_258 + (long)unaff_x27 * 8);
        puVar3 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,puVar5);
        if (((ulong)puVar3 & 1) != 0) {
          func_0x00010bf349e0(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar1 != unaff_x27);
      puVar8 = auStack_218;
      uVar13 = 0x10;
      ppuVar1 = param_3;
      ppuVar6 = &puStack_260;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(param_3);
  _objc_release(puVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_390;
  pcStack_268 = FUN_106fa01fc;
  lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_270 = &puStack_140;
  _objc_retain(ppuVar6);
  _objc_retain(puVar8);
  _objc_retain(uVar13);
  _objc_retain(param_6);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  puStack_380 = (undefined8 *)0x0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  puVar12 = auStack_350;
  puVar5 = (undefined *)puVar4;
  func_0x00010bf52a60();
  if (puVar5 != (undefined *)0x0) {
    unaff_x27 = (undefined **)*puStack_380;
    do {
      unaff_x25 = (undefined **)PTR_s_centralManager_didDiscoverPeriph_1125aac10;
      unaff_x28 = (undefined *)0x0;
      do {
        if ((undefined **)*puStack_380 != unaff_x27) {
          _objc_enumerationMutation(puVar4);
        }
        unaff_x26 = *(undefined ***)(lStack_388 + (long)unaff_x28 * 8);
        ppuVar1 = unaff_x26;
        _objc_opt_respondsToSelector(unaff_x26,unaff_x25);
        if (((ulong)ppuVar1 & 1) != 0) {
          func_0x00010bf349a0(unaff_x26);
        }
        unaff_x28 = unaff_x28 + 1;
      } while (puVar5 != unaff_x28);
      puVar12 = auStack_350;
      puVar5 = (undefined *)puVar4;
      puVar10 = &uStack_390;
      func_0x00010bf52a60();
      unaff_x24 = (undefined *)0x0;
    } while (puVar5 != (undefined *)0x0);
  }
  _objc_release(puVar4);
  _objc_release(param_6);
  _objc_release(uVar13);
  _objc_release(puVar8);
  ppuVar1 = ppuVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d0) {
    return;
  }
  ___stack_chk_fail();
  puVar11 = &uStack_4c0;
  pcStack_398 = FUN_106fa0380;
  lStack_3f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_3f0 = unaff_x28;
  ppuStack_3e8 = unaff_x27;
  ppuStack_3e0 = unaff_x26;
  ppuStack_3d8 = unaff_x25;
  puStack_3d0 = unaff_x24;
  puStack_3c8 = (undefined *)puVar4;
  uStack_3c0 = param_6;
  uStack_3b8 = uVar13;
  puStack_3b0 = puVar8;
  ppuStack_3a8 = ppuVar6;
  pppuStack_3a0 = &ppuStack_270;
  _objc_retain(puVar10);
  _objc_retain(puVar12);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_4a8 = 0;
  puStack_4b0 = (undefined8 *)0x0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  puVar8 = auStack_478;
  uVar13 = 0x10;
  ppuVar6 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar6 != (undefined **)0x0) {
    unaff_x25 = (undefined **)*puStack_4b0;
    unaff_x26 = &PTR_s_card_1125aa000;
    do {
      puVar4 = (undefined8 *)PTR_s_centralManager_didConnectPeriphe_1125aac00;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_4b0 != unaff_x25) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x24 = *(undefined **)(lStack_4b8 + (long)unaff_x27 * 8);
        puVar5 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,puVar4);
        if (((ulong)puVar5 & 1) != 0) {
          func_0x00010bf34960(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar6 != unaff_x27);
      puVar8 = auStack_478;
      uVar13 = 0x10;
      ppuVar6 = ppuVar1;
      puVar11 = &uStack_4c0;
      func_0x00010bf52a60();
      param_6 = 0;
    } while (ppuVar6 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  _objc_release(puVar12);
  puVar5 = (undefined *)puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3f8) {
    return;
  }
  ___stack_chk_fail();
  puVar9 = &uStack_5f0;
  pcStack_4c8 = FUN_106fa04d4;
  lStack_530 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_520 = unaff_x28;
  ppuStack_518 = unaff_x27;
  ppuStack_510 = unaff_x26;
  ppuStack_508 = unaff_x25;
  puStack_500 = unaff_x24;
  puStack_4f8 = (undefined *)puVar4;
  uStack_4f0 = param_6;
  ppuStack_4e8 = ppuVar1;
  puStack_4e0 = puVar12;
  puStack_4d8 = (undefined *)puVar10;
  pppuStack_4d0 = &pppuStack_3a0;
  _objc_retain(puVar11);
  _objc_retain(puVar8);
  _objc_retain(uVar13);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_5e8 = 0;
  uStack_5f0 = 0;
  uStack_5d8 = 0;
  puStack_5e0 = (ulong *)0x0;
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  uStack_5b8 = 0;
  uStack_5c0 = 0;
  puVar12 = auStack_5b0;
  uVar14 = 0x10;
  puVar3 = puVar5;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    unaff_x26 = (undefined **)*puStack_5e0;
    unaff_x27 = &PTR_s_card_1125aa000;
    do {
      unaff_x24 = PTR_s_centralManager_didFailToConnectP_1125aac18;
      unaff_x28 = (undefined *)0x0;
      do {
        if ((undefined **)*puStack_5e0 != unaff_x26) {
          _objc_enumerationMutation(puVar5);
        }
        unaff_x25 = *(undefined ***)(lStack_5e8 + (long)unaff_x28 * 8);
        ppuVar1 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if (((ulong)ppuVar1 & 1) != 0) {
          func_0x00010bf349c0(unaff_x25);
        }
        unaff_x28 = unaff_x28 + 1;
      } while (puVar3 != unaff_x28);
      puVar12 = auStack_5b0;
      uVar14 = 0x10;
      puVar3 = puVar5;
      puVar9 = &uStack_5f0;
      func_0x00010bf52a60();
      puVar4 = (undefined8 *)0x0;
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar5);
  _objc_release(uVar13);
  _objc_release(puVar8);
  puVar7 = (undefined1 *)puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_530) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_720;
  pcStack_5f8 = FUN_106fa0640;
  lStack_660 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_650 = unaff_x28;
  ppuStack_648 = unaff_x27;
  ppuStack_640 = unaff_x26;
  ppuStack_638 = unaff_x25;
  puStack_630 = unaff_x24;
  puStack_628 = (undefined *)puVar4;
  puStack_620 = puVar5;
  uStack_618 = uVar13;
  puStack_610 = puVar8;
  puStack_608 = (undefined1 *)puVar11;
  pppuStack_600 = &pppuStack_4d0;
  _objc_retain(puVar9);
  _objc_retain(puVar12);
  _objc_retain(uVar14);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_718 = 0;
  uStack_720 = 0;
  uStack_708 = 0;
  plStack_710 = (long *)0x0;
  uStack_6f8 = 0;
  uStack_700 = 0;
  uStack_6e8 = 0;
  uStack_6f0 = 0;
  puVar8 = puVar7;
  func_0x00010bf52a60();
  if (puVar8 != (undefined1 *)0x0) {
    lVar16 = *plStack_710;
    do {
      puVar5 = PTR_s_centralManager_didDisconnectPeri_1125aac08;
      puVar17 = (undefined1 *)0x0;
      do {
        if (*plStack_710 != lVar16) {
          _objc_enumerationMutation(puVar7);
        }
        uVar15 = *(ulong *)(lStack_718 + (long)puVar17 * 8);
        uVar2 = uVar15;
        _objc_opt_respondsToSelector(uVar15,puVar5);
        if ((uVar2 & 1) != 0) {
          func_0x00010bf34980(uVar15);
        }
        puVar17 = puVar17 + 1;
      } while (puVar8 != puVar17);
      puVar8 = puVar7;
      puVar10 = &uStack_720;
      func_0x00010bf52a60();
    } while (puVar8 != (undefined1 *)0x0);
  }
  _objc_release(puVar7);
  _objc_release(uVar14);
  _objc_release(puVar12);
  _objc_release(puVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_660) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  func_0x00010c09a420(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252440(puVar10);
  _objc_release(puVar10);
  func_0x00010c249200(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 106fa00a8; end: 106fa01fb; -[SCSpectaclesCBCentralManagerEventListenerAnnouncer centralManager:willRestoreState:] */

void FUN_106fa00a8(undefined **param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *unaff_x24;
  undefined *unaff_x25;
  ulong uVar15;
  undefined **unaff_x26;
  long lVar16;
  undefined **unaff_x27;
  undefined *unaff_x28;
  undefined1 *puVar17;
  undefined8 uStack_5f0;
  long lStack_5e8;
  long *plStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  long lStack_530;
  undefined *puStack_520;
  undefined **ppuStack_518;
  undefined **ppuStack_510;
  undefined *puStack_508;
  undefined *puStack_500;
  undefined *puStack_4f8;
  undefined *puStack_4f0;
  undefined8 uStack_4e8;
  undefined1 *puStack_4e0;
  undefined1 *puStack_4d8;
  undefined8 ***pppuStack_4d0;
  code *pcStack_4c8;
  undefined8 uStack_4c0;
  long lStack_4b8;
  ulong *puStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined1 auStack_480 [128];
  long lStack_400;
  undefined *puStack_3f0;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  undefined **ppuStack_3b8;
  undefined1 *puStack_3b0;
  undefined *puStack_3a8;
  undefined1 ***pppuStack_3a0;
  code *pcStack_398;
  undefined8 uStack_390;
  long lStack_388;
  undefined8 *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 auStack_348 [128];
  long lStack_2c8;
  undefined *puStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 *puStack_280;
  undefined **ppuStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_220 [128];
  long lStack_1a0;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  ppuVar4 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  puStack_120 = (undefined8 *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar7 = auStack_e8;
  uVar13 = 0x10;
  ppuVar1 = param_1;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = (undefined *)*puStack_120;
    unaff_x26 = &PTR_s_card_1125aa000;
    do {
      puVar3 = PTR_s_centralManager_willRestoreState__1125aac20;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_120 != unaff_x25) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x24 = *(undefined **)(lStack_128 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,puVar3);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf349e0(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar1 != unaff_x27);
      puVar7 = auStack_e8;
      uVar13 = 0x10;
      ppuVar1 = param_1;
      ppuVar4 = &puStack_130;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_260;
  pcStack_138 = FUN_106fa01fc;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar4);
  _objc_retain(puVar7);
  _objc_retain(uVar13);
  _objc_retain(param_6);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  puStack_250 = (undefined8 *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  puVar12 = auStack_220;
  puVar3 = param_3;
  func_0x00010bf52a60();
  if (puVar3 != (undefined *)0x0) {
    unaff_x27 = (undefined **)*puStack_250;
    do {
      unaff_x25 = PTR_s_centralManager_didDiscoverPeriph_1125aac10;
      unaff_x28 = (undefined *)0x0;
      do {
        if ((undefined **)*puStack_250 != unaff_x27) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x26 = *(undefined ***)(lStack_258 + (long)unaff_x28 * 8);
        ppuVar1 = unaff_x26;
        _objc_opt_respondsToSelector(unaff_x26,unaff_x25);
        if (((ulong)ppuVar1 & 1) != 0) {
          func_0x00010bf349a0(unaff_x26);
        }
        unaff_x28 = unaff_x28 + 1;
      } while (puVar3 != unaff_x28);
      puVar12 = auStack_220;
      puVar3 = param_3;
      puVar10 = &uStack_260;
      func_0x00010bf52a60();
      unaff_x24 = (undefined *)0x0;
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(uVar13);
  _objc_release(puVar7);
  ppuVar1 = ppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  puVar11 = &uStack_390;
  pcStack_268 = FUN_106fa0380;
  lStack_2c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2c0 = unaff_x28;
  ppuStack_2b8 = unaff_x27;
  ppuStack_2b0 = unaff_x26;
  puStack_2a8 = unaff_x25;
  puStack_2a0 = unaff_x24;
  puStack_298 = param_3;
  uStack_290 = param_6;
  uStack_288 = uVar13;
  puStack_280 = puVar7;
  ppuStack_278 = ppuVar4;
  ppuStack_270 = &puStack_140;
  _objc_retain(puVar10);
  _objc_retain(puVar12);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  puStack_380 = (undefined8 *)0x0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  puVar7 = auStack_348;
  uVar13 = 0x10;
  ppuVar4 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    unaff_x25 = (undefined *)*puStack_380;
    unaff_x26 = &PTR_s_card_1125aa000;
    do {
      param_3 = PTR_s_centralManager_didConnectPeriphe_1125aac00;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_380 != unaff_x25) {
          _objc_enumerationMutation(ppuVar1);
        }
        unaff_x24 = *(undefined **)(lStack_388 + (long)unaff_x27 * 8);
        puVar3 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,param_3);
        if (((ulong)puVar3 & 1) != 0) {
          func_0x00010bf34960(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar4 != unaff_x27);
      puVar7 = auStack_348;
      uVar13 = 0x10;
      ppuVar4 = ppuVar1;
      puVar11 = &uStack_390;
      func_0x00010bf52a60();
      param_6 = 0;
    } while (ppuVar4 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  _objc_release(puVar12);
  puVar3 = (undefined *)puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2c8) {
    return;
  }
  ___stack_chk_fail();
  puVar9 = &uStack_4c0;
  pcStack_398 = FUN_106fa04d4;
  lStack_400 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_3f0 = unaff_x28;
  ppuStack_3e8 = unaff_x27;
  ppuStack_3e0 = unaff_x26;
  puStack_3d8 = unaff_x25;
  puStack_3d0 = unaff_x24;
  puStack_3c8 = param_3;
  uStack_3c0 = param_6;
  ppuStack_3b8 = ppuVar1;
  puStack_3b0 = puVar12;
  puStack_3a8 = (undefined *)puVar10;
  pppuStack_3a0 = &ppuStack_270;
  _objc_retain(puVar11);
  _objc_retain(puVar7);
  _objc_retain(uVar13);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_4a8 = 0;
  puStack_4b0 = (ulong *)0x0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  puVar12 = auStack_480;
  uVar14 = 0x10;
  puVar2 = puVar3;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    unaff_x26 = (undefined **)*puStack_4b0;
    unaff_x27 = &PTR_s_card_1125aa000;
    do {
      unaff_x24 = PTR_s_centralManager_didFailToConnectP_1125aac18;
      unaff_x28 = (undefined *)0x0;
      do {
        if ((undefined **)*puStack_4b0 != unaff_x26) {
          _objc_enumerationMutation(puVar3);
        }
        unaff_x25 = *(undefined **)(lStack_4b8 + (long)unaff_x28 * 8);
        puVar5 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if (((ulong)puVar5 & 1) != 0) {
          func_0x00010bf349c0(unaff_x25);
        }
        unaff_x28 = unaff_x28 + 1;
      } while (puVar2 != unaff_x28);
      puVar12 = auStack_480;
      uVar14 = 0x10;
      puVar2 = puVar3;
      puVar9 = &uStack_4c0;
      func_0x00010bf52a60();
      param_3 = (undefined *)0x0;
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puVar3);
  _objc_release(uVar13);
  _objc_release(puVar7);
  puVar6 = (undefined1 *)puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_400) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_5f0;
  pcStack_4c8 = FUN_106fa0640;
  lStack_530 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_520 = unaff_x28;
  ppuStack_518 = unaff_x27;
  ppuStack_510 = unaff_x26;
  puStack_508 = unaff_x25;
  puStack_500 = unaff_x24;
  puStack_4f8 = param_3;
  puStack_4f0 = puVar3;
  uStack_4e8 = uVar13;
  puStack_4e0 = puVar7;
  puStack_4d8 = (undefined1 *)puVar11;
  pppuStack_4d0 = &pppuStack_3a0;
  _objc_retain(puVar9);
  _objc_retain(puVar12);
  _objc_retain(uVar14);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_5e8 = 0;
  uStack_5f0 = 0;
  uStack_5d8 = 0;
  plStack_5e0 = (long *)0x0;
  uStack_5c8 = 0;
  uStack_5d0 = 0;
  uStack_5b8 = 0;
  uStack_5c0 = 0;
  puVar7 = puVar6;
  func_0x00010bf52a60();
  if (puVar7 != (undefined1 *)0x0) {
    lVar16 = *plStack_5e0;
    do {
      puVar3 = PTR_s_centralManager_didDisconnectPeri_1125aac08;
      puVar17 = (undefined1 *)0x0;
      do {
        if (*plStack_5e0 != lVar16) {
          _objc_enumerationMutation(puVar6);
        }
        uVar15 = *(ulong *)(lStack_5e8 + (long)puVar17 * 8);
        uVar8 = uVar15;
        _objc_opt_respondsToSelector(uVar15,puVar3);
        if ((uVar8 & 1) != 0) {
          func_0x00010bf34980(uVar15);
        }
        puVar17 = puVar17 + 1;
      } while (puVar7 != puVar17);
      puVar7 = puVar6;
      puVar10 = &uStack_5f0;
      func_0x00010bf52a60();
    } while (puVar7 != (undefined1 *)0x0);
  }
  _objc_release(puVar6);
  _objc_release(uVar14);
  _objc_release(puVar12);
  _objc_release(puVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_530) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  func_0x00010c09a420(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252440(puVar10);
  _objc_release(puVar10);
  func_0x00010c249200(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 106fa01fc; end: 106fa037f; -[SCSpectaclesCBCentralManagerEventListenerAnnouncer centralManager:didDiscoverPeripheral:advertisementData:RSSI:] */

void FUN_106fa01fc(undefined *param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *unaff_x24;
  undefined *unaff_x25;
  ulong uVar15;
  undefined **unaff_x26;
  long lVar16;
  undefined **unaff_x27;
  undefined *unaff_x28;
  undefined1 *puVar17;
  undefined8 uStack_4c0;
  long lStack_4b8;
  long *plStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  long lStack_400;
  undefined *puStack_3f0;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined *puStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined8 uStack_3b8;
  undefined1 *puStack_3b0;
  undefined1 *puStack_3a8;
  undefined8 **ppuStack_3a0;
  code *pcStack_398;
  undefined8 uStack_390;
  long lStack_388;
  ulong *puStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined1 auStack_350 [128];
  long lStack_2d0;
  undefined *puStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  undefined **ppuStack_288;
  undefined1 *puStack_280;
  undefined *puStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
  undefined8 uStack_260;
  long lStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 auStack_218 [128];
  long lStack_198;
  undefined *puStack_190;
  undefined **ppuStack_188;
  undefined **ppuStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined **ppuStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
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
  
  puVar10 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar12 = auStack_f0;
  puVar1 = param_1;
  func_0x00010bf52a60();
  if (puVar1 != (undefined *)0x0) {
    unaff_x27 = (undefined **)*plStack_120;
    do {
      unaff_x25 = PTR_s_centralManager_didDiscoverPeriph_1125aac10;
      unaff_x28 = (undefined *)0x0;
      do {
        if ((undefined **)*plStack_120 != unaff_x27) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x26 = *(undefined ***)(lStack_128 + (long)unaff_x28 * 8);
        ppuVar2 = unaff_x26;
        _objc_opt_respondsToSelector(unaff_x26,unaff_x25);
        if (((ulong)ppuVar2 & 1) != 0) {
          func_0x00010bf349a0(unaff_x26);
        }
        unaff_x28 = unaff_x28 + 1;
      } while (puVar1 != unaff_x28);
      puVar12 = auStack_f0;
      puVar1 = param_1;
      puVar10 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x24 = (undefined *)0x0;
    } while (puVar1 != (undefined *)0x0);
  }
  _objc_release(param_1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  ppuVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar11 = &uStack_260;
  pcStack_138 = FUN_106fa0380;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_190 = unaff_x28;
  ppuStack_188 = unaff_x27;
  ppuStack_180 = unaff_x26;
  puStack_178 = unaff_x25;
  puStack_170 = unaff_x24;
  puStack_168 = param_1;
  uStack_160 = param_6;
  uStack_158 = param_5;
  uStack_150 = param_4;
  ppuStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  _objc_retain(puVar12);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  puStack_250 = (undefined8 *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  puVar7 = auStack_218;
  uVar13 = 0x10;
  ppuVar3 = ppuVar2;
  func_0x00010bf52a60();
  if (ppuVar3 != (undefined **)0x0) {
    unaff_x25 = (undefined *)*puStack_250;
    unaff_x26 = &PTR_s_card_1125aa000;
    do {
      param_1 = PTR_s_centralManager_didConnectPeriphe_1125aac00;
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined *)*puStack_250 != unaff_x25) {
          _objc_enumerationMutation(ppuVar2);
        }
        unaff_x24 = *(undefined **)(lStack_258 + (long)unaff_x27 * 8);
        puVar1 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,param_1);
        if (((ulong)puVar1 & 1) != 0) {
          func_0x00010bf34960(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar3 != unaff_x27);
      puVar7 = auStack_218;
      uVar13 = 0x10;
      ppuVar3 = ppuVar2;
      puVar11 = &uStack_260;
      func_0x00010bf52a60();
      param_6 = 0;
    } while (ppuVar3 != (undefined **)0x0);
  }
  _objc_release(ppuVar2);
  _objc_release(puVar12);
  puVar1 = (undefined *)puVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return;
  }
  ___stack_chk_fail();
  puVar9 = &uStack_390;
  pcStack_268 = FUN_106fa04d4;
  lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2c0 = unaff_x28;
  ppuStack_2b8 = unaff_x27;
  ppuStack_2b0 = unaff_x26;
  puStack_2a8 = unaff_x25;
  puStack_2a0 = unaff_x24;
  puStack_298 = param_1;
  uStack_290 = param_6;
  ppuStack_288 = ppuVar2;
  puStack_280 = puVar12;
  puStack_278 = (undefined *)puVar10;
  ppuStack_270 = &puStack_140;
  _objc_retain(puVar11);
  _objc_retain(puVar7);
  _objc_retain(uVar13);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  puStack_380 = (ulong *)0x0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  puVar12 = auStack_350;
  uVar14 = 0x10;
  puVar4 = puVar1;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    unaff_x26 = (undefined **)*puStack_380;
    unaff_x27 = &PTR_s_card_1125aa000;
    do {
      unaff_x24 = PTR_s_centralManager_didFailToConnectP_1125aac18;
      unaff_x28 = (undefined *)0x0;
      do {
        if ((undefined **)*puStack_380 != unaff_x26) {
          _objc_enumerationMutation(puVar1);
        }
        unaff_x25 = *(undefined **)(lStack_388 + (long)unaff_x28 * 8);
        puVar5 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if (((ulong)puVar5 & 1) != 0) {
          func_0x00010bf349c0(unaff_x25);
        }
        unaff_x28 = unaff_x28 + 1;
      } while (puVar4 != unaff_x28);
      puVar12 = auStack_350;
      uVar14 = 0x10;
      puVar4 = puVar1;
      puVar9 = &uStack_390;
      func_0x00010bf52a60();
      param_1 = (undefined *)0x0;
    } while (puVar4 != (undefined *)0x0);
  }
  _objc_release(puVar1);
  _objc_release(uVar13);
  _objc_release(puVar7);
  puVar6 = (undefined1 *)puVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d0) {
    return;
  }
  ___stack_chk_fail();
  puVar10 = &uStack_4c0;
  pcStack_398 = FUN_106fa0640;
  lStack_400 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_3f0 = unaff_x28;
  ppuStack_3e8 = unaff_x27;
  ppuStack_3e0 = unaff_x26;
  puStack_3d8 = unaff_x25;
  puStack_3d0 = unaff_x24;
  puStack_3c8 = param_1;
  puStack_3c0 = puVar1;
  uStack_3b8 = uVar13;
  puStack_3b0 = puVar7;
  puStack_3a8 = (undefined1 *)puVar11;
  ppuStack_3a0 = &ppuStack_270;
  _objc_retain(puVar9);
  _objc_retain(puVar12);
  _objc_retain(uVar14);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_4a8 = 0;
  plStack_4b0 = (long *)0x0;
  uStack_498 = 0;
  uStack_4a0 = 0;
  uStack_488 = 0;
  uStack_490 = 0;
  puVar7 = puVar6;
  func_0x00010bf52a60();
  if (puVar7 != (undefined1 *)0x0) {
    lVar16 = *plStack_4b0;
    do {
      puVar1 = PTR_s_centralManager_didDisconnectPeri_1125aac08;
      puVar17 = (undefined1 *)0x0;
      do {
        if (*plStack_4b0 != lVar16) {
          _objc_enumerationMutation(puVar6);
        }
        uVar15 = *(ulong *)(lStack_4b8 + (long)puVar17 * 8);
        uVar8 = uVar15;
        _objc_opt_respondsToSelector(uVar15,puVar1);
        if ((uVar8 & 1) != 0) {
          func_0x00010bf34980(uVar15);
        }
        puVar17 = puVar17 + 1;
      } while (puVar7 != puVar17);
      puVar7 = puVar6;
      puVar10 = &uStack_4c0;
      func_0x00010bf52a60();
    } while (puVar7 != (undefined1 *)0x0);
  }
  _objc_release(puVar6);
  _objc_release(uVar14);
  _objc_release(puVar12);
  _objc_release(puVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_400) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  func_0x00010c09a420(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252440(puVar10);
  _objc_release(puVar10);
  func_0x00010c249200(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar9);
  return;
}



/* Entry: 106fa0380; end: 106fa04d3; -[SCSpectaclesCBCentralManagerEventListenerAnnouncer centralManager:didConnectPeripheral:] */

void FUN_106fa0380(undefined **param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *unaff_x23;
  undefined *unaff_x24;
  ulong unaff_x25;
  ulong uVar12;
  undefined **unaff_x26;
  long lVar13;
  undefined **unaff_x27;
  long unaff_x28;
  undefined1 *puVar14;
  undefined8 uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_2d0;
  long lStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  ulong uStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined1 *puStack_280;
  undefined1 *puStack_278;
  undefined1 **ppuStack_270;
  code *pcStack_268;
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
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  ulong *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (ulong *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar5 = auStack_e8;
  uVar10 = 0x10;
  ppuVar1 = param_1;
  func_0x00010bf52a60();
  if (ppuVar1 != (undefined **)0x0) {
    unaff_x25 = *puStack_120;
    unaff_x26 = &PTR_s_card_1125aa000;
    do {
      unaff_x23 = PTR_s_centralManager_didConnectPeriphe_1125aac00;
      unaff_x27 = (undefined **)0x0;
      do {
        if (*puStack_120 != unaff_x25) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x24 = *(undefined **)(lStack_128 + (long)unaff_x27 * 8);
        puVar2 = unaff_x24;
        _objc_opt_respondsToSelector(unaff_x24,unaff_x23);
        if (((ulong)puVar2 & 1) != 0) {
          func_0x00010bf34960(unaff_x24);
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar1 != unaff_x27);
      puVar5 = auStack_e8;
      uVar10 = 0x10;
      ppuVar1 = param_1;
      puVar7 = &uStack_130;
      func_0x00010bf52a60();
    } while (ppuVar1 != (undefined **)0x0);
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_260;
  pcStack_138 = FUN_106fa04d4;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar7);
  _objc_retain(puVar5);
  _objc_retain(uVar10);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  puVar9 = auStack_220;
  uVar11 = 0x10;
  lVar13 = param_3;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    unaff_x26 = (undefined **)*plStack_250;
    unaff_x27 = &PTR_s_card_1125aa000;
    do {
      unaff_x24 = PTR_s_centralManager_didFailToConnectP_1125aac18;
      unaff_x28 = 0;
      do {
        if ((undefined **)*plStack_250 != unaff_x26) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x25 = *(ulong *)(lStack_258 + unaff_x28 * 8);
        uVar3 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if ((uVar3 & 1) != 0) {
          func_0x00010bf349c0(unaff_x25);
        }
        unaff_x28 = unaff_x28 + 1;
      } while (lVar13 != unaff_x28);
      puVar9 = auStack_220;
      uVar11 = 0x10;
      lVar13 = param_3;
      puVar6 = &uStack_260;
      func_0x00010bf52a60();
      unaff_x23 = (undefined *)0x0;
    } while (lVar13 != 0);
  }
  _objc_release(param_3);
  _objc_release(uVar10);
  _objc_release(puVar5);
  puVar4 = (undefined1 *)puVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_390;
  pcStack_268 = FUN_106fa0640;
  lStack_2d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_2c0 = unaff_x28;
  ppuStack_2b8 = unaff_x27;
  ppuStack_2b0 = unaff_x26;
  uStack_2a8 = unaff_x25;
  puStack_2a0 = unaff_x24;
  puStack_298 = unaff_x23;
  lStack_290 = param_3;
  uStack_288 = uVar10;
  puStack_280 = puVar5;
  puStack_278 = (undefined1 *)puVar7;
  ppuStack_270 = &puStack_140;
  _objc_retain(puVar6);
  _objc_retain(puVar9);
  _objc_retain(uVar11);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  plStack_380 = (long *)0x0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  puVar5 = puVar4;
  func_0x00010bf52a60();
  if (puVar5 != (undefined1 *)0x0) {
    lVar13 = *plStack_380;
    do {
      puVar2 = PTR_s_centralManager_didDisconnectPeri_1125aac08;
      puVar14 = (undefined1 *)0x0;
      do {
        if (*plStack_380 != lVar13) {
          _objc_enumerationMutation(puVar4);
        }
        uVar12 = *(ulong *)(lStack_388 + (long)puVar14 * 8);
        uVar3 = uVar12;
        _objc_opt_respondsToSelector(uVar12,puVar2);
        if ((uVar3 & 1) != 0) {
          func_0x00010bf34980(uVar12);
        }
        puVar14 = puVar14 + 1;
      } while (puVar5 != puVar14);
      puVar5 = puVar4;
      puVar8 = &uStack_390;
      func_0x00010bf52a60();
    } while (puVar5 != (undefined1 *)0x0);
  }
  _objc_release(puVar4);
  _objc_release(uVar11);
  _objc_release(puVar9);
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2d0) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  func_0x00010c09a420(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252440(puVar8);
  _objc_release(puVar8);
  func_0x00010c249200(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 106fa04d4; end: 106fa063f; -[SCSpectaclesCBCentralManagerEventListenerAnnouncer centralManager:didFailToConnectPeripheral:error:] */

void FUN_106fa04d4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined8 unaff_x23;
  undefined *unaff_x24;
  ulong unaff_x25;
  ulong uVar9;
  long unaff_x26;
  long lVar10;
  undefined **unaff_x27;
  long unaff_x28;
  long lVar11;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_1a0;
  long lStack_190;
  undefined **ppuStack_188;
  long lStack_180;
  ulong uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
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
  
  puVar5 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar7 = auStack_f0;
  uVar8 = 0x10;
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    unaff_x26 = *plStack_120;
    unaff_x27 = &PTR_s_card_1125aa000;
    do {
      unaff_x24 = PTR_s_centralManager_didFailToConnectP_1125aac18;
      unaff_x28 = 0;
      do {
        if (*plStack_120 != unaff_x26) {
          _objc_enumerationMutation(param_1);
        }
        unaff_x25 = *(ulong *)(lStack_128 + unaff_x28 * 8);
        uVar3 = unaff_x25;
        _objc_opt_respondsToSelector(unaff_x25,unaff_x24);
        if ((uVar3 & 1) != 0) {
          func_0x00010bf349c0(unaff_x25);
        }
        unaff_x28 = unaff_x28 + 1;
      } while (lVar2 != unaff_x28);
      puVar7 = auStack_f0;
      uVar8 = 0x10;
      lVar2 = param_1;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
      unaff_x23 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_260;
  pcStack_138 = FUN_106fa0640;
  lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_190 = unaff_x28;
  ppuStack_188 = unaff_x27;
  lStack_180 = unaff_x26;
  uStack_178 = unaff_x25;
  puStack_170 = unaff_x24;
  uStack_168 = unaff_x23;
  lStack_160 = param_1;
  uStack_158 = param_5;
  uStack_150 = param_4;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  _objc_retain(puVar7);
  _objc_retain(uVar8);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lVar4 = lVar2;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar10 = *plStack_250;
    do {
      puVar1 = PTR_s_centralManager_didDisconnectPeri_1125aac08;
      lVar11 = 0;
      do {
        if (*plStack_250 != lVar10) {
          _objc_enumerationMutation(lVar2);
        }
        uVar9 = *(ulong *)(lStack_258 + lVar11 * 8);
        uVar3 = uVar9;
        _objc_opt_respondsToSelector(uVar9,puVar1);
        if ((uVar3 & 1) != 0) {
          func_0x00010bf34980(uVar9);
        }
        lVar11 = lVar11 + 1;
      } while (lVar4 != lVar11);
      lVar4 = lVar2;
      puVar6 = &uStack_260;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(lVar2);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  func_0x00010c09a420(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252440(puVar6);
  _objc_release(puVar6);
  func_0x00010c249200(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 106fa0640; end: 106fa07ab; -[SCSpectaclesCBCentralManagerEventListenerAnnouncer centralManager:didDisconnectPeripheral:error:] */

void FUN_106fa0640(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar4 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c09a480();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_120;
    do {
      puVar1 = PTR_s_centralManager_didDisconnectPeri_1125aac08;
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_1);
        }
        uVar5 = *(ulong *)(lStack_128 + lVar7 * 8);
        uVar3 = uVar5;
        _objc_opt_respondsToSelector(uVar5,puVar1);
        if ((uVar3 & 1) != 0) {
          func_0x00010bf34980(uVar5);
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_1;
      puVar4 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar4);
  func_0x00010c09a420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c252440(puVar4);
  _objc_release(puVar4);
  func_0x00010c249200(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106fa07ac; end: 106fa0813; -[SCSpectaclesCentralManagerLogger centralManagerDidUpdateState:] */

void FUN_106fa07ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c09a420(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c252440(param_3);
  _objc_release(param_3);
  func_0x00010c249200(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fa0814; end: 106fa082b; -[SCSpectaclesCentralManagerLogger listener] */

void FUN_106fa0814(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa082c; end: 106fa0837; -[SCSpectaclesCentralManagerLogger setListener:] */

void FUN_106fa082c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 106fa0838; end: 106fa083f; -[SCSpectaclesCentralManagerLogger .cxx_destruct] */

void FUN_106fa0838(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106fa0840; end: 106fa08eb; -[SCSpectaclesBaseAnnouncer removeListener:] */

void FUN_106fa0840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = param_1;
  func_0x00010c09a480(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf51e00();
  _objc_release(uVar1);
  func_0x00010c12d460(uVar2,param_2,param_3);
  func_0x00010c1be260(param_1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106fa08ec; end: 106fa08f7; -[SCSpectaclesBaseAnnouncer .cxx_destruct] */

void FUN_106fa08ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106fa08f8; end: 106fa0a73; -[SCSpectaclesBTCChannel initWithAccessory:delegate:] */

undefined1 *
FUN_106fa08f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f8178;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_4);
    puVar3 = PTR__OBJC_CLASS___EASession_1126d3aa0;
    _objc_alloc();
    func_0x00010bfefe00();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    if (*(long *)((long)puVar1 + 0x10) == 0) {
      puVar6 = (undefined1 *)0x0;
      goto LAB_106fa0a40;
    }
    puVar3 = PTR_PTR_1126d3aa8;
    _objc_alloc();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    func_0x00010c065f60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    func_0x00010c0ef0a0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01e160();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    func_0x00010c1c0360(*(undefined8 *)((long)puVar1 + 0x18));
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + 0x18));
  }
  _objc_retain(puVar1);
  puVar6 = (undefined1 *)puVar1;
LAB_106fa0a40:
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return puVar6;
}



/* Entry: 106fa0a74; end: 106fa0abb; -[SCSpectaclesBTCChannel dealloc] */

void FUN_106fa0a74(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010bf3d9e0(*(undefined8 *)(param_1 + 0x18));
  puStack_28 = PTR_PTR_1126f8178;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106fa0abc; end: 106fa0ac3; -[SCSpectaclesBTCChannel isOpen] */

void FUN_106fa0abc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0791b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_isOpen_1125fbe78);
  return;
}



/* Entry: 106fa0ac4; end: 106fa0acb; -[SCSpectaclesBTCChannel open] */

void FUN_106fa0ac4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e8e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_open_112617da0);
  return;
}



/* Entry: 106fa0acc; end: 106fa0ad3; -[SCSpectaclesBTCChannel writeData:] */

void FUN_106fa0acc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2bda10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_writeData__11268d0a8)
  ;
  return;
}



/* Entry: 106fa0ad4; end: 106fa0adb; -[SCSpectaclesBTCChannel close] */

void FUN_106fa0ad4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf3d9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_close_1125ad020);
  return;
}



/* Entry: 106fa0adc; end: 106fa0b0f; -[SCSpectaclesBTCChannel channelDidOpen:] */

void FUN_106fa0adc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf35620();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fa0b10; end: 106fa0b63; -[SCSpectaclesBTCChannel channel:didReadData:] */

void FUN_106fa0b10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf35560();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fa0b64; end: 106fa0b97; -[SCSpectaclesBTCChannel channelDidWriteData:] */

void FUN_106fa0b64(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf35640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fa0b98; end: 106fa0beb; -[SCSpectaclesBTCChannel channel:didError:] */

void FUN_106fa0b98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf35540();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fa0bec; end: 106fa0c1f; -[SCSpectaclesBTCChannel channelDidClose:] */

void FUN_106fa0bec(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf35600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106fa0c20; end: 106fa0c37; -[SCSpectaclesBTCChannel delegate] */

void FUN_106fa0c20(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa0c38; end: 106fa0c43; -[SCSpectaclesBTCChannel setDelegate:] */

void FUN_106fa0c38(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x20,param_3);
  return;
}



/* Entry: 106fa0c44; end: 106fa0c87; -[SCSpectaclesBTCChannel .cxx_destruct] */

void FUN_106fa0c44(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106fa0c88; end: 106fa0d87; -[SCSpectaclesBluetoothMonitor initWithSerialNumber:delegate:] */

undefined1 *
FUN_106fa0c88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f8180;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    puVar3 = PTR_PTR_1126d3ab0;
    func_0x00010c22b6a0(PTR_PTR_1126d3ab0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7e60();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126d3ab0;
    func_0x00010c22b6a0(PTR_PTR_1126d3ab0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7e80();
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106fa0d88; end: 106fa0e1b; -[SCSpectaclesBluetoothMonitor _bluetoothDidConnect:] */

void FUN_106fa0d88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c292820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010be3df00(param_1,param_2,uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1e600();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fa0e1c; end: 106fa0eaf; -[SCSpectaclesBluetoothMonitor _bluetoothDidDisconnect:] */

void FUN_106fa0e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c292820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010be3df00(param_1,param_2,uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1e620();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fa0eb0; end: 106fa0f8b; -[SCSpectaclesBluetoothMonitor handleResponse:] */

void FUN_106fa0eb0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfd4b40();
  if ((int)lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010bf1e660();
    if (lVar1 == 3) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1e5e0();
      lVar1 = param_1;
    }
    else if (lVar1 == 2) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1e680();
      lVar1 = param_1;
    }
    else {
      if (lVar1 != 1) goto LAB_106fa0f78;
      lVar1 = param_1;
      func_0x00010bf48580();
      _objc_retainAutoreleasedReturnValue();
      if (lVar1 != 0) {
        func_0x00010bf6b020(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf1e600();
        _objc_release(param_1);
      }
    }
    _objc_release(lVar1);
  }
LAB_106fa0f78:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106fa0f8c; end: 106fa0f93; -[SCSpectaclesBluetoothMonitor responseMonitorState] */

undefined8 FUN_106fa0f8c(void)

{
  return 0;
}



/* Entry: 106fa0f94; end: 106fa0fe7; -[SCSpectaclesBluetoothMonitor connectedAccessory] */

void FUN_106fa0f94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d32b8;
  func_0x00010c15e740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf485a0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106fa0fe8; end: 106fa11cb; +[SCSpectaclesBluetoothMonitor connectedAccessoryForLagunaDeviceSerialNumber:] */

undefined8 * FUN_106fa0fe8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
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
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___EAAccessoryManager_1126d32c0;
  func_0x00010c22b6c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf48560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(puVar2);
  puVar3 = &uStack_130;
  puVar1 = puVar2;
  func_0x00010bf52a60();
  if (puVar1 != (undefined *)0x0) {
    lVar10 = *plStack_120;
    do {
      puVar8 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(puVar2);
        }
        puVar9 = *(undefined8 **)(lStack_128 + (long)puVar8 * 8);
        puVar3 = puVar9;
        func_0x00010c06f000();
        if ((int)puVar3 != 0) {
          puVar4 = puVar9;
          func_0x00010c119720();
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar4;
          func_0x00010bf4b900();
          if (((ulong)puVar3 & 1) == 0) {
            _objc_release(puVar4);
          }
          else {
            puVar5 = puVar9;
            func_0x00010c15e740();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010c28ed80();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            puVar3 = param_3;
            func_0x00010c0720c0();
            _objc_release(puVar6);
            _objc_release(puVar5);
            _objc_release(puVar4);
            if (((ulong)puVar7 & 1) != 0) {
              _objc_retain(puVar9);
              goto LAB_106fa1174;
            }
          }
        }
        puVar8 = puVar8 + 1;
      } while (puVar1 != puVar8);
      puVar3 = &uStack_130;
      puVar1 = puVar2;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined *)0x0);
  }
  puVar9 = (undefined8 *)0x0;
LAB_106fa1174:
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return puVar9;
  }
  ___stack_chk_fail();
  if (puVar3 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  func_0x00010c15e740(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar3;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15e740(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar9;
  func_0x00010c0720c0(puVar9,param_2,param_3);
  _objc_release(param_3);
  _objc_release(puVar9);
  _objc_release(puVar3);
  return puVar4;
}



/* Entry: 106fa11cc; end: 106fa125f; -[SCSpectaclesBluetoothMonitor _isActiveAccessory:] */

long FUN_106fa11cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 != 0) {
    func_0x00010c15e740(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c28ed80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c15e740(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0720c0(lVar1,param_2,param_1);
    _objc_release(param_1);
    _objc_release(lVar1);
    _objc_release(param_3);
    return lVar2;
  }
  return 0;
}



/* Entry: 106fa1260; end: 106fa1267; -[SCSpectaclesBluetoothMonitor serialNumber] */

undefined8 FUN_106fa1260(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106fa1268; end: 106fa126f; -[SCSpectaclesBluetoothMonitor setSerialNumber:] */

void FUN_106fa1268(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106fa1270; end: 106fa1287; -[SCSpectaclesBluetoothMonitor delegate] */

void FUN_106fa1270(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa1288; end: 106fa1293; -[SCSpectaclesBluetoothMonitor setDelegate:] */

void FUN_106fa1288(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 106fa1294; end: 106fa12bf; -[SCSpectaclesBluetoothMonitor .cxx_destruct] */

void FUN_106fa1294(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106fa12c0; end: 106fa1313; +[SCSpectaclesEAAccessorySubscriptionManager shared] */

void FUN_106fa12c0(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c8978 != -1) {
    func_0x00010002a2fc(0x1136c8978,&PTR___NSConcreteGlobalBlock_110986248);
  }
  uVar1 = uRam00000001136c8980;
  _objc_retain(uRam00000001136c8980);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106fa1314; end: 106fa1343;  */

void FUN_106fa1314(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d3ab0;
  _objc_alloc();
  func_0x00010be39ec0();
  uVar1 = puRam00000001136c8980;
  puRam00000001136c8980 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106fa1344; end: 106fa1393; -[SCSpectaclesEAAccessorySubscriptionManager _initInternal] */

undefined1 * FUN_106fa1344(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f8188;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010be895a0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106fa1394; end: 106fa13d7; -[SCSpectaclesEAAccessorySubscriptionManager dealloc] */

void FUN_106fa1394(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x00010bed1d00();
  puStack_28 = PTR_PTR_1126f8188;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106fa13d8; end: 106fa144b; -[SCSpectaclesEAAccessorySubscriptionManager addEAAccessoryDidConnectObserver:selector:] */

void FUN_106fa13d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  _objc_retain(param_3);
  func_0x00010bf68fa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106fa144c; end: 106fa14bf; -[SCSpectaclesEAAccessorySubscriptionManager addEAAccessoryDidDisconnectObserver:selector:] */

void FUN_106fa144c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  _objc_retain(param_3);
  func_0x00010bf68fa0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106fa14c0; end: 106fa14f7; -[SCSpectaclesEAAccessorySubscriptionManager _registerForNotifications] */

void FUN_106fa14c0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___EAAccessoryManager_1126d32c0;
  func_0x00010c22b6c0(PTR__OBJC_CLASS___EAAccessoryManager_1126d32c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c126600();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106fa14f8; end: 106fa152f; -[SCSpectaclesEAAccessorySubscriptionManager _unregisterFromNotifications] */

void FUN_106fa14f8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___EAAccessoryManager_1126d32c0;
  func_0x00010c22b6c0(PTR__OBJC_CLASS___EAAccessoryManager_1126d32c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c282020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106fa1530; end: 106fa15c7; -[SCSpectaclesFlightRequestMessage initWithType:flightProviderBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106fa1530(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f8190;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithType_providerBlock__1125f31e0,param_3,
                      &PTR___NSConcreteGlobalBlock_110986268);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112761db4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112761db4) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106fa15c8; end: 106fa15cf;  */

undefined8 FUN_106fa15c8(void)

{
  return 0;
}



/* Entry: 106fa15d0; end: 106fa15f3; -[SCSpectaclesFlightRequestMessage copyWithZone:] */

undefined8 FUN_106fa15d0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106fa15f4; end: 106fa1687; -[SCSpectaclesFlightRequestMessage cheeriosRequests] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fa15f4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + _DAT_112761db4) == 0) {
    lVar3 = 0;
  }
  else {
    func_0x00010bfb29e0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126d3ab8;
    _objc_opt_class(PTR_PTR_1126d3ab8);
    lVar2 = param_1;
    (**(code **)(param_1 + 0x10))(param_1,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf38c40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106fa1688; end: 106fa16ab; +[SCSpectaclesFlightRequestMessage abortFlightRequest] */

void FUN_106fa1688(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c055b40(param_1,param_2,0x5e,&PTR___NSConcreteGlobalBlock_110986288);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa16ac; end: 106fa16b3;  */

void FUN_106fa16ac(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010beec530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_abortFlightRequest_112598af0);
  return;
}



/* Entry: 106fa16b4; end: 106fa16d7; +[SCSpectaclesFlightRequestMessage getFlightStatus] */

void FUN_106fa16b4(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c055b40(param_1,param_2,0x5f,&PTR___NSConcreteGlobalBlock_1109862a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa16d8; end: 106fa16df;  */

void FUN_106fa16d8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc5a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_getFlightStatus_1125cf030);
  return;
}



/* Entry: 106fa16e0; end: 106fa1703; +[SCSpectaclesFlightRequestMessage getFlightMode] */

void FUN_106fa16e0(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c055b40(param_1,param_2,0x60,&PTR___NSConcreteGlobalBlock_1109862c8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa1704; end: 106fa170b;  */

void FUN_106fa1704(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc59f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_getFlightMode_1125cf020);
  return;
}



/* Entry: 106fa170c; end: 106fa172f; +[SCSpectaclesFlightRequestMessage getFlightStateError] */

void FUN_106fa170c(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c055b40(param_1,param_2,0x61,&PTR___NSConcreteGlobalBlock_1109862e8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa1730; end: 106fa1737;  */

void FUN_106fa1730(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc5a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_getFlightStateError_1125cf028);
  return;
}



/* Entry: 106fa1738; end: 106fa179b; +[SCSpectaclesFlightRequestMessage disableFlightRequest:] */

void FUN_106fa1738(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 uStack_28;
  
  _objc_alloc();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fa179c;
  puStack_30 = &UNK_110986308;
  uStack_28 = param_3;
  func_0x00010c055b40(param_1,param_2,0x7b,&puStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa179c; end: 106fa17a7;  */

void FUN_106fa179c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7fff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_disableFlightRequest__1125bd9a0,*(undefined1 *)(param_1 + 0x20));
  return;
}



/* Entry: 106fa17a8; end: 106fa17cb; +[SCSpectaclesFlightRequestMessage getAllFlightSettings] */

void FUN_106fa17a8(undefined8 param_1,undefined8 param_2)

{
  _objc_alloc();
  func_0x00010c055b40(param_1,param_2,0x80,&PTR___NSConcreteGlobalBlock_110986328);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa17cc; end: 106fa17d3;  */

void FUN_106fa17cc(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfc2290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_getAllFlightSettings_1125ce248);
  return;
}



/* Entry: 106fa17d4; end: 106fa183b; +[SCSpectaclesFlightRequestMessage setFlightCaptureDuration:flightMode:] */

void FUN_106fa17d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_alloc();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc0000000;
  pcStack_40 = FUN_106fa183c;
  puStack_38 = &UNK_110986348;
  uStack_30 = param_3;
  uStack_28 = param_4;
  func_0x00010c055b40(param_1,param_2,0x6d,&puStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa183c; end: 106fa1847;  */

void FUN_106fa183c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19dcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setFlightCaptureDuration_flightM_112645150,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106fa1848; end: 106fa18bb; +[SCSpectaclesFlightRequestMessage setFlightDistance:flightMode:] */

void FUN_106fa1848(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_alloc();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc0000000;
  pcStack_50 = FUN_106fa18bc;
  puStack_48 = &UNK_110986348;
  uStack_40 = param_1;
  uStack_38 = param_4;
  func_0x00010c055b40(param_2,param_3,0x6e,&puStack_60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa18bc; end: 106fa18cb;  */

void FUN_106fa18bc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19dd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),param_2,PTR_s_setFlightDistance_flightMode__112645168,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106fa18cc; end: 106fa1933; +[SCSpectaclesFlightRequestMessage setFlightCaptureType:flightMode:] */

void FUN_106fa18cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_alloc();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc0000000;
  pcStack_40 = FUN_106fa1934;
  puStack_38 = &UNK_110986348;
  uStack_30 = param_3;
  uStack_28 = param_4;
  func_0x00010c055b40(param_1,param_2,0x6f,&puStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa1934; end: 106fa193f;  */

void FUN_106fa1934(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19dcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setFlightCaptureType_flightMode__112645158,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106fa1940; end: 106fa19a7; +[SCSpectaclesFlightRequestMessage setFlightTracking:flightMode:] */

void FUN_106fa1940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_alloc();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc0000000;
  pcStack_40 = FUN_106fa19a8;
  puStack_38 = &UNK_110986348;
  uStack_30 = param_3;
  uStack_28 = param_4;
  func_0x00010c055b40(param_1,param_2,0x70,&puStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa19a8; end: 106fa19b3;  */

void FUN_106fa19a8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19ddd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setFlightTracking_flightMode__112645190,*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106fa19b4; end: 106fa1a17; +[SCSpectaclesFlightRequestMessage setFlightCustomMode:] */

void FUN_106fa19b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_alloc();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_106fa1a18;
  puStack_30 = &UNK_110986368;
  uStack_28 = param_3;
  func_0x00010c055b40(param_1,param_2,0x71,&puStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106fa1a18; end: 106fa1a23;  */

void FUN_106fa1a18(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c19dd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_setFlightCustomMode__112645160,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 106fa1a24; end: 106fa1a33; -[SCSpectaclesFlightRequestMessage flightProviderBlock] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106fa1a24(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112761db4);
}



/* Entry: 106fa1a34; end: 106fa1a3f; -[SCSpectaclesFlightRequestMessage setFlightProviderBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fa1a34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 106fa1a40; end: 106fa1a53; -[SCSpectaclesFlightRequestMessage .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106fa1a40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112761db4,0);
  return;
}



/* Entry: 106fa1a54; end: 106fa1ac7; -[SCSpectaclesLagunaRequestMessage initWithNrfRequest:] */

undefined1 * FUN_106fa1a54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f8198;
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



/* Entry: 106fa1ac8; end: 106fa1c13; +[SCSpectaclesLagunaRequestMessage turnBluetoothClassicOn:name:] */

void FUN_106fa1ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  func_0x00010c25cfc0(param_3,param_2,&PTR____CFConstantStringClassReference_110db3638,
                      &PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126d3ac0;
  _objc_alloc_init(PTR_PTR_1126d3ac0);
  puVar2 = puVar1;
  func_0x00010c0dd9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ec220();
  _objc_release(puVar2);
  uVar3 = param_3;
  func_0x00010bf64920(param_3,param_2,4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0dd9e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172b00();
  _objc_release(puVar2);
  _objc_release(uVar3);
  puVar2 = puVar1;
  func_0x00010c0dd9e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cafa0();
  _objc_release(param_4);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c0dd980(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161620();
  _objc_release(puVar2);
  _objc_alloc(param_1);
  func_0x00010c0303a0();
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106fa1c14; end: 106fa1c87; +[SCSpectaclesLagunaRequestMessage turnBluetoothClassicOff] */

void FUN_106fa1c14(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d3ac0;
  _objc_alloc_init(PTR_PTR_1126d3ac0);
  puVar2 = puVar1;
  func_0x00010c0dd9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ec220();
  _objc_release(puVar2);
  _objc_alloc(param_1);
  func_0x00010c0303a0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106fa1c88; end: 106fa1d9f; +[SCSpectaclesLagunaRequestMessage turnWiFiOn:ssidPassword:countryCode:] */

void FUN_106fa1c88(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126d3ac0;
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  puVar2 = puVar1;
  func_0x00010c0ddb80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ec220();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c0ddb80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cafa0();
  _objc_release(param_3);
  _objc_release(puVar2);
  if (param_4 != 0) {
    puVar2 = puVar1;
    func_0x00010c0ddb80(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c208f80();
    _objc_release(puVar2);
  }
  puVar2 = puVar1;
  func_0x00010c0dd980(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161620();
  _objc_release(puVar2);
  _objc_alloc(param_1);
  func_0x00010c0303a0();
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106fa1da0; end: 106fa1ef7; +[SCSpectaclesLagunaRequestMessage connectWifiTo:password:] */

void FUN_106fa1da0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d3ac0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(puVar1);
  puVar2 = puVar1;
  func_0x00010c0ddb80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ec220();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c0ddb80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cafa0();
  _objc_release(param_3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c0ddb80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c208f80();
  _objc_release(param_4);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126d3ac8;
  _objc_alloc_init(PTR_PTR_1126d3ac8);
  func_0x00010c20a2c0();
  puVar3 = puVar1;
  func_0x00010c0ddb00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c0dd980(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161620();
  _objc_release(puVar3);
  _objc_alloc(param_1);
  func_0x00010c0303a0();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106fa1ef8; end: 106fa1f6b; +[SCSpectaclesLagunaRequestMessage turnWiFiOff] */

void FUN_106fa1ef8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d3ac0;
  _objc_alloc_init(PTR_PTR_1126d3ac0);
  puVar2 = puVar1;
  func_0x00010c0ddb80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ec220();
  _objc_release(puVar2);
  _objc_alloc(param_1);
  func_0x00010c0303a0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106fa1f6c; end: 106fa1fdf; +[SCSpectaclesLagunaRequestMessage ambaWatchdogKick] */

void FUN_106fa1f6c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d3ac0;
  _objc_alloc_init(PTR_PTR_1126d3ac0);
  puVar2 = puVar1;
  func_0x00010c0dd980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161620();
  _objc_release(puVar2);
  _objc_alloc(param_1);
  func_0x00010c0303a0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106fa1fe0; end: 106fa2053; +[SCSpectaclesLagunaRequestMessage deviceRestart] */

void FUN_106fa1fe0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126d3ac0;
  _objc_alloc_init(PTR_PTR_1126d3ac0);
  puVar2 = puVar1;
  func_0x00010c0dd980();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161620();
  _objc_release(puVar2);
  _objc_alloc(param_1);
  func_0x00010c0303a0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106fa2054; end: 106fa21fb; +[SCSpectaclesLagunaRequestMessage deviceMinimalInfoRequest] */

void FUN_106fa2054(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = PTR_PTR_1126d3ac0;
  _objc_alloc_init(PTR_PTR_1126d3ac0);
  puVar2 = PTR_PTR_1126d3ac8;
  _objc_alloc_init(PTR_PTR_1126d3ac8);
  func_0x00010c20a2c0();
  puVar3 = puVar1;
  func_0x00010c0ddb00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126d3ac8;
  _objc_alloc_init(PTR_PTR_1126d3ac8);
  func_0x00010c20a2c0();
  puVar4 = puVar1;
  func_0x00010c0ddb00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126d3ac8;
  _objc_alloc_init(PTR_PTR_1126d3ac8);
  func_0x00010c20a2c0();
  puVar5 = puVar1;
  func_0x00010c0ddb00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126d3ac8;
  _objc_alloc_init(PTR_PTR_1126d3ac8);
  func_0x00010c20a2c0();
  puVar6 = puVar1;
  func_0x00010c0ddb00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126d3ac8;
  _objc_alloc_init(PTR_PTR_1126d3ac8);
  func_0x00010c20a2c0();
  puVar7 = puVar1;
  func_0x00010c0ddb00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar7);
  _objc_alloc(param_1);
  func_0x00010c0303a0();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106fa21fc; end: 106fa2293; +[SCSpectaclesLagunaRequestMessage serialNumberRequest] */

void FUN_106fa21fc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126d3ac0;
  _objc_alloc_init(PTR_PTR_1126d3ac0);
  puVar2 = PTR_PTR_1126d3ac8;
  _objc_alloc_init(PTR_PTR_1126d3ac8);
  func_0x00010c20a2c0();
  puVar3 = puVar1;
  func_0x00010c0ddb00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar3);
  _objc_alloc(param_1);
  func_0x00010c0303a0();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 106fa2294; end: 106fa23fb; +[SCSpectaclesLagunaRequestMessage deviceInfoUpdate] */

void FUN_106fa2294(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126d3ac0;
  _objc_alloc_init(PTR_PTR_1126d3ac0);
  puVar2 = PTR_PTR_1126d3ac8;
  _objc_alloc_init(PTR_PTR_1126d3ac8);
  func_0x00010c20a2c0();
  puVar3 = puVar1;
  func_0x00010c0ddb00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar3);
  puVar3 = PTR_PTR_1126d3ac8;
  _objc_alloc_init(PTR_PTR_1126d3ac8);
  func_0x00010c20a2c0();
  puVar4 = puVar1;
  func_0x00010c0ddb00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126d3ac8;
  _objc_alloc_init(PTR_PTR_1126d3ac8);
  func_0x00010c20a2c0();
  puVar5 = puVar1;
  func_0x00010c0ddb00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126d3ac8;
  _objc_alloc_init(PTR_PTR_1126d3ac8);
  func_0x00010c20a2c0();
  puVar6 = puVar1;
  func_0x00010c0ddb00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar6);
  _objc_alloc(param_1);
  func_0x00010c0303a0();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}


