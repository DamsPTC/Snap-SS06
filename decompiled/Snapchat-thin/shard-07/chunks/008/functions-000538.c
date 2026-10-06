/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a06d4c; end: 105a07027;  */

void FUN_105a06d4c(long param_1)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 uStack_21c;
  long lStack_218;
  long lStack_210;
  undefined8 uStack_208;
  undefined1 uStack_1f9;
  undefined **ppuStack_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1e0;
  undefined1 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long *plStack_198;
  long *plStack_190;
  undefined1 uStack_181;
  undefined **ppuStack_180;
  undefined4 uStack_178;
  undefined2 uStack_168;
  byte bStack_166;
  byte bStack_165;
  undefined1 *puStack_148;
  undefined ***pppuStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  long *plStack_118;
  undefined **ppuStack_110;
  undefined4 uStack_108;
  undefined2 uStack_f8;
  byte bStack_f6;
  byte bStack_f5;
  undefined ***pppuStack_d8;
  undefined1 *puStack_d0;
  long lStack_c8;
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
  _objc_opt_class(PTR_PTR_1126b4040);
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
  puVar4 = &uStack_181;
  FUN_105a079d0();
  uStack_1f0 = 0xf;
  uStack_1e0 = 0x100;
  uStack_1c8 = 1;
  ppuStack_1f8 = &PTR_SUB_1108629c8;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  lStack_1b0 = 0;
  plStack_198 = (long *)0x0;
  uStack_1a0 = 0;
  plStack_190 = (long *)0x0;
  bVar1 = puVar4[0x1a];
  bVar2 = puVar4[0x1b];
  uStack_178 = 10;
  uStack_168 = 0x100;
  ppuStack_180 = &PTR_SUB_1108629c8;
  plStack_118 = (long *)0x0;
  uStack_130 = 0;
  lStack_138 = 0;
  plStack_120 = (long *)0x0;
  uStack_128 = 0;
  puVar5 = &uStack_1f9;
  bStack_166 = bVar1;
  bStack_165 = bVar2;
  puStack_148 = puVar4;
  pppuStack_140 = &ppuStack_1f8;
  FUN_105a07b20();
  bStack_f5 = bVar2 & puVar5[0x1b];
  bStack_f6 = (bVar1 | puVar5[0x1a]) & 1;
  uStack_108 = 4;
  uStack_f8 = 0x100;
  ppuStack_110 = &PTR_SUB_1108629c8;
  pppuStack_d8 = &ppuStack_180;
  plStack_a8 = (long *)0x0;
  plStack_b0 = (long *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lStack_c8 = 0;
  lStack_218 = 0;
  lStack_210 = 0;
  uStack_208 = 0;
  uStack_21c = 0;
  puVar6 = &uStack_a0;
  puStack_d0 = puVar5;
  func_0x0001000e77a0(puVar6,&ppuStack_110,&lStack_218,&uStack_21c);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  if (lStack_218 != 0) {
    lStack_210 = lStack_218;
    __ZdlPv();
  }
  plVar3 = plStack_a8;
  ppuStack_110 = &PTR_SUB_1108629c8;
  plStack_a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_b0;
  plStack_b0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_c8 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_118;
  ppuStack_180 = &PTR_SUB_1108629c8;
  plStack_118 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_120;
  plStack_120 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_138 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_190;
  ppuStack_1f8 = &PTR_SUB_1108629c8;
  plStack_190 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_198;
  plStack_198 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_1b0 != 0) {
    __ZdlPv();
  }
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105a07028; end: 105a072ab;  */

void FUN_105a07028(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
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
  _objc_opt_class(PTR_PTR_1126b4040);
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
  FUN_105a075b8();
  uStack_180 = 0xf;
  uStack_170 = 0x100;
  _objc_retain(param_2);
  ppuStack_188 = &PTR_SUB_110862760;
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
  ppuStack_110 = &PTR_FUN_110862700;
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
  func_0x0001000e77a0(puVar3,&ppuStack_110,&puStack_1a0,&uStack_1a4);
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
  ppuStack_110 = &PTR_FUN_110862700;
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
  func_0x000100105004(&puStack_1a0);
  plVar1 = plStack_120;
  ppuStack_188 = &PTR_SUB_110862760;
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
  func_0x000100105004(&puStack_1a0);
  _objc_release(uStack_158);
  func_0x0001000e76e0(&uStack_78);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105a072ac; end: 105a075b7;  */

undefined ** FUN_105a072ac(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined1 uStack_1d1;
  undefined **appuStack_1d0 [9];
  undefined1 auStack_188 [24];
  long *plStack_170;
  long *plStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  ulong uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  undefined1 *puStack_d0;
  undefined8 uStack_c8;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126b4040);
  if (param_1 == 0) {
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    puStack_160 = (undefined *)0x0;
  }
  else {
    func_0x00010bfa6be0(&puStack_160,param_1);
  }
  puVar3 = &uStack_1d1;
  FUN_105a075b8(puVar3);
  _objc_retain(param_2);
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  uStack_1f0 = 0;
  lVar4 = param_2;
  func_0x00010bf529e0(param_2);
  func_0x0001004c2bb4(&uStack_1f0,lVar4);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar8 = *plStack_110;
    do {
      lVar9 = 0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(param_2);
        }
        uVar7 = *(undefined8 *)(lStack_118 + lVar9 * 8);
        _objc_retain(uVar7);
        uStack_e0 = uVar7;
        func_0x0001004c2d3c(&uStack_1f0,&uStack_e0);
        _objc_release(uStack_e0);
        lVar9 = lVar9 + 1;
      } while (lVar4 != lVar9);
      lVar4 = param_2;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(param_2);
  _objc_release(param_2);
  func_0x0001004c2e3c(appuStack_1d0,0xc,puVar3,&uStack_1f0);
  puStack_d8 = (undefined1 *)0x0;
  puStack_d0 = (undefined1 *)0x0;
  uStack_c8 = 0;
  uStack_120 = uStack_120 & 0xffffffff00000000;
  ppuVar5 = &puStack_160;
  func_0x0001000e77a0(ppuVar5,appuStack_1d0,&puStack_d8,&uStack_120);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar5;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar5);
  if (puStack_d8 != (undefined1 *)0x0) {
    puStack_d0 = puStack_d8;
    __ZdlPv();
  }
  plVar1 = plStack_168;
  appuStack_1d0[0] = &PTR_FUN_110862700;
  plStack_168 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_170;
  plStack_170 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_d8 = auStack_188;
  func_0x000100105004(&puStack_d8);
  puStack_d8 = (undefined1 *)&uStack_1f0;
  func_0x000100105004(&puStack_d8);
  func_0x0001000e76e0(&uStack_138);
  _objc_release(uStack_148);
  _objc_release(uStack_150);
  _objc_release(param_2);
  lVar4 = param_1;
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar6);
    return ppuVar6;
  }
  ___stack_chk_fail();
  _objc_release(ppuVar5);
  if (puStack_d8 != (undefined1 *)0x0) {
    puStack_d0 = puStack_d8;
    __ZdlPv();
  }
  FUN_1050048c0(appuStack_1d0);
  puStack_d8 = (undefined1 *)&uStack_1f0;
  func_0x000100105004(&puStack_d8);
  func_0x000104d96620(&puStack_160);
  _objc_release(param_2);
  _objc_release(param_1);
  __Unwind_Resume(lVar4);
  func_0x000104bd46a0(lVar4);
  if ((bRam000000011381a6a8 & 1) == 0) {
    iVar2 = 0x1381a6a8;
    ___cxa_guard_acquire();
    if (iVar2 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_113115998,0x100000000);
      ___cxa_guard_release(0x11381a6a8);
    }
  }
  return &PTR_PTR_113115998;
}



/* Entry: 105a075b8; end: 105a0761b;  */

undefined ** FUN_105a075b8(void)

{
  int iVar1;
  
  if ((bRam000000011381a6a8 & 1) == 0) {
    iVar1 = 0x1381a6a8;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_113115998,0x100000000);
      ___cxa_guard_release(0x11381a6a8);
    }
  }
  return &PTR_PTR_113115998;
}



/* Entry: 105a0761c; end: 105a076a3;  */

void FUN_105a0761c(uint *param_1,undefined1 *param_2)

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



/* Entry: 105a076a4; end: 105a0772f;  */

void FUN_105a076a4(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010bfe5ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105a07730; end: 105a077eb;  */

undefined8 FUN_105a07730(void)

{
  int iVar1;
  
  if ((bRam000000011381a720 & 1) == 0) {
    iVar1 = 0x1381a720;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381a6b8 = 0xe;
      puRam000000011381a6c0 = &UNK_10f31d494;
      uRam000000011381a6c8 = 0x1010000;
      pcRam000000011381a6d0 = FUN_105a077ec;
      pcRam000000011381a6d8 = FUN_105a0782c;
      ppuRam000000011381a6b0 = &PTR_SUB_1108629c8;
      uRam000000011381a6f0 = 0;
      uRam000000011381a6e8 = 0;
      uRam000000011381a700 = 0;
      uRam000000011381a6f8 = 0;
      uRam000000011381a710 = 0;
      uRam000000011381a708 = 0;
      uRam000000011381a718 = 0;
      ___cxa_atexit(0x105007830,0x11381a6b0,0x100000000);
      ___cxa_guard_release(0x11381a720);
    }
  }
  return 0x11381a6b0;
}



/* Entry: 105a077ec; end: 105a0782b;  */

bool FUN_105a077ec(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((10 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[5], uVar2 != 0)) {
    return *(char *)((long)piVar1 + uVar2) != '\0';
  }
  return false;
}



/* Entry: 105a0782c; end: 105a0787f;  */

