/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1084dc184; end: 1084dc3b3;  */

void FUN_1084dc184(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
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
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b47a0);
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
  FUN_108507e48();
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1084dc3b4; end: 1084dc5a7;  */

void FUN_1084dc3b4(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_194;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined4 uStack_160;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126b47a0);
  if (param_1 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_90,param_1);
  }
  puVar2 = &uStack_101;
  FUN_108507fc0();
  uStack_170 = 0xf;
  uStack_160 = 0x100;
  uStack_148 = 7;
  ppuStack_178 = &PTR_DAT_110a4fdb0;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_128 = 0;
  lStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  uStack_e6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_f8 = 10;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_FUN_110a4fd50;
  lStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  plStack_98 = (long *)0x0;
  lStack_190 = 0;
  lStack_188 = 0;
  uStack_180 = 0;
  uStack_194 = 0;
  puVar3 = &uStack_90;
  puStack_c8 = puVar2;
  pppuStack_c0 = &ppuStack_178;
  func_0x000107c310cc(puVar3,&ppuStack_100,&lStack_190,&uStack_194);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_190 != 0) {
    lStack_188 = lStack_190;
    __ZdlPv();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_FUN_110a4fd50;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b8 != 0) {
    lStack_b0 = lStack_b8;
    __ZdlPv();
  }
  plVar1 = plStack_110;
  ppuStack_178 = &PTR_DAT_110a4fdb0;
  plStack_110 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_130 != 0) {
    lStack_128 = lStack_130;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_68);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1084dc5a8; end: 1084dc687;  */

undefined8 * FUN_1084dc5a8(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110a4fd50;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1084dc688; end: 1084dc8b7;  */

void FUN_1084dc688(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
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
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126d8ff0);
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
  FUN_10851c320();
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1084dc8b8; end: 1084dcc77;  */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x0001084dcaf0 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_1084dc8b8(undefined8 *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined ***pppuVar4;
  undefined *puVar5;
  undefined ***pppuVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined ***pppuVar10;
  undefined1 *puVar11;
  undefined ***pppuVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined ***pppuVar15;
  undefined ***pppuVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 uStack_65c;
  undefined ***pppuStack_658;
  undefined8 *puStack_650;
  undefined8 uStack_648;
  undefined **appuStack_640 [3];
  undefined1 uStack_621;
  undefined **ppuStack_620;
  undefined **ppuStack_618;
  undefined8 uStack_610;
  byte bStack_607;
  byte bStack_606;
  byte bStack_605;
  undefined8 auStack_5d8 [3];
  long *plStack_5c0;
  long *plStack_5b8;
  undefined **ppuStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  long lStack_568;
  long lStack_560;
  undefined8 uStack_558;
  long *plStack_550;
  long *plStack_548;
  undefined1 uStack_531;
  undefined **ppuStack_530;
  undefined4 uStack_528;
  undefined4 uStack_518;
  undefined8 uStack_500;
  undefined1 *puStack_4f8;
  undefined ***pppuStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  undefined8 uStack_4d8;
  long *plStack_4d0;
  long *plStack_4c8;
  undefined **ppuStack_4c0;
  undefined4 uStack_4b8;
  short sStack_4a8;
  ushort uStack_4a6;
  undefined ***pppuStack_488;
  undefined ***pppuStack_480;
  long lStack_478;
  long lStack_470;
  undefined8 uStack_468;
  long *plStack_460;
  long *plStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  long lStack_398;
  undefined **appuStack_2f0 [17];
  long lStack_268;
  undefined4 uStack_1cc;
  undefined4 *puStack_1c8;
  undefined4 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined4 auStack_1b0 [7];
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 auStack_148 [6];
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 == 0) {
    _objc_opt_class(PTR_PTR_1126b47a0);
    if (param_1 == (undefined8 *)0x0) {
      uStack_160 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_188 = 0;
      ppuStack_190 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_190,param_1);
    }
    ppuStack_120 = (undefined **)0x0;
    ppuStack_118 = (undefined **)0x0;
    uStack_110 = 0;
    auStack_1b0[0] = 0;
    pppuVar4 = &ppuStack_190;
    pppuVar10 = &ppuStack_120;
    func_0x00010054c81c(pppuVar4,pppuVar10,auStack_1b0);
    _objc_retainAutoreleasedReturnValue();
    if (ppuStack_120 != (undefined **)0x0) {
      ppuStack_118 = ppuStack_120;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_168);
    _objc_release(uStack_178);
    _objc_release(uStack_180);
  }
  else {
    _objc_opt_class(PTR_PTR_1126b47a0);
    if (param_1 == (undefined8 *)0x0) {
      uStack_f0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      ppuStack_118 = (undefined **)0x0;
      ppuStack_120 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_120,param_1);
    }
    puVar3 = &uStack_191;
    FUN_108507e48(puVar3);
    FUN_1084dcc78(auStack_1b0,param_2);
    func_0x000107c281a0(&ppuStack_190,0xc,puVar3,auStack_1b0);
    puStack_1c8 = (undefined4 *)0x0;
    puStack_1c0 = (undefined4 *)0x0;
    uStack_1b8 = 0;
    uStack_1cc = 0;
    pppuVar4 = &ppuStack_120;
    pppuVar10 = &ppuStack_190;
    func_0x000107c310cc(pppuVar4,pppuVar10,&puStack_1c8,&uStack_1cc);
    _objc_retainAutoreleasedReturnValue();
    if (puStack_1c8 != (undefined4 *)0x0) {
      puStack_1c0 = puStack_1c8;
      __ZdlPv();
    }
    plVar2 = plStack_128;
    ppuStack_190 = &PTR_SUB_110862700;
    plStack_128 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_130;
    plStack_130 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    puStack_1c8 = auStack_148;
    func_0x000107c27dd4(&puStack_1c8);
    puStack_1c8 = auStack_1b0;
    func_0x000107c27dd4(&puStack_1c8);
    func_0x000107c27da8(&uStack_f8);
    _objc_release(uStack_108);
    _objc_release(uStack_110);
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(pppuVar4);
  pppuVar6 = pppuVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (pppuVar6 != (undefined ***)0x0) {
    pppuVar15 = (undefined ***)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(pppuVar4);
      }
      lVar14 = *(long *)((long)pppuVar15 * 8);
      lVar7 = lVar14;
      func_0x00010c11ac00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar7 != 0) {
        func_0x00010c11ac00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar5);
        _objc_release(lVar14);
      }
      pppuVar15 = (undefined ***)((long)pppuVar15 + 1);
    } while (pppuVar6 != pppuVar15);
    pppuVar6 = pppuVar4;
    func_0x00010bf52a60();
  }
  _objc_release(pppuVar4);
  puVar8 = puVar5;
  func_0x00010bf51e00(puVar5);
  _objc_release(puVar5);
  _objc_release(pppuVar4);
  _objc_release(param_2);
  puVar9 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_release(param_2);
    _objc_release(param_1);
    __Unwind_Resume();
    lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(pppuVar10);
    puVar9[1] = 0;
    puVar9[2] = 0;
    *puVar9 = 0;
    pppuVar4 = pppuVar10;
    func_0x00010bf529e0();
    func_0x000107c281a4(puVar9);
    _objc_retain(pppuVar10);
    pppuVar6 = pppuVar10;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (pppuVar6 != (undefined ***)0x0) {
      pppuVar15 = (undefined ***)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(pppuVar10);
        }
        ppuVar13 = *(undefined ***)((long)pppuVar15 * 8);
        _objc_retain(ppuVar13);
        pppuVar4 = appuStack_2f0;
        appuStack_2f0[0] = ppuVar13;
        func_0x000107c281a8(puVar9);
        _objc_release(appuStack_2f0[0]);
        pppuVar15 = (undefined ***)((long)pppuVar15 + 1);
      } while (pppuVar6 != pppuVar15);
      pppuVar6 = pppuVar10;
      func_0x00010bf52a60();
    }
    _objc_release(pppuVar10);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
      return;
    }
    ___stack_chk_fail();
    if ((int)pppuVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain();
    _objc_retain(pppuVar4);
    if (pppuVar4 == (undefined ***)0x0) {
      _objc_opt_class(PTR_PTR_1126b47a0);
      if (pppuVar10 == (undefined ***)0x0) {
        uStack_580 = 0;
        uStack_598 = 0;
        uStack_5a0 = 0;
        uStack_588 = 0;
        uStack_590 = 0;
        uStack_5a8 = 0;
        ppuStack_5b0 = (undefined **)0x0;
      }
      else {
        func_0x00010bfa6be0(&ppuStack_5b0,pppuVar10);
      }
      pppuVar12 = appuStack_640;
      FUN_108507fc0();
      uStack_528 = 0xf;
      uStack_518 = 0x100;
      ppuStack_530 = &PTR_DAT_110a4fdb0;
      pppuStack_4f0 = (undefined ***)0x0;
      puStack_4f8 = (undefined1 *)0x0;
      lStack_4e0 = 0;
      lStack_4e8 = 0;
      plStack_4d0 = (long *)0x0;
      uStack_4d8 = 0;
      uStack_500 = 1;
      plStack_4c8 = (long *)0x0;
      uStack_4a6 = *(ushort *)((long)pppuVar12 + 0x1a);
      uStack_4b8 = 10;
      sStack_4a8 = 0x100;
      ppuStack_4c0 = &PTR_FUN_110a4fd50;
      pppuStack_480 = &ppuStack_530;
      lStack_470 = 0;
      lStack_478 = 0;
      plStack_460 = (long *)0x0;
      uStack_468 = 0;
      plStack_458 = (long *)0x0;
      ppuStack_620 = (undefined **)0x0;
      ppuStack_618 = (undefined **)0x0;
      uStack_610 = 0;
      uStack_450 = (undefined **)((ulong)uStack_450._4_4_ << 0x20);
      pppuVar6 = &ppuStack_5b0;
      pppuVar15 = &ppuStack_4c0;
      pppuStack_488 = pppuVar12;
      func_0x000107c310cc(pppuVar6,pppuVar15,&ppuStack_620,&uStack_450);
      _objc_retainAutoreleasedReturnValue();
      if (ppuStack_620 != (undefined **)0x0) {
        ppuStack_618 = ppuStack_620;
        __ZdlPv();
      }
      plVar2 = plStack_458;
      ppuStack_4c0 = &PTR_FUN_110a4fd50;
      plStack_458 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      plVar2 = plStack_460;
      plStack_460 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (lStack_478 != 0) {
        lStack_470 = lStack_478;
        __ZdlPv();
      }
      plVar2 = plStack_4c8;
      ppuStack_530 = &PTR_DAT_110a4fdb0;
      plStack_4c8 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      plVar2 = plStack_4d0;
      plStack_4d0 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (lStack_4e8 != 0) {
        lStack_4e0 = lStack_4e8;
        __ZdlPv();
      }
      func_0x000107c27da8(&uStack_588);
      _objc_release(uStack_598);
      _objc_release(uStack_5a0);
    }
    else {
      _objc_opt_class(PTR_PTR_1126b47a0);
      if (pppuVar10 == (undefined ***)0x0) {
        uStack_420 = 0;
        uStack_438 = 0;
        uStack_440 = 0;
        uStack_428 = 0;
        uStack_430 = 0;
        uStack_448 = 0;
        uStack_450 = (undefined **)0x0;
      }
      else {
        func_0x00010bfa6be0(&uStack_450,pppuVar10);
      }
      puVar3 = &uStack_531;
      FUN_108507fc0();
      uStack_5a8 = CONCAT44(uStack_5a8._4_4_,0xf);
      uStack_598 = CONCAT44(uStack_598._4_4_,0x100);
      ppuStack_5b0 = &PTR_DAT_110a4fdb0;
      uStack_570 = 0;
      uStack_578 = 0;
      lStack_560 = 0;
      lStack_568 = 0;
      plStack_550 = (long *)0x0;
      uStack_558 = 0;
      uStack_580 = 1;
      plStack_548 = (long *)0x0;
      uStack_528 = 10;
      uStack_518 = CONCAT22(*(undefined2 *)(puVar3 + 0x1a),0x100);
      ppuStack_530 = &PTR_FUN_110a4fd50;
      pppuStack_4f0 = &ppuStack_5b0;
      lStack_4e0 = 0;
      lStack_4e8 = 0;
      plStack_4d0 = (long *)0x0;
      uStack_4d8 = 0;
      plStack_4c8 = (long *)0x0;
      puVar11 = &uStack_621;
      puStack_4f8 = puVar3;
      FUN_108508198(puVar11);
      FUN_1084dcc78(appuStack_640,pppuVar4);
      func_0x000107c281a0(&ppuStack_620,0xc,puVar11,appuStack_640);
      uStack_4b8 = 4;
      sStack_4a8 = ((uStack_518._1_1_ | bStack_607) & 1) << 8;
      uStack_4a6 = CONCAT11(uStack_518._3_1_ & bStack_605,uStack_518._2_1_ | bStack_606) & 0xff01;
      ppuStack_4c0 = &PTR_DAT_1108629c8;
      pppuStack_488 = &ppuStack_530;
      lStack_470 = 0;
      lStack_478 = 0;
      plStack_460 = (long *)0x0;
      uStack_468 = 0;
      plStack_458 = (long *)0x0;
      pppuStack_658 = (undefined ***)0x0;
      puStack_650 = (undefined ***)0x0;
      uStack_648 = 0;
      uStack_65c = 0;
      pppuVar6 = (undefined ***)&uStack_450;
      pppuVar15 = &ppuStack_4c0;
      pppuStack_480 = &ppuStack_620;
      func_0x000107c310cc(pppuVar6,pppuVar15,&pppuStack_658,&uStack_65c);
      _objc_retainAutoreleasedReturnValue();
      if (pppuStack_658 != (undefined ***)0x0) {
        puStack_650 = pppuStack_658;
        __ZdlPv();
      }
      plVar2 = plStack_458;
      ppuStack_4c0 = &PTR_DAT_1108629c8;
      plStack_458 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      plVar2 = plStack_460;
      plStack_460 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (lStack_478 != 0) {
        __ZdlPv();
      }
      plVar2 = plStack_5b8;
      ppuStack_620 = &PTR_SUB_110862700;
      plStack_5b8 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      plVar2 = plStack_5c0;
      plStack_5c0 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      pppuStack_658 = (undefined ***)auStack_5d8;
      func_0x000107c27dd4(&pppuStack_658);
      pppuStack_658 = appuStack_640;
      func_0x000107c27dd4(&pppuStack_658);
      plVar2 = plStack_4c8;
      ppuStack_530 = &PTR_FUN_110a4fd50;
      plStack_4c8 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      plVar2 = plStack_4d0;
      plStack_4d0 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (lStack_4e8 != 0) {
        lStack_4e0 = lStack_4e8;
        __ZdlPv();
      }
      plVar2 = plStack_548;
      ppuStack_5b0 = &PTR_DAT_110a4fdb0;
      plStack_548 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      plVar2 = plStack_550;
      plStack_550 = (long *)0x0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (lStack_568 != 0) {
        lStack_560 = lStack_568;
        __ZdlPv();
      }
      func_0x000107c27da8(&uStack_428);
      _objc_release(uStack_438);
      _objc_release(uStack_440);
    }
    puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar17 = 0;
    _objc_retain(pppuVar6);
    pppuVar12 = pppuVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (pppuVar12 != (undefined ***)0x0) {
      pppuVar16 = (undefined ***)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(pppuVar6);
        }
        lVar14 = *(long *)((long)pppuVar16 * 8);
        lVar7 = lVar14;
        func_0x00010c11ac00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar7 != 0) {
          func_0x00010c11ac00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar5);
          _objc_release(lVar14);
        }
        pppuVar16 = (undefined ***)((long)pppuVar16 + 1);
      } while (pppuVar12 != pppuVar16);
      pppuVar12 = pppuVar6;
      func_0x00010bf52a60();
    }
    _objc_release(pppuVar6);
    puVar8 = puVar5;
    func_0x00010bf51e00(puVar5);
    _objc_release(puVar5);
    _objc_release(pppuVar6);
    _objc_release(pppuVar4);
    pppuVar6 = pppuVar10;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_398) {
      ___stack_chk_fail();
      _objc_release(pppuVar4);
      _objc_release(pppuVar10);
      __Unwind_Resume(pppuVar6);
      uVar18 = uVar17;
      _objc_retain();
      _objc_retain(pppuVar15);
      puVar5 = PTR_PTR_1126d8f60;
      FUN_108509e24(PTR_PTR_1126d8f60,pppuVar15);
      _objc_retainAutoreleasedReturnValue();
      if (puVar5 != (undefined *)0x0) {
        puVar8 = PTR_PTR_1126d9e30;
        _objc_alloc(PTR_PTR_1126d9e30);
        pppuVar4 = pppuVar15;
        func_0x00010c246f40(pppuVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c08b360();
        pppuVar10 = pppuVar15;
        func_0x00010c246f40(pppuVar15);
        _objc_retainAutoreleasedReturnValue();
        pppuVar12 = pppuVar10;
        func_0x00010c29ee80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c02c900(uVar17,uVar17,uVar18,puVar8);
        _objc_setProperty_nonatomic_copy(puVar5);
        _objc_release(puVar8);
        _objc_release(pppuVar12);
        _objc_release(pppuVar10);
        _objc_release(pppuVar4);
        func_0x00010c25ed40(pppuVar6);
        _objc_unsafeClaimAutoreleasedReturnValue();
      }
      _objc_release(puVar5);
      _objc_release(pppuVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(pppuVar6);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1084dcc78; end: 1084dcddb;  */

void FUN_1084dcc78(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined ***pppuVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined ***pppuVar16;
  undefined8 uVar17;
  undefined4 uStack_44c;
  undefined ***pppuStack_448;
  undefined ***pppuStack_440;
  undefined8 uStack_438;
  undefined **appuStack_430 [3];
  undefined1 uStack_411;
  undefined **ppuStack_410;
  undefined **ppuStack_408;
  undefined8 uStack_400;
  byte bStack_3f7;
  byte bStack_3f6;
  byte bStack_3f5;
  undefined **appuStack_3c8 [3];
  long *plStack_3b0;
  long *plStack_3a8;
  undefined **ppuStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  long lStack_358;
  long lStack_350;
  undefined8 uStack_348;
  long *plStack_340;
  long *plStack_338;
  undefined1 uStack_321;
  undefined **ppuStack_320;
  undefined4 uStack_318;
  undefined4 uStack_308;
  undefined8 uStack_2f0;
  undefined1 *puStack_2e8;
  undefined ***pppuStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined **ppuStack_2b0;
  undefined4 uStack_2a8;
  short sStack_298;
  ushort uStack_296;
  undefined ***pppuStack_278;
  undefined ***pppuStack_270;
  long lStack_268;
  long lStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  long *plStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_188;
  undefined8 auStack_e0 [17];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar3 = param_2;
  func_0x00010bf529e0();
  func_0x000107c281a4(param_1);
  _objc_retain(param_2);
  puVar4 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar4 != (undefined8 *)0x0) {
    puVar14 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar13 = *(undefined8 *)((long)puVar14 * 8);
      _objc_retain(uVar13);
      puVar3 = auStack_e0;
      auStack_e0[0] = uVar13;
      func_0x000107c281a8(param_1);
      _objc_release(auStack_e0[0]);
      puVar14 = (undefined8 *)((long)puVar14 + 1);
    } while (puVar4 != puVar14);
    puVar4 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(puVar3);
  if (puVar3 == (undefined8 *)0x0) {
    _objc_opt_class(PTR_PTR_1126b47a0);
    if (param_2 == (undefined8 *)0x0) {
      uStack_370 = 0;
      uStack_388 = 0;
      uStack_390 = 0;
      uStack_378 = 0;
      uStack_380 = 0;
      uStack_398 = 0;
      ppuStack_3a0 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_3a0,param_2);
    }
    pppuVar7 = appuStack_430;
    FUN_108507fc0();
    uStack_318 = 0xf;
    uStack_308 = 0x100;
    ppuStack_320 = &PTR_DAT_110a4fdb0;
    pppuStack_2e0 = (undefined ***)0x0;
    puStack_2e8 = (undefined1 *)0x0;
    lStack_2d0 = 0;
    lStack_2d8 = 0;
    plStack_2c0 = (long *)0x0;
    uStack_2c8 = 0;
    uStack_2f0 = 1;
    plStack_2b8 = (long *)0x0;
    uStack_296 = *(ushort *)((long)pppuVar7 + 0x1a);
    uStack_2a8 = 10;
    sStack_298 = 0x100;
    ppuStack_2b0 = &PTR_FUN_110a4fd50;
    pppuStack_270 = &ppuStack_320;
    lStack_260 = 0;
    lStack_268 = 0;
    plStack_250 = (long *)0x0;
    uStack_258 = 0;
    plStack_248 = (long *)0x0;
    ppuStack_410 = (undefined **)0x0;
    ppuStack_408 = (undefined **)0x0;
    uStack_400 = 0;
    uStack_240 = (undefined **)((ulong)uStack_240._4_4_ << 0x20);
    pppuVar8 = &ppuStack_3a0;
    pppuVar12 = &ppuStack_2b0;
    pppuStack_278 = pppuVar7;
    func_0x000107c310cc(pppuVar8,pppuVar12,&ppuStack_410,&uStack_240);
    _objc_retainAutoreleasedReturnValue();
    if (ppuStack_410 != (undefined **)0x0) {
      ppuStack_408 = ppuStack_410;
      __ZdlPv();
    }
    plVar2 = plStack_248;
    ppuStack_2b0 = &PTR_FUN_110a4fd50;
    plStack_248 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_250;
    plStack_250 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (lStack_268 != 0) {
      lStack_260 = lStack_268;
      __ZdlPv();
    }
    plVar2 = plStack_2b8;
    ppuStack_320 = &PTR_DAT_110a4fdb0;
    plStack_2b8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_2c0;
    plStack_2c0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (lStack_2d8 != 0) {
      lStack_2d0 = lStack_2d8;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_378);
    _objc_release(uStack_388);
    _objc_release(uStack_390);
  }
  else {
    _objc_opt_class(PTR_PTR_1126b47a0);
    if (param_2 == (undefined8 *)0x0) {
      uStack_210 = 0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      uStack_238 = 0;
      uStack_240 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&uStack_240,param_2);
    }
    puVar5 = &uStack_321;
    FUN_108507fc0();
    uStack_398 = CONCAT44(uStack_398._4_4_,0xf);
    uStack_388 = CONCAT44(uStack_388._4_4_,0x100);
    ppuStack_3a0 = &PTR_DAT_110a4fdb0;
    uStack_360 = 0;
    uStack_368 = 0;
    lStack_350 = 0;
    lStack_358 = 0;
    plStack_340 = (long *)0x0;
    uStack_348 = 0;
    uStack_370 = 1;
    plStack_338 = (long *)0x0;
    uStack_318 = 10;
    uStack_308 = CONCAT22(*(undefined2 *)(puVar5 + 0x1a),0x100);
    ppuStack_320 = &PTR_FUN_110a4fd50;
    pppuStack_2e0 = &ppuStack_3a0;
    lStack_2d0 = 0;
    lStack_2d8 = 0;
    plStack_2c0 = (long *)0x0;
    uStack_2c8 = 0;
    plStack_2b8 = (long *)0x0;
    puVar6 = &uStack_411;
    puStack_2e8 = puVar5;
    FUN_108508198(puVar6);
    FUN_1084dcc78(appuStack_430,puVar3);
    func_0x000107c281a0(&ppuStack_410,0xc,puVar6,appuStack_430);
    uStack_2a8 = 4;
    sStack_298 = ((uStack_308._1_1_ | bStack_3f7) & 1) << 8;
    uStack_296 = CONCAT11(uStack_308._3_1_ & bStack_3f5,uStack_308._2_1_ | bStack_3f6) & 0xff01;
    ppuStack_2b0 = &PTR_DAT_1108629c8;
    pppuStack_278 = &ppuStack_320;
    lStack_260 = 0;
    lStack_268 = 0;
    plStack_250 = (long *)0x0;
    uStack_258 = 0;
    plStack_248 = (long *)0x0;
    pppuStack_448 = (undefined ***)0x0;
    pppuStack_440 = (undefined ***)0x0;
    uStack_438 = 0;
    uStack_44c = 0;
    pppuVar8 = (undefined ***)&uStack_240;
    pppuVar12 = &ppuStack_2b0;
    pppuStack_270 = &ppuStack_410;
    func_0x000107c310cc(pppuVar8,pppuVar12,&pppuStack_448,&uStack_44c);
    _objc_retainAutoreleasedReturnValue();
    if (pppuStack_448 != (undefined ***)0x0) {
      pppuStack_440 = pppuStack_448;
      __ZdlPv();
    }
    plVar2 = plStack_248;
    ppuStack_2b0 = &PTR_DAT_1108629c8;
    plStack_248 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_250;
    plStack_250 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (lStack_268 != 0) {
      __ZdlPv();
    }
    plVar2 = plStack_3a8;
    ppuStack_410 = &PTR_SUB_110862700;
    plStack_3a8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_3b0;
    plStack_3b0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    pppuStack_448 = appuStack_3c8;
    func_0x000107c27dd4(&pppuStack_448);
    pppuStack_448 = appuStack_430;
    func_0x000107c27dd4(&pppuStack_448);
    plVar2 = plStack_2b8;
    ppuStack_320 = &PTR_FUN_110a4fd50;
    plStack_2b8 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_2c0;
    plStack_2c0 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (lStack_2d8 != 0) {
      lStack_2d0 = lStack_2d8;
      __ZdlPv();
    }
    plVar2 = plStack_338;
    ppuStack_3a0 = &PTR_DAT_110a4fdb0;
    plStack_338 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = plStack_340;
    plStack_340 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (lStack_358 != 0) {
      lStack_350 = lStack_358;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_218);
    _objc_release(uStack_228);
    _objc_release(uStack_230);
  }
  puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 0;
  _objc_retain(pppuVar8);
  pppuVar7 = pppuVar8;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (pppuVar7 != (undefined ***)0x0) {
    pppuVar16 = (undefined ***)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(pppuVar8);
      }
      lVar15 = *(long *)((long)pppuVar16 * 8);
      lVar10 = lVar15;
      func_0x00010c11ac00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar10 != 0) {
        func_0x00010c11ac00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar9);
        _objc_release(lVar15);
      }
      pppuVar16 = (undefined ***)((long)pppuVar16 + 1);
    } while (pppuVar7 != pppuVar16);
    pppuVar7 = pppuVar8;
    func_0x00010bf52a60();
  }
  _objc_release(pppuVar8);
  puVar11 = puVar9;
  func_0x00010bf51e00(puVar9);
  _objc_release(puVar9);
  _objc_release(pppuVar8);
  _objc_release(puVar3);
  puVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(param_2);
  __Unwind_Resume(puVar4);
  uVar17 = uVar13;
  _objc_retain();
  _objc_retain(pppuVar12);
  puVar9 = PTR_PTR_1126d8f60;
  FUN_108509e24(PTR_PTR_1126d8f60,pppuVar12);
  _objc_retainAutoreleasedReturnValue();
  if (puVar9 != (undefined *)0x0) {
    puVar11 = PTR_PTR_1126d9e30;
    _objc_alloc(PTR_PTR_1126d9e30);
    pppuVar8 = pppuVar12;
    func_0x00010c246f40(pppuVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b360();
    pppuVar7 = pppuVar12;
    func_0x00010c246f40(pppuVar12);
    _objc_retainAutoreleasedReturnValue();
    pppuVar16 = pppuVar7;
    func_0x00010c29ee80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02c900(uVar13,uVar13,uVar17,puVar11);
    _objc_setProperty_nonatomic_copy(puVar9);
    _objc_release(puVar11);
    _objc_release(pppuVar16);
    _objc_release(pppuVar7);
    _objc_release(pppuVar8);
    func_0x00010c25ed40(puVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar9);
  _objc_release(pppuVar12);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1084dcddc; end: 1084dd47b;  */

void FUN_1084dcddc(long param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined ***pppuVar10;
  long lVar11;
  undefined ***pppuVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uStack_32c;
  undefined ***pppuStack_328;
  undefined ***pppuStack_320;
  undefined8 uStack_318;
  undefined **appuStack_310 [3];
  undefined1 uStack_2f1;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined8 uStack_2e0;
  byte bStack_2d7;
  byte bStack_2d6;
  byte bStack_2d5;
  undefined **appuStack_2a8 [3];
  long *plStack_290;
  long *plStack_288;
  undefined **ppuStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long lStack_230;
  undefined8 uStack_228;
  long *plStack_220;
  long *plStack_218;
  undefined1 uStack_201;
  undefined **ppuStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1e8;
  undefined8 uStack_1d0;
  undefined1 *puStack_1c8;
  undefined ***pppuStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  long *plStack_198;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  short sStack_178;
  ushort uStack_176;
  undefined ***pppuStack_158;
  undefined ***pppuStack_150;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 == 0) {
    _objc_opt_class(PTR_PTR_1126b47a0);
    if (param_1 == 0) {
      uStack_250 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_278 = 0;
      ppuStack_280 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_280,param_1);
    }
    pppuVar4 = appuStack_310;
    FUN_108507fc0();
    uStack_1f8 = 0xf;
    uStack_1e8 = 0x100;
    ppuStack_200 = &PTR_DAT_110a4fdb0;
    pppuStack_1c0 = (undefined ***)0x0;
    puStack_1c8 = (undefined1 *)0x0;
    lStack_1b0 = 0;
    lStack_1b8 = 0;
    plStack_1a0 = (long *)0x0;
    uStack_1a8 = 0;
    uStack_1d0 = 1;
    plStack_198 = (long *)0x0;
    uStack_176 = *(ushort *)((long)pppuVar4 + 0x1a);
    uStack_188 = 10;
    sStack_178 = 0x100;
    ppuStack_190 = &PTR_FUN_110a4fd50;
    pppuStack_150 = &ppuStack_200;
    lStack_140 = 0;
    lStack_148 = 0;
    plStack_130 = (long *)0x0;
    uStack_138 = 0;
    plStack_128 = (long *)0x0;
    ppuStack_2f0 = (undefined **)0x0;
    ppuStack_2e8 = (undefined **)0x0;
    uStack_2e0 = 0;
    uStack_120 = (undefined **)((ulong)uStack_120._4_4_ << 0x20);
    pppuVar5 = &ppuStack_280;
    pppuVar10 = &ppuStack_190;
    pppuStack_158 = pppuVar4;
    func_0x000107c310cc(pppuVar5,pppuVar10,&ppuStack_2f0,&uStack_120);
    _objc_retainAutoreleasedReturnValue();
    if (ppuStack_2f0 != (undefined **)0x0) {
      ppuStack_2e8 = ppuStack_2f0;
      __ZdlPv();
    }
    plVar1 = plStack_128;
    ppuStack_190 = &PTR_FUN_110a4fd50;
    plStack_128 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_130;
    plStack_130 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_148 != 0) {
      lStack_140 = lStack_148;
      __ZdlPv();
    }
    plVar1 = plStack_198;
    ppuStack_200 = &PTR_DAT_110a4fdb0;
    plStack_198 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_1a0;
    plStack_1a0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_1b8 != 0) {
      lStack_1b0 = lStack_1b8;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_258);
    _objc_release(uStack_268);
    _objc_release(uStack_270);
  }
  else {
    _objc_opt_class(PTR_PTR_1126b47a0);
    if (param_1 == 0) {
      uStack_f0 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_118 = 0;
      uStack_120 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&uStack_120,param_1);
    }
    puVar2 = &uStack_201;
    FUN_108507fc0();
    uStack_278 = CONCAT44(uStack_278._4_4_,0xf);
    uStack_268 = CONCAT44(uStack_268._4_4_,0x100);
    ppuStack_280 = &PTR_DAT_110a4fdb0;
    uStack_240 = 0;
    uStack_248 = 0;
    lStack_230 = 0;
    lStack_238 = 0;
    plStack_220 = (long *)0x0;
    uStack_228 = 0;
    uStack_250 = 1;
    plStack_218 = (long *)0x0;
    uStack_1f8 = 10;
    uStack_1e8 = CONCAT22(*(undefined2 *)(puVar2 + 0x1a),0x100);
    ppuStack_200 = &PTR_FUN_110a4fd50;
    pppuStack_1c0 = &ppuStack_280;
    lStack_1b0 = 0;
    lStack_1b8 = 0;
    plStack_1a0 = (long *)0x0;
    uStack_1a8 = 0;
    plStack_198 = (long *)0x0;
    puVar3 = &uStack_2f1;
    puStack_1c8 = puVar2;
    FUN_108508198(puVar3);
    FUN_1084dcc78(appuStack_310,param_2);
    func_0x000107c281a0(&ppuStack_2f0,0xc,puVar3,appuStack_310);
    uStack_188 = 4;
    sStack_178 = ((uStack_1e8._1_1_ | bStack_2d7) & 1) << 8;
    uStack_176 = CONCAT11(uStack_1e8._3_1_ & bStack_2d5,uStack_1e8._2_1_ | bStack_2d6) & 0xff01;
    ppuStack_190 = &PTR_DAT_1108629c8;
    pppuStack_158 = &ppuStack_200;
    lStack_140 = 0;
    lStack_148 = 0;
    plStack_130 = (long *)0x0;
    uStack_138 = 0;
    plStack_128 = (long *)0x0;
    pppuStack_328 = (undefined ***)0x0;
    pppuStack_320 = (undefined ***)0x0;
    uStack_318 = 0;
    uStack_32c = 0;
    pppuVar5 = (undefined ***)&uStack_120;
    pppuVar10 = &ppuStack_190;
    pppuStack_150 = &ppuStack_2f0;
    func_0x000107c310cc(pppuVar5,pppuVar10,&pppuStack_328,&uStack_32c);
    _objc_retainAutoreleasedReturnValue();
    if (pppuStack_328 != (undefined ***)0x0) {
      pppuStack_320 = pppuStack_328;
      __ZdlPv();
    }
    plVar1 = plStack_128;
    ppuStack_190 = &PTR_DAT_1108629c8;
    plStack_128 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_130;
    plStack_130 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_148 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_288;
    ppuStack_2f0 = &PTR_SUB_110862700;
    plStack_288 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_290;
    plStack_290 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    pppuStack_328 = appuStack_2a8;
    func_0x000107c27dd4(&pppuStack_328);
    pppuStack_328 = appuStack_310;
    func_0x000107c27dd4(&pppuStack_328);
    plVar1 = plStack_198;
    ppuStack_200 = &PTR_FUN_110a4fd50;
    plStack_198 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_1a0;
    plStack_1a0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_1b8 != 0) {
      lStack_1b0 = lStack_1b8;
      __ZdlPv();
    }
    plVar1 = plStack_218;
    ppuStack_280 = &PTR_DAT_110a4fdb0;
    plStack_218 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_220;
    plStack_220 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_238 != 0) {
      lStack_230 = lStack_238;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_f8);
    _objc_release(uStack_108);
    _objc_release(uStack_110);
  }
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = 0;
  _objc_retain(pppuVar5);
  pppuVar4 = pppuVar5;
  func_0x00010bf52a60();
  lVar9 = lRam0000000000000000;
  while (pppuVar4 != (undefined ***)0x0) {
    pppuVar12 = (undefined ***)0x0;
    do {
      if (lRam0000000000000000 != lVar9) {
        _objc_enumerationMutation(pppuVar5);
      }
      lVar11 = *(long *)((long)pppuVar12 * 8);
      lVar7 = lVar11;
      func_0x00010c11ac00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar7 != 0) {
        func_0x00010c11ac00();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar6);
        _objc_release(lVar11);
      }
      pppuVar12 = (undefined ***)((long)pppuVar12 + 1);
    } while (pppuVar4 != pppuVar12);
    pppuVar4 = pppuVar5;
    func_0x00010bf52a60();
  }
  _objc_release(pppuVar5);
  puVar8 = puVar6;
  func_0x00010bf51e00(puVar6);
  _objc_release(puVar6);
  _objc_release(pppuVar5);
  _objc_release(param_2);
  lVar9 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume(lVar9);
  uVar14 = uVar13;
  _objc_retain();
  _objc_retain(pppuVar10);
  puVar6 = PTR_PTR_1126d8f60;
  FUN_108509e24(PTR_PTR_1126d8f60,pppuVar10);
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 != (undefined *)0x0) {
    puVar8 = PTR_PTR_1126d9e30;
    _objc_alloc(PTR_PTR_1126d9e30);
    pppuVar5 = pppuVar10;
    func_0x00010c246f40(pppuVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b360();
    pppuVar4 = pppuVar10;
    func_0x00010c246f40(pppuVar10);
    _objc_retainAutoreleasedReturnValue();
    pppuVar12 = pppuVar4;
    func_0x00010c29ee80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02c900(uVar13,uVar13,uVar14,puVar8);
    _objc_setProperty_nonatomic_copy(puVar6);
    _objc_release(puVar8);
    _objc_release(pppuVar12);
    _objc_release(pppuVar4);
    _objc_release(pppuVar5);
    func_0x00010c25ed40(lVar9);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar6);
  _objc_release(pppuVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar9);
  return;
}



/* Entry: 1084dd47c; end: 1084dd61f;  */

void FUN_1084dd47c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = param_1;
  _objc_retain();
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d8f60;
  FUN_108509e24(PTR_PTR_1126d8f60,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 != (undefined *)0x0) {
    puVar2 = PTR_PTR_1126d9e30;
    _objc_alloc(PTR_PTR_1126d9e30);
    uVar3 = param_3;
    func_0x00010c246f40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08b360();
    uVar4 = param_3;
    func_0x00010c246f40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c29ee80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c02c900(param_1,param_1,uVar6,puVar2);
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010c25ed40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1084dd620; end: 1084dd70f;  */

void FUN_1084dd620(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain();
  lVar1 = param_1;
  FUN_1084dc184(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126d8f60;
    FUN_108509e24(PTR_PTR_1126d8f60,lVar2);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      *(undefined8 *)(puVar3 + 0x60) = param_3;
    }
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1084dd710; end: 1084dd9ef;  */

void FUN_1084dd710(undefined8 param_1,ulong param_2,undefined8 param_3,int param_4,int param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar7 = param_1;
  _objc_retain();
  uVar1 = param_2;
  FUN_1084dc184(param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (((uVar2 != 0) && (uVar1 = uVar2, func_0x00010c27dd80(), uVar1 < 0xb)) &&
     ((1L << (uVar1 & 0x3f) & 0x4c0U) != 0)) {
    puVar3 = PTR_PTR_1126d8f60;
    FUN_108509e24(PTR_PTR_1126d8f60,uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    uVar1 = uVar2;
    func_0x00010c246f40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x00010c29ee80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0a0c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar1);
    if (((param_4 != 0) && (uVar1 = uVar2, func_0x00010c27dd80(), uVar1 == 7)) ||
       ((param_5 != 0 &&
        ((uVar1 = uVar2, func_0x00010c27dd80(), uVar1 == 6 ||
         (uVar1 = uVar2, func_0x00010c27dd80(), uVar1 == 10)))))) {
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar7 = param_1;
      func_0x00010c0df720(param_1,PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar5);
      _objc_release(puVar6);
    }
    if (puVar3 != (undefined *)0x0) {
      puVar6 = PTR_PTR_1126d9e30;
      _objc_alloc(PTR_PTR_1126d9e30);
      uVar1 = uVar2;
      func_0x00010c246f40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d10a0();
      uVar4 = uVar2;
      uVar8 = uVar7;
      func_0x00010c246f40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0d4780();
      func_0x00010c02c900(uVar7,uVar8,param_1,puVar6);
      _objc_setProperty_nonatomic_copy(puVar3);
      _objc_release(puVar6);
      _objc_release(uVar4);
      _objc_release(uVar1);
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_release(puVar5);
    _objc_release(puVar3);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1084dd9f0; end: 1084de31b;  */

void FUN_1084dd9f0(double param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined ***pppuVar12;
  undefined8 *puVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  undefined **ppuVar16;
  undefined ***pppuVar17;
  undefined **ppuVar18;
  undefined ***pppuVar19;
  long lVar20;
  long lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined4 uStack_a24;
  undefined8 *puStack_a20;
  undefined8 *puStack_a18;
  undefined8 uStack_a10;
  undefined **ppuStack_a08;
  undefined4 uStack_a00;
  undefined4 uStack_9f0;
  undefined ***pppuStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  long *plStack_9a8;
  long *plStack_9a0;
  undefined1 uStack_991;
  undefined **ppuStack_990;
  undefined4 uStack_988;
  undefined2 uStack_978;
  undefined2 uStack_976;
  undefined1 *puStack_958;
  undefined ***pppuStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  long *plStack_930;
  long *plStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  long lStack_8e0;
  undefined **ppuStack_8d8;
  undefined ***pppuStack_8d0;
  undefined ***pppuStack_8c8;
  undefined **ppuStack_8c0;
  undefined **ppuStack_8b8;
  undefined *puStack_8b0;
  long lStack_8a8;
  undefined ***pppuStack_8a0;
  long lStack_898;
  undefined1 **ppuStack_890;
  code *pcStack_888;
  undefined8 uStack_880;
  long lStack_878;
  undefined8 *puStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined4 uStack_834;
  undefined **ppuStack_830;
  undefined **ppuStack_828;
  undefined8 uStack_820;
  undefined **ppuStack_818;
  undefined4 uStack_810;
  undefined4 uStack_800;
  undefined ***pppuStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined *puStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  long *plStack_7b8;
  long *plStack_7b0;
  undefined1 uStack_7a1;
  undefined **ppuStack_7a0;
  undefined4 uStack_798;
  undefined2 uStack_788;
  undefined2 uStack_786;
  undefined1 *puStack_768;
  undefined ***pppuStack_760;
  undefined *puStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  long *plStack_740;
  long *plStack_738;
  undefined **ppuStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  long lStack_678;
  undefined ***pppuStack_670;
  undefined ***pppuStack_668;
  undefined ***pppuStack_660;
  undefined ***pppuStack_658;
  undefined ***pppuStack_650;
  long lStack_648;
  undefined ***pppuStack_640;
  undefined8 *puStack_638;
  undefined1 *puStack_630;
  code *pcStack_628;
  long lStack_620;
  undefined8 *puStack_618;
  undefined8 uStack_610;
  long lStack_608;
  long *plStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  long lStack_5c8;
  long *plStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined4 uStack_584;
  long lStack_580;
  long lStack_578;
  undefined8 uStack_570;
  undefined **ppuStack_568;
  undefined4 uStack_560;
  undefined4 uStack_550;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  long lStack_520;
  long lStack_518;
  undefined8 uStack_510;
  long *plStack_508;
  long *plStack_500;
  undefined1 uStack_4f1;
  undefined **ppuStack_4f0;
  undefined4 uStack_4e8;
  undefined2 uStack_4d8;
  byte bStack_4d6;
  byte bStack_4d5;
  undefined1 *puStack_4b8;
  undefined ***pppuStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  undefined8 uStack_498;
  long *plStack_490;
  long *plStack_488;
  undefined **ppuStack_480;
  undefined4 uStack_478;
  undefined4 uStack_468;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  long lStack_438;
  long lStack_430;
  undefined8 uStack_428;
  long *plStack_420;
  long *plStack_418;
  undefined1 uStack_409;
  undefined **ppuStack_408;
  undefined4 uStack_400;
  undefined2 uStack_3f0;
  byte bStack_3ee;
  byte bStack_3ed;
  undefined1 *puStack_3d0;
  undefined ***pppuStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  undefined8 uStack_3b0;
  long *plStack_3a8;
  long *plStack_3a0;
  undefined **ppuStack_398;
  undefined4 uStack_390;
  undefined4 uStack_380;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  long lStack_350;
  long lStack_348;
  undefined8 uStack_340;
  long *plStack_338;
  long *plStack_330;
  undefined1 uStack_321;
  undefined **ppuStack_320;
  undefined4 uStack_318;
  undefined2 uStack_308;
  undefined2 uStack_306;
  undefined1 *puStack_2e8;
  undefined ***pppuStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined **ppuStack_2b0;
  undefined4 uStack_2a8;
  undefined2 uStack_298;
  byte bStack_296;
  byte bStack_295;
  undefined ***pppuStack_278;
  undefined ***pppuStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  long *plStack_248;
  undefined **ppuStack_240;
  undefined4 uStack_238;
  undefined2 uStack_228;
  byte bStack_226;
  byte bStack_225;
  undefined ***pppuStack_208;
  undefined ***pppuStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_620 = param_2;
  _objc_opt_class(PTR_PTR_1126b47a0);
  if (param_2 == 0) {
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_1d0,param_2);
  }
  pppuVar15 = &ppuStack_568;
  puVar2 = &uStack_321;
  FUN_108507fc0();
  pppuVar19 = (undefined ***)0xf;
  uStack_390 = 0xf;
  uStack_380 = 0x100;
  ppuVar8 = &PTR_DAT_110a4fdb0;
  ppuStack_398 = &PTR_DAT_110a4fdb0;
  uStack_358 = 0;
  uStack_360 = 0;
  lStack_348 = 0;
  lStack_350 = 0;
  plStack_338 = (long *)0x0;
  uStack_340 = 0;
  uStack_368 = 6;
  plStack_330 = (long *)0x0;
  uStack_306 = *(undefined2 *)(puVar2 + 0x1a);
  lVar21 = 10;
  uStack_318 = 10;
  pppuVar17 = (undefined ***)0x100;
  uStack_308 = 0x100;
  ppuStack_320 = &PTR_FUN_110a4fd50;
  pppuStack_2e0 = &ppuStack_398;
  lStack_2d0 = 0;
  lStack_2d8 = 0;
  plStack_2c0 = (long *)0x0;
  uStack_2c8 = 0;
  plStack_2b8 = (long *)0x0;
  puVar3 = &uStack_409;
  puStack_2e8 = puVar2;
  FUN_108507fc0();
  uStack_478 = 0xf;
  uStack_468 = 0x100;
  ppuStack_480 = &PTR_DAT_110a4fdb0;
  uStack_440 = 0;
  uStack_448 = 0;
  lStack_430 = 0;
  lStack_438 = 0;
  plStack_420 = (long *)0x0;
  uStack_428 = 0;
  uStack_450 = 7;
  plStack_418 = (long *)0x0;
  bStack_3ee = puVar3[0x1a];
  bStack_3ed = puVar3[0x1b];
  uStack_400 = 10;
  uStack_3f0 = 0x100;
  ppuStack_408 = &PTR_FUN_110a4fd50;
  pppuStack_3c8 = &ppuStack_480;
  plStack_3a0 = (long *)0x0;
  lStack_3b8 = 0;
  lStack_3c0 = 0;
  plStack_3a8 = (long *)0x0;
  uStack_3b0 = 0;
  bStack_296 = (byte)uStack_306 | bStack_3ee;
  bStack_295 = uStack_306._1_1_ | bStack_3ed;
  uStack_2a8 = 5;
  uStack_298 = 0x100;
  pppuVar12 = (undefined ***)&UNK_1108629b8;
  ppuVar7 = &PTR_DAT_1108629c8;
  ppuStack_2b0 = &PTR_DAT_1108629c8;
  pppuStack_278 = &ppuStack_320;
  pppuStack_270 = &ppuStack_408;
  uStack_260 = 0;
  lStack_268 = 0;
  plStack_250 = (long *)0x0;
  uStack_258 = 0;
  plStack_248 = (long *)0x0;
  puVar2 = &uStack_4f1;
  puStack_3d0 = puVar3;
  FUN_108507fc0();
  uStack_560 = 0xf;
  uStack_550 = 0x100;
  ppuStack_568 = &PTR_DAT_110a4fdb0;
  uStack_528 = 0;
  uStack_530 = 0;
  lStack_518 = 0;
  lStack_520 = 0;
  plStack_508 = (long *)0x0;
  uStack_510 = 0;
  uStack_538 = 10;
  plStack_500 = (long *)0x0;
  bStack_4d6 = puVar2[0x1a];
  bStack_4d5 = puVar2[0x1b];
  uStack_4e8 = 10;
  uStack_4d8 = 0x100;
  ppuStack_4f0 = &PTR_FUN_110a4fd50;
  pppuStack_4b0 = &ppuStack_568;
  plStack_488 = (long *)0x0;
  lStack_4a0 = 0;
  lStack_4a8 = 0;
  plStack_490 = (long *)0x0;
  uStack_498 = 0;
  bStack_226 = bStack_296 | bStack_4d6;
  bStack_225 = bStack_295 | bStack_4d5;
  uStack_238 = 5;
  uStack_228 = 0x100;
  ppuStack_240 = &PTR_DAT_1108629c8;
  pppuStack_208 = &ppuStack_2b0;
  pppuStack_200 = &ppuStack_4f0;
  uStack_1f0 = 0;
  lStack_1f8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1e8 = 0;
  plStack_1d8 = (long *)0x0;
  lStack_580 = 0;
  lStack_578 = 0;
  uStack_570 = 0;
  uStack_584 = 0;
  puVar13 = &uStack_1d0;
  pppuVar6 = &ppuStack_240;
  puStack_4b8 = puVar2;
  func_0x000107c310cc(puVar13,pppuVar6,&lStack_580,&uStack_584);
  _objc_retainAutoreleasedReturnValue();
  puStack_618 = puVar13;
  if (lStack_580 != 0) {
    lStack_578 = lStack_580;
    __ZdlPv();
  }
  plVar1 = plStack_1d8;
  ppuStack_240 = &PTR_DAT_1108629c8;
  plStack_1d8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1e0;
  plStack_1e0 = (long *)0x0;
  pppuVar14 = (undefined ***)&UNK_110a4fd40;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1f8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_488;
  ppuStack_4f0 = &PTR_FUN_110a4fd50;
  plStack_488 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_490;
  plStack_490 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_4a8 != 0) {
    lStack_4a0 = lStack_4a8;
    __ZdlPv();
  }
  plVar1 = plStack_500;
  ppuStack_568 = &PTR_DAT_110a4fdb0;
  plStack_500 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_508;
  plStack_508 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_520 != 0) {
    lStack_518 = lStack_520;
    __ZdlPv();
  }
  plVar1 = plStack_248;
  ppuStack_2b0 = &PTR_DAT_1108629c8;
  plStack_248 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_250;
  plStack_250 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_268 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_3a0;
  ppuStack_408 = &PTR_FUN_110a4fd50;
  plStack_3a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_3a8;
  plStack_3a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_3c0 != 0) {
    lStack_3b8 = lStack_3c0;
    __ZdlPv();
  }
  plVar1 = plStack_418;
  ppuStack_480 = &PTR_DAT_110a4fdb0;
  plStack_418 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_420;
  plStack_420 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_438 != 0) {
    lStack_430 = lStack_438;
    __ZdlPv();
  }
  plVar1 = plStack_2b8;
  ppuStack_320 = &PTR_FUN_110a4fd50;
  plStack_2b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_2c0;
  plStack_2c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2d8 != 0) {
    lStack_2d0 = lStack_2d8;
    __ZdlPv();
  }
  plVar1 = plStack_330;
  ppuStack_398 = &PTR_DAT_110a4fdb0;
  plStack_330 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_338;
  plStack_338 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_350 != 0) {
    lStack_348 = lStack_350;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_1a8);
  _objc_release(uStack_1b8);
  _objc_release(uStack_1c0);
  puVar13 = puStack_618;
  lStack_5c8 = 0;
  uStack_5d0 = 0;
  uStack_5b8 = 0;
  plStack_5c0 = (long *)0x0;
  uStack_5a8 = 0;
  uStack_5b0 = 0;
  uStack_598 = 0;
  uStack_5a0 = 0;
  _objc_retain(puStack_618);
  puVar4 = puVar13;
  func_0x00010bf52a60();
  if (puVar4 != (undefined8 *)0x0) {
    lVar21 = *plStack_5c0;
    do {
      puVar13 = (undefined8 *)0x0;
      do {
        if (*plStack_5c0 != lVar21) {
          _objc_enumerationMutation(puStack_618);
        }
        pppuVar15 = *(undefined ****)(lStack_5c8 + (long)puVar13 * 8);
        pppuVar12 = pppuVar15;
        func_0x00010c11ac00();
        _objc_retainAutoreleasedReturnValue();
        pppuVar5 = pppuVar12;
        func_0x00010c08fa60();
        pppuVar14 = (undefined ***)(ulong)(pppuVar5 == (undefined ***)0x0);
        _objc_release(pppuVar12);
        if (pppuVar5 != (undefined ***)0x0) {
          pppuVar12 = pppuVar15;
          func_0x00010c246f40();
          _objc_retainAutoreleasedReturnValue();
          pppuVar17 = pppuVar12;
          func_0x00010c29ee80();
          _objc_retainAutoreleasedReturnValue();
          pppuVar5 = pppuVar17;
          func_0x00010bf529e0();
          pppuVar14 = (undefined ***)(ulong)(pppuVar5 == (undefined ***)0x0);
          _objc_release(pppuVar17);
          _objc_release(pppuVar12);
          if (pppuVar5 != (undefined ***)0x0) {
            pppuVar12 = (undefined ***)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00();
            _objc_retainAutoreleasedReturnValue();
            dVar22 = 0.0;
            uStack_5e8 = 0;
            uStack_5f0 = 0;
            uStack_5d8 = 0;
            uStack_5e0 = 0;
            lStack_608 = 0;
            uStack_610 = 0;
            uStack_5f8 = 0;
            plStack_600 = (long *)0x0;
            pppuVar6 = pppuVar15;
            func_0x00010c246f40();
            _objc_retainAutoreleasedReturnValue();
            pppuVar17 = pppuVar6;
            func_0x00010c29ee80();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(pppuVar6);
            pppuVar6 = pppuVar17;
            func_0x00010bf52a60();
            if (pppuVar6 != (undefined ***)0x0) {
              lVar20 = *plStack_600;
              do {
                pppuVar14 = (undefined ***)0x0;
                do {
                  if (*plStack_600 != lVar20) {
                    _objc_enumerationMutation(pppuVar17);
                  }
                  func_0x00010bf885a0(*(undefined8 *)(lStack_608 + (long)pppuVar14 * 8));
                  dVar22 = param_1 - dVar22;
                  if (dVar22 < 604800000.0) {
                    func_0x00010befa120(pppuVar12);
                  }
                  pppuVar14 = (undefined ***)((long)pppuVar14 + 1);
                } while (pppuVar6 != pppuVar14);
                pppuVar6 = pppuVar17;
                func_0x00010bf52a60();
              } while (pppuVar6 != (undefined ***)0x0);
            }
            _objc_release(pppuVar17);
            pppuVar17 = (undefined ***)PTR_PTR_1126d8f60;
            pppuVar6 = pppuVar15;
            FUN_108509e24();
            _objc_retainAutoreleasedReturnValue();
            ppuVar7 = (undefined **)PTR_PTR_1126d9e30;
            _objc_alloc();
            pppuVar19 = pppuVar15;
            func_0x00010c246f40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0d10a0();
            ppuVar8 = (undefined **)pppuVar15;
            dVar23 = dVar22;
            func_0x00010c246f40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0d4780();
            dVar24 = dVar23;
            func_0x00010c246f40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c08b360();
            func_0x00010c02c900(dVar22,dVar23,dVar24);
            if (pppuVar17 != (undefined ***)0x0) {
              _objc_setProperty_nonatomic_copy(pppuVar17);
            }
            _objc_release(ppuVar7);
            _objc_release(pppuVar15);
            _objc_release(ppuVar8);
            _objc_release(pppuVar19);
            func_0x00010c25ed40(lStack_620);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(pppuVar17);
            _objc_release(pppuVar12);
          }
        }
        puVar13 = (undefined8 *)((long)puVar13 + 1);
      } while (puVar13 != puVar4);
      puVar4 = puStack_618;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined8 *)0x0);
  }
  _objc_release(puStack_618);
  _objc_release(puStack_618);
  lVar20 = lStack_620;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puStack_618);
  _objc_release(puStack_618);
  _objc_release(lStack_620);
  lVar9 = lVar20;
  __Unwind_Resume();
  pcStack_628 = FUN_1084de31c;
  lStack_678 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_670 = (undefined ***)ppuVar8;
  pppuStack_668 = pppuVar19;
  pppuStack_660 = pppuVar17;
  pppuStack_658 = pppuVar15;
  pppuStack_650 = pppuVar12;
  lStack_648 = lVar20;
  pppuStack_640 = pppuVar14;
  puStack_638 = puVar13;
  puStack_630 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(lVar9);
  _objc_retain(pppuVar6);
  _objc_opt_class(PTR_PTR_1126d8fc0);
  if (lVar9 == 0) {
    uStack_700 = 0;
    uStack_718 = 0;
    uStack_720 = 0;
    uStack_708 = 0;
    uStack_710 = 0;
    uStack_728 = 0;
    ppuStack_730 = (undefined **)0x0;
  }
  else {
    func_0x00010bfa6be0(&ppuStack_730,lVar9);
  }
  pppuVar15 = &ppuStack_818;
  puVar2 = &uStack_7a1;
  FUN_108522724();
  uStack_810 = 0xf;
  uStack_800 = 0x100;
  _objc_retain(pppuVar6);
  puVar10 = &UNK_110862750;
  ppuStack_818 = &PTR_DAT_110862760;
  uStack_7d8 = 0;
  uStack_7e0 = 0;
  uStack_7c8 = 0;
  puStack_7d0 = (undefined *)0x0;
  plStack_7b8 = (long *)0x0;
  uStack_7c0 = 0;
  plStack_7b0 = (long *)0x0;
  uStack_786 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_798 = 10;
  uStack_788 = 0x100;
  ppuVar16 = &PTR_SUB_110862700;
  ppuStack_7a0 = &PTR_SUB_110862700;
  pppuStack_760 = &ppuStack_818;
  uStack_750 = 0;
  puStack_758 = (undefined *)0x0;
  plStack_740 = (long *)0x0;
  uStack_748 = 0;
  plStack_738 = (long *)0x0;
  ppuStack_830 = (undefined **)0x0;
  ppuStack_828 = (undefined **)0x0;
  uStack_820 = 0;
  uStack_834 = 0;
  pppuVar17 = &ppuStack_730;
  pppuVar12 = &ppuStack_7a0;
  pppuStack_7e8 = pppuVar6;
  puStack_768 = puVar2;
  func_0x000107c310cc(pppuVar17,pppuVar12,&ppuStack_830,&uStack_834);
  _objc_retainAutoreleasedReturnValue();
  if (ppuStack_830 != (undefined **)0x0) {
    ppuStack_828 = ppuStack_830;
    __ZdlPv();
  }
  plVar1 = plStack_738;
  ppuVar18 = &puStack_758;
  ppuStack_7a0 = &PTR_SUB_110862700;
  plStack_738 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_740;
  plStack_740 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_830 = ppuVar18;
  func_0x000107c27dd4(&ppuStack_830);
  plVar1 = plStack_7b0;
  ppuStack_818 = &PTR_DAT_110862760;
  plStack_7b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_7b8;
  plStack_7b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_830 = &puStack_7d0;
  func_0x000107c27dd4(&ppuStack_830);
  _objc_release(pppuStack_7e8);
  func_0x000107c27da8(&uStack_708);
  _objc_release(uStack_718);
  _objc_release(uStack_720);
  _objc_release(pppuVar6);
  _objc_release(lVar9);
  pppuVar6 = pppuVar17;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppuVar17);
  uStack_858 = 0;
  uStack_860 = 0;
  uStack_848 = 0;
  uStack_850 = 0;
  lStack_878 = 0;
  uStack_880 = 0;
  uStack_868 = 0;
  puStack_870 = (undefined8 *)0x0;
  _objc_retain(pppuVar6);
  pppuVar17 = pppuVar6;
  func_0x00010bf52a60();
  if (pppuVar17 != (undefined ***)0x0) {
    ppuVar16 = (undefined **)*puStack_870;
    ppuVar18 = &PTR_PTR_1126d9000;
    do {
      pppuVar15 = (undefined ***)0x0;
      do {
        if ((undefined **)*puStack_870 != ppuVar16) {
          _objc_enumerationMutation(pppuVar6);
        }
        pppuVar12 = *(undefined ****)(lStack_878 + (long)pppuVar15 * 8);
        puVar10 = PTR_PTR_1126d9e38;
        FUN_108523370();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(lVar9);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar10);
        pppuVar15 = (undefined ***)((long)pppuVar15 + 1);
      } while (pppuVar17 != pppuVar15);
      pppuVar17 = pppuVar6;
      func_0x00010bf52a60();
    } while (pppuVar17 != (undefined ***)0x0);
  }
  _objc_release(pppuVar6);
  _objc_release(pppuVar6);
  lVar20 = lVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_678) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pppuVar6);
  _objc_release(pppuVar6);
  _objc_release(lVar9);
  lVar11 = lVar20;
  __Unwind_Resume();
  pcStack_888 = FUN_1084de6bc;
  lStack_8e0 = lVar21;
  ppuStack_8d8 = ppuVar7;
  pppuStack_8d0 = (undefined ***)ppuVar8;
  pppuStack_8c8 = pppuVar15;
  ppuStack_8c0 = ppuVar18;
  ppuStack_8b8 = ppuVar16;
  puStack_8b0 = puVar10;
  lStack_8a8 = lVar20;
  pppuStack_8a0 = pppuVar6;
  lStack_898 = lVar9;
  ppuStack_890 = &puStack_630;
  _objc_retain();
  _objc_retain(pppuVar12);
  _objc_opt_class(PTR_PTR_1126d8fa0);
  if (lVar11 == 0) {
    uStack_8f0 = 0;
    uStack_908 = 0;
    uStack_910 = 0;
    uStack_8f8 = 0;
    uStack_900 = 0;
    uStack_918 = 0;
    uStack_920 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_920,lVar11);
  }
  puVar2 = &uStack_991;
  FUN_10852420c();
  uStack_a00 = 0xf;
  uStack_9f0 = 0x100;
  _objc_retain(pppuVar12);
  ppuStack_a08 = &PTR_DAT_110862760;
  uStack_9c8 = 0;
  uStack_9d0 = 0;
  uStack_9b8 = 0;
  uStack_9c0 = 0;
  plStack_9a8 = (long *)0x0;
  uStack_9b0 = 0;
  plStack_9a0 = (long *)0x0;
  uStack_976 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_988 = 10;
  uStack_978 = 0x100;
  ppuStack_990 = &PTR_SUB_110862700;
  uStack_940 = 0;
  uStack_948 = 0;
  plStack_930 = (long *)0x0;
  uStack_938 = 0;
  plStack_928 = (long *)0x0;
  puStack_a20 = (undefined8 *)0x0;
  puStack_a18 = (undefined8 *)0x0;
  uStack_a10 = 0;
  uStack_a24 = 0;
  puVar13 = &uStack_920;
  pppuStack_9d8 = pppuVar12;
  puStack_958 = puVar2;
  pppuStack_950 = &ppuStack_a08;
  func_0x000107c310cc(puVar13,&ppuStack_990,&puStack_a20,&uStack_a24);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_a20 != (undefined8 *)0x0) {
    puStack_a18 = puStack_a20;
    __ZdlPv();
  }
  plVar1 = plStack_928;
  ppuStack_990 = &PTR_SUB_110862700;
  plStack_928 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_930;
  plStack_930 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_a20 = &uStack_948;
  func_0x000107c27dd4(&puStack_a20);
  plVar1 = plStack_9a0;
  ppuStack_a08 = &PTR_DAT_110862760;
  plStack_9a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_9a8;
  plStack_9a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_a20 = &uStack_9c0;
  func_0x000107c27dd4(&puStack_a20);
  _objc_release(pppuStack_9d8);
  func_0x000107c27da8(&uStack_8f8);
  _objc_release(uStack_908);
  _objc_release(uStack_910);
  _objc_release(pppuVar12);
  _objc_release(lVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 1084de31c; end: 1084de6bb;  */

void FUN_1084de31c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined ***pppuVar7;
  undefined8 *puVar8;
  undefined4 uStack_404;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 uStack_3f0;
  undefined **ppuStack_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3d0;
  undefined ***pppuStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  long *plStack_388;
  long *plStack_380;
  undefined1 uStack_371;
  undefined **ppuStack_370;
  undefined4 uStack_368;
  undefined2 uStack_358;
  undefined2 uStack_356;
  undefined1 *puStack_338;
  undefined ***pppuStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long *plStack_310;
  long *plStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined4 uStack_214;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined **ppuStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1e0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined1 uStack_181;
  undefined **ppuStack_180;
  undefined4 uStack_178;
  undefined2 uStack_168;
  undefined2 uStack_166;
  undefined1 *puStack_148;
  undefined ***pppuStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_1);
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126d8fc0);
  if (param_1 == 0) {
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
  puVar2 = &uStack_181;
  FUN_108522724();
  uStack_1f0 = 0xf;
  uStack_1e0 = 0x100;
  _objc_retain(param_2);
  ppuStack_1f8 = &PTR_DAT_110862760;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  plStack_198 = (long *)0x0;
  uStack_1a0 = 0;
  plStack_190 = (long *)0x0;
  uStack_166 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_178 = 10;
  uStack_168 = 0x100;
  ppuStack_180 = &PTR_SUB_110862700;
  pppuStack_140 = &ppuStack_1f8;
  uStack_130 = 0;
  uStack_138 = 0;
  plStack_120 = (long *)0x0;
  uStack_128 = 0;
  plStack_118 = (long *)0x0;
  puStack_210 = (undefined8 *)0x0;
  puStack_208 = (undefined8 *)0x0;
  uStack_200 = 0;
  uStack_214 = 0;
  puVar3 = &uStack_110;
  pppuVar7 = &ppuStack_180;
  uStack_1c8 = param_2;
  puStack_148 = puVar2;
  func_0x000107c310cc(puVar3,pppuVar7,&puStack_210,&uStack_214);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_210 != (undefined8 *)0x0) {
    puStack_208 = puStack_210;
    __ZdlPv();
  }
  plVar1 = plStack_118;
  ppuStack_180 = &PTR_SUB_110862700;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_120;
  plStack_120 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_210 = &uStack_138;
  func_0x000107c27dd4(&puStack_210);
  plVar1 = plStack_190;
  ppuStack_1f8 = &PTR_DAT_110862760;
  plStack_190 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_198;
  plStack_198 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_210 = &uStack_1b0;
  func_0x000107c27dd4(&puStack_210);
  _objc_release(uStack_1c8);
  func_0x000107c27da8(&uStack_e8);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(param_2);
  _objc_release(param_1);
  puVar4 = puVar3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_retain(puVar4);
  puVar3 = puVar4;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar3 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(puVar4);
      }
      pppuVar7 = *(undefined ****)((long)puVar8 * 8);
      puVar5 = PTR_PTR_1126d9e38;
      FUN_108523370();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar8 = (undefined8 *)((long)puVar8 + 1);
    } while (puVar3 != puVar8);
    puVar3 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  _objc_release(puVar4);
  lVar6 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(param_1);
  __Unwind_Resume();
  _objc_retain();
  _objc_retain(pppuVar7);
  _objc_opt_class(PTR_PTR_1126d8fa0);
  if (lVar6 == 0) {
    uStack_2d0 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    uStack_2d8 = 0;
    uStack_2e0 = 0;
    uStack_2f8 = 0;
    uStack_300 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_300,lVar6);
  }
  puVar2 = &uStack_371;
  FUN_10852420c();
  uStack_3e0 = 0xf;
  uStack_3d0 = 0x100;
  _objc_retain(pppuVar7);
  ppuStack_3e8 = &PTR_DAT_110862760;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  plStack_388 = (long *)0x0;
  uStack_390 = 0;
  plStack_380 = (long *)0x0;
  uStack_356 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_368 = 10;
  uStack_358 = 0x100;
  ppuStack_370 = &PTR_SUB_110862700;
  uStack_320 = 0;
  uStack_328 = 0;
  plStack_310 = (long *)0x0;
  uStack_318 = 0;
  plStack_308 = (long *)0x0;
  puStack_400 = (undefined8 *)0x0;
  puStack_3f8 = (undefined8 *)0x0;
  uStack_3f0 = 0;
  uStack_404 = 0;
  puVar3 = &uStack_300;
  pppuStack_3b8 = pppuVar7;
  puStack_338 = puVar2;
  pppuStack_330 = &ppuStack_3e8;
  func_0x000107c310cc(puVar3,&ppuStack_370,&puStack_400,&uStack_404);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_400 != (undefined8 *)0x0) {
    puStack_3f8 = puStack_400;
    __ZdlPv();
  }
  plVar1 = plStack_308;
  ppuStack_370 = &PTR_SUB_110862700;
  plStack_308 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_310;
  plStack_310 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_400 = &uStack_328;
  func_0x000107c27dd4(&puStack_400);
  plVar1 = plStack_380;
  ppuStack_3e8 = &PTR_DAT_110862760;
  plStack_380 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_388;
  plStack_388 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_400 = &uStack_3a0;
  func_0x000107c27dd4(&puStack_400);
  _objc_release(pppuStack_3b8);
  func_0x000107c27da8(&uStack_2d8);
  _objc_release(uStack_2e8);
  _objc_release(uStack_2f0);
  _objc_release(pppuVar7);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1084de6bc; end: 1084de8eb;  */

void FUN_1084de6bc(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
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
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126d8fa0);
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
  FUN_10852420c();
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1084de8ec; end: 1084de9d3;  */

void FUN_1084de8ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar3 = PTR_PTR_1126d9e40;
  uVar1 = param_1;
  FUN_1084de6bc(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  FUN_10852486c(puVar3,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1084de9d4; end: 1084dec0f;  */

void FUN_1084de9d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_17c;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined **ppuStack_160;
  undefined4 uStack_158;
  undefined4 uStack_148;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined1 uStack_e9;
  undefined **ppuStack_e8;
  undefined4 uStack_e0;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined1 *puStack_b0;
  undefined ***pppuStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_opt_class(PTR_PTR_1126d8fc0);
  if (param_1 == 0) {
    uStack_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
  }
  else {
    func_0x00010bfa8fc0(&uStack_78,param_1);
  }
  puVar2 = &uStack_e9;
  FUN_108522724();
  uStack_158 = 0xf;
  uStack_148 = 0x100;
  _objc_retain(param_3);
  ppuStack_160 = &PTR_DAT_110862760;
  uStack_120 = 0;
  uStack_128 = 0;
  uStack_110 = 0;
  uStack_118 = 0;
  plStack_100 = (long *)0x0;
  uStack_108 = 0;
  plStack_f8 = (long *)0x0;
  uStack_ce = *(undefined2 *)(puVar2 + 0x1a);
  uStack_e0 = 10;
  uStack_d0 = 0x100;
  ppuStack_e8 = &PTR_SUB_110862700;
  uStack_98 = 0;
  uStack_a0 = 0;
  plStack_88 = (long *)0x0;
  uStack_90 = 0;
  plStack_80 = (long *)0x0;
  puStack_178 = (undefined8 *)0x0;
  puStack_170 = (undefined8 *)0x0;
  uStack_168 = 0;
  uStack_17c = 0;
  puVar3 = &uStack_78;
  uStack_130 = param_3;
  puStack_b0 = puVar2;
  pppuStack_a8 = &ppuStack_160;
  func_0x000108c7f678(puVar3,&ppuStack_e8,&puStack_178,&uStack_17c);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_178 != (undefined8 *)0x0) {
    puStack_170 = puStack_178;
    __ZdlPv();
  }
  plVar1 = plStack_80;
  ppuStack_e8 = &PTR_SUB_110862700;
  plStack_80 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_88;
  plStack_88 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_178 = &uStack_a0;
  func_0x000107c27dd4(&puStack_178);
  plVar1 = plStack_f8;
  ppuStack_160 = &PTR_DAT_110862760;
  plStack_f8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_100;
  plStack_100 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_178 = &uStack_118;
  func_0x000107c27dd4(&puStack_178);
  _objc_release(uStack_130);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1084dec10; end: 1084df02f;  */

void FUN_1084dec10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined4 uStack_2dc;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined **ppuStack_2c0;
  undefined4 uStack_2b8;
  undefined4 uStack_2a8;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long *plStack_260;
  long *plStack_258;
  undefined1 uStack_249;
  undefined **ppuStack_248;
  undefined4 uStack_240;
  undefined2 uStack_230;
  byte bStack_22e;
  byte bStack_22d;
  undefined1 *puStack_210;
  undefined ***pppuStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  undefined **ppuStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1c0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long *plStack_178;
  long *plStack_170;
  undefined1 uStack_161;
  undefined **ppuStack_160;
  undefined4 uStack_158;
  undefined2 uStack_148;
  byte bStack_146;
  byte bStack_145;
  undefined1 *puStack_128;
  undefined ***pppuStack_120;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  long *plStack_f8;
  undefined **ppuStack_f0;
  undefined4 uStack_e8;
  undefined2 uStack_d8;
  byte bStack_d6;
  byte bStack_d5;
  undefined ***pppuStack_b8;
  undefined ***pppuStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_opt_class(PTR_PTR_1126d8fc0);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa8fc0(&uStack_80,param_1);
  }
  puVar4 = &uStack_161;
  FUN_108522724();
  uStack_1d0 = 0xf;
  uStack_1c0 = 0x100;
  _objc_retain(param_3);
  ppuStack_1d8 = &PTR_DAT_110862760;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  puStack_190 = (undefined *)0x0;
  plStack_178 = (long *)0x0;
  uStack_180 = 0;
  plStack_170 = (long *)0x0;
  bVar1 = puVar4[0x1a];
  bVar2 = puVar4[0x1b];
  uStack_158 = 10;
  uStack_148 = 0x100;
  ppuStack_160 = &PTR_SUB_110862700;
  uStack_110 = 0;
  puStack_118 = (undefined *)0x0;
  plStack_100 = (long *)0x0;
  uStack_108 = 0;
  plStack_f8 = (long *)0x0;
  puVar5 = &uStack_249;
  uStack_1a8 = param_3;
  bStack_146 = bVar1;
  bStack_145 = bVar2;
  puStack_128 = puVar4;
  pppuStack_120 = &ppuStack_1d8;
  FUN_10852289c();
  uStack_2b8 = 0xf;
  uStack_2a8 = 0x100;
  _objc_retain(param_4);
  ppuStack_2c0 = &PTR_DAT_110862760;
  uStack_280 = 0;
  uStack_288 = 0;
  uStack_270 = 0;
  uStack_278 = 0;
  plStack_260 = (long *)0x0;
  uStack_268 = 0;
  plStack_258 = (long *)0x0;
  bStack_22e = puVar5[0x1a];
  bStack_22d = puVar5[0x1b];
  uStack_240 = 10;
  uStack_230 = 0x100;
  ppuStack_248 = &PTR_SUB_110862700;
  pppuStack_b0 = &ppuStack_248;
  uStack_1f8 = 0;
  uStack_200 = 0;
  plStack_1e8 = (long *)0x0;
  uStack_1f0 = 0;
  plStack_1e0 = (long *)0x0;
  bStack_d6 = bStack_22e | bVar1;
  bStack_d5 = bStack_22d & bVar2;
  uStack_e8 = 4;
  uStack_d8 = 0x100;
  ppuStack_f0 = &PTR_DAT_1108629c8;
  pppuStack_b8 = &ppuStack_160;
  plStack_88 = (long *)0x0;
  plStack_90 = (long *)0x0;
  uStack_98 = 0;
  uStack_a0 = 0;
  lStack_a8 = 0;
  puStack_2d8 = (undefined8 *)0x0;
  puStack_2d0 = (undefined8 *)0x0;
  uStack_2c8 = 0;
  uStack_2dc = 0;
  puVar6 = &uStack_80;
  uStack_290 = param_4;
  puStack_210 = puVar5;
  pppuStack_208 = &ppuStack_2c0;
  func_0x000108c7f678(puVar6,&ppuStack_f0,&puStack_2d8,&uStack_2dc);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_2d8 != (undefined8 *)0x0) {
    puStack_2d0 = puStack_2d8;
    __ZdlPv();
  }
  plVar3 = plStack_88;
  ppuStack_f0 = &PTR_DAT_1108629c8;
  plStack_88 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_90;
  plStack_90 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_a8 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_1e0;
  ppuStack_248 = &PTR_SUB_110862700;
  plStack_1e0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_1e8;
  plStack_1e8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_2d8 = &uStack_200;
  func_0x000107c27dd4(&puStack_2d8);
  plVar3 = plStack_258;
  ppuStack_2c0 = &PTR_DAT_110862760;
  plStack_258 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_260;
  plStack_260 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_2d8 = &uStack_278;
  func_0x000107c27dd4(&puStack_2d8);
  _objc_release(uStack_290);
  plVar3 = plStack_f8;
  ppuStack_160 = &PTR_SUB_110862700;
  plStack_f8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_100;
  plStack_100 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  ppuStack_248 = &puStack_118;
  func_0x000107c27dd4(&ppuStack_248);
  plVar3 = plStack_170;
  ppuStack_1d8 = &PTR_DAT_110862760;
  plStack_170 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_178;
  plStack_178 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  ppuStack_248 = &puStack_190;
  func_0x000107c27dd4(&ppuStack_248);
  _objc_release(uStack_1a8);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1084df030; end: 1084df25f;  */

void FUN_1084df030(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
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
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b47a0);
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
  FUN_1085085d0();
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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1084df260; end: 1084df2cf;  */

void FUN_1084df260(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_DAT_110a4fdb0;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1084df2d0; end: 1084df98b;  */

void FUN_1084df2d0(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x0001084df930;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x0001084df950;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x0001084df950;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x0001084df8c4:
                    /* WARNING: Could not recover jumptable at 0x0001084df8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x0001084df8c4;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
      goto code_r0x0001084df950;
    }
    goto code_r0x0001084df944;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x0001084df944;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
    goto code_r0x0001084df950;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x0001084df950;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_1084df960;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x0001084df930:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x0001084df944:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x0001084df950:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_1084df960:
  return;
}



/* Entry: 1084df98c; end: 1084dfa13;  */

void FUN_1084df98c(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x00010055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001084dfa00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 1084dfa14; end: 1084dfb47;  */

void FUN_1084dfa14(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar3 = *(long **)(param_1 + 0x38);
      if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
      }
      puVar1 = *(undefined8 **)(param_1 + 0x50);
      for (puVar5 = *(undefined8 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar4 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar4);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined8 *)(param_1 + 0x30));
      return;
    }
  }
  plVar3 = *(long **)(param_1 + 0x38);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
  }
  plVar3 = *(long **)(param_1 + 0x40);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001084dfb3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1084dfb48; end: 1084dfbf7;  */

long FUN_1084dfb48(long param_1,long param_2,long param_3,undefined1 *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  _objc_retain(param_3);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 - 1U < 2) {
    lVar3 = 0;
    *param_4 = 0;
  }
  else if (iVar2 - 0xfU < 2) {
    *param_4 = 0;
    lVar3 = *(long *)(param_1 + 0x30);
  }
  else if (iVar2 == 0xe) {
    lVar1 = 0x28;
    lVar3 = param_3;
    if (param_2 != 0) {
      lVar1 = 0x20;
      lVar3 = param_2;
    }
    (**(code **)(param_1 + lVar1))(lVar3,param_4);
  }
  else {
    lVar3 = 0;
  }
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1084dfbf8; end: 1084dfc33;  */

undefined8 FUN_1084dfbf8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  __Znwm(0x70);
  FUN_1084dfc34(uVar1,param_1);
  return uVar1;
}



/* Entry: 1084dfc34; end: 1084dfddf;  */

void FUN_1084dfc34(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plStack_30;
  long *plStack_28;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xc) {
    if (iVar5 - 3U < 9) {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plVar4 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar3;
      (**(code **)(*plVar4 + 0x30))();
      plStack_30 = plVar4;
      func_0x0001084dfe74(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plStack_28 = plVar3;
      func_0x0001084dfde0(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_1084dfd20:
    plVar3 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    if (iVar5 < 0xf) {
      if (iVar5 - 0xcU < 2) {
        plVar3 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar3 + 0x30))();
        plStack_28 = plVar3;
        FUN_1084dff74(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_1084dfd20;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar1;
      *(byte *)((long)param_1 + 0x19) = bVar2;
      *(byte *)((long)param_1 + 0x1a) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar2 | bVar1) ^ 1;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar6;
    }
    else {
      if (iVar5 != 0xf) {
        iVar5 = 0x10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)(param_1 + 3) = 0x100;
      param_1[6] = *(undefined8 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_DAT_110a4fdb0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 1084dfde0; end: 1084dff73;  */

undefined8 * FUN_1084dfde0(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_DAT_110a4fdb0;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1084dff74; end: 1084e000b;  */

undefined8 * FUN_1084dff74(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  uVar2 = *(undefined2 *)(lVar4 + 0x19);
  uVar1 = *(undefined1 *)(lVar4 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_DAT_110a4fdb0;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_1084e000c(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 3);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1084e000c; end: 1084e0083;  */

void FUN_1084e000c(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1084e0084(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 1084e0084; end: 1084e00bf;  */

void FUN_1084e0084(long *param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  if (param_2 >> 0x3d == 0) {
    plVar2 = param_1 + 2;
    FUN_1084e00d4();
    *param_1 = (long)plVar2;
    param_1[1] = (long)plVar2;
    param_1[2] = (long)(plVar2 + param_2);
    return;
  }
  FUN_1084e00c0();
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  *puVar1 = &PTR_FUN_110a4fd50;
  plVar2 = (long *)puVar1[0xd];
  puVar1[0xd] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)puVar1[0xc];
  puVar1[0xc] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (puVar1[9] != 0) {
    puVar1[10] = puVar1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 1084e00c0; end: 1084e00d3;  */

void FUN_1084e00c0(undefined8 param_1,ulong param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  *puVar1 = &PTR_FUN_110a4fd50;
  plVar2 = (long *)puVar1[0xd];
  puVar1[0xd] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = (long *)puVar1[0xc];
  puVar1[0xc] = 0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (puVar1[9] != 0) {
    puVar1[10] = puVar1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar1);
  return;
}



/* Entry: 1084e00d4; end: 1084e0177;  */

void FUN_1084e00d4(undefined8 *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110a4fd50;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1084e0178; end: 1084e0833;  */

void FUN_1084e0178(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x0001084e07d8;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x0001084e07f8;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x0001084e07f8;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x0001084e076c:
                    /* WARNING: Could not recover jumptable at 0x0001084e0790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x0001084e076c;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
      goto code_r0x0001084e07f8;
    }
    goto code_r0x0001084e07ec;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x0001084e07ec;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
    goto code_r0x0001084e07f8;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x0001084e07f8;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_1084e0808;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x0001084e07d8:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x0001084e07ec:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x0001084e07f8:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_1084e0808:
  return;
}



/* Entry: 1084e0834; end: 1084e08bb;  */

void FUN_1084e0834(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x00010055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001084e08a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 1084e08bc; end: 1084e09ef;  */

void FUN_1084e08bc(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar3 = *(long **)(param_1 + 0x38);
      if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
      }
      puVar1 = *(undefined8 **)(param_1 + 0x50);
      for (puVar5 = *(undefined8 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar4 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar4);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined1 *)(param_1 + 0x30));
      return;
    }
  }
  plVar3 = *(long **)(param_1 + 0x38);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
  }
  plVar3 = *(long **)(param_1 + 0x40);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001084e09e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1084e09f0; end: 1084e0c0b;  */

uint FUN_1084e09f0(long param_1,long param_2,long param_3,byte *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint uVar8;
  long *plVar9;
  long *plStack_58;
  long *plStack_50;
  byte bStack_42;
  byte bStack_41;
  
  _objc_retain(param_3);
  uVar8 = *(uint *)(param_1 + 8);
  if ((int)uVar8 < 0xe) {
    if (uVar8 - 1 < 2) {
      *param_4 = 0;
      plStack_50 = (long *)((ulong)plStack_50 & 0xffffffffffffff00);
      (**(code **)(**(long **)(param_1 + 0x38) + 0x28))
                (*(long **)(param_1 + 0x38),param_2,param_3,&plStack_50);
      uVar8 = (uint)(uVar8 != 1 ^ (byte)plStack_50);
      goto LAB_1084e0be4;
    }
    if (uVar8 - 0xc < 2) {
      plVar9 = *(long **)(param_1 + 0x38);
      _objc_retain(param_3);
      (**(code **)(*plVar9 + 0x28))(plVar9,param_2,param_3,param_4);
      puVar2 = *(undefined8 **)(param_1 + 0x48);
      puVar3 = *(undefined8 **)(param_1 + 0x50);
      if (uVar8 == 0xc) {
        if (puVar2 == puVar3) {
          uVar8 = 0;
        }
        else {
          do {
            puVar6 = puVar2 + 1;
            plVar7 = (long *)*puVar2;
            uVar8 = (uint)(plVar9 == plVar7);
            puVar2 = puVar6;
          } while (plVar9 != plVar7 && puVar6 != puVar3);
        }
      }
      else if (puVar2 == puVar3) {
        uVar8 = 1;
      }
      else {
        do {
          puVar6 = puVar2 + 1;
          plVar7 = (long *)*puVar2;
          uVar8 = (uint)(plVar9 != plVar7);
          puVar2 = puVar6;
        } while (plVar9 != plVar7 && puVar6 != puVar3);
      }
      _objc_release(param_3);
      goto LAB_1084e0be4;
    }
  }
  else {
    if (uVar8 - 0xf < 2) {
      *param_4 = 0;
      uVar8 = (uint)*(byte *)(param_1 + 0x30);
      goto LAB_1084e0be4;
    }
    if (uVar8 == 0xe) {
      lVar1 = 0x28;
      lVar4 = param_3;
      if (param_2 != 0) {
        lVar1 = 0x20;
        lVar4 = param_2;
      }
      (**(code **)(param_1 + lVar1))(lVar4,param_4);
      uVar8 = (uint)lVar4;
      goto LAB_1084e0be4;
    }
  }
  if ((uVar8 & 0xfffffffe) == 10) {
    plVar9 = *(long **)(param_1 + 0x38);
    plVar7 = *(long **)(param_1 + 0x40);
    plVar5 = plVar9;
    (**(code **)(*plVar9 + 0x28))(plVar9,param_2,param_3,&bStack_41);
    plStack_50 = plVar5;
    (**(code **)(*plVar7 + 0x28))(plVar7,param_2,param_3,&bStack_42);
    *param_4 = (bStack_41 | bStack_42) & 1;
    plStack_58 = plVar7;
    FUN_1084e0c48(plVar9,&plStack_50,&plStack_58,uVar8,0);
    uVar8 = (uint)plVar9;
  }
  else {
    uVar8 = 0;
  }
LAB_1084e0be4:
  _objc_release(param_3);
  return uVar8 & 1;
}



/* Entry: 1084e0c0c; end: 1084e0c47;  */

undefined8 FUN_1084e0c0c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  __Znwm(0x70);
  FUN_1084e0cfc(uVar1,param_1);
  return uVar1;
}



/* Entry: 1084e0c48; end: 1084e0cfb;  */

bool FUN_1084e0c48(undefined8 param_1,long *param_2,long *param_3,int param_4)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_4 < 9) {
    if (param_4 == 6) {
      return *param_2 < *param_3;
    }
    if (param_4 == 7) {
      return *param_2 <= *param_3;
    }
    if (param_4 == 8) {
      return *param_3 < *param_2;
    }
  }
  else {
    if (param_4 == 9) {
      return *param_3 <= *param_2;
    }
    if (param_4 == 10) {
      bVar1 = *param_2 == *param_3;
    }
    else if (param_4 == 0xb) {
      return *param_2 != *param_3;
    }
  }
  return bVar1;
}



/* Entry: 1084e0cfc; end: 1084e0ea7;  */

void FUN_1084e0cfc(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plStack_30;
  long *plStack_28;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xc) {
    if (iVar5 - 3U < 9) {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plVar4 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar3;
      (**(code **)(*plVar4 + 0x30))();
      plStack_30 = plVar4;
      func_0x0001084e0f3c(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plStack_28 = plVar3;
      func_0x0001084e0ea8(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_1084e0de8:
    plVar3 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    if (iVar5 < 0xf) {
      if (iVar5 - 0xcU < 2) {
        plVar3 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar3 + 0x30))();
        plStack_28 = plVar3;
        FUN_1084e103c(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_1084e0de8;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar1;
      *(byte *)((long)param_1 + 0x19) = bVar2;
      *(byte *)((long)param_1 + 0x1a) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar2 | bVar1) ^ 1;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar6;
    }
    else {
      if (iVar5 != 0xf) {
        iVar5 = 0x10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)(param_1 + 3) = 0x100;
      *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_FUN_110a4fd50;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 1084e0ea8; end: 1084e103b;  */

undefined8 * FUN_1084e0ea8(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_FUN_110a4fd50;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1084e103c; end: 1084e10d3;  */

undefined8 * FUN_1084e103c(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  uVar2 = *(undefined2 *)(lVar4 + 0x19);
  uVar1 = *(undefined1 *)(lVar4 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_FUN_110a4fd50;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  FUN_1084e000c(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 3);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 1084e10d4; end: 1084e212b;  */

void FUN_1084e10d4(undefined8 param_1,undefined *****param_2,undefined8 param_3)

{
  long *plVar1;
  undefined ***pppuVar2;
  undefined *****pppppuVar3;
  undefined ****ppppuVar4;
  undefined ****ppppuVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  undefined ****ppppuVar9;
  undefined4 *puVar10;
  undefined *puVar11;
  undefined *****pppppuVar12;
  undefined *****pppppuVar13;
  undefined *****pppppuVar14;
  long lVar15;
  undefined *****pppppuVar16;
  undefined **ppuVar17;
  undefined *****pppppuVar18;
  undefined **ppuVar19;
  undefined *****unaff_x24;
  undefined *****unaff_x25;
  undefined *****pppppuVar20;
  undefined *****pppppuVar21;
  undefined **unaff_x26;
  undefined *puVar22;
  undefined *****unaff_x27;
  undefined *****unaff_x28;
  undefined *puStack_bd8;
  undefined *puStack_bb0;
  undefined4 uStack_ba4;
  undefined ****ppppuStack_ba0;
  undefined ***pppuStack_b98;
  undefined8 uStack_b90;
  undefined ****ppppuStack_b88;
  undefined4 uStack_b80;
  undefined4 uStack_b70;
  undefined ****ppppuStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined **ppuStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  long *plStack_b28;
  long *plStack_b20;
  undefined1 uStack_b11;
  undefined **ppuStack_b10;
  undefined4 uStack_b08;
  undefined2 uStack_af8;
  undefined2 uStack_af6;
  undefined1 *puStack_ad8;
  undefined ****ppppuStack_ad0;
  undefined ***pppuStack_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  long *plStack_ab0;
  long *plStack_aa8;
  undefined ***pppuStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined8 uStack_a70;
  undefined ****ppppuStack_a68;
  undefined ****ppppuStack_a60;
  long lStack_a58;
  undefined ****ppppuStack_a40;
  undefined ****ppppuStack_a38;
  undefined ****ppppuStack_a30;
  undefined ****ppppuStack_a28;
  undefined ****ppppuStack_a20;
  undefined ****ppppuStack_a18;
  undefined ****ppppuStack_a10;
  undefined ****ppppuStack_a08;
  undefined ****ppppuStack_a00;
  undefined ****ppppuStack_9f8;
  undefined1 ***pppuStack_9f0;
  code *pcStack_9e8;
  undefined ***pppuStack_9e0;
  undefined ***pppuStack_9d8;
  undefined ****ppppuStack_9d0;
  undefined ****ppppuStack_9c8;
  undefined ****ppppuStack_9c0;
  undefined ***pppuStack_9b8;
  undefined ***pppuStack_9b0;
  undefined ***pppuStack_9a8;
  long lStack_9a0;
  undefined ****ppppuStack_998;
  undefined ****ppppuStack_990;
  undefined4 uStack_984;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined ***pppuStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  long *plStack_920;
  long *plStack_918;
  undefined1 uStack_901;
  undefined ***pppuStack_900;
  undefined ***pppuStack_8f8;
  long *plStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined1 *puStack_8c8;
  undefined8 *puStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  long *plStack_8a0;
  long *plStack_898;
  undefined ***pppuStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined ****ppppuStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined **ppuStack_848;
  undefined **ppuStack_840;
  undefined8 uStack_838;
  long *plStack_830;
  long *plStack_828;
  undefined ****ppppuStack_820;
  undefined ***pppuStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined ***pppuStack_7e8;
  undefined4 uStack_7e0;
  undefined4 uStack_7d0;
  undefined ****ppppuStack_7b8;
  undefined4 *puStack_7b0;
  undefined ****ppppuStack_7a8;
  undefined ***pppuStack_7a0;
  undefined ***pppuStack_798;
  undefined8 uStack_790;
  long *plStack_788;
  long *plStack_780;
  undefined ****ppppuStack_778;
  undefined *puStack_770;
  undefined8 uStack_768;
  undefined ***pppuStack_760;
  undefined4 uStack_758;
  undefined2 uStack_748;
  undefined2 uStack_746;
  undefined ****ppppuStack_728;
  undefined ***pppuStack_720;
  undefined ***pppuStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  long *plStack_700;
  long *plStack_6f8;
  undefined8 *puStack_6e0;
  undefined8 *puStack_6d8;
  undefined8 uStack_6d0;
  long lStack_6c8;
  undefined ****ppppuStack_6b0;
  undefined ****ppppuStack_6a8;
  undefined ****ppppuStack_6a0;
  undefined ****ppppuStack_698;
  undefined ****ppppuStack_690;
  undefined ****ppppuStack_688;
  undefined ****ppppuStack_680;
  undefined ****ppppuStack_678;
  undefined ****ppppuStack_670;
  undefined ****ppppuStack_668;
  undefined1 **ppuStack_660;
  code *pcStack_658;
  undefined ***pppuStack_648;
  undefined ***pppuStack_640;
  undefined ****ppppuStack_638;
  undefined ****ppppuStack_630;
  undefined **ppuStack_628;
  undefined **ppuStack_620;
  undefined **ppuStack_618;
  long lStack_610;
  undefined **ppuStack_608;
  undefined8 uStack_600;
  long lStack_5f8;
  long *plStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  long lStack_5b8;
  long *plStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined4 uStack_574;
  undefined ****ppppuStack_570;
  undefined ***pppuStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined4 uStack_550;
  undefined4 uStack_540;
  undefined ****ppppuStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined **ppuStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  long *plStack_4f8;
  long *plStack_4f0;
  undefined1 uStack_4e1;
  undefined **ppuStack_4e0;
  undefined **ppuStack_4d8;
  undefined8 uStack_4d0;
  undefined2 uStack_4c8;
  byte bStack_4c6;
  byte bStack_4c5;
  undefined1 *puStack_4a8;
  undefined8 *puStack_4a0;
  undefined ***pppuStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  long *plStack_480;
  long *plStack_478;
  undefined ***pppuStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  long lStack_428;
  long lStack_420;
  undefined8 uStack_418;
  long *plStack_410;
  long *plStack_408;
  undefined1 uStack_3f1;
  undefined ***pppuStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined **ppuStack_3b8;
  undefined4 uStack_3b0;
  undefined4 uStack_3a0;
  undefined ****ppppuStack_388;
  undefined1 *puStack_380;
  undefined ***pppuStack_378;
  undefined *puStack_370;
  undefined *puStack_368;
  undefined8 uStack_360;
  long *plStack_358;
  long *plStack_350;
  undefined **ppuStack_348;
  undefined4 uStack_340;
  undefined2 uStack_330;
  undefined2 uStack_32e;
  undefined ***pppuStack_310;
  undefined ***pppuStack_308;
  undefined *puStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long *plStack_2e8;
  long *plStack_2e0;
  undefined ****ppppuStack_2d8;
  undefined *puStack_2d0;
  long lStack_1c8;
  undefined ****ppppuStack_1b0;
  undefined ****ppppuStack_1a8;
  undefined ****ppppuStack_1a0;
  undefined ****ppppuStack_198;
  undefined ****ppppuStack_190;
  undefined ****ppppuStack_188;
  undefined ****ppppuStack_180;
  undefined ****ppppuStack_178;
  undefined ****ppppuStack_170;
  undefined ****ppppuStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined ****ppppuStack_148;
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
  _objc_retain();
  ppppuStack_148 = (undefined ****)param_2;
  func_0x00010c26f320(param_3);
  _objc_retain(param_2);
  FUN_1084e692c(param_2,0,0);
  _objc_retainAutoreleasedReturnValue();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  pppppuVar18 = param_2;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar16 = pppppuVar18;
  func_0x00010bf52a60();
  if (pppppuVar16 != (undefined *****)0x0) {
    lVar15 = *plStack_130;
    unaff_x26 = &PTR_PTR_1126d6000;
    do {
      unaff_x27 = (undefined *****)0x0;
      do {
        if (*plStack_130 != lVar15) {
          _objc_enumerationMutation(pppppuVar18);
        }
        pppppuVar20 = *(undefined ******)(lStack_138 + (long)unaff_x27 * 8);
        pppppuVar21 = pppppuVar20;
        func_0x00010c25b340();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = pppppuVar21;
        func_0x0001008163a8(param_1);
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = pppppuVar20;
        if (pppppuVar21 != unaff_x24) {
          pppppuVar12 = unaff_x24;
          func_0x00010bf529e0();
          unaff_x25 = (undefined *****)PTR_PTR_1126d6780;
          if (pppppuVar12 == (undefined *****)0x0) {
            FUN_1085185f4(PTR_PTR_1126d6780,pppppuVar20);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25ed40(ppppuStack_148);
            _objc_unsafeClaimAutoreleasedReturnValue();
          }
          else {
            FUN_1085181dc(PTR_PTR_1126d6780,pppppuVar20);
            _objc_retainAutoreleasedReturnValue();
            if (unaff_x25 != (undefined *****)0x0) {
              _objc_setProperty_nonatomic_copy(unaff_x25);
            }
            func_0x00010c25ed40(ppppuStack_148);
            _objc_unsafeClaimAutoreleasedReturnValue();
          }
          _objc_release(unaff_x25);
        }
        _objc_release(unaff_x24);
        _objc_release(pppppuVar21);
        unaff_x27 = (undefined *****)((long)unaff_x27 + 1);
      } while (pppppuVar16 != unaff_x27);
      pppppuVar16 = pppppuVar18;
      func_0x00010bf52a60();
    } while (pppppuVar16 != (undefined *****)0x0);
  }
  _objc_release(pppppuVar18);
  _objc_release(param_2);
  _objc_release(ppppuStack_148);
  pppppuVar18 = (undefined *****)ppppuStack_148;
  _objc_retain(ppppuStack_148);
  func_0x00010094ff70(pppppuVar18,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  pppppuVar16 = pppppuVar18;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar21 = pppppuVar16;
  func_0x00010bf52a60();
  if (pppppuVar21 != (undefined *****)0x0) {
    lVar15 = *plStack_130;
    do {
      unaff_x28 = (undefined *****)0x0;
      do {
        if (*plStack_130 != lVar15) {
          _objc_enumerationMutation(pppppuVar16);
        }
        unaff_x27 = *(undefined ******)(lStack_138 + (long)unaff_x28 * 8);
        unaff_x24 = pppppuVar18;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = unaff_x24;
        func_0x00010c25b340();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = (undefined **)unaff_x25;
        func_0x0001008163a8(param_1);
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x25 != (undefined *****)unaff_x26) {
          func_0x00010c1d0640(puVar22);
          pppppuVar20 = (undefined *****)unaff_x26;
          func_0x00010bf529e0();
          unaff_x27 = (undefined *****)PTR_PTR_1126d9e50;
          if (pppppuVar20 == (undefined *****)0x0) {
            FUN_108517280(PTR_PTR_1126d9e50,unaff_x24);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25ed40(ppppuStack_148);
            _objc_unsafeClaimAutoreleasedReturnValue();
          }
          else {
            FUN_108516eb4(PTR_PTR_1126d9e50,unaff_x24);
            _objc_retainAutoreleasedReturnValue();
            if (unaff_x27 != (undefined *****)0x0) {
              _objc_setProperty_nonatomic_copy(unaff_x27);
            }
            func_0x00010c25ed40(ppppuStack_148);
            _objc_unsafeClaimAutoreleasedReturnValue();
          }
          _objc_release(unaff_x27);
        }
        _objc_release(unaff_x26);
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        unaff_x28 = (undefined *****)((long)unaff_x28 + 1);
      } while (pppppuVar21 != unaff_x28);
      pppppuVar21 = pppppuVar16;
      func_0x00010bf52a60();
    } while (pppppuVar21 != (undefined *****)0x0);
  }
  _objc_release(pppppuVar16);
  FUN_1084ee948(ppppuStack_148,1,puVar22,0,PTR____NSArray0__struct_11034ab48,
                PTR____NSDictionary0__struct_11034ab58,PTR____NSDictionary0__struct_11034ab58,0);
  _objc_release(puVar22);
  _objc_release(pppppuVar18);
  _objc_release(ppppuStack_148);
  pppppuVar18 = (undefined *****)ppppuStack_148;
  _objc_retain(ppppuStack_148);
  FUN_1084e73c8(pppppuVar18,0);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (undefined8 *)0x0;
  pppppuVar16 = pppppuVar18;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar21 = pppppuVar16;
  func_0x00010bf52a60();
  if (pppppuVar21 != (undefined *****)0x0) {
    unaff_x28 = (undefined *****)*plStack_130;
    do {
      pppppuVar20 = (undefined *****)0x0;
      do {
        if ((undefined *****)*plStack_130 != unaff_x28) {
          _objc_enumerationMutation(pppppuVar16);
        }
        unaff_x24 = pppppuVar18;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = unaff_x24;
        func_0x00010c25b340();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = (undefined **)unaff_x25;
        func_0x0001008163a8(param_1);
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x25 != (undefined *****)unaff_x26) {
          pppppuVar12 = unaff_x24;
          func_0x00010c11ac00(unaff_x24);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar22);
          _objc_release(pppppuVar12);
          pppppuVar12 = (undefined *****)unaff_x26;
          func_0x00010bf529e0();
          unaff_x27 = (undefined *****)PTR_PTR_1126d6798;
          if (pppppuVar12 == (undefined *****)0x0) {
            FUN_10850ef60(PTR_PTR_1126d6798,unaff_x24);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25ed40(ppppuStack_148);
            _objc_unsafeClaimAutoreleasedReturnValue();
          }
          else {
            FUN_10850eb48(PTR_PTR_1126d6798,unaff_x24);
            _objc_retainAutoreleasedReturnValue();
            if (unaff_x27 != (undefined *****)0x0) {
              _objc_setProperty_nonatomic_copy(unaff_x27);
            }
            func_0x00010c25ed40(ppppuStack_148);
            _objc_unsafeClaimAutoreleasedReturnValue();
          }
          _objc_release(unaff_x27);
        }
        _objc_release(unaff_x26);
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        pppppuVar20 = (undefined *****)((long)pppppuVar20 + 1);
      } while (pppppuVar21 != pppppuVar20);
      pppppuVar21 = pppppuVar16;
      func_0x00010bf52a60();
    } while (pppppuVar21 != (undefined *****)0x0);
  }
  _objc_release(pppppuVar16);
  FUN_1084ee948(ppppuStack_148,2,puVar22,0,PTR____NSArray0__struct_11034ab48,
                PTR____NSDictionary0__struct_11034ab58,PTR____NSDictionary0__struct_11034ab58,0);
  _objc_release(puVar22);
  _objc_release(pppppuVar18);
  _objc_release(ppppuStack_148);
  pppppuVar18 = (undefined *****)ppppuStack_148;
  _objc_retain(ppppuStack_148);
  FUN_1084e6550(pppppuVar18,0);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  pppppuVar16 = pppppuVar18;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar21 = pppppuVar16;
  func_0x00010bf52a60();
  if (pppppuVar21 != (undefined *****)0x0) {
    lVar15 = *plStack_130;
    do {
      unaff_x28 = (undefined *****)0x0;
      do {
        if (*plStack_130 != lVar15) {
          _objc_enumerationMutation(pppppuVar16);
        }
        unaff_x27 = *(undefined ******)(lStack_138 + (long)unaff_x28 * 8);
        unaff_x24 = pppppuVar18;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = unaff_x24;
        func_0x00010c25b340();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = (undefined **)unaff_x25;
        func_0x0001008163a8(param_1);
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x25 != (undefined *****)unaff_x26) {
          func_0x00010c1d0640(puVar22);
          pppppuVar20 = (undefined *****)unaff_x26;
          func_0x00010bf529e0();
          unaff_x27 = (undefined *****)PTR_PTR_1126d67d0;
          if (pppppuVar20 == (undefined *****)0x0) {
            FUN_10851b910(PTR_PTR_1126d67d0,unaff_x24);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25ed40(ppppuStack_148);
            _objc_unsafeClaimAutoreleasedReturnValue();
          }
          else {
            FUN_10851b4f8(PTR_PTR_1126d67d0,unaff_x24);
            _objc_retainAutoreleasedReturnValue();
            if (unaff_x27 != (undefined *****)0x0) {
              _objc_setProperty_nonatomic_copy(unaff_x27);
            }
            func_0x00010c25ed40(ppppuStack_148);
            _objc_unsafeClaimAutoreleasedReturnValue();
          }
          _objc_release(unaff_x27);
        }
        _objc_release(unaff_x26);
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        unaff_x28 = (undefined *****)((long)unaff_x28 + 1);
      } while (pppppuVar21 != unaff_x28);
      pppppuVar21 = pppppuVar16;
      func_0x00010bf52a60();
    } while (pppppuVar21 != (undefined *****)0x0);
  }
  _objc_release(pppppuVar16);
  FUN_1084ee948(ppppuStack_148,3,puVar22,0,PTR____NSArray0__struct_11034ab48,
                PTR____NSDictionary0__struct_11034ab58,PTR____NSDictionary0__struct_11034ab58,0);
  _objc_release(puVar22);
  _objc_release(pppppuVar18);
  _objc_release(ppppuStack_148);
  pppppuVar18 = (undefined *****)ppppuStack_148;
  _objc_retain(ppppuStack_148);
  FUN_1084eb4fc(pppppuVar18,0);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  _objc_retainAutoreleasedReturnValue();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  pppppuVar16 = pppppuVar18;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar21 = pppppuVar16;
  func_0x00010bf52a60();
  if (pppppuVar21 != (undefined *****)0x0) {
    lVar15 = *plStack_130;
    do {
      unaff_x28 = (undefined *****)0x0;
      do {
        if (*plStack_130 != lVar15) {
          _objc_enumerationMutation(pppppuVar16);
        }
        unaff_x27 = *(undefined ******)(lStack_138 + (long)unaff_x28 * 8);
        unaff_x24 = pppppuVar18;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = unaff_x24;
        func_0x00010c25b340();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = (undefined **)unaff_x25;
        func_0x0001008163a8(param_1);
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x25 != (undefined *****)unaff_x26) {
          func_0x00010c1d0640(puVar22);
          pppppuVar20 = (undefined *****)unaff_x26;
          func_0x00010bf529e0();
          unaff_x27 = (undefined *****)PTR_PTR_1126d67a8;
          if (pppppuVar20 == (undefined *****)0x0) {
            FUN_108529134(PTR_PTR_1126d67a8,unaff_x24);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25ed40(ppppuStack_148);
            _objc_unsafeClaimAutoreleasedReturnValue();
          }
          else {
            FUN_108528d1c(PTR_PTR_1126d67a8,unaff_x24);
            _objc_retainAutoreleasedReturnValue();
            if (unaff_x27 != (undefined *****)0x0) {
              _objc_setProperty_nonatomic_copy(unaff_x27);
            }
            func_0x00010c25ed40(ppppuStack_148);
            _objc_unsafeClaimAutoreleasedReturnValue();
          }
          _objc_release(unaff_x27);
        }
        _objc_release(unaff_x26);
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        unaff_x28 = (undefined *****)((long)unaff_x28 + 1);
      } while (pppppuVar21 != unaff_x28);
      pppppuVar21 = pppppuVar16;
      func_0x00010bf52a60();
    } while (pppppuVar21 != (undefined *****)0x0);
  }
  _objc_release(pppppuVar16);
  FUN_1084ee948(ppppuStack_148,5,puVar22,0,PTR____NSArray0__struct_11034ab48,
                PTR____NSDictionary0__struct_11034ab58,PTR____NSDictionary0__struct_11034ab58,0);
  _objc_release(puVar22);
  _objc_release(pppppuVar18);
  _objc_release(ppppuStack_148);
  pppppuVar16 = (undefined *****)ppppuStack_148;
  _objc_retain(ppppuStack_148);
  ppuVar17 = (undefined **)pppppuVar16;
  FUN_1084dba50(pppppuVar16,0);
  _objc_retainAutoreleasedReturnValue();
  pppppuVar18 = (undefined *****)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (undefined8 *)0x0;
  ppuVar19 = ppuVar17;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar21 = (undefined *****)ppuVar19;
  func_0x00010bf52a60();
  if (pppppuVar21 != (undefined *****)0x0) {
    pppppuVar16 = (undefined *****)*plStack_130;
    do {
      unaff_x28 = (undefined *****)0x0;
      do {
        if ((undefined *****)*plStack_130 != pppppuVar16) {
          _objc_enumerationMutation(ppuVar19);
        }
        unaff_x27 = *(undefined ******)(lStack_138 + (long)unaff_x28 * 8);
        unaff_x24 = (undefined *****)ppuVar17;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = unaff_x24;
        func_0x00010c25b340();
        _objc_retainAutoreleasedReturnValue();
        unaff_x26 = (undefined **)unaff_x25;
        func_0x0001008163a8(param_1);
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x25 != (undefined *****)unaff_x26) {
          func_0x00010c1d0640(pppppuVar18);
          pppppuVar20 = (undefined *****)unaff_x26;
          func_0x00010bf529e0();
          unaff_x27 = (undefined *****)PTR_PTR_1126d9e28;
          if (pppppuVar20 == (undefined *****)0x0) {
            FUN_10852a600(PTR_PTR_1126d9e28,unaff_x24);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25ed40(ppppuStack_148);
            _objc_unsafeClaimAutoreleasedReturnValue();
          }
          else {
            FUN_10852a1c0(PTR_PTR_1126d9e28,unaff_x24);
            _objc_retainAutoreleasedReturnValue();
            if (unaff_x27 != (undefined *****)0x0) {
              _objc_setProperty_nonatomic_copy(unaff_x27);
            }
            func_0x00010c25ed40(ppppuStack_148);
            _objc_unsafeClaimAutoreleasedReturnValue();
          }
          _objc_release(unaff_x27);
        }
        _objc_release(unaff_x26);
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        unaff_x28 = (undefined *****)((long)unaff_x28 + 1);
      } while (pppppuVar21 != unaff_x28);
      pppppuVar21 = (undefined *****)ppuVar19;
      func_0x00010bf52a60();
    } while (pppppuVar21 != (undefined *****)0x0);
  }
  _objc_release(ppuVar19);
  pppppuVar12 = (undefined *****)0x6;
  pppppuVar21 = pppppuVar18;
  FUN_1084ee948(ppppuStack_148,6,pppppuVar18,0,PTR____NSArray0__struct_11034ab48,
                PTR____NSDictionary0__struct_11034ab58,PTR____NSDictionary0__struct_11034ab58,0);
  _objc_release(pppppuVar18);
  _objc_release(ppuVar17);
  _objc_release(ppppuStack_148);
  pppppuVar20 = (undefined *****)ppppuStack_148;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pppppuVar18);
  _objc_release(ppuVar17);
  _objc_release(ppppuStack_148);
  _objc_release(ppppuStack_148);
  pppppuVar3 = pppppuVar20;
  __Unwind_Resume();
  pcStack_158 = FUN_1084e212c;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar13 = pppppuVar12;
  ppppuStack_1b0 = (undefined ****)unaff_x28;
  ppppuStack_1a8 = (undefined ****)unaff_x27;
  ppppuStack_1a0 = (undefined ****)unaff_x26;
  ppppuStack_198 = (undefined ****)unaff_x25;
  ppppuStack_190 = (undefined ****)unaff_x24;
  ppppuStack_188 = (undefined ****)ppuVar19;
  ppppuStack_180 = (undefined ****)pppppuVar18;
  ppppuStack_178 = (undefined ****)ppuVar17;
  ppppuStack_170 = (undefined ****)pppppuVar20;
  ppppuStack_168 = (undefined ****)pppppuVar16;
  puStack_160 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(pppppuVar12);
  pppppuVar16 = pppppuVar12;
  ppppuStack_638 = (undefined ****)pppppuVar12;
  func_0x00010c08fa60();
  if (pppppuVar16 != (undefined *****)0x0) {
    _objc_opt_class(PTR_PTR_1126d6788);
    if (pppppuVar3 == (undefined *****)0x0) {
      uStack_440 = 0;
      uStack_458 = 0;
      uStack_460 = 0;
      uStack_448 = 0;
      uStack_450 = 0;
      uStack_468 = 0;
      pppuStack_470 = (undefined ***)0x0;
    }
    else {
      func_0x00010bfa6be0(&pppuStack_470,pppppuVar3);
    }
    ppppuVar4 = &pppuStack_3f0;
    FUN_108517ba4();
    ppppuVar5 = ppppuStack_638;
    uStack_3b0 = 0xf;
    uStack_3a0 = 0x100;
    _objc_retain(ppppuStack_638);
    ppppuStack_388 = ppppuVar5;
    ppuStack_3b8 = &PTR_DAT_110862760;
    pppuStack_378 = (undefined ***)0x0;
    puStack_380 = (undefined1 *)0x0;
    puStack_368 = (undefined *)0x0;
    puStack_370 = (undefined *)0x0;
    plStack_358 = (long *)0x0;
    uStack_360 = 0;
    plStack_350 = (long *)0x0;
    uStack_32e = *(undefined2 *)((long)ppppuVar4 + 0x1a);
    uStack_340 = 10;
    uStack_330 = 0x100;
    ppuStack_348 = &PTR_SUB_110862700;
    pppuStack_308 = &ppuStack_3b8;
    uStack_2f8 = 0;
    puStack_300 = (undefined *)0x0;
    plStack_2e8 = (long *)0x0;
    uStack_2f0 = 0;
    plStack_2e0 = (long *)0x0;
    ppuStack_4e0 = (undefined **)0x0;
    ppuStack_4d8 = (undefined **)0x0;
    uStack_4d0 = 0;
    uStack_558 = (undefined **)((ulong)uStack_558._4_4_ << 0x20);
    ppppuVar5 = &pppuStack_470;
    pppuStack_310 = (undefined ***)ppppuVar4;
    func_0x000107c310cc(ppppuVar5,&ppuStack_348,&ppuStack_4e0,&uStack_558);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar4 = ppppuVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    pppuStack_648 = (undefined ***)ppppuVar4;
    _objc_release(ppppuVar5);
    if (ppuStack_4e0 != (undefined **)0x0) {
      ppuStack_4d8 = ppuStack_4e0;
      __ZdlPv();
    }
    plVar1 = plStack_2e0;
    ppuStack_348 = &PTR_SUB_110862700;
    plStack_2e0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_2e8;
    plStack_2e8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    ppuStack_4e0 = &puStack_300;
    func_0x000107c27dd4(&ppuStack_4e0);
    plVar1 = plStack_350;
    ppuStack_3b8 = &PTR_DAT_110862760;
    plStack_350 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_358;
    plStack_358 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    ppuStack_4e0 = &puStack_370;
    func_0x000107c27dd4(&ppuStack_4e0);
    _objc_release(ppppuStack_388);
    func_0x000107c27da8(&uStack_448);
    _objc_release(uStack_458);
    _objc_release(uStack_460);
    if ((undefined ****)pppuStack_648 != (undefined ****)0x0) {
      puVar22 = PTR_PTR_1126d6780;
      FUN_1085185f4(PTR_PTR_1126d6780,pppuStack_648);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(pppppuVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar22);
    }
    _objc_opt_class(PTR_PTR_1126d9e48);
    if (pppppuVar3 == (undefined *****)0x0) {
      uStack_440 = 0;
      uStack_458 = 0;
      uStack_460 = 0;
      uStack_448 = 0;
      uStack_450 = 0;
      uStack_468 = 0;
      pppuStack_470 = (undefined ***)0x0;
    }
    else {
      func_0x00010bfa6be0(&pppuStack_470,pppppuVar3);
    }
    ppppuVar4 = &pppuStack_3f0;
    func_0x00010095049c();
    ppppuVar5 = ppppuStack_638;
    uStack_3b0 = 0xf;
    uStack_3a0 = 0x100;
    _objc_retain(ppppuStack_638);
    ppppuStack_388 = ppppuVar5;
    ppuStack_3b8 = &PTR_DAT_110862760;
    pppuStack_378 = (undefined ***)0x0;
    puStack_380 = (undefined1 *)0x0;
    puStack_368 = (undefined *)0x0;
    puStack_370 = (undefined *)0x0;
    plStack_358 = (long *)0x0;
    uStack_360 = 0;
    plStack_350 = (long *)0x0;
    uStack_32e = *(undefined2 *)((long)ppppuVar4 + 0x1a);
    uStack_340 = 10;
    uStack_330 = 0x100;
    ppuStack_348 = &PTR_SUB_110862700;
    pppuStack_308 = &ppuStack_3b8;
    uStack_2f8 = 0;
    puStack_300 = (undefined *)0x0;
    plStack_2e8 = (long *)0x0;
    uStack_2f0 = 0;
    plStack_2e0 = (long *)0x0;
    ppuStack_4e0 = (undefined **)0x0;
    ppuStack_4d8 = (undefined **)0x0;
    uStack_4d0 = 0;
    uStack_558 = (undefined **)((ulong)uStack_558 & 0xffffffff00000000);
    ppppuVar5 = &pppuStack_470;
    pppuStack_310 = (undefined ***)ppppuVar4;
    func_0x000107c310cc(ppppuVar5,&ppuStack_348,&ppuStack_4e0,&uStack_558);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar4 = ppppuVar5;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    pppuStack_640 = (undefined ***)ppppuVar4;
    _objc_release(ppppuVar5);
    if (ppuStack_4e0 != (undefined **)0x0) {
      ppuStack_4d8 = ppuStack_4e0;
      __ZdlPv();
    }
    plVar1 = plStack_2e0;
    ppuStack_348 = &PTR_SUB_110862700;
    plStack_2e0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_2e8;
    plStack_2e8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    ppuStack_4e0 = &puStack_300;
    func_0x000107c27dd4(&ppuStack_4e0);
    plVar1 = plStack_350;
    ppuStack_3b8 = &PTR_DAT_110862760;
    plStack_350 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_358;
    plStack_358 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    ppuStack_4e0 = &puStack_370;
    func_0x000107c27dd4(&ppuStack_4e0);
    _objc_release(ppppuStack_388);
    func_0x000107c27da8(&uStack_448);
    _objc_release(uStack_458);
    _objc_release(uStack_460);
    if ((undefined ****)pppuStack_640 != (undefined ****)0x0) {
      puVar22 = PTR_PTR_1126d9e50;
      FUN_108517280(PTR_PTR_1126d9e50,pppuStack_640);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(pppppuVar3);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar22);
    }
    _objc_opt_class(PTR_PTR_1126b47a0);
    if (pppppuVar3 == (undefined *****)0x0) {
      uStack_3c0 = 0;
      uStack_3d8 = 0;
      uStack_3e0 = 0;
      uStack_3c8 = 0;
      uStack_3d0 = 0;
      uStack_3e8 = 0;
      pppuStack_3f0 = (undefined ***)0x0;
    }
    else {
      func_0x00010bfa6be0(&pppuStack_3f0,pppppuVar3);
    }
    unaff_x26 = (undefined **)&uStack_558;
    puVar6 = &uStack_3f1;
    FUN_108507fc0();
    uStack_468 = CONCAT44(uStack_468._4_4_,0xf);
    uStack_458 = CONCAT44(uStack_458._4_4_,0x100);
    pppuStack_470 = (undefined ***)&PTR_DAT_110a4fdb0;
    uStack_430 = 0;
    uStack_438 = 0;
    lStack_420 = 0;
    lStack_428 = 0;
    plStack_410 = (long *)0x0;
    uStack_418 = 0;
    uStack_440 = 1;
    plStack_408 = (long *)0x0;
    uStack_3b0 = 10;
    unaff_x27 = (undefined *****)0x100;
    uStack_3a0 = CONCAT22(*(undefined2 *)(puVar6 + 0x1a),0x100);
    ppuVar17 = (undefined **)&UNK_110a4fd40;
    ppuStack_3b8 = &PTR_FUN_110a4fd50;
    pppuStack_378 = (undefined ***)&pppuStack_470;
    puStack_368 = (undefined *)0x0;
    puStack_370 = (undefined *)0x0;
    plStack_358 = (long *)0x0;
    uStack_360 = 0;
    plStack_350 = (long *)0x0;
    puVar7 = &uStack_4e1;
    puStack_380 = puVar6;
    FUN_108508198();
    ppppuVar4 = ppppuStack_638;
    uStack_550 = 0xf;
    uStack_540 = 0x100;
    _objc_retain(ppppuStack_638);
    ppppuStack_528 = ppppuVar4;
    uStack_558 = &PTR_DAT_110862760;
    uStack_518 = 0;
    uStack_520 = 0;
    uStack_508 = 0;
    ppuStack_510 = (undefined **)0x0;
    plStack_4f8 = (long *)0x0;
    uStack_500 = 0;
    plStack_4f0 = (long *)0x0;
    bStack_4c6 = puVar7[0x1a];
    bStack_4c5 = puVar7[0x1b];
    ppuStack_4d8 = (undefined **)CONCAT44(ppuStack_4d8._4_4_,10);
    uStack_4c8 = 0x100;
    ppuStack_4e0 = &PTR_SUB_110862700;
    puStack_4a0 = &uStack_558;
    pppuStack_308 = &ppuStack_4e0;
    uStack_490 = 0;
    pppuStack_498 = (undefined ***)0x0;
    plStack_480 = (long *)0x0;
    uStack_488 = 0;
    plStack_478 = (long *)0x0;
    uStack_340 = 4;
    uStack_330 = 0x100;
    uStack_32e = CONCAT11(uStack_3a0._3_1_ & bStack_4c5,uStack_3a0._2_1_ | bStack_4c6);
    ppuVar19 = &PTR_DAT_1108629c8;
    ppuStack_348 = &PTR_DAT_1108629c8;
    pppuStack_310 = &ppuStack_3b8;
    plStack_2e0 = (long *)0x0;
    plStack_2e8 = (long *)0x0;
    uStack_2f0 = 0;
    uStack_2f8 = 0;
    puStack_300 = (undefined *)0x0;
    ppppuStack_570 = (undefined ****)0x0;
    pppuStack_568 = (undefined ***)0x0;
    uStack_560 = 0;
    uStack_574 = 0;
    pppppuVar18 = (undefined *****)&pppuStack_3f0;
    puStack_4a8 = puVar7;
    func_0x000107c310cc(pppppuVar18,&ppuStack_348,&ppppuStack_570,&uStack_574);
    _objc_retainAutoreleasedReturnValue();
    ppppuStack_630 = (undefined ****)pppppuVar18;
    if (ppppuStack_570 != (undefined ****)0x0) {
      pppuStack_568 = (undefined ***)ppppuStack_570;
      __ZdlPv();
    }
    plVar1 = plStack_2e0;
    ppuStack_348 = &PTR_DAT_1108629c8;
    plStack_2e0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_2e8;
    plStack_2e8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (puStack_300 != (undefined *)0x0) {
      __ZdlPv();
    }
    plVar1 = plStack_478;
    pppppuVar18 = (undefined *****)&pppuStack_498;
    ppuStack_4e0 = &PTR_SUB_110862700;
    plStack_478 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_480;
    plStack_480 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    ppppuStack_570 = (undefined ****)pppppuVar18;
    func_0x000107c27dd4(&ppppuStack_570);
    plVar1 = plStack_4f0;
    uStack_558 = &PTR_DAT_110862760;
    plStack_4f0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_4f8;
    plStack_4f8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    ppppuStack_570 = (undefined ****)&ppuStack_510;
    func_0x000107c27dd4(&ppppuStack_570);
    _objc_release(ppppuStack_528);
    plVar1 = plStack_350;
    ppuStack_3b8 = &PTR_FUN_110a4fd50;
    plStack_350 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_358;
    plStack_358 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (puStack_370 != (undefined *)0x0) {
      puStack_368 = puStack_370;
      __ZdlPv();
    }
    plVar1 = plStack_408;
    pppuStack_470 = (undefined ***)&PTR_DAT_110a4fdb0;
    plStack_408 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_410;
    plStack_410 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_428 != 0) {
      lStack_420 = lStack_428;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_3c8);
    _objc_release(uStack_3d8);
    _objc_release(uStack_3e0);
    pppppuVar16 = (undefined *****)ppppuStack_630;
    lStack_5b8 = 0;
    uStack_5c0 = 0;
    uStack_5a8 = 0;
    plStack_5b0 = (long *)0x0;
    uStack_598 = 0;
    uStack_5a0 = 0;
    uStack_588 = 0;
    uStack_590 = 0;
    _objc_retain(ppppuStack_630);
    func_0x00010bf52a60();
    if (pppppuVar16 != (undefined *****)0x0) {
      ppuStack_608 = &puStack_300;
      ppuStack_618 = &puStack_370;
      lStack_610 = *plStack_5b0;
      ppuStack_620 = &PTR_DAT_110862760;
      ppuStack_628 = &PTR_SUB_110862700;
      ppuVar17 = &PTR_PTR_1126d6000;
      do {
        ppuVar19 = (undefined **)0x0;
        do {
          if (*plStack_5b0 != lStack_610) {
            _objc_enumerationMutation(ppppuStack_630);
          }
          pppppuVar20 = *(undefined ******)(lStack_5b8 + (long)ppuVar19 * 8);
          unaff_x26 = (undefined **)pppppuVar20;
          func_0x00010c11ac00();
          _objc_retainAutoreleasedReturnValue();
          pppppuVar21 = (undefined *****)unaff_x26;
          func_0x00010c08fa60();
          pppppuVar18 = (undefined *****)(ulong)(pppppuVar21 == (undefined *****)0x0);
          _objc_release(unaff_x26);
          if (pppppuVar21 != (undefined *****)0x0) {
            _objc_opt_class(PTR_PTR_1126d67a0);
            if (pppppuVar3 == (undefined *****)0x0) {
              uStack_440 = 0;
              uStack_458 = 0;
              uStack_460 = 0;
              uStack_448 = 0;
              uStack_450 = 0;
              uStack_468 = 0;
              pppuStack_470 = (undefined ***)0x0;
            }
            else {
              func_0x00010bfa6be0(&pppuStack_470,pppppuVar3);
            }
            ppppuVar4 = &pppuStack_3f0;
            FUN_108507e48();
            pppppuVar21 = pppppuVar20;
            func_0x00010c11ac00();
            _objc_retainAutoreleasedReturnValue();
            uStack_3b0 = 0xf;
            uStack_3a0 = 0x100;
            _objc_retain();
            ppuStack_3b8 = ppuStack_620;
            pppuStack_308 = &ppuStack_3b8;
            pppuStack_378 = (undefined ***)0x0;
            puStack_380 = (undefined1 *)0x0;
            puStack_368 = (undefined *)0x0;
            puStack_370 = (undefined *)0x0;
            plStack_358 = (long *)0x0;
            uStack_360 = 0;
            plStack_350 = (long *)0x0;
            uStack_32e = *(undefined2 *)((long)ppppuVar4 + 0x1a);
            uStack_340 = 10;
            uStack_330 = 0x100;
            ppuStack_348 = ppuStack_628;
            ppuStack_608[1] = (undefined *)0x0;
            *ppuStack_608 = (undefined *)0x0;
            ppuStack_608[3] = (undefined *)0x0;
            ppuStack_608[2] = (undefined *)0x0;
            ppuStack_608[4] = (undefined *)0x0;
            ppuStack_4e0 = (undefined **)0x0;
            ppuStack_4d8 = (undefined **)0x0;
            uStack_4d0 = 0;
            uStack_558 = (undefined **)((ulong)uStack_558 & 0xffffffff00000000);
            unaff_x26 = (undefined **)&pppuStack_470;
            ppppuStack_388 = (undefined ****)pppppuVar21;
            pppuStack_310 = (undefined ***)ppppuVar4;
            func_0x000107c310cc(unaff_x26,&ppuStack_348,&ppuStack_4e0,&uStack_558);
            _objc_retainAutoreleasedReturnValue();
            if (ppuStack_4e0 != (undefined **)0x0) {
              ppuStack_4d8 = ppuStack_4e0;
              __ZdlPv();
            }
            plVar1 = plStack_2e0;
            ppuStack_348 = &PTR_SUB_110862700;
            plStack_2e0 = (long *)0x0;
            if (plVar1 != (long *)0x0) {
              (**(code **)(*plVar1 + 8))();
            }
            plVar1 = plStack_2e8;
            plStack_2e8 = (long *)0x0;
            if (plVar1 != (long *)0x0) {
              (**(code **)(*plVar1 + 8))();
            }
            ppuStack_4e0 = ppuStack_608;
            func_0x000107c27dd4(&ppuStack_4e0);
            plVar1 = plStack_350;
            ppuStack_3b8 = &PTR_DAT_110862760;
            plStack_350 = (long *)0x0;
            if (plVar1 != (long *)0x0) {
              (**(code **)(*plVar1 + 8))();
            }
            plVar1 = plStack_358;
            plStack_358 = (long *)0x0;
            if (plVar1 != (long *)0x0) {
              (**(code **)(*plVar1 + 8))();
            }
            ppuStack_4e0 = ppuStack_618;
            func_0x000107c27dd4(&ppuStack_4e0);
            _objc_release(ppppuStack_388);
            _objc_release(pppppuVar21);
            func_0x000107c27da8(&uStack_448);
            _objc_release(uStack_458);
            _objc_release(uStack_460);
            lStack_5f8 = 0;
            uStack_600 = 0;
            uStack_5e8 = 0;
            plStack_5f0 = (long *)0x0;
            uStack_5d8 = 0;
            uStack_5e0 = 0;
            uStack_5c8 = 0;
            uStack_5d0 = 0;
            _objc_retain(unaff_x26);
            pppppuVar21 = (undefined *****)unaff_x26;
            func_0x00010bf52a60();
            if (pppppuVar21 != (undefined *****)0x0) {
              lVar15 = *plStack_5f0;
              do {
                pppppuVar18 = (undefined *****)0x0;
                do {
                  if (*plStack_5f0 != lVar15) {
                    _objc_enumerationMutation(unaff_x26);
                  }
                  unaff_x28 = (undefined *****)PTR_PTR_1126d6798;
                  FUN_10850ef60(PTR_PTR_1126d6798,
                                *(undefined8 *)(lStack_5f8 + (long)pppppuVar18 * 8));
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c25ed40(pppppuVar3);
                  _objc_unsafeClaimAutoreleasedReturnValue();
                  _objc_release(unaff_x28);
                  pppppuVar18 = (undefined *****)((long)pppppuVar18 + 1);
                } while (pppppuVar21 != pppppuVar18);
                pppppuVar21 = (undefined *****)unaff_x26;
                func_0x00010bf52a60();
              } while (pppppuVar21 != (undefined *****)0x0);
            }
            unaff_x27 = (undefined *****)0x0;
            _objc_release(unaff_x26);
            puVar22 = PTR_PTR_1126d8f60;
            FUN_10850a65c(PTR_PTR_1126d8f60,pppppuVar20);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25ed40(pppppuVar3);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar22);
            _objc_release(unaff_x26);
          }
          ppuVar19 = (undefined **)((long)ppuVar19 + 1);
        } while ((undefined *****)ppuVar19 != pppppuVar16);
        pppppuVar16 = (undefined *****)ppppuStack_630;
        func_0x00010bf52a60();
      } while (pppppuVar16 != (undefined *****)0x0);
    }
    pppppuVar12 = (undefined *****)0x0;
    _objc_release(ppppuStack_630);
    ppppuStack_2d8 = ppppuStack_638;
    puStack_2d0 = PTR____NSArray0__struct_11034ab48;
    unaff_x25 = (undefined *****)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    pppppuVar13 = (undefined *****)0x1;
    pppppuVar21 = unaff_x25;
    FUN_1084ee948(pppppuVar3,1,unaff_x25,0,PTR____NSArray0__struct_11034ab48,
                  PTR____NSDictionary0__struct_11034ab58,PTR____NSDictionary0__struct_11034ab58,0);
    _objc_release(unaff_x25);
    _objc_release(ppppuStack_630);
    _objc_release(pppuStack_640);
    _objc_release(pppuStack_648);
  }
  _objc_release(ppppuStack_638);
  ppuVar8 = (undefined **)pppppuVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar19);
  _objc_release(pppuStack_640);
  _objc_release(pppuStack_648);
  _objc_release(ppppuStack_638);
  _objc_release(pppppuVar3);
  pppppuVar16 = (undefined *****)ppuVar8;
  __Unwind_Resume();
  pcStack_658 = FUN_1084e2f4c;
  lStack_6c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar14 = pppppuVar13;
  ppppuStack_6b0 = (undefined ****)unaff_x28;
  ppppuStack_6a8 = (undefined ****)unaff_x27;
  ppppuStack_6a0 = (undefined ****)unaff_x26;
  ppppuStack_698 = (undefined ****)unaff_x25;
  ppppuStack_690 = (undefined ****)ppuVar8;
  ppppuStack_688 = (undefined ****)ppuVar19;
  ppppuStack_680 = (undefined ****)pppppuVar18;
  ppppuStack_678 = (undefined ****)ppuVar17;
  ppppuStack_670 = (undefined ****)pppppuVar12;
  ppppuStack_668 = (undefined ****)pppppuVar3;
  ppuStack_660 = &puStack_160;
  _objc_retain();
  _objc_retain(pppppuVar13);
  pppppuVar20 = (undefined *****)0x0;
  ppppuStack_9c8 = (undefined ****)pppppuVar13;
  ppppuStack_990 = (undefined ****)pppppuVar16;
  if (pppppuVar13 != (undefined *****)0x0) {
    ppuVar19 = &PTR_PTR_1126b4000;
    _objc_opt_class(PTR_PTR_1126b47a0);
    pppppuVar12 = (undefined *****)&pppuStack_900;
    if (pppppuVar16 == (undefined *****)0x0) {
      ppppuStack_860 = (undefined ****)0x0;
      uStack_878 = 0;
      uStack_880 = 0;
      uStack_868 = 0;
      uStack_870 = 0;
      uStack_888 = 0;
      pppuStack_890 = (undefined ***)0x0;
    }
    else {
      func_0x00010bfa6be0(&pppuStack_890,pppppuVar16);
    }
    pppppuVar18 = &ppppuStack_820;
    FUN_108507e48();
    ppppuVar4 = ppppuStack_9c8;
    uStack_7e0 = 0xf;
    uStack_7d0 = 0x100;
    _objc_retain(ppppuStack_9c8);
    ppppuStack_7b8 = ppppuVar4;
    pppuStack_7e8 = (undefined ***)&PTR_DAT_110862760;
    ppppuStack_7a8 = (undefined ****)0x0;
    puStack_7b0 = (undefined4 *)0x0;
    pppuStack_798 = (undefined ***)0x0;
    pppuStack_7a0 = (undefined ***)0x0;
    plStack_788 = (long *)0x0;
    uStack_790 = 0;
    plStack_780 = (long *)0x0;
    uStack_746 = *(undefined2 *)((long)pppppuVar18 + 0x1a);
    uStack_758 = 10;
    uStack_748 = 0x100;
    pppuStack_760 = (undefined ***)&PTR_SUB_110862700;
    uStack_710 = 0;
    pppuStack_718 = (undefined ***)0x0;
    plStack_700 = (long *)0x0;
    uStack_708 = 0;
    plStack_6f8 = (long *)0x0;
    pppuStack_900 = (undefined ***)0x0;
    pppuStack_8f8 = (undefined ***)0x0;
    plStack_8f0 = (long *)0x0;
    uStack_980 = (undefined **)((ulong)uStack_980._4_4_ << 0x20);
    pppppuVar16 = (undefined *****)&pppuStack_890;
    pppppuVar21 = (undefined *****)&pppuStack_900;
    ppppuStack_728 = (undefined ****)pppppuVar18;
    pppuStack_720 = (undefined ***)&pppuStack_7e8;
    func_0x000107c310cc(pppppuVar16,&pppuStack_760,pppppuVar21,&uStack_980);
    _objc_retainAutoreleasedReturnValue();
    pppppuVar18 = pppppuVar16;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    ppppuStack_9d0 = (undefined ****)pppppuVar18;
    _objc_release(pppppuVar16);
    if ((undefined ****)pppuStack_900 != (undefined ****)0x0) {
      pppuStack_8f8 = pppuStack_900;
      __ZdlPv();
    }
    plVar1 = plStack_6f8;
    pppppuVar16 = (undefined *****)&pppuStack_718;
    pppuStack_760 = (undefined ***)&PTR_SUB_110862700;
    plStack_6f8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_700;
    plStack_700 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    pppuStack_900 = (undefined ***)pppppuVar16;
    func_0x000107c27dd4(&pppuStack_900);
    plVar1 = plStack_780;
    pppuStack_7e8 = (undefined ***)&PTR_DAT_110862760;
    plStack_780 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_788;
    plStack_788 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    pppuStack_900 = (undefined ***)&pppuStack_7a0;
    func_0x000107c27dd4(&pppuStack_900);
    _objc_release(ppppuStack_7b8);
    func_0x000107c27da8(&uStack_868);
    _objc_release(uStack_878);
    _objc_release(uStack_880);
    pppppuVar20 = (undefined *****)ppppuStack_990;
    if ((undefined *****)ppppuStack_9d0 == (undefined *****)0x0) {
      _objc_retain(ppppuStack_990);
      pppppuVar18 = pppppuVar20;
      pppppuVar14 = (undefined *****)ppppuStack_9c8;
      FUN_1084dc688();
      _objc_retainAutoreleasedReturnValue();
      ppuVar17 = (undefined **)pppppuVar18;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pppppuVar18);
      if ((undefined *****)ppuVar17 != (undefined *****)0x0) {
        pppppuVar18 = (undefined *****)PTR_PTR_1126d8fe8;
        pppppuVar14 = (undefined *****)ppuVar17;
        FUN_10851ceac();
        _objc_retainAutoreleasedReturnValue();
        pppppuVar21 = pppppuVar18;
        func_0x00010c25ed40(ppppuStack_990);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(pppppuVar18);
      }
      _objc_release(ppuVar17);
      _objc_release(ppppuStack_990);
    }
    else {
      pppppuVar18 = (undefined *****)ppppuStack_9d0;
      func_0x00010c27dd80();
      unaff_x26 = (undefined **)ppppuStack_9d0;
      ppuVar8 = (undefined **)&pppuStack_7e8;
      if (pppppuVar18 == (undefined *****)0x7) {
        _objc_retain(ppppuStack_9c8);
        _objc_retain(pppppuVar20);
        _objc_opt_class(PTR_PTR_1126b47a0);
        if (pppppuVar20 == (undefined *****)0x0) {
          ppppuStack_860 = (undefined ****)0x0;
          uStack_878 = 0;
          uStack_880 = 0;
          uStack_868 = 0;
          uStack_870 = 0;
          uStack_888 = 0;
          pppuStack_890 = (undefined ***)0x0;
        }
        else {
          func_0x00010bfa6be0(&pppuStack_890,pppppuVar20);
        }
        pppppuVar18 = &ppppuStack_820;
        FUN_108507e48();
        ppppuVar4 = ppppuStack_9c8;
        uStack_7e0 = 0xf;
        uStack_7d0 = 0x100;
        _objc_retain(ppppuStack_9c8);
        ppppuStack_7b8 = ppppuVar4;
        pppuStack_7e8 = (undefined ***)&PTR_DAT_110862760;
        ppppuStack_7a8 = (undefined ****)0x0;
        puStack_7b0 = (undefined4 *)0x0;
        pppuStack_798 = (undefined ***)0x0;
        pppuStack_7a0 = (undefined ***)0x0;
        plStack_788 = (long *)0x0;
        uStack_790 = 0;
        plStack_780 = (long *)0x0;
        uStack_746 = *(undefined2 *)((long)pppppuVar18 + 0x1a);
        uStack_758 = 10;
        uStack_748 = 0x100;
        pppuStack_760 = (undefined ***)&PTR_SUB_110862700;
        pppuStack_720 = (undefined ***)&pppuStack_7e8;
        uStack_710 = 0;
        pppuStack_718 = (undefined ***)0x0;
        plStack_700 = (long *)0x0;
        uStack_708 = 0;
        plStack_6f8 = (long *)0x0;
        pppuStack_900 = (undefined ***)0x0;
        pppuStack_8f8 = (undefined ***)0x0;
        plStack_8f0 = (long *)0x0;
        uStack_980 = (undefined **)((ulong)uStack_980 & 0xffffffff00000000);
        ppppuVar4 = &pppuStack_890;
        ppppuStack_728 = (undefined ****)pppppuVar18;
        func_0x000107c310cc(ppppuVar4,&pppuStack_760,&pppuStack_900,&uStack_980);
        _objc_retainAutoreleasedReturnValue();
        ppppuVar5 = ppppuVar4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        pppuStack_9e0 = (undefined ***)ppppuVar5;
        _objc_release(ppppuVar4);
        if ((undefined ****)pppuStack_900 != (undefined ****)0x0) {
          pppuStack_8f8 = pppuStack_900;
          __ZdlPv();
        }
        plVar1 = plStack_6f8;
        pppuStack_760 = (undefined ***)&PTR_SUB_110862700;
        plStack_6f8 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_700;
        plStack_700 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        pppuStack_900 = (undefined ***)&pppuStack_718;
        func_0x000107c27dd4(&pppuStack_900);
        plVar1 = plStack_780;
        pppuStack_7e8 = (undefined ***)&PTR_DAT_110862760;
        plStack_780 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_788;
        plStack_788 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        pppuStack_900 = (undefined ***)&pppuStack_7a0;
        func_0x000107c27dd4(&pppuStack_900);
        _objc_release(ppppuStack_7b8);
        func_0x000107c27da8(&uStack_868);
        _objc_release(uStack_878);
        _objc_release(uStack_880);
        ppppuVar4 = (undefined ****)pppuStack_9e0;
        func_0x00010bfa2680();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar5 = ppppuVar4;
        func_0x00010bf0a5c0();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar9 = ppppuVar5;
        func_0x00010c0ecf00();
        _objc_retainAutoreleasedReturnValue();
        pppuStack_9d8 = (undefined ***)ppppuVar9;
        _objc_release(ppppuVar5);
        _objc_release(ppppuVar4);
        _objc_opt_class(PTR_PTR_1126b47a0);
        if ((undefined *****)ppppuStack_990 == (undefined *****)0x0) {
          uStack_7f0 = 0;
          uStack_808 = 0;
          uStack_810 = 0;
          uStack_7f8 = 0;
          uStack_800 = 0;
          pppuStack_818 = (undefined ***)0x0;
          ppppuStack_820 = (undefined ****)0x0;
        }
        else {
          func_0x00010bfa6be0(&ppppuStack_820);
        }
        puVar10 = &uStack_984;
        FUN_108507fc0();
        uStack_888 = CONCAT44(uStack_888._4_4_,0xf);
        uStack_878 = CONCAT44(uStack_878._4_4_,0x100);
        pppppuVar18 = (undefined *****)&UNK_110a4fda0;
        ppppuStack_860 = (undefined ****)0x7;
        pppuStack_890 = (undefined ***)&PTR_DAT_110a4fdb0;
        uStack_850 = 0;
        uStack_858 = 0;
        ppuStack_840 = (undefined **)0x0;
        ppuStack_848 = (undefined **)0x0;
        plStack_830 = (long *)0x0;
        uStack_838 = 0;
        plStack_828 = (long *)0x0;
        uStack_7e0 = 10;
        uStack_7d0 = CONCAT22(*(undefined2 *)((long)puVar10 + 0x1a),0x100);
        ppuVar19 = (undefined **)&UNK_110a4fd40;
        ppuVar8 = (undefined **)&pppuStack_7e8;
        pppuStack_7e8 = (undefined ***)&PTR_FUN_110a4fd50;
        ppppuStack_7a8 = &pppuStack_890;
        pppuStack_798 = (undefined ***)0x0;
        pppuStack_7a0 = (undefined ***)0x0;
        plStack_788 = (long *)0x0;
        uStack_790 = 0;
        plStack_780 = (long *)0x0;
        puVar6 = &uStack_901;
        puStack_7b0 = puVar10;
        FUN_108508384();
        pppuVar2 = pppuStack_9d8;
        uStack_978 = CONCAT44(uStack_978._4_4_,0xf);
        uStack_968 = CONCAT44(uStack_968._4_4_,0x100);
        _objc_retain(pppuStack_9d8);
        pppuStack_950 = pppuVar2;
        uStack_980 = &PTR_DAT_110862760;
        uStack_940 = 0;
        uStack_948 = 0;
        uStack_930 = 0;
        uStack_938 = 0;
        plStack_920 = (long *)0x0;
        uStack_928 = 0;
        plStack_918 = (long *)0x0;
        pppuStack_8f8 = (undefined ***)CONCAT44(pppuStack_8f8._4_4_,10);
        uStack_8e8._0_4_ = CONCAT13(puVar6[0x1b],CONCAT12(puVar6[0x1a],0x100));
        pppuStack_900 = (undefined ***)&PTR_SUB_110862700;
        puStack_8c0 = &uStack_980;
        pppuStack_720 = (undefined ***)&pppuStack_900;
        uStack_8b0 = 0;
        uStack_8b8 = 0;
        plStack_8a0 = (long *)0x0;
        uStack_8a8 = 0;
        plStack_898 = (long *)0x0;
        uStack_758 = 4;
        uStack_748 = 0x100;
        uStack_746 = CONCAT11(uStack_7d0._3_1_ & puVar6[0x1b],uStack_7d0._2_1_ | puVar6[0x1a]);
        pppuStack_760 = (undefined ***)&PTR_DAT_1108629c8;
        ppppuStack_728 = &pppuStack_7e8;
        plStack_6f8 = (long *)0x0;
        uStack_710 = 0;
        pppuStack_718 = (undefined ***)0x0;
        plStack_700 = (long *)0x0;
        uStack_708 = 0;
        puStack_6e0 = (undefined8 *)0x0;
        puStack_6d8 = (undefined8 *)0x0;
        unaff_x26 = (undefined **)&pppuStack_7e8;
        uStack_6d0 = 0;
        uStack_768 = (undefined *****)((ulong)uStack_768._4_4_ << 0x20);
        pppppuVar16 = &ppppuStack_820;
        pppppuVar14 = (undefined *****)&pppuStack_760;
        puStack_8c8 = puVar6;
        func_0x000107c310cc(pppppuVar16,pppppuVar14,&puStack_6e0,&uStack_768);
        _objc_retainAutoreleasedReturnValue();
        pppppuVar21 = pppppuVar16;
        func_0x00010bf0a540();
        _objc_retainAutoreleasedReturnValue();
        ppppuStack_9c0 = (undefined ****)pppppuVar21;
        _objc_release(pppppuVar16);
        if (puStack_6e0 != (undefined8 *)0x0) {
          puStack_6d8 = puStack_6e0;
          __ZdlPv();
        }
        plVar1 = plStack_6f8;
        pppuStack_760 = (undefined ***)&PTR_DAT_1108629c8;
        plStack_6f8 = (long *)0x0;
        ppuVar17 = (undefined **)&pppuStack_7e8;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_700;
        plStack_700 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if ((undefined ****)pppuStack_718 != (undefined ****)0x0) {
          __ZdlPv();
        }
        plVar1 = plStack_898;
        pppuStack_900 = (undefined ***)&PTR_SUB_110862700;
        plStack_898 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_8a0;
        plStack_8a0 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        puStack_6e0 = &uStack_8b8;
        func_0x000107c27dd4(&puStack_6e0);
        plVar1 = plStack_918;
        uStack_980 = &PTR_DAT_110862760;
        plStack_918 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_920;
        plStack_920 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        puStack_6e0 = &uStack_938;
        func_0x000107c27dd4(&puStack_6e0);
        _objc_release(pppuStack_950);
        plVar1 = plStack_780;
        pppuStack_7e8 = (undefined ***)&PTR_FUN_110a4fd50;
        plStack_780 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_788;
        plStack_788 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if ((undefined ****)pppuStack_7a0 != (undefined ****)0x0) {
          pppuStack_798 = pppuStack_7a0;
          __ZdlPv();
        }
        plVar1 = plStack_828;
        pppuStack_890 = (undefined ***)&PTR_DAT_110a4fdb0;
        plStack_828 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_830;
        plStack_830 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if ((undefined ***)ppuStack_848 != (undefined ***)0x0) {
          ppuStack_840 = ppuStack_848;
          __ZdlPv();
        }
        func_0x000107c27da8(&uStack_7f8);
        _objc_release(uStack_808);
        _objc_release(uStack_810);
        pppppuVar20 = (undefined *****)ppppuStack_9c0;
        pppuStack_8f8 = (undefined ***)0x0;
        pppuStack_900 = (undefined ***)0x0;
        uStack_8e8 = 0;
        plStack_8f0 = (long *)0x0;
        uStack_8d8 = 0;
        uStack_8e0 = 0;
        puStack_8c8 = (undefined1 *)0x0;
        uStack_8d0 = 0;
        _objc_retain(ppppuStack_9c0);
        pppppuVar21 = (undefined *****)&pppuStack_900;
        func_0x00010bf52a60();
        pppppuVar16 = (undefined *****)ppppuStack_990;
        if (pppppuVar20 != (undefined *****)0x0) {
          lStack_9a0 = *plStack_8f0;
          unaff_x27 = (undefined *****)&pppuStack_890;
          unaff_x28 = (undefined *****)&pppuStack_7a0;
          pppuStack_9b8 = &ppuStack_848;
          pppuStack_9a8 = (undefined ***)&PTR_DAT_110862760;
          pppuStack_9b0 = (undefined ***)&PTR_SUB_110862700;
          do {
            pppppuVar21 = (undefined *****)0x0;
            ppppuStack_998 = (undefined ****)pppppuVar20;
            do {
              if (*plStack_8f0 != lStack_9a0) {
                _objc_enumerationMutation(ppppuStack_9c0);
              }
              ppuVar17 = pppuStack_8f8[(long)pppppuVar21];
              unaff_x26 = (undefined **)PTR_PTR_1126d8f60;
              FUN_10850a65c(PTR_PTR_1126d8f60,ppuVar17);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c25ed40(pppppuVar16);
              _objc_unsafeClaimAutoreleasedReturnValue();
              _objc_opt_class(PTR_PTR_1126d67a0);
              if (pppppuVar16 == (undefined *****)0x0) {
                pppuStack_950 = (undefined ***)0x0;
                uStack_968 = 0;
                uStack_970 = 0;
                uStack_958 = 0;
                uStack_960 = 0;
                uStack_978 = 0;
                uStack_980 = (undefined **)0x0;
              }
              else {
                func_0x00010bfa6be0(&uStack_980,pppppuVar16);
              }
              puVar10 = (undefined4 *)&uStack_901;
              FUN_108507e48();
              pppppuVar20 = (undefined *****)ppuVar17;
              func_0x00010c11ac00();
              _objc_retainAutoreleasedReturnValue();
              uStack_888 = CONCAT44(uStack_888._4_4_,0xf);
              uStack_878 = CONCAT44(uStack_878._4_4_,0x100);
              _objc_retain();
              pppuStack_890 = pppuStack_9a8;
              uStack_850 = 0;
              uStack_858 = 0;
              ppuStack_840 = (undefined **)0x0;
              ppuStack_848 = (undefined **)0x0;
              plStack_830 = (long *)0x0;
              uStack_838 = 0;
              plStack_828 = (long *)0x0;
              uStack_7e0 = 10;
              uStack_7d0 = CONCAT22(*(undefined2 *)((long)puVar10 + 0x1a),0x100);
              pppuStack_7e8 = pppuStack_9b0;
              pppuStack_798 = (undefined ***)0x0;
              pppuStack_7a0 = (undefined ***)0x0;
              plStack_788 = (long *)0x0;
              uStack_790 = 0;
              plStack_780 = (long *)0x0;
              ppppuStack_820 = (undefined ****)0x0;
              pppuStack_818 = (undefined ***)0x0;
              uStack_810 = 0;
              uStack_984 = 0;
              pppppuVar16 = (undefined *****)&uStack_980;
              ppppuStack_860 = (undefined ****)pppppuVar20;
              puStack_7b0 = puVar10;
              ppppuStack_7a8 = (undefined ****)unaff_x27;
              func_0x000107c310cc(pppppuVar16,&pppuStack_7e8,&ppppuStack_820,&uStack_984);
              _objc_retainAutoreleasedReturnValue();
              pppppuVar18 = pppppuVar16;
              func_0x00010bfb1920();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(pppppuVar16);
              if (ppppuStack_820 != (undefined ****)0x0) {
                pppuStack_818 = (undefined ***)ppppuStack_820;
                __ZdlPv();
              }
              plVar1 = plStack_780;
              pppuStack_7e8 = (undefined ***)&PTR_SUB_110862700;
              plStack_780 = (long *)0x0;
              if (plVar1 != (long *)0x0) {
                (**(code **)(*plVar1 + 8))();
              }
              plVar1 = plStack_788;
              plStack_788 = (long *)0x0;
              if (plVar1 != (long *)0x0) {
                (**(code **)(*plVar1 + 8))();
              }
              ppppuStack_820 = (undefined ****)unaff_x28;
              func_0x000107c27dd4(&ppppuStack_820);
              plVar1 = plStack_828;
              pppuStack_890 = (undefined ***)&PTR_DAT_110862760;
              plStack_828 = (long *)0x0;
              if (plVar1 != (long *)0x0) {
                (**(code **)(*plVar1 + 8))();
              }
              plVar1 = plStack_830;
              plStack_830 = (long *)0x0;
              if (plVar1 != (long *)0x0) {
                (**(code **)(*plVar1 + 8))();
              }
              ppppuStack_820 = (undefined ****)pppuStack_9b8;
              func_0x000107c27dd4(&ppppuStack_820);
              _objc_release(ppppuStack_860);
              _objc_release(pppppuVar20);
              func_0x000107c27da8(&uStack_958);
              _objc_release(uStack_968);
              _objc_release(uStack_970);
              ppppuVar4 = ppppuStack_990;
              if (pppppuVar18 != (undefined *****)0x0) {
                puVar22 = PTR_PTR_1126d6798;
                FUN_10850ef60(PTR_PTR_1126d6798,pppppuVar18);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c25ed40(ppppuVar4);
                _objc_unsafeClaimAutoreleasedReturnValue();
                _objc_release(puVar22);
              }
              ppppuVar4 = ppppuStack_990;
              func_0x00010c11ac00();
              _objc_retainAutoreleasedReturnValue();
              ppuVar8 = (undefined **)PTR____NSArray0__struct_11034ab48;
              puStack_6e0 = (undefined8 *)PTR____NSArray0__struct_11034ab48;
              ppuVar19 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
              uStack_768 = (undefined *****)ppuVar17;
              func_0x00010bf72080();
              _objc_retainAutoreleasedReturnValue();
              pppppuVar14 = (undefined *****)0x2;
              FUN_1084ee948(ppppuVar4,2,ppuVar19,0,ppuVar8,PTR____NSDictionary0__struct_11034ab58,
                            PTR____NSDictionary0__struct_11034ab58,0);
              _objc_release(ppuVar19);
              _objc_release(ppuVar17);
              _objc_release(pppppuVar18);
              _objc_release(unaff_x26);
              pppppuVar16 = (undefined *****)ppppuStack_990;
              pppppuVar21 = (undefined *****)((long)pppppuVar21 + 1);
            } while ((undefined *****)ppppuStack_998 != pppppuVar21);
            pppppuVar21 = (undefined *****)&pppuStack_900;
            pppppuVar20 = (undefined *****)ppppuStack_9c0;
            func_0x00010bf52a60();
          } while (pppppuVar20 != (undefined *****)0x0);
        }
        _objc_release(ppppuStack_9c0);
        _objc_release(ppppuStack_9c0);
        _objc_release(pppuStack_9d8);
        _objc_release(pppuStack_9e0);
        _objc_release(ppppuStack_990);
        _objc_release(ppppuStack_9c8);
        pppppuVar20 = pppppuVar12;
      }
      else {
        pppppuVar18 = (undefined *****)PTR_PTR_1126d8f60;
        FUN_10850a65c(PTR_PTR_1126d8f60,ppppuStack_9d0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(pppppuVar20);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126d67a0);
        if (pppppuVar20 == (undefined *****)0x0) {
          ppppuStack_860 = (undefined ****)0x0;
          uStack_878 = 0;
          uStack_880 = 0;
          uStack_868 = 0;
          uStack_870 = 0;
          uStack_888 = 0;
          pppuStack_890 = (undefined ***)0x0;
        }
        else {
          func_0x00010bfa6be0(&pppuStack_890,pppppuVar20);
        }
        pppppuVar16 = &ppppuStack_820;
        FUN_108507e48();
        func_0x00010c11ac00();
        _objc_retainAutoreleasedReturnValue();
        uStack_7e0 = 0xf;
        uStack_7d0 = 0x100;
        _objc_retain();
        pppuStack_7e8 = (undefined ***)&PTR_DAT_110862760;
        ppppuStack_7a8 = (undefined ****)0x0;
        puStack_7b0 = (undefined4 *)0x0;
        pppuStack_798 = (undefined ***)0x0;
        pppuStack_7a0 = (undefined ***)0x0;
        plStack_788 = (long *)0x0;
        uStack_790 = 0;
        plStack_780 = (long *)0x0;
        uStack_746 = *(undefined2 *)((long)pppppuVar16 + 0x1a);
        uStack_758 = 10;
        uStack_748 = 0x100;
        pppuStack_760 = (undefined ***)&PTR_SUB_110862700;
        pppuStack_720 = (undefined ***)&pppuStack_7e8;
        uStack_710 = 0;
        pppuStack_718 = (undefined ***)0x0;
        plStack_700 = (long *)0x0;
        uStack_708 = 0;
        plStack_6f8 = (long *)0x0;
        pppuStack_900 = (undefined ***)0x0;
        pppuStack_8f8 = (undefined ***)0x0;
        plStack_8f0 = (long *)0x0;
        uStack_980 = (undefined **)((ulong)uStack_980 & 0xffffffff00000000);
        pppppuVar21 = (undefined *****)&pppuStack_890;
        ppppuStack_7b8 = (undefined ****)unaff_x26;
        ppppuStack_728 = (undefined ****)pppppuVar16;
        func_0x000107c310cc(pppppuVar21,&pppuStack_760,&pppuStack_900,&uStack_980);
        _objc_retainAutoreleasedReturnValue();
        ppuVar19 = (undefined **)pppppuVar21;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(pppppuVar21);
        if ((undefined ****)pppuStack_900 != (undefined ****)0x0) {
          pppuStack_8f8 = pppuStack_900;
          __ZdlPv();
        }
        plVar1 = plStack_6f8;
        pppppuVar16 = (undefined *****)&pppuStack_718;
        pppuStack_760 = (undefined ***)&PTR_SUB_110862700;
        plStack_6f8 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_700;
        plStack_700 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        pppuStack_900 = (undefined ***)pppppuVar16;
        func_0x000107c27dd4(&pppuStack_900);
        plVar1 = plStack_780;
        pppuStack_7e8 = (undefined ***)&PTR_DAT_110862760;
        plStack_780 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_788;
        plStack_788 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        pppuStack_900 = (undefined ***)&pppuStack_7a0;
        func_0x000107c27dd4(&pppuStack_900);
        _objc_release(ppppuStack_7b8);
        _objc_release(unaff_x26);
        func_0x000107c27da8(&uStack_868);
        _objc_release(uStack_878);
        _objc_release(uStack_880);
        if ((undefined *****)ppuVar19 != (undefined *****)0x0) {
          pppppuVar16 = (undefined *****)PTR_PTR_1126d6798;
          FUN_10850ef60(PTR_PTR_1126d6798,ppuVar19);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(ppppuStack_990);
          _objc_unsafeClaimAutoreleasedReturnValue();
          pppppuVar21 = (undefined *****)ppppuStack_9d0;
          func_0x00010c27dd80();
          if (pppppuVar21 == (undefined *****)0x1) {
            pppppuVar21 = (undefined *****)ppppuStack_9d0;
            func_0x00010bf5a820();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = (undefined **)pppppuVar21;
            func_0x00010bf5bbc0();
            _objc_retainAutoreleasedReturnValue();
            pppppuVar20 = (undefined *****)unaff_x26;
            func_0x00010c08fa60();
            pppppuVar12 = (undefined *****)(ulong)(pppppuVar20 == (undefined *****)0x0);
            _objc_release(unaff_x26);
            _objc_release(pppppuVar21);
            puVar22 = PTR__OBJC_CLASS___NSSet_1126ae870;
            if (pppppuVar20 != (undefined *****)0x0) {
              pppppuVar21 = (undefined *****)ppppuStack_9d0;
              func_0x00010bf5a820();
              _objc_retainAutoreleasedReturnValue();
              unaff_x27 = pppppuVar21;
              func_0x00010bf5bbc0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2268e0(puVar22);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(unaff_x27);
              _objc_release(pppppuVar21);
              pppppuVar12 = (undefined *****)ppppuStack_990;
              unaff_x26 = (undefined **)ppppuStack_990;
              FUN_1084ea0fc(ppppuStack_990,puVar22);
              _objc_retainAutoreleasedReturnValue();
              FUN_1084ee948(pppppuVar12,1,unaff_x26,0,PTR____NSArray0__struct_11034ab48,
                            PTR____NSDictionary0__struct_11034ab58,
                            PTR____NSDictionary0__struct_11034ab58,0);
              _objc_release(unaff_x26);
              _objc_release(puVar22);
            }
          }
          _objc_release(pppppuVar16);
        }
        ppppuStack_778 = ppppuStack_9c8;
        puStack_770 = PTR____NSArray0__struct_11034ab48;
        ppuVar17 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        pppppuVar14 = (undefined *****)0x2;
        pppppuVar21 = (undefined *****)ppuVar17;
        FUN_1084ee948(ppppuStack_990,2,ppuVar17,0,PTR____NSArray0__struct_11034ab48,
                      PTR____NSDictionary0__struct_11034ab58,PTR____NSDictionary0__struct_11034ab58,
                      0);
        _objc_release(ppuVar17);
        _objc_release(ppuVar19);
        _objc_release(pppppuVar18);
        pppppuVar20 = pppppuVar12;
      }
    }
    _objc_release(ppppuStack_9d0);
  }
  _objc_release(ppppuStack_9c8);
  pppppuVar12 = (undefined *****)ppppuStack_990;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_6c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x26);
  _objc_release(ppuVar17);
  _objc_release(pppppuVar16);
  _objc_release(ppuVar19);
  _objc_release(pppppuVar18);
  _objc_release(ppppuStack_9d0);
  _objc_release(ppppuStack_9c8);
  _objc_release(ppppuStack_990);
  pppppuVar3 = pppppuVar12;
  __Unwind_Resume();
  pcStack_9e8 = FUN_1084e4338;
  lStack_a58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuStack_a40 = (undefined ****)unaff_x28;
  ppppuStack_a38 = (undefined ****)unaff_x27;
  ppppuStack_a30 = (undefined ****)unaff_x26;
  ppppuStack_a28 = (undefined ****)pppppuVar12;
  ppppuStack_a20 = (undefined ****)ppuVar8;
  ppppuStack_a18 = (undefined ****)ppuVar19;
  ppppuStack_a10 = (undefined ****)pppppuVar18;
  ppppuStack_a08 = (undefined ****)ppuVar17;
  ppppuStack_a00 = (undefined ****)pppppuVar16;
  ppppuStack_9f8 = (undefined ****)pppppuVar20;
  pppuStack_9f0 = &ppuStack_660;
  _objc_retain();
  _objc_retain(pppppuVar14);
  _objc_retain(pppppuVar21);
  pppppuVar16 = pppppuVar14;
  func_0x00010c08fa60();
  if (pppppuVar16 == (undefined *****)0x0) goto LAB_1084e49f8;
  pppppuVar16 = pppppuVar21;
  func_0x00010bf529e0();
  if (pppppuVar16 == (undefined *****)0x0) goto LAB_1084e49f8;
  _objc_opt_class(PTR_PTR_1126d67a0);
  if (pppppuVar3 == (undefined *****)0x0) {
    uStack_a70 = 0;
    uStack_a88 = 0;
    uStack_a90 = 0;
    uStack_a78 = 0;
    uStack_a80 = 0;
    uStack_a98 = 0;
    pppuStack_aa0 = (undefined ***)0x0;
  }
  else {
    func_0x00010bfa6be0(&pppuStack_aa0,pppppuVar3);
  }
  ppuVar19 = (undefined **)&ppppuStack_b88;
  puVar6 = &uStack_b11;
  FUN_10850e510();
  uStack_b80 = 0xf;
  uStack_b70 = 0x100;
  _objc_retain(pppppuVar14);
  unaff_x28 = (undefined *****)&UNK_110862750;
  ppppuStack_b88 = (undefined ****)&PTR_DAT_110862760;
  uStack_b48 = 0;
  uStack_b50 = 0;
  uStack_b38 = 0;
  ppuStack_b40 = (undefined **)0x0;
  plStack_b28 = (long *)0x0;
  uStack_b30 = 0;
  plStack_b20 = (long *)0x0;
  uStack_af6 = *(undefined2 *)(puVar6 + 0x1a);
  uStack_b08 = 10;
  uStack_af8 = 0x100;
  ppuVar8 = &PTR_SUB_110862700;
  ppuStack_b10 = &PTR_SUB_110862700;
  ppppuStack_ad0 = (undefined ****)&ppppuStack_b88;
  uStack_ac0 = 0;
  pppuStack_ac8 = (undefined ***)0x0;
  plStack_ab0 = (long *)0x0;
  uStack_ab8 = 0;
  plStack_aa8 = (long *)0x0;
  ppppuStack_ba0 = (undefined ****)0x0;
  pppuStack_b98 = (undefined ***)0x0;
  uStack_b90 = 0;
  uStack_ba4 = 0;
  pppppuVar18 = (undefined *****)&pppuStack_aa0;
  ppppuStack_b58 = (undefined ****)pppppuVar14;
  puStack_ad8 = puVar6;
  func_0x000107c310cc(pppppuVar18,&ppuStack_b10,&ppppuStack_ba0,&uStack_ba4);
  _objc_retainAutoreleasedReturnValue();
  if (ppppuStack_ba0 != (undefined ****)0x0) {
    pppuStack_b98 = (undefined ***)ppppuStack_ba0;
    __ZdlPv();
  }
  plVar1 = plStack_aa8;
  pppppuVar12 = (undefined *****)&pppuStack_ac8;
  ppuStack_b10 = &PTR_SUB_110862700;
  plStack_aa8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_ab0;
  plStack_ab0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppppuStack_ba0 = (undefined ****)pppppuVar12;
  func_0x000107c27dd4(&ppppuStack_ba0);
  plVar1 = plStack_b20;
  ppppuStack_b88 = (undefined ****)&PTR_DAT_110862760;
  plStack_b20 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_b28;
  plStack_b28 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppppuStack_ba0 = (undefined ****)&ppuStack_b40;
  func_0x000107c27dd4(&ppppuStack_ba0);
  _objc_release(ppppuStack_b58);
  func_0x000107c27da8(&uStack_a78);
  _objc_release(uStack_a88);
  _objc_release(uStack_a90);
  pppppuVar16 = pppppuVar18;
  func_0x00010bf529e0();
  if (pppppuVar16 == (undefined *****)0x0) goto LAB_1084e49f0;
  puStack_bd8 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar8 = (undefined **)pppppuVar18;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar16 = (undefined *****)ppuVar8;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puStack_bd8);
  pppppuVar12 = pppppuVar16;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppppuVar16);
  pppppuVar16 = pppppuVar12;
  func_0x00010bf529e0();
  pppppuVar20 = (undefined *****)ppuVar8;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar13 = pppppuVar20;
  func_0x00010bf529e0();
  _objc_release(pppppuVar20);
  puStack_bb0 = puStack_bd8;
  if (pppppuVar16 == pppppuVar13) goto LAB_1084e49d0;
  pppppuVar16 = pppppuVar12;
  func_0x00010bf529e0();
  puVar22 = PTR_PTR_1126d6798;
  if (pppppuVar16 == (undefined *****)0x0) {
    FUN_10850ef60(PTR_PTR_1126d6798,ppuVar8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_10850eb48(PTR_PTR_1126d6798,ppuVar8);
    _objc_retainAutoreleasedReturnValue();
    if (puVar22 == (undefined *)0x0) goto LAB_1084e4a4c;
    _objc_setProperty_nonatomic_copy();
  }
  while( true ) {
    func_0x00010c25ed40(pppppuVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppppuStack_a68 = (undefined ****)pppppuVar14;
    ppppuStack_a60 = (undefined ****)pppppuVar12;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    FUN_1084ee948(pppppuVar3,2,puVar11,0,PTR____NSArray0__struct_11034ab48,
                  PTR____NSDictionary0__struct_11034ab58,PTR____NSDictionary0__struct_11034ab58,0);
    _objc_release(puVar11);
    _objc_opt_class(PTR_PTR_1126b47a0);
    if (pppppuVar3 == (undefined *****)0x0) {
      uStack_a70 = 0;
      uStack_a88 = 0;
      uStack_a90 = 0;
      uStack_a78 = 0;
      uStack_a80 = 0;
      uStack_a98 = 0;
      pppuStack_aa0 = (undefined ***)0x0;
    }
    else {
      func_0x00010bfa6be0(&pppuStack_aa0,pppppuVar3);
    }
    puVar6 = &uStack_b11;
    FUN_108507e48();
    uStack_b80 = 0xf;
    uStack_b70 = 0x100;
    _objc_retain(pppppuVar14);
    ppppuStack_b88 = (undefined ****)(unaff_x28 + 2);
    ppuVar19[8] = (undefined *)0x0;
    ppuVar19[7] = (undefined *)0x0;
    ppuVar19[10] = (undefined *)0x0;
    ppuVar19[9] = (undefined *)0x0;
    ppuVar19[0xc] = (undefined *)0x0;
    ppuVar19[0xb] = (undefined *)0x0;
    plStack_b20 = (long *)0x0;
    uStack_af6 = *(undefined2 *)(puVar6 + 0x1a);
    uStack_b08 = 10;
    uStack_af8 = 0x100;
    ppuStack_b10 = &PTR_SUB_110862700;
    ppppuStack_ad0 = (undefined ****)&ppppuStack_b88;
    ppuVar19[0x19] = (undefined *)0x0;
    ppuVar19[0x18] = (undefined *)0x0;
    ppuVar19[0x1b] = (undefined *)0x0;
    ppuVar19[0x1a] = (undefined *)0x0;
    plStack_aa8 = (long *)0x0;
    ppppuStack_ba0 = (undefined ****)0x0;
    pppuStack_b98 = (undefined ***)0x0;
    uStack_b90 = 0;
    uStack_ba4 = 0;
    pppppuVar16 = (undefined *****)&pppuStack_aa0;
    ppppuStack_b58 = (undefined ****)pppppuVar14;
    puStack_ad8 = puVar6;
    func_0x000107c310cc(pppppuVar16,&ppuStack_b10,&ppppuStack_ba0,&uStack_ba4);
    _objc_retainAutoreleasedReturnValue();
    if (ppppuStack_ba0 != (undefined ****)0x0) {
      pppuStack_b98 = (undefined ***)ppppuStack_ba0;
      __ZdlPv();
    }
    plVar1 = plStack_aa8;
    ppuVar19 = (undefined **)&pppuStack_ac8;
    ppuStack_b10 = &PTR_SUB_110862700;
    plStack_aa8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_ab0;
    plStack_ab0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    ppppuStack_ba0 = (undefined ****)ppuVar19;
    func_0x000107c27dd4(&ppppuStack_ba0);
    plVar1 = plStack_b20;
    ppppuStack_b88 = (undefined ****)(unaff_x28 + 2);
    plStack_b20 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_b28;
    plStack_b28 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    ppppuStack_ba0 = (undefined ****)&ppuStack_b40;
    func_0x000107c27dd4(&ppppuStack_ba0);
    _objc_release(ppppuStack_b58);
    func_0x000107c27da8(&uStack_a78);
    _objc_release(uStack_a88);
    _objc_release(uStack_a90);
    unaff_x28 = pppppuVar16;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if ((unaff_x28 != (undefined *****)0x0) &&
       (pppppuVar20 = unaff_x28, func_0x00010c27dd80(), pppppuVar20 == (undefined *****)0x1)) {
      pppppuVar20 = unaff_x28;
      func_0x00010bf5a820();
      _objc_retainAutoreleasedReturnValue();
      pppppuVar13 = pppppuVar20;
      func_0x00010bf5bbc0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar19 = (undefined **)(ulong)(pppppuVar13 == (undefined *****)0x0);
      _objc_release();
      _objc_release(pppppuVar20);
      puVar11 = PTR__OBJC_CLASS___NSSet_1126ae870;
      if (pppppuVar13 != (undefined *****)0x0) {
        pppppuVar20 = unaff_x28;
        func_0x00010bf5a820();
        _objc_retainAutoreleasedReturnValue();
        pppppuVar13 = pppppuVar20;
        func_0x00010bf5bbc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2268e0(puVar11);
        _objc_retainAutoreleasedReturnValue();
        ppuVar19 = (undefined **)pppppuVar3;
        FUN_1084ea0fc(pppppuVar3,puVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        _objc_release(pppppuVar13);
        _objc_release(pppppuVar20);
        FUN_1084ee948(pppppuVar3,1,ppuVar19,0,PTR____NSArray0__struct_11034ab48,
                      PTR____NSDictionary0__struct_11034ab58,PTR____NSDictionary0__struct_11034ab58,
                      0);
        _objc_release(ppuVar19);
      }
    }
    _objc_release(unaff_x28);
    _objc_release(pppppuVar16);
    _objc_release(puVar22);
LAB_1084e49d0:
    _objc_release(pppppuVar12);
    _objc_release(puStack_bb0);
    _objc_release(ppuVar8);
    _objc_release(puStack_bd8);
LAB_1084e49f0:
    _objc_release(pppppuVar18);
LAB_1084e49f8:
    _objc_release(pppppuVar21);
    _objc_release(pppppuVar14);
    _objc_release(pppppuVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a58) break;
    ___stack_chk_fail();
LAB_1084e4a4c:
    puVar22 = (undefined *)0x0;
  }
  return;
}



/* Entry: 1084e212c; end: 1084e2f4b;  */

void FUN_1084e212c(undefined ****param_1,undefined ****param_2,undefined ****param_3)

{
  long *plVar1;
  undefined ****ppppuVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined4 *puVar9;
  undefined ****ppppuVar10;
  undefined *puVar11;
  undefined ****ppppuVar12;
  undefined ****ppppuVar13;
  undefined **unaff_x21;
  undefined ****unaff_x22;
  undefined **unaff_x23;
  long lVar14;
  undefined ****unaff_x25;
  undefined ****ppppuVar15;
  undefined ****ppppuVar16;
  undefined ****unaff_x26;
  undefined *puVar17;
  undefined ****unaff_x27;
  undefined ***unaff_x28;
  undefined *puStack_a88;
  undefined *puStack_a60;
  undefined4 uStack_a54;
  undefined ***pppuStack_a50;
  undefined ***pppuStack_a48;
  undefined8 uStack_a40;
  undefined ***pppuStack_a38;
  undefined4 uStack_a30;
  undefined4 uStack_a20;
  undefined ***pppuStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined **ppuStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  long *plStack_9d8;
  long *plStack_9d0;
  undefined1 uStack_9c1;
  undefined **ppuStack_9c0;
  undefined4 uStack_9b8;
  undefined2 uStack_9a8;
  undefined2 uStack_9a6;
  undefined1 *puStack_988;
  undefined ***pppuStack_980;
  undefined **ppuStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  long *plStack_960;
  long *plStack_958;
  undefined **ppuStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined ***pppuStack_918;
  undefined ***pppuStack_910;
  long lStack_908;
  undefined ***pppuStack_8f0;
  undefined ***pppuStack_8e8;
  undefined ***pppuStack_8e0;
  undefined ***pppuStack_8d8;
  undefined ***pppuStack_8d0;
  undefined ***pppuStack_8c8;
  undefined ***pppuStack_8c0;
  undefined ***pppuStack_8b8;
  undefined ***pppuStack_8b0;
  undefined ***pppuStack_8a8;
  undefined1 **ppuStack_8a0;
  code *pcStack_898;
  undefined ***pppuStack_890;
  undefined ***pppuStack_888;
  undefined ***pppuStack_880;
  undefined ***pppuStack_878;
  undefined ***pppuStack_870;
  undefined **ppuStack_868;
  undefined **ppuStack_860;
  undefined **ppuStack_858;
  long lStack_850;
  undefined ***pppuStack_848;
  undefined ***pppuStack_840;
  undefined4 uStack_834;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined ***pppuStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  long *plStack_7d0;
  long *plStack_7c8;
  undefined1 uStack_7b1;
  undefined **ppuStack_7b0;
  undefined **ppuStack_7a8;
  long *plStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined1 *puStack_778;
  undefined8 *puStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  long *plStack_750;
  long *plStack_748;
  undefined **ppuStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined ***pppuStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined *puStack_6f8;
  undefined *puStack_6f0;
  undefined8 uStack_6e8;
  long *plStack_6e0;
  long *plStack_6d8;
  undefined ***pppuStack_6d0;
  undefined **ppuStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined **ppuStack_698;
  undefined4 uStack_690;
  undefined4 uStack_680;
  undefined ***pppuStack_668;
  undefined4 *puStack_660;
  undefined ***pppuStack_658;
  undefined **ppuStack_650;
  undefined **ppuStack_648;
  undefined8 uStack_640;
  long *plStack_638;
  long *plStack_630;
  undefined ***pppuStack_628;
  undefined *puStack_620;
  undefined8 uStack_618;
  undefined **ppuStack_610;
  undefined4 uStack_608;
  undefined2 uStack_5f8;
  undefined2 uStack_5f6;
  undefined ***pppuStack_5d8;
  undefined ***pppuStack_5d0;
  undefined **ppuStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  long *plStack_5b0;
  long *plStack_5a8;
  undefined8 *puStack_590;
  undefined8 *puStack_588;
  undefined8 uStack_580;
  long lStack_578;
  undefined ***pppuStack_560;
  undefined ***pppuStack_558;
  undefined ***pppuStack_550;
  undefined ***pppuStack_548;
  undefined ***pppuStack_540;
  undefined ***pppuStack_538;
  undefined ***pppuStack_530;
  undefined ***pppuStack_528;
  undefined ***pppuStack_520;
  undefined ***pppuStack_518;
  undefined1 *puStack_510;
  code *pcStack_508;
  undefined ***pppuStack_4f8;
  undefined ***pppuStack_4f0;
  undefined ***pppuStack_4e8;
  undefined ***pppuStack_4e0;
  undefined **ppuStack_4d8;
  undefined **ppuStack_4d0;
  undefined **ppuStack_4c8;
  long lStack_4c0;
  undefined **ppuStack_4b8;
  undefined8 uStack_4b0;
  long lStack_4a8;
  long *plStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  long lStack_468;
  long *plStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined4 uStack_424;
  undefined ***pppuStack_420;
  undefined ***pppuStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined4 uStack_400;
  undefined4 uStack_3f0;
  undefined ***pppuStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined **ppuStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  long *plStack_3a8;
  long *plStack_3a0;
  undefined1 uStack_391;
  undefined **ppuStack_390;
  undefined **ppuStack_388;
  undefined8 uStack_380;
  undefined2 uStack_378;
  byte bStack_376;
  byte bStack_375;
  undefined1 *puStack_358;
  undefined8 *puStack_350;
  undefined **ppuStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  long *plStack_330;
  long *plStack_328;
  undefined **ppuStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  undefined8 uStack_2c8;
  long *plStack_2c0;
  long *plStack_2b8;
  undefined1 uStack_2a1;
  undefined **ppuStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined **ppuStack_268;
  undefined4 uStack_260;
  undefined4 uStack_250;
  undefined ***pppuStack_238;
  undefined1 *puStack_230;
  undefined ***pppuStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  long *plStack_208;
  long *plStack_200;
  undefined **ppuStack_1f8;
  undefined4 uStack_1f0;
  undefined2 uStack_1e0;
  undefined2 uStack_1de;
  undefined ***pppuStack_1c0;
  undefined ***pppuStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined ***pppuStack_188;
  undefined *puStack_180;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar12 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  ppppuVar2 = param_2;
  pppuStack_4e8 = (undefined ***)param_2;
  func_0x00010c08fa60();
  if (ppppuVar2 != (undefined ****)0x0) {
    _objc_opt_class(PTR_PTR_1126d6788);
    if (param_1 == (undefined ****)0x0) {
      uStack_2f0 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_318 = 0;
      ppuStack_320 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_320,param_1);
    }
    pppuVar3 = &ppuStack_2a0;
    FUN_108517ba4();
    pppuVar4 = pppuStack_4e8;
    uStack_260 = 0xf;
    uStack_250 = 0x100;
    _objc_retain(pppuStack_4e8);
    pppuStack_238 = pppuVar4;
    ppuStack_268 = &PTR_DAT_110862760;
    pppuStack_228 = (undefined ***)0x0;
    puStack_230 = (undefined1 *)0x0;
    puStack_218 = (undefined *)0x0;
    puStack_220 = (undefined *)0x0;
    plStack_208 = (long *)0x0;
    uStack_210 = 0;
    plStack_200 = (long *)0x0;
    uStack_1de = *(undefined2 *)((long)pppuVar3 + 0x1a);
    uStack_1f0 = 10;
    uStack_1e0 = 0x100;
    ppuStack_1f8 = &PTR_SUB_110862700;
    pppuStack_1b8 = &ppuStack_268;
    uStack_1a8 = 0;
    puStack_1b0 = (undefined *)0x0;
    plStack_198 = (long *)0x0;
    uStack_1a0 = 0;
    plStack_190 = (long *)0x0;
    ppuStack_390 = (undefined **)0x0;
    ppuStack_388 = (undefined **)0x0;
    uStack_380 = 0;
    uStack_408 = (undefined **)((ulong)uStack_408._4_4_ << 0x20);
    pppuVar4 = &ppuStack_320;
    pppuStack_1c0 = pppuVar3;
    func_0x000107c310cc(pppuVar4,&ppuStack_1f8,&ppuStack_390,&uStack_408);
    _objc_retainAutoreleasedReturnValue();
    pppuVar3 = pppuVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    pppuStack_4f8 = pppuVar3;
    _objc_release(pppuVar4);
    if (ppuStack_390 != (undefined **)0x0) {
      ppuStack_388 = ppuStack_390;
      __ZdlPv();
    }
    plVar1 = plStack_190;
    ppuStack_1f8 = &PTR_SUB_110862700;
    plStack_190 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_198;
    plStack_198 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    ppuStack_390 = &puStack_1b0;
    func_0x000107c27dd4(&ppuStack_390);
    plVar1 = plStack_200;
    ppuStack_268 = &PTR_DAT_110862760;
    plStack_200 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_208;
    plStack_208 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    ppuStack_390 = &puStack_220;
    func_0x000107c27dd4(&ppuStack_390);
    _objc_release(pppuStack_238);
    func_0x000107c27da8(&uStack_2f8);
    _objc_release(uStack_308);
    _objc_release(uStack_310);
    if (pppuStack_4f8 != (undefined ***)0x0) {
      puVar17 = PTR_PTR_1126d6780;
      FUN_1085185f4(PTR_PTR_1126d6780,pppuStack_4f8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar17);
    }
    _objc_opt_class(PTR_PTR_1126d9e48);
    if (param_1 == (undefined ****)0x0) {
      uStack_2f0 = 0;
      uStack_308 = 0;
      uStack_310 = 0;
      uStack_2f8 = 0;
      uStack_300 = 0;
      uStack_318 = 0;
      ppuStack_320 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_320,param_1);
    }
    pppuVar3 = &ppuStack_2a0;
    func_0x00010095049c();
    pppuVar4 = pppuStack_4e8;
    uStack_260 = 0xf;
    uStack_250 = 0x100;
    _objc_retain(pppuStack_4e8);
    pppuStack_238 = pppuVar4;
    ppuStack_268 = &PTR_DAT_110862760;
    pppuStack_228 = (undefined ***)0x0;
    puStack_230 = (undefined1 *)0x0;
    puStack_218 = (undefined *)0x0;
    puStack_220 = (undefined *)0x0;
    plStack_208 = (long *)0x0;
    uStack_210 = 0;
    plStack_200 = (long *)0x0;
    uStack_1de = *(undefined2 *)((long)pppuVar3 + 0x1a);
    uStack_1f0 = 10;
    uStack_1e0 = 0x100;
    ppuStack_1f8 = &PTR_SUB_110862700;
    pppuStack_1b8 = &ppuStack_268;
    uStack_1a8 = 0;
    puStack_1b0 = (undefined *)0x0;
    plStack_198 = (long *)0x0;
    uStack_1a0 = 0;
    plStack_190 = (long *)0x0;
    ppuStack_390 = (undefined **)0x0;
    ppuStack_388 = (undefined **)0x0;
    uStack_380 = 0;
    uStack_408 = (undefined **)((ulong)uStack_408 & 0xffffffff00000000);
    pppuVar4 = &ppuStack_320;
    pppuStack_1c0 = pppuVar3;
    func_0x000107c310cc(pppuVar4,&ppuStack_1f8,&ppuStack_390,&uStack_408);
    _objc_retainAutoreleasedReturnValue();
    pppuVar3 = pppuVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    pppuStack_4f0 = pppuVar3;
    _objc_release(pppuVar4);
    if (ppuStack_390 != (undefined **)0x0) {
      ppuStack_388 = ppuStack_390;
      __ZdlPv();
    }
    plVar1 = plStack_190;
    ppuStack_1f8 = &PTR_SUB_110862700;
    plStack_190 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_198;
    plStack_198 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    ppuStack_390 = &puStack_1b0;
    func_0x000107c27dd4(&ppuStack_390);
    plVar1 = plStack_200;
    ppuStack_268 = &PTR_DAT_110862760;
    plStack_200 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_208;
    plStack_208 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    ppuStack_390 = &puStack_220;
    func_0x000107c27dd4(&ppuStack_390);
    _objc_release(pppuStack_238);
    func_0x000107c27da8(&uStack_2f8);
    _objc_release(uStack_308);
    _objc_release(uStack_310);
    if (pppuStack_4f0 != (undefined ***)0x0) {
      puVar17 = PTR_PTR_1126d9e50;
      FUN_108517280(PTR_PTR_1126d9e50,pppuStack_4f0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar17);
    }
    _objc_opt_class(PTR_PTR_1126b47a0);
    if (param_1 == (undefined ****)0x0) {
      uStack_270 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      uStack_298 = 0;
      ppuStack_2a0 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_2a0,param_1);
    }
    unaff_x26 = (undefined ****)&uStack_408;
    puVar5 = &uStack_2a1;
    FUN_108507fc0();
    uStack_318 = CONCAT44(uStack_318._4_4_,0xf);
    uStack_308 = CONCAT44(uStack_308._4_4_,0x100);
    ppuStack_320 = &PTR_DAT_110a4fdb0;
    uStack_2e0 = 0;
    uStack_2e8 = 0;
    lStack_2d0 = 0;
    lStack_2d8 = 0;
    plStack_2c0 = (long *)0x0;
    uStack_2c8 = 0;
    uStack_2f0 = 1;
    plStack_2b8 = (long *)0x0;
    uStack_260 = 10;
    unaff_x27 = (undefined ****)0x100;
    uStack_250 = CONCAT22(*(undefined2 *)(puVar5 + 0x1a),0x100);
    unaff_x21 = (undefined **)&UNK_110a4fd40;
    ppuStack_268 = &PTR_FUN_110a4fd50;
    pppuStack_228 = &ppuStack_320;
    puStack_218 = (undefined *)0x0;
    puStack_220 = (undefined *)0x0;
    plStack_208 = (long *)0x0;
    uStack_210 = 0;
    plStack_200 = (long *)0x0;
    puVar6 = &uStack_391;
    puStack_230 = puVar5;
    FUN_108508198();
    pppuVar3 = pppuStack_4e8;
    uStack_400 = 0xf;
    uStack_3f0 = 0x100;
    _objc_retain(pppuStack_4e8);
    pppuStack_3d8 = pppuVar3;
    uStack_408 = &PTR_DAT_110862760;
    uStack_3c8 = 0;
    uStack_3d0 = 0;
    uStack_3b8 = 0;
    ppuStack_3c0 = (undefined **)0x0;
    plStack_3a8 = (long *)0x0;
    uStack_3b0 = 0;
    plStack_3a0 = (long *)0x0;
    bStack_376 = puVar6[0x1a];
    bStack_375 = puVar6[0x1b];
    ppuStack_388 = (undefined **)CONCAT44(ppuStack_388._4_4_,10);
    uStack_378 = 0x100;
    ppuStack_390 = &PTR_SUB_110862700;
    puStack_350 = &uStack_408;
    pppuStack_1b8 = &ppuStack_390;
    uStack_340 = 0;
    ppuStack_348 = (undefined **)0x0;
    plStack_330 = (long *)0x0;
    uStack_338 = 0;
    plStack_328 = (long *)0x0;
    uStack_1f0 = 4;
    uStack_1e0 = 0x100;
    uStack_1de = CONCAT11(uStack_250._3_1_ & bStack_375,uStack_250._2_1_ | bStack_376);
    unaff_x23 = &PTR_DAT_1108629c8;
    ppuStack_1f8 = &PTR_DAT_1108629c8;
    pppuStack_1c0 = &ppuStack_268;
    plStack_190 = (long *)0x0;
    plStack_198 = (long *)0x0;
    uStack_1a0 = 0;
    uStack_1a8 = 0;
    puStack_1b0 = (undefined *)0x0;
    pppuStack_420 = (undefined ***)0x0;
    pppuStack_418 = (undefined ***)0x0;
    uStack_410 = 0;
    uStack_424 = 0;
    ppppuVar2 = (undefined ****)&ppuStack_2a0;
    puStack_358 = puVar6;
    func_0x000107c310cc(ppppuVar2,&ppuStack_1f8,&pppuStack_420,&uStack_424);
    _objc_retainAutoreleasedReturnValue();
    pppuStack_4e0 = (undefined ***)ppppuVar2;
    if (pppuStack_420 != (undefined ***)0x0) {
      pppuStack_418 = pppuStack_420;
      __ZdlPv();
    }
    plVar1 = plStack_190;
    ppuStack_1f8 = &PTR_DAT_1108629c8;
    plStack_190 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_198;
    plStack_198 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (puStack_1b0 != (undefined *)0x0) {
      __ZdlPv();
    }
    plVar1 = plStack_328;
    unaff_x22 = (undefined ****)&ppuStack_348;
    ppuStack_390 = &PTR_SUB_110862700;
    plStack_328 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_330;
    plStack_330 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    pppuStack_420 = (undefined ***)unaff_x22;
    func_0x000107c27dd4(&pppuStack_420);
    plVar1 = plStack_3a0;
    uStack_408 = &PTR_DAT_110862760;
    plStack_3a0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_3a8;
    plStack_3a8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    pppuStack_420 = &ppuStack_3c0;
    func_0x000107c27dd4(&pppuStack_420);
    _objc_release(pppuStack_3d8);
    plVar1 = plStack_200;
    ppuStack_268 = &PTR_FUN_110a4fd50;
    plStack_200 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_208;
    plStack_208 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (puStack_220 != (undefined *)0x0) {
      puStack_218 = puStack_220;
      __ZdlPv();
    }
    plVar1 = plStack_2b8;
    ppuStack_320 = &PTR_DAT_110a4fdb0;
    plStack_2b8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_2c0;
    plStack_2c0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_2d8 != 0) {
      lStack_2d0 = lStack_2d8;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_278);
    _objc_release(uStack_288);
    _objc_release(uStack_290);
    ppppuVar2 = (undefined ****)pppuStack_4e0;
    lStack_468 = 0;
    uStack_470 = 0;
    uStack_458 = 0;
    plStack_460 = (long *)0x0;
    uStack_448 = 0;
    uStack_450 = 0;
    uStack_438 = 0;
    uStack_440 = 0;
    _objc_retain(pppuStack_4e0);
    func_0x00010bf52a60();
    if (ppppuVar2 != (undefined ****)0x0) {
      ppuStack_4b8 = &puStack_1b0;
      ppuStack_4c8 = &puStack_220;
      lStack_4c0 = *plStack_460;
      ppuStack_4d0 = &PTR_DAT_110862760;
      ppuStack_4d8 = &PTR_SUB_110862700;
      unaff_x21 = &PTR_PTR_1126d6000;
      do {
        unaff_x23 = (undefined **)0x0;
        do {
          if (*plStack_460 != lStack_4c0) {
            _objc_enumerationMutation(pppuStack_4e0);
          }
          ppppuVar15 = *(undefined *****)(lStack_468 + (long)unaff_x23 * 8);
          unaff_x26 = ppppuVar15;
          func_0x00010c11ac00();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar12 = unaff_x26;
          func_0x00010c08fa60();
          unaff_x22 = (undefined ****)(ulong)(ppppuVar12 == (undefined ****)0x0);
          _objc_release(unaff_x26);
          if (ppppuVar12 != (undefined ****)0x0) {
            _objc_opt_class(PTR_PTR_1126d67a0);
            if (param_1 == (undefined ****)0x0) {
              uStack_2f0 = 0;
              uStack_308 = 0;
              uStack_310 = 0;
              uStack_2f8 = 0;
              uStack_300 = 0;
              uStack_318 = 0;
              ppuStack_320 = (undefined **)0x0;
            }
            else {
              func_0x00010bfa6be0(&ppuStack_320,param_1);
            }
            pppuVar3 = &ppuStack_2a0;
            FUN_108507e48();
            ppppuVar12 = ppppuVar15;
            func_0x00010c11ac00();
            _objc_retainAutoreleasedReturnValue();
            uStack_260 = 0xf;
            uStack_250 = 0x100;
            _objc_retain();
            ppuStack_268 = ppuStack_4d0;
            pppuStack_1b8 = &ppuStack_268;
            pppuStack_228 = (undefined ***)0x0;
            puStack_230 = (undefined1 *)0x0;
            puStack_218 = (undefined *)0x0;
            puStack_220 = (undefined *)0x0;
            plStack_208 = (long *)0x0;
            uStack_210 = 0;
            plStack_200 = (long *)0x0;
            uStack_1de = *(undefined2 *)((long)pppuVar3 + 0x1a);
            uStack_1f0 = 10;
            uStack_1e0 = 0x100;
            ppuStack_1f8 = ppuStack_4d8;
            ppuStack_4b8[1] = (undefined *)0x0;
            *ppuStack_4b8 = (undefined *)0x0;
            ppuStack_4b8[3] = (undefined *)0x0;
            ppuStack_4b8[2] = (undefined *)0x0;
            ppuStack_4b8[4] = (undefined *)0x0;
            ppuStack_390 = (undefined **)0x0;
            ppuStack_388 = (undefined **)0x0;
            uStack_380 = 0;
            uStack_408 = (undefined **)((ulong)uStack_408 & 0xffffffff00000000);
            unaff_x26 = (undefined ****)&ppuStack_320;
            pppuStack_238 = (undefined ***)ppppuVar12;
            pppuStack_1c0 = pppuVar3;
            func_0x000107c310cc(unaff_x26,&ppuStack_1f8,&ppuStack_390,&uStack_408);
            _objc_retainAutoreleasedReturnValue();
            if (ppuStack_390 != (undefined **)0x0) {
              ppuStack_388 = ppuStack_390;
              __ZdlPv();
            }
            plVar1 = plStack_190;
            ppuStack_1f8 = &PTR_SUB_110862700;
            plStack_190 = (long *)0x0;
            if (plVar1 != (long *)0x0) {
              (**(code **)(*plVar1 + 8))();
            }
            plVar1 = plStack_198;
            plStack_198 = (long *)0x0;
            if (plVar1 != (long *)0x0) {
              (**(code **)(*plVar1 + 8))();
            }
            ppuStack_390 = ppuStack_4b8;
            func_0x000107c27dd4(&ppuStack_390);
            plVar1 = plStack_200;
            ppuStack_268 = &PTR_DAT_110862760;
            plStack_200 = (long *)0x0;
            if (plVar1 != (long *)0x0) {
              (**(code **)(*plVar1 + 8))();
            }
            plVar1 = plStack_208;
            plStack_208 = (long *)0x0;
            if (plVar1 != (long *)0x0) {
              (**(code **)(*plVar1 + 8))();
            }
            ppuStack_390 = ppuStack_4c8;
            func_0x000107c27dd4(&ppuStack_390);
            _objc_release(pppuStack_238);
            _objc_release(ppppuVar12);
            func_0x000107c27da8(&uStack_2f8);
            _objc_release(uStack_308);
            _objc_release(uStack_310);
            lStack_4a8 = 0;
            uStack_4b0 = 0;
            uStack_498 = 0;
            plStack_4a0 = (long *)0x0;
            uStack_488 = 0;
            uStack_490 = 0;
            uStack_478 = 0;
            uStack_480 = 0;
            _objc_retain(unaff_x26);
            ppppuVar12 = unaff_x26;
            func_0x00010bf52a60();
            if (ppppuVar12 != (undefined ****)0x0) {
              lVar14 = *plStack_4a0;
              do {
                unaff_x22 = (undefined ****)0x0;
                do {
                  if (*plStack_4a0 != lVar14) {
                    _objc_enumerationMutation(unaff_x26);
                  }
                  unaff_x28 = (undefined ***)PTR_PTR_1126d6798;
                  FUN_10850ef60(PTR_PTR_1126d6798,*(undefined8 *)(lStack_4a8 + (long)unaff_x22 * 8))
                  ;
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c25ed40(param_1);
                  _objc_unsafeClaimAutoreleasedReturnValue();
                  _objc_release(unaff_x28);
                  unaff_x22 = (undefined ****)((long)unaff_x22 + 1);
                } while (ppppuVar12 != unaff_x22);
                ppppuVar12 = unaff_x26;
                func_0x00010bf52a60();
              } while (ppppuVar12 != (undefined ****)0x0);
            }
            unaff_x27 = (undefined ****)0x0;
            _objc_release(unaff_x26);
            puVar17 = PTR_PTR_1126d8f60;
            FUN_10850a65c(PTR_PTR_1126d8f60,ppppuVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25ed40(param_1);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar17);
            _objc_release(unaff_x26);
          }
          unaff_x23 = (undefined **)((long)unaff_x23 + 1);
        } while ((undefined ****)unaff_x23 != ppppuVar2);
        ppppuVar2 = (undefined ****)pppuStack_4e0;
        func_0x00010bf52a60();
      } while (ppppuVar2 != (undefined ****)0x0);
    }
    param_2 = (undefined ****)0x0;
    _objc_release(pppuStack_4e0);
    pppuStack_188 = pppuStack_4e8;
    puStack_180 = PTR____NSArray0__struct_11034ab48;
    unaff_x25 = (undefined ****)PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    ppppuVar12 = (undefined ****)0x1;
    param_3 = unaff_x25;
    FUN_1084ee948(param_1,1,unaff_x25,0,PTR____NSArray0__struct_11034ab48,
                  PTR____NSDictionary0__struct_11034ab58,PTR____NSDictionary0__struct_11034ab58,0);
    _objc_release(unaff_x25);
    _objc_release(pppuStack_4e0);
    _objc_release(pppuStack_4f0);
    _objc_release(pppuStack_4f8);
  }
  _objc_release(pppuStack_4e8);
  ppuVar7 = (undefined **)param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x23);
  _objc_release(pppuStack_4f0);
  _objc_release(pppuStack_4f8);
  _objc_release(pppuStack_4e8);
  _objc_release(param_1);
  ppppuVar2 = (undefined ****)ppuVar7;
  __Unwind_Resume();
  pcStack_508 = FUN_1084e2f4c;
  lStack_578 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar13 = ppppuVar12;
  pppuStack_560 = unaff_x28;
  pppuStack_558 = (undefined ***)unaff_x27;
  pppuStack_550 = (undefined ***)unaff_x26;
  pppuStack_548 = (undefined ***)unaff_x25;
  pppuStack_540 = (undefined ***)ppuVar7;
  pppuStack_538 = (undefined ***)unaff_x23;
  pppuStack_530 = (undefined ***)unaff_x22;
  pppuStack_528 = (undefined ***)unaff_x21;
  pppuStack_520 = (undefined ***)param_2;
  pppuStack_518 = (undefined ***)param_1;
  puStack_510 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(ppppuVar12);
  ppppuVar15 = (undefined ****)0x0;
  pppuStack_878 = (undefined ***)ppppuVar12;
  pppuStack_840 = (undefined ***)ppppuVar2;
  if (ppppuVar12 != (undefined ****)0x0) {
    unaff_x23 = &PTR_PTR_1126b4000;
    _objc_opt_class(PTR_PTR_1126b47a0);
    ppppuVar12 = (undefined ****)&ppuStack_7b0;
    if (ppppuVar2 == (undefined ****)0x0) {
      pppuStack_710 = (undefined ***)0x0;
      uStack_728 = 0;
      uStack_730 = 0;
      uStack_718 = 0;
      uStack_720 = 0;
      uStack_738 = 0;
      ppuStack_740 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_740,ppppuVar2);
    }
    ppppuVar2 = &pppuStack_6d0;
    FUN_108507e48();
    pppuVar3 = pppuStack_878;
    uStack_690 = 0xf;
    uStack_680 = 0x100;
    _objc_retain(pppuStack_878);
    pppuStack_668 = pppuVar3;
    ppuStack_698 = &PTR_DAT_110862760;
    pppuStack_658 = (undefined ***)0x0;
    puStack_660 = (undefined4 *)0x0;
    ppuStack_648 = (undefined **)0x0;
    ppuStack_650 = (undefined **)0x0;
    plStack_638 = (long *)0x0;
    uStack_640 = 0;
    plStack_630 = (long *)0x0;
    uStack_5f6 = *(undefined2 *)((long)ppppuVar2 + 0x1a);
    uStack_608 = 10;
    uStack_5f8 = 0x100;
    ppuStack_610 = &PTR_SUB_110862700;
    uStack_5c0 = 0;
    ppuStack_5c8 = (undefined **)0x0;
    plStack_5b0 = (long *)0x0;
    uStack_5b8 = 0;
    plStack_5a8 = (long *)0x0;
    ppuStack_7b0 = (undefined **)0x0;
    ppuStack_7a8 = (undefined **)0x0;
    plStack_7a0 = (long *)0x0;
    uStack_830 = (undefined **)((ulong)uStack_830._4_4_ << 0x20);
    ppppuVar15 = (undefined ****)&ppuStack_740;
    param_3 = (undefined ****)&ppuStack_7b0;
    pppuStack_5d8 = (undefined ***)ppppuVar2;
    pppuStack_5d0 = &ppuStack_698;
    func_0x000107c310cc(ppppuVar15,&ppuStack_610,param_3,&uStack_830);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar2 = ppppuVar15;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    pppuStack_880 = (undefined ***)ppppuVar2;
    _objc_release(ppppuVar15);
    if ((undefined ***)ppuStack_7b0 != (undefined ***)0x0) {
      ppuStack_7a8 = ppuStack_7b0;
      __ZdlPv();
    }
    plVar1 = plStack_5a8;
    ppppuVar2 = (undefined ****)&ppuStack_5c8;
    ppuStack_610 = &PTR_SUB_110862700;
    plStack_5a8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_5b0;
    plStack_5b0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    ppuStack_7b0 = (undefined **)ppppuVar2;
    func_0x000107c27dd4(&ppuStack_7b0);
    plVar1 = plStack_630;
    ppuStack_698 = &PTR_DAT_110862760;
    plStack_630 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_638;
    plStack_638 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    ppuStack_7b0 = (undefined **)&ppuStack_650;
    func_0x000107c27dd4(&ppuStack_7b0);
    _objc_release(pppuStack_668);
    func_0x000107c27da8(&uStack_718);
    _objc_release(uStack_728);
    _objc_release(uStack_730);
    ppppuVar15 = (undefined ****)pppuStack_840;
    if ((undefined ****)pppuStack_880 == (undefined ****)0x0) {
      _objc_retain(pppuStack_840);
      unaff_x22 = ppppuVar15;
      ppppuVar13 = (undefined ****)pppuStack_878;
      FUN_1084dc688();
      _objc_retainAutoreleasedReturnValue();
      unaff_x21 = (undefined **)unaff_x22;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x22);
      if ((undefined ****)unaff_x21 != (undefined ****)0x0) {
        unaff_x22 = (undefined ****)PTR_PTR_1126d8fe8;
        ppppuVar13 = (undefined ****)unaff_x21;
        FUN_10851ceac();
        _objc_retainAutoreleasedReturnValue();
        param_3 = unaff_x22;
        func_0x00010c25ed40(pppuStack_840);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(unaff_x22);
      }
      _objc_release(unaff_x21);
      _objc_release(pppuStack_840);
    }
    else {
      ppppuVar2 = (undefined ****)pppuStack_880;
      func_0x00010c27dd80();
      unaff_x26 = (undefined ****)pppuStack_880;
      ppuVar7 = (undefined **)&ppuStack_698;
      if (ppppuVar2 == (undefined ****)0x7) {
        _objc_retain(pppuStack_878);
        _objc_retain(ppppuVar15);
        _objc_opt_class(PTR_PTR_1126b47a0);
        if (ppppuVar15 == (undefined ****)0x0) {
          pppuStack_710 = (undefined ***)0x0;
          uStack_728 = 0;
          uStack_730 = 0;
          uStack_718 = 0;
          uStack_720 = 0;
          uStack_738 = 0;
          ppuStack_740 = (undefined **)0x0;
        }
        else {
          func_0x00010bfa6be0(&ppuStack_740,ppppuVar15);
        }
        ppppuVar2 = &pppuStack_6d0;
        FUN_108507e48();
        pppuVar3 = pppuStack_878;
        uStack_690 = 0xf;
        uStack_680 = 0x100;
        _objc_retain(pppuStack_878);
        pppuStack_668 = pppuVar3;
        ppuStack_698 = &PTR_DAT_110862760;
        pppuStack_658 = (undefined ***)0x0;
        puStack_660 = (undefined4 *)0x0;
        ppuStack_648 = (undefined **)0x0;
        ppuStack_650 = (undefined **)0x0;
        plStack_638 = (long *)0x0;
        uStack_640 = 0;
        plStack_630 = (long *)0x0;
        uStack_5f6 = *(undefined2 *)((long)ppppuVar2 + 0x1a);
        uStack_608 = 10;
        uStack_5f8 = 0x100;
        ppuStack_610 = &PTR_SUB_110862700;
        pppuStack_5d0 = &ppuStack_698;
        uStack_5c0 = 0;
        ppuStack_5c8 = (undefined **)0x0;
        plStack_5b0 = (long *)0x0;
        uStack_5b8 = 0;
        plStack_5a8 = (long *)0x0;
        ppuStack_7b0 = (undefined **)0x0;
        ppuStack_7a8 = (undefined **)0x0;
        plStack_7a0 = (long *)0x0;
        uStack_830 = (undefined **)((ulong)uStack_830 & 0xffffffff00000000);
        pppuVar3 = &ppuStack_740;
        pppuStack_5d8 = (undefined ***)ppppuVar2;
        func_0x000107c310cc(pppuVar3,&ppuStack_610,&ppuStack_7b0,&uStack_830);
        _objc_retainAutoreleasedReturnValue();
        pppuVar4 = pppuVar3;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        pppuStack_890 = pppuVar4;
        _objc_release(pppuVar3);
        if ((undefined ***)ppuStack_7b0 != (undefined ***)0x0) {
          ppuStack_7a8 = ppuStack_7b0;
          __ZdlPv();
        }
        plVar1 = plStack_5a8;
        ppuStack_610 = &PTR_SUB_110862700;
        plStack_5a8 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_5b0;
        plStack_5b0 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        ppuStack_7b0 = (undefined **)&ppuStack_5c8;
        func_0x000107c27dd4(&ppuStack_7b0);
        plVar1 = plStack_630;
        ppuStack_698 = &PTR_DAT_110862760;
        plStack_630 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_638;
        plStack_638 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        ppuStack_7b0 = (undefined **)&ppuStack_650;
        func_0x000107c27dd4(&ppuStack_7b0);
        _objc_release(pppuStack_668);
        func_0x000107c27da8(&uStack_718);
        _objc_release(uStack_728);
        _objc_release(uStack_730);
        pppuVar3 = pppuStack_890;
        func_0x00010bfa2680();
        _objc_retainAutoreleasedReturnValue();
        pppuVar4 = pppuVar3;
        func_0x00010bf0a5c0();
        _objc_retainAutoreleasedReturnValue();
        pppuVar8 = pppuVar4;
        func_0x00010c0ecf00();
        _objc_retainAutoreleasedReturnValue();
        pppuStack_888 = pppuVar8;
        _objc_release(pppuVar4);
        _objc_release(pppuVar3);
        _objc_opt_class(PTR_PTR_1126b47a0);
        if ((undefined ****)pppuStack_840 == (undefined ****)0x0) {
          uStack_6a0 = 0;
          uStack_6b8 = 0;
          uStack_6c0 = 0;
          uStack_6a8 = 0;
          uStack_6b0 = 0;
          ppuStack_6c8 = (undefined **)0x0;
          pppuStack_6d0 = (undefined ***)0x0;
        }
        else {
          func_0x00010bfa6be0(&pppuStack_6d0);
        }
        puVar9 = &uStack_834;
        FUN_108507fc0();
        uStack_738 = CONCAT44(uStack_738._4_4_,0xf);
        uStack_728 = CONCAT44(uStack_728._4_4_,0x100);
        unaff_x22 = (undefined ****)&UNK_110a4fda0;
        pppuStack_710 = (undefined ***)0x7;
        ppuStack_740 = &PTR_DAT_110a4fdb0;
        uStack_700 = 0;
        uStack_708 = 0;
        puStack_6f0 = (undefined *)0x0;
        puStack_6f8 = (undefined *)0x0;
        plStack_6e0 = (long *)0x0;
        uStack_6e8 = 0;
        plStack_6d8 = (long *)0x0;
        uStack_690 = 10;
        uStack_680 = CONCAT22(*(undefined2 *)((long)puVar9 + 0x1a),0x100);
        unaff_x23 = (undefined **)&UNK_110a4fd40;
        ppuVar7 = (undefined **)&ppuStack_698;
        ppuStack_698 = &PTR_FUN_110a4fd50;
        pppuStack_658 = &ppuStack_740;
        ppuStack_648 = (undefined **)0x0;
        ppuStack_650 = (undefined **)0x0;
        plStack_638 = (long *)0x0;
        uStack_640 = 0;
        plStack_630 = (long *)0x0;
        puVar5 = &uStack_7b1;
        puStack_660 = puVar9;
        FUN_108508384();
        pppuVar3 = pppuStack_888;
        uStack_828 = CONCAT44(uStack_828._4_4_,0xf);
        uStack_818 = CONCAT44(uStack_818._4_4_,0x100);
        _objc_retain(pppuStack_888);
        pppuStack_800 = pppuVar3;
        uStack_830 = &PTR_DAT_110862760;
        uStack_7f0 = 0;
        uStack_7f8 = 0;
        uStack_7e0 = 0;
        uStack_7e8 = 0;
        plStack_7d0 = (long *)0x0;
        uStack_7d8 = 0;
        plStack_7c8 = (long *)0x0;
        ppuStack_7a8 = (undefined **)CONCAT44(ppuStack_7a8._4_4_,10);
        uStack_798._0_4_ = CONCAT13(puVar5[0x1b],CONCAT12(puVar5[0x1a],0x100));
        ppuStack_7b0 = &PTR_SUB_110862700;
        puStack_770 = &uStack_830;
        pppuStack_5d0 = &ppuStack_7b0;
        uStack_760 = 0;
        uStack_768 = 0;
        plStack_750 = (long *)0x0;
        uStack_758 = 0;
        plStack_748 = (long *)0x0;
        uStack_608 = 4;
        uStack_5f8 = 0x100;
        uStack_5f6 = CONCAT11(uStack_680._3_1_ & puVar5[0x1b],uStack_680._2_1_ | puVar5[0x1a]);
        ppuStack_610 = &PTR_DAT_1108629c8;
        pppuStack_5d8 = &ppuStack_698;
        plStack_5a8 = (long *)0x0;
        uStack_5c0 = 0;
        ppuStack_5c8 = (undefined **)0x0;
        plStack_5b0 = (long *)0x0;
        uStack_5b8 = 0;
        puStack_590 = (undefined8 *)0x0;
        puStack_588 = (undefined8 *)0x0;
        unaff_x26 = (undefined ****)&ppuStack_698;
        uStack_580 = 0;
        uStack_618 = (undefined ****)((ulong)uStack_618._4_4_ << 0x20);
        ppppuVar2 = &pppuStack_6d0;
        ppppuVar13 = (undefined ****)&ppuStack_610;
        puStack_778 = puVar5;
        func_0x000107c310cc(ppppuVar2,ppppuVar13,&puStack_590,&uStack_618);
        _objc_retainAutoreleasedReturnValue();
        ppppuVar15 = ppppuVar2;
        func_0x00010bf0a540();
        _objc_retainAutoreleasedReturnValue();
        pppuStack_870 = (undefined ***)ppppuVar15;
        _objc_release(ppppuVar2);
        if (puStack_590 != (undefined8 *)0x0) {
          puStack_588 = puStack_590;
          __ZdlPv();
        }
        plVar1 = plStack_5a8;
        ppuStack_610 = &PTR_DAT_1108629c8;
        plStack_5a8 = (long *)0x0;
        unaff_x21 = (undefined **)&ppuStack_698;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_5b0;
        plStack_5b0 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if ((undefined ***)ppuStack_5c8 != (undefined ***)0x0) {
          __ZdlPv();
        }
        plVar1 = plStack_748;
        ppuStack_7b0 = &PTR_SUB_110862700;
        plStack_748 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_750;
        plStack_750 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        puStack_590 = &uStack_768;
        func_0x000107c27dd4(&puStack_590);
        plVar1 = plStack_7c8;
        uStack_830 = &PTR_DAT_110862760;
        plStack_7c8 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_7d0;
        plStack_7d0 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        puStack_590 = &uStack_7e8;
        func_0x000107c27dd4(&puStack_590);
        _objc_release(pppuStack_800);
        plVar1 = plStack_630;
        ppuStack_698 = &PTR_FUN_110a4fd50;
        plStack_630 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_638;
        plStack_638 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (ppuStack_650 != (undefined **)0x0) {
          ppuStack_648 = ppuStack_650;
          __ZdlPv();
        }
        plVar1 = plStack_6d8;
        ppuStack_740 = &PTR_DAT_110a4fdb0;
        plStack_6d8 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_6e0;
        plStack_6e0 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if ((undefined **)puStack_6f8 != (undefined **)0x0) {
          puStack_6f0 = puStack_6f8;
          __ZdlPv();
        }
        func_0x000107c27da8(&uStack_6a8);
        _objc_release(uStack_6b8);
        _objc_release(uStack_6c0);
        ppppuVar15 = (undefined ****)pppuStack_870;
        ppuStack_7a8 = (undefined **)0x0;
        ppuStack_7b0 = (undefined **)0x0;
        uStack_798 = 0;
        plStack_7a0 = (long *)0x0;
        uStack_788 = 0;
        uStack_790 = 0;
        puStack_778 = (undefined1 *)0x0;
        uStack_780 = 0;
        _objc_retain(pppuStack_870);
        param_3 = (undefined ****)&ppuStack_7b0;
        func_0x00010bf52a60();
        ppppuVar2 = (undefined ****)pppuStack_840;
        if (ppppuVar15 != (undefined ****)0x0) {
          lStack_850 = *plStack_7a0;
          unaff_x27 = (undefined ****)&ppuStack_740;
          unaff_x28 = &ppuStack_650;
          ppuStack_868 = &puStack_6f8;
          ppuStack_858 = &PTR_DAT_110862760;
          ppuStack_860 = &PTR_SUB_110862700;
          do {
            ppppuVar16 = (undefined ****)0x0;
            pppuStack_848 = (undefined ***)ppppuVar15;
            do {
              if (*plStack_7a0 != lStack_850) {
                _objc_enumerationMutation(pppuStack_870);
              }
              unaff_x21 = (undefined **)ppuStack_7a8[(long)ppppuVar16];
              unaff_x26 = (undefined ****)PTR_PTR_1126d8f60;
              FUN_10850a65c(PTR_PTR_1126d8f60,unaff_x21);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c25ed40(ppppuVar2);
              _objc_unsafeClaimAutoreleasedReturnValue();
              _objc_opt_class(PTR_PTR_1126d67a0);
              if (ppppuVar2 == (undefined ****)0x0) {
                pppuStack_800 = (undefined ***)0x0;
                uStack_818 = 0;
                uStack_820 = 0;
                uStack_808 = 0;
                uStack_810 = 0;
                uStack_828 = 0;
                uStack_830 = (undefined **)0x0;
              }
              else {
                func_0x00010bfa6be0(&uStack_830,ppppuVar2);
              }
              puVar9 = (undefined4 *)&uStack_7b1;
              FUN_108507e48();
              ppppuVar15 = (undefined ****)unaff_x21;
              func_0x00010c11ac00();
              _objc_retainAutoreleasedReturnValue();
              uStack_738 = CONCAT44(uStack_738._4_4_,0xf);
              uStack_728 = CONCAT44(uStack_728._4_4_,0x100);
              _objc_retain();
              ppuStack_740 = ppuStack_858;
              uStack_700 = 0;
              uStack_708 = 0;
              puStack_6f0 = (undefined *)0x0;
              puStack_6f8 = (undefined *)0x0;
              plStack_6e0 = (long *)0x0;
              uStack_6e8 = 0;
              plStack_6d8 = (long *)0x0;
              uStack_690 = 10;
              uStack_680 = CONCAT22(*(undefined2 *)((long)puVar9 + 0x1a),0x100);
              ppuStack_698 = ppuStack_860;
              ppuStack_648 = (undefined **)0x0;
              ppuStack_650 = (undefined **)0x0;
              plStack_638 = (long *)0x0;
              uStack_640 = 0;
              plStack_630 = (long *)0x0;
              pppuStack_6d0 = (undefined ***)0x0;
              ppuStack_6c8 = (undefined **)0x0;
              uStack_6c0 = 0;
              uStack_834 = 0;
              ppppuVar2 = (undefined ****)&uStack_830;
              pppuStack_710 = (undefined ***)ppppuVar15;
              puStack_660 = puVar9;
              pppuStack_658 = (undefined ***)unaff_x27;
              func_0x000107c310cc(ppppuVar2,&ppuStack_698,&pppuStack_6d0,&uStack_834);
              _objc_retainAutoreleasedReturnValue();
              unaff_x22 = ppppuVar2;
              func_0x00010bfb1920();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppppuVar2);
              if (pppuStack_6d0 != (undefined ***)0x0) {
                ppuStack_6c8 = (undefined **)pppuStack_6d0;
                __ZdlPv();
              }
              plVar1 = plStack_630;
              ppuStack_698 = &PTR_SUB_110862700;
              plStack_630 = (long *)0x0;
              if (plVar1 != (long *)0x0) {
                (**(code **)(*plVar1 + 8))();
              }
              plVar1 = plStack_638;
              plStack_638 = (long *)0x0;
              if (plVar1 != (long *)0x0) {
                (**(code **)(*plVar1 + 8))();
              }
              pppuStack_6d0 = unaff_x28;
              func_0x000107c27dd4(&pppuStack_6d0);
              plVar1 = plStack_6d8;
              ppuStack_740 = &PTR_DAT_110862760;
              plStack_6d8 = (long *)0x0;
              if (plVar1 != (long *)0x0) {
                (**(code **)(*plVar1 + 8))();
              }
              plVar1 = plStack_6e0;
              plStack_6e0 = (long *)0x0;
              if (plVar1 != (long *)0x0) {
                (**(code **)(*plVar1 + 8))();
              }
              pppuStack_6d0 = (undefined ***)ppuStack_868;
              func_0x000107c27dd4(&pppuStack_6d0);
              _objc_release(pppuStack_710);
              _objc_release(ppppuVar15);
              func_0x000107c27da8(&uStack_808);
              _objc_release(uStack_818);
              _objc_release(uStack_820);
              pppuVar3 = pppuStack_840;
              if (unaff_x22 != (undefined ****)0x0) {
                puVar17 = PTR_PTR_1126d6798;
                FUN_10850ef60(PTR_PTR_1126d6798,unaff_x22);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c25ed40(pppuVar3);
                _objc_unsafeClaimAutoreleasedReturnValue();
                _objc_release(puVar17);
              }
              pppuVar3 = pppuStack_840;
              func_0x00010c11ac00();
              _objc_retainAutoreleasedReturnValue();
              ppuVar7 = (undefined **)PTR____NSArray0__struct_11034ab48;
              puStack_590 = (undefined8 *)PTR____NSArray0__struct_11034ab48;
              unaff_x23 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
              uStack_618 = (undefined ****)unaff_x21;
              func_0x00010bf72080();
              _objc_retainAutoreleasedReturnValue();
              ppppuVar13 = (undefined ****)0x2;
              FUN_1084ee948(pppuVar3,2,unaff_x23,0,ppuVar7,PTR____NSDictionary0__struct_11034ab58,
                            PTR____NSDictionary0__struct_11034ab58,0);
              _objc_release(unaff_x23);
              _objc_release(unaff_x21);
              _objc_release(unaff_x22);
              _objc_release(unaff_x26);
              ppppuVar2 = (undefined ****)pppuStack_840;
              ppppuVar16 = (undefined ****)((long)ppppuVar16 + 1);
            } while ((undefined ****)pppuStack_848 != ppppuVar16);
            param_3 = (undefined ****)&ppuStack_7b0;
            ppppuVar15 = (undefined ****)pppuStack_870;
            func_0x00010bf52a60();
          } while (ppppuVar15 != (undefined ****)0x0);
        }
        _objc_release(pppuStack_870);
        _objc_release(pppuStack_870);
        _objc_release(pppuStack_888);
        _objc_release(pppuStack_890);
        _objc_release(pppuStack_840);
        _objc_release(pppuStack_878);
        ppppuVar15 = ppppuVar12;
      }
      else {
        unaff_x22 = (undefined ****)PTR_PTR_1126d8f60;
        FUN_10850a65c(PTR_PTR_1126d8f60,pppuStack_880);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(ppppuVar15);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126d67a0);
        if (ppppuVar15 == (undefined ****)0x0) {
          pppuStack_710 = (undefined ***)0x0;
          uStack_728 = 0;
          uStack_730 = 0;
          uStack_718 = 0;
          uStack_720 = 0;
          uStack_738 = 0;
          ppuStack_740 = (undefined **)0x0;
        }
        else {
          func_0x00010bfa6be0(&ppuStack_740,ppppuVar15);
        }
        ppppuVar2 = &pppuStack_6d0;
        FUN_108507e48();
        func_0x00010c11ac00();
        _objc_retainAutoreleasedReturnValue();
        uStack_690 = 0xf;
        uStack_680 = 0x100;
        _objc_retain();
        ppuStack_698 = &PTR_DAT_110862760;
        pppuStack_658 = (undefined ***)0x0;
        puStack_660 = (undefined4 *)0x0;
        ppuStack_648 = (undefined **)0x0;
        ppuStack_650 = (undefined **)0x0;
        plStack_638 = (long *)0x0;
        uStack_640 = 0;
        plStack_630 = (long *)0x0;
        uStack_5f6 = *(undefined2 *)((long)ppppuVar2 + 0x1a);
        uStack_608 = 10;
        uStack_5f8 = 0x100;
        ppuStack_610 = &PTR_SUB_110862700;
        pppuStack_5d0 = &ppuStack_698;
        uStack_5c0 = 0;
        ppuStack_5c8 = (undefined **)0x0;
        plStack_5b0 = (long *)0x0;
        uStack_5b8 = 0;
        plStack_5a8 = (long *)0x0;
        ppuStack_7b0 = (undefined **)0x0;
        ppuStack_7a8 = (undefined **)0x0;
        plStack_7a0 = (long *)0x0;
        uStack_830 = (undefined **)((ulong)uStack_830 & 0xffffffff00000000);
        ppppuVar15 = (undefined ****)&ppuStack_740;
        pppuStack_668 = (undefined ***)unaff_x26;
        pppuStack_5d8 = (undefined ***)ppppuVar2;
        func_0x000107c310cc(ppppuVar15,&ppuStack_610,&ppuStack_7b0,&uStack_830);
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = (undefined **)ppppuVar15;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppppuVar15);
        if ((undefined ***)ppuStack_7b0 != (undefined ***)0x0) {
          ppuStack_7a8 = ppuStack_7b0;
          __ZdlPv();
        }
        plVar1 = plStack_5a8;
        ppppuVar2 = (undefined ****)&ppuStack_5c8;
        ppuStack_610 = &PTR_SUB_110862700;
        plStack_5a8 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_5b0;
        plStack_5b0 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        ppuStack_7b0 = (undefined **)ppppuVar2;
        func_0x000107c27dd4(&ppuStack_7b0);
        plVar1 = plStack_630;
        ppuStack_698 = &PTR_DAT_110862760;
        plStack_630 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_638;
        plStack_638 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        ppuStack_7b0 = (undefined **)&ppuStack_650;
        func_0x000107c27dd4(&ppuStack_7b0);
        _objc_release(pppuStack_668);
        _objc_release(unaff_x26);
        func_0x000107c27da8(&uStack_718);
        _objc_release(uStack_728);
        _objc_release(uStack_730);
        if ((undefined ****)unaff_x23 != (undefined ****)0x0) {
          ppppuVar2 = (undefined ****)PTR_PTR_1126d6798;
          FUN_10850ef60(PTR_PTR_1126d6798,unaff_x23);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(pppuStack_840);
          _objc_unsafeClaimAutoreleasedReturnValue();
          ppppuVar15 = (undefined ****)pppuStack_880;
          func_0x00010c27dd80();
          if (ppppuVar15 == (undefined ****)0x1) {
            ppppuVar15 = (undefined ****)pppuStack_880;
            func_0x00010bf5a820();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = ppppuVar15;
            func_0x00010bf5bbc0();
            _objc_retainAutoreleasedReturnValue();
            ppppuVar13 = unaff_x26;
            func_0x00010c08fa60();
            ppppuVar12 = (undefined ****)(ulong)(ppppuVar13 == (undefined ****)0x0);
            _objc_release(unaff_x26);
            _objc_release(ppppuVar15);
            puVar17 = PTR__OBJC_CLASS___NSSet_1126ae870;
            if (ppppuVar13 != (undefined ****)0x0) {
              ppppuVar12 = (undefined ****)pppuStack_880;
              func_0x00010bf5a820();
              _objc_retainAutoreleasedReturnValue();
              unaff_x27 = ppppuVar12;
              func_0x00010bf5bbc0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2268e0(puVar17);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(unaff_x27);
              _objc_release(ppppuVar12);
              ppppuVar12 = (undefined ****)pppuStack_840;
              unaff_x26 = (undefined ****)pppuStack_840;
              FUN_1084ea0fc(pppuStack_840,puVar17);
              _objc_retainAutoreleasedReturnValue();
              FUN_1084ee948(ppppuVar12,1,unaff_x26,0,PTR____NSArray0__struct_11034ab48,
                            PTR____NSDictionary0__struct_11034ab58,
                            PTR____NSDictionary0__struct_11034ab58,0);
              _objc_release(unaff_x26);
              _objc_release(puVar17);
            }
          }
          _objc_release(ppppuVar2);
        }
        pppuStack_628 = pppuStack_878;
        puStack_620 = PTR____NSArray0__struct_11034ab48;
        unaff_x21 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar13 = (undefined ****)0x2;
        param_3 = (undefined ****)unaff_x21;
        FUN_1084ee948(pppuStack_840,2,unaff_x21,0,PTR____NSArray0__struct_11034ab48,
                      PTR____NSDictionary0__struct_11034ab58,PTR____NSDictionary0__struct_11034ab58,
                      0);
        _objc_release(unaff_x21);
        _objc_release(unaff_x23);
        _objc_release(unaff_x22);
        ppppuVar15 = ppppuVar12;
      }
    }
    _objc_release(pppuStack_880);
  }
  _objc_release(pppuStack_878);
  ppppuVar12 = (undefined ****)pppuStack_840;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_578) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x26);
  _objc_release(unaff_x21);
  _objc_release(ppppuVar2);
  _objc_release(unaff_x23);
  _objc_release(unaff_x22);
  _objc_release(pppuStack_880);
  _objc_release(pppuStack_878);
  _objc_release(pppuStack_840);
  ppppuVar16 = ppppuVar12;
  __Unwind_Resume();
  pcStack_898 = FUN_1084e4338;
  lStack_908 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_8f0 = unaff_x28;
  pppuStack_8e8 = (undefined ***)unaff_x27;
  pppuStack_8e0 = (undefined ***)unaff_x26;
  pppuStack_8d8 = (undefined ***)ppppuVar12;
  pppuStack_8d0 = (undefined ***)ppuVar7;
  pppuStack_8c8 = (undefined ***)unaff_x23;
  pppuStack_8c0 = (undefined ***)unaff_x22;
  pppuStack_8b8 = (undefined ***)unaff_x21;
  pppuStack_8b0 = (undefined ***)ppppuVar2;
  pppuStack_8a8 = (undefined ***)ppppuVar15;
  ppuStack_8a0 = &puStack_510;
  _objc_retain();
  _objc_retain(ppppuVar13);
  _objc_retain(param_3);
  ppppuVar2 = ppppuVar13;
  func_0x00010c08fa60();
  if (ppppuVar2 == (undefined ****)0x0) goto LAB_1084e49f8;
  ppppuVar2 = param_3;
  func_0x00010bf529e0();
  if (ppppuVar2 == (undefined ****)0x0) goto LAB_1084e49f8;
  _objc_opt_class(PTR_PTR_1126d67a0);
  if (ppppuVar16 == (undefined ****)0x0) {
    uStack_920 = 0;
    uStack_938 = 0;
    uStack_940 = 0;
    uStack_928 = 0;
    uStack_930 = 0;
    uStack_948 = 0;
    ppuStack_950 = (undefined **)0x0;
  }
  else {
    func_0x00010bfa6be0(&ppuStack_950,ppppuVar16);
  }
  unaff_x23 = (undefined **)&pppuStack_a38;
  puVar5 = &uStack_9c1;
  FUN_10850e510();
  uStack_a30 = 0xf;
  uStack_a20 = 0x100;
  _objc_retain(ppppuVar13);
  unaff_x28 = (undefined ***)&UNK_110862750;
  pppuStack_a38 = (undefined ***)&PTR_DAT_110862760;
  uStack_9f8 = 0;
  uStack_a00 = 0;
  uStack_9e8 = 0;
  ppuStack_9f0 = (undefined **)0x0;
  plStack_9d8 = (long *)0x0;
  uStack_9e0 = 0;
  plStack_9d0 = (long *)0x0;
  uStack_9a6 = *(undefined2 *)(puVar5 + 0x1a);
  uStack_9b8 = 10;
  uStack_9a8 = 0x100;
  ppuVar7 = &PTR_SUB_110862700;
  ppuStack_9c0 = &PTR_SUB_110862700;
  pppuStack_980 = (undefined ***)&pppuStack_a38;
  uStack_970 = 0;
  ppuStack_978 = (undefined **)0x0;
  plStack_960 = (long *)0x0;
  uStack_968 = 0;
  plStack_958 = (long *)0x0;
  pppuStack_a50 = (undefined ***)0x0;
  pppuStack_a48 = (undefined ***)0x0;
  uStack_a40 = 0;
  uStack_a54 = 0;
  unaff_x22 = (undefined ****)&ppuStack_950;
  pppuStack_a08 = (undefined ***)ppppuVar13;
  puStack_988 = puVar5;
  func_0x000107c310cc(unaff_x22,&ppuStack_9c0,&pppuStack_a50,&uStack_a54);
  _objc_retainAutoreleasedReturnValue();
  if (pppuStack_a50 != (undefined ***)0x0) {
    pppuStack_a48 = pppuStack_a50;
    __ZdlPv();
  }
  plVar1 = plStack_958;
  ppppuVar12 = (undefined ****)&ppuStack_978;
  ppuStack_9c0 = &PTR_SUB_110862700;
  plStack_958 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_960;
  plStack_960 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  pppuStack_a50 = (undefined ***)ppppuVar12;
  func_0x000107c27dd4(&pppuStack_a50);
  plVar1 = plStack_9d0;
  pppuStack_a38 = (undefined ***)&PTR_DAT_110862760;
  plStack_9d0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_9d8;
  plStack_9d8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  pppuStack_a50 = &ppuStack_9f0;
  func_0x000107c27dd4(&pppuStack_a50);
  _objc_release(pppuStack_a08);
  func_0x000107c27da8(&uStack_928);
  _objc_release(uStack_938);
  _objc_release(uStack_940);
  ppppuVar2 = unaff_x22;
  func_0x00010bf529e0();
  if (ppppuVar2 == (undefined ****)0x0) goto LAB_1084e49f0;
  puStack_a88 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = (undefined **)unaff_x22;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar2 = (undefined ****)ppuVar7;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puStack_a88);
  ppppuVar12 = ppppuVar2;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppppuVar2);
  ppppuVar2 = ppppuVar12;
  func_0x00010bf529e0();
  ppppuVar15 = (undefined ****)ppuVar7;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar10 = ppppuVar15;
  func_0x00010bf529e0();
  _objc_release(ppppuVar15);
  puStack_a60 = puStack_a88;
  if (ppppuVar2 == ppppuVar10) goto LAB_1084e49d0;
  ppppuVar2 = ppppuVar12;
  func_0x00010bf529e0();
  puVar17 = PTR_PTR_1126d6798;
  if (ppppuVar2 == (undefined ****)0x0) {
    FUN_10850ef60(PTR_PTR_1126d6798,ppuVar7);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_10850eb48(PTR_PTR_1126d6798,ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    if (puVar17 == (undefined *)0x0) goto LAB_1084e4a4c;
    _objc_setProperty_nonatomic_copy();
  }
  while( true ) {
    func_0x00010c25ed40(ppppuVar16);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    pppuStack_918 = (undefined ***)ppppuVar13;
    pppuStack_910 = (undefined ***)ppppuVar12;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    FUN_1084ee948(ppppuVar16,2,puVar11,0,PTR____NSArray0__struct_11034ab48,
                  PTR____NSDictionary0__struct_11034ab58,PTR____NSDictionary0__struct_11034ab58,0);
    _objc_release(puVar11);
    _objc_opt_class(PTR_PTR_1126b47a0);
    if (ppppuVar16 == (undefined ****)0x0) {
      uStack_920 = 0;
      uStack_938 = 0;
      uStack_940 = 0;
      uStack_928 = 0;
      uStack_930 = 0;
      uStack_948 = 0;
      ppuStack_950 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_950,ppppuVar16);
    }
    puVar5 = &uStack_9c1;
    FUN_108507e48();
    uStack_a30 = 0xf;
    uStack_a20 = 0x100;
    _objc_retain(ppppuVar13);
    pppuStack_a38 = unaff_x28 + 2;
    unaff_x23[8] = (undefined *)0x0;
    unaff_x23[7] = (undefined *)0x0;
    unaff_x23[10] = (undefined *)0x0;
    unaff_x23[9] = (undefined *)0x0;
    unaff_x23[0xc] = (undefined *)0x0;
    unaff_x23[0xb] = (undefined *)0x0;
    plStack_9d0 = (long *)0x0;
    uStack_9a6 = *(undefined2 *)(puVar5 + 0x1a);
    uStack_9b8 = 10;
    uStack_9a8 = 0x100;
    ppuStack_9c0 = &PTR_SUB_110862700;
    pppuStack_980 = (undefined ***)&pppuStack_a38;
    unaff_x23[0x19] = (undefined *)0x0;
    unaff_x23[0x18] = (undefined *)0x0;
    unaff_x23[0x1b] = (undefined *)0x0;
    unaff_x23[0x1a] = (undefined *)0x0;
    plStack_958 = (long *)0x0;
    pppuStack_a50 = (undefined ***)0x0;
    pppuStack_a48 = (undefined ***)0x0;
    uStack_a40 = 0;
    uStack_a54 = 0;
    pppuVar3 = &ppuStack_950;
    pppuStack_a08 = (undefined ***)ppppuVar13;
    puStack_988 = puVar5;
    func_0x000107c310cc(pppuVar3,&ppuStack_9c0,&pppuStack_a50,&uStack_a54);
    _objc_retainAutoreleasedReturnValue();
    if (pppuStack_a50 != (undefined ***)0x0) {
      pppuStack_a48 = pppuStack_a50;
      __ZdlPv();
    }
    plVar1 = plStack_958;
    unaff_x23 = (undefined **)&ppuStack_978;
    ppuStack_9c0 = &PTR_SUB_110862700;
    plStack_958 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_960;
    plStack_960 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    pppuStack_a50 = (undefined ***)unaff_x23;
    func_0x000107c27dd4(&pppuStack_a50);
    plVar1 = plStack_9d0;
    pppuStack_a38 = unaff_x28 + 2;
    plStack_9d0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_9d8;
    plStack_9d8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    pppuStack_a50 = &ppuStack_9f0;
    func_0x000107c27dd4(&pppuStack_a50);
    _objc_release(pppuStack_a08);
    func_0x000107c27da8(&uStack_928);
    _objc_release(uStack_938);
    _objc_release(uStack_940);
    unaff_x28 = pppuVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if ((unaff_x28 != (undefined ***)0x0) &&
       (pppuVar4 = unaff_x28, func_0x00010c27dd80(), pppuVar4 == (undefined ***)0x1)) {
      pppuVar4 = unaff_x28;
      func_0x00010bf5a820();
      _objc_retainAutoreleasedReturnValue();
      pppuVar8 = pppuVar4;
      func_0x00010bf5bbc0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = (undefined **)(ulong)(pppuVar8 == (undefined ***)0x0);
      _objc_release();
      _objc_release(pppuVar4);
      puVar11 = PTR__OBJC_CLASS___NSSet_1126ae870;
      if (pppuVar8 != (undefined ***)0x0) {
        pppuVar4 = unaff_x28;
        func_0x00010bf5a820();
        _objc_retainAutoreleasedReturnValue();
        pppuVar8 = pppuVar4;
        func_0x00010bf5bbc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2268e0(puVar11);
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = (undefined **)ppppuVar16;
        FUN_1084ea0fc(ppppuVar16,puVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar11);
        _objc_release(pppuVar8);
        _objc_release(pppuVar4);
        FUN_1084ee948(ppppuVar16,1,unaff_x23,0,PTR____NSArray0__struct_11034ab48,
                      PTR____NSDictionary0__struct_11034ab58,PTR____NSDictionary0__struct_11034ab58,
                      0);
        _objc_release(unaff_x23);
      }
    }
    _objc_release(unaff_x28);
    _objc_release(pppuVar3);
    _objc_release(puVar17);
LAB_1084e49d0:
    _objc_release(ppppuVar12);
    _objc_release(puStack_a60);
    _objc_release(ppuVar7);
    _objc_release(puStack_a88);
LAB_1084e49f0:
    _objc_release(unaff_x22);
LAB_1084e49f8:
    _objc_release(param_3);
    _objc_release(ppppuVar13);
    _objc_release(ppppuVar16);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_908) break;
    ___stack_chk_fail();
LAB_1084e4a4c:
    puVar17 = (undefined *)0x0;
  }
  return;
}



/* Entry: 1084e2f4c; end: 1084e4337;  */

void FUN_1084e2f4c(undefined ****param_1,undefined ****param_2,undefined ****param_3)

{
  long *plVar1;
  undefined ****ppppuVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined ****ppppuVar8;
  undefined ****ppppuVar9;
  undefined *puVar10;
  undefined ****ppppuVar11;
  undefined ****ppppuVar12;
  undefined ****unaff_x21;
  undefined ****unaff_x22;
  undefined **unaff_x23;
  undefined **unaff_x24;
  undefined ****ppppuVar13;
  undefined ****unaff_x26;
  undefined *puVar14;
  undefined ****unaff_x27;
  undefined ***unaff_x28;
  undefined *puStack_588;
  undefined *puStack_560;
  undefined4 uStack_554;
  undefined ***pppuStack_550;
  undefined ***pppuStack_548;
  undefined8 uStack_540;
  undefined ***pppuStack_538;
  undefined4 uStack_530;
  undefined4 uStack_520;
  undefined ***pppuStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined **ppuStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  long *plStack_4d8;
  long *plStack_4d0;
  undefined1 uStack_4c1;
  undefined **ppuStack_4c0;
  undefined4 uStack_4b8;
  undefined2 uStack_4a8;
  undefined2 uStack_4a6;
  undefined1 *puStack_488;
  undefined ***pppuStack_480;
  undefined **ppuStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long *plStack_460;
  long *plStack_458;
  undefined **ppuStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined ***pppuStack_418;
  undefined ***pppuStack_410;
  long lStack_408;
  undefined ***pppuStack_3f0;
  undefined ***pppuStack_3e8;
  undefined ***pppuStack_3e0;
  undefined ***pppuStack_3d8;
  undefined ***pppuStack_3d0;
  undefined ***pppuStack_3c8;
  undefined ***pppuStack_3c0;
  undefined ***pppuStack_3b8;
  undefined ***pppuStack_3b0;
  undefined ***pppuStack_3a8;
  undefined1 *puStack_3a0;
  code *pcStack_398;
  undefined ***pppuStack_390;
  undefined ***pppuStack_388;
  undefined ***pppuStack_380;
  undefined ***pppuStack_378;
  undefined ***pppuStack_370;
  undefined **ppuStack_368;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  long lStack_350;
  undefined ***pppuStack_348;
  undefined ***pppuStack_340;
  undefined4 uStack_334;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined ***pppuStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long *plStack_2d0;
  long *plStack_2c8;
  undefined1 uStack_2b1;
  undefined **ppuStack_2b0;
  undefined **ppuStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined1 *puStack_278;
  undefined8 *puStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long *plStack_250;
  long *plStack_248;
  undefined **ppuStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined ***pppuStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined *puStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  undefined ***pppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined **ppuStack_198;
  undefined4 uStack_190;
  undefined4 uStack_180;
  undefined ***pppuStack_168;
  undefined4 *puStack_160;
  undefined ***pppuStack_158;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined ***pppuStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  undefined2 uStack_f6;
  undefined ***pppuStack_d8;
  undefined ***pppuStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  long *plStack_a8;
  undefined8 *puStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar11 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  ppppuVar2 = (undefined ****)0x0;
  pppuStack_378 = (undefined ***)param_2;
  pppuStack_340 = (undefined ***)param_1;
  if (param_2 != (undefined ****)0x0) {
    unaff_x23 = &PTR_PTR_1126b4000;
    _objc_opt_class(PTR_PTR_1126b47a0);
    ppppuVar12 = (undefined ****)&ppuStack_2b0;
    if (param_1 == (undefined ****)0x0) {
      pppuStack_210 = (undefined ***)0x0;
      uStack_228 = 0;
      uStack_230 = 0;
      uStack_218 = 0;
      uStack_220 = 0;
      uStack_238 = 0;
      ppuStack_240 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_240,param_1);
    }
    ppppuVar2 = &pppuStack_1d0;
    FUN_108507e48();
    pppuVar3 = pppuStack_378;
    uStack_190 = 0xf;
    uStack_180 = 0x100;
    _objc_retain(pppuStack_378);
    pppuStack_168 = pppuVar3;
    ppuStack_198 = &PTR_DAT_110862760;
    pppuStack_158 = (undefined ***)0x0;
    puStack_160 = (undefined4 *)0x0;
    ppuStack_148 = (undefined **)0x0;
    ppuStack_150 = (undefined **)0x0;
    plStack_138 = (long *)0x0;
    uStack_140 = 0;
    plStack_130 = (long *)0x0;
    uStack_f6 = *(undefined2 *)((long)ppppuVar2 + 0x1a);
    uStack_108 = 10;
    uStack_f8 = 0x100;
    ppuStack_110 = &PTR_SUB_110862700;
    uStack_c0 = 0;
    ppuStack_c8 = (undefined **)0x0;
    plStack_b0 = (long *)0x0;
    uStack_b8 = 0;
    plStack_a8 = (long *)0x0;
    ppuStack_2b0 = (undefined **)0x0;
    ppuStack_2a8 = (undefined **)0x0;
    plStack_2a0 = (long *)0x0;
    uStack_330 = (undefined **)((ulong)uStack_330._4_4_ << 0x20);
    ppppuVar11 = (undefined ****)&ppuStack_240;
    param_3 = (undefined ****)&ppuStack_2b0;
    pppuStack_d8 = (undefined ***)ppppuVar2;
    pppuStack_d0 = &ppuStack_198;
    func_0x000107c310cc(ppppuVar11,&ppuStack_110,param_3,&uStack_330);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar2 = ppppuVar11;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    pppuStack_380 = (undefined ***)ppppuVar2;
    _objc_release(ppppuVar11);
    if ((undefined ***)ppuStack_2b0 != (undefined ***)0x0) {
      ppuStack_2a8 = ppuStack_2b0;
      __ZdlPv();
    }
    plVar1 = plStack_a8;
    param_1 = (undefined ****)&ppuStack_c8;
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
    ppuStack_2b0 = (undefined **)param_1;
    func_0x000107c27dd4(&ppuStack_2b0);
    plVar1 = plStack_130;
    ppuStack_198 = &PTR_DAT_110862760;
    plStack_130 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_138;
    plStack_138 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    ppuStack_2b0 = (undefined **)&ppuStack_150;
    func_0x000107c27dd4(&ppuStack_2b0);
    _objc_release(pppuStack_168);
    func_0x000107c27da8(&uStack_218);
    _objc_release(uStack_228);
    _objc_release(uStack_230);
    ppppuVar2 = (undefined ****)pppuStack_340;
    if ((undefined ****)pppuStack_380 == (undefined ****)0x0) {
      _objc_retain(pppuStack_340);
      unaff_x22 = ppppuVar2;
      ppppuVar11 = (undefined ****)pppuStack_378;
      FUN_1084dc688();
      _objc_retainAutoreleasedReturnValue();
      unaff_x21 = unaff_x22;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x22);
      if (unaff_x21 != (undefined ****)0x0) {
        unaff_x22 = (undefined ****)PTR_PTR_1126d8fe8;
        ppppuVar11 = unaff_x21;
        FUN_10851ceac();
        _objc_retainAutoreleasedReturnValue();
        param_3 = unaff_x22;
        func_0x00010c25ed40(pppuStack_340);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(unaff_x22);
      }
      _objc_release(unaff_x21);
      _objc_release(pppuStack_340);
    }
    else {
      ppppuVar11 = (undefined ****)pppuStack_380;
      func_0x00010c27dd80();
      unaff_x26 = (undefined ****)pppuStack_380;
      unaff_x24 = (undefined **)&ppuStack_198;
      if (ppppuVar11 == (undefined ****)0x7) {
        _objc_retain(pppuStack_378);
        _objc_retain(ppppuVar2);
        _objc_opt_class(PTR_PTR_1126b47a0);
        if (ppppuVar2 == (undefined ****)0x0) {
          pppuStack_210 = (undefined ***)0x0;
          uStack_228 = 0;
          uStack_230 = 0;
          uStack_218 = 0;
          uStack_220 = 0;
          uStack_238 = 0;
          ppuStack_240 = (undefined **)0x0;
        }
        else {
          func_0x00010bfa6be0(&ppuStack_240,ppppuVar2);
        }
        ppppuVar2 = &pppuStack_1d0;
        FUN_108507e48();
        pppuVar3 = pppuStack_378;
        uStack_190 = 0xf;
        uStack_180 = 0x100;
        _objc_retain(pppuStack_378);
        pppuStack_168 = pppuVar3;
        ppuStack_198 = &PTR_DAT_110862760;
        pppuStack_158 = (undefined ***)0x0;
        puStack_160 = (undefined4 *)0x0;
        ppuStack_148 = (undefined **)0x0;
        ppuStack_150 = (undefined **)0x0;
        plStack_138 = (long *)0x0;
        uStack_140 = 0;
        plStack_130 = (long *)0x0;
        uStack_f6 = *(undefined2 *)((long)ppppuVar2 + 0x1a);
        uStack_108 = 10;
        uStack_f8 = 0x100;
        ppuStack_110 = &PTR_SUB_110862700;
        pppuStack_d0 = &ppuStack_198;
        uStack_c0 = 0;
        ppuStack_c8 = (undefined **)0x0;
        plStack_b0 = (long *)0x0;
        uStack_b8 = 0;
        plStack_a8 = (long *)0x0;
        ppuStack_2b0 = (undefined **)0x0;
        ppuStack_2a8 = (undefined **)0x0;
        plStack_2a0 = (long *)0x0;
        uStack_330 = (undefined **)((ulong)uStack_330 & 0xffffffff00000000);
        pppuVar3 = &ppuStack_240;
        pppuStack_d8 = (undefined ***)ppppuVar2;
        func_0x000107c310cc(pppuVar3,&ppuStack_110,&ppuStack_2b0,&uStack_330);
        _objc_retainAutoreleasedReturnValue();
        pppuVar4 = pppuVar3;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        pppuStack_390 = pppuVar4;
        _objc_release(pppuVar3);
        if ((undefined ***)ppuStack_2b0 != (undefined ***)0x0) {
          ppuStack_2a8 = ppuStack_2b0;
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
        ppuStack_2b0 = (undefined **)&ppuStack_c8;
        func_0x000107c27dd4(&ppuStack_2b0);
        plVar1 = plStack_130;
        ppuStack_198 = &PTR_DAT_110862760;
        plStack_130 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_138;
        plStack_138 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        ppuStack_2b0 = (undefined **)&ppuStack_150;
        func_0x000107c27dd4(&ppuStack_2b0);
        _objc_release(pppuStack_168);
        func_0x000107c27da8(&uStack_218);
        _objc_release(uStack_228);
        _objc_release(uStack_230);
        pppuVar3 = pppuStack_390;
        func_0x00010bfa2680();
        _objc_retainAutoreleasedReturnValue();
        pppuVar4 = pppuVar3;
        func_0x00010bf0a5c0();
        _objc_retainAutoreleasedReturnValue();
        pppuVar5 = pppuVar4;
        func_0x00010c0ecf00();
        _objc_retainAutoreleasedReturnValue();
        pppuStack_388 = pppuVar5;
        _objc_release(pppuVar4);
        _objc_release(pppuVar3);
        _objc_opt_class(PTR_PTR_1126b47a0);
        if ((undefined ****)pppuStack_340 == (undefined ****)0x0) {
          uStack_1a0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          uStack_1a8 = 0;
          uStack_1b0 = 0;
          ppuStack_1c8 = (undefined **)0x0;
          pppuStack_1d0 = (undefined ***)0x0;
        }
        else {
          func_0x00010bfa6be0(&pppuStack_1d0);
        }
        puVar6 = &uStack_334;
        FUN_108507fc0();
        uStack_238 = CONCAT44(uStack_238._4_4_,0xf);
        uStack_228 = CONCAT44(uStack_228._4_4_,0x100);
        unaff_x22 = (undefined ****)&UNK_110a4fda0;
        pppuStack_210 = (undefined ***)0x7;
        ppuStack_240 = &PTR_DAT_110a4fdb0;
        uStack_200 = 0;
        uStack_208 = 0;
        puStack_1f0 = (undefined *)0x0;
        puStack_1f8 = (undefined *)0x0;
        plStack_1e0 = (long *)0x0;
        uStack_1e8 = 0;
        plStack_1d8 = (long *)0x0;
        uStack_190 = 10;
        uStack_180 = CONCAT22(*(undefined2 *)((long)puVar6 + 0x1a),0x100);
        unaff_x23 = (undefined **)&UNK_110a4fd40;
        unaff_x24 = (undefined **)&ppuStack_198;
        ppuStack_198 = &PTR_FUN_110a4fd50;
        pppuStack_158 = &ppuStack_240;
        ppuStack_148 = (undefined **)0x0;
        ppuStack_150 = (undefined **)0x0;
        plStack_138 = (long *)0x0;
        uStack_140 = 0;
        plStack_130 = (long *)0x0;
        puVar7 = &uStack_2b1;
        puStack_160 = puVar6;
        FUN_108508384();
        pppuVar3 = pppuStack_388;
        uStack_328 = CONCAT44(uStack_328._4_4_,0xf);
        uStack_318 = CONCAT44(uStack_318._4_4_,0x100);
        _objc_retain(pppuStack_388);
        pppuStack_300 = pppuVar3;
        uStack_330 = &PTR_DAT_110862760;
        uStack_2f0 = 0;
        uStack_2f8 = 0;
        uStack_2e0 = 0;
        uStack_2e8 = 0;
        plStack_2d0 = (long *)0x0;
        uStack_2d8 = 0;
        plStack_2c8 = (long *)0x0;
        ppuStack_2a8 = (undefined **)CONCAT44(ppuStack_2a8._4_4_,10);
        uStack_298._0_4_ = CONCAT13(puVar7[0x1b],CONCAT12(puVar7[0x1a],0x100));
        ppuStack_2b0 = &PTR_SUB_110862700;
        puStack_270 = &uStack_330;
        pppuStack_d0 = &ppuStack_2b0;
        uStack_260 = 0;
        uStack_268 = 0;
        plStack_250 = (long *)0x0;
        uStack_258 = 0;
        plStack_248 = (long *)0x0;
        uStack_108 = 4;
        uStack_f8 = 0x100;
        uStack_f6 = CONCAT11(uStack_180._3_1_ & puVar7[0x1b],uStack_180._2_1_ | puVar7[0x1a]);
        ppuStack_110 = &PTR_DAT_1108629c8;
        pppuStack_d8 = &ppuStack_198;
        plStack_a8 = (long *)0x0;
        uStack_c0 = 0;
        ppuStack_c8 = (undefined **)0x0;
        plStack_b0 = (long *)0x0;
        uStack_b8 = 0;
        puStack_90 = (undefined8 *)0x0;
        puStack_88 = (undefined8 *)0x0;
        unaff_x26 = (undefined ****)&ppuStack_198;
        uStack_80 = 0;
        uStack_118 = (undefined ****)((ulong)uStack_118._4_4_ << 0x20);
        ppppuVar2 = &pppuStack_1d0;
        ppppuVar11 = (undefined ****)&ppuStack_110;
        puStack_278 = puVar7;
        func_0x000107c310cc(ppppuVar2,ppppuVar11,&puStack_90,&uStack_118);
        _objc_retainAutoreleasedReturnValue();
        ppppuVar13 = ppppuVar2;
        func_0x00010bf0a540();
        _objc_retainAutoreleasedReturnValue();
        pppuStack_370 = (undefined ***)ppppuVar13;
        _objc_release(ppppuVar2);
        if (puStack_90 != (undefined8 *)0x0) {
          puStack_88 = puStack_90;
          __ZdlPv();
        }
        plVar1 = plStack_a8;
        ppuStack_110 = &PTR_DAT_1108629c8;
        plStack_a8 = (long *)0x0;
        unaff_x21 = (undefined ****)&ppuStack_198;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_b0;
        plStack_b0 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if ((undefined ***)ppuStack_c8 != (undefined ***)0x0) {
          __ZdlPv();
        }
        plVar1 = plStack_248;
        ppuStack_2b0 = &PTR_SUB_110862700;
        plStack_248 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_250;
        plStack_250 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        puStack_90 = &uStack_268;
        func_0x000107c27dd4(&puStack_90);
        plVar1 = plStack_2c8;
        uStack_330 = &PTR_DAT_110862760;
        plStack_2c8 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_2d0;
        plStack_2d0 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        puStack_90 = &uStack_2e8;
        func_0x000107c27dd4(&puStack_90);
        _objc_release(pppuStack_300);
        plVar1 = plStack_130;
        ppuStack_198 = &PTR_FUN_110a4fd50;
        plStack_130 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_138;
        plStack_138 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (ppuStack_150 != (undefined **)0x0) {
          ppuStack_148 = ppuStack_150;
          __ZdlPv();
        }
        plVar1 = plStack_1d8;
        ppuStack_240 = &PTR_DAT_110a4fdb0;
        plStack_1d8 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_1e0;
        plStack_1e0 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if ((undefined **)puStack_1f8 != (undefined **)0x0) {
          puStack_1f0 = puStack_1f8;
          __ZdlPv();
        }
        func_0x000107c27da8(&uStack_1a8);
        _objc_release(uStack_1b8);
        _objc_release(uStack_1c0);
        ppppuVar2 = (undefined ****)pppuStack_370;
        ppuStack_2a8 = (undefined **)0x0;
        ppuStack_2b0 = (undefined **)0x0;
        uStack_298 = 0;
        plStack_2a0 = (long *)0x0;
        uStack_288 = 0;
        uStack_290 = 0;
        puStack_278 = (undefined1 *)0x0;
        uStack_280 = 0;
        _objc_retain(pppuStack_370);
        param_3 = (undefined ****)&ppuStack_2b0;
        func_0x00010bf52a60();
        param_1 = (undefined ****)pppuStack_340;
        if (ppppuVar2 != (undefined ****)0x0) {
          lStack_350 = *plStack_2a0;
          unaff_x27 = (undefined ****)&ppuStack_240;
          unaff_x28 = &ppuStack_150;
          ppuStack_368 = &puStack_1f8;
          ppuStack_358 = &PTR_DAT_110862760;
          ppuStack_360 = &PTR_SUB_110862700;
          do {
            ppppuVar13 = (undefined ****)0x0;
            pppuStack_348 = (undefined ***)ppppuVar2;
            do {
              if (*plStack_2a0 != lStack_350) {
                _objc_enumerationMutation(pppuStack_370);
              }
              unaff_x21 = (undefined ****)ppuStack_2a8[(long)ppppuVar13];
              unaff_x26 = (undefined ****)PTR_PTR_1126d8f60;
              FUN_10850a65c(PTR_PTR_1126d8f60,unaff_x21);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c25ed40(param_1);
              _objc_unsafeClaimAutoreleasedReturnValue();
              _objc_opt_class(PTR_PTR_1126d67a0);
              if (param_1 == (undefined ****)0x0) {
                pppuStack_300 = (undefined ***)0x0;
                uStack_318 = 0;
                uStack_320 = 0;
                uStack_308 = 0;
                uStack_310 = 0;
                uStack_328 = 0;
                uStack_330 = (undefined **)0x0;
              }
              else {
                func_0x00010bfa6be0(&uStack_330,param_1);
              }
              puVar6 = (undefined4 *)&uStack_2b1;
              FUN_108507e48();
              ppppuVar11 = unaff_x21;
              func_0x00010c11ac00();
              _objc_retainAutoreleasedReturnValue();
              uStack_238 = CONCAT44(uStack_238._4_4_,0xf);
              uStack_228 = CONCAT44(uStack_228._4_4_,0x100);
              _objc_retain();
              ppuStack_240 = ppuStack_358;
              uStack_200 = 0;
              uStack_208 = 0;
              puStack_1f0 = (undefined *)0x0;
              puStack_1f8 = (undefined *)0x0;
              plStack_1e0 = (long *)0x0;
              uStack_1e8 = 0;
              plStack_1d8 = (long *)0x0;
              uStack_190 = 10;
              uStack_180 = CONCAT22(*(undefined2 *)((long)puVar6 + 0x1a),0x100);
              ppuStack_198 = ppuStack_360;
              ppuStack_148 = (undefined **)0x0;
              ppuStack_150 = (undefined **)0x0;
              plStack_138 = (long *)0x0;
              uStack_140 = 0;
              plStack_130 = (long *)0x0;
              pppuStack_1d0 = (undefined ***)0x0;
              ppuStack_1c8 = (undefined **)0x0;
              uStack_1c0 = 0;
              uStack_334 = 0;
              ppppuVar2 = (undefined ****)&uStack_330;
              pppuStack_210 = (undefined ***)ppppuVar11;
              puStack_160 = puVar6;
              pppuStack_158 = (undefined ***)unaff_x27;
              func_0x000107c310cc(ppppuVar2,&ppuStack_198,&pppuStack_1d0,&uStack_334);
              _objc_retainAutoreleasedReturnValue();
              unaff_x22 = ppppuVar2;
              func_0x00010bfb1920();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(ppppuVar2);
              if (pppuStack_1d0 != (undefined ***)0x0) {
                ppuStack_1c8 = (undefined **)pppuStack_1d0;
                __ZdlPv();
              }
              plVar1 = plStack_130;
              ppuStack_198 = &PTR_SUB_110862700;
              plStack_130 = (long *)0x0;
              if (plVar1 != (long *)0x0) {
                (**(code **)(*plVar1 + 8))();
              }
              plVar1 = plStack_138;
              plStack_138 = (long *)0x0;
              if (plVar1 != (long *)0x0) {
                (**(code **)(*plVar1 + 8))();
              }
              pppuStack_1d0 = unaff_x28;
              func_0x000107c27dd4(&pppuStack_1d0);
              plVar1 = plStack_1d8;
              ppuStack_240 = &PTR_DAT_110862760;
              plStack_1d8 = (long *)0x0;
              if (plVar1 != (long *)0x0) {
                (**(code **)(*plVar1 + 8))();
              }
              plVar1 = plStack_1e0;
              plStack_1e0 = (long *)0x0;
              if (plVar1 != (long *)0x0) {
                (**(code **)(*plVar1 + 8))();
              }
              pppuStack_1d0 = (undefined ***)ppuStack_368;
              func_0x000107c27dd4(&pppuStack_1d0);
              _objc_release(pppuStack_210);
              _objc_release(ppppuVar11);
              func_0x000107c27da8(&uStack_308);
              _objc_release(uStack_318);
              _objc_release(uStack_320);
              pppuVar3 = pppuStack_340;
              if (unaff_x22 != (undefined ****)0x0) {
                puVar14 = PTR_PTR_1126d6798;
                FUN_10850ef60(PTR_PTR_1126d6798,unaff_x22);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c25ed40(pppuVar3);
                _objc_unsafeClaimAutoreleasedReturnValue();
                _objc_release(puVar14);
              }
              pppuVar3 = pppuStack_340;
              func_0x00010c11ac00();
              _objc_retainAutoreleasedReturnValue();
              unaff_x24 = (undefined **)PTR____NSArray0__struct_11034ab48;
              puStack_90 = (undefined8 *)PTR____NSArray0__struct_11034ab48;
              unaff_x23 = (undefined **)PTR__OBJC_CLASS___NSDictionary_1126ae670;
              uStack_118 = unaff_x21;
              func_0x00010bf72080();
              _objc_retainAutoreleasedReturnValue();
              ppppuVar11 = (undefined ****)0x2;
              FUN_1084ee948(pppuVar3,2,unaff_x23,0,unaff_x24,PTR____NSDictionary0__struct_11034ab58,
                            PTR____NSDictionary0__struct_11034ab58,0);
              _objc_release(unaff_x23);
              _objc_release(unaff_x21);
              _objc_release(unaff_x22);
              _objc_release(unaff_x26);
              param_1 = (undefined ****)pppuStack_340;
              ppppuVar13 = (undefined ****)((long)ppppuVar13 + 1);
            } while ((undefined ****)pppuStack_348 != ppppuVar13);
            param_3 = (undefined ****)&ppuStack_2b0;
            ppppuVar2 = (undefined ****)pppuStack_370;
            func_0x00010bf52a60();
          } while (ppppuVar2 != (undefined ****)0x0);
        }
        _objc_release(pppuStack_370);
        _objc_release(pppuStack_370);
        _objc_release(pppuStack_388);
        _objc_release(pppuStack_390);
        _objc_release(pppuStack_340);
        _objc_release(pppuStack_378);
        ppppuVar2 = ppppuVar12;
      }
      else {
        unaff_x22 = (undefined ****)PTR_PTR_1126d8f60;
        FUN_10850a65c(PTR_PTR_1126d8f60,pppuStack_380);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(ppppuVar2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126d67a0);
        if (ppppuVar2 == (undefined ****)0x0) {
          pppuStack_210 = (undefined ***)0x0;
          uStack_228 = 0;
          uStack_230 = 0;
          uStack_218 = 0;
          uStack_220 = 0;
          uStack_238 = 0;
          ppuStack_240 = (undefined **)0x0;
        }
        else {
          func_0x00010bfa6be0(&ppuStack_240,ppppuVar2);
        }
        ppppuVar2 = &pppuStack_1d0;
        FUN_108507e48();
        func_0x00010c11ac00();
        _objc_retainAutoreleasedReturnValue();
        uStack_190 = 0xf;
        uStack_180 = 0x100;
        _objc_retain();
        ppuStack_198 = &PTR_DAT_110862760;
        pppuStack_158 = (undefined ***)0x0;
        puStack_160 = (undefined4 *)0x0;
        ppuStack_148 = (undefined **)0x0;
        ppuStack_150 = (undefined **)0x0;
        plStack_138 = (long *)0x0;
        uStack_140 = 0;
        plStack_130 = (long *)0x0;
        uStack_f6 = *(undefined2 *)((long)ppppuVar2 + 0x1a);
        uStack_108 = 10;
        uStack_f8 = 0x100;
        ppuStack_110 = &PTR_SUB_110862700;
        pppuStack_d0 = &ppuStack_198;
        uStack_c0 = 0;
        ppuStack_c8 = (undefined **)0x0;
        plStack_b0 = (long *)0x0;
        uStack_b8 = 0;
        plStack_a8 = (long *)0x0;
        ppuStack_2b0 = (undefined **)0x0;
        ppuStack_2a8 = (undefined **)0x0;
        plStack_2a0 = (long *)0x0;
        uStack_330 = (undefined **)((ulong)uStack_330 & 0xffffffff00000000);
        ppppuVar11 = (undefined ****)&ppuStack_240;
        pppuStack_168 = (undefined ***)unaff_x26;
        pppuStack_d8 = (undefined ***)ppppuVar2;
        func_0x000107c310cc(ppppuVar11,&ppuStack_110,&ppuStack_2b0,&uStack_330);
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = (undefined **)ppppuVar11;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppppuVar11);
        if ((undefined ***)ppuStack_2b0 != (undefined ***)0x0) {
          ppuStack_2a8 = ppuStack_2b0;
          __ZdlPv();
        }
        plVar1 = plStack_a8;
        param_1 = (undefined ****)&ppuStack_c8;
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
        ppuStack_2b0 = (undefined **)param_1;
        func_0x000107c27dd4(&ppuStack_2b0);
        plVar1 = plStack_130;
        ppuStack_198 = &PTR_DAT_110862760;
        plStack_130 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_138;
        plStack_138 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        ppuStack_2b0 = (undefined **)&ppuStack_150;
        func_0x000107c27dd4(&ppuStack_2b0);
        _objc_release(pppuStack_168);
        _objc_release(unaff_x26);
        func_0x000107c27da8(&uStack_218);
        _objc_release(uStack_228);
        _objc_release(uStack_230);
        if ((undefined ****)unaff_x23 != (undefined ****)0x0) {
          param_1 = (undefined ****)PTR_PTR_1126d6798;
          FUN_10850ef60(PTR_PTR_1126d6798,unaff_x23);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(pppuStack_340);
          _objc_unsafeClaimAutoreleasedReturnValue();
          ppppuVar2 = (undefined ****)pppuStack_380;
          func_0x00010c27dd80();
          if (ppppuVar2 == (undefined ****)0x1) {
            ppppuVar2 = (undefined ****)pppuStack_380;
            func_0x00010bf5a820();
            _objc_retainAutoreleasedReturnValue();
            unaff_x26 = ppppuVar2;
            func_0x00010bf5bbc0();
            _objc_retainAutoreleasedReturnValue();
            ppppuVar11 = unaff_x26;
            func_0x00010c08fa60();
            ppppuVar12 = (undefined ****)(ulong)(ppppuVar11 == (undefined ****)0x0);
            _objc_release(unaff_x26);
            _objc_release(ppppuVar2);
            puVar14 = PTR__OBJC_CLASS___NSSet_1126ae870;
            if (ppppuVar11 != (undefined ****)0x0) {
              ppppuVar2 = (undefined ****)pppuStack_380;
              func_0x00010bf5a820();
              _objc_retainAutoreleasedReturnValue();
              unaff_x27 = ppppuVar2;
              func_0x00010bf5bbc0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c2268e0(puVar14);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(unaff_x27);
              _objc_release(ppppuVar2);
              ppppuVar12 = (undefined ****)pppuStack_340;
              unaff_x26 = (undefined ****)pppuStack_340;
              FUN_1084ea0fc(pppuStack_340,puVar14);
              _objc_retainAutoreleasedReturnValue();
              FUN_1084ee948(ppppuVar12,1,unaff_x26,0,PTR____NSArray0__struct_11034ab48,
                            PTR____NSDictionary0__struct_11034ab58,
                            PTR____NSDictionary0__struct_11034ab58,0);
              _objc_release(unaff_x26);
              _objc_release(puVar14);
            }
          }
          _objc_release(param_1);
        }
        pppuStack_128 = pppuStack_378;
        puStack_120 = PTR____NSArray0__struct_11034ab48;
        unaff_x21 = (undefined ****)PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080();
        _objc_retainAutoreleasedReturnValue();
        ppppuVar11 = (undefined ****)0x2;
        param_3 = unaff_x21;
        FUN_1084ee948(pppuStack_340,2,unaff_x21,0,PTR____NSArray0__struct_11034ab48,
                      PTR____NSDictionary0__struct_11034ab58,PTR____NSDictionary0__struct_11034ab58,
                      0);
        _objc_release(unaff_x21);
        _objc_release(unaff_x23);
        _objc_release(unaff_x22);
        ppppuVar2 = ppppuVar12;
      }
    }
    _objc_release(pppuStack_380);
  }
  _objc_release(pppuStack_378);
  ppppuVar12 = (undefined ****)pppuStack_340;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x26);
  _objc_release(unaff_x21);
  _objc_release(param_1);
  _objc_release(unaff_x23);
  _objc_release(unaff_x22);
  _objc_release(pppuStack_380);
  _objc_release(pppuStack_378);
  _objc_release(pppuStack_340);
  ppppuVar13 = ppppuVar12;
  __Unwind_Resume();
  pcStack_398 = FUN_1084e4338;
  lStack_408 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_3f0 = unaff_x28;
  pppuStack_3e8 = (undefined ***)unaff_x27;
  pppuStack_3e0 = (undefined ***)unaff_x26;
  pppuStack_3d8 = (undefined ***)ppppuVar12;
  pppuStack_3d0 = (undefined ***)unaff_x24;
  pppuStack_3c8 = (undefined ***)unaff_x23;
  pppuStack_3c0 = (undefined ***)unaff_x22;
  pppuStack_3b8 = (undefined ***)unaff_x21;
  pppuStack_3b0 = (undefined ***)param_1;
  pppuStack_3a8 = (undefined ***)ppppuVar2;
  puStack_3a0 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(ppppuVar11);
  _objc_retain(param_3);
  ppppuVar2 = ppppuVar11;
  func_0x00010c08fa60();
  if (ppppuVar2 == (undefined ****)0x0) goto LAB_1084e49f8;
  ppppuVar2 = param_3;
  func_0x00010bf529e0();
  if (ppppuVar2 == (undefined ****)0x0) goto LAB_1084e49f8;
  _objc_opt_class(PTR_PTR_1126d67a0);
  if (ppppuVar13 == (undefined ****)0x0) {
    uStack_420 = 0;
    uStack_438 = 0;
    uStack_440 = 0;
    uStack_428 = 0;
    uStack_430 = 0;
    uStack_448 = 0;
    ppuStack_450 = (undefined **)0x0;
  }
  else {
    func_0x00010bfa6be0(&ppuStack_450,ppppuVar13);
  }
  unaff_x23 = (undefined **)&pppuStack_538;
  puVar7 = &uStack_4c1;
  FUN_10850e510();
  uStack_530 = 0xf;
  uStack_520 = 0x100;
  _objc_retain(ppppuVar11);
  unaff_x28 = (undefined ***)&UNK_110862750;
  pppuStack_538 = (undefined ***)&PTR_DAT_110862760;
  uStack_4f8 = 0;
  uStack_500 = 0;
  uStack_4e8 = 0;
  ppuStack_4f0 = (undefined **)0x0;
  plStack_4d8 = (long *)0x0;
  uStack_4e0 = 0;
  plStack_4d0 = (long *)0x0;
  uStack_4a6 = *(undefined2 *)(puVar7 + 0x1a);
  uStack_4b8 = 10;
  uStack_4a8 = 0x100;
  unaff_x24 = &PTR_SUB_110862700;
  ppuStack_4c0 = &PTR_SUB_110862700;
  pppuStack_480 = (undefined ***)&pppuStack_538;
  uStack_470 = 0;
  ppuStack_478 = (undefined **)0x0;
  plStack_460 = (long *)0x0;
  uStack_468 = 0;
  plStack_458 = (long *)0x0;
  pppuStack_550 = (undefined ***)0x0;
  pppuStack_548 = (undefined ***)0x0;
  uStack_540 = 0;
  uStack_554 = 0;
  unaff_x22 = (undefined ****)&ppuStack_450;
  pppuStack_508 = (undefined ***)ppppuVar11;
  puStack_488 = puVar7;
  func_0x000107c310cc(unaff_x22,&ppuStack_4c0,&pppuStack_550,&uStack_554);
  _objc_retainAutoreleasedReturnValue();
  if (pppuStack_550 != (undefined ***)0x0) {
    pppuStack_548 = pppuStack_550;
    __ZdlPv();
  }
  plVar1 = plStack_458;
  ppppuVar12 = (undefined ****)&ppuStack_478;
  ppuStack_4c0 = &PTR_SUB_110862700;
  plStack_458 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_460;
  plStack_460 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  pppuStack_550 = (undefined ***)ppppuVar12;
  func_0x000107c27dd4(&pppuStack_550);
  plVar1 = plStack_4d0;
  pppuStack_538 = (undefined ***)&PTR_DAT_110862760;
  plStack_4d0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_4d8;
  plStack_4d8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  pppuStack_550 = &ppuStack_4f0;
  func_0x000107c27dd4(&pppuStack_550);
  _objc_release(pppuStack_508);
  func_0x000107c27da8(&uStack_428);
  _objc_release(uStack_438);
  _objc_release(uStack_440);
  ppppuVar2 = unaff_x22;
  func_0x00010bf529e0();
  if (ppppuVar2 == (undefined ****)0x0) goto LAB_1084e49f0;
  puStack_588 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  unaff_x24 = (undefined **)unaff_x22;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar2 = (undefined ****)unaff_x24;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puStack_588);
  ppppuVar12 = ppppuVar2;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppppuVar2);
  ppppuVar2 = ppppuVar12;
  func_0x00010bf529e0();
  ppppuVar8 = (undefined ****)unaff_x24;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar9 = ppppuVar8;
  func_0x00010bf529e0();
  _objc_release(ppppuVar8);
  puStack_560 = puStack_588;
  if (ppppuVar2 == ppppuVar9) goto LAB_1084e49d0;
  ppppuVar2 = ppppuVar12;
  func_0x00010bf529e0();
  puVar14 = PTR_PTR_1126d6798;
  if (ppppuVar2 == (undefined ****)0x0) {
    FUN_10850ef60(PTR_PTR_1126d6798,unaff_x24);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_10850eb48(PTR_PTR_1126d6798,unaff_x24);
    _objc_retainAutoreleasedReturnValue();
    if (puVar14 == (undefined *)0x0) goto LAB_1084e4a4c;
    _objc_setProperty_nonatomic_copy();
  }
  while( true ) {
    func_0x00010c25ed40(ppppuVar13);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    pppuStack_418 = (undefined ***)ppppuVar11;
    pppuStack_410 = (undefined ***)ppppuVar12;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    FUN_1084ee948(ppppuVar13,2,puVar10,0,PTR____NSArray0__struct_11034ab48,
                  PTR____NSDictionary0__struct_11034ab58,PTR____NSDictionary0__struct_11034ab58,0);
    _objc_release(puVar10);
    _objc_opt_class(PTR_PTR_1126b47a0);
    if (ppppuVar13 == (undefined ****)0x0) {
      uStack_420 = 0;
      uStack_438 = 0;
      uStack_440 = 0;
      uStack_428 = 0;
      uStack_430 = 0;
      uStack_448 = 0;
      ppuStack_450 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_450,ppppuVar13);
    }
    puVar7 = &uStack_4c1;
    FUN_108507e48();
    uStack_530 = 0xf;
    uStack_520 = 0x100;
    _objc_retain(ppppuVar11);
    pppuStack_538 = unaff_x28 + 2;
    unaff_x23[8] = (undefined *)0x0;
    unaff_x23[7] = (undefined *)0x0;
    unaff_x23[10] = (undefined *)0x0;
    unaff_x23[9] = (undefined *)0x0;
    unaff_x23[0xc] = (undefined *)0x0;
    unaff_x23[0xb] = (undefined *)0x0;
    plStack_4d0 = (long *)0x0;
    uStack_4a6 = *(undefined2 *)(puVar7 + 0x1a);
    uStack_4b8 = 10;
    uStack_4a8 = 0x100;
    ppuStack_4c0 = &PTR_SUB_110862700;
    pppuStack_480 = (undefined ***)&pppuStack_538;
    unaff_x23[0x19] = (undefined *)0x0;
    unaff_x23[0x18] = (undefined *)0x0;
    unaff_x23[0x1b] = (undefined *)0x0;
    unaff_x23[0x1a] = (undefined *)0x0;
    plStack_458 = (long *)0x0;
    pppuStack_550 = (undefined ***)0x0;
    pppuStack_548 = (undefined ***)0x0;
    uStack_540 = 0;
    uStack_554 = 0;
    pppuVar3 = &ppuStack_450;
    pppuStack_508 = (undefined ***)ppppuVar11;
    puStack_488 = puVar7;
    func_0x000107c310cc(pppuVar3,&ppuStack_4c0,&pppuStack_550,&uStack_554);
    _objc_retainAutoreleasedReturnValue();
    if (pppuStack_550 != (undefined ***)0x0) {
      pppuStack_548 = pppuStack_550;
      __ZdlPv();
    }
    plVar1 = plStack_458;
    unaff_x23 = (undefined **)&ppuStack_478;
    ppuStack_4c0 = &PTR_SUB_110862700;
    plStack_458 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_460;
    plStack_460 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    pppuStack_550 = (undefined ***)unaff_x23;
    func_0x000107c27dd4(&pppuStack_550);
    plVar1 = plStack_4d0;
    pppuStack_538 = unaff_x28 + 2;
    plStack_4d0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_4d8;
    plStack_4d8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    pppuStack_550 = &ppuStack_4f0;
    func_0x000107c27dd4(&pppuStack_550);
    _objc_release(pppuStack_508);
    func_0x000107c27da8(&uStack_428);
    _objc_release(uStack_438);
    _objc_release(uStack_440);
    unaff_x28 = pppuVar3;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if ((unaff_x28 != (undefined ***)0x0) &&
       (pppuVar4 = unaff_x28, func_0x00010c27dd80(), pppuVar4 == (undefined ***)0x1)) {
      pppuVar4 = unaff_x28;
      func_0x00010bf5a820();
      _objc_retainAutoreleasedReturnValue();
      pppuVar5 = pppuVar4;
      func_0x00010bf5bbc0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = (undefined **)(ulong)(pppuVar5 == (undefined ***)0x0);
      _objc_release();
      _objc_release(pppuVar4);
      puVar10 = PTR__OBJC_CLASS___NSSet_1126ae870;
      if (pppuVar5 != (undefined ***)0x0) {
        pppuVar4 = unaff_x28;
        func_0x00010bf5a820();
        _objc_retainAutoreleasedReturnValue();
        pppuVar5 = pppuVar4;
        func_0x00010bf5bbc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2268e0(puVar10);
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = (undefined **)ppppuVar13;
        FUN_1084ea0fc(ppppuVar13,puVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar10);
        _objc_release(pppuVar5);
        _objc_release(pppuVar4);
        FUN_1084ee948(ppppuVar13,1,unaff_x23,0,PTR____NSArray0__struct_11034ab48,
                      PTR____NSDictionary0__struct_11034ab58,PTR____NSDictionary0__struct_11034ab58,
                      0);
        _objc_release(unaff_x23);
      }
    }
    _objc_release(unaff_x28);
    _objc_release(pppuVar3);
    _objc_release(puVar14);
LAB_1084e49d0:
    _objc_release(ppppuVar12);
    _objc_release(puStack_560);
    _objc_release(unaff_x24);
    _objc_release(puStack_588);
LAB_1084e49f0:
    _objc_release(unaff_x22);
LAB_1084e49f8:
    _objc_release(param_3);
    _objc_release(ppppuVar11);
    _objc_release(ppppuVar13);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_408) break;
    ___stack_chk_fail();
LAB_1084e4a4c:
    puVar14 = (undefined *)0x0;
  }
  return;
}



/* Entry: 1084e4338; end: 1084e4b93;  */

void FUN_1084e4338(undefined ***param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined ***unaff_x22;
  undefined ***unaff_x23;
  undefined **unaff_x24;
  undefined ***unaff_x25;
  undefined *puVar11;
  undefined **unaff_x28;
  undefined *puStack_1f8;
  undefined *puStack_1d0;
  undefined4 uStack_1c4;
  undefined ***pppuStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined **ppuStack_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_190;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long *plStack_148;
  long *plStack_140;
  undefined1 uStack_131;
  undefined **ppuStack_130;
  undefined4 uStack_128;
  undefined2 uStack_118;
  undefined2 uStack_116;
  undefined1 *puStack_f8;
  undefined ***pppuStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined **ppuStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_2;
  func_0x00010c08fa60();
  if (lVar2 == 0) goto LAB_1084e49f8;
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 == 0) goto LAB_1084e49f8;
  _objc_opt_class(PTR_PTR_1126d67a0);
  if (param_1 == (undefined ***)0x0) {
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    puStack_c0 = (undefined *)0x0;
  }
  else {
    func_0x00010bfa6be0(&puStack_c0,param_1);
  }
  unaff_x23 = &ppuStack_1a8;
  puVar3 = &uStack_131;
  FUN_10850e510();
  uStack_1a0 = 0xf;
  uStack_190 = 0x100;
  _objc_retain(param_2);
  unaff_x28 = (undefined **)&UNK_110862750;
  ppuStack_1a8 = &PTR_DAT_110862760;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = (undefined **)0x0;
  plStack_148 = (long *)0x0;
  uStack_150 = 0;
  plStack_140 = (long *)0x0;
  uStack_116 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_128 = 10;
  uStack_118 = 0x100;
  unaff_x24 = &PTR_SUB_110862700;
  ppuStack_130 = &PTR_SUB_110862700;
  pppuStack_f0 = &ppuStack_1a8;
  uStack_e0 = 0;
  ppuStack_e8 = (undefined **)0x0;
  plStack_d0 = (long *)0x0;
  uStack_d8 = 0;
  plStack_c8 = (long *)0x0;
  pppuStack_1c0 = (undefined ***)0x0;
  puStack_1b8 = (undefined ***)0x0;
  uStack_1b0 = 0;
  uStack_1c4 = 0;
  unaff_x22 = (undefined ***)&puStack_c0;
  lStack_178 = param_2;
  puStack_f8 = puVar3;
  func_0x000107c310cc(unaff_x22,&ppuStack_130,&pppuStack_1c0,&uStack_1c4);
  _objc_retainAutoreleasedReturnValue();
  if (pppuStack_1c0 != (undefined ***)0x0) {
    puStack_1b8 = pppuStack_1c0;
    __ZdlPv();
  }
  plVar1 = plStack_c8;
  unaff_x25 = &ppuStack_e8;
  ppuStack_130 = &PTR_SUB_110862700;
  plStack_c8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_d0;
  plStack_d0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  pppuStack_1c0 = unaff_x25;
  func_0x000107c27dd4(&pppuStack_1c0);
  plVar1 = plStack_140;
  ppuStack_1a8 = &PTR_DAT_110862760;
  plStack_140 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_148;
  plStack_148 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  pppuStack_1c0 = (undefined ***)&uStack_160;
  func_0x000107c27dd4(&pppuStack_1c0);
  _objc_release(lStack_178);
  func_0x000107c27da8(&uStack_98);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  pppuVar4 = unaff_x22;
  func_0x00010bf529e0();
  if (pppuVar4 == (undefined ***)0x0) goto LAB_1084e49f0;
  puStack_1f8 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  unaff_x24 = (undefined **)unaff_x22;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  pppuVar4 = (undefined ***)unaff_x24;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puStack_1f8);
  unaff_x25 = pppuVar4;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(pppuVar4);
  pppuVar4 = unaff_x25;
  func_0x00010bf529e0();
  pppuVar5 = (undefined ***)unaff_x24;
  func_0x00010c25b340();
  _objc_retainAutoreleasedReturnValue();
  pppuVar6 = pppuVar5;
  func_0x00010bf529e0();
  _objc_release(pppuVar5);
  puStack_1d0 = puStack_1f8;
  if (pppuVar4 == pppuVar6) goto LAB_1084e49d0;
  pppuVar4 = unaff_x25;
  func_0x00010bf529e0();
  puVar11 = PTR_PTR_1126d6798;
  if (pppuVar4 == (undefined ***)0x0) {
    FUN_10850ef60(PTR_PTR_1126d6798,unaff_x24);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_10850eb48(PTR_PTR_1126d6798,unaff_x24);
    _objc_retainAutoreleasedReturnValue();
    if (puVar11 == (undefined *)0x0) goto LAB_1084e4a4c;
    _objc_setProperty_nonatomic_copy();
  }
  while( true ) {
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    lStack_88 = param_2;
    ppuStack_80 = (undefined **)unaff_x25;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    FUN_1084ee948(param_1,2,puVar7,0,PTR____NSArray0__struct_11034ab48,
                  PTR____NSDictionary0__struct_11034ab58,PTR____NSDictionary0__struct_11034ab58,0);
    _objc_release(puVar7);
    _objc_opt_class(PTR_PTR_1126b47a0);
    if (param_1 == (undefined ***)0x0) {
      uStack_90 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_b8 = 0;
      puStack_c0 = (undefined *)0x0;
    }
    else {
      func_0x00010bfa6be0(&puStack_c0,param_1);
    }
    puVar3 = &uStack_131;
    FUN_108507e48();
    uStack_1a0 = 0xf;
    uStack_190 = 0x100;
    _objc_retain(param_2);
    ppuStack_1a8 = unaff_x28 + 2;
    unaff_x23[8] = (undefined **)0x0;
    unaff_x23[7] = (undefined **)0x0;
    unaff_x23[10] = (undefined **)0x0;
    unaff_x23[9] = (undefined **)0x0;
    unaff_x23[0xc] = (undefined **)0x0;
    unaff_x23[0xb] = (undefined **)0x0;
    plStack_140 = (long *)0x0;
    uStack_116 = *(undefined2 *)(puVar3 + 0x1a);
    uStack_128 = 10;
    uStack_118 = 0x100;
    ppuStack_130 = &PTR_SUB_110862700;
    pppuStack_f0 = &ppuStack_1a8;
    unaff_x23[0x19] = (undefined **)0x0;
    unaff_x23[0x18] = (undefined **)0x0;
    unaff_x23[0x1b] = (undefined **)0x0;
    unaff_x23[0x1a] = (undefined **)0x0;
    plStack_c8 = (long *)0x0;
    pppuStack_1c0 = (undefined ***)0x0;
    puStack_1b8 = (undefined ***)0x0;
    uStack_1b0 = 0;
    uStack_1c4 = 0;
    ppuVar8 = &puStack_c0;
    lStack_178 = param_2;
    puStack_f8 = puVar3;
    func_0x000107c310cc(ppuVar8,&ppuStack_130,&pppuStack_1c0,&uStack_1c4);
    _objc_retainAutoreleasedReturnValue();
    if (pppuStack_1c0 != (undefined ***)0x0) {
      puStack_1b8 = pppuStack_1c0;
      __ZdlPv();
    }
    plVar1 = plStack_c8;
    unaff_x23 = &ppuStack_e8;
    ppuStack_130 = &PTR_SUB_110862700;
    plStack_c8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_d0;
    plStack_d0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    pppuStack_1c0 = unaff_x23;
    func_0x000107c27dd4(&pppuStack_1c0);
    plVar1 = plStack_140;
    ppuStack_1a8 = unaff_x28 + 2;
    plStack_140 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_148;
    plStack_148 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    pppuStack_1c0 = (undefined ***)&uStack_160;
    func_0x000107c27dd4(&pppuStack_1c0);
    _objc_release(lStack_178);
    func_0x000107c27da8(&uStack_98);
    _objc_release(uStack_a8);
    _objc_release(uStack_b0);
    unaff_x28 = ppuVar8;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if ((unaff_x28 != (undefined **)0x0) &&
       (ppuVar9 = unaff_x28, func_0x00010c27dd80(), ppuVar9 == (undefined **)0x1)) {
      ppuVar9 = unaff_x28;
      func_0x00010bf5a820();
      _objc_retainAutoreleasedReturnValue();
      ppuVar10 = ppuVar9;
      func_0x00010bf5bbc0();
      _objc_retainAutoreleasedReturnValue();
      unaff_x23 = (undefined ***)(ulong)(ppuVar10 == (undefined **)0x0);
      _objc_release();
      _objc_release(ppuVar9);
      puVar7 = PTR__OBJC_CLASS___NSSet_1126ae870;
      if (ppuVar10 != (undefined **)0x0) {
        ppuVar9 = unaff_x28;
        func_0x00010bf5a820();
        _objc_retainAutoreleasedReturnValue();
        ppuVar10 = ppuVar9;
        func_0x00010bf5bbc0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2268e0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = param_1;
        FUN_1084ea0fc(param_1,puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(ppuVar10);
        _objc_release(ppuVar9);
        FUN_1084ee948(param_1,1,unaff_x23,0,PTR____NSArray0__struct_11034ab48,
                      PTR____NSDictionary0__struct_11034ab58,PTR____NSDictionary0__struct_11034ab58,
                      0);
        _objc_release(unaff_x23);
      }
    }
    _objc_release(unaff_x28);
    _objc_release(ppuVar8);
    _objc_release(puVar11);
LAB_1084e49d0:
    _objc_release(unaff_x25);
    _objc_release(puStack_1d0);
    _objc_release(unaff_x24);
    _objc_release(puStack_1f8);
LAB_1084e49f0:
    _objc_release(unaff_x22);
LAB_1084e49f8:
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_release(param_1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) break;
    ___stack_chk_fail();
LAB_1084e4a4c:
    puVar11 = (undefined *)0x0;
  }
  return;
}



/* Entry: 1084e4b94; end: 1084e4c5b;  */

uint FUN_1084e4b94(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar3 = 1;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = param_2;
    func_0x00010bf3cf60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar4);
    uVar3 = (uint)uVar4 ^ 1;
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 1084e4c5c; end: 1084e5737;  */

ulong FUN_1084e4c5c(ulong param_1,undefined ***param_2)

{
  long lVar1;
  long *plVar2;
  undefined ***pppuVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined ***pppuVar16;
  undefined ***pppuVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  undefined *puVar24;
  undefined ***pppuVar25;
  undefined ***unaff_x21;
  undefined ***pppuVar26;
  undefined8 uVar27;
  ulong uVar28;
  ulong uVar29;
  undefined ***pppuVar30;
  ulong uVar31;
  undefined ***pppuStack_390;
  undefined4 uStack_2d4;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  undefined **ppuStack_2b8;
  undefined **ppuStack_2b0;
  undefined8 uStack_2a8;
  undefined4 uStack_2a0;
  long lStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long *plStack_258;
  long *plStack_250;
  undefined1 uStack_241;
  undefined **ppuStack_240;
  undefined8 uStack_238;
  code *pcStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 *puStack_208;
  undefined ***pppuStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  long *plStack_1e0;
  long *plStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined ***pppuStack_190;
  long lStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar3 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  pppuVar26 = param_2;
  func_0x00010c08fa60();
  if (pppuVar26 != (undefined ***)0x0) {
    _objc_opt_class(PTR_PTR_1126d6788);
    if (param_1 == 0) {
      uStack_210 = 0;
      uStack_228 = (undefined *)0x0;
      pcStack_230 = (code *)0x0;
      uStack_218 = 0;
      puStack_220 = (undefined *)0x0;
      uStack_238 = 0;
      ppuStack_240 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_240,param_1);
    }
    ppuStack_2b8 = (undefined **)0x0;
    ppuStack_2b0 = (undefined **)0x0;
    uStack_2a8 = 0;
    uStack_1d0 = (ulong)uStack_1d0._4_4_ << 0x20;
    pppuStack_390 = &ppuStack_240;
    func_0x00010054c81c(pppuStack_390,&ppuStack_2b8,&uStack_1d0);
    _objc_retainAutoreleasedReturnValue();
    if (ppuStack_2b8 != (undefined **)0x0) {
      ppuStack_2b0 = ppuStack_2b8;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_218);
    _objc_release(uStack_228);
    _objc_release(pcStack_230);
    _objc_retain(pppuStack_390);
    pppuVar3 = pppuStack_390;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    if (pppuVar3 != (undefined ***)0x0) {
      do {
        pppuVar26 = (undefined ***)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(pppuStack_390);
          }
          lVar23 = *(long *)((long)pppuVar26 * 8);
          lVar22 = lVar23;
          func_0x00010c25b340();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar22;
          FUN_1084e5738();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar22);
          if (lVar4 != 0) {
            lVar22 = lVar4;
            func_0x00010bf3cf60();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar22 != 0) {
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              lVar22 = lVar4;
              func_0x00010bf3cf60();
              _objc_retainAutoreleasedReturnValue();
              puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
              lStack_108 = lVar22;
              func_0x00010bf0a140();
              _objc_retainAutoreleasedReturnValue();
              _objc_retain(param_1);
              _objc_retain(lVar23);
              _objc_retain(puVar5);
              lVar6 = lVar23;
              func_0x00010c08fa60();
              if ((lVar6 != 0) &&
                 (puVar7 = puVar5, func_0x00010bf529e0(), puVar7 != (undefined *)0x0)) {
                _objc_opt_class(PTR_PTR_1126d6788);
                if (param_1 == 0) {
                  uStack_1a0 = 0;
                  uStack_1b8 = 0;
                  uStack_1c0 = 0;
                  uStack_1a8 = 0;
                  uStack_1b0 = 0;
                  uStack_1c8 = 0;
                  uStack_1d0 = 0;
                }
                else {
                  func_0x00010bfa6be0(&uStack_1d0,param_1);
                }
                puVar8 = &uStack_241;
                FUN_108517ba4();
                ppuStack_2b0 = (undefined **)CONCAT44(ppuStack_2b0._4_4_,0xf);
                uStack_2a0 = 0x100;
                _objc_retain(lVar23);
                uStack_2c0 = 0;
                ppuStack_2b8 = &PTR_DAT_110862760;
                pppuStack_200 = &ppuStack_2b8;
                uStack_278 = 0;
                uStack_280 = 0;
                uStack_268 = 0;
                uStack_270 = 0;
                plStack_258 = (long *)0x0;
                uStack_260 = 0;
                plStack_250 = (long *)0x0;
                uStack_238 = CONCAT44(uStack_238._4_4_,10);
                uStack_228._0_4_ = CONCAT22(*(undefined2 *)(puVar8 + 0x1a),0x100);
                ppuStack_240 = &PTR_SUB_110862700;
                uStack_1f0 = 0;
                uStack_1f8 = 0;
                plStack_1e0 = (long *)0x0;
                uStack_1e8 = 0;
                plStack_1d8 = (long *)0x0;
                puStack_2d0 = (undefined8 *)0x0;
                puStack_2c8 = (undefined8 *)0x0;
                uStack_2d4 = 0;
                puVar9 = &uStack_1d0;
                lStack_288 = lVar23;
                puStack_208 = puVar8;
                func_0x000107c310cc(puVar9,&ppuStack_240,&puStack_2d0,&uStack_2d4);
                _objc_retainAutoreleasedReturnValue();
                if (puStack_2d0 != (undefined8 *)0x0) {
                  puStack_2c8 = puStack_2d0;
                  __ZdlPv();
                }
                plVar2 = plStack_1d8;
                ppuStack_240 = &PTR_SUB_110862700;
                plStack_1d8 = (long *)0x0;
                if (plVar2 != (long *)0x0) {
                  (**(code **)(*plVar2 + 8))();
                }
                plVar2 = plStack_1e0;
                plStack_1e0 = (long *)0x0;
                if (plVar2 != (long *)0x0) {
                  (**(code **)(*plVar2 + 8))();
                }
                puStack_2d0 = &uStack_1f8;
                func_0x000107c27dd4(&puStack_2d0);
                plVar2 = plStack_250;
                ppuStack_2b8 = &PTR_DAT_110862760;
                plStack_250 = (long *)0x0;
                if (plVar2 != (long *)0x0) {
                  (**(code **)(*plVar2 + 8))();
                }
                plVar2 = plStack_258;
                plStack_258 = (long *)0x0;
                if (plVar2 != (long *)0x0) {
                  (**(code **)(*plVar2 + 8))();
                }
                puStack_2d0 = &uStack_270;
                func_0x000107c27dd4(&puStack_2d0);
                _objc_release(lStack_288);
                func_0x000107c27da8(&uStack_1a8);
                _objc_release(uStack_1b8);
                _objc_release(uStack_1c0);
                puVar10 = puVar9;
                func_0x00010bf529e0();
                if (puVar10 != (undefined8 *)0x0) {
                  puVar7 = PTR__OBJC_CLASS___NSSet_1126ae870;
                  func_0x00010c225c20();
                  _objc_retainAutoreleasedReturnValue();
                  puVar10 = puVar9;
                  func_0x00010c0dfd40();
                  _objc_retainAutoreleasedReturnValue();
                  puVar11 = puVar10;
                  func_0x00010c25b340();
                  _objc_retainAutoreleasedReturnValue();
                  ppuStack_240 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
                  uStack_238 = 0xc2000000;
                  pcStack_230 = FUN_1084e5900;
                  uStack_228 = &UNK_110a4fe10;
                  _objc_retain(puVar7);
                  puVar12 = puVar11;
                  puStack_220 = puVar7;
                  func_0x00010bfaea20();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(puVar11);
                  puVar11 = puVar12;
                  func_0x00010bf529e0();
                  puVar13 = puVar10;
                  func_0x00010c25b340();
                  _objc_retainAutoreleasedReturnValue();
                  puVar14 = puVar13;
                  func_0x00010bf529e0();
                  _objc_release(puVar13);
                  if (puVar11 != puVar14) {
                    puVar11 = puVar12;
                    func_0x00010bf529e0();
                    puVar24 = PTR_PTR_1126d6780;
                    if (puVar11 == (undefined8 *)0x0) {
                      FUN_1085185f4(PTR_PTR_1126d6780,puVar10);
                      _objc_retainAutoreleasedReturnValue();
                    }
                    else {
                      FUN_1085181dc(PTR_PTR_1126d6780,puVar10);
                      _objc_retainAutoreleasedReturnValue();
                      if (puVar24 == (undefined *)0x0) {
                        puVar24 = (undefined *)0x0;
                      }
                      else {
                        _objc_setProperty_nonatomic_copy();
                      }
                    }
                    func_0x00010c25ed40(param_1);
                    _objc_unsafeClaimAutoreleasedReturnValue();
                    puVar11 = puVar10;
                    func_0x00010c2923e0();
                    _objc_retainAutoreleasedReturnValue();
                    _objc_release();
                    puVar15 = PTR__OBJC_CLASS___NSSet_1126ae870;
                    if (puVar11 != (undefined8 *)0x0) {
                      puVar11 = puVar10;
                      func_0x00010c2923e0();
                      _objc_retainAutoreleasedReturnValue();
                      func_0x00010c2268e0();
                      _objc_retainAutoreleasedReturnValue();
                      uVar28 = param_1;
                      FUN_1084ea0fc(param_1,puVar15);
                      _objc_retainAutoreleasedReturnValue();
                      _objc_release(puVar15);
                      _objc_release(puVar11);
                      FUN_1084ee948(param_1,1,uVar28,0,PTR____NSArray0__struct_11034ab48,
                                    PTR____NSDictionary0__struct_11034ab58,
                                    PTR____NSDictionary0__struct_11034ab58,0);
                      _objc_release(uVar28);
                    }
                    _objc_release(puVar24);
                  }
                  _objc_release(puVar12);
                  _objc_release(puStack_220);
                  _objc_release(puVar10);
                  _objc_release(puVar7);
                }
                _objc_release(puVar9);
              }
              _objc_release(puVar5);
              _objc_release(lVar23);
              _objc_release(param_1);
              _objc_release(puVar5);
              _objc_release(lVar22);
              _objc_release(lVar23);
            }
          }
          _objc_release(lVar4);
          pppuVar26 = (undefined ***)((long)pppuVar26 + 1);
        } while (pppuVar3 != pppuVar26);
        pppuVar3 = pppuStack_390;
        func_0x00010bf52a60();
      } while (pppuVar3 != (undefined ***)0x0);
    }
    _objc_release(pppuStack_390);
    _objc_opt_class(PTR_PTR_1126d67a0);
    if (param_1 == 0) {
      uStack_210 = 0;
      uStack_228 = (undefined *)0x0;
      pcStack_230 = (code *)0x0;
      uStack_218 = 0;
      puStack_220 = (undefined *)0x0;
      uStack_238 = 0;
      ppuStack_240 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_240,param_1);
    }
    ppuStack_2b8 = (undefined **)0x0;
    ppuStack_2b0 = (undefined **)0x0;
    uStack_2a8 = 0;
    uStack_1d0 = uStack_1d0 & 0xffffffff00000000;
    unaff_x21 = &ppuStack_240;
    pppuVar3 = &ppuStack_2b8;
    func_0x00010054c81c(unaff_x21,pppuVar3,&uStack_1d0);
    _objc_retainAutoreleasedReturnValue();
    if (ppuStack_2b8 != (undefined **)0x0) {
      ppuStack_2b0 = ppuStack_2b8;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_218);
    _objc_release(uStack_228);
    _objc_release(pcStack_230);
    _objc_retain(unaff_x21);
    pppuVar26 = unaff_x21;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (pppuVar26 != (undefined ***)0x0) {
      pppuVar30 = (undefined ***)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(unaff_x21);
        }
        pppuVar25 = *(undefined ****)((long)pppuVar30 * 8);
        pppuVar16 = pppuVar25;
        func_0x00010c25b340();
        _objc_retainAutoreleasedReturnValue();
        pppuVar17 = pppuVar16;
        pppuVar3 = param_2;
        FUN_1084e5738();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(pppuVar16);
        if (pppuVar17 != (undefined ***)0x0) {
          pppuVar16 = pppuVar17;
          func_0x00010bf3cf60();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (pppuVar16 != (undefined ***)0x0) {
            func_0x00010c11ac00();
            _objc_retainAutoreleasedReturnValue();
            pppuVar16 = pppuVar17;
            func_0x00010bf3cf60();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
            pppuStack_190 = pppuVar16;
            func_0x00010bf0a140();
            _objc_retainAutoreleasedReturnValue();
            pppuVar3 = pppuVar25;
            FUN_1084e4338(param_1,pppuVar25,puVar5);
            _objc_release(puVar5);
            _objc_release(pppuVar16);
            _objc_release(pppuVar25);
          }
        }
        _objc_release(pppuVar17);
        pppuVar30 = (undefined ***)((long)pppuVar30 + 1);
      } while (pppuVar26 != pppuVar30);
      pppuVar26 = unaff_x21;
      func_0x00010bf52a60();
    }
    _objc_release(unaff_x21);
    _objc_release(unaff_x21);
    _objc_release(pppuStack_390);
  }
  _objc_release(param_2);
  uVar28 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return uVar28;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x21);
  _objc_release(unaff_x21);
  _objc_release(pppuStack_390);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  __Unwind_Resume();
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar26 = pppuVar3;
  _objc_retain();
  _objc_retain(pppuVar3);
  _objc_retain(uVar28);
  uVar18 = uVar28;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (uVar18 == 0) {
      uVar29 = 0;
LAB_1084e5854:
      _objc_release(uVar28);
      _objc_release(pppuVar3);
      uVar18 = uVar28;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar29);
        return uVar29;
      }
      ___stack_chk_fail();
      _objc_release(uVar28);
      _objc_release(pppuVar3);
      _objc_release(uVar28);
      __Unwind_Resume();
      _objc_retain(pppuVar26);
      pppuVar3 = pppuVar26;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      if (pppuVar3 == (undefined ***)0x0) {
        uVar28 = 1;
      }
      else {
        uVar27 = *(undefined8 *)(uVar18 + 0x20);
        pppuVar30 = pppuVar26;
        func_0x00010bf3cf60(pppuVar26);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900(uVar27);
        uVar28 = (ulong)((uint)uVar27 ^ 1);
        _objc_release(pppuVar30);
      }
      _objc_release(pppuVar3);
      _objc_release(pppuVar26);
      return uVar28;
    }
    uVar31 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(uVar28);
      }
      uVar29 = *(ulong *)(uVar31 * 8);
      uVar19 = uVar29;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar19;
      func_0x000108ea5f00();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar20;
      func_0x00010c0720c0();
      _objc_release(uVar20);
      _objc_release(uVar19);
      if ((uVar21 & 1) != 0) {
        _objc_retain(uVar29);
        goto LAB_1084e5854;
      }
      uVar31 = uVar31 + 1;
    } while (uVar18 != uVar31);
    uVar18 = uVar28;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1084e5738; end: 1084e58ff;  */

ulong FUN_1084e5738(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  do {
    if (lVar1 == 0) {
      uVar9 = 0;
LAB_1084e5854:
      _objc_release(param_1);
      _objc_release(param_2);
      lVar1 = param_1;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
        return uVar9;
      }
      ___stack_chk_fail();
      _objc_release(param_1);
      _objc_release(param_2);
      _objc_release(param_1);
      __Unwind_Resume();
      _objc_retain(lVar5);
      lVar4 = lVar5;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        uVar8 = 1;
      }
      else {
        uVar7 = *(undefined8 *)(lVar1 + 0x20);
        lVar1 = lVar5;
        func_0x00010bf3cf60(lVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900(uVar7);
        uVar8 = (ulong)((uint)uVar7 ^ 1);
        _objc_release(lVar1);
      }
      _objc_release(lVar4);
      _objc_release(lVar5);
      return uVar8;
    }
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar4) {
        _objc_enumerationMutation(param_1);
      }
      uVar9 = *(ulong *)(lVar10 * 8);
      uVar8 = uVar9;
      func_0x00010bf3cf60();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar8;
      func_0x000108ea5f00();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      _objc_release(uVar8);
      if ((uVar3 & 1) != 0) {
        _objc_retain(uVar9);
        goto LAB_1084e5854;
      }
      lVar10 = lVar10 + 1;
    } while (lVar1 != lVar10);
    lVar1 = param_1;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 1084e5900; end: 1084e59c7;  */

uint FUN_1084e5900(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf3cf60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    uVar3 = 1;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = param_2;
    func_0x00010bf3cf60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(uVar4);
    uVar3 = (uint)uVar4 ^ 1;
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 1084e59c8; end: 1084e5d7f;  */

void FUN_1084e59c8(long param_1,long param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined4 uStack_1b4;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined **ppuStack_198;
  undefined4 uStack_190;
  undefined4 uStack_180;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long *plStack_138;
  long *plStack_130;
  undefined1 uStack_121;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  undefined2 uStack_106;
  undefined1 *puStack_e8;
  undefined ***pppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = param_2;
  func_0x00010c08fa60();
  if ((lVar2 == 0) || (lVar2 = param_3, func_0x00010c08fa60(), lVar2 == 0)) goto LAB_1084e5cb0;
  _objc_opt_class(PTR_PTR_1126d9e58);
  if (param_1 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,param_1);
  }
  puVar3 = &uStack_121;
  FUN_1085250c4();
  uStack_190 = 0xf;
  uStack_180 = 0x100;
  _objc_retain(param_2);
  ppuStack_198 = &PTR_DAT_110862760;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  plStack_138 = (long *)0x0;
  uStack_140 = 0;
  plStack_130 = (long *)0x0;
  uStack_106 = *(undefined2 *)(puVar3 + 0x1a);
  uStack_118 = 10;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_SUB_110862700;
  uStack_d0 = 0;
  uStack_d8 = 0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  plStack_b8 = (long *)0x0;
  puStack_1b0 = (undefined8 *)0x0;
  puStack_1a8 = (undefined8 *)0x0;
  uStack_1a0 = 0;
  uStack_1b4 = 0;
  puVar4 = &uStack_b0;
  lStack_168 = param_2;
  puStack_e8 = puVar3;
  pppuStack_e0 = &ppuStack_198;
  func_0x000107c310cc(puVar4,&ppuStack_120,&puStack_1b0,&uStack_1b4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  if (puStack_1b0 != (undefined8 *)0x0) {
    puStack_1a8 = puStack_1b0;
    __ZdlPv();
  }
  plVar1 = plStack_b8;
  ppuStack_120 = &PTR_SUB_110862700;
  plStack_b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1b0 = &uStack_d8;
  func_0x000107c27dd4(&puStack_1b0);
  plVar1 = plStack_130;
  ppuStack_198 = &PTR_DAT_110862760;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_138;
  plStack_138 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1b0 = &uStack_150;
  func_0x000107c27dd4(&puStack_1b0);
  _objc_release(lStack_168);
  func_0x000107c27da8(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  if (puVar5 == (undefined8 *)0x0) {
    puVar7 = PTR_PTR_1126d9e60;
    FUN_10852539c(PTR_PTR_1126d9e60,0);
    _objc_retainAutoreleasedReturnValue();
    if (puVar7 == (undefined *)0x0) goto LAB_1084e5ce8;
    _objc_setProperty_nonatomic_copy(puVar7);
LAB_1084e5c78:
    _objc_setProperty_nonatomic_copy(puVar7);
LAB_1084e5c8c:
    func_0x00010c25ed40(param_1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar7);
  }
  else {
    puVar4 = puVar5;
    func_0x00010bf85d80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c0720c0();
    _objc_release(puVar4);
    if (((ulong)puVar6 & 1) == 0) {
      puVar7 = PTR_PTR_1126d9e60;
      FUN_108525564(PTR_PTR_1126d9e60,puVar5);
      _objc_retainAutoreleasedReturnValue();
      if (puVar7 != (undefined *)0x0) goto LAB_1084e5c78;
LAB_1084e5ce8:
      puVar7 = (undefined *)0x0;
      goto LAB_1084e5c8c;
    }
  }
  _objc_release(puVar5);
LAB_1084e5cb0:
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
  return;
}



/* Entry: 1084e5d80; end: 1084e611f;  */

void FUN_1084e5d80(undefined8 *param_1,undefined ***param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined ***pppuVar8;
  long lVar9;
  long lVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  undefined ***pppuVar16;
  undefined ***unaff_x21;
  undefined ***pppuVar17;
  undefined **ppuVar18;
  undefined8 *puVar19;
  undefined ***unaff_x24;
  long lVar20;
  undefined **unaff_x25;
  undefined ***unaff_x26;
  long lVar21;
  undefined ***unaff_x27;
  undefined ***unaff_x28;
  undefined4 uStack_e9c;
  long lStack_e98;
  long lStack_e90;
  undefined8 uStack_e88;
  undefined *puStack_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  undefined8 uStack_e60;
  undefined8 uStack_e58;
  undefined8 uStack_e50;
  undefined **ppuStack_e40;
  undefined ***pppuStack_e38;
  undefined ***pppuStack_e30;
  undefined ***pppuStack_e28;
  undefined8 ***pppuStack_e20;
  code *pcStack_e18;
  undefined8 uStack_e10;
  long lStack_e08;
  long *plStack_e00;
  undefined8 uStack_df8;
  undefined8 uStack_df0;
  undefined8 uStack_de8;
  undefined8 uStack_de0;
  undefined8 uStack_dd8;
  undefined4 uStack_dcc;
  undefined4 *puStack_dc8;
  undefined4 *puStack_dc0;
  undefined8 uStack_db8;
  undefined4 auStack_db0 [7];
  undefined1 uStack_d91;
  undefined **ppuStack_d90;
  undefined8 uStack_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined4 auStack_d48 [6];
  long *plStack_d30;
  long *plStack_d28;
  undefined **ppuStack_d20;
  undefined **ppuStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 uStack_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  long lStack_c60;
  undefined ***pppuStack_c50;
  undefined ***pppuStack_c48;
  undefined ***pppuStack_c40;
  undefined ***pppuStack_c38;
  undefined8 uStack_c30;
  undefined **ppuStack_c28;
  undefined ***pppuStack_c20;
  undefined ***pppuStack_c18;
  undefined ***pppuStack_c10;
  undefined ***pppuStack_c08;
  undefined8 ***pppuStack_c00;
  code *pcStack_bf8;
  undefined ***pppuStack_bf0;
  undefined ***pppuStack_be8;
  undefined8 uStack_be0;
  long lStack_bd8;
  undefined8 *puStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined4 uStack_b9c;
  undefined4 *puStack_b98;
  undefined4 *puStack_b90;
  undefined8 uStack_b88;
  undefined4 auStack_b80 [7];
  undefined1 uStack_b61;
  undefined **ppuStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined4 auStack_b18 [6];
  long *plStack_b00;
  long *plStack_af8;
  undefined **ppuStack_af0;
  undefined **ppuStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  long lStack_a30;
  undefined ***pppuStack_a20;
  undefined ***pppuStack_a18;
  undefined ***pppuStack_a10;
  undefined ***pppuStack_a08;
  undefined8 uStack_a00;
  undefined **ppuStack_9f8;
  undefined ***pppuStack_9f0;
  undefined ***pppuStack_9e8;
  undefined ***pppuStack_9e0;
  undefined **ppuStack_9d8;
  undefined8 ***pppuStack_9d0;
  code *pcStack_9c8;
  undefined ***pppuStack_9b8;
  undefined ***pppuStack_9b0;
  undefined ***pppuStack_9a8;
  undefined8 uStack_9a0;
  long lStack_998;
  undefined8 *puStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined4 uStack_95c;
  undefined4 *puStack_958;
  undefined4 *puStack_950;
  undefined8 uStack_948;
  undefined4 auStack_940 [7];
  undefined1 uStack_921;
  undefined **ppuStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined4 auStack_8d8 [6];
  long *plStack_8c0;
  long *plStack_8b8;
  undefined **ppuStack_8b0;
  undefined **ppuStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined1 auStack_870 [128];
  long lStack_7f0;
  undefined ***pppuStack_7e0;
  undefined ***pppuStack_7d8;
  undefined ***pppuStack_7d0;
  undefined ***pppuStack_7c8;
  undefined ***pppuStack_7c0;
  undefined ***pppuStack_7b8;
  undefined **ppuStack_7b0;
  undefined ***pppuStack_7a8;
  undefined ***pppuStack_7a0;
  undefined ***pppuStack_798;
  undefined8 ***pppuStack_790;
  code *pcStack_788;
  undefined8 uStack_780;
  long lStack_778;
  undefined8 *puStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined4 uStack_73c;
  undefined4 *puStack_738;
  undefined4 *puStack_730;
  undefined8 uStack_728;
  undefined4 auStack_720 [7];
  undefined1 uStack_701;
  undefined **ppuStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined4 auStack_6b8 [6];
  long *plStack_6a0;
  long *plStack_698;
  undefined **ppuStack_690;
  undefined **ppuStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  long lStack_5d0;
  undefined ***pppuStack_5c0;
  undefined ***pppuStack_5b8;
  undefined ***pppuStack_5b0;
  undefined ***pppuStack_5a8;
  undefined ***pppuStack_5a0;
  undefined8 *puStack_598;
  undefined ***pppuStack_590;
  undefined ***pppuStack_588;
  undefined ***pppuStack_580;
  undefined ***pppuStack_578;
  undefined1 ***pppuStack_570;
  code *pcStack_568;
  undefined8 uStack_560;
  long lStack_558;
  undefined8 *puStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined4 uStack_51c;
  undefined1 *puStack_518;
  undefined1 *puStack_510;
  undefined8 uStack_508;
  undefined1 auStack_500 [31];
  undefined1 uStack_4e1;
  undefined **appuStack_4e0 [9];
  undefined1 auStack_498 [24];
  long *plStack_480;
  long *plStack_478;
  undefined **ppuStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  long lStack_3b8;
  undefined ***pppuStack_3b0;
  undefined ***pppuStack_3a8;
  undefined ***pppuStack_3a0;
  undefined ***pppuStack_398;
  undefined ***pppuStack_390;
  undefined8 *puStack_388;
  undefined **ppuStack_380;
  undefined8 uStack_378;
  undefined8 *puStack_370;
  undefined ***pppuStack_368;
  undefined1 **ppuStack_360;
  code *pcStack_358;
  undefined8 uStack_350;
  long lStack_348;
  undefined8 *puStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined **appuStack_310 [17];
  long lStack_288;
  undefined ***pppuStack_280;
  undefined ***pppuStack_278;
  undefined ***pppuStack_270;
  undefined8 *puStack_268;
  undefined **ppuStack_260;
  undefined ***pppuStack_258;
  undefined ***pppuStack_250;
  undefined8 *puStack_248;
  undefined1 *puStack_240;
  code *pcStack_238;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1dc;
  undefined1 *puStack_1d8;
  undefined1 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [31];
  undefined1 uStack_1a1;
  undefined **appuStack_1a0 [9];
  undefined1 auStack_158 [24];
  long *plStack_140;
  long *plStack_138;
  undefined **ppuStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar16 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  pppuVar17 = param_2;
  puStack_228 = param_1;
  func_0x00010bf529e0();
  ppuVar18 = (undefined **)PTR____NSDictionary0__struct_11034ab58;
  if (pppuVar17 != (undefined ***)0x0) {
    _objc_opt_class(PTR_PTR_1126d9e58);
    if (param_1 == (undefined8 *)0x0) {
      uStack_100 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_128 = 0;
      ppuStack_130 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_130,param_1);
    }
    puVar2 = &uStack_1a1;
    FUN_1085250c4(puVar2);
    FUN_1084e6120(auStack_1c0,param_2);
    func_0x000107c281a0(appuStack_1a0,0xc,puVar2,auStack_1c0);
    puStack_1d8 = (undefined1 *)0x0;
    puStack_1d0 = (undefined1 *)0x0;
    uStack_1c8 = 0;
    uStack_1dc = 0;
    unaff_x21 = &ppuStack_130;
    pppuVar16 = appuStack_1a0;
    func_0x000107c310cc(unaff_x21,pppuVar16,&puStack_1d8,&uStack_1dc);
    _objc_retainAutoreleasedReturnValue();
    if (puStack_1d8 != (undefined1 *)0x0) {
      puStack_1d0 = puStack_1d8;
      __ZdlPv();
    }
    plVar1 = plStack_138;
    appuStack_1a0[0] = &PTR_SUB_110862700;
    plStack_138 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_140;
    plStack_140 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_1d8 = auStack_158;
    func_0x000107c27dd4(&puStack_1d8);
    puStack_1d8 = auStack_1c0;
    func_0x000107c27dd4(&puStack_1d8);
    func_0x000107c27da8(&uStack_108);
    _objc_release(uStack_118);
    _objc_release(uStack_120);
    ppuVar18 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uStack_1f8 = 0;
    uStack_200 = 0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    lStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    puStack_210 = (undefined8 *)0x0;
    _objc_retain(unaff_x21);
    pppuVar17 = unaff_x21;
    func_0x00010bf52a60();
    if (pppuVar17 != (undefined ***)0x0) {
      unaff_x27 = (undefined ***)*puStack_210;
      do {
        unaff_x28 = (undefined ***)0x0;
        do {
          if ((undefined ***)*puStack_210 != unaff_x27) {
            _objc_enumerationMutation(unaff_x21);
          }
          unaff_x25 = *(undefined ***)(lStack_218 + (long)unaff_x28 * 8);
          unaff_x24 = (undefined ***)unaff_x25;
          func_0x00010c11ac00();
          _objc_retainAutoreleasedReturnValue();
          pppuVar12 = unaff_x24;
          func_0x00010c08fa60();
          if (pppuVar12 == (undefined ***)0x0) {
LAB_1084e5ff8:
            _objc_release(unaff_x24);
          }
          else {
            unaff_x26 = (undefined ***)unaff_x25;
            func_0x00010bf85d80();
            _objc_retainAutoreleasedReturnValue();
            pppuVar12 = unaff_x26;
            func_0x00010c08fa60();
            param_1 = (undefined8 *)(ulong)(pppuVar12 == (undefined ***)0x0);
            _objc_release(unaff_x26);
            _objc_release(unaff_x24);
            if (pppuVar12 != (undefined ***)0x0) {
              unaff_x24 = (undefined ***)unaff_x25;
              func_0x00010bf85d80();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c11ac00();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(ppuVar18);
              _objc_release(unaff_x25);
              goto LAB_1084e5ff8;
            }
          }
          unaff_x28 = (undefined ***)((long)unaff_x28 + 1);
        } while (pppuVar17 != unaff_x28);
        pppuVar17 = unaff_x21;
        func_0x00010bf52a60();
      } while (pppuVar17 != (undefined ***)0x0);
    }
    _objc_release(unaff_x21);
    _objc_release(unaff_x21);
  }
  _objc_release(param_2);
  puVar19 = puStack_228;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_release(unaff_x21);
    _objc_release(ppuVar18);
    _objc_release(unaff_x21);
    _objc_release(param_2);
    _objc_release(puStack_228);
    puVar3 = puVar19;
    __Unwind_Resume();
    pcStack_238 = FUN_1084e6120;
    lStack_288 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppuStack_280 = unaff_x28;
    pppuStack_278 = unaff_x27;
    pppuStack_270 = unaff_x24;
    puStack_268 = puVar19;
    ppuStack_260 = ppuVar18;
    pppuStack_258 = unaff_x21;
    pppuStack_250 = param_2;
    puStack_248 = param_1;
    puStack_240 = &stack0xfffffffffffffff0;
    _objc_retain(pppuVar16);
    puVar3[1] = 0;
    puVar3[2] = 0;
    *puVar3 = 0;
    pppuVar17 = pppuVar16;
    func_0x00010bf529e0();
    func_0x000107c281a4(puVar3);
    lStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    puStack_340 = (undefined8 *)0x0;
    uStack_328 = 0;
    uStack_330 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    _objc_retain(pppuVar16);
    pppuVar12 = pppuVar16;
    func_0x00010bf52a60();
    if (pppuVar12 != (undefined ***)0x0) {
      puVar19 = (undefined8 *)*puStack_340;
      do {
        unaff_x24 = (undefined ***)0x0;
        do {
          if ((undefined8 *)*puStack_340 != puVar19) {
            _objc_enumerationMutation(pppuVar16);
          }
          ppuVar18 = *(undefined ***)(lStack_348 + (long)unaff_x24 * 8);
          _objc_retain(ppuVar18);
          pppuVar17 = appuStack_310;
          appuStack_310[0] = ppuVar18;
          func_0x000107c281a8(puVar3);
          _objc_release(appuStack_310[0]);
          unaff_x24 = (undefined ***)((long)unaff_x24 + 1);
        } while (pppuVar12 != unaff_x24);
        pppuVar12 = pppuVar16;
        func_0x00010bf52a60();
      } while (pppuVar12 != (undefined ***)0x0);
    }
    _objc_release(pppuVar16);
    pppuVar12 = pppuVar16;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_288) {
      return;
    }
    ___stack_chk_fail();
    if ((int)pppuVar17 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    pcStack_358 = FUN_1084e6284;
    lStack_3b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppuStack_3b0 = unaff_x28;
    pppuStack_3a8 = unaff_x27;
    pppuStack_3a0 = unaff_x26;
    pppuStack_398 = (undefined ***)unaff_x25;
    pppuStack_390 = unaff_x24;
    puStack_388 = puVar19;
    ppuStack_380 = ppuVar18;
    uStack_378 = 0;
    puStack_370 = puVar3;
    pppuStack_368 = pppuVar16;
    ppuStack_360 = &puStack_240;
    _objc_retain();
    _objc_retain(pppuVar17);
    _objc_opt_class(PTR_PTR_1126d9e58);
    if (pppuVar12 == (undefined ***)0x0) {
      uStack_440 = 0;
      uStack_458 = 0;
      uStack_460 = 0;
      uStack_448 = 0;
      uStack_450 = 0;
      uStack_468 = 0;
      ppuStack_470 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_470,pppuVar12);
    }
    puVar2 = &uStack_4e1;
    FUN_1085250c4(puVar2);
    FUN_1084e6120(auStack_500,pppuVar17);
    func_0x000107c281a0(appuStack_4e0,0xd,puVar2,auStack_500);
    puStack_518 = (undefined1 *)0x0;
    puStack_510 = (undefined1 *)0x0;
    uStack_508 = 0;
    uStack_51c = 0;
    pppuVar16 = &ppuStack_470;
    pppuVar11 = appuStack_4e0;
    func_0x000107c310cc(pppuVar16,pppuVar11,&puStack_518,&uStack_51c);
    _objc_retainAutoreleasedReturnValue();
    if (puStack_518 != (undefined1 *)0x0) {
      puStack_510 = puStack_518;
      __ZdlPv();
    }
    plVar1 = plStack_478;
    appuStack_4e0[0] = &PTR_SUB_110862700;
    plStack_478 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_480;
    plStack_480 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_518 = auStack_498;
    func_0x000107c27dd4(&puStack_518);
    puStack_518 = auStack_500;
    func_0x000107c27dd4(&puStack_518);
    func_0x000107c27da8(&uStack_448);
    _objc_release(uStack_458);
    _objc_release(uStack_460);
    lStack_558 = 0;
    uStack_560 = 0;
    uStack_548 = 0;
    puStack_550 = (undefined8 *)0x0;
    uStack_538 = 0;
    uStack_540 = 0;
    uStack_528 = 0;
    uStack_530 = 0;
    _objc_retain(pppuVar16);
    pppuVar4 = pppuVar16;
    func_0x00010bf52a60();
    if (pppuVar4 != (undefined ***)0x0) {
      unaff_x24 = (undefined ***)*puStack_550;
      unaff_x25 = &PTR_PTR_1126d9000;
      do {
        unaff_x26 = (undefined ***)0x0;
        do {
          if ((undefined ***)*puStack_550 != unaff_x24) {
            _objc_enumerationMutation(pppuVar16);
          }
          pppuVar11 = *(undefined ****)(lStack_558 + (long)unaff_x26 * 8);
          puVar19 = (undefined8 *)PTR_PTR_1126d9e60;
          FUN_108525930();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(pppuVar12);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar19);
          unaff_x26 = (undefined ***)((long)unaff_x26 + 1);
        } while (pppuVar4 != unaff_x26);
        pppuVar4 = pppuVar16;
        func_0x00010bf52a60();
      } while (pppuVar4 != (undefined ***)0x0);
    }
    _objc_release(pppuVar16);
    _objc_release(pppuVar16);
    _objc_release(pppuVar17);
    pppuVar4 = pppuVar12;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3b8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(pppuVar16);
    _objc_release(pppuVar16);
    _objc_release(pppuVar17);
    _objc_release(pppuVar12);
    pppuVar5 = pppuVar4;
    __Unwind_Resume();
    pcStack_568 = FUN_1084e6550;
    iVar13 = (int)&uStack_780;
    lStack_5d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppuStack_5c0 = unaff_x28;
    pppuStack_5b8 = unaff_x27;
    pppuStack_5b0 = unaff_x26;
    pppuStack_5a8 = (undefined ***)unaff_x25;
    pppuStack_5a0 = unaff_x24;
    puStack_598 = puVar19;
    pppuStack_590 = pppuVar4;
    pppuStack_588 = pppuVar16;
    pppuStack_580 = pppuVar17;
    pppuStack_578 = pppuVar12;
    pppuStack_570 = &ppuStack_360;
    _objc_retain();
    _objc_retain(pppuVar11);
    if (pppuVar11 == (undefined ***)0x0) {
      _objc_opt_class(PTR_PTR_1126d5c20);
      if (pppuVar5 == (undefined ***)0x0) {
        uStack_6d0 = 0;
        uStack_6e8 = 0;
        uStack_6f0 = 0;
        uStack_6d8 = 0;
        uStack_6e0 = 0;
        uStack_6f8 = 0;
        ppuStack_700 = (undefined **)0x0;
      }
      else {
        func_0x00010bfa6be0(&ppuStack_700,pppuVar5);
      }
      ppuStack_690 = (undefined **)0x0;
      ppuStack_688 = (undefined **)0x0;
      uStack_680 = 0;
      auStack_720[0] = 0;
      pppuVar17 = &ppuStack_700;
      pppuVar16 = &ppuStack_690;
      func_0x00010054c81c(pppuVar17,pppuVar16,auStack_720);
      _objc_retainAutoreleasedReturnValue();
      if (ppuStack_690 != (undefined **)0x0) {
        ppuStack_688 = ppuStack_690;
        __ZdlPv();
      }
      func_0x000107c27da8(&uStack_6d8);
      _objc_release(uStack_6e8);
      _objc_release(uStack_6f0);
    }
    else {
      _objc_opt_class(PTR_PTR_1126d5c20);
      if (pppuVar5 == (undefined ***)0x0) {
        uStack_660 = 0;
        uStack_678 = 0;
        uStack_680 = 0;
        uStack_668 = 0;
        uStack_670 = 0;
        ppuStack_688 = (undefined **)0x0;
        ppuStack_690 = (undefined **)0x0;
      }
      else {
        func_0x00010bfa6be0(&ppuStack_690,pppuVar5);
      }
      puVar2 = &uStack_701;
      FUN_10851aec0(puVar2);
      func_0x000100950500(auStack_720,pppuVar11);
      func_0x000107c281a0(&ppuStack_700,0xc,puVar2,auStack_720);
      puStack_738 = (undefined4 *)0x0;
      puStack_730 = (undefined4 *)0x0;
      uStack_728 = 0;
      uStack_73c = 0;
      pppuVar17 = &ppuStack_690;
      pppuVar16 = &ppuStack_700;
      func_0x000107c310cc(pppuVar17,pppuVar16,&puStack_738,&uStack_73c);
      _objc_retainAutoreleasedReturnValue();
      if (puStack_738 != (undefined4 *)0x0) {
        puStack_730 = puStack_738;
        __ZdlPv();
      }
      plVar1 = plStack_698;
      ppuStack_700 = &PTR_SUB_110862700;
      plStack_698 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_6a0;
      plStack_6a0 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      puStack_738 = auStack_6b8;
      func_0x000107c27dd4(&puStack_738);
      puStack_738 = auStack_720;
      func_0x000107c27dd4(&puStack_738);
      func_0x000107c27da8(&uStack_668);
      _objc_release(uStack_678);
      _objc_release(uStack_680);
    }
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uStack_758 = 0;
    uStack_760 = 0;
    uStack_748 = 0;
    uStack_750 = 0;
    lStack_778 = 0;
    uStack_780 = 0;
    uStack_768 = 0;
    puStack_770 = (undefined8 *)0x0;
    _objc_retain(pppuVar17);
    pppuVar12 = pppuVar17;
    func_0x00010bf52a60();
    if (pppuVar12 != (undefined ***)0x0) {
      unaff_x26 = (undefined ***)*puStack_770;
      do {
        unaff_x27 = (undefined ***)0x0;
        do {
          if ((undefined ***)*puStack_770 != unaff_x26) {
            _objc_enumerationMutation(pppuVar17);
          }
          unaff_x24 = *(undefined ****)(lStack_778 + (long)unaff_x27 * 8);
          unaff_x25 = (undefined **)unaff_x24;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          pppuVar4 = (undefined ***)unaff_x25;
          func_0x00010c08fa60();
          unaff_x28 = (undefined ***)(ulong)(pppuVar4 == (undefined ***)0x0);
          _objc_release(unaff_x25);
          if (pppuVar4 != (undefined ***)0x0) {
            unaff_x25 = (undefined **)unaff_x24;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(ppuVar6);
            _objc_release(unaff_x25);
          }
          unaff_x27 = (undefined ***)((long)unaff_x27 + 1);
        } while (pppuVar12 != unaff_x27);
        pppuVar12 = pppuVar17;
        iVar13 = (int)&uStack_780;
        func_0x00010bf52a60();
      } while (pppuVar12 != (undefined ***)0x0);
    }
    _objc_release(pppuVar17);
    ppuVar18 = ppuVar6;
    func_0x00010bf51e00(ppuVar6);
    _objc_release(ppuVar6);
    _objc_release(pppuVar17);
    _objc_release(pppuVar11);
    pppuVar12 = pppuVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5d0) {
      ___stack_chk_fail();
      _objc_release(pppuVar11);
      _objc_release(pppuVar5);
      pppuVar4 = pppuVar12;
      __Unwind_Resume();
      pcStack_788 = FUN_1084e692c;
      lStack_7f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuStack_7e0 = unaff_x28;
      pppuStack_7d8 = unaff_x27;
      pppuStack_7d0 = unaff_x26;
      pppuStack_7c8 = (undefined ***)unaff_x25;
      pppuStack_7c0 = unaff_x24;
      pppuStack_7b8 = pppuVar12;
      ppuStack_7b0 = ppuVar6;
      pppuStack_7a8 = pppuVar17;
      pppuStack_7a0 = pppuVar11;
      pppuStack_798 = pppuVar5;
      pppuStack_790 = &pppuStack_570;
      _objc_retain();
      _objc_retain(pppuVar16);
      pppuVar12 = pppuVar16;
      pppuStack_9b8 = pppuVar4;
      pppuStack_9b0 = pppuVar16;
      func_0x00010bf529e0();
      if (pppuVar12 == (undefined ***)0x0) {
        _objc_opt_class(PTR_PTR_1126d6788);
        if (pppuVar4 == (undefined ***)0x0) {
          uStack_8f0 = 0;
          uStack_908 = 0;
          uStack_910 = 0;
          uStack_8f8 = 0;
          uStack_900 = 0;
          uStack_918 = 0;
          ppuStack_920 = (undefined **)0x0;
        }
        else {
          func_0x00010bfa6be0(&ppuStack_920,pppuVar4);
        }
        ppuStack_8b0 = (undefined **)0x0;
        ppuStack_8a8 = (undefined **)0x0;
        uStack_8a0 = 0;
        auStack_940[0] = 0;
        pppuVar12 = &ppuStack_920;
        pppuVar11 = &ppuStack_8b0;
        func_0x00010054c81c(pppuVar12,pppuVar11,auStack_940);
        _objc_retainAutoreleasedReturnValue();
        pppuStack_9a8 = pppuVar12;
        if (ppuStack_8b0 != (undefined **)0x0) {
          ppuStack_8a8 = ppuStack_8b0;
          __ZdlPv();
        }
        func_0x000107c27da8(&uStack_8f8);
        _objc_release(uStack_908);
        _objc_release(uStack_910);
      }
      else {
        _objc_opt_class(PTR_PTR_1126d6788);
        if (pppuVar4 == (undefined ***)0x0) {
          uStack_880 = 0;
          uStack_898 = 0;
          uStack_8a0 = 0;
          uStack_888 = 0;
          uStack_890 = 0;
          ppuStack_8a8 = (undefined **)0x0;
          ppuStack_8b0 = (undefined **)0x0;
        }
        else {
          func_0x00010bfa6be0(&ppuStack_8b0,pppuVar4);
        }
        puVar2 = &uStack_921;
        FUN_108517ba4(puVar2);
        func_0x000100950500(auStack_940,pppuStack_9b0);
        func_0x000107c281a0(&ppuStack_920,0xc,puVar2,auStack_940);
        puStack_958 = (undefined4 *)0x0;
        puStack_950 = (undefined4 *)0x0;
        uStack_948 = 0;
        uStack_95c = 0;
        pppuVar12 = &ppuStack_8b0;
        pppuVar11 = &ppuStack_920;
        func_0x000107c310cc(pppuVar12,pppuVar11,&puStack_958,&uStack_95c);
        _objc_retainAutoreleasedReturnValue();
        pppuStack_9a8 = pppuVar12;
        if (puStack_958 != (undefined4 *)0x0) {
          puStack_950 = puStack_958;
          __ZdlPv();
        }
        plVar1 = plStack_8b8;
        ppuStack_920 = &PTR_SUB_110862700;
        plStack_8b8 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_8c0;
        plStack_8c0 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        puStack_958 = auStack_8d8;
        func_0x000107c27dd4(&puStack_958);
        puStack_958 = auStack_940;
        func_0x000107c27dd4(&puStack_958);
        func_0x000107c27da8(&uStack_888);
        _objc_release(uStack_898);
        _objc_release(uStack_8a0);
      }
      ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      pppuVar12 = pppuStack_9a8;
      uStack_978 = 0;
      uStack_980 = 0;
      uStack_968 = 0;
      uStack_970 = 0;
      lStack_998 = 0;
      uStack_9a0 = 0;
      uStack_988 = 0;
      puStack_990 = (undefined8 *)0x0;
      _objc_retain(pppuStack_9a8);
      uVar14 = SUB84(&uStack_9a0,0);
      iVar15 = (int)auStack_870;
      func_0x00010bf52a60();
      if (pppuVar12 != (undefined ***)0x0) {
        pppuVar16 = (undefined ***)*puStack_990;
        do {
          pppuVar17 = (undefined ***)0x0;
          do {
            if ((undefined ***)*puStack_990 != pppuVar16) {
              _objc_enumerationMutation(pppuStack_9a8);
            }
            unaff_x26 = *(undefined ****)(lStack_998 + (long)pppuVar17 * 8);
            pppuVar4 = unaff_x26;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            pppuVar5 = pppuVar4;
            func_0x00010c08fa60();
            unaff_x25 = (undefined **)(ulong)(pppuVar5 == (undefined ***)0x0);
            _objc_release(pppuVar4);
            if (pppuVar5 != (undefined ***)0x0) {
              if (iVar13 == 0) {
LAB_1084e6cd0:
                unaff_x25 = (undefined **)unaff_x26;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(ppuVar6);
              }
              else {
                pppuVar4 = unaff_x26;
                func_0x00010c25b340();
                _objc_retainAutoreleasedReturnValue();
                pppuVar5 = pppuVar4;
                func_0x00010bf529e0();
                _objc_release(pppuVar4);
                if (pppuVar5 == (undefined ***)0x0) goto LAB_1084e6cd0;
                pppuVar4 = unaff_x26;
                func_0x00010c25b340();
                _objc_retainAutoreleasedReturnValue();
                pppuVar11 = (undefined ***)0x0;
                unaff_x25 = (undefined **)pppuVar4;
                FUN_1084d2cc4();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(pppuVar4);
                pppuVar4 = (undefined ***)unaff_x25;
                func_0x00010bf529e0();
                if (pppuVar4 != (undefined ***)0x0) {
                  puVar7 = PTR_PTR_1126d6788;
                  _objc_alloc(PTR_PTR_1126d6788);
                  unaff_x27 = unaff_x26;
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  unaff_x28 = unaff_x26;
                  func_0x00010c15e620();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c05bc60(puVar7);
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(ppuVar6);
                  _objc_release(unaff_x26);
                  _objc_release(puVar7);
                  _objc_release(unaff_x28);
                  _objc_release(unaff_x27);
                }
              }
              _objc_release(unaff_x25);
            }
            pppuVar17 = (undefined ***)((long)pppuVar17 + 1);
          } while (pppuVar12 != pppuVar17);
          uVar14 = SUB84(&uStack_9a0,0);
          iVar15 = (int)auStack_870;
          pppuVar12 = pppuStack_9a8;
          func_0x00010bf52a60();
        } while (pppuVar12 != (undefined ***)0x0);
      }
      _objc_release(pppuStack_9a8);
      ppuVar18 = ppuVar6;
      func_0x00010bf51e00();
      _objc_release(ppuVar6);
      _objc_release(pppuStack_9a8);
      _objc_release(pppuStack_9b0);
      pppuVar12 = pppuStack_9b8;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_7f0) {
        ___stack_chk_fail();
        _objc_release(pppuStack_9b0);
        _objc_release(pppuStack_9b8);
        pppuVar4 = pppuVar12;
        __Unwind_Resume();
        pcStack_9c8 = FUN_1084e6e98;
        lStack_a30 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pppuStack_be8 = pppuVar4;
        pppuStack_a20 = unaff_x28;
        pppuStack_a18 = unaff_x27;
        pppuStack_a10 = unaff_x26;
        pppuStack_a08 = (undefined ***)unaff_x25;
        uStack_a00 = 0;
        ppuStack_9f8 = ppuVar6;
        pppuStack_9f0 = pppuVar12;
        pppuStack_9e8 = pppuVar17;
        pppuStack_9e0 = pppuVar16;
        ppuStack_9d8 = ppuVar18;
        pppuStack_9d0 = &pppuStack_790;
        _objc_retain();
        _objc_retain(pppuVar11);
        pppuStack_bf0 = pppuVar11;
        if (pppuVar11 == (undefined ***)0x0) {
          _objc_opt_class(PTR_PTR_1126d9e48);
          if (pppuStack_be8 == (undefined ***)0x0) {
            uStack_b30 = 0;
            uStack_b48 = 0;
            uStack_b50 = 0;
            uStack_b38 = 0;
            uStack_b40 = 0;
            uStack_b58 = 0;
            ppuStack_b60 = (undefined **)0x0;
          }
          else {
            func_0x00010bfa6be0(&ppuStack_b60);
          }
          ppuStack_af0 = (undefined **)0x0;
          ppuStack_ae8 = (undefined **)0x0;
          uStack_ae0 = 0;
          pppuVar11 = &ppuStack_b60;
          pppuVar17 = &ppuStack_b60;
          pppuVar12 = &ppuStack_af0;
          auStack_b80[0] = uVar14;
          func_0x00010054c81c(pppuVar17,pppuVar12,auStack_b80);
          _objc_retainAutoreleasedReturnValue();
          if (ppuStack_af0 != (undefined **)0x0) {
            ppuStack_ae8 = ppuStack_af0;
            __ZdlPv();
          }
          func_0x000107c27da8(&uStack_b38);
          _objc_release(uStack_b48);
          _objc_release(uStack_b50);
        }
        else {
          _objc_opt_class(PTR_PTR_1126d9e48);
          if (pppuStack_be8 == (undefined ***)0x0) {
            uStack_ac0 = 0;
            uStack_ad8 = 0;
            uStack_ae0 = 0;
            uStack_ac8 = 0;
            uStack_ad0 = 0;
            ppuStack_ae8 = (undefined **)0x0;
            ppuStack_af0 = (undefined **)0x0;
          }
          else {
            func_0x00010bfa6be0(&ppuStack_af0);
          }
          puVar2 = &uStack_b61;
          func_0x00010095049c(puVar2);
          func_0x000100950500(auStack_b80,pppuStack_bf0);
          func_0x000107c281a0(&ppuStack_b60,0xc,puVar2,auStack_b80);
          puStack_b98 = (undefined4 *)0x0;
          puStack_b90 = (undefined4 *)0x0;
          uStack_b88 = 0;
          uStack_b9c = 0;
          pppuVar17 = &ppuStack_af0;
          pppuVar12 = &ppuStack_b60;
          func_0x000107c310cc(pppuVar17,pppuVar12,&puStack_b98,&uStack_b9c);
          _objc_retainAutoreleasedReturnValue();
          if (puStack_b98 != (undefined4 *)0x0) {
            puStack_b90 = puStack_b98;
            __ZdlPv();
          }
          plVar1 = plStack_af8;
          ppuStack_b60 = &PTR_SUB_110862700;
          plStack_af8 = (long *)0x0;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          plVar1 = plStack_b00;
          plStack_b00 = (long *)0x0;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          puStack_b98 = auStack_b18;
          func_0x000107c27dd4(&puStack_b98);
          puStack_b98 = auStack_b80;
          func_0x000107c27dd4(&puStack_b98);
          func_0x000107c27da8(&uStack_ac8);
          _objc_release(uStack_ad8);
          _objc_release(uStack_ae0);
        }
        ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        uStack_bb8 = 0;
        uStack_bc0 = 0;
        uStack_ba8 = 0;
        uStack_bb0 = 0;
        lStack_bd8 = 0;
        uStack_be0 = 0;
        uStack_bc8 = 0;
        puStack_bd0 = (undefined8 *)0x0;
        _objc_retain(pppuVar17);
        pppuVar4 = pppuVar17;
        func_0x00010bf52a60();
        if (pppuVar4 != (undefined ***)0x0) {
          pppuVar16 = (undefined ***)*puStack_bd0;
          do {
            pppuVar11 = (undefined ***)0x0;
            do {
              if ((undefined ***)*puStack_bd0 != pppuVar16) {
                _objc_enumerationMutation(pppuVar17);
              }
              unaff_x26 = *(undefined ****)(lStack_bd8 + (long)pppuVar11 * 8);
              unaff_x25 = (undefined **)unaff_x26;
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              pppuVar5 = (undefined ***)unaff_x25;
              func_0x00010c08fa60();
              unaff_x27 = (undefined ***)(ulong)(pppuVar5 == (undefined ***)0x0);
              _objc_release(unaff_x25);
              if (pppuVar5 != (undefined ***)0x0) {
                if (iVar15 == 0) {
LAB_1084e7214:
                  unaff_x25 = (undefined **)unaff_x26;
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(ppuVar6);
                }
                else {
                  pppuVar5 = unaff_x26;
                  func_0x00010c25b340();
                  _objc_retainAutoreleasedReturnValue();
                  pppuVar8 = pppuVar5;
                  func_0x00010bf529e0();
                  unaff_x27 = (undefined ***)(ulong)(pppuVar8 == (undefined ***)0x0);
                  _objc_release(pppuVar5);
                  if (pppuVar8 == (undefined ***)0x0) goto LAB_1084e7214;
                  unaff_x27 = unaff_x26;
                  func_0x00010c25b340();
                  _objc_retainAutoreleasedReturnValue();
                  pppuVar12 = (undefined ***)0x0;
                  unaff_x25 = (undefined **)unaff_x27;
                  FUN_1084d2cc4();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(unaff_x27);
                  pppuVar5 = (undefined ***)unaff_x25;
                  func_0x00010bf529e0();
                  if (pppuVar5 != (undefined ***)0x0) {
                    unaff_x28 = (undefined ***)PTR_PTR_1126d9e48;
                    _objc_alloc();
                    unaff_x27 = unaff_x26;
                    func_0x00010c2923e0();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c05bc40();
                    func_0x00010c2923e0();
                    _objc_retainAutoreleasedReturnValue();
                    func_0x00010c1d0640(ppuVar6);
                    _objc_release(unaff_x26);
                    _objc_release(unaff_x28);
                    _objc_release(unaff_x27);
                  }
                }
                _objc_release(unaff_x25);
              }
              pppuVar11 = (undefined ***)((long)pppuVar11 + 1);
            } while (pppuVar4 != pppuVar11);
            pppuVar4 = pppuVar17;
            func_0x00010bf52a60();
          } while (pppuVar4 != (undefined ***)0x0);
        }
        _objc_release(pppuVar17);
        ppuVar18 = ppuVar6;
        func_0x00010bf51e00(ppuVar6);
        _objc_release(ppuVar6);
        _objc_release(pppuVar17);
        _objc_release(pppuStack_bf0);
        pppuVar4 = pppuStack_be8;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a30) {
          ___stack_chk_fail();
          _objc_release(pppuStack_bf0);
          _objc_release(pppuStack_be8);
          pppuVar5 = pppuVar4;
          __Unwind_Resume();
          pcStack_bf8 = FUN_1084e73c8;
          lStack_c60 = *(long *)PTR____stack_chk_guard_11034bdc0;
          pppuStack_c50 = unaff_x28;
          pppuStack_c48 = unaff_x27;
          pppuStack_c40 = unaff_x26;
          pppuStack_c38 = (undefined ***)unaff_x25;
          uStack_c30 = 0;
          ppuStack_c28 = ppuVar6;
          pppuStack_c20 = pppuVar4;
          pppuStack_c18 = pppuVar17;
          pppuStack_c10 = pppuVar16;
          pppuStack_c08 = pppuVar11;
          pppuStack_c00 = &pppuStack_9d0;
          _objc_retain();
          _objc_retain(pppuVar12);
          if (pppuVar12 == (undefined ***)0x0) {
            _objc_opt_class(PTR_PTR_1126d67a0);
            if (pppuVar5 == (undefined ***)0x0) {
              uStack_d60 = 0;
              uStack_d78 = 0;
              uStack_d80 = 0;
              uStack_d68 = 0;
              uStack_d70 = 0;
              uStack_d88 = 0;
              ppuStack_d90 = (undefined **)0x0;
            }
            else {
              func_0x00010bfa6be0(&ppuStack_d90,pppuVar5);
            }
            ppuStack_d20 = (undefined **)0x0;
            ppuStack_d18 = (undefined **)0x0;
            uStack_d10 = 0;
            auStack_db0[0] = 0;
            pppuVar16 = &ppuStack_d90;
            func_0x00010054c81c(pppuVar16,&ppuStack_d20,auStack_db0);
            _objc_retainAutoreleasedReturnValue();
            if (ppuStack_d20 != (undefined **)0x0) {
              ppuStack_d18 = ppuStack_d20;
              __ZdlPv();
            }
            func_0x000107c27da8(&uStack_d68);
            _objc_release(uStack_d78);
            _objc_release(uStack_d80);
          }
          else {
            _objc_opt_class(PTR_PTR_1126d67a0);
            if (pppuVar5 == (undefined ***)0x0) {
              uStack_cf0 = 0;
              uStack_d08 = 0;
              uStack_d10 = 0;
              uStack_cf8 = 0;
              uStack_d00 = 0;
              ppuStack_d18 = (undefined **)0x0;
              ppuStack_d20 = (undefined **)0x0;
            }
            else {
              func_0x00010bfa6be0(&ppuStack_d20,pppuVar5);
            }
            puVar2 = &uStack_d91;
            FUN_10850e510(puVar2);
            func_0x000100950500(auStack_db0,pppuVar12);
            func_0x000107c281a0(&ppuStack_d90,0xc,puVar2,auStack_db0);
            puStack_dc8 = (undefined4 *)0x0;
            puStack_dc0 = (undefined4 *)0x0;
            uStack_db8 = 0;
            uStack_dcc = 0;
            pppuVar16 = &ppuStack_d20;
            func_0x000107c310cc(pppuVar16,&ppuStack_d90,&puStack_dc8,&uStack_dcc);
            _objc_retainAutoreleasedReturnValue();
            if (puStack_dc8 != (undefined4 *)0x0) {
              puStack_dc0 = puStack_dc8;
              __ZdlPv();
            }
            plVar1 = plStack_d28;
            ppuStack_d90 = &PTR_SUB_110862700;
            plStack_d28 = (long *)0x0;
            if (plVar1 != (long *)0x0) {
              (**(code **)(*plVar1 + 8))();
            }
            plVar1 = plStack_d30;
            plStack_d30 = (long *)0x0;
            if (plVar1 != (long *)0x0) {
              (**(code **)(*plVar1 + 8))();
            }
            puStack_dc8 = auStack_d48;
            func_0x000107c27dd4(&puStack_dc8);
            puStack_dc8 = auStack_db0;
            func_0x000107c27dd4(&puStack_dc8);
            func_0x000107c27da8(&uStack_cf8);
            _objc_release(uStack_d08);
            _objc_release(uStack_d10);
          }
          ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
          func_0x00010bf71e20();
          _objc_retainAutoreleasedReturnValue();
          uStack_de8 = 0;
          uStack_df0 = 0;
          uStack_dd8 = 0;
          uStack_de0 = 0;
          lStack_e08 = 0;
          uStack_e10 = 0;
          uStack_df8 = 0;
          plStack_e00 = (long *)0x0;
          _objc_retain(pppuVar16);
          pppuVar17 = pppuVar16;
          func_0x00010bf52a60();
          if (pppuVar17 != (undefined ***)0x0) {
            lVar21 = *plStack_e00;
            do {
              pppuVar11 = (undefined ***)0x0;
              do {
                if (*plStack_e00 != lVar21) {
                  _objc_enumerationMutation(pppuVar16);
                }
                lVar20 = *(long *)(lStack_e08 + (long)pppuVar11 * 8);
                lVar9 = lVar20;
                func_0x00010c11ac00();
                _objc_retainAutoreleasedReturnValue();
                lVar10 = lVar9;
                func_0x00010c08fa60();
                _objc_release(lVar9);
                if (lVar10 != 0) {
                  func_0x00010c11ac00(lVar20);
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(ppuVar6);
                  _objc_release(lVar20);
                }
                pppuVar11 = (undefined ***)((long)pppuVar11 + 1);
              } while (pppuVar17 != pppuVar11);
              pppuVar17 = pppuVar16;
              func_0x00010bf52a60();
            } while (pppuVar17 != (undefined ***)0x0);
          }
          _objc_release(pppuVar16);
          ppuVar18 = ppuVar6;
          func_0x00010bf51e00(ppuVar6);
          _objc_release(ppuVar6);
          _objc_release(pppuVar16);
          _objc_release(pppuVar12);
          pppuVar17 = pppuVar5;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_c60) {
            ___stack_chk_fail();
            _objc_release(pppuVar12);
            _objc_release(pppuVar5);
            __Unwind_Resume();
            pcStack_e18 = FUN_1084e77a4;
            ppuStack_e40 = ppuVar6;
            pppuStack_e38 = pppuVar16;
            pppuStack_e30 = pppuVar12;
            pppuStack_e28 = pppuVar5;
            pppuStack_e20 = &pppuStack_c00;
            _objc_retain();
            _objc_opt_class(PTR_PTR_1126d67a0);
            if (pppuVar17 == (undefined ***)0x0) {
              uStack_e50 = 0;
              uStack_e68 = 0;
              uStack_e70 = 0;
              uStack_e58 = 0;
              uStack_e60 = 0;
              uStack_e78 = 0;
              puStack_e80 = (undefined *)0x0;
            }
            else {
              func_0x00010bfa6be0(&puStack_e80,pppuVar17);
            }
            lStack_e98 = 0;
            lStack_e90 = 0;
            uStack_e88 = 0;
            uStack_e9c = 0;
            ppuVar18 = &puStack_e80;
            func_0x00010054c81c(ppuVar18,&lStack_e98,&uStack_e9c);
            _objc_retainAutoreleasedReturnValue();
            if (lStack_e98 != 0) {
              lStack_e90 = lStack_e98;
              __ZdlPv();
            }
            func_0x000107c27da8(&uStack_e58);
            _objc_release(uStack_e68);
            _objc_release(uStack_e70);
            _objc_release(pppuVar17);
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar18);
  return;
}



/* Entry: 1084e6120; end: 1084e6283;  */

void FUN_1084e6120(undefined8 *param_1,undefined ***param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined8 *puVar7;
  undefined ***pppuVar8;
  long lVar9;
  long lVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  undefined ***pppuVar16;
  undefined ***pppuVar17;
  undefined **ppuVar18;
  long lVar19;
  undefined ***unaff_x24;
  long lVar20;
  undefined **unaff_x25;
  undefined ***unaff_x26;
  undefined ***unaff_x27;
  undefined ***unaff_x28;
  undefined4 uStack_c6c;
  long lStack_c68;
  long lStack_c60;
  undefined8 uStack_c58;
  undefined8 uStack_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 uStack_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 *puStack_c10;
  undefined ***pppuStack_c08;
  undefined ***pppuStack_c00;
  undefined ***pppuStack_bf8;
  undefined8 **ppuStack_bf0;
  code *pcStack_be8;
  undefined8 uStack_be0;
  long lStack_bd8;
  long *plStack_bd0;
  undefined8 uStack_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 uStack_ba8;
  undefined4 uStack_b9c;
  undefined4 *puStack_b98;
  undefined4 *puStack_b90;
  undefined8 uStack_b88;
  undefined4 auStack_b80 [7];
  undefined1 uStack_b61;
  undefined **ppuStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined4 auStack_b18 [6];
  long *plStack_b00;
  long *plStack_af8;
  undefined **ppuStack_af0;
  undefined **ppuStack_ae8;
  undefined8 uStack_ae0;
  undefined8 uStack_ad8;
  undefined8 uStack_ad0;
  undefined8 uStack_ac8;
  undefined8 uStack_ac0;
  long lStack_a30;
  undefined ***pppuStack_a20;
  undefined ***pppuStack_a18;
  undefined ***pppuStack_a10;
  undefined ***pppuStack_a08;
  undefined8 uStack_a00;
  undefined8 *puStack_9f8;
  undefined ***pppuStack_9f0;
  undefined ***pppuStack_9e8;
  undefined ***pppuStack_9e0;
  undefined ***pppuStack_9d8;
  undefined8 **ppuStack_9d0;
  code *pcStack_9c8;
  undefined ***pppuStack_9c0;
  undefined ***pppuStack_9b8;
  undefined8 uStack_9b0;
  long lStack_9a8;
  undefined8 *puStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined4 uStack_96c;
  undefined4 *puStack_968;
  undefined4 *puStack_960;
  undefined8 uStack_958;
  undefined4 auStack_950 [7];
  undefined1 uStack_931;
  undefined **ppuStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined4 auStack_8e8 [6];
  long *plStack_8d0;
  long *plStack_8c8;
  undefined **ppuStack_8c0;
  undefined **ppuStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  long lStack_800;
  undefined ***pppuStack_7f0;
  undefined ***pppuStack_7e8;
  undefined ***pppuStack_7e0;
  undefined ***pppuStack_7d8;
  undefined8 uStack_7d0;
  undefined8 *puStack_7c8;
  undefined ***pppuStack_7c0;
  undefined ***pppuStack_7b8;
  undefined ***pppuStack_7b0;
  undefined8 *puStack_7a8;
  undefined8 **ppuStack_7a0;
  code *pcStack_798;
  undefined ***pppuStack_788;
  undefined ***pppuStack_780;
  undefined ***pppuStack_778;
  undefined8 uStack_770;
  long lStack_768;
  undefined8 *puStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined4 uStack_72c;
  undefined4 *puStack_728;
  undefined4 *puStack_720;
  undefined8 uStack_718;
  undefined4 auStack_710 [7];
  undefined1 uStack_6f1;
  undefined **ppuStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined4 auStack_6a8 [6];
  long *plStack_690;
  long *plStack_688;
  undefined **ppuStack_680;
  undefined **ppuStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined1 auStack_640 [128];
  long lStack_5c0;
  undefined ***pppuStack_5b0;
  undefined ***pppuStack_5a8;
  undefined ***pppuStack_5a0;
  undefined ***pppuStack_598;
  undefined ***pppuStack_590;
  undefined ***pppuStack_588;
  undefined8 *puStack_580;
  undefined ***pppuStack_578;
  undefined ***pppuStack_570;
  undefined ***pppuStack_568;
  undefined8 **ppuStack_560;
  code *pcStack_558;
  undefined8 uStack_550;
  long lStack_548;
  undefined8 *puStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined4 uStack_50c;
  undefined4 *puStack_508;
  undefined4 *puStack_500;
  undefined8 uStack_4f8;
  undefined4 auStack_4f0 [7];
  undefined1 uStack_4d1;
  undefined **ppuStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined4 auStack_488 [6];
  long *plStack_470;
  long *plStack_468;
  undefined **ppuStack_460;
  undefined **ppuStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  long lStack_3a0;
  undefined1 **ppuStack_340;
  code *pcStack_338;
  undefined8 uStack_330;
  long lStack_328;
  undefined8 *puStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined4 uStack_2ec;
  undefined1 *puStack_2e8;
  undefined1 *puStack_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2d0 [31];
  undefined1 uStack_2b1;
  undefined **appuStack_2b0 [9];
  undefined1 auStack_268 [24];
  long *plStack_250;
  long *plStack_248;
  undefined **ppuStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_188;
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
  undefined **appuStack_e0 [17];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  pppuVar16 = param_2;
  func_0x00010bf529e0();
  func_0x000107c281a4(param_1);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_2);
  pppuVar17 = param_2;
  func_0x00010bf52a60();
  if (pppuVar17 != (undefined ***)0x0) {
    lVar19 = *plStack_110;
    do {
      unaff_x24 = (undefined ***)0x0;
      do {
        if (*plStack_110 != lVar19) {
          _objc_enumerationMutation(param_2);
        }
        ppuVar18 = *(undefined ***)(lStack_118 + (long)unaff_x24 * 8);
        _objc_retain(ppuVar18);
        pppuVar16 = appuStack_e0;
        appuStack_e0[0] = ppuVar18;
        func_0x000107c281a8(param_1);
        _objc_release(appuStack_e0[0]);
        unaff_x24 = (undefined ***)((long)unaff_x24 + 1);
      } while (pppuVar17 != unaff_x24);
      pppuVar17 = param_2;
      func_0x00010bf52a60();
    } while (pppuVar17 != (undefined ***)0x0);
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pppuVar16 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  pcStack_128 = FUN_1084e6284;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_130 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(pppuVar16);
  _objc_opt_class(PTR_PTR_1126d9e58);
  if (param_2 == (undefined ***)0x0) {
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_238 = 0;
    ppuStack_240 = (undefined **)0x0;
  }
  else {
    func_0x00010bfa6be0(&ppuStack_240,param_2);
  }
  puVar2 = &uStack_2b1;
  FUN_1085250c4(puVar2);
  FUN_1084e6120(auStack_2d0,pppuVar16);
  func_0x000107c281a0(appuStack_2b0,0xd,puVar2,auStack_2d0);
  puStack_2e8 = (undefined1 *)0x0;
  puStack_2e0 = (undefined1 *)0x0;
  uStack_2d8 = 0;
  uStack_2ec = 0;
  pppuVar17 = &ppuStack_240;
  pppuVar11 = appuStack_2b0;
  func_0x000107c310cc(pppuVar17,pppuVar11,&puStack_2e8,&uStack_2ec);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_2e8 != (undefined1 *)0x0) {
    puStack_2e0 = puStack_2e8;
    __ZdlPv();
  }
  plVar1 = plStack_248;
  appuStack_2b0[0] = &PTR_SUB_110862700;
  plStack_248 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_250;
  plStack_250 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_2e8 = auStack_268;
  func_0x000107c27dd4(&puStack_2e8);
  puStack_2e8 = auStack_2d0;
  func_0x000107c27dd4(&puStack_2e8);
  func_0x000107c27da8(&uStack_218);
  _objc_release(uStack_228);
  _objc_release(uStack_230);
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  puStack_320 = (undefined8 *)0x0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  _objc_retain(pppuVar17);
  pppuVar12 = pppuVar17;
  func_0x00010bf52a60();
  if (pppuVar12 != (undefined ***)0x0) {
    unaff_x24 = (undefined ***)*puStack_320;
    unaff_x25 = &PTR_PTR_1126d9000;
    do {
      unaff_x26 = (undefined ***)0x0;
      do {
        if ((undefined ***)*puStack_320 != unaff_x24) {
          _objc_enumerationMutation(pppuVar17);
        }
        pppuVar11 = *(undefined ****)(lStack_328 + (long)unaff_x26 * 8);
        puVar3 = PTR_PTR_1126d9e60;
        FUN_108525930();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar3);
        unaff_x26 = (undefined ***)((long)unaff_x26 + 1);
      } while (pppuVar12 != unaff_x26);
      pppuVar12 = pppuVar17;
      func_0x00010bf52a60();
    } while (pppuVar12 != (undefined ***)0x0);
  }
  _objc_release(pppuVar17);
  _objc_release(pppuVar17);
  _objc_release(pppuVar16);
  pppuVar12 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pppuVar17);
  _objc_release(pppuVar17);
  _objc_release(pppuVar16);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_338 = FUN_1084e6550;
  iVar13 = (int)&uStack_550;
  lStack_3a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_340 = &puStack_130;
  _objc_retain();
  _objc_retain(pppuVar11);
  if (pppuVar11 == (undefined ***)0x0) {
    _objc_opt_class(PTR_PTR_1126d5c20);
    if (pppuVar12 == (undefined ***)0x0) {
      uStack_4a0 = 0;
      uStack_4b8 = 0;
      uStack_4c0 = 0;
      uStack_4a8 = 0;
      uStack_4b0 = 0;
      uStack_4c8 = 0;
      ppuStack_4d0 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_4d0,pppuVar12);
    }
    ppuStack_460 = (undefined **)0x0;
    ppuStack_458 = (undefined **)0x0;
    uStack_450 = 0;
    auStack_4f0[0] = 0;
    pppuVar17 = &ppuStack_4d0;
    pppuVar16 = &ppuStack_460;
    func_0x00010054c81c(pppuVar17,pppuVar16,auStack_4f0);
    _objc_retainAutoreleasedReturnValue();
    if (ppuStack_460 != (undefined **)0x0) {
      ppuStack_458 = ppuStack_460;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_4a8);
    _objc_release(uStack_4b8);
    _objc_release(uStack_4c0);
  }
  else {
    _objc_opt_class(PTR_PTR_1126d5c20);
    if (pppuVar12 == (undefined ***)0x0) {
      uStack_430 = 0;
      uStack_448 = 0;
      uStack_450 = 0;
      uStack_438 = 0;
      uStack_440 = 0;
      ppuStack_458 = (undefined **)0x0;
      ppuStack_460 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_460,pppuVar12);
    }
    puVar2 = &uStack_4d1;
    FUN_10851aec0(puVar2);
    func_0x000100950500(auStack_4f0,pppuVar11);
    func_0x000107c281a0(&ppuStack_4d0,0xc,puVar2,auStack_4f0);
    puStack_508 = (undefined4 *)0x0;
    puStack_500 = (undefined4 *)0x0;
    uStack_4f8 = 0;
    uStack_50c = 0;
    pppuVar17 = &ppuStack_460;
    pppuVar16 = &ppuStack_4d0;
    func_0x000107c310cc(pppuVar17,pppuVar16,&puStack_508,&uStack_50c);
    _objc_retainAutoreleasedReturnValue();
    if (puStack_508 != (undefined4 *)0x0) {
      puStack_500 = puStack_508;
      __ZdlPv();
    }
    plVar1 = plStack_468;
    ppuStack_4d0 = &PTR_SUB_110862700;
    plStack_468 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_470;
    plStack_470 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_508 = auStack_488;
    func_0x000107c27dd4(&puStack_508);
    puStack_508 = auStack_4f0;
    func_0x000107c27dd4(&puStack_508);
    func_0x000107c27da8(&uStack_438);
    _objc_release(uStack_448);
    _objc_release(uStack_450);
  }
  puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uStack_528 = 0;
  uStack_530 = 0;
  uStack_518 = 0;
  uStack_520 = 0;
  lStack_548 = 0;
  uStack_550 = 0;
  uStack_538 = 0;
  puStack_540 = (undefined8 *)0x0;
  _objc_retain(pppuVar17);
  pppuVar5 = pppuVar17;
  func_0x00010bf52a60();
  if (pppuVar5 != (undefined ***)0x0) {
    unaff_x26 = (undefined ***)*puStack_540;
    do {
      unaff_x27 = (undefined ***)0x0;
      do {
        if ((undefined ***)*puStack_540 != unaff_x26) {
          _objc_enumerationMutation(pppuVar17);
        }
        unaff_x24 = *(undefined ****)(lStack_548 + (long)unaff_x27 * 8);
        unaff_x25 = (undefined **)unaff_x24;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        pppuVar6 = (undefined ***)unaff_x25;
        func_0x00010c08fa60();
        unaff_x28 = (undefined ***)(ulong)(pppuVar6 == (undefined ***)0x0);
        _objc_release(unaff_x25);
        if (pppuVar6 != (undefined ***)0x0) {
          unaff_x25 = (undefined **)unaff_x24;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar4);
          _objc_release(unaff_x25);
        }
        unaff_x27 = (undefined ***)((long)unaff_x27 + 1);
      } while (pppuVar5 != unaff_x27);
      pppuVar5 = pppuVar17;
      iVar13 = (int)&uStack_550;
      func_0x00010bf52a60();
    } while (pppuVar5 != (undefined ***)0x0);
  }
  _objc_release(pppuVar17);
  puVar7 = puVar4;
  func_0x00010bf51e00(puVar4);
  _objc_release(puVar4);
  _objc_release(pppuVar17);
  _objc_release(pppuVar11);
  pppuVar5 = pppuVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_3a0) {
    ___stack_chk_fail();
    _objc_release(pppuVar11);
    _objc_release(pppuVar12);
    pppuVar6 = pppuVar5;
    __Unwind_Resume();
    pcStack_558 = FUN_1084e692c;
    lStack_5c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppuStack_5b0 = unaff_x28;
    pppuStack_5a8 = unaff_x27;
    pppuStack_5a0 = unaff_x26;
    pppuStack_598 = (undefined ***)unaff_x25;
    pppuStack_590 = unaff_x24;
    pppuStack_588 = pppuVar5;
    puStack_580 = puVar4;
    pppuStack_578 = pppuVar17;
    pppuStack_570 = pppuVar11;
    pppuStack_568 = pppuVar12;
    ppuStack_560 = &ppuStack_340;
    _objc_retain();
    _objc_retain(pppuVar16);
    pppuVar11 = pppuVar16;
    pppuStack_788 = pppuVar6;
    pppuStack_780 = pppuVar16;
    func_0x00010bf529e0();
    if (pppuVar11 == (undefined ***)0x0) {
      _objc_opt_class(PTR_PTR_1126d6788);
      if (pppuVar6 == (undefined ***)0x0) {
        uStack_6c0 = 0;
        uStack_6d8 = 0;
        uStack_6e0 = 0;
        uStack_6c8 = 0;
        uStack_6d0 = 0;
        uStack_6e8 = 0;
        ppuStack_6f0 = (undefined **)0x0;
      }
      else {
        func_0x00010bfa6be0(&ppuStack_6f0,pppuVar6);
      }
      ppuStack_680 = (undefined **)0x0;
      ppuStack_678 = (undefined **)0x0;
      uStack_670 = 0;
      auStack_710[0] = 0;
      pppuVar11 = &ppuStack_6f0;
      pppuVar12 = &ppuStack_680;
      func_0x00010054c81c(pppuVar11,pppuVar12,auStack_710);
      _objc_retainAutoreleasedReturnValue();
      pppuStack_778 = pppuVar11;
      if (ppuStack_680 != (undefined **)0x0) {
        ppuStack_678 = ppuStack_680;
        __ZdlPv();
      }
      func_0x000107c27da8(&uStack_6c8);
      _objc_release(uStack_6d8);
      _objc_release(uStack_6e0);
    }
    else {
      _objc_opt_class(PTR_PTR_1126d6788);
      if (pppuVar6 == (undefined ***)0x0) {
        uStack_650 = 0;
        uStack_668 = 0;
        uStack_670 = 0;
        uStack_658 = 0;
        uStack_660 = 0;
        ppuStack_678 = (undefined **)0x0;
        ppuStack_680 = (undefined **)0x0;
      }
      else {
        func_0x00010bfa6be0(&ppuStack_680,pppuVar6);
      }
      puVar2 = &uStack_6f1;
      FUN_108517ba4(puVar2);
      func_0x000100950500(auStack_710,pppuStack_780);
      func_0x000107c281a0(&ppuStack_6f0,0xc,puVar2,auStack_710);
      puStack_728 = (undefined4 *)0x0;
      puStack_720 = (undefined4 *)0x0;
      uStack_718 = 0;
      uStack_72c = 0;
      pppuVar11 = &ppuStack_680;
      pppuVar12 = &ppuStack_6f0;
      func_0x000107c310cc(pppuVar11,pppuVar12,&puStack_728,&uStack_72c);
      _objc_retainAutoreleasedReturnValue();
      pppuStack_778 = pppuVar11;
      if (puStack_728 != (undefined4 *)0x0) {
        puStack_720 = puStack_728;
        __ZdlPv();
      }
      plVar1 = plStack_688;
      ppuStack_6f0 = &PTR_SUB_110862700;
      plStack_688 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_690;
      plStack_690 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      puStack_728 = auStack_6a8;
      func_0x000107c27dd4(&puStack_728);
      puStack_728 = auStack_710;
      func_0x000107c27dd4(&puStack_728);
      func_0x000107c27da8(&uStack_658);
      _objc_release(uStack_668);
      _objc_release(uStack_670);
    }
    puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    pppuVar11 = pppuStack_778;
    uStack_748 = 0;
    uStack_750 = 0;
    uStack_738 = 0;
    uStack_740 = 0;
    lStack_768 = 0;
    uStack_770 = 0;
    uStack_758 = 0;
    puStack_760 = (undefined8 *)0x0;
    _objc_retain(pppuStack_778);
    uVar14 = SUB84(&uStack_770,0);
    iVar15 = (int)auStack_640;
    func_0x00010bf52a60();
    if (pppuVar11 != (undefined ***)0x0) {
      pppuVar16 = (undefined ***)*puStack_760;
      do {
        pppuVar17 = (undefined ***)0x0;
        do {
          if ((undefined ***)*puStack_760 != pppuVar16) {
            _objc_enumerationMutation(pppuStack_778);
          }
          unaff_x26 = *(undefined ****)(lStack_768 + (long)pppuVar17 * 8);
          pppuVar5 = unaff_x26;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          pppuVar6 = pppuVar5;
          func_0x00010c08fa60();
          unaff_x25 = (undefined **)(ulong)(pppuVar6 == (undefined ***)0x0);
          _objc_release(pppuVar5);
          if (pppuVar6 != (undefined ***)0x0) {
            if (iVar13 == 0) {
LAB_1084e6cd0:
              unaff_x25 = (undefined **)unaff_x26;
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar4);
            }
            else {
              pppuVar5 = unaff_x26;
              func_0x00010c25b340();
              _objc_retainAutoreleasedReturnValue();
              pppuVar6 = pppuVar5;
              func_0x00010bf529e0();
              _objc_release(pppuVar5);
              if (pppuVar6 == (undefined ***)0x0) goto LAB_1084e6cd0;
              pppuVar5 = unaff_x26;
              func_0x00010c25b340();
              _objc_retainAutoreleasedReturnValue();
              pppuVar12 = (undefined ***)0x0;
              unaff_x25 = (undefined **)pppuVar5;
              FUN_1084d2cc4();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(pppuVar5);
              pppuVar5 = (undefined ***)unaff_x25;
              func_0x00010bf529e0();
              if (pppuVar5 != (undefined ***)0x0) {
                puVar3 = PTR_PTR_1126d6788;
                _objc_alloc(PTR_PTR_1126d6788);
                unaff_x27 = unaff_x26;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x28 = unaff_x26;
                func_0x00010c15e620();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c05bc60(puVar3);
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar4);
                _objc_release(unaff_x26);
                _objc_release(puVar3);
                _objc_release(unaff_x28);
                _objc_release(unaff_x27);
              }
            }
            _objc_release(unaff_x25);
          }
          pppuVar17 = (undefined ***)((long)pppuVar17 + 1);
        } while (pppuVar11 != pppuVar17);
        uVar14 = SUB84(&uStack_770,0);
        iVar15 = (int)auStack_640;
        pppuVar11 = pppuStack_778;
        func_0x00010bf52a60();
      } while (pppuVar11 != (undefined ***)0x0);
    }
    _objc_release(pppuStack_778);
    puVar7 = puVar4;
    func_0x00010bf51e00();
    _objc_release(puVar4);
    _objc_release(pppuStack_778);
    _objc_release(pppuStack_780);
    pppuVar11 = pppuStack_788;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_5c0) {
      ___stack_chk_fail();
      _objc_release(pppuStack_780);
      _objc_release(pppuStack_788);
      pppuVar5 = pppuVar11;
      __Unwind_Resume();
      pcStack_798 = FUN_1084e6e98;
      lStack_800 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuStack_9b8 = pppuVar5;
      pppuStack_7f0 = unaff_x28;
      pppuStack_7e8 = unaff_x27;
      pppuStack_7e0 = unaff_x26;
      pppuStack_7d8 = (undefined ***)unaff_x25;
      uStack_7d0 = 0;
      puStack_7c8 = puVar4;
      pppuStack_7c0 = pppuVar11;
      pppuStack_7b8 = pppuVar17;
      pppuStack_7b0 = pppuVar16;
      puStack_7a8 = puVar7;
      ppuStack_7a0 = &ppuStack_560;
      _objc_retain();
      _objc_retain(pppuVar12);
      pppuStack_9c0 = pppuVar12;
      if (pppuVar12 == (undefined ***)0x0) {
        _objc_opt_class(PTR_PTR_1126d9e48);
        if (pppuStack_9b8 == (undefined ***)0x0) {
          uStack_900 = 0;
          uStack_918 = 0;
          uStack_920 = 0;
          uStack_908 = 0;
          uStack_910 = 0;
          uStack_928 = 0;
          ppuStack_930 = (undefined **)0x0;
        }
        else {
          func_0x00010bfa6be0(&ppuStack_930);
        }
        ppuStack_8c0 = (undefined **)0x0;
        ppuStack_8b8 = (undefined **)0x0;
        uStack_8b0 = 0;
        pppuVar12 = &ppuStack_930;
        pppuVar17 = &ppuStack_930;
        pppuVar11 = &ppuStack_8c0;
        auStack_950[0] = uVar14;
        func_0x00010054c81c(pppuVar17,pppuVar11,auStack_950);
        _objc_retainAutoreleasedReturnValue();
        if (ppuStack_8c0 != (undefined **)0x0) {
          ppuStack_8b8 = ppuStack_8c0;
          __ZdlPv();
        }
        func_0x000107c27da8(&uStack_908);
        _objc_release(uStack_918);
        _objc_release(uStack_920);
      }
      else {
        _objc_opt_class(PTR_PTR_1126d9e48);
        if (pppuStack_9b8 == (undefined ***)0x0) {
          uStack_890 = 0;
          uStack_8a8 = 0;
          uStack_8b0 = 0;
          uStack_898 = 0;
          uStack_8a0 = 0;
          ppuStack_8b8 = (undefined **)0x0;
          ppuStack_8c0 = (undefined **)0x0;
        }
        else {
          func_0x00010bfa6be0(&ppuStack_8c0);
        }
        puVar2 = &uStack_931;
        func_0x00010095049c(puVar2);
        func_0x000100950500(auStack_950,pppuStack_9c0);
        func_0x000107c281a0(&ppuStack_930,0xc,puVar2,auStack_950);
        puStack_968 = (undefined4 *)0x0;
        puStack_960 = (undefined4 *)0x0;
        uStack_958 = 0;
        uStack_96c = 0;
        pppuVar17 = &ppuStack_8c0;
        pppuVar11 = &ppuStack_930;
        func_0x000107c310cc(pppuVar17,pppuVar11,&puStack_968,&uStack_96c);
        _objc_retainAutoreleasedReturnValue();
        if (puStack_968 != (undefined4 *)0x0) {
          puStack_960 = puStack_968;
          __ZdlPv();
        }
        plVar1 = plStack_8c8;
        ppuStack_930 = &PTR_SUB_110862700;
        plStack_8c8 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_8d0;
        plStack_8d0 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        puStack_968 = auStack_8e8;
        func_0x000107c27dd4(&puStack_968);
        puStack_968 = auStack_950;
        func_0x000107c27dd4(&puStack_968);
        func_0x000107c27da8(&uStack_898);
        _objc_release(uStack_8a8);
        _objc_release(uStack_8b0);
      }
      puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uStack_988 = 0;
      uStack_990 = 0;
      uStack_978 = 0;
      uStack_980 = 0;
      lStack_9a8 = 0;
      uStack_9b0 = 0;
      uStack_998 = 0;
      puStack_9a0 = (undefined8 *)0x0;
      _objc_retain(pppuVar17);
      pppuVar5 = pppuVar17;
      func_0x00010bf52a60();
      if (pppuVar5 != (undefined ***)0x0) {
        pppuVar16 = (undefined ***)*puStack_9a0;
        do {
          pppuVar12 = (undefined ***)0x0;
          do {
            if ((undefined ***)*puStack_9a0 != pppuVar16) {
              _objc_enumerationMutation(pppuVar17);
            }
            unaff_x26 = *(undefined ****)(lStack_9a8 + (long)pppuVar12 * 8);
            unaff_x25 = (undefined **)unaff_x26;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            pppuVar6 = (undefined ***)unaff_x25;
            func_0x00010c08fa60();
            unaff_x27 = (undefined ***)(ulong)(pppuVar6 == (undefined ***)0x0);
            _objc_release(unaff_x25);
            if (pppuVar6 != (undefined ***)0x0) {
              if (iVar15 == 0) {
LAB_1084e7214:
                unaff_x25 = (undefined **)unaff_x26;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar4);
              }
              else {
                pppuVar6 = unaff_x26;
                func_0x00010c25b340();
                _objc_retainAutoreleasedReturnValue();
                pppuVar8 = pppuVar6;
                func_0x00010bf529e0();
                unaff_x27 = (undefined ***)(ulong)(pppuVar8 == (undefined ***)0x0);
                _objc_release(pppuVar6);
                if (pppuVar8 == (undefined ***)0x0) goto LAB_1084e7214;
                unaff_x27 = unaff_x26;
                func_0x00010c25b340();
                _objc_retainAutoreleasedReturnValue();
                pppuVar11 = (undefined ***)0x0;
                unaff_x25 = (undefined **)unaff_x27;
                FUN_1084d2cc4();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(unaff_x27);
                pppuVar6 = (undefined ***)unaff_x25;
                func_0x00010bf529e0();
                if (pppuVar6 != (undefined ***)0x0) {
                  unaff_x28 = (undefined ***)PTR_PTR_1126d9e48;
                  _objc_alloc();
                  unaff_x27 = unaff_x26;
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c05bc40();
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(puVar4);
                  _objc_release(unaff_x26);
                  _objc_release(unaff_x28);
                  _objc_release(unaff_x27);
                }
              }
              _objc_release(unaff_x25);
            }
            pppuVar12 = (undefined ***)((long)pppuVar12 + 1);
          } while (pppuVar5 != pppuVar12);
          pppuVar5 = pppuVar17;
          func_0x00010bf52a60();
        } while (pppuVar5 != (undefined ***)0x0);
      }
      _objc_release(pppuVar17);
      puVar7 = puVar4;
      func_0x00010bf51e00(puVar4);
      _objc_release(puVar4);
      _objc_release(pppuVar17);
      _objc_release(pppuStack_9c0);
      pppuVar5 = pppuStack_9b8;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_800) {
        ___stack_chk_fail();
        _objc_release(pppuStack_9c0);
        _objc_release(pppuStack_9b8);
        pppuVar6 = pppuVar5;
        __Unwind_Resume();
        pcStack_9c8 = FUN_1084e73c8;
        lStack_a30 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pppuStack_a20 = unaff_x28;
        pppuStack_a18 = unaff_x27;
        pppuStack_a10 = unaff_x26;
        pppuStack_a08 = (undefined ***)unaff_x25;
        uStack_a00 = 0;
        puStack_9f8 = puVar4;
        pppuStack_9f0 = pppuVar5;
        pppuStack_9e8 = pppuVar17;
        pppuStack_9e0 = pppuVar16;
        pppuStack_9d8 = pppuVar12;
        ppuStack_9d0 = &ppuStack_7a0;
        _objc_retain();
        _objc_retain(pppuVar11);
        if (pppuVar11 == (undefined ***)0x0) {
          _objc_opt_class(PTR_PTR_1126d67a0);
          if (pppuVar6 == (undefined ***)0x0) {
            uStack_b30 = 0;
            uStack_b48 = 0;
            uStack_b50 = 0;
            uStack_b38 = 0;
            uStack_b40 = 0;
            uStack_b58 = 0;
            ppuStack_b60 = (undefined **)0x0;
          }
          else {
            func_0x00010bfa6be0(&ppuStack_b60,pppuVar6);
          }
          ppuStack_af0 = (undefined **)0x0;
          ppuStack_ae8 = (undefined **)0x0;
          uStack_ae0 = 0;
          auStack_b80[0] = 0;
          pppuVar16 = &ppuStack_b60;
          func_0x00010054c81c(pppuVar16,&ppuStack_af0,auStack_b80);
          _objc_retainAutoreleasedReturnValue();
          if (ppuStack_af0 != (undefined **)0x0) {
            ppuStack_ae8 = ppuStack_af0;
            __ZdlPv();
          }
          func_0x000107c27da8(&uStack_b38);
          _objc_release(uStack_b48);
          _objc_release(uStack_b50);
        }
        else {
          _objc_opt_class(PTR_PTR_1126d67a0);
          if (pppuVar6 == (undefined ***)0x0) {
            uStack_ac0 = 0;
            uStack_ad8 = 0;
            uStack_ae0 = 0;
            uStack_ac8 = 0;
            uStack_ad0 = 0;
            ppuStack_ae8 = (undefined **)0x0;
            ppuStack_af0 = (undefined **)0x0;
          }
          else {
            func_0x00010bfa6be0(&ppuStack_af0,pppuVar6);
          }
          puVar2 = &uStack_b61;
          FUN_10850e510(puVar2);
          func_0x000100950500(auStack_b80,pppuVar11);
          func_0x000107c281a0(&ppuStack_b60,0xc,puVar2,auStack_b80);
          puStack_b98 = (undefined4 *)0x0;
          puStack_b90 = (undefined4 *)0x0;
          uStack_b88 = 0;
          uStack_b9c = 0;
          pppuVar16 = &ppuStack_af0;
          func_0x000107c310cc(pppuVar16,&ppuStack_b60,&puStack_b98,&uStack_b9c);
          _objc_retainAutoreleasedReturnValue();
          if (puStack_b98 != (undefined4 *)0x0) {
            puStack_b90 = puStack_b98;
            __ZdlPv();
          }
          plVar1 = plStack_af8;
          ppuStack_b60 = &PTR_SUB_110862700;
          plStack_af8 = (long *)0x0;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          plVar1 = plStack_b00;
          plStack_b00 = (long *)0x0;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          puStack_b98 = auStack_b18;
          func_0x000107c27dd4(&puStack_b98);
          puStack_b98 = auStack_b80;
          func_0x000107c27dd4(&puStack_b98);
          func_0x000107c27da8(&uStack_ac8);
          _objc_release(uStack_ad8);
          _objc_release(uStack_ae0);
        }
        puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        uStack_bb8 = 0;
        uStack_bc0 = 0;
        uStack_ba8 = 0;
        uStack_bb0 = 0;
        lStack_bd8 = 0;
        uStack_be0 = 0;
        uStack_bc8 = 0;
        plStack_bd0 = (long *)0x0;
        _objc_retain(pppuVar16);
        pppuVar17 = pppuVar16;
        func_0x00010bf52a60();
        if (pppuVar17 != (undefined ***)0x0) {
          lVar19 = *plStack_bd0;
          do {
            pppuVar12 = (undefined ***)0x0;
            do {
              if (*plStack_bd0 != lVar19) {
                _objc_enumerationMutation(pppuVar16);
              }
              lVar20 = *(long *)(lStack_bd8 + (long)pppuVar12 * 8);
              lVar9 = lVar20;
              func_0x00010c11ac00();
              _objc_retainAutoreleasedReturnValue();
              lVar10 = lVar9;
              func_0x00010c08fa60();
              _objc_release(lVar9);
              if (lVar10 != 0) {
                func_0x00010c11ac00(lVar20);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar4);
                _objc_release(lVar20);
              }
              pppuVar12 = (undefined ***)((long)pppuVar12 + 1);
            } while (pppuVar17 != pppuVar12);
            pppuVar17 = pppuVar16;
            func_0x00010bf52a60();
          } while (pppuVar17 != (undefined ***)0x0);
        }
        _objc_release(pppuVar16);
        puVar7 = puVar4;
        func_0x00010bf51e00(puVar4);
        _objc_release(puVar4);
        _objc_release(pppuVar16);
        _objc_release(pppuVar11);
        pppuVar17 = pppuVar6;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a30) {
          ___stack_chk_fail();
          _objc_release(pppuVar11);
          _objc_release(pppuVar6);
          __Unwind_Resume();
          pcStack_be8 = FUN_1084e77a4;
          puStack_c10 = puVar4;
          pppuStack_c08 = pppuVar16;
          pppuStack_c00 = pppuVar11;
          pppuStack_bf8 = pppuVar6;
          ppuStack_bf0 = &ppuStack_9d0;
          _objc_retain();
          _objc_opt_class(PTR_PTR_1126d67a0);
          if (pppuVar17 == (undefined ***)0x0) {
            uStack_c20 = 0;
            uStack_c38 = 0;
            uStack_c40 = 0;
            uStack_c28 = 0;
            uStack_c30 = 0;
            uStack_c48 = 0;
            uStack_c50 = 0;
          }
          else {
            func_0x00010bfa6be0(&uStack_c50,pppuVar17);
          }
          lStack_c68 = 0;
          lStack_c60 = 0;
          uStack_c58 = 0;
          uStack_c6c = 0;
          puVar7 = &uStack_c50;
          func_0x00010054c81c(puVar7,&lStack_c68,&uStack_c6c);
          _objc_retainAutoreleasedReturnValue();
          if (lStack_c68 != 0) {
            lStack_c60 = lStack_c68;
            __ZdlPv();
          }
          func_0x000107c27da8(&uStack_c28);
          _objc_release(uStack_c38);
          _objc_release(uStack_c40);
          _objc_release(pppuVar17);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1084e6284; end: 1084e654f;  */

void FUN_1084e6284(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined ***pppuVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  long lVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  undefined ***pppuVar17;
  undefined ***pppuVar18;
  undefined ***unaff_x24;
  long lVar19;
  undefined **unaff_x25;
  undefined ***unaff_x26;
  long lVar20;
  undefined ***unaff_x27;
  undefined ***unaff_x28;
  undefined4 uStack_b4c;
  long lStack_b48;
  long lStack_b40;
  undefined8 uStack_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 *puStack_af0;
  undefined ***pppuStack_ae8;
  undefined ***pppuStack_ae0;
  long lStack_ad8;
  undefined8 **ppuStack_ad0;
  code *pcStack_ac8;
  undefined8 uStack_ac0;
  long lStack_ab8;
  long *plStack_ab0;
  undefined8 uStack_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 uStack_a88;
  undefined4 uStack_a7c;
  undefined4 *puStack_a78;
  undefined4 *puStack_a70;
  undefined8 uStack_a68;
  undefined4 auStack_a60 [7];
  undefined1 uStack_a41;
  undefined **ppuStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined4 auStack_9f8 [6];
  long *plStack_9e0;
  long *plStack_9d8;
  undefined **ppuStack_9d0;
  undefined **ppuStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  long lStack_910;
  undefined ***pppuStack_900;
  undefined ***pppuStack_8f8;
  undefined ***pppuStack_8f0;
  undefined ***pppuStack_8e8;
  undefined8 uStack_8e0;
  undefined8 *puStack_8d8;
  long lStack_8d0;
  undefined ***pppuStack_8c8;
  undefined ***pppuStack_8c0;
  undefined ***pppuStack_8b8;
  undefined8 **ppuStack_8b0;
  code *pcStack_8a8;
  undefined ***pppuStack_8a0;
  long lStack_898;
  undefined8 uStack_890;
  long lStack_888;
  undefined8 *puStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined4 uStack_84c;
  undefined4 *puStack_848;
  undefined4 *puStack_840;
  undefined8 uStack_838;
  undefined4 auStack_830 [7];
  undefined1 uStack_811;
  undefined **ppuStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined4 auStack_7c8 [6];
  long *plStack_7b0;
  long *plStack_7a8;
  undefined **ppuStack_7a0;
  undefined **ppuStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  long lStack_6e0;
  undefined ***pppuStack_6d0;
  undefined ***pppuStack_6c8;
  undefined ***pppuStack_6c0;
  undefined ***pppuStack_6b8;
  undefined8 uStack_6b0;
  undefined8 *puStack_6a8;
  long lStack_6a0;
  undefined ***pppuStack_698;
  undefined ***pppuStack_690;
  undefined8 *puStack_688;
  undefined8 **ppuStack_680;
  code *pcStack_678;
  long lStack_668;
  undefined ***pppuStack_660;
  undefined ***pppuStack_658;
  undefined8 uStack_650;
  long lStack_648;
  undefined8 *puStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined4 uStack_60c;
  undefined4 *puStack_608;
  undefined4 *puStack_600;
  undefined8 uStack_5f8;
  undefined4 auStack_5f0 [7];
  undefined1 uStack_5d1;
  undefined **ppuStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined4 auStack_588 [6];
  long *plStack_570;
  long *plStack_568;
  undefined **ppuStack_560;
  undefined **ppuStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined1 auStack_520 [128];
  long lStack_4a0;
  undefined ***pppuStack_490;
  undefined ***pppuStack_488;
  undefined ***pppuStack_480;
  undefined ***pppuStack_478;
  undefined ***pppuStack_470;
  long lStack_468;
  undefined8 *puStack_460;
  undefined ***pppuStack_458;
  undefined ***pppuStack_450;
  long lStack_448;
  undefined1 **ppuStack_440;
  code *pcStack_438;
  undefined8 uStack_430;
  long lStack_428;
  undefined8 *puStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined4 uStack_3ec;
  undefined4 *puStack_3e8;
  undefined4 *puStack_3e0;
  undefined8 uStack_3d8;
  undefined4 auStack_3d0 [7];
  undefined1 uStack_3b1;
  undefined **ppuStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined4 auStack_368 [6];
  long *plStack_350;
  long *plStack_348;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  long lStack_280;
  undefined1 *puStack_220;
  code *pcStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 uStack_1cc;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [31];
  undefined1 uStack_191;
  undefined **appuStack_190 [9];
  undefined1 auStack_148 [24];
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126d9e58);
  if (param_1 == 0) {
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    ppuStack_120 = (undefined **)0x0;
  }
  else {
    func_0x00010bfa6be0(&ppuStack_120,param_1);
  }
  puVar2 = &uStack_191;
  FUN_1085250c4(puVar2);
  FUN_1084e6120(auStack_1b0,param_2);
  func_0x000107c281a0(appuStack_190,0xd,puVar2,auStack_1b0);
  puStack_1c8 = (undefined1 *)0x0;
  puStack_1c0 = (undefined1 *)0x0;
  uStack_1b8 = 0;
  uStack_1cc = 0;
  pppuVar17 = &ppuStack_120;
  pppuVar12 = appuStack_190;
  func_0x000107c310cc(pppuVar17,pppuVar12,&puStack_1c8,&uStack_1cc);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1c8 != (undefined1 *)0x0) {
    puStack_1c0 = puStack_1c8;
    __ZdlPv();
  }
  plVar1 = plStack_128;
  appuStack_190[0] = &PTR_SUB_110862700;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1c8 = auStack_148;
  func_0x000107c27dd4(&puStack_1c8);
  puStack_1c8 = auStack_1b0;
  func_0x000107c27dd4(&puStack_1c8);
  func_0x000107c27da8(&uStack_f8);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  lStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  puStack_200 = (undefined8 *)0x0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  _objc_retain(pppuVar17);
  pppuVar18 = pppuVar17;
  func_0x00010bf52a60();
  if (pppuVar18 != (undefined ***)0x0) {
    unaff_x24 = (undefined ***)*puStack_200;
    unaff_x25 = &PTR_PTR_1126d9000;
    do {
      unaff_x26 = (undefined ***)0x0;
      do {
        if ((undefined ***)*puStack_200 != unaff_x24) {
          _objc_enumerationMutation(pppuVar17);
        }
        pppuVar12 = *(undefined ****)(lStack_208 + (long)unaff_x26 * 8);
        puVar3 = PTR_PTR_1126d9e60;
        FUN_108525930();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar3);
        unaff_x26 = (undefined ***)((long)unaff_x26 + 1);
      } while (pppuVar18 != unaff_x26);
      pppuVar18 = pppuVar17;
      func_0x00010bf52a60();
    } while (pppuVar18 != (undefined ***)0x0);
  }
  _objc_release(pppuVar17);
  _objc_release(pppuVar17);
  _objc_release(param_2);
  lVar20 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pppuVar17);
  _objc_release(pppuVar17);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  pcStack_218 = FUN_1084e6550;
  iVar14 = (int)&uStack_430;
  lStack_280 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_220 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_retain(pppuVar12);
  if (pppuVar12 == (undefined ***)0x0) {
    _objc_opt_class(PTR_PTR_1126d5c20);
    if (lVar20 == 0) {
      uStack_380 = 0;
      uStack_398 = 0;
      uStack_3a0 = 0;
      uStack_388 = 0;
      uStack_390 = 0;
      uStack_3a8 = 0;
      ppuStack_3b0 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_3b0,lVar20);
    }
    ppuStack_340 = (undefined **)0x0;
    ppuStack_338 = (undefined **)0x0;
    uStack_330 = 0;
    auStack_3d0[0] = 0;
    pppuVar18 = &ppuStack_3b0;
    pppuVar17 = &ppuStack_340;
    func_0x00010054c81c(pppuVar18,pppuVar17,auStack_3d0);
    _objc_retainAutoreleasedReturnValue();
    if (ppuStack_340 != (undefined **)0x0) {
      ppuStack_338 = ppuStack_340;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_388);
    _objc_release(uStack_398);
    _objc_release(uStack_3a0);
  }
  else {
    _objc_opt_class(PTR_PTR_1126d5c20);
    if (lVar20 == 0) {
      uStack_310 = 0;
      uStack_328 = 0;
      uStack_330 = 0;
      uStack_318 = 0;
      uStack_320 = 0;
      ppuStack_338 = (undefined **)0x0;
      ppuStack_340 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_340,lVar20);
    }
    puVar2 = &uStack_3b1;
    FUN_10851aec0(puVar2);
    func_0x000100950500(auStack_3d0,pppuVar12);
    func_0x000107c281a0(&ppuStack_3b0,0xc,puVar2,auStack_3d0);
    puStack_3e8 = (undefined4 *)0x0;
    puStack_3e0 = (undefined4 *)0x0;
    uStack_3d8 = 0;
    uStack_3ec = 0;
    pppuVar18 = &ppuStack_340;
    pppuVar17 = &ppuStack_3b0;
    func_0x000107c310cc(pppuVar18,pppuVar17,&puStack_3e8,&uStack_3ec);
    _objc_retainAutoreleasedReturnValue();
    if (puStack_3e8 != (undefined4 *)0x0) {
      puStack_3e0 = puStack_3e8;
      __ZdlPv();
    }
    plVar1 = plStack_348;
    ppuStack_3b0 = &PTR_SUB_110862700;
    plStack_348 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_350;
    plStack_350 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_3e8 = auStack_368;
    func_0x000107c27dd4(&puStack_3e8);
    puStack_3e8 = auStack_3d0;
    func_0x000107c27dd4(&puStack_3e8);
    func_0x000107c27da8(&uStack_318);
    _objc_release(uStack_328);
    _objc_release(uStack_330);
  }
  puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uStack_408 = 0;
  uStack_410 = 0;
  uStack_3f8 = 0;
  uStack_400 = 0;
  lStack_428 = 0;
  uStack_430 = 0;
  uStack_418 = 0;
  puStack_420 = (undefined8 *)0x0;
  _objc_retain(pppuVar18);
  pppuVar13 = pppuVar18;
  func_0x00010bf52a60();
  if (pppuVar13 != (undefined ***)0x0) {
    unaff_x26 = (undefined ***)*puStack_420;
    do {
      unaff_x27 = (undefined ***)0x0;
      do {
        if ((undefined ***)*puStack_420 != unaff_x26) {
          _objc_enumerationMutation(pppuVar18);
        }
        unaff_x24 = *(undefined ****)(lStack_428 + (long)unaff_x27 * 8);
        unaff_x25 = (undefined **)unaff_x24;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        pppuVar5 = (undefined ***)unaff_x25;
        func_0x00010c08fa60();
        unaff_x28 = (undefined ***)(ulong)(pppuVar5 == (undefined ***)0x0);
        _objc_release(unaff_x25);
        if (pppuVar5 != (undefined ***)0x0) {
          unaff_x25 = (undefined **)unaff_x24;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar4);
          _objc_release(unaff_x25);
        }
        unaff_x27 = (undefined ***)((long)unaff_x27 + 1);
      } while (pppuVar13 != unaff_x27);
      pppuVar13 = pppuVar18;
      iVar14 = (int)&uStack_430;
      func_0x00010bf52a60();
    } while (pppuVar13 != (undefined ***)0x0);
  }
  _objc_release(pppuVar18);
  puVar6 = puVar4;
  func_0x00010bf51e00(puVar4);
  _objc_release(puVar4);
  _objc_release(pppuVar18);
  _objc_release(pppuVar12);
  lVar7 = lVar20;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_280) {
    ___stack_chk_fail();
    _objc_release(pppuVar12);
    _objc_release(lVar20);
    lVar8 = lVar7;
    __Unwind_Resume();
    pcStack_438 = FUN_1084e692c;
    lStack_4a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppuStack_490 = unaff_x28;
    pppuStack_488 = unaff_x27;
    pppuStack_480 = unaff_x26;
    pppuStack_478 = (undefined ***)unaff_x25;
    pppuStack_470 = unaff_x24;
    lStack_468 = lVar7;
    puStack_460 = puVar4;
    pppuStack_458 = pppuVar18;
    pppuStack_450 = pppuVar12;
    lStack_448 = lVar20;
    ppuStack_440 = &puStack_220;
    _objc_retain();
    _objc_retain(pppuVar17);
    pppuVar12 = pppuVar17;
    lStack_668 = lVar8;
    pppuStack_660 = pppuVar17;
    func_0x00010bf529e0();
    if (pppuVar12 == (undefined ***)0x0) {
      _objc_opt_class(PTR_PTR_1126d6788);
      if (lVar8 == 0) {
        uStack_5a0 = 0;
        uStack_5b8 = 0;
        uStack_5c0 = 0;
        uStack_5a8 = 0;
        uStack_5b0 = 0;
        uStack_5c8 = 0;
        ppuStack_5d0 = (undefined **)0x0;
      }
      else {
        func_0x00010bfa6be0(&ppuStack_5d0,lVar8);
      }
      ppuStack_560 = (undefined **)0x0;
      ppuStack_558 = (undefined **)0x0;
      uStack_550 = 0;
      auStack_5f0[0] = 0;
      pppuVar12 = &ppuStack_5d0;
      pppuVar13 = &ppuStack_560;
      func_0x00010054c81c(pppuVar12,pppuVar13,auStack_5f0);
      _objc_retainAutoreleasedReturnValue();
      pppuStack_658 = pppuVar12;
      if (ppuStack_560 != (undefined **)0x0) {
        ppuStack_558 = ppuStack_560;
        __ZdlPv();
      }
      func_0x000107c27da8(&uStack_5a8);
      _objc_release(uStack_5b8);
      _objc_release(uStack_5c0);
    }
    else {
      _objc_opt_class(PTR_PTR_1126d6788);
      if (lVar8 == 0) {
        uStack_530 = 0;
        uStack_548 = 0;
        uStack_550 = 0;
        uStack_538 = 0;
        uStack_540 = 0;
        ppuStack_558 = (undefined **)0x0;
        ppuStack_560 = (undefined **)0x0;
      }
      else {
        func_0x00010bfa6be0(&ppuStack_560,lVar8);
      }
      puVar2 = &uStack_5d1;
      FUN_108517ba4(puVar2);
      func_0x000100950500(auStack_5f0,pppuStack_660);
      func_0x000107c281a0(&ppuStack_5d0,0xc,puVar2,auStack_5f0);
      puStack_608 = (undefined4 *)0x0;
      puStack_600 = (undefined4 *)0x0;
      uStack_5f8 = 0;
      uStack_60c = 0;
      pppuVar12 = &ppuStack_560;
      pppuVar13 = &ppuStack_5d0;
      func_0x000107c310cc(pppuVar12,pppuVar13,&puStack_608,&uStack_60c);
      _objc_retainAutoreleasedReturnValue();
      pppuStack_658 = pppuVar12;
      if (puStack_608 != (undefined4 *)0x0) {
        puStack_600 = puStack_608;
        __ZdlPv();
      }
      plVar1 = plStack_568;
      ppuStack_5d0 = &PTR_SUB_110862700;
      plStack_568 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_570;
      plStack_570 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      puStack_608 = auStack_588;
      func_0x000107c27dd4(&puStack_608);
      puStack_608 = auStack_5f0;
      func_0x000107c27dd4(&puStack_608);
      func_0x000107c27da8(&uStack_538);
      _objc_release(uStack_548);
      _objc_release(uStack_550);
    }
    puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    pppuVar12 = pppuStack_658;
    uStack_628 = 0;
    uStack_630 = 0;
    uStack_618 = 0;
    uStack_620 = 0;
    lStack_648 = 0;
    uStack_650 = 0;
    uStack_638 = 0;
    puStack_640 = (undefined8 *)0x0;
    _objc_retain(pppuStack_658);
    uVar15 = SUB84(&uStack_650,0);
    iVar16 = (int)auStack_520;
    func_0x00010bf52a60();
    if (pppuVar12 != (undefined ***)0x0) {
      pppuVar17 = (undefined ***)*puStack_640;
      do {
        pppuVar18 = (undefined ***)0x0;
        do {
          if ((undefined ***)*puStack_640 != pppuVar17) {
            _objc_enumerationMutation(pppuStack_658);
          }
          unaff_x26 = *(undefined ****)(lStack_648 + (long)pppuVar18 * 8);
          pppuVar5 = unaff_x26;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          pppuVar9 = pppuVar5;
          func_0x00010c08fa60();
          unaff_x25 = (undefined **)(ulong)(pppuVar9 == (undefined ***)0x0);
          _objc_release(pppuVar5);
          if (pppuVar9 != (undefined ***)0x0) {
            if (iVar14 == 0) {
LAB_1084e6cd0:
              unaff_x25 = (undefined **)unaff_x26;
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar4);
            }
            else {
              pppuVar5 = unaff_x26;
              func_0x00010c25b340();
              _objc_retainAutoreleasedReturnValue();
              pppuVar9 = pppuVar5;
              func_0x00010bf529e0();
              _objc_release(pppuVar5);
              if (pppuVar9 == (undefined ***)0x0) goto LAB_1084e6cd0;
              pppuVar5 = unaff_x26;
              func_0x00010c25b340();
              _objc_retainAutoreleasedReturnValue();
              pppuVar13 = (undefined ***)0x0;
              unaff_x25 = (undefined **)pppuVar5;
              FUN_1084d2cc4();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(pppuVar5);
              pppuVar5 = (undefined ***)unaff_x25;
              func_0x00010bf529e0();
              if (pppuVar5 != (undefined ***)0x0) {
                puVar3 = PTR_PTR_1126d6788;
                _objc_alloc(PTR_PTR_1126d6788);
                unaff_x27 = unaff_x26;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x28 = unaff_x26;
                func_0x00010c15e620();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c05bc60(puVar3);
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar4);
                _objc_release(unaff_x26);
                _objc_release(puVar3);
                _objc_release(unaff_x28);
                _objc_release(unaff_x27);
              }
            }
            _objc_release(unaff_x25);
          }
          pppuVar18 = (undefined ***)((long)pppuVar18 + 1);
        } while (pppuVar12 != pppuVar18);
        uVar15 = SUB84(&uStack_650,0);
        iVar16 = (int)auStack_520;
        pppuVar12 = pppuStack_658;
        func_0x00010bf52a60();
      } while (pppuVar12 != (undefined ***)0x0);
    }
    _objc_release(pppuStack_658);
    puVar6 = puVar4;
    func_0x00010bf51e00();
    _objc_release(puVar4);
    _objc_release(pppuStack_658);
    _objc_release(pppuStack_660);
    lVar20 = lStack_668;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4a0) {
      ___stack_chk_fail();
      _objc_release(pppuStack_660);
      _objc_release(lStack_668);
      lVar7 = lVar20;
      __Unwind_Resume();
      pcStack_678 = FUN_1084e6e98;
      lStack_6e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_898 = lVar7;
      pppuStack_6d0 = unaff_x28;
      pppuStack_6c8 = unaff_x27;
      pppuStack_6c0 = unaff_x26;
      pppuStack_6b8 = (undefined ***)unaff_x25;
      uStack_6b0 = 0;
      puStack_6a8 = puVar4;
      lStack_6a0 = lVar20;
      pppuStack_698 = pppuVar18;
      pppuStack_690 = pppuVar17;
      puStack_688 = puVar6;
      ppuStack_680 = &ppuStack_440;
      _objc_retain();
      _objc_retain(pppuVar13);
      pppuStack_8a0 = pppuVar13;
      if (pppuVar13 == (undefined ***)0x0) {
        _objc_opt_class(PTR_PTR_1126d9e48);
        if (lStack_898 == 0) {
          uStack_7e0 = 0;
          uStack_7f8 = 0;
          uStack_800 = 0;
          uStack_7e8 = 0;
          uStack_7f0 = 0;
          uStack_808 = 0;
          ppuStack_810 = (undefined **)0x0;
        }
        else {
          func_0x00010bfa6be0(&ppuStack_810);
        }
        ppuStack_7a0 = (undefined **)0x0;
        ppuStack_798 = (undefined **)0x0;
        uStack_790 = 0;
        pppuVar13 = &ppuStack_810;
        pppuVar12 = &ppuStack_810;
        pppuVar18 = &ppuStack_7a0;
        auStack_830[0] = uVar15;
        func_0x00010054c81c(pppuVar12,pppuVar18,auStack_830);
        _objc_retainAutoreleasedReturnValue();
        if (ppuStack_7a0 != (undefined **)0x0) {
          ppuStack_798 = ppuStack_7a0;
          __ZdlPv();
        }
        func_0x000107c27da8(&uStack_7e8);
        _objc_release(uStack_7f8);
        _objc_release(uStack_800);
      }
      else {
        _objc_opt_class(PTR_PTR_1126d9e48);
        if (lStack_898 == 0) {
          uStack_770 = 0;
          uStack_788 = 0;
          uStack_790 = 0;
          uStack_778 = 0;
          uStack_780 = 0;
          ppuStack_798 = (undefined **)0x0;
          ppuStack_7a0 = (undefined **)0x0;
        }
        else {
          func_0x00010bfa6be0(&ppuStack_7a0);
        }
        puVar2 = &uStack_811;
        func_0x00010095049c(puVar2);
        func_0x000100950500(auStack_830,pppuStack_8a0);
        func_0x000107c281a0(&ppuStack_810,0xc,puVar2,auStack_830);
        puStack_848 = (undefined4 *)0x0;
        puStack_840 = (undefined4 *)0x0;
        uStack_838 = 0;
        uStack_84c = 0;
        pppuVar12 = &ppuStack_7a0;
        pppuVar18 = &ppuStack_810;
        func_0x000107c310cc(pppuVar12,pppuVar18,&puStack_848,&uStack_84c);
        _objc_retainAutoreleasedReturnValue();
        if (puStack_848 != (undefined4 *)0x0) {
          puStack_840 = puStack_848;
          __ZdlPv();
        }
        plVar1 = plStack_7a8;
        ppuStack_810 = &PTR_SUB_110862700;
        plStack_7a8 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_7b0;
        plStack_7b0 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        puStack_848 = auStack_7c8;
        func_0x000107c27dd4(&puStack_848);
        puStack_848 = auStack_830;
        func_0x000107c27dd4(&puStack_848);
        func_0x000107c27da8(&uStack_778);
        _objc_release(uStack_788);
        _objc_release(uStack_790);
      }
      puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uStack_868 = 0;
      uStack_870 = 0;
      uStack_858 = 0;
      uStack_860 = 0;
      lStack_888 = 0;
      uStack_890 = 0;
      uStack_878 = 0;
      puStack_880 = (undefined8 *)0x0;
      _objc_retain(pppuVar12);
      pppuVar5 = pppuVar12;
      func_0x00010bf52a60();
      if (pppuVar5 != (undefined ***)0x0) {
        pppuVar17 = (undefined ***)*puStack_880;
        do {
          pppuVar13 = (undefined ***)0x0;
          do {
            if ((undefined ***)*puStack_880 != pppuVar17) {
              _objc_enumerationMutation(pppuVar12);
            }
            unaff_x26 = *(undefined ****)(lStack_888 + (long)pppuVar13 * 8);
            unaff_x25 = (undefined **)unaff_x26;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            pppuVar9 = (undefined ***)unaff_x25;
            func_0x00010c08fa60();
            unaff_x27 = (undefined ***)(ulong)(pppuVar9 == (undefined ***)0x0);
            _objc_release(unaff_x25);
            if (pppuVar9 != (undefined ***)0x0) {
              if (iVar16 == 0) {
LAB_1084e7214:
                unaff_x25 = (undefined **)unaff_x26;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar4);
              }
              else {
                pppuVar9 = unaff_x26;
                func_0x00010c25b340();
                _objc_retainAutoreleasedReturnValue();
                pppuVar10 = pppuVar9;
                func_0x00010bf529e0();
                unaff_x27 = (undefined ***)(ulong)(pppuVar10 == (undefined ***)0x0);
                _objc_release(pppuVar9);
                if (pppuVar10 == (undefined ***)0x0) goto LAB_1084e7214;
                unaff_x27 = unaff_x26;
                func_0x00010c25b340();
                _objc_retainAutoreleasedReturnValue();
                pppuVar18 = (undefined ***)0x0;
                unaff_x25 = (undefined **)unaff_x27;
                FUN_1084d2cc4();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(unaff_x27);
                pppuVar9 = (undefined ***)unaff_x25;
                func_0x00010bf529e0();
                if (pppuVar9 != (undefined ***)0x0) {
                  unaff_x28 = (undefined ***)PTR_PTR_1126d9e48;
                  _objc_alloc();
                  unaff_x27 = unaff_x26;
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c05bc40();
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(puVar4);
                  _objc_release(unaff_x26);
                  _objc_release(unaff_x28);
                  _objc_release(unaff_x27);
                }
              }
              _objc_release(unaff_x25);
            }
            pppuVar13 = (undefined ***)((long)pppuVar13 + 1);
          } while (pppuVar5 != pppuVar13);
          pppuVar5 = pppuVar12;
          func_0x00010bf52a60();
        } while (pppuVar5 != (undefined ***)0x0);
      }
      _objc_release(pppuVar12);
      puVar6 = puVar4;
      func_0x00010bf51e00(puVar4);
      _objc_release(puVar4);
      _objc_release(pppuVar12);
      _objc_release(pppuStack_8a0);
      lVar20 = lStack_898;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6e0) {
        ___stack_chk_fail();
        _objc_release(pppuStack_8a0);
        _objc_release(lStack_898);
        lVar7 = lVar20;
        __Unwind_Resume();
        pcStack_8a8 = FUN_1084e73c8;
        lStack_910 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pppuStack_900 = unaff_x28;
        pppuStack_8f8 = unaff_x27;
        pppuStack_8f0 = unaff_x26;
        pppuStack_8e8 = (undefined ***)unaff_x25;
        uStack_8e0 = 0;
        puStack_8d8 = puVar4;
        lStack_8d0 = lVar20;
        pppuStack_8c8 = pppuVar12;
        pppuStack_8c0 = pppuVar17;
        pppuStack_8b8 = pppuVar13;
        ppuStack_8b0 = &ppuStack_680;
        _objc_retain();
        _objc_retain(pppuVar18);
        if (pppuVar18 == (undefined ***)0x0) {
          _objc_opt_class(PTR_PTR_1126d67a0);
          if (lVar7 == 0) {
            uStack_a10 = 0;
            uStack_a28 = 0;
            uStack_a30 = 0;
            uStack_a18 = 0;
            uStack_a20 = 0;
            uStack_a38 = 0;
            ppuStack_a40 = (undefined **)0x0;
          }
          else {
            func_0x00010bfa6be0(&ppuStack_a40,lVar7);
          }
          ppuStack_9d0 = (undefined **)0x0;
          ppuStack_9c8 = (undefined **)0x0;
          uStack_9c0 = 0;
          auStack_a60[0] = 0;
          pppuVar17 = &ppuStack_a40;
          func_0x00010054c81c(pppuVar17,&ppuStack_9d0,auStack_a60);
          _objc_retainAutoreleasedReturnValue();
          if (ppuStack_9d0 != (undefined **)0x0) {
            ppuStack_9c8 = ppuStack_9d0;
            __ZdlPv();
          }
          func_0x000107c27da8(&uStack_a18);
          _objc_release(uStack_a28);
          _objc_release(uStack_a30);
        }
        else {
          _objc_opt_class(PTR_PTR_1126d67a0);
          if (lVar7 == 0) {
            uStack_9a0 = 0;
            uStack_9b8 = 0;
            uStack_9c0 = 0;
            uStack_9a8 = 0;
            uStack_9b0 = 0;
            ppuStack_9c8 = (undefined **)0x0;
            ppuStack_9d0 = (undefined **)0x0;
          }
          else {
            func_0x00010bfa6be0(&ppuStack_9d0,lVar7);
          }
          puVar2 = &uStack_a41;
          FUN_10850e510(puVar2);
          func_0x000100950500(auStack_a60,pppuVar18);
          func_0x000107c281a0(&ppuStack_a40,0xc,puVar2,auStack_a60);
          puStack_a78 = (undefined4 *)0x0;
          puStack_a70 = (undefined4 *)0x0;
          uStack_a68 = 0;
          uStack_a7c = 0;
          pppuVar17 = &ppuStack_9d0;
          func_0x000107c310cc(pppuVar17,&ppuStack_a40,&puStack_a78,&uStack_a7c);
          _objc_retainAutoreleasedReturnValue();
          if (puStack_a78 != (undefined4 *)0x0) {
            puStack_a70 = puStack_a78;
            __ZdlPv();
          }
          plVar1 = plStack_9d8;
          ppuStack_a40 = &PTR_SUB_110862700;
          plStack_9d8 = (long *)0x0;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          plVar1 = plStack_9e0;
          plStack_9e0 = (long *)0x0;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          puStack_a78 = auStack_9f8;
          func_0x000107c27dd4(&puStack_a78);
          puStack_a78 = auStack_a60;
          func_0x000107c27dd4(&puStack_a78);
          func_0x000107c27da8(&uStack_9a8);
          _objc_release(uStack_9b8);
          _objc_release(uStack_9c0);
        }
        puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        uStack_a98 = 0;
        uStack_aa0 = 0;
        uStack_a88 = 0;
        uStack_a90 = 0;
        lStack_ab8 = 0;
        uStack_ac0 = 0;
        uStack_aa8 = 0;
        plStack_ab0 = (long *)0x0;
        _objc_retain(pppuVar17);
        pppuVar12 = pppuVar17;
        func_0x00010bf52a60();
        if (pppuVar12 != (undefined ***)0x0) {
          lVar20 = *plStack_ab0;
          do {
            pppuVar13 = (undefined ***)0x0;
            do {
              if (*plStack_ab0 != lVar20) {
                _objc_enumerationMutation(pppuVar17);
              }
              lVar19 = *(long *)(lStack_ab8 + (long)pppuVar13 * 8);
              lVar8 = lVar19;
              func_0x00010c11ac00();
              _objc_retainAutoreleasedReturnValue();
              lVar11 = lVar8;
              func_0x00010c08fa60();
              _objc_release(lVar8);
              if (lVar11 != 0) {
                func_0x00010c11ac00(lVar19);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar4);
                _objc_release(lVar19);
              }
              pppuVar13 = (undefined ***)((long)pppuVar13 + 1);
            } while (pppuVar12 != pppuVar13);
            pppuVar12 = pppuVar17;
            func_0x00010bf52a60();
          } while (pppuVar12 != (undefined ***)0x0);
        }
        _objc_release(pppuVar17);
        puVar6 = puVar4;
        func_0x00010bf51e00(puVar4);
        _objc_release(puVar4);
        _objc_release(pppuVar17);
        _objc_release(pppuVar18);
        lVar20 = lVar7;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_910) {
          ___stack_chk_fail();
          _objc_release(pppuVar18);
          _objc_release(lVar7);
          __Unwind_Resume();
          pcStack_ac8 = FUN_1084e77a4;
          puStack_af0 = puVar4;
          pppuStack_ae8 = pppuVar17;
          pppuStack_ae0 = pppuVar18;
          lStack_ad8 = lVar7;
          ppuStack_ad0 = &ppuStack_8b0;
          _objc_retain();
          _objc_opt_class(PTR_PTR_1126d67a0);
          if (lVar20 == 0) {
            uStack_b00 = 0;
            uStack_b18 = 0;
            uStack_b20 = 0;
            uStack_b08 = 0;
            uStack_b10 = 0;
            uStack_b28 = 0;
            uStack_b30 = 0;
          }
          else {
            func_0x00010bfa6be0(&uStack_b30,lVar20);
          }
          lStack_b48 = 0;
          lStack_b40 = 0;
          uStack_b38 = 0;
          uStack_b4c = 0;
          puVar6 = &uStack_b30;
          func_0x00010054c81c(puVar6,&lStack_b48,&uStack_b4c);
          _objc_retainAutoreleasedReturnValue();
          if (lStack_b48 != 0) {
            lStack_b40 = lStack_b48;
            __ZdlPv();
          }
          func_0x000107c27da8(&uStack_b08);
          _objc_release(uStack_b18);
          _objc_release(uStack_b20);
          _objc_release(lVar20);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1084e6550; end: 1084e692b;  */

void FUN_1084e6550(long param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined *puVar8;
  undefined ***pppuVar9;
  long lVar10;
  long lVar11;
  undefined ***pppuVar12;
  undefined ***pppuVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  undefined ***pppuVar17;
  undefined ***pppuVar18;
  undefined ***unaff_x24;
  long lVar19;
  undefined ***unaff_x25;
  undefined ***unaff_x26;
  long lVar20;
  undefined ***unaff_x27;
  undefined ***unaff_x28;
  undefined4 uStack_93c;
  long lStack_938;
  long lStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 *puStack_8e0;
  undefined ***pppuStack_8d8;
  undefined ***pppuStack_8d0;
  long lStack_8c8;
  undefined8 **ppuStack_8c0;
  code *pcStack_8b8;
  undefined8 uStack_8b0;
  long lStack_8a8;
  long *plStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined4 uStack_86c;
  undefined4 *puStack_868;
  undefined4 *puStack_860;
  undefined8 uStack_858;
  undefined4 auStack_850 [7];
  undefined1 uStack_831;
  undefined **ppuStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined4 auStack_7e8 [6];
  long *plStack_7d0;
  long *plStack_7c8;
  undefined **ppuStack_7c0;
  undefined **ppuStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  long lStack_700;
  undefined ***pppuStack_6f0;
  undefined ***pppuStack_6e8;
  undefined ***pppuStack_6e0;
  undefined ***pppuStack_6d8;
  undefined8 uStack_6d0;
  undefined8 *puStack_6c8;
  long lStack_6c0;
  undefined ***pppuStack_6b8;
  undefined ***pppuStack_6b0;
  undefined ***pppuStack_6a8;
  undefined8 **ppuStack_6a0;
  code *pcStack_698;
  undefined ***pppuStack_690;
  long lStack_688;
  undefined8 uStack_680;
  long lStack_678;
  undefined8 *puStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined4 uStack_63c;
  undefined4 *puStack_638;
  undefined4 *puStack_630;
  undefined8 uStack_628;
  undefined4 auStack_620 [7];
  undefined1 uStack_601;
  undefined **ppuStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined4 auStack_5b8 [6];
  long *plStack_5a0;
  long *plStack_598;
  undefined **ppuStack_590;
  undefined **ppuStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  long lStack_4d0;
  undefined ***pppuStack_4c0;
  undefined ***pppuStack_4b8;
  undefined ***pppuStack_4b0;
  undefined ***pppuStack_4a8;
  undefined8 uStack_4a0;
  undefined8 *puStack_498;
  long lStack_490;
  undefined ***pppuStack_488;
  undefined ***pppuStack_480;
  undefined8 *puStack_478;
  undefined1 **ppuStack_470;
  code *pcStack_468;
  long lStack_458;
  undefined ***pppuStack_450;
  undefined ***pppuStack_448;
  undefined8 uStack_440;
  long lStack_438;
  undefined8 *puStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined4 uStack_3fc;
  undefined4 *puStack_3f8;
  undefined4 *puStack_3f0;
  undefined8 uStack_3e8;
  undefined4 auStack_3e0 [7];
  undefined1 uStack_3c1;
  undefined **ppuStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined4 auStack_378 [6];
  long *plStack_360;
  long *plStack_358;
  undefined **ppuStack_350;
  undefined **ppuStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined1 auStack_310 [128];
  long lStack_290;
  undefined ***pppuStack_280;
  undefined ***pppuStack_278;
  undefined ***pppuStack_270;
  undefined ***pppuStack_268;
  undefined ***pppuStack_260;
  long lStack_258;
  undefined8 *puStack_250;
  undefined ***pppuStack_248;
  long lStack_240;
  long lStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 *puStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1dc;
  undefined4 *puStack_1d8;
  undefined4 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined4 auStack_1c0 [7];
  undefined1 uStack_1a1;
  undefined **ppuStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 auStack_158 [6];
  long *plStack_140;
  long *plStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_70;
  
  iVar14 = (int)&uStack_220;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 == 0) {
    _objc_opt_class(PTR_PTR_1126d5c20);
    if (param_1 == 0) {
      uStack_170 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_198 = 0;
      ppuStack_1a0 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_1a0,param_1);
    }
    ppuStack_130 = (undefined **)0x0;
    ppuStack_128 = (undefined **)0x0;
    uStack_120 = 0;
    auStack_1c0[0] = 0;
    pppuVar18 = &ppuStack_1a0;
    pppuVar17 = &ppuStack_130;
    func_0x00010054c81c(pppuVar18,pppuVar17,auStack_1c0);
    _objc_retainAutoreleasedReturnValue();
    if (ppuStack_130 != (undefined **)0x0) {
      ppuStack_128 = ppuStack_130;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_178);
    _objc_release(uStack_188);
    _objc_release(uStack_190);
  }
  else {
    _objc_opt_class(PTR_PTR_1126d5c20);
    if (param_1 == 0) {
      uStack_100 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      ppuStack_128 = (undefined **)0x0;
      ppuStack_130 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_130,param_1);
    }
    puVar2 = &uStack_1a1;
    FUN_10851aec0(puVar2);
    func_0x000100950500(auStack_1c0,param_2);
    func_0x000107c281a0(&ppuStack_1a0,0xc,puVar2,auStack_1c0);
    puStack_1d8 = (undefined4 *)0x0;
    puStack_1d0 = (undefined4 *)0x0;
    uStack_1c8 = 0;
    uStack_1dc = 0;
    pppuVar18 = &ppuStack_130;
    pppuVar17 = &ppuStack_1a0;
    func_0x000107c310cc(pppuVar18,pppuVar17,&puStack_1d8,&uStack_1dc);
    _objc_retainAutoreleasedReturnValue();
    if (puStack_1d8 != (undefined4 *)0x0) {
      puStack_1d0 = puStack_1d8;
      __ZdlPv();
    }
    plVar1 = plStack_138;
    ppuStack_1a0 = &PTR_SUB_110862700;
    plStack_138 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_140;
    plStack_140 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_1d8 = auStack_158;
    func_0x000107c27dd4(&puStack_1d8);
    puStack_1d8 = auStack_1c0;
    func_0x000107c27dd4(&puStack_1d8);
    func_0x000107c27da8(&uStack_108);
    _objc_release(uStack_118);
    _objc_release(uStack_120);
  }
  puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  puStack_210 = (undefined8 *)0x0;
  _objc_retain(pppuVar18);
  pppuVar13 = pppuVar18;
  func_0x00010bf52a60();
  if (pppuVar13 != (undefined ***)0x0) {
    unaff_x26 = (undefined ***)*puStack_210;
    do {
      unaff_x27 = (undefined ***)0x0;
      do {
        if ((undefined ***)*puStack_210 != unaff_x26) {
          _objc_enumerationMutation(pppuVar18);
        }
        unaff_x24 = *(undefined ****)(lStack_218 + (long)unaff_x27 * 8);
        unaff_x25 = unaff_x24;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        pppuVar12 = unaff_x25;
        func_0x00010c08fa60();
        unaff_x28 = (undefined ***)(ulong)(pppuVar12 == (undefined ***)0x0);
        _objc_release(unaff_x25);
        if (pppuVar12 != (undefined ***)0x0) {
          unaff_x25 = unaff_x24;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar3);
          _objc_release(unaff_x25);
        }
        unaff_x27 = (undefined ***)((long)unaff_x27 + 1);
      } while (pppuVar13 != unaff_x27);
      pppuVar13 = pppuVar18;
      iVar14 = (int)&uStack_220;
      func_0x00010bf52a60();
    } while (pppuVar13 != (undefined ***)0x0);
  }
  _objc_release(pppuVar18);
  puVar4 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
  _objc_release(pppuVar18);
  _objc_release(param_2);
  lVar20 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_release(param_2);
    _objc_release(param_1);
    lVar5 = lVar20;
    __Unwind_Resume();
    pcStack_228 = FUN_1084e692c;
    lStack_290 = *(long *)PTR____stack_chk_guard_11034bdc0;
    pppuStack_280 = unaff_x28;
    pppuStack_278 = unaff_x27;
    pppuStack_270 = unaff_x26;
    pppuStack_268 = unaff_x25;
    pppuStack_260 = unaff_x24;
    lStack_258 = lVar20;
    puStack_250 = puVar3;
    pppuStack_248 = pppuVar18;
    lStack_240 = param_2;
    lStack_238 = param_1;
    puStack_230 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(pppuVar17);
    pppuVar13 = pppuVar17;
    lStack_458 = lVar5;
    pppuStack_450 = pppuVar17;
    func_0x00010bf529e0();
    if (pppuVar13 == (undefined ***)0x0) {
      _objc_opt_class(PTR_PTR_1126d6788);
      if (lVar5 == 0) {
        uStack_390 = 0;
        uStack_3a8 = 0;
        uStack_3b0 = 0;
        uStack_398 = 0;
        uStack_3a0 = 0;
        uStack_3b8 = 0;
        ppuStack_3c0 = (undefined **)0x0;
      }
      else {
        func_0x00010bfa6be0(&ppuStack_3c0,lVar5);
      }
      ppuStack_350 = (undefined **)0x0;
      ppuStack_348 = (undefined **)0x0;
      uStack_340 = 0;
      auStack_3e0[0] = 0;
      pppuVar13 = &ppuStack_3c0;
      pppuVar12 = &ppuStack_350;
      func_0x00010054c81c(pppuVar13,pppuVar12,auStack_3e0);
      _objc_retainAutoreleasedReturnValue();
      pppuStack_448 = pppuVar13;
      if (ppuStack_350 != (undefined **)0x0) {
        ppuStack_348 = ppuStack_350;
        __ZdlPv();
      }
      func_0x000107c27da8(&uStack_398);
      _objc_release(uStack_3a8);
      _objc_release(uStack_3b0);
    }
    else {
      _objc_opt_class(PTR_PTR_1126d6788);
      if (lVar5 == 0) {
        uStack_320 = 0;
        uStack_338 = 0;
        uStack_340 = 0;
        uStack_328 = 0;
        uStack_330 = 0;
        ppuStack_348 = (undefined **)0x0;
        ppuStack_350 = (undefined **)0x0;
      }
      else {
        func_0x00010bfa6be0(&ppuStack_350,lVar5);
      }
      puVar2 = &uStack_3c1;
      FUN_108517ba4(puVar2);
      func_0x000100950500(auStack_3e0,pppuStack_450);
      func_0x000107c281a0(&ppuStack_3c0,0xc,puVar2,auStack_3e0);
      puStack_3f8 = (undefined4 *)0x0;
      puStack_3f0 = (undefined4 *)0x0;
      uStack_3e8 = 0;
      uStack_3fc = 0;
      pppuVar13 = &ppuStack_350;
      pppuVar12 = &ppuStack_3c0;
      func_0x000107c310cc(pppuVar13,pppuVar12,&puStack_3f8,&uStack_3fc);
      _objc_retainAutoreleasedReturnValue();
      pppuStack_448 = pppuVar13;
      if (puStack_3f8 != (undefined4 *)0x0) {
        puStack_3f0 = puStack_3f8;
        __ZdlPv();
      }
      plVar1 = plStack_358;
      ppuStack_3c0 = &PTR_SUB_110862700;
      plStack_358 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_360;
      plStack_360 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      puStack_3f8 = auStack_378;
      func_0x000107c27dd4(&puStack_3f8);
      puStack_3f8 = auStack_3e0;
      func_0x000107c27dd4(&puStack_3f8);
      func_0x000107c27da8(&uStack_328);
      _objc_release(uStack_338);
      _objc_release(uStack_340);
    }
    puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    pppuVar13 = pppuStack_448;
    uStack_418 = 0;
    uStack_420 = 0;
    uStack_408 = 0;
    uStack_410 = 0;
    lStack_438 = 0;
    uStack_440 = 0;
    uStack_428 = 0;
    puStack_430 = (undefined8 *)0x0;
    _objc_retain(pppuStack_448);
    uVar15 = SUB84(&uStack_440,0);
    iVar16 = (int)auStack_310;
    func_0x00010bf52a60();
    if (pppuVar13 != (undefined ***)0x0) {
      pppuVar17 = (undefined ***)*puStack_430;
      do {
        pppuVar18 = (undefined ***)0x0;
        do {
          if ((undefined ***)*puStack_430 != pppuVar17) {
            _objc_enumerationMutation(pppuStack_448);
          }
          unaff_x26 = *(undefined ****)(lStack_438 + (long)pppuVar18 * 8);
          pppuVar6 = unaff_x26;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          pppuVar7 = pppuVar6;
          func_0x00010c08fa60();
          unaff_x25 = (undefined ***)(ulong)(pppuVar7 == (undefined ***)0x0);
          _objc_release(pppuVar6);
          if (pppuVar7 != (undefined ***)0x0) {
            if (iVar14 == 0) {
LAB_1084e6cd0:
              unaff_x25 = unaff_x26;
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar3);
            }
            else {
              pppuVar6 = unaff_x26;
              func_0x00010c25b340();
              _objc_retainAutoreleasedReturnValue();
              pppuVar7 = pppuVar6;
              func_0x00010bf529e0();
              _objc_release(pppuVar6);
              if (pppuVar7 == (undefined ***)0x0) goto LAB_1084e6cd0;
              pppuVar6 = unaff_x26;
              func_0x00010c25b340();
              _objc_retainAutoreleasedReturnValue();
              pppuVar12 = (undefined ***)0x0;
              unaff_x25 = pppuVar6;
              FUN_1084d2cc4();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(pppuVar6);
              pppuVar6 = unaff_x25;
              func_0x00010bf529e0();
              if (pppuVar6 != (undefined ***)0x0) {
                puVar8 = PTR_PTR_1126d6788;
                _objc_alloc(PTR_PTR_1126d6788);
                unaff_x27 = unaff_x26;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                unaff_x28 = unaff_x26;
                func_0x00010c15e620();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c05bc60(puVar8);
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar3);
                _objc_release(unaff_x26);
                _objc_release(puVar8);
                _objc_release(unaff_x28);
                _objc_release(unaff_x27);
              }
            }
            _objc_release(unaff_x25);
          }
          pppuVar18 = (undefined ***)((long)pppuVar18 + 1);
        } while (pppuVar13 != pppuVar18);
        uVar15 = SUB84(&uStack_440,0);
        iVar16 = (int)auStack_310;
        pppuVar13 = pppuStack_448;
        func_0x00010bf52a60();
      } while (pppuVar13 != (undefined ***)0x0);
    }
    _objc_release(pppuStack_448);
    puVar4 = puVar3;
    func_0x00010bf51e00();
    _objc_release(puVar3);
    _objc_release(pppuStack_448);
    _objc_release(pppuStack_450);
    lVar20 = lStack_458;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_290) {
      ___stack_chk_fail();
      _objc_release(pppuStack_450);
      _objc_release(lStack_458);
      lVar5 = lVar20;
      __Unwind_Resume();
      pcStack_468 = FUN_1084e6e98;
      lStack_4d0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lStack_688 = lVar5;
      pppuStack_4c0 = unaff_x28;
      pppuStack_4b8 = unaff_x27;
      pppuStack_4b0 = unaff_x26;
      pppuStack_4a8 = unaff_x25;
      uStack_4a0 = 0;
      puStack_498 = puVar3;
      lStack_490 = lVar20;
      pppuStack_488 = pppuVar18;
      pppuStack_480 = pppuVar17;
      puStack_478 = puVar4;
      ppuStack_470 = &puStack_230;
      _objc_retain();
      _objc_retain(pppuVar12);
      pppuStack_690 = pppuVar12;
      if (pppuVar12 == (undefined ***)0x0) {
        _objc_opt_class(PTR_PTR_1126d9e48);
        if (lStack_688 == 0) {
          uStack_5d0 = 0;
          uStack_5e8 = 0;
          uStack_5f0 = 0;
          uStack_5d8 = 0;
          uStack_5e0 = 0;
          uStack_5f8 = 0;
          ppuStack_600 = (undefined **)0x0;
        }
        else {
          func_0x00010bfa6be0(&ppuStack_600);
        }
        ppuStack_590 = (undefined **)0x0;
        ppuStack_588 = (undefined **)0x0;
        uStack_580 = 0;
        pppuVar12 = &ppuStack_600;
        pppuVar18 = &ppuStack_600;
        pppuVar13 = &ppuStack_590;
        auStack_620[0] = uVar15;
        func_0x00010054c81c(pppuVar18,pppuVar13,auStack_620);
        _objc_retainAutoreleasedReturnValue();
        if (ppuStack_590 != (undefined **)0x0) {
          ppuStack_588 = ppuStack_590;
          __ZdlPv();
        }
        func_0x000107c27da8(&uStack_5d8);
        _objc_release(uStack_5e8);
        _objc_release(uStack_5f0);
      }
      else {
        _objc_opt_class(PTR_PTR_1126d9e48);
        if (lStack_688 == 0) {
          uStack_560 = 0;
          uStack_578 = 0;
          uStack_580 = 0;
          uStack_568 = 0;
          uStack_570 = 0;
          ppuStack_588 = (undefined **)0x0;
          ppuStack_590 = (undefined **)0x0;
        }
        else {
          func_0x00010bfa6be0(&ppuStack_590);
        }
        puVar2 = &uStack_601;
        func_0x00010095049c(puVar2);
        func_0x000100950500(auStack_620,pppuStack_690);
        func_0x000107c281a0(&ppuStack_600,0xc,puVar2,auStack_620);
        puStack_638 = (undefined4 *)0x0;
        puStack_630 = (undefined4 *)0x0;
        uStack_628 = 0;
        uStack_63c = 0;
        pppuVar18 = &ppuStack_590;
        pppuVar13 = &ppuStack_600;
        func_0x000107c310cc(pppuVar18,pppuVar13,&puStack_638,&uStack_63c);
        _objc_retainAutoreleasedReturnValue();
        if (puStack_638 != (undefined4 *)0x0) {
          puStack_630 = puStack_638;
          __ZdlPv();
        }
        plVar1 = plStack_598;
        ppuStack_600 = &PTR_SUB_110862700;
        plStack_598 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_5a0;
        plStack_5a0 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        puStack_638 = auStack_5b8;
        func_0x000107c27dd4(&puStack_638);
        puStack_638 = auStack_620;
        func_0x000107c27dd4(&puStack_638);
        func_0x000107c27da8(&uStack_568);
        _objc_release(uStack_578);
        _objc_release(uStack_580);
      }
      puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uStack_658 = 0;
      uStack_660 = 0;
      uStack_648 = 0;
      uStack_650 = 0;
      lStack_678 = 0;
      uStack_680 = 0;
      uStack_668 = 0;
      puStack_670 = (undefined8 *)0x0;
      _objc_retain(pppuVar18);
      pppuVar6 = pppuVar18;
      func_0x00010bf52a60();
      if (pppuVar6 != (undefined ***)0x0) {
        pppuVar17 = (undefined ***)*puStack_670;
        do {
          pppuVar12 = (undefined ***)0x0;
          do {
            if ((undefined ***)*puStack_670 != pppuVar17) {
              _objc_enumerationMutation(pppuVar18);
            }
            unaff_x26 = *(undefined ****)(lStack_678 + (long)pppuVar12 * 8);
            unaff_x25 = unaff_x26;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            pppuVar7 = unaff_x25;
            func_0x00010c08fa60();
            unaff_x27 = (undefined ***)(ulong)(pppuVar7 == (undefined ***)0x0);
            _objc_release(unaff_x25);
            if (pppuVar7 != (undefined ***)0x0) {
              if (iVar16 == 0) {
LAB_1084e7214:
                unaff_x25 = unaff_x26;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar3);
              }
              else {
                pppuVar7 = unaff_x26;
                func_0x00010c25b340();
                _objc_retainAutoreleasedReturnValue();
                pppuVar9 = pppuVar7;
                func_0x00010bf529e0();
                unaff_x27 = (undefined ***)(ulong)(pppuVar9 == (undefined ***)0x0);
                _objc_release(pppuVar7);
                if (pppuVar9 == (undefined ***)0x0) goto LAB_1084e7214;
                unaff_x27 = unaff_x26;
                func_0x00010c25b340();
                _objc_retainAutoreleasedReturnValue();
                pppuVar13 = (undefined ***)0x0;
                unaff_x25 = unaff_x27;
                FUN_1084d2cc4();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(unaff_x27);
                pppuVar7 = unaff_x25;
                func_0x00010bf529e0();
                if (pppuVar7 != (undefined ***)0x0) {
                  unaff_x28 = (undefined ***)PTR_PTR_1126d9e48;
                  _objc_alloc();
                  unaff_x27 = unaff_x26;
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c05bc40();
                  func_0x00010c2923e0();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x00010c1d0640(puVar3);
                  _objc_release(unaff_x26);
                  _objc_release(unaff_x28);
                  _objc_release(unaff_x27);
                }
              }
              _objc_release(unaff_x25);
            }
            pppuVar12 = (undefined ***)((long)pppuVar12 + 1);
          } while (pppuVar6 != pppuVar12);
          pppuVar6 = pppuVar18;
          func_0x00010bf52a60();
        } while (pppuVar6 != (undefined ***)0x0);
      }
      _objc_release(pppuVar18);
      puVar4 = puVar3;
      func_0x00010bf51e00(puVar3);
      _objc_release(puVar3);
      _objc_release(pppuVar18);
      _objc_release(pppuStack_690);
      lVar20 = lStack_688;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4d0) {
        ___stack_chk_fail();
        _objc_release(pppuStack_690);
        _objc_release(lStack_688);
        lVar5 = lVar20;
        __Unwind_Resume();
        pcStack_698 = FUN_1084e73c8;
        lStack_700 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pppuStack_6f0 = unaff_x28;
        pppuStack_6e8 = unaff_x27;
        pppuStack_6e0 = unaff_x26;
        pppuStack_6d8 = unaff_x25;
        uStack_6d0 = 0;
        puStack_6c8 = puVar3;
        lStack_6c0 = lVar20;
        pppuStack_6b8 = pppuVar18;
        pppuStack_6b0 = pppuVar17;
        pppuStack_6a8 = pppuVar12;
        ppuStack_6a0 = &ppuStack_470;
        _objc_retain();
        _objc_retain(pppuVar13);
        if (pppuVar13 == (undefined ***)0x0) {
          _objc_opt_class(PTR_PTR_1126d67a0);
          if (lVar5 == 0) {
            uStack_800 = 0;
            uStack_818 = 0;
            uStack_820 = 0;
            uStack_808 = 0;
            uStack_810 = 0;
            uStack_828 = 0;
            ppuStack_830 = (undefined **)0x0;
          }
          else {
            func_0x00010bfa6be0(&ppuStack_830,lVar5);
          }
          ppuStack_7c0 = (undefined **)0x0;
          ppuStack_7b8 = (undefined **)0x0;
          uStack_7b0 = 0;
          auStack_850[0] = 0;
          pppuVar17 = &ppuStack_830;
          func_0x00010054c81c(pppuVar17,&ppuStack_7c0,auStack_850);
          _objc_retainAutoreleasedReturnValue();
          if (ppuStack_7c0 != (undefined **)0x0) {
            ppuStack_7b8 = ppuStack_7c0;
            __ZdlPv();
          }
          func_0x000107c27da8(&uStack_808);
          _objc_release(uStack_818);
          _objc_release(uStack_820);
        }
        else {
          _objc_opt_class(PTR_PTR_1126d67a0);
          if (lVar5 == 0) {
            uStack_790 = 0;
            uStack_7a8 = 0;
            uStack_7b0 = 0;
            uStack_798 = 0;
            uStack_7a0 = 0;
            ppuStack_7b8 = (undefined **)0x0;
            ppuStack_7c0 = (undefined **)0x0;
          }
          else {
            func_0x00010bfa6be0(&ppuStack_7c0,lVar5);
          }
          puVar2 = &uStack_831;
          FUN_10850e510(puVar2);
          func_0x000100950500(auStack_850,pppuVar13);
          func_0x000107c281a0(&ppuStack_830,0xc,puVar2,auStack_850);
          puStack_868 = (undefined4 *)0x0;
          puStack_860 = (undefined4 *)0x0;
          uStack_858 = 0;
          uStack_86c = 0;
          pppuVar17 = &ppuStack_7c0;
          func_0x000107c310cc(pppuVar17,&ppuStack_830,&puStack_868,&uStack_86c);
          _objc_retainAutoreleasedReturnValue();
          if (puStack_868 != (undefined4 *)0x0) {
            puStack_860 = puStack_868;
            __ZdlPv();
          }
          plVar1 = plStack_7c8;
          ppuStack_830 = &PTR_SUB_110862700;
          plStack_7c8 = (long *)0x0;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          plVar1 = plStack_7d0;
          plStack_7d0 = (long *)0x0;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          puStack_868 = auStack_7e8;
          func_0x000107c27dd4(&puStack_868);
          puStack_868 = auStack_850;
          func_0x000107c27dd4(&puStack_868);
          func_0x000107c27da8(&uStack_798);
          _objc_release(uStack_7a8);
          _objc_release(uStack_7b0);
        }
        puVar3 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
        func_0x00010bf71e20();
        _objc_retainAutoreleasedReturnValue();
        uStack_888 = 0;
        uStack_890 = 0;
        uStack_878 = 0;
        uStack_880 = 0;
        lStack_8a8 = 0;
        uStack_8b0 = 0;
        uStack_898 = 0;
        plStack_8a0 = (long *)0x0;
        _objc_retain(pppuVar17);
        pppuVar18 = pppuVar17;
        func_0x00010bf52a60();
        if (pppuVar18 != (undefined ***)0x0) {
          lVar20 = *plStack_8a0;
          do {
            pppuVar12 = (undefined ***)0x0;
            do {
              if (*plStack_8a0 != lVar20) {
                _objc_enumerationMutation(pppuVar17);
              }
              lVar19 = *(long *)(lStack_8a8 + (long)pppuVar12 * 8);
              lVar10 = lVar19;
              func_0x00010c11ac00();
              _objc_retainAutoreleasedReturnValue();
              lVar11 = lVar10;
              func_0x00010c08fa60();
              _objc_release(lVar10);
              if (lVar11 != 0) {
                func_0x00010c11ac00(lVar19);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar3);
                _objc_release(lVar19);
              }
              pppuVar12 = (undefined ***)((long)pppuVar12 + 1);
            } while (pppuVar18 != pppuVar12);
            pppuVar18 = pppuVar17;
            func_0x00010bf52a60();
          } while (pppuVar18 != (undefined ***)0x0);
        }
        _objc_release(pppuVar17);
        puVar4 = puVar3;
        func_0x00010bf51e00(puVar3);
        _objc_release(puVar3);
        _objc_release(pppuVar17);
        _objc_release(pppuVar13);
        lVar20 = lVar5;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_700) {
          ___stack_chk_fail();
          _objc_release(pppuVar13);
          _objc_release(lVar5);
          __Unwind_Resume();
          pcStack_8b8 = FUN_1084e77a4;
          puStack_8e0 = puVar3;
          pppuStack_8d8 = pppuVar17;
          pppuStack_8d0 = pppuVar13;
          lStack_8c8 = lVar5;
          ppuStack_8c0 = &ppuStack_6a0;
          _objc_retain();
          _objc_opt_class(PTR_PTR_1126d67a0);
          if (lVar20 == 0) {
            uStack_8f0 = 0;
            uStack_908 = 0;
            uStack_910 = 0;
            uStack_8f8 = 0;
            uStack_900 = 0;
            uStack_918 = 0;
            uStack_920 = 0;
          }
          else {
            func_0x00010bfa6be0(&uStack_920,lVar20);
          }
          lStack_938 = 0;
          lStack_930 = 0;
          uStack_928 = 0;
          uStack_93c = 0;
          puVar4 = &uStack_920;
          func_0x00010054c81c(puVar4,&lStack_938,&uStack_93c);
          _objc_retainAutoreleasedReturnValue();
          if (lStack_938 != 0) {
            lStack_930 = lStack_938;
            __ZdlPv();
          }
          func_0x000107c27da8(&uStack_8f8);
          _objc_release(uStack_908);
          _objc_release(uStack_910);
          _objc_release(lVar20);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1084e692c; end: 1084e6e97;  */

void FUN_1084e692c(long param_1,long param_2,int param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined ***pppuVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined4 uVar13;
  int iVar14;
  undefined ***unaff_x21;
  long lVar15;
  undefined *unaff_x25;
  undefined *unaff_x26;
  long lVar16;
  undefined *unaff_x27;
  undefined ***pppuVar17;
  undefined *unaff_x28;
  undefined4 uStack_71c;
  long lStack_718;
  long lStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 *puStack_6c0;
  undefined ***pppuStack_6b8;
  undefined ***pppuStack_6b0;
  long lStack_6a8;
  undefined8 **ppuStack_6a0;
  code *pcStack_698;
  undefined8 uStack_690;
  long lStack_688;
  long *plStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined4 uStack_64c;
  undefined4 *puStack_648;
  undefined4 *puStack_640;
  undefined8 uStack_638;
  undefined4 auStack_630 [7];
  undefined1 uStack_611;
  undefined **ppuStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined4 auStack_5c8 [6];
  long *plStack_5b0;
  long *plStack_5a8;
  undefined **ppuStack_5a0;
  undefined **ppuStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  long lStack_4e0;
  undefined *puStack_4d0;
  undefined *puStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined8 uStack_4b0;
  undefined8 *puStack_4a8;
  long lStack_4a0;
  undefined ***pppuStack_498;
  long lStack_490;
  undefined ***pppuStack_488;
  undefined1 **ppuStack_480;
  code *pcStack_478;
  undefined ***pppuStack_470;
  long lStack_468;
  undefined8 uStack_460;
  long lStack_458;
  long *plStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined4 uStack_41c;
  undefined4 *puStack_418;
  undefined4 *puStack_410;
  undefined8 uStack_408;
  undefined4 auStack_400 [7];
  undefined1 uStack_3e1;
  undefined **ppuStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined4 auStack_398 [6];
  long *plStack_380;
  long *plStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  long lStack_2b0;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined *puStack_288;
  undefined8 uStack_280;
  undefined8 *puStack_278;
  long lStack_270;
  undefined ***pppuStack_268;
  long lStack_260;
  undefined8 *puStack_258;
  undefined1 *puStack_250;
  code *pcStack_248;
  long lStack_238;
  long lStack_230;
  undefined ***pppuStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1dc;
  undefined4 *puStack_1d8;
  undefined4 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined4 auStack_1c0 [7];
  undefined1 uStack_1a1;
  undefined **ppuStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 auStack_158 [6];
  long *plStack_140;
  long *plStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  lVar16 = param_2;
  lStack_238 = param_1;
  lStack_230 = param_2;
  func_0x00010bf529e0();
  if (lVar16 == 0) {
    _objc_opt_class(PTR_PTR_1126d6788);
    if (param_1 == 0) {
      uStack_170 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_198 = 0;
      ppuStack_1a0 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_1a0,param_1);
    }
    ppuStack_130 = (undefined **)0x0;
    ppuStack_128 = (undefined **)0x0;
    uStack_120 = 0;
    auStack_1c0[0] = 0;
    pppuVar3 = &ppuStack_1a0;
    pppuVar11 = &ppuStack_130;
    func_0x00010054c81c(pppuVar3,pppuVar11,auStack_1c0);
    _objc_retainAutoreleasedReturnValue();
    pppuStack_228 = pppuVar3;
    if (ppuStack_130 != (undefined **)0x0) {
      ppuStack_128 = ppuStack_130;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_178);
    _objc_release(uStack_188);
    _objc_release(uStack_190);
  }
  else {
    _objc_opt_class(PTR_PTR_1126d6788);
    if (param_1 == 0) {
      uStack_100 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      ppuStack_128 = (undefined **)0x0;
      ppuStack_130 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_130,param_1);
    }
    puVar2 = &uStack_1a1;
    FUN_108517ba4(puVar2);
    func_0x000100950500(auStack_1c0,lStack_230);
    func_0x000107c281a0(&ppuStack_1a0,0xc,puVar2,auStack_1c0);
    puStack_1d8 = (undefined4 *)0x0;
    puStack_1d0 = (undefined4 *)0x0;
    uStack_1c8 = 0;
    uStack_1dc = 0;
    pppuVar3 = &ppuStack_130;
    pppuVar11 = &ppuStack_1a0;
    func_0x000107c310cc(pppuVar3,pppuVar11,&puStack_1d8,&uStack_1dc);
    _objc_retainAutoreleasedReturnValue();
    pppuStack_228 = pppuVar3;
    if (puStack_1d8 != (undefined4 *)0x0) {
      puStack_1d0 = puStack_1d8;
      __ZdlPv();
    }
    plVar1 = plStack_138;
    ppuStack_1a0 = &PTR_SUB_110862700;
    plStack_138 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_140;
    plStack_140 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_1d8 = auStack_158;
    func_0x000107c27dd4(&puStack_1d8);
    puStack_1d8 = auStack_1c0;
    func_0x000107c27dd4(&puStack_1d8);
    func_0x000107c27da8(&uStack_108);
    _objc_release(uStack_118);
    _objc_release(uStack_120);
  }
  puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  pppuVar3 = pppuStack_228;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  _objc_retain(pppuStack_228);
  uVar13 = SUB84(&uStack_220,0);
  iVar14 = (int)auStack_f0;
  func_0x00010bf52a60();
  if (pppuVar3 != (undefined ***)0x0) {
    param_2 = *plStack_210;
    do {
      unaff_x21 = (undefined ***)0x0;
      do {
        if (*plStack_210 != param_2) {
          _objc_enumerationMutation(pppuStack_228);
        }
        unaff_x26 = *(undefined **)(lStack_218 + (long)unaff_x21 * 8);
        puVar5 = unaff_x26;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c08fa60();
        unaff_x25 = (undefined *)(ulong)(puVar6 == (undefined *)0x0);
        _objc_release(puVar5);
        if (puVar6 != (undefined *)0x0) {
          if (param_3 == 0) {
LAB_1084e6cd0:
            unaff_x25 = unaff_x26;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar4);
          }
          else {
            puVar5 = unaff_x26;
            func_0x00010c25b340();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010bf529e0();
            _objc_release(puVar5);
            if (puVar6 == (undefined *)0x0) goto LAB_1084e6cd0;
            puVar5 = unaff_x26;
            func_0x00010c25b340();
            _objc_retainAutoreleasedReturnValue();
            pppuVar11 = (undefined ***)0x0;
            unaff_x25 = puVar5;
            FUN_1084d2cc4();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar5);
            puVar5 = unaff_x25;
            func_0x00010bf529e0();
            if (puVar5 != (undefined *)0x0) {
              puVar5 = PTR_PTR_1126d6788;
              _objc_alloc(PTR_PTR_1126d6788);
              unaff_x27 = unaff_x26;
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              unaff_x28 = unaff_x26;
              func_0x00010c15e620();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c05bc60(puVar5);
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar4);
              _objc_release(unaff_x26);
              _objc_release(puVar5);
              _objc_release(unaff_x28);
              _objc_release(unaff_x27);
            }
          }
          _objc_release(unaff_x25);
        }
        unaff_x21 = (undefined ***)((long)unaff_x21 + 1);
      } while (pppuVar3 != unaff_x21);
      uVar13 = SUB84(&uStack_220,0);
      iVar14 = (int)auStack_f0;
      pppuVar3 = pppuStack_228;
      func_0x00010bf52a60();
    } while (pppuVar3 != (undefined ***)0x0);
  }
  _objc_release(pppuStack_228);
  puVar7 = puVar4;
  func_0x00010bf51e00();
  _objc_release(puVar4);
  _objc_release(pppuStack_228);
  _objc_release(lStack_230);
  lVar16 = lStack_238;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_release(lStack_230);
    _objc_release(lStack_238);
    lVar8 = lVar16;
    __Unwind_Resume();
    pcStack_248 = FUN_1084e6e98;
    lStack_2b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_468 = lVar8;
    puStack_2a0 = unaff_x28;
    puStack_298 = unaff_x27;
    puStack_290 = unaff_x26;
    puStack_288 = unaff_x25;
    uStack_280 = 0;
    puStack_278 = puVar4;
    lStack_270 = lVar16;
    pppuStack_268 = unaff_x21;
    lStack_260 = param_2;
    puStack_258 = puVar7;
    puStack_250 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(pppuVar11);
    pppuStack_470 = pppuVar11;
    if (pppuVar11 == (undefined ***)0x0) {
      _objc_opt_class(PTR_PTR_1126d9e48);
      if (lStack_468 == 0) {
        uStack_3b0 = 0;
        uStack_3c8 = 0;
        uStack_3d0 = 0;
        uStack_3b8 = 0;
        uStack_3c0 = 0;
        uStack_3d8 = 0;
        ppuStack_3e0 = (undefined **)0x0;
      }
      else {
        func_0x00010bfa6be0(&ppuStack_3e0);
      }
      ppuStack_370 = (undefined **)0x0;
      ppuStack_368 = (undefined **)0x0;
      uStack_360 = 0;
      pppuVar11 = &ppuStack_3e0;
      pppuVar3 = &ppuStack_3e0;
      pppuVar12 = &ppuStack_370;
      auStack_400[0] = uVar13;
      func_0x00010054c81c(pppuVar3,pppuVar12,auStack_400);
      _objc_retainAutoreleasedReturnValue();
      if (ppuStack_370 != (undefined **)0x0) {
        ppuStack_368 = ppuStack_370;
        __ZdlPv();
      }
      func_0x000107c27da8(&uStack_3b8);
      _objc_release(uStack_3c8);
      _objc_release(uStack_3d0);
    }
    else {
      _objc_opt_class(PTR_PTR_1126d9e48);
      if (lStack_468 == 0) {
        uStack_340 = 0;
        uStack_358 = 0;
        uStack_360 = 0;
        uStack_348 = 0;
        uStack_350 = 0;
        ppuStack_368 = (undefined **)0x0;
        ppuStack_370 = (undefined **)0x0;
      }
      else {
        func_0x00010bfa6be0(&ppuStack_370);
      }
      puVar2 = &uStack_3e1;
      func_0x00010095049c(puVar2);
      func_0x000100950500(auStack_400,pppuStack_470);
      func_0x000107c281a0(&ppuStack_3e0,0xc,puVar2,auStack_400);
      puStack_418 = (undefined4 *)0x0;
      puStack_410 = (undefined4 *)0x0;
      uStack_408 = 0;
      uStack_41c = 0;
      pppuVar3 = &ppuStack_370;
      pppuVar12 = &ppuStack_3e0;
      func_0x000107c310cc(pppuVar3,pppuVar12,&puStack_418,&uStack_41c);
      _objc_retainAutoreleasedReturnValue();
      if (puStack_418 != (undefined4 *)0x0) {
        puStack_410 = puStack_418;
        __ZdlPv();
      }
      plVar1 = plStack_378;
      ppuStack_3e0 = &PTR_SUB_110862700;
      plStack_378 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_380;
      plStack_380 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      puStack_418 = auStack_398;
      func_0x000107c27dd4(&puStack_418);
      puStack_418 = auStack_400;
      func_0x000107c27dd4(&puStack_418);
      func_0x000107c27da8(&uStack_348);
      _objc_release(uStack_358);
      _objc_release(uStack_360);
    }
    puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uStack_438 = 0;
    uStack_440 = 0;
    uStack_428 = 0;
    uStack_430 = 0;
    lStack_458 = 0;
    uStack_460 = 0;
    uStack_448 = 0;
    plStack_450 = (long *)0x0;
    _objc_retain(pppuVar3);
    pppuVar17 = pppuVar3;
    func_0x00010bf52a60();
    if (pppuVar17 != (undefined ***)0x0) {
      param_2 = *plStack_450;
      do {
        pppuVar11 = (undefined ***)0x0;
        do {
          if (*plStack_450 != param_2) {
            _objc_enumerationMutation(pppuVar3);
          }
          unaff_x26 = *(undefined **)(lStack_458 + (long)pppuVar11 * 8);
          unaff_x25 = unaff_x26;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = unaff_x25;
          func_0x00010c08fa60();
          unaff_x27 = (undefined *)(ulong)(puVar5 == (undefined *)0x0);
          _objc_release(unaff_x25);
          if (puVar5 != (undefined *)0x0) {
            if (iVar14 == 0) {
LAB_1084e7214:
              unaff_x25 = unaff_x26;
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar4);
            }
            else {
              puVar5 = unaff_x26;
              func_0x00010c25b340();
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar5;
              func_0x00010bf529e0();
              unaff_x27 = (undefined *)(ulong)(puVar6 == (undefined *)0x0);
              _objc_release(puVar5);
              if (puVar6 == (undefined *)0x0) goto LAB_1084e7214;
              unaff_x27 = unaff_x26;
              func_0x00010c25b340();
              _objc_retainAutoreleasedReturnValue();
              pppuVar12 = (undefined ***)0x0;
              unaff_x25 = unaff_x27;
              FUN_1084d2cc4();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(unaff_x27);
              puVar5 = unaff_x25;
              func_0x00010bf529e0();
              if (puVar5 != (undefined *)0x0) {
                unaff_x28 = PTR_PTR_1126d9e48;
                _objc_alloc();
                unaff_x27 = unaff_x26;
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c05bc40();
                func_0x00010c2923e0();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1d0640(puVar4);
                _objc_release(unaff_x26);
                _objc_release(unaff_x28);
                _objc_release(unaff_x27);
              }
            }
            _objc_release(unaff_x25);
          }
          pppuVar11 = (undefined ***)((long)pppuVar11 + 1);
        } while (pppuVar17 != pppuVar11);
        pppuVar17 = pppuVar3;
        func_0x00010bf52a60();
      } while (pppuVar17 != (undefined ***)0x0);
    }
    _objc_release(pppuVar3);
    puVar7 = puVar4;
    func_0x00010bf51e00(puVar4);
    _objc_release(puVar4);
    _objc_release(pppuVar3);
    _objc_release(pppuStack_470);
    lVar16 = lStack_468;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2b0) {
      ___stack_chk_fail();
      _objc_release(pppuStack_470);
      _objc_release(lStack_468);
      lVar8 = lVar16;
      __Unwind_Resume();
      pcStack_478 = FUN_1084e73c8;
      lStack_4e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puStack_4d0 = unaff_x28;
      puStack_4c8 = unaff_x27;
      puStack_4c0 = unaff_x26;
      puStack_4b8 = unaff_x25;
      uStack_4b0 = 0;
      puStack_4a8 = puVar4;
      lStack_4a0 = lVar16;
      pppuStack_498 = pppuVar3;
      lStack_490 = param_2;
      pppuStack_488 = pppuVar11;
      ppuStack_480 = &puStack_250;
      _objc_retain();
      _objc_retain(pppuVar12);
      if (pppuVar12 == (undefined ***)0x0) {
        _objc_opt_class(PTR_PTR_1126d67a0);
        if (lVar8 == 0) {
          uStack_5e0 = 0;
          uStack_5f8 = 0;
          uStack_600 = 0;
          uStack_5e8 = 0;
          uStack_5f0 = 0;
          uStack_608 = 0;
          ppuStack_610 = (undefined **)0x0;
        }
        else {
          func_0x00010bfa6be0(&ppuStack_610,lVar8);
        }
        ppuStack_5a0 = (undefined **)0x0;
        ppuStack_598 = (undefined **)0x0;
        uStack_590 = 0;
        auStack_630[0] = 0;
        pppuVar3 = &ppuStack_610;
        func_0x00010054c81c(pppuVar3,&ppuStack_5a0,auStack_630);
        _objc_retainAutoreleasedReturnValue();
        if (ppuStack_5a0 != (undefined **)0x0) {
          ppuStack_598 = ppuStack_5a0;
          __ZdlPv();
        }
        func_0x000107c27da8(&uStack_5e8);
        _objc_release(uStack_5f8);
        _objc_release(uStack_600);
      }
      else {
        _objc_opt_class(PTR_PTR_1126d67a0);
        if (lVar8 == 0) {
          uStack_570 = 0;
          uStack_588 = 0;
          uStack_590 = 0;
          uStack_578 = 0;
          uStack_580 = 0;
          ppuStack_598 = (undefined **)0x0;
          ppuStack_5a0 = (undefined **)0x0;
        }
        else {
          func_0x00010bfa6be0(&ppuStack_5a0,lVar8);
        }
        puVar2 = &uStack_611;
        FUN_10850e510(puVar2);
        func_0x000100950500(auStack_630,pppuVar12);
        func_0x000107c281a0(&ppuStack_610,0xc,puVar2,auStack_630);
        puStack_648 = (undefined4 *)0x0;
        puStack_640 = (undefined4 *)0x0;
        uStack_638 = 0;
        uStack_64c = 0;
        pppuVar3 = &ppuStack_5a0;
        func_0x000107c310cc(pppuVar3,&ppuStack_610,&puStack_648,&uStack_64c);
        _objc_retainAutoreleasedReturnValue();
        if (puStack_648 != (undefined4 *)0x0) {
          puStack_640 = puStack_648;
          __ZdlPv();
        }
        plVar1 = plStack_5a8;
        ppuStack_610 = &PTR_SUB_110862700;
        plStack_5a8 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_5b0;
        plStack_5b0 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        puStack_648 = auStack_5c8;
        func_0x000107c27dd4(&puStack_648);
        puStack_648 = auStack_630;
        func_0x000107c27dd4(&puStack_648);
        func_0x000107c27da8(&uStack_578);
        _objc_release(uStack_588);
        _objc_release(uStack_590);
      }
      puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uStack_668 = 0;
      uStack_670 = 0;
      uStack_658 = 0;
      uStack_660 = 0;
      lStack_688 = 0;
      uStack_690 = 0;
      uStack_678 = 0;
      plStack_680 = (long *)0x0;
      _objc_retain(pppuVar3);
      pppuVar11 = pppuVar3;
      func_0x00010bf52a60();
      if (pppuVar11 != (undefined ***)0x0) {
        lVar16 = *plStack_680;
        do {
          pppuVar17 = (undefined ***)0x0;
          do {
            if (*plStack_680 != lVar16) {
              _objc_enumerationMutation(pppuVar3);
            }
            lVar15 = *(long *)(lStack_688 + (long)pppuVar17 * 8);
            lVar9 = lVar15;
            func_0x00010c11ac00();
            _objc_retainAutoreleasedReturnValue();
            lVar10 = lVar9;
            func_0x00010c08fa60();
            _objc_release(lVar9);
            if (lVar10 != 0) {
              func_0x00010c11ac00(lVar15);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar4);
              _objc_release(lVar15);
            }
            pppuVar17 = (undefined ***)((long)pppuVar17 + 1);
          } while (pppuVar11 != pppuVar17);
          pppuVar11 = pppuVar3;
          func_0x00010bf52a60();
        } while (pppuVar11 != (undefined ***)0x0);
      }
      _objc_release(pppuVar3);
      puVar7 = puVar4;
      func_0x00010bf51e00(puVar4);
      _objc_release(puVar4);
      _objc_release(pppuVar3);
      _objc_release(pppuVar12);
      lVar16 = lVar8;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_4e0) {
        ___stack_chk_fail();
        _objc_release(pppuVar12);
        _objc_release(lVar8);
        __Unwind_Resume();
        pcStack_698 = FUN_1084e77a4;
        puStack_6c0 = puVar4;
        pppuStack_6b8 = pppuVar3;
        pppuStack_6b0 = pppuVar12;
        lStack_6a8 = lVar8;
        ppuStack_6a0 = &ppuStack_480;
        _objc_retain();
        _objc_opt_class(PTR_PTR_1126d67a0);
        if (lVar16 == 0) {
          uStack_6d0 = 0;
          uStack_6e8 = 0;
          uStack_6f0 = 0;
          uStack_6d8 = 0;
          uStack_6e0 = 0;
          uStack_6f8 = 0;
          uStack_700 = 0;
        }
        else {
          func_0x00010bfa6be0(&uStack_700,lVar16);
        }
        lStack_718 = 0;
        lStack_710 = 0;
        uStack_708 = 0;
        uStack_71c = 0;
        puVar7 = &uStack_700;
        func_0x00010054c81c(puVar7,&lStack_718,&uStack_71c);
        _objc_retainAutoreleasedReturnValue();
        if (lStack_718 != 0) {
          lStack_710 = lStack_718;
          __ZdlPv();
        }
        func_0x000107c27da8(&uStack_6d8);
        _objc_release(uStack_6e8);
        _objc_release(uStack_6f0);
        _objc_release(lVar16);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1084e6e98; end: 1084e73c7;  */

void FUN_1084e6e98(long param_1,undefined ***param_2,undefined4 param_3,int param_4)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined ***pppuVar3;
  undefined8 *puVar4;
  undefined ***pppuVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined ***pppuVar12;
  long unaff_x20;
  long lVar13;
  ulong unaff_x25;
  ulong unaff_x26;
  long lVar14;
  ulong unaff_x27;
  undefined ***pppuVar15;
  undefined *unaff_x28;
  undefined4 uStack_4dc;
  long lStack_4d8;
  long lStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 *puStack_480;
  undefined ***pppuStack_478;
  undefined ***pppuStack_470;
  long lStack_468;
  undefined1 **ppuStack_460;
  code *pcStack_458;
  undefined8 uStack_450;
  long lStack_448;
  long *plStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined4 uStack_40c;
  undefined4 *puStack_408;
  undefined4 *puStack_400;
  undefined8 uStack_3f8;
  undefined4 auStack_3f0 [7];
  undefined1 uStack_3d1;
  undefined **ppuStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined4 auStack_388 [6];
  long *plStack_370;
  long *plStack_368;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_2a0;
  undefined *puStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  undefined8 uStack_270;
  undefined8 *puStack_268;
  long lStack_260;
  undefined ***pppuStack_258;
  long lStack_250;
  undefined ***pppuStack_248;
  undefined1 *puStack_240;
  code *pcStack_238;
  undefined ***pppuStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1dc;
  undefined4 *puStack_1d8;
  undefined4 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined4 auStack_1c0 [7];
  undefined1 uStack_1a1;
  undefined **ppuStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 auStack_158 [6];
  long *plStack_140;
  long *plStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_228 = param_1;
  _objc_retain();
  _objc_retain(param_2);
  pppuStack_230 = param_2;
  if (param_2 == (undefined ***)0x0) {
    _objc_opt_class(PTR_PTR_1126d9e48);
    if (lStack_228 == 0) {
      uStack_170 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_198 = 0;
      ppuStack_1a0 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_1a0);
    }
    ppuStack_130 = (undefined **)0x0;
    ppuStack_128 = (undefined **)0x0;
    uStack_120 = 0;
    param_2 = &ppuStack_1a0;
    pppuVar3 = &ppuStack_1a0;
    pppuVar12 = &ppuStack_130;
    auStack_1c0[0] = param_3;
    func_0x00010054c81c(pppuVar3,pppuVar12,auStack_1c0);
    _objc_retainAutoreleasedReturnValue();
    if (ppuStack_130 != (undefined **)0x0) {
      ppuStack_128 = ppuStack_130;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_178);
    _objc_release(uStack_188);
    _objc_release(uStack_190);
  }
  else {
    _objc_opt_class(PTR_PTR_1126d9e48);
    if (lStack_228 == 0) {
      uStack_100 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      ppuStack_128 = (undefined **)0x0;
      ppuStack_130 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_130);
    }
    puVar2 = &uStack_1a1;
    func_0x00010095049c(puVar2);
    func_0x000100950500(auStack_1c0,pppuStack_230);
    func_0x000107c281a0(&ppuStack_1a0,0xc,puVar2,auStack_1c0);
    puStack_1d8 = (undefined4 *)0x0;
    puStack_1d0 = (undefined4 *)0x0;
    uStack_1c8 = 0;
    uStack_1dc = 0;
    pppuVar3 = &ppuStack_130;
    pppuVar12 = &ppuStack_1a0;
    func_0x000107c310cc(pppuVar3,pppuVar12,&puStack_1d8,&uStack_1dc);
    _objc_retainAutoreleasedReturnValue();
    if (puStack_1d8 != (undefined4 *)0x0) {
      puStack_1d0 = puStack_1d8;
      __ZdlPv();
    }
    plVar1 = plStack_138;
    ppuStack_1a0 = &PTR_SUB_110862700;
    plStack_138 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_140;
    plStack_140 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_1d8 = auStack_158;
    func_0x000107c27dd4(&puStack_1d8);
    puStack_1d8 = auStack_1c0;
    func_0x000107c27dd4(&puStack_1d8);
    func_0x000107c27da8(&uStack_108);
    _objc_release(uStack_118);
    _objc_release(uStack_120);
  }
  puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  _objc_retain(pppuVar3);
  pppuVar5 = pppuVar3;
  func_0x00010bf52a60();
  if (pppuVar5 != (undefined ***)0x0) {
    unaff_x20 = *plStack_210;
    do {
      param_2 = (undefined ***)0x0;
      do {
        if (*plStack_210 != unaff_x20) {
          _objc_enumerationMutation(pppuVar3);
        }
        unaff_x26 = *(ulong *)(lStack_218 + (long)param_2 * 8);
        unaff_x25 = unaff_x26;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = unaff_x25;
        func_0x00010c08fa60();
        unaff_x27 = (ulong)(uVar6 == 0);
        _objc_release(unaff_x25);
        if (uVar6 != 0) {
          if (param_4 == 0) {
LAB_1084e7214:
            unaff_x25 = unaff_x26;
            func_0x00010c2923e0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar4);
          }
          else {
            uVar6 = unaff_x26;
            func_0x00010c25b340();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar6;
            func_0x00010bf529e0();
            unaff_x27 = (ulong)(uVar7 == 0);
            _objc_release(uVar6);
            if (uVar7 == 0) goto LAB_1084e7214;
            unaff_x27 = unaff_x26;
            func_0x00010c25b340();
            _objc_retainAutoreleasedReturnValue();
            pppuVar12 = (undefined ***)0x0;
            unaff_x25 = unaff_x27;
            FUN_1084d2cc4();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x27);
            uVar6 = unaff_x25;
            func_0x00010bf529e0();
            if (uVar6 != 0) {
              unaff_x28 = PTR_PTR_1126d9e48;
              _objc_alloc();
              unaff_x27 = unaff_x26;
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c05bc40();
              func_0x00010c2923e0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1d0640(puVar4);
              _objc_release(unaff_x26);
              _objc_release(unaff_x28);
              _objc_release(unaff_x27);
            }
          }
          _objc_release(unaff_x25);
        }
        param_2 = (undefined ***)((long)param_2 + 1);
      } while (pppuVar5 != param_2);
      pppuVar5 = pppuVar3;
      func_0x00010bf52a60();
    } while (pppuVar5 != (undefined ***)0x0);
  }
  _objc_release(pppuVar3);
  puVar8 = puVar4;
  func_0x00010bf51e00(puVar4);
  _objc_release(puVar4);
  _objc_release(pppuVar3);
  _objc_release(pppuStack_230);
  lVar14 = lStack_228;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_release(pppuStack_230);
    _objc_release(lStack_228);
    lVar9 = lVar14;
    __Unwind_Resume();
    pcStack_238 = FUN_1084e73c8;
    lStack_2a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_290 = unaff_x28;
    uStack_288 = unaff_x27;
    uStack_280 = unaff_x26;
    uStack_278 = unaff_x25;
    uStack_270 = 0;
    puStack_268 = puVar4;
    lStack_260 = lVar14;
    pppuStack_258 = pppuVar3;
    lStack_250 = unaff_x20;
    pppuStack_248 = param_2;
    puStack_240 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(pppuVar12);
    if (pppuVar12 == (undefined ***)0x0) {
      _objc_opt_class(PTR_PTR_1126d67a0);
      if (lVar9 == 0) {
        uStack_3a0 = 0;
        uStack_3b8 = 0;
        uStack_3c0 = 0;
        uStack_3a8 = 0;
        uStack_3b0 = 0;
        uStack_3c8 = 0;
        ppuStack_3d0 = (undefined **)0x0;
      }
      else {
        func_0x00010bfa6be0(&ppuStack_3d0,lVar9);
      }
      ppuStack_360 = (undefined **)0x0;
      ppuStack_358 = (undefined **)0x0;
      uStack_350 = 0;
      auStack_3f0[0] = 0;
      pppuVar3 = &ppuStack_3d0;
      func_0x00010054c81c(pppuVar3,&ppuStack_360,auStack_3f0);
      _objc_retainAutoreleasedReturnValue();
      if (ppuStack_360 != (undefined **)0x0) {
        ppuStack_358 = ppuStack_360;
        __ZdlPv();
      }
      func_0x000107c27da8(&uStack_3a8);
      _objc_release(uStack_3b8);
      _objc_release(uStack_3c0);
    }
    else {
      _objc_opt_class(PTR_PTR_1126d67a0);
      if (lVar9 == 0) {
        uStack_330 = 0;
        uStack_348 = 0;
        uStack_350 = 0;
        uStack_338 = 0;
        uStack_340 = 0;
        ppuStack_358 = (undefined **)0x0;
        ppuStack_360 = (undefined **)0x0;
      }
      else {
        func_0x00010bfa6be0(&ppuStack_360,lVar9);
      }
      puVar2 = &uStack_3d1;
      FUN_10850e510(puVar2);
      func_0x000100950500(auStack_3f0,pppuVar12);
      func_0x000107c281a0(&ppuStack_3d0,0xc,puVar2,auStack_3f0);
      puStack_408 = (undefined4 *)0x0;
      puStack_400 = (undefined4 *)0x0;
      uStack_3f8 = 0;
      uStack_40c = 0;
      pppuVar3 = &ppuStack_360;
      func_0x000107c310cc(pppuVar3,&ppuStack_3d0,&puStack_408,&uStack_40c);
      _objc_retainAutoreleasedReturnValue();
      if (puStack_408 != (undefined4 *)0x0) {
        puStack_400 = puStack_408;
        __ZdlPv();
      }
      plVar1 = plStack_368;
      ppuStack_3d0 = &PTR_SUB_110862700;
      plStack_368 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_370;
      plStack_370 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      puStack_408 = auStack_388;
      func_0x000107c27dd4(&puStack_408);
      puStack_408 = auStack_3f0;
      func_0x000107c27dd4(&puStack_408);
      func_0x000107c27da8(&uStack_338);
      _objc_release(uStack_348);
      _objc_release(uStack_350);
    }
    puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uStack_428 = 0;
    uStack_430 = 0;
    uStack_418 = 0;
    uStack_420 = 0;
    lStack_448 = 0;
    uStack_450 = 0;
    uStack_438 = 0;
    plStack_440 = (long *)0x0;
    _objc_retain(pppuVar3);
    pppuVar5 = pppuVar3;
    func_0x00010bf52a60();
    if (pppuVar5 != (undefined ***)0x0) {
      lVar14 = *plStack_440;
      do {
        pppuVar15 = (undefined ***)0x0;
        do {
          if (*plStack_440 != lVar14) {
            _objc_enumerationMutation(pppuVar3);
          }
          lVar13 = *(long *)(lStack_448 + (long)pppuVar15 * 8);
          lVar10 = lVar13;
          func_0x00010c11ac00();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar10;
          func_0x00010c08fa60();
          _objc_release(lVar10);
          if (lVar11 != 0) {
            func_0x00010c11ac00(lVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar4);
            _objc_release(lVar13);
          }
          pppuVar15 = (undefined ***)((long)pppuVar15 + 1);
        } while (pppuVar5 != pppuVar15);
        pppuVar5 = pppuVar3;
        func_0x00010bf52a60();
      } while (pppuVar5 != (undefined ***)0x0);
    }
    _objc_release(pppuVar3);
    puVar8 = puVar4;
    func_0x00010bf51e00(puVar4);
    _objc_release(puVar4);
    _objc_release(pppuVar3);
    _objc_release(pppuVar12);
    lVar14 = lVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2a0) {
      ___stack_chk_fail();
      _objc_release(pppuVar12);
      _objc_release(lVar9);
      __Unwind_Resume();
      pcStack_458 = FUN_1084e77a4;
      puStack_480 = puVar4;
      pppuStack_478 = pppuVar3;
      pppuStack_470 = pppuVar12;
      lStack_468 = lVar9;
      ppuStack_460 = &puStack_240;
      _objc_retain();
      _objc_opt_class(PTR_PTR_1126d67a0);
      if (lVar14 == 0) {
        uStack_490 = 0;
        uStack_4a8 = 0;
        uStack_4b0 = 0;
        uStack_498 = 0;
        uStack_4a0 = 0;
        uStack_4b8 = 0;
        uStack_4c0 = 0;
      }
      else {
        func_0x00010bfa6be0(&uStack_4c0,lVar14);
      }
      lStack_4d8 = 0;
      lStack_4d0 = 0;
      uStack_4c8 = 0;
      uStack_4dc = 0;
      puVar8 = &uStack_4c0;
      func_0x00010054c81c(puVar8,&lStack_4d8,&uStack_4dc);
      _objc_retainAutoreleasedReturnValue();
      if (lStack_4d8 != 0) {
        lStack_4d0 = lStack_4d8;
        __ZdlPv();
      }
      func_0x000107c27da8(&uStack_498);
      _objc_release(uStack_4a8);
      _objc_release(uStack_4b0);
      _objc_release(lVar14);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1084e73c8; end: 1084e77a3;  */

void FUN_1084e73c8(long param_1,long param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined ***pppuVar3;
  undefined8 *puVar4;
  undefined ***pppuVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined ***pppuVar11;
  undefined4 uStack_2ac;
  long lStack_2a8;
  long lStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 *puStack_250;
  undefined ***pppuStack_248;
  long lStack_240;
  long lStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1dc;
  undefined4 *puStack_1d8;
  undefined4 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined4 auStack_1c0 [7];
  undefined1 uStack_1a1;
  undefined **ppuStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 auStack_158 [6];
  long *plStack_140;
  long *plStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  if (param_2 == 0) {
    _objc_opt_class(PTR_PTR_1126d67a0);
    if (param_1 == 0) {
      uStack_170 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_198 = 0;
      ppuStack_1a0 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_1a0,param_1);
    }
    ppuStack_130 = (undefined **)0x0;
    ppuStack_128 = (undefined **)0x0;
    uStack_120 = 0;
    auStack_1c0[0] = 0;
    pppuVar3 = &ppuStack_1a0;
    func_0x00010054c81c(pppuVar3,&ppuStack_130,auStack_1c0);
    _objc_retainAutoreleasedReturnValue();
    if (ppuStack_130 != (undefined **)0x0) {
      ppuStack_128 = ppuStack_130;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_178);
    _objc_release(uStack_188);
    _objc_release(uStack_190);
  }
  else {
    _objc_opt_class(PTR_PTR_1126d67a0);
    if (param_1 == 0) {
      uStack_100 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      ppuStack_128 = (undefined **)0x0;
      ppuStack_130 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_130,param_1);
    }
    puVar2 = &uStack_1a1;
    FUN_10850e510(puVar2);
    func_0x000100950500(auStack_1c0,param_2);
    func_0x000107c281a0(&ppuStack_1a0,0xc,puVar2,auStack_1c0);
    puStack_1d8 = (undefined4 *)0x0;
    puStack_1d0 = (undefined4 *)0x0;
    uStack_1c8 = 0;
    uStack_1dc = 0;
    pppuVar3 = &ppuStack_130;
    func_0x000107c310cc(pppuVar3,&ppuStack_1a0,&puStack_1d8,&uStack_1dc);
    _objc_retainAutoreleasedReturnValue();
    if (puStack_1d8 != (undefined4 *)0x0) {
      puStack_1d0 = puStack_1d8;
      __ZdlPv();
    }
    plVar1 = plStack_138;
    ppuStack_1a0 = &PTR_SUB_110862700;
    plStack_138 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_140;
    plStack_140 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_1d8 = auStack_158;
    func_0x000107c27dd4(&puStack_1d8);
    puStack_1d8 = auStack_1c0;
    func_0x000107c27dd4(&puStack_1d8);
    func_0x000107c27da8(&uStack_108);
    _objc_release(uStack_118);
    _objc_release(uStack_120);
  }
  puVar4 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  _objc_retain(pppuVar3);
  pppuVar5 = pppuVar3;
  func_0x00010bf52a60();
  if (pppuVar5 != (undefined ***)0x0) {
    lVar10 = *plStack_210;
    do {
      pppuVar11 = (undefined ***)0x0;
      do {
        if (*plStack_210 != lVar10) {
          _objc_enumerationMutation(pppuVar3);
        }
        lVar9 = *(long *)(lStack_218 + (long)pppuVar11 * 8);
        lVar6 = lVar9;
        func_0x00010c11ac00();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = lVar6;
        func_0x00010c08fa60();
        _objc_release(lVar6);
        if (lVar7 != 0) {
          func_0x00010c11ac00(lVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar4);
          _objc_release(lVar9);
        }
        pppuVar11 = (undefined ***)((long)pppuVar11 + 1);
      } while (pppuVar5 != pppuVar11);
      pppuVar5 = pppuVar3;
      func_0x00010bf52a60();
    } while (pppuVar5 != (undefined ***)0x0);
  }
  _objc_release(pppuVar3);
  puVar8 = puVar4;
  func_0x00010bf51e00(puVar4);
  _objc_release(puVar4);
  _objc_release(pppuVar3);
  _objc_release(param_2);
  lVar10 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_release(param_2);
    _objc_release(param_1);
    __Unwind_Resume();
    pcStack_228 = FUN_1084e77a4;
    puStack_250 = puVar4;
    pppuStack_248 = pppuVar3;
    lStack_240 = param_2;
    lStack_238 = param_1;
    puStack_230 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_opt_class(PTR_PTR_1126d67a0);
    if (lVar10 == 0) {
      uStack_260 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      uStack_268 = 0;
      uStack_270 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_290,lVar10);
    }
    lStack_2a8 = 0;
    lStack_2a0 = 0;
    uStack_298 = 0;
    uStack_2ac = 0;
    puVar8 = &uStack_290;
    func_0x00010054c81c(puVar8,&lStack_2a8,&uStack_2ac);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_2a8 != 0) {
      lStack_2a0 = lStack_2a8;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_268);
    _objc_release(uStack_278);
    _objc_release(uStack_280);
    _objc_release(lVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1084e77a4; end: 1084e787b;  */

void FUN_1084e77a4(long param_1)

{
  undefined8 *puVar1;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126d67a0);
  if (param_1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_70,param_1);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar1 = &uStack_70;
  func_0x00010054c81c(puVar1,&lStack_88,&uStack_8c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1084e787c; end: 1084e7a0f;  */

void FUN_1084e787c(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_12c;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [31];
  undefined1 uStack_f1;
  undefined **appuStack_f0 [9];
  undefined1 auStack_a8 [24];
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126d67a0);
  if (param_1 == 0) {
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_80,param_1);
  }
  puVar2 = &uStack_f1;
  FUN_10850e510(puVar2);
  func_0x000100950500(auStack_110,param_2);
  func_0x000107c281a0(appuStack_f0,0xc,puVar2,auStack_110);
  puStack_128 = (undefined1 *)0x0;
  puStack_120 = (undefined1 *)0x0;
  uStack_118 = 0;
  uStack_12c = 0;
  puVar3 = &uStack_80;
  func_0x000107c310cc(puVar3,appuStack_f0,&puStack_128,&uStack_12c);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_128 != (undefined1 *)0x0) {
    puStack_120 = puStack_128;
    __ZdlPv();
  }
  plVar1 = plStack_88;
  appuStack_f0[0] = &PTR_SUB_110862700;
  plStack_88 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_90;
  plStack_90 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_128 = auStack_a8;
  func_0x000107c27dd4(&puStack_128);
  puStack_128 = auStack_110;
  func_0x000107c27dd4(&puStack_128);
  func_0x000107c27da8(&uStack_58);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1084e7a10; end: 1084e7a97;  */

void FUN_1084e7a10(undefined8 param_1,undefined8 param_2)

{
  _objc_retain();
  FUN_108521d30(param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1084e7a98; end: 1084e7cdf;  */

void FUN_1084e7a98(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uStack_194;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined4 uStack_160;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126d9e68);
  if (param_1 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_90,param_1);
  }
  puVar2 = &uStack_101;
  FUN_108521124();
  uStack_170 = 0xf;
  uStack_160 = 0x100;
  ppuStack_178 = &PTR_DAT_110a4fcc0;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_128 = 0;
  lStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  uStack_e6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_f8 = 10;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_FUN_110a4fc60;
  lStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  plStack_98 = (long *)0x0;
  lStack_190 = 0;
  lStack_188 = 0;
  uStack_180 = 0;
  uStack_194 = 0;
  puVar3 = &uStack_90;
  uStack_148 = param_2;
  puStack_c8 = puVar2;
  pppuStack_c0 = &ppuStack_178;
  func_0x000107c310cc(puVar3,&ppuStack_100,&lStack_190,&uStack_194);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (lStack_190 != 0) {
    lStack_188 = lStack_190;
    __ZdlPv();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_FUN_110a4fc60;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b8 != 0) {
    lStack_b0 = lStack_b8;
    __ZdlPv();
  }
  plVar1 = plStack_110;
  ppuStack_178 = &PTR_DAT_110a4fcc0;
  plStack_110 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_130 != 0) {
    lStack_128 = lStack_130;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_68);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1084e7ce0; end: 1084e7da7;  */

void FUN_1084e7ce0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126d9e68;
  _objc_alloc(PTR_PTR_1126d9e68);
  func_0x00010c04e380();
  puVar2 = puVar1;
  FUN_108521314();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1084e7da8; end: 1084e7ebf;  */

void FUN_1084e7da8(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126c13f0);
  if (param_1 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_70,param_1);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar1 = &uStack_70;
  func_0x00010054c81c(puVar1,&lStack_88,&uStack_8c);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1084e7ec0; end: 1084e7fd3;  */

void FUN_1084e7ec0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  FUN_1084e7da8();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126d9e70;
  if (lVar1 == 0) {
    FUN_108526c28(PTR_PTR_1126d9e70,param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_108526cfc(PTR_PTR_1126d9e70,lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x00010c27dd80();
    if (puVar3 == (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
    }
    else {
      *(undefined8 *)(puVar3 + 0x18) = uVar2;
    }
  }
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1084e7fd4; end: 1084e8287;  */

undefined *** FUN_1084e7fd4(undefined ***param_1,undefined **param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined **ppuVar5;
  undefined ***pppuVar6;
  undefined ***pppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  uint uVar13;
  undefined ***pppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined ***unaff_x23;
  undefined **unaff_x24;
  undefined8 uVar17;
  undefined **unaff_x25;
  long lVar18;
  long unaff_x26;
  undefined ***pppuVar19;
  undefined **unaff_x27;
  undefined **unaff_x28;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  byte bStack_782;
  byte bStack_781;
  double dStack_780;
  double dStack_778;
  undefined ***pppuStack_770;
  undefined ***pppuStack_768;
  undefined ***pppuStack_760;
  undefined ***pppuStack_758;
  undefined8 ****ppppuStack_750;
  code *pcStack_748;
  undefined *puStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined1 uStack_721;
  undefined **appuStack_720 [9];
  undefined *apuStack_6d8 [3];
  long *plStack_6c0;
  long *plStack_6b8;
  undefined **ppuStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  ulong uStack_670;
  long lStack_668;
  long *plStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_628;
  undefined ***pppuStack_620;
  undefined **ppuStack_618;
  undefined **ppuStack_610;
  undefined8 uStack_608;
  long lStack_598;
  double dStack_590;
  double dStack_588;
  undefined **ppuStack_580;
  undefined **ppuStack_578;
  long lStack_570;
  undefined **ppuStack_568;
  undefined **ppuStack_560;
  undefined ***pppuStack_558;
  undefined *puStack_550;
  undefined ***pppuStack_548;
  undefined ***pppuStack_540;
  undefined ***pppuStack_538;
  undefined1 ****ppppuStack_530;
  code *pcStack_528;
  undefined4 uStack_518;
  undefined1 uStack_511;
  long lStack_510;
  long lStack_508;
  undefined8 uStack_500;
  undefined **ppuStack_4f8;
  undefined **ppuStack_4f0;
  undefined **ppuStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined1 uStack_4a0;
  undefined1 uStack_49f;
  undefined4 uStack_49c;
  code *pcStack_498;
  undefined8 uStack_490;
  long lStack_488;
  undefined **ppuStack_480;
  undefined ***pppuStack_478;
  undefined1 ***pppuStack_470;
  code *pcStack_468;
  undefined8 uStack_460;
  long lStack_458;
  undefined8 *puStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined4 uStack_41c;
  long lStack_418;
  long lStack_410;
  undefined8 uStack_408;
  undefined *puStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  long lStack_348;
  undefined1 **ppuStack_2f0;
  code *pcStack_2e8;
  undefined ***pppuStack_2d8;
  undefined8 uStack_2d0;
  long lStack_2c8;
  long *plStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined *puStack_208;
  long lStack_200;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 uStack_161;
  undefined **ppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 *puStack_120;
  undefined1 *puStack_118;
  undefined8 *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined ***pppuStack_e0;
  undefined **appuStack_d8 [9];
  undefined1 auStack_90 [24];
  long *plStack_78;
  long *plStack_70;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126d9e78);
  if (param_1 == (undefined ***)0x0) {
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    ppuStack_160 = (undefined **)0x0;
  }
  else {
    func_0x00010bfa6be0(&ppuStack_160,param_1);
  }
  puVar4 = &uStack_161;
  FUN_10851a080(puVar4);
  _objc_retain(param_2);
  uStack_178 = 0;
  uStack_170 = 0;
  uStack_180 = 0;
  ppuVar5 = param_2;
  func_0x00010bf529e0(param_2);
  func_0x000107c281a4(&uStack_180,ppuVar5);
  puVar16 = (undefined *)0x0;
  puStack_118 = (undefined1 *)0x0;
  puStack_120 = (undefined1 *)0x0;
  uStack_108 = 0;
  puStack_110 = (undefined8 *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_2);
  ppuVar5 = param_2;
  func_0x00010bf52a60();
  if (ppuVar5 != (undefined **)0x0) {
    unaff_x24 = (undefined **)*puStack_110;
    do {
      unaff_x25 = (undefined **)0x0;
      do {
        if ((undefined **)*puStack_110 != unaff_x24) {
          _objc_enumerationMutation(param_2);
        }
        unaff_x23 = *(undefined ****)((long)puStack_118 + (long)unaff_x25 * 8);
        _objc_retain(unaff_x23);
        pppuStack_e0 = unaff_x23;
        func_0x000107c281a8(&uStack_180,&pppuStack_e0);
        _objc_release(pppuStack_e0);
        unaff_x25 = (undefined **)((long)unaff_x25 + 1);
      } while (ppuVar5 != unaff_x25);
      ppuVar5 = param_2;
      func_0x00010bf52a60();
    } while (ppuVar5 != (undefined **)0x0);
  }
  _objc_release(param_2);
  _objc_release(param_2);
  func_0x000107c281a0(appuStack_d8,0xc,puVar4,&uStack_180);
  puStack_120 = (undefined1 *)0x0;
  puStack_118 = (undefined1 *)0x0;
  puStack_110 = (undefined8 *)0x0;
  pppuStack_e0 = (undefined ***)((ulong)pppuStack_e0 & 0xffffffff00000000);
  pppuVar14 = &ppuStack_160;
  pppuVar7 = appuStack_d8;
  func_0x000107c310cc(pppuVar14,pppuVar7,&puStack_120,&pppuStack_e0);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_120 != (undefined1 *)0x0) {
    puStack_118 = puStack_120;
    __ZdlPv();
  }
  plVar3 = plStack_70;
  appuStack_d8[0] = &PTR_SUB_110862700;
  plStack_70 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_78;
  plStack_78 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_120 = auStack_90;
  func_0x000107c27dd4(&puStack_120);
  puStack_120 = (undefined1 *)&uStack_180;
  func_0x000107c27dd4(&puStack_120);
  func_0x000107c27da8(&uStack_138);
  _objc_release(uStack_148);
  _objc_release(uStack_150);
  _objc_release(param_2);
  pppuVar6 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_2);
    _objc_release(param_1);
    __Unwind_Resume(pppuVar6);
    func_0x000104bd46a0();
    pcStack_188 = FUN_1084e8288;
    lStack_200 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_190 = &stack0xfffffffffffffff0;
    _objc_retain();
    pppuStack_2d8 = pppuVar7;
    _objc_retain(pppuVar7);
    puVar15 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new();
    func_0x00010c26f320();
    _objc_release(puVar15);
    pppuVar7 = pppuStack_2d8;
    dVar20 = 0.0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    lStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    plStack_2c0 = (long *)0x0;
    _objc_retain(pppuStack_2d8);
    func_0x00010bf52a60();
    if (pppuVar7 != (undefined ***)0x0) {
      unaff_x26 = *plStack_2c0;
      unaff_x27 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
      unaff_x28 = &PTR_PTR_1126d9000;
      do {
        pppuVar14 = (undefined ***)0x0;
        do {
          if (*plStack_2c0 != unaff_x26) {
            _objc_enumerationMutation(pppuStack_2d8);
          }
          puVar15 = *(undefined **)(lStack_2c8 + (long)pppuVar14 * 8);
          _objc_retain(pppuVar6);
          _objc_retain(puVar15);
          puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
          puStack_208 = puVar15;
          func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
          _objc_retainAutoreleasedReturnValue();
          pppuVar19 = pppuVar6;
          FUN_1084e7fd4(pppuVar6,puVar8);
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = pppuVar19;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(pppuVar19);
          _objc_release(puVar8);
          unaff_x25 = (undefined **)PTR_PTR_1126d9e80;
          if (unaff_x23 == (undefined ***)0x0) {
            FUN_10851a318(PTR_PTR_1126d9e80,0);
            _objc_retainAutoreleasedReturnValue();
            if (unaff_x25 != (undefined **)0x0) {
              _objc_setProperty_nonatomic_copy(unaff_x25);
              unaff_x24 = unaff_x25;
              goto LAB_1084e841c;
            }
LAB_1084e8468:
            unaff_x24 = (undefined **)0x0;
          }
          else {
            FUN_10851a498(PTR_PTR_1126d9e80,unaff_x23);
            _objc_retainAutoreleasedReturnValue();
            unaff_x24 = unaff_x25;
            if (unaff_x25 == (undefined **)0x0) goto LAB_1084e8468;
LAB_1084e841c:
            unaff_x24[4] = puVar16;
            unaff_x25 = unaff_x24;
          }
          func_0x00010c25ed40(pppuVar6);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(unaff_x24);
          _objc_release(unaff_x23);
          _objc_release(puVar15);
          _objc_release(pppuVar6);
          pppuVar14 = (undefined ***)((long)pppuVar14 + 1);
        } while (pppuVar7 != pppuVar14);
        pppuVar7 = pppuStack_2d8;
        func_0x00010bf52a60();
      } while (pppuVar7 != (undefined ***)0x0);
    }
    _objc_release(pppuStack_2d8);
    _objc_release(pppuStack_2d8);
    pppuVar7 = pppuVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_200) {
      return pppuVar7;
    }
    ___stack_chk_fail();
    _objc_release(pppuStack_2d8);
    _objc_release(pppuStack_2d8);
    _objc_release(pppuVar6);
    __Unwind_Resume();
    pcStack_2e8 = FUN_1084e8580;
    lStack_348 = *(long *)PTR____stack_chk_guard_11034bdc0;
    dVar21 = dVar20;
    ppuStack_2f0 = &puStack_190;
    _objc_retain();
    puVar16 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c26f320();
    _objc_release(puVar16);
    dVar22 = 0.0;
    uStack_438 = 0;
    uStack_440 = 0;
    uStack_428 = 0;
    uStack_430 = 0;
    lStack_458 = 0;
    uStack_460 = 0;
    uStack_448 = 0;
    puStack_450 = (undefined8 *)0x0;
    _objc_retain(pppuVar7);
    _objc_opt_class(PTR_PTR_1126d9e78);
    if (pppuVar7 == (undefined ***)0x0) {
      uStack_3d0 = 0;
      dVar22 = 0.0;
      uStack_3e8 = 0;
      uStack_3f0 = 0;
      uStack_3d8 = 0;
      uStack_3e0 = 0;
      uStack_3f8 = 0;
      puStack_400 = (undefined *)0x0;
    }
    else {
      func_0x00010bfa6be0(&puStack_400,pppuVar7);
    }
    lStack_418 = 0;
    lStack_410 = 0;
    uStack_408 = 0;
    uStack_41c = 0;
    ppuVar5 = &puStack_400;
    func_0x00010054c81c(ppuVar5,&lStack_418,&uStack_41c);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_418 != 0) {
      lStack_410 = lStack_418;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_3d8);
    _objc_release(uStack_3e8);
    _objc_release(uStack_3f0);
    _objc_release(pppuVar7);
    ppuVar9 = ppuVar5;
    func_0x00010bf52a60();
    if (ppuVar9 != (undefined **)0x0) {
      unaff_x23 = (undefined ***)*puStack_450;
      unaff_x24 = &PTR_PTR_1126d9000;
      do {
        unaff_x25 = (undefined **)0x0;
        do {
          if ((undefined ***)*puStack_450 != unaff_x23) {
            _objc_enumerationMutation(ppuVar5);
          }
          puVar16 = *(undefined **)(lStack_458 + (long)unaff_x25 * 8);
          func_0x00010bf5aac0(puVar16);
          dVar22 = dVar20 + dVar22;
          puVar15 = puVar16;
          if (dVar22 <= dVar21) {
            puVar15 = PTR_PTR_1126d9e80;
            FUN_10851a828(PTR_PTR_1126d9e80,puVar16);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c25ed40(pppuVar7);
            _objc_unsafeClaimAutoreleasedReturnValue();
            _objc_release(puVar15);
          }
          unaff_x25 = (undefined **)((long)unaff_x25 + 1);
        } while (ppuVar9 != unaff_x25);
        ppuVar9 = ppuVar5;
        func_0x00010bf52a60();
      } while (ppuVar9 != (undefined **)0x0);
    }
    _objc_release(ppuVar5);
    pppuVar6 = pppuVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_348) {
      return pppuVar6;
    }
    ___stack_chk_fail();
    _objc_release(ppuVar5);
    _objc_release(pppuVar7);
    pppuVar19 = pppuVar6;
    __Unwind_Resume();
    pcStack_468 = FUN_1084e87f0;
    lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_480 = ppuVar5;
    pppuStack_478 = pppuVar7;
    pppuStack_470 = &ppuStack_2f0;
    _objc_retain();
    _objc_opt_class(PTR_PTR_1126d9e88);
    if (pppuVar19 == (undefined ***)0x0) {
      uStack_4b0 = 0;
      dVar22 = 0.0;
      uStack_4c8 = 0;
      uStack_4d0 = 0;
      uStack_4b8 = 0;
      uStack_4c0 = 0;
      uStack_4d8 = 0;
      ppuStack_4e0 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_4e0,pppuVar19);
    }
    puVar4 = &uStack_511;
    FUN_1085261d4();
    uStack_4a8 = *(undefined8 *)(puVar4 + 0x10);
    uStack_4a0 = puVar4[0x19];
    uStack_49f = puVar4[0x18];
    uStack_490 = *(undefined8 *)(puVar4 + 0x28);
    uStack_49c = 1;
    pcStack_498 = FUN_1084e8da8;
    lStack_508 = 0;
    uStack_500 = 0;
    lStack_510 = 0;
    func_0x000100c435d0(&lStack_510,&uStack_4a8,&lStack_488,1);
    func_0x000100c436b8(&ppuStack_4f8,&lStack_510);
    uStack_518 = 1;
    pppuVar14 = &ppuStack_4e0;
    pppuVar7 = &ppuStack_4f8;
    pppuVar12 = (undefined ***)&uStack_518;
    func_0x00010054c81c(pppuVar14);
    _objc_retainAutoreleasedReturnValue();
    if (ppuStack_4f8 != (undefined **)0x0) {
      ppuStack_4f0 = ppuStack_4f8;
      __ZdlPv();
    }
    if (lStack_510 != 0) {
      lStack_508 = lStack_510;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_4b8);
    _objc_release(uStack_4c8);
    _objc_release(uStack_4d0);
    pppuVar10 = pppuVar19;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_488) {
      ___stack_chk_fail();
      func_0x000104d96620(&ppuStack_4e0);
      _objc_release(pppuVar19);
      pppuVar11 = pppuVar10;
      __Unwind_Resume();
      pcStack_528 = FUN_1084e8970;
      lStack_598 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuVar14 = pppuVar7;
      dVar23 = dVar22;
      dStack_590 = dVar21;
      dStack_588 = dVar20;
      ppuStack_580 = unaff_x28;
      ppuStack_578 = unaff_x27;
      lStack_570 = unaff_x26;
      ppuStack_568 = unaff_x25;
      ppuStack_560 = unaff_x24;
      pppuStack_558 = unaff_x23;
      puStack_550 = puVar15;
      pppuStack_548 = pppuVar6;
      pppuStack_540 = pppuVar10;
      pppuStack_538 = pppuVar19;
      ppppuStack_530 = &pppuStack_470;
      _objc_retain();
      _objc_retain(pppuVar7);
      pppuVar19 = pppuVar7;
      func_0x00010c08fa60();
      if (pppuVar19 != (undefined ***)0x0) {
        _objc_retain(pppuVar11);
        _objc_retain(pppuVar7);
        pppuVar19 = pppuVar7;
        func_0x00010c08fa60();
        if (pppuVar19 == (undefined ***)0x0) {
          pppuVar19 = (undefined ***)0x0;
        }
        else {
          _objc_opt_class(PTR_PTR_1126d9e88);
          if (pppuVar11 == (undefined ***)0x0) {
            uStack_680 = 0;
            uStack_698 = 0;
            uStack_6a0 = 0;
            uStack_688 = 0;
            uStack_690 = 0;
            uStack_6a8 = 0;
            ppuStack_6b0 = (undefined **)0x0;
          }
          else {
            func_0x00010bfa6be0(&ppuStack_6b0,pppuVar11);
          }
          puVar4 = &uStack_721;
          FUN_10852605c(puVar4);
          pppuVar6 = (undefined ***)PTR__OBJC_CLASS___NSArray_1126ae530;
          pppuStack_620 = pppuVar7;
          func_0x00010bf0a140();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          uStack_738 = 0;
          uStack_730 = 0;
          puStack_740 = (undefined *)0x0;
          pppuVar14 = pppuVar6;
          func_0x00010bf529e0(pppuVar6);
          func_0x000107c281a4(&puStack_740,pppuVar14);
          dVar23 = 0.0;
          lStack_668 = 0;
          uStack_670 = 0;
          uStack_658 = 0;
          plStack_660 = (long *)0x0;
          uStack_648 = 0;
          uStack_650 = 0;
          uStack_638 = 0;
          uStack_640 = 0;
          _objc_retain(pppuVar6);
          pppuVar14 = pppuVar6;
          func_0x00010bf52a60();
          if (pppuVar14 != (undefined ***)0x0) {
            lVar18 = *plStack_660;
            do {
              pppuVar19 = (undefined ***)0x0;
              do {
                if (*plStack_660 != lVar18) {
                  _objc_enumerationMutation(pppuVar6);
                }
                uVar17 = *(undefined8 *)(lStack_668 + (long)pppuVar19 * 8);
                _objc_retain(uVar17);
                uStack_628 = uVar17;
                func_0x000107c281a8(&puStack_740,&uStack_628);
                _objc_release(uStack_628);
                pppuVar19 = (undefined ***)((long)pppuVar19 + 1);
              } while (pppuVar14 != pppuVar19);
              pppuVar14 = pppuVar6;
              func_0x00010bf52a60();
            } while (pppuVar14 != (undefined ***)0x0);
          }
          _objc_release(pppuVar6);
          _objc_release(pppuVar6);
          func_0x000107c281a0(appuStack_720,0xc,puVar4,&puStack_740);
          ppuStack_618 = (undefined **)0x0;
          ppuStack_610 = (undefined **)0x0;
          uStack_608 = 0;
          uStack_670 = uStack_670 & 0xffffffff00000000;
          unaff_x23 = &ppuStack_6b0;
          pppuVar14 = appuStack_720;
          pppuVar12 = &ppuStack_618;
          func_0x000107c310cc(unaff_x23,pppuVar14,pppuVar12,&uStack_670);
          _objc_retainAutoreleasedReturnValue();
          pppuVar19 = unaff_x23;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(unaff_x23);
          if (ppuStack_618 != (undefined **)0x0) {
            ppuStack_610 = ppuStack_618;
            __ZdlPv();
          }
          plVar3 = plStack_6b8;
          appuStack_720[0] = &PTR_SUB_110862700;
          plStack_6b8 = (long *)0x0;
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 8))();
          }
          plVar3 = plStack_6c0;
          plStack_6c0 = (long *)0x0;
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 8))();
          }
          ppuStack_618 = apuStack_6d8;
          func_0x000107c27dd4(&ppuStack_618);
          ppuStack_618 = &puStack_740;
          func_0x000107c27dd4(&ppuStack_618);
          _objc_release(pppuVar6);
          func_0x000107c27da8(&uStack_688);
          _objc_release(uStack_698);
          _objc_release(uStack_6a0);
        }
        _objc_release(pppuVar7);
        _objc_release(pppuVar11);
        if (pppuVar19 == (undefined ***)0x0) {
          pppuVar6 = (undefined ***)PTR_PTR_1126d9e88;
          _objc_alloc();
          dVar23 = dVar22;
          func_0x00010c047cc0();
          unaff_x23 = (undefined ***)PTR_PTR_1126d9e90;
          pppuVar14 = pppuVar6;
          FUN_108526440(PTR_PTR_1126d9e90,pppuVar6);
          _objc_retainAutoreleasedReturnValue();
          pppuVar12 = unaff_x23;
          func_0x00010c25ed40(pppuVar11);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(unaff_x23);
          _objc_release(pppuVar6);
        }
        _objc_release(pppuVar19);
      }
      pppuVar19 = pppuVar7;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_598) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(pppuVar11);
        return pppuVar11;
      }
      ___stack_chk_fail();
      _objc_release(unaff_x23);
      _objc_release(pppuVar6);
      _objc_release(pppuVar7);
      _objc_release(pppuVar11);
      __Unwind_Resume(pppuVar19);
      pppuVar10 = pppuVar19;
      func_0x000104bd46a0(pppuVar19);
      pcStack_748 = FUN_1084e8da8;
      dStack_780 = dVar21;
      dStack_778 = dVar22;
      pppuStack_770 = pppuVar19;
      pppuStack_768 = pppuVar6;
      pppuStack_760 = pppuVar7;
      pppuStack_758 = pppuVar11;
      ppppuStack_750 = &ppppuStack_530;
      _objc_retain();
      _objc_retain(pppuVar14);
      (*(code *)pppuVar12)(pppuVar10,&bStack_781);
      dVar20 = dVar23;
      (*(code *)pppuVar12)(pppuVar14,&bStack_782);
      uVar13 = 2;
      uVar1 = uVar13;
      if (bStack_782 == 0) {
        uVar1 = 0;
      }
      if (bStack_781 == 0) {
        uVar1 = 1;
      }
      if (dVar20 < dVar23) {
        uVar13 = 1;
      }
      uVar2 = 0;
      if (dVar20 <= dVar23) {
        uVar2 = uVar13;
      }
      uVar13 = uVar1;
      if ((bStack_782 & 1) == 0) {
        uVar13 = uVar2;
      }
      if ((bStack_781 & 1) == 0) {
        uVar1 = uVar13;
      }
      _objc_release(pppuVar14);
      _objc_release(pppuVar10);
      return (undefined ***)(ulong)uVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar14);
  return pppuVar14;
}



/* Entry: 1084e8288; end: 1084e857f;  */

undefined *** FUN_1084e8288(undefined *param_1,undefined ***param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined ***pppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined ***pppuVar7;
  undefined1 *puVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  uint uVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined ***unaff_x23;
  undefined **unaff_x24;
  undefined8 uVar17;
  undefined **unaff_x25;
  long lVar18;
  long unaff_x26;
  undefined ***pppuVar19;
  undefined **unaff_x27;
  undefined **unaff_x28;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  byte bStack_602;
  byte bStack_601;
  double dStack_600;
  double dStack_5f8;
  undefined ***pppuStack_5f0;
  undefined ***pppuStack_5e8;
  undefined ***pppuStack_5e0;
  undefined ***pppuStack_5d8;
  undefined1 ****ppppuStack_5d0;
  code *pcStack_5c8;
  undefined *puStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined1 uStack_5a1;
  undefined **appuStack_5a0 [9];
  undefined *apuStack_558 [3];
  long *plStack_540;
  long *plStack_538;
  undefined **ppuStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  ulong uStack_4f0;
  long lStack_4e8;
  long *plStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4a8;
  undefined ***pppuStack_4a0;
  undefined **ppuStack_498;
  undefined **ppuStack_490;
  undefined8 uStack_488;
  long lStack_418;
  double dStack_410;
  double dStack_408;
  undefined **ppuStack_400;
  undefined **ppuStack_3f8;
  long lStack_3f0;
  undefined **ppuStack_3e8;
  undefined **ppuStack_3e0;
  undefined ***pppuStack_3d8;
  undefined *puStack_3d0;
  undefined ***pppuStack_3c8;
  undefined ***pppuStack_3c0;
  undefined ***pppuStack_3b8;
  undefined1 ***pppuStack_3b0;
  code *pcStack_3a8;
  undefined4 uStack_398;
  undefined1 uStack_391;
  long lStack_390;
  long lStack_388;
  undefined8 uStack_380;
  undefined **ppuStack_378;
  undefined **ppuStack_370;
  undefined **ppuStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 uStack_320;
  undefined1 uStack_31f;
  undefined4 uStack_31c;
  code *pcStack_318;
  undefined8 uStack_310;
  long lStack_308;
  undefined **ppuStack_300;
  undefined ***pppuStack_2f8;
  undefined1 **ppuStack_2f0;
  code *pcStack_2e8;
  undefined8 uStack_2e0;
  long lStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined4 uStack_29c;
  long lStack_298;
  long lStack_290;
  undefined8 uStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  long lStack_1c8;
  undefined1 *puStack_170;
  code *pcStack_168;
  long lStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lStack_158 = param_3;
  _objc_retain(param_3);
  puVar15 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new();
  func_0x00010c26f320();
  _objc_release(puVar15);
  lVar18 = lStack_158;
  dVar20 = 0.0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  _objc_retain(lStack_158);
  func_0x00010bf52a60();
  if (lVar18 != 0) {
    unaff_x26 = *plStack_140;
    unaff_x27 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    unaff_x28 = &PTR_PTR_1126d9000;
    do {
      lVar14 = 0;
      do {
        if (*plStack_140 != unaff_x26) {
          _objc_enumerationMutation(lStack_158);
        }
        puVar15 = *(undefined **)(lStack_148 + lVar14 * 8);
        _objc_retain(param_2);
        _objc_retain(puVar15);
        puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_88 = puVar15;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        pppuVar4 = param_2;
        FUN_1084e7fd4(param_2,puVar16);
        _objc_retainAutoreleasedReturnValue();
        unaff_x23 = pppuVar4;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(pppuVar4);
        _objc_release(puVar16);
        unaff_x25 = (undefined **)PTR_PTR_1126d9e80;
        if (unaff_x23 == (undefined ***)0x0) {
          FUN_10851a318(PTR_PTR_1126d9e80,0);
          _objc_retainAutoreleasedReturnValue();
          if (unaff_x25 != (undefined **)0x0) {
            _objc_setProperty_nonatomic_copy(unaff_x25);
            unaff_x24 = unaff_x25;
            goto LAB_1084e841c;
          }
LAB_1084e8468:
          unaff_x24 = (undefined **)0x0;
        }
        else {
          FUN_10851a498(PTR_PTR_1126d9e80,unaff_x23);
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = unaff_x25;
          if (unaff_x25 == (undefined **)0x0) goto LAB_1084e8468;
LAB_1084e841c:
          unaff_x24[4] = param_1;
          unaff_x25 = unaff_x24;
        }
        func_0x00010c25ed40(param_2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(unaff_x24);
        _objc_release(unaff_x23);
        _objc_release(puVar15);
        _objc_release(param_2);
        lVar14 = lVar14 + 1;
      } while (lVar18 != lVar14);
      lVar18 = lStack_158;
      func_0x00010bf52a60();
    } while (lVar18 != 0);
  }
  _objc_release(lStack_158);
  _objc_release(lStack_158);
  pppuVar4 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return pppuVar4;
  }
  ___stack_chk_fail();
  _objc_release(lStack_158);
  _objc_release(lStack_158);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_168 = FUN_1084e8580;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar21 = dVar20;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_retain();
  puVar16 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  _objc_release(puVar16);
  dVar22 = 0.0;
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  lStack_2d8 = 0;
  uStack_2e0 = 0;
  uStack_2c8 = 0;
  puStack_2d0 = (undefined8 *)0x0;
  _objc_retain(pppuVar4);
  _objc_opt_class(PTR_PTR_1126d9e78);
  if (pppuVar4 == (undefined ***)0x0) {
    uStack_250 = 0;
    dVar22 = 0.0;
    uStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_278 = 0;
    puStack_280 = (undefined *)0x0;
  }
  else {
    func_0x00010bfa6be0(&puStack_280,pppuVar4);
  }
  lStack_298 = 0;
  lStack_290 = 0;
  uStack_288 = 0;
  uStack_29c = 0;
  ppuVar5 = &puStack_280;
  func_0x00010054c81c(ppuVar5,&lStack_298,&uStack_29c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_298 != 0) {
    lStack_290 = lStack_298;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_258);
  _objc_release(uStack_268);
  _objc_release(uStack_270);
  _objc_release(pppuVar4);
  ppuVar6 = ppuVar5;
  func_0x00010bf52a60();
  if (ppuVar6 != (undefined **)0x0) {
    unaff_x23 = (undefined ***)*puStack_2d0;
    unaff_x24 = &PTR_PTR_1126d9000;
    do {
      unaff_x25 = (undefined **)0x0;
      do {
        if ((undefined ***)*puStack_2d0 != unaff_x23) {
          _objc_enumerationMutation(ppuVar5);
        }
        puVar16 = *(undefined **)(lStack_2d8 + (long)unaff_x25 * 8);
        func_0x00010bf5aac0(puVar16);
        dVar22 = dVar20 + dVar22;
        puVar15 = puVar16;
        if (dVar22 <= dVar21) {
          puVar15 = PTR_PTR_1126d9e80;
          FUN_10851a828(PTR_PTR_1126d9e80,puVar16);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(pppuVar4);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar15);
        }
        unaff_x25 = (undefined **)((long)unaff_x25 + 1);
      } while (ppuVar6 != unaff_x25);
      ppuVar6 = ppuVar5;
      func_0x00010bf52a60();
    } while (ppuVar6 != (undefined **)0x0);
  }
  _objc_release(ppuVar5);
  pppuVar7 = pppuVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    return pppuVar7;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar5);
  _objc_release(pppuVar4);
  pppuVar19 = pppuVar7;
  __Unwind_Resume();
  pcStack_2e8 = FUN_1084e87f0;
  lStack_308 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_300 = ppuVar5;
  pppuStack_2f8 = pppuVar4;
  ppuStack_2f0 = &puStack_170;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126d9e88);
  if (pppuVar19 == (undefined ***)0x0) {
    uStack_330 = 0;
    dVar22 = 0.0;
    uStack_348 = 0;
    uStack_350 = 0;
    uStack_338 = 0;
    uStack_340 = 0;
    uStack_358 = 0;
    ppuStack_360 = (undefined **)0x0;
  }
  else {
    func_0x00010bfa6be0(&ppuStack_360,pppuVar19);
  }
  puVar8 = &uStack_391;
  FUN_1085261d4();
  uStack_328 = *(undefined8 *)(puVar8 + 0x10);
  uStack_320 = puVar8[0x19];
  uStack_31f = puVar8[0x18];
  uStack_310 = *(undefined8 *)(puVar8 + 0x28);
  uStack_31c = 1;
  pcStack_318 = FUN_1084e8da8;
  lStack_388 = 0;
  uStack_380 = 0;
  lStack_390 = 0;
  func_0x000100c435d0(&lStack_390,&uStack_328,&lStack_308,1);
  func_0x000100c436b8(&ppuStack_378,&lStack_390);
  uStack_398 = 1;
  pppuVar4 = &ppuStack_360;
  pppuVar11 = &ppuStack_378;
  pppuVar12 = (undefined ***)&uStack_398;
  func_0x00010054c81c(pppuVar4);
  _objc_retainAutoreleasedReturnValue();
  if (ppuStack_378 != (undefined **)0x0) {
    ppuStack_370 = ppuStack_378;
    __ZdlPv();
  }
  if (lStack_390 != 0) {
    lStack_388 = lStack_390;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_338);
  _objc_release(uStack_348);
  _objc_release(uStack_350);
  pppuVar9 = pppuVar19;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_308) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar4);
    return pppuVar4;
  }
  ___stack_chk_fail();
  func_0x000104d96620(&ppuStack_360);
  _objc_release(pppuVar19);
  pppuVar10 = pppuVar9;
  __Unwind_Resume();
  pcStack_3a8 = FUN_1084e8970;
  lStack_418 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar4 = pppuVar11;
  dVar23 = dVar22;
  dStack_410 = dVar21;
  dStack_408 = dVar20;
  ppuStack_400 = unaff_x28;
  ppuStack_3f8 = unaff_x27;
  lStack_3f0 = unaff_x26;
  ppuStack_3e8 = unaff_x25;
  ppuStack_3e0 = unaff_x24;
  pppuStack_3d8 = unaff_x23;
  puStack_3d0 = puVar15;
  pppuStack_3c8 = pppuVar7;
  pppuStack_3c0 = pppuVar9;
  pppuStack_3b8 = pppuVar19;
  pppuStack_3b0 = &ppuStack_2f0;
  _objc_retain();
  _objc_retain(pppuVar11);
  pppuVar19 = pppuVar11;
  func_0x00010c08fa60();
  if (pppuVar19 != (undefined ***)0x0) {
    _objc_retain(pppuVar10);
    _objc_retain(pppuVar11);
    pppuVar19 = pppuVar11;
    func_0x00010c08fa60();
    if (pppuVar19 == (undefined ***)0x0) {
      pppuVar19 = (undefined ***)0x0;
    }
    else {
      _objc_opt_class(PTR_PTR_1126d9e88);
      if (pppuVar10 == (undefined ***)0x0) {
        uStack_500 = 0;
        uStack_518 = 0;
        uStack_520 = 0;
        uStack_508 = 0;
        uStack_510 = 0;
        uStack_528 = 0;
        ppuStack_530 = (undefined **)0x0;
      }
      else {
        func_0x00010bfa6be0(&ppuStack_530,pppuVar10);
      }
      puVar8 = &uStack_5a1;
      FUN_10852605c(puVar8);
      pppuVar7 = (undefined ***)PTR__OBJC_CLASS___NSArray_1126ae530;
      pppuStack_4a0 = pppuVar11;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uStack_5b8 = 0;
      uStack_5b0 = 0;
      puStack_5c0 = (undefined *)0x0;
      pppuVar4 = pppuVar7;
      func_0x00010bf529e0(pppuVar7);
      func_0x000107c281a4(&puStack_5c0,pppuVar4);
      dVar23 = 0.0;
      lStack_4e8 = 0;
      uStack_4f0 = 0;
      uStack_4d8 = 0;
      plStack_4e0 = (long *)0x0;
      uStack_4c8 = 0;
      uStack_4d0 = 0;
      uStack_4b8 = 0;
      uStack_4c0 = 0;
      _objc_retain(pppuVar7);
      pppuVar4 = pppuVar7;
      func_0x00010bf52a60();
      if (pppuVar4 != (undefined ***)0x0) {
        lVar18 = *plStack_4e0;
        do {
          pppuVar19 = (undefined ***)0x0;
          do {
            if (*plStack_4e0 != lVar18) {
              _objc_enumerationMutation(pppuVar7);
            }
            uVar17 = *(undefined8 *)(lStack_4e8 + (long)pppuVar19 * 8);
            _objc_retain(uVar17);
            uStack_4a8 = uVar17;
            func_0x000107c281a8(&puStack_5c0,&uStack_4a8);
            _objc_release(uStack_4a8);
            pppuVar19 = (undefined ***)((long)pppuVar19 + 1);
          } while (pppuVar4 != pppuVar19);
          pppuVar4 = pppuVar7;
          func_0x00010bf52a60();
        } while (pppuVar4 != (undefined ***)0x0);
      }
      _objc_release(pppuVar7);
      _objc_release(pppuVar7);
      func_0x000107c281a0(appuStack_5a0,0xc,puVar8,&puStack_5c0);
      ppuStack_498 = (undefined **)0x0;
      ppuStack_490 = (undefined **)0x0;
      uStack_488 = 0;
      uStack_4f0 = uStack_4f0 & 0xffffffff00000000;
      unaff_x23 = &ppuStack_530;
      pppuVar4 = appuStack_5a0;
      pppuVar12 = &ppuStack_498;
      func_0x000107c310cc(unaff_x23,pppuVar4,pppuVar12,&uStack_4f0);
      _objc_retainAutoreleasedReturnValue();
      pppuVar19 = unaff_x23;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x23);
      if (ppuStack_498 != (undefined **)0x0) {
        ppuStack_490 = ppuStack_498;
        __ZdlPv();
      }
      plVar3 = plStack_538;
      appuStack_5a0[0] = &PTR_SUB_110862700;
      plStack_538 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      plVar3 = plStack_540;
      plStack_540 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      ppuStack_498 = apuStack_558;
      func_0x000107c27dd4(&ppuStack_498);
      ppuStack_498 = &puStack_5c0;
      func_0x000107c27dd4(&ppuStack_498);
      _objc_release(pppuVar7);
      func_0x000107c27da8(&uStack_508);
      _objc_release(uStack_518);
      _objc_release(uStack_520);
    }
    _objc_release(pppuVar11);
    _objc_release(pppuVar10);
    if (pppuVar19 == (undefined ***)0x0) {
      pppuVar7 = (undefined ***)PTR_PTR_1126d9e88;
      _objc_alloc();
      dVar23 = dVar22;
      func_0x00010c047cc0();
      unaff_x23 = (undefined ***)PTR_PTR_1126d9e90;
      pppuVar4 = pppuVar7;
      FUN_108526440(PTR_PTR_1126d9e90,pppuVar7);
      _objc_retainAutoreleasedReturnValue();
      pppuVar12 = unaff_x23;
      func_0x00010c25ed40(pppuVar10);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(unaff_x23);
      _objc_release(pppuVar7);
    }
    _objc_release(pppuVar19);
  }
  pppuVar19 = pppuVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_418) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pppuVar10);
    return pppuVar10;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x23);
  _objc_release(pppuVar7);
  _objc_release(pppuVar11);
  _objc_release(pppuVar10);
  __Unwind_Resume(pppuVar19);
  pppuVar9 = pppuVar19;
  func_0x000104bd46a0(pppuVar19);
  pcStack_5c8 = FUN_1084e8da8;
  dStack_600 = dVar21;
  dStack_5f8 = dVar22;
  pppuStack_5f0 = pppuVar19;
  pppuStack_5e8 = pppuVar7;
  pppuStack_5e0 = pppuVar11;
  pppuStack_5d8 = pppuVar10;
  ppppuStack_5d0 = &pppuStack_3b0;
  _objc_retain();
  _objc_retain(pppuVar4);
  (*(code *)pppuVar12)(pppuVar9,&bStack_601);
  dVar20 = dVar23;
  (*(code *)pppuVar12)(pppuVar4,&bStack_602);
  uVar13 = 2;
  uVar1 = uVar13;
  if (bStack_602 == 0) {
    uVar1 = 0;
  }
  if (bStack_601 == 0) {
    uVar1 = 1;
  }
  if (dVar20 < dVar23) {
    uVar13 = 1;
  }
  uVar2 = 0;
  if (dVar20 <= dVar23) {
    uVar2 = uVar13;
  }
  uVar13 = uVar1;
  if ((bStack_602 & 1) == 0) {
    uVar13 = uVar2;
  }
  if ((bStack_601 & 1) == 0) {
    uVar1 = uVar13;
  }
  _objc_release(pppuVar4);
  _objc_release(pppuVar9);
  return (undefined ***)(ulong)uVar1;
}



/* Entry: 1084e8580; end: 1084e87ef;  */

undefined *** FUN_1084e8580(double param_1,undefined ***param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined1 *puVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  undefined1 **ppuVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined1 **ppuVar16;
  undefined1 **unaff_x23;
  undefined8 *puVar17;
  long lVar18;
  undefined ***pppuVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  byte bStack_4a2;
  byte bStack_4a1;
  double dStack_4a0;
  double dStack_498;
  undefined ***pppuStack_490;
  undefined ***pppuStack_488;
  undefined ***pppuStack_480;
  undefined ***pppuStack_478;
  undefined1 ***pppuStack_470;
  code *pcStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined1 uStack_441;
  undefined **appuStack_440 [9];
  undefined1 auStack_3f8 [24];
  long *plStack_3e0;
  long *plStack_3d8;
  undefined1 *puStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  ulong uStack_390;
  long lStack_388;
  long *plStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_348;
  undefined ***pppuStack_340;
  undefined1 *puStack_338;
  undefined1 *puStack_330;
  undefined8 uStack_328;
  long lStack_2b8;
  double dStack_2b0;
  double dStack_2a8;
  undefined1 **ppuStack_250;
  code *pcStack_248;
  undefined4 uStack_238;
  undefined1 uStack_231;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined **ppuStack_218;
  undefined **ppuStack_210;
  undefined **ppuStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 uStack_1c0;
  undefined1 uStack_1bf;
  undefined4 uStack_1bc;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 *puStack_1a0;
  undefined ***pppuStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_13c;
  long lStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar20 = param_1;
  _objc_retain();
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  _objc_release(puVar4);
  dVar21 = 0.0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  lStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  puStack_170 = (undefined8 *)0x0;
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126d9e78);
  if (param_2 == (undefined ***)0x0) {
    uStack_f0 = 0;
    dVar21 = 0.0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_120,param_2);
  }
  lStack_138 = 0;
  lStack_130 = 0;
  uStack_128 = 0;
  uStack_13c = 0;
  puVar5 = &uStack_120;
  func_0x00010054c81c(puVar5,&lStack_138,&uStack_13c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_138 != 0) {
    lStack_130 = lStack_138;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_f8);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_release(param_2);
  puVar6 = puVar5;
  func_0x00010bf52a60();
  if (puVar6 != (undefined8 *)0x0) {
    unaff_x23 = (undefined1 **)*puStack_170;
    do {
      puVar17 = (undefined8 *)0x0;
      do {
        if ((undefined1 **)*puStack_170 != unaff_x23) {
          _objc_enumerationMutation(puVar5);
        }
        uVar15 = *(undefined8 *)(lStack_178 + (long)puVar17 * 8);
        func_0x00010bf5aac0(uVar15);
        dVar21 = param_1 + dVar21;
        if (dVar21 <= dVar20) {
          puVar4 = PTR_PTR_1126d9e80;
          FUN_10851a828(PTR_PTR_1126d9e80,uVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(param_2);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar4);
        }
        puVar17 = (undefined8 *)((long)puVar17 + 1);
      } while (puVar6 != puVar17);
      puVar6 = puVar5;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined8 *)0x0);
  }
  _objc_release(puVar5);
  pppuVar7 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pppuVar7;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(param_2);
  pppuVar8 = pppuVar7;
  __Unwind_Resume();
  pcStack_188 = FUN_1084e87f0;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1a0 = puVar5;
  pppuStack_198 = param_2;
  puStack_190 = &stack0xfffffffffffffff0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126d9e88);
  if (pppuVar8 == (undefined ***)0x0) {
    uStack_1d0 = 0;
    dVar21 = 0.0;
    uStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    uStack_1e0 = 0;
    uStack_1f8 = 0;
    ppuStack_200 = (undefined **)0x0;
  }
  else {
    func_0x00010bfa6be0(&ppuStack_200,pppuVar8);
  }
  puVar9 = &uStack_231;
  FUN_1085261d4();
  uStack_1c8 = *(undefined8 *)(puVar9 + 0x10);
  uStack_1c0 = puVar9[0x19];
  uStack_1bf = puVar9[0x18];
  uStack_1b0 = *(undefined8 *)(puVar9 + 0x28);
  uStack_1bc = 1;
  pcStack_1b8 = FUN_1084e8da8;
  lStack_228 = 0;
  uStack_220 = 0;
  lStack_230 = 0;
  func_0x000100c435d0(&lStack_230,&uStack_1c8,&lStack_1a8,1);
  func_0x000100c436b8(&ppuStack_218,&lStack_230);
  uStack_238 = 1;
  pppuVar19 = &ppuStack_200;
  pppuVar12 = &ppuStack_218;
  ppuVar13 = (undefined1 **)&uStack_238;
  func_0x00010054c81c(pppuVar19);
  _objc_retainAutoreleasedReturnValue();
  if (ppuStack_218 != (undefined **)0x0) {
    ppuStack_210 = ppuStack_218;
    __ZdlPv();
  }
  if (lStack_230 != 0) {
    lStack_228 = lStack_230;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_1d8);
  _objc_release(uStack_1e8);
  _objc_release(uStack_1f0);
  pppuVar10 = pppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar19);
    return pppuVar19;
  }
  ___stack_chk_fail();
  func_0x000104d96620(&ppuStack_200);
  _objc_release(pppuVar8);
  __Unwind_Resume();
  pcStack_248 = FUN_1084e8970;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar8 = pppuVar12;
  dVar22 = dVar21;
  dStack_2b0 = dVar20;
  dStack_2a8 = param_1;
  ppuStack_250 = &puStack_190;
  _objc_retain();
  _objc_retain(pppuVar12);
  pppuVar19 = pppuVar12;
  func_0x00010c08fa60();
  if (pppuVar19 != (undefined ***)0x0) {
    _objc_retain(pppuVar10);
    _objc_retain(pppuVar12);
    pppuVar19 = pppuVar12;
    func_0x00010c08fa60();
    if (pppuVar19 == (undefined ***)0x0) {
      ppuVar16 = (undefined1 **)0x0;
    }
    else {
      _objc_opt_class(PTR_PTR_1126d9e88);
      if (pppuVar10 == (undefined ***)0x0) {
        uStack_3a0 = 0;
        uStack_3b8 = 0;
        uStack_3c0 = 0;
        uStack_3a8 = 0;
        uStack_3b0 = 0;
        uStack_3c8 = 0;
        puStack_3d0 = (undefined1 *)0x0;
      }
      else {
        func_0x00010bfa6be0(&puStack_3d0,pppuVar10);
      }
      puVar9 = &uStack_441;
      FUN_10852605c(puVar9);
      pppuVar7 = (undefined ***)PTR__OBJC_CLASS___NSArray_1126ae530;
      pppuStack_340 = pppuVar12;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uStack_458 = 0;
      uStack_450 = 0;
      uStack_460 = 0;
      pppuVar8 = pppuVar7;
      func_0x00010bf529e0(pppuVar7);
      func_0x000107c281a4(&uStack_460,pppuVar8);
      dVar22 = 0.0;
      lStack_388 = 0;
      uStack_390 = 0;
      uStack_378 = 0;
      plStack_380 = (long *)0x0;
      uStack_368 = 0;
      uStack_370 = 0;
      uStack_358 = 0;
      uStack_360 = 0;
      _objc_retain(pppuVar7);
      pppuVar8 = pppuVar7;
      func_0x00010bf52a60();
      if (pppuVar8 != (undefined ***)0x0) {
        lVar18 = *plStack_380;
        do {
          pppuVar19 = (undefined ***)0x0;
          do {
            if (*plStack_380 != lVar18) {
              _objc_enumerationMutation(pppuVar7);
            }
            uVar15 = *(undefined8 *)(lStack_388 + (long)pppuVar19 * 8);
            _objc_retain(uVar15);
            uStack_348 = uVar15;
            func_0x000107c281a8(&uStack_460,&uStack_348);
            _objc_release(uStack_348);
            pppuVar19 = (undefined ***)((long)pppuVar19 + 1);
          } while (pppuVar8 != pppuVar19);
          pppuVar8 = pppuVar7;
          func_0x00010bf52a60();
        } while (pppuVar8 != (undefined ***)0x0);
      }
      _objc_release(pppuVar7);
      _objc_release(pppuVar7);
      func_0x000107c281a0(appuStack_440,0xc,puVar9,&uStack_460);
      puStack_338 = (undefined1 *)0x0;
      puStack_330 = (undefined1 *)0x0;
      uStack_328 = 0;
      uStack_390 = uStack_390 & 0xffffffff00000000;
      unaff_x23 = &puStack_3d0;
      pppuVar8 = appuStack_440;
      ppuVar13 = &puStack_338;
      func_0x000107c310cc(unaff_x23,pppuVar8,ppuVar13,&uStack_390);
      _objc_retainAutoreleasedReturnValue();
      ppuVar16 = unaff_x23;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x23);
      if (puStack_338 != (undefined1 *)0x0) {
        puStack_330 = puStack_338;
        __ZdlPv();
      }
      plVar3 = plStack_3d8;
      appuStack_440[0] = &PTR_SUB_110862700;
      plStack_3d8 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      plVar3 = plStack_3e0;
      plStack_3e0 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      puStack_338 = auStack_3f8;
      func_0x000107c27dd4(&puStack_338);
      puStack_338 = (undefined1 *)&uStack_460;
      func_0x000107c27dd4(&puStack_338);
      _objc_release(pppuVar7);
      func_0x000107c27da8(&uStack_3a8);
      _objc_release(uStack_3b8);
      _objc_release(uStack_3c0);
    }
    _objc_release(pppuVar12);
    _objc_release(pppuVar10);
    if (ppuVar16 == (undefined1 **)0x0) {
      pppuVar7 = (undefined ***)PTR_PTR_1126d9e88;
      _objc_alloc();
      dVar22 = dVar21;
      func_0x00010c047cc0();
      unaff_x23 = (undefined1 **)PTR_PTR_1126d9e90;
      pppuVar8 = pppuVar7;
      FUN_108526440(PTR_PTR_1126d9e90,pppuVar7);
      _objc_retainAutoreleasedReturnValue();
      ppuVar13 = unaff_x23;
      func_0x00010c25ed40(pppuVar10);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(unaff_x23);
      _objc_release(pppuVar7);
    }
    _objc_release(ppuVar16);
  }
  pppuVar19 = pppuVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2b8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(pppuVar10);
    return pppuVar10;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x23);
  _objc_release(pppuVar7);
  _objc_release(pppuVar12);
  _objc_release(pppuVar10);
  __Unwind_Resume(pppuVar19);
  pppuVar11 = pppuVar19;
  func_0x000104bd46a0(pppuVar19);
  pcStack_468 = FUN_1084e8da8;
  dStack_4a0 = dVar20;
  dStack_498 = dVar21;
  pppuStack_490 = pppuVar19;
  pppuStack_488 = pppuVar7;
  pppuStack_480 = pppuVar12;
  pppuStack_478 = pppuVar10;
  pppuStack_470 = &ppuStack_250;
  _objc_retain();
  _objc_retain(pppuVar8);
  (*(code *)ppuVar13)(pppuVar11,&bStack_4a1);
  dVar20 = dVar22;
  (*(code *)ppuVar13)(pppuVar8,&bStack_4a2);
  uVar14 = 2;
  uVar1 = uVar14;
  if (bStack_4a2 == 0) {
    uVar1 = 0;
  }
  if (bStack_4a1 == 0) {
    uVar1 = 1;
  }
  if (dVar20 < dVar22) {
    uVar14 = 1;
  }
  uVar2 = 0;
  if (dVar20 <= dVar22) {
    uVar2 = uVar14;
  }
  uVar14 = uVar1;
  if ((bStack_4a2 & 1) == 0) {
    uVar14 = uVar2;
  }
  if ((bStack_4a1 & 1) == 0) {
    uVar1 = uVar14;
  }
  _objc_release(pppuVar8);
  _objc_release(pppuVar11);
  return (undefined ***)(ulong)uVar1;
}



/* Entry: 1084e87f0; end: 1084e896f;  */

undefined8 * FUN_1084e87f0(double param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined ***pppuVar7;
  undefined ***pppuVar8;
  undefined1 **ppuVar9;
  uint uVar10;
  undefined ***unaff_x21;
  undefined1 **ppuVar11;
  undefined1 **unaff_x23;
  undefined8 uVar12;
  long lVar13;
  undefined ***pppuVar14;
  double dVar15;
  double dVar16;
  byte bStack_322;
  byte bStack_321;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined1 uStack_2c1;
  undefined **appuStack_2c0 [9];
  undefined1 auStack_278 [24];
  long *plStack_260;
  long *plStack_258;
  undefined1 *puStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  ulong uStack_210;
  long lStack_208;
  long *plStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1c8;
  undefined ***pppuStack_1c0;
  undefined1 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined8 uStack_1a8;
  long lStack_138;
  undefined4 uStack_b8;
  undefined1 uStack_b1;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined4 uStack_3c;
  code *pcStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126d9e88);
  if (param_2 == (undefined8 *)0x0) {
    uStack_50 = 0;
    param_1 = 0.0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_80,param_2);
  }
  puVar4 = &uStack_b1;
  FUN_1085261d4();
  uStack_48 = *(undefined8 *)(puVar4 + 0x10);
  uStack_40 = puVar4[0x19];
  uStack_3f = puVar4[0x18];
  uStack_30 = *(undefined8 *)(puVar4 + 0x28);
  uStack_3c = 1;
  pcStack_38 = FUN_1084e8da8;
  lStack_a8 = 0;
  uStack_a0 = 0;
  lStack_b0 = 0;
  func_0x000100c435d0(&lStack_b0,&uStack_48,&lStack_28,1);
  func_0x000100c436b8(&ppuStack_98,&lStack_b0);
  uStack_b8 = 1;
  puVar5 = &uStack_80;
  pppuVar8 = &ppuStack_98;
  ppuVar9 = (undefined1 **)&uStack_b8;
  func_0x00010054c81c(puVar5);
  _objc_retainAutoreleasedReturnValue();
  if (ppuStack_98 != (undefined **)0x0) {
    ppuStack_90 = ppuStack_98;
    __ZdlPv();
  }
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_58);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  puVar6 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return puVar5;
  }
  ___stack_chk_fail();
  func_0x000104d96620(&uStack_80);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar7 = pppuVar8;
  dVar15 = param_1;
  _objc_retain();
  _objc_retain(pppuVar8);
  pppuVar14 = pppuVar8;
  func_0x00010c08fa60();
  if (pppuVar14 != (undefined ***)0x0) {
    _objc_retain(puVar6);
    _objc_retain(pppuVar8);
    pppuVar14 = pppuVar8;
    func_0x00010c08fa60();
    if (pppuVar14 == (undefined ***)0x0) {
      ppuVar11 = (undefined1 **)0x0;
    }
    else {
      _objc_opt_class(PTR_PTR_1126d9e88);
      if (puVar6 == (undefined8 *)0x0) {
        uStack_220 = 0;
        uStack_238 = 0;
        uStack_240 = 0;
        uStack_228 = 0;
        uStack_230 = 0;
        uStack_248 = 0;
        puStack_250 = (undefined1 *)0x0;
      }
      else {
        func_0x00010bfa6be0(&puStack_250,puVar6);
      }
      puVar4 = &uStack_2c1;
      FUN_10852605c(puVar4);
      unaff_x21 = (undefined ***)PTR__OBJC_CLASS___NSArray_1126ae530;
      pppuStack_1c0 = pppuVar8;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uStack_2d8 = 0;
      uStack_2d0 = 0;
      uStack_2e0 = 0;
      pppuVar7 = unaff_x21;
      func_0x00010bf529e0(unaff_x21);
      func_0x000107c281a4(&uStack_2e0,pppuVar7);
      dVar15 = 0.0;
      lStack_208 = 0;
      uStack_210 = 0;
      uStack_1f8 = 0;
      plStack_200 = (long *)0x0;
      uStack_1e8 = 0;
      uStack_1f0 = 0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      _objc_retain(unaff_x21);
      pppuVar7 = unaff_x21;
      func_0x00010bf52a60();
      if (pppuVar7 != (undefined ***)0x0) {
        lVar13 = *plStack_200;
        do {
          pppuVar14 = (undefined ***)0x0;
          do {
            if (*plStack_200 != lVar13) {
              _objc_enumerationMutation(unaff_x21);
            }
            uVar12 = *(undefined8 *)(lStack_208 + (long)pppuVar14 * 8);
            _objc_retain(uVar12);
            uStack_1c8 = uVar12;
            func_0x000107c281a8(&uStack_2e0,&uStack_1c8);
            _objc_release(uStack_1c8);
            pppuVar14 = (undefined ***)((long)pppuVar14 + 1);
          } while (pppuVar7 != pppuVar14);
          pppuVar7 = unaff_x21;
          func_0x00010bf52a60();
        } while (pppuVar7 != (undefined ***)0x0);
      }
      _objc_release(unaff_x21);
      _objc_release(unaff_x21);
      func_0x000107c281a0(appuStack_2c0,0xc,puVar4,&uStack_2e0);
      puStack_1b8 = (undefined1 *)0x0;
      puStack_1b0 = (undefined1 *)0x0;
      uStack_1a8 = 0;
      uStack_210 = uStack_210 & 0xffffffff00000000;
      unaff_x23 = &puStack_250;
      pppuVar7 = appuStack_2c0;
      ppuVar9 = &puStack_1b8;
      func_0x000107c310cc(unaff_x23,pppuVar7,ppuVar9,&uStack_210);
      _objc_retainAutoreleasedReturnValue();
      ppuVar11 = unaff_x23;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x23);
      if (puStack_1b8 != (undefined1 *)0x0) {
        puStack_1b0 = puStack_1b8;
        __ZdlPv();
      }
      plVar3 = plStack_258;
      appuStack_2c0[0] = &PTR_SUB_110862700;
      plStack_258 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      plVar3 = plStack_260;
      plStack_260 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      puStack_1b8 = auStack_278;
      func_0x000107c27dd4(&puStack_1b8);
      puStack_1b8 = (undefined1 *)&uStack_2e0;
      func_0x000107c27dd4(&puStack_1b8);
      _objc_release(unaff_x21);
      func_0x000107c27da8(&uStack_228);
      _objc_release(uStack_238);
      _objc_release(uStack_240);
    }
    _objc_release(pppuVar8);
    _objc_release(puVar6);
    if (ppuVar11 == (undefined1 **)0x0) {
      unaff_x21 = (undefined ***)PTR_PTR_1126d9e88;
      _objc_alloc();
      func_0x00010c047cc0();
      unaff_x23 = (undefined1 **)PTR_PTR_1126d9e90;
      pppuVar7 = unaff_x21;
      FUN_108526440(PTR_PTR_1126d9e90,unaff_x21);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = unaff_x23;
      func_0x00010c25ed40(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(unaff_x23);
      _objc_release(unaff_x21);
      dVar15 = param_1;
    }
    _objc_release(ppuVar11);
  }
  pppuVar14 = pppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar6);
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x23);
  _objc_release(unaff_x21);
  _objc_release(pppuVar8);
  _objc_release(puVar6);
  __Unwind_Resume(pppuVar14);
  func_0x000104bd46a0(pppuVar14);
  _objc_retain();
  _objc_retain(pppuVar7);
  (*(code *)ppuVar9)(pppuVar14,&bStack_321);
  dVar16 = dVar15;
  (*(code *)ppuVar9)(pppuVar7,&bStack_322);
  uVar10 = 2;
  uVar1 = uVar10;
  if (bStack_322 == 0) {
    uVar1 = 0;
  }
  if (bStack_321 == 0) {
    uVar1 = 1;
  }
  if (dVar16 < dVar15) {
    uVar10 = 1;
  }
  uVar2 = 0;
  if (dVar16 <= dVar15) {
    uVar2 = uVar10;
  }
  uVar10 = uVar1;
  if ((bStack_322 & 1) == 0) {
    uVar10 = uVar2;
  }
  if ((bStack_321 & 1) == 0) {
    uVar1 = uVar10;
  }
  _objc_release(pppuVar7);
  _objc_release(pppuVar14);
  return (undefined8 *)(ulong)uVar1;
}



/* Entry: 1084e8970; end: 1084e8da7;  */

ulong FUN_1084e8970(double param_1,ulong param_2,undefined ***param_3,undefined1 **param_4)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined ***pppuVar5;
  uint uVar6;
  undefined ***unaff_x21;
  undefined1 **ppuVar7;
  undefined1 **unaff_x23;
  undefined8 uVar8;
  long lVar9;
  undefined ***pppuVar10;
  double dVar11;
  double dVar12;
  byte bStack_262;
  byte bStack_261;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 uStack_201;
  undefined **appuStack_200 [9];
  undefined1 auStack_1b8 [24];
  long *plStack_1a0;
  long *plStack_198;
  undefined1 *puStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_108;
  undefined ***pppuStack_100;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  undefined8 uStack_e8;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar5 = param_3;
  dVar11 = param_1;
  _objc_retain();
  _objc_retain(param_3);
  pppuVar10 = param_3;
  func_0x00010c08fa60();
  if (pppuVar10 != (undefined ***)0x0) {
    _objc_retain(param_2);
    _objc_retain(param_3);
    pppuVar10 = param_3;
    func_0x00010c08fa60();
    if (pppuVar10 == (undefined ***)0x0) {
      ppuVar7 = (undefined1 **)0x0;
    }
    else {
      _objc_opt_class(PTR_PTR_1126d9e88);
      if (param_2 == 0) {
        uStack_160 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        uStack_168 = 0;
        uStack_170 = 0;
        uStack_188 = 0;
        puStack_190 = (undefined1 *)0x0;
      }
      else {
        func_0x00010bfa6be0(&puStack_190,param_2);
      }
      puVar4 = &uStack_201;
      FUN_10852605c(puVar4);
      unaff_x21 = (undefined ***)PTR__OBJC_CLASS___NSArray_1126ae530;
      pppuStack_100 = param_3;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uStack_218 = 0;
      uStack_210 = 0;
      uStack_220 = 0;
      pppuVar5 = unaff_x21;
      func_0x00010bf529e0(unaff_x21);
      func_0x000107c281a4(&uStack_220,pppuVar5);
      dVar11 = 0.0;
      lStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      plStack_140 = (long *)0x0;
      uStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      _objc_retain(unaff_x21);
      pppuVar5 = unaff_x21;
      func_0x00010bf52a60();
      if (pppuVar5 != (undefined ***)0x0) {
        lVar9 = *plStack_140;
        do {
          pppuVar10 = (undefined ***)0x0;
          do {
            if (*plStack_140 != lVar9) {
              _objc_enumerationMutation(unaff_x21);
            }
            uVar8 = *(undefined8 *)(lStack_148 + (long)pppuVar10 * 8);
            _objc_retain(uVar8);
            uStack_108 = uVar8;
            func_0x000107c281a8(&uStack_220,&uStack_108);
            _objc_release(uStack_108);
            pppuVar10 = (undefined ***)((long)pppuVar10 + 1);
          } while (pppuVar5 != pppuVar10);
          pppuVar5 = unaff_x21;
          func_0x00010bf52a60();
        } while (pppuVar5 != (undefined ***)0x0);
      }
      _objc_release(unaff_x21);
      _objc_release(unaff_x21);
      func_0x000107c281a0(appuStack_200,0xc,puVar4,&uStack_220);
      puStack_f8 = (undefined1 *)0x0;
      puStack_f0 = (undefined1 *)0x0;
      uStack_e8 = 0;
      uStack_150 = uStack_150 & 0xffffffff00000000;
      unaff_x23 = &puStack_190;
      pppuVar5 = appuStack_200;
      param_4 = &puStack_f8;
      func_0x000107c310cc(unaff_x23,pppuVar5,param_4,&uStack_150);
      _objc_retainAutoreleasedReturnValue();
      ppuVar7 = unaff_x23;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x23);
      if (puStack_f8 != (undefined1 *)0x0) {
        puStack_f0 = puStack_f8;
        __ZdlPv();
      }
      plVar3 = plStack_198;
      appuStack_200[0] = &PTR_SUB_110862700;
      plStack_198 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      plVar3 = plStack_1a0;
      plStack_1a0 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      puStack_f8 = auStack_1b8;
      func_0x000107c27dd4(&puStack_f8);
      puStack_f8 = (undefined1 *)&uStack_220;
      func_0x000107c27dd4(&puStack_f8);
      _objc_release(unaff_x21);
      func_0x000107c27da8(&uStack_168);
      _objc_release(uStack_178);
      _objc_release(uStack_180);
    }
    _objc_release(param_3);
    _objc_release(param_2);
    if (ppuVar7 == (undefined1 **)0x0) {
      unaff_x21 = (undefined ***)PTR_PTR_1126d9e88;
      _objc_alloc();
      func_0x00010c047cc0();
      unaff_x23 = (undefined1 **)PTR_PTR_1126d9e90;
      pppuVar5 = unaff_x21;
      FUN_108526440(PTR_PTR_1126d9e90,unaff_x21);
      _objc_retainAutoreleasedReturnValue();
      param_4 = unaff_x23;
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(unaff_x23);
      _objc_release(unaff_x21);
      dVar11 = param_1;
    }
    _objc_release(ppuVar7);
  }
  pppuVar10 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return param_2;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x23);
  _objc_release(unaff_x21);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume(pppuVar10);
  func_0x000104bd46a0(pppuVar10);
  _objc_retain();
  _objc_retain(pppuVar5);
  (*(code *)param_4)(pppuVar10,&bStack_261);
  dVar12 = dVar11;
  (*(code *)param_4)(pppuVar5,&bStack_262);
  uVar6 = 2;
  uVar1 = uVar6;
  if (bStack_262 == 0) {
    uVar1 = 0;
  }
  if (bStack_261 == 0) {
    uVar1 = 1;
  }
  if (dVar12 < dVar11) {
    uVar6 = 1;
  }
  uVar2 = 0;
  if (dVar12 <= dVar11) {
    uVar2 = uVar6;
  }
  uVar6 = uVar1;
  if ((bStack_262 & 1) == 0) {
    uVar6 = uVar2;
  }
  if ((bStack_261 & 1) == 0) {
    uVar1 = uVar6;
  }
  _objc_release(pppuVar5);
  _objc_release(pppuVar10);
  return (ulong)uVar1;
}



/* Entry: 1084e8da8; end: 1084e8e5b;  */

undefined4 FUN_1084e8da8(double param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  byte bStack_42;
  byte bStack_41;
  
  _objc_retain();
  _objc_retain(param_3);
  (*param_4)(param_2,&bStack_41);
  dVar4 = param_1;
  (*param_4)(param_3,&bStack_42);
  uVar3 = 2;
  uVar1 = uVar3;
  if (bStack_42 == 0) {
    uVar1 = 0;
  }
  if (bStack_41 == 0) {
    uVar1 = 1;
  }
  if (dVar4 < param_1) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (dVar4 <= param_1) {
    uVar2 = uVar3;
  }
  uVar3 = uVar1;
  if ((bStack_42 & 1) == 0) {
    uVar3 = uVar2;
  }
  if ((bStack_41 & 1) == 0) {
    uVar1 = uVar3;
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1084e8e5c; end: 1084e8f9f;  */

ulong FUN_1084e8e5c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c26f2a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  uVar2 = param_4;
  dVar4 = param_1;
  func_0x00010c26f2a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2709c0();
  dVar5 = dVar4;
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (dVar4 <= param_1) {
    uVar1 = param_3;
    func_0x00010c26f2a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0();
    uVar2 = param_4;
    dVar4 = dVar5;
    func_0x00010c26f2a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2709c0();
    uVar3 = (ulong)(dVar4 < dVar5);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  else {
    uVar3 = 0xffffffffffffffff;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1084e8fa0; end: 1084e926b;  */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x0001084e9830 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_1084e8fa0(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined ***pppuVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  long lVar16;
  undefined ***pppuVar17;
  undefined **ppuVar18;
  long lVar19;
  undefined ***pppuVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined4 uStack_91c;
  undefined1 *puStack_918;
  undefined1 *puStack_910;
  undefined8 uStack_908;
  undefined1 auStack_900 [31];
  undefined1 uStack_8e1;
  undefined **appuStack_8e0 [9];
  undefined1 auStack_898 [24];
  long *plStack_880;
  long *plStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  long lStack_7b8;
  undefined4 uStack_70c;
  undefined1 *puStack_708;
  undefined1 *puStack_700;
  undefined8 uStack_6f8;
  undefined1 auStack_6f0 [31];
  undefined1 uStack_6d1;
  undefined **appuStack_6d0 [9];
  undefined1 auStack_688 [24];
  long *plStack_670;
  long *plStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  long lStack_5a8;
  undefined4 uStack_4fc;
  undefined1 *puStack_4f8;
  undefined1 *puStack_4f0;
  undefined8 uStack_4e8;
  undefined1 auStack_4e0 [31];
  undefined1 uStack_4c1;
  undefined **appuStack_4c0 [9];
  undefined1 auStack_478 [24];
  long *plStack_460;
  long *plStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  long lStack_398;
  undefined **appuStack_2f0 [17];
  long lStack_268;
  undefined4 uStack_1cc;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [31];
  undefined1 uStack_191;
  undefined **appuStack_190 [9];
  undefined1 auStack_148 [24];
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126d6788);
  if (param_1 == (undefined8 *)0x0) {
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_120,param_1);
  }
  puVar4 = &uStack_191;
  FUN_108517ba4(puVar4);
  FUN_1084e926c(auStack_1b0,param_2);
  func_0x000107c281a0(appuStack_190,0xd,puVar4,auStack_1b0);
  puStack_1c8 = (undefined1 *)0x0;
  puStack_1c0 = (undefined1 *)0x0;
  uStack_1b8 = 0;
  uStack_1cc = 0;
  puVar5 = &uStack_120;
  pppuVar14 = appuStack_190;
  func_0x000107c310cc(puVar5,pppuVar14,&puStack_1c8,&uStack_1cc);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1c8 != (undefined1 *)0x0) {
    puStack_1c0 = puStack_1c8;
    __ZdlPv();
  }
  plVar3 = plStack_128;
  appuStack_190[0] = &PTR_SUB_110862700;
  plStack_128 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_1c8 = auStack_148;
  func_0x000107c27dd4(&puStack_1c8);
  puStack_1c8 = auStack_1b0;
  func_0x000107c27dd4(&puStack_1c8);
  func_0x000107c27da8(&uStack_f8);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_retain(puVar5);
  puVar6 = puVar5;
  func_0x00010bf52a60();
  lVar16 = lRam0000000000000000;
  while (puVar6 != (undefined8 *)0x0) {
    puVar21 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar16) {
        _objc_enumerationMutation(puVar5);
      }
      pppuVar14 = *(undefined ****)((long)puVar21 * 8);
      puVar7 = PTR_PTR_1126d6780;
      FUN_1085185f4();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar21 = (undefined8 *)((long)puVar21 + 1);
    } while (puVar6 != puVar21);
    puVar6 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(param_2);
  puVar6 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  lStack_268 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(pppuVar14);
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  pppuVar8 = pppuVar14;
  func_0x00010bf529e0();
  func_0x000107c281a4(puVar6);
  _objc_retain(pppuVar14);
  pppuVar15 = pppuVar14;
  func_0x00010bf52a60();
  lVar16 = lRam0000000000000000;
  while (pppuVar15 != (undefined ***)0x0) {
    pppuVar20 = (undefined ***)0x0;
    do {
      if (lRam0000000000000000 != lVar16) {
        _objc_enumerationMutation(pppuVar14);
      }
      ppuVar18 = *(undefined ***)((long)pppuVar20 * 8);
      _objc_retain(ppuVar18);
      pppuVar8 = appuStack_2f0;
      appuStack_2f0[0] = ppuVar18;
      func_0x000107c281a8(puVar6);
      _objc_release(appuStack_2f0[0]);
      pppuVar20 = (undefined ***)((long)pppuVar20 + 1);
    } while (pppuVar15 != pppuVar20);
    pppuVar15 = pppuVar14;
    func_0x00010bf52a60();
  }
  _objc_release(pppuVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_268) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pppuVar8 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(pppuVar8);
  _objc_opt_class(PTR_PTR_1126d9e48);
  if (pppuVar14 == (undefined ***)0x0) {
    uStack_420 = 0;
    uStack_438 = 0;
    uStack_440 = 0;
    uStack_428 = 0;
    uStack_430 = 0;
    uStack_448 = 0;
    uStack_450 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_450,pppuVar14);
  }
  puVar4 = &uStack_4c1;
  func_0x00010095049c(puVar4);
  FUN_1084e926c(auStack_4e0,pppuVar8);
  func_0x000107c281a0(appuStack_4c0,0xd,puVar4,auStack_4e0);
  puStack_4f8 = (undefined1 *)0x0;
  puStack_4f0 = (undefined1 *)0x0;
  uStack_4e8 = 0;
  uStack_4fc = 0;
  puVar5 = &uStack_450;
  pppuVar15 = appuStack_4c0;
  func_0x000107c310cc(puVar5,pppuVar15,&puStack_4f8,&uStack_4fc);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_4f8 != (undefined1 *)0x0) {
    puStack_4f0 = puStack_4f8;
    __ZdlPv();
  }
  plVar3 = plStack_458;
  appuStack_4c0[0] = &PTR_SUB_110862700;
  plStack_458 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_460;
  plStack_460 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_4f8 = auStack_478;
  func_0x000107c27dd4(&puStack_4f8);
  puStack_4f8 = auStack_4e0;
  func_0x000107c27dd4(&puStack_4f8);
  func_0x000107c27da8(&uStack_428);
  _objc_release(uStack_438);
  _objc_release(uStack_440);
  _objc_retain(puVar5);
  puVar6 = puVar5;
  func_0x00010bf52a60();
  lVar16 = lRam0000000000000000;
  while (puVar6 != (undefined8 *)0x0) {
    puVar21 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar16) {
        _objc_enumerationMutation(puVar5);
      }
      pppuVar15 = *(undefined ****)((long)puVar21 * 8);
      puVar7 = PTR_PTR_1126d9e50;
      FUN_108517280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(pppuVar14);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar21 = (undefined8 *)((long)puVar21 + 1);
    } while (puVar6 != puVar21);
    puVar6 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(pppuVar8);
  pppuVar20 = pppuVar14;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_398) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(pppuVar8);
  _objc_release(pppuVar14);
  __Unwind_Resume();
  lStack_5a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(pppuVar15);
  _objc_opt_class(PTR_PTR_1126d67a0);
  if (pppuVar20 == (undefined ***)0x0) {
    uStack_630 = 0;
    uStack_648 = 0;
    uStack_650 = 0;
    uStack_638 = 0;
    uStack_640 = 0;
    uStack_658 = 0;
    uStack_660 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_660,pppuVar20);
  }
  puVar4 = &uStack_6d1;
  FUN_10850e510(puVar4);
  FUN_1084e926c(auStack_6f0,pppuVar15);
  func_0x000107c281a0(appuStack_6d0,0xc,puVar4,auStack_6f0);
  puStack_708 = (undefined1 *)0x0;
  puStack_700 = (undefined1 *)0x0;
  uStack_6f8 = 0;
  uStack_70c = 0;
  puVar5 = &uStack_660;
  pppuVar14 = appuStack_6d0;
  func_0x000107c310cc(puVar5,pppuVar14,&puStack_708,&uStack_70c);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_708 != (undefined1 *)0x0) {
    puStack_700 = puStack_708;
    __ZdlPv();
  }
  plVar3 = plStack_668;
  appuStack_6d0[0] = &PTR_SUB_110862700;
  plStack_668 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_670;
  plStack_670 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_708 = auStack_688;
  func_0x000107c27dd4(&puStack_708);
  puStack_708 = auStack_6f0;
  func_0x000107c27dd4(&puStack_708);
  func_0x000107c27da8(&uStack_638);
  _objc_release(uStack_648);
  _objc_release(uStack_650);
  _objc_retain(puVar5);
  puVar6 = puVar5;
  func_0x00010bf52a60();
  lVar16 = lRam0000000000000000;
  while (puVar6 != (undefined8 *)0x0) {
    puVar21 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar16) {
        _objc_enumerationMutation(puVar5);
      }
      pppuVar14 = *(undefined ****)((long)puVar21 * 8);
      puVar7 = PTR_PTR_1126d6798;
      FUN_10850ef60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(pppuVar20);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar21 = (undefined8 *)((long)puVar21 + 1);
    } while (puVar6 != puVar21);
    puVar6 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(pppuVar15);
  pppuVar8 = pppuVar20;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(pppuVar15);
  _objc_release(pppuVar20);
  __Unwind_Resume();
  lStack_7b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(pppuVar14);
  _objc_opt_class(PTR_PTR_1126d67a0);
  if (pppuVar8 == (undefined ***)0x0) {
    uStack_840 = 0;
    uStack_858 = 0;
    uStack_860 = 0;
    uStack_848 = 0;
    uStack_850 = 0;
    uStack_868 = 0;
    uStack_870 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_870,pppuVar8);
  }
  puVar4 = &uStack_8e1;
  FUN_10850e510(puVar4);
  FUN_1084e926c(auStack_900,pppuVar14);
  func_0x000107c281a0(appuStack_8e0,0xd,puVar4,auStack_900);
  puStack_918 = (undefined1 *)0x0;
  puStack_910 = (undefined1 *)0x0;
  uStack_908 = 0;
  uStack_91c = 0;
  puVar5 = &uStack_870;
  pppuVar15 = appuStack_8e0;
  func_0x000107c310cc(puVar5,pppuVar15,&puStack_918,&uStack_91c);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_918 != (undefined1 *)0x0) {
    puStack_910 = puStack_918;
    __ZdlPv();
  }
  plVar3 = plStack_878;
  appuStack_8e0[0] = &PTR_SUB_110862700;
  plStack_878 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_880;
  plStack_880 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_918 = auStack_898;
  func_0x000107c27dd4(&puStack_918);
  puStack_918 = auStack_900;
  func_0x000107c27dd4(&puStack_918);
  func_0x000107c27da8(&uStack_848);
  _objc_release(uStack_858);
  _objc_release(uStack_860);
  _objc_retain(puVar5);
  puVar6 = puVar5;
  func_0x00010bf52a60();
  lVar16 = lRam0000000000000000;
  while (puVar6 != (undefined8 *)0x0) {
    puVar21 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar16) {
        _objc_enumerationMutation(puVar5);
      }
      pppuVar15 = *(undefined ****)((long)puVar21 * 8);
      puVar7 = PTR_PTR_1126d6798;
      FUN_10850ef60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(pppuVar8);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar21 = (undefined8 *)((long)puVar21 + 1);
    } while (puVar6 != puVar21);
    puVar6 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(pppuVar14);
  pppuVar20 = pppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7b8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(pppuVar14);
  _objc_release(pppuVar8);
  __Unwind_Resume();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar14 = pppuVar15;
  _objc_retain();
  _objc_retain(pppuVar15);
  pppuVar8 = pppuVar15;
  func_0x00010bf529e0();
  if (pppuVar8 == (undefined ***)0x0) {
    pppuVar13 = pppuVar20;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    pppuVar8 = (undefined ***)PTR____NSArray0__struct_11034ab48;
    if (pppuVar13 != (undefined ***)0x0) {
      pppuVar8 = pppuVar13;
    }
    _objc_retain(pppuVar8);
  }
  else {
    if ((pppuVar20 != (undefined ***)0x0) ||
       (pppuVar8 = pppuVar15, func_0x00010bf529e0(),
       pppuVar8 != (undefined ***)((long)&lRam0000000000000000 + 1))) {
      pppuVar13 = (undefined ***)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      pppuVar8 = pppuVar20;
      func_0x00010c25b340();
      _objc_retainAutoreleasedReturnValue();
      pppuVar17 = pppuVar8;
      func_0x00010bf529e0();
      _objc_release(pppuVar8);
      if (pppuVar17 != (undefined ***)0x0) {
        pppuVar8 = pppuVar20;
        func_0x00010c25b340(pppuVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(pppuVar13);
        _objc_release(pppuVar8);
        pppuVar8 = pppuVar20;
        func_0x00010c25b340(pppuVar20);
        _objc_retainAutoreleasedReturnValue();
        pppuVar17 = pppuVar8;
        func_0x00010c0b8600();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(pppuVar8);
        func_0x00010befa160(puVar7);
        _objc_release(pppuVar17);
      }
      _objc_retain(pppuVar15);
      pppuVar8 = pppuVar15;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (pppuVar8 != (undefined ***)0x0) {
        pppuVar17 = (undefined ***)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(pppuVar15);
          }
          lVar9 = *(long *)((long)pppuVar17 * 8);
          func_0x00010c25b340();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar9;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          while (lVar10 != 0) {
            lVar19 = 0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(lVar9);
              }
              uVar22 = *(undefined8 *)(lVar19 * 8);
              func_0x00010bf3cf60(uVar22);
              _objc_retainAutoreleasedReturnValue();
              uVar11 = uVar22;
              func_0x000108ea5f00();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar22);
              puVar12 = puVar7;
              func_0x00010bf4b900();
              if (((ulong)puVar12 & 1) == 0) {
                func_0x00010befa120(pppuVar13);
                func_0x00010befa120(puVar7);
              }
              _objc_release(uVar11);
              lVar19 = lVar19 + 1;
            } while (lVar10 != lVar19);
            lVar10 = lVar9;
            func_0x00010bf52a60();
          }
          _objc_release(lVar9);
          pppuVar17 = (undefined ***)((long)pppuVar17 + 1);
        } while (pppuVar17 != pppuVar8);
        pppuVar8 = pppuVar15;
        func_0x00010bf52a60();
      }
      _objc_release(pppuVar15);
      pppuVar8 = pppuVar13;
      func_0x00010c246ca0(pppuVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(pppuVar13);
      goto LAB_1084e9f78;
    }
    pppuVar13 = pppuVar15;
    func_0x00010bfb1920(pppuVar15);
    _objc_retainAutoreleasedReturnValue();
    pppuVar8 = pppuVar13;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(pppuVar13);
LAB_1084e9f78:
  _objc_release(pppuVar15);
  pppuVar17 = pppuVar20;
  _objc_release(pppuVar20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
    ___stack_chk_fail();
    _objc_release(pppuVar13);
    _objc_release(pppuVar15);
    _objc_release(pppuVar20);
    __Unwind_Resume(pppuVar17);
    func_0x00010bf3cf60(pppuVar14);
    _objc_retainAutoreleasedReturnValue();
    pppuVar8 = pppuVar14;
    func_0x000108ea5f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar14);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar8);
  return;
}



/* Entry: 1084e926c; end: 1084e93cf;  */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x0001084e9830 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_1084e926c(undefined8 *param_1,undefined ***param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined ***pppuVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined ***pppuVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  long lVar16;
  undefined ***pppuVar17;
  undefined **ppuVar18;
  long lVar19;
  undefined ***pppuVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined4 uStack_70c;
  undefined1 *puStack_708;
  undefined1 *puStack_700;
  undefined8 uStack_6f8;
  undefined1 auStack_6f0 [31];
  undefined1 uStack_6d1;
  undefined **appuStack_6d0 [9];
  undefined1 auStack_688 [24];
  long *plStack_670;
  long *plStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  long lStack_5a8;
  undefined4 uStack_4fc;
  undefined1 *puStack_4f8;
  undefined1 *puStack_4f0;
  undefined8 uStack_4e8;
  undefined1 auStack_4e0 [31];
  undefined1 uStack_4c1;
  undefined **appuStack_4c0 [9];
  undefined1 auStack_478 [24];
  long *plStack_460;
  long *plStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  long lStack_398;
  undefined4 uStack_2ec;
  undefined1 *puStack_2e8;
  undefined1 *puStack_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2d0 [31];
  undefined1 uStack_2b1;
  undefined **appuStack_2b0 [9];
  undefined1 auStack_268 [24];
  long *plStack_250;
  long *plStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_188;
  undefined **appuStack_e0 [17];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  pppuVar15 = param_2;
  func_0x00010bf529e0();
  func_0x000107c281a4(param_1);
  _objc_retain(param_2);
  pppuVar14 = param_2;
  func_0x00010bf52a60();
  lVar16 = lRam0000000000000000;
  while (pppuVar14 != (undefined ***)0x0) {
    pppuVar20 = (undefined ***)0x0;
    do {
      if (lRam0000000000000000 != lVar16) {
        _objc_enumerationMutation(param_2);
      }
      ppuVar18 = *(undefined ***)((long)pppuVar20 * 8);
      _objc_retain(ppuVar18);
      pppuVar15 = appuStack_e0;
      appuStack_e0[0] = ppuVar18;
      func_0x000107c281a8(param_1);
      _objc_release(appuStack_e0[0]);
      pppuVar20 = (undefined ***)((long)pppuVar20 + 1);
    } while (pppuVar14 != pppuVar20);
    pppuVar14 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if ((int)pppuVar15 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(pppuVar15);
  _objc_opt_class(PTR_PTR_1126d9e48);
  if (param_2 == (undefined ***)0x0) {
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_240,param_2);
  }
  puVar4 = &uStack_2b1;
  func_0x00010095049c(puVar4);
  FUN_1084e926c(auStack_2d0,pppuVar15);
  func_0x000107c281a0(appuStack_2b0,0xd,puVar4,auStack_2d0);
  puStack_2e8 = (undefined1 *)0x0;
  puStack_2e0 = (undefined1 *)0x0;
  uStack_2d8 = 0;
  uStack_2ec = 0;
  puVar5 = &uStack_240;
  pppuVar14 = appuStack_2b0;
  func_0x000107c310cc(puVar5,pppuVar14,&puStack_2e8,&uStack_2ec);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_2e8 != (undefined1 *)0x0) {
    puStack_2e0 = puStack_2e8;
    __ZdlPv();
  }
  plVar3 = plStack_248;
  appuStack_2b0[0] = &PTR_SUB_110862700;
  plStack_248 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_250;
  plStack_250 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_2e8 = auStack_268;
  func_0x000107c27dd4(&puStack_2e8);
  puStack_2e8 = auStack_2d0;
  func_0x000107c27dd4(&puStack_2e8);
  func_0x000107c27da8(&uStack_218);
  _objc_release(uStack_228);
  _objc_release(uStack_230);
  _objc_retain(puVar5);
  puVar6 = puVar5;
  func_0x00010bf52a60();
  lVar16 = lRam0000000000000000;
  while (puVar6 != (undefined8 *)0x0) {
    puVar21 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar16) {
        _objc_enumerationMutation(puVar5);
      }
      pppuVar14 = *(undefined ****)((long)puVar21 * 8);
      puVar7 = PTR_PTR_1126d9e50;
      FUN_108517280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar21 = (undefined8 *)((long)puVar21 + 1);
    } while (puVar6 != puVar21);
    puVar6 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(pppuVar15);
  pppuVar20 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(pppuVar15);
  _objc_release(param_2);
  __Unwind_Resume();
  lStack_398 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(pppuVar14);
  _objc_opt_class(PTR_PTR_1126d67a0);
  if (pppuVar20 == (undefined ***)0x0) {
    uStack_420 = 0;
    uStack_438 = 0;
    uStack_440 = 0;
    uStack_428 = 0;
    uStack_430 = 0;
    uStack_448 = 0;
    uStack_450 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_450,pppuVar20);
  }
  puVar4 = &uStack_4c1;
  FUN_10850e510(puVar4);
  FUN_1084e926c(auStack_4e0,pppuVar14);
  func_0x000107c281a0(appuStack_4c0,0xc,puVar4,auStack_4e0);
  puStack_4f8 = (undefined1 *)0x0;
  puStack_4f0 = (undefined1 *)0x0;
  uStack_4e8 = 0;
  uStack_4fc = 0;
  puVar5 = &uStack_450;
  pppuVar15 = appuStack_4c0;
  func_0x000107c310cc(puVar5,pppuVar15,&puStack_4f8,&uStack_4fc);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_4f8 != (undefined1 *)0x0) {
    puStack_4f0 = puStack_4f8;
    __ZdlPv();
  }
  plVar3 = plStack_458;
  appuStack_4c0[0] = &PTR_SUB_110862700;
  plStack_458 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_460;
  plStack_460 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_4f8 = auStack_478;
  func_0x000107c27dd4(&puStack_4f8);
  puStack_4f8 = auStack_4e0;
  func_0x000107c27dd4(&puStack_4f8);
  func_0x000107c27da8(&uStack_428);
  _objc_release(uStack_438);
  _objc_release(uStack_440);
  _objc_retain(puVar5);
  puVar6 = puVar5;
  func_0x00010bf52a60();
  lVar16 = lRam0000000000000000;
  while (puVar6 != (undefined8 *)0x0) {
    puVar21 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar16) {
        _objc_enumerationMutation(puVar5);
      }
      pppuVar15 = *(undefined ****)((long)puVar21 * 8);
      puVar7 = PTR_PTR_1126d6798;
      FUN_10850ef60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(pppuVar20);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar21 = (undefined8 *)((long)puVar21 + 1);
    } while (puVar6 != puVar21);
    puVar6 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(pppuVar14);
  pppuVar8 = pppuVar20;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_398) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(pppuVar14);
  _objc_release(pppuVar20);
  __Unwind_Resume();
  lStack_5a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(pppuVar15);
  _objc_opt_class(PTR_PTR_1126d67a0);
  if (pppuVar8 == (undefined ***)0x0) {
    uStack_630 = 0;
    uStack_648 = 0;
    uStack_650 = 0;
    uStack_638 = 0;
    uStack_640 = 0;
    uStack_658 = 0;
    uStack_660 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_660,pppuVar8);
  }
  puVar4 = &uStack_6d1;
  FUN_10850e510(puVar4);
  FUN_1084e926c(auStack_6f0,pppuVar15);
  func_0x000107c281a0(appuStack_6d0,0xd,puVar4,auStack_6f0);
  puStack_708 = (undefined1 *)0x0;
  puStack_700 = (undefined1 *)0x0;
  uStack_6f8 = 0;
  uStack_70c = 0;
  puVar5 = &uStack_660;
  pppuVar14 = appuStack_6d0;
  func_0x000107c310cc(puVar5,pppuVar14,&puStack_708,&uStack_70c);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_708 != (undefined1 *)0x0) {
    puStack_700 = puStack_708;
    __ZdlPv();
  }
  plVar3 = plStack_668;
  appuStack_6d0[0] = &PTR_SUB_110862700;
  plStack_668 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_670;
  plStack_670 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_708 = auStack_688;
  func_0x000107c27dd4(&puStack_708);
  puStack_708 = auStack_6f0;
  func_0x000107c27dd4(&puStack_708);
  func_0x000107c27da8(&uStack_638);
  _objc_release(uStack_648);
  _objc_release(uStack_650);
  _objc_retain(puVar5);
  puVar6 = puVar5;
  func_0x00010bf52a60();
  lVar16 = lRam0000000000000000;
  while (puVar6 != (undefined8 *)0x0) {
    puVar21 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar16) {
        _objc_enumerationMutation(puVar5);
      }
      pppuVar14 = *(undefined ****)((long)puVar21 * 8);
      puVar7 = PTR_PTR_1126d6798;
      FUN_10850ef60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(pppuVar8);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar21 = (undefined8 *)((long)puVar21 + 1);
    } while (puVar6 != puVar21);
    puVar6 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(pppuVar15);
  pppuVar20 = pppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5a8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(pppuVar15);
  _objc_release(pppuVar8);
  __Unwind_Resume();
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar15 = pppuVar14;
  _objc_retain();
  _objc_retain(pppuVar14);
  pppuVar8 = pppuVar14;
  func_0x00010bf529e0();
  if (pppuVar8 == (undefined ***)0x0) {
    pppuVar13 = pppuVar20;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    pppuVar8 = (undefined ***)PTR____NSArray0__struct_11034ab48;
    if (pppuVar13 != (undefined ***)0x0) {
      pppuVar8 = pppuVar13;
    }
    _objc_retain(pppuVar8);
  }
  else {
    if ((pppuVar20 != (undefined ***)0x0) ||
       (pppuVar8 = pppuVar14, func_0x00010bf529e0(),
       pppuVar8 != (undefined ***)((long)&lRam0000000000000000 + 1))) {
      pppuVar13 = (undefined ***)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      pppuVar8 = pppuVar20;
      func_0x00010c25b340();
      _objc_retainAutoreleasedReturnValue();
      pppuVar17 = pppuVar8;
      func_0x00010bf529e0();
      _objc_release(pppuVar8);
      if (pppuVar17 != (undefined ***)0x0) {
        pppuVar8 = pppuVar20;
        func_0x00010c25b340(pppuVar20);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(pppuVar13);
        _objc_release(pppuVar8);
        pppuVar8 = pppuVar20;
        func_0x00010c25b340(pppuVar20);
        _objc_retainAutoreleasedReturnValue();
        pppuVar17 = pppuVar8;
        func_0x00010c0b8600();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(pppuVar8);
        func_0x00010befa160(puVar7);
        _objc_release(pppuVar17);
      }
      _objc_retain(pppuVar14);
      pppuVar8 = pppuVar14;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (pppuVar8 != (undefined ***)0x0) {
        pppuVar17 = (undefined ***)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(pppuVar14);
          }
          lVar9 = *(long *)((long)pppuVar17 * 8);
          func_0x00010c25b340();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar9;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          while (lVar10 != 0) {
            lVar19 = 0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(lVar9);
              }
              uVar22 = *(undefined8 *)(lVar19 * 8);
              func_0x00010bf3cf60(uVar22);
              _objc_retainAutoreleasedReturnValue();
              uVar11 = uVar22;
              func_0x000108ea5f00();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar22);
              puVar12 = puVar7;
              func_0x00010bf4b900();
              if (((ulong)puVar12 & 1) == 0) {
                func_0x00010befa120(pppuVar13);
                func_0x00010befa120(puVar7);
              }
              _objc_release(uVar11);
              lVar19 = lVar19 + 1;
            } while (lVar10 != lVar19);
            lVar10 = lVar9;
            func_0x00010bf52a60();
          }
          _objc_release(lVar9);
          pppuVar17 = (undefined ***)((long)pppuVar17 + 1);
        } while (pppuVar17 != pppuVar8);
        pppuVar8 = pppuVar14;
        func_0x00010bf52a60();
      }
      _objc_release(pppuVar14);
      pppuVar8 = pppuVar13;
      func_0x00010c246ca0(pppuVar13);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(pppuVar13);
      goto LAB_1084e9f78;
    }
    pppuVar13 = pppuVar14;
    func_0x00010bfb1920(pppuVar14);
    _objc_retainAutoreleasedReturnValue();
    pppuVar8 = pppuVar13;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(pppuVar13);
LAB_1084e9f78:
  _objc_release(pppuVar14);
  pppuVar17 = pppuVar20;
  _objc_release(pppuVar20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
    ___stack_chk_fail();
    _objc_release(pppuVar13);
    _objc_release(pppuVar14);
    _objc_release(pppuVar20);
    __Unwind_Resume(pppuVar17);
    func_0x00010bf3cf60(pppuVar15);
    _objc_retainAutoreleasedReturnValue();
    pppuVar8 = pppuVar15;
    func_0x000108ea5f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar15);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar8);
  return;
}



/* Entry: 1084e93d0; end: 1084e969b;  */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x0001084e9830 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_1084e93d0(undefined ***param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  undefined ***pppuVar16;
  long lVar17;
  undefined ***pppuVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined4 uStack_5ec;
  undefined1 *puStack_5e8;
  undefined1 *puStack_5e0;
  undefined8 uStack_5d8;
  undefined1 auStack_5d0 [31];
  undefined1 uStack_5b1;
  undefined **appuStack_5b0 [9];
  undefined1 auStack_568 [24];
  long *plStack_550;
  long *plStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  long lStack_488;
  undefined4 uStack_3dc;
  undefined1 *puStack_3d8;
  undefined1 *puStack_3d0;
  undefined8 uStack_3c8;
  undefined1 auStack_3c0 [31];
  undefined1 uStack_3a1;
  undefined **appuStack_3a0 [9];
  undefined1 auStack_358 [24];
  long *plStack_340;
  long *plStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long lStack_278;
  undefined4 uStack_1cc;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [31];
  undefined1 uStack_191;
  undefined **appuStack_190 [9];
  undefined1 auStack_148 [24];
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126d9e48);
  if (param_1 == (undefined ***)0x0) {
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_120,param_1);
  }
  puVar4 = &uStack_191;
  func_0x00010095049c(puVar4);
  FUN_1084e926c(auStack_1b0,param_2);
  func_0x000107c281a0(appuStack_190,0xd,puVar4,auStack_1b0);
  puStack_1c8 = (undefined1 *)0x0;
  puStack_1c0 = (undefined1 *)0x0;
  uStack_1b8 = 0;
  uStack_1cc = 0;
  puVar5 = &uStack_120;
  pppuVar15 = appuStack_190;
  func_0x000107c310cc(puVar5,pppuVar15,&puStack_1c8,&uStack_1cc);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1c8 != (undefined1 *)0x0) {
    puStack_1c0 = puStack_1c8;
    __ZdlPv();
  }
  plVar3 = plStack_128;
  appuStack_190[0] = &PTR_SUB_110862700;
  plStack_128 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_1c8 = auStack_148;
  func_0x000107c27dd4(&puStack_1c8);
  puStack_1c8 = auStack_1b0;
  func_0x000107c27dd4(&puStack_1c8);
  func_0x000107c27da8(&uStack_f8);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_retain(puVar5);
  puVar6 = puVar5;
  func_0x00010bf52a60();
  lVar17 = lRam0000000000000000;
  while (puVar6 != (undefined8 *)0x0) {
    puVar20 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar17) {
        _objc_enumerationMutation(puVar5);
      }
      pppuVar15 = *(undefined ****)((long)puVar20 * 8);
      puVar7 = PTR_PTR_1126d9e50;
      FUN_108517280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar20 = (undefined8 *)((long)puVar20 + 1);
    } while (puVar6 != puVar20);
    puVar6 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(param_2);
  pppuVar8 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(pppuVar15);
  _objc_opt_class(PTR_PTR_1126d67a0);
  if (pppuVar8 == (undefined ***)0x0) {
    uStack_300 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_330,pppuVar8);
  }
  puVar4 = &uStack_3a1;
  FUN_10850e510(puVar4);
  FUN_1084e926c(auStack_3c0,pppuVar15);
  func_0x000107c281a0(appuStack_3a0,0xc,puVar4,auStack_3c0);
  puStack_3d8 = (undefined1 *)0x0;
  puStack_3d0 = (undefined1 *)0x0;
  uStack_3c8 = 0;
  uStack_3dc = 0;
  puVar5 = &uStack_330;
  pppuVar16 = appuStack_3a0;
  func_0x000107c310cc(puVar5,pppuVar16,&puStack_3d8,&uStack_3dc);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_3d8 != (undefined1 *)0x0) {
    puStack_3d0 = puStack_3d8;
    __ZdlPv();
  }
  plVar3 = plStack_338;
  appuStack_3a0[0] = &PTR_SUB_110862700;
  plStack_338 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_340;
  plStack_340 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_3d8 = auStack_358;
  func_0x000107c27dd4(&puStack_3d8);
  puStack_3d8 = auStack_3c0;
  func_0x000107c27dd4(&puStack_3d8);
  func_0x000107c27da8(&uStack_308);
  _objc_release(uStack_318);
  _objc_release(uStack_320);
  _objc_retain(puVar5);
  puVar6 = puVar5;
  func_0x00010bf52a60();
  lVar17 = lRam0000000000000000;
  while (puVar6 != (undefined8 *)0x0) {
    puVar20 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar17) {
        _objc_enumerationMutation(puVar5);
      }
      pppuVar16 = *(undefined ****)((long)puVar20 * 8);
      puVar7 = PTR_PTR_1126d6798;
      FUN_10850ef60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(pppuVar8);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar20 = (undefined8 *)((long)puVar20 + 1);
    } while (puVar6 != puVar20);
    puVar6 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(pppuVar15);
  pppuVar9 = pppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(pppuVar15);
  _objc_release(pppuVar8);
  __Unwind_Resume();
  lStack_488 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(pppuVar16);
  _objc_opt_class(PTR_PTR_1126d67a0);
  if (pppuVar9 == (undefined ***)0x0) {
    uStack_510 = 0;
    uStack_528 = 0;
    uStack_530 = 0;
    uStack_518 = 0;
    uStack_520 = 0;
    uStack_538 = 0;
    uStack_540 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_540,pppuVar9);
  }
  puVar4 = &uStack_5b1;
  FUN_10850e510(puVar4);
  FUN_1084e926c(auStack_5d0,pppuVar16);
  func_0x000107c281a0(appuStack_5b0,0xd,puVar4,auStack_5d0);
  puStack_5e8 = (undefined1 *)0x0;
  puStack_5e0 = (undefined1 *)0x0;
  uStack_5d8 = 0;
  uStack_5ec = 0;
  puVar5 = &uStack_540;
  pppuVar15 = appuStack_5b0;
  func_0x000107c310cc(puVar5,pppuVar15,&puStack_5e8,&uStack_5ec);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_5e8 != (undefined1 *)0x0) {
    puStack_5e0 = puStack_5e8;
    __ZdlPv();
  }
  plVar3 = plStack_548;
  appuStack_5b0[0] = &PTR_SUB_110862700;
  plStack_548 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_550;
  plStack_550 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_5e8 = auStack_568;
  func_0x000107c27dd4(&puStack_5e8);
  puStack_5e8 = auStack_5d0;
  func_0x000107c27dd4(&puStack_5e8);
  func_0x000107c27da8(&uStack_518);
  _objc_release(uStack_528);
  _objc_release(uStack_530);
  _objc_retain(puVar5);
  puVar6 = puVar5;
  func_0x00010bf52a60();
  lVar17 = lRam0000000000000000;
  while (puVar6 != (undefined8 *)0x0) {
    puVar20 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar17) {
        _objc_enumerationMutation(puVar5);
      }
      pppuVar15 = *(undefined ****)((long)puVar20 * 8);
      puVar7 = PTR_PTR_1126d6798;
      FUN_10850ef60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(pppuVar9);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar20 = (undefined8 *)((long)puVar20 + 1);
    } while (puVar6 != puVar20);
    puVar6 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(pppuVar16);
  pppuVar8 = pppuVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_488) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(pppuVar16);
  _objc_release(pppuVar9);
  __Unwind_Resume();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar16 = pppuVar15;
  _objc_retain();
  _objc_retain(pppuVar15);
  pppuVar9 = pppuVar15;
  func_0x00010bf529e0();
  if (pppuVar9 == (undefined ***)0x0) {
    pppuVar14 = pppuVar8;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = (undefined ***)PTR____NSArray0__struct_11034ab48;
    if (pppuVar14 != (undefined ***)0x0) {
      pppuVar9 = pppuVar14;
    }
    _objc_retain(pppuVar9);
  }
  else {
    if ((pppuVar8 != (undefined ***)0x0) ||
       (pppuVar9 = pppuVar15, func_0x00010bf529e0(),
       pppuVar9 != (undefined ***)((long)&lRam0000000000000000 + 1))) {
      pppuVar14 = (undefined ***)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      pppuVar9 = pppuVar8;
      func_0x00010c25b340();
      _objc_retainAutoreleasedReturnValue();
      pppuVar18 = pppuVar9;
      func_0x00010bf529e0();
      _objc_release(pppuVar9);
      if (pppuVar18 != (undefined ***)0x0) {
        pppuVar9 = pppuVar8;
        func_0x00010c25b340(pppuVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(pppuVar14);
        _objc_release(pppuVar9);
        pppuVar9 = pppuVar8;
        func_0x00010c25b340(pppuVar8);
        _objc_retainAutoreleasedReturnValue();
        pppuVar18 = pppuVar9;
        func_0x00010c0b8600();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(pppuVar9);
        func_0x00010befa160(puVar7);
        _objc_release(pppuVar18);
      }
      _objc_retain(pppuVar15);
      pppuVar9 = pppuVar15;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (pppuVar9 != (undefined ***)0x0) {
        pppuVar18 = (undefined ***)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(pppuVar15);
          }
          lVar10 = *(long *)((long)pppuVar18 * 8);
          func_0x00010c25b340();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar10;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          while (lVar11 != 0) {
            lVar19 = 0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(lVar10);
              }
              uVar21 = *(undefined8 *)(lVar19 * 8);
              func_0x00010bf3cf60(uVar21);
              _objc_retainAutoreleasedReturnValue();
              uVar12 = uVar21;
              func_0x000108ea5f00();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar21);
              puVar13 = puVar7;
              func_0x00010bf4b900();
              if (((ulong)puVar13 & 1) == 0) {
                func_0x00010befa120(pppuVar14);
                func_0x00010befa120(puVar7);
              }
              _objc_release(uVar12);
              lVar19 = lVar19 + 1;
            } while (lVar11 != lVar19);
            lVar11 = lVar10;
            func_0x00010bf52a60();
          }
          _objc_release(lVar10);
          pppuVar18 = (undefined ***)((long)pppuVar18 + 1);
        } while (pppuVar18 != pppuVar9);
        pppuVar9 = pppuVar15;
        func_0x00010bf52a60();
      }
      _objc_release(pppuVar15);
      pppuVar9 = pppuVar14;
      func_0x00010c246ca0(pppuVar14);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(pppuVar14);
      goto LAB_1084e9f78;
    }
    pppuVar14 = pppuVar15;
    func_0x00010bfb1920(pppuVar15);
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = pppuVar14;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(pppuVar14);
LAB_1084e9f78:
  _objc_release(pppuVar15);
  pppuVar18 = pppuVar8;
  _objc_release(pppuVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
    ___stack_chk_fail();
    _objc_release(pppuVar14);
    _objc_release(pppuVar15);
    _objc_release(pppuVar8);
    __Unwind_Resume(pppuVar18);
    func_0x00010bf3cf60(pppuVar16);
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = pppuVar16;
    func_0x000108ea5f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar16);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar9);
  return;
}



/* Entry: 1084e969c; end: 1084e9967;  */

/* WARNING: Heritage AFTER dead removal. Example location: r0x00000000 : 0x0001084e9830 */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_1084e969c(undefined ***param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  undefined ***pppuVar16;
  long lVar17;
  undefined ***pppuVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined4 uStack_3dc;
  undefined1 *puStack_3d8;
  undefined1 *puStack_3d0;
  undefined8 uStack_3c8;
  undefined1 auStack_3c0 [31];
  undefined1 uStack_3a1;
  undefined **appuStack_3a0 [9];
  undefined1 auStack_358 [24];
  long *plStack_340;
  long *plStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  long lStack_278;
  undefined4 uStack_1cc;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [31];
  undefined1 uStack_191;
  undefined **appuStack_190 [9];
  undefined1 auStack_148 [24];
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126d67a0);
  if (param_1 == (undefined ***)0x0) {
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_120,param_1);
  }
  puVar4 = &uStack_191;
  FUN_10850e510(puVar4);
  FUN_1084e926c(auStack_1b0,param_2);
  func_0x000107c281a0(appuStack_190,0xc,puVar4,auStack_1b0);
  puStack_1c8 = (undefined1 *)0x0;
  puStack_1c0 = (undefined1 *)0x0;
  uStack_1b8 = 0;
  uStack_1cc = 0;
  puVar5 = &uStack_120;
  pppuVar15 = appuStack_190;
  func_0x000107c310cc(puVar5,pppuVar15,&puStack_1c8,&uStack_1cc);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1c8 != (undefined1 *)0x0) {
    puStack_1c0 = puStack_1c8;
    __ZdlPv();
  }
  plVar3 = plStack_128;
  appuStack_190[0] = &PTR_SUB_110862700;
  plStack_128 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_1c8 = auStack_148;
  func_0x000107c27dd4(&puStack_1c8);
  puStack_1c8 = auStack_1b0;
  func_0x000107c27dd4(&puStack_1c8);
  func_0x000107c27da8(&uStack_f8);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_retain(puVar5);
  puVar6 = puVar5;
  func_0x00010bf52a60();
  lVar17 = lRam0000000000000000;
  while (puVar6 != (undefined8 *)0x0) {
    puVar20 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar17) {
        _objc_enumerationMutation(puVar5);
      }
      pppuVar15 = *(undefined ****)((long)puVar20 * 8);
      puVar7 = PTR_PTR_1126d6798;
      FUN_10850ef60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar20 = (undefined8 *)((long)puVar20 + 1);
    } while (puVar6 != puVar20);
    puVar6 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(param_2);
  pppuVar8 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(pppuVar15);
  _objc_opt_class(PTR_PTR_1126d67a0);
  if (pppuVar8 == (undefined ***)0x0) {
    uStack_300 = 0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    uStack_328 = 0;
    uStack_330 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_330,pppuVar8);
  }
  puVar4 = &uStack_3a1;
  FUN_10850e510(puVar4);
  FUN_1084e926c(auStack_3c0,pppuVar15);
  func_0x000107c281a0(appuStack_3a0,0xd,puVar4,auStack_3c0);
  puStack_3d8 = (undefined1 *)0x0;
  puStack_3d0 = (undefined1 *)0x0;
  uStack_3c8 = 0;
  uStack_3dc = 0;
  puVar5 = &uStack_330;
  pppuVar16 = appuStack_3a0;
  func_0x000107c310cc(puVar5,pppuVar16,&puStack_3d8,&uStack_3dc);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_3d8 != (undefined1 *)0x0) {
    puStack_3d0 = puStack_3d8;
    __ZdlPv();
  }
  plVar3 = plStack_338;
  appuStack_3a0[0] = &PTR_SUB_110862700;
  plStack_338 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_340;
  plStack_340 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_3d8 = auStack_358;
  func_0x000107c27dd4(&puStack_3d8);
  puStack_3d8 = auStack_3c0;
  func_0x000107c27dd4(&puStack_3d8);
  func_0x000107c27da8(&uStack_308);
  _objc_release(uStack_318);
  _objc_release(uStack_320);
  _objc_retain(puVar5);
  puVar6 = puVar5;
  func_0x00010bf52a60();
  lVar17 = lRam0000000000000000;
  while (puVar6 != (undefined8 *)0x0) {
    puVar20 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar17) {
        _objc_enumerationMutation(puVar5);
      }
      pppuVar16 = *(undefined ****)((long)puVar20 * 8);
      puVar7 = PTR_PTR_1126d6798;
      FUN_10850ef60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(pppuVar8);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar20 = (undefined8 *)((long)puVar20 + 1);
    } while (puVar6 != puVar20);
    puVar6 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(pppuVar15);
  pppuVar9 = pppuVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(pppuVar15);
  _objc_release(pppuVar8);
  __Unwind_Resume();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar15 = pppuVar16;
  _objc_retain();
  _objc_retain(pppuVar16);
  pppuVar8 = pppuVar16;
  func_0x00010bf529e0();
  if (pppuVar8 == (undefined ***)0x0) {
    pppuVar14 = pppuVar9;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    pppuVar8 = (undefined ***)PTR____NSArray0__struct_11034ab48;
    if (pppuVar14 != (undefined ***)0x0) {
      pppuVar8 = pppuVar14;
    }
    _objc_retain(pppuVar8);
  }
  else {
    if ((pppuVar9 != (undefined ***)0x0) ||
       (pppuVar8 = pppuVar16, func_0x00010bf529e0(),
       pppuVar8 != (undefined ***)((long)&lRam0000000000000000 + 1))) {
      pppuVar14 = (undefined ***)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      pppuVar8 = pppuVar9;
      func_0x00010c25b340();
      _objc_retainAutoreleasedReturnValue();
      pppuVar18 = pppuVar8;
      func_0x00010bf529e0();
      _objc_release(pppuVar8);
      if (pppuVar18 != (undefined ***)0x0) {
        pppuVar8 = pppuVar9;
        func_0x00010c25b340(pppuVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(pppuVar14);
        _objc_release(pppuVar8);
        pppuVar8 = pppuVar9;
        func_0x00010c25b340(pppuVar9);
        _objc_retainAutoreleasedReturnValue();
        pppuVar18 = pppuVar8;
        func_0x00010c0b8600();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(pppuVar8);
        func_0x00010befa160(puVar7);
        _objc_release(pppuVar18);
      }
      _objc_retain(pppuVar16);
      pppuVar8 = pppuVar16;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (pppuVar8 != (undefined ***)0x0) {
        pppuVar18 = (undefined ***)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(pppuVar16);
          }
          lVar10 = *(long *)((long)pppuVar18 * 8);
          func_0x00010c25b340();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar10;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          while (lVar11 != 0) {
            lVar19 = 0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(lVar10);
              }
              uVar21 = *(undefined8 *)(lVar19 * 8);
              func_0x00010bf3cf60(uVar21);
              _objc_retainAutoreleasedReturnValue();
              uVar12 = uVar21;
              func_0x000108ea5f00();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar21);
              puVar13 = puVar7;
              func_0x00010bf4b900();
              if (((ulong)puVar13 & 1) == 0) {
                func_0x00010befa120(pppuVar14);
                func_0x00010befa120(puVar7);
              }
              _objc_release(uVar12);
              lVar19 = lVar19 + 1;
            } while (lVar11 != lVar19);
            lVar11 = lVar10;
            func_0x00010bf52a60();
          }
          _objc_release(lVar10);
          pppuVar18 = (undefined ***)((long)pppuVar18 + 1);
        } while (pppuVar18 != pppuVar8);
        pppuVar8 = pppuVar16;
        func_0x00010bf52a60();
      }
      _objc_release(pppuVar16);
      pppuVar8 = pppuVar14;
      func_0x00010c246ca0(pppuVar14);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(pppuVar14);
      goto LAB_1084e9f78;
    }
    pppuVar14 = pppuVar16;
    func_0x00010bfb1920(pppuVar16);
    _objc_retainAutoreleasedReturnValue();
    pppuVar8 = pppuVar14;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(pppuVar14);
LAB_1084e9f78:
  _objc_release(pppuVar16);
  pppuVar18 = pppuVar9;
  _objc_release(pppuVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
    ___stack_chk_fail();
    _objc_release(pppuVar14);
    _objc_release(pppuVar16);
    _objc_release(pppuVar9);
    __Unwind_Resume(pppuVar18);
    func_0x00010bf3cf60(pppuVar15);
    _objc_retainAutoreleasedReturnValue();
    pppuVar8 = pppuVar15;
    func_0x000108ea5f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar15);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar8);
  return;
}



/* Entry: 1084e9968; end: 1084e9c33;  */

void FUN_1084e9968(undefined ***param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined ***pppuVar14;
  undefined ***pppuVar15;
  undefined ***pppuVar16;
  long lVar17;
  undefined ***pppuVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined4 uStack_1cc;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [31];
  undefined1 uStack_191;
  undefined **appuStack_190 [9];
  undefined1 auStack_148 [24];
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126d67a0);
  if (param_1 == (undefined ***)0x0) {
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_120,param_1);
  }
  puVar4 = &uStack_191;
  FUN_10850e510(puVar4);
  FUN_1084e926c(auStack_1b0,param_2);
  func_0x000107c281a0(appuStack_190,0xd,puVar4,auStack_1b0);
  puStack_1c8 = (undefined1 *)0x0;
  puStack_1c0 = (undefined1 *)0x0;
  uStack_1b8 = 0;
  uStack_1cc = 0;
  puVar5 = &uStack_120;
  pppuVar16 = appuStack_190;
  func_0x000107c310cc(puVar5,pppuVar16,&puStack_1c8,&uStack_1cc);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1c8 != (undefined1 *)0x0) {
    puStack_1c0 = puStack_1c8;
    __ZdlPv();
  }
  plVar3 = plStack_128;
  appuStack_190[0] = &PTR_SUB_110862700;
  plStack_128 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_1c8 = auStack_148;
  func_0x000107c27dd4(&puStack_1c8);
  puStack_1c8 = auStack_1b0;
  func_0x000107c27dd4(&puStack_1c8);
  func_0x000107c27da8(&uStack_f8);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_retain(puVar5);
  puVar6 = puVar5;
  func_0x00010bf52a60();
  lVar17 = lRam0000000000000000;
  while (puVar6 != (undefined8 *)0x0) {
    puVar20 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar17) {
        _objc_enumerationMutation(puVar5);
      }
      pppuVar16 = *(undefined ****)((long)puVar20 * 8);
      puVar7 = PTR_PTR_1126d6798;
      FUN_10850ef60();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar20 = (undefined8 *)((long)puVar20 + 1);
    } while (puVar6 != puVar20);
    puVar6 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(param_2);
  pppuVar8 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar5);
  _objc_release(puVar5);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuVar15 = pppuVar16;
  _objc_retain();
  _objc_retain(pppuVar16);
  pppuVar9 = pppuVar16;
  func_0x00010bf529e0();
  if (pppuVar9 == (undefined ***)0x0) {
    pppuVar14 = pppuVar8;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = (undefined ***)PTR____NSArray0__struct_11034ab48;
    if (pppuVar14 != (undefined ***)0x0) {
      pppuVar9 = pppuVar14;
    }
    _objc_retain(pppuVar9);
  }
  else {
    if ((pppuVar8 != (undefined ***)0x0) ||
       (pppuVar9 = pppuVar16, func_0x00010bf529e0(), pppuVar9 != (undefined ***)0x1)) {
      pppuVar14 = (undefined ***)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      pppuVar9 = pppuVar8;
      func_0x00010c25b340();
      _objc_retainAutoreleasedReturnValue();
      pppuVar18 = pppuVar9;
      func_0x00010bf529e0();
      _objc_release(pppuVar9);
      if (pppuVar18 != (undefined ***)0x0) {
        pppuVar9 = pppuVar8;
        func_0x00010c25b340(pppuVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(pppuVar14);
        _objc_release(pppuVar9);
        pppuVar9 = pppuVar8;
        func_0x00010c25b340(pppuVar8);
        _objc_retainAutoreleasedReturnValue();
        pppuVar18 = pppuVar9;
        func_0x00010c0b8600();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(pppuVar9);
        func_0x00010befa160(puVar7);
        _objc_release(pppuVar18);
      }
      _objc_retain(pppuVar16);
      pppuVar9 = pppuVar16;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (pppuVar9 != (undefined ***)0x0) {
        pppuVar18 = (undefined ***)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(pppuVar16);
          }
          lVar10 = *(long *)((long)pppuVar18 * 8);
          func_0x00010c25b340();
          _objc_retainAutoreleasedReturnValue();
          lVar11 = lVar10;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          while (lVar11 != 0) {
            lVar19 = 0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(lVar10);
              }
              uVar21 = *(undefined8 *)(lVar19 * 8);
              func_0x00010bf3cf60(uVar21);
              _objc_retainAutoreleasedReturnValue();
              uVar12 = uVar21;
              func_0x000108ea5f00();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar21);
              puVar13 = puVar7;
              func_0x00010bf4b900();
              if (((ulong)puVar13 & 1) == 0) {
                func_0x00010befa120(pppuVar14);
                func_0x00010befa120(puVar7);
              }
              _objc_release(uVar12);
              lVar19 = lVar19 + 1;
            } while (lVar11 != lVar19);
            lVar11 = lVar10;
            func_0x00010bf52a60();
          }
          _objc_release(lVar10);
          pppuVar18 = (undefined ***)((long)pppuVar18 + 1);
        } while (pppuVar18 != pppuVar9);
        pppuVar9 = pppuVar16;
        func_0x00010bf52a60();
      }
      _objc_release(pppuVar16);
      pppuVar9 = pppuVar14;
      func_0x00010c246ca0(pppuVar14);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(pppuVar14);
      goto LAB_1084e9f78;
    }
    pppuVar14 = pppuVar16;
    func_0x00010bfb1920(pppuVar16);
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = pppuVar14;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(pppuVar14);
LAB_1084e9f78:
  _objc_release(pppuVar16);
  pppuVar18 = pppuVar8;
  _objc_release(pppuVar8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar17) {
    ___stack_chk_fail();
    _objc_release(pppuVar14);
    _objc_release(pppuVar16);
    _objc_release(pppuVar8);
    __Unwind_Resume(pppuVar18);
    func_0x00010bf3cf60(pppuVar15);
    _objc_retainAutoreleasedReturnValue();
    pppuVar9 = pppuVar15;
    func_0x000108ea5f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(pppuVar15);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pppuVar9);
  return;
}



/* Entry: 1084e9c34; end: 1084ea09f;  */

void FUN_1084e9c34(undefined *param_1,undefined *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar10 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  puVar3 = param_2;
  func_0x00010bf529e0();
  if (puVar3 == (undefined *)0x0) {
    puVar9 = param_1;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR____NSArray0__struct_11034ab48;
    if (puVar9 != (undefined *)0x0) {
      puVar3 = puVar9;
    }
    _objc_retain(puVar3);
  }
  else {
    if ((param_1 != (undefined *)0x0) ||
       (puVar3 = param_2, func_0x00010bf529e0(), puVar3 != (undefined *)0x1)) {
      puVar9 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010c25b340();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar3;
      func_0x00010bf529e0();
      _objc_release(puVar3);
      if (puVar12 != (undefined *)0x0) {
        puVar3 = param_1;
        func_0x00010c25b340(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar9);
        _objc_release(puVar3);
        puVar3 = param_1;
        func_0x00010c25b340(param_1);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puVar3;
        func_0x00010c0b8600();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar3);
        func_0x00010befa160(puVar4);
        _objc_release(puVar12);
      }
      _objc_retain(param_2);
      puVar3 = param_2;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (puVar3 != (undefined *)0x0) {
        puVar12 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(param_2);
          }
          lVar5 = *(long *)((long)puVar12 * 8);
          func_0x00010c25b340();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010bf52a60();
          lVar2 = lRam0000000000000000;
          while (lVar6 != 0) {
            lVar13 = 0;
            do {
              if (lRam0000000000000000 != lVar2) {
                _objc_enumerationMutation(lVar5);
              }
              uVar14 = *(undefined8 *)(lVar13 * 8);
              func_0x00010bf3cf60(uVar14);
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar14;
              func_0x000108ea5f00();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar14);
              puVar8 = puVar4;
              func_0x00010bf4b900();
              if (((ulong)puVar8 & 1) == 0) {
                func_0x00010befa120(puVar9);
                func_0x00010befa120(puVar4);
              }
              _objc_release(uVar7);
              lVar13 = lVar13 + 1;
            } while (lVar6 != lVar13);
            lVar6 = lVar5;
            func_0x00010bf52a60();
          }
          _objc_release(lVar5);
          puVar12 = puVar12 + 1;
        } while (puVar12 != puVar3);
        puVar3 = param_2;
        func_0x00010bf52a60();
      }
      _objc_release(param_2);
      puVar3 = puVar9;
      func_0x00010c246ca0(puVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar9);
      goto LAB_1084e9f78;
    }
    puVar9 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar9;
    func_0x00010c25b340();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar9);
LAB_1084e9f78:
  _objc_release(param_2);
  puVar4 = param_1;
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar11) {
    ___stack_chk_fail();
    _objc_release(puVar9);
    _objc_release(param_2);
    _objc_release(param_1);
    __Unwind_Resume(puVar4);
    func_0x00010bf3cf60(puVar10);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar10;
    func_0x000108ea5f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1084ea0a0; end: 1084ea0fb;  */

void FUN_1084ea0a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf3cf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x000108ea5f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1084ea0fc; end: 1084eac6f;  */

undefined * FUN_1084ea0fc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  undefined *unaff_x21;
  ulong uVar13;
  ulong uVar14;
  long unaff_x24;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  long unaff_x28;
  long lVar18;
  undefined *puVar19;
  long lStack_568;
  long lStack_560;
  long lStack_540;
  undefined *puStack_538;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = param_2;
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  puVar12 = PTR____NSDictionary0__struct_11034ab58;
  if (lVar1 != 0) {
    unaff_x21 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lStack_540 = param_2;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    lStack_568 = param_1;
    FUN_1084e692c(param_1,lStack_540,0);
    _objc_retainAutoreleasedReturnValue();
    unaff_x24 = param_1;
    FUN_1084dcddc(param_1,lStack_540);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = unaff_x24;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_560 = param_1;
    FUN_1084e73c8(param_1,lVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    puStack_538 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = lStack_560;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar16;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar10 != 0) {
      lVar18 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar16);
        }
        uVar15 = *(undefined8 *)(lVar18 * 8);
        func_0x00010c11ac00(uVar15);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = unaff_x24;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010bf5a820();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf5bbc0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar3);
        _objc_release(lVar2);
        _objc_release(uVar15);
        lVar2 = lVar4;
        func_0x00010c08fa60();
        if (lVar2 != 0) {
          puVar12 = puStack_538;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (puVar12 == (undefined *)0x0) {
            puVar12 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puStack_538);
          }
          func_0x00010befa120(puVar12);
          _objc_release(puVar12);
        }
        _objc_release(lVar4);
        lVar18 = lVar18 + 1;
      } while (lVar10 != lVar18);
      lVar10 = lVar16;
      func_0x00010bf52a60();
    }
    _objc_release(lVar16);
    puVar5 = puStack_538;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar5;
    func_0x00010bf52a60();
    lVar10 = lRam0000000000000000;
    while (puVar12 != (undefined *)0x0) {
      puVar19 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar10) {
          _objc_enumerationMutation(puVar5);
        }
        uVar15 = *(undefined8 *)((long)puVar19 * 8);
        _objc_retain(unaff_x24);
        func_0x00010c246ba0(uVar15);
        _objc_release(unaff_x24);
        puVar19 = puVar19 + 1;
      } while (puVar12 != puVar19);
      puVar12 = puVar5;
      func_0x00010bf52a60();
    }
    _objc_release(puVar5);
    lVar16 = lStack_568;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar16;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar10 != 0) {
      lVar18 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar16);
        }
        uVar17 = *(undefined8 *)(lVar18 * 8);
        uVar15 = uVar17;
        func_0x00010c2923e0(uVar17);
        _objc_retainAutoreleasedReturnValue();
        puVar12 = puStack_538;
        func_0x00010c0e00e0(puStack_538);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar17;
        FUN_1084e9c34(uVar17,puVar12);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2923e0(uVar17);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(unaff_x21);
        _objc_release(uVar17);
        _objc_release(uVar6);
        _objc_release(puVar12);
        _objc_release(uVar15);
        lVar18 = lVar18 + 1;
      } while (lVar10 != lVar18);
      lVar10 = lVar16;
      func_0x00010bf52a60();
    }
    _objc_release(lVar16);
    puVar5 = puStack_538;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar5;
    func_0x00010bf52a60();
    lVar10 = lRam0000000000000000;
    while (puVar12 != (undefined *)0x0) {
      puVar19 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar10) {
          _objc_enumerationMutation(puVar5);
        }
        puVar7 = unaff_x21;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar7 == (undefined *)0x0) {
          puVar7 = puStack_538;
          func_0x00010c0e00e0(puStack_538);
          _objc_retainAutoreleasedReturnValue();
          uVar15 = 0;
          FUN_1084e9c34(0,puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(unaff_x21);
          _objc_release(uVar15);
          _objc_release(puVar7);
        }
        puVar19 = puVar19 + 1;
      } while (puVar12 != puVar19);
      puVar12 = puVar5;
      func_0x00010bf52a60();
    }
    _objc_release(puVar5);
    _objc_retain(lStack_540);
    lVar10 = lStack_540;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar10 != 0) {
      lVar16 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lStack_540);
        }
        puVar12 = unaff_x21;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar12 == (undefined *)0x0) {
          func_0x00010c1d0640(unaff_x21);
        }
        lVar16 = lVar16 + 1;
      } while (lVar10 != lVar16);
      lVar10 = lStack_540;
      func_0x00010bf52a60();
    }
    _objc_release(lStack_540);
    unaff_x28 = param_1;
    lVar10 = lStack_540;
    func_0x00010094ff70(param_1,lStack_540,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lStack_540);
    lVar1 = lStack_540;
    func_0x00010bf52a60();
    lVar16 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar18 = 0;
      do {
        if (lRam0000000000000000 != lVar16) {
          _objc_enumerationMutation(lStack_540);
        }
        lVar2 = unaff_x28;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar2 == 0) {
          puVar12 = unaff_x21;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar12;
          func_0x00010bf529e0();
          _objc_release(puVar12);
          if (puVar5 == (undefined *)0x0) {
            puVar12 = (undefined *)0x0;
          }
          else {
            lVar10 = 0;
            puVar12 = PTR_PTR_1126d9e50;
            FUN_108516cec(PTR_PTR_1126d9e50,0);
            _objc_retainAutoreleasedReturnValue();
            if (puVar12 != (undefined *)0x0) {
              _objc_setProperty_nonatomic_copy(puVar12);
            }
            puVar5 = unaff_x21;
            func_0x00010c0e00e0(unaff_x21);
            _objc_retainAutoreleasedReturnValue();
            if (puVar12 != (undefined *)0x0) {
              _objc_setProperty_nonatomic_copy(puVar12);
            }
            _objc_release(puVar5);
          }
        }
        else {
          puVar12 = unaff_x21;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar12;
          func_0x00010bf529e0();
          _objc_release(puVar12);
          puVar12 = PTR_PTR_1126d9e50;
          lVar10 = lVar2;
          if (puVar5 == (undefined *)0x0) {
            FUN_108517280(PTR_PTR_1126d9e50,lVar2);
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            FUN_108516eb4(PTR_PTR_1126d9e50,lVar2);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = unaff_x21;
            func_0x00010c0e00e0(unaff_x21);
            _objc_retainAutoreleasedReturnValue();
            if (puVar12 != (undefined *)0x0) {
              _objc_setProperty_nonatomic_copy(puVar12);
            }
            _objc_release(puVar5);
          }
        }
        func_0x00010c25ed40(param_1);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(lVar2);
        _objc_release(puVar12);
        lVar18 = lVar18 + 1;
      } while (lVar1 != lVar18);
      lVar1 = lStack_540;
      func_0x00010bf52a60();
    }
    _objc_release(lStack_540);
    puVar12 = unaff_x21;
    func_0x00010bf51e00();
    _objc_release(unaff_x28);
    _objc_release(puStack_538);
    _objc_release(lStack_560);
    _objc_release(unaff_x24);
    _objc_release(lStack_568);
    _objc_release(lStack_540);
    _objc_release(unaff_x21);
  }
  _objc_release(param_2);
  lVar1 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
    return puVar12;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x28);
  _objc_release(puStack_538);
  _objc_release(lStack_560);
  _objc_release(unaff_x24);
  _objc_release(lStack_568);
  _objc_release(lStack_540);
  _objc_release(unaff_x21);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  _objc_retain(lVar10);
  uVar13 = *(ulong *)(lVar1 + 0x20);
  lVar11 = lVar10;
  func_0x00010c11ac00(lVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar13;
  func_0x00010c29ef80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf529e0();
  _objc_release(uVar8);
  _objc_release(uVar13);
  _objc_release(lVar11);
  uVar14 = *(ulong *)(lVar1 + 0x20);
  lVar1 = lVar10;
  func_0x00010c11ac00(lVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar14;
  func_0x00010c29ef80();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar8;
  func_0x00010bf529e0();
  _objc_release(uVar8);
  _objc_release(uVar14);
  _objc_release(lVar1);
  puVar12 = (undefined *)(ulong)(uVar13 < uVar9);
  if (uVar9 < uVar13) {
    puVar12 = (undefined *)0xffffffffffffffff;
  }
  _objc_release(lVar10);
  return puVar12;
}



/* Entry: 1084eac70; end: 1084eade7;  */

ulong FUN_1084eac70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_2);
  uVar4 = *(ulong *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c11ac00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c29ef80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf529e0();
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar1);
  uVar5 = *(ulong *)(param_1 + 0x20);
  uVar1 = param_2;
  func_0x00010c11ac00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010c29ef80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf529e0();
  _objc_release(uVar3);
  _objc_release(uVar5);
  _objc_release(uVar1);
  uVar3 = (ulong)(uVar4 < uVar2);
  if (uVar2 < uVar4) {
    uVar3 = 0xffffffffffffffff;
  }
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 1084eade8; end: 1084eae6f; -[SCStoriesPublicStoriesDocAPI initWithDocObjectContext:] */

undefined1 * FUN_1084eade8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fcac8;
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



/* Entry: 1084eae70; end: 1084eaffb; -[SCStoriesPublicStoriesDocAPI queryPublicStoryLatestPostTimestamp] */

void FUN_1084eae70(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong *puVar8;
  undefined1 **ppuVar9;
  undefined1 **ppuVar10;
  ulong *puVar11;
  undefined8 in_x4;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 uStack_2b1;
  undefined **appuStack_2b0 [9];
  undefined1 auStack_268 [24];
  long *plStack_250;
  long *plStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  ulong uStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1b8;
  undefined1 **ppuStack_1b0;
  undefined1 *puStack_1a8;
  undefined1 *puStack_1a0;
  undefined8 uStack_198;
  long lStack_128;
  undefined4 uStack_b8;
  undefined1 uStack_b1;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined4 uStack_3c;
  code *pcStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126d9e98);
  if (lVar2 == 0) {
    uStack_50 = 0;
    param_1 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_80,lVar2);
  }
  puVar3 = &uStack_b1;
  FUN_108527684();
  uStack_48 = *(undefined8 *)(puVar3 + 0x10);
  uStack_40 = puVar3[0x19];
  uStack_3f = puVar3[0x18];
  uStack_30 = *(undefined8 *)(puVar3 + 0x28);
  uStack_3c = 1;
  pcStack_38 = FUN_1084eb448;
  lStack_a8 = 0;
  uStack_a0 = 0;
  lStack_b0 = 0;
  puVar11 = (ulong *)0x1;
  func_0x000100c435d0(&lStack_b0,&uStack_48,&lStack_28);
  func_0x000100c436b8(&lStack_98,&lStack_b0);
  uStack_b8 = 1;
  puVar12 = &uStack_80;
  ppuVar9 = (undefined1 **)&uStack_b8;
  func_0x00010054c81c(puVar12,&lStack_98);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_98 != 0) {
    lStack_90 = lStack_98;
    __ZdlPv();
  }
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_58);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  lVar5 = lVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    func_0x000104d96620(&uStack_80);
    _objc_release(lVar2);
    __Unwind_Resume();
    lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuVar10 = ppuVar9;
    _objc_retain(ppuVar9);
    ppuVar4 = ppuVar9;
    func_0x00010c08fa60();
    if (ppuVar4 == (undefined1 **)0x0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      lVar5 = *(long *)(lVar5 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126d9e98);
      if (lVar5 == 0) {
        uStack_210 = 0;
        uStack_228 = 0;
        uStack_230 = 0;
        uStack_218 = 0;
        uStack_220 = 0;
        uStack_238 = 0;
        uStack_240 = 0;
      }
      else {
        func_0x00010bfa6be0(&uStack_240,lVar5);
      }
      puVar3 = &uStack_2b1;
      FUN_10852750c(puVar3);
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      ppuStack_1b0 = ppuVar9;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      uStack_2c8 = 0;
      uStack_2c0 = 0;
      uStack_2d0 = 0;
      puVar7 = puVar6;
      func_0x00010bf529e0(puVar6);
      func_0x000107c281a4(&uStack_2d0,puVar7);
      param_1 = 0;
      lStack_1f8 = 0;
      uStack_200 = 0;
      uStack_1e8 = 0;
      plStack_1f0 = (long *)0x0;
      uStack_1d8 = 0;
      uStack_1e0 = 0;
      uStack_1c8 = 0;
      uStack_1d0 = 0;
      _objc_retain(puVar6);
      in_x4 = 0x10;
      puVar7 = puVar6;
      func_0x00010bf52a60();
      if (puVar7 != (undefined *)0x0) {
        lVar2 = *plStack_1f0;
        do {
          puVar14 = (undefined *)0x0;
          do {
            if (*plStack_1f0 != lVar2) {
              _objc_enumerationMutation(puVar6);
            }
            uVar13 = *(undefined8 *)(lStack_1f8 + (long)puVar14 * 8);
            _objc_retain(uVar13);
            uStack_1b8 = uVar13;
            func_0x000107c281a8(&uStack_2d0,&uStack_1b8);
            _objc_release(uStack_1b8);
            puVar14 = puVar14 + 1;
          } while (puVar7 != puVar14);
          in_x4 = 0x10;
          puVar7 = puVar6;
          func_0x00010bf52a60();
        } while (puVar7 != (undefined *)0x0);
      }
      _objc_release(puVar6);
      _objc_release(puVar6);
      func_0x000107c281a0(appuStack_2b0,0xc,puVar3,&uStack_2d0);
      puStack_1a8 = (undefined1 *)0x0;
      puStack_1a0 = (undefined1 *)0x0;
      uStack_198 = 0;
      uStack_200 = uStack_200 & 0xffffffff00000000;
      puVar12 = &uStack_240;
      ppuVar10 = &puStack_1a8;
      puVar11 = &uStack_200;
      func_0x000107c310cc(puVar12,appuStack_2b0,ppuVar10);
      _objc_retainAutoreleasedReturnValue();
      if (puStack_1a8 != (undefined1 *)0x0) {
        puStack_1a0 = puStack_1a8;
        __ZdlPv();
      }
      plVar1 = plStack_248;
      appuStack_2b0[0] = &PTR_SUB_110862700;
      plStack_248 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_250;
      plStack_250 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      puStack_1a8 = auStack_268;
      func_0x000107c27dd4(&puStack_1a8);
      puStack_1a8 = (undefined1 *)&uStack_2d0;
      func_0x000107c27dd4(&puStack_1a8);
      _objc_release(puVar6);
      func_0x000107c27da8(&uStack_218);
      _objc_release(uStack_228);
      _objc_release(uStack_230);
      _objc_release(lVar5);
    }
    ppuVar4 = ppuVar9;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
      ___stack_chk_fail();
      func_0x000104d96620(&uStack_240);
      _objc_release(lVar5);
      _objc_release(ppuVar9);
      __Unwind_Resume(ppuVar4);
      func_0x000104bd46a0(ppuVar4);
      _objc_retain(ppuVar10);
      _objc_retain(puVar11);
      _objc_retain(in_x4);
      puVar8 = puVar11;
      func_0x00010c08fa60();
      if (puVar8 != (ulong *)0x0) {
        puVar6 = PTR_PTR_1126d9e98;
        _objc_alloc(PTR_PTR_1126d9e98);
        func_0x00010c03b000(param_1);
        puVar7 = puVar6;
        FUN_108527a34();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(ppuVar10);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(puVar6);
      }
      _objc_release(in_x4);
      _objc_release(puVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(ppuVar10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 1084eaffc; end: 1084eb31f; -[SCStoriesPublicStoriesDocAPI queryPublicStoryLatestPostTimestampForProfileId:] */

void FUN_1084eaffc(undefined8 param_1,long param_2,undefined8 param_3,undefined1 **param_4,
                  ulong *param_5,undefined8 param_6)

{
  long *plVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong *puVar6;
  undefined1 **ppuVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined1 uStack_1f1;
  undefined **appuStack_1f0 [9];
  undefined1 auStack_1a8 [24];
  long *plStack_190;
  long *plStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_f8;
  undefined1 **ppuStack_f0;
  undefined1 *puStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar7 = param_4;
  _objc_retain(param_4);
  ppuVar2 = param_4;
  func_0x00010c08fa60();
  if (ppuVar2 == (undefined1 **)0x0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    param_2 = *(long *)(param_2 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d9e98);
    if (param_2 == 0) {
      uStack_150 = 0;
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_180,param_2);
    }
    puVar3 = &uStack_1f1;
    FUN_10852750c(puVar3);
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    ppuStack_f0 = param_4;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uStack_208 = 0;
    uStack_200 = 0;
    uStack_210 = 0;
    puVar5 = puVar4;
    func_0x00010bf529e0(puVar4);
    func_0x000107c281a4(&uStack_210,puVar5);
    param_1 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    _objc_retain(puVar4);
    param_6 = 0x10;
    puVar5 = puVar4;
    func_0x00010bf52a60();
    if (puVar5 != (undefined *)0x0) {
      lVar10 = *plStack_130;
      do {
        puVar11 = (undefined *)0x0;
        do {
          if (*plStack_130 != lVar10) {
            _objc_enumerationMutation(puVar4);
          }
          uVar9 = *(undefined8 *)(lStack_138 + (long)puVar11 * 8);
          _objc_retain(uVar9);
          uStack_f8 = uVar9;
          func_0x000107c281a8(&uStack_210,&uStack_f8);
          _objc_release(uStack_f8);
          puVar11 = puVar11 + 1;
        } while (puVar5 != puVar11);
        param_6 = 0x10;
        puVar5 = puVar4;
        func_0x00010bf52a60();
      } while (puVar5 != (undefined *)0x0);
    }
    _objc_release(puVar4);
    _objc_release(puVar4);
    func_0x000107c281a0(appuStack_1f0,0xc,puVar3,&uStack_210);
    puStack_e8 = (undefined1 *)0x0;
    puStack_e0 = (undefined1 *)0x0;
    uStack_d8 = 0;
    uStack_140 = uStack_140 & 0xffffffff00000000;
    puVar8 = &uStack_180;
    ppuVar7 = &puStack_e8;
    param_5 = &uStack_140;
    func_0x000107c310cc(puVar8,appuStack_1f0,ppuVar7);
    _objc_retainAutoreleasedReturnValue();
    if (puStack_e8 != (undefined1 *)0x0) {
      puStack_e0 = puStack_e8;
      __ZdlPv();
    }
    plVar1 = plStack_188;
    appuStack_1f0[0] = &PTR_SUB_110862700;
    plStack_188 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_190;
    plStack_190 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_e8 = auStack_1a8;
    func_0x000107c27dd4(&puStack_e8);
    puStack_e8 = (undefined1 *)&uStack_210;
    func_0x000107c27dd4(&puStack_e8);
    _objc_release(puVar4);
    func_0x000107c27da8(&uStack_158);
    _objc_release(uStack_168);
    _objc_release(uStack_170);
    _objc_release(param_2);
  }
  ppuVar2 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
  func_0x000104d96620(&uStack_180);
  _objc_release(param_2);
  _objc_release(param_4);
  __Unwind_Resume(ppuVar2);
  func_0x000104bd46a0(ppuVar2);
  _objc_retain(ppuVar7);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar6 = param_5;
  func_0x00010c08fa60();
  if (puVar6 != (ulong *)0x0) {
    puVar4 = PTR_PTR_1126d9e98;
    _objc_alloc(PTR_PTR_1126d9e98);
    func_0x00010c03b000(param_1);
    puVar5 = puVar4;
    FUN_108527a34();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ed40(ppuVar7);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar7);
  return;
}



/* Entry: 1084eb320; end: 1084eb43b; -[SCStoriesPublicStoriesDocAPI updatePublicStoryLatestPostTimestampWithContext:profileId:postedTimestamp:storySnap:] */

void FUN_1084eb320(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_5;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d9e98;
    _objc_alloc(PTR_PTR_1126d9e98);
    func_0x00010c03b000(param_1);
    puVar3 = puVar2;
    FUN_108527a34();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ed40(param_4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1084eb43c; end: 1084eb447; -[SCStoriesPublicStoriesDocAPI .cxx_destruct] */

void FUN_1084eb43c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1084eb448; end: 1084eb4fb;  */

undefined4 FUN_1084eb448(double param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  byte bStack_42;
  byte bStack_41;
  
  _objc_retain();
  _objc_retain(param_3);
  (*param_4)(param_2,&bStack_41);
  dVar4 = param_1;
  (*param_4)(param_3,&bStack_42);
  uVar3 = 2;
  uVar1 = uVar3;
  if (bStack_42 == 0) {
    uVar1 = 0;
  }
  if (bStack_41 == 0) {
    uVar1 = 1;
  }
  if (dVar4 < param_1) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (dVar4 <= param_1) {
    uVar2 = uVar3;
  }
  uVar3 = uVar1;
  if ((bStack_42 & 1) == 0) {
    uVar3 = uVar2;
  }
  if ((bStack_41 & 1) == 0) {
    uVar1 = uVar3;
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1084eb4fc; end: 1084eb8e3;  */

void FUN_1084eb4fc(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined ***pppuVar4;
  undefined ***pppuVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  undefined ***unaff_x24;
  undefined ***unaff_x25;
  long unaff_x26;
  undefined8 *puVar14;
  undefined ***unaff_x27;
  ulong unaff_x28;
  undefined4 uStack_6e4;
  long lStack_6e0;
  long lStack_6d8;
  undefined8 uStack_6d0;
  undefined **ppuStack_6c8;
  undefined4 uStack_6c0;
  undefined4 uStack_6b0;
  undefined ***pppuStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  long lStack_680;
  long lStack_678;
  undefined8 uStack_670;
  long *plStack_668;
  long *plStack_660;
  undefined1 uStack_651;
  undefined **ppuStack_650;
  undefined4 uStack_648;
  undefined2 uStack_638;
  undefined2 uStack_636;
  undefined1 *puStack_618;
  undefined ***pppuStack_610;
  long lStack_608;
  long lStack_600;
  undefined8 uStack_5f8;
  long *plStack_5f0;
  long *plStack_5e8;
  undefined *puStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  ulong uStack_5a0;
  undefined ***pppuStack_598;
  undefined ***pppuStack_590;
  undefined8 *puStack_588;
  undefined ***pppuStack_580;
  undefined8 *puStack_578;
  undefined ***pppuStack_570;
  undefined ***pppuStack_568;
  undefined8 **ppuStack_560;
  code *pcStack_558;
  undefined8 uStack_550;
  long lStack_548;
  undefined8 *puStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined4 uStack_50c;
  undefined1 *puStack_508;
  undefined1 *puStack_500;
  undefined8 uStack_4f8;
  undefined1 auStack_4f0 [31];
  undefined1 uStack_4d1;
  undefined **appuStack_4d0 [9];
  undefined1 auStack_488 [24];
  long *plStack_470;
  long *plStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  long lStack_3a8;
  ulong uStack_3a0;
  undefined ***pppuStack_398;
  long lStack_390;
  undefined ***pppuStack_388;
  undefined ***pppuStack_380;
  undefined8 *puStack_378;
  undefined **ppuStack_370;
  undefined8 uStack_368;
  undefined8 *puStack_360;
  undefined ***pppuStack_358;
  undefined1 **ppuStack_350;
  code *pcStack_348;
  undefined8 uStack_340;
  long lStack_338;
  undefined8 *puStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined **appuStack_300 [17];
  long lStack_278;
  ulong uStack_270;
  undefined ***pppuStack_268;
  undefined ***pppuStack_260;
  undefined8 *puStack_258;
  undefined **ppuStack_250;
  undefined ***pppuStack_248;
  long lStack_240;
  undefined8 *puStack_238;
  undefined1 *puStack_230;
  code *pcStack_228;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1dc;
  undefined4 *puStack_1d8;
  undefined4 *puStack_1d0;
  undefined8 uStack_1c8;
  undefined4 auStack_1c0 [7];
  undefined1 uStack_1a1;
  undefined **ppuStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 auStack_158 [6];
  long *plStack_140;
  long *plStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    _objc_opt_class(PTR_PTR_1126d67b0);
    if (param_1 == (undefined8 *)0x0) {
      uStack_170 = 0;
      uStack_188 = 0;
      uStack_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_198 = 0;
      ppuStack_1a0 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_1a0,param_1);
    }
    ppuStack_130 = (undefined **)0x0;
    ppuStack_128 = (undefined **)0x0;
    uStack_120 = 0;
    auStack_1c0[0] = 0;
    pppuVar4 = &ppuStack_1a0;
    pppuVar11 = &ppuStack_130;
    func_0x00010054c81c(pppuVar4,pppuVar11,auStack_1c0);
    _objc_retainAutoreleasedReturnValue();
    if (ppuStack_130 != (undefined **)0x0) {
      ppuStack_128 = ppuStack_130;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_178);
    _objc_release(uStack_188);
    _objc_release(uStack_190);
  }
  else {
    _objc_opt_class(PTR_PTR_1126d67b0);
    if (param_1 == (undefined8 *)0x0) {
      uStack_100 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      ppuStack_128 = (undefined **)0x0;
      ppuStack_130 = (undefined **)0x0;
    }
    else {
      func_0x00010bfa6be0(&ppuStack_130,param_1);
    }
    puVar3 = &uStack_1a1;
    FUN_1085286e4(puVar3);
    FUN_1084eb8e4(auStack_1c0,param_2);
    func_0x000107c281a0(&ppuStack_1a0,0xc,puVar3,auStack_1c0);
    puStack_1d8 = (undefined4 *)0x0;
    puStack_1d0 = (undefined4 *)0x0;
    uStack_1c8 = 0;
    uStack_1dc = 0;
    pppuVar4 = &ppuStack_130;
    pppuVar11 = &ppuStack_1a0;
    func_0x000107c310cc(pppuVar4,pppuVar11,&puStack_1d8,&uStack_1dc);
    _objc_retainAutoreleasedReturnValue();
    if (puStack_1d8 != (undefined4 *)0x0) {
      puStack_1d0 = puStack_1d8;
      __ZdlPv();
    }
    plVar1 = plStack_138;
    ppuStack_1a0 = &PTR_SUB_110862700;
    plStack_138 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_140;
    plStack_140 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_1d8 = auStack_158;
    func_0x000107c27dd4(&puStack_1d8);
    puStack_1d8 = auStack_1c0;
    func_0x000107c27dd4(&puStack_1d8);
    func_0x000107c27da8(&uStack_108);
    _objc_release(uStack_118);
    _objc_release(uStack_120);
  }
  ppuVar12 = (undefined **)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  _objc_retain(pppuVar4);
  pppuVar5 = pppuVar4;
  func_0x00010bf52a60();
  if (pppuVar5 != (undefined ***)0x0) {
    unaff_x26 = *plStack_210;
    do {
      unaff_x27 = (undefined ***)0x0;
      do {
        if (*plStack_210 != unaff_x26) {
          _objc_enumerationMutation(pppuVar4);
        }
        unaff_x24 = *(undefined ****)(lStack_218 + (long)unaff_x27 * 8);
        unaff_x25 = unaff_x24;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        pppuVar6 = unaff_x25;
        func_0x00010c08fa60();
        unaff_x28 = (ulong)(pppuVar6 == (undefined ***)0x0);
        _objc_release(unaff_x25);
        if (pppuVar6 != (undefined ***)0x0) {
          unaff_x25 = unaff_x24;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(ppuVar12);
          _objc_release(unaff_x25);
        }
        unaff_x27 = (undefined ***)((long)unaff_x27 + 1);
      } while (pppuVar5 != unaff_x27);
      pppuVar5 = pppuVar4;
      func_0x00010bf52a60();
    } while (pppuVar5 != (undefined ***)0x0);
  }
  _objc_release(pppuVar4);
  ppuVar7 = ppuVar12;
  func_0x00010bf51e00(ppuVar12);
  _objc_release(ppuVar12);
  _objc_release(pppuVar4);
  _objc_release(param_2);
  puVar13 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_release(param_2);
    _objc_release(param_1);
    puVar8 = puVar13;
    __Unwind_Resume();
    pcStack_228 = FUN_1084eb8e4;
    lStack_278 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_270 = unaff_x28;
    pppuStack_268 = unaff_x27;
    pppuStack_260 = unaff_x24;
    puStack_258 = puVar13;
    ppuStack_250 = ppuVar12;
    pppuStack_248 = pppuVar4;
    lStack_240 = param_2;
    puStack_238 = param_1;
    puStack_230 = &stack0xfffffffffffffff0;
    _objc_retain(pppuVar11);
    puVar8[1] = 0;
    puVar8[2] = 0;
    *puVar8 = 0;
    pppuVar4 = pppuVar11;
    func_0x00010bf529e0();
    func_0x000107c281a4(puVar8);
    lStack_338 = 0;
    uStack_340 = 0;
    uStack_328 = 0;
    puStack_330 = (undefined8 *)0x0;
    uStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    uStack_310 = 0;
    _objc_retain(pppuVar11);
    pppuVar5 = pppuVar11;
    func_0x00010bf52a60();
    if (pppuVar5 != (undefined ***)0x0) {
      puVar13 = (undefined8 *)*puStack_330;
      do {
        unaff_x24 = (undefined ***)0x0;
        do {
          if ((undefined8 *)*puStack_330 != puVar13) {
            _objc_enumerationMutation(pppuVar11);
          }
          ppuVar12 = *(undefined ***)(lStack_338 + (long)unaff_x24 * 8);
          _objc_retain(ppuVar12);
          pppuVar4 = appuStack_300;
          appuStack_300[0] = ppuVar12;
          func_0x000107c281a8(puVar8);
          _objc_release(appuStack_300[0]);
          unaff_x24 = (undefined ***)((long)unaff_x24 + 1);
        } while (pppuVar5 != unaff_x24);
        pppuVar5 = pppuVar11;
        func_0x00010bf52a60();
      } while (pppuVar5 != (undefined ***)0x0);
    }
    _objc_release(pppuVar11);
    pppuVar5 = pppuVar11;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_278) {
      return;
    }
    ___stack_chk_fail();
    if ((int)pppuVar4 == 0) {
      __Unwind_Resume();
    }
    func_0x000104bd46a0();
    pcStack_348 = FUN_1084eba48;
    lStack_3a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_3a0 = unaff_x28;
    pppuStack_398 = unaff_x27;
    lStack_390 = unaff_x26;
    pppuStack_388 = unaff_x25;
    pppuStack_380 = unaff_x24;
    puStack_378 = puVar13;
    ppuStack_370 = ppuVar12;
    uStack_368 = 0;
    puStack_360 = puVar8;
    pppuStack_358 = pppuVar11;
    ppuStack_350 = &puStack_230;
    _objc_retain();
    _objc_retain(pppuVar4);
    _objc_opt_class(PTR_PTR_1126d67b0);
    if (pppuVar5 == (undefined ***)0x0) {
      uStack_430 = 0;
      uStack_448 = 0;
      uStack_450 = 0;
      uStack_438 = 0;
      uStack_440 = 0;
      uStack_458 = 0;
      uStack_460 = 0;
    }
    else {
      func_0x00010bfa6be0(&uStack_460,pppuVar5);
    }
    puVar3 = &uStack_4d1;
    FUN_1085286e4(puVar3);
    FUN_1084eb8e4(auStack_4f0,pppuVar4);
    func_0x000107c281a0(appuStack_4d0,0xd,puVar3,auStack_4f0);
    puStack_508 = (undefined1 *)0x0;
    puStack_500 = (undefined1 *)0x0;
    uStack_4f8 = 0;
    uStack_50c = 0;
    puVar8 = &uStack_460;
    pppuVar11 = appuStack_4d0;
    func_0x000107c310cc(puVar8,pppuVar11,&puStack_508,&uStack_50c);
    _objc_retainAutoreleasedReturnValue();
    if (puStack_508 != (undefined1 *)0x0) {
      puStack_500 = puStack_508;
      __ZdlPv();
    }
    plVar1 = plStack_468;
    appuStack_4d0[0] = &PTR_SUB_110862700;
    plStack_468 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_470;
    plStack_470 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    puStack_508 = auStack_488;
    func_0x000107c27dd4(&puStack_508);
    puStack_508 = auStack_4f0;
    func_0x000107c27dd4(&puStack_508);
    func_0x000107c27da8(&uStack_438);
    _objc_release(uStack_448);
    _objc_release(uStack_450);
    lStack_548 = 0;
    uStack_550 = 0;
    uStack_538 = 0;
    puStack_540 = (undefined8 *)0x0;
    uStack_528 = 0;
    uStack_530 = 0;
    uStack_518 = 0;
    uStack_520 = 0;
    _objc_retain(puVar8);
    puVar9 = puVar8;
    func_0x00010bf52a60();
    if (puVar9 != (undefined8 *)0x0) {
      unaff_x24 = (undefined ***)*puStack_540;
      do {
        puVar14 = (undefined8 *)0x0;
        do {
          if ((undefined ***)*puStack_540 != unaff_x24) {
            _objc_enumerationMutation(puVar8);
          }
          pppuVar11 = *(undefined ****)(lStack_548 + (long)puVar14 * 8);
          puVar13 = (undefined8 *)PTR_PTR_1126d67a8;
          FUN_108529134();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c25ed40(pppuVar5);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar13);
          puVar14 = (undefined8 *)((long)puVar14 + 1);
        } while (puVar9 != puVar14);
        puVar9 = puVar8;
        func_0x00010bf52a60();
      } while (puVar9 != (undefined8 *)0x0);
    }
    _objc_release(puVar8);
    _objc_release(puVar8);
    _objc_release(pppuVar4);
    pppuVar6 = pppuVar5;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3a8) {
      return;
    }
    ___stack_chk_fail();
    _objc_release(puVar8);
    _objc_release(puVar8);
    _objc_release(pppuVar4);
    _objc_release(pppuVar5);
    pppuVar10 = pppuVar6;
    __Unwind_Resume();
    pcStack_558 = FUN_1084ebd14;
    uStack_5a0 = unaff_x28;
    pppuStack_598 = unaff_x27;
    pppuStack_590 = unaff_x24;
    puStack_588 = puVar13;
    pppuStack_580 = pppuVar6;
    puStack_578 = puVar8;
    pppuStack_570 = pppuVar4;
    pppuStack_568 = pppuVar5;
    ppuStack_560 = &ppuStack_350;
    _objc_retain();
    _objc_opt_class(PTR_PTR_1126d9ea0);
    if (pppuVar10 == (undefined ***)0x0) {
      uStack_5b0 = 0;
      uStack_5c8 = 0;
      uStack_5d0 = 0;
      uStack_5b8 = 0;
      uStack_5c0 = 0;
      uStack_5d8 = 0;
      puStack_5e0 = (undefined *)0x0;
    }
    else {
      func_0x00010bfa6be0(&puStack_5e0,pppuVar10);
    }
    puVar3 = &uStack_651;
    FUN_10851dd50();
    uStack_6c0 = 0xf;
    uStack_6b0 = 0x100;
    uStack_6d0 = 0;
    ppuStack_6c8 = &PTR_DAT_110a4ff40;
    uStack_688 = 0;
    uStack_690 = 0;
    lStack_678 = 0;
    lStack_680 = 0;
    plStack_668 = (long *)0x0;
    uStack_670 = 0;
    plStack_660 = (long *)0x0;
    uStack_636 = *(undefined2 *)(puVar3 + 0x1a);
    uStack_648 = 10;
    uStack_638 = 0x100;
    ppuStack_650 = &PTR_FUN_110a4fee0;
    lStack_600 = 0;
    lStack_608 = 0;
    plStack_5f0 = (long *)0x0;
    uStack_5f8 = 0;
    plStack_5e8 = (long *)0x0;
    lStack_6e0 = 0;
    lStack_6d8 = 0;
    uStack_6e4 = 0;
    ppuVar7 = &puStack_5e0;
    pppuStack_698 = pppuVar11;
    puStack_618 = puVar3;
    pppuStack_610 = &ppuStack_6c8;
    func_0x000107c310cc(ppuVar7,&ppuStack_650,&lStack_6e0,&uStack_6e4);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_6e0 != 0) {
      lStack_6d8 = lStack_6e0;
      __ZdlPv();
    }
    plVar1 = plStack_5e8;
    ppuStack_650 = &PTR_FUN_110a4fee0;
    plStack_5e8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_5f0;
    plStack_5f0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_608 != 0) {
      lStack_600 = lStack_608;
      __ZdlPv();
    }
    plVar1 = plStack_660;
    ppuStack_6c8 = &PTR_DAT_110a4ff40;
    plStack_660 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_668;
    plStack_668 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_680 != 0) {
      lStack_678 = lStack_680;
      __ZdlPv();
    }
    func_0x000107c27da8(&uStack_5b8);
    _objc_release(uStack_5c8);
    _objc_release(uStack_5d0);
    _objc_release(pppuVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
  return;
}



/* Entry: 1084eb8e4; end: 1084eba47;  */

void FUN_1084eb8e4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined ***pppuVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 uStack_4c4;
  long lStack_4c0;
  long lStack_4b8;
  undefined8 uStack_4b0;
  undefined **ppuStack_4a8;
  undefined4 uStack_4a0;
  undefined4 uStack_490;
  undefined ***pppuStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  long lStack_460;
  long lStack_458;
  undefined8 uStack_450;
  long *plStack_448;
  long *plStack_440;
  undefined1 uStack_431;
  undefined **ppuStack_430;
  undefined4 uStack_428;
  undefined2 uStack_418;
  undefined2 uStack_416;
  undefined1 *puStack_3f8;
  undefined ***pppuStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  undefined8 uStack_3d8;
  long *plStack_3d0;
  long *plStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined4 uStack_2ec;
  undefined1 *puStack_2e8;
  undefined1 *puStack_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2d0 [31];
  undefined1 uStack_2b1;
  undefined **appuStack_2b0 [9];
  undefined1 auStack_268 [24];
  long *plStack_250;
  long *plStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_188;
  undefined8 auStack_e0 [17];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  puVar3 = param_2;
  func_0x00010bf529e0();
  func_0x000107c281a4(param_1);
  _objc_retain(param_2);
  puVar4 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar4 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar8 = *(undefined8 *)((long)puVar9 * 8);
      _objc_retain(uVar8);
      puVar3 = auStack_e0;
      auStack_e0[0] = uVar8;
      func_0x000107c281a8(param_1);
      _objc_release(auStack_e0[0]);
      puVar9 = (undefined8 *)((long)puVar9 + 1);
    } while (puVar4 != puVar9);
    puVar4 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar3 == 0) {
    __Unwind_Resume();
  }
  func_0x000104bd46a0();
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(puVar3);
  _objc_opt_class(PTR_PTR_1126d67b0);
  if (param_2 == (undefined8 *)0x0) {
    uStack_210 = 0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_240,param_2);
  }
  puVar5 = &uStack_2b1;
  FUN_1085286e4(puVar5);
  FUN_1084eb8e4(auStack_2d0,puVar3);
  func_0x000107c281a0(appuStack_2b0,0xd,puVar5,auStack_2d0);
  puStack_2e8 = (undefined1 *)0x0;
  puStack_2e0 = (undefined1 *)0x0;
  uStack_2d8 = 0;
  uStack_2ec = 0;
  puVar4 = &uStack_240;
  pppuVar7 = appuStack_2b0;
  func_0x000107c310cc(puVar4,pppuVar7,&puStack_2e8,&uStack_2ec);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_2e8 != (undefined1 *)0x0) {
    puStack_2e0 = puStack_2e8;
    __ZdlPv();
  }
  plVar2 = plStack_248;
  appuStack_2b0[0] = &PTR_SUB_110862700;
  plStack_248 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_250;
  plStack_250 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  puStack_2e8 = auStack_268;
  func_0x000107c27dd4(&puStack_2e8);
  puStack_2e8 = auStack_2d0;
  func_0x000107c27dd4(&puStack_2e8);
  func_0x000107c27da8(&uStack_218);
  _objc_release(uStack_228);
  _objc_release(uStack_230);
  _objc_retain(puVar4);
  puVar9 = puVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar9 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar4);
      }
      pppuVar7 = *(undefined ****)((long)puVar10 * 8);
      puVar6 = PTR_PTR_1126d67a8;
      FUN_108529134();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar10 = (undefined8 *)((long)puVar10 + 1);
    } while (puVar9 != puVar10);
    puVar9 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar9 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_2);
  __Unwind_Resume();
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126d9ea0);
  if (puVar9 == (undefined8 *)0x0) {
    uStack_390 = 0;
    uStack_3a8 = 0;
    uStack_3b0 = 0;
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_3b8 = 0;
    uStack_3c0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_3c0,puVar9);
  }
  puVar5 = &uStack_431;
  FUN_10851dd50();
  uStack_4a0 = 0xf;
  uStack_490 = 0x100;
  uStack_4b0 = 0;
  ppuStack_4a8 = &PTR_DAT_110a4ff40;
  uStack_468 = 0;
  uStack_470 = 0;
  lStack_458 = 0;
  lStack_460 = 0;
  plStack_448 = (long *)0x0;
  uStack_450 = 0;
  plStack_440 = (long *)0x0;
  uStack_416 = *(undefined2 *)(puVar5 + 0x1a);
  uStack_428 = 10;
  uStack_418 = 0x100;
  ppuStack_430 = &PTR_FUN_110a4fee0;
  lStack_3e0 = 0;
  lStack_3e8 = 0;
  plStack_3d0 = (long *)0x0;
  uStack_3d8 = 0;
  plStack_3c8 = (long *)0x0;
  lStack_4c0 = 0;
  lStack_4b8 = 0;
  uStack_4c4 = 0;
  puVar3 = &uStack_3c0;
  pppuStack_478 = pppuVar7;
  puStack_3f8 = puVar5;
  pppuStack_3f0 = &ppuStack_4a8;
  func_0x000107c310cc(puVar3,&ppuStack_430,&lStack_4c0,&uStack_4c4);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_4c0 != 0) {
    lStack_4b8 = lStack_4c0;
    __ZdlPv();
  }
  plVar2 = plStack_3c8;
  ppuStack_430 = &PTR_FUN_110a4fee0;
  plStack_3c8 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_3d0;
  plStack_3d0 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_3e8 != 0) {
    lStack_3e0 = lStack_3e8;
    __ZdlPv();
  }
  plVar2 = plStack_440;
  ppuStack_4a8 = &PTR_DAT_110a4ff40;
  plStack_440 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = plStack_448;
  plStack_448 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  if (lStack_460 != 0) {
    lStack_458 = lStack_460;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_398);
  _objc_release(uStack_3a8);
  _objc_release(uStack_3b0);
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1084eba48; end: 1084ebd13;  */

void FUN_1084eba48(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined ***pppuVar7;
  undefined8 *puVar8;
  undefined4 uStack_3a4;
  long lStack_3a0;
  long lStack_398;
  undefined8 uStack_390;
  undefined **ppuStack_388;
  undefined4 uStack_380;
  undefined4 uStack_370;
  undefined ***pppuStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_340;
  long lStack_338;
  undefined8 uStack_330;
  long *plStack_328;
  long *plStack_320;
  undefined1 uStack_311;
  undefined **ppuStack_310;
  undefined4 uStack_308;
  undefined2 uStack_2f8;
  undefined2 uStack_2f6;
  undefined1 *puStack_2d8;
  undefined ***pppuStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  undefined8 uStack_2b8;
  long *plStack_2b0;
  long *plStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined4 uStack_1cc;
  undefined1 *puStack_1c8;
  undefined1 *puStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [31];
  undefined1 uStack_191;
  undefined **appuStack_190 [9];
  undefined1 auStack_148 [24];
  long *plStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126d67b0);
  if (param_1 == 0) {
    uStack_f0 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_120,param_1);
  }
  puVar2 = &uStack_191;
  FUN_1085286e4(puVar2);
  FUN_1084eb8e4(auStack_1b0,param_2);
  func_0x000107c281a0(appuStack_190,0xd,puVar2,auStack_1b0);
  puStack_1c8 = (undefined1 *)0x0;
  puStack_1c0 = (undefined1 *)0x0;
  uStack_1b8 = 0;
  uStack_1cc = 0;
  puVar3 = &uStack_120;
  pppuVar7 = appuStack_190;
  func_0x000107c310cc(puVar3,pppuVar7,&puStack_1c8,&uStack_1cc);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_1c8 != (undefined1 *)0x0) {
    puStack_1c0 = puStack_1c8;
    __ZdlPv();
  }
  plVar1 = plStack_128;
  appuStack_190[0] = &PTR_SUB_110862700;
  plStack_128 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_1c8 = auStack_148;
  func_0x000107c27dd4(&puStack_1c8);
  puStack_1c8 = auStack_1b0;
  func_0x000107c27dd4(&puStack_1c8);
  func_0x000107c27da8(&uStack_f8);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar4 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(puVar3);
      }
      pppuVar7 = *(undefined ****)((long)puVar8 * 8);
      puVar5 = PTR_PTR_1126d67a8;
      FUN_108529134();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar8 = (undefined8 *)((long)puVar8 + 1);
    } while (puVar4 != puVar8);
    puVar4 = puVar3;
    func_0x00010bf52a60();
  }
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(param_2);
  lVar6 = param_1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar3);
  _objc_release(puVar3);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume();
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126d9ea0);
  if (lVar6 == 0) {
    uStack_270 = 0;
    uStack_288 = 0;
    uStack_290 = 0;
    uStack_278 = 0;
    uStack_280 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_2a0,lVar6);
  }
  puVar2 = &uStack_311;
  FUN_10851dd50();
  uStack_380 = 0xf;
  uStack_370 = 0x100;
  uStack_390 = 0;
  ppuStack_388 = &PTR_DAT_110a4ff40;
  uStack_348 = 0;
  uStack_350 = 0;
  lStack_338 = 0;
  lStack_340 = 0;
  plStack_328 = (long *)0x0;
  uStack_330 = 0;
  plStack_320 = (long *)0x0;
  uStack_2f6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_308 = 10;
  uStack_2f8 = 0x100;
  ppuStack_310 = &PTR_FUN_110a4fee0;
  lStack_2c0 = 0;
  lStack_2c8 = 0;
  plStack_2b0 = (long *)0x0;
  uStack_2b8 = 0;
  plStack_2a8 = (long *)0x0;
  lStack_3a0 = 0;
  lStack_398 = 0;
  uStack_3a4 = 0;
  puVar3 = &uStack_2a0;
  pppuStack_358 = pppuVar7;
  puStack_2d8 = puVar2;
  pppuStack_2d0 = &ppuStack_388;
  func_0x000107c310cc(puVar3,&ppuStack_310,&lStack_3a0,&uStack_3a4);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_3a0 != 0) {
    lStack_398 = lStack_3a0;
    __ZdlPv();
  }
  plVar1 = plStack_2a8;
  ppuStack_310 = &PTR_FUN_110a4fee0;
  plStack_2a8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_2b0;
  plStack_2b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_2c8 != 0) {
    lStack_2c0 = lStack_2c8;
    __ZdlPv();
  }
  plVar1 = plStack_320;
  ppuStack_388 = &PTR_DAT_110a4ff40;
  plStack_320 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_328;
  plStack_328 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_340 != 0) {
    lStack_338 = lStack_340;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_278);
  _objc_release(uStack_288);
  _objc_release(uStack_290);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1084ebd14; end: 1084ebeff;  */

void FUN_1084ebd14(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined4 uStack_194;
  long lStack_190;
  long lStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined4 uStack_160;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126d9ea0);
  if (param_1 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_90,param_1);
  }
  puVar2 = &uStack_101;
  FUN_10851dd50();
  uStack_170 = 0xf;
  uStack_160 = 0x100;
  uStack_180 = 0;
  ppuStack_178 = &PTR_DAT_110a4ff40;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_128 = 0;
  lStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  uStack_e6 = *(undefined2 *)(puVar2 + 0x1a);
  uStack_f8 = 10;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_FUN_110a4fee0;
  lStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  plStack_98 = (long *)0x0;
  lStack_190 = 0;
  lStack_188 = 0;
  uStack_194 = 0;
  puVar3 = &uStack_90;
  uStack_148 = param_2;
  puStack_c8 = puVar2;
  pppuStack_c0 = &ppuStack_178;
  func_0x000107c310cc(puVar3,&ppuStack_100,&lStack_190,&uStack_194);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_190 != 0) {
    lStack_188 = lStack_190;
    __ZdlPv();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_FUN_110a4fee0;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b8 != 0) {
    lStack_b0 = lStack_b8;
    __ZdlPv();
  }
  plVar1 = plStack_110;
  ppuStack_178 = &PTR_DAT_110a4ff40;
  plStack_110 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_130 != 0) {
    lStack_128 = lStack_130;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_68);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1084ebf00; end: 1084ebfdb;  */

undefined8 * FUN_1084ebf00(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110a4fee0;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 1084ebfdc; end: 1084ec4a3;  */

void FUN_1084ebfdc(undefined *param_1,undefined *param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *unaff_x22;
  undefined8 uVar11;
  undefined *puStack_200;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_2;
  uVar1 = param_3;
  _objc_retain(param_2);
  iVar7 = (int)uVar1;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (uVar1 != 0) {
    puVar2 = param_2;
    FUN_1084ebd14();
    _objc_retainAutoreleasedReturnValue();
    puStack_200 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    unaff_x22 = puStack_200;
    func_0x00010c11f8a0();
    _objc_retainAutoreleasedReturnValue();
    iVar7 = (int)&uStack_1b0;
    puVar2 = unaff_x22;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lVar8 = *plStack_1a0;
LAB_1084ec0a8:
      puVar10 = (undefined *)0x0;
LAB_1084ec0ac:
      if (*plStack_1a0 != lVar8) {
        _objc_enumerationMutation(unaff_x22);
      }
      uVar1 = param_3;
      func_0x00010bf4b900();
      if ((uVar1 & 1) == 0) goto code_r0x0001084ec0d8;
      _objc_release(unaff_x22);
      unaff_x22 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      puVar2 = puStack_200;
      func_0x00010c11f8a0(puStack_200);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar10 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      _objc_opt_new();
      puVar3 = puStack_200;
      func_0x00010c11f8a0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      func_0x00010bf52a60();
      lVar8 = lRam0000000000000000;
      while (puVar2 != (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar8) {
            _objc_enumerationMutation(puVar3);
          }
          uVar11 = *(undefined8 *)((long)puVar9 * 8);
          uVar1 = param_3;
          func_0x00010bf4b900();
          if ((int)uVar1 == 0) {
            puVar6 = puVar10;
            func_0x00010bf4b900();
            if (((ulong)puVar6 & 1) == 0) {
              func_0x00010befa120(puVar10);
              func_0x00010befa120(unaff_x22);
            }
          }
          else {
            puVar6 = param_2;
            FUN_1084dc184(param_2,uVar11);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar6;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar6);
            puVar6 = puVar4;
            func_0x00010bf5a820();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar6;
            func_0x00010bf5bbc0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar6);
            puVar6 = puVar5;
            func_0x00010c08fa60();
            if ((puVar6 != (undefined *)0x0) &&
               (puVar6 = puVar10, func_0x00010bf4b900(), ((ulong)puVar6 & 1) == 0)) {
              func_0x00010befa120(puVar10);
              func_0x00010befa120(unaff_x22);
            }
            _objc_release(puVar5);
            _objc_release(puVar4);
          }
          puVar9 = puVar9 + 1;
        } while (puVar2 != puVar9);
        puVar2 = puVar3;
        func_0x00010bf52a60();
      }
      _objc_release(puVar3);
      puVar2 = PTR_PTR_1126d9ea8;
      param_1 = puStack_200;
      FUN_10851e1c0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = unaff_x22;
      func_0x00010bf51e00(unaff_x22);
      if (puVar2 != (undefined *)0x0) {
        _objc_setProperty_nonatomic_copy(puVar2);
      }
      _objc_release(puVar3);
      puVar3 = puVar2;
      func_0x00010c25ed40(param_2);
      iVar7 = (int)puVar3;
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar2);
      _objc_release(puVar10);
    }
LAB_1084ec334:
    _objc_release(unaff_x22);
    _objc_release(puStack_200);
    puVar2 = param_1;
  }
  _objc_release(param_3);
  puVar10 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x22);
  _objc_release(puStack_200);
  _objc_release(param_3);
  _objc_release(param_2);
  __Unwind_Resume(puVar10);
  _objc_retain();
  _objc_retain(puVar2);
  puVar3 = puVar2;
  func_0x00010bf529e0();
  if ((puVar3 != (undefined *)0x0) && (FUN_1084ebfdc(1,puVar10,puVar2), iVar7 != 0)) {
    FUN_1084ebfdc(2,puVar10,puVar2);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
code_r0x0001084ec0d8:
  puVar10 = puVar10 + 1;
  if (puVar2 == puVar10) goto code_r0x0001084ec0e4;
  goto LAB_1084ec0ac;
code_r0x0001084ec0e4:
  iVar7 = (int)&uStack_1b0;
  puVar2 = unaff_x22;
  func_0x00010bf52a60();
  if (puVar2 == (undefined *)0x0) goto LAB_1084ec334;
  goto LAB_1084ec0a8;
}



/* Entry: 1084ec4a4; end: 1084ec533;  */

void FUN_1084ec4a4(undefined8 param_1,long param_2,int param_3)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if ((lVar1 != 0) && (FUN_1084ebfdc(1,param_1,param_2), param_3 != 0)) {
    FUN_1084ebfdc(2,param_1,param_2);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1084ec534; end: 1084ec9e7;  */

void FUN_1084ec534(long param_1,long param_2,ulong param_3,long param_4,int param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  lVar1 = param_1;
  FUN_1084ebd14(param_1,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar8 = PTR_PTR_1126d9ea0;
    _objc_alloc(PTR_PTR_1126d9ea0);
    func_0x00010c055fa0();
    puVar9 = PTR_PTR_1126d9ea8;
    FUN_10851e040(PTR_PTR_1126d9ea8,puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
  }
  else {
    puVar8 = (undefined *)0x0;
    puVar9 = PTR_PTR_1126d9ea8;
    FUN_10851e1c0(PTR_PTR_1126d9ea8,lVar2);
    _objc_retainAutoreleasedReturnValue();
    if (param_5 == 0) {
      if ((param_3 & 1) == 0) {
        if (puVar9 == (undefined *)0x0) {
          puVar9 = (undefined *)0x0;
        }
        else {
          _objc_setProperty_nonatomic_copy(puVar9);
        }
      }
      else {
        lVar1 = lVar2;
        func_0x00010c11f8a0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar1;
        func_0x00010c0d3c80();
        _objc_release(lVar1);
        func_0x00010c12d500(lVar4);
        lVar1 = param_2;
        func_0x00010c0d3c80(param_2);
        lVar5 = lVar4;
        func_0x00010bf51e00(lVar4);
        func_0x00010befa160(lVar1);
        _objc_release(lVar5);
        lVar5 = lVar1;
        func_0x00010bf51e00(lVar1);
        if (puVar9 != (undefined *)0x0) {
          _objc_setProperty_nonatomic_copy(puVar9);
        }
        _objc_release(lVar5);
        _objc_release(lVar1);
        _objc_release(lVar4);
      }
    }
    else {
      if (param_4 != 2) {
        if (puVar9 == (undefined *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(puVar9 + 0x20);
        }
        _objc_retain(uVar7);
        goto LAB_1084ec860;
      }
      lVar1 = lVar2;
      func_0x00010c11f8a0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar1;
      func_0x00010c0d3c80();
      _objc_release(lVar1);
      puVar8 = PTR__OBJC_CLASS___NSSet_1126ae870;
      lVar1 = lVar2;
      func_0x00010c11f8a0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c225c20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      _objc_retain(param_2);
      lVar1 = param_2;
      func_0x00010bf52a60();
      lVar4 = lRam0000000000000000;
      while (lVar1 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar4) {
            _objc_enumerationMutation(param_2);
          }
          puVar3 = puVar8;
          func_0x00010bf4b900();
          if (((ulong)puVar3 & 1) == 0) {
            func_0x00010befa120(lVar5);
          }
          lVar10 = lVar10 + 1;
        } while (lVar1 != lVar10);
        lVar1 = param_2;
        func_0x00010bf52a60();
      }
      _objc_release(param_2);
      lVar1 = lVar5;
      func_0x00010bf51e00(lVar5);
      if (puVar9 != (undefined *)0x0) {
        _objc_setProperty_nonatomic_copy(puVar9);
      }
      _objc_release(lVar1);
      _objc_release(puVar8);
      _objc_release(lVar5);
    }
  }
  func_0x00010c25ed40(param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar8 = puVar9;
  if (puVar9 == (undefined *)0x0) goto LAB_1084ec8c0;
  uVar7 = *(undefined8 *)(puVar9 + 0x20);
  while( true ) {
    _objc_retain(uVar7);
    puVar8 = puVar9;
LAB_1084ec860:
    _objc_release(puVar9);
    _objc_release(lVar2);
    _objc_release(param_2);
    _objc_release(param_1);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) break;
    ___stack_chk_fail();
LAB_1084ec8c0:
    uVar7 = 0;
    puVar9 = puVar8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 1084ec9e8; end: 1084eca57;  */

void FUN_1084ec9e8(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_DAT_110a4ff40;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 1084eca58; end: 1084ed113;  */

void FUN_1084eca58(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 ******ppppppuVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  char *pcVar8;
  ulong uVar9;
  long alStack_98 [2];
  char cStack_81;
  undefined8 *****pppppuStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  switch(*(undefined4 *)(param_1 + 8)) {
  case 0:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,"NOT (",5);
    plVar6 = *(long **)(param_1 + 0x38);
    goto code_r0x0001084ed0b8;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x0001084ed0d8;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x0001084ed0d8;
  case 3:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") % (",5);
    break;
  case 4:
    plVar6 = *(long **)(param_1 + 0x38);
    plVar4 = *(long **)(param_1 + 0x40);
    if ((*(byte *)((long)plVar6 + 0x1b) & 1) != 0) {
      if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
      plVar6 = plVar4;
code_r0x0001084ed04c:
                    /* WARNING: Could not recover jumptable at 0x0001084ed070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x0001084ed04c;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") AND (",7);
    break;
  case 5:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") OR (",6)
    ;
    break;
  case 6:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") < (",5);
    break;
  case 7:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") <= (",6)
    ;
    break;
  case 8:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") > (",5);
    break;
  case 9:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") >= (",6)
    ;
    break;
  case 10:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") = (",5);
    break;
  case 0xb:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") != (",6)
    ;
    break;
  case 0xc:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(param_2,") IN (",6)
    ;
    if (*(long *)(param_1 + 0x50) != *(long *)(param_1 + 0x48)) {
      uVar9 = 0;
      pcVar8 = (char *)0x1;
      pcVar7 = ")";
      do {
        *param_3 = *param_3 + 1;
        __ZNSt3__19to_stringEi(alStack_98);
        pcVar2 = "?";
        if (uVar9 != 0) {
          pcVar2 = ",?";
        }
        uVar1 = 1;
        if (uVar9 != 0) {
          uVar1 = 2;
        }
        plVar6 = alStack_98;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                  (plVar6,0,pcVar2,uVar1);
        uStack_78 = plVar6[1];
        pppppuStack_80 = (undefined8 *****)*plVar6;
        uStack_70 = plVar6[2];
        plVar6[1] = 0;
        plVar6[2] = 0;
        *plVar6 = 0;
        uVar3 = uStack_78;
        ppppppuVar5 = (undefined8 ******)pppppuStack_80;
        if (-1 < (long)uStack_70) {
          uVar3 = uStack_70 >> 0x38;
          ppppppuVar5 = &pppppuStack_80;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                  (param_2,ppppppuVar5,uVar3);
        if ((long)uStack_70 < 0) {
          __ZdlPv(pppppuStack_80);
        }
        if (cStack_81 < '\0') {
          __ZdlPv(alStack_98[0]);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
      goto code_r0x0001084ed0d8;
    }
    goto code_r0x0001084ed0cc;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x0001084ed0cc;
    uVar9 = 0;
    pcVar8 = (char *)0x1;
    pcVar7 = ")";
    do {
      *param_3 = *param_3 + 1;
      __ZNSt3__19to_stringEi(alStack_98);
      pcVar2 = "?";
      if (uVar9 != 0) {
        pcVar2 = ",?";
      }
      uVar1 = 1;
      if (uVar9 != 0) {
        uVar1 = 2;
      }
      plVar6 = alStack_98;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm
                (plVar6,0,pcVar2,uVar1);
      uStack_78 = plVar6[1];
      pppppuStack_80 = (undefined8 *****)*plVar6;
      uStack_70 = plVar6[2];
      plVar6[1] = 0;
      plVar6[2] = 0;
      *plVar6 = 0;
      uVar3 = uStack_78;
      ppppppuVar5 = (undefined8 ******)pppppuStack_80;
      if (-1 < (long)uStack_70) {
        uVar3 = uStack_70 >> 0x38;
        ppppppuVar5 = &pppppuStack_80;
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (param_2,ppppppuVar5,uVar3);
      if ((long)uStack_70 < 0) {
        __ZdlPv(pppppuStack_80);
      }
      if (cStack_81 < '\0') {
        __ZdlPv(alStack_98[0]);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 3));
    goto code_r0x0001084ed0d8;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x0001084ed0d8;
  case 0xf:
    *param_3 = *param_3 + 1;
    __ZNSt3__19to_stringEi(alStack_98);
    plVar6 = alStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6insertEmPKcm(plVar6,0,"?",1);
    uStack_78 = plVar6[1];
    pppppuStack_80 = (undefined8 *****)*plVar6;
    uStack_70 = plVar6[2];
    plVar6[1] = 0;
    plVar6[2] = 0;
    *plVar6 = 0;
    uVar9 = uStack_78;
    ppppppuVar5 = (undefined8 ******)pppppuStack_80;
    if (-1 < (long)uStack_70) {
      uVar9 = uStack_70 >> 0x38;
      ppppppuVar5 = &pppppuStack_80;
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,ppppppuVar5,uVar9);
    if ((long)uStack_70 < 0) {
      __ZdlPv(pppppuStack_80);
    }
    if (cStack_81 < '\0') {
      __ZdlPv(alStack_98[0]);
    }
  default:
    goto LAB_1084ed0e8;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x0001084ed0b8:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x0001084ed0cc:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x0001084ed0d8:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_1084ed0e8:
  return;
}



/* Entry: 1084ed114; end: 1084ed19b;  */

void FUN_1084ed114(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) == 0) {
    if ((*(int *)(param_1 + 8) == 0xe) && ((*(byte *)(param_1 + 0x18) & 1) == 0)) {
      func_0x00010055a1c0(param_2,param_1 + 0x10,param_1 + 0x10);
    }
    plVar1 = *(long **)(param_1 + 0x38);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    }
    plVar1 = *(long **)(param_1 + 0x40);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001084ed188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 1084ed19c; end: 1084ed2cf;  */

void FUN_1084ed19c(long param_1,undefined8 param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar3 = *(long **)(param_1 + 0x38);
      if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
      }
      puVar1 = *(undefined8 **)(param_1 + 0x50);
      for (puVar5 = *(undefined8 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar4 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar4);
      }
    }
    else if (iVar2 == 0xe) {
      return;
    }
  }
  else {
    if (iVar2 == 0x10) {
      return;
    }
    if (iVar2 == 0xf) {
      iVar2 = *param_3;
      *param_3 = iVar2 + 1;
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined8 *)(param_1 + 0x30));
      return;
    }
  }
  plVar3 = *(long **)(param_1 + 0x38);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
  }
  plVar3 = *(long **)(param_1 + 0x40);
  if ((plVar3 != (long *)0x0) && ((*(byte *)((long)plVar3 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001084ed2c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x20))(plVar3,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 1084ed2d0; end: 1084ed37f;  */

long FUN_1084ed2d0(long param_1,long param_2,long param_3,undefined1 *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  _objc_retain(param_3);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 - 1U < 2) {
    lVar3 = 0;
    *param_4 = 0;
  }
  else if (iVar2 - 0xfU < 2) {
    *param_4 = 0;
    lVar3 = *(long *)(param_1 + 0x30);
  }
  else if (iVar2 == 0xe) {
    lVar1 = 0x28;
    lVar3 = param_3;
    if (param_2 != 0) {
      lVar1 = 0x20;
      lVar3 = param_2;
    }
    (**(code **)(param_1 + lVar1))(lVar3,param_4);
  }
  else {
    lVar3 = 0;
  }
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1084ed380; end: 1084ed3bb;  */

undefined8 FUN_1084ed380(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  __Znwm(0x70);
  FUN_1084ed3bc(uVar1,param_1);
  return uVar1;
}



/* Entry: 1084ed3bc; end: 1084ed567;  */

void FUN_1084ed3bc(undefined8 *param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long *plStack_30;
  long *plStack_28;
  
  iVar5 = *(int *)(param_2 + 8);
  if (iVar5 < 0xc) {
    if (iVar5 - 3U < 9) {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plVar4 = *(long **)(param_2 + 0x40);
      plStack_28 = plVar3;
      (**(code **)(*plVar4 + 0x30))();
      plStack_30 = plVar4;
      func_0x0001084ed5fc(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,&plStack_30);
      plVar3 = plStack_30;
      plStack_30 = (long *)0x0;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    else {
      plVar3 = *(long **)(param_2 + 0x38);
      (**(code **)(*plVar3 + 0x30))();
      plStack_28 = plVar3;
      func_0x0001084ed568(param_1,*(undefined4 *)(param_2 + 8),&plStack_28);
    }
LAB_1084ed4a8:
    plVar3 = plStack_28;
    plStack_28 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  else {
    if (iVar5 < 0xf) {
      if (iVar5 - 0xcU < 2) {
        plVar3 = *(long **)(param_2 + 0x38);
        (**(code **)(*plVar3 + 0x30))();
        plStack_28 = plVar3;
        FUN_1084ed6fc(param_1,*(undefined4 *)(param_2 + 8),&plStack_28,param_2 + 0x48);
        goto LAB_1084ed4a8;
      }
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      bVar1 = *(byte *)(param_2 + 0x18);
      bVar2 = *(byte *)(param_2 + 0x19);
      *(undefined4 *)(param_1 + 1) = 0xe;
      param_1[2] = uVar6;
      *(byte *)(param_1 + 3) = bVar1;
      *(byte *)((long)param_1 + 0x19) = bVar2;
      *(byte *)((long)param_1 + 0x1a) = bVar2 ^ 1;
      *(byte *)((long)param_1 + 0x1b) = (bVar2 | bVar1) ^ 1;
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      param_1[5] = *(undefined8 *)(param_2 + 0x28);
      param_1[4] = uVar6;
    }
    else {
      if (iVar5 != 0xf) {
        iVar5 = 0x10;
      }
      *(int *)(param_1 + 1) = iVar5;
      *(undefined4 *)(param_1 + 3) = 0x100;
      param_1[6] = *(undefined8 *)(param_2 + 0x30);
    }
    *param_1 = &PTR_DAT_110a4ff40;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[0xd] = 0;
  }
  return;
}



/* Entry: 1084ed568; end: 1084ed6fb;  */

undefined8 * FUN_1084ed568(undefined8 *param_1,int param_2,long *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  
  lVar4 = *param_3;
  uVar1 = *(undefined1 *)(lVar4 + 0x19);
  uVar2 = *(undefined1 *)(lVar4 + 0x1a);
  if (param_2 == 0) {
    bVar5 = 1;
  }
  else {
    bVar5 = *(byte *)(lVar4 + 0x1b);
  }
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  *(undefined1 *)((long)param_1 + 0x1a) = uVar2;
  *(byte *)((long)param_1 + 0x1b) = bVar5 & 1;
  *param_1 = &PTR_DAT_110a4ff40;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}


