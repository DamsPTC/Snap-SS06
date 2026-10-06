/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108739be0; end: 108739beb;  */

undefined ** FUN_108739be0(void)

{
  return &PTR_DAT_110a69f28;
}



/* Entry: 108739bec; end: 108739c53;  */

void FUN_108739bec(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 108739c54; end: 108739c67;  */

void FUN_108739c54(void)

{
  func_0x000108739c28();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108739c68; end: 108739c9b;  */

void FUN_108739c68(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010873a6d8();
  func_0x00010873a6e4(&PTR_SUB_110a69e68);
  if (extraout_x8 != 0) {
    do {
      func_0x00010873a664();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 108739c9c; end: 108739ce3;  */

void FUN_108739c9c(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_SUB_110a69e68;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010873a664(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 108739ce4; end: 108739d8b;  */

void FUN_108739ce4(long param_1)

{
  long lVar1;
  long alStack_78 [2];
  undefined1 auStack_68 [24];
  undefined4 uStack_50;
  undefined1 auStack_48 [40];
  
  FUN_108739dc4(alStack_78,param_1 + 8);
  if (alStack_78[0] != 0) {
    lVar1 = alStack_78[0];
    FUN_108739798();
    auStack_68[0] = (((uint)lVar1 ^ 0xffffffff) & 0x101) != 0;
    uStack_50 = 0;
    FUN_108739e30(auStack_48,auStack_68);
    FUN_108881c74(alStack_78[0],auStack_48);
    func_0x000108739e00(auStack_48);
    FUN_108739ed8(auStack_68);
  }
  func_0x000107c29764(alStack_78);
  return;
}



/* Entry: 108739d8c; end: 108739db7;  */

void FUN_108739d8c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010873a6ac(param_2,param_1,&PTR_DAT_110a69ec8);
  func_0x00010873a68c();
  return;
}



/* Entry: 108739db8; end: 108739dc3;  */

undefined ** FUN_108739db8(void)

{
  return &PTR_DAT_110a69ec8;
}



/* Entry: 108739dc4; end: 108739e2f;  */

void FUN_108739dc4(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 108739e30; end: 108739e4b;  */

void FUN_108739e30(long param_1)

{
  FUN_108739e4c();
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



/* Entry: 108739e4c; end: 108739e7b;  */

undefined1 * FUN_108739e4c(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  FUN_108739e7c();
  return param_1;
}



/* Entry: 108739e7c; end: 108739ed7;  */

void FUN_108739e7c(long param_1,long param_2)

{
  uint uVar1;
  long lStack_38;
  
  FUN_108739ed8();
  uVar1 = *(uint *)(param_2 + 0x18);
  if (uVar1 != 0xffffffff) {
    lStack_38 = param_1;
    (*(code *)(&PTR_DAT_110a69f00)[uVar1])(&lStack_38,param_2);
    *(uint *)(param_1 + 0x18) = uVar1;
  }
  return;
}



/* Entry: 108739ed8; end: 108739f2b;  */

void FUN_108739ed8(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110a69ed8)[*(uint *)(param_1 + 0x18)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 108739f2c; end: 108739fa3;  */

void FUN_108739f2c(void)

{
  return;
}



/* Entry: 108739fa4; end: 108739fdf;  */

long FUN_108739fa4(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) == param_1) {
    uVar1 = 0x20;
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) {
      return param_1;
    }
    uVar1 = 0x28;
  }
  func_0x00010873a6c4(uVar1);
  return param_1;
}



/* Entry: 108739fe0; end: 10873a067;  */

void FUN_108739fe0(undefined1 *param_1,uint param_2,uint param_3)

{
  func_0x00010b5caea8(1);
  FUN_10873a068();
  param_2 = param_2 & 0xffff;
  FUN_10873a068();
  if (param_2 < 0x101) {
    param_2 = 0;
  }
  if ((param_2 & 1) == 0) {
    param_3 = param_3 & 0xffff;
    if (param_3 < 0x101) {
      param_3 = 0;
    }
    if ((param_3 & 1) == 0) {
      *param_1 = 0;
    }
    else {
      *param_1 = 1;
    }
  }
  else {
    *param_1 = 1;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 10873a068; end: 10873a0bf;  */

uint FUN_10873a068(byte *param_1)

{
  bool bVar1;
  uint uVar2;
  
  bVar1 = param_1[0x20] == 1 && *(int *)(param_1 + 0x18) == 0;
  if (bVar1) {
    func_0x00010873a0a8();
    uVar2 = (uint)*param_1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2 | (uint)bVar1 << 8;
}



/* Entry: 10873a0c0; end: 10873a0c7;  */

void FUN_10873a0c0(void)

{
  return;
}



/* Entry: 10873a0c8; end: 10873a0f7;  */

void FUN_10873a0c8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110a69f48;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10873a0f8; end: 10873a11b;  */

void FUN_10873a0f8(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a69f48;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10873a11c; end: 10873a18f;  */

void FUN_10873a11c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [32];
  
  (**(code **)(param_2 + 8))(auStack_40,param_3,param_4);
  FUN_108739e30(param_1,auStack_40);
  FUN_108739ed8(auStack_40);
  return;
}



/* Entry: 10873a190; end: 10873a19b;  */

undefined ** FUN_10873a190(void)

{
  return &PTR_DAT_110a69fa8;
}



/* Entry: 10873a19c; end: 10873a253;  */

undefined8 * FUN_10873a19c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a69d10;
  FUN_1086cce20(param_1 + 1);
  return param_1;
}



/* Entry: 10873a254; end: 10873a26b;  */

undefined8 * FUN_10873a254(undefined8 *param_1)

{
  if (*(int *)(param_1 + 3) == 0) {
    return param_1;
  }
  func_0x00010563ab98();
  *param_1 = FUN_10873a298;
  FUN_10873a2a0(param_1 + 1);
  return param_1;
}



/* Entry: 10873a26c; end: 10873a297;  */

undefined8 * FUN_10873a26c(undefined8 *param_1)

{
  *param_1 = FUN_10873a298;
  FUN_10873a2a0(param_1 + 1);
  return param_1;
}



/* Entry: 10873a298; end: 10873a29f;  */

void FUN_10873a298(long param_1)

{
  if (*(long **)(param_1 + 0x28) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000104c01bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x28) + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x000104c00420();
  return;
}



/* Entry: 10873a2a0; end: 10873a2cb;  */

undefined8 * FUN_10873a2a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a69fd8;
  func_0x000105302f48(param_1 + 1);
  return param_1;
}



/* Entry: 10873a2cc; end: 10873a2d3;  */

long * FUN_10873a2cc(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 8);
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 == plVar1) {
    lVar3 = 0x20;
  }
  else {
    if (plVar2 == (long *)0x0) {
      return plVar1;
    }
    lVar3 = 0x28;
  }
  (**(code **)(*plVar2 + lVar3))();
  return plVar1;
}



/* Entry: 10873a2d4; end: 10873a2ef;  */

void FUN_10873a2d4(undefined8 param_1,long param_2)

{
  FUN_10873a2a0(param_1,param_2 + 8);
  return;
}



/* Entry: 10873a2f0; end: 10873a373;  */

undefined1 * FUN_10873a2f0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  puVar3 = auStack_40;
  func_0x00010873a64c();
  uStack_28 = extraout_x8;
  FUN_10873a374(auStack_40,1);
  FUN_10873a3c8(lStack_30);
  lVar1 = lStack_30;
  lStack_30 = 0;
  *param_1 = lVar1 + 0x18;
  param_1[1] = lVar1;
  func_0x00010873a478();
  func_0x00010873a62c(uStack_28);
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  func_0x00010873a478();
  func_0x00010873a65c();
  *(undefined8 *)(puVar3 + 8) = param_3;
  puVar2 = puVar3;
  FUN_10873a39c();
  *(undefined1 **)(puVar3 + 0x10) = puVar2;
  return puVar3;
}



/* Entry: 10873a374; end: 10873a39b;  */

long FUN_10873a374(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10873a39c();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10873a39c; end: 10873a3c7;  */

undefined8 * FUN_10873a39c(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x555555555555556) {
    puVar1 = (undefined8 *)(param_2 * 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a6a000;
  FUN_10873a420(param_1 + 3);
  return param_1;
}



/* Entry: 10873a3c8; end: 10873a3f7;  */

undefined8 * FUN_10873a3c8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110a6a000;
  FUN_10873a420(param_1 + 3);
  return param_1;
}



/* Entry: 10873a3f8; end: 10873a3fb;  */

void FUN_10873a3f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6a000;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10873a3fc; end: 10873a40f;  */

void FUN_10873a3fc(void)

{
  FUN_10873a46c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10873a410; end: 10873a41f;  */

void FUN_10873a410(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010873a418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 8))();
  return;
}



/* Entry: 10873a420; end: 10873a46b;  */

undefined8 * FUN_10873a420(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  *param_1 = &PTR_FUN_110a69d10;
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  uStack_30 = 0;
  uStack_28 = 0;
  FUN_1086cce20(&uStack_30);
  return param_1;
}



/* Entry: 10873a46c; end: 10873a487;  */

void FUN_10873a46c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6a000;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10873a488; end: 10873a4af;  */

long FUN_10873a488(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10873a4b0();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10873a4b0; end: 10873a4df;  */

void FUN_10873a4b0(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x186186186186187) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0xa8);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_110a6a050;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10873a4e0; end: 10873a4e3;  */

void FUN_10873a4e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6a050;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10873a4e4; end: 10873a4f7;  */

void FUN_10873a4e4(void)

{
  func_0x00010873a504();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10873a4f8; end: 10873a513;  */

long FUN_10873a4f8(long param_1)

{
  FUN_10873a558(param_1 + 0x90);
  if (*(char *)(param_1 + 0x80) == '\x01') {
    (*(code *)**(undefined8 **)(param_1 + 0x58))();
  }
  if (*(char *)(param_1 + 0x38) == '\x01') {
    FUN_108739ed8(param_1 + 0x18);
  }
  return param_1 + 0x18;
}



/* Entry: 10873a514; end: 10873a557;  */

long FUN_10873a514(long param_1)

{
  FUN_10873a558(param_1 + 0x78);
  if (*(char *)(param_1 + 0x68) == '\x01') {
    (*(code *)**(undefined8 **)(param_1 + 0x40))();
  }
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_108739ed8(param_1);
  }
  return param_1;
}



/* Entry: 10873a558; end: 10873a583;  */

undefined8 * FUN_10873a558(undefined8 *param_1)

{
  FUN_10873a584(param_1,*param_1,param_1[1]);
  if (param_1[2] != 0) {
    __ZdlPv(*param_1);
  }
  return param_1;
}



/* Entry: 10873a584; end: 10873a61b;  */

void FUN_10873a584(undefined8 param_1,long param_2,long param_3)

{
  param_2 = param_2 + 8;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    func_0x00010873a5b4(param_2);
    param_2 = param_2 + 0x28;
  }
  return;
}



/* Entry: 10873a61c; end: 10873a6f7;  */

void FUN_10873a61c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10873a6f8; end: 10873a76b;  */

void FUN_10873a6f8(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  lStack_50 = param_1;
  func_0x000107c288a8(&uStack_48,param_1 + 0x38);
  lStack_40 = lStack_50;
  uStack_38 = uStack_48;
  uStack_48 = 0;
  FUN_10873d04c(auStack_58,&lStack_40,uVar1);
  func_0x000107c288ac(&uStack_38);
  func_0x000107c288ac(&uStack_48);
  func_0x00010873f850();
  return;
}



/* Entry: 10873a76c; end: 10873ab6b;  */

void FUN_10873a76c(void)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined1 in_ZR;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint extraout_w8;
  code *extraout_x8;
  long lVar7;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long extraout_x8_03;
  code *extraout_x8_04;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  uint extraout_w10_02;
  uint extraout_w10_03;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar8;
  long unaff_x20;
  long *plVar9;
  undefined8 unaff_x21;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined8 *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x00010873faac();
  puVar4 = (undefined8 *)0x88;
  __Znwm();
  *puVar4 = FUN_10873df68;
  puVar4[1] = FUN_10873e0f8;
  puVar4[0xf] = unaff_x20;
  func_0x00010873d744(puVar4 + 2);
  FUN_10873ab6c();
  if (*(long *)(unaff_x20 + 0x130) == 0) {
    puStack_a0 = (undefined8 *)0x0;
    puStack_98 = (undefined8 *)0x0;
    uStack_90 = 0;
    FUN_10873abb0(puVar4 + 2,&puStack_a0);
    func_0x000107c278a8(&puStack_a0);
  }
  else {
    puVar4[7] = 0;
    func_0x000107c28258();
    puVar4[8] = unaff_x21;
    *(undefined1 *)(puVar4 + 9) = 1;
    puVar4[5] = 1;
    puVar5 = (undefined8 *)0x30;
    __Znwm();
    plVar11 = puVar5 + 1;
    *plVar11 = 0;
    puVar5[2] = 0;
    puVar12 = puVar5 + 3;
    *puVar12 = 0;
    puVar10 = puVar5 + 5;
    *puVar10 = 0;
    *puVar5 = &PTR_SUB_110a6a2c0;
    plVar9 = puVar5 + 4;
    *plVar9 = 0;
    *plVar9 = 0;
    puStack_a0 = (undefined8 *)0x0;
    func_0x00010873f9b0();
    *puVar10 = 0;
    puStack_a0 = (undefined8 *)0x0;
    func_0x000107c27f98(&puStack_a0);
    FUN_10873d698(&puStack_a0);
    uStack_68 = puStack_98;
    puStack_70 = puStack_a0;
    uStack_60 = 0;
    uStack_58 = 0;
    puStack_a0 = (undefined8 *)0x0;
    puStack_98 = (undefined8 *)0x0;
    func_0x000107c27f98(&uStack_60);
    func_0x000107c27f9c(&uStack_58);
    func_0x000107c27fec(&puStack_a0);
    func_0x000107c288b0(plVar9,&puStack_70);
    func_0x000107c2887c(puVar10,(ulong)&puStack_70 | 8);
    func_0x000107c27f98((ulong)&puStack_70 | 8);
    func_0x000107c27f9c(&puStack_70);
    *puVar12 = &PTR_FUN_110a6a310;
    puVar4[6] = 0;
    puVar4[10] = puVar12;
    puVar4[0xb] = puVar5;
    uVar6 = *(undefined8 *)(unaff_x20 + 0x130);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = *plVar11 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    puStack_a0 = puVar12;
    puStack_98 = puVar5;
    func_0x00010873f770(uVar6);
    (*extraout_x8)();
    FUN_10861c318(&puStack_a0);
    lVar7 = *plVar9;
    puVar4[0xc] = lVar7;
    if (lVar7 == 0) {
      puVar4[0xd] = 0;
    }
    else {
      do {
        func_0x00010873f354();
      } while (extraout_w10 != 0);
      puVar4[0xd] = puVar4[0xc];
      if (puVar4[0xc] != 0) {
        do {
          func_0x00010873f354();
        } while (extraout_w10_00 != 0);
      }
    }
    FUN_10873ac1c(&puStack_a0,unaff_x20 + 0x38,puVar4 + 0xd);
    func_0x000107c288b0(puVar4 + 0xc,&puStack_a0);
    func_0x00010873f9b0();
    plVar9 = puVar4 + 0xd;
    func_0x000107c27f9c();
    puVar4[0xe] = puVar4[0xc];
    do {
      func_0x00010873f354();
    } while (extraout_w10_01 != 0);
    func_0x00010873f4e4(puVar4[0xe]);
    if ((extraout_w8 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar4 + 0x10) = 0;
      unaff_x20 = puVar4[0xe];
      func_0x00010873f314();
      if (*plVar9 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010873f7c0();
      plVar9 = extraout_x8_00;
      do {
        if (*plVar9 == 0) {
          func_0x00010873f3b8();
          plVar9 = extraout_x8_02;
          uVar3 = extraout_w10_03;
          uVar8 = extraout_w11_00;
        }
        else {
          func_0x00010873f5a0();
          plVar9 = extraout_x8_01;
          uVar3 = extraout_w10_02;
          uVar8 = extraout_w11;
        }
        if ((uVar8 & 1) != 0) {
          func_0x00010873f404();
          if ((bool)in_ZR) {
            func_0x00010873f378();
            func_0x00010873f344();
            func_0x00010873f324();
          }
          func_0x00010873f2e8();
          return;
        }
      } while ((uVar3 >> 1 & 1) == 0);
    }
    FUN_10873af78(puVar4 + 0xe);
    func_0x00010873f7b8();
    func_0x00010873f94c();
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x00010873f57c(*(undefined8 *)(unaff_x20 + 0x120));
    puStack_98 = (undefined8 *)0x0;
    uStack_80 = 0x29b;
    puStack_a0 = (undefined8 *)(extraout_x8_03 + 0x10);
    func_0x00010873f79c();
    (*extraout_x8_04)();
    func_0x00010873f54c();
    plVar9 = *(long **)(unaff_x20 + 0x120);
    uStack_90 = 0;
    uStack_88 = 0;
    puStack_98 = (undefined8 *)0x0;
    uStack_80 = 0x29a;
    puVar4 = puVar4 + 7;
    puStack_a0 = (undefined8 *)(extraout_x8_03 + 0x10);
    func_0x000107c2825c();
    puStack_70 = puVar4;
    (**(code **)(*plVar9 + 0x18))(plVar9,&puStack_a0,&puStack_70);
    func_0x00010873f54c();
    func_0x00010873f92c();
    func_0x00010873f538();
    func_0x00010873f724();
    func_0x00010873f70c();
  }
  func_0x00010873f49c();
  func_0x00010873f4d4();
  return;
}



/* Entry: 10873ab6c; end: 10873abaf;  */

void FUN_10873ab6c(long *param_1,long param_2)

{
  int extraout_w10;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    do {
      func_0x00010873f354();
    } while (extraout_w10 != 0);
  }
  *param_1 = param_2;
  func_0x00010873f850();
  return;
}



/* Entry: 10873abb0; end: 10873ac1b;  */

/* WARNING: Removing unreachable block (ram,0x0001005f953c) */
/* WARNING: Removing unreachable block (ram,0x0001005f9544) */
/* WARNING: Removing unreachable block (ram,0x0001005f954c) */

void FUN_10873abb0(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  uint uStack_38;
  
  plVar5 = (long *)(param_1 + 8);
  lVar6 = *plVar5;
  do {
    func_0x00010873f6b8();
    if ((int)param_1 != 0) {
      FUN_10873d028(lVar6 + 0x98);
      FUN_10873d780(lVar6 + 0x98,param_2);
      func_0x00010873f650();
      break;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  plVar7 = (long *)*plVar5;
  if (plVar7 != (long *)0x0) {
    puVar1 = (ulong *)(plVar7 + 1);
    do {
      uVar4 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar4 - 0x200000000;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (uVar4 >> 0x21 == 1) {
      (**(code **)(*plVar7 + 0x10))(plVar7,1,plVar5);
      do {
        uVar4 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar4 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar4 - 1 == 0) {
        (**(code **)(*plVar7 + 8))(plVar7);
      }
    }
  }
  *plVar5 = 0;
  return;
}



/* Entry: 10873ac1c; end: 10873af77;  */

void FUN_10873ac1c(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  long lVar8;
  long *plVar9;
  long *extraout_x8;
  long *extraout_x8_00;
  long *plVar10;
  long *extraout_x8_01;
  long *extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined1 extraout_w9;
  undefined1 extraout_w9_00;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  int extraout_w10_03;
  uint extraout_w10_04;
  uint extraout_w10_05;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar11;
  uint extraout_w11_01;
  uint extraout_w11_02;
  long lVar12;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  long lStack_48;
  
  puVar5 = param_2;
  func_0x00010873f9f8();
  *puVar5 = FUN_10873dd80;
  puVar5[1] = FUN_10873df28;
  lVar8 = *param_3;
  plVar10 = puVar5 + 4;
  *plVar10 = lVar8;
  puVar5[7] = param_2;
  if (lVar8 != 0) {
    do {
      func_0x00010873f354();
    } while (extraout_w10 != 0);
  }
  func_0x00010873d744(puVar5 + 2);
  FUN_10873ab6c(param_1,puVar5[2]);
  func_0x000107c28874(&lStack_58);
  func_0x000107c28878(&uStack_60,2);
  uVar3 = uStack_60;
  uStack_60 = 0;
  func_0x000107c28888(lStack_48 + 0x18,uVar3);
  func_0x000107c28890(&uStack_60);
  *(undefined8 *)(lStack_48 + 8) = 2;
  func_0x000107c2887c(lStack_48,auStack_50);
  func_0x000107c28894(lStack_48,0,param_2 + 7);
  func_0x000107c28898(lStack_48,1,plVar10);
  lVar8 = lStack_58;
  uStack_60 = 0;
  lStack_58 = 0;
  puVar5[6] = lVar8;
  func_0x00010873f9b0();
  plVar6 = &lStack_58;
  func_0x000107c2889c();
  puVar5[5] = lVar8;
  do {
    func_0x00010873f354();
  } while (extraout_w10_00 != 0);
  func_0x00010873f4e4(puVar5[5]);
  if ((extraout_w8_01 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar5 + 8) = 0;
    func_0x00010873f7f8();
    lVar8 = *plVar6;
    if (lVar8 == 0) {
      func_0x000107c3a5c0();
      lVar8 = *plVar6;
    }
    plVar9 = (long *)(lStack_48 + 0x10);
    do {
      if (*plVar9 == 0) {
        func_0x00010873f3b8();
        plVar9 = extraout_x8_00;
        uVar2 = extraout_w10_02;
        uVar11 = extraout_w11_00;
      }
      else {
        func_0x00010873f5a0();
        plVar9 = extraout_x8;
        uVar2 = extraout_w10_01;
        uVar11 = extraout_w11;
      }
      if ((uVar11 & 1) != 0) {
        func_0x00010873f438();
        if ((bool)in_ZR) {
          func_0x00010873f378();
          uVar1 = extraout_w8;
          if ((bool)in_CY) {
            uVar1 = extraout_w9;
          }
          func_0x00010873f464();
          *(undefined1 *)plVar6 = uVar1;
          func_0x00010873f364(0);
          *(long **)(lStack_48 + 0x90) = plVar6;
        }
        func_0x00010873f418();
        *(long *)(extraout_x8_03 + 0x20) = lVar8;
        goto LAB_10873ae90;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  plVar6 = puVar5 + 5;
  func_0x000107c28870();
  lVar8 = *plVar6;
  func_0x00010873f4c4();
  func_0x00010873f5c4();
  if (lVar8 == 0) {
    lVar8 = puVar5[7];
    func_0x00010873f9a8();
    __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
              (&lStack_58,&UNK_10f4afc25,lVar8 + 0x20);
    FUN_10865aaac(plVar6,&lStack_58);
    func_0x00010873fa60();
    ___cxa_throw(plVar6);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10873aef0);
    (*pcVar4)();
  }
  puVar5[5] = *plVar10;
  do {
    func_0x00010873f354();
  } while (extraout_w10_03 != 0);
  func_0x00010873f4e4(puVar5[5]);
  if ((extraout_w8_02 >> 1 & 1) == 0) {
    func_0x00010873fa74();
    func_0x00010873f7f8();
    lVar12 = *plVar6;
    if (lVar12 == 0) {
      func_0x000107c3a5c0();
      lVar12 = *plVar6;
    }
    plVar10 = (long *)(lVar8 + 0x10);
    do {
      if (*plVar10 == 0) {
        func_0x00010873f3b8();
        plVar10 = extraout_x8_02;
        uVar2 = extraout_w10_05;
        uVar11 = extraout_w11_02;
      }
      else {
        func_0x00010873f5a0();
        plVar10 = extraout_x8_01;
        uVar2 = extraout_w10_04;
        uVar11 = extraout_w11_01;
      }
      if ((uVar11 & 1) != 0) {
        func_0x00010873f438();
        if ((bool)in_ZR) {
          func_0x00010873f378();
          uVar1 = extraout_w8_00;
          if ((bool)in_CY) {
            uVar1 = extraout_w9_00;
          }
          func_0x00010873f344();
          *(undefined1 *)plVar6 = uVar1;
          func_0x00010873f364(0);
          *(long **)(lVar8 + 0x90) = plVar6;
        }
        func_0x00010873f418();
        *(long *)(extraout_x8_04 + 0x20) = lVar12;
        lStack_48 = lVar8;
LAB_10873ae90:
        func_0x00010873f3a8(*(undefined8 *)(lStack_48 + 0x90));
        *(undefined8 *)(lStack_48 + 0x10) = 0;
        return;
      }
    } while ((uVar2 >> 1 & 1) == 0);
  }
  puVar7 = puVar5 + 5;
  FUN_10873af78(puVar7);
  puVar5 = puVar5 + 3;
  FUN_10873cfcc(*puVar5,puVar5,puVar7);
  func_0x000107c27fa0(puVar5,0);
  func_0x00010873f4c4();
  func_0x00010873f49c();
  func_0x00010873f5ac();
  func_0x00010873f4d4();
  return;
}



/* Entry: 10873af78; end: 10873afcb;  */

long FUN_10873af78(long *param_1)

{
  code *pcVar1;
  undefined1 auStack_28 [8];
  
  if (((uint)*(undefined8 *)(*param_1 + 0x10) >> 5 & 1) == 0) {
    return *param_1 + 0x98;
  }
  __ZNSt13exception_ptrC1ERKS_(auStack_28,*param_1 + 0x18);
  __ZSt17rethrow_exceptionSt13exception_ptr(auStack_28);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10873afc0);
  (*pcVar1)();
}



/* Entry: 10873afcc; end: 10873aff3;  */

long FUN_10873afcc(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10873aff4; end: 10873b8c7;  */

void FUN_10873aff4(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined1 uVar11;
  byte bVar12;
  uint uVar13;
  undefined1 in_ZR;
  undefined1 in_CY;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  uint extraout_w8_01;
  int extraout_w8_02;
  uint extraout_w8_03;
  int extraout_w8_04;
  uint extraout_w8_05;
  uint extraout_w8_06;
  long extraout_x8;
  long *extraout_x8_00;
  long *extraout_x8_01;
  long extraout_x8_02;
  long *extraout_x8_03;
  long *extraout_x8_04;
  long extraout_x8_05;
  long *plVar17;
  long *extraout_x8_06;
  long *extraout_x8_07;
  long *extraout_x8_08;
  long *extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  undefined1 extraout_w9;
  undefined1 extraout_w9_00;
  uint extraout_w9_01;
  uint extraout_w9_02;
  uint extraout_w9_03;
  uint extraout_w9_04;
  uint extraout_w9_05;
  uint extraout_w9_06;
  uint extraout_w9_07;
  uint extraout_w9_08;
  code *extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong uVar18;
  ulong extraout_x10_01;
  ulong extraout_x10_02;
  ulong extraout_x10_03;
  ulong extraout_x10_04;
  ulong extraout_x10_05;
  ulong extraout_x10_06;
  long unaff_x20;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  
  func_0x00010873faac();
  plVar14 = (long *)0x5d8;
  __Znwm();
  *plVar14 = (long)FUN_10873e498;
  plVar14[1] = (long)FUN_10873ecf8;
  plVar14[0xb9] = unaff_x20;
  plVar15 = plVar14;
  func_0x00010873f74c();
  func_0x00010873f520();
  if (*(long *)(unaff_x20 + 0xf0) != 0) {
    plVar15 = *(long **)(unaff_x20 + 0x120);
    func_0x00010873f8fc();
    FUN_10873b8c8();
  }
  if (*(long *)(unaff_x20 + 0x108) != 0) {
    plVar15 = *(long **)(unaff_x20 + 0x120);
    func_0x00010873f644();
    FUN_10873b8c8();
  }
  plVar1 = plVar14 + 0x81;
  plVar2 = plVar14 + 0x8c;
  plVar3 = plVar14 + 0xa0;
  plVar4 = plVar14 + 0xae;
  plVar5 = plVar14 + 0xb4;
  plVar6 = plVar14 + 0xb5;
  plVar7 = plVar14 + 0xb6;
  plVar8 = plVar14 + 0xb7;
  plVar9 = plVar14 + 0xb8;
  func_0x00010873f314();
  plVar10 = plVar14 + 0x82;
  func_0x00010873f428();
LAB_10873b0c0:
  do {
    plVar16 = (long *)plVar14[0xb9];
    if ((*(byte *)((long)plVar16 + 0x172) & 1) == 0) {
      if ((plVar16[0x1e] == 0) && (plVar16[0x21] == 0)) {
LAB_10873b708:
        func_0x00010873f518();
        func_0x00010873f49c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZdlPv_110352258)(plVar14);
        return;
      }
    }
    else {
      FUN_10873b924(plVar14 + 4);
      *plVar1 = plVar14[4];
      do {
        func_0x00010873f354();
      } while (extraout_w10 != 0);
      func_0x00010873f4e4(*plVar1);
      if ((extraout_w8_01 >> 1 & 1) == 0) {
        *(undefined1 *)(plVar14 + 0xba) = 0;
        lVar19 = *plVar1;
        lVar20 = *plVar15;
        if (lVar20 == 0) {
          func_0x000107c3a5c0();
          lVar20 = *plVar16;
        }
        plVar17 = (long *)(lVar19 + 0x10);
        do {
          if (*plVar17 == 0) {
            func_0x00010873f61c();
            plVar17 = extraout_x8_01;
            uVar13 = extraout_w9_02;
            uVar18 = extraout_x10_00;
          }
          else {
            func_0x00010873f764();
            plVar17 = extraout_x8_00;
            uVar13 = extraout_w9_01;
            uVar18 = extraout_x10;
          }
          if ((uVar18 & 1) != 0) goto LAB_10873b668;
        } while ((uVar13 >> 1 & 1) == 0);
      }
      func_0x000107c28834(plVar1);
      func_0x00010873f5ac();
      func_0x00010873f4dc();
      plVar16 = (long *)plVar14[0xb9];
    }
    if ((*(byte *)((long)plVar16 + 0x169) & 1) != 0) goto LAB_10873b708;
    if (plVar16[0x1e] == 0) break;
    func_0x00010873f3e8();
    in_CY = extraout_w8_02 != 0;
    in_ZR = extraout_w8_02 == 1;
    func_0x00010873f454(plVar1,plVar16[0x24]);
    func_0x00010873f8fc();
    FUN_10873bb00();
    func_0x00010873f784(plVar1);
    func_0x00010873f554(plVar14 + 0xab);
    func_0x00010873f878(plVar1,plVar14 + 0xab);
    lVar19 = plVar14[0xb9];
    func_0x00010873f77c();
    lVar19 = *(long *)(lVar19 + 0xe0);
    func_0x000107c27994(plVar4,lVar19 + 0x20);
    lVar20 = plVar14[0xb9];
    func_0x00010873d88c(lVar20 + 0xe0,lVar19);
    FUN_10873bbd0(plVar14 + 4,lVar20,plVar4);
    bVar12 = *(byte *)(plVar14 + 0x7e);
    if ((bVar12 & 1) != 0) {
      func_0x00010873f474(*(undefined8 *)(plVar14[0xb9] + 0x120),0x221);
      plVar14[0xa1] = 0;
      plVar14[0xa2] = 0;
      plVar14[0xa3] = 0;
      func_0x00010873f428();
      plVar14[0xa0] = extraout_x8_02;
      *(undefined4 *)(plVar14 + 0xa4) = 0x2a1;
      plVar16 = plVar3;
      func_0x00010873f8fc(plVar3);
      FUN_10873bfb8();
      func_0x00010873f78c();
      func_0x000107c2884c(plVar14 + 0x9b,plVar16);
      func_0x00010873f448(plVar2,plVar14[0xb9] + 0x120,plVar14 + 0x9b);
      func_0x00010873f848();
      func_0x000107c2882c(plVar3);
      func_0x00010873fab8();
      (*extraout_x9)(plVar7);
      *plVar5 = *plVar7;
      if (*plVar7 != 0) {
        do {
          func_0x00010873f354();
        } while (extraout_w10_00 != 0);
      }
      plVar16 = (long *)(plVar14[0xb9] + 0x38);
      func_0x000107c2883c(plVar3,plVar16,plVar5);
      *plVar6 = *plVar3;
      do {
        func_0x00010873f354();
      } while (extraout_w10_01 != 0);
      func_0x00010873f4e4(*plVar6);
      if ((extraout_w8_03 >> 1 & 1) == 0) {
        *(undefined1 *)(plVar14 + 0xba) = 1;
        lVar19 = *plVar6;
        lVar20 = *plVar15;
        if (lVar20 == 0) {
          func_0x000107c3a5c0();
          lVar20 = *plVar16;
        }
        plVar17 = (long *)(lVar19 + 0x10);
        do {
          if (*plVar17 == 0) {
            func_0x00010873f61c();
            plVar17 = extraout_x8_04;
            uVar13 = extraout_w9_04;
            uVar18 = extraout_x10_02;
          }
          else {
            func_0x00010873f764();
            plVar17 = extraout_x8_03;
            uVar13 = extraout_w9_03;
            uVar18 = extraout_x10_01;
          }
          if ((uVar18 & 1) != 0) {
            func_0x00010873f438();
            if ((bool)in_ZR) {
              func_0x00010873f378();
              uVar11 = extraout_w8_00;
              if ((bool)in_CY) {
                uVar11 = extraout_w9_00;
              }
              func_0x00010873f464();
              *(undefined1 *)plVar16 = uVar11;
              func_0x00010873f364(0);
              *(long **)(lVar19 + 0x90) = plVar16;
            }
            func_0x00010873f418();
            *(long *)(extraout_x8_11 + 0x20) = lVar20;
            func_0x00010873f3a8(*(undefined8 *)(lVar19 + 0x90));
            goto LAB_10873b6e4;
          }
        } while ((uVar13 >> 1 & 1) == 0);
      }
      func_0x000107c28834(plVar6);
      func_0x00010873f5cc();
      func_0x00010873f6a0();
      func_0x000107c27f9c(plVar5);
      func_0x000107c27f9c(plVar7);
      func_0x000107c28b40(plVar2);
      in_CY = (char)plVar14[0x80] != '\0';
      in_ZR = (char)plVar14[0x80] == '\x01';
      if ((bool)in_ZR) {
        lVar19 = plVar14[0x7f];
        plVar16 = (long *)(plVar14[0xb9] + 0xb8);
        FUN_10869f01c(plVar16,plVar4);
        *plVar16 = lVar19;
      }
      func_0x00010873f554(plVar14 + 0xa5);
      func_0x00010873f810(plVar1,plVar14 + 0xa5);
      func_0x00010873f818();
    }
    func_0x00010873f960();
    func_0x000107c27914(plVar4);
    FUN_108681c34(plVar1);
    if ((bVar12 & 1) != 0) goto LAB_10873b568;
  } while( true );
  if (plVar16[0x21] != 0) {
    func_0x00010873f3e8();
    in_CY = extraout_w8_04 != 0;
    in_ZR = extraout_w8_04 == 1;
    func_0x00010873f454(plVar14 + 4,plVar16[0x24]);
    func_0x00010873f644(plVar14 + 4);
    FUN_10873bb00();
    func_0x00010873f784(plVar14 + 4);
    func_0x00010873f554(plVar14 + 0xb1);
    func_0x00010873f878(plVar14 + 4,plVar14 + 0xb1);
    lVar19 = plVar14[0xb9];
    func_0x00010873f808();
    lVar19 = *(long *)(lVar19 + 0xf8);
    func_0x000107c27994(plVar3,lVar19 + 0x20);
    lVar20 = plVar14[0xb9];
    func_0x00010873d88c(lVar20 + 0xf8,lVar19);
    func_0x00010873f9c4(lVar20,plVar3);
    func_0x00010873facc();
    if (extraout_x8_05 == 0) {
      func_0x00010873f644();
      func_0x00010873f9b8();
      func_0x00010873f9cc();
      FUN_108681c34(plVar14 + 4);
    }
    else {
      func_0x00010873f474();
      plVar14[0x8d] = 0;
      plVar14[0x8e] = 0;
      plVar14[0x8f] = 0;
      plVar14[0x8c] = extraout_x8;
      *(undefined4 *)(plVar14 + 0x90) = 0x2a1;
      plVar16 = plVar2;
      func_0x00010873f644(plVar2);
      FUN_10873bfb8();
      func_0x00010873f78c();
      func_0x000107c2884c(plVar14 + 0x96,plVar16);
      func_0x00010873f448(plVar1,plVar14[0xb9] + 0x120,plVar14 + 0x96);
      lVar19 = plVar14[0xb9];
      func_0x00010873f7f0();
      func_0x00010873f830();
      (**(code **)(**(long **)(lVar19 + 0x98) + 0x28))
                (plVar2,*(long **)(lVar19 + 0x98),plVar3,*(undefined4 *)(lVar19 + 0x30),
                 *(undefined4 *)(lVar19 + 0x34));
      *plVar8 = *plVar2;
      if (*plVar2 != 0) {
        do {
          func_0x00010873f354();
        } while (extraout_w10_02 != 0);
      }
      plVar16 = (long *)(plVar14[0xb9] + 0x38);
      func_0x000107c2883c(plVar6,plVar16,plVar8);
      *plVar4 = *plVar6;
      do {
        func_0x00010873f354();
      } while (extraout_w10_03 != 0);
      func_0x00010873f4e4(*plVar4);
      if ((extraout_w8_05 >> 1 & 1) == 0) {
        *(undefined1 *)(plVar14 + 0xba) = 2;
        lVar19 = *plVar4;
        lVar20 = *plVar15;
        if (lVar20 == 0) {
          func_0x000107c3a5c0();
          lVar20 = *plVar16;
        }
        plVar17 = (long *)(lVar19 + 0x10);
        do {
          if (*plVar17 == 0) {
            func_0x00010873f61c();
            plVar17 = extraout_x8_07;
            uVar13 = extraout_w9_06;
            uVar18 = extraout_x10_04;
          }
          else {
            func_0x00010873f764();
            plVar17 = extraout_x8_06;
            uVar13 = extraout_w9_05;
            uVar18 = extraout_x10_03;
          }
          if ((uVar18 & 1) != 0) goto LAB_10873b668;
        } while ((uVar13 >> 1 & 1) == 0);
      }
      func_0x000107c28834(plVar4);
      func_0x00010873f734();
      func_0x00010873f5cc();
      func_0x000107c27f9c(plVar8);
      func_0x00010873f744();
      func_0x000107c28b40(plVar1);
      func_0x00010873f554(plVar14 + 0xa8);
      func_0x00010873f810(plVar14 + 4,plVar14 + 0xa8);
      func_0x00010873f7dc();
      func_0x00010873f9cc();
      FUN_108681c34(plVar14 + 4);
LAB_10873b568:
      lVar19 = plVar14[0xb9];
      if ((*(long *)(lVar19 + 0xf0) != 0) || (*(long *)(lVar19 + 0x108) != 0)) {
        uVar21 = *(undefined8 *)(lVar19 + 0x48);
        func_0x000107c288a8(plVar10,lVar19 + 0x38);
        plVar14[5] = *plVar10;
        *plVar10 = 0;
        FUN_10873d9f0(plVar2,plVar14 + 4,uVar21);
        func_0x00010873f73c();
        func_0x000107c288ac(plVar10);
        *plVar9 = *plVar2;
        if (*plVar2 != 0) {
          do {
            func_0x00010873f354();
          } while (extraout_w10_04 != 0);
        }
        plVar16 = (long *)(plVar14[0xb9] + 0x38);
        func_0x000107c2883c(plVar1,plVar16,plVar9);
        plVar14[4] = *plVar1;
        do {
          func_0x00010873f354();
        } while (extraout_w10_05 != 0);
        func_0x00010873f4e4(plVar14[4]);
        if ((extraout_w8_06 >> 1 & 1) == 0) {
          *(undefined1 *)(plVar14 + 0xba) = 3;
          lVar19 = plVar14[4];
          lVar20 = *plVar15;
          if (lVar20 == 0) {
            func_0x000107c3a5c0();
            lVar20 = *plVar16;
          }
          plVar17 = (long *)(lVar19 + 0x10);
          do {
            if (*plVar17 == 0) {
              func_0x00010873f61c();
              plVar17 = extraout_x8_09;
              uVar13 = extraout_w9_08;
              uVar18 = extraout_x10_06;
            }
            else {
              func_0x00010873f764();
              plVar17 = extraout_x8_08;
              uVar13 = extraout_w9_07;
              uVar18 = extraout_x10_05;
            }
            if ((uVar18 & 1) != 0) {
LAB_10873b668:
              func_0x00010873f438();
              if ((bool)in_ZR) {
                func_0x00010873f378();
                uVar11 = extraout_w8;
                if ((bool)in_CY) {
                  uVar11 = extraout_w9;
                }
                func_0x00010873f464();
                *(undefined1 *)plVar16 = uVar11;
                func_0x00010873f364(0);
                *(long **)(lVar19 + 0x90) = plVar16;
              }
              func_0x00010873f418();
              *(long *)(extraout_x8_10 + 0x20) = lVar20;
              func_0x00010873f3a8(*(undefined8 *)(lVar19 + 0x90));
LAB_10873b6e4:
              *(undefined8 *)(lVar19 + 0x10) = 0;
              return;
            }
          } while ((uVar13 >> 1 & 1) == 0);
        }
        func_0x00010873f958();
        func_0x00010873f4dc();
        func_0x00010873f5ac();
        func_0x000107c27f9c(plVar9);
        func_0x00010873f744();
      }
    }
  }
  goto LAB_10873b0c0;
}



/* Entry: 10873b8c8; end: 10873b923;  */

void FUN_10873b8c8(long *param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [32];
  undefined4 uStack_28;
  
  func_0x00010873f57c();
  func_0x00010873f8a0();
  uStack_28 = 0x298;
  puVar1 = auStack_48;
  FUN_10873bfb8(puVar1);
  func_0x00010873f974(*(undefined8 *)(*param_1 + 0x78),param_1,puVar1);
  func_0x00010873f4cc();
  return;
}



/* Entry: 10873b924; end: 10873baff;  */

void FUN_10873b924(void)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined1 extraout_w8;
  uint extraout_w8_00;
  long *plVar7;
  long *extraout_x8;
  long *extraout_x8_00;
  code *extraout_x8_01;
  long extraout_x8_02;
  undefined1 extraout_w9;
  uint extraout_w9_00;
  uint extraout_w9_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint uVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x00010873faac();
  plVar4 = (long *)0x78;
  __Znwm();
  *plVar4 = (long)FUN_10873e128;
  plVar4[1] = (long)FUN_10873e2c4;
  plVar4[0xc] = unaff_x20;
  plVar5 = plVar4;
  func_0x00010873f74c();
  func_0x00010873f520();
  func_0x00010873f314();
  lVar9 = 0;
  while( true ) {
    plVar4[0xd] = lVar9;
    plVar6 = (long *)plVar4[0xc];
    if (*(char *)((long)plVar6 + 0x172) != '\x01') break;
    uVar2 = *(int *)((long)plVar6 + 0x164) != 0;
    uVar3 = *(int *)((long)plVar6 + 0x164) == 1;
    if (!(bool)uVar3) break;
    *(undefined1 *)((long)plVar6 + 0x172) = 0;
    FUN_10873a76c(plVar4 + 0xb);
    plVar4[10] = plVar4[0xb];
    do {
      func_0x00010873f354();
    } while (extraout_w10 != 0);
    func_0x00010873f4e4(plVar4[10]);
    if ((extraout_w8_00 >> 1 & 1) == 0) {
      *(undefined1 *)(plVar4 + 0xe) = 0;
      lVar9 = plVar4[10];
      lVar10 = *plVar5;
      if (lVar10 == 0) {
        func_0x000107c3a5c0();
        lVar10 = *plVar6;
      }
      plVar7 = (long *)(lVar9 + 0x10);
      do {
        if (*plVar7 == 0) {
          func_0x00010873f880();
          plVar7 = extraout_x8_00;
          uVar1 = extraout_w9_01;
          uVar8 = extraout_w10_01;
        }
        else {
          func_0x00010873f764();
          plVar7 = extraout_x8;
          uVar1 = extraout_w9_00;
          uVar8 = extraout_w10_00;
        }
        if ((uVar8 & 1) != 0) {
          func_0x00010873f438();
          if ((bool)uVar3) {
            func_0x00010873f378();
            uVar3 = extraout_w8;
            if ((bool)uVar2) {
              uVar3 = extraout_w9;
            }
            func_0x00010873f500();
            *(undefined1 *)plVar6 = uVar3;
            func_0x00010873f364(0);
            *(long **)(lVar9 + 0x90) = plVar6;
          }
          func_0x00010873f418();
          *(long *)(extraout_x8_02 + 0x20) = lVar10;
          func_0x00010873f3a8(*(undefined8 *)(lVar9 + 0x90));
          func_0x00010873fa40();
          return;
        }
      } while ((uVar1 >> 1 & 1) == 0);
    }
    FUN_10873af78(plVar4 + 10);
    func_0x00010873f7b8();
    func_0x00010873f510();
    func_0x00010873f5bc();
    func_0x00010873f5e0();
    (*extraout_x8_01)();
    lVar9 = plVar4[0xd];
    func_0x00010873f794();
    lVar9 = lVar9 + 1;
    func_0x00010873f538();
  }
  if (0 < lVar9) {
    func_0x00010873f428(plVar6[0x24]);
    func_0x00010873f8c0();
    func_0x00010873fa00();
    func_0x00010873f4cc();
  }
  func_0x00010873f518();
  func_0x00010873f49c();
  func_0x00010873f4d4();
  return;
}



/* Entry: 10873bb00; end: 10873bb53;  */

undefined8 FUN_10873bb00(undefined8 param_1,uint param_2)

{
  func_0x00010873f6dc(param_2 & 0x223);
  func_0x00010873f6b0();
  func_0x00010873f938();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
  func_0x00010873f4f0();
  return param_1;
}



/* Entry: 10873bb54; end: 10873bbcf;  */

undefined8 FUN_10873bb54(undefined8 param_1,ulong param_2)

{
  if (((uint)param_2 & 0xffff) < 0x2b8) {
    func_0x00010873f6dc();
  }
  if (((uint)(param_2 >> 0x11) & 0x7fff) < 0x47) {
    func_0x00010873f8b0(param_2 >> 0x10 & 0xffff);
  }
  func_0x00010873f6b0();
  func_0x00010873f938();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6assignEPKc();
  func_0x00010873f4f0();
  return param_1;
}



/* Entry: 10873bbd0; end: 10873bf53;  */

void FUN_10873bbd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long unaff_x19;
  ulong unaff_x20;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 *puVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined8 auStack_898 [42];
  long *plStack_748;
  long *plStack_740;
  long *plStack_730;
  long *plStack_728;
  undefined1 auStack_4b0 [976];
  byte bStack_e0;
  undefined8 *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x00010873faa0();
  func_0x000107c28258();
  __ZSt19uncaught_exceptionsv();
  uVar10 = unaff_x20;
  func_0x00010873f9c4();
  if (uVar10 >> 0x20 == 0) {
    func_0x00010873f858(*(undefined8 *)(unaff_x20 + 0x120),0x213);
    func_0x00010873f860();
  }
  else {
    FUN_1088660e8(auStack_898,*(undefined8 *)(unaff_x20 + 0x110),param_3);
    FUN_10869148c(auStack_4b0,auStack_898);
    func_0x000107c288ec(auStack_898);
    if ((bStack_e0 & 1) == 0) {
      func_0x00010873f858(*(undefined8 *)(unaff_x20 + 0x120),0x217);
      func_0x00010873f860();
    }
    else {
      puVar13 = auStack_898;
      func_0x000107c291e0(puVar13,auStack_4b0);
      if (plStack_740 == plStack_748 && plStack_728 == plStack_730) {
        func_0x00010873f858(*(undefined8 *)(unaff_x20 + 0x120),0x215);
        func_0x00010873f860();
      }
      else {
        uVar1 = *(uint *)(unaff_x20 + 0x28);
        func_0x0001099aeff8();
        puStack_98 = &UNK_1099af000;
        puStack_a0 = puVar13;
        if (puVar13 != (undefined8 *)0x0) {
          uStack_88 = 0;
          lStack_90 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
          puVar13[2] = 0xc2b2ae3d27d4eb4f;
          puVar13[1] = 0x60ea27eeadc0b5d6;
          uVar5 = uStack_78;
          uVar4 = uStack_80;
          lVar7 = lStack_90;
          puVar13[6] = uStack_88;
          puVar13[5] = lVar7;
          uStack_70 = 0;
          *puVar13 = 0;
          puVar13[3] = 0;
          puVar13[4] = 0x61c8864e7a143579;
          puVar13[8] = uVar5;
          puVar13[7] = uVar4;
          uVar4 = uStack_70;
          puVar13[10] = uStack_68;
          puVar13[9] = uVar4;
          plVar17 = plStack_748;
          uVar10 = (ulong)uVar1;
          do {
            if ((long)uVar10 < 1) {
LAB_10873bdac:
              func_0x000107c2ae30();
              uVar11 = (ulong)puVar13 & 0xffffffffffffff00;
              uVar10 = (ulong)puVar13 & 0xff;
              bVar3 = true;
              goto LAB_10873bdc0;
            }
            if (plStack_730 == plStack_728) {
              if (plVar17 == plStack_740) goto LAB_10873bdac;
              plVar8 = plVar17;
              plVar17 = plVar17 + 1;
              plVar14 = plStack_730;
            }
            else {
              plVar8 = plStack_730;
              if (plVar17 == plStack_740) {
                plVar14 = plStack_730 + 1;
              }
              else {
                if (*plVar17 <= *plStack_730) {
                  plVar8 = plVar17;
                }
                plVar14 = plVar8 + 1;
                if (*plVar17 <= *plStack_730) {
                  plVar17 = plVar8 + 1;
                  plVar14 = plStack_730;
                }
              }
            }
            lStack_90 = *plVar8;
            puVar6 = puVar13;
            func_0x000107c2ae2c(puVar13,&lStack_90,8);
            plStack_730 = plVar14;
            uVar10 = uVar10 - 1;
          } while ((int)puVar6 != 1);
        }
        uVar10 = 0;
        bVar3 = false;
        uVar11 = 0;
LAB_10873bdc0:
        FUN_10873dd24(&puStack_a0);
        if (((bVar3) && (puVar13 = *(undefined8 **)(unaff_x20 + 0xc0), puVar13 != (undefined8 *)0x0)
            ) && (*(long *)(unaff_x20 + 0xd0) != 0)) {
          puVar6 = auStack_898;
          FUN_108848654();
          uVar15 = (long)puVar13 - 1;
          if (((ulong)puVar13 & uVar15) == 0) {
            puVar16 = (undefined8 *)((ulong)puVar6 & uVar15);
          }
          else {
            puVar16 = puVar6;
            if (puVar13 <= puVar6) {
              uVar1 = 0;
              uVar12 = (uint)puVar13;
              if (uVar12 != 0) {
                uVar1 = (uint)puVar6 / uVar12;
              }
              puVar16 = (undefined8 *)(ulong)((uint)puVar6 - uVar1 * uVar12);
            }
          }
          plVar17 = *(long **)(*(long *)(unaff_x20 + 0xb8) + (long)puVar16 * 8);
          if (plVar17 != (long *)0x0) {
            do {
              while( true ) {
                plVar17 = (long *)*plVar17;
                if (plVar17 == (long *)0x0) goto LAB_10873be98;
                puVar9 = (undefined8 *)plVar17[1];
                if (puVar6 != puVar9) break;
                lVar7 = (long)(plVar17 + 2);
                func_0x000107c28078(lVar7,auStack_898);
                if ((int)lVar7 != 0) {
                  if (plVar17[5] == (uVar11 | uVar10)) {
                    func_0x00010873f858(*(undefined8 *)(unaff_x20 + 0x120),0x216);
                    func_0x00010873f860();
                    goto LAB_10873beb8;
                  }
                  goto LAB_10873be98;
                }
              }
              if (((ulong)puVar13 & uVar15) == 0) {
                puVar9 = (undefined8 *)((ulong)puVar9 & uVar15);
              }
              else if (puVar13 <= puVar9) {
                uVar2 = 0;
                if (puVar13 != (undefined8 *)0x0) {
                  uVar2 = (ulong)puVar9 / (ulong)puVar13;
                }
                puVar9 = (undefined8 *)((long)puVar9 - uVar2 * (long)puVar13);
              }
            } while (puVar9 == puVar16);
          }
        }
LAB_10873be98:
        func_0x000107c291e0();
        *(undefined1 *)(unaff_x19 + 0x3d0) = 1;
        *(ulong *)(unaff_x19 + 0x3d8) = uVar11 | uVar10;
        *(bool *)(unaff_x19 + 0x3e0) = bVar3;
      }
LAB_10873beb8:
      func_0x000107c288d0(auStack_898);
    }
    func_0x000107c288cc(auStack_4b0);
  }
  FUN_10873c1a4(&stack0xffffffffffffff28);
  return;
}



/* Entry: 10873bf54; end: 10873bfb7;  */

void FUN_10873bf54(long *param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [32];
  undefined4 uStack_28;
  
  func_0x00010873f57c();
  func_0x00010873f8a0();
  uStack_28 = 0x28f;
  puVar1 = auStack_48;
  FUN_10873bfb8(puVar1);
  FUN_10873cde8();
  func_0x00010873f75c(*(undefined8 *)(*param_1 + 0x58),param_1,puVar1);
  func_0x00010873f4cc();
  return;
}



/* Entry: 10873bfb8; end: 10873c003;  */

undefined8 FUN_10873bfb8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010873f6b0(param_1,PTR_DAT_113268ec8);
  func_0x00010873f60c((uint)param_2 & 0x223);
  func_0x00010873fa18();
  func_0x00010873f3c8();
  return param_2;
}



/* Entry: 10873c004; end: 10873c06b;  */

void FUN_10873c004(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong unaff_x20;
  
  func_0x00010873fa4c();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x00010873f8b0(unaff_x20 >> 0x10 & 0xffff);
  }
  func_0x00010873f6b0();
  if (((uint)unaff_x20 & 0xffff) < 0x2b8) {
    func_0x00010873f60c();
  }
  func_0x00010873fa0c();
  func_0x00010873f3c8();
  return;
}



/* Entry: 10873c06c; end: 10873c18f;  */

ulong FUN_10873c06c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  int extraout_w8;
  long extraout_x8;
  int extraout_w9;
  long extraout_x9;
  int extraout_w10;
  undefined1 auStack_d0 [8];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [72];
  
  puVar6 = auStack_d0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  lVar5 = param_1;
  func_0x00010873f428();
  uStack_c8 = 0;
  uStack_b0 = 0x29e;
  func_0x00010873f588(*(undefined4 *)(lVar5 + 0x164));
  iVar3 = extraout_w10;
  if (extraout_w8 == 1) {
    iVar3 = extraout_w9 + 1;
  }
  FUN_10873c004(auStack_d0,iVar3);
  func_0x000107c2884c(auStack_a8,puVar6);
  func_0x00010873f448(auStack_80,param_1 + 0x120,auStack_a8);
  func_0x00010873f668();
  func_0x00010873f54c();
  uVar7 = *(ulong *)(param_1 + 0x110);
  FUN_10886e1bc(uVar7,0,param_2,*(undefined4 *)(param_1 + 0x2c));
  func_0x000107c278b8(auStack_d0,PTR_DAT_113268ee0);
  bVar4 = (uVar7 & 0x100000000) == 0;
  uVar1 = 0x22a;
  if (bVar4) {
    uVar1 = 0x22b;
  }
  uVar2 = 0x22c;
  if (bVar4) {
    uVar2 = 0x22d;
  }
  if ((int)param_3 == 0) {
    uVar1 = uVar2;
  }
  func_0x00010873f6dc(uVar1);
  func_0x000107c28824(auStack_78,auStack_d0,*(undefined8 *)(extraout_x9 + extraout_x8 * 8));
  func_0x00010873f9d4();
  func_0x000107c28af0(auStack_78,param_3);
  func_0x00010873f7d4();
  return uVar7;
}



/* Entry: 10873c190; end: 10873c1a3;  */

void FUN_10873c190(long *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [32];
  undefined4 uStack_28;
  
  func_0x00010873f8fc(param_1,param_2,param_2);
  func_0x00010873f57c();
  func_0x00010873f8a0();
  uStack_28 = 0x28f;
  puVar1 = auStack_48;
  FUN_10873bfb8(puVar1);
  FUN_10873cde8();
  func_0x00010873f75c(*(undefined8 *)(*param_1 + 0x58),param_1,puVar1);
  func_0x00010873f4cc();
  return;
}



/* Entry: 10873c1a4; end: 10873c1f7;  */

long FUN_10873c1a4(long param_1)

{
  int iVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
    lVar2 = param_1;
    __ZSt19uncaught_exceptionsv();
    if (iVar1 == (int)lVar2) {
      FUN_10873d8e0(param_1);
    }
    else {
      FUN_10873d8e0(param_1);
    }
  }
  return param_1;
}



