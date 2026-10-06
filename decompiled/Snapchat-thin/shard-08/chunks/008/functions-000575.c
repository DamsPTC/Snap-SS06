/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1066efdbc; end: 1066f0047; -[SCMixerBaseQueryCoordinator resultsForQuery:updatingBlock:] */

void FUN_1066efdbc(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  ulong uStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bf2d060();
  if ((uVar1 & 1) == 0) {
    uVar6 = param_3;
    func_0x00010c11d680();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    func_0x00010c11daa0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cd100;
    func_0x00010c0e8e20(PTR_PTR_1126cd100);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c0720c0();
    _objc_release(puVar3);
    _objc_release(uVar5);
    _objc_release(uVar6);
    if ((int)uVar4 == 0) goto LAB_1066f0000;
    uVar1 = param_1;
    func_0x00010bf5fc60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if ((param_4 == 0) || (uVar1 == 0)) {
      _objc_initWeak(auStack_88,param_1);
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      _objc_copyWeak(auStack_90,auStack_88);
      _objc_retain(param_3);
      _objc_retain(param_4);
      func_0x00010c0f88c0(uVar6);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_90);
      _objc_destroyWeak(auStack_88);
      goto LAB_1066f0000;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1066f0048;
    puStack_68 = &UNK_11084aaa8;
    uStack_60 = param_1;
    _objc_retain(param_4);
    lStack_58 = param_4;
    func_0x00010c0f88c0(uVar6);
    lVar2 = lStack_58;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    uVar6 = param_3;
    func_0x00010bf51e00(param_3);
    func_0x00010beef7a0(uVar5);
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010c0f88c0(uVar6);
    _objc_release(param_3);
    lVar2 = param_4;
  }
  _objc_release(lVar2);
LAB_1066f0000:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066f0048; end: 1066f0053;  */

void FUN_1066f0048(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc7cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__addPendingUpdatingBlock__11254f8d0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1066f0054; end: 1066f00eb;  */

void FUN_1066f0054(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010be85460(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + 0x28);
    if (lVar4 != 0) {
      puVar3 = PTR_PTR_1126af5d0;
      func_0x00010c2619e0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))(lVar4,puVar3);
      _objc_release(puVar3);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1066f00ec; end: 1066f0117;  */

void FUN_1066f00ec(long param_1,undefined8 param_2)

{
  func_0x00010bdc7cc0(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010be9f8d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__sendMixerQuery__1125857d8,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1066f0118; end: 1066f02cf; -[SCMixerBaseQueryCoordinator _sendMixerQuery:] */

undefined * FUN_1066f0118(undefined *param_1,undefined8 param_2,undefined *param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined **unaff_x26;
  undefined1 auStack_1a0 [8];
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined1 auStack_170 [8];
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = param_1;
  func_0x00010bdf0220();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar13 = param_3;
  if (puVar2 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    puVar4 = puVar5;
    func_0x00010be2c560(param_1);
    _objc_release(param_3);
  }
  else {
    puVar5 = param_3;
    func_0x00010c11d680();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar5;
    func_0x00010c11daa0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126cd100;
    func_0x00010c151d20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0720c0();
    _objc_release(puVar3);
    _objc_release(puVar4);
    _objc_release(puVar5);
    func_0x00010c251660(puVar2);
    puVar4 = puVar2;
    func_0x00010be66640(param_1);
    puVar5 = param_3;
  }
  _objc_release(puVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return puVar2;
  }
  ___stack_chk_fail();
  lStack_f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar4);
  _objc_retain(puVar13);
  _objc_initWeak(auStack_108,puVar2);
  puVar5 = PTR_PTR_1126cd1f8;
  func_0x00010be3e620();
  func_0x00010be24860(puVar2);
  if ((int)puVar5 == 0) {
    puVar5 = puVar4;
    func_0x00010c0cae00(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = auStack_1a0;
    puVar12 = auStack_108;
    _objc_copyWeak(puVar15,puVar12);
    _objc_retain(puVar13);
    puVar3 = puVar2;
    func_0x00010c25ff60(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar5);
    puVar5 = puVar13;
  }
  else {
    iVar1 = (int)*(undefined8 *)(puVar2 + 0x30);
    func_0x00010c11b780();
    unaff_x26 = (undefined **)PTR_PTR_1126ae6b8;
    if (iVar1 == 0) {
      puVar5 = puVar4;
      func_0x00010bfa46a0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar4;
      puStack_100 = puVar5;
      func_0x00010c0cae00();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_f8 = puVar2;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf41860(unaff_x26);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = unaff_x26;
      func_0x00010bf870a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar9;
      func_0x00010c0e0ea0();
      _objc_retainAutoreleasedReturnValue();
      puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_190 = 0xc2000000;
      pcStack_188 = FUN_1066f08b4;
      puStack_180 = &UNK_11085c6a8;
      puVar15 = auStack_170;
      puVar12 = auStack_108;
      _objc_copyWeak(puVar15,puVar12);
      _objc_retain(puVar13);
      ppuVar11 = ppuVar10;
      puStack_178 = puVar13;
      func_0x00010c25ff60(ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(ppuVar11);
      _objc_release(ppuVar10);
      _objc_release(ppuVar9);
      _objc_release(unaff_x26);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar5);
      puVar5 = puStack_178;
    }
    else {
      puVar2 = puVar4;
      func_0x00010bfa46a0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bfad7a0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar3;
      func_0x00010bf870a0();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c0e0ea0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_130 = 0xc2000000;
      pcStack_128 = FUN_1066f07e4;
      puStack_120 = &UNK_11085c6a8;
      puVar15 = auStack_110;
      _objc_copyWeak(puVar15,auStack_108);
      _objc_retain(puVar13);
      puVar8 = puVar7;
      puStack_118 = puVar13;
      func_0x00010c25ff60(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar3);
      _objc_release(puVar2);
      puVar2 = puVar4;
      func_0x00010c0cae00(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c0e0ea0();
      _objc_retainAutoreleasedReturnValue();
      puStack_168 = puVar5;
      uStack_160 = 0xc2000000;
      uStack_158 = 0x1066f0838;
      puStack_150 = &UNK_110935d90;
      unaff_x26 = &puStack_168;
      puVar12 = auStack_108;
      _objc_copyWeak(auStack_140,puVar12);
      _objc_retain(puVar13);
      puVar5 = puVar3;
      puStack_148 = puVar13;
      func_0x00010c25ff60(puVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(puVar5);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puStack_148);
      _objc_destroyWeak(auStack_140);
      puVar5 = puStack_118;
    }
  }
  _objc_release(puVar5);
  _objc_destroyWeak(puVar15);
  _objc_destroyWeak(auStack_108);
  _objc_release(puVar13);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f0) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x26 + 5);
  _objc_destroyWeak(puVar15);
  _objc_destroyWeak(auStack_108);
  __Unwind_Resume(puVar4);
  func_0x00010bf529e0(puVar12);
  return (undefined *)(ulong)(puVar12 != (undefined1 *)0x0);
}



/* Entry: 1066f02d0; end: 1066f07c3; -[SCMixerBaseQueryCoordinator _observeMixerService:forQuery:] */

ulong FUN_1066f02d0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined **unaff_x26;
  undefined1 auStack_130 [8];
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  ulong uStack_90;
  ulong uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_98,param_1);
  puVar2 = PTR_PTR_1126cd1f8;
  func_0x00010be3e620();
  func_0x00010be24860(param_1);
  if ((int)puVar2 == 0) {
    uVar5 = param_3;
    func_0x00010c0cae00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = auStack_130;
    puVar12 = auStack_98;
    _objc_copyWeak(puVar13,puVar12);
    _objc_retain(param_4);
    uVar7 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    uVar11 = param_4;
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
    func_0x00010c11b780();
    unaff_x26 = (undefined **)PTR_PTR_1126ae6b8;
    if (iVar1 == 0) {
      uVar5 = param_3;
      func_0x00010bfa46a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_3;
      uStack_90 = uVar5;
      func_0x00010c0cae00();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_88 = uVar6;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf41860(unaff_x26);
      _objc_retainAutoreleasedReturnValue();
      ppuVar8 = unaff_x26;
      func_0x00010bf870a0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar8;
      func_0x00010c0e0ea0();
      _objc_retainAutoreleasedReturnValue();
      puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_120 = 0xc2000000;
      pcStack_118 = FUN_1066f08b4;
      puStack_110 = &UNK_11085c6a8;
      puVar13 = auStack_100;
      puVar12 = auStack_98;
      _objc_copyWeak(puVar13,puVar12);
      _objc_retain(param_4);
      ppuVar10 = ppuVar9;
      uStack_108 = param_4;
      func_0x00010c25ff60(ppuVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(ppuVar10);
      _objc_release(ppuVar9);
      _objc_release(ppuVar8);
      _objc_release(unaff_x26);
      _objc_release(puVar2);
      _objc_release(uVar6);
      _objc_release(uVar5);
      uVar11 = uStack_108;
    }
    else {
      uVar5 = param_3;
      func_0x00010bfa46a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bfad7a0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010bf870a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar7;
      func_0x00010c0e0ea0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR___NSConcreteStackBlock_11034bd00;
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0xc2000000;
      pcStack_b8 = FUN_1066f07e4;
      puStack_b0 = &UNK_11085c6a8;
      puVar13 = auStack_a0;
      _objc_copyWeak(puVar13,auStack_98);
      _objc_retain(param_4);
      uVar4 = uVar3;
      uStack_a8 = param_4;
      func_0x00010c25ff60(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      uVar5 = param_3;
      func_0x00010c0cae00(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c0e0ea0();
      _objc_retainAutoreleasedReturnValue();
      puStack_f8 = puVar2;
      uStack_f0 = 0xc2000000;
      uStack_e8 = 0x1066f0838;
      puStack_e0 = &UNK_110935d90;
      unaff_x26 = &puStack_f8;
      puVar12 = auStack_98;
      _objc_copyWeak(auStack_d0,puVar12);
      _objc_retain(param_4);
      uVar7 = uVar6;
      uStack_d8 = param_4;
      func_0x00010c25ff60(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uStack_d8);
      _objc_destroyWeak(auStack_d0);
      uVar11 = uStack_a8;
    }
  }
  _objc_release(uVar11);
  _objc_destroyWeak(puVar13);
  _objc_destroyWeak(auStack_98);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x26 + 5);
  _objc_destroyWeak(puVar13);
  _objc_destroyWeak(auStack_98);
  __Unwind_Resume(param_3);
  func_0x00010bf529e0(puVar12);
  return (ulong)(puVar12 != (undefined1 *)0x0);
}



/* Entry: 1066f07c4; end: 1066f07e3;  */

bool FUN_1066f07c4(undefined8 param_1,long param_2)

{
  func_0x00010bf529e0(param_2);
  return param_2 != 0;
}



/* Entry: 1066f07e4; end: 1066f088b;  */

void FUN_1066f07e4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c5c0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066f088c; end: 1066f08b3;  */

void FUN_1066f088c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1066f08b4; end: 1066f099f;  */

void FUN_1066f08b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0dfd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0dfd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c5a0();
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066f09a0; end: 1066f0b7b; -[SCMixerBaseQueryCoordinator _createMixerServiceForQuery:] */

void FUN_1066f09a0(undefined *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c137200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      uVar7 = *(ulong *)(lVar8 * 8);
      func_0x00010c0720c0();
      if ((uVar7 & 1) == 0) {
        func_0x00010befa120(puVar4);
      }
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  puVar5 = puVar4;
  func_0x00010c0b8600(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be24860(param_1);
  func_0x00010bdf0240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    param_1 = PTR_PTR_1126b6868;
    _objc_retain(param_2);
    _objc_alloc(param_1);
    func_0x00010c02dd60();
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1066f0b7c; end: 1066f0bc7;  */

void FUN_1066f0b7c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6868;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c02dd60();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066f0bc8; end: 1066f0c33; +[SCMixerBaseQueryCoordinator _isBatchRequest:] */

undefined8 FUN_1066f0bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c11d680(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c137200();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b900();
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1066f0c34; end: 1066f0cc3; -[SCMixerBaseQueryCoordinator _groupIdForQuery:] */

undefined8 FUN_1066f0c34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c11d680(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4e080();
  puVar3 = PTR_PTR_1126cd1f8;
  func_0x00010be3e620(PTR_PTR_1126cd1f8,param_2,param_3);
  _objc_release(param_3);
  func_0x00010c0cef80(uVar4,param_2,uVar2,puVar3);
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 1066f0cc4; end: 1066f0ddf; -[SCMixerBaseQueryCoordinator _createMixerServiceWithNamespaces:groupId:] */

void FUN_1066f0cc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c0cefe0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      lVar2 = lVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c0cf0e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      if (lVar3 == 0) {
LAB_1066f0dac:
        uVar4 = 0;
      }
      else {
        lVar2 = lVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar2 == 0) goto LAB_1066f0dac;
        lVar2 = lVar3;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        *(long *)(param_1 + 0x10) = lVar2;
        _objc_release(uVar4);
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        _objc_retain(uVar4);
      }
      _objc_release(lVar3);
      goto LAB_1066f0db8;
    }
  }
  uVar4 = 0;
LAB_1066f0db8:
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1066f0de0; end: 1066f0eaf; -[SCMixerBaseQueryCoordinator _handleMixerNamespaceData:query:] */

void FUN_1066f0de0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be85460(param_1,param_2,param_4,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd23a0(param_1,param_2,param_3,lVar1);
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be651e0(param_1,param_2,puVar2);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_4;
  func_0x00010bf51e00(param_4);
  _objc_release(param_4);
  func_0x00010bfaf9e0(uVar4,param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1066f0eb0; end: 1066f0f1f; -[SCMixerBaseQueryCoordinator _handleMixerFeeds:query:] */

void FUN_1066f0eb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be85460(param_1,param_2,param_4,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd2380(param_1,param_2,param_3,0,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066f0f20; end: 1066f0fcb; -[SCMixerBaseQueryCoordinator _handleMixerFeeds:namespaceData:query:] */

void FUN_1066f0f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be85460(param_1,param_2,param_5,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd2380(param_1,param_2,param_3,param_4,uVar1);
  _objc_release(param_3);
  func_0x00010be2c600(param_1,param_2,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066f0fcc; end: 1066f10a3; -[SCMixerBaseQueryCoordinator _handleMixerError:query:] */

void FUN_1066f0fcc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be85460(param_1,param_2,param_4,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd1060(param_1,param_2,param_3,lVar1);
  puVar2 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010be651e0(param_1,param_2,puVar2);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = param_4;
  func_0x00010bf51e00(param_4);
  _objc_release(param_4);
  func_0x00010bf2e520(uVar4,param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1066f10a4; end: 1066f11cf; -[SCMixerBaseQueryCoordinator _notifyUpdatingBlocksWithResult:] */

void FUN_1066f10a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x48));
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar6 = *(long *)(param_1 + 0x48);
  _objc_retain(lVar6);
  lVar1 = lVar6;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar6);
        }
        lVar2 = *(long *)(lStack_118 + lVar8 * 8);
        if (lVar2 != 0) {
          (**(code **)(lVar2 + 0x10))(lVar2,param_3);
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar6;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar6);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x48));
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126ccfd8;
  _objc_retain(puVar5);
  _objc_alloc(puVar3);
  func_0x00010c003b80();
  puVar4 = PTR_PTR_1126ccfe0;
  _objc_alloc(PTR_PTR_1126ccfe0);
  func_0x00010c03c280();
  _objc_release(puVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1066f11d0; end: 1066f124b; -[SCMixerBaseQueryCoordinator _queryResultWithQuery:source:] */

void FUN_1066f11d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ccfd8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c003b80();
  puVar2 = PTR_PTR_1126ccfe0;
  _objc_alloc(PTR_PTR_1126ccfe0);
  func_0x00010c03c280();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066f124c; end: 1066f128b; -[SCMixerBaseQueryCoordinator _addPendingUpdatingBlock:] */

void FUN_1066f124c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x48);
    _objc_retainBlock(param_3);
    func_0x00010befa120(uVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 1066f128c; end: 1066f12e3; +[SCMixerBaseQueryCoordinator _logStringFromNamespaces:] */

void FUN_1066f128c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf43280(param_3,param_2,&PTR___NSConcreteGlobalBlock_110935e20);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066f12e4; end: 1066f12eb;  */

void FUN_1066f12e4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d53f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_namespaceId_112612f10);
  return;
}



/* Entry: 1066f12ec; end: 1066f12f3; -[SCMixerBaseQueryCoordinator isLoading] */

undefined1 FUN_1066f12ec(long param_1)

{
  return *(undefined1 *)(param_1 + 0x50);
}



/* Entry: 1066f12f4; end: 1066f1377; -[SCMixerBaseQueryCoordinator .cxx_destruct] */

void FUN_1066f12f4(long param_1)

{
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



/* Entry: 1066f1378; end: 1066f156b; -[SCMixerCategoriesBatchQueryCoordinator initWithMixerNamespaceServices:dataMapper:queryFactory:categoriesFactory:categoriesAggregator:dynamicUpdateHandler:queryStatusChecker:configuration:mixerNamespaceCacheOptimizationEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1066f1378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined1 param_11)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_10);
  puVar1 = PTR_PTR_1126cd108;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puStack_68 = PTR_PTR_1126f2918;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar2,PTR_s_initWithMixerNamespaceServices_d_112531868,param_3,param_4,
                      param_8,puVar1,param_9,param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_3);
  _objc_release(puVar1);
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11274e660;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_4;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11274e664;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_5;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11274e668;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_6;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11274e66c;
    _objc_retain(param_10);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_10;
    _objc_release(uVar3);
    puVar1 = PTR_PTR_1126ae820;
    _objc_opt_new();
    lVar4 = (long)_DAT_11274e670;
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined **)((long)puVar2 + lVar4) = puVar1;
    _objc_release(uVar3);
    func_0x00010c0d9840(*(undefined8 *)((long)puVar2 + lVar4));
    puVar1 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_11274e674);
    *(undefined **)((long)puVar2 + (long)_DAT_11274e674) = puVar1;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return puVar2;
}



/* Entry: 1066f156c; end: 1066f15a3; -[SCMixerCategoriesBatchQueryCoordinator categoriesResponse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066f156c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010be90a80();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11274e674);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066f15a4; end: 1066f166b; -[SCMixerCategoriesBatchQueryCoordinator _requestCategories] */

void FUN_1066f15a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = param_1;
  func_0x00010be10460();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c13cfe0(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  return;
}



/* Entry: 1066f166c; end: 1066f16fb;  */

void FUN_1066f166c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c0c0800(param_2);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066f16fc; end: 1066f16ff;  */

void FUN_1066f16fc(void)

{
  return;
}



/* Entry: 1066f1700; end: 1066f1753;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066f1700(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274e674);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066f1754; end: 1066f17e3; -[SCMixerCategoriesBatchQueryCoordinator _fetchCategoriesQuery] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066f1754(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11274e66c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar4);
  func_0x00010c0f8400();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274e664);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bfa3d00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  if (iVar1 == 0) {
    func_0x00010bfa5940(uVar3,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfa5900();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1066f17e4; end: 1066f1c8b; -[SCMixerCategoriesBatchQueryCoordinator handleReceivedMixerFeeds:namespaceData:forQueryResult:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066f17e4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  long lStack_140;
  undefined *puStack_138;
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
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR_PTR_1126cce40;
  _objc_alloc();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274e66c);
  func_0x00010bfa3d00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c043bc0();
  _objc_release(uVar3);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar12 = *plStack_120;
    do {
      lVar16 = 0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        uVar15 = *(ulong *)(lStack_128 + lVar16 * 8);
        uVar5 = uVar15;
        func_0x00010c0d53e0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c0720c0();
        _objc_release(uVar5);
        if ((uVar6 & 1) == 0) {
          uVar3 = *(undefined8 *)(param_1 + _DAT_11274e660);
          uVar5 = uVar15;
          func_0x00010c0d53e0(uVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf09020(uVar3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          func_0x00010bf69d40(uVar15);
          uVar13 = *(undefined8 *)(param_1 + _DAT_11274e668);
          uVar5 = uVar15;
          func_0x00010bf85d80(uVar15);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar15;
          func_0x00010bfe5b40();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
          if (uVar6 == 0) {
            func_0x00010bf333a0(uVar13);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            uVar7 = uVar15;
            func_0x00010bfe5b40(uVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdc3460(puVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf333a0(uVar13);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar8);
            _objc_release(uVar7);
          }
          _objc_release(uVar6);
          _objc_release(uVar5);
          func_0x00010bf01980(puVar14);
          func_0x00010bf69d40();
          if ((int)uVar15 != 0) {
            uVar9 = uVar13;
            func_0x00010bf334a0(uVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c18afc0(puVar14);
            _objc_release(uVar9);
          }
          _objc_release(uVar13);
          _objc_release(uVar3);
        }
        lVar16 = lVar16 + 1;
      } while (lVar4 != lVar16);
      lVar4 = param_3;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(param_3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11274e670));
  puVar8 = PTR_PTR_1126cd110;
  _objc_alloc();
  uVar3 = param_5;
  func_0x00010c0cc0c0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4d6a0();
  func_0x00010c003b80();
  _objc_release(uVar3);
  puVar10 = PTR_PTR_1126cd118;
  _objc_alloc();
  func_0x00010bff2840();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274e674);
  puVar11 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3);
  _objc_release(puVar11);
  puStack_138 = PTR_PTR_1126f2918;
  puVar11 = PTR_s_handleReceivedMixerFeeds_namespa_1125d2288;
  lStack_140 = param_1;
  _objc_msgSendSuper2(&lStack_140,PTR_s_handleReceivedMixerFeeds_namespa_1125d2288,param_3,param_4,
                      param_5);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar14);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar11);
  puVar14 = puVar11;
  func_0x00010bf69d40();
  if ((int)puVar14 == 0) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = puVar11;
    func_0x00010c0d53e0(puVar11);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 1066f1c8c; end: 1066f1d3b;  */

void FUN_1066f1c8c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bf69d40();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x00010c0d53e0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066f1d3c; end: 1066f1d73; -[SCMixerCategoriesBatchQueryCoordinator handleReceivedMixerNamespaceData:withFeeds:forQueryResult:] */

void FUN_1066f1d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f2918;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_handleReceivedMixerNamespaceData_1125d2290,param_3,param_5);
  return;
}



/* Entry: 1066f1d74; end: 1066f1d83; -[SCMixerCategoriesBatchQueryCoordinator categoriesAggregator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1066f1d74(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274e670);
}



/* Entry: 1066f1d84; end: 1066f1e03; -[SCMixerCategoriesBatchQueryCoordinator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066f1d84(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274e674,0);
  _objc_storeStrong(param_1 + _DAT_11274e670,0);
  _objc_storeStrong(param_1 + _DAT_11274e66c,0);
  _objc_storeStrong(param_1 + _DAT_11274e668,0);
  _objc_storeStrong(param_1 + _DAT_11274e664,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274e660,0);
  return;
}



/* Entry: 1066f1e04; end: 1066f1f13; -[SCMixerCategoriesBatchRefreshQueryCoordinator initWithMixerNamespaceServices:dataMapper:dynamicUpdateHandler:queryStatusChecker:sectionsDataStore:queryFactory:mixerNamespaceCacheOptimizationEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1066f1e04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

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
  puStack_58 = PTR_PTR_1126f2920;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithMixerNamespaceServices_d_112531868,param_3,param_4,
                      param_5,0,param_6,param_9);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11274e678;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_11274e67c;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274e680);
    *(undefined **)((long)puVar1 + (long)_DAT_11274e680) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 1066f1f14; end: 1066f2057; -[SCMixerCategoriesBatchRefreshQueryCoordinator refreshSectionsWithIdentifiers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066f1f14(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + _DAT_11274e678);
    func_0x00010bfa3980(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c268560();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1066f2058; end: 1066f209f;  */

void FUN_1066f2058(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be88960();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066f20a0; end: 1066f21bf; -[SCMixerCategoriesBatchRefreshQueryCoordinator _refreshSectionsWithConfigurations:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066f20a0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11274e67c);
    func_0x00010bf17140(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c13cfe0(param_1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1066f21c0; end: 1066f21c7;  */

void FUN_1066f21c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf643f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_dataSource_1125b6aa0);
  return;
}



/* Entry: 1066f21c8; end: 1066f21df;  */

void FUN_1066f21c8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1066f21e0; end: 1066f222f; -[SCMixerCategoriesBatchRefreshQueryCoordinator .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066f21e0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274e680,0);
  _objc_storeStrong(param_1 + _DAT_11274e67c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274e678,0);
  return;
}



/* Entry: 1066f2230; end: 1066f223b; -[SCMixerDataMapper init] */

void FUN_1066f2230(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c017470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithGamesExplorerAuxFeedRank_1125e36f8,0,0);
  return;
}



/* Entry: 1066f223c; end: 1066f228b; -[SCMixerDataMapper initWithGamesExplorerAuxFeedRankingFixEnabled:gamesExplorerCategoriesFromFeedsEnabled:] */

void FUN_1066f223c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f2928;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
  }
  return;
}



/* Entry: 1066f228c; end: 1066f2607; -[SCMixerDataMapper mapMixerFeedsWithEmptyFeedItems:remoteState:] */

void FUN_1066f228c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined *puStack_318;
  undefined8 uStack_310;
  code *pcStack_308;
  undefined *puStack_300;
  undefined *puStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined1 auStack_2b0 [128];
  long lStack_230;
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
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar12 = &uStack_130;
  lVar18 = param_3;
  func_0x00010bf52a60();
  puVar9 = PTR____NSArray0__struct_11034ab48;
  if (lVar18 != 0) {
    lVar15 = *plStack_120;
    do {
      lVar17 = 0;
      do {
        if (*plStack_120 != lVar15) {
          _objc_enumerationMutation(param_3);
        }
        uVar13 = *(ulong *)(lStack_128 + lVar17 * 8);
        uVar2 = uVar13;
        func_0x00010c0d53e0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        if ((uVar3 & 1) == 0) {
          uVar2 = uVar13;
          func_0x00010c0d53e0(uVar13);
          _objc_retainAutoreleasedReturnValue();
          uVar16 = param_1;
          func_0x00010bf09020(param_1,param_2,uVar2);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
          func_0x00010bf69d40();
          puVar4 = PTR_PTR_1126ccc88;
          _objc_alloc();
          uVar2 = uVar13;
          func_0x00010bf85d80();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR_PTR_1126ccdf8;
          func_0x00010bf336a0(PTR_PTR_1126ccdf8,param_2,uVar16,puVar9);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar13;
          func_0x00010c130180(uVar13);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = param_1;
          func_0x00010c0b94e0(param_1,param_2,uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf69d40();
          uVar7 = uVar13;
          func_0x00010bfe5b40();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
          if (uVar7 == 0) {
            func_0x00010c012580(puVar4,param_2,uVar16,uVar2,0,puVar5,puVar9,param_4);
          }
          else {
            func_0x00010bfe5b40(uVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdc3460(puVar8,param_2,uVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c012580(puVar4,param_2,uVar16,uVar2,0,puVar5,puVar9,param_4);
            _objc_release(puVar8);
            _objc_release(uVar13);
          }
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar3);
          _objc_release(puVar5);
          _objc_release(uVar2);
          func_0x00010befa120(puVar1,param_2,puVar4);
          _objc_release(puVar4);
          _objc_release(uVar16);
        }
        lVar17 = lVar17 + 1;
      } while (lVar18 != lVar17);
      puVar12 = &uStack_130;
      lVar18 = param_3;
      func_0x00010bf52a60();
    } while (lVar18 != 0);
  }
  _objc_release(param_3);
  puVar9 = puVar1;
  func_0x00010bf51e00();
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lStack_230 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar12);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar12;
    func_0x00010bef09a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar10 != (undefined8 *)0x0) {
      uStack_2c8 = 0;
      uStack_2d0 = 0;
      uStack_2b8 = 0;
      uStack_2c0 = 0;
      lStack_2e8 = 0;
      uStack_2f0 = 0;
      uStack_2d8 = 0;
      plStack_2e0 = (long *)0x0;
      puVar10 = puVar12;
      func_0x00010bef09a0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010bf52a60();
      puVar9 = PTR___NSConcreteStackBlock_11034bd00;
      if (puVar11 != (undefined8 *)0x0) {
        lVar18 = *plStack_2e0;
        do {
          puVar14 = (undefined8 *)0x0;
          do {
            if (*plStack_2e0 != lVar18) {
              _objc_enumerationMutation(puVar10);
            }
            uVar16 = *(undefined8 *)(lStack_2e8 + (long)puVar14 * 8);
            puStack_318 = puVar9;
            uStack_310 = 0xc2000000;
            pcStack_308 = FUN_1066f27d4;
            puStack_300 = &UNK_1108f1c30;
            _objc_retain(puVar1);
            puStack_2f8 = puVar1;
            func_0x00010c0bd220(uVar16,param_2,&PTR___NSConcreteGlobalBlock_110935f20,&puStack_318);
            _objc_release(puStack_2f8);
            puVar14 = (undefined8 *)((long)puVar14 + 1);
          } while (puVar11 != puVar14);
          puVar11 = puVar10;
          func_0x00010bf52a60(puVar10,param_2,&uStack_2f0,auStack_2b0,0x10);
        } while (puVar11 != (undefined8 *)0x0);
      }
      _objc_release(puVar10);
    }
    puVar9 = puVar1;
    func_0x00010bf51e00(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar12);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_230) {
      ___stack_chk_fail();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1066f2608; end: 1066f27cf; -[SCMixerDataMapper mapMixerNamespaceDataToLensItems:] */

void FUN_1066f2608(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
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
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bef09a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    lVar2 = param_3;
    func_0x00010bef09a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52a60();
    puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar3 != 0) {
      lVar7 = *plStack_130;
      do {
        lVar5 = 0;
        do {
          if (*plStack_130 != lVar7) {
            _objc_enumerationMutation(lVar2);
          }
          uVar6 = *(undefined8 *)(lStack_138 + lVar5 * 8);
          puStack_168 = puVar4;
          uStack_160 = 0xc2000000;
          pcStack_158 = FUN_1066f27d4;
          puStack_150 = &UNK_1108f1c30;
          _objc_retain(puVar1);
          puStack_148 = puVar1;
          func_0x00010c0bd220(uVar6,param_2,&PTR___NSConcreteGlobalBlock_110935f20,&puStack_168);
          _objc_release(puStack_148);
          lVar5 = lVar5 + 1;
        } while (lVar3 != lVar5);
        lVar3 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,&uStack_140,auStack_100,0x10);
      } while (lVar3 != 0);
    }
    _objc_release(lVar2);
  }
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 1066f27d0; end: 1066f27d3;  */

