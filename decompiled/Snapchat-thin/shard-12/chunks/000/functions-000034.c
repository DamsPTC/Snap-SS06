/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108c7add0; end: 108c7b0c7;  */

void FUN_108c7add0(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined4 uStack_1a4;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined4 uStack_180;
  undefined4 uStack_170;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  long *plStack_120;
  undefined1 uStack_111;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined1 *puStack_d8;
  undefined ***pppuStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126db3e8);
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_a0,param_1);
  }
  puVar2 = &uStack_111;
  FUN_108c7b6ec();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  _objc_retain(param_2);
  ppuStack_188 = &PTR_DAT_110862760;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  uStack_130 = 0;
  plStack_120 = (long *)0x0;
  uStack_f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_108 = 10;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_SUB_110862700;
  uStack_c0 = 0;
  uStack_c8 = 0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  plStack_a8 = (long *)0x0;
  puStack_1a0 = (undefined8 *)0x0;
  puStack_198 = (undefined8 *)0x0;
  uStack_190 = 0;
  uStack_1a4 = 0;
  puVar3 = &uStack_a0;
  uStack_158 = param_2;
  puStack_d8 = puVar2;
  pppuStack_d0 = &ppuStack_188;
  func_0x000107c310cc(puVar3,&ppuStack_110,&puStack_1a0,&uStack_1a4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (puStack_1a0 != (undefined8 *)0x0) {
    puStack_198 = puStack_1a0;
    __ZdlPv();
  }
  plVar1 = plStack_a8;
  ppuStack_110 = &PTR_SUB_110862700;
  plStack_a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_c8;
  func_0x000107c27dd4(&puStack_1a0);
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_DAT_110862760;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_128;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1a0 = &uStack_140;
  func_0x000107c27dd4(&puStack_1a0);
  _objc_release(uStack_158);
  func_0x000107c27da8(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_2);
  _objc_release(param_1);
  puVar5 = PTR_PTR_1126db3f0;
  FUN_108c7bee8(PTR_PTR_1126db3f0,puVar4);
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 != (undefined *)0x0) {
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108c7b0c8; end: 108c7b243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108c7b0c8(undefined1 *param_1,long param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 **ppuVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined *unaff_x22;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined1 *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined1 *puStack_2b8;
  undefined8 *puStack_2b0;
  undefined1 *puStack_2a8;
  undefined1 **ppuStack_2a0;
  code *pcStack_298;
  undefined8 uStack_290;
  long lStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined4 uStack_24c;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 auStack_1f8 [128];
  long lStack_178;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_2);
  lVar10 = param_2;
  func_0x00010bf52a60();
  if (lVar10 != 0) {
    lVar9 = *plStack_110;
    do {
      lVar11 = 0;
      do {
        if (*plStack_110 != lVar9) {
          _objc_enumerationMutation(param_2);
        }
        unaff_x22 = *(undefined **)(lStack_118 + lVar11 * 8);
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        FUN_108c7add0(param_1,unaff_x22);
        _objc_release(unaff_x22);
        lVar11 = lVar11 + 1;
      } while (lVar10 != lVar11);
      lVar10 = param_2;
      func_0x00010bf52a60();
    } while (lVar10 != 0);
  }
  _objc_release(param_2);
  _objc_release(param_2);
  puVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  puVar12 = &uStack_290;
  pcStack_128 = FUN_108c7b244;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(puVar1);
  _objc_opt_class(PTR_PTR_1126db3e8);
  if (puVar1 == (undefined1 *)0x0) {
    uStack_200 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_230,puVar1);
  }
  lStack_248 = 0;
  lStack_240 = 0;
  uStack_238 = 0;
  uStack_24c = 0;
  puVar2 = &uStack_230;
  func_0x000107c310d0(puVar2,&lStack_248,&uStack_24c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_248 != 0) {
    lStack_240 = lStack_248;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_208);
  _objc_release(uStack_218);
  _objc_release(uStack_220);
  _objc_release(puVar1);
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  lStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  plStack_280 = (long *)0x0;
  _objc_retain(puVar2);
  puVar7 = auStack_1f8;
  puVar3 = puVar2;
  func_0x00010bf52a60();
  if (puVar3 != (undefined8 *)0x0) {
    lVar10 = *plStack_280;
    do {
      puVar12 = (undefined8 *)0x0;
      do {
        if (*plStack_280 != lVar10) {
          _objc_enumerationMutation(puVar2);
        }
        unaff_x22 = PTR_PTR_1126db3f0;
        FUN_108c7bee8(PTR_PTR_1126db3f0,*(undefined8 *)(lStack_288 + (long)puVar12 * 8));
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x22 != (undefined *)0x0) {
          func_0x00010c25ed40(puVar1);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        _objc_release(unaff_x22);
        puVar12 = (undefined8 *)((long)puVar12 + 1);
      } while (puVar3 != puVar12);
      puVar7 = auStack_1f8;
      puVar3 = puVar2;
      puVar12 = &uStack_290;
      func_0x00010bf52a60();
    } while (puVar3 != (undefined8 *)0x0);
  }
  _objc_release(puVar2);
  _objc_release(puVar2);
  puVar4 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar5 = puVar4;
  __Unwind_Resume();
  ppuVar6 = &puStack_2d0;
  pcStack_298 = FUN_108c7b470;
  puStack_2c0 = unaff_x22;
  puStack_2b8 = puVar4;
  puStack_2b0 = puVar2;
  puStack_2a8 = puVar1;
  ppuStack_2a0 = &puStack_130;
  _objc_retain(puVar12);
  _objc_retain(puVar7);
  puStack_2c8 = PTR_PTR_1126fdf18;
  puStack_2d0 = puVar5;
  _objc_msgSendSuper2(&puStack_2d0,PTR_s_init_1125d9248);
  if (ppuVar6 != (undefined1 **)0x0) {
    puVar1 = (undefined1 *)puVar12;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)((long)ppuVar6 + (long)_DAT_112779300);
    *(undefined1 **)((long)ppuVar6 + (long)_DAT_112779300) = puVar1;
    _objc_release(uVar8);
    puVar1 = puVar7;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)((long)ppuVar6 + (long)_DAT_112779304);
    *(undefined1 **)((long)ppuVar6 + (long)_DAT_112779304) = puVar1;
    _objc_release(uVar8);
  }
  _objc_release(puVar7);
  _objc_release(puVar12);
  return (undefined1 *)ppuVar6;
}