/* Entry: 10873c1f8; end: 10873c3bf;  */

void FUN_10873c1f8(long param_1,int param_2,ulong param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  code *pcVar7;
  int iVar8;
  long *plVar9;
  int extraout_w8;
  long extraout_x8;
  int extraout_w9;
  int extraout_w10;
  ulong uVar10;
  long lVar11;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [72];
  byte *pbStack_38;
  
  plVar9 = &lStack_d0;
  if ((param_2 == 2) && ((*(byte *)(param_1 + 0x170) & 1) != 0)) {
    if ((*(char *)(param_1 + 0x16c) == '\x01') &&
       ((((*(byte *)(param_1 + 0x169) & 1) == 0 && (*(char *)(param_1 + 0x171) == '\x01')) &&
        (*(char *)(param_1 + 0x16e) == '\x01')))) {
      uStack_c0 = 0;
      uStack_b8 = 0;
      func_0x00010873f428();
      lStack_c8 = 0;
      uStack_b0 = 0x29d;
      lStack_d0 = extraout_x8;
      func_0x00010873f588(*(undefined4 *)(param_1 + 0x164));
      iVar8 = extraout_w10;
      if (extraout_w8 == 1) {
        iVar8 = extraout_w9 + 1;
      }
      FUN_10873c004(&lStack_d0,iVar8);
      lVar11 = *(long *)(&UNK_10df4c870 + (param_3 & 0xffffffff) * 8);
      func_0x000107c278b8(auStack_a8,PTR_DAT_113268ee8);
      func_0x000107c28824(plVar9,auStack_a8,(&PTR_s_success_113269028)[lVar11]);
      func_0x00010873f670();
      func_0x000107c2884c(auStack_a8,plVar9);
      func_0x00010873f448(auStack_80,param_1 + 0x120,auStack_a8);
      func_0x00010873f668();
      func_0x00010873f54c();
      FUN_10886e0d8(&lStack_d0,*(undefined8 *)(param_1 + 0x110),0,*(undefined4 *)(param_1 + 0x2c));
      FUN_10873d9c0(param_1 + 0xe0);
      lVar11 = lStack_c8;
      for (; lStack_d0 != lVar11; lStack_d0 = lStack_d0 + 0x3d0) {
        if (*(long *)(lStack_d0 + 0x158) != *(long *)(lStack_d0 + 0x150) ||
            *(long *)(lStack_d0 + 0x170) != *(long *)(lStack_d0 + 0x168)) {
          FUN_108691f74(param_1 + 0xe0,lStack_d0);
          func_0x00010873fa24();
        }
      }
      *(undefined1 *)(param_1 + 0x171) = 0;
      func_0x000107c29108(&lStack_d0);
      func_0x00010873f7d4();
    }
    if ((*(long *)(param_1 + 0xf0) != 0) || (*(long *)(param_1 + 0x108) != 0)) {
      iVar8 = (int)*(undefined8 *)(param_1 + 0xb0) + 0x10;
      func_0x000107c314e8();
      if (iVar8 != 0) {
        pbStack_38 = (byte *)(*(long *)(param_1 + 0xb0) + 0xa8);
        do {
          bVar2 = *pbStack_38;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pbStack_38,0x10);
          if (bVar5) {
            *pbStack_38 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while ((cVar4 != '\0') || ((bVar2 & 1) != 0));
        lVar11 = *(long *)(param_1 + 0xb0);
        if (*(char *)(lVar11 + 0xb8) == '\x01') {
          lVar11 = lVar11 + 0x10;
          func_0x000107c314e4(lVar11);
          func_0x00010873f9a8();
          FUN_1086772d8();
          ___cxa_throw(lVar11,&PTR_DAT_110a61998,FUN_1086772d4);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10873c704);
          (*pcVar7)();
        }
        lVar3 = *(long *)(lVar11 + 0xe0);
        uVar1 = lVar3 + 1;
        uVar10 = *(ulong *)(lVar11 + 0xa0);
        uVar6 = 0;
        if (uVar10 != 0) {
          uVar6 = uVar1 / uVar10;
        }
        *(ulong *)(lVar11 + 0xe0) = uVar1 - uVar6 * uVar10;
        *(long *)(lVar11 + 0xe8) = *(long *)(lVar11 + 0xe8) + 1;
        *(undefined1 *)(*(long *)(lVar11 + 0xc0) + *(long *)(lVar11 + 0xd0) * lVar3) = 1;
        *pbStack_38 = 0;
        func_0x000107c314e4(*(long *)(param_1 + 0xb0) + 0x58);
      }
      return;
    }
  }
  return;
}