undefined8 FUN_105a0782c(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010c080120(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105a07880; end: 105a0793b;  */

undefined8 FUN_105a07880(void)

{
  int iVar1;
  
  if ((bRam000000011381a798 & 1) == 0) {
    iVar1 = 0x1381a798;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381a730 = 0xe;
      puRam000000011381a738 = &UNK_10f31d4a1;
      uRam000000011381a740 = 0x1010000;
      pcRam000000011381a748 = FUN_105a0793c;
      pcRam000000011381a750 = FUN_105a0797c;
      ppuRam000000011381a728 = &PTR_SUB_1108629c8;
      uRam000000011381a768 = 0;
      uRam000000011381a760 = 0;
      uRam000000011381a778 = 0;
      uRam000000011381a770 = 0;
      uRam000000011381a788 = 0;
      uRam000000011381a780 = 0;
      uRam000000011381a790 = 0;
      ___cxa_atexit(0x105007830,0x11381a728,0x100000000);
      ___cxa_guard_release(0x11381a798);
    }
  }
  return 0x11381a728;
}



/* Entry: 105a0793c; end: 105a0797b;  */

bool FUN_105a0793c(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((0xc < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[6], uVar2 != 0)) {
    return *(char *)((long)piVar1 + uVar2) != '\0';
  }
  return false;
}



/* Entry: 105a0797c; end: 105a079cf;  */

undefined8 FUN_105a0797c(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010c079480(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105a079d0; end: 105a07a8b;  */

undefined8 FUN_105a079d0(void)

{
  int iVar1;
  
  if ((bRam000000011381a810 & 1) == 0) {
    iVar1 = 0x1381a810;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381a7a8 = 0xe;
      puRam000000011381a7b0 = &UNK_10f31d4bb;
      uRam000000011381a7b8 = 0x1010000;
      pcRam000000011381a7c0 = FUN_105a07a8c;
      pcRam000000011381a7c8 = FUN_105a07acc;
      ppuRam000000011381a7a0 = &PTR_SUB_1108629c8;
      uRam000000011381a7e0 = 0;
      uRam000000011381a7d8 = 0;
      uRam000000011381a7f0 = 0;
      uRam000000011381a7e8 = 0;
      uRam000000011381a800 = 0;
      uRam000000011381a7f8 = 0;
      uRam000000011381a808 = 0;
      ___cxa_atexit(0x105007830,0x11381a7a0,0x100000000);
      ___cxa_guard_release(0x11381a810);
    }
  }
  return 0x11381a7a0;
}



/* Entry: 105a07a8c; end: 105a07acb;  */

bool FUN_105a07a8c(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ulong uVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  *param_2 = 0;
  if ((0x10 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[8], uVar2 != 0)) {
    return *(char *)((long)piVar1 + uVar2) != '\0';
  }
  return false;
}



/* Entry: 105a07acc; end: 105a07b1f;  */

undefined8 FUN_105a07acc(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  *param_2 = 0;
  uVar1 = param_1;
  func_0x00010c074c20(param_1);
  _objc_release(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105a07b20; end: 105a07bb3;  */

undefined8 FUN_105a07b20(void)

{
  int iVar1;
  
  if ((bRam000000011381a888 & 1) == 0) {
    iVar1 = 0x1381a888;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      FUN_105a07bb4();
      func_0x000105a07c64();
      FUN_105a08ca8(0x11381a818,10,0x11381a908,0x11381a980);
      ___cxa_atexit(FUN_105a07cf8,0x11381a818,0x100000000);
      ___cxa_guard_release(0x11381a888);
    }
  }
  return 0x11381a818;
}



/* Entry: 105a07bb4; end: 105a07cf7;  */

void FUN_105a07bb4(void)

{
  int iVar1;
  
  if ((bRam000000011381a978 & 1) == 0) {
    iVar1 = 0x1381a978;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381a910 = 0xe;
      puRam000000011381a918 = &UNK_10f31d4c4;
      uRam000000011381a920 = 0x1010000;
      pcRam000000011381a928 = FUN_105a07e8c;
      pcRam000000011381a930 = FUN_105a07edc;
      ppuRam000000011381a908 = &PTR_FUN_1108cd2e8;
      uRam000000011381a948 = 0;
      uRam000000011381a940 = 0;
      uRam000000011381a958 = 0;
      uRam000000011381a950 = 0;
      uRam000000011381a968 = 0;
      uRam000000011381a960 = 0;
      uRam000000011381a970 = 0;
      ___cxa_atexit(FUN_105a07f78,0x11381a908,0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x11381a978);
      return;
    }
  }
  return;
}



/* Entry: 105a07cf8; end: 105a07df7;  */

undefined8 * FUN_105a07cf8(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_1108cd358;
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



/* Entry: 105a07df8; end: 105a07e8b;  */

void FUN_105a07df8(void)

{
  int iVar1;
  
  if ((bRam000000011381aa68 & 1) == 0) {
    iVar1 = 0x1381aa68;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      uRam000000011381aa00 = 0xf;
      uRam000000011381aa10 = 0x100;
      uRam000000011381aa28 = 2;
      ppuRam000000011381a9f8 = &PTR_FUN_1108cd2e8;
      uRam000000011381aa38 = 0;
      uRam000000011381aa30 = 0;
      uRam000000011381aa48 = 0;
      uRam000000011381aa40 = 0;
      uRam000000011381aa58 = 0;
      uRam000000011381aa50 = 0;
      uRam000000011381aa60 = 0;
      ___cxa_atexit(FUN_105a07f78,0x11381a9f8,0x100000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR____cxa_guard_release_110346be8)(0x11381aa68);
      return;
    }
  }
  return;
}



/* Entry: 105a07e8c; end: 105a07edb;  */

undefined1 FUN_105a07e8c(uint *param_1,undefined1 *param_2)

{
  int *piVar1;
  ushort *puVar2;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  puVar2 = (ushort *)((long)piVar1 - (long)*piVar1);
  if ((8 < *puVar2) && (puVar2[4] != 0)) {
    *param_2 = 0;
    if ((ulong)puVar2[3] != 0) {
      return *(undefined1 *)((long)piVar1 + (ulong)puVar2[3]);
    }
    return 0;
  }
  *param_2 = 1;
  return 0;
}



/* Entry: 105a07edc; end: 105a07f77;  */

long FUN_105a07edc(long param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010bf5b280();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar2 = param_1;
    func_0x00010bf5b280(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c261400();
    _objc_release(lVar2);
  }
  _objc_release(param_1);
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 105a07f78; end: 105a0804f;  */

undefined8 * FUN_105a07f78(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_1108cd2e8;
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



/* Entry: 105a08050; end: 105a0870b;  */

void FUN_105a08050(long param_1,undefined8 param_2,int *param_3)

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
    goto code_r0x000105a086b0;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x000105a086d0;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x000105a086d0;
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
code_r0x000105a08644:
                    /* WARNING: Could not recover jumptable at 0x000105a08668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x000105a08644;
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
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
      goto code_r0x000105a086d0;
    }
    goto code_r0x000105a086c4;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x000105a086c4;
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
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
    goto code_r0x000105a086d0;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x000105a086d0;
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
    goto LAB_105a086e0;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x000105a086b0:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x000105a086c4:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x000105a086d0:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_105a086e0:
  return;
}



/* Entry: 105a0870c; end: 105a08793;  */

void FUN_105a0870c(long param_1,undefined8 param_2)

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
                    /* WARNING: Could not recover jumptable at 0x000105a08780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 105a08794; end: 105a088c7;  */

void FUN_105a08794(long param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar4 = *(long **)(param_1 + 0x38);
      if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
      }
      puVar1 = *(undefined4 **)(param_1 + 0x50);
      for (puVar5 = *(undefined4 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar3 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar3);
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
      _sqlite3_bind_int64(param_2,iVar2 + 1,*(undefined4 *)(param_1 + 0x30));
      return;
    }
  }
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000105a088bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 105a088c8; end: 105a08977;  */

ulong FUN_105a088c8(long param_1,ulong param_2,ulong param_3,undefined1 *param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 - 1U < 2) {
    uVar3 = 0;
    *param_4 = 0;
  }
  else if (iVar2 - 0xfU < 2) {
    *param_4 = 0;
    uVar3 = (ulong)*(uint *)(param_1 + 0x30);
  }
  else if (iVar2 == 0xe) {
    lVar1 = 0x28;
    uVar3 = param_3;
    if (param_2 != 0) {
      lVar1 = 0x20;
      uVar3 = param_2;
    }
    (**(code **)(param_1 + lVar1))(uVar3,param_4);
  }
  else {
    uVar3 = 0;
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 105a08978; end: 105a08bf3;  */

undefined8 * FUN_105a08978(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  byte bVar12;
  byte bVar13;
  
  puVar6 = (undefined8 *)0x70;
  __Znwm();
  iVar10 = *(int *)(param_1 + 8);
  if (0xb < iVar10) {
    if (iVar10 < 0xf) {
      if (iVar10 - 0xcU < 2) {
        plVar7 = *(long **)(param_1 + 0x38);
        (**(code **)(*plVar7 + 0x30))();
        uVar5 = *(undefined2 *)((long)plVar7 + 0x19);
        uVar3 = *(undefined1 *)((long)plVar7 + 0x1b);
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_1 + 8);
        *(undefined1 *)(puVar6 + 3) = 0;
        *(undefined2 *)((long)puVar6 + 0x19) = uVar5;
        *(undefined1 *)((long)puVar6 + 0x1b) = uVar3;
        *puVar6 = &PTR_FUN_1108cd2e8;
        puVar6[7] = plVar7;
        lVar1 = *(long *)(param_1 + 0x48);
        lVar2 = *(long *)(param_1 + 0x50);
        puVar6[9] = 0;
        puVar6[8] = 0;
        puVar6[0xb] = 0;
        puVar6[10] = 0;
        FUN_105a08bf4(puVar6 + 9,lVar1,lVar2,lVar2 - lVar1 >> 2);
        puVar6[0xc] = plVar7;
        puVar6[0xd] = 0;
        return puVar6;
      }
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      bVar9 = *(byte *)(param_1 + 0x18);
      bVar12 = *(byte *)(param_1 + 0x19);
      *(undefined4 *)(puVar6 + 1) = 0xe;
      puVar6[2] = uVar11;
      *(byte *)(puVar6 + 3) = bVar9;
      *(byte *)((long)puVar6 + 0x19) = bVar12;
      *(byte *)((long)puVar6 + 0x1a) = bVar12 ^ 1;
      *(byte *)((long)puVar6 + 0x1b) = (bVar12 | bVar9) ^ 1;
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      puVar6[5] = *(undefined8 *)(param_1 + 0x28);
      puVar6[4] = uVar11;
    }
    else {
      if (iVar10 != 0xf) {
        iVar10 = 0x10;
      }
      *(int *)(puVar6 + 1) = iVar10;
      *(undefined4 *)(puVar6 + 3) = 0x100;
      *(undefined4 *)(puVar6 + 6) = *(undefined4 *)(param_1 + 0x30);
    }
    *puVar6 = &PTR_FUN_1108cd2e8;
    puVar6[8] = 0;
    puVar6[7] = 0;
    puVar6[10] = 0;
    puVar6[9] = 0;
    puVar6[0xc] = 0;
    puVar6[0xb] = 0;
    puVar6[0xd] = 0;
    return puVar6;
  }
  if (8 < iVar10 - 3U) {
    plVar7 = *(long **)(param_1 + 0x38);
    (**(code **)(*plVar7 + 0x30))();
    uVar3 = *(undefined1 *)((long)plVar7 + 0x19);
    uVar4 = *(undefined1 *)((long)plVar7 + 0x1a);
    if (*(int *)(param_1 + 8) == 0) {
      bVar9 = 1;
    }
    else {
      bVar9 = *(byte *)((long)plVar7 + 0x1b);
    }
    *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
    *(undefined1 *)(puVar6 + 3) = 0;
    *(undefined1 *)((long)puVar6 + 0x19) = uVar3;
    *(undefined1 *)((long)puVar6 + 0x1a) = uVar4;
    *(byte *)((long)puVar6 + 0x1b) = bVar9 & 1;
    *puVar6 = &PTR_FUN_1108cd2e8;
    puVar6[7] = plVar7;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[0xc] = plVar7;
    return puVar6;
  }
  plVar7 = *(long **)(param_1 + 0x38);
  (**(code **)(*plVar7 + 0x30))();
  plVar8 = *(long **)(param_1 + 0x40);
  (**(code **)(*plVar8 + 0x30))();
  if ((*(byte *)((long)plVar7 + 0x19) & 1) == 0) {
    bVar9 = *(byte *)((long)plVar8 + 0x19);
  }
  else {
    bVar9 = 1;
  }
  if ((*(byte *)((long)plVar7 + 0x1a) & 1) == 0) {
    bVar12 = *(byte *)((long)plVar8 + 0x1a);
  }
  else {
    bVar12 = 1;
  }
  if (*(int *)(param_1 + 8) == 4) {
    if ((*(byte *)((long)plVar7 + 0x1b) & 1) == 0) {
      bVar13 = 0;
      goto LAB_105a08aa0;
    }
  }
  else if ((*(byte *)((long)plVar7 + 0x1b) & 1) != 0) {
    bVar13 = 1;
    goto LAB_105a08aa0;
  }
  bVar13 = *(byte *)((long)plVar8 + 0x1b);
LAB_105a08aa0:
  *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
  *(undefined1 *)(puVar6 + 3) = 0;
  *(byte *)((long)puVar6 + 0x19) = bVar9 & 1;
  *(byte *)((long)puVar6 + 0x1a) = bVar12 & 1;
  *(byte *)((long)puVar6 + 0x1b) = bVar13 & 1;
  *puVar6 = &PTR_FUN_1108cd2e8;
  puVar6[7] = plVar7;
  puVar6[8] = plVar8;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = plVar7;
  puVar6[0xd] = plVar8;
  return puVar6;
}



/* Entry: 105a08bf4; end: 105a08c93;  */

void FUN_105a08bf4(long *param_1,long param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  long lVar2;
  
  if (param_4 != 0) {
    if (param_4 >> 0x3e != 0) {
      FUN_105a08c94();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x105a08c78);
      (*pcVar1)();
    }
    lVar2 = param_4 << 2;
    __Znwm();
    *param_1 = lVar2;
    param_1[1] = lVar2;
    param_1[2] = lVar2 + param_4 * 4;
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memcpy(lVar2,param_2,param_3);
    }
    param_1[1] = lVar2 + param_3;
  }
  return;
}



/* Entry: 105a08c94; end: 105a08ca7;  */

void FUN_105a08c94(undefined8 param_1,int param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  
  puVar1 = (undefined8 *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  if ((*(byte *)(param_3 + 0x19) & 1) == 0) {
    bVar2 = *(byte *)(param_4 + 0x19);
  }
  else {
    bVar2 = 1;
  }
  if ((*(byte *)(param_3 + 0x1a) & 1) == 0) {
    bVar3 = *(byte *)(param_4 + 0x1a);
  }
  else {
    bVar3 = 1;
  }
  if (param_2 == 4) {
    if ((*(byte *)(param_3 + 0x1b) & 1) == 0) {
      bVar4 = 0;
      goto LAB_105a08cf8;
    }
  }
  else if ((*(byte *)(param_3 + 0x1b) & 1) != 0) {
    bVar4 = 1;
    goto LAB_105a08cf8;
  }
  bVar4 = *(byte *)(param_4 + 0x1b);
LAB_105a08cf8:
  *(int *)(puVar1 + 1) = param_2;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(byte *)((long)puVar1 + 0x19) = bVar2 & 1;
  *(byte *)((long)puVar1 + 0x1a) = bVar3 & 1;
  *(byte *)((long)puVar1 + 0x1b) = bVar4 & 1;
  *puVar1 = &PTR_FUN_1108cd358;
  puVar1[7] = param_3;
  puVar1[8] = param_4;
  puVar1[10] = 0;
  puVar1[9] = 0;
  puVar1[0xc] = 0;
  puVar1[0xb] = 0;
  puVar1[0xd] = 0;
  return;
}



/* Entry: 105a08ca8; end: 105a08d3b;  */

void FUN_105a08ca8(undefined8 *param_1,int param_2,long param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  if ((*(byte *)(param_3 + 0x19) & 1) == 0) {
    bVar1 = *(byte *)(param_4 + 0x19);
  }
  else {
    bVar1 = 1;
  }
  if ((*(byte *)(param_3 + 0x1a) & 1) == 0) {
    bVar2 = *(byte *)(param_4 + 0x1a);
  }
  else {
    bVar2 = 1;
  }
  if (param_2 == 4) {
    if ((*(byte *)(param_3 + 0x1b) & 1) == 0) {
      bVar3 = 0;
      goto LAB_105a08cf8;
    }
  }
  else if ((*(byte *)(param_3 + 0x1b) & 1) != 0) {
    bVar3 = 1;
    goto LAB_105a08cf8;
  }
  bVar3 = *(byte *)(param_4 + 0x1b);
LAB_105a08cf8:
  *(int *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(byte *)((long)param_1 + 0x19) = bVar1 & 1;
  *(byte *)((long)param_1 + 0x1a) = bVar2 & 1;
  *(byte *)((long)param_1 + 0x1b) = bVar3 & 1;
  *param_1 = &PTR_FUN_1108cd358;
  param_1[7] = param_3;
  param_1[8] = param_4;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  return;
}



/* Entry: 105a08d3c; end: 105a08da7;  */

void FUN_105a08d3c(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_1108cd358;
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



/* Entry: 105a08da8; end: 105a09463;  */

void FUN_105a08da8(long param_1,undefined8 param_2,int *param_3)

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
    goto code_r0x000105a09408;
  case 1:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") ISNULL";
    pcVar8 = (char *)0x8;
    goto code_r0x000105a09428;
  case 2:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    pcVar7 = ") IS NOT NULL";
    pcVar8 = (char *)0xd;
    goto code_r0x000105a09428;
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
code_r0x000105a0939c:
                    /* WARNING: Could not recover jumptable at 0x000105a093c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar6,param_2,param_3);
      return;
    }
    if ((*(byte *)((long)plVar4 + 0x1b) & 1) != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x10);
      goto code_r0x000105a0939c;
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
      } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
      goto code_r0x000105a09428;
    }
    goto code_r0x000105a0941c;
  case 0xd:
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,&DAT_10f68e8ec,1);
    (**(code **)(**(long **)(param_1 + 0x38) + 0x10))(*(long **)(param_1 + 0x38),param_2,param_3);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
              (param_2,") NOT IN (",10);
    if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x48)) goto code_r0x000105a0941c;
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
    } while (uVar9 < (ulong)(*(long *)(param_1 + 0x50) - *(long *)(param_1 + 0x48) >> 2));
    goto code_r0x000105a09428;
  case 0xe:
    pcVar7 = *(char **)(param_1 + 0x10);
    pcVar8 = pcVar7;
    _strlen(pcVar7);
    goto code_r0x000105a09428;
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
    goto LAB_105a09438;
  }
  plVar6 = *(long **)(param_1 + 0x40);
code_r0x000105a09408:
  (**(code **)(*plVar6 + 0x10))(plVar6,param_2,param_3);
code_r0x000105a0941c:
  pcVar7 = ")";
  pcVar8 = (char *)0x1;
code_r0x000105a09428:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (param_2,pcVar7,pcVar8);
LAB_105a09438:
  return;
}



/* Entry: 105a09464; end: 105a094eb;  */

void FUN_105a09464(long param_1,undefined8 param_2)

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
                    /* WARNING: Could not recover jumptable at 0x000105a094d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 105a094ec; end: 105a0961f;  */

void FUN_105a094ec(long param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 0xf) {
    if (iVar2 - 0xcU < 2) {
      plVar4 = *(long **)(param_1 + 0x38);
      if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
        (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
      }
      puVar1 = *(undefined4 **)(param_1 + 0x50);
      for (puVar5 = *(undefined4 **)(param_1 + 0x48); puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar3 = *puVar5;
        iVar2 = *param_3;
        *param_3 = iVar2 + 1;
        _sqlite3_bind_int64(param_2,iVar2 + 1,uVar3);
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
  plVar4 = *(long **)(param_1 + 0x38);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
  }
  plVar4 = *(long **)(param_1 + 0x40);
  if ((plVar4 != (long *)0x0) && ((*(byte *)((long)plVar4 + 0x1b) & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x000105a09614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4,param_2,param_3);
    return;
  }
  return;
}



/* Entry: 105a09620; end: 105a0982b;  */

uint FUN_105a09620(long param_1,long param_2,long param_3,byte *param_4)

{
  long lVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  int *piVar10;
  uint uVar11;
  long *plVar12;
  byte bStack_43;
  byte bStack_42;
  byte bStack_41;
  
  _objc_retain(param_3);
  uVar11 = *(uint *)(param_1 + 8);
  if ((int)uVar11 < 0xe) {
    if (1 < uVar11 - 1) {
      if (uVar11 - 0xc < 2) {
        plVar12 = *(long **)(param_1 + 0x38);
        _objc_retain(param_3);
        (**(code **)(*plVar12 + 0x28))(plVar12,param_2,param_3,param_4);
        piVar2 = *(int **)(param_1 + 0x48);
        piVar3 = *(int **)(param_1 + 0x50);
        iVar7 = (int)plVar12;
        if (uVar11 == 0xc) {
          if (piVar2 == piVar3) {
            uVar11 = 0;
          }
          else {
            do {
              piVar10 = piVar2 + 1;
              iVar4 = *piVar2;
              uVar11 = (uint)(iVar7 == iVar4);
              piVar2 = piVar10;
            } while (iVar7 != iVar4 && piVar10 != piVar3);
          }
        }
        else if (piVar2 == piVar3) {
          uVar11 = 1;
        }
        else {
          do {
            piVar10 = piVar2 + 1;
            iVar4 = *piVar2;
            uVar11 = (uint)(iVar7 != iVar4);
            piVar2 = piVar10;
          } while (iVar7 != iVar4 && piVar10 != piVar3);
        }
        _objc_release(param_3);
        goto LAB_105a09804;
      }
      goto LAB_105a09750;
    }
    *param_4 = 0;
    bStack_43 = 0;
    (**(code **)(**(long **)(param_1 + 0x38) + 0x28))
              (*(long **)(param_1 + 0x38),param_2,param_3,&bStack_43);
    bVar6 = uVar11 != 1;
    bVar5 = bStack_43;
  }
  else {
    if (uVar11 - 0xf < 2) {
      *param_4 = 0;
      uVar11 = (uint)*(byte *)(param_1 + 0x30);
      goto LAB_105a09804;
    }
    if (uVar11 == 0xe) {
      lVar1 = 0x28;
      lVar8 = param_3;
      if (param_2 != 0) {
        lVar1 = 0x20;
        lVar8 = param_2;
      }
      (**(code **)(param_1 + lVar1))(lVar8,param_4);
      uVar11 = (uint)lVar8;
      goto LAB_105a09804;
    }
LAB_105a09750:
    if ((uVar11 & 0xfffffffe) != 10) {
      uVar11 = 0;
      goto LAB_105a09804;
    }
    plVar12 = *(long **)(param_1 + 0x38);
    plVar9 = *(long **)(param_1 + 0x40);
    (**(code **)(*plVar12 + 0x28))(plVar12,param_2,param_3,&bStack_41);
    (**(code **)(*plVar9 + 0x28))(plVar9,param_2,param_3,&bStack_42);
    *param_4 = (bStack_41 | bStack_42) & 1;
    bVar6 = uVar11 == 0xb;
    bVar5 = (int)plVar12 == (int)plVar9;
  }
  uVar11 = (uint)(bVar6 ^ bVar5);
LAB_105a09804:
  _objc_release(param_3);
  return uVar11 & 1;
}



/* Entry: 105a0982c; end: 105a09aa7;  */

undefined8 * FUN_105a0982c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  byte bVar12;
  byte bVar13;
  
  puVar6 = (undefined8 *)0x70;
  __Znwm();
  iVar10 = *(int *)(param_1 + 8);
  if (0xb < iVar10) {
    if (iVar10 < 0xf) {
      if (iVar10 - 0xcU < 2) {
        plVar7 = *(long **)(param_1 + 0x38);
        (**(code **)(*plVar7 + 0x30))();
        uVar5 = *(undefined2 *)((long)plVar7 + 0x19);
        uVar3 = *(undefined1 *)((long)plVar7 + 0x1b);
        *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_1 + 8);
        *(undefined1 *)(puVar6 + 3) = 0;
        *(undefined2 *)((long)puVar6 + 0x19) = uVar5;
        *(undefined1 *)((long)puVar6 + 0x1b) = uVar3;
        *puVar6 = &PTR_FUN_1108cd358;
        puVar6[7] = plVar7;
        lVar1 = *(long *)(param_1 + 0x48);
        lVar2 = *(long *)(param_1 + 0x50);
        puVar6[9] = 0;
        puVar6[8] = 0;
        puVar6[0xb] = 0;
        puVar6[10] = 0;
        FUN_105a08bf4(puVar6 + 9,lVar1,lVar2,lVar2 - lVar1 >> 2);
        puVar6[0xc] = plVar7;
        puVar6[0xd] = 0;
        return puVar6;
      }
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      bVar9 = *(byte *)(param_1 + 0x18);
      bVar12 = *(byte *)(param_1 + 0x19);
      *(undefined4 *)(puVar6 + 1) = 0xe;
      puVar6[2] = uVar11;
      *(byte *)(puVar6 + 3) = bVar9;
      *(byte *)((long)puVar6 + 0x19) = bVar12;
      *(byte *)((long)puVar6 + 0x1a) = bVar12 ^ 1;
      *(byte *)((long)puVar6 + 0x1b) = (bVar12 | bVar9) ^ 1;
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      puVar6[5] = *(undefined8 *)(param_1 + 0x28);
      puVar6[4] = uVar11;
    }
    else {
      if (iVar10 != 0xf) {
        iVar10 = 0x10;
      }
      *(int *)(puVar6 + 1) = iVar10;
      *(undefined4 *)(puVar6 + 3) = 0x100;
      *(undefined1 *)(puVar6 + 6) = *(undefined1 *)(param_1 + 0x30);
    }
    *puVar6 = &PTR_FUN_1108cd358;
    puVar6[8] = 0;
    puVar6[7] = 0;
    puVar6[10] = 0;
    puVar6[9] = 0;
    puVar6[0xc] = 0;
    puVar6[0xb] = 0;
    puVar6[0xd] = 0;
    return puVar6;
  }
  if (8 < iVar10 - 3U) {
    plVar7 = *(long **)(param_1 + 0x38);
    (**(code **)(*plVar7 + 0x30))();
    uVar3 = *(undefined1 *)((long)plVar7 + 0x19);
    uVar4 = *(undefined1 *)((long)plVar7 + 0x1a);
    if (*(int *)(param_1 + 8) == 0) {
      bVar9 = 1;
    }
    else {
      bVar9 = *(byte *)((long)plVar7 + 0x1b);
    }
    *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
    *(undefined1 *)(puVar6 + 3) = 0;
    *(undefined1 *)((long)puVar6 + 0x19) = uVar3;
    *(undefined1 *)((long)puVar6 + 0x1a) = uVar4;
    *(byte *)((long)puVar6 + 0x1b) = bVar9 & 1;
    *puVar6 = &PTR_FUN_1108cd358;
    puVar6[7] = plVar7;
    puVar6[0xb] = 0;
    puVar6[10] = 0;
    puVar6[0xd] = 0;
    puVar6[0xc] = 0;
    puVar6[9] = 0;
    puVar6[8] = 0;
    puVar6[0xc] = plVar7;
    return puVar6;
  }
  plVar7 = *(long **)(param_1 + 0x38);
  (**(code **)(*plVar7 + 0x30))();
  plVar8 = *(long **)(param_1 + 0x40);
  (**(code **)(*plVar8 + 0x30))();
  if ((*(byte *)((long)plVar7 + 0x19) & 1) == 0) {
    bVar9 = *(byte *)((long)plVar8 + 0x19);
  }
  else {
    bVar9 = 1;
  }
  if ((*(byte *)((long)plVar7 + 0x1a) & 1) == 0) {
    bVar12 = *(byte *)((long)plVar8 + 0x1a);
  }
  else {
    bVar12 = 1;
  }
  if (*(int *)(param_1 + 8) == 4) {
    if ((*(byte *)((long)plVar7 + 0x1b) & 1) == 0) {
      bVar13 = 0;
      goto LAB_105a09954;
    }
  }
  else if ((*(byte *)((long)plVar7 + 0x1b) & 1) != 0) {
    bVar13 = 1;
    goto LAB_105a09954;
  }
  bVar13 = *(byte *)((long)plVar8 + 0x1b);
LAB_105a09954:
  *(int *)(puVar6 + 1) = *(int *)(param_1 + 8);
  *(undefined1 *)(puVar6 + 3) = 0;
  *(byte *)((long)puVar6 + 0x19) = bVar9 & 1;
  *(byte *)((long)puVar6 + 0x1a) = bVar12 & 1;
  *(byte *)((long)puVar6 + 0x1b) = bVar13 & 1;
  *puVar6 = &PTR_FUN_1108cd358;
  puVar6[7] = plVar7;
  puVar6[8] = plVar8;
  puVar6[9] = 0;
  puVar6[10] = 0;
  puVar6[0xb] = 0;
  puVar6[0xc] = plVar7;
  puVar6[0xd] = plVar8;
  return puVar6;
}



/* Entry: 105a09aa8; end: 105a09af3;  */

long FUN_105a09aa8(int *param_1)

{
  uint *puVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)((long)param_1 - (long)*param_1);
  if ((((6 < *puVar2) && ((ulong)puVar2[3] != 0)) &&
      (8 < *puVar2 && *(char *)((long)param_1 + (ulong)puVar2[3]) == '\x02')) &&
     ((ulong)puVar2[4] != 0)) {
    puVar1 = (uint *)((long)param_1 + (ulong)puVar2[4]);
    return (long)puVar1 + (ulong)*puVar1;
  }
  return 0;
}



/* Entry: 105a09af4; end: 105a09aff; +[SCCreatorSettings table] */

undefined * FUN_105a09af4(void)

{
  return &UNK_10f31d4d5;
}



/* Entry: 105a09b00; end: 105a09e73; +[SCCreatorSettings immutableObjectParse:bufferSize:] */

void FUN_105a09b00(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  int *piVar8;
  undefined *puVar9;
  ushort uVar10;
  ushort *puVar11;
  long lVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar7 = PTR_PTR_1126b4040;
  _objc_alloc(PTR_PTR_1126b4040);
  lVar12 = (long)*piVar1;
  uVar10 = *(ushort *)((long)piVar1 - lVar12);
  if (uVar10 < 5) {
    puVar14 = (undefined *)0x0;
LAB_105a09bbc:
    bVar3 = true;
  }
  else {
    uVar13 = (ulong)((ushort *)((long)piVar1 - lVar12))[2];
    if (uVar13 == 0) {
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar13);
      puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = (long)*piVar1;
      uVar10 = *(ushort *)((long)piVar1 - lVar12);
    }
    if (((uVar10 < 7) || (uVar13 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar12)), uVar13 == 0)) ||
       (uVar10 < 9 || *(char *)((long)piVar1 + uVar13) != '\x01')) goto LAB_105a09bbc;
    bVar3 = *(short *)((long)piVar1 + (8 - lVar12)) == 0;
  }
  piVar8 = piVar1;
  FUN_105a09aa8();
  puVar15 = PTR_PTR_1126c1030;
  if (bVar3) {
    if (piVar8 != (int *)0x0) {
      puVar9 = PTR_PTR_1126c1040;
      _objc_alloc(PTR_PTR_1126c1040);
      puVar17 = (undefined *)0x0;
      puVar16 = (undefined *)0x0;
      lVar12 = (long)*piVar8;
      uVar10 = *(ushort *)((long)piVar8 - lVar12);
      if (4 < uVar10) {
        uVar13 = (ulong)((ushort *)((long)piVar8 - lVar12))[2];
        if (uVar13 == 0) {
          puVar16 = (undefined *)0x0;
        }
        else {
          puVar2 = (uint *)((long)piVar8 + uVar13);
          puVar16 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar2 + (ulong)*puVar2 + 4);
          _objc_retainAutoreleasedReturnValue();
          lVar12 = (long)*piVar8;
          uVar10 = *(ushort *)((long)piVar8 - lVar12);
        }
        if ((uVar10 < 7) || (uVar13 = (ulong)*(ushort *)((long)piVar8 + (6 - lVar12)), uVar13 == 0))
        {
          puVar17 = (undefined *)0x0;
        }
        else {
          puVar2 = (uint *)((long)piVar8 + uVar13);
          puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              (long)puVar2 + (ulong)*puVar2 + 4);
          _objc_retainAutoreleasedReturnValue();
        }
      }
      func_0x00010c00d3e0(puVar9,param_2,puVar16,puVar17);
      _objc_release(puVar17);
      _objc_release(puVar16);
      func_0x00010c11b000(puVar15,param_2,puVar9);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105a09d24;
    }
    puVar15 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126c1038;
    _objc_alloc_init(PTR_PTR_1126c1038);
    func_0x00010c291a40(puVar15,param_2,puVar9);
    _objc_retainAutoreleasedReturnValue();