/* Entry: 108c7b244; end: 108c7b46f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108c7b244(undefined1 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined *unaff_x22;
  long lVar8;
  undefined8 *puVar9;
  undefined1 *puStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined1 *puStack_198;
  undefined8 *puStack_190;
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_12c;
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar9 = &uStack_170;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_1);
  _objc_opt_class(PTR_PTR_1126db3e8);
  if (param_1 == (undefined1 *)0x0) {
    uStack_e0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_110,param_1);
  }
  lStack_128 = 0;
  lStack_120 = 0;
  uStack_118 = 0;
  uStack_12c = 0;
  puVar1 = &uStack_110;
  func_0x000107c310d0(puVar1,&lStack_128,&uStack_12c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_128 != 0) {
    lStack_120 = lStack_128;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_e8);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(param_1);
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  _objc_retain(puVar1);
  puVar6 = auStack_d8;
  puVar2 = puVar1;
  func_0x00010bf52a60();
  if (puVar2 != (undefined8 *)0x0) {
    lVar8 = *plStack_160;
    do {
      puVar9 = (undefined8 *)0x0;
      do {
        if (*plStack_160 != lVar8) {
          _objc_enumerationMutation(puVar1);
        }
        unaff_x22 = PTR_PTR_1126db3f0;
        FUN_108c7bee8(PTR_PTR_1126db3f0,*(undefined8 *)(lStack_168 + (long)puVar9 * 8));
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x22 != (undefined *)0x0) {
          func_0x00010c25ed40(param_1);
          _objc_unsafeClaimAutoreleasedReturnValue();
        }
        _objc_release(unaff_x22);
        puVar9 = (undefined8 *)((long)puVar9 + 1);
      } while (puVar2 != puVar9);
      puVar6 = auStack_d8;
      puVar2 = puVar1;
      puVar9 = &uStack_170;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined8 *)0x0);
  }
  _objc_release(puVar1);
  _objc_release(puVar1);
  puVar3 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_release(puVar1);
  _objc_release(puVar1);
  _objc_release(param_1);
  puVar4 = puVar3;
  __Unwind_Resume();
  ppuVar5 = &puStack_1b0;
  pcStack_178 = FUN_108c7b470;
  puStack_1a0 = unaff_x22;
  puStack_198 = puVar3;
  puStack_190 = puVar1;
  puStack_188 = param_1;
  puStack_180 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  _objc_retain(puVar6);
  puStack_1a8 = PTR_PTR_1126fdf18;
  puStack_1b0 = puVar4;
  _objc_msgSendSuper2(&puStack_1b0,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined1 **)0x0) {
    puVar3 = (undefined1 *)puVar9;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)((long)ppuVar5 + (long)_DAT_112779300);
    *(undefined1 **)((long)ppuVar5 + (long)_DAT_112779300) = puVar3;
    _objc_release(uVar7);
    puVar3 = puVar6;
    func_0x00010bf51e00();
    uVar7 = *(undefined8 *)((long)ppuVar5 + (long)_DAT_112779304);
    *(undefined1 **)((long)ppuVar5 + (long)_DAT_112779304) = puVar3;
    _objc_release(uVar7);
  }
  _objc_release(puVar6);
  _objc_release(puVar9);
  return (undefined1 *)ppuVar5;
}



/* Entry: 108c7b470; end: 108c7b52b; -[SCSnapchatterSnapshotInfo initWithUserId:snapshotsPbSnapsData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108c7b470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fdf18;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112779300);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112779300) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112779304);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112779304) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108c7b52c; end: 108c7b54f; -[SCSnapchatterSnapshotInfo copyWithZone:] */

undefined8 FUN_108c7b52c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108c7b550; end: 108c7b5d3; -[SCSnapchatterSnapshotInfo hash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_108c7b550(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + _DAT_112779300);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112779304);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108c7b664:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108c7b670;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + (long)_DAT_112779300);
      if ((lVar5 == *(long *)((long)param_3 + (long)_DAT_112779300)) ||
         (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined8 **)((long)puVar3 + (long)_DAT_112779304);
        if (puVar6 != *(undefined8 **)((long)param_3 + (long)_DAT_112779304)) {
          func_0x00010c071ae0();
          goto LAB_108c7b670;
        }
        goto LAB_108c7b664;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108c7b670:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108c7b5d4; end: 108c7b68b; -[SCSnapchatterSnapshotInfo isEqual:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_108c7b5d4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108c7b664:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108c7b670;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + (long)_DAT_112779300);
      if ((lVar3 == *(long *)(param_3 + (long)_DAT_112779300)) ||
         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + (long)_DAT_112779304);
        if (lVar3 != *(long *)(param_3 + (long)_DAT_112779304)) {
          func_0x00010c071ae0();
          goto LAB_108c7b670;
        }
        goto LAB_108c7b664;
      }
    }
    lVar3 = 0;
  }
LAB_108c7b670:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108c7b68c; end: 108c7b69b; -[SCSnapchatterSnapshotInfo userId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108c7b68c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112779300);
}



/* Entry: 108c7b69c; end: 108c7b6ab; -[SCSnapchatterSnapshotInfo snapshotsPbSnapsData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108c7b69c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112779304);
}



/* Entry: 108c7b6ac; end: 108c7b6eb; -[SCSnapchatterSnapshotInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108c7b6ac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112779304,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112779300,0);
  return;
}



/* Entry: 108c7b6ec; end: 108c7b74f;  */