/* Entry: 10873c3c0; end: 10873c46f;  */

void FUN_10873c3c0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined1 auStack_48 [24];
  
  if (*(char *)(param_1 + 0x16d) != '\x01') {
    return;
  }
  if (((*(byte *)(param_1 + 0x168) & 1) == 0) && ((*(byte *)(param_1 + 0x169) & 1) == 0)) {
    uVar1 = param_1 + 0xf8;
    FUN_10873c470();
    if ((uVar1 & 1) == 0) {
      func_0x00010873f868();
      func_0x00010873f908(param_1 + 0x120,0x20e);
      if (uVar1 >> 0x20 != 0) {
        FUN_108691f74(param_1 + 0xf8,param_2);
        func_0x00010873fa24();
      }
    }
  }
  plVar2 = *(long **)(param_1 + 0x120);
  func_0x00010873f57c(plVar2,0x60020e);
  func_0x00010873f8a0();
  puVar3 = auStack_48;
  FUN_10873cee8(puVar3);
  FUN_10873cde8();
  func_0x00010873f75c(*(undefined8 *)(*plVar2 + 0x58),plVar2,puVar3);
  func_0x00010873f4cc();
  return;
}



/* Entry: 10873c470; end: 10873c4f7;  */

bool FUN_10873c470(long param_1,undefined8 param_2)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
  plVar1 = (long *)(param_1 + 8);
  plVar4 = plVar1;
  plVar5 = plVar1;
  while (plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
    lVar3 = (long)(plVar6 + 4);
    FUN_10866f054(lVar3,param_2);
    bVar2 = (int)lVar3 == 0;
    lVar3 = 8;
    if (bVar2) {
      lVar3 = 0;
    }
    plVar4 = (long *)((long)plVar6 + lVar3);
    if (bVar2) {
      plVar5 = plVar6;
    }
  }
  if ((plVar1 == plVar5) || (FUN_10866f054(param_2,plVar5 + 4), (int)param_2 != 0)) {
    plVar5 = plVar1;
  }
  return plVar1 != plVar5;
}