void FUN_1066f27d0(void)

{
  return;
}



/* Entry: 1066f27d4; end: 1066f2847;  */

void FUN_1066f27d4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ccc38;
  func_0x00010c093100(PTR_PTR_1126ccc38,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccc20;
  func_0x00010c094c60(PTR_PTR_1126ccc20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1066f2848; end: 1066f292f; -[SCMixerDataMapper mapMixerRequestMetadataToRemoteState:] */

void FUN_1066f2848(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar4 = PTR_PTR_1126ccc80;
    _objc_alloc(PTR_PTR_1126ccc80);
    func_0x00010c04e760();
  }
  else {
    lVar1 = param_3;
    func_0x00010c0f2920(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar4 = PTR_PTR_1126ccc80;
    _objc_alloc(PTR_PTR_1126ccc80);
    lVar2 = param_3;
    func_0x00010c0f2920(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010bf3d3e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e760(puVar4,param_2,lVar2,lVar3,lVar1 != 0);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1066f2930; end: 1066f2a67; -[SCMixerDataMapper mapMixerRenderStrategyToLensExplorerRenderStrategy:] */

void FUN_1066f2930(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  if (param_4 == 0) {
    puVar6 = PTR_PTR_1126ccd80;
    _objc_alloc_init(PTR_PTR_1126ccd80);
  }
  else {
    lVar1 = param_4;
    func_0x00010c097520(param_4);
    uVar2 = param_2;
    func_0x00010be5cc40(param_2,param_3,lVar1);
    lVar1 = param_4;
    func_0x00010c0ed100(param_4);
    uVar3 = param_2;
    func_0x00010be5cc60(param_2,param_3,lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_4;
    func_0x00010bf4dac0(param_4);
    func_0x00010be5cc20(param_2,param_3,lVar1);
    puVar6 = PTR_PTR_1126ccd80;
    _objc_alloc(PTR_PTR_1126ccd80);
    lVar1 = param_4;
    func_0x00010c2480c0(param_4);
    func_0x00010c0852a0(param_4);
    lVar4 = param_4;
    uVar7 = param_1;
    func_0x00010c2902c0(param_4);
    lVar5 = param_4;
    func_0x00010c2902e0(param_4);
    func_0x00010c097500(param_4);
    func_0x00010c04ad80(param_1,uVar7,puVar6,param_3,lVar1,uVar3,param_2,lVar4,lVar5,uVar2);
    _objc_release(uVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1066f2a68; end: 1066f2a7b; -[SCMixerDataMapper _mapMixerLensTileLayout:] */

long FUN_1066f2a68(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_3;
  if (param_3 != 2) {
    lVar1 = 0;
  }
  if (param_3 == 1) {
    lVar1 = 1;
  }
  return lVar1;
}



/* Entry: 1066f2a7c; end: 1066f2a8b; -[SCMixerDataMapper mixerGroupIdForContext:] */

long FUN_1066f2a7c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (0xb < param_3 - 1U) {
    param_3 = 0;
  }
  return param_3;
}



/* Entry: 1066f2a8c; end: 1066f2acb; -[SCMixerDataMapper mixerGroupIdForContext:batchRequest:] */

undefined8 FUN_1066f2a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bee7340();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0cef70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_mixerGroupIdForContext__1126115f0,param_3);
    return param_1;
  }
  return 0;
}



/* Entry: 1066f2acc; end: 1066f2aeb; -[SCMixerDataMapper publishesCategoriesFromFeedsForGroupId:] */

bool FUN_1066f2acc(long param_1,undefined8 param_2,long param_3)

{
  return *(char *)(param_1 + 9) == '\x01' && (param_3 == 9 || param_3 - 0xbU < 2);
}



/* Entry: 1066f2aec; end: 1066f2b13; -[SCMixerDataMapper _usesContextGroupForContext:batchRequest:] */

bool FUN_1066f2aec(long param_1,undefined8 param_2,long param_3,uint param_4)

{
  if ((param_4 & 1) != 0) {
    return true;
  }
  return *(char *)(param_1 + 8) == '\x01' && param_3 - 0xbU < 2;
}



/* Entry: 1066f2b14; end: 1066f2b57; -[SCMixerDataMapper _mapMixerOrientationToLensExplorerOrientation:] */

void FUN_1066f2b14(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 1) {
    func_0x00010c298de0(PTR_PTR_1126ccd88);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfe4400(PTR_PTR_1126ccd88,param_2,0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066f2b58; end: 1066f2b63; -[SCMixerDataMapper _mapMixerContentTypeToLensExplorerContentType:] */

bool FUN_1066f2b58(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 1;
}



/* Entry: 1066f2b64; end: 1066f2bf3; -[SCMixerDataMapper arBarNamespaceForGatorNamespace:] */

void FUN_1066f2b64(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f310d8);
  if ((((ulong)ppuVar1 & 1) == 0) &&
     (ppuVar1 = param_3,
     func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f786d8),
     (int)ppuVar1 == 0)) {
    ppuVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f78658);
    ppuVar1 = &PTR____CFConstantStringClassReference_110f30b98;
    if ((int)ppuVar2 == 0) {
      ppuVar1 = param_3;
    }
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f30a78;
  }
  _objc_retain(ppuVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1066f2bf4; end: 1066f2c47; -[SCMixerRankingLensesQueryCoordinator initWithMixerNamespaceServices:dataMapper:dataStore:queryStatusChecker:dynamicUpdateHandler:mixerNamespaceCacheOptimizationEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066f2bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1126f2930;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithMixerNamespaceServices_d_112531868,param_3,param_4,
                      param_7,param_5,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11274e68c) = 0;
  }
  return;
}



/* Entry: 1066f2c48; end: 1066f2cfb; -[SCMixerRankingLensesQueryCoordinator handleFeedItems:remoteState:forQueryResult:] */

void FUN_1066f2c48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_s_handleFeedItems_remoteState_forQ_1125d1e30;
  puStack_48 = PTR_PTR_1126f2930;
  uStack_50 = param_1;
  _objc_retain(param_5);
  _objc_msgSendSuper2(&uStack_50,puVar1,param_3,param_4,param_5);
  lVar2 = param_5;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  lVar3 = lVar2;
  func_0x00010bf4d6a0();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    func_0x00010c1acc60(param_1);
  }
  return;
}



/* Entry: 1066f2cfc; end: 1066f2def; -[SCMixerRankingLensesQueryCoordinator canPerformQuery:] */

uint FUN_1066f2cfc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  iVar1 = (int)&uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126f2930;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_canPerformQuery__1125a8dc0,param_3);
  if (iVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x00010c11d680();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c11daa0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126cd100;
    func_0x00010c0e8e20(PTR_PTR_1126cd100);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c0720c0();
    _objc_release(puVar4);
    _objc_release(uVar3);
    if ((int)uVar5 == 0) {
      uVar6 = 1;
    }
    else {
      func_0x00010c064320(param_1);
      uVar6 = (uint)param_1 ^ 1;
    }
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 1066f2df0; end: 1066f2e3b; -[SCMixerRankingLensesQueryCoordinator reset] */

void FUN_1066f2df0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f2930;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_reset_11262ba18);
  func_0x00010c1acc60(param_1);
  return;
}