undefined ** FUN_108c7b6ec(void)

{
  int iVar1;
  
  if ((bRam0000000113829a48 & 1) == 0) {
    iVar1 = 0x13829a48;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_113292ec8,0x100000000);
      ___cxa_guard_release(0x113829a48);
    }
  }
  return &PTR_PTR_113292ec8;
}



/* Entry: 108c7b750; end: 108c7b7d7;  */

void FUN_108c7b750(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108c7b7d8; end: 108c7b863;  */

void FUN_108c7b7d8(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c2923e0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108c7b864; end: 108c7b86f; +[SCSnapchatterSnapshotInfo table] */

undefined * FUN_108c7b864(void)

{
  return &UNK_10f50f262;
}



/* Entry: 108c7b870; end: 108c7b9a3; +[SCSnapchatterSnapshotInfo immutableObjectParse:bufferSize:] */

void FUN_108c7b870(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126db3e8;
  _objc_alloc(PTR_PTR_1126db3e8);
  lVar5 = (long)*piVar1;
  uVar3 = *(ushort *)((long)piVar1 - lVar5);
  if (uVar3 < 5) {
    puVar7 = (undefined *)0x0;
  }
  else {
    uVar6 = (ulong)((ushort *)((long)piVar1 - lVar5))[2];
    if (uVar6 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar6);
      puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = (long)*piVar1;
      uVar3 = *(ushort *)((long)piVar1 - lVar5);
    }
    if ((6 < uVar3) && (*(short *)((long)piVar1 + (6 - lVar5)) != 0)) {
      puVar8 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x00010bffa160();
      goto LAB_108c7b948;
    }
  }
  puVar8 = (undefined *)0x0;
LAB_108c7b948:
  func_0x00010c05bba0(puVar4,param_2,puVar7,puVar8);
  _objc_release(puVar8);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108c7b9a4; end: 108c7b9c7; +[SCSnapchatterSnapshotInfo objectClassFunctionPointer] */

undefined1  [16] FUN_108c7b9a4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x108c7b9c0;
  auVar1._0_8_ = 0x108c7b9b8;
  return auVar1;
}



/* Entry: 108c7b9c8; end: 108c7bac3;  */

void FUN_108c7b9c8(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar3 = PTR_PTR_1126db3f0;
  if (param_2 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c245f80(param_2);
    _objc_retainAutoreleasedReturnValue();
    FUN_108c7bac4(puVar3,0xffffffffffffffff,lVar1,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  *(undefined4 *)(puVar3 + 0x10) = 1;
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108c7bac4; end: 108c7bb8f;  */

undefined1 * FUN_108c7bac4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_40;
  undefined *puStack_38;
  
  plVar1 = &lStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_38 = PTR_PTR_1126fdf20;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      _objc_release(uVar2);
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_4;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 108c7bb90; end: 108c7bee7;  */

void FUN_108c7bb90(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_1;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x000107c310d8(puVar5,&UNK_10f50f280);
        if (puVar5 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010c2923e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar5,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar5;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar5;
            _sqlite3_column_int64(puVar5,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126db3e8);
            _sqlite3_column_blob(puVar5,1);
            _sqlite3_column_bytes(puVar5,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar5);
            if (puVar3 == (undefined *)0x0) goto LAB_108c7be38;
            puVar5 = PTR_PTR_1126db3f0;
            _objc_alloc(PTR_PTR_1126db3f0);
            puVar2 = puVar3;
            func_0x00010c2923e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c245f80(puVar3);
            _objc_retainAutoreleasedReturnValue();
            FUN_108c7bac4(puVar5,puVar1,puVar2,puVar4);
            param_1 = puVar3;
            goto LAB_108c7bc78;
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar5 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126db3e8);
      puVar3 = puVar5;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar5);
      if (puVar3 != (undefined *)0x0) {
        puVar5 = PTR_PTR_1126db3f0;
        _objc_alloc(PTR_PTR_1126db3f0);
        puVar2 = puVar3;
        func_0x00010c2923e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c245f80(puVar3);
        _objc_retainAutoreleasedReturnValue();
        FUN_108c7bac4(puVar5,puVar1,puVar2,puVar4);
        param_1 = puVar3;
LAB_108c7bc78:
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_108c7be40;
      }
LAB_108c7be38:
      param_1 = (undefined *)0x0;
    }
  }
  puVar5 = (undefined *)0x0;
LAB_108c7be40:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 108c7bee8; end: 108c7bf5b;  */

void FUN_108c7bee8(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_108c7bb90();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 108c7bf5c; end: 108c7bfbb;  */

void FUN_108c7bf5c(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126db3e8;
    _objc_alloc(PTR_PTR_1126db3e8);
    func_0x00010c05bba0();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108c7bfbc; end: 108c7bfeb; -[SCSnapchatterSnapshotInfoChangeRequest .cxx_destruct] */

void FUN_108c7bfbc(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 108c7bfec; end: 108c7bff7; -[SCSnapchatterSnapshotInfoChangeRequest table] */

undefined * FUN_108c7bfec(void)

{
  return &UNK_10f50f262;
}



/* Entry: 108c7bff8; end: 108c7c03f; -[SCSnapchatterSnapshotInfoChangeRequest createTableWithSQLite:] */

void FUN_108c7bff8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10df9ef29,0x8b,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 108c7c040; end: 108c7c3c7; -[SCSnapchatterSnapshotInfoChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_108c7c040(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_108c7bf5c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108c7c3c8(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x000107c310d8(param_3,&UNK_10f50f304);
    if (lVar6 == 0) goto LAB_108c7c364;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_108c7c364;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126db3e8);
    func_0x00010c21c9a0(puVar7);
LAB_108c7c34c:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x000107c310d8(param_3,&UNK_10f50f2cb);
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126db3e8);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_108c7c370;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_108c7c370;
    }
    FUN_108c7bf5c(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_108c7c3c8(param_4,puVar5);
    func_0x000107c27dc4(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x000107c310d8(param_3,&UNK_10f50f34a);
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126db3e8);
        func_0x00010c21c9a0(puVar7);
        goto LAB_108c7c34c;
      }
    }
LAB_108c7c364:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_108c7c370:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 108c7c3c8; end: 108c7c613;  */

ulong FUN_108c7c3c8(ulong param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  
  _objc_retain(param_2);
  pcVar4 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar4 == (char *)0x0) {
    uVar9 = 0;
    goto LAB_108c7c4c8;
  }
  pcVar5 = pcVar4;
  _CFStringGetCStringPtr(pcVar4,0x8000100);
  uVar9 = param_1;
  if (pcVar5 != (char *)0x0) {
    pcVar6 = pcVar5;
    _strlen(pcVar5);
    func_0x000107c27df0(param_1,pcVar5,pcVar6);
    goto LAB_108c7c4c8;
  }
  pcVar5 = pcVar4;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar5 == (char *)0x0) {
    pcVar5 = pcVar4;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar5 != (char *)0x0) goto LAB_108c7c488;
    uVar9 = 0;
  }
  else {
LAB_108c7c488:
    pcVar7 = pcVar5;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar8 = pcVar5;
    func_0x00010c08fa60(pcVar5);
    pcVar6 = "";
    if (pcVar7 != (char *)0x0) {
      pcVar6 = pcVar7;
    }
    func_0x000107c27df0(param_1,pcVar6,pcVar8);
  }
  _objc_release(pcVar5);
LAB_108c7c4c8:
  _objc_release(pcVar4);
  pcVar5 = param_2;
  func_0x00010c245f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (pcVar5 == (char *)0x0) {
    uVar10 = 0;
  }
  else {
    pcVar6 = pcVar5;
    _objc_retainAutorelease(pcVar5);
    func_0x00010bf25f00();
    pcVar7 = pcVar5;
    func_0x00010c08fa60(pcVar5);
    uVar10 = param_1;
    func_0x000107c27df8(param_1,pcVar6,pcVar7);
  }
  _objc_release(pcVar5);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x000107c27de4(param_1,6,uVar10 & 0xffffffff);
  func_0x000107c27ddc(param_1,4,uVar9 & 0xffffffff);
  func_0x000107c27dc0(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(pcVar5);
  _objc_release(pcVar4);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 108c7c614; end: 108c7c61f;  */

undefined ** FUN_108c7c614(void)

{
  return &PTR____CFConstantStringClassReference_110eefe98;
}



/* Entry: 108c7c620; end: 108c7c7a3;  */

ulong FUN_108c7c620(ulong param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain();
  _objc_retain(param_2);
  uVar2 = param_1;
  func_0x00010c067f00();
  bVar1 = (uint)uVar2 == 0;
  if ((uVar2 & 1) != 0) {
    uVar7 = param_2;
    func_0x00010c0fb000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0cf3c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c08fa60();
    bVar1 = uVar6 != 0;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar7);
  }
  uVar7 = (ulong)bVar1;
  if (((uint)uVar2 >> 1 & 1) != 0) {
    uVar2 = param_2;
    func_0x00010bf8d9a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar7;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar2);
    if (bVar1 == false) {
      uVar2 = uVar3;
      func_0x00010bf8d6c0();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar2;
      func_0x00010c08fa60();
      if (uVar7 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar3;
        func_0x00010c071720(uVar3);
      }
      _objc_release(uVar2);
    }
    else {
      uVar7 = 1;
    }
    _objc_release(uVar3);
  }
  _objc_release(param_2);
  _objc_release(param_1);
  return uVar7;
}



/* Entry: 108c7c7a4; end: 108c7c87b;  */

undefined8 FUN_108c7c7a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf1f440(param_1,param_2,&PTR____CFConstantStringClassReference_110eefed8,0,0);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108c7c87c; end: 108c7c8eb;  */

void FUN_108c7c87c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  _objc_retain();
  FUN_108c7c614();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c25d780(param_1,param_2,&PTR____CFConstantStringClassReference_110eeff38,uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108c7c8ec; end: 108c7cb17;  */

long FUN_108c7c8ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010c067f00(param_1,param_2,&PTR____CFConstantStringClassReference_110eeff58,0,0);
  _objc_release(param_1);
  return (long)(int)uVar1;
}



/* Entry: 108c7cb18; end: 108c7cb23;  */

bool FUN_108c7cb18(uint param_1)

{
  return param_1 < 9;
}



/* Entry: 108c7cb24; end: 108c7cb9f;  */

undefined * FUN_108c7cb24(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372e190 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ef0038,
                        &UNK_10df9f050,&UNK_10df9f0bc,4,FUN_108c7cba0,0);
    do {
      if (puRam000000011372e190 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372e190;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372e190,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372e190 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372e190;
}



/* Entry: 108c7cba0; end: 108c7cbab;  */

bool FUN_108c7cba0(uint param_1)

{
  return param_1 < 4;
}



/* Entry: 108c7cbac; end: 108c7cc27;  */

undefined * FUN_108c7cbac(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372e198 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ef0058,
                        &UNK_10df9f0cc,&UNK_10df9f110,3,FUN_108c7cc28,0);
    do {
      if (puRam000000011372e198 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372e198;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372e198,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372e198 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372e198;
}



/* Entry: 108c7cc28; end: 108c7cc33;  */

bool FUN_108c7cc28(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108c7cc34; end: 108c7ccaf;  */

undefined * FUN_108c7cc34(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372e1a0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ef0078,
                        &UNK_10df9f0cc,&UNK_10df9f11c,3,FUN_108c7ccb0,0);
    do {
      if (puRam000000011372e1a0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372e1a0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372e1a0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372e1a0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372e1a0;
}



/* Entry: 108c7ccb0; end: 108c7ccbb;  */

bool FUN_108c7ccb0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108c7ccbc; end: 108c7cd37;  */

undefined * FUN_108c7ccbc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372e1a8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ef0098,
                        &UNK_10df9f128,&UNK_10df9f1d8,0x12,FUN_108c7cd38,0);
    do {
      if (puRam000000011372e1a8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372e1a8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372e1a8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372e1a8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372e1a8;
}



/* Entry: 108c7cd38; end: 108c7cd43;  */

bool FUN_108c7cd38(uint param_1)

{
  return param_1 < 0x12;
}



/* Entry: 108c7cd44; end: 108c7cdbf;  */

undefined * FUN_108c7cd44(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372e1b0 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ef00b8,
                        &UNK_10df9f220,&UNK_10df9f234,3,FUN_108c7cdc0,0);
    do {
      if (puRam000000011372e1b0 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372e1b0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372e1b0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372e1b0 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372e1b0;
}



/* Entry: 108c7cdc0; end: 108c7cdcb;  */

bool FUN_108c7cdc0(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108c7cdcc; end: 108c7ce47;  */

undefined * FUN_108c7cdcc(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372e1b8 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ef00d8,
                        &UNK_10df9f240,&UNK_10df9f250,2,FUN_108c7ce48,0);
    do {
      if (puRam000000011372e1b8 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372e1b8;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372e1b8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372e1b8 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372e1b8;
}



/* Entry: 108c7ce48; end: 108c7ce53;  */

bool FUN_108c7ce48(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 108c7ce54; end: 108c7cebb; +[GetUserRecentlyActiveRequest descriptor] */

void FUN_108c7ce54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e1c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb9bc0,
                        &PTR____CFConstantStringClassReference_110ef00f8,&PTR_DAT_113292f40,
                        &PTR_DAT_113293178,2,0x10,0x1c);
    puRam000000011372e1c0 = puVar1;
  }
  return;
}



/* Entry: 108c7cebc; end: 108c7cf23; +[GetUserRecentlyActiveResponse descriptor] */

void FUN_108c7cebc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e1c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb9c10,
                        &PTR____CFConstantStringClassReference_110ef0118,&PTR_DAT_113292f40,
                        &PTR_DAT_113292f58,1,0x10,0x1c);
    puRam000000011372e1c8 = puVar1;
  }
  return;
}



/* Entry: 108c7cf24; end: 108c7cf8b; +[UserRecentlyActiveStatus descriptor] */

void FUN_108c7cf24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e1d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb9c60,
                        &PTR____CFConstantStringClassReference_110ef0138,&PTR_DAT_113292f40,
                        &PTR_s_userId_1132931b8,2,0x10,0x1c);
    puRam000000011372e1d0 = puVar1;
  }
  return;
}