/* Entry: 10873c4f8; end: 10873c627;  */

void FUN_10873c4f8(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  long extraout_x8;
  long extraout_x9;
  long *plVar5;
  undefined **ppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined1 auStack_68 [24];
  
  pppuVar3 = &ppuStack_90;
  pppuVar4 = &ppuStack_90;
  plVar5 = (long *)*param_1;
  uStack_80 = 0;
  uStack_78 = 0;
  ppuStack_90 = &PTR_FUN_110a609a8;
  uStack_88 = 0;
  uStack_70 = 0x28d;
  FUN_10873cee8(&ppuStack_90);
  func_0x000107c278b8(auStack_68,PTR_DAT_113268ed8);
  uVar1 = 0x227;
  if ((param_3 & 0xffffffff) != 1) {
    uVar1 = 0x228;
  }
  uVar2 = 0x229;
  if ((param_3 & 0x100000000) != 0) {
    uVar2 = uVar1;
  }
  func_0x00010873f6dc(uVar2);
  func_0x000107c28824(pppuVar3,auStack_68,*(undefined8 *)(extraout_x9 + extraout_x8 * 8));
  func_0x00010873f670();
  func_0x00010873f75c(*(undefined8 *)(*plVar5 + 0x58),plVar5,pppuVar3);
  func_0x00010873f54c();
  if ((param_3 >> 0x20 & 1) != 0) {
    plVar5 = (long *)*param_1;
    uStack_80 = 0;
    uStack_78 = 0;
    ppuStack_90 = &PTR_FUN_110a609a8;
    uStack_88 = 0;
    uStack_70 = 0x28c;
    FUN_10873cee8(&ppuStack_90,param_2);
    (**(code **)(*plVar5 + 0x78))(plVar5,pppuVar4,param_3 & 0xffffffff);
    func_0x00010873f54c();
  }
  return;
}



/* Entry: 10873c628; end: 10873c74f;  */

void FUN_10873c628(long param_1)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  code *pcVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  
  iVar9 = (int)*(undefined8 *)(param_1 + 0xb0) + 0x10;
  func_0x000107c314e8();
  if (iVar9 != 0) {
    pbVar1 = (byte *)(*(long *)(param_1 + 0xb0) + 0xa8);
    do {
      bVar3 = *pbVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar6) {
        *pbVar1 = 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while ((cVar5 != '\0') || ((bVar3 & 1) != 0));
    lVar10 = *(long *)(param_1 + 0xb0);
    if (*(char *)(lVar10 + 0xb8) == '\x01') {
      lVar10 = lVar10 + 0x10;
      func_0x000107c314e4(lVar10);
      func_0x00010873f9a8();
      FUN_1086772d8();
      ___cxa_throw(lVar10,&PTR_DAT_110a61998,FUN_1086772d4);
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10873c704);
      (*pcVar8)();
    }
    lVar4 = *(long *)(lVar10 + 0xe0);
    uVar2 = lVar4 + 1;
    uVar11 = *(ulong *)(lVar10 + 0xa0);
    uVar7 = 0;
    if (uVar11 != 0) {
      uVar7 = uVar2 / uVar11;
    }
    *(ulong *)(lVar10 + 0xe0) = uVar2 - uVar7 * uVar11;
    *(long *)(lVar10 + 0xe8) = *(long *)(lVar10 + 0xe8) + 1;
    *(undefined1 *)(*(long *)(lVar10 + 0xc0) + *(long *)(lVar10 + 0xd0) * lVar4) = 1;
    *pbVar1 = 0;
    func_0x000107c314e4(*(long *)(param_1 + 0xb0) + 0x58);
  }
  return;
}



