/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105306164; end: 105306167; -[SCStateTransitionGraph reset] */

void FUN_105306164(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be39370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__init_11256be78);
  return;
}



/* Entry: 105306168; end: 1053061b3; -[SCStateTransitionGraph resetVisits] */

void FUN_105306168(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1053061b4; end: 105306447; -[SCStateTransitionGraph _newVisitedTransitionsTo:] */

undefined8 * FUN_1053061b4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  long unaff_x22;
  long unaff_x23;
  undefined8 uVar10;
  long unaff_x24;
  long unaff_x25;
  long unaff_x26;
  long lVar11;
  undefined *unaff_x27;
  long lVar12;
  long unaff_x28;
  double dVar13;
  double dVar14;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined1 auStack_248 [128];
  long lStack_1c8;
  long lStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  long lStack_158;
  undefined8 *puStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  dVar14 = 0.0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar9 = *(long *)(param_1 + 8);
  puStack_150 = puVar1;
  _objc_retain(lVar9);
  puVar1 = &uStack_140;
  lVar2 = lVar9;
  func_0x00010bf52a60();
  lStack_148 = lVar2;
  if (lVar2 != 0) {
    unaff_x23 = *plStack_130;
    lStack_158 = unaff_x23;
    do {
      unaff_x22 = 0;
      do {
        dVar13 = dVar14;
        if (*plStack_130 != unaff_x23) {
          _objc_enumerationMutation(lVar9);
          dVar13 = dVar14;
        }
        unaff_x26 = *(long *)(lStack_138 + unaff_x22 * 8);
        unaff_x24 = unaff_x26;
        func_0x00010c252440();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = param_3;
        func_0x00010c252440();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = param_3;
        func_0x00010c27bc20(param_3);
        _objc_retainAutoreleasedReturnValue();
        unaff_x28 = unaff_x26;
        func_0x00010c27bc20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26f380(lVar2,param_2,unaff_x28);
        dVar14 = dVar13;
        _objc_release(unaff_x28);
        _objc_release(lVar2);
        unaff_x27 = PTR_PTR_1126b72f8;
        _objc_alloc();
        func_0x00010c016720();
        lVar2 = param_1;
        func_0x00010be34380(param_1,param_2,unaff_x24,unaff_x25);
        if ((int)lVar2 != 0) {
          uVar3 = *(ulong *)(param_1 + 0x10);
          func_0x00010bf4b900(uVar3,param_2,unaff_x27);
          if ((uVar3 & 1) == 0) {
            dVar14 = dVar13 * 1000.0;
            unaff_x28 = (long)dVar14;
            puVar4 = PTR_PTR_1126b7308;
            _objc_opt_new(PTR_PTR_1126b7308);
            func_0x00010c1a1100();
            func_0x00010c216900(puVar4,param_2,unaff_x25);
            func_0x00010c219aa0(puVar4,param_2,unaff_x28);
            func_0x00010c27bc40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c21a2a0(puVar4,param_2,unaff_x26);
            _objc_release(unaff_x26);
            func_0x00010befa120(puStack_150,param_2,puVar4);
            func_0x00010befa120(*(undefined8 *)(param_1 + 0x10),param_2,unaff_x27);
            unaff_x23 = lStack_158;
            _objc_release(puVar4);
          }
        }
        _objc_release(unaff_x27);
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        unaff_x22 = unaff_x22 + 1;
      } while (lStack_148 != unaff_x22);
      puVar1 = &uStack_140;
      lVar2 = lVar9;
      func_0x00010bf52a60();
      lStack_148 = lVar2;
    } while (lVar2 != 0);
  }
  _objc_release(lVar9);
  lVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return puStack_150;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_105306448;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1c0 = unaff_x28;
  puStack_1b8 = unaff_x27;
  lStack_1b0 = unaff_x26;
  lStack_1a8 = unaff_x25;
  lStack_1a0 = unaff_x24;
  lStack_198 = unaff_x23;
  lStack_190 = unaff_x22;
  lStack_188 = param_1;
  lStack_180 = lVar9;
  lStack_178 = param_3;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain(puVar1);
  lVar5 = *(long *)(lVar2 + 0x10);
  func_0x00010bf51e00();
  lStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  plStack_280 = (long *)0x0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  _objc_retain();
  lVar9 = lVar5;
  func_0x00010bf52a60(lVar5,param_2,&uStack_290,auStack_248,0x10);
  if (lVar9 != 0) {
    lVar11 = *plStack_280;
    do {
      lVar12 = 0;
      do {
        if (*plStack_280 != lVar11) {
          _objc_enumerationMutation(lVar5);
        }
        uVar10 = *(undefined8 *)(lStack_288 + lVar12 * 8);
        uVar7 = uVar10;
        func_0x00010bfba9a0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar7;
        func_0x00010c0720c0();
        _objc_release(uVar7);
        if ((int)uVar6 != 0) {
          func_0x00010c12d360(*(undefined8 *)(lVar2 + 0x10),param_2,uVar10);
        }
        lVar12 = lVar12 + 1;
      } while (lVar9 != lVar12);
      lVar9 = lVar5;
      func_0x00010bf52a60(lVar5,param_2,&uStack_290,auStack_248,0x10);
    } while (lVar9 != 0);
  }
  _objc_release(lVar5);
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar7 = puVar1[3];
  puVar1[3] = puVar4;
  _objc_release(uVar7);
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar7 = puVar1[2];
  puVar1[2] = puVar4;
  _objc_release(uVar7);
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  puVar8 = (undefined8 *)puVar1[1];
  puVar1[1] = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return puVar8;
}