/* Entry: 108c7cf8c; end: 108c7cff3; +[GetFriendsUserScoreRequest descriptor] */

void FUN_108c7cf8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e1d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb9cb0,
                        &PTR____CFConstantStringClassReference_110ef0158,&PTR_DAT_113292f40,
                        &PTR_DAT_1132931f8,2,0x18,0x1c);
    puRam000000011372e1d8 = puVar1;
  }
  return;
}



/* Entry: 108c7cff4; end: 108c7d05b; +[GetFriendsUserScoreResponse descriptor] */

void FUN_108c7cff4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e1e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb9d00,
                        &PTR____CFConstantStringClassReference_110ef0178,&PTR_DAT_113292f40,
                        &PTR_DAT_113292f78,1,0x10,0x1c);
    puRam000000011372e1e0 = puVar1;
  }
  return;
}



/* Entry: 108c7d05c; end: 108c7d0c3; +[UserScore descriptor] */

void FUN_108c7d05c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e1e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb9d50,
                        &PTR____CFConstantStringClassReference_110dd6018,&PTR_DAT_113292f40,
                        &PTR_s_userId_113293238,2,0x18,0x1c);
    puRam000000011372e1e8 = puVar1;
  }
  return;
}



/* Entry: 108c7d0c4; end: 108c7d12b; +[GetFriendsUserMetadataRequest descriptor] */