/* Entry: 10873c750; end: 10873c757;  */

void FUN_10873c750(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined1 *puVar3;
  undefined1 auStack_48 [24];
  
  if (*(char *)(param_1 + 0x165) != '\x01') {
    return;
  }
  if (((*(byte *)(param_1 + 0x160) & 1) == 0) && ((*(byte *)(param_1 + 0x161) & 1) == 0)) {
    uVar1 = param_1 + 0xf0;
    FUN_10873c470();
    if ((uVar1 & 1) == 0) {
      func_0x00010873f868();
      func_0x00010873f908(param_1 + 0x118,0x20e);
      if (uVar1 >> 0x20 != 0) {
        FUN_108691f74(param_1 + 0xf0,param_2);
        func_0x00010873fa24();
      }
    }
  }
  plVar2 = *(long **)(param_1 + 0x118);
  func_0x00010873f57c(plVar2,0x60020e);
  func_0x00010873f8a0();
  puVar3 = auStack_48;
  FUN_10873cee8(puVar3);
  FUN_10873cde8();
  func_0x00010873f75c(*(undefined8 *)(*plVar2 + 0x58),plVar2,puVar3);
  func_0x00010873f4cc();
  return;
}



/* Entry: 10873c758; end: 10873c867;  */

void FUN_10873c758(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 auStack_48 [24];
  
  if (*(char *)(param_1 + 0x16c) == '\x01') {
    if (*(char *)(param_1 + 0x168) == '\x01') {
      *(undefined1 *)(param_1 + 0x171) = 1;
    }
    else if (*(int *)(param_2 + 0x318) == 0) {
      uVar2 = param_1 + 0xe0;
      if (*(long *)(param_2 + 0x158) == *(long *)(param_2 + 0x150) &&
          *(long *)(param_2 + 0x170) == *(long *)(param_2 + 0x168)) {
        FUN_10866f384(uVar2,param_2);
        if (param_1 + 0xe8U != uVar2) {
          func_0x00010873d88c(param_1 + 0xe0,uVar2);
        }
      }
      else {
        FUN_10873c470(uVar2,param_2);
        if ((uVar2 & 1) == 0) {
          func_0x00010873f868();
          func_0x00010873f908(param_1 + 0x120,0x20d);
          if (uVar2 >> 0x20 != 0) {
            if (*(char *)(param_1 + 0x169) == '\x01') {
              *(undefined1 *)(param_1 + 0x171) = 1;
            }
            else {
              FUN_108691f74(param_1 + 0xe0,param_2);
              func_0x00010873fa24();
            }
          }
        }
      }
    }
    plVar1 = *(long **)(param_1 + 0x120);
    func_0x00010873f57c(plVar1,0x60020d);
    func_0x00010873f8a0();
    puVar3 = auStack_48;
    FUN_10873cee8(puVar3);
    FUN_10873cde8();
    func_0x00010873f75c(*(undefined8 *)(*plVar1 + 0x58),plVar1,puVar3);
    func_0x00010873f4cc();
    return;
  }
  return;
}



/* Entry: 10873c868; end: 10873c86f;  */

void FUN_10873c868(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined1 *puVar3;
  undefined1 auStack_48 [24];
  
  if (*(char *)(param_1 + 0x164) == '\x01') {
    if (*(char *)(param_1 + 0x160) == '\x01') {
      *(undefined1 *)(param_1 + 0x169) = 1;
    }
    else if (*(int *)(param_2 + 0x318) == 0) {
      uVar2 = param_1 + 0xd8;
      if (*(long *)(param_2 + 0x158) == *(long *)(param_2 + 0x150) &&
          *(long *)(param_2 + 0x170) == *(long *)(param_2 + 0x168)) {
        FUN_10866f384(uVar2,param_2);
        if (param_1 + 0xe0U != uVar2) {
          func_0x00010873d88c(param_1 + 0xd8,uVar2);
        }
      }
      else {
        FUN_10873c470(uVar2,param_2);
        if ((uVar2 & 1) == 0) {
          func_0x00010873f868();
          func_0x00010873f908(param_1 + 0x118,0x20d);
          if (uVar2 >> 0x20 != 0) {
            if (*(char *)(param_1 + 0x161) == '\x01') {
              *(undefined1 *)(param_1 + 0x169) = 1;
            }
            else {
              FUN_108691f74(param_1 + 0xd8,param_2);
              func_0x00010873fa24();
            }
          }
        }
      }
    }
    plVar1 = *(long **)(param_1 + 0x118);
    func_0x00010873f57c(plVar1,0x60020d);
    func_0x00010873f8a0();
    puVar3 = auStack_48;
    FUN_10873cee8(puVar3);
    FUN_10873cde8();
    func_0x00010873f75c(*(undefined8 *)(*plVar1 + 0x58),plVar1,puVar3);
    func_0x00010873f4cc();
    return;
  }
  return;
}



/* Entry: 10873c870; end: 10873c8af;  */

void FUN_10873c870(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  code *pcVar7;
  long *plVar8;
  int iVar9;
  int extraout_w8;
  long extraout_x8;
  int extraout_w9;
  long lVar10;
  int extraout_w10;
  ulong uVar11;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [72];
  byte *pbStack_38;
  
  if ((param_3 != 0) || ((*(byte *)(param_1 + 0x16f) & 1) != 0)) {
    return;
  }
  param_1 = param_1 + 0x158;
  iVar9 = 1;
  func_0x00010874259c();
  func_0x00010873f7e4();
  plVar8 = &lStack_d0;
  if ((iVar9 == 2) && ((*(byte *)(param_1 + 0x170) & 1) != 0)) {
    if ((*(char *)(param_1 + 0x16c) == '\x01') &&
       ((((*(byte *)(param_1 + 0x169) & 1) == 0 && (*(char *)(param_1 + 0x171) == '\x01')) &&
        (*(char *)(param_1 + 0x16e) == '\x01')))) {
      uStack_c0 = 0;
      uStack_b8 = 0;
      func_0x00010873f428();
      lStack_c8 = 0;
      uStack_b0 = 0x29d;
      lStack_d0 = extraout_x8;
      func_0x00010873f588(*(undefined4 *)(param_1 + 0x164));
      iVar9 = extraout_w10;
      if (extraout_w8 == 1) {
        iVar9 = extraout_w9 + 1;
      }
      FUN_10873c004(&lStack_d0,iVar9);
      func_0x000107c278b8(auStack_a8,PTR_DAT_113268ee8);
      func_0x000107c28824(plVar8,auStack_a8,PTR_DAT_11326a1b0);
      func_0x00010873f670();
      func_0x000107c2884c(auStack_a8,plVar8);
      func_0x00010873f448(auStack_80,param_1 + 0x120,auStack_a8);
      func_0x00010873f668();
      func_0x00010873f54c();
      FUN_10886e0d8(&lStack_d0,*(undefined8 *)(param_1 + 0x110),0,*(undefined4 *)(param_1 + 0x2c));
      FUN_10873d9c0(param_1 + 0xe0);
      lVar10 = lStack_c8;
      for (; lStack_d0 != lVar10; lStack_d0 = lStack_d0 + 0x3d0) {
        if (*(long *)(lStack_d0 + 0x158) != *(long *)(lStack_d0 + 0x150) ||
            *(long *)(lStack_d0 + 0x170) != *(long *)(lStack_d0 + 0x168)) {
          FUN_108691f74(param_1 + 0xe0,lStack_d0);
          func_0x00010873fa24();
        }
      }
      *(undefined1 *)(param_1 + 0x171) = 0;
      func_0x000107c29108(&lStack_d0);
      func_0x00010873f7d4();
    }
    if ((*(long *)(param_1 + 0xf0) != 0) || (*(long *)(param_1 + 0x108) != 0)) {
      iVar9 = (int)*(undefined8 *)(param_1 + 0xb0) + 0x10;
      func_0x000107c314e8();
      if (iVar9 != 0) {
        pbStack_38 = (byte *)(*(long *)(param_1 + 0xb0) + 0xa8);
        do {
          bVar2 = *pbStack_38;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pbStack_38,0x10);
          if (bVar5) {
            *pbStack_38 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while ((cVar4 != '\0') || ((bVar2 & 1) != 0));
        lVar10 = *(long *)(param_1 + 0xb0);
        if (*(char *)(lVar10 + 0xb8) == '\x01') {
          lVar10 = lVar10 + 0x10;
          func_0x000107c314e4(lVar10);
          func_0x00010873f9a8();
          FUN_1086772d8();
          ___cxa_throw(lVar10,&PTR_DAT_110a61998,FUN_1086772d4);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10873c704);
          (*pcVar7)();
        }
        lVar3 = *(long *)(lVar10 + 0xe0);
        uVar1 = lVar3 + 1;
        uVar11 = *(ulong *)(lVar10 + 0xa0);
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar1 / uVar11;
        }
        *(ulong *)(lVar10 + 0xe0) = uVar1 - uVar6 * uVar11;
        *(long *)(lVar10 + 0xe8) = *(long *)(lVar10 + 0xe8) + 1;
        *(undefined1 *)(*(long *)(lVar10 + 0xc0) + *(long *)(lVar10 + 0xd0) * lVar3) = 1;
        *pbStack_38 = 0;
        func_0x000107c314e4(*(long *)(param_1 + 0xb0) + 0x58);
      }
      return;
    }
  }
  return;
}



/* Entry: 10873c8b0; end: 10873c8b7;  */

void FUN_10873c8b0(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  code *pcVar7;
  long *plVar8;
  int iVar9;
  int extraout_w8;
  long extraout_x8;
  int extraout_w9;
  long lVar10;
  int extraout_w10;
  ulong uVar11;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [72];
  byte *pbStack_38;
  
  if ((param_3 != 0) || ((*(byte *)(param_1 + 0x15f) & 1) != 0)) {
    return;
  }
  param_1 = param_1 + 0x148;
  iVar9 = 1;
  func_0x00010874259c();
  func_0x00010873f7e4();
  plVar8 = &lStack_d0;
  if ((iVar9 == 2) && ((*(byte *)(param_1 + 0x170) & 1) != 0)) {
    if ((*(char *)(param_1 + 0x16c) == '\x01') &&
       ((((*(byte *)(param_1 + 0x169) & 1) == 0 && (*(char *)(param_1 + 0x171) == '\x01')) &&
        (*(char *)(param_1 + 0x16e) == '\x01')))) {
      uStack_c0 = 0;
      uStack_b8 = 0;
      func_0x00010873f428();
      lStack_c8 = 0;
      uStack_b0 = 0x29d;
      lStack_d0 = extraout_x8;
      func_0x00010873f588(*(undefined4 *)(param_1 + 0x164));
      iVar9 = extraout_w10;
      if (extraout_w8 == 1) {
        iVar9 = extraout_w9 + 1;
      }
      FUN_10873c004(&lStack_d0,iVar9);
      func_0x000107c278b8(auStack_a8,PTR_DAT_113268ee8);
      func_0x000107c28824(plVar8,auStack_a8,PTR_DAT_11326a1b0);
      func_0x00010873f670();
      func_0x000107c2884c(auStack_a8,plVar8);
      func_0x00010873f448(auStack_80,param_1 + 0x120,auStack_a8);
      func_0x00010873f668();
      func_0x00010873f54c();
      FUN_10886e0d8(&lStack_d0,*(undefined8 *)(param_1 + 0x110),0,*(undefined4 *)(param_1 + 0x2c));
      FUN_10873d9c0(param_1 + 0xe0);
      lVar10 = lStack_c8;
      for (; lStack_d0 != lVar10; lStack_d0 = lStack_d0 + 0x3d0) {
        if (*(long *)(lStack_d0 + 0x158) != *(long *)(lStack_d0 + 0x150) ||
            *(long *)(lStack_d0 + 0x170) != *(long *)(lStack_d0 + 0x168)) {
          FUN_108691f74(param_1 + 0xe0,lStack_d0);
          func_0x00010873fa24();
        }
      }
      *(undefined1 *)(param_1 + 0x171) = 0;
      func_0x000107c29108(&lStack_d0);
      func_0x00010873f7d4();
    }
    if ((*(long *)(param_1 + 0xf0) != 0) || (*(long *)(param_1 + 0x108) != 0)) {
      iVar9 = (int)*(undefined8 *)(param_1 + 0xb0) + 0x10;
      func_0x000107c314e8();
      if (iVar9 != 0) {
        pbStack_38 = (byte *)(*(long *)(param_1 + 0xb0) + 0xa8);
        do {
          bVar2 = *pbStack_38;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pbStack_38,0x10);
          if (bVar5) {
            *pbStack_38 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while ((cVar4 != '\0') || ((bVar2 & 1) != 0));
        lVar10 = *(long *)(param_1 + 0xb0);
        if (*(char *)(lVar10 + 0xb8) == '\x01') {
          lVar10 = lVar10 + 0x10;
          func_0x000107c314e4(lVar10);
          func_0x00010873f9a8();
          FUN_1086772d8();
          ___cxa_throw(lVar10,&PTR_DAT_110a61998,FUN_1086772d4);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10873c704);
          (*pcVar7)();
        }
        lVar3 = *(long *)(lVar10 + 0xe0);
        uVar1 = lVar3 + 1;
        uVar11 = *(ulong *)(lVar10 + 0xa0);
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar1 / uVar11;
        }
        *(ulong *)(lVar10 + 0xe0) = uVar1 - uVar6 * uVar11;
        *(long *)(lVar10 + 0xe8) = *(long *)(lVar10 + 0xe8) + 1;
        *(undefined1 *)(*(long *)(lVar10 + 0xc0) + *(long *)(lVar10 + 0xd0) * lVar3) = 1;
        *pbStack_38 = 0;
        func_0x000107c314e4(*(long *)(param_1 + 0xb0) + 0x58);
      }
      return;
    }
  }
  return;
}



/* Entry: 10873c8b8; end: 10873c907;  */

void FUN_10873c8b8(long param_1,int param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  code *pcVar7;
  long *plVar8;
  int iVar9;
  int extraout_w8;
  long extraout_x8;
  int extraout_w9;
  long lVar10;
  int extraout_w10;
  ulong uVar11;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [72];
  byte *pbStack_38;
  
  if ((param_2 != 0) || ((*(byte *)(param_1 + 0x16f) & 1) != 0)) {
    return;
  }
  *(undefined1 *)(param_1 + 0x16e) = 1;
  if ((param_5 >> 0x20 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x16f) = 1;
  }
  param_1 = param_1 + 0x158;
  iVar9 = 0;
  func_0x00010874259c();
  func_0x00010873f7e4();
  plVar8 = &lStack_d0;
  if ((iVar9 == 2) && ((*(byte *)(param_1 + 0x170) & 1) != 0)) {
    if ((*(char *)(param_1 + 0x16c) == '\x01') &&
       ((((*(byte *)(param_1 + 0x169) & 1) == 0 && (*(char *)(param_1 + 0x171) == '\x01')) &&
        (*(char *)(param_1 + 0x16e) == '\x01')))) {
      uStack_c0 = 0;
      uStack_b8 = 0;
      func_0x00010873f428();
      lStack_c8 = 0;
      uStack_b0 = 0x29d;
      lStack_d0 = extraout_x8;
      func_0x00010873f588(*(undefined4 *)(param_1 + 0x164));
      iVar9 = extraout_w10;
      if (extraout_w8 == 1) {
        iVar9 = extraout_w9 + 1;
      }
      FUN_10873c004(&lStack_d0,iVar9);
      func_0x000107c278b8(auStack_a8,PTR_DAT_113268ee8);
      func_0x000107c28824(plVar8,auStack_a8,PTR_DAT_11326a1b0);
      func_0x00010873f670();
      func_0x000107c2884c(auStack_a8,plVar8);
      func_0x00010873f448(auStack_80,param_1 + 0x120,auStack_a8);
      func_0x00010873f668();
      func_0x00010873f54c();
      FUN_10886e0d8(&lStack_d0,*(undefined8 *)(param_1 + 0x110),0,*(undefined4 *)(param_1 + 0x2c));
      FUN_10873d9c0(param_1 + 0xe0);
      lVar10 = lStack_c8;
      for (; lStack_d0 != lVar10; lStack_d0 = lStack_d0 + 0x3d0) {
        if (*(long *)(lStack_d0 + 0x158) != *(long *)(lStack_d0 + 0x150) ||
            *(long *)(lStack_d0 + 0x170) != *(long *)(lStack_d0 + 0x168)) {
          FUN_108691f74(param_1 + 0xe0,lStack_d0);
          func_0x00010873fa24();
        }
      }
      *(undefined1 *)(param_1 + 0x171) = 0;
      func_0x000107c29108(&lStack_d0);
      func_0x00010873f7d4();
    }
    if ((*(long *)(param_1 + 0xf0) != 0) || (*(long *)(param_1 + 0x108) != 0)) {
      iVar9 = (int)*(undefined8 *)(param_1 + 0xb0) + 0x10;
      func_0x000107c314e8();
      if (iVar9 != 0) {
        pbStack_38 = (byte *)(*(long *)(param_1 + 0xb0) + 0xa8);
        do {
          bVar2 = *pbStack_38;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pbStack_38,0x10);
          if (bVar5) {
            *pbStack_38 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while ((cVar4 != '\0') || ((bVar2 & 1) != 0));
        lVar10 = *(long *)(param_1 + 0xb0);
        if (*(char *)(lVar10 + 0xb8) == '\x01') {
          lVar10 = lVar10 + 0x10;
          func_0x000107c314e4(lVar10);
          func_0x00010873f9a8();
          FUN_1086772d8();
          ___cxa_throw(lVar10,&PTR_DAT_110a61998,FUN_1086772d4);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10873c704);
          (*pcVar7)();
        }
        lVar3 = *(long *)(lVar10 + 0xe0);
        uVar1 = lVar3 + 1;
        uVar11 = *(ulong *)(lVar10 + 0xa0);
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar1 / uVar11;
        }
        *(ulong *)(lVar10 + 0xe0) = uVar1 - uVar6 * uVar11;
        *(long *)(lVar10 + 0xe8) = *(long *)(lVar10 + 0xe8) + 1;
        *(undefined1 *)(*(long *)(lVar10 + 0xc0) + *(long *)(lVar10 + 0xd0) * lVar3) = 1;
        *pbStack_38 = 0;
        func_0x000107c314e4(*(long *)(param_1 + 0xb0) + 0x58);
      }
      return;
    }
  }
  return;
}