LAB_105a09d24:
    _objc_release(puVar9);
  }
  puVar11 = (ushort *)((long)piVar1 - (long)*piVar1);
  uVar10 = *puVar11;
  if (uVar10 < 0xb) {
    bVar3 = false;
LAB_105a09d8c:
    bVar5 = false;
    bVar4 = false;
  }
  else {
    if ((ulong)puVar11[5] == 0) {
      bVar3 = false;
    }
    else {
      bVar3 = *(char *)((long)piVar1 + (ulong)puVar11[5]) != '\0';
    }
    if (uVar10 < 0xd) goto LAB_105a09d8c;
    if ((ulong)puVar11[6] == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = *(char *)((long)piVar1 + (ulong)puVar11[6]) != '\0';
    }
    if (uVar10 < 0xf) {
      bVar5 = false;
    }
    else {
      if ((ulong)puVar11[7] == 0) {
        bVar5 = false;
      }
      else {
        bVar5 = *(char *)((long)piVar1 + (ulong)puVar11[7]) != '\0';
      }
      if ((0x10 < uVar10) && ((ulong)puVar11[8] != 0)) {
        bVar6 = *(char *)((long)piVar1 + (ulong)puVar11[8]) != '\0';
        goto LAB_105a09d94;
      }
    }
  }
  bVar6 = false;