/* Entry: 105306448; end: 10530659f; -[SCStateTransitionGraph _markTransitionsUnvisitedFrom:] */

void FUN_105306448(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
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
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010bf51e00();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain();
  lVar2 = lVar1;
  func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar2 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar1);
        }
        uVar6 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        uVar5 = uVar6;
        func_0x00010bfba9a0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar5;
        func_0x00010c0720c0();
        _objc_release(uVar5);
        if ((int)uVar3 != 0) {
          func_0x00010c12d360(*(undefined8 *)(param_1 + 0x10),param_2,uVar6);
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_3 + 0x18);
  *(undefined **)(param_3 + 0x18) = puVar4;
  _objc_release(uVar5);
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_3 + 0x10);
  *(undefined **)(param_3 + 0x10) = puVar4;
  _objc_release(uVar5);
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_3 + 8);
  *(undefined **)(param_3 + 8) = puVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 1053065a0; end: 105306603; -[SCStateTransitionGraph _init] */

void FUN_1053065a0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105306604; end: 105306653; -[SCStateTransitionGraph _updatePendingStates:] */

void FUN_105306604(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c12d360(uVar1,param_2,param_3);
  func_0x00010befa120(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105306654; end: 10530665b; -[SCStateTransitionGraph _addPath:] */

void FUN_105306654(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_addObject__11259c1f0)
  ;
  return;
}



/* Entry: 10530665c; end: 1053066e3; -[SCStateTransitionGraph _hasPath:to:] */

undefined8 FUN_10530665c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b72f8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c016720();
  _objc_release(param_4);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf4b900(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  return uVar2;
}



/* Entry: 1053066e4; end: 10530671f; -[SCStateTransitionGraph .cxx_destruct] */

void FUN_1053066e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105306720; end: 1053067bb; -[SCStateTransitionLogger initWithEventLogger:transitionGraph:] */

undefined1 *
FUN_105306720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7770;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1053067bc; end: 1053068d3; -[SCStateTransitionLogger logState:triggeredBy:] */

void FUN_1053067bc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c2a0220();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = 0x10;
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      lVar8 = param_1 + 8;
      _objc_loadWeakRetained();
      func_0x00010c0b1f20();
      _objc_release(lVar8);
      lVar7 = lVar7 + 1;
    } while (lVar3 != lVar7);
    uVar5 = 0x10;
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar5);
  lVar6 = *(long *)(lVar2 + 0x10);
  func_0x00010c2a0220();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar6);
      }
      lVar4 = lVar2 + 8;
      _objc_loadWeakRetained(lVar4);
      func_0x00010c0b2ea0();
      _objc_release(lVar4);
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar6;
    func_0x00010bf52a60();
  }
  _objc_release(lVar6);
  _objc_release(uVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0b0930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1053068d4; end: 105306a1b; -[SCStateTransitionLogger logUserTrackedState:triggeredBy:userId:] */

void FUN_1053068d4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 in_x4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(in_x4);
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c2a0220();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      lVar4 = param_1 + 8;
      _objc_loadWeakRetained(lVar4);
      func_0x00010c0b2ea0();
      _objc_release(lVar4);
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _objc_release(in_x4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c0b0930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 105306a1c; end: 105306a23; -[SCStateTransitionLogger logState:] */

void FUN_105306a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b0930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_logState_triggeredBy__112609c58,param_3,0);
  return;
}



/* Entry: 105306a24; end: 105306a2b; -[SCStateTransitionLogger resetVisits] */

void FUN_105306a24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c139d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_resetVisits_11262c180);
  return;
}



/* Entry: 105306a2c; end: 105306a57; -[SCStateTransitionLogger .cxx_destruct] */

void FUN_105306a2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105306a58; end: 105306afb; -[SCTransitionPath initWithFrom:to:] */

undefined1 *
FUN_105306a58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7778;
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



/* Entry: 105306afc; end: 105306c1b; -[SCTransitionPath isEqual:] */

