/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1060dd254; end: 1060dd327; -[SCRealTimeScanVerticalToolbarLogger didShowToolbarItemWithAnnotationType:itemText:] */

void FUN_1060dd254(double param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if ((lVar1 != 0) && (lVar1 = param_5, func_0x00010c08fa60(), lVar1 != 0)) {
    puVar2 = PTR_PTR_1126c7e08;
    _objc_alloc_init(PTR_PTR_1126c7e08);
    func_0x00010c209fc0();
    func_0x00010c168460(puVar2,param_3,param_4);
    func_0x00010c1b6300(puVar2,param_3,param_5);
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    func_0x00010c215e40(puVar2,param_3,(long)param_1);
    uVar3 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2b40();
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1060dd328; end: 1060dd3fb; -[SCRealTimeScanVerticalToolbarLogger didHideToolbarItemWithAnnotationType:itemText:] */

void FUN_1060dd328(double param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if ((lVar1 != 0) && (lVar1 = param_5, func_0x00010c08fa60(), lVar1 != 0)) {
    puVar2 = PTR_PTR_1126c7e08;
    _objc_alloc_init(PTR_PTR_1126c7e08);
    func_0x00010c209fc0();
    func_0x00010c168460(puVar2,param_3,param_4);
    func_0x00010c1b6300(puVar2,param_3,param_5);
    func_0x00010bf604c0(PTR_PTR_1126afec0);
    func_0x00010c215e40(puVar2,param_3,(long)param_1);
    uVar3 = *(undefined8 *)(param_2 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2b40();
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1060dd3fc; end: 1060dd407; -[SCRealTimeScanVerticalToolbarLogger .cxx_destruct] */

void FUN_1060dd3fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1060dd408; end: 1060dd487;  */

void FUN_1060dd408(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5aa40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1060dd488; end: 1060dd603; -[SCRealTimeScanLoggingServicesEntryPoint _logger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060dd488(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c7e18;
  _objc_alloc();
  lVar2 = param_1 + _DAT_11273f460;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05f0c0(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar4 = PTR_PTR_1126c7e20;
  _objc_alloc();
  param_1 = param_1 + _DAT_11273f464;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0184a0(puVar4,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
  puVar5 = PTR_PTR_1126c7e28;
  _objc_alloc_init();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar1;
  puStack_58 = puVar4;
  puStack_50 = puVar5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_60,3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c7e30;
  _objc_alloc();
  func_0x00010c027780();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    puVar7 = PTR_PTR_1126c7e38;
    _objc_alloc(PTR_PTR_1126c7e38);
    puVar1 = puVar1 + _DAT_11273f460;
    _objc_loadWeakRetained(puVar1);
    puVar4 = puVar1;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff8500(puVar7,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1060dd604; end: 1060dd67f; -[SCRealTimeScanLoggingServicesEntryPoint _verticalToolbarLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060dd604(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c7e38;
  _objc_alloc(PTR_PTR_1126c7e38);
  param_1 = param_1 + _DAT_11273f460;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff8500(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060dd680; end: 1060dd6d3; -[SCRealTimeScanLoggingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1060dd680(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273f45c,0);
  _objc_destroyWeak(param_1 + _DAT_11273f460);
  _objc_destroyWeak(param_1 + _DAT_11273f464);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11273f468);
  return;
}



/* Entry: 1060dd6d4; end: 1060dd747; -[SCGrapheneRealtimeScanDecodeMetric2 init] */

undefined1 * FUN_1060dd6d4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126efa20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1060dd748; end: 1060dd8bb;  */

undefined * FUN_1060dd748(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined *puStack_130;
  undefined *puStack_128;
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
      puVar1 = &UNK_10f365e0a;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11090dce0;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11090dce0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar5 = (undefined1 *)puVar6;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar5 = (undefined1 *)puVar6;
    }
  }
  puVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_1060dd8bc;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f365e0a;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11090dd30,&uStack_100,puVar5);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
    }
  }
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar3 = puVar2;
  __Unwind_Resume();
  ppuVar4 = &puStack_130;
  pcStack_108 = FUN_1060dda30;
  puStack_128 = PTR_PTR_1126efa28;
  puStack_130 = puVar3;
  puStack_120 = puVar2;
  puStack_118 = puVar1;
  ppuStack_110 = &puStack_90;
  _objc_msgSendSuper2(&puStack_130,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined **)0x0) {
    puVar5 = (undefined1 *)ppuVar4;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)ppuVar4 + 8) = puVar5;
  }
  return (undefined *)ppuVar4;
}



/* Entry: 1060dd8bc; end: 1060dda2f;  */

undefined * FUN_1060dd8bc(long param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined *puStack_b0;
  undefined *puStack_a8;
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
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f365e0a;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_11090dd30,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
    }
  }
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar2 = puVar1;
  __Unwind_Resume();
  ppuVar3 = &puStack_b0;
  pcStack_88 = FUN_1060dda30;
  puStack_a8 = PTR_PTR_1126efa28;
  puStack_b0 = puVar2;
  puStack_a0 = puVar1;
  puStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_b0,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined **)0x0) {
    puVar4 = (undefined1 *)ppuVar3;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)ppuVar3 + 8) = puVar4;
  }
  return (undefined *)ppuVar3;
}



/* Entry: 1060dda30; end: 1060ddaa3; -[SCGrapheneRealtimeScanBannerMetric2 init] */