void FUN_108c7d0c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e1f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb9da0,
                        &PTR____CFConstantStringClassReference_110ef0198,&PTR_DAT_113292f40,
                        &PTR_DAT_113293278,2,0x18,0x1c);
    puRam000000011372e1f0 = puVar1;
  }
  return;
}



/* Entry: 108c7d12c; end: 108c7d193; +[GetFriendsUserMetadataResponse descriptor] */

void FUN_108c7d12c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e1f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb9df0,
                        &PTR____CFConstantStringClassReference_110ef01b8,&PTR_DAT_113292f40,
                        &PTR_DAT_113292f98,1,0x10,0x1c);
    puRam000000011372e1f8 = puVar1;
  }
  return;
}



/* Entry: 108c7d194; end: 108c7d1fb; +[FriendUserMetadata descriptor] */

void FUN_108c7d194(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e200 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb9e40,
                        &PTR____CFConstantStringClassReference_110ef01d8,&PTR_DAT_113292f40,
                        &PTR_s_userId_1132934b8,3,0x20,0x1c);
    puRam000000011372e200 = puVar1;
  }
  return;
}



/* Entry: 108c7d1fc; end: 108c7d263; +[InitializeMerlinRequest descriptor] */

void FUN_108c7d1fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e208 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb9e90,
                        &PTR____CFConstantStringClassReference_110ef01f8,&PTR_DAT_113292f40,0,0,4,
                        0x1c);
    puRam000000011372e208 = puVar1;
  }
  return;
}



/* Entry: 108c7d264; end: 108c7d2cb; +[InitializeMerlinResponse descriptor] */

void FUN_108c7d264(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e210 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb9ee0,
                        &PTR____CFConstantStringClassReference_110ef0218,&PTR_DAT_113292f40,
                        &PTR_s_status_113292fb8,1,8,0x1c);
    puRam000000011372e210 = puVar1;
  }
  return;
}