LAB_105a09d94:
  func_0x00010c01b600(puVar7,param_2,puVar14,puVar15,bVar3,bVar4,bVar5,bVar6);
  _objc_release(puVar15);
  _objc_release(puVar14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105a09e74; end: 105a09e97; +[SCCreatorSettings objectClassFunctionPointer] */

undefined1  [16] FUN_105a09e74(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x105a09e90;
  auVar1._0_8_ = 0x105a09e88;
  return auVar1;
}



/* Entry: 105a09e98; end: 105a09f93;  */

undefined1 *
FUN_105a09e98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_60;
  undefined *puStack_58;
  
  plVar1 = &lStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_58 = PTR_PTR_1126eb4a8;
    lStack_60 = param_1;
    _objc_msgSendSuper2(&lStack_60,PTR_s_init_1125d9248);
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
      *(undefined1 *)((long)plVar1 + 0x14) = param_5;
      *(undefined1 *)((long)plVar1 + 0x15) = param_6;
      *(undefined1 *)((long)plVar1 + 0x16) = param_7;
      *(undefined1 *)((long)plVar1 + 0x17) = param_8;
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 105a09f94; end: 105a0a36b;  */

void FUN_105a09f94(undefined *param_1)

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
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_1;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar9,&UNK_10f31d4ed);
        if (puVar9 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010bfe5ec0(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar9,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar9;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar9;
            _sqlite3_column_int64(puVar9,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126b4040);
            _sqlite3_column_blob(puVar9,1);
            _sqlite3_column_bytes(puVar9,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar9);
            if (puVar3 == (undefined *)0x0) goto LAB_105a0a2b8;
            puVar9 = PTR_PTR_1126c1058;
            _objc_alloc(PTR_PTR_1126c1058);
            puVar2 = puVar3;
            func_0x00010bfe5ec0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010bf5b280(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010c080120(puVar3);
            puVar6 = puVar3;
            func_0x00010c079480(puVar3);
            puVar7 = puVar3;
            func_0x00010bf2cf60(puVar3);
            puVar8 = puVar3;
            func_0x00010c074c20(puVar3);
            FUN_105a09e98(puVar9,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,puVar8);
            param_1 = puVar3;
            goto LAB_105a0a0bc;
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar9 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126b4040);
      puVar3 = puVar9;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar9);
      if (puVar3 != (undefined *)0x0) {
        puVar9 = PTR_PTR_1126c1058;
        _objc_alloc(PTR_PTR_1126c1058);
        puVar2 = puVar3;
        func_0x00010bfe5ec0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010bf5b280(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010c080120(puVar3);
        puVar6 = puVar3;
        func_0x00010c079480(puVar3);
        puVar7 = puVar3;
        func_0x00010bf2cf60(puVar3);
        puVar8 = puVar3;
        func_0x00010c074c20(puVar3);
        FUN_105a09e98(puVar9,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,puVar8);
        param_1 = puVar3;
LAB_105a0a0bc:
        _objc_release(puVar4);
        _objc_release(puVar2);
        goto LAB_105a0a2c0;
      }
LAB_105a0a2b8:
      param_1 = (undefined *)0x0;
    }
  }
  puVar9 = (undefined *)0x0;
LAB_105a0a2c0:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105a0a36c; end: 105a0a3df;  */

void FUN_105a0a36c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_105a09f94();
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



/* Entry: 105a0a3e0; end: 105a0a667;  */