undefined1 * FUN_1060dda30(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126efa28;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1060ddaa4; end: 1060ddc17;  */

void FUN_1060ddaa4(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined *puStack_138;
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
  
  puVar4 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_2;
  puVar3 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar7 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f365e68;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    puVar1 = &UNK_11090dda0;
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11090dda0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar3 = (undefined1 *)puVar4;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar3 = (undefined1 *)puVar4;
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
  puVar4 = &uStack_100;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = puVar3;
  _objc_retain(puVar1);
  if (puVar2 != (undefined *)0x0) {
    plVar7 = *(long **)(puVar2 + 8);
    _objc_retain(puVar1);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = &UNK_10f365e68;
    }
    else {
      puVar2 = puVar1;
      _objc_retainAutorelease(puVar1);
      func_0x00010bdc3520();
    }
    _objc_release(puVar1);
    func_0x00010002b838(auStack_e0,puVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    (**(code **)(*plVar7 + 0x18))(plVar7,&UNK_11090ddf0,&uStack_100,puVar3);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    puVar5 = (undefined1 *)puVar4;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      puVar5 = (undefined1 *)puVar4;
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
  __Unwind_Resume(puVar2);
  _objc_retain(puVar5);
  puStack_158 = &uStack_160;
  uStack_160 = 0;
  uStack_150 = 0x3032000000;
  pcStack_148 = FUN_1060ddfd4;
  uStack_140 = 0x1060ddfe4;
  puVar1 = PTR_PTR_1126be248;
  _objc_opt_new();
  puStack_138 = puVar1;
  func_0x00010c0bc680(puVar5);
  uVar6 = puStack_158[5];
  _objc_retain(uVar6);
  __Block_object_dispose(&uStack_160,8);
  _objc_release(puStack_138);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1060ddc18; end: 1060ddd8b;  */

void FUN_1060ddc18(long param_1,undefined *param_2,undefined1 *param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar3 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      puVar1 = &UNK_10f365e68;
    }
    else {
      puVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_60,puVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_11090ddf0,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar2 = (undefined1 *)puVar3;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar2 = (undefined1 *)puVar3;
    }
  }
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume(puVar1);
  _objc_retain(puVar2);
  puStack_d8 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x3032000000;
  pcStack_c8 = FUN_1060ddfd4;
  uStack_c0 = 0x1060ddfe4;
  puVar1 = PTR_PTR_1126be248;
  _objc_opt_new();
  puStack_b8 = puVar1;
  func_0x00010c0bc680(puVar2);
  uVar4 = puStack_d8[5];
  _objc_retain(uVar4);
  __Block_object_dispose(&uStack_e0,8);
  _objc_release(puStack_b8);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1060ddd8c; end: 1060ddfd3; +[SCCommerceShowcaseTypeConverter showcaseContextFromProductSetQuery:] */

void FUN_1060ddd8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1060ddfd4;
  uStack_40 = 0x1060ddfe4;
  puVar1 = PTR_PTR_1126be248;
  _objc_opt_new();
  puStack_38 = puVar1;
  func_0x00010c0bc680(param_3);
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1060ddfd4; end: 1060ddfeb;  */

void FUN_1060ddfd4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1060ddfec; end: 1060de253;  */

void FUN_1060ddfec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7e40;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  func_0x00010c2022e0();
  _objc_release(param_2);
  func_0x00010c2022a0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060de254; end: 1060de327;  */

void FUN_1060de254(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7e68;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  func_0x00010c20c240();
  _objc_release(param_2);
  func_0x00010c17a100(puVar1);
  _objc_release(param_3);
  func_0x00010c207200(puVar1);
  _objc_release(param_4);
  func_0x00010c206ea0(puVar1);
  _objc_release(param_5);
  func_0x00010c20c200(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060de328; end: 1060de48f;  */

void FUN_1060de328(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126c7e70;
  _objc_opt_new();
  puVar3 = PTR_PTR_1126baf88;
  _objc_opt_new();
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      func_0x00010c282800(*(undefined8 *)(lVar7 * 8));
      func_0x00010befc800(puVar3);
      lVar7 = lVar7 + 1;
    } while (lVar4 != lVar7);
    lVar4 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  func_0x00010c204920(puVar2);
  func_0x00010c19a760(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126be290;
  _objc_retain(lVar5);
  _objc_opt_new(puVar2);
  func_0x00010c0b4ca0(lVar5);
  _objc_release(lVar5);
  func_0x00010c204900(puVar2);
  func_0x00010c1ba5a0(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1060de490; end: 1060de50b;  */

void FUN_1060de490(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126be290;
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  func_0x00010c0b4ca0(param_2);
  _objc_release(param_2);
  func_0x00010c204900(puVar1);
  func_0x00010c1ba5a0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060de50c; end: 1060de6a3;  */

void FUN_1060de50c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c7e78;
  func_0x00010c0cb140();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126baf88;
  _objc_opt_new();
  _objc_retain(param_2);
  puVar6 = auStack_e8;
  uVar7 = 0x10;
  lVar4 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      func_0x00010c282800(*(undefined8 *)(lVar8 * 8));
      func_0x00010befc800(puVar3);
      lVar8 = lVar8 + 1;
    } while (lVar4 != lVar8);
    puVar6 = auStack_e8;
    uVar7 = 0x10;
    lVar4 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  func_0x00010c220500(puVar2);
  func_0x00010c20c240(puVar2);
  func_0x00010c1b63e0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126c7e80;
  _objc_retain(param_6);
  _objc_retain(uVar7);
  _objc_retain(puVar6);
  _objc_retain(lVar5);
  func_0x00010c0cb140(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20c240();
  _objc_release(lVar5);
  func_0x00010c17a100(puVar2);
  _objc_release(puVar6);
  func_0x00010c163720(puVar2);
  _objc_release(uVar7);
  func_0x00010c1d6280(puVar2);
  _objc_release(param_6);
  func_0x00010c1661e0(*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1060de6a4; end: 1060de77f;  */

void FUN_1060de6a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7e80;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_2);
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20c240();
  _objc_release(param_2);
  func_0x00010c17a100(puVar1);
  _objc_release(param_4);
  func_0x00010c163720(puVar1);
  _objc_release(param_5);
  func_0x00010c1d6280(puVar1);
  _objc_release(param_6);
  func_0x00010c1661e0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060de780; end: 1060de86b;  */

void FUN_1060de780(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7e88;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  func_0x00010c0b4ca0(param_2);
  _objc_release(param_2);
  func_0x00010c204900(puVar1);
  func_0x00010c20c240(puVar1);
  _objc_release(param_3);
  func_0x00010c207200(puVar1);
  _objc_release(param_4);
  func_0x00010c206ea0(puVar1);
  _objc_release(param_5);
  func_0x00010c1ff340(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060de86c; end: 1060de9e3;  */

void FUN_1060de86c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c7e90;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126c7e98;
  _objc_opt_new(PTR_PTR_1126c7e98);
  func_0x00010c217860();
  _objc_release(param_2);
  func_0x00010c223240(puVar2);
  _objc_release(param_3);
  func_0x00010c217740(puVar1);
  puVar3 = PTR_PTR_1126c7ea0;
  _objc_opt_new(PTR_PTR_1126c7ea0);
  func_0x00010c0b4ca0(param_4);
  _objc_release(param_4);
  func_0x00010c204900(puVar3);
  func_0x00010c20c240(puVar3);
  _objc_release(param_5);
  func_0x00010c217800(puVar1);
  func_0x00010c207200(puVar1);
  _objc_release(param_6);
  func_0x00010c206ea0(puVar1);
  _objc_release(param_7);
  func_0x00010c2177c0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28));
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060de9e4; end: 1060dec27; +[SCCommerceShowcaseTypeConverter logTypeStringFromProductSetQuery:] */

void FUN_1060de9e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1060ddfd4;
  uStack_40 = 0x1060ddfe4;
  ppuStack_38 = &PTR____CFConstantStringClassReference_110daafd8;
  func_0x00010c0bc680(param_3);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(ppuStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1060dec28; end: 1060ded77;  */

void FUN_1060dec28(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110e3ddb8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060ded78; end: 1060dee5f; +[SCCommerceShowcaseTypeConverter showcaseFilterContextFromProductFilter:] */

void FUN_1060ded78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1060ddfd4;
  uStack_30 = 0x1060ddfe4;
  puVar1 = PTR_PTR_1126c7ea8;
  _objc_opt_new();
  puStack_28 = puVar1;
  func_0x00010c0c0c60(param_3);
  uVar2 = puStack_48[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(puStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1060dee60; end: 1060dee73;  */

void FUN_1060dee60(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c212f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
             PTR_s_setText__1126625f0,param_2);
  return;
}



/* Entry: 1060dee74; end: 1060deffb; +[SCCommerceShowcaseTypeConverter productSetFromData:] */

void FUN_1060dee74(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126be2a0;
  func_0x00010c0f40e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf64c80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c084fe0();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1060def64;
  puStack_40 = &UNK_1108b19f8;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  puVar4 = puVar3;
  func_0x000100504554(puVar3,&puStack_58);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126be288;
  _objc_alloc(PTR_PTR_1126be288);
  func_0x00010c03a9c0();
  _objc_release(puVar4);
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060deffc; end: 1060df7db; +[SCCommerceShowcaseTypeConverter productInfoFromShowcaseItemMetadata:ctaAction:moduleTrackingId:] */

void FUN_1060deffc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uStack_1a8;
  undefined8 uStack_170;
  undefined8 uStack_138;
  undefined8 *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c116040();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf12520();
  if (((int)uVar2 != 1) && (uVar2 = uVar1, func_0x00010bf12520(), (int)uVar2 != 5)) {
    func_0x00010bf12520(uVar1);
  }
  uVar2 = uVar1;
  func_0x00010bfdb580();
  uVar3 = uVar1;
  if ((uVar2 & 1) == 0) {
    func_0x00010c112a80(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c149440(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar2 = uVar3;
  func_0x00010bfb6100();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_1;
  func_0x00010bde2320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar3);
  uVar2 = uVar1;
  func_0x00010bfdb580();
  if ((int)uVar2 == 0) {
    uVar17 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x00010c112a80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfb6100();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = param_1;
    func_0x00010bde2320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  puVar4 = PTR_PTR_1126be2f0;
  _objc_alloc();
  uVar2 = uVar1;
  func_0x00010bf9e140(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c2711a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c060640();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c099540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfa04a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c241860(param_3);
  uVar6 = param_1;
  func_0x00010bde2380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar7 = param_1;
  func_0x00010bde2300();
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x2020000000;
  uStack_90 = 0;
  puStack_e0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_1060ddfd4;
  uStack_b8 = 0x1060ddfe4;
  uStack_b0 = 0;
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_1060df7dc;
  puStack_f0 = &UNK_11090de90;
  puStack_d0 = puStack_e0;
  puStack_a0 = puStack_e8;
  func_0x00010c0be720();
  puVar8 = PTR_PTR_1126be308;
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c2573e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02d480();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bfd42e0();
  if ((int)uVar2 == 0) {
    uStack_1a8 = 0;
  }
  else {
    uStack_1a8 = param_1;
    _objc_opt_class();
    uVar2 = uVar1;
    func_0x00010bf09340(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde2360();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  uVar2 = uVar1;
  func_0x00010bfdc060();
  if ((int)uVar2 == 0) {
    uStack_170 = 0;
  }
  else {
    uStack_170 = param_1;
    _objc_opt_class();
    uVar2 = uVar1;
    func_0x00010c22cda0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c241860(param_3);
    func_0x00010bde23c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  uVar2 = param_3;
  func_0x00010c2573e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010bec3ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar10 = uVar9;
  if (*(char *)(puStack_a0 + 3) == '\x01') {
    uVar10 = puStack_d0[5];
    FUN_1060e2440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
  }
  uVar2 = uVar1;
  func_0x00010c0b6b00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_1;
  func_0x00010be702e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  func_0x00010be377c0();
  _objc_retainAutoreleasedReturnValue();
  puStack_130 = &uStack_138;
  uStack_138 = 0;
  uStack_128 = 0x3032000000;
  pcStack_120 = FUN_1060ddfd4;
  uStack_118 = 0x1060ddfe4;
  uStack_110 = 0;
  func_0x00010c0c01e0(uStack_170);
  puVar11 = PTR_PTR_1126b02b0;
  _objc_alloc(PTR_PTR_1126b02b0);
  puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c241860();
  func_0x00010c14de00(puVar12);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  func_0x00010bfe5e40(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2711a0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf6e6e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_88 = puVar4;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf416e0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar1;
  func_0x00010bf20e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03a740(puVar11);
  _objc_release(uVar15);
  _objc_release(uVar5);
  _objc_release(puVar14);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar13);
  _objc_release(puVar12);
  __Block_object_dispose(&uStack_138,8);
  _objc_release(uStack_110);
  _objc_release(param_1);
  _objc_release(uVar9);
  _objc_release(uVar10);
  _objc_release(uStack_170);
  _objc_release(uStack_1a8);
  _objc_release(puVar8);
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar4);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    __Block_object_dispose(&uStack_138,8);
    __Block_object_dispose(&uStack_d8,8);
    uVar17 = 8;
    __Block_object_dispose(&uStack_a8);
    __Unwind_Resume();
    _objc_retain(uVar17);
    *(undefined1 *)(*(long *)(*(long *)(param_3 + 0x20) + 8) + 0x18) = 1;
    lVar18 = *(long *)(*(long *)(param_3 + 0x28) + 8);
    uVar16 = *(undefined8 *)(lVar18 + 0x28);
    *(undefined8 *)(lVar18 + 0x28) = uVar17;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar16);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1060df7dc; end: 1060df85b;  */

void FUN_1060df7dc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1060df85c; end: 1060dfc2f; +[SCCommerceShowcaseTypeConverter pdpWidgetInfoFromItemPageWidget:] */

void FUN_1060df85c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  func_0x00010c2a4fc0();
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_1060ddfd4;
  uStack_70 = 0x1060ddfe4;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar3 = param_3;
  puStack_68 = puVar2;
  func_0x00010c2a4e80();
  puVar2 = PTR_PTR_1126c7eb0;
  puVar9 = (undefined *)0x0;
  iVar1 = (int)uVar3;
  uVar3 = param_3;
  uVar7 = param_3;
  if (iVar1 < 5) {
    if (iVar1 != 3) {
      if (iVar1 != 4) goto LAB_1060dfb8c;
      func_0x00010c22cba0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar3;
      func_0x00010c257800();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c22cba0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar7;
      func_0x00010c257a40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_3;
      func_0x00010c22cba0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bfe5400();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be702e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c22cbc0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(uVar6);
      _objc_release(uVar5);
      goto LAB_1060dfb04;
    }
    func_0x00010c084a00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c11d2a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c11d2a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c084a20(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    _objc_release(uVar7);
  }
  else {
    if (iVar1 == 5) {
      func_0x00010bf09440(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x00010c2810c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf980c0();
      _objc_release(uVar7);
      _objc_release(uVar3);
      puVar9 = PTR_PTR_1126c7eb0;
      func_0x00010bf09460(PTR_PTR_1126c7eb0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1060dfb8c;
    }
    if (iVar1 != 6) {
      if (iVar1 == 7) {
        puVar9 = PTR_PTR_1126c7eb0;
        func_0x00010bfb20c0(PTR_PTR_1126c7eb0);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_1060dfb8c;
    }
    func_0x00010c2978a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar3;
    func_0x00010c297520();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2978a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be70600(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2978c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_1;
LAB_1060dfb04:
    _objc_release(uVar4);
    _objc_release(uVar7);
    _objc_release(uVar8);
  }
  _objc_release(uVar3);
  puVar9 = puVar2;
LAB_1060dfb8c:
  puVar2 = PTR_PTR_1126c7eb8;
  _objc_alloc(PTR_PTR_1126c7eb8);
  uVar3 = param_3;
  func_0x00010bfa0660(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0630c0(puVar2);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(puStack_68);
  _objc_release(puVar9);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060dfc30; end: 1060dfc9f;  */

void FUN_1060dfc30(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1060dfca0; end: 1060dfe37; +[SCCommerceShowcaseTypeConverter storeMetadataFromShowcaseStoreMetadata:] */

void FUN_1060dfca0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf330c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1060dfe38;
  puStack_68 = &UNK_11090def0;
  uStack_60 = param_3;
  uStack_58 = param_1;
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x000100504554(uVar1,&puStack_80);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bfe5400(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be702e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b0868;
  _objc_alloc(PTR_PTR_1126b0868);
  uVar1 = param_3;
  func_0x00010c0d4f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bfe5ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d5800(param_3);
  uVar5 = param_3;
  func_0x00010c13fc00(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02db20(puVar3);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(uStack_60);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1060dfe38; end: 1060dfebb;  */

void FUN_1060dfe38(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  _objc_opt_class(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe5ea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec3e20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1060dfebc; end: 1060dff1b; +[SCCommerceShowcaseTypeConverter variantDimensionsFromVariantMetaData:] */

void FUN_1060dfebc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_1060dff64;
  puStack_20 = &UNK_11090df60;
  uStack_18 = param_1;
  func_0x00010050471c(param_3,&PTR___NSConcreteGlobalBlock_11090df40,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060dff1c; end: 1060dff63;  */

void FUN_1060dff1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c084d20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1060dff64; end: 1060dff6f;  */

void FUN_1060dff64(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be01a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__dimensionDataForVariantType__11255e028,param_2);
  return;
}



/* Entry: 1060dff70; end: 1060dff8f; +[SCCommerceShowcaseTypeConverter itemVariantsFromVariantMetadata:] */

void FUN_1060dff70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_11090dfa0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1060dff90; end: 1060e0093;  */

void FUN_1060dff90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c084d60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100817178();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010bf12520();
  if (((int)uVar1 != 1) && (uVar1 = param_2, func_0x00010bf12520(), (int)uVar1 != 5)) {
    func_0x00010bf12520(param_2);
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c241860();
  func_0x00010c14de00(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c7ec0;
  _objc_alloc(PTR_PTR_1126c7ec0);
  func_0x00010c060660();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1060e0094; end: 1060e009b;  */

void FUN_1060e0094(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7edf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_dimensionValue_1125bd520);
  return;
}



/* Entry: 1060e009c; end: 1060e0177; +[SCCommerceShowcaseTypeConverter _commerceCurrencyFromProductPrice:] */

void FUN_1060e009c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001060fa38c();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf5de60(param_3);
  uVar3 = uVar1;
  func_0x00010c26c080(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b05a0;
  _objc_alloc(PTR_PTR_1126b05a0);
  uVar1 = uVar3;
  func_0x00010c28ed80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf02460(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c006ee0(puVar4,param_2,uVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1060e0178; end: 1060e039f; +[SCCommerceShowcaseTypeConverter _commerceCTAFromProtoCTA:] */

void FUN_1060e0178(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010beeed20();
  puVar7 = PTR_PTR_1126be300;
  puVar4 = PTR__OBJC_CLASS___NSURL_1126ae598;
  iVar1 = (int)uVar2;
  uVar2 = param_3;
  if (iVar1 == 3) {
    func_0x00010c06aea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06afc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_3;
    func_0x00010c06aea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c06aee0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf68a00(puVar7,param_2,puVar4,uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    param_1 = puVar4;
  }
  else if (iVar1 == 2) {
    func_0x00010c0d57e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c2579e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c257a00(param_1,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d5820(puVar7,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (iVar1 != 1) {
      puVar7 = (undefined *)0x0;
      goto LAB_1060e037c;
    }
    uVar3 = param_3;
    func_0x00010c2a3a00();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf21840();
    _objc_release(uVar3);
    puVar7 = PTR_PTR_1126be300;
    param_1 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010c2a3a00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(param_1,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
    if ((int)uVar5 == 2) {
      func_0x00010bf9e700();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c0696a0(puVar7,param_2,param_1);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
LAB_1060e037c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1060e03a0; end: 1060e045f; +[SCCommerceShowcaseTypeConverter _storeCategoryFromShowcaseCategory:storeId:] */

void FUN_1060e03a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b09d8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010bfe5ea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0d4f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c01b3e0(puVar1,param_2,uVar2,param_4,uVar3,1,0);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060e0460; end: 1060e046b; +[SCCommerceShowcaseTypeConverter _mapFallbackBrowserTypeFrom:] */

bool FUN_1060e0460(undefined8 param_1,undefined8 param_2,int param_3)

{
  return param_3 == 2;
}



/* Entry: 1060e046c; end: 1060e0743; +[SCCommerceShowcaseTypeConverter _commerceProductLinkFromProtoLink:fallbackLink:productId:] */

void FUN_1060e046c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x00010c0997a0();
  iVar1 = (int)lVar2;
  if (iVar1 == 1) {
    puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
    lVar2 = param_3;
    func_0x00010c2a45c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820(puVar6,param_2,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar2);
    puVar7 = PTR_PTR_1126be2f8;
    func_0x00010c0696e0(PTR_PTR_1126be2f8,param_2,puVar6);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (iVar1 == 4) {
      puVar7 = PTR_PTR_1126be2f8;
      func_0x00010c0d5ba0(PTR_PTR_1126be2f8,param_2,param_5);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1060e0718;
    }
    if (iVar1 != 2) {
      puVar7 = (undefined *)0x0;
      goto LAB_1060e0718;
    }
    puVar3 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
    lVar2 = param_3;
    func_0x00010c06aea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c06afc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820(puVar3,param_2,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010c06aea0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c06aee0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = param_4;
    func_0x00010c0997a0();
    if ((int)lVar2 == 1) {
      puVar6 = PTR__OBJC_CLASS___NSURL_1126ae598;
      _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
      lVar2 = param_4;
      func_0x00010c2a45c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04e820(puVar6,param_2,lVar4);
      _objc_release(lVar4);
      _objc_release(lVar2);
      puVar8 = PTR_PTR_1126be250;
      lVar2 = param_4;
      func_0x00010c2a45c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bf21840();
      func_0x00010be5cb00(puVar8,param_2,lVar4);
      _objc_release(lVar2);
    }
    else {
      puVar6 = (undefined *)0x0;
      puVar8 = (undefined *)0x0;
    }
    lVar2 = param_4;
    func_0x00010c0997a0();
    lVar4 = lVar5;
    if (((int)lVar2 == 2) && (lVar2 = lVar5, func_0x00010c08fa60(), lVar2 == 0)) {
      lVar2 = param_4;
      func_0x00010c06aea0(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010c06aee0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(lVar2);
    }
    puVar7 = PTR_PTR_1126be2f8;
    func_0x00010bf9de80(PTR_PTR_1126be2f8,param_2,puVar3,puVar6,puVar8,lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(puVar3);
  }
  _objc_release(puVar6);
LAB_1060e0718:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1060e0744; end: 1060e103b; +[SCCommerceShowcaseTypeConverter _commerceProductARMetadataFromARMetadata:] */

void FUN_1060e0744(float param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  double dVar18;
  double dVar19;
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
  _objc_retain(param_4);
  puVar13 = param_4;
  func_0x00010bfe63e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar14 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar10 = (undefined *)0x0;
  if (puVar13 != (undefined *)0x0) {
    puVar13 = param_4;
    func_0x00010bfe63e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar14,param_3,puVar13);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
    puVar10 = puVar14;
  }
  puVar14 = param_4;
  func_0x00010bfd8ce0();
  if ((int)puVar14 == 0) {
LAB_1060e0894:
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar14 = param_4;
    func_0x00010c0b7b80();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar14;
    func_0x00010bfe6400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar14);
    puVar14 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (puVar13 == (undefined *)0x0) goto LAB_1060e0894;
    puVar13 = param_4;
    func_0x00010c0b7b80(param_4);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar13;
    func_0x00010bfe6400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc3460(puVar14,param_3,puVar17);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar17);
    _objc_release(puVar13);
    puVar13 = PTR_PTR_1126c7ec8;
    _objc_alloc();
    func_0x00010c01bee0();
    _objc_release(puVar14);
  }
  puVar14 = param_4;
  func_0x00010bfd77a0();
  if ((int)puVar14 == 0) {
    puVar14 = (undefined *)0x0;
    goto LAB_1060e0e00;
  }
  puVar14 = param_4;
  func_0x00010bfcce80();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar14;
  func_0x00010bfd77c0();
  if ((int)puVar17 == 0) {
    puVar17 = (undefined *)0x0;
LAB_1060e0a8c:
    _objc_release(puVar14);
  }
  else {
    puVar12 = param_4;
    func_0x00010bfcce80();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar12;
    func_0x00010bfccea0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar16;
    func_0x00010bdc2b80();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = (undefined *)0x0;
    if (puVar1 == (undefined *)0x0) {
LAB_1060e0a6c:
      _objc_release(puVar16);
      _objc_release(puVar12);
      goto LAB_1060e0a8c;
    }
    puVar17 = param_4;
    func_0x00010bfcce80();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar17;
    func_0x00010bfccea0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar9;
    func_0x00010bf38a80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar9);
    _objc_release(puVar17);
    _objc_release(puVar1);
    _objc_release(puVar16);
    _objc_release(puVar12);
    _objc_release(puVar14);
    puVar14 = PTR__OBJC_CLASS___NSURL_1126ae598;
    if (puVar2 != (undefined *)0x0) {
      puVar17 = param_4;
      func_0x00010bfcce80(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar17;
      func_0x00010bfccea0();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar12;
      func_0x00010bdc2b80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc3460(puVar14,param_3,puVar16);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar16);
      _objc_release(puVar12);
      _objc_release(puVar17);
      puVar17 = PTR_PTR_1126c7ed0;
      _objc_alloc();
      puVar12 = param_4;
      func_0x00010bfcce80(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar12;
      func_0x00010bfccea0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar16;
      func_0x00010bf38a80();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = param_4;
      func_0x00010bfcce80(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar9;
      func_0x00010bfccea0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c27cb00();
      func_0x00010c059f20(puVar17,param_3,puVar14,puVar1,puVar3);
      _objc_release(puVar2);
      _objc_release(puVar9);
      _objc_release(puVar1);
      goto LAB_1060e0a6c;
    }
    puVar17 = (undefined *)0x0;
  }
  puVar14 = param_4;
  func_0x00010bfcce80();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar14;
  func_0x00010bfdd960();
  _objc_release(puVar14);
  if ((int)puVar12 == 0) {
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar14 = param_4;
    func_0x00010bfcce80();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar14;
    func_0x00010c27a600();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar12;
    func_0x00010bfdb700();
    _objc_release(puVar12);
    _objc_release(puVar14);
    if ((int)puVar16 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar14 = PTR_PTR_1126c7ed8;
      _objc_alloc(PTR_PTR_1126c7ed8);
      puVar12 = param_4;
      func_0x00010bfcce80();
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar12;
      func_0x00010c27a600();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar16;
      func_0x00010c14e120();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2be880();
      dVar18 = (double)param_1;
      puVar9 = param_4;
      func_0x00010bfcce80(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar9;
      func_0x00010c27a600();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c14e120();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2beba0();
      dVar19 = (double)param_1;
      puVar4 = param_4;
      func_0x00010bfcce80(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c27a600();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c14e120();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bef20();
      func_0x00010c063640(dVar18,dVar19,(double)param_1,puVar14);
      param_1 = SUB84(dVar18,0);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar9);
      _objc_release(puVar1);
      _objc_release(puVar16);
      _objc_release(puVar12);
    }
    puVar12 = param_4;
    func_0x00010bfcce80();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar12;
    func_0x00010c27a600();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar16;
    func_0x00010bfdd980();
    _objc_release(puVar16);
    _objc_release(puVar12);
    if ((int)puVar1 == 0) {
      puVar16 = (undefined *)0x0;
    }
    else {
      puVar16 = PTR_PTR_1126c7ed8;
      _objc_alloc(PTR_PTR_1126c7ed8);
      puVar12 = param_4;
      func_0x00010bfcce80();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar12;
      func_0x00010c27a600();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar1;
      func_0x00010c27ada0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2be880();
      dVar18 = (double)param_1;
      puVar2 = param_4;
      func_0x00010bfcce80(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c27a600();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010c27ada0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2beba0();
      dVar19 = (double)param_1;
      puVar5 = param_4;
      func_0x00010bfcce80(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c27a600();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c27ada0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2bef20();
      func_0x00010c063640(dVar18,dVar19,(double)param_1,puVar16);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar9);
      _objc_release(puVar1);
      _objc_release(puVar12);
    }
    puVar12 = PTR_PTR_1126c7ee0;
    _objc_alloc(PTR_PTR_1126c7ee0);
    func_0x00010c0416e0();
    _objc_release(puVar16);
    _objc_release(puVar14);
  }
  puVar14 = PTR_PTR_1126c7ee8;
  _objc_alloc(PTR_PTR_1126c7ee8);
  func_0x00010c017d40();
  _objc_release(puVar12);
  _objc_release(puVar17);
LAB_1060e0e00:
  puVar17 = param_4;
  func_0x00010bfdb160();
  if ((int)puVar17 == 0) {
    puVar17 = (undefined *)0x0;
  }
  else {
    puVar12 = param_4;
    func_0x00010c1307c0();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    puVar17 = puVar12;
    func_0x00010c129e80();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar17;
    func_0x00010bf52a60();
    if (puVar1 != (undefined *)0x0) {
      lVar15 = *plStack_130;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_130 != lVar15) {
            _objc_enumerationMutation(puVar17);
          }
          uVar11 = *(undefined8 *)(lStack_138 + (long)puVar9 * 8);
          puVar2 = PTR_PTR_1126c7ef0;
          _objc_alloc(PTR_PTR_1126c7ef0);
          uVar8 = uVar11;
          func_0x00010bdc2b80(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf38a80(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c059f00(puVar2,param_3,uVar8,uVar11);
          _objc_release(uVar11);
          _objc_release(uVar8);
          func_0x00010befa120(puVar16,param_3,puVar2);
          _objc_release(puVar2);
          puVar9 = puVar9 + 1;
        } while (puVar1 != puVar9);
        puVar1 = puVar17;
        func_0x00010bf52a60(puVar17,param_3,&uStack_140,auStack_100,0x10);
      } while (puVar1 != (undefined *)0x0);
    }
    _objc_release(puVar17);
    puVar17 = PTR_PTR_1126c7ef8;
    _objc_alloc(PTR_PTR_1126c7ef8);
    puVar1 = puVar12;
    func_0x00010c085d00(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0209a0(puVar17,param_3,puVar1,puVar16);
    _objc_release(puVar1);
    _objc_release(puVar16);
    _objc_release(puVar12);
  }
  puVar12 = PTR_PTR_1126c7f00;
  _objc_alloc();
  puVar16 = puVar10;
  puVar1 = puVar13;
  func_0x00010c01bf00();
  _objc_release(puVar17);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar10);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_retain(puVar16);
    puVar14 = puVar16;
    func_0x00010bf0d0a0();
    puVar12 = PTR_PTR_1126c7f08;
    if ((int)puVar14 == 2) {
      func_0x00010c0ecf60(PTR_PTR_1126c7f08,param_3,puVar1);
      _objc_retainAutoreleasedReturnValue();
    }
    else if ((int)puVar14 == 1) {
      puVar14 = puVar16;
      func_0x00010bef4360(puVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24a200(puVar12,param_3,puVar14);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar14);
    }
    else {
      puVar12 = (undefined *)0x0;
    }
    _objc_release(puVar16);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1060e103c; end: 1060e10f3; +[SCCommerceShowcaseTypeConverter _commerceProductShoppingAttachmentFromShoppingAttachment:productId:] */

void FUN_1060e103c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf0d0a0();
  puVar2 = PTR_PTR_1126c7f08;
  if ((int)uVar1 == 2) {
    func_0x00010c0ecf60(PTR_PTR_1126c7f08,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else if ((int)uVar1 == 1) {
    uVar1 = param_3;
    func_0x00010bef4360(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24a200(puVar2,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060e10f4; end: 1060e11b3; +[SCCommerceShowcaseTypeConverter _parseIconUrlFromMediaInfo:] */

void FUN_1060e10f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x00010c0c5800();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c0c57e0();
  if (((int)uVar2 == 3) || (uVar2 = uVar1, func_0x00010c0c57e0(), (int)uVar2 == 4)) {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar2 = uVar1;
    func_0x00010c0c5340(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008340(puVar3,param_2,uVar2,4);
    _objc_release(uVar2);
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1060e11b4; end: 1060e12f7; +[SCCommerceShowcaseTypeConverter _storeDataModelFromShowcaseStoreMetadata:] */

void FUN_1060e11b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfe5400(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be702e0(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b02b8;
  _objc_alloc(PTR_PTR_1126b02b8);
  uVar3 = param_3;
  func_0x00010c0d4f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c13fc00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d5800();
  _objc_release(param_3);
  func_0x00010c01f9e0(puVar2,param_2,0,0,0,0,uVar3,param_1,uVar1,0,0,0,uVar4,0,0,0,0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1060e12f8; end: 1060e133f; +[SCCommerceShowcaseTypeConverter _parseVariantNames:] */

void FUN_1060e12f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010c084d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000100504554();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1060e1340; end: 1060e1347;  */

void FUN_1060e1340(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d4f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_name_112612df0);
  return;
}



/* Entry: 1060e1348; end: 1060e1477; +[SCCommerceShowcaseTypeConverter _dimensionDataForVariantType:] */

void FUN_1060e1348(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf7edc0();
  uVar3 = 0;
  iVar1 = (int)uVar2;
  uVar2 = param_3;
  if (iVar1 < 5) {
    if (iVar1 == 2) {
      func_0x00010befe820(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (iVar1 == 3) {
      func_0x00010bf414a0(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (iVar1 != 4) goto LAB_1060e145c;
      func_0x00010bfbebe0(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (iVar1 < 7) {
    if (iVar1 == 5) {
      func_0x00010c0c1c80(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (iVar1 != 6) goto LAB_1060e145c;
      func_0x00010c0f5ac0(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (iVar1 == 7) {
    func_0x00010c23d640(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (iVar1 != 8) goto LAB_1060e145c;
    func_0x00010bf62b20(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  uVar3 = uVar2;
  func_0x00010bf7ee00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
LAB_1060e145c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1060e1478; end: 1060e1687; +[SCCommerceShowcaseTypeConverter _imageURLsFromProductMetadata:] */

void FUN_1060e1478(undefined **param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  int param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *apuStack_e8 [16];
  long lStack_68;
  
  ppuVar5 = &puStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = param_3;
  _objc_retain(param_3);
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  ppuVar2 = param_3;
  func_0x00010c0b6b00();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c0c6c20();
  _objc_release(ppuVar2);
  if ((int)ppuVar3 == 0x11) {
    ppuVar2 = param_3;
    func_0x00010c0b6b00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = param_1;
    ppuVar8 = ppuVar2;
    func_0x00010be702e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar8 = ppuVar3;
      func_0x00010befa120(ppuVar1);
    }
    _objc_release(ppuVar3);
  }
  ppuVar2 = param_3;
  func_0x00010befd220();
  if (ppuVar2 != (undefined **)0x0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    puStack_130 = (undefined *)0x0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    ppuVar2 = param_3;
    func_0x00010befd200();
    _objc_retainAutoreleasedReturnValue();
    param_4 = apuStack_e8;
    param_5 = 0x10;
    ppuVar3 = ppuVar2;
    func_0x00010bf52a60();
    if (ppuVar3 != (undefined **)0x0) {
      lVar7 = *plStack_120;
      do {
        ppuVar8 = (undefined **)0x0;
        do {
          if (*plStack_120 != lVar7) {
            _objc_enumerationMutation(ppuVar2);
          }
          uVar6 = *(undefined8 *)(lStack_128 + (long)ppuVar8 * 8);
          uVar4 = uVar6;
          func_0x00010c0c6c20();
          if ((int)uVar4 == 0x11) {
            ppuVar5 = param_1;
            func_0x00010be702e0(param_1,param_2,uVar6);
            _objc_retainAutoreleasedReturnValue();
            if (ppuVar5 != (undefined **)0x0) {
              func_0x00010befa120(ppuVar1,param_2,ppuVar5);
            }
            _objc_release(ppuVar5);
          }
          ppuVar8 = (undefined **)((long)ppuVar8 + 1);
        } while (ppuVar3 != ppuVar8);
        param_4 = apuStack_e8;
        param_5 = 0x10;
        ppuVar3 = ppuVar2;
        ppuVar5 = &puStack_130;
        func_0x00010bf52a60();
      } while (ppuVar3 != (undefined **)0x0);
    }
    _objc_release(ppuVar2);
    ppuVar8 = ppuVar5;
  }
  ppuVar3 = ppuVar1;
  func_0x00010bf529e0();
  ppuVar2 = (undefined **)0x0;
  if (ppuVar3 != (undefined **)0x0) {
    ppuVar2 = ppuVar1;
  }
  _objc_retain(ppuVar2);
  _objc_release(ppuVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_retain(ppuVar8);
    if (param_4 == (undefined **)0x0) {
      ppuVar1 = ppuVar8;
      func_0x00010bf3ec40();
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = ppuVar1;
      func_0x00010c08fa60();
      _objc_release(ppuVar1);
      if (ppuVar2 == (undefined **)0x0) {
        if (param_5 == 0) {
          ppuVar2 = (undefined **)0x0;
        }
        else {
          _objc_retain(&PTR____CFConstantStringClassReference_110db1f18);
          ppuVar2 = &PTR____CFConstantStringClassReference_110db1f18;
        }
      }
      else {
        ppuVar2 = ppuVar8;
        func_0x00010bf3ec40(ppuVar8);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      func_0x00010c09e4e0(param_4);
      _objc_retainAutoreleasedReturnValue();
      ppuVar2 = param_4;
    }
    _objc_release(ppuVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1060e1688; end: 1060e173b; +[SCCommerceShowcaseTypeConverter metricsErrorStringFromResponsetError:gRPCError:emptyResponse:] */

void FUN_1060e1688(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  int param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_3);
  if (param_4 == (undefined **)0x0) {
    ppuVar1 = param_3;
    func_0x00010bf3ec40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010c08fa60();
    _objc_release(ppuVar1);
    if (ppuVar2 == (undefined **)0x0) {
      if (param_5 == 0) {
        param_4 = (undefined **)0x0;
      }
      else {
        param_4 = &PTR____CFConstantStringClassReference_110db1f18;
        _objc_retain(&PTR____CFConstantStringClassReference_110db1f18);
      }
    }
    else {
      param_4 = param_3;
      func_0x00010bf3ec40(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010c09e4e0(param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 1060e173c; end: 1060e17a3; +[FilterContext descriptor] */

void FUN_1060e173c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2e00 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac60b0,
                        &PTR____CFConstantStringClassReference_110e3ded8,&PTR_DAT_11313d9c0,
                        &PTR_s_text_11313d9d8,1,0x10,0x1c);
    puRam00000001136c2e00 = puVar1;
  }
  return;
}



/* Entry: 1060e17a4; end: 1060e182f; +[ShowcaseContext descriptor] */

undefined * FUN_1060e17a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2e08 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac6150,
                        &PTR____CFConstantStringClassReference_110e3def8,&PTR_DAT_11313da00,
                        &PTR_DAT_11313da18,0x10,0x88,0x1c);
    func_0x00010c229040();
    puRam00000001136c2e08 = puVar1;
  }
  return puRam00000001136c2e08;
}



/* Entry: 1060e1830; end: 1060e1897; +[ContextCardContext descriptor] */

void FUN_1060e1830(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2e10 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac61f0,
                        &PTR____CFConstantStringClassReference_110e3df18,&PTR_DAT_11313dc18,
                        &PTR_s_itemsArray_11313dc30,1,0x10,0x1c);
    puRam00000001136c2e10 = puVar1;
  }
  return;
}



/* Entry: 1060e1898; end: 1060e1913; +[ContextCardContext_Item descriptor] */

undefined * FUN_1060e1898(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2e18 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac6240,
                        &PTR____CFConstantStringClassReference_110dd6618,&PTR_DAT_11313dc18,
                        &PTR_s_snapItemId_11313dc50,2,0x18,0x1c);
    func_0x00010c228780();
    puRam00000001136c2e18 = puVar1;
  }
  return puRam00000001136c2e18;
}



/* Entry: 1060e1914; end: 1060e19f7; +[RecentlyViewedContext descriptor] */

void FUN_1060e1914(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2e20 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac62e0,
                        &PTR____CFConstantStringClassReference_110e3df38,&PTR_DAT_11313dc90,
                        &PTR_s_snapItemId_11313dca8,2,0x18,0x1c);
    puRam00000001136c2e20 = puVar1;
  }
  return;
}



/* Entry: 1060e19f8; end: 1060e1a03;  */

bool FUN_1060e19f8(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1060e1a04; end: 1060e1a7f;  */

undefined * FUN_1060e1a04(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c2e30 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e3df78,
                        &UNK_10ddd3d9c,&UNK_10ddd3dc0,3,FUN_1060e1a80,0);
    do {
      if (puRam00000001136c2e30 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c2e30;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c2e30,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c2e30 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c2e30;
}



/* Entry: 1060e1a80; end: 1060e1a8b;  */

bool FUN_1060e1a80(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 1060e1a8c; end: 1060e1af3; +[ShopkitContext descriptor] */

void FUN_1060e1a8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2e38 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac6380,
                        &PTR____CFConstantStringClassReference_110e3df98,&PTR_DAT_11313dce8,
                        &PTR_DAT_11313dd20,8,0x40,0x1c);
    puRam00000001136c2e38 = puVar1;
  }
  return;
}



/* Entry: 1060e1af4; end: 1060e1b5b; +[AssetInfo descriptor] */

void FUN_1060e1af4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2e40 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac63d0,
                        &PTR____CFConstantStringClassReference_110e3dfb8,&PTR_DAT_11313dce8,
                        &PTR_DAT_11313dd00,1,8,0x1c);
    puRam00000001136c2e40 = puVar1;
  }
  return;
}



/* Entry: 1060e1b5c; end: 1060e1c3f; +[ItemSetId descriptor] */

void FUN_1060e1b5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2e48 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac6470,
                        &PTR____CFConstantStringClassReference_110e3dfd8,&PTR_DAT_11313de20,
                        &PTR_DAT_11313de38,2,0x10,0x1c);
    puRam00000001136c2e48 = puVar1;
  }
  return;
}



/* Entry: 1060e1c40; end: 1060e1c4b;  */

bool FUN_1060e1c40(uint param_1)

{
  return param_1 < 0x11;
}



/* Entry: 1060e1c4c; end: 1060e1cb3; +[AresLensContext descriptor] */

void FUN_1060e1c4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001136c2e58 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112ac6560,
                        &PTR____CFConstantStringClassReference_110e3e018,&PTR_DAT_11313de78,
                        &PTR_DAT_11313de90,2,0x18,0x1c);
    puRam00000001136c2e58 = puVar1;
  }
  return;
}



/* Entry: 1060e1cb4; end: 1060e1e2b;  */

uint FUN_1060e1cb4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  
  _objc_retain();
  if (param_1 == 0) {
    uVar5 = 0;
    goto LAB_1060e1dd4;
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  lVar2 = param_1;
  func_0x00010bfe5ea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008340(puVar1,param_2,lVar2,4);
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar1);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (((ulong)puVar3 & 1) == 0) {
    lVar2 = param_1;
    func_0x00010c0d4f60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00(puVar4,param_2,lVar2);
    _objc_release(lVar2);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (((ulong)puVar4 & 1) != 0) goto LAB_1060e1dc0;
    lVar2 = param_1;
    func_0x00010bf8d6c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (((ulong)puVar3 & 1) != 0) goto LAB_1060e1dc0;
    lVar2 = param_1;
    func_0x00010c0faaa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00(puVar4,param_2,lVar2);
    _objc_release(lVar2);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (((ulong)puVar4 & 1) != 0) goto LAB_1060e1dc0;
    lVar2 = param_1;
    func_0x00010bfe5b40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00(puVar3,param_2,lVar2);
    _objc_release(lVar2);
    uVar5 = (uint)puVar3 ^ 1;
  }
  else {
LAB_1060e1dc0:
    uVar5 = 0;
  }
  _objc_release(puVar1);
LAB_1060e1dd4:
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 1060e1e2c; end: 1060e1f0b;  */

long FUN_1060e1e2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  _objc_retain();
  if (param_1 == 0) {
    lVar4 = 0;
    goto LAB_1060e1ef0;
  }
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  lVar4 = param_1;
  func_0x00010bf9e1a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008340(puVar1,param_2,lVar4,4);
  _objc_release(lVar4);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,puVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (((ulong)puVar2 & 1) == 0) {
    lVar4 = param_1;
    func_0x00010bfe8f00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078c00(puVar3,param_2,lVar4);
    _objc_release(lVar4);
    if (((ulong)puVar3 & 1) != 0) goto LAB_1060e1ecc;
    lVar4 = param_1;
    func_0x00010bfd7d80(param_1);
  }
  else {
LAB_1060e1ecc:
    lVar4 = 0;
  }
  _objc_release(puVar1);
LAB_1060e1ef0:
  _objc_release(param_1);
  return lVar4;
}



/* Entry: 1060e1f0c; end: 1060e243f;  */

void FUN_1060e1f0c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_1060e1cb4();
  if ((int)uVar1 == 0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    uVar1 = param_1;
    func_0x00010c257ae0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0fcb00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008340();
    _objc_release(uVar3);
    _objc_release(uVar1);
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    uVar1 = param_1;
    func_0x00010bfe5ea0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008340();
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010c2575e0();
    _objc_retainAutoreleasedReturnValue();
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x1060e2264;
    puStack_78 = &UNK_11090e040;
    puStack_70 = puVar4;
    _objc_retain(puVar4);
    uVar3 = uVar1;
    func_0x000100504554(uVar1,&puStack_90);
    _objc_release(uVar1);
    puVar16 = PTR_PTR_1126b02b8;
    _objc_alloc();
    func_0x00010c080ec0();
    func_0x00010c235720();
    uVar1 = param_1;
    func_0x00010bf8d6c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010c0faaa0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_1;
    func_0x00010c0d4f60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = param_1;
    func_0x00010bfe5b40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_1;
    func_0x00010c246820();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = param_1;
    func_0x00010c262fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_1;
    func_0x00010c257b00();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar10;
    func_0x00010c26b4a0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_1;
    func_0x00010c257b00();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010c13fc00();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_1;
    func_0x00010c23f840();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar14;
    func_0x00010c23f860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf87a40();
    func_0x00010c01f9e0(puVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_release(puStack_70);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
  return;
}



/* Entry: 1060e2440; end: 1060e2563;  */

void FUN_1060e2440(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126b02b8;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010c0d4f60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfe5be0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c257800();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010c13fc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078780();
  _objc_release(param_1);
  func_0x00010c01f9e0(puVar1,param_2,1,0,0,0,uVar2,uVar3,uVar4,0,0,0,uVar5,0,0,0,1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060e2564; end: 1060e25bb;  */

void FUN_1060e2564(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  FUN_1060e1e2c();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x00010bfe8f00(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1060e25bc; end: 1060e2967;  */

void FUN_1060e25bc(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined *puVar26;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  FUN_1060e1e2c();
  if ((int)uVar1 == 0) {
    puVar26 = (undefined *)0x0;
  }
  else {
    func_0x0001060f851c();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    uVar3 = param_2;
    func_0x00010bf9e1a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008340();
    _objc_release(uVar3);
    puVar26 = PTR_PTR_1126c7f18;
    _objc_alloc(PTR_PTR_1126c7f18);
    uVar3 = param_2;
    func_0x00010bfe8f00();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010bfe8180();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfe8180();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c26c080();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_2;
    func_0x00010bfe8180();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010bfe8180();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar1;
    func_0x00010c26c080();
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar9;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = param_2;
    func_0x00010bfe8180();
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar12;
    func_0x00010bfe8180();
    _objc_retainAutoreleasedReturnValue();
    uVar14 = uVar1;
    func_0x00010c26c080();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = uVar13;
    func_0x00010c0e00e0(uVar13);
    _objc_retainAutoreleasedReturnValue();
    uVar16 = param_2;
    func_0x00010bfe8180();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = uVar16;
    func_0x00010bfe8180();
    _objc_retainAutoreleasedReturnValue();
    uVar18 = uVar1;
    func_0x00010c26c080();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar17;
    func_0x00010c0e00e0(uVar17);
    _objc_retainAutoreleasedReturnValue();
    uVar20 = param_2;
    func_0x00010bfe8180();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar20;
    func_0x00010bfe8180();
    _objc_retainAutoreleasedReturnValue();
    uVar22 = uVar1;
    func_0x00010c26c080(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar23 = uVar21;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = param_2;
    func_0x00010c2a5040(param_2);
    uVar25 = param_2;
    func_0x00010bfe0640(param_2);
    func_0x00010c0112e0((double)(uVar24 & 0xffffffff),(double)(uVar25 & 0xffffffff),puVar26);
    _objc_release(uVar23);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar26);
  return;
}



/* Entry: 1060e2968; end: 1060e2b93;  */

void FUN_1060e2968(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    puVar11 = (undefined *)0x0;
    puVar12 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar11 = param_3;
    func_0x00010bf9e1a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008340(puVar1);
    _objc_release(puVar11);
    puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00();
    if (((((ulong)puVar11 & 1) == 0) &&
        (puVar11 = param_3, func_0x00010bfe0640(), (int)puVar11 != 0)) &&
       (puVar11 = param_3, func_0x00010c2a5040(), (int)puVar11 != 0)) {
      _objc_release(puVar1);
      _objc_release(param_3);
      puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      puVar12 = param_3;
      func_0x00010bf9e1a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008340(puVar11);
      _objc_release(puVar12);
      puVar12 = PTR_PTR_1126c7f20;
      _objc_alloc(PTR_PTR_1126c7f20);
      puVar2 = param_3;
      func_0x00010bfe0640(param_3);
      puVar3 = param_3;
      func_0x00010c2a5040(param_3);
      puVar1 = param_3;
      func_0x00010bf616c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010c2745c0();
      puVar5 = param_3;
      func_0x00010bf616c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x00010c2745e0();
      puVar7 = param_3;
      func_0x00010bf616c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bfb6ca0();
      puVar9 = param_3;
      func_0x00010bf616c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      func_0x00010bfb7240();
      func_0x00010bf61700(param_3);
      func_0x00010c011300((double)((ulong)puVar2 & 0xffffffff),(double)((ulong)puVar3 & 0xffffffff),
                          (double)((ulong)puVar4 & 0xffffffff),(double)((ulong)puVar6 & 0xffffffff),
                          (double)((ulong)puVar8 & 0xffffffff),(double)((ulong)puVar10 & 0xffffffff)
                          ,param_1,puVar12);
      _objc_release(puVar9);
      _objc_release(puVar7);
      _objc_release(puVar5);
    }
    else {
      puVar12 = (undefined *)0x0;
      puVar11 = param_3;
    }
    _objc_release(puVar1);
  }
  _objc_release(puVar11);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1060e2b94; end: 1060e2c57;  */

void FUN_1060e2b94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c297480(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008340(puVar1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126c7f30;
  _objc_alloc(PTR_PTR_1126c7f30);
  uVar2 = param_2;
  func_0x00010c2974a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c060600(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1060e2c58; end: 1060e2f67;  */

void FUN_1060e2c58(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  _objc_retain(param_2);
  _objc_retain(param_2);
  if (param_2 == (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar10 = param_2;
    func_0x00010bfe5ea0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008340(puVar1);
    _objc_release(puVar10);
    puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00();
    if ((((ulong)puVar10 & 1) == 0) && (puVar10 = param_2, func_0x00010bfda920(), (int)puVar10 != 0)
       ) {
      puVar10 = param_2;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar1);
      _objc_release(param_2);
      if (puVar10 == (undefined *)0x0) {
        puVar11 = (undefined *)0x0;
        goto LAB_1060e2f34;
      }
      puVar11 = param_2;
      func_0x00010c297460();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar11;
      func_0x00010050471c();
      _objc_release(puVar11);
      puVar11 = param_2;
      func_0x00010bfe80c0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar11;
      func_0x000100504554();
      _objc_release(puVar11);
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      puVar11 = param_2;
      func_0x00010bfe5ea0(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008340(puVar2);
      _objc_release(puVar11);
      puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc();
      puVar11 = param_2;
      func_0x00010c0fcb60(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008340();
      _objc_release(puVar11);
      puVar11 = PTR_PTR_1126be2f0;
      _objc_alloc();
      puVar4 = param_2;
      func_0x00010c2711a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_2;
      func_0x00010c112a80();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      FUN_1060e4c60();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_2;
      func_0x00010c25ccc0();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      FUN_1060e4c60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf125a0();
      func_0x00010c137b20();
      func_0x00010c26aa40();
      puVar9 = param_2;
      func_0x00010bfe9080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c060640(puVar11);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    else {
      puVar11 = (undefined *)0x0;
      puVar10 = param_2;
    }
    _objc_release(puVar1);
  }
  _objc_release(puVar10);
LAB_1060e2f34:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1060e2f68; end: 1060e2fe3;  */

void FUN_1060e2f68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c297480(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c008340(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060e2fe4; end: 1060e2feb;  */

void FUN_1060e2fe4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2974b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_variantCategoryValue_112683750);
  return;
}



/* Entry: 1060e2fec; end: 1060e3043;  */

void FUN_1060e2fec(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfe81a0();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x00010bfe8180(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1060e3044; end: 1060e3817;  */

void FUN_1060e3044(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_78;
  undefined *puStack_70;
  
  _objc_retain();
  _objc_retain(param_1);
  if (param_1 == (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar12 = param_1;
    func_0x00010bfe5ea0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008340(puVar1);
    _objc_release(puVar12);
    puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    puVar12 = param_1;
    func_0x00010c257800(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c008340(puVar11);
    _objc_release(puVar12);
    puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078c00();
    puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (((ulong)puVar13 & 1) == 0) {
      puVar13 = param_1;
      func_0x00010c2711a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078c00();
      _objc_release(puVar13);
      puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      if (((ulong)puVar12 & 1) != 0) goto LAB_1060e31f0;
      puVar12 = param_1;
      func_0x00010bf6e500(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c078c00();
      _objc_release(puVar12);
      if (((ulong)puVar13 & 1) != 0) goto LAB_1060e31f0;
      puVar12 = param_1;
      func_0x00010c257880();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      FUN_1060e1cb4();
      _objc_release(puVar12);
      if ((((int)puVar13 == 0) ||
          (puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0, func_0x00010c078c00(),
          ((ulong)puVar12 & 1) != 0)) ||
         (puVar12 = param_1, func_0x00010bfe7480(), puVar12 == (undefined *)0x0))
      goto LAB_1060e31f0;
      puVar12 = param_1;
      func_0x00010c27dd80();
      if ((int)puVar12 == 1) {
        puVar12 = param_1;
        func_0x00010bfd6100();
        _objc_release(puVar11);
        _objc_release(puVar1);
        _objc_release(param_1);
        if ((int)puVar12 == 0) {
          puVar13 = (undefined *)0x0;
          goto LAB_1060e321c;
        }
      }
      else {
        _objc_release(puVar11);
        _objc_release(puVar1);
        _objc_release(param_1);
      }
      puVar12 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      puVar13 = param_1;
      func_0x00010bfe5ea0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008340(puVar12);
      _objc_release(puVar13);
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      puVar13 = param_1;
      func_0x00010c257800(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008340(puVar1);
      _objc_release(puVar13);
      puVar13 = param_1;
      func_0x00010bfe7460();
      _objc_retainAutoreleasedReturnValue();
      if (puVar13 == (undefined *)0x0) {
        puVar11 = (undefined *)0x0;
      }
      else {
        puVar11 = puVar13;
        func_0x000100504554(puVar13,&PTR___NSConcreteGlobalBlock_11090e090);
      }
      _objc_release(puVar13);
      puVar13 = param_1;
      func_0x00010bfe7460();
      _objc_retainAutoreleasedReturnValue();
      if (puVar13 == (undefined *)0x0) {
        puVar15 = (undefined *)0x0;
      }
      else {
        puVar15 = puVar13;
        func_0x000100504554(puVar13,&PTR___NSConcreteGlobalBlock_11090e0d0);
      }
      _objc_release(puVar13);
      puVar13 = param_1;
      func_0x00010c27dd80();
      if ((int)puVar13 == 1) {
        puVar13 = param_1;
        func_0x00010bf61260();
        _objc_retainAutoreleasedReturnValue();
        _objc_retain();
        _objc_retain(puVar13);
        if (puVar13 == (undefined *)0x0) {
          puVar14 = (undefined *)0x0;
          puStack_70 = (undefined *)0x0;
LAB_1060e34f4:
          _objc_release(puVar14);
        }
        else {
          puVar14 = puVar13;
          func_0x00010c081240();
          if (((int)puVar14 != 0) &&
             (puVar14 = puVar13, func_0x00010bf41740(), puVar14 == (undefined *)0x0)) {
            puStack_70 = (undefined *)0x0;
            puVar14 = puVar13;
            goto LAB_1060e34f4;
          }
          puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          puVar2 = puVar13;
          func_0x00010bf6a460(puVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c078c00();
          _objc_release(puVar2);
          _objc_release(puVar13);
          if (((ulong)puVar14 & 1) == 0) {
            puVar2 = puVar13;
            func_0x00010bf1ba80();
            _objc_retainAutoreleasedReturnValue();
            if (puVar2 == (undefined *)0x0) {
              puVar14 = (undefined *)0x0;
            }
            else {
              puVar14 = puVar2;
              func_0x000100504554(puVar2,&PTR___NSConcreteGlobalBlock_11090e110);
            }
            _objc_release(puVar2);
            puStack_70 = PTR_PTR_1126c7f28;
            _objc_alloc();
            func_0x00010c081240();
            puVar2 = puVar13;
            func_0x00010bf416c0(puVar13);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar13;
            func_0x00010bf6a460(puVar13);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar13;
            func_0x00010bf68d80(puVar13);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar13;
            func_0x00010bf69720(puVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bff8180();
            _objc_release(puVar5);
            _objc_release(puVar4);
            _objc_release(puVar3);
            _objc_release(puVar2);
            goto LAB_1060e34f4;
          }
          puStack_70 = (undefined *)0x0;
        }
        _objc_release(puVar13);
        _objc_release(puVar13);
      }
      else {
        puStack_70 = (undefined *)0x0;
      }
      puVar13 = param_1;
      func_0x00010c297920();
      _objc_retainAutoreleasedReturnValue();
      if (puVar13 == (undefined *)0x0) {
        puStack_78 = (undefined *)0x0;
      }
      else {
        puStack_78 = puVar13;
        func_0x000100504554(puVar13,&PTR___NSConcreteGlobalBlock_11090e190);
      }
      _objc_release(puVar13);
      puVar13 = param_1;
      func_0x00010c116380();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar13;
      func_0x000100504554();
      _objc_release(puVar13);
      puVar13 = param_1;
      func_0x00010c116360();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar13 == (undefined *)0x0) {
        puStack_90 = (undefined *)0x0;
        puStack_88 = (undefined *)0x0;
      }
      else {
        puVar13 = PTR__OBJC_CLASS___NSURL_1126ae598;
        _objc_alloc(PTR__OBJC_CLASS___NSURL_1126ae598);
        puVar2 = param_1;
        func_0x00010c116360(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04e820(puVar13);
        _objc_release(puVar2);
        puStack_90 = PTR_PTR_1126be2f8;
        func_0x00010c0696e0();
        _objc_retainAutoreleasedReturnValue();
        puStack_88 = PTR_PTR_1126be300;
        func_0x00010c0696a0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar13);
      }
      puVar13 = PTR_PTR_1126b02b0;
      _objc_alloc(PTR_PTR_1126b02b0);
      puVar2 = param_1;
      func_0x00010c2711a0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010bf6e500();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar15;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bfe5740();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf425c0();
      func_0x00010bf38a00();
      func_0x00010c079ca0();
      puVar6 = PTR_PTR_1126be308;
      _objc_alloc();
      puVar7 = param_1;
      func_0x00010c257880();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010c0d4f60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02d480();
      puVar9 = param_1;
      func_0x00010c257880();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar9;
      FUN_1060e1f0c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c03a740(puVar13);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar6);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puStack_88);
      _objc_release(puStack_90);
      _objc_release(puVar14);
      _objc_release(puStack_78);
      _objc_release(puStack_70);
      _objc_release(puVar15);
    }
    else {
LAB_1060e31f0:
      puVar13 = (undefined *)0x0;
      puVar12 = param_1;
    }
    _objc_release(puVar11);
    _objc_release(puVar1);
  }
  _objc_release(puVar12);
LAB_1060e321c:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 1060e3818; end: 1060e390b;  */

void FUN_1060e3818(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c115e60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c2975a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf1bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar4 = uVar3;
  func_0x00010bf41a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1060e390c; end: 1060e3913;  */

void FUN_1060e390c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26de90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_thumbnailImageModel_1126791c8);
  return;
}



/* Entry: 1060e3914; end: 1060e3a07;  */

void FUN_1060e3914(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c115e60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c2975a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf1bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar4 = uVar3;
  func_0x00010bf41a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1060e3a08; end: 1060e3a0f;  */

void FUN_1060e3a08(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c297450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_variant_112683738);
  return;
}



/* Entry: 1060e3a10; end: 1060e3da3;  */

void FUN_1060e3a10(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain();
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010befd580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = (undefined *)0x0;
    if (lVar1 != 0) {
      puVar4 = PTR_PTR_1126c7f38;
      func_0x00010c0cb140(PTR_PTR_1126c7f38);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010befd680(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf64920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c165ca0(puVar4);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010befd580(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bfb18a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19d320(puVar4);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010befd580(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c089720();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1b8360(puVar4);
      _objc_release(lVar2);
      _objc_release(lVar1);
      func_0x00010c070480(param_1);
      func_0x00010c1b0580(puVar4);
      lVar1 = param_1;
      func_0x00010befd580(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c25cae0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20e6a0(puVar4);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010befd580(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c25cb00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20e6c0(puVar4);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010befd580(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bf39960();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17c640(puVar4);
      _objc_release(lVar2);
      _objc_release(lVar1);
      lVar1 = param_1;
      func_0x00010befd580(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c252440();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c209fc0(puVar4);
      _objc_release(lVar2);
      _objc_release(lVar1);
      func_0x0001060f7b24(puVar4,0xe9);
      lVar1 = param_1;
      func_0x00010befd580(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c105660();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2279e0(puVar4);
      _objc_release(lVar2);
      _objc_release(lVar1);
      puVar3 = PTR_PTR_1126b0458;
      _objc_alloc(PTR_PTR_1126b0458);
      lVar1 = param_1;
      func_0x00010c08a780(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c009500(puVar3);
      func_0x00010c21c920(puVar4);
      _objc_release(puVar3);
      _objc_release(lVar1);
      puVar3 = PTR_PTR_1126b0458;
      _objc_alloc(PTR_PTR_1126b0458);
      lVar1 = param_1;
      func_0x00010bf5a4a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c009500(puVar3);
      func_0x00010c1854c0(puVar4);
      _objc_release(puVar3);
      _objc_release(lVar1);
      puVar3 = PTR_PTR_1126b0458;
      _objc_alloc(PTR_PTR_1126b0458);
      lVar1 = param_1;
      func_0x00010c08a880(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c009500(puVar3);
      func_0x00010c1b8e60(puVar4);
      _objc_release(puVar3);
      _objc_release(lVar1);
      func_0x0001060f7b64(puVar4,2);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1060e3da4; end: 1060e3e27;  */

void FUN_1060e3da4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c7f48;
  _objc_retain();
  func_0x00010c0cb140(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf02460(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c19eca0(puVar1);
  _objc_release(uVar2);
  func_0x0001060f84dc(puVar1,0x95);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060e3e28; end: 1060e4213;  */

void FUN_1060e3e28(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  _objc_retain(param_2);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_2;
  func_0x00010bf1bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf41a00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078d80();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126c7f50;
  func_0x00010c0cb140(PTR_PTR_1126c7f50);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c115e60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3bc0(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c2975a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2204e0(puVar4);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c2711a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e3dc0(puVar4);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c11cf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067ec0();
  func_0x00010c1e62e0(puVar4);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c2807c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_1060e3da4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21b900(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c0993e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_1060e3da4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2181a0(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c25cd20(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_1060e3da4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e7a0(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c25cca0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_1060e3da4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e760(puVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c26aa40(param_2);
  func_0x00010c2129a0(puVar4);
  func_0x00010c137b20(param_2);
  func_0x00010c1ec640(puVar4);
  uVar7 = 1;
  if ((int)puVar3 == 0) {
    uVar7 = 2;
  }
  func_0x0001060f7e00(puVar4,uVar7);
  puVar5 = PTR_PTR_1126c7f58;
  func_0x00010c0cb140(PTR_PTR_1126c7f58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b5fe0();
  if ((int)puVar3 != 0) {
    puVar3 = PTR_PTR_1126c7f60;
    func_0x00010c0cb140(PTR_PTR_1126c7f60);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010bf1bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf1ad20();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c0d3c80();
    func_0x00010c16da80(puVar3);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = param_2;
    func_0x00010bf1bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf41a00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17ece0(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    func_0x00010c170660(puVar5);
    uVar1 = param_2;
    func_0x00010bf1bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf0b260();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bf64920();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c171380(puVar5);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(puVar3);
  }
  _objc_release(puVar4);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1060e4214; end: 1060e4543;  */

void FUN_1060e4214(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c7f68;
  func_0x00010c0cb140(PTR_PTR_1126c7f68);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf49cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126be408;
    func_0x00010c0cb140(PTR_PTR_1126be408);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010bf49cc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010bf8d6c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c194080(puVar3);
    _objc_release(lVar5);
    _objc_release(lVar2);
    lVar2 = param_1;
    func_0x00010bf49cc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c0faaa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1db060(puVar3);
    _objc_release(lVar5);
    _objc_release(lVar2);
    func_0x00010c181300(puVar1);
    _objc_release(puVar3);
  }
  lVar2 = param_1;
  func_0x00010bfe5ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar1);
  _objc_release(lVar5);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c257800(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20c240(puVar1);
  _objc_release(lVar5);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c275ea0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  FUN_1060e3da4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2186e0(puVar1);
  _objc_release(lVar5);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c22c980(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  FUN_1060e3a10();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ff680(puVar1);
  _objc_release(lVar5);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c159f80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ff720(puVar1);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c099320();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = lVar2;
    func_0x000100504554(lVar2,&PTR___NSConcreteGlobalBlock_11090e2d0);
  }
  lVar4 = lVar5;
  func_0x00010c0d3c80(lVar5);
  func_0x00010c1bdc60(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar5);
  _objc_release(lVar2);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  lVar2 = param_1;
  func_0x00010c0f6800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df760(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21e500(puVar1);
  _objc_release(puVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf81340(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18ee80(puVar1);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060e4544; end: 1060e4c5f;  */

void FUN_1060e4544(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
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
  _objc_retain();
  puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_1);
    lVar1 = param_1;
    func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_f0,0x10);
    if (lVar1 != 0) {
      lVar15 = *plStack_120;
      do {
        lVar12 = 0;
        do {
          if (*plStack_120 != lVar15) {
            _objc_enumerationMutation(param_1);
          }
          uVar13 = *(undefined8 *)(lStack_128 + lVar12 * 8);
          puVar2 = PTR_PTR_1126c7f70;
          func_0x00010c0cb140();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar13;
          func_0x00010bfe5ec0(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a99c0(puVar2,param_2,uVar3);
          _objc_release(uVar3);
          uVar3 = uVar13;
          func_0x00010bf31a80(uVar13);
          func_0x0001060e7130();
          func_0x00010c1797e0(puVar2,param_2,uVar3);
          uVar3 = uVar13;
          func_0x00010bf19f00();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR_PTR_1126c7f40;
          _objc_retain();
          func_0x00010c0cb140();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar3;
          func_0x00010bfb18a0(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c19d320(puVar4,param_2,uVar5);
          _objc_release(uVar5);
          uVar5 = uVar3;
          func_0x00010c089720(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1b8360(puVar4,param_2,uVar5);
          _objc_release(uVar5);
          uVar5 = uVar3;
          func_0x00010c25cae0(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c165cc0(puVar4,param_2,uVar5);
          _objc_release(uVar5);
          uVar5 = uVar3;
          func_0x00010c25cb00(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c165ce0(puVar4,param_2,uVar5);
          _objc_release(uVar5);
          uVar5 = uVar3;
          func_0x00010bf39960(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c17c640(puVar4,param_2,uVar5);
          _objc_release(uVar5);
          uVar5 = uVar3;
          func_0x00010c252440(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c209fc0(puVar4,param_2,uVar5);
          _objc_release(uVar5);
          uVar5 = uVar3;
          func_0x00010c105660(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1df560(puVar4,param_2,uVar5);
          _objc_release(uVar5);
          uVar5 = uVar3;
          func_0x00010bf53220();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
          func_0x00010c184960(puVar4,param_2,uVar5);
          _objc_release(uVar5);
          func_0x00010c1701c0(puVar2,param_2,puVar4);
          _objc_release(puVar4);
          _objc_release(uVar3);
          uVar3 = uVar13;
          func_0x00010bf9cbe0(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c198be0(puVar2,param_2,uVar3);
          _objc_release(uVar3);
          uVar3 = uVar13;
          func_0x00010bf9cc20();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c198ca0(puVar2,param_2,uVar3);
          _objc_release(uVar3);
          func_0x00010c088be0(uVar13);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1b7680(puVar2,param_2,uVar13);
          _objc_release(uVar13);
          puVar4 = PTR_PTR_1126c7f78;
          func_0x00010c0cb140();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1860a0();
          func_0x00010befa120(puVar14,param_2,puVar4);
          _objc_release(puVar4);
          _objc_release(puVar2);
          lVar12 = lVar12 + 1;
        } while (lVar1 != lVar12);
        lVar1 = param_1;
        func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_f0,0x10);
      } while (lVar1 != 0);
    }
    _objc_release(param_1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain();
    puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar1 = param_1;
    func_0x00010bfb18a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c078d80(puVar14,param_2,lVar1);
    _objc_release(lVar1);
    if ((int)puVar14 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar14 = PTR_PTR_1126b05b0;
      _objc_alloc();
      lVar1 = param_1;
      func_0x0001060e4ae4();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
      lVar15 = param_1;
      func_0x00010befd680();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008340(puVar4,param_2,lVar15,4);
      lVar12 = param_1;
      func_0x00010c070480(param_1);
      lVar6 = param_1;
      func_0x00010c08a8a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = param_1;
      func_0x00010c28d1e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_1;
      func_0x00010bf5a4a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010bf64de0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff25e0(puVar14,param_2,lVar1,puVar4,lVar12,lVar7,lVar9,lVar11);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(puVar4);
      _objc_release(lVar15);
      _objc_release(lVar1);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 1060e4c60; end: 1060e4d77;  */

void FUN_1060e4c60(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  func_0x00010bfb5fc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar4,param_2,uVar1);
  _objc_release(uVar1);
  if (((ulong)puVar4 & 1) == 0) {
    func_0x0001060fa38c();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bf5de60(param_1);
    uVar3 = uVar1;
    func_0x00010c26c080(uVar1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar4 = PTR_PTR_1126b05a0;
    _objc_alloc(PTR_PTR_1126b05a0);
    uVar1 = uVar3;
    func_0x00010c28ed80(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bfb5fc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c006ee0(puVar4,param_2,uVar1,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar3);
  }
  else {
    puVar4 = (undefined *)0x0;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1060e4d78; end: 1060e4e47;  */

void FUN_1060e4d78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_1;
  func_0x00010bf8d6c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078d80(puVar3,param_2,uVar1);
  _objc_release(uVar1);
  if ((int)puVar3 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b05a8;
    _objc_alloc(PTR_PTR_1126b05a8);
    uVar1 = param_1;
    func_0x00010bf8d6c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010c0faaa0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00f3a0(puVar3,param_2,uVar1,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1060e4e48; end: 1060e5db7;  */

void FUN_1060e4e48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  puVar1 = PTR_PTR_1126b05c8;
  _objc_retain(param_2);
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_2;
  func_0x00010c0846a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c115e60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008340(puVar2);
  uVar5 = param_2;
  func_0x00010c0846a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c2975a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010c297560();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010c0846a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c11cf60();
  uVar9 = param_2;
  func_0x00010c0846a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar9;
  func_0x00010c1162e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_2;
  func_0x00010c0846a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c276280();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  FUN_1060e4c60();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_2;
  func_0x00010c0846a0();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010c25cca0();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  FUN_1060e4c60();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_2;
  func_0x00010c115f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bff7760();
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1060e5db8; end: 1060e6477;  */

void FUN_1060e5db8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined **ppuVar27;
  undefined **ppuVar28;
  undefined **ppuVar29;
  undefined **ppuVar30;
  undefined **ppuVar31;
  undefined **ppuVar32;
  undefined **ppuVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lStack_220;
  undefined *puStack_1c8;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c275ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf5de60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar3 = param_1;
  func_0x00010c26aa20();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar38 = 0;
    lVar11 = lVar2;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(lVar3);
      }
      lVar35 = *(long *)(lVar38 * 8);
      lVar4 = lVar35;
      func_0x00010c112a80();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar4;
      func_0x00010bfb5fc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      _objc_release(lVar2);
      _objc_release();
      func_0x0001060fa38c();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c112a80(lVar35);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5de60();
      lVar2 = lVar4;
      func_0x00010c26c080();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar11);
      _objc_release(lVar35);
      _objc_release(lVar4);
      lVar38 = lVar38 + 1;
      lVar11 = lVar2;
    } while (lVar1 != lVar38);
    lVar1 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b05a0;
  _objc_alloc();
  lVar1 = lVar2;
  func_0x00010c28ed80(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006ee0();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c22ca60();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar1;
  func_0x000100504554();
  _objc_release(lVar1);
  puVar8 = PTR_PTR_1126b0578;
  _objc_alloc();
  puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc();
  lVar1 = param_1;
  func_0x00010bfe5ea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008340();
  puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc();
  lVar3 = param_1;
  func_0x00010c257800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c008340();
  lVar38 = param_1;
  func_0x00010c2a3b80();
  _objc_retainAutoreleasedReturnValue();
  if (lVar38 == 0) {
    puStack_1c8 = (undefined *)0x0;
  }
  else {
    puStack_1c8 = PTR__OBJC_CLASS___NSURL_1126ae598;
    _objc_alloc();
    lStack_220 = param_1;
    func_0x00010c2a3b80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e820();
  }
  lVar11 = param_1;
  func_0x00010c276980();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar11;
  FUN_1060e4c60();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1;
  func_0x00010c099340();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    lVar34 = 0;
    lVar36 = 0;
  }
  else {
    lVar36 = param_2;
    func_0x00010c099320();
    _objc_retainAutoreleasedReturnValue();
    lVar34 = lVar36;
    func_0x00010050471c();
    _objc_release(lVar36);
    lVar12 = param_2;
    func_0x00010c099320();
    _objc_retainAutoreleasedReturnValue();
    lVar36 = lVar12;
    func_0x00010050471c();
    _objc_release(lVar12);
  }
  _objc_retain(lVar34);
  _objc_retain(lVar36);
  puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_128 = 0xc2000000;
  uStack_120 = 0x1060e5858;
  puStack_118 = &UNK_11090e350;
  lStack_110 = lVar34;
  lStack_108 = lVar36;
  _objc_retain(lVar36);
  _objc_retain(lVar34);
  ppuVar33 = &puStack_130;
  lVar12 = lVar35;
  func_0x000100504554();
  _objc_release(lStack_108);
  _objc_release(lStack_110);
  _objc_release(lVar36);
  _objc_release(lVar34);
  lVar13 = param_1;
  func_0x00010bf49cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  FUN_1060e4d78();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x00010c22c980();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x0001060e4910();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_2;
  func_0x00010c0f6800();
  _objc_retainAutoreleasedReturnValue();
  puVar19 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar18 = param_1;
  func_0x00010bf81340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00();
  if (((ulong)puVar19 & 1) == 0) {
    lVar37 = param_1;
    func_0x00010bf81340();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar37 = 0;
  }
  lVar20 = param_1;
  func_0x00010bf81360();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010bf02460();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  FUN_1060e4c60();
  _objc_retainAutoreleasedReturnValue();
  lVar23 = param_1;
  func_0x00010c22ca80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01ba20();
  _objc_release(lVar23);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  if (((ulong)puVar19 & 1) == 0) {
    _objc_release(lVar37);
  }
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar36);
  _objc_release(lVar34);
  _objc_release(lVar35);
  _objc_release(lVar4);
  _objc_release(lVar11);
  if (lVar38 != 0) {
    _objc_release(puStack_1c8);
    _objc_release(lStack_220);
  }
  _objc_release(lVar38);
  _objc_release(puVar10);
  _objc_release(lVar3);
  _objc_release(puVar9);
  _objc_release(lVar1);
  _objc_release(lVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar2);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    _objc_retain(ppuVar33);
    ppuVar24 = ppuVar33;
    func_0x00010c112a80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar25 = ppuVar24;
    FUN_1060e4c60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar24);
    puVar8 = PTR_PTR_1126b05b8;
    _objc_alloc();
    ppuVar24 = ppuVar33;
    func_0x00010bfcff40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar26 = ppuVar33;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b05a0;
    _objc_alloc();
    ppuVar27 = ppuVar25;
    func_0x00010bf5de60();
    _objc_retainAutoreleasedReturnValue();
    ppuVar28 = ppuVar33;
    func_0x00010c276e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c006ee0();
    puVar6 = PTR_PTR_1126b05a0;
    _objc_alloc(PTR_PTR_1126b05a0);
    ppuVar29 = ppuVar25;
    func_0x00010bf5de60(ppuVar25);
    _objc_retainAutoreleasedReturnValue();
    ppuVar30 = ppuVar33;
    func_0x00010c261380(ppuVar33);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c006ee0(puVar6);
    puVar9 = PTR_PTR_1126b05a0;
    _objc_alloc(PTR_PTR_1126b05a0);
    ppuVar31 = ppuVar25;
    func_0x00010bf5de60(ppuVar25);
    _objc_retainAutoreleasedReturnValue();
    ppuVar32 = ppuVar33;
    func_0x00010c276980(ppuVar33);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar33);
    func_0x00010c006ee0(puVar9);
    func_0x00010c01b8a0();
    _objc_release(puVar9);
    _objc_release(ppuVar32);
    _objc_release(ppuVar31);
    _objc_release(puVar6);
    _objc_release(ppuVar30);
    _objc_release(ppuVar29);
    _objc_release(puVar5);
    _objc_release(ppuVar28);
    _objc_release(ppuVar27);
    _objc_release(ppuVar26);
    _objc_release(ppuVar24);
    _objc_release(ppuVar25);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1060e6478; end: 1060e6adb;  */

void FUN_1060e6478(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c112a80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_1060e4c60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126b05b8;
  _objc_alloc();
  uVar1 = param_2;
  func_0x00010bfcff40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b05a0;
  _objc_alloc();
  uVar6 = uVar2;
  func_0x00010bf5de60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010c276e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006ee0();
  puVar8 = PTR_PTR_1126b05a0;
  _objc_alloc(PTR_PTR_1126b05a0);
  uVar9 = uVar2;
  func_0x00010bf5de60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_2;
  func_0x00010c261380(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006ee0(puVar8);
  puVar11 = PTR_PTR_1126b05a0;
  _objc_alloc(PTR_PTR_1126b05a0);
  uVar12 = uVar2;
  func_0x00010bf5de60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = param_2;
  func_0x00010c276980(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c006ee0(puVar11);
  func_0x00010c01b8a0();
  _objc_release(puVar11);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(puVar8);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(puVar5);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1060e6adc; end: 1060e6aff;  */

undefined8 FUN_1060e6adc(int param_1)

{
  if (param_1 - 1U < 8) {
    return *(undefined8 *)(&UNK_10ddd3f38 + (ulong)(param_1 - 1U) * 8);
  }
  return 0;
}



/* Entry: 1060e6b00; end: 1060e6b83;  */

undefined * FUN_1060e6b00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b06c0;
  func_0x00010bf320a0(PTR_PTR_1126b06c0,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x0001060e6b48();
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 1060e6b84; end: 1060e6f27;  */

undefined8 FUN_1060e6b84(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b0750;
  func_0x00010bdc0f60(PTR_PTR_1126b0750);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c071ae0(param_1,param_2,puVar2);
  if ((uVar3 & 1) == 0) {
    uVar3 = param_1;
    func_0x00010c071ae0(param_1,param_2,&PTR____CFConstantStringClassReference_110e3e098);
    _objc_release(puVar2);
    _objc_release(puVar1);
    if ((uVar3 & 1) == 0) {
      puVar1 = PTR_PTR_1126b0750;
      func_0x00010bdc0e80(PTR_PTR_1126b0750);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010c28ed80();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010c071ae0(param_1,param_2,puVar2);
      if (((uVar3 & 1) == 0) &&
         (uVar3 = param_1,
         func_0x00010c071ae0(param_1,param_2,&PTR____CFConstantStringClassReference_110e3e0f8),
         (uVar3 & 1) == 0)) {
        uVar3 = param_1;
        func_0x00010c071ae0(param_1,param_2,&PTR____CFConstantStringClassReference_110e3e0d8);
        _objc_release(puVar2);
        _objc_release(puVar1);
        if ((uVar3 & 1) == 0) {
          puVar1 = PTR_PTR_1126b0750;
          func_0x00010bdc0ee0(PTR_PTR_1126b0750);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          func_0x00010c28ed80();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = param_1;
          func_0x00010c071ae0(param_1,param_2,puVar2);
          if ((uVar3 & 1) == 0) {
            uVar3 = param_1;
            func_0x00010c071ae0(param_1,param_2,&PTR____CFConstantStringClassReference_110e3e078);
            _objc_release(puVar2);
            _objc_release(puVar1);
            if ((uVar3 & 1) == 0) {
              puVar1 = PTR_PTR_1126b0750;
              func_0x00010bdc0f20(PTR_PTR_1126b0750);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = puVar1;
              func_0x00010c28ed80();
              _objc_retainAutoreleasedReturnValue();
              uVar3 = param_1;
              func_0x00010c071ae0(param_1,param_2,puVar2);
              if ((uVar3 & 1) == 0) {
                uVar3 = param_1;
                func_0x00010c071ae0(param_1,param_2,&PTR____CFConstantStringClassReference_110e3e098
                                   );
                _objc_release(puVar2);
                _objc_release(puVar1);
                if ((uVar3 & 1) == 0) {
                  puVar1 = PTR_PTR_1126b0750;
                  func_0x00010bdc0f00(PTR_PTR_1126b0750);
                  _objc_retainAutoreleasedReturnValue();
                  puVar2 = puVar1;
                  func_0x00010c28ed80();
                  _objc_retainAutoreleasedReturnValue();
                  uVar3 = param_1;
                  func_0x00010c071ae0(param_1,param_2,puVar2);
                  if ((uVar3 & 1) == 0) {
                    uVar3 = param_1;
                    func_0x00010c071ae0(param_1,param_2,
                                        &PTR____CFConstantStringClassReference_110e3e0b8);
                    _objc_release(puVar2);
                    _objc_release(puVar1);
                    if ((uVar3 & 1) == 0) {
                      puVar1 = PTR_PTR_1126b0750;
                      func_0x00010bdc0ec0(PTR_PTR_1126b0750);
                      _objc_retainAutoreleasedReturnValue();
                      puVar2 = puVar1;
                      func_0x00010c28ed80();
                      _objc_retainAutoreleasedReturnValue();
                      uVar3 = param_1;
                      func_0x00010c071ae0(param_1,param_2,puVar2);
                      if ((uVar3 & 1) == 0) {
                        uVar3 = param_1;
                        func_0x00010c071ae0(param_1,param_2,
                                            &PTR____CFConstantStringClassReference_110e1cc58);
                        _objc_release(puVar2);
                        _objc_release(puVar1);
                        if ((uVar3 & 1) == 0) {
                          puVar1 = PTR_PTR_1126b0750;
                          func_0x00010bdc0ea0(PTR_PTR_1126b0750);
                          _objc_retainAutoreleasedReturnValue();
                          puVar2 = puVar1;
                          func_0x00010c28ed80();
                          _objc_retainAutoreleasedReturnValue();
                          uVar3 = param_1;
                          func_0x00010c071ae0(param_1,param_2,puVar2);
                          if ((uVar3 & 1) == 0) {
                            uVar3 = param_1;
                            func_0x00010c071ae0(param_1,param_2,
                                                &PTR____CFConstantStringClassReference_110e3e058);
                            _objc_release(puVar2);
                            _objc_release(puVar1);
                            uVar4 = 7;
                            if ((int)uVar3 == 0) {
                              uVar4 = 0;
                            }
                          }
                          else {
                            _objc_release(puVar2);
                            _objc_release(puVar1);
                            uVar4 = 7;
                          }
                          goto LAB_1060e6c80;
                        }
                      }
                      else {
                        _objc_release(puVar2);
                        _objc_release(puVar1);
                      }
                      uVar4 = 2;
                      goto LAB_1060e6c80;
                    }
                  }
                  else {
                    _objc_release(puVar2);
                    _objc_release(puVar1);
                  }
                  uVar4 = 6;
                  goto LAB_1060e6c80;
                }
              }
              else {
                _objc_release(puVar2);
                _objc_release(puVar1);
              }
              uVar4 = 4;
              goto LAB_1060e6c80;
            }
          }
          else {
            _objc_release(puVar2);
            _objc_release(puVar1);
          }
          uVar4 = 5;
          goto LAB_1060e6c80;
        }
      }
      else {
        _objc_release(puVar2);
        _objc_release(puVar1);
      }
      uVar4 = 1;
      goto LAB_1060e6c80;
    }
  }
  else {
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  uVar4 = 3;
LAB_1060e6c80:
  _objc_release(param_1);
  return uVar4;
}



/* Entry: 1060e6f28; end: 1060e708f;  */

void FUN_1060e6f28(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_PTR_1126b06c0;
  puVar3 = (undefined *)0x0;
  puVar1 = PTR_PTR_1126b0750;
  if (param_1 < 4) {
    if (param_1 == 1) {
      func_0x00010bdc0e80(PTR_PTR_1126b0750);
      _objc_retainAutoreleasedReturnValue();
    }
    else if (param_1 == 2) {
      func_0x00010bdc0ec0(PTR_PTR_1126b0750);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (param_1 != 3) goto LAB_1060e7080;
      func_0x00010bdc0f60(PTR_PTR_1126b0750);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_1 < 6) {
    if (param_1 == 4) {
      func_0x00010bdc0f20(PTR_PTR_1126b0750);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      if (param_1 != 5) goto LAB_1060e7080;
      func_0x00010bdc0ee0(PTR_PTR_1126b0750);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else if (param_1 == 6) {
    func_0x00010bdc0f00(PTR_PTR_1126b0750);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_1 != 7) goto LAB_1060e7080;
    func_0x00010bdc0ea0(PTR_PTR_1126b0750);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bf32080(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = puVar2;
LAB_1060e7080:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1060e7090; end: 1060e7153;  */

undefined8 FUN_1060e7090(int param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 < 4) {
    if (param_1 < 1) {
      if ((param_1 != -0x4524111) && (param_1 != 0)) {
        return 1;
      }
      return 0;
    }
    uVar3 = 8;
    uVar1 = 2;
    if (param_1 != 3) {
      uVar1 = 1;
    }
    uVar4 = 7;
    if (param_1 != 2) {
      uVar4 = uVar1;
    }
    bVar2 = param_1 == 1;
  }
  else {
    if (5 < param_1) {
      if (param_1 == 6) {
        return 4;
      }
      if (param_1 == 7) {
        return 0;
      }
      uVar4 = 3;
      if (param_1 != 8) {
        uVar4 = 1;
      }
      return uVar4;
    }
    uVar3 = 5;
    uVar4 = 6;
    if (param_1 != 5) {
      uVar4 = 1;
    }
    bVar2 = param_1 == 4;
  }
  if (!bVar2) {
    uVar3 = uVar4;
  }
  return uVar3;
}



/* Entry: 1060e7154; end: 1060e71cf;  */

undefined * FUN_1060e7154(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam00000001136c2e60 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110e3e118,
                        &UNK_10ddd3f98,&UNK_10ddd3ff8,6,FUN_1060e71d0,0);
    do {
      if (puRam00000001136c2e60 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam00000001136c2e60;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x1136c2e60,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam00000001136c2e60 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam00000001136c2e60;
}