/* Entry: 10873c908; end: 10873c90f;  */

void FUN_10873c908(long param_1,int param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  code *pcVar7;
  long *plVar8;
  int iVar9;
  int extraout_w8;
  long extraout_x8;
  int extraout_w9;
  long lVar10;
  int extraout_w10;
  ulong uVar11;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [72];
  byte *pbStack_38;
  
  if ((param_2 != 0) || ((*(byte *)(param_1 + 0x15f) & 1) != 0)) {
    return;
  }
  *(undefined1 *)(param_1 + 0x15e) = 1;
  if ((param_5 >> 0x20 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x15f) = 1;
  }
  param_1 = param_1 + 0x148;
  iVar9 = 0;
  func_0x00010874259c();
  func_0x00010873f7e4();
  plVar8 = &lStack_d0;
  if ((iVar9 == 2) && ((*(byte *)(param_1 + 0x170) & 1) != 0)) {
    if ((*(char *)(param_1 + 0x16c) == '\x01') &&
       ((((*(byte *)(param_1 + 0x169) & 1) == 0 && (*(char *)(param_1 + 0x171) == '\x01')) &&
        (*(char *)(param_1 + 0x16e) == '\x01')))) {
      uStack_c0 = 0;
      uStack_b8 = 0;
      func_0x00010873f428();
      lStack_c8 = 0;
      uStack_b0 = 0x29d;
      lStack_d0 = extraout_x8;
      func_0x00010873f588(*(undefined4 *)(param_1 + 0x164));
      iVar9 = extraout_w10;
      if (extraout_w8 == 1) {
        iVar9 = extraout_w9 + 1;
      }
      FUN_10873c004(&lStack_d0,iVar9);
      func_0x000107c278b8(auStack_a8,PTR_DAT_113268ee8);
      func_0x000107c28824(plVar8,auStack_a8,PTR_DAT_11326a1b0);
      func_0x00010873f670();
      func_0x000107c2884c(auStack_a8,plVar8);
      func_0x00010873f448(auStack_80,param_1 + 0x120,auStack_a8);
      func_0x00010873f668();
      func_0x00010873f54c();
      FUN_10886e0d8(&lStack_d0,*(undefined8 *)(param_1 + 0x110),0,*(undefined4 *)(param_1 + 0x2c));
      FUN_10873d9c0(param_1 + 0xe0);
      lVar10 = lStack_c8;
      for (; lStack_d0 != lVar10; lStack_d0 = lStack_d0 + 0x3d0) {
        if (*(long *)(lStack_d0 + 0x158) != *(long *)(lStack_d0 + 0x150) ||
            *(long *)(lStack_d0 + 0x170) != *(long *)(lStack_d0 + 0x168)) {
          FUN_108691f74(param_1 + 0xe0,lStack_d0);
          func_0x00010873fa24();
        }
      }
      *(undefined1 *)(param_1 + 0x171) = 0;
      func_0x000107c29108(&lStack_d0);
      func_0x00010873f7d4();
    }
    if ((*(long *)(param_1 + 0xf0) != 0) || (*(long *)(param_1 + 0x108) != 0)) {
      iVar9 = (int)*(undefined8 *)(param_1 + 0xb0) + 0x10;
      func_0x000107c314e8();
      if (iVar9 != 0) {
        pbStack_38 = (byte *)(*(long *)(param_1 + 0xb0) + 0xa8);
        do {
          bVar2 = *pbStack_38;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pbStack_38,0x10);
          if (bVar5) {
            *pbStack_38 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while ((cVar4 != '\0') || ((bVar2 & 1) != 0));
        lVar10 = *(long *)(param_1 + 0xb0);
        if (*(char *)(lVar10 + 0xb8) == '\x01') {
          lVar10 = lVar10 + 0x10;
          func_0x000107c314e4(lVar10);
          func_0x00010873f9a8();
          FUN_1086772d8();
          ___cxa_throw(lVar10,&PTR_DAT_110a61998,FUN_1086772d4);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10873c704);
          (*pcVar7)();
        }
        lVar3 = *(long *)(lVar10 + 0xe0);
        uVar1 = lVar3 + 1;
        uVar11 = *(ulong *)(lVar10 + 0xa0);
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar1 / uVar11;
        }
        *(ulong *)(lVar10 + 0xe0) = uVar1 - uVar6 * uVar11;
        *(long *)(lVar10 + 0xe8) = *(long *)(lVar10 + 0xe8) + 1;
        *(undefined1 *)(*(long *)(lVar10 + 0xc0) + *(long *)(lVar10 + 0xd0) * lVar3) = 1;
        *pbStack_38 = 0;
        func_0x000107c314e4(*(long *)(param_1 + 0xb0) + 0x58);
      }
      return;
    }
  }
  return;
}



/* Entry: 10873c910; end: 10873c937;  */

void FUN_10873c910(long param_1,int param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  code *pcVar7;
  int iVar8;
  long *plVar9;
  int extraout_w8;
  long extraout_x8;
  int extraout_w9;
  long lVar10;
  int extraout_w10;
  ulong uVar11;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [72];
  byte *pbStack_38;
  
  param_1 = param_1 + 0x158;
  func_0x000108742558();
  func_0x00010873f7e4();
  plVar9 = &lStack_d0;
  if ((param_2 == 2) && ((*(byte *)(param_1 + 0x170) & 1) != 0)) {
    if ((*(char *)(param_1 + 0x16c) == '\x01') &&
       ((((*(byte *)(param_1 + 0x169) & 1) == 0 && (*(char *)(param_1 + 0x171) == '\x01')) &&
        (*(char *)(param_1 + 0x16e) == '\x01')))) {
      uStack_c0 = 0;
      uStack_b8 = 0;
      func_0x00010873f428();
      lStack_c8 = 0;
      uStack_b0 = 0x29d;
      lStack_d0 = extraout_x8;
      func_0x00010873f588(*(undefined4 *)(param_1 + 0x164));
      iVar8 = extraout_w10;
      if (extraout_w8 == 1) {
        iVar8 = extraout_w9 + 1;
      }
      FUN_10873c004(&lStack_d0,iVar8);
      func_0x000107c278b8(auStack_a8,PTR_DAT_113268ee8);
      func_0x000107c28824(plVar9,auStack_a8,PTR_DAT_11326a198);
      func_0x00010873f670();
      func_0x000107c2884c(auStack_a8,plVar9);
      func_0x00010873f448(auStack_80,param_1 + 0x120,auStack_a8);
      func_0x00010873f668();
      func_0x00010873f54c();
      FUN_10886e0d8(&lStack_d0,*(undefined8 *)(param_1 + 0x110),0,*(undefined4 *)(param_1 + 0x2c));
      FUN_10873d9c0(param_1 + 0xe0);
      lVar10 = lStack_c8;
      for (; lStack_d0 != lVar10; lStack_d0 = lStack_d0 + 0x3d0) {
        if (*(long *)(lStack_d0 + 0x158) != *(long *)(lStack_d0 + 0x150) ||
            *(long *)(lStack_d0 + 0x170) != *(long *)(lStack_d0 + 0x168)) {
          FUN_108691f74(param_1 + 0xe0,lStack_d0);
          func_0x00010873fa24();
        }
      }
      *(undefined1 *)(param_1 + 0x171) = 0;
      func_0x000107c29108(&lStack_d0);
      func_0x00010873f7d4();
    }
    if ((*(long *)(param_1 + 0xf0) != 0) || (*(long *)(param_1 + 0x108) != 0)) {
      iVar8 = (int)*(undefined8 *)(param_1 + 0xb0) + 0x10;
      func_0x000107c314e8();
      if (iVar8 != 0) {
        pbStack_38 = (byte *)(*(long *)(param_1 + 0xb0) + 0xa8);
        do {
          bVar2 = *pbStack_38;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pbStack_38,0x10);
          if (bVar5) {
            *pbStack_38 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while ((cVar4 != '\0') || ((bVar2 & 1) != 0));
        lVar10 = *(long *)(param_1 + 0xb0);
        if (*(char *)(lVar10 + 0xb8) == '\x01') {
          lVar10 = lVar10 + 0x10;
          func_0x000107c314e4(lVar10);
          func_0x00010873f9a8();
          FUN_1086772d8();
          ___cxa_throw(lVar10,&PTR_DAT_110a61998,FUN_1086772d4);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10873c704);
          (*pcVar7)();
        }
        lVar3 = *(long *)(lVar10 + 0xe0);
        uVar1 = lVar3 + 1;
        uVar11 = *(ulong *)(lVar10 + 0xa0);
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar1 / uVar11;
        }
        *(ulong *)(lVar10 + 0xe0) = uVar1 - uVar6 * uVar11;
        *(long *)(lVar10 + 0xe8) = *(long *)(lVar10 + 0xe8) + 1;
        *(undefined1 *)(*(long *)(lVar10 + 0xc0) + *(long *)(lVar10 + 0xd0) * lVar3) = 1;
        *pbStack_38 = 0;
        func_0x000107c314e4(*(long *)(param_1 + 0xb0) + 0x58);
      }
      return;
    }
  }
  return;
}



/* Entry: 10873c938; end: 10873c93f;  */

void FUN_10873c938(long param_1,int param_2)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  code *pcVar7;
  int iVar8;
  long *plVar9;
  int extraout_w8;
  long extraout_x8;
  int extraout_w9;
  long lVar10;
  int extraout_w10;
  ulong uVar11;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [72];
  byte *pbStack_38;
  
  param_1 = param_1 + 0x148;
  func_0x000108742558();
  func_0x00010873f7e4();
  plVar9 = &lStack_d0;
  if ((param_2 == 2) && ((*(byte *)(param_1 + 0x170) & 1) != 0)) {
    if ((*(char *)(param_1 + 0x16c) == '\x01') &&
       ((((*(byte *)(param_1 + 0x169) & 1) == 0 && (*(char *)(param_1 + 0x171) == '\x01')) &&
        (*(char *)(param_1 + 0x16e) == '\x01')))) {
      uStack_c0 = 0;
      uStack_b8 = 0;
      func_0x00010873f428();
      lStack_c8 = 0;
      uStack_b0 = 0x29d;
      lStack_d0 = extraout_x8;
      func_0x00010873f588(*(undefined4 *)(param_1 + 0x164));
      iVar8 = extraout_w10;
      if (extraout_w8 == 1) {
        iVar8 = extraout_w9 + 1;
      }
      FUN_10873c004(&lStack_d0,iVar8);
      func_0x000107c278b8(auStack_a8,PTR_DAT_113268ee8);
      func_0x000107c28824(plVar9,auStack_a8,PTR_DAT_11326a198);
      func_0x00010873f670();
      func_0x000107c2884c(auStack_a8,plVar9);
      func_0x00010873f448(auStack_80,param_1 + 0x120,auStack_a8);
      func_0x00010873f668();
      func_0x00010873f54c();
      FUN_10886e0d8(&lStack_d0,*(undefined8 *)(param_1 + 0x110),0,*(undefined4 *)(param_1 + 0x2c));
      FUN_10873d9c0(param_1 + 0xe0);
      lVar10 = lStack_c8;
      for (; lStack_d0 != lVar10; lStack_d0 = lStack_d0 + 0x3d0) {
        if (*(long *)(lStack_d0 + 0x158) != *(long *)(lStack_d0 + 0x150) ||
            *(long *)(lStack_d0 + 0x170) != *(long *)(lStack_d0 + 0x168)) {
          FUN_108691f74(param_1 + 0xe0,lStack_d0);
          func_0x00010873fa24();
        }
      }
      *(undefined1 *)(param_1 + 0x171) = 0;
      func_0x000107c29108(&lStack_d0);
      func_0x00010873f7d4();
    }
    if ((*(long *)(param_1 + 0xf0) != 0) || (*(long *)(param_1 + 0x108) != 0)) {
      iVar8 = (int)*(undefined8 *)(param_1 + 0xb0) + 0x10;
      func_0x000107c314e8();
      if (iVar8 != 0) {
        pbStack_38 = (byte *)(*(long *)(param_1 + 0xb0) + 0xa8);
        do {
          bVar2 = *pbStack_38;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pbStack_38,0x10);
          if (bVar5) {
            *pbStack_38 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while ((cVar4 != '\0') || ((bVar2 & 1) != 0));
        lVar10 = *(long *)(param_1 + 0xb0);
        if (*(char *)(lVar10 + 0xb8) == '\x01') {
          lVar10 = lVar10 + 0x10;
          func_0x000107c314e4(lVar10);
          func_0x00010873f9a8();
          FUN_1086772d8();
          ___cxa_throw(lVar10,&PTR_DAT_110a61998,FUN_1086772d4);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10873c704);
          (*pcVar7)();
        }
        lVar3 = *(long *)(lVar10 + 0xe0);
        uVar1 = lVar3 + 1;
        uVar11 = *(ulong *)(lVar10 + 0xa0);
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar1 / uVar11;
        }
        *(ulong *)(lVar10 + 0xe0) = uVar1 - uVar6 * uVar11;
        *(long *)(lVar10 + 0xe8) = *(long *)(lVar10 + 0xe8) + 1;
        *(undefined1 *)(*(long *)(lVar10 + 0xc0) + *(long *)(lVar10 + 0xd0) * lVar3) = 1;
        *pbStack_38 = 0;
        func_0x000107c314e4(*(long *)(param_1 + 0xb0) + 0x58);
      }
      return;
    }
  }
  return;
}



/* Entry: 10873c940; end: 10873c96b;  */