void FUN_105a0a3e0(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126c1058;
  _objc_retain(param_1);
  _objc_opt_self(puVar1);
  puVar1 = param_1;
  FUN_105a09f94();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 1;
    }
    puVar8 = PTR_PTR_1126c1058;
    _objc_retain(param_1);
    _objc_opt_self(puVar8);
    puVar8 = PTR_PTR_1126c1058;
    if (param_1 == (undefined *)0x0) {
      _objc_opt_new();
      *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    }
    else {
      _objc_alloc();
      puVar2 = param_1;
      func_0x00010bfe5ec0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = param_1;
      func_0x00010bf5b280(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x00010c080120(param_1);
      puVar5 = param_1;
      func_0x00010c079480(param_1);
      puVar6 = param_1;
      func_0x00010bf2cf60(param_1);
      puVar7 = param_1;
      func_0x00010c074c20(param_1);
      FUN_105a09e98(puVar8,0xffffffffffffffff,puVar2,puVar3,puVar4,puVar5,puVar6,puVar7);
      _objc_release(puVar3);
      _objc_release(puVar2);
    }
    *(undefined4 *)(puVar8 + 0x10) = 1;
    _objc_release(param_1);
  }
  else {
    *(undefined4 *)(puVar1 + 0x10) = 2;
    _objc_release(param_1);
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    puVar8 = param_1;
    func_0x00010bfe5ec0(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar8);
    puVar8 = param_1;
    func_0x00010bf5b280(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setProperty_nonatomic_copy(puVar1);
    _objc_release(puVar8);
    puVar8 = param_1;
    func_0x00010c080120();
    puVar1[0x14] = (char)puVar8;
    puVar8 = param_1;
    func_0x00010c079480();
    puVar1[0x15] = (char)puVar8;
    puVar8 = param_1;
    func_0x00010bf2cf60();
    puVar1[0x16] = (char)puVar8;
    puVar8 = param_1;
    func_0x00010c074c20();
    puVar1[0x17] = (char)puVar8;
    _objc_retain(puVar1);
    puVar8 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105a0a668; end: 105a0a6d7;  */

void FUN_105a0a668(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b4040;
    _objc_alloc(PTR_PTR_1126b4040);
    func_0x00010c01b600();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a0a6d8; end: 105a0a707; -[SCCreatorSettingsChangeRequest .cxx_destruct] */

void FUN_105a0a6d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 105a0a708; end: 105a0a713; -[SCCreatorSettingsChangeRequest table] */

undefined * FUN_105a0a708(void)

{
  return &UNK_10f31d4d5;
}



/* Entry: 105a0a714; end: 105a0a75b; -[SCCreatorSettingsChangeRequest createTableWithSQLite:] */

void FUN_105a0a714(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10ddc90ea,0x8d,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 105a0a75c; end: 105a0aae3; -[SCCreatorSettingsChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_105a0a75c(undefined *param_1,undefined8 param_2,long param_3,long param_4)

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
    FUN_105a0a668(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_105a0aae4(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,&UNK_10f31d598);
    if (lVar6 == 0) goto LAB_105a0aa80;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_105a0aa80;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b4040);
    func_0x00010c21c9a0(puVar7);
LAB_105a0aa68:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,&UNK_10f31d536);
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
            _objc_opt_class(PTR_PTR_1126b4040);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105a0aa8c;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_105a0aa8c;
    }
    FUN_105a0a668(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_105a0aae4(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,&UNK_10f31d5dc);
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
        _objc_opt_class(PTR_PTR_1126b4040);
        func_0x00010c21c9a0(puVar7);
        goto LAB_105a0aa68;
      }
    }
LAB_105a0aa80:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_105a0aa8c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105a0aae4; end: 105a0ad93;  */

ulong FUN_105a0aae4(ulong param_1,ulong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined8 uStack_a0;
  char *pcStack_98;
  undefined4 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  _objc_retain(param_2);
  uVar6 = param_2;
  func_0x00010bf5b280(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = &uStack_88;
  uStack_88 = 0;
  uStack_78 = 0x2020000000;
  uStack_70 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x3812000000;
  pcStack_a8 = FUN_105a0aec4;
  uStack_a0 = 0x105a0aed0;
  pcStack_98 = "";
  uStack_90 = 0;
  func_0x00010c0c1280();
  uVar1 = *(uint *)(puStack_80 + 3);
  uVar2 = *(undefined4 *)(puStack_b8 + 6);
  __Block_object_dispose(&uStack_c0,8);
  __Block_object_dispose(&uStack_88,8);
  _objc_release(uVar6);
  uVar6 = param_2;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_105a0ad94(param_1,uVar6);
  uVar8 = param_2;
  func_0x00010c080120();
  uVar9 = param_2;
  func_0x00010c079480(param_2);
  uVar10 = param_2;
  func_0x00010bf2cf60(param_2);
  uVar11 = param_2;
  func_0x00010c074c20(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar3 = *(int *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x30);
  iVar5 = *(int *)(param_1 + 0x28);
  func_0x000100c3b11c(param_1,8,uVar2);
  func_0x0001001ce2e4(param_1,4,uVar7 & 0xffffffff);
  func_0x000100ab13ac(param_1,0x10,uVar11,0);
  func_0x000100ab13ac(param_1,0xe,uVar10,0);
  func_0x000100ab13ac(param_1,0xc,uVar9,0);
  func_0x000100ab13ac(param_1,10,uVar8 & 0xffffffff,0);
  func_0x000100ab13ac(param_1,6,uVar1 & 0xff,0);
  func_0x0001001ce548(param_1,(iVar3 - iVar4) + iVar5);
  _objc_release(uVar6);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105a0ad94; end: 105a0aec3;  */

undefined8 FUN_105a0ad94(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_105a0ae74;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_105a0ae74;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_105a0ae34;
    param_1 = 0;
  }
  else {
LAB_105a0ae34:
    pcVar3 = pcVar1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar4 = pcVar1;
    func_0x00010c08fa60(pcVar1);
    pcVar2 = "";
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
    func_0x0001001cde08(param_1,pcVar2,pcVar4);
  }
  _objc_release(pcVar1);
LAB_105a0ae74:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105a0aec4; end: 105a0aed3;  */

void FUN_105a0aec4(long param_1,long param_2)

{
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  return;
}



/* Entry: 105a0aed4; end: 105a0af2b;  */

void FUN_105a0aed4(long param_1)

{
  long lVar1;
  
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  lVar1 = *(long *)(param_1 + 0x30);
  *(undefined1 *)(lVar1 + 0x46) = 1;
  func_0x0001001ce548(lVar1,(*(int *)(lVar1 + 0x20) - *(int *)(lVar1 + 0x30)) +
                            *(int *)(lVar1 + 0x28));
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)lVar1;
  return;
}



/* Entry: 105a0af2c; end: 105a0b07f;  */

void FUN_105a0af2c(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 2;
  uVar8 = *(ulong *)(param_1 + 0x30);
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010bf85d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar8;
  FUN_105a0ad94(uVar8,uVar4);
  uVar6 = param_2;
  func_0x00010c0b46a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar8;
  FUN_105a0ad94(uVar8,uVar6);
  *(undefined1 *)(uVar8 + 0x46) = 1;
  iVar1 = *(int *)(uVar8 + 0x20);
  iVar2 = *(int *)(uVar8 + 0x30);
  iVar3 = *(int *)(uVar8 + 0x28);
  func_0x0001001ce2e4(uVar8,6,uVar7 & 0xffffffff);
  func_0x0001001ce2e4(uVar8,4,uVar5 & 0xffffffff);
  func_0x0001001ce548(uVar8,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a0b080; end: 105a0b0f3; -[SCDiscoverFeedBadgeLifecycleObserver init] */

undefined1 * FUN_105a0b080(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eb4b0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105a0b0f4; end: 105a0b10f;  */

void FUN_105a0b0f4(void)

{
  _objc_opt_new(PTR_PTR_1126ae820);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a0b110; end: 105a0b117; -[SCDiscoverFeedBadgeLifecycleObserver discoverFeedBadgeHasShownListener] */

undefined8 FUN_105a0b110(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105a0b118; end: 105a0b123; -[SCDiscoverFeedBadgeLifecycleObserver .cxx_destruct] */

void FUN_105a0b118(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a0b124; end: 105a0b163;  */

void FUN_105a0b124(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be02040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105a0b164; end: 105a0b17f; -[SCDiscoverFeedBadgeLifecycleServiceProvider _discoverFeedBadgeLifecycleListener] */

void FUN_105a0b164(void)

{
  _objc_opt_new(PTR_PTR_1126c1068);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a0b180; end: 105a0b18f; -[SCDiscoverFeedBadgeLifecycleServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a0b180(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272d564);
  return;
}



/* Entry: 105a0b190; end: 105a0b29f;  */

void FUN_105a0b190(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  
  puVar1 = PTR_PTR_1126c1070;
  _objc_retain();
  _objc_opt_new(puVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar2 = PTR_PTR_1126c1078;
  func_0x00010bf32da0(PTR_PTR_1126c1078);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0da520(puVar3,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179d40(puVar1,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010058b024();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179da0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  lVar4 = param_1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar5 = lVar4;
  func_0x00010bf48f60();
  _objc_release(lVar4);
  if (lVar5 - 1U < 4) {
    uVar6 = *(undefined4 *)(&UNK_10ddc9180 + (lVar5 - 1U) * 4);
  }
  else {
    uVar6 = 0;
  }
  func_0x00010c180f60(puVar1,param_2,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a0b2a0; end: 105a0b3d3; -[SCDiscoverFeedCardRequestSender initWithUnifiedGRPCClientFactory:feedCardConverter:storiesConfigProvider:feedCardGrapheneMetricsEmitter:notificationPool:] */

undefined1 *
FUN_105a0b2a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126eb4b8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010bdedaa0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar3);
    _objc_retain(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a0b3d4; end: 105a0b917; -[SCDiscoverFeedCardRequestSender initWithGRPCClientFactory:feedCardConverter:storiesConfigProvider:notificationPool:feedCardGrapheneMetricsEmitter:userSession:queuePerformer:circumstanceEngine:interactionHistoryManager:discoverFeedDataFetcher:adsClientInfoProvider:isBloopsEnabled:snapchattersDataFetcher:storiesGrapheneMetricsEmitter:storiesSnapReadReceiptLogger:adConfigProvider:lazyUserRegistrationInfoProvider:lazyBitmojiAvatarProvider:lazyUserBirthdayProvider:networkConnectivityMonitor:rtusClientCacheManager:dpaConfigProvider:locationProvider:] */

undefined8 *
FUN_105a0b3d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  puStack_70 = PTR_PTR_1126eb4b8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x00010bdedaa0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar5);
    _objc_retain(param_4);
    uVar5 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar5);
    _objc_retain(param_5);
    uVar5 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar5);
    _objc_retain(param_7);
    uVar5 = puVar1[4];
    puVar1[4] = param_7;
    _objc_release(uVar5);
    _objc_retain(param_6);
    uVar5 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar5);
    _objc_retain(param_8);
    uVar5 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar5);
    _objc_retain(param_9);
    uVar5 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar5);
    _objc_retain(param_10);
    uVar5 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar5);
    _objc_retain(param_11);
    uVar5 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar5);
    _objc_retain(param_12);
    uVar5 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar5);
    _objc_retain(param_13);
    uVar5 = puVar1[0xb];
    puVar1[0xb] = param_13;
    _objc_release(uVar5);
    _objc_retain(param_14);
    uVar5 = puVar1[0xc];
    puVar1[0xc] = param_14;
    _objc_release(uVar5);
    _objc_retain(param_15);
    uVar5 = puVar1[0xd];
    puVar1[0xd] = param_15;
    _objc_release(uVar5);
    _objc_retain(param_16);
    uVar5 = puVar1[0xe];
    puVar1[0xe] = param_16;
    _objc_release(uVar5);
    _objc_retain(param_17);
    uVar5 = puVar1[0xf];
    puVar1[0xf] = param_17;
    _objc_release(uVar5);
    _objc_retain(param_18);
    uVar5 = puVar1[0x10];
    puVar1[0x10] = param_18;
    _objc_release(uVar5);
    _objc_retain(param_19);
    uVar5 = puVar1[0x11];
    puVar1[0x11] = param_19;
    _objc_release(uVar5);
    _objc_retain(param_20);
    uVar5 = puVar1[0x12];
    puVar1[0x12] = param_20;
    _objc_release(uVar5);
    _objc_retain(param_21);
    uVar5 = puVar1[0x13];
    puVar1[0x13] = param_21;
    _objc_release(uVar5);
    _objc_retain(param_5);
    uVar5 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar5);
    _objc_retain(param_22);
    uVar5 = puVar1[0x14];
    puVar1[0x14] = param_22;
    _objc_release(uVar5);
    _objc_retain(param_23);
    uVar5 = puVar1[0x15];
    puVar1[0x15] = param_23;
    _objc_release(uVar5);
    _objc_retain(param_24);
    uVar5 = puVar1[0x16];
    puVar1[0x16] = param_24;
    _objc_release(uVar5);
    _objc_retain(param_25);
    uVar5 = puVar1[0x18];
    puVar1[0x18] = param_25;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126c1080;
    _objc_alloc();
    uVar5 = param_5;
    func_0x00010c269d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c142560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c03cb40();
    uVar6 = puVar1[0x17];
    puVar1[0x17] = puVar3;
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar5);
  }
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
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



/* Entry: 105a0b918; end: 105a0bb27; -[SCDiscoverFeedCardRequestSender sendRequestWithStoriesRequest:completionQueue:completion:] */

void FUN_105a0b918(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c1088;
  _objc_retain(param_3);
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfa4340(param_3);
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010852d034(puVar1,&PTR____CFConstantStringClassReference_110e15fb8,puVar4,
                      &PTR____CFConstantStringClassReference_110e15fd8,1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010be0ef80(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bdd8d60(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(puVar4);
  _objc_retain(puVar1);
  _objc_retain(puVar2);
  func_0x00010bfc5760(uVar5);
  _objc_release(param_1);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(puVar2);
  return;
}



/* Entry: 105a0bb28; end: 105a0bc2b;  */

void FUN_105a0bb28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  FUN_105a0bc2c(param_2,param_3,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                *(undefined8 *)(param_1 + 0x30));
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    if (lVar1 == 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2,param_3);
    }
    else {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_105a0bdb0;
      puStack_50 = &UNK_11084a9e8;
      _objc_retain(lVar2);
      lStack_38 = lVar2;
      _objc_retain(param_2);
      uStack_48 = param_2;
      _objc_retain(param_3);
      uStack_40 = param_3;
      func_0x00010007380c(lVar1,&puStack_68);
      _objc_release(uStack_40);
      _objc_release(uStack_48);
      _objc_release(lStack_38);
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105a0bc2c; end: 105a0bdaf;  */

void FUN_105a0bc2c(double param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain();
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_retain(param_4);
  func_0x00010bf64de0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(param_4);
  _objc_release(puVar2);
  func_0x00010852cd74(param_5,&PTR____CFConstantStringClassReference_110e15fb8,param_6,0,
                      (long)(param_1 * 1000.0));
  if ((param_2 == 0) || (param_3 != 0)) {
    func_0x00010852d034(param_5,&PTR____CFConstantStringClassReference_110e15fb8,param_6,
                        &PTR____CFConstantStringClassReference_110de9cf8,1);
  }
  else {
    func_0x00010852d034(param_5,&PTR____CFConstantStringClassReference_110e15fb8,param_6,
                        &PTR____CFConstantStringClassReference_110dfaef8,1);
    lVar3 = param_2;
    func_0x00010bfa4600();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf529e0();
    ppuVar1 = &PTR____CFConstantStringClassReference_110dad398;
    if (lVar4 != 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110dad378;
    }
    _objc_retain(ppuVar1);
    _objc_release(lVar3);
    func_0x00010852d2f4(param_5,&PTR____CFConstantStringClassReference_110e15fb8,param_6,ppuVar1,1);
    _objc_release(ppuVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a0bdb0; end: 105a0bdc3;  */

void FUN_105a0bdb0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105a0bdc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105a0bdc4; end: 105a0bed3; -[SCDiscoverFeedCardRequestSender fetchFeedCardsWithRequest:completionQueue:completion:] */

void FUN_105a0bdc4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be60ca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105a0bed4;
  puStack_58 = &UNK_1108cd488;
  uStack_50 = param_4;
  uStack_48 = param_5;
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bfc56a0(uVar1,param_2,param_3,param_1,&puStack_70);
  _objc_release(param_3);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_release(uStack_50);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_5);
  return;
}



/* Entry: 105a0bed4; end: 105a0bfc3;  */

void FUN_105a0bed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x20);
    if (lVar1 == 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_2,param_3);
    }
    else {
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0xc2000000;
      pcStack_58 = FUN_105a0bfc4;
      puStack_50 = &UNK_11084a9e8;
      _objc_retain(lVar2);
      lStack_38 = lVar2;
      _objc_retain(param_2);
      uStack_48 = param_2;
      _objc_retain(param_3);
      uStack_40 = param_3;
      func_0x00010007380c(lVar1,&puStack_68);
      _objc_release(uStack_40);
      _objc_release(uStack_48);
      _objc_release(lStack_38);
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105a0bfc4; end: 105a0bfd7;  */

void FUN_105a0bfc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105a0bfd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105a0bfd8; end: 105a0c1cb; -[SCDiscoverFeedCardRequestSender sendBatchStoryLookupWithCompositeStoryIds:requestSource:completionQueue:completion:] */

void FUN_105a0bfd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar5);
  lVar1 = param_1;
  func_0x00010be0eb80(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdd8d60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec60e0(param_1);
  _objc_initWeak(auStack_68,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bfc56a0(uVar3);
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a0c1cc; end: 105a0c37b;  */

void FUN_105a0c1cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bdc1b60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar3 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c15ebe0(uVar2);
  func_0x00010be56460(lVar3);
  _objc_release(lVar3);
  lVar3 = *(long *)(param_1 + 0x38);
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x40);
    uVar1 = param_2;
    func_0x00010c135700(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,uVar1,uVar2,param_3);
  }
  else {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105a0c37c;
    puStack_78 = &UNK_1108465d0;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar1);
    uStack_58 = uVar1;
    _objc_retain(param_2);
    uStack_70 = param_2;
    _objc_retain(uVar2);
    uStack_68 = uVar2;
    _objc_retain(param_3);
    uStack_60 = param_3;
    func_0x00010007380c(lVar3,&puStack_90);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    uVar1 = uStack_58;
  }
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105a0c37c; end: 105a0c3cf;  */

void FUN_105a0c37c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c135700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))
            (lVar2,uVar1,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a0c3d0; end: 105a0c5c3; -[SCDiscoverFeedCardRequestSender sendSingleStoryLookupWithCompositeStoryId:requestSource:completionQueue:completion:] */

void FUN_105a0c3d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar5);
  lVar1 = param_1;
  func_0x00010be0eba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdd8d60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec60e0(param_1);
  _objc_initWeak(auStack_68,param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010bfc56a0(uVar3);
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a0c5c4; end: 105a0c773;  */

void FUN_105a0c5c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bdc1ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar3 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c15ebe0(uVar2);
  func_0x00010be56460(lVar3);
  _objc_release(lVar3);
  lVar3 = *(long *)(param_1 + 0x38);
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x40);
    uVar1 = param_2;
    func_0x00010c135700(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,uVar1,uVar2,param_3);
  }
  else {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105a0c774;
    puStack_78 = &UNK_1108465d0;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    _objc_retain(uVar1);
    uStack_58 = uVar1;
    _objc_retain(param_2);
    uStack_70 = param_2;
    _objc_retain(uVar2);
    uStack_68 = uVar2;
    _objc_retain(param_3);
    uStack_60 = param_3;
    func_0x00010007380c(lVar3,&puStack_90);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    _objc_release(uStack_70);
    uVar1 = uStack_58;
  }
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105a0c774; end: 105a0c7c7;  */

void FUN_105a0c774(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c135700(uVar1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))
            (lVar2,uVar1,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a0c7c8; end: 105a0ca87; -[SCDiscoverFeedCardRequestSender batchGetFeedCardsByOwnersWithOwnerIds:storyType:limitPerUser:lookbackSeconds:includeReposts:completionQueue:completion:] */

void FUN_105a0c7c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [8];
  undefined4 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_3);
  _objc_retain(in_x6);
  _objc_retain(in_x7);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar7);
  puVar1 = PTR_PTR_1126c1090;
  _objc_opt_new(PTR_PTR_1126c1090);
  puVar2 = PTR_PTR_1126b4ba0;
  _objc_opt_new(PTR_PTR_1126b4ba0);
  puVar3 = puVar2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar2);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  func_0x00010c1ec1a0(puVar2);
  _objc_release(puVar3);
  func_0x00010c17d080(puVar2);
  func_0x00010c17d060(puVar1);
  uVar5 = param_3;
  func_0x00010c0d3c80(param_3);
  func_0x00010c1d7c40(puVar1);
  _objc_release(uVar5);
  func_0x00010c20ddc0(puVar1);
  func_0x00010c1bdac0(puVar1);
  func_0x00010c1c0ea0(puVar1);
  func_0x00010c1abd40(puVar1);
  lVar4 = param_1;
  func_0x00010bdd8d60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec60e0(param_1);
  _objc_initWeak(auStack_78,param_1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uStack_80 = 0x10d;
  _objc_copyWeak(auStack_88,auStack_78);
  _objc_retain(in_x7);
  _objc_retain(in_x6);
  func_0x00010bf16ee0(uVar5);
  _objc_release(uVar5);
  _objc_release(in_x6);
  _objc_release(in_x7);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(lVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(in_x7);
  _objc_release(in_x6);
  _objc_release(param_3);
  return;
}



/* Entry: 105a0ca88; end: 105a0cc1f;  */

void FUN_105a0ca88(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0) {
    lVar1 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar1);
    lVar2 = 0;
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bdc1b40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar1);
    if (lVar2 != 0) {
      func_0x00010c15ebe0(lVar2);
    }
  }
  func_0x00010be56460(lVar1);
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x30);
    if (lVar3 == 0) {
      (**(code **)(lVar1 + 0x10))(lVar1,lVar2,param_3);
    }
    else {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_105a0cc20;
      puStack_60 = &UNK_11084a9e8;
      _objc_retain(lVar1);
      lStack_48 = lVar1;
      _objc_retain(lVar2);
      lStack_58 = lVar2;
      _objc_retain(param_3);
      uStack_50 = param_3;
      func_0x00010007380c(lVar3,&puStack_78);
      _objc_release(uStack_50);
      _objc_release(lStack_58);
      _objc_release(lStack_48);
    }
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 105a0cc20; end: 105a0cc33;  */