ulong FUN_105306afc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar4 = 1;
  }
  else {
    if (param_3 != 0) {
      uVar4 = param_1;
      _objc_opt_class(param_1);
      uVar1 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar4);
      if ((uVar1 & 1) != 0) {
        _objc_retain(param_3);
        uVar1 = param_1;
        func_0x00010bfba9a0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = param_3;
        func_0x00010bfba9a0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar1;
        func_0x00010c071ae0();
        if ((int)uVar4 == 0) {
          uVar4 = 0;
        }
        else {
          func_0x00010c2719c0(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = param_3;
          func_0x00010c2719c0(param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = param_1;
          func_0x00010c071ae0(param_1);
          _objc_release(uVar3);
          _objc_release(param_1);
        }
        _objc_release(uVar2);
        _objc_release(uVar1);
        _objc_release(param_3);
        goto LAB_105306bfc;
      }
    }
    uVar4 = 0;
  }
LAB_105306bfc:
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 105306c1c; end: 105306c87; -[SCTransitionPath hash] */

ulong FUN_105306c1c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  func_0x00010bfba9a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfde980();
  func_0x00010c2719c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  _objc_release(uVar1);
  return uVar3 ^ uVar2;
}



/* Entry: 105306c88; end: 105306c93; -[SCTransitionPath from] */

void FUN_105306c88(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,8,1);
  return;
}



/* Entry: 105306c94; end: 105306c9b; -[SCTransitionPath setFrom:] */

void FUN_105306c94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 105306c9c; end: 105306ca7; -[SCTransitionPath to] */

void FUN_105306c9c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x10,1);
  return;
}



/* Entry: 105306ca8; end: 105306caf; -[SCTransitionPath setTo:] */

void FUN_105306ca8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 105306cb0; end: 105306cdf; -[SCTransitionPath .cxx_destruct] */

void FUN_105306cb0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105306ce0; end: 105306d7b; +[SCTransitionState newWithState:triggeredBy:] */

undefined8
FUN_105306ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc_init(param_1);
  func_0x00010c209fc0();
  _objc_release(param_3);
  func_0x00010c21a2a0(param_1,param_2,param_4);
  _objc_release(param_4);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21a280(param_1,param_2,puVar1);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 105306d7c; end: 105306e43; -[SCTransitionState isEqual:] */

ulong FUN_105306d7c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    uVar2 = 1;
  }
  else {
    if (param_3 != 0) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar1 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar1 & 1) != 0) {
        _objc_retain(param_3);
        func_0x00010c252440(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_3;
        func_0x00010c252440(param_3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_3);
        uVar2 = param_1;
        func_0x00010c071ae0(param_1);
        _objc_release(uVar1);
        _objc_release(param_1);
        goto LAB_105306e28;
      }
    }
    uVar2 = 0;
  }
LAB_105306e28:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 105306e44; end: 105306e7f; -[SCTransitionState hash] */

undefined8 FUN_105306e44(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c252440();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfde980();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105306e80; end: 105306e8b; -[SCTransitionState state] */

void FUN_105306e80(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,8,1);
  return;
}



/* Entry: 105306e8c; end: 105306e93; -[SCTransitionState setState:] */

void FUN_105306e8c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 105306e94; end: 105306e9f; -[SCTransitionState trigger] */

void FUN_105306e94(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x10,1);
  return;
}



/* Entry: 105306ea0; end: 105306ea7; -[SCTransitionState setTrigger:] */

void FUN_105306ea0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 105306ea8; end: 105306eb3; -[SCTransitionState trigeredTime] */

void FUN_105306ea8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x18,1);
  return;
}



/* Entry: 105306eb4; end: 105306ebb; -[SCTransitionState setTrigeredTime:] */

void FUN_105306eb4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 105306ebc; end: 105306ef7; -[SCTransitionState .cxx_destruct] */