void FUN_10873c940(long param_1)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  code *pcVar7;
  long *plVar8;
  int iVar9;
  int extraout_w8;
  long extraout_x8;
  int extraout_w9;
  long lVar10;
  int extraout_w10;
  ulong uVar11;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [72];
  byte *pbStack_38;
  
  param_1 = param_1 + 0x158;
  iVar9 = 2;
  FUN_108742540();
  func_0x00010873f7e4();
  plVar8 = &lStack_d0;
  if ((iVar9 == 2) && ((*(byte *)(param_1 + 0x170) & 1) != 0)) {
    if ((*(char *)(param_1 + 0x16c) == '\x01') &&
       ((((*(byte *)(param_1 + 0x169) & 1) == 0 && (*(char *)(param_1 + 0x171) == '\x01')) &&
        (*(char *)(param_1 + 0x16e) == '\x01')))) {
      uStack_c0 = 0;
      uStack_b8 = 0;
      func_0x00010873f428();
      lStack_c8 = 0;
      uStack_b0 = 0x29d;
      lStack_d0 = extraout_x8;
      func_0x00010873f588(*(undefined4 *)(param_1 + 0x164));
      iVar9 = extraout_w10;
      if (extraout_w8 == 1) {
        iVar9 = extraout_w9 + 1;
      }
      FUN_10873c004(&lStack_d0,iVar9);
      func_0x000107c278b8(auStack_a8,PTR_DAT_113268ee8);
      func_0x000107c28824(plVar8,auStack_a8,PTR_s_app_state_11326a1a8);
      func_0x00010873f670();
      func_0x000107c2884c(auStack_a8,plVar8);
      func_0x00010873f448(auStack_80,param_1 + 0x120,auStack_a8);
      func_0x00010873f668();
      func_0x00010873f54c();
      FUN_10886e0d8(&lStack_d0,*(undefined8 *)(param_1 + 0x110),0,*(undefined4 *)(param_1 + 0x2c));
      FUN_10873d9c0(param_1 + 0xe0);
      lVar10 = lStack_c8;
      for (; lStack_d0 != lVar10; lStack_d0 = lStack_d0 + 0x3d0) {
        if (*(long *)(lStack_d0 + 0x158) != *(long *)(lStack_d0 + 0x150) ||
            *(long *)(lStack_d0 + 0x170) != *(long *)(lStack_d0 + 0x168)) {
          FUN_108691f74(param_1 + 0xe0,lStack_d0);
          func_0x00010873fa24();
        }
      }
      *(undefined1 *)(param_1 + 0x171) = 0;
      func_0x000107c29108(&lStack_d0);
      func_0x00010873f7d4();
    }
    if ((*(long *)(param_1 + 0xf0) != 0) || (*(long *)(param_1 + 0x108) != 0)) {
      iVar9 = (int)*(undefined8 *)(param_1 + 0xb0) + 0x10;
      func_0x000107c314e8();
      if (iVar9 != 0) {
        pbStack_38 = (byte *)(*(long *)(param_1 + 0xb0) + 0xa8);
        do {
          bVar2 = *pbStack_38;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pbStack_38,0x10);
          if (bVar5) {
            *pbStack_38 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while ((cVar4 != '\0') || ((bVar2 & 1) != 0));
        lVar10 = *(long *)(param_1 + 0xb0);
        if (*(char *)(lVar10 + 0xb8) == '\x01') {
          lVar10 = lVar10 + 0x10;
          func_0x000107c314e4(lVar10);
          func_0x00010873f9a8();
          FUN_1086772d8();
          ___cxa_throw(lVar10,&PTR_DAT_110a61998,FUN_1086772d4);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10873c704);
          (*pcVar7)();
        }
        lVar3 = *(long *)(lVar10 + 0xe0);
        uVar1 = lVar3 + 1;
        uVar11 = *(ulong *)(lVar10 + 0xa0);
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar1 / uVar11;
        }
        *(ulong *)(lVar10 + 0xe0) = uVar1 - uVar6 * uVar11;
        *(long *)(lVar10 + 0xe8) = *(long *)(lVar10 + 0xe8) + 1;
        *(undefined1 *)(*(long *)(lVar10 + 0xc0) + *(long *)(lVar10 + 0xd0) * lVar3) = 1;
        *pbStack_38 = 0;
        func_0x000107c314e4(*(long *)(param_1 + 0xb0) + 0x58);
      }
      return;
    }
  }
  return;
}



/* Entry: 10873c96c; end: 10873c973;  */

void FUN_10873c96c(long param_1)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  code *pcVar7;
  long *plVar8;
  int iVar9;
  int extraout_w8;
  long extraout_x8;
  int extraout_w9;
  long lVar10;
  int extraout_w10;
  ulong uVar11;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [72];
  byte *pbStack_38;
  
  param_1 = param_1 + 0x148;
  iVar9 = 2;
  FUN_108742540();
  func_0x00010873f7e4();
  plVar8 = &lStack_d0;
  if ((iVar9 == 2) && ((*(byte *)(param_1 + 0x170) & 1) != 0)) {
    if ((*(char *)(param_1 + 0x16c) == '\x01') &&
       ((((*(byte *)(param_1 + 0x169) & 1) == 0 && (*(char *)(param_1 + 0x171) == '\x01')) &&
        (*(char *)(param_1 + 0x16e) == '\x01')))) {
      uStack_c0 = 0;
      uStack_b8 = 0;
      func_0x00010873f428();
      lStack_c8 = 0;
      uStack_b0 = 0x29d;
      lStack_d0 = extraout_x8;
      func_0x00010873f588(*(undefined4 *)(param_1 + 0x164));
      iVar9 = extraout_w10;
      if (extraout_w8 == 1) {
        iVar9 = extraout_w9 + 1;
      }
      FUN_10873c004(&lStack_d0,iVar9);
      func_0x000107c278b8(auStack_a8,PTR_DAT_113268ee8);
      func_0x000107c28824(plVar8,auStack_a8,PTR_s_app_state_11326a1a8);
      func_0x00010873f670();
      func_0x000107c2884c(auStack_a8,plVar8);
      func_0x00010873f448(auStack_80,param_1 + 0x120,auStack_a8);
      func_0x00010873f668();
      func_0x00010873f54c();
      FUN_10886e0d8(&lStack_d0,*(undefined8 *)(param_1 + 0x110),0,*(undefined4 *)(param_1 + 0x2c));
      FUN_10873d9c0(param_1 + 0xe0);
      lVar10 = lStack_c8;
      for (; lStack_d0 != lVar10; lStack_d0 = lStack_d0 + 0x3d0) {
        if (*(long *)(lStack_d0 + 0x158) != *(long *)(lStack_d0 + 0x150) ||
            *(long *)(lStack_d0 + 0x170) != *(long *)(lStack_d0 + 0x168)) {
          FUN_108691f74(param_1 + 0xe0,lStack_d0);
          func_0x00010873fa24();
        }
      }
      *(undefined1 *)(param_1 + 0x171) = 0;
      func_0x000107c29108(&lStack_d0);
      func_0x00010873f7d4();
    }
    if ((*(long *)(param_1 + 0xf0) != 0) || (*(long *)(param_1 + 0x108) != 0)) {
      iVar9 = (int)*(undefined8 *)(param_1 + 0xb0) + 0x10;
      func_0x000107c314e8();
      if (iVar9 != 0) {
        pbStack_38 = (byte *)(*(long *)(param_1 + 0xb0) + 0xa8);
        do {
          bVar2 = *pbStack_38;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(pbStack_38,0x10);
          if (bVar5) {
            *pbStack_38 = 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while ((cVar4 != '\0') || ((bVar2 & 1) != 0));
        lVar10 = *(long *)(param_1 + 0xb0);
        if (*(char *)(lVar10 + 0xb8) == '\x01') {
          lVar10 = lVar10 + 0x10;
          func_0x000107c314e4(lVar10);
          func_0x00010873f9a8();
          FUN_1086772d8();
          ___cxa_throw(lVar10,&PTR_DAT_110a61998,FUN_1086772d4);
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10873c704);
          (*pcVar7)();
        }
        lVar3 = *(long *)(lVar10 + 0xe0);
        uVar1 = lVar3 + 1;
        uVar11 = *(ulong *)(lVar10 + 0xa0);
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar1 / uVar11;
        }
        *(ulong *)(lVar10 + 0xe0) = uVar1 - uVar6 * uVar11;
        *(long *)(lVar10 + 0xe8) = *(long *)(lVar10 + 0xe8) + 1;
        *(undefined1 *)(*(long *)(lVar10 + 0xc0) + *(long *)(lVar10 + 0xd0) * lVar3) = 1;
        *pbStack_38 = 0;
        func_0x000107c314e4(*(long *)(param_1 + 0xb0) + 0x58);
      }
      return;
    }
  }
  return;
}



/* Entry: 10873c974; end: 10873c9df;  */

void FUN_10873c974(long param_1)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  code *pcVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  
  iVar9 = *(int *)(param_1 + 0x164);
  FUN_108742540(param_1 + 0x158,1);
  func_0x00010873f7e4();
  FUN_10873c1f8();
  if (*(long *)(param_1 + 0x130) == 0 || iVar9 == 1) {
    return;
  }
  *(undefined1 *)(param_1 + 0x172) = 1;
  iVar9 = (int)*(undefined8 *)(param_1 + 0xb0) + 0x10;
  func_0x000107c314e8();
  if (iVar9 != 0) {
    pbVar1 = (byte *)(*(long *)(param_1 + 0xb0) + 0xa8);
    do {
      bVar3 = *pbVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar6) {
        *pbVar1 = 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while ((cVar5 != '\0') || ((bVar3 & 1) != 0));
    lVar10 = *(long *)(param_1 + 0xb0);
    if (*(char *)(lVar10 + 0xb8) == '\x01') {
      lVar10 = lVar10 + 0x10;
      func_0x000107c314e4(lVar10);
      func_0x00010873f9a8();
      FUN_1086772d8();
      ___cxa_throw(lVar10,&PTR_DAT_110a61998,FUN_1086772d4);
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10873c704);
      (*pcVar8)();
    }
    lVar4 = *(long *)(lVar10 + 0xe0);
    uVar2 = lVar4 + 1;
    uVar11 = *(ulong *)(lVar10 + 0xa0);
    uVar7 = 0;
    if (uVar11 != 0) {
      uVar7 = uVar2 / uVar11;
    }
    *(ulong *)(lVar10 + 0xe0) = uVar2 - uVar7 * uVar11;
    *(long *)(lVar10 + 0xe8) = *(long *)(lVar10 + 0xe8) + 1;
    *(undefined1 *)(*(long *)(lVar10 + 0xc0) + *(long *)(lVar10 + 0xd0) * lVar4) = 1;
    *pbVar1 = 0;
    func_0x000107c314e4(*(long *)(param_1 + 0xb0) + 0x58);
  }
  return;
}



/* Entry: 10873c9e0; end: 10873c9e7;  */

void FUN_10873c9e0(long param_1)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  code *pcVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  
  iVar9 = *(int *)(param_1 + 0x154);
  FUN_108742540(param_1 + 0x148,1);
  func_0x00010873f7e4();
  FUN_10873c1f8();
  if (*(long *)(param_1 + 0x120) == 0 || iVar9 == 1) {
    return;
  }
  *(undefined1 *)(param_1 + 0x162) = 1;
  iVar9 = (int)*(undefined8 *)(param_1 + 0xa0) + 0x10;
  func_0x000107c314e8();
  if (iVar9 != 0) {
    pbVar1 = (byte *)(*(long *)(param_1 + 0xa0) + 0xa8);
    do {
      bVar3 = *pbVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar6) {
        *pbVar1 = 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while ((cVar5 != '\0') || ((bVar3 & 1) != 0));
    lVar10 = *(long *)(param_1 + 0xa0);
    if (*(char *)(lVar10 + 0xb8) == '\x01') {
      lVar10 = lVar10 + 0x10;
      func_0x000107c314e4(lVar10);
      func_0x00010873f9a8();
      FUN_1086772d8();
      ___cxa_throw(lVar10,&PTR_DAT_110a61998,FUN_1086772d4);
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10873c704);
      (*pcVar8)();
    }
    lVar4 = *(long *)(lVar10 + 0xe0);
    uVar2 = lVar4 + 1;
    uVar11 = *(ulong *)(lVar10 + 0xa0);
    uVar7 = 0;
    if (uVar11 != 0) {
      uVar7 = uVar2 / uVar11;
    }
    *(ulong *)(lVar10 + 0xe0) = uVar2 - uVar7 * uVar11;
    *(long *)(lVar10 + 0xe8) = *(long *)(lVar10 + 0xe8) + 1;
    *(undefined1 *)(*(long *)(lVar10 + 0xc0) + *(long *)(lVar10 + 0xd0) * lVar4) = 1;
    *pbVar1 = 0;
    func_0x000107c314e4(*(long *)(param_1 + 0xa0) + 0x58);
  }
  return;
}



/* Entry: 10873c9e8; end: 10873cb23;  */

void FUN_10873c9e8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long lStack_30;
  
  FUN_1086882b8(param_2 + 0xb0);
  *(undefined2 *)(param_2 + 0x16c) = 0;
  if (*(char *)(param_2 + 0x154) == '\x01') {
    (**(code **)(**(long **)(param_2 + 0x140) + 0x20))(*(long **)(param_2 + 0x140),param_2 + 0x150);
    uStack_38 = *(undefined8 *)(param_2 + 0x148);
    uStack_40 = *(undefined8 *)(param_2 + 0x140);
    *(undefined8 *)(param_2 + 0x140) = 0;
    *(undefined8 *)(param_2 + 0x148) = 0;
    func_0x000107c29770(&uStack_40);
    if (*(char *)(param_2 + 0x154) == '\x01') {
      *(undefined1 *)(param_2 + 0x154) = 0;
    }
  }
  FUN_108659ed0(auStack_50,param_2 + 0x38);
  (**(code **)(**(long **)(param_2 + 0x98) + 0x18))(auStack_58);
  FUN_10873d9c0(param_2 + 0xf8);
  FUN_10873d9c0(param_2 + 0xe0);
  FUN_10865b428(&uStack_40);
  FUN_10865b464(&uStack_48,2);
  uVar1 = uStack_48;
  uStack_48 = 0;
  FUN_10865b56c(lStack_30 + 0x18,uVar1);
  func_0x00010865b5d0(&uStack_48);
  *(undefined8 *)(lStack_30 + 8) = 2;
  func_0x000107c2887c(lStack_30,&uStack_38);
  FUN_108688b68(lStack_30,0,auStack_50,auStack_58);
  uVar1 = uStack_40;
  uStack_48 = 0;
  uStack_40 = 0;
  *param_1 = uVar1;
  func_0x000107c27f9c(&uStack_48);
  FUN_10865b628(&uStack_40);
  func_0x00010873f850();
  func_0x000107c27f9c(auStack_50);
  return;
}



/* Entry: 10873cb24; end: 10873cdaf;  */

undefined8 *
FUN_10873cb24(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6,long *param_7,undefined8 *param_8)

{
  bool bVar1;
  long lVar2;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puStack_98;
  undefined8 *puStack_90;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [24];
  
  param_1[2] = &PTR_DAT_110a6a148;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_110a6a0b0;
  param_1[1] = &PTR_FUN_110a6a118;
  uVar3 = *param_4;
  param_1[6] = param_4[1];
  param_1[5] = uVar3;
  func_0x000107c278b8(auStack_78,&UNK_10f4b2b38);
  func_0x000107c28a44(param_1 + 7,param_2,auStack_78);
  func_0x00010873f670();
  lVar2 = param_3[1];
  uVar3 = *param_3;
  param_1[0x14] = param_3[1];
  param_1[0x13] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010873f56c();
    } while (extraout_w10 != 0);
  }
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = param_1 + 0x1d;
  *(undefined4 *)(param_1 + 0x1b) = 0x3f800000;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = param_1 + 0x20;
  param_1[0x21] = 0;
  lVar2 = param_5[1];
  uVar3 = *param_5;
  param_1[0x23] = param_5[1];
  param_1[0x22] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010873f56c();
    } while (extraout_w10_00 != 0);
  }
  lVar2 = param_6[1];
  uVar3 = *param_6;
  param_1[0x25] = param_6[1];
  param_1[0x24] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010873f56c();
    } while (extraout_w10_01 != 0);
  }
  lVar2 = param_7[1];
  lVar4 = *param_7;
  param_1[0x27] = param_7[1];
  param_1[0x26] = lVar4;
  if (lVar2 != 0) {
    do {
      func_0x00010873f56c();
    } while (extraout_w10_02 != 0);
  }
  lVar2 = param_8[1];
  uVar3 = *param_8;
  param_1[0x29] = param_8[1];
  param_1[0x28] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x00010873f56c();
    } while (extraout_w10_03 != 0);
  }
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)((long)param_1 + 0x154) = 0;
  FUN_1087423bc(param_1 + 0x2b,*param_7 != 0);
  bVar1 = false;
  if (*(int *)(param_1 + 5) != 0) {
    bVar1 = *(int *)((long)param_1 + 0x2c) != 0;
  }
  *(bool *)((long)param_1 + 0x16c) = bVar1;
  bVar1 = false;
  if (*(int *)((long)param_1 + 0x34) != 0) {
    bVar1 = *(int *)(param_1 + 6) != 0;
  }
  *(bool *)((long)param_1 + 0x16d) = bVar1;
  *(undefined4 *)((long)param_1 + 0x16e) = 0x1000000;
  *(undefined1 *)((long)param_1 + 0x172) = 1;
  func_0x000107c28c94(auStack_88,1);
  puStack_98 = param_1 + 0x15;
  puStack_90 = param_1 + 0x16;
  func_0x000107c28ca4(&puStack_98,auStack_88);
  func_0x000107c28ca8(auStack_88);
  return param_1;
}



/* Entry: 10873cdb0; end: 10873cdb3;  */

undefined8 * FUN_10873cdb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6a0b0;
  param_1[1] = &PTR_FUN_110a6a118;
  param_1[2] = &PTR_DAT_110a6a148;
  func_0x000107c29770(param_1 + 0x28);
  func_0x000107c28708(param_1 + 0x26);
  func_0x000107c288a4(param_1 + 0x24);
  func_0x000107c28808(param_1 + 0x22);
  func_0x00010866f0d0(param_1 + 0x1f);
  func_0x00010866f0d0(param_1 + 0x1c);
  func_0x00010869f0a4(param_1 + 0x17);
  func_0x000107c28a38(param_1 + 0x16);
  func_0x000107c28a3c(param_1 + 0x15);
  FUN_10873dd58(param_1 + 0x13);
  FUN_10865a95c(param_1 + 7);
  FUN_108687d5c(param_1 + 2);
  return param_1;
}