void FUN_105a0cc20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105a0cc30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105a0cc34; end: 105a0cf9b; -[SCDiscoverFeedCardRequestSender _feedCardsRequestForBatchStoryWithCompositeStoryIds:] */

void FUN_105a0cc34(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  double dVar15;
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
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126b4b98;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126b4ba0;
  _objc_opt_new();
  puVar3 = puVar2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar2,param_3,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new();
  func_0x00010c26f320();
  func_0x00010c1ec1a0(puVar2,param_3,(long)(param_1 * 1000.0));
  _objc_release(puVar3);
  func_0x00010c17d080(puVar2,param_3,1);
  func_0x00010c17d060(puVar1,param_3,puVar2);
  uVar4 = *(undefined8 *)(param_2 + 0xa0);
  FUN_105a0b190();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c1098;
  _objc_opt_new();
  func_0x00010c180e80();
  puVar5 = PTR_PTR_1126aed60;
  func_0x00010c15fac0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c07a4e0();
  func_0x00010c206a80(puVar3,param_3,puVar6);
  _objc_release(puVar5);
  func_0x00010c18c700(puVar1,param_3,puVar3);
  puVar5 = PTR_PTR_1126c10a0;
  _objc_opt_new();
  func_0x00010c21ab00();
  func_0x00010c203be0(puVar1,param_3,puVar5);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0ec0(puVar1,param_3,puVar6);
  _objc_release(puVar6);
  dVar15 = 0.0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_4);
  puVar11 = &uStack_130;
  lVar7 = param_4;
  func_0x00010bf52a60(param_4,param_3,puVar11,auStack_f0,0x10);
  if (lVar7 != 0) {
    lVar13 = *plStack_120;
    do {
      lVar12 = 0;
      do {
        if (*plStack_120 != lVar13) {
          _objc_enumerationMutation(param_4);
        }
        uVar14 = *(undefined8 *)(lStack_128 + lVar12 * 8);
        puVar6 = PTR_PTR_1126b4ba8;
        _objc_opt_new();
        puVar8 = PTR_PTR_1126b1080;
        _objc_opt_new(PTR_PTR_1126b1080);
        func_0x00010c19af80(puVar6,param_3,puVar8);
        _objc_release(puVar8);
        uVar9 = uVar14;
        func_0x00010bfe5ea0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar6;
        func_0x00010bfa3740(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1a99c0();
        _objc_release(puVar8);
        _objc_release(uVar9);
        func_0x00010bf52680(uVar14);
        puVar8 = puVar6;
        func_0x00010bfa3740();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1843a0();
        _objc_release(puVar8);
        puVar8 = puVar1;
        func_0x00010c0b5680();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(puVar8);
        _objc_release(puVar6);
        lVar12 = lVar12 + 1;
      } while (lVar7 != lVar12);
      puVar11 = &uStack_130;
      lVar7 = param_4;
      func_0x00010bf52a60(param_4,param_3,puVar11,auStack_f0,0x10);
    } while (lVar7 != 0);
  }
  _objc_release(param_4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar1 = PTR_PTR_1126b4b98;
    _objc_retain(puVar11);
    _objc_opt_new(puVar1);
    puVar2 = PTR_PTR_1126b4ba0;
    _objc_opt_new(PTR_PTR_1126b4ba0);
    puVar3 = puVar2;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ebd20(puVar2,param_3,puVar3);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x00010c26f320();
    func_0x00010c1ec1a0(puVar2,param_3,(long)(dVar15 * 1000.0));
    _objc_release(puVar3);
    func_0x00010c17d080(puVar2,param_3,1);
    func_0x00010c17d060(puVar1,param_3,puVar2);
    uVar4 = *(undefined8 *)(param_4 + 0xa0);
    FUN_105a0b190(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126c1098;
    _objc_opt_new(PTR_PTR_1126c1098);
    func_0x00010c180e80();
    puVar5 = PTR_PTR_1126aed60;
    func_0x00010c15fac0(PTR_PTR_1126aed60);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    func_0x00010c07a4e0();
    func_0x00010c206a80(puVar3,param_3,puVar6);
    _objc_release(puVar5);
    func_0x00010c18c700(puVar1,param_3,puVar3);
    puVar5 = PTR_PTR_1126c10a0;
    _objc_opt_new(PTR_PTR_1126c10a0);
    func_0x00010c21ab00();
    func_0x00010c203be0(puVar1,param_3,puVar5);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c0ec0(puVar1,param_3,puVar6);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126b4ba8;
    _objc_opt_new(PTR_PTR_1126b4ba8);
    puVar8 = PTR_PTR_1126b1080;
    _objc_opt_new(PTR_PTR_1126b1080);
    func_0x00010c19af80(puVar6,param_3,puVar8);
    _objc_release(puVar8);
    puVar10 = puVar11;
    func_0x00010bfe5ea0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar6;
    func_0x00010bfa3740(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0();
    _objc_release(puVar8);
    _objc_release(puVar10);
    func_0x00010bf52680(puVar11);
    _objc_release(puVar11);
    puVar8 = puVar6;
    func_0x00010bfa3740(puVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1843a0();
    _objc_release(puVar8);
    puVar8 = puVar1;
    func_0x00010c0b5680(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120();
    _objc_release(puVar8);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(uVar4);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a0cf9c; end: 105a0d22b; -[SCDiscoverFeedCardRequestSender _feedCardsRequestWithCompositeStoryId:] */

void FUN_105a0cf9c(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126b4b98;
  _objc_retain(param_4);
  _objc_opt_new(puVar1);
  puVar2 = PTR_PTR_1126b4ba0;
  _objc_opt_new(PTR_PTR_1126b4ba0);
  puVar3 = puVar2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar2,param_3,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  func_0x00010c1ec1a0(puVar2,param_3,(long)(param_1 * 1000.0));
  _objc_release(puVar3);
  func_0x00010c17d080(puVar2,param_3,1);
  func_0x00010c17d060(puVar1,param_3,puVar2);
  uVar4 = *(undefined8 *)(param_2 + 0xa0);
  FUN_105a0b190(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c1098;
  _objc_opt_new(PTR_PTR_1126c1098);
  func_0x00010c180e80();
  puVar5 = PTR_PTR_1126aed60;
  func_0x00010c15fac0(PTR_PTR_1126aed60);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c07a4e0();
  func_0x00010c206a80(puVar3,param_3,puVar6);
  _objc_release(puVar5);
  func_0x00010c18c700(puVar1,param_3,puVar3);
  puVar5 = PTR_PTR_1126c10a0;
  _objc_opt_new(PTR_PTR_1126c10a0);
  func_0x00010c21ab00();
  func_0x00010c203be0(puVar1,param_3,puVar5);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c0ec0(puVar1,param_3,puVar6);
  _objc_release(puVar6);
  puVar6 = PTR_PTR_1126b4ba8;
  _objc_opt_new(PTR_PTR_1126b4ba8);
  puVar7 = PTR_PTR_1126b1080;
  _objc_opt_new(PTR_PTR_1126b1080);
  func_0x00010c19af80(puVar6,param_3,puVar7);
  _objc_release(puVar7);
  uVar8 = param_4;
  func_0x00010bfe5ea0(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bfa3740(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0();
  _objc_release(puVar7);
  _objc_release(uVar8);
  func_0x00010bf52680(param_4);
  _objc_release(param_4);
  puVar7 = puVar6;
  func_0x00010bfa3740(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1843a0();
  _objc_release(puVar7);
  puVar7 = puVar1;
  func_0x00010c0b5680(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a0d22c; end: 105a0dc93; -[SCDiscoverFeedCardRequestSender _feedsRequestForStoriesRequest:] */

void FUN_105a0d22c(double param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c10a8;
  _objc_opt_new();
  puVar2 = PTR_PTR_1126b4ba0;
  _objc_opt_new();
  puVar3 = puVar2;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ebd20(puVar2,param_3,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x00010c26f320();
  func_0x00010c1ec1a0(puVar2,param_3,(long)(param_1 * 1000.0));
  _objc_release(puVar3);
  func_0x00010c17d080(puVar2,param_3,1);
  uVar17 = param_4;
  func_0x00010c136720(param_4);
  func_0x00010c1ec040(puVar2,param_3,uVar17);
  uVar17 = param_4;
  func_0x00010c27bc40(param_4);
  func_0x00010c21a2a0(puVar2,param_3,uVar17);
  uVar17 = param_4;
  func_0x00010bfd3e20();
  if ((int)uVar17 != 0) {
    puVar3 = PTR_PTR_1126c10b0;
    _objc_opt_new(PTR_PTR_1126c10b0);
    uVar17 = param_4;
    func_0x00010befde60(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar17;
    func_0x00010bf93c80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c195bc0(puVar3,param_3,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar17);
    uVar17 = param_4;
    func_0x00010befde60(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar17;
    func_0x00010c291840();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c149400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2038c0(puVar3,param_3,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar17);
    uVar17 = param_4;
    func_0x00010bf3d0c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar17;
    func_0x00010bf707c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfe6280();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9b80(puVar3,param_3,uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar17);
    uVar17 = param_4;
    func_0x00010befde60(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar17;
    func_0x00010c099080();
    func_0x00010c1bdaa0(puVar3,param_3,uVar4);
    _objc_release(uVar17);
    uVar17 = param_4;
    func_0x00010befde60(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar17;
    func_0x00010bf0ece0();
    func_0x00010c16b9e0(puVar3,param_3,uVar4);
    _objc_release(uVar17);
    uVar17 = param_4;
    func_0x00010befde60(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar17;
    func_0x00010bf9de60();
    func_0x00010c199420(puVar3,param_3,uVar4);
    _objc_release(uVar17);
    uVar17 = param_4;
    func_0x00010befde60(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar17;
    func_0x00010c291840();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c06bae0();
    func_0x00010c1af1a0(puVar3,param_3,uVar5);
    _objc_release(uVar4);
    _objc_release(uVar17);
    uVar17 = param_4;
    func_0x00010befde60(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar17;
    func_0x00010c06a3e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1ae8e0(puVar3,param_3,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar17);
    uVar17 = param_4;
    func_0x00010befde60(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar17;
    func_0x00010bf82d80();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c296d80();
    func_0x00010c18f2e0(puVar3,param_3,uVar5);
    _objc_release(uVar4);
    _objc_release(uVar17);
    uVar17 = param_4;
    func_0x00010befde60(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar17;
    func_0x00010bf82ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c296d80();
    func_0x00010c18f340(puVar3,param_3,uVar5);
    _objc_release(uVar4);
    _objc_release(uVar17);
    puVar6 = PTR_PTR_1126c10b8;
    _objc_opt_new(PTR_PTR_1126c10b8);
    uVar17 = param_4;
    func_0x00010befde60(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar17;
    func_0x00010c291840();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf66020();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c23e260();
    func_0x00010c203020(puVar6,param_3,uVar7);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar17);
    func_0x00010c189f40(puVar3,param_3,puVar6);
    func_0x00010c163ba0(puVar2,param_3,puVar3);
    _objc_release(puVar6);
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126c1070;
  _objc_opt_new();
  uVar17 = param_4;
  func_0x00010bf3d0c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar17;
  func_0x00010bf48c80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf32cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179d40(puVar3,param_3,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar17);
  uVar17 = param_4;
  func_0x00010bf3d0c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar17;
  func_0x00010bf48c80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf32d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c179da0(puVar3,param_3,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar17);
  uVar17 = param_4;
  func_0x00010bf3d0c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar17;
  func_0x00010bf48c80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf48dc0();
  func_0x00010c180f60(puVar3,param_3,uVar5);
  _objc_release(uVar4);
  _objc_release(uVar17);
  uVar17 = param_4;
  func_0x00010bf3d0c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar17;
  func_0x00010bf48c80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf3d140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17cd60(puVar3,param_3,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar17);
  uVar17 = param_4;
  func_0x00010bf3d0c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar17;
  func_0x00010bf48c80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf157a0();
  func_0x00010c16eee0(puVar3,param_3,uVar5);
  _objc_release(uVar4);
  _objc_release(uVar17);
  puVar6 = PTR_PTR_1126c1098;
  _objc_opt_new();
  func_0x00010c180e80();
  uVar17 = param_4;
  func_0x00010bf3d0c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar17;
  func_0x00010c247180();
  func_0x00010c206a80(puVar6,param_3,uVar4);
  _objc_release(uVar17);
  func_0x00010c18c700(puVar1,param_3,puVar6);
  puVar8 = PTR_PTR_1126c10c0;
  _objc_opt_new();
  func_0x00010c166f80();
  func_0x00010c1e0420(puVar1,param_3,puVar8);
  puVar9 = PTR_PTR_1126c10a0;
  _objc_opt_new();
  uVar17 = param_4;
  func_0x00010c27d8a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21ab00(puVar9,param_3,uVar17);
  _objc_release(uVar17);
  uVar17 = param_4;
  func_0x00010bf65f80(param_4);
  func_0x00010c189ec0(puVar9,param_3,uVar17);
  func_0x00010c203be0(puVar1,param_3,puVar9);
  puVar10 = PTR_PTR_1126c10c8;
  _objc_opt_new();
  uVar17 = param_4;
  func_0x00010bf3d0c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar17;
  func_0x00010c068a60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ae2e0(puVar10,param_3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar17);
  uVar17 = param_4;
  func_0x00010bf3d0c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar17;
  func_0x00010c089220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7fc0(puVar10,param_3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar17);
  uVar17 = param_4;
  func_0x00010bf3d0c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar17;
  func_0x00010c121de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e8040(puVar10,param_3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar17);
  func_0x00010c1e84e0(puVar1,param_3,puVar10);
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar17 = param_4;
  func_0x00010bfa43c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar17;
  func_0x00010bf529e0();
  _objc_release(uVar17);
  if (uVar4 != 0) {
    uVar17 = 0;
    do {
      puVar12 = PTR_PTR_1126c10d0;
      _objc_opt_new(PTR_PTR_1126c10d0);
      uVar4 = param_4;
      func_0x00010bfa4340(param_4);
      func_0x00010c19b200(puVar12,param_3,uVar4);
      puVar13 = PTR_PTR_1126c10d8;
      _objc_opt_new();
      uVar4 = param_4;
      func_0x00010bf3cce0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c17cec0(puVar13,param_3,uVar4);
      _objc_release(uVar4);
      uVar4 = param_4;
      func_0x00010c27bc40();
      if ((int)uVar4 == 4) {
LAB_105a0dacc:
        uVar4 = param_4;
        func_0x00010c08a260(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1fdec0(puVar13,param_3,uVar4);
        _objc_release(uVar4);
      }
      else {
        uVar14 = *(undefined8 *)(param_2 + 0x18);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar15 = PTR_PTR_1126c10e0;
        func_0x00010bf0c840(PTR_PTR_1126c10e0);
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar14;
        func_0x00010bf1f320(uVar14,param_3,puVar15);
        _objc_release(puVar15);
        _objc_release(uVar14);
        if ((int)uVar16 != 0) goto LAB_105a0dacc;
      }
      func_0x00010c1fd860(puVar12,param_3,puVar13);
      puVar15 = PTR_PTR_1126c10e8;
      _objc_opt_new(PTR_PTR_1126c10e8);
      uVar4 = param_4;
      func_0x00010c275300(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c217840(puVar15,param_3,uVar4);
      _objc_release(uVar4);
      uVar4 = param_4;
      func_0x00010c0ee340(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d6c20(puVar15,param_3,uVar4);
      _objc_release(uVar4);
      uVar4 = param_4;
      func_0x00010c28ecc0(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21d160(puVar15,param_3,uVar4);
      _objc_release(uVar4);
      uVar4 = param_4;
      func_0x00010bf3d0c0(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf28ca0();
      func_0x00010c175f00(puVar15,param_3,uVar5);
      _objc_release(uVar4);
      func_0x00010c1e3b80(puVar12,param_3,puVar15);
      func_0x00010befa120(puVar11,param_3,puVar12);
      _objc_release(puVar15);
      _objc_release(puVar13);
      _objc_release(puVar12);
      uVar17 = uVar17 + 1;
      uVar4 = param_4;
      func_0x00010bfa43c0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf529e0();
      _objc_release(uVar4);
    } while (uVar17 < uVar5);
  }
  func_0x00010c19b180(puVar1,param_3,puVar11);
  func_0x00010c17d060(puVar1,param_3,puVar2);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a0dc94; end: 105a0dd2b; -[SCDiscoverFeedCardRequestSender _createFeedCardService:] */

void FUN_105a0dc94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105a0dd2c;
  puStack_30 = &UNK_1108cd518;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a0dd2c; end: 105a0de4f;  */

void FUN_105a0dd2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126ae790;
  _objc_alloc(PTR_PTR_1126ae790);
  func_0x00010c021520();
  puVar2 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar2,param_2,20000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar2,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar2,param_2,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf56360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar5 = PTR_PTR_1126c10f0;
  _objc_alloc(PTR_PTR_1126c10f0);
  func_0x00010c058f80();
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105a0de50; end: 105a0df33; -[SCDiscoverFeedCardRequestSender _mockedCallOptionsBuilder] */

void FUN_105a0de50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110e15f58;
  ppuStack_40 = &PTR____CFConstantStringClassReference_110e15f78;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&ppuStack_40,&ppuStack_48,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae748;
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010befab00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bef9140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_38) {
    ___stack_chk_fail();
    lStack_a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    ppuStack_d8 = &PTR____CFConstantStringClassReference_110de35b8;
    uVar5 = *(undefined8 *)(puVar1 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126c10e0;
    func_0x00010bfa37c0(PTR_PTR_1126c10e0);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c25d300(uVar5,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuStack_d0 = &PTR____CFConstantStringClassReference_110e15f98;
    puVar3 = puVar1;
    uStack_c0 = uVar6;
    func_0x00010be90840();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    ppuStack_c8 = &PTR____CFConstantStringClassReference_110db8558;
    puStack_b8 = puVar4;
    func_0x00010be913e0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_b0 = puVar1;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_c0,&ppuStack_d8,3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(uVar6);
    _objc_release(puVar2);
    _objc_release(uVar5);
    puVar1 = PTR_PTR_1126ae748;
    func_0x00010bf24820();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010befab00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bef9140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar7);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a8) {
      ___stack_chk_fail();
      puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
      func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      func_0x00010c09e220();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105a0df34; end: 105a0e0fb; -[SCDiscoverFeedCardRequestSender _callOptionsBuilder] */

void FUN_105a0df34(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_88 = &PTR____CFConstantStringClassReference_110de35b8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c10e0;
  func_0x00010bfa37c0(PTR_PTR_1126c10e0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c25d300(uVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_80 = &PTR____CFConstantStringClassReference_110e15f98;
  lVar4 = param_1;
  uStack_70 = uVar3;
  func_0x00010be90840();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  ppuStack_78 = &PTR____CFConstantStringClassReference_110db8558;
  lStack_68 = lVar5;
  func_0x00010be913e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_60 = param_1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&uStack_70,&ppuStack_88,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126ae748;
  func_0x00010bf24820();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar2;
  func_0x00010befab00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010bef9140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    puVar2 = PTR__OBJC_CLASS___NSLocale_1126af788;
    func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar2;
    func_0x00010c09e220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105a0e0fc; end: 105a0e147; -[SCDiscoverFeedCardRequestSender _requestLocaleIdentifier] */

void FUN_105a0e0fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010bf5f320(PTR__OBJC_CLASS___NSLocale_1126af788);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c09e220();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a0e148; end: 105a0e14b; -[SCDiscoverFeedCardRequestSender _requestAcceptedLanguagesTag] */

void FUN_105a0e148(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSLocale_1126af788;
  func_0x00010c106cc0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010bf529e0();
  if (puVar1 < (undefined *)0xb) {
    puVar1 = puVar2;
    func_0x00010bf51e00(puVar2);
  }
  else {
    puVar3 = puVar2;
    func_0x00010c25e980(puVar2,param_2,0,10);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    func_0x00010bf51e00();
    _objc_release(puVar3);
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a0e14c; end: 105a0e14f; -[SCDiscoverFeedCardRequestSender _submitInternalRequestNotificationWithText:] */

void FUN_105a0e14c(void)

{
  return;
}



/* Entry: 105a0e150; end: 105a0e1af; -[SCDiscoverFeedCardRequestSender _presentStoriesRequestNotificationWithText:] */

void FUN_105a0e150(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126afde0;
  func_0x00010bf54760(PTR_PTR_1126afde0,param_2,param_3,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a0e1b0; end: 105a0e237; -[SCDiscoverFeedCardRequestSender _logNetworkMetricsWithEndpoint:requestSource:success:responseSize:] */

void FUN_105a0e1b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a6100();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a0e238; end: 105a0e31f; -[SCDiscoverFeedCardRequestSender sendFeedCardRequestWithStoriesRequest:query:completionQueue:completion:] */

void FUN_105a0e238(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar2 = param_4;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1138;
  _objc_opt_class(PTR_PTR_1126b1138);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  func_0x00010be9f160(param_1);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a0e320; end: 105a0e637; -[SCDiscoverFeedCardRequestSender _sendFeedCardRequestWithStoriesRequest:query:parameters:completionQueue:completion:] */

void FUN_105a0e320(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_68,param_1);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105a0e638;
  puStack_a0 = &UNK_11086e6e8;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  uStack_98 = param_3;
  _objc_retain(param_4);
  uStack_90 = param_4;
  _objc_retain(param_5);
  lStack_88 = param_5;
  _objc_retain(param_6);
  uStack_80 = param_6;
  _objc_retain(param_7);
  ppuVar1 = &puStack_b8;
  uStack_78 = param_7;
  _objc_retainBlock(ppuVar1);
  lVar2 = param_5;
  func_0x00010c0f1e60();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  if (lVar2 == 5) {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ceda0(PTR_PTR_1126c10f8);
    uVar4 = uVar3;
    func_0x00010c15bfa0();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    if ((int)uVar4 == 0) {
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c11de00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfcac60(uVar3);
    }
    else {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c11de00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfcac80(uVar3);
    }
  }
  else {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf68b00(PTR_PTR_1126c10f8);
    uVar4 = uVar3;
    func_0x00010c15bfa0();
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    if ((int)uVar4 == 0) {
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c11de00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfcac60(uVar3);
    }
    else {
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c11de00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfcac80(uVar3);
    }
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(ppuVar1);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(lStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a0e638; end: 105a0e693;  */

void FUN_105a0e638(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010be9f180();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a0e694; end: 105a0ef87; -[SCDiscoverFeedCardRequestSender _sendFeedCardRequestWithStoriesRequest:query:parameters:completionQueue:completion:interactionHistoryArray:] */

void FUN_105a0e694(long param_1,undefined8 param_2,long param_3,ulong param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined **ppuVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  double dVar29;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  code *pcStack_2a8;
  undefined *puStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  undefined8 uStack_288;
  
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar27 = param_1 + 200;
  _objc_loadWeakRetained();
  _objc_release();
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + 0x40);
  uVar26 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = param_4;
  func_0x00010c11d960(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar21 = param_8;
  func_0x000107bf2ff8(param_8,lVar27,uVar24,uVar26,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c1ebd20(param_3);
  lVar4 = param_5;
  func_0x00010c0f1c40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    lVar5 = param_3;
    func_0x00010c135700(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17cb60(param_3);
    _objc_release(lVar5);
  }
  else {
    func_0x00010c17cb60(param_3);
  }
  _objc_release(lVar4);
  uVar6 = *(ulong *)(param_1 + 0x90);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010bfd46e0();
  _objc_release(uVar6);
  uVar26 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar26);
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar26;
  func_0x00010bf1f3c0();
  _objc_release(uVar26);
  func_0x00010be0a040(param_1);
  uVar26 = *(undefined8 *)(param_1 + 0xb8);
  lVar4 = param_5;
  func_0x00010bfa43a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc9500(uVar26);
  _objc_release(lVar4);
  iVar2 = (int)*(undefined8 *)(param_1 + 0xb8);
  func_0x00010c2311a0();
  uVar26 = *(undefined8 *)(param_1 + 0xb8);
  func_0x00010bfc9520();
  _objc_retainAutoreleasedReturnValue();
  if (iVar2 == 0) {
    uVar16 = 0;
  }
  else {
    uVar16 = uVar21;
    func_0x00010bf51e00();
  }
  uVar7 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar7;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar17;
  func_0x00010beed420();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x68);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar25 = uVar8;
  func_0x00010c0d42e0();
  uVar9 = uVar16;
  func_0x0001079a5778(uVar16,uVar3 & 0xffffffff,uVar18,uVar25,(uint)uVar24 ^ 1,
                      *(undefined8 *)(param_1 + 0xa0),uVar26,*(undefined8 *)(param_1 + 0xc0));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(uVar18);
  _objc_release(uVar17);
  _objc_release(uVar7);
  if (iVar2 != 0) {
    _objc_release(uVar16);
  }
  func_0x00010c17cd40(param_3);
  lVar4 = param_5;
  func_0x00010bfa4380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    puVar10 = PTR_PTR_1126c1100;
    _objc_opt_new(PTR_PTR_1126c1100);
    lVar11 = param_5;
    func_0x00010bfa4380();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar11;
    func_0x00010bf52a60();
    lVar5 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar28 = 0;
      do {
        if (lRam0000000000000000 != lVar5) {
          _objc_enumerationMutation(lVar11);
        }
        uVar24 = *(undefined8 *)(lVar28 * 8);
        lVar12 = param_5;
        func_0x00010bfa4380(param_5);
        _objc_retainAutoreleasedReturnValue();
        lVar13 = lVar12;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067fc0();
        func_0x00010c067fc0(uVar24);
        func_0x00010c1adcc0(puVar10);
        _objc_release(lVar13);
        _objc_release(lVar12);
        lVar28 = lVar28 + 1;
      } while (lVar4 != lVar28);
      lVar4 = lVar11;
      func_0x00010bf52a60();
    }
    _objc_release(lVar11);
    func_0x00010c1cf4a0(param_3);
    _objc_release(puVar10);
  }
  lVar4 = param_5;
  func_0x00010c0f1e60();
  if ((lVar4 - 2U < 8) && ((0x87U >> (ulong)((uint)(lVar4 - 2U) & 0x1f) & 1) != 0)) {
    func_0x00010c1ec040(param_3);
  }
  puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
  _objc_opt_new();
  func_0x00010c26f320();
  func_0x00010c1ec1a0(param_3);
  func_0x00010c1d64a0(param_3);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x40);
  func_0x0001005929c0();
  if (iVar2 != 0) {
    puVar14 = PTR_PTR_1126c1108;
    _objc_opt_new(PTR_PTR_1126c1108);
    puVar15 = PTR_PTR_1126b7708;
    _objc_alloc_init(PTR_PTR_1126b7708);
    func_0x00010c19b0e0(puVar14);
    func_0x00010c19b160(param_3);
    _objc_release(puVar15);
    _objc_release(puVar14);
  }
  uVar3 = param_4;
  func_0x00010846e5b0(param_4,*(undefined8 *)(param_1 + 0x18));
  if ((uVar3 & 1) == 0) {
    lVar4 = param_5;
    func_0x00010bfa43a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf529e0();
    if (lVar5 != 0) {
      lVar5 = param_5;
      func_0x00010bfa43a0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      _objc_release(lVar11);
      _objc_release(lVar5);
    }
    _objc_release(lVar4);
  }
  uVar16 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar16;
  func_0x00010c118120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar16);
  uVar17 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + 0xb0);
  func_0x00010c269d40(uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar24;
  func_0x000108487704(uVar24,uVar17,0,uVar18);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar18);
  _objc_release(uVar17);
  func_0x00010c166000(param_3);
  uVar3 = param_1 + 200;
  _objc_loadWeakRetained();
  uVar6 = uVar3;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar6;
  _objc_opt_respondsToSelector();
  if ((uVar19 & 1) != 0) {
    func_0x00010bf82820(uVar6);
  }
  func_0x000107bf38a4(param_8,*(undefined8 *)(param_1 + 0x50),uVar21);
  uVar17 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain();
  uVar25 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar25);
  func_0x00010c27bc40();
  lVar4 = param_1;
  func_0x00010bdd8d60();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010be0ef80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bec60e0(param_1);
  puVar15 = PTR_PTR_1126c1088;
  _objc_alloc_init();
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfa4340(param_3);
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = puVar14;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  ppuVar22 = &PTR____CFConstantStringClassReference_110e15fb8;
  func_0x00010852d034(puVar15,&PTR____CFConstantStringClassReference_110e15fb8,puVar20,
                      &PTR____CFConstantStringClassReference_110e15fd8,1);
  uVar18 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  dVar29 = 1.60807493534087e-314;
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(puVar20);
  _objc_retain(puVar15);
  _objc_retain(puVar10);
  lVar11 = lVar5;
  func_0x00010bfc5760(uVar18);
  _objc_release(uVar18);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(puVar20);
  _objc_release(puVar15);
  _objc_release(puVar10);
  _objc_release(puVar20);
  _objc_release(puVar15);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar25);
  _objc_release(uVar17);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(puVar10);
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar16);
  _objc_release(uVar24);
  _objc_release(uVar9);
  _objc_release(uVar26);
  _objc_release(uVar21);
  _objc_release(lVar27);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar23) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar22);
  _objc_retain(lVar11);
  FUN_105a0bc2c(ppuVar22,lVar11,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x28),
                *(undefined8 *)(param_3 + 0x30));
  puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(puVar10);
  uVar21 = *(undefined8 *)(param_3 + 0x38);
  func_0x00010c269d40(uVar21);
  _objc_retainAutoreleasedReturnValue();
  dVar29 = dVar29 * 1000.0;
  func_0x00010c0a60a0(dVar29);
  _objc_release(uVar21);
  uVar21 = *(undefined8 *)(param_3 + 0x38);
  func_0x00010c269d40(uVar21);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a60c0();
  _objc_release(uVar21);
  if (lVar11 != 0) {
    uVar21 = *(undefined8 *)(param_3 + 0x38);
    func_0x00010c269d40(uVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ec40(lVar11);
    func_0x00010c0a60e0(uVar21);
    _objc_release(uVar21);
  }
  if (*(long *)(param_3 + 0x50) != 0) {
    puVar10 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    bVar1 = *(byte *)(param_3 + 0x59);
    uVar24 = *(undefined8 *)(param_3 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar21 = uVar24;
    if ((bVar1 & 1) == 0) {
      func_0x00010bdc1bc0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bdc1b80();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar26 = uVar21;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar21);
    _objc_release(uVar24);
    puVar14 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(puVar14);
    uVar21 = *(undefined8 *)(param_3 + 0x38);
    func_0x00010c269d40(uVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a6080(dVar29 * 1000.0);
    _objc_release(uVar21);
    uVar21 = *(undefined8 *)(param_3 + 0x38);
    func_0x00010c269d40(uVar21);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60(uVar26);
    func_0x00010c0a6120(uVar21);
    _objc_release(uVar21);
    lVar27 = *(long *)(param_3 + 0x48);
    if (lVar27 == 0) {
      (**(code **)(*(long *)(param_3 + 0x50) + 0x10))(*(long *)(param_3 + 0x50),uVar26,lVar11);
    }
    else {
      puStack_2b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_2b0 = 0xc2000000;
      pcStack_2a8 = FUN_105a0f27c;
      puStack_2a0 = &UNK_11084a9e8;
      uVar21 = *(undefined8 *)(param_3 + 0x50);
      _objc_retain(uVar21);
      uStack_288 = uVar21;
      _objc_retain(uVar26);
      uStack_298 = uVar26;
      _objc_retain(lVar11);
      lStack_290 = lVar11;
      func_0x00010007380c(lVar27,&puStack_2b8);
      _objc_release(lStack_290);
      _objc_release(uStack_298);
      _objc_release(uStack_288);
    }
    _objc_release(uVar26);
    _objc_release(puVar10);
  }
  _objc_release(lVar11);
  _objc_release(ppuVar22);
  return;
}



/* Entry: 105a0ef88; end: 105a0f27b;  */

void FUN_105a0ef88(double param_1,long param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  FUN_105a0bc2c(param_3,param_4,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28),
                *(undefined8 *)(param_2 + 0x30));
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 * 1000.0;
  func_0x00010c0a60a0(param_1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a60c0();
  _objc_release(uVar3);
  if (param_4 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf3ec40(param_4);
    func_0x00010c0a60e0(uVar3);
    _objc_release(uVar3);
  }
  if (*(long *)(param_2 + 0x50) != 0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    _objc_opt_new(PTR__OBJC_CLASS___NSDate_1126ae770);
    bVar1 = *(byte *)(param_2 + 0x59);
    uVar4 = *(undefined8 *)(param_2 + 0x40);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    if ((bVar1 & 1) == 0) {
      func_0x00010bdc1bc0();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010bdc1b80();
      _objc_retainAutoreleasedReturnValue();
    }
    uVar5 = uVar3;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar4);
    puVar6 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f380();
    _objc_release(puVar6);
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a6080(param_1 * 1000.0);
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60(uVar5);
    func_0x00010c0a6120(uVar3);
    _objc_release(uVar3);
    lVar7 = *(long *)(param_2 + 0x48);
    if (lVar7 == 0) {
      (**(code **)(*(long *)(param_2 + 0x50) + 0x10))(*(long *)(param_2 + 0x50),uVar5,param_4);
    }
    else {
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_105a0f27c;
      puStack_80 = &UNK_11084a9e8;
      uVar3 = *(undefined8 *)(param_2 + 0x50);
      _objc_retain(uVar3);
      uStack_68 = uVar3;
      _objc_retain(uVar5);
      uStack_78 = uVar5;
      _objc_retain(param_4);
      lStack_70 = param_4;
      func_0x00010007380c(lVar7,&puStack_98);
      _objc_release(lStack_70);
      _objc_release(uStack_78);
      _objc_release(uStack_68);
    }
    _objc_release(uVar5);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a0f27c; end: 105a0f28f;  */

void FUN_105a0f27c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105a0f28c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105a0f290; end: 105a0f38b; -[SCDiscoverFeedCardRequestSender _endpointSourceForParameters:] */

undefined8 FUN_105a0f290(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0f1e60();
  if ((lVar1 != 5) && (lVar1 = param_3, func_0x00010c0f1e60(), lVar1 != 3)) {
    lVar1 = param_3;
    func_0x00010c0f1e60();
    uVar4 = 8;
    if (lVar1 != 9) {
      uVar4 = 0;
    }
    goto LAB_105a0f370;
  }
  lVar1 = param_3;
  func_0x00010bfa43a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c067ec0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar4 = 2;
  iVar5 = (int)lVar3;
  if (iVar5 < 0x107) {
    if (iVar5 == 2) {
      uVar4 = 0;
      goto LAB_105a0f370;
    }
    if (iVar5 == 0x102) goto LAB_105a0f370;
  }
  else {
    if (iVar5 == 0x10b) {
      uVar4 = 0xb;
      goto LAB_105a0f370;
    }
    if (iVar5 == 0x109) goto LAB_105a0f370;
    if (iVar5 == 0x107) {
      uVar4 = 10;
      goto LAB_105a0f370;
    }
  }
  uVar4 = 5;
LAB_105a0f370:
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 105a0f38c; end: 105a0f3a3; -[SCDiscoverFeedCardRequestSender queryCoordinator] */

void FUN_105a0f38c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 200);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