/* Entry: 1066f2e3c; end: 1066f2e4f; -[SCMixerRankingLensesQueryCoordinator initialRequestCompleted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1066f2e3c(long param_1)

{
  return *(byte *)(param_1 + _DAT_11274e68c) & 1;
}



/* Entry: 1066f2e50; end: 1066f2e5f; -[SCMixerRankingLensesQueryCoordinator setInitialRequestCompleted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1066f2e50(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11274e68c) = param_3;
  return;
}



/* Entry: 1066f2e60; end: 1066f2fb3; +[SCLensExplorerDataQueryContextFactory _dataStoreFactoryWithStudySettingsServices:sectionsDataStore:containerStore:context:shouldEnableDailyGames:dailyGamesAuxiliaryNamespaceId:] */

void FUN_1066f2e60(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 in_x3;
  undefined8 *in_x4;
  undefined8 in_x7;
  
  puVar1 = PTR_PTR_1126cd200;
  _objc_retain(in_x7);
  _objc_retain(in_x3);
  _objc_alloc_init(puVar1);
  puVar2 = PTR_PTR_1126cd208;
  _objc_alloc();
  func_0x00010bff6d80();
  _objc_release(in_x3);
  _objc_release(puVar1);
  puVar1 = PTR_DAT_1126a55f0;
  if (in_x4 != (undefined8 *)0x0) {
    _objc_retain(puVar2);
    puVar3 = puVar2;
    func_0x00010010fab4(puVar2,puVar1);
    puVar1 = puVar2;
    if ((int)puVar3 == 0) {
      puVar1 = (undefined *)0x0;
    }
    _objc_retain(puVar1);
    _objc_release(puVar2);
    _objc_autorelease(puVar1);
    *in_x4 = puVar1;
  }
  puVar1 = PTR_PTR_1126cd210;
  _objc_alloc(PTR_PTR_1126cd210);
  func_0x00010bff6d40();
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126cd218;
  _objc_alloc(PTR_PTR_1126cd218);
  func_0x00010bff6d40();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126cc9b0;
  func_0x00010bdf7b20(PTR_PTR_1126cc9b0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(in_x7);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066f2fb4; end: 1066f3187; +[SCLensExplorerDataQueryContextFactory _dailiesDataStoreWithFactory:context:shouldEnableDailyGames:dailyGamesAuxiliaryNamespaceId:] */

void FUN_1066f2fb4(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined **param_4,
                  undefined *param_5,undefined **param_6,undefined **param_7,undefined *param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  undefined8 unaff_x23;
  char unaff_w24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined **ppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  puVar9 = param_5;
  ppuVar12 = param_6;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126ccd80;
  if (((ulong)param_5 & 1) == 0) {
    _objc_retain(param_3);
    puVar4 = param_3;
  }
  else {
    _objc_retain(param_6);
    _objc_alloc();
    puVar3 = PTR_PTR_1126ccd88;
    func_0x00010bfe4400(PTR_PTR_1126ccd88,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04ad80(0x3ff0000000000000,0,puVar2,param_2,1,puVar3,1,0,0,0);
    _objc_release(puVar3);
    ppuVar12 = param_6;
    func_0x00010c08fa60();
    puVar4 = PTR_PTR_1126cd220;
    ppuVar6 = &PTR____CFConstantStringClassReference_110f31198;
    if (ppuVar12 != (undefined **)0x0) {
      ppuVar6 = param_6;
    }
    _objc_retain(ppuVar6);
    _objc_alloc();
    param_4 = &PTR____CFConstantStringClassReference_110f31158;
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_60 = ppuVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    ppuVar12 = &PTR____CFConstantStringClassReference_110f311b8;
    func_0x00010670e0a8();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_3;
    puVar9 = puVar5;
    param_7 = ppuVar6;
    param_8 = puVar2;
    func_0x00010bff6d60();
    _objc_release(ppuVar6);
    _objc_release(puVar5);
    _objc_release(param_6);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    lVar1 = lStack_58;
    ppuVar6 = ppuStack_60;
    _objc_retain(puVar3);
    _objc_retain(param_8);
    _objc_retain(ppuVar6);
    _objc_retain(unaff_x26);
    _objc_retain(unaff_x25);
    _objc_retain(unaff_x23);
    _objc_retain(param_7);
    _objc_retain(ppuVar12);
    _objc_retain(puVar9);
    _objc_retain(param_4);
    puVar2 = puVar9;
    func_0x00010c094c80();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar9;
    func_0x00010c13bac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    ppuVar7 = param_7;
    func_0x00010c0937c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_7);
    ppuVar8 = ppuVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar7);
    puVar9 = PTR_PTR_1126cca88;
    _objc_alloc(PTR_PTR_1126cca88);
    func_0x00010c04ea00();
    puVar4 = PTR_PTR_1126cd228;
    _objc_alloc(PTR_PTR_1126cd228);
    func_0x00010c0639e0();
    _objc_release(unaff_x23);
    _objc_release(ppuVar12);
    _objc_release(param_4);
    if (unaff_w24 != '\0') {
      puVar10 = PTR_PTR_1126cd230;
      _objc_alloc(PTR_PTR_1126cd230);
      uVar11 = unaff_x26;
      func_0x00010c095b60(unaff_x26);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff6c40(puVar10,param_2,puVar4,unaff_x25,param_8,puVar3,puVar9,uVar11,lVar1);
      _objc_release(puVar4);
      _objc_release(uVar11);
      puVar4 = puVar10;
    }
    puVar10 = PTR_PTR_1126cd168;
    func_0x00010c06b3a0(PTR_PTR_1126cd168,param_2,lVar1);
    if (((ulong)puVar10 & 1) == 0) {
      puVar10 = PTR_PTR_1126cd238;
      _objc_alloc(PTR_PTR_1126cd238);
      func_0x00010bff6c60();
      _objc_release(puVar4);
      puVar4 = puVar10;
    }
    _objc_release(puVar9);
    _objc_release(ppuVar8);
    _objc_release(puVar5);
    _objc_release(puVar2);
    _objc_release(unaff_x25);
    _objc_release(unaff_x26);
    _objc_release(ppuVar6);
    _objc_release(param_8);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1066f3188; end: 1066f347b; +[SCLensExplorerDataQueryContextFactory _categoriesProviderFactoryWithQueryFactory:queryCoordinatorFactory:requestProviderFactory:requestManager:studySettingsServices:dynamicUpdateHandler:selectedBatchStatusCheckerFactory:context:performerServices:feedModelsStorage:cacheEnabled:mixerNamespaceServices:lensGatorEnabled:mixerNamespaceCacheOptimizationEnabled:gamesExplorerAuxFeedRankingFixEnabled:gamesExplorerCategoriesFromFeedsEnabled:] */

void FUN_1066f3188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  char param_13,undefined4 param_14,undefined8 param_15)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_15);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_5;
  func_0x00010c094c80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_5;
  func_0x00010c13bac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar3 = param_7;
  func_0x00010c0937c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  uVar4 = uVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126cca88;
  _objc_alloc(PTR_PTR_1126cca88);
  func_0x00010c04ea00();
  puVar6 = PTR_PTR_1126cd228;
  _objc_alloc(PTR_PTR_1126cd228);
  func_0x00010c0639e0();
  _objc_release(param_15);
  _objc_release(param_6);
  _objc_release(param_4);
  if (param_13 != '\0') {
    puVar7 = PTR_PTR_1126cd230;
    _objc_alloc(PTR_PTR_1126cd230);
    uVar3 = param_11;
    func_0x00010c095b60(param_11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff6c40(puVar7,param_2,puVar6,param_12,param_8,param_3,puVar5,uVar3,param_10);
    _objc_release(puVar6);
    _objc_release(uVar3);
    puVar6 = puVar7;
  }
  puVar7 = PTR_PTR_1126cd168;
  func_0x00010c06b3a0(PTR_PTR_1126cd168,param_2,param_10);
  if (((ulong)puVar7 & 1) == 0) {
    puVar7 = PTR_PTR_1126cd238;
    _objc_alloc(PTR_PTR_1126cd238);
    func_0x00010bff6c60();
    _objc_release(puVar6);
    puVar6 = puVar7;
  }
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1066f347c; end: 1066f3723; +[SCLensExplorerDataQueryContextFactory _queryCoordinatorFactoryWithDataStoreFactory:requestProviderFactory:requestManager:lensFavoritesService:lensFavoritesMockService:batchUpdateHandler:selectedBatchStatusCheckerFactory:feedModelsStorage:cacheEnabled:mixerNamespaceServices:lensGatorEnabled:mixerNamespaceCacheOptimizationEnabled:gamesExplorerAuxFeedRankingFixEnabled:gamesExplorerCategoriesFromFeedsEnabled:] */

void FUN_1066f347c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,char param_11,undefined4 param_12,
                  undefined8 param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_13);
  _objc_retain(param_9);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c094c80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c13bac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126cd240;
  _objc_alloc(PTR_PTR_1126cd240);
  func_0x00010c03f340();
  _objc_release(param_13);
  _objc_release(param_9);
  _objc_release(param_5);
  puVar4 = puVar3;
  if (param_11 != '\0') {
    puVar4 = PTR_PTR_1126cd248;
    _objc_alloc(PTR_PTR_1126cd248);
    func_0x00010bff6f80();
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126cd250;
  _objc_alloc(PTR_PTR_1126cd250);
  func_0x00010bff6f40();
  _objc_release(puVar4);
  puVar4 = PTR_PTR_1126cd258;
  _objc_alloc(PTR_PTR_1126cd258);
  uVar5 = param_6;
  func_0x00010c093c60(param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  uVar6 = uVar5;
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_7;
  func_0x00010c0cf720(param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  uVar8 = uVar7;
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff6f60(puVar4,param_2,puVar3,param_3,uVar6,uVar8);
  _objc_release(puVar3);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1066f3724; end: 1066f3777; +[SCLensExplorerDataQueryContextFactory _queryFactoryWithContext:] */

void FUN_1066f3724(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cd260;
  _objc_alloc_init(PTR_PTR_1126cd260);
  puVar2 = PTR_PTR_1126cd268;
  _objc_alloc(PTR_PTR_1126cd268);
  func_0x00010bff6fa0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066f3778; end: 1066f38d3; +[SCLensExplorerDataQueryContextFactory _lensCollectionDataProviderWithNetworkServices:studySettings:countryCodeProvider:performerServices:lensCoreVersionProvider:] */

void FUN_1066f3778(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c095b60(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15e720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_6);
  uVar1 = param_4;
  func_0x00010c091760(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar3 = PTR_PTR_1126cd270;
  _objc_alloc(PTR_PTR_1126cd270);
  uVar4 = param_3;
  func_0x00010bfe4c00(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bfe4d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c019880(puVar3,param_2,uVar4,uVar5,param_5,uVar2,uVar1,param_7);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066f38d4; end: 1066f39db; +[SCLensExplorerDataQueryContextFactory _collectionCategoryProviderWithLensCollectionProvider:responseParser:batchUpdateHandler:queryFactory:studySettings:] */

void FUN_1066f38d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cca88;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_alloc(puVar1);
  func_0x00010c04ea00();
  _objc_release(param_7);
  puVar2 = PTR_PTR_1126cd278;
  func_0x00010c06cd80();
  if ((int)puVar2 == 0) {
    puVar2 = PTR_PTR_1126cd280;
    _objc_alloc(PTR_PTR_1126cd280);
    func_0x00010c0232e0();
  }
  else {
    puVar2 = PTR_PTR_1126cd278;
    _objc_alloc(PTR_PTR_1126cd278);
    func_0x00010bff7540();
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066f39dc; end: 1066f3a03;  */

void FUN_1066f39dc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066f3a04; end: 1066f3a0b;  */

void FUN_1066f3a04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1066f3a0c; end: 1066f3a8b;  */

void FUN_1066f3a0c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_38;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uStack_38 = *(undefined8 *)(lVar4 + 0x28);
  puVar2 = PTR_PTR_1126cc9b0;
  func_0x00010bdf7f80(PTR_PTR_1126cc9b0,param_2,*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x28),&uStack_38,*(undefined8 *)(param_1 + 0x40),
                      *(undefined1 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x30));
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uStack_38;
  _objc_retain(uStack_38);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined8 *)(lVar4 + 0x28) = uVar1;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066f3a8c; end: 1066f3acf;  */

void FUN_1066f3a8c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf57500(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066f3ad0; end: 1066f3ae3;  */

void FUN_1066f3ad0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be85310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126cc9b0,PTR_s__queryFactoryWithContext__11257ee60,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1066f3ae4; end: 1066f3e83;  */

void FUN_1066f3ae4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126cc9b0;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be852a0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar5 = *(ulong *)(param_1 + 0x68);
  _objc_opt_respondsToSelector(uVar5,PTR_s_decorateQueryCoordinatorFactory__1125b7728);
  puVar6 = PTR_PTR_1126cd220;
  puVar7 = puVar4;
  if ((uVar5 & 1) != 0) {
    if (*(char *)(param_1 + 0x7d) == '\x01') {
      _objc_retain(uVar2);
      _objc_opt_class(puVar6);
      uVar5 = uVar2;
      _objc_opt_isKindOfClass(uVar2,puVar6);
      uVar1 = uVar2;
      if ((uVar5 & 1) == 0) {
        uVar1 = 0;
      }
      _objc_retain(uVar1);
      _objc_release(uVar2);
      uVar5 = uVar1;
      func_0x00010bf123c0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
    }
    else {
      uVar5 = 0;
    }
    puVar7 = *(undefined **)(param_1 + 0x68);
    func_0x00010bf67600(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar5);
  }
  func_0x00010c184080(*(undefined8 *)(param_1 + 0x70));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1066f3e84; end: 1066f3f4f;  */

void FUN_1066f3e84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  func_0x00010bf57500(*(undefined8 *)(param_1 + 0x20));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126cc9b0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c13bac0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c0937c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde1cc0(puVar7,param_2,uVar1,uVar4,uVar2,uVar3,uVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1066f3f50; end: 1066f406b;  */

void FUN_1066f3f50(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar3 = PTR_PTR_1126cd2d8;
  _objc_alloc(PTR_PTR_1126cd2d8);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c094c80(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c13bac0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03f380(puVar3,param_2,uVar4,uVar5,uVar6,uVar1,uVar2,uVar7,uVar8,
                      *(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066f406c; end: 1066f40db;  */

void FUN_1066f406c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar1 = *(ulong *)(param_1 + 0x20);
  _objc_opt_respondsToSelector(uVar1,PTR_s_decorateDataStoreFactory__1125b7720);
  if ((uVar1 & 1) == 0) {
    _objc_retain(param_2);
    uVar2 = param_2;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf675e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1066f40dc; end: 1066f415f; -[SCLensExplorerDataQueryContextFactory .cxx_destruct] */

void FUN_1066f40dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_destroyWeak(param_1 + 0x58);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066f4160; end: 1066f41e3; -[SCLensExplorerContextQueryFactory initWithBaseQueryFactory:context:] */

undefined1 *
FUN_1066f4160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f2940;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066f41e4; end: 1066f4237; -[SCLensExplorerContextQueryFactory fetchCategoriesBatchWithPreselectedFeedId:] */

void FUN_1066f41e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfa5900(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be85620(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1066f4238; end: 1066f428b; -[SCLensExplorerContextQueryFactory fetchCategoryWithFeedId:] */

void FUN_1066f4238(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfa5940(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be85620(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1066f428c; end: 1066f42df; -[SCLensExplorerContextQueryFactory fetchLensesWithDataSource:] */

void FUN_1066f428c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfa7fe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be85620(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1066f42e0; end: 1066f4333; -[SCLensExplorerContextQueryFactory fetchTailLensesWithDataSource:] */

void FUN_1066f42e0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfaacc0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be85620(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1066f4334; end: 1066f4387; -[SCLensExplorerContextQueryFactory refreshLensesWithDataSource:] */

void FUN_1066f4334(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c1253c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be85620(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1066f4388; end: 1066f43db; -[SCLensExplorerContextQueryFactory batchRefreshLensesWithDataSources:] */

void FUN_1066f4388(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf17140(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be85620(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1066f43dc; end: 1066f44f3; -[SCLensExplorerContextQueryFactory _queryWithUpdatedContextFromQuery:] */

void FUN_1066f43dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar2 = PTR_PTR_1126cd2e8;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c11d680(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0934c0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c2aafa0(puVar2,param_2,*(undefined8 *)(param_1 + 0x10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cd1f0;
  _objc_alloc(PTR_PTR_1126cd1f0);
  uVar1 = param_3;
  func_0x00010c11d960(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010c11dac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar5 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03c460(puVar3,param_2,uVar1,uVar4,puVar5);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066f44f4; end: 1066f44ff; -[SCLensExplorerContextQueryFactory .cxx_destruct] */

void FUN_1066f44f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066f4500; end: 1066f457b; -[SCLensExplorerQueryFactory fetchLensesWithDataSource:] */

void FUN_1066f4500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cd100;
  _objc_retain(param_3);
  func_0x00010c0e8e20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4c2e0(param_1,param_2,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1066f457c; end: 1066f45f7; -[SCLensExplorerQueryFactory refreshLensesWithDataSource:] */

void FUN_1066f457c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cd100;
  _objc_retain(param_3);
  func_0x00010c125040(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4c2e0(param_1,param_2,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1066f45f8; end: 1066f4853; -[SCLensExplorerQueryFactory batchRefreshLensesWithDataSources:] */

void FUN_1066f45f8(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cd2e8;
  func_0x00010c0934a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cd100;
  func_0x00010c125040(PTR_PTR_1126cd100);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b6640(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar3 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
  if (puVar3 != (undefined *)0x0) {
    lVar9 = *plStack_120;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        uVar8 = *(undefined8 *)(lStack_128 + (long)puVar10 * 8);
        uVar4 = uVar8;
        func_0x00010c155f60(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar2,param_2,uVar4);
        _objc_release(uVar4);
        func_0x00010bf123e0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar2,param_2,uVar8);
        _objc_release(uVar8);
        puVar10 = puVar10 + 1;
      } while (puVar3 != puVar10);
      puVar3 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(param_3);
  func_0x00010c2b7220(puVar1,param_2,puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cd1f0;
  _objc_alloc();
  puVar10 = PTR_PTR_1126cd2f0;
  func_0x00010c098240(PTR_PTR_1126cd2f0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar10;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar10;
  func_0x00010c03c460(puVar3,param_2,puVar10,puVar5,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar10);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126cd100;
    _objc_retain(puVar7);
    func_0x00010c151d20(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be4c2e0(param_3,param_2,puVar1,puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(puVar1);
    puVar3 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066f4854; end: 1066f48cf; -[SCLensExplorerQueryFactory fetchTailLensesWithDataSource:] */

void FUN_1066f4854(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cd100;
  _objc_retain(param_3);
  func_0x00010c151d20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4c2e0(param_1,param_2,puVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1066f48d0; end: 1066f4b0f; -[SCLensExplorerQueryFactory _lensesQueryWithQueryType:sectionDataSource:] */

void FUN_1066f48d0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126cd2e8;
  _objc_retain(param_3);
  func_0x00010c0934a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b6640();
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010c155f60(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2b7e40(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010c155f60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126cd100;
  func_0x00010c151d20(PTR_PTR_1126cd100);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(puVar4);
  puVar4 = puVar3;
  if ((uVar5 & 1) == 0) {
    uVar2 = param_4;
    func_0x00010bf123e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf09f80(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  func_0x00010c2b7220(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cd1f0;
  _objc_alloc(PTR_PTR_1126cd1f0);
  puVar6 = PTR_PTR_1126cd2f0;
  func_0x00010c098240(PTR_PTR_1126cd2f0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c03c460(puVar3);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bddbeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1066f4b10; end: 1066f4b17; -[SCLensExplorerQueryFactory fetchCategoriesBatchWithPreselectedFeedId:] */

void FUN_1066f4b10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddbeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__categoriesQueryWithFeedId_reque_112554948,param_3,1);
  return;
}



/* Entry: 1066f4b18; end: 1066f4b1f; -[SCLensExplorerQueryFactory fetchCategoryWithFeedId:] */

void FUN_1066f4b18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddbeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__categoriesQueryWithFeedId_reque_112554948,param_3,0);
  return;
}