/* Entry: 10873cdb4; end: 10873cdc7;  */

void FUN_10873cdb4(void)

{
  FUN_10873cf34();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10873cdc8; end: 10873cde7;  */

undefined8 * FUN_10873cdc8(undefined8 *param_1)

{
  param_1[-1] = &PTR_FUN_110a6a0b0;
  *param_1 = &PTR_FUN_110a6a118;
  param_1[1] = &PTR_DAT_110a6a148;
  func_0x000107c29770(param_1 + 0x27);
  func_0x000107c28708(param_1 + 0x25);
  func_0x000107c288a4(param_1 + 0x23);
  func_0x000107c28808(param_1 + 0x21);
  func_0x00010866f0d0(param_1 + 0x1e);
  func_0x00010866f0d0(param_1 + 0x1b);
  func_0x00010869f0a4(param_1 + 0x16);
  func_0x000107c28a38(param_1 + 0x15);
  func_0x000107c28a3c(param_1 + 0x14);
  FUN_10873dd58(param_1 + 0x12);
  FUN_10865a95c(param_1 + 6);
  FUN_108687d5c(param_1 + 1);
  return param_1 + -1;
}



/* Entry: 10873cde8; end: 10873ce4f;  */

void FUN_10873cde8(void)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  ulong unaff_x20;
  
  func_0x00010873fa4c();
  if (!(bool)in_CY || (bool)in_ZR) {
    func_0x00010873f8b0(unaff_x20 >> 0x10 & 0xffff);
  }
  func_0x00010873f6b0();
  if (((uint)unaff_x20 & 0xffff) < 0x2b8) {
    func_0x00010873f60c();
  }
  func_0x00010873fa0c();
  func_0x00010873f3c8();
  return;
}



/* Entry: 10873ce50; end: 10873ce83;  */

void FUN_10873ce50(long param_1)

{
  undefined8 uVar1;
  
  FUN_1086d7004(param_1,0x11372c7f8);
  uVar1 = uRam000000011372cbd0;
  *(undefined8 *)(param_1 + 0x3e0) = uRam000000011372cbd8;
  *(undefined8 *)(param_1 + 0x3d8) = uVar1;
  return;
}



/* Entry: 10873ce84; end: 10873cee7;  */

void FUN_10873ce84(long *param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [32];
  undefined4 uStack_28;
  
  func_0x00010873f57c();
  func_0x00010873f8a0();
  uStack_28 = 0x28e;
  puVar1 = auStack_48;
  FUN_10873cee8(puVar1);
  FUN_10873cde8();
  func_0x00010873f75c(*(undefined8 *)(*param_1 + 0x58),param_1,puVar1);
  func_0x00010873f4cc();
  return;
}



/* Entry: 10873cee8; end: 10873cf33;  */

undefined8 FUN_10873cee8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010873f6b0(param_1,PTR_DAT_113268eb8);
  func_0x00010873f60c((uint)param_2 & 0x20f);
  func_0x00010873fa18();
  func_0x00010873f3c8();
  return param_2;
}



/* Entry: 10873cf34; end: 10873cfcb;  */

undefined8 * FUN_10873cf34(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6a0b0;
  param_1[1] = &PTR_FUN_110a6a118;
  param_1[2] = &PTR_DAT_110a6a148;
  func_0x000107c29770(param_1 + 0x28);
  func_0x000107c28708(param_1 + 0x26);
  func_0x000107c288a4(param_1 + 0x24);
  func_0x000107c28808(param_1 + 0x22);
  func_0x00010866f0d0(param_1 + 0x1f);
  func_0x00010866f0d0(param_1 + 0x1c);
  func_0x00010869f0a4(param_1 + 0x17);
  func_0x000107c28a38(param_1 + 0x16);
  func_0x000107c28a3c(param_1 + 0x15);
  FUN_10873dd58(param_1 + 0x13);
  FUN_10865a95c(param_1 + 7);
  FUN_108687d5c(param_1 + 2);
  return param_1;
}



/* Entry: 10873cfcc; end: 10873d027;  */

void FUN_10873cfcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint uStack_38;
  
  lVar1 = param_1;
  do {
    func_0x00010873f6b8();
    if ((int)lVar1 != 0) {
      FUN_10873d028(param_1 + 0x98);
      func_0x000107c2795c(param_1 + 0x98,param_3);
      *(undefined1 *)(param_1 + 0xb0) = 1;
      func_0x00010873f650();
      return;
    }
  } while ((uStack_38 >> 1 & 1) == 0);
  return;
}



/* Entry: 10873d028; end: 10873d04b;  */

void FUN_10873d028(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000107c278a8();
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Entry: 10873d04c; end: 10873d0eb;  */

void FUN_10873d04c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  func_0x00010873f9f8();
  *puVar2 = FUN_10873f1b4;
  puVar2[1] = FUN_10873f2b4;
  uVar1 = param_1[1];
  puVar2[4] = *param_1;
  puVar2[5] = uVar1;
  param_1[1] = 0;
  func_0x00010873f74c();
  func_0x00010873f920();
  puVar2[6] = param_2;
  *(undefined1 *)(puVar2 + 8) = 0;
  func_0x00010873f770(*param_2);
  func_0x00010873f974();
  return;
}



/* Entry: 10873d0ec; end: 10873d20f;  */

void FUN_10873d0ec(void)

{
  uint uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  uint extraout_w8;
  long *extraout_x8;
  long *plVar3;
  long *extraout_x8_00;
  long *extraout_x8_01;
  int extraout_w10;
  uint extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w11;
  uint extraout_w11_00;
  uint uVar4;
  long *unaff_x20;
  
  func_0x00010873faac();
  puVar2 = (undefined8 *)0x38;
  __Znwm();
  *puVar2 = FUN_10873f13c;
  puVar2[1] = FUN_10873f190;
  func_0x000107c27f94(puVar2 + 2);
  func_0x00010873f520();
  FUN_10873d210(puVar2 + 5);
  puVar2[4] = puVar2[5];
  do {
    func_0x00010873f354();
  } while (extraout_w10 != 0);
  func_0x00010873f4e4(puVar2[4]);
  if ((extraout_w8 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar2 + 6) = 0;
    func_0x00010873f314();
    if (*unaff_x20 == 0) {
      func_0x000107c3a5c0();
    }
    func_0x00010873f7c0();
    plVar3 = extraout_x8;
    do {
      if (*plVar3 == 0) {
        func_0x00010873f3b8();
        plVar3 = extraout_x8_01;
        uVar1 = extraout_w10_01;
        uVar4 = extraout_w11_00;
      }
      else {
        func_0x00010873f5a0();
        plVar3 = extraout_x8_00;
        uVar1 = extraout_w10_00;
        uVar4 = extraout_w11;
      }
      if ((uVar4 & 1) != 0) {
        func_0x00010873f404();
        if ((bool)in_ZR) {
          func_0x00010873f378();
          func_0x00010873f344();
          func_0x00010873f324();
        }
        func_0x00010873f2e8();
        return;
      }
    } while ((uVar1 >> 1 & 1) == 0);
  }
  func_0x00010873f958();
  func_0x00010873f4dc();
  func_0x00010873f4c4();
  func_0x00010873f518();
  func_0x00010873f49c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(puVar2);
  return;
}



/* Entry: 10873d210; end: 10873d697;  */

void FUN_10873d210(long *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  uint extraout_w8_01;
  uint extraout_w8_02;
  long *extraout_x8;
  long *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  long extraout_x8_04;
  long *plVar9;
  long *extraout_x8_05;
  long *extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  undefined1 extraout_w9;
  undefined1 extraout_w9_00;
  uint extraout_w9_01;
  uint extraout_w9_02;
  int extraout_w10;
  int extraout_w10_00;
  uint extraout_w10_01;
  uint extraout_w10_02;
  uint uVar10;
  int extraout_w10_03;
  int extraout_w10_04;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong uVar11;
  uint extraout_w11;
  uint extraout_w11_00;
  long lVar12;
  long *plVar13;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long alStack_60 [4];
  
  func_0x00010873fa80();
  lVar12 = *param_1;
  puVar4 = (undefined8 *)0x70;
  __Znwm();
  *puVar4 = FUN_10873edd4;
  puVar4[1] = FUN_10873f0e0;
  puVar4[0xc] = lVar12;
  func_0x00010873f74c();
  func_0x00010873f520();
  *(undefined1 *)(lVar12 + 0x172) = 0;
  uVar2 = *(int *)(lVar12 + 0x164) != 0;
  uVar3 = *(int *)(lVar12 + 0x164) == 1;
  if ((bool)uVar3) {
    FUN_10873a76c(puVar4 + 9,lVar12);
  }
  else {
    FUN_10873d698(&uStack_68);
    do {
      uStack_70 = 0;
      lVar5 = alStack_60[0] + 0x10;
      func_0x000107c27ff0(lVar5,&uStack_70,1,2);
      if ((int)lVar5 != 0) {
        FUN_10873d028(alStack_60[0] + 0x98);
        *(undefined8 *)(alStack_60[0] + 0x98) = 0;
        *(undefined8 *)(alStack_60[0] + 0xa0) = 0;
        *(undefined8 *)(alStack_60[0] + 0xa8) = 0;
        *(undefined1 *)(alStack_60[0] + 0xb0) = 1;
        *(undefined8 *)(alStack_60[0] + 0x10) = 2;
        func_0x000107c31508(alStack_60[0],alStack_60);
        break;
      }
    } while (((uint)uStack_70 >> 1 & 1) == 0);
    puVar4[9] = uStack_68;
    uStack_68 = 0;
    func_0x000107c27fec(&uStack_68);
  }
  puVar4[0xb] = puVar4[9];
  if (puVar4[9] != 0) {
    do {
      func_0x00010873f354();
    } while (extraout_w10 != 0);
  }
  plVar8 = (long *)(lVar12 + 0x38);
  puVar6 = puVar4 + 0xb;
  FUN_10873ac1c(puVar4 + 10);
  func_0x00010873f890();
  do {
    func_0x00010873f354();
  } while (extraout_w10_00 != 0);
  func_0x00010873f4e4(puVar4[7]);
  if ((extraout_w8_01 >> 1 & 1) == 0) {
    *(undefined1 *)(puVar4 + 0xd) = 0;
    plVar13 = (long *)puVar4[7];
    func_0x00010873f52c();
    lVar12 = *plVar8;
    if (lVar12 == 0) {
      func_0x000107c3a5c0();
      lVar12 = *plVar8;
    }
    plVar7 = plVar13 + 2;
    do {
      if (*plVar7 != 0) {
        func_0x00010873f5a0();
        plVar7 = extraout_x8;
        uVar10 = extraout_w10_01;
        if ((extraout_w11 & 1) == 0) goto LAB_10873d384;
LAB_10873d524:
        func_0x00010873f438();
        if ((bool)uVar3) {
          func_0x00010873f378();
          uVar1 = extraout_w8_00;
          if ((bool)uVar2) {
            uVar1 = extraout_w9_00;
          }
          func_0x00010873f344();
          *(undefined1 *)plVar8 = uVar1;
          func_0x00010873f364(0);
          plVar13[0x12] = (long)plVar8;
        }
        func_0x00010873f418();
        *(long *)(extraout_x8_08 + 0x20) = lVar12;
LAB_10873d554:
        func_0x00010873f3a8(plVar13[0x12]);
        func_0x00010873fa40();
        goto LAB_10873d560;
      }
      func_0x00010873f3b8();
      plVar7 = extraout_x8_00;
      uVar10 = extraout_w10_02;
      if ((extraout_w11_00 & 1) != 0) goto LAB_10873d524;
LAB_10873d384:
    } while ((uVar10 >> 1 & 1) == 0);
  }
  FUN_10873af78(puVar4 + 7);
  func_0x00010873f4bc();
  func_0x00010873f510();
  func_0x00010873f5bc();
  func_0x00010873f770(*(undefined8 *)(puVar4[0xc] + 0x98));
  (*extraout_x8_01)();
  func_0x00010086e594(puVar4 + 9);
  func_0x00010873f678();
  func_0x00010873f914();
  lVar12 = puVar4[0xc];
  func_0x00010873f538();
  if (*(long *)(lVar12 + 0x140) == 0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    func_0x00010873f6e8();
    (*extraout_x8_02)();
    func_0x00010873f62c();
    puVar6 = *(undefined8 **)(lVar12 + 0x140);
    func_0x00010873f770();
    (*extraout_x8_03)();
  }
  func_0x0001087424a4(puVar4[0xc] + 0x158);
  plVar7 = (long *)puVar4[0xc];
  *(undefined1 *)(plVar7 + 0x2e) = 1;
  func_0x00010873f994(2 - (uint)*(byte *)((long)plVar7 + 0x169));
  func_0x00010873f52c();
  do {
    func_0x00010873fa2c();
    if (extraout_x8_04 != 0) {
      do {
        func_0x00010873f354();
      } while (extraout_w10_03 != 0);
    }
    plVar8 = puVar4 + 7;
    func_0x000107c314f0();
    if (((ulong)plVar8 & 1) == 0) {
      *(undefined1 *)(puVar4 + 0xd) = 1;
      plVar13 = (long *)puVar4[7];
      if (*plVar7 == 0) {
        func_0x000107c3a5c0();
      }
      func_0x00010873f820();
      if (((ulong)plVar8 & 1) != 0) break;
    }
    plVar13 = puVar4 + 7;
    func_0x000107c28c9c();
    plVar8 = plVar13;
    func_0x00010873f71c();
    if (((uint)plVar13 >> 8 & 1) == 0) {
      func_0x00010873f72c();
      goto LAB_10873d574;
    }
    plVar8 = (long *)puVar4[0xc];
    FUN_10873aff4(puVar4 + 10);
    func_0x00010873f890();
    do {
      func_0x00010873f354();
    } while (extraout_w10_04 != 0);
    func_0x00010873f4e4(puVar4[7]);
    if ((extraout_w8_02 >> 1 & 1) == 0) {
      *(undefined1 *)(puVar4 + 0xd) = 2;
      plVar13 = (long *)puVar4[7];
      lVar12 = *plVar7;
      if (lVar12 == 0) {
        func_0x000107c3a5c0();
        lVar12 = *plVar8;
      }
      plVar9 = plVar13 + 2;
      do {
        if (*plVar9 == 0) {
          func_0x00010873f880();
          plVar9 = extraout_x8_06;
          uVar10 = extraout_w9_02;
          uVar11 = extraout_x10_00;
        }
        else {
          func_0x00010873f764();
          plVar9 = extraout_x8_05;
          uVar10 = extraout_w9_01;
          uVar11 = extraout_x10;
        }
        if ((uVar11 & 1) != 0) {
          func_0x00010873f438();
          if ((bool)uVar3) {
            func_0x00010873f378();
            uVar1 = extraout_w8;
            if ((bool)uVar2) {
              uVar1 = extraout_w9;
            }
            func_0x00010873f500();
            *(undefined1 *)plVar8 = uVar1;
            func_0x00010873f364(0);
            plVar13[0x12] = (long)plVar8;
          }
          func_0x00010873f418();
          *(long *)(extraout_x8_07 + 0x20) = lVar12;
          goto LAB_10873d554;
        }
      } while ((uVar10 >> 1 & 1) == 0);
    }
    func_0x000107c28834(puVar4 + 7);
    func_0x00010873f4bc();
    func_0x00010873f510();
  } while( true );
LAB_10873d560:
  func_0x00010873f8d8();
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar6 != 0) goto LAB_10873d598;
  do {
    func_0x00010873f5b4();
LAB_10873d598:
    func_0x000104bd46a0(plVar8);
  } while ((int)puVar6 == 0);
  func_0x00010873f968();
  func_0x00010873f72c();
  uVar3 = (int)plVar13 == 3;
  if ((bool)uVar3) {
    func_0x00010873f4a4();
    ___cxa_end_catch();
LAB_10873d574:
    func_0x00010873f518();
  }
  else {
    uVar3 = (int)plVar13 == 2;
    if ((bool)uVar3) {
      func_0x00010873f4a4();
      ___cxa_end_catch();
      goto LAB_10873d574;
    }
    func_0x00010873f4a4();
    func_0x00010873f4ac();
    ___cxa_end_catch();
  }
  func_0x00010873f49c();
  func_0x00010873f4d4();
  goto LAB_10873d560;
}



/* Entry: 10873d698; end: 10873d6fb;  */

void FUN_10873d698(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = (undefined8 *)0xb8;
  __Znwm();
  func_0x000107c31510();
  *puVar1 = &PTR_FUN_110a6a280;
  *(undefined1 *)(puVar1 + 0x13) = 0;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  *param_1 = puVar1;
  param_1[1] = puVar1;
  func_0x000107c27f98(&uStack_30);
  func_0x00010873f850();
  return;
}