/* Entry: 108c7d2cc; end: 108c7d333; +[AcceptTermsOfUseRequest descriptor] */

void FUN_108c7d2cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e218 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb9f30,
                        &PTR____CFConstantStringClassReference_110ef0238,&PTR_DAT_113292f40,
                        &PTR_DAT_113292fd8,1,8,0x1c);
    puRam000000011372e218 = puVar1;
  }
  return;
}



/* Entry: 108c7d334; end: 108c7d3d3; +[AcceptTermsOfUseResponse descriptor] */

void FUN_108c7d334(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e220 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb9f80,
                        &PTR____CFConstantStringClassReference_110ef0258,&PTR_DAT_113292f40,
                        &PTR_s_status_113292ff8,1,8,0x1c);
    puRam000000011372e220 = puVar1;
  }
  return;
}



/* Entry: 108c7d3d4; end: 108c7d43b; +[SetUserDisplayNameRequest descriptor] */

void FUN_108c7d3d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e228 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bb9fd0,
                        &PTR____CFConstantStringClassReference_110ef0278,&PTR_DAT_113292f40,
                        &PTR_s_displayName_113293018,1,0x10,0x1c);
    puRam000000011372e228 = puVar1;
  }
  return;
}



/* Entry: 108c7d43c; end: 108c7d4a3; +[UpdateUserDeviceInformationRequest descriptor] */

void FUN_108c7d43c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e230 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bba020,
                        &PTR____CFConstantStringClassReference_110ef0298,&PTR_DAT_113292f40,
                        &PTR_DAT_113293038,1,0x10,0x1c);
    puRam000000011372e230 = puVar1;
  }
  return;
}



/* Entry: 108c7d4a4; end: 108c7d50b; +[SetUserDisplayNameResponse descriptor] */

void FUN_108c7d4a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e238 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bba070,
                        &PTR____CFConstantStringClassReference_110ef02b8,&PTR_DAT_113292f40,
                        &PTR_s_status_113293058,1,8,0x1c);
    puRam000000011372e238 = puVar1;
  }
  return;
}



/* Entry: 108c7d50c; end: 108c7d573; +[UpdateUserDeviceInformationResponse descriptor] */

void FUN_108c7d50c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e240 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bba0c0,
                        &PTR____CFConstantStringClassReference_110ef02d8,&PTR_DAT_113292f40,0,0,4,
                        0x1c);
    puRam000000011372e240 = puVar1;
  }
  return;
}



/* Entry: 108c7d574; end: 108c7d5db; +[GetSnapchatterPublicInfoRequest descriptor] */

void FUN_108c7d574(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e248 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bba110,
                        &PTR____CFConstantStringClassReference_110ef02f8,&PTR_DAT_113292f40,
                        &PTR_s_userIdsArray_1132932b8,2,0x10,0x1c);
    puRam000000011372e248 = puVar1;
  }
  return;
}



/* Entry: 108c7d5dc; end: 108c7d643; +[GetSnapchatterPublicInfoResponse descriptor] */

void FUN_108c7d5dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e250 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bba160,
                        &PTR____CFConstantStringClassReference_110ef0318,&PTR_DAT_113292f40,
                        &PTR_DAT_113293078,1,0x10,0x1c);
    puRam000000011372e250 = puVar1;
  }
  return;
}



/* Entry: 108c7d644; end: 108c7d6ab; +[SnapchatterPublicInfo descriptor] */

void FUN_108c7d644(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e258 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bba1b0,
                        &PTR____CFConstantStringClassReference_110ef0338,&PTR_DAT_113292f40,
                        &PTR_s_userId_113293c38,0xc,0x48,0x1c);
    puRam000000011372e258 = puVar1;
  }
  return;
}



/* Entry: 108c7d6ac; end: 108c7d727; +[BitmojiPublicInfo descriptor] */

undefined * FUN_108c7d6ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e260 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bba200,
                        &PTR____CFConstantStringClassReference_110ef0358,&PTR_DAT_113292f40,
                        &PTR_s_bitmojiAvatarId_113293978,6,0x38,0x1c);
    func_0x00010c2289e0();
    puRam000000011372e260 = puVar1;
  }
  return puRam000000011372e260;
}



/* Entry: 108c7d728; end: 108c7d78f; +[SyncFriendDataRequest descriptor] */

void FUN_108c7d728(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e268 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bba250,
                        &PTR____CFConstantStringClassReference_110ef0378,&PTR_DAT_113292f40,
                        &PTR_DAT_113293518,3,0x20,0x1c);
    puRam000000011372e268 = puVar1;
  }
  return;
}



/* Entry: 108c7d790; end: 108c7d81b; +[OutgoingSyncRequest descriptor] */

undefined * FUN_108c7d790(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e270 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bba2a0,
                        &PTR____CFConstantStringClassReference_110ef0398,&PTR_DAT_113292f40,
                        &PTR_s_token_113293578,3,0x20,0x1c);
    func_0x00010c229040();
    puRam000000011372e270 = puVar1;
  }
  return puRam000000011372e270;
}



/* Entry: 108c7d81c; end: 108c7d883; +[OutgoingFriendsToSync descriptor] */

void FUN_108c7d81c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e278 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bba2f0,
                        &PTR____CFConstantStringClassReference_110ef03b8,&PTR_DAT_113292f40,
                        &PTR_s_friendIdsArray_113293098,1,0x10,0x1c);
    puRam000000011372e278 = puVar1;
  }
  return;
}



/* Entry: 108c7d884; end: 108c7d8eb; +[SyncFriendDataResponse descriptor] */

void FUN_108c7d884(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e280 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bba340,
                        &PTR____CFConstantStringClassReference_110ef03d8,&PTR_DAT_113292f40,
                        &PTR_DAT_1132937b8,4,0x28,0x1c);
    puRam000000011372e280 = puVar1;
  }
  return;
}