void FUN_105306ebc(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105306ef8; end: 105306fc3; -[SCMultiSourceCountryProviderImpl initWithCarrierNetworkInfoProvider:graphene:IPCountryCodeProvider:] */

undefined1 *
FUN_105306ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e7780;
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



/* Entry: 105306fc4; end: 105307013; -[SCMultiSourceCountryProviderImpl isoCountryCode] */

void FUN_105306fc4(undefined8 param_1)

{
  if (lRam00000001136bb478 != -1) {
    func_0x00010002a2fc(0x1136bb478,&PTR___NSConcreteGlobalBlock_110877fa0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c083f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_isoCountryCodeEvaluatedFromSourc_1125fe9d8,uRam00000001136bb480);
  return;
}



/* Entry: 105307014; end: 1053071e3; -[SCMultiSourceCountryProviderImpl isoCountryCodeEvaluatedFromSources:] */

void FUN_105307014(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_1053071e4;
  uStack_88 = 0x1053071f4;
  func_0x00010be45b00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = puStack_a0[5];
  uStack_80 = param_1;
  if (lVar2 == 0) {
    uVar3 = 0;
    do {
      uVar1 = param_3;
      func_0x00010bf529e0();
      if (uVar1 <= uVar3) {
        lVar2 = 0;
        goto LAB_105307188;
      }
      uVar1 = param_3;
      func_0x00010c0dfd40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0bcee0();
      _objc_release(uVar1);
      lVar2 = puStack_a0[5];
      uVar3 = uVar3 + 1;
    } while (lVar2 == 0);
    _objc_retain(lVar2);
  }
  else {
    _objc_retain(lVar2);
  }
LAB_105307188:
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1053071e4; end: 1053071fb;  */

void FUN_1053071e4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1053071fc; end: 1053072bb;  */

void FUN_1053071fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be45aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1053072bc; end: 1053072d7;  */

void FUN_1053072bc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110daf278;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1053072d8; end: 105307333; -[SCMultiSourceCountryProviderImpl _isoCountryCodeFromTweak] */

void FUN_1053072d8(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR____CFConstantStringClassReference_110daafd8;
  func_0x00010c28ed80(&PTR____CFConstantStringClassReference_110daafd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be453e0(param_1,param_2,ppuVar2);
  ppuVar1 = ppuVar2;
  if ((int)param_1 == 0) {
    ppuVar1 = (undefined **)0x0;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 105307334; end: 1053073ef; -[SCMultiSourceCountryProviderImpl _isoCountryCodeFromLocale] */

void FUN_105307334(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar4;
  func_0x00010bf53280();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar4);
  uVar3 = param_1;
  func_0x00010be453e0(param_1,param_2,puVar2);
  if ((int)uVar3 == 0) {
    func_0x00010be51fc0(param_1,param_2,&PTR____CFConstantStringClassReference_110db8558,0);
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x00010be51fc0(param_1,param_2,&PTR____CFConstantStringClassReference_110db8558,1);
    _objc_retain(puVar2);
    puVar4 = puVar2;
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1053073f0; end: 1053074c7; -[SCMultiSourceCountryProviderImpl _isoCountryCodeFromCarrier] */

void FUN_1053073f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf5e340();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf32ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c28ed80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar1);
  lVar4 = param_1;
  func_0x00010be453e0(param_1,param_2,uVar3);
  if ((int)lVar4 == 0) {
    func_0x00010be51fc0(param_1,param_2,&PTR____CFConstantStringClassReference_110dd1678,0);
    uVar5 = 0;
  }
  else {
    func_0x00010be51fc0(param_1,param_2,&PTR____CFConstantStringClassReference_110dd1678,1);
    _objc_retain(uVar3);
    uVar5 = uVar3;
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1053074c8; end: 105307567; -[SCMultiSourceCountryProviderImpl _isoCountryCodeFromIPAddress] */

void FUN_1053074c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar3 = param_1;
  func_0x00010be453e0(param_1,param_2,uVar2);
  if ((int)lVar3 == 0) {
    func_0x00010be51fc0(param_1,param_2,&PTR____CFConstantStringClassReference_110dd1658,0);
    uVar1 = 0;
  }
  else {
    func_0x00010be51fc0(param_1,param_2,&PTR____CFConstantStringClassReference_110dd1658,1);
    _objc_retain(uVar2);
    uVar1 = uVar2;
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105307568; end: 10530762b; -[SCMultiSourceCountryProviderImpl _isValidISOCountryCode:] */

undefined * FUN_105307568(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bdc17c0(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_10530762c;
    puStack_40 = &UNK_110856a28;
    _objc_retain(param_3);
    puVar3 = puVar2;
    lStack_38 = param_3;
    func_0x00010bf04920(puVar2,param_2,&puStack_58);
    _objc_release(lStack_38);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 10530762c; end: 10530764f;  */

bool FUN_10530762c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf32ee0(lVar1,param_2,param_2);
  return lVar1 == 0;
}



/* Entry: 105307650; end: 105307723; -[SCMultiSourceCountryProviderImpl _logCountryCodeWithSource:isValid:] */

void FUN_105307650(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if ((param_4 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = param_1;
    func_0x00010be6e6c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    FUN_105307b9c(uVar3,lVar1,param_3,1);
    _objc_release(lVar1);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010be6e6c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25d8c0(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  FUN_105307dcc(uVar3,param_1,param_3,puVar2,1);
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105307724; end: 1053077a3; -[SCMultiSourceCountryProviderImpl _osVersion] */

void FUN_105307724(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
  }
  else {
    func_0x00010c0eb960(&uStack_38,puVar1);
  }
  _objc_release(puVar1);
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd1698);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053077a4; end: 1053077df; -[SCMultiSourceCountryProviderImpl .cxx_destruct] */

void FUN_1053077a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053077e0; end: 1053078e7;  */

void FUN_1053077e0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR_PTR_1126b7310;
  func_0x00010bf32cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b7310;
  puStack_58 = puVar2;
  func_0x00010bfe4f80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b7310;
  puStack_50 = puVar3;
  func_0x00010c09e1e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b7310;
  puStack_48 = puVar4;
  func_0x00010bf6a900();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar5;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam00000001136bb480;
  puRam00000001136bb480 = puVar6;
  _objc_release(uVar1);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar6 = puVar2;
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_1053078e8;
  puStack_90 = puVar5;
  puStack_88 = puVar4;
  puStack_80 = puVar3;
  puStack_78 = puVar2;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_98,puVar6);
  puVar2 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_a0,auStack_98);
  func_0x00010bf11fe0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b7318;
  _objc_alloc(PTR_PTR_1126b7318);
  func_0x00010c02cb60();
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1053078e8; end: 1053079cb; -[SCMultiSourceCountryServiceProvider provide] */

void FUN_1053078e8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b7318;
  _objc_alloc(PTR_PTR_1126b7318);
  func_0x00010c02cb60();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1053079cc; end: 105307a0b;  */

void FUN_1053079cc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be20960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105307a0c; end: 105307ae3; -[SCMultiSourceCountryServiceProvider _getMultiSourceCountryProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105307a0c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126b7320;
  _objc_alloc(PTR_PTR_1126b7320);
  lVar2 = param_1 + _DAT_112721518;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf32dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b7328;
  _objc_opt_new(PTR_PTR_1126b7328);
  param_1 = param_1 + _DAT_11272151c;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010bf534e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffcde0(puVar1,param_2,lVar3,puVar4,lVar5);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105307ae4; end: 105307b27; -[SCMultiSourceCountryServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105307ae4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272151c);
  _objc_destroyWeak(param_1 + _DAT_112721518);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112721520);
  return;
}



/* Entry: 105307b28; end: 105307b9b; -[SCGrapheneCountryProviderMetric2 init] */

undefined1 * FUN_105307b28(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e7788;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105307b9c; end: 105307dcb;  */

/* WARNING: Removing unreachable block (ram,0x000105308054) */

void FUN_105307b9c(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  long *plVar9;
  undefined8 *unaff_x24;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  char *pcStack_190;
  char *pcStack_188;
  char *pcStack_180;
  char *pcStack_178;
  undefined1 **ppuStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 *puStack_148;
  undefined8 auStack_140 [3];
  undefined1 auStack_128 [24];
  undefined8 auStack_110 [2];
  char cStack_f9;
  long lStack_f8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar6 = param_3;
  pcVar7 = param_4;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_1 != 0) {
    plVar9 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "";
    pcVar6 = acStack_98;
    (**(code **)(*plVar9 + 0x18))(plVar9);
    pcStack_80 = acStack_98;
    func_0x00010007e5dc(&pcStack_80);
    lVar8 = 0;
    pcVar7 = param_4;
    do {
      if ((&cStack_49)[lVar8] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar8));
      }
      lVar8 = lVar8 + -0x18;
    } while (lVar8 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    _objc_release(param_3);
    if (cStack_61 < '\0') {
      __ZdlPv(auStack_78[0]);
    }
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume();
    pcStack_a8 = FUN_105307dcc;
    lStack_f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_b0 = &stack0xfffffffffffffff0;
    _objc_retain(pcVar1);
    _objc_retain(pcVar6);
    _objc_retain(pcVar7);
    if (pcVar2 != (char *)0x0) {
      plVar9 = *(long **)(pcVar2 + 8);
      _objc_retain(pcVar1);
      if (pcVar1 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        pcVar2 = pcVar1;
        _objc_retainAutorelease(pcVar1);
        func_0x00010bdc3520();
      }
      _objc_release(pcVar1);
      func_0x00010002b838(auStack_140,pcVar2);
      _objc_retain(pcVar6);
      if (pcVar6 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar6);
        pcVar2 = pcVar6;
        func_0x00010bdc3520(pcVar6);
      }
      _objc_release(pcVar6);
      func_0x00010002b838(auStack_128,pcVar2);
      _objc_retain(pcVar7);
      if (pcVar7 == (char *)0x0) {
        pcVar2 = "";
      }
      else {
        _objc_retainAutorelease(pcVar7);
        pcVar2 = pcVar7;
        func_0x00010bdc3520(pcVar7);
      }
      _objc_release(pcVar7);
      func_0x00010002b838(auStack_110,pcVar2);
      uStack_160 = 0;
      uStack_158 = 0;
      uStack_150 = 0;
      func_0x00010007e1e8(&uStack_160,auStack_140,&lStack_f8,3);
      (**(code **)(*plVar9 + 0x18))(plVar9,&UNK_110878040,&uStack_160,param_5);
      puStack_148 = (undefined1 *)&uStack_160;
      func_0x00010007e5dc(&puStack_148);
      lVar8 = 0;
      do {
        if ((&cStack_f9)[lVar8] < '\0') {
          __ZdlPv(*(undefined8 *)((long)auStack_110 + lVar8));
        }
        lVar8 = lVar8 + -0x18;
        unaff_x24 = &uStack_160;
      } while (lVar8 != -0x48);
    }
    _objc_release(pcVar7);
    _objc_release(pcVar6);
    pcVar2 = pcVar1;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_f8) {
      ___stack_chk_fail();
      _objc_release(pcVar7);
      do {
        unaff_x24 = unaff_x24 + -3;
      } while (unaff_x24 != auStack_140);
      _objc_release(pcVar7);
      _objc_release(pcVar6);
      _objc_release(pcVar1);
      pcVar3 = pcVar2;
      __Unwind_Resume(pcVar2);
      pcStack_168 = FUN_10530808c;
      pcStack_190 = pcVar2;
      pcStack_188 = pcVar7;
      pcStack_180 = pcVar6;
      pcStack_178 = pcVar1;
      ppuStack_170 = &puStack_b0;
      _objc_initWeak(auStack_198,pcVar3);
      puVar4 = PTR_PTR_1126ae720;
      _objc_copyWeak(auStack_1a0,auStack_198);
      func_0x00010bf11fe0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR_PTR_1126b7330;
      _objc_alloc(PTR_PTR_1126b7330);
      func_0x00010c00c1a0();
      _objc_release(puVar4);
      _objc_destroyWeak(auStack_1a0);
      _objc_destroyWeak(auStack_198);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
      return;
    }
    return;
  }
  return;
}



/* Entry: 105307dcc; end: 10530808b;  */

/* WARNING: Removing unreachable block (ram,0x000105308054) */

void FUN_105307dcc(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *unaff_x24;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [8];
  char *pcStack_f0;
  char *pcStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    func_0x00010007e1e8(&uStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_110878040,&uStack_c0,param_5);
    puStack_a8 = (undefined1 *)&uStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar5 = 0;
    do {
      if ((&cStack_59)[lVar5] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar5));
      }
      lVar5 = lVar5 + -0x18;
      unaff_x24 = &uStack_c0;
    } while (lVar5 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x24 = (undefined8 *)((long)unaff_x24 + -0x18);
    } while (unaff_x24 != (undefined8 *)auStack_a0);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    pcVar2 = pcVar1;
    __Unwind_Resume(pcVar1);
    pcStack_c8 = FUN_10530808c;
    pcStack_f0 = pcVar1;
    pcStack_e8 = param_4;
    pcStack_e0 = param_3;
    pcStack_d8 = param_2;
    puStack_d0 = &stack0xfffffffffffffff0;
    _objc_initWeak(auStack_f8,pcVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_copyWeak(auStack_100,auStack_f8);
    func_0x00010bf11fe0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b7330;
    _objc_alloc(PTR_PTR_1126b7330);
    func_0x00010c00c1a0();
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_100);
    _objc_destroyWeak(auStack_f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  return;
}



/* Entry: 10530808c; end: 10530816f; -[SCDeviceCheckServiceProvider provide] */

void FUN_10530808c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b7330;
  _objc_alloc(PTR_PTR_1126b7330);
  func_0x00010c00c1a0();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105308170; end: 1053081af;  */

void FUN_105308170(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdfbd40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1053081b0; end: 1053081eb; -[SCDeviceCheckServiceProvider end] */

void FUN_1053081b0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126e7790;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1053081ec; end: 1053082eb; -[SCDeviceCheckServiceProvider _deviceCheckTokenFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053081ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b7338;
  _objc_alloc(PTR_PTR_1126b7338);
  lVar2 = param_1 + _DAT_112721528;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11272152c;
  _objc_loadWeakRetained(param_1);
  lVar5 = param_1;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038120(puVar1,param_2,lVar4,lVar5);
  _objc_release(lVar5);
  _objc_release(param_1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar6 = PTR__OBJC_CLASS___DCDevice_1126b7340;
  func_0x00010bf5e640(PTR__OBJC_CLASS___DCDevice_1126b7340);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c187220(puVar1,param_2,puVar6);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1053082ec; end: 10530832f; -[SCDeviceCheckServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053082ec(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272152c);
  _objc_destroyWeak(param_1 + _DAT_112721528);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112721530);
  return;
}



/* Entry: 105308330; end: 105308407; -[SCDeviceCheckFeature initWithPreferences:grapheneRegistry:] */

undefined1 *
FUN_105308330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7798;
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
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105308408; end: 1053084df; -[SCDeviceCheckFeature generateDeviceTokenWithCompletionHandler:] */

void FUN_105308408(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1053084e0; end: 10530851b;  */

void FUN_1053084e0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be1afa0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10530851c; end: 105308527; -[SCDeviceCheckFeature fetchDeviceTokenWithCompletionHandler:] */

void FUN_10530851c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa6470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_fetchDeviceTokenUsingCache_compl_1125c72c0,0,param_3);
  return;
}



/* Entry: 105308528; end: 105308607; -[SCDeviceCheckFeature fetchDeviceTokenUsingCache:completionHandler:] */

void FUN_105308528(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 105308608; end: 10530863f;  */

void FUN_105308608(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be10ea0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105308640; end: 105308757; -[SCDeviceCheckFeature _fetchDeviceTokenUsingCache:completionHandler:] */

void FUN_105308640(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_4);
  if (param_3 != 0) {
    lVar1 = param_1;
    func_0x00010be1ea00();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010bde02c0(param_1);
      (**(code **)(param_4 + 0x10))(param_4,lVar1);
      _objc_release(lVar1);
      goto LAB_105308720;
    }
  }
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010bdcd6c0(param_1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
LAB_105308720:
  _objc_release(param_4);
  return;
}



/* Entry: 105308758; end: 1053087b7;  */

void FUN_105308758(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be59d60();
  _objc_release(lVar1);
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1053087b8; end: 1053088c7; -[SCDeviceCheckFeature _appleDeviceCheckTokenWithCompletionHandler:] */

void FUN_1053087b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = param_1;
    func_0x00010bf5e640();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c080420();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((int)lVar3 != 0) {
      func_0x00010bf5e640(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(param_3);
      func_0x00010bfc0600(param_1);
      _objc_release(param_1);
      _objc_release(param_3);
      goto LAB_1053088a8;
    }
  }
  (**(code **)(param_3 + 0x10))(param_3,&PTR____CFConstantStringClassReference_110dd1758);
LAB_1053088a8:
  _objc_release(param_3);
  return;
}



/* Entry: 1053088c8; end: 10530892f;  */

void FUN_1053088c8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (param_2 != 0) {
    func_0x00010bf15da0(param_2,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010530892c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,&PTR____CFConstantStringClassReference_110dd1718);
  return;
}



/* Entry: 105308930; end: 105308a2b; -[SCDeviceCheckFeature _saveDeviceToken:] */

/* WARNING: Possible PIC construction at 0x0001053089e4: Changing call to branch */

void FUN_105308930(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    _objc_release(puVar1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
      return;
    }
    ___stack_chk_fail();
    func_0x00010c1d0560(*(undefined8 *)(param_3 + 8));
    uVar3 = *(undefined8 *)(param_3 + 8);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar3);
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c266b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar3,PTR_s_synchronize_112677508);
  return;
}



/* Entry: 105308a2c; end: 105308a63; -[SCDeviceCheckFeature _clearDeviceToken] */

void FUN_105308a2c(long param_1,undefined8 param_2)

{
  func_0x00010c1d0560(*(undefined8 *)(param_1 + 8),param_2,PTR____NSDictionary0__struct_11034ab58,
                      &PTR____CFConstantStringClassReference_110dd16b8);
                    /* WARNING: Could not recover jumptable at 0x00010c266b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_synchronize_112677508);
  return;
}



/* Entry: 105308a64; end: 105308b7f; -[SCDeviceCheckFeature _getDeviceToken] */

void FUN_105308a64(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_2 + 8);
  func_0x00010c0dff20(lVar1,param_3,&PTR____CFConstantStringClassReference_110dd16b8);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c0dff20(lVar1,param_3,&PTR____CFConstantStringClassReference_110dd16d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c0e00e0(lVar1,param_3,&PTR____CFConstantStringClassReference_110dd16f8);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar1;
      func_0x00010c0e00e0(lVar1,param_3,&PTR____CFConstantStringClassReference_110dd16d8);
      _objc_retainAutoreleasedReturnValue();
      if ((lVar2 == 0) || (func_0x00010c26f380(puVar3,param_3,lVar2), 120.0 < param_1)) {
        lVar5 = 0;
      }
      else {
        _objc_retain(lVar4);
        lVar5 = lVar4;
      }
      _objc_release(lVar4);
      _objc_release(lVar2);
      _objc_release(puVar3);
      goto LAB_105308b60;
    }
  }
  lVar5 = 0;
LAB_105308b60:
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 105308b80; end: 105308c53; -[SCDeviceCheckFeature _generateDeviceTokenBlockWithCompletion:] */

void FUN_105308b80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bdcd6c0(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 105308c54; end: 105308cbf;  */

void FUN_105308c54(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be98ea0(lVar1);
    lVar2 = *(long *)(param_1 + 0x20);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,1);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105308cc0; end: 105308df3; -[SCDeviceCheckFeature _logTokenType:] */

void FUN_105308cc0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b7348;
  func_0x00010c2732e0(PTR_PTR_1126b7348);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c08fa60();
  if (uVar2 == 0) {
    ppuVar6 = &PTR____CFConstantStringClassReference_110dd1798;
  }
  else {
    uVar2 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dd1718);
    if ((uVar2 & 1) == 0) {
      uVar2 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dd1758);
      if ((uVar2 & 1) == 0) {
        uVar2 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110dd1738);
        ppuVar6 = &PTR____CFConstantStringClassReference_110dd17f8;
        if ((int)uVar2 == 0) {
          ppuVar6 = &PTR____CFConstantStringClassReference_110dd1818;
        }
      }
      else {
        ppuVar6 = &PTR____CFConstantStringClassReference_110dd17d8;
      }
    }
    else {
      ppuVar6 = &PTR____CFConstantStringClassReference_110dd17b8;
    }
  }
  puVar3 = puVar1;
  func_0x00010c2ac460(puVar1,param_2,&PTR____CFConstantStringClassReference_110dad058,ppuVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf70000();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105308df4; end: 105308dfb; -[SCDeviceCheckFeature currentDevice] */

undefined8 FUN_105308df4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105308dfc; end: 105308e2b; -[SCDeviceCheckFeature setCurrentDevice:] */

void FUN_105308dfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105308e2c; end: 105308e73; -[SCDeviceCheckFeature .cxx_destruct] */

void FUN_105308e2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105308e74; end: 105308e9f; +[SCGrapheneDeviceCheckMetric tokenType] */

void FUN_105308e74(void)

{
  _objc_alloc(PTR_PTR_1126b7348);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105308ea0; end: 105308f3f; -[SCGrapheneDeviceCheckMetric description] */

void FUN_105308ea0(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110dd1838;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110dd1838,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126e77a0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 105308f40; end: 105309083; -[SCGrapheneRegistry deviceCheckGraphene] */

void FUN_105308f40(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105308fc8;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam00000001136bb490 != -1) {
    func_0x00010002a2fc(0x1136bb490,&puStack_48);
  }
  uVar1 = uRam00000001136bb488;
  _objc_retain(uRam00000001136bb488);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105309084; end: 1053090d7; -[SCCameraS2REntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105309084(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112721548);
  _objc_destroyWeak(param_1 + _DAT_112721550);
  _objc_destroyWeak(param_1 + _DAT_11272154c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112721544,0);
  return;
}



/* Entry: 1053090d8; end: 1053090df; -[SCCameraS2RLogProvider willDumpLogGivenProject:] */

undefined8 FUN_1053090d8(void)

{
  return 1;
}



/* Entry: 1053090e0; end: 1053091e3; -[SCCameraS2RLogProvider provideLogContentAsync:] */

void FUN_1053090e0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010bf070e0();
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c273200();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf660a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0(puVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  puVar5 = puVar1;
  func_0x00010bf64920(puVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_3 + 0x10))(param_3,puVar5,&PTR____CFConstantStringClassReference_110dd1898);
  _objc_release(param_3);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1053091e4; end: 1053091eb; -[SCCameraS2RLogProvider .cxx_destruct] */

void FUN_1053091e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1053091ec; end: 10530925f; -[SCTemporaryFileWriterImpl initWithNSDataWriter:] */

undefined1 * FUN_1053091ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e77b0;
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



/* Entry: 105309260; end: 1053092ff; -[SCTemporaryFileWriterImpl writeData:name:context:error:] */

void FUN_105309260(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfacf80(param_1,param_2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bdae0();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105309300; end: 105309383; -[SCTemporaryFileWriterImpl filePathForName:context:] */

void FUN_105309300(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dd18b8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x0001005c6500();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105309384; end: 10530941f; -[SCTemporaryFileWriterImpl writeData:exactName:context:error:] */

void FUN_105309384(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bfacf60(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bdae0();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105309420; end: 105309483; -[SCTemporaryFileWriterImpl filePathForExactName:] */

void FUN_105309420(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  func_0x0001005c6500();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25ce00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105309484; end: 10530948f; -[SCTemporaryFileWriterImpl .cxx_destruct] */

void FUN_105309484(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105309490; end: 1053094cf;  */

void FUN_105309490(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010becc6a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1053094d0; end: 10530954b; -[SCTemporaryFileWriterServiceProvider _tmpFileWriter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1053094d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b7360;
  _objc_alloc(PTR_PTR_1126b7360);
  param_1 = param_1 + _DAT_11272155c;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c0ddba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02d420(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10530954c; end: 105309583; -[SCTemporaryFileWriterServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10530954c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272155c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112721560);
  return;
}



/* Entry: 105309584; end: 10530958b; -[SCAppStateChangeNotifier notifyListener:] */

void FUN_105309584(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e28b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_onAppStateChanged__112616440);
  return;
}



/* Entry: 10530958c; end: 1053095c3; -[SCAppStateChangeNotifier registerListener:] */

undefined8 FUN_10530958c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return 0;
}



/* Entry: 1053095c4; end: 1053095cf; -[SCAppStateChangeNotifier .cxx_destruct] */

void FUN_1053095c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1053095d0; end: 1053095d3; -[SCDummyConnectivityChangeNotifier notifyListener:] */

void FUN_1053095d0(void)

{
  return;
}


