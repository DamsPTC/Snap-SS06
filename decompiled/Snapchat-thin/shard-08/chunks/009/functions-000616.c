/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1067b089c; end: 1067b08a3; -[SCOperaPreviewToolbarServices operaPreviewToolbarProvider] */

undefined8 FUN_1067b089c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1067b08a4; end: 1067b08af; -[SCOperaPreviewToolbarServices .cxx_destruct] */

void FUN_1067b08a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067b08b0; end: 1067b08fb; +[SCOperaPreviewToolbarLayer layerWithPage:] */

void FUN_1067b08b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c9878;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c032da0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067b08fc; end: 1067b0b77; -[SCOperaPreviewToolbarLayer initWithPage:] */

undefined1 * FUN_1067b08fc(float param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  puStack_58 = PTR_PTR_1126f3180;
  uStack_60 = param_2;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class(PTR__OBJC_CLASS___NSArray_1126ae530);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    uVar6 = *(undefined8 *)((long)puVar1 + 0x10);
    *(ulong *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar6);
    uVar2 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_class(PTR__OBJC_CLASS___NSSet_1126ae870);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    uVar6 = *(undefined8 *)((long)puVar1 + 0x18);
    *(ulong *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar6);
    uVar2 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    _objc_opt_class(PTR__OBJC_CLASS___NSSet_1126ae870);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    uVar6 = *(undefined8 *)((long)puVar1 + 0x20);
    *(ulong *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar6);
    uVar2 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf1f3c0();
    *(char *)((long)puVar1 + 8) = (char)uVar5;
    _objc_release(uVar3);
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar4);
    uVar2 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar3);
    func_0x00010bfb2c80(uVar2);
    _objc_release(uVar2);
    *(double *)((long)puVar1 + 0x28) = (double)param_1;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1067b0b78; end: 1067b0b7f; -[SCOperaPreviewToolbarLayer type] */

undefined8 FUN_1067b0b78(void)

{
  return 0x19;
}



/* Entry: 1067b0b80; end: 1067b0ca7; -[SCOperaPreviewToolbarLayer isEqual:] */