/* Entry: 108c7d8ec; end: 108c7d953; +[OutgoingSyncData descriptor] */

void FUN_108c7d8ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e288 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bba390,
                        &PTR____CFConstantStringClassReference_110ef03f8,&PTR_DAT_113292f40,
                        &PTR_s_metadata_1132935d8,3,0x20,0x1c);
    puRam000000011372e288 = puVar1;
  }
  return;
}



/* Entry: 108c7d954; end: 108c7d9bb; +[BestFriendsSyncData descriptor] */

void FUN_108c7d954(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e290 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bba3e0,
                        &PTR____CFConstantStringClassReference_110ef0418,&PTR_DAT_113292f40,
                        &PTR_DAT_113293838,5,0x28,0x1c);
    puRam000000011372e290 = puVar1;
  }
  return;
}



/* Entry: 108c7d9bc; end: 108c7da23; +[SyncMetadata descriptor] */

void FUN_108c7d9bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e298 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bba430,
                        &PTR____CFConstantStringClassReference_110ef0438,&PTR_DAT_113292f40,
                        &PTR_DAT_1132932f8,2,0x10,0x1c);
    puRam000000011372e298 = puVar1;
  }
  return;
}



/* Entry: 108c7da24; end: 108c7da8b; +[FriendsSyncContext descriptor] */

void FUN_108c7da24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e2a0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bba480,
                        &PTR____CFConstantStringClassReference_110ef0458,&PTR_DAT_113292f40,
                        &PTR_DAT_113293b18,9,0x38,0x1c);
    puRam000000011372e2a0 = puVar1;
  }
  return;
}



/* Entry: 108c7da8c; end: 108c7daf3; +[InvitedUser descriptor] */

void FUN_108c7da8c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e2a8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bba4d0,
                        &PTR____CFConstantStringClassReference_110ef0478,&PTR_DAT_113292f40,
                        &PTR_s_userId_113293638,3,0x20,0x1c);
    puRam000000011372e2a8 = puVar1;
  }
  return;
}



/* Entry: 108c7daf4; end: 108c7db5b; +[GetUserSaturnMetadataRequest descriptor] */

void FUN_108c7daf4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e2b0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bba520,
                        &PTR____CFConstantStringClassReference_110ef0498,&PTR_DAT_113292f40,
                        &PTR_s_version_1132930b8,1,0x10,0x1c);
    puRam000000011372e2b0 = puVar1;
  }
  return;
}



/* Entry: 108c7db5c; end: 108c7dbc3; +[GetUserSaturnMetadataResponse descriptor] */

void FUN_108c7db5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e2b8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bba570,
                        &PTR____CFConstantStringClassReference_110ef04b8,&PTR_DAT_113292f40,
                        &PTR_DAT_113293338,2,0x18,0x1c);
    puRam000000011372e2b8 = puVar1;
  }
  return;
}



/* Entry: 108c7dbc4; end: 108c7dc2b; +[UserSaturnMetadata descriptor] */

void FUN_108c7dbc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e2c0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bba5c0,
                        &PTR____CFConstantStringClassReference_110ef04d8,&PTR_DAT_113292f40,
                        &PTR_DAT_1132930d8,1,0x10,0x1c);
    puRam000000011372e2c0 = puVar1;
  }
  return;
}



/* Entry: 108c7dc2c; end: 108c7dc93; +[GetFriendsSaturnMetadataRequest descriptor] */

void FUN_108c7dc2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e2c8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bba610,
                        &PTR____CFConstantStringClassReference_110ef04f8,&PTR_DAT_113292f40,
                        &PTR_DAT_113293378,2,0x18,0x1c);
    puRam000000011372e2c8 = puVar1;
  }
  return;
}



/* Entry: 108c7dc94; end: 108c7dcfb; +[GetFriendsSaturnMetadataResponse descriptor] */

void FUN_108c7dc94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e2d0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bba660,
                        &PTR____CFConstantStringClassReference_110ef0518,&PTR_DAT_113292f40,
                        &PTR_DAT_1132930f8,1,0x10,0x1c);
    puRam000000011372e2d0 = puVar1;
  }
  return;
}



/* Entry: 108c7dcfc; end: 108c7dd63; +[FriendSaturnMetadata descriptor] */

void FUN_108c7dcfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e2d8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bba6b0,
                        &PTR____CFConstantStringClassReference_110ef0538,&PTR_DAT_113292f40,
                        &PTR_s_userId_113293698,3,0x20,0x1c);
    puRam000000011372e2d8 = puVar1;
  }
  return;
}



/* Entry: 108c7dd64; end: 108c7ddcb; +[SaturnCalendarEvent descriptor] */

void FUN_108c7dd64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e2e0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bba700,
                        &PTR____CFConstantStringClassReference_110ef0558,&PTR_DAT_113292f40,
                        &PTR_s_title_1132938d8,5,0x30,0x1c);
    puRam000000011372e2e0 = puVar1;
  }
  return;
}



/* Entry: 108c7ddcc; end: 108c7de33; +[FriendCalendarVersion descriptor] */

void FUN_108c7ddcc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e2e8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bba750,
                        &PTR____CFConstantStringClassReference_110ef0578,&PTR_DAT_113292f40,
                        &PTR_s_userId_1132933b8,2,0x18,0x1c);
    puRam000000011372e2e8 = puVar1;
  }
  return;
}



/* Entry: 108c7de34; end: 108c7de9b; +[GetUserIdByUsernameRequest descriptor] */

void FUN_108c7de34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e2f0 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bba7a0,
                        &PTR____CFConstantStringClassReference_110ef0598,&PTR_DAT_113292f40,
                        &PTR_DAT_1132933f8,2,0x10,0x1c);
    puRam000000011372e2f0 = puVar1;
  }
  return;
}



/* Entry: 108c7de9c; end: 108c7df03; +[GetUserIdByUsernameResponse descriptor] */

void FUN_108c7de9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e2f8 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bba7f0,
                        &PTR____CFConstantStringClassReference_110ef05b8,&PTR_DAT_113292f40,
                        &PTR_DAT_113293118,1,0x10,0x1c);
    puRam000000011372e2f8 = puVar1;
  }
  return;
}



/* Entry: 108c7df04; end: 108c7df6b; +[UsernameUserIdMapping descriptor] */

void FUN_108c7df04(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e300 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bba840,
                        &PTR____CFConstantStringClassReference_110ef05d8,&PTR_DAT_113292f40,
                        &PTR_DAT_113293438,2,0x18,0x1c);
    puRam000000011372e300 = puVar1;
  }
  return;
}



/* Entry: 108c7df6c; end: 108c7dfd3; +[GetFollowersRequest descriptor] */

void FUN_108c7df6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e308 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bba890,
                        &PTR____CFConstantStringClassReference_110ef05f8,&PTR_DAT_113292f40,
                        &PTR_s_cursor_113293138,1,0x10,0x1c);
    puRam000000011372e308 = puVar1;
  }
  return;
}



/* Entry: 108c7dfd4; end: 108c7e03b; +[GetFollowersResponse descriptor] */

void FUN_108c7dfd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e310 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bba8e0,
                        &PTR____CFConstantStringClassReference_110ef0618,&PTR_DAT_113292f40,
                        &PTR_DAT_113293478,2,0x18,0x1c);
    puRam000000011372e310 = puVar1;
  }
  return;
}



/* Entry: 108c7e03c; end: 108c7e0b7; +[Follower descriptor] */

undefined * FUN_108c7e03c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e318 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bba930,
                        &PTR____CFConstantStringClassReference_110ef0638,&PTR_DAT_113292f40,
                        &PTR_s_userId_113293a38,7,0x40,0x1c);
    func_0x00010c2289e0();
    puRam000000011372e318 = puVar1;
  }
  return puRam000000011372e318;
}



/* Entry: 108c7e0b8; end: 108c7e11f; +[GetBlockedUsersRequest descriptor] */

void FUN_108c7e0b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e320 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bba980,
                        &PTR____CFConstantStringClassReference_110ef0658,&PTR_DAT_113292f40,
                        &PTR_s_cursor_113293158,1,0x10,0x1c);
    puRam000000011372e320 = puVar1;
  }
  return;
}



/* Entry: 108c7e120; end: 108c7e187; +[GetBlockedUsersResponse descriptor] */

void FUN_108c7e120(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e328 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bba9d0,
                        &PTR____CFConstantStringClassReference_110ef0678,&PTR_DAT_113292f40,
                        &PTR_DAT_1132936f8,3,0x18,0x1c);
    puRam000000011372e328 = puVar1;
  }
  return;
}



/* Entry: 108c7e188; end: 108c7e1ef; +[BlockedUser descriptor] */

void FUN_108c7e188(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e330 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bbaa20,
                        &PTR____CFConstantStringClassReference_110ef0698,&PTR_DAT_113292f40,
                        &PTR_s_userId_113293758,3,0x20,0x1c);
    puRam000000011372e330 = puVar1;
  }
  return;
}



/* Entry: 108c7e1f0; end: 108c7e2d3; +[SCAtlasCreatorSubscriptionProductsInfo descriptor] */

void FUN_108c7e1f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam000000011372e338 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae978;
    func_0x00010bf00dc0(PTR_PTR_1126ae978,param_2,&PTR_PTR_112bbaac0,
                        &PTR____CFConstantStringClassReference_110ef06b8,&PTR_DAT_113293db8,
                        &PTR_DAT_113293dd0,2,0x10,0x1c);
    puRam000000011372e338 = puVar1;
  }
  return;
}



/* Entry: 108c7e2d4; end: 108c7e2df;  */

bool FUN_108c7e2d4(uint param_1)

{
  return param_1 < 0xb;
}



/* Entry: 108c7e2e0; end: 108c7e35b;  */

undefined * FUN_108c7e2e0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372e348 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ef06f8,
                        &UNK_10df9f358,&UNK_10df9f374,3,FUN_108c7e35c,0);
    do {
      if (puRam000000011372e348 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372e348;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372e348,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372e348 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372e348;
}



/* Entry: 108c7e35c; end: 108c7e367;  */

bool FUN_108c7e35c(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 108c7e368; end: 108c7e3e3;  */

undefined * FUN_108c7e368(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372e350 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ef0718,
                        &UNK_10df9f380,&UNK_10df9f394,2,FUN_108c7e3e4,0);
    do {
      if (puRam000000011372e350 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372e350;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372e350,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372e350 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372e350;
}



/* Entry: 108c7e3e4; end: 108c7e3ef;  */

bool FUN_108c7e3e4(uint param_1)

{
  return param_1 < 2;
}



/* Entry: 108c7e3f0; end: 108c7e46b;  */

undefined * FUN_108c7e3f0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372e358 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ef0738,
                        &UNK_10df9f39c,&UNK_10df9f3f4,8,FUN_108c7e46c,0);
    do {
      if (puRam000000011372e358 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372e358;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372e358,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372e358 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372e358;
}



/* Entry: 108c7e46c; end: 108c7e483;  */

bool FUN_108c7e46c(uint param_1)

{
  return param_1 < 7 || param_1 == 99;
}



/* Entry: 108c7e484; end: 108c7e4ff;  */

undefined * FUN_108c7e484(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam000000011372e360 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae980;
    func_0x00010bf00e00(PTR_PTR_1126ae980,param_2,&PTR____CFConstantStringClassReference_110ef0758,
                        &UNK_10df9f414,&UNK_10df9f428,2,FUN_108c7e500,0);
    do {
      if (puRam000000011372e360 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam000000011372e360;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x11372e360,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam000000011372e360 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam000000011372e360;
}