undefined8 FUN_1067b0b80(long param_1,undefined8 param_2,undefined *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  int iVar6;
  
  _objc_retain(param_3);
  puVar2 = param_3;
  _objc_opt_class();
  puVar3 = PTR_PTR_1126c9878;
  _objc_opt_class();
  puVar4 = PTR_PTR_1126c9878;
  if (puVar2 == puVar3) {
    _objc_retain(param_3);
    _objc_opt_class(puVar4);
    puVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    puVar4 = param_3;
    if (((ulong)puVar2 & 1) == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(param_3);
    iVar6 = (int)*(undefined8 *)(param_1 + 0x10);
    puVar2 = puVar4;
    func_0x00010c273ae0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071b60();
    if ((iVar6 == 0) ||
       (bVar1 = *(byte *)(param_1 + 8), puVar3 = puVar4, func_0x00010bf926c0(),
       (uint)bVar1 != (uint)puVar3)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      puVar3 = puVar4;
      func_0x00010c273b20(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c072060(uVar5);
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
    _objc_release(puVar4);
  }
  else {
    uVar5 = 0;
  }
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 1067b0ca8; end: 1067b0caf; -[SCOperaPreviewToolbarLayer toolbarItems] */

undefined8 FUN_1067b0ca8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1067b0cb0; end: 1067b0cb7; -[SCOperaPreviewToolbarLayer toolbarItemsWithTooltip] */

undefined8 FUN_1067b0cb0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1067b0cb8; end: 1067b0cbf; -[SCOperaPreviewToolbarLayer highlightedItems] */

undefined8 FUN_1067b0cb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1067b0cc0; end: 1067b0cc7; -[SCOperaPreviewToolbarLayer enabled] */

undefined1 FUN_1067b0cc0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1067b0cc8; end: 1067b0ccf; -[SCOperaPreviewToolbarLayer extraTopOffset] */

undefined8 FUN_1067b0cc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1067b0cd0; end: 1067b0d0b; -[SCOperaPreviewToolbarLayer .cxx_destruct] */

void FUN_1067b0cd0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 1067b0d0c; end: 1067b0d6f; -[SCCountdownsFriendStoreMetricsLogger init] */

undefined1 * FUN_1067b0d0c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f3188;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126cdf48;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1067b0d70; end: 1067b0d83; -[SCCountdownsFriendStoreMetricsLogger getFriendsWithDurationMs:nonEmptyResult:optionalError:] */

void FUN_1067b0d70(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 *param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined1 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 ***pppuStack_290;
  code *pcStack_288;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined8 auStack_258 [2];
  char cStack_241;
  undefined8 auStack_240 [2];
  char cStack_229;
  long lStack_228;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
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
  
  lVar1 = *(long *)(param_1 + 8);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_4;
  puVar2 = param_5;
  uVar7 = param_3;
  _objc_retain(param_5);
  if (lVar1 != 0) {
    plVar9 = *(long **)(lVar1 + 8);
    puVar5 = &UNK_10f396c57;
    if ((int)param_4 == 0) {
      puVar5 = &UNK_10f396c5c;
    }
    func_0x00010002b838(auStack_78,puVar5);
    _objc_retain(param_5);
    if (param_5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f396c62;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar2 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar5 = &UNK_11093bf30;
    puVar2 = &uStack_98;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11093bf30,puVar2,param_3);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar1 = 0;
    uVar7 = param_3;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  puVar3 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_5);
  __Unwind_Resume();
  pcStack_a8 = FUN_1067b699c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar5;
  puVar4 = puVar2;
  uVar8 = uVar7;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  if (puVar3 != (undefined8 *)0x0) {
    plVar9 = (long *)puVar3[1];
    puVar6 = &UNK_10f396c57;
    if ((int)puVar5 == 0) {
      puVar6 = &UNK_10f396c5c;
    }
    func_0x00010002b838(auStack_118,puVar6);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f396c62;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar3 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_100,puVar3);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar6 = &UNK_11093bf80;
    puVar4 = &uStack_138;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11093bf80,puVar4,uVar7);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar1 = 0;
    uVar8 = uVar7;
    do {
      if ((&cStack_e9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  puVar3 = puVar2;
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
  __Unwind_Resume();
  pcStack_148 = FUN_1067b6b88;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar6;
  puVar2 = puVar4;
  uVar7 = uVar8;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar4);
  if (puVar3 != (undefined8 *)0x0) {
    plVar9 = (long *)puVar3[1];
    puVar5 = &UNK_10f396c57;
    if ((int)puVar6 == 0) {
      puVar5 = &UNK_10f396c5c;
    }
    func_0x00010002b838(auStack_1b8,puVar5);
    _objc_retain(puVar4);
    if (puVar4 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f396c62;
    }
    else {
      _objc_retainAutorelease(puVar4);
      puVar2 = puVar4;
      func_0x00010bdc3520(puVar4);
    }
    _objc_release(puVar4);
    func_0x00010002b838(auStack_1a0,puVar2);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar5 = &UNK_11093bfd0;
    puVar2 = &uStack_1d8;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11093bfd0,puVar2,uVar8);
    puStack_1c0 = &uStack_1d8;
    func_0x00010007e5dc(&puStack_1c0);
    lVar1 = 0;
    uVar7 = uVar8;
    do {
      if ((&cStack_189)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  puVar3 = puVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar4);
  __Unwind_Resume();
  pcStack_1e8 = FUN_1067b6d74;
  lStack_228 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar5;
  pppuStack_1f0 = &ppuStack_150;
  _objc_retain(puVar2);
  if (puVar3 != (undefined8 *)0x0) {
    plVar9 = (long *)puVar3[1];
    puVar6 = &UNK_10f396c57;
    if ((int)puVar5 == 0) {
      puVar6 = &UNK_10f396c5c;
    }
    func_0x00010002b838(auStack_258,puVar6);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f396c62;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar3 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_240,puVar3);
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_268 = 0;
    func_0x00010007e1e8(&uStack_278,auStack_258,&lStack_228,2);
    puVar6 = &UNK_11093c020;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11093c020,&uStack_278,uVar7);
    puStack_260 = &uStack_278;
    func_0x00010007e5dc(&puStack_260);
    lVar1 = 0;
    do {
      if ((&cStack_229)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_240 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_228) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  if (cStack_241 < '\0') {
    __ZdlPv(auStack_258[0]);
  }
  _objc_release(puVar2);
  puVar4 = puVar3;
  __Unwind_Resume();
  puStack_2a8 = (undefined1 *)&uStack_2c0;
  pcStack_288 = FUN_1067b6f60;
  if (puVar4 != (undefined8 *)0x0) {
    uStack_2c0 = 0;
    uStack_2b8 = 0;
    uStack_2b0 = 0;
    puStack_2a0 = puVar3;
    puStack_298 = puVar2;
    pppuStack_290 = &pppuStack_1f0;
    (**(code **)(*(long *)puVar4[1] + 0x18))((long *)puVar4[1],&UNK_11093c070,&uStack_2c0,puVar6);
    func_0x00010007e5dc(&puStack_2a8);
  }
  return;
}



/* Entry: 1067b0d84; end: 1067b0d97; -[SCCountdownsFriendStoreMetricsLogger getBestFriendsWithDurationMs:nonEmptyResult:optionalError:] */

void FUN_1067b0d84(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 *param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined1 ***pppuStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 auStack_1b8 [2];
  char cStack_1a1;
  undefined8 auStack_1a0 [2];
  char cStack_189;
  long lStack_188;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
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
  
  lVar1 = *(long *)(param_1 + 8);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_4;
  puVar2 = param_5;
  uVar7 = param_3;
  _objc_retain(param_5);
  if (lVar1 != 0) {
    plVar9 = *(long **)(lVar1 + 8);
    puVar4 = &UNK_10f396c57;
    if ((int)param_4 == 0) {
      puVar4 = &UNK_10f396c5c;
    }
    func_0x00010002b838(auStack_78,puVar4);
    _objc_retain(param_5);
    if (param_5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f396c62;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar2 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar4 = &UNK_11093bf80;
    puVar2 = &uStack_98;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11093bf80,puVar2,param_3);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar1 = 0;
    uVar7 = param_3;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  puVar3 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_5);
  __Unwind_Resume();
  pcStack_a8 = FUN_1067b6b88;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar4;
  puVar6 = puVar2;
  uVar8 = uVar7;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  if (puVar3 != (undefined8 *)0x0) {
    plVar9 = (long *)puVar3[1];
    puVar5 = &UNK_10f396c57;
    if ((int)puVar4 == 0) {
      puVar5 = &UNK_10f396c5c;
    }
    func_0x00010002b838(auStack_118,puVar5);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f396c62;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar3 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_100,puVar3);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar5 = &UNK_11093bfd0;
    puVar6 = &uStack_138;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11093bfd0,puVar6,uVar7);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar1 = 0;
    uVar8 = uVar7;
    do {
      if ((&cStack_e9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  puVar3 = puVar2;
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
  __Unwind_Resume();
  pcStack_148 = FUN_1067b6d74;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar5;
  ppuStack_150 = &puStack_b0;
  _objc_retain(puVar6);
  if (puVar3 != (undefined8 *)0x0) {
    plVar9 = (long *)puVar3[1];
    puVar4 = &UNK_10f396c57;
    if ((int)puVar5 == 0) {
      puVar4 = &UNK_10f396c5c;
    }
    func_0x00010002b838(auStack_1b8,puVar4);
    _objc_retain(puVar6);
    if (puVar6 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f396c62;
    }
    else {
      _objc_retainAutorelease(puVar6);
      puVar2 = puVar6;
      func_0x00010bdc3520(puVar6);
    }
    _objc_release(puVar6);
    func_0x00010002b838(auStack_1a0,puVar2);
    uStack_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1c8 = 0;
    func_0x00010007e1e8(&uStack_1d8,auStack_1b8,&lStack_188,2);
    puVar4 = &UNK_11093c020;
    (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_11093c020,&uStack_1d8,uVar8);
    puStack_1c0 = &uStack_1d8;
    func_0x00010007e5dc(&puStack_1c0);
    lVar1 = 0;
    do {
      if ((&cStack_189)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_1a0 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  puVar2 = puVar6;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar6);
  if (cStack_1a1 < '\0') {
    __ZdlPv(auStack_1b8[0]);
  }
  _objc_release(puVar6);
  puVar3 = puVar2;
  __Unwind_Resume();
  puStack_208 = (undefined1 *)&uStack_220;
  pcStack_1e8 = FUN_1067b6f60;
  if (puVar3 != (undefined8 *)0x0) {
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_210 = 0;
    puStack_200 = puVar2;
    puStack_1f8 = puVar6;
    pppuStack_1f0 = &ppuStack_150;
    (**(code **)(*(long *)puVar3[1] + 0x18))((long *)puVar3[1],&UNK_11093c070,&uStack_220,puVar4);
    func_0x00010007e5dc(&puStack_208);
  }
  return;
}



/* Entry: 1067b0d98; end: 1067b0dab; -[SCCountdownsFriendStoreMetricsLogger getFriendCountWithDurationMs:nonEmptyResult:optionalError:] */

void FUN_1067b0d98(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined8 *param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined1 **ppuStack_150;
  code *pcStack_148;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 auStack_118 [2];
  char cStack_101;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
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
  
  lVar1 = *(long *)(param_1 + 8);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_4;
  puVar2 = param_5;
  uVar7 = param_3;
  _objc_retain(param_5);
  if (lVar1 != 0) {
    plVar8 = *(long **)(lVar1 + 8);
    puVar5 = &UNK_10f396c57;
    if ((int)param_4 == 0) {
      puVar5 = &UNK_10f396c5c;
    }
    func_0x00010002b838(auStack_78,puVar5);
    _objc_retain(param_5);
    if (param_5 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)&UNK_10f396c62;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar2 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar5 = &UNK_11093bfd0;
    puVar2 = &uStack_98;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11093bfd0,puVar2,param_3);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar1 = 0;
    uVar7 = param_3;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  puVar3 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_5);
  __Unwind_Resume();
  pcStack_a8 = FUN_1067b6d74;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar5;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  if (puVar3 != (undefined8 *)0x0) {
    plVar8 = (long *)puVar3[1];
    puVar6 = &UNK_10f396c57;
    if ((int)puVar5 == 0) {
      puVar6 = &UNK_10f396c5c;
    }
    func_0x00010002b838(auStack_118,puVar6);
    _objc_retain(puVar2);
    if (puVar2 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)&UNK_10f396c62;
    }
    else {
      _objc_retainAutorelease(puVar2);
      puVar3 = puVar2;
      func_0x00010bdc3520(puVar2);
    }
    _objc_release(puVar2);
    func_0x00010002b838(auStack_100,puVar3);
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    func_0x00010007e1e8(&uStack_138,auStack_118,&lStack_e8,2);
    puVar6 = &UNK_11093c020;
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11093c020,&uStack_138,uVar7);
    puStack_120 = &uStack_138;
    func_0x00010007e5dc(&puStack_120);
    lVar1 = 0;
    do {
      if ((&cStack_e9)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_100 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  puVar3 = puVar2;
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
  puVar4 = puVar3;
  __Unwind_Resume();
  puStack_168 = (undefined1 *)&uStack_180;
  pcStack_148 = FUN_1067b6f60;
  if (puVar4 != (undefined8 *)0x0) {
    uStack_180 = 0;
    uStack_178 = 0;
    uStack_170 = 0;
    puStack_160 = puVar3;
    puStack_158 = puVar2;
    ppuStack_150 = &puStack_b0;
    (**(code **)(*(long *)puVar4[1] + 0x18))((long *)puVar4[1],&UNK_11093c070,&uStack_180,puVar6);
    func_0x00010007e5dc(&puStack_168);
  }
  return;
}



/* Entry: 1067b0dac; end: 1067b0dbf; -[SCCountdownsFriendStoreMetricsLogger addFriendCountWithDurationMs:isSuccess:optionalError:] */

void FUN_1067b0dac(long param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  undefined *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 *puStack_c8;
  undefined *puStack_c0;
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
  
  lVar1 = *(long *)(param_1 + 8);
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_4;
  _objc_retain(param_5);
  if (lVar1 != 0) {
    plVar5 = *(long **)(lVar1 + 8);
    puVar2 = &UNK_10f396c57;
    if ((int)param_4 == 0) {
      puVar2 = &UNK_10f396c5c;
    }
    func_0x00010002b838(auStack_78,puVar2);
    _objc_retain(param_5);
    if (param_5 == (undefined *)0x0) {
      puVar2 = &UNK_10f396c62;
    }
    else {
      _objc_retainAutorelease(param_5);
      puVar2 = param_5;
      func_0x00010bdc3520(param_5);
    }
    _objc_release(param_5);
    func_0x00010002b838(auStack_60,puVar2);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010007e1e8(&uStack_98,auStack_78,&lStack_48,2);
    puVar2 = &UNK_11093c020;
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_11093c020,&uStack_98,param_3);
    puStack_80 = &uStack_98;
    func_0x00010007e5dc(&puStack_80);
    lVar1 = 0;
    do {
      if ((&cStack_49)[lVar1] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar1));
      }
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != -0x30);
  }
  puVar3 = param_5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_5);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_5);
  puVar4 = puVar3;
  __Unwind_Resume();
  puStack_c8 = (undefined1 *)&uStack_e0;
  pcStack_a8 = FUN_1067b6f60;
  if (puVar4 != (undefined *)0x0) {
    uStack_e0 = 0;
    uStack_d8 = 0;
    uStack_d0 = 0;
    puStack_c0 = puVar3;
    puStack_b8 = param_5;
    puStack_b0 = &stack0xfffffffffffffff0;
    (**(code **)(**(long **)(puVar4 + 8) + 0x18))
              (*(long **)(puVar4 + 8),&UNK_11093c070,&uStack_e0,puVar2);
    func_0x00010007e5dc(&puStack_c8);
  }
  return;
}



/* Entry: 1067b0dc0; end: 1067b0dcb; -[SCCountdownsFriendStoreMetricsLogger onFriendsUpdate] */

void FUN_1067b0dc0(long param_1)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (*(long *)(param_1 + 8) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 8) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_11093c070,&uStack_40,1);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 1067b0dcc; end: 1067b0dd7; -[SCCountdownsFriendStoreMetricsLogger .cxx_destruct] */

void FUN_1067b0dcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067b0dd8; end: 1067b0e67; -[SCCountdownsLoggedFriendStore initWithFriendStore:] */

undefined1 * FUN_1067b0dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3190;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cdf50;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067b0e68; end: 1067b0f0f; -[SCCountdownsLoggedFriendStore getFriendsWithCompletion:] */

void FUN_1067b0e68(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1067b0f10;
  puStack_50 = &UNK_11093bda0;
  uStack_48 = uVar2;
  uStack_40 = param_4;
  uStack_38 = param_1;
  _objc_retain(param_4);
  _objc_retain(uVar2);
  func_0x00010bfc5f40(uVar1,param_3,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 1067b0f10; end: 1067b0fd3;  */

void FUN_1067b0f10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _CACurrentMediaTime();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf529e0(param_2);
  uVar1 = param_3;
  func_0x00010bf660a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc5f60(uVar3);
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_2,param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067b0fd4; end: 1067b107b; -[SCCountdownsLoggedFriendStore getBestFriendsWithCompletion:] */

void FUN_1067b0fd4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1067b107c;
  puStack_50 = &UNK_11093bda0;
  uStack_48 = uVar2;
  uStack_40 = param_4;
  uStack_38 = param_1;
  _objc_retain(param_4);
  _objc_retain(uVar2);
  func_0x00010bfc2fa0(uVar1,param_3,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 1067b107c; end: 1067b113f;  */

void FUN_1067b107c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _CACurrentMediaTime();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf529e0(param_2);
  uVar1 = param_3;
  func_0x00010bf660a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc2fc0(uVar3);
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_2,param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067b1140; end: 1067b11e7; -[SCCountdownsLoggedFriendStore getFriendCountWithCompletion:] */

void FUN_1067b1140(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1067b11e8;
  puStack_50 = &UNK_11093bdd0;
  uStack_48 = uVar2;
  uStack_40 = param_4;
  uStack_38 = param_1;
  _objc_retain(param_4);
  _objc_retain(uVar2);
  func_0x00010bfc5e20(uVar1,param_3,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 1067b11e8; end: 1067b12ab;  */

void FUN_1067b11e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _CACurrentMediaTime();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c067fc0(param_2);
  uVar1 = param_3;
  func_0x00010bf660a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc5e40(uVar3);
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_2,param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067b12ac; end: 1067b136b; -[SCCountdownsLoggedFriendStore addFriendWithRequest:completion:] */

void FUN_1067b12ac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _CACurrentMediaTime();
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1067b136c;
  puStack_50 = &UNK_11093be00;
  uStack_48 = uVar2;
  uStack_40 = param_5;
  uStack_38 = param_1;
  _objc_retain(param_5);
  _objc_retain(uVar2);
  func_0x00010bef8a40(uVar1,param_3,param_4,&puStack_68);
  _objc_release(param_4);
  _objc_release(uStack_40);
  _objc_release(uVar2);
  _objc_release(param_5);
  return;
}



/* Entry: 1067b136c; end: 1067b1407;  */

void FUN_1067b136c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _CACurrentMediaTime();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = param_3;
  func_0x00010bf660a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8780(uVar3);
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067b1408; end: 1067b14b7; -[SCCountdownsLoggedFriendStore onFriendsUpdatedWithCallback:] */

void FUN_1067b1408(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1067b14b8;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = uVar1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(uVar1);
  func_0x00010c0e4640(uVar2,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1067b14b8; end: 1067b14f3;  */

void FUN_1067b14b8(long param_1)

{
  func_0x00010c0e4620(*(undefined8 *)(param_1 + 0x20));
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001067b14e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1067b14f4; end: 1067b153b; -[SCCountdownsLoggedFriendStore friendsObservable] */

void FUN_1067b14f4(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  _objc_opt_respondsToSelector(uVar1,PTR_s_friendsObservable_1125cc2e0);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfba4e0(*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067b153c; end: 1067b1587; -[SCCountdownsLoggedFriendStore setFriendsObservable:] */

void FUN_1067b153c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  _objc_opt_respondsToSelector(uVar1,PTR_s_friendsObservable_1125cc2e0);
  if ((uVar1 & 1) != 0) {
    func_0x00010c1a0aa0(*(undefined8 *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067b1588; end: 1067b15cf; -[SCCountdownsLoggedFriendStore bestFriendsObservable] */

void FUN_1067b1588(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  _objc_opt_respondsToSelector(uVar1,PTR_s_bestFriendsObservable_1125a3f78);
  if ((uVar1 & 1) != 0) {
    func_0x00010bf19740(*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067b15d0; end: 1067b161b; -[SCCountdownsLoggedFriendStore setBestFriendsObservable:] */

void FUN_1067b15d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  _objc_opt_respondsToSelector(uVar1,PTR_s_bestFriendsObservable_1125a3f78);
  if ((uVar1 & 1) != 0) {
    func_0x00010c16fea0(*(undefined8 *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067b161c; end: 1067b1663; -[SCCountdownsLoggedFriendStore friendCountObservable] */

void FUN_1067b161c(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  _objc_opt_respondsToSelector(uVar1,PTR_s_friendCountObservable_1125cb980);
  if ((uVar1 & 1) != 0) {
    func_0x00010bfb7f60(*(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067b1664; end: 1067b16af; -[SCCountdownsLoggedFriendStore setFriendCountObservable:] */

void FUN_1067b1664(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 8);
  _objc_opt_respondsToSelector(uVar1,PTR_s_friendCountObservable_1125cb980);
  if ((uVar1 & 1) != 0) {
    func_0x00010c19fc20(*(undefined8 *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067b16b0; end: 1067b16fb; -[SCCountdownsLoggedFriendStore pushToValdiMarshaller:] */

undefined8 FUN_1067b16b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  _objc_opt_respondsToSelector(uVar1,PTR_s_pushToValdiMarshaller__112624b18);
  if ((uVar1 & 1) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010c11c3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_pushToValdiMarshaller__112624b18,param_3);
    return uVar2;
  }
  return 0;
}



/* Entry: 1067b16fc; end: 1067b173f; -[SCCountdownsLoggedFriendStore shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_1067b16fc(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  _objc_opt_respondsToSelector(uVar1,PTR_s_shouldRetainInstanceWhenMarshall_11266a518);
  if ((uVar1 & 1) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010c232bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_shouldRetainInstanceWhenMarshall_11266a518);
    return uVar2;
  }
  return 0;
}



/* Entry: 1067b1740; end: 1067b175f; -[SCCountdownsLoggedFriendStore respondsToSelector:] */

uint FUN_1067b1740(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_opt_respondsToSelector(uVar1,param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 1067b1760; end: 1067b178f; -[SCCountdownsLoggedFriendStore .cxx_destruct] */

void FUN_1067b1760(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067b1790; end: 1067b17a7; -[SCCountdownsPagePresenterImpl presentedViewController] */

void FUN_1067b1790(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067b17a8; end: 1067b18cb; -[SCCountdownsPagePresenterImpl initWithCreationPageProvider:listPageProvider:detailsPageProvider:appLifecycleManager:adConfigProviderService:] */

undefined1 *
FUN_1067b17a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f3198;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067b18cc; end: 1067b1c7b;  */

void FUN_1067b18cc(long param_1)

{
  ulong uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined **ppuStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [16];
  
  _objc_loadWeakRetained(*(long *)(param_1 + 0x20) + 0x38);
  _objc_release();
  lVar6 = *(long *)(param_1 + 0x20) + 0x38;
  _objc_loadWeakRetained();
  _objc_release();
  puVar7 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar6 == 0) {
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_1067b1c7c;
    puStack_88 = &UNK_1108434b0;
    _objc_copyWeak(auStack_80,param_1 + 0x40);
    ppuVar2 = &puStack_a0;
    _objc_retainBlock();
    uVar10 = *(ulong *)(param_1 + 0x28);
    _objc_retain(uVar10);
    puVar3 = PTR_PTR_1126b0b68;
    _objc_opt_class(PTR_PTR_1126b0b68);
    uVar4 = uVar10;
    _objc_opt_isKindOfClass(uVar10,puVar3);
    uVar1 = uVar10;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar10);
    puVar3 = PTR_PTR_1126cdf58;
    _objc_alloc();
    puStack_d0 = puVar7;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x1067b1d3c;
    puStack_b8 = &UNK_110848708;
    _objc_copyWeak(auStack_a8,param_1 + 0x48);
    _objc_retain(ppuVar2);
    ppuStack_b0 = ppuVar2;
    func_0x00010c033280();
    puStack_108 = puVar7;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_1067b1d88;
    puStack_f0 = &UNK_110848ba8;
    uStack_e8 = *(undefined8 *)(param_1 + 0x20);
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar11);
    uStack_e0 = uVar11;
    _objc_retain(puVar3);
    ppuVar5 = &puStack_108;
    puStack_d8 = puVar3;
    _objc_retainBlock();
    func_0x00010c247520(*(undefined8 *)(param_1 + 0x30));
    lVar6 = *(long *)(param_1 + 0x30);
    func_0x00010c247520();
    if (lVar6 == 6) {
      puVar7 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x00010c22b720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf07b60();
      _objc_release(puVar7);
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
      func_0x00010c269d40(uVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR_PTR_1126ae960;
      puVar8 = PTR_PTR_1126aeeb8;
      func_0x00010bf52ac0(PTR_PTR_1126aeeb8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef1400(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126ae970;
      func_0x00010c292920(PTR_PTR_1126ae970);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(PTR___dispatch_main_q_11034be20);
      _objc_retain(ppuVar5);
      func_0x00010c2a1660(uVar11);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(PTR___dispatch_main_q_11034be20);
      _objc_release(puVar9);
      _objc_release(puVar7);
      _objc_release(puVar8);
      _objc_release(ppuVar5);
      _objc_release(uVar11);
    }
    else {
      (*(code *)ppuVar5[2])(ppuVar5);
    }
    _objc_release(ppuVar5);
    _objc_release(puStack_d8);
    _objc_release(uStack_e0);
    _objc_release(puVar3);
    _objc_release(ppuStack_b0);
    _objc_destroyWeak(auStack_a8);
    _objc_release(uVar1);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_80);
  }
  return;
}



/* Entry: 1067b1c7c; end: 1067b1d0b;  */

void FUN_1067b1c7c(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1067b1d0c;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1067b1d0c; end: 1067b1d87;  */

void FUN_1067b1d0c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf6f440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067b1d88; end: 1067b1ddf;  */

void FUN_1067b1d88(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x30);
  *(undefined8 *)(lVar1 + 0x30) = uVar2;
  _objc_release(uVar3);
  func_0x00010bf0c980(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)
            (*(long *)(param_1 + 0x20) + 0x38,*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1067b1de0; end: 1067b1e23;  */

/* WARNING: Possible PIC construction at 0x00010058c5a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010058c5a4) */

void FUN_1067b1de0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = 0;
  _dispatch_time(0,(long)(*(double *)(param_1 + 0x28) * 1000000000.0));
  puVar1 = PTR___dispatch_main_q_11034be20;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c61174(PTR___dispatch_main_q_11034be20);
  func_0x000107c61174(uVar5);
  if ((bRam0000000113817cb8 & 1) == 0) {
    iVar2 = 0x13817cb8;
    func_0x000107c60e48();
    if (iVar2 != 0) {
      pcVar3 = (code *)0xffffffffffffffff;
      func_0x000107c60f9c(0xffffffffffffffff,"dispatch_after");
      pcRam0000000113817cb0 = pcVar3;
      func_0x000107c60e4c(0x113817cb8);
    }
  }
  pcVar3 = pcRam0000000113817cb0;
  func_0x00010002a3a8(uVar5);
  func_0x000107c61180();
  (*pcVar3)(uVar4,puVar1,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1067b1e24; end: 1067b1fc3;  */

void FUN_1067b1e24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    uStack_60 = 0x1067b1f08;
    puStack_58 = &UNK_11084c4a0;
    _objc_retain(param_2);
    uStack_50 = param_2;
    _objc_retain(param_3);
    uStack_48 = param_3;
    lStack_40 = param_1;
    _objc_retain(param_4);
    uStack_38 = param_4;
    func_0x0001000d76cc("APPSTORE",&puStack_70);
    _objc_release(uStack_38);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1067b1fc4; end: 1067b2127;  */

void FUN_1067b1fc4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (param_2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    lVar3 = *(long *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar1);
    _objc_retain(uVar2);
    _objc_retain(uVar4);
    if (lVar3 != 0) {
      _objc_initWeak(auStack_38,lVar3);
      _objc_initWeak(auStack_40,uVar4);
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_1067b18cc;
      puStack_78 = &UNK_11093be30;
      lStack_70 = lVar3;
      _objc_copyWeak(auStack_50,auStack_40);
      _objc_retain(uVar2);
      uStack_68 = uVar2;
      _objc_retain(uVar1);
      uStack_60 = uVar1;
      _objc_copyWeak(auStack_48,auStack_38);
      _objc_retain(uVar4);
      uStack_58 = uVar4;
      func_0x0001000d76cc("APPSTORE",&puStack_90);
      _objc_release(uStack_58);
      _objc_destroyWeak(auStack_48);
      _objc_release(uStack_60);
      _objc_release(uStack_68);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 1067b2128; end: 1067b21af; -[SCCountdownsPagePresenterImpl presentCountdownsCreationPageWithConfig:] */

void FUN_1067b2128(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + 0x28);
  }
  _objc_retain(uVar2);
  FUN_1067b1e24(param_1,uVar1,param_3,uVar2);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067b21b0; end: 1067b2237; -[SCCountdownsPagePresenterImpl presentCountdownsListPageWithConfig:] */

void FUN_1067b21b0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + 0x28);
  }
  _objc_retain(uVar2);
  FUN_1067b1e24(param_1,uVar1,param_3,uVar2);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067b2238; end: 1067b22bf; -[SCCountdownsPagePresenterImpl presentCountdownsDetailsPageWithConfig:] */

void FUN_1067b2238(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + 0x30);
  }
  _objc_retain(uVar2);
  FUN_1067b1e24(param_1,uVar1,param_3,uVar2);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067b22c0; end: 1067b243f; -[SCCountdownsPagePresenterImpl dismissPageWithCompletion:] */

void FUN_1067b22c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x1067b2348;
  puStack_38 = &UNK_11084aaa8;
  uStack_30 = param_1;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1067b2440; end: 1067b24a7; -[SCCountdownsPagePresenterImpl .cxx_destruct] */

void FUN_1067b2440(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
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



/* Entry: 1067b24a8; end: 1067b269b; -[SCCountdownsUserDataFetcher fetchUserWithConfig:completion:] */

void FUN_1067b24a8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) goto LAB_1067b2674;
  lVar1 = param_3;
  func_0x00010bf608a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c1173e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010bf608a0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b1440;
    _objc_alloc();
    lVar2 = param_3;
    func_0x00010bf608a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040f20();
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c1173e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
LAB_1067b25e0:
    puVar5 = PTR_PTR_1126cdf60;
    func_0x00010c292f20();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar4 = PTR_PTR_1126b1440;
    _objc_alloc();
    lVar2 = param_3;
    func_0x00010c1173e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040f20();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((puVar3 == (undefined *)0x0) || (puVar4 == (undefined *)0x0)) goto LAB_1067b25e0;
    puVar5 = (undefined *)0x0;
  }
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1067b269c;
  puStack_68 = &UNK_1108465d0;
  _objc_retain(param_4);
  puStack_60 = puVar3;
  puStack_58 = puVar4;
  puStack_50 = puVar5;
  lStack_48 = param_4;
  _objc_retain(puVar5);
  func_0x0001000d76cc("APPSTORE",&puStack_80);
  _objc_release(puStack_50);
  _objc_release(lStack_48);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
LAB_1067b2674:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1067b269c; end: 1067b26af;  */

void FUN_1067b269c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001067b26ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))
            (*(long *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 1067b26b0; end: 1067b26df; +[SCCountdownsUserDataFetcher userNotFound] */

void FUN_1067b26b0(void)

{
  _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x00010c00e2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067b26e0; end: 1067b270f; +[SCCountdownsBasePageProvider incorrectPageProvider] */

void FUN_1067b26e0(void)

{
  _objc_alloc(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x00010c00e2e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067b2710; end: 1067b27ab; -[SCCountdownsBasePageProvider initWithValdiRuntimeProvider:] */

undefined1 * FUN_1067b2710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f31a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cdf60;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x18) = 1;
    *(undefined8 *)((long)puVar1 + 0x20) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067b27ac; end: 1067b280f; -[SCCountdownsBasePageProvider configureWithConfig:completion:] */

void FUN_1067b27ac(void)

{
  undefined *puVar1;
  long in_x3;
  
  puVar1 = PTR_PTR_1126cdf68;
  if (in_x3 != 0) {
    _objc_retain(in_x3);
    func_0x00010bfec100(puVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(in_x3 + 0x10))(in_x3,puVar1);
    _objc_release(in_x3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1067b2810; end: 1067b2857; -[SCCountdownsBasePageProvider _runtime] */

void FUN_1067b2810(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1067b2858; end: 1067b285f; -[SCCountdownsBasePageProvider isProfilePage] */

undefined1 FUN_1067b2858(long param_1)

{
  return *(undefined1 *)(param_1 + 0x18);
}



/* Entry: 1067b2860; end: 1067b287f; -[SCCountdownsBasePageProvider getPage] */

void FUN_1067b2860(void)

{
  _objc_alloc(PTR_PTR_1126b1870);
  func_0x00010c0639c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067b2880; end: 1067b2887; -[SCCountdownsBasePageProvider presentationType] */

undefined8 FUN_1067b2880(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1067b2888; end: 1067b28d3; -[SCCountdownsBasePageProvider _composerPageSourceFromPageSource:] */

void FUN_1067b2888(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  if (param_3 - 1U < 6) {
    ppuVar1 = (undefined **)(&PTR_PTR_11093bec0)[param_3 - 1U];
  }
  else {
    ppuVar1 = &PTR_PTR_1133ba480;
  }
  puVar2 = *ppuVar1;
  _objc_retain(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067b28d4; end: 1067b28db; -[SCCountdownsBasePageProvider optionalDismissalCallback] */

undefined8 FUN_1067b28d4(void)

{
  return 0;
}



/* Entry: 1067b28dc; end: 1067b28e3; -[SCCountdownsBasePageProvider source] */

undefined8 FUN_1067b28dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1067b28e4; end: 1067b2913; -[SCCountdownsBasePageProvider .cxx_destruct] */

void FUN_1067b28e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067b2914; end: 1067b2997; -[SCCountdownsCreationPageProvider initWithValdiRuntimeProvider:pageContext:] */

undefined1 *
FUN_1067b2914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f31a8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithValdiRuntimeProvider__1125f5950,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1067b2998; end: 1067b2ba7; -[SCCountdownsCreationPageProvider configureWithConfig:completion:] */

void FUN_1067b2998(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    *(undefined1 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  else {
    lVar3 = *(long *)(param_3 + 0x20);
    *(bool *)(param_1 + 0x18) = lVar3 - 1U < 2;
    *(long *)(param_1 + 0x28) = lVar3;
  }
  lVar3 = param_1;
  func_0x00010bde3e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf02580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d86a0();
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(lVar3);
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_3 + 0x30);
  }
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126cdf70;
  _objc_alloc(PTR_PTR_1126cdf70);
  if (param_3 == 0) {
    _objc_retain(0);
    uVar4 = 0;
    uVar1 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_3 + 8);
    _objc_retain(uVar4);
    uVar1 = *(undefined8 *)(param_3 + 0x10);
  }
  _objc_retain(uVar1);
  func_0x00010c007420(puVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_initWeak(auStack_48,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bfab400(uVar4);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1067b2ba8; end: 1067b2c6b;  */

void FUN_1067b2ba8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126cdf78;
      _objc_alloc();
      func_0x00010c0073e0();
      uVar3 = *(undefined8 *)(lVar1 + 0x30);
      *(undefined **)(lVar1 + 0x30) = puVar2;
      _objc_release(uVar3);
      func_0x00010c1e45c0(*(undefined8 *)(lVar1 + 0x30));
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_4);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067b2c6c; end: 1067b2c83; -[SCCountdownsCreationPageProvider optionalDismissalCallback] */

void FUN_1067b2c6c(long param_1)

{
  _objc_retainBlock(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067b2c84; end: 1067b2d0f; -[SCCountdownsCreationPageProvider getPage] */

void FUN_1067b2c84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cdf80;
  _objc_alloc(PTR_PTR_1126cdf80);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010be982a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar2,param_2,uVar3,uVar1,param_1);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067b2d10; end: 1067b2d4b; -[SCCountdownsCreationPageProvider .cxx_destruct] */

void FUN_1067b2d10(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 1067b2d4c; end: 1067b2dcf; -[SCCountdownsListPageProvider initWithValdiRuntimeProvider:pageContext:] */

undefined1 *
FUN_1067b2d4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f31b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithValdiRuntimeProvider__1125f5950,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1067b2dd0; end: 1067b2fdf; -[SCCountdownsListPageProvider configureWithConfig:completion:] */

void FUN_1067b2dd0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
    *(undefined1 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  else {
    lVar3 = *(long *)(param_3 + 0x20);
    *(bool *)(param_1 + 0x18) = lVar3 - 1U < 2;
    *(long *)(param_1 + 0x28) = lVar3;
  }
  lVar3 = param_1;
  func_0x00010bde3e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf02580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d86a0();
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(lVar3);
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_3 + 0x30);
  }
  _objc_retain(uVar4);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126cdf70;
  _objc_alloc(PTR_PTR_1126cdf70);
  if (param_3 == 0) {
    _objc_retain(0);
    uVar4 = 0;
    uVar1 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_3 + 8);
    _objc_retain(uVar4);
    uVar1 = *(undefined8 *)(param_3 + 0x10);
  }
  _objc_retain(uVar1);
  func_0x00010c007420(puVar2);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_initWeak(auStack_48,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_4);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bfab400(uVar4);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1067b2fe0; end: 1067b30a3;  */

void FUN_1067b2fe0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126cdf88;
      _objc_alloc();
      func_0x00010c0073e0();
      uVar3 = *(undefined8 *)(lVar1 + 0x30);
      *(undefined **)(lVar1 + 0x30) = puVar2;
      _objc_release(uVar3);
      func_0x00010c1e45c0(*(undefined8 *)(lVar1 + 0x30));
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_4);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067b30a4; end: 1067b30bb; -[SCCountdownsListPageProvider optionalDismissalCallback] */

void FUN_1067b30a4(long param_1)

{
  _objc_retainBlock(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067b30bc; end: 1067b3147; -[SCCountdownsListPageProvider getPage] */

void FUN_1067b30bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cdf90;
  _objc_alloc(PTR_PTR_1126cdf90);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010be982a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar2,param_2,uVar3,uVar1,param_1);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067b3148; end: 1067b3183; -[SCCountdownsListPageProvider .cxx_destruct] */

void FUN_1067b3148(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 1067b3184; end: 1067b322f; -[SCCountdownDetailsPageProvider initWithValdiRuntimeProvider:pagePresenter:pageContext:] */

undefined1 *
FUN_1067b3184(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f31b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithValdiRuntimeProvider__1125f5950,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = 1;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x40),param_4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1067b3230; end: 1067b344b; -[SCCountdownDetailsPageProvider configureWithConfig:completion:] */

void FUN_1067b3230(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(long *)(param_1 + 0x48) = param_3;
  _objc_release(uVar1);
  func_0x00010bf0c660(param_1);
  if (param_3 == 0) {
    *(undefined1 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  else {
    lVar4 = *(long *)(param_3 + 0x28);
    *(bool *)(param_1 + 0x18) = lVar4 - 1U < 2;
    *(long *)(param_1 + 0x28) = lVar4;
  }
  lVar4 = param_1;
  func_0x00010bde3e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf02580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d86a0();
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(lVar4);
  puVar3 = PTR_PTR_1126cdf70;
  _objc_alloc(PTR_PTR_1126cdf70);
  if (param_3 == 0) {
    _objc_retain(0);
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_3 + 0x10);
    _objc_retain(uVar1);
    uVar2 = *(undefined8 *)(param_3 + 0x18);
  }
  _objc_retain(uVar2);
  func_0x00010c007420(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bfab400(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1067b344c; end: 1067b34df;  */

void FUN_1067b344c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bfd3080(param_1);
  }
  _objc_release(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067b34e0; end: 1067b360f; -[SCCountdownDetailsPageProvider handleUserDataFetchCompletionWithCurrentUser:profileUser:error:config:completion:] */

void FUN_1067b34e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126cdf98;
  if (param_7 != 0) {
    _objc_retain(param_7);
    _objc_retain(param_6);
    _objc_retain(param_5);
    _objc_retain(param_3);
    _objc_alloc();
    if (param_6 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_6 + 0x20);
    }
    _objc_retain(uVar3);
    func_0x00010c007400();
    _objc_release(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar1;
    _objc_release(uVar2);
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_release(param_6);
    func_0x00010c0df6e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c200080(*(undefined8 *)(param_1 + 0x30));
    _objc_release(puVar1);
    (**(code **)(param_7 + 0x10))(param_7,param_5);
    _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_5);
    return;
  }
  return;
}



/* Entry: 1067b3610; end: 1067b36d7; -[SCCountdownDetailsPageProvider attachEditCountdownHandler] */

void FUN_1067b3610(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c1847c0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1067b36d8; end: 1067b3727;  */

void FUN_1067b36d8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c10bc20(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1067b3728; end: 1067b387f; -[SCCountdownDetailsPageProvider presentCountdownEditFlow:] */

void FUN_1067b3728(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126b0b60;
  _objc_alloc();
  if (*(long *)(param_1 + 0x48) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x10);
  }
  _objc_retain(uVar3);
  if (*(long *)(param_1 + 0x48) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x18);
  }
  _objc_retain(uVar4);
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 == 0) {
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar2 + 0x28);
    uVar5 = *(undefined8 *)(lVar2 + 0x30);
  }
  _objc_retain(uVar5);
  if (*(long *)(param_1 + 0x48) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x38);
  }
  _objc_retain(uVar7);
  func_0x000106e40154(puVar1,uVar3,uVar4,0,uVar6,uVar5,uVar7);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  func_0x00010bf84000();
  _objc_release(param_1);
  _objc_release(puVar1);
  return;
}



/* Entry: 1067b3880; end: 1067b38db;  */

void FUN_1067b3880(long param_1)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1067b38dc;
  puStack_28 = &UNK_110841f80;
  uStack_18 = *(undefined8 *)(param_1 + 0x28);
  uStack_20 = *(undefined8 *)(param_1 + 0x20);
  func_0x000100162d98("APPSTORE",&puStack_40);
  return;
}



/* Entry: 1067b38dc; end: 1067b38e7;  */

void FUN_1067b38dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10bc90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_presentCountdownsListPageWithCon_112620940,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1067b38e8; end: 1067b38ff; -[SCCountdownDetailsPageProvider optionalDismissalCallback] */

undefined8 FUN_1067b38e8(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    return *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x38);
  }
  return 0;
}



/* Entry: 1067b3900; end: 1067b398b; -[SCCountdownDetailsPageProvider getPage] */

void FUN_1067b3900(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cdfa0;
  _objc_alloc(PTR_PTR_1126cdfa0);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010be982a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40(puVar2,param_2,uVar3,uVar1,param_1);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067b398c; end: 1067b39cf; -[SCCountdownDetailsPageProvider .cxx_destruct] */

void FUN_1067b398c(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x38,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,0);
  return;
}



/* Entry: 1067b39d0; end: 1067b3abf; -[SCCountdownsPageServiceProvider provide] */

void FUN_1067b39d0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126cdfa8;
  _objc_alloc(PTR_PTR_1126cdfa8);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c033220(puVar1);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067b3ac0; end: 1067b3b0f;  */

void FUN_1067b3ac0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    FUN_1067b3b10(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067b3b10; end: 1067b3d8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b3b10(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(param_1 + _DAT_1127503dc);
    if (lVar8 == 0) {
      puVar1 = PTR_PTR_1126cdfb0;
      _objc_alloc();
      _objc_initWeak(auStack_78,param_1);
      puVar2 = PTR_PTR_1126ae720;
      _objc_copyWeak(auStack_80,auStack_78);
      func_0x00010bf11fe0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
      _objc_initWeak(auStack_78,param_1);
      puVar3 = PTR_PTR_1126ae720;
      _objc_copyWeak(auStack_80,auStack_78);
      func_0x00010bf11fe0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
      _objc_initWeak(auStack_78,param_1);
      puVar4 = PTR_PTR_1126ae720;
      _objc_copyWeak(auStack_80,auStack_78);
      func_0x00010bf11fe0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_destroyWeak(auStack_80);
      _objc_destroyWeak(auStack_78);
      lVar8 = param_1 + _DAT_112750424;
      _objc_loadWeakRetained(lVar8);
      lVar5 = lVar8;
      func_0x00010bf058c0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1 + _DAT_1127503e0;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c006780();
      uVar7 = *(undefined8 *)(param_1 + _DAT_1127503dc);
      *(undefined **)(param_1 + _DAT_1127503dc) = puVar1;
      _objc_release(uVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar8);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      lVar8 = *(long *)(param_1 + _DAT_1127503dc);
    }
    _objc_retain(lVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar8);
  return;
}



/* Entry: 1067b3d8c; end: 1067b3e67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b3d8c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b0c98;
  _objc_alloc(PTR_PTR_1126b0c98);
  func_0x00010c0368e0();
  puVar2 = PTR_PTR_1126cdfb8;
  _objc_alloc(PTR_PTR_1126cdfb8);
  param_1 = param_1 + _DAT_1127503e4;
  _objc_loadWeakRetained();
  lVar3 = param_1;
  func_0x00010bfb8b80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  (**(code **)(lVar3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c015b20(puVar2);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067b3e68; end: 1067b3f37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b3e68(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + _DAT_1127503e8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c293380();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1067b3f38; end: 1067b407f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b3f38(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126cdfc8;
    _objc_alloc(PTR_PTR_1126cdfc8);
    lVar1 = param_1 + _DAT_11275041c;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c295440();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_48,param_1);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010bf11fe0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    func_0x00010c060000(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1067b4080; end: 1067b435b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b4080(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1 + _DAT_112750404;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfcfa80();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar5 = PTR_PTR_1126cdfd0;
    _objc_alloc(PTR_PTR_1126cdfd0);
    lVar1 = param_1;
    FUN_1067b3d8c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    FUN_1067b3e68(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x0001067b3ed0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c015bc0(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1 + _DAT_1127503ec;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bfcf320();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    func_0x00010c1a4aa0(puVar5);
    _objc_release(lVar4);
    lVar1 = param_1;
    FUN_1067b435c(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c166b20(puVar5);
    _objc_release(lVar1);
    lVar1 = param_1;
    FUN_1067b4464(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a0660(puVar5);
    _objc_release(lVar1);
    _objc_initWeak(auStack_58,param_1);
    _objc_initWeak(auStack_60,puVar5);
    lVar1 = param_1;
    FUN_1067b3b10();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_58);
    _objc_copyWeak(auStack_68,auStack_60);
    func_0x00010c1d8040(puVar5);
    lVar2 = param_1;
    FUN_1067b4668(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c167be0(puVar5);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_70);
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(lVar3);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1067b435c; end: 1067b4463;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067b435c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_1 + _DAT_11275040c;
  _objc_loadWeakRetained(lVar4);
  lVar1 = lVar4;
  func_0x00010c0d6760();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0cf9a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar4);
  lVar4 = (long)_DAT_112750410;
  _objc_retain(lVar3);
  param_1 = param_1 + lVar4;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010beff660();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0b7600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}


