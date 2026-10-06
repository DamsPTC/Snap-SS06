/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10875d474; end: 10875d487;  */

void FUN_10875d474(void)

{
  FUN_10875d73c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10875d488; end: 10875d497;  */

void FUN_10875d488(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010875d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10875d498; end: 10875d4f7;  */

long FUN_10875d498(long param_1)

{
  long alStack_30 [2];
  
  func_0x00010084fa6c(alStack_30,param_1 + 0x10);
  if (alStack_30[0] == 0) {
    alStack_30[0] = 0;
  }
  else {
    func_0x00010084fb0c();
  }
  func_0x000107c297a4(alStack_30);
  return alStack_30[0];
}



/* Entry: 10875d4f8; end: 10875d55b;  */

void FUN_10875d4f8(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 10875d55c; end: 10875d56f;  */

void FUN_10875d55c(void)

{
  func_0x00010875d708();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10875d570; end: 10875d587;  */

void FUN_10875d570(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x98);
  func_0x0001005529b4(lVar2 + 0x20);
  lVar1 = lVar2 + 0x40;
  if ((*(byte *)(lVar2 + 0x50) & 1) == 0) {
    func_0x0001004b4e98();
    *(long *)(lVar2 + 0x48) = lVar1;
    *(undefined1 *)(lVar2 + 0x50) = 1;
  }
  return;
}



/* Entry: 10875d588; end: 10875d5cb;  */

void FUN_10875d588(int param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010875d9cc();
  if (param_1 != 0) {
    func_0x00010084fb48(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010875d5bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x20 + 8))(param_2,(undefined8 *)(unaff_x20 + 8));
    return;
  }
  return;
}



/* Entry: 10875d5cc; end: 10875d677;  */

void FUN_10875d5cc(int param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x20;
  undefined1 auStack_80 [72];
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  func_0x00010875d9cc();
  if (param_1 != 0) {
    uStack_38 = (undefined4)param_3;
    uStack_34 = 1;
    FUN_1086818c8(*(undefined8 *)(unaff_x20 + 0x98),&uStack_38);
    if (*(char *)(param_4 + 0x40) == '\x01') {
      FUN_108681988(*(undefined8 *)(unaff_x20 + 0x98),param_4,0);
    }
    FUN_10875bae4(auStack_80,param_4);
    (**(code **)(unaff_x20 + 0x38))(param_2,param_3,auStack_80,(undefined8 *)(unaff_x20 + 0x38));
    func_0x000107c29564(auStack_80);
  }
  return;
}



/* Entry: 10875d678; end: 10875d67b;  */

undefined8 * FUN_10875d678(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6b138;
  func_0x00010875d9e4(param_1[8]);
  func_0x00010875d9e4(param_1[2]);
  return param_1;
}



/* Entry: 10875d67c; end: 10875d68f;  */

void FUN_10875d67c(void)

{
  FUN_10875d6cc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10875d690; end: 10875d6cb;  */

void FUN_10875d690(void)

{
  return;
}



/* Entry: 10875d6cc; end: 10875d73b;  */

undefined8 * FUN_10875d6cc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6b138;
  func_0x00010875d9e4(param_1[8]);
  func_0x00010875d9e4(param_1[2]);
  return param_1;
}



/* Entry: 10875d73c; end: 10875d74b;  */

void FUN_10875d73c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6b030;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10875d74c; end: 10875d7e3;  */

void FUN_10875d74c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [72];
  
  lVar1 = *(long *)(param_4 + 0x10);
  FUN_10875bc3c(auStack_68,param_3);
  FUN_10875bbdc(auStack_68,*(undefined4 *)(lVar1 + 0x28),lVar1 + 0x18);
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  FUN_108770c94();
  if ((1 << (ulong)((uint)param_1 & 0x1f) & 0xfdbU) == 0) {
    FUN_10875eb20(uVar2,0);
  }
  else {
    FUN_10875ebcc(uVar2,param_1);
  }
  func_0x000107c29564(auStack_68);
  return;
}



/* Entry: 10875d7e4; end: 10875d803;  */

void FUN_10875d7e4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10875d448();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10875d804; end: 10875d81b;  */

void FUN_10875d804(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10875d81c; end: 10875d857;  */

undefined8 * FUN_10875d81c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6afc0;
  func_0x00010086ab34(param_1 + 0x3f);
  FUN_1088f050c(param_1 + 0x37);
  *param_1 = &PTR_DAT_110a6b230;
  func_0x000107c297ac(param_1 + 0x35);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x32);
  func_0x00010875b6a8(param_1 + 0x2e);
  FUN_1086e8d68(param_1 + 0x2a);
  func_0x00010875b758(param_1 + 0x25);
  func_0x000100864b68(param_1 + 0x20);
  func_0x0001086cf230(param_1 + 0x1a);
  func_0x00010875be10(param_1 + 0x19);
  func_0x000107c27a04(param_1 + 0x16);
  *param_1 = &PTR_FUN_110a6b2b8;
  func_0x000107c2979c(param_1 + 0x13);
  func_0x00010865f8f8(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 10875d858; end: 10875d87f;  */

void FUN_10875d858(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10875d880; end: 10875d89f;  */

void FUN_10875d880(void)

{
  func_0x00010875da00();
  FUN_10875d8a0();
  return;
}



/* Entry: 10875d8a0; end: 10875d8af;  */

void FUN_10875d8a0(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10875d8b0; end: 10875d8df;  */

long * FUN_10875d8b0(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10875d8e0; end: 10875d8ff;  */

void FUN_10875d8e0(void)

{
  func_0x00010875da00();
  FUN_10875d900();
  return;
}



/* Entry: 10875d900; end: 10875d90f;  */

void FUN_10875d900(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10875d910; end: 10875d93f;  */

long * FUN_10875d910(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10875d940; end: 10875d98f;  */

long FUN_10875d940(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 10875d990; end: 10875da27;  */

void FUN_10875d990(void)

{
  return;
}



/* Entry: 10875da28; end: 10875dc07;  */

undefined8 *
FUN_10875da28(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined8 *param_7,undefined8 *param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 *param_12,
             undefined8 param_13)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined4 uStack_d0;
  undefined1 uStack_cc;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b0;
  long *plStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined8 *puStack_70;
  undefined ***pppuStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = &PTR_DAT_110a6b230;
  ppuStack_78 = &PTR_FUN_110a6b198;
  pppuStack_60 = &ppuStack_78;
  uStack_80 = *param_7;
  *param_7 = 0;
  puStack_70 = param_1;
  FUN_10875e9fc(param_1,param_11,param_2,param_4,&ppuStack_78,param_13,&uStack_80,param_9);
  func_0x000107c29578(&uStack_80);
  func_0x00010865f8f8(&ppuStack_78);
  *param_1 = &PTR_DAT_110a6b230;
  puVar6 = param_1 + 0x16;
  *puVar6 = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  uVar5 = *param_3;
  param_1[0x17] = param_3[1];
  *puVar6 = uVar5;
  param_1[0x18] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  uVar5 = *param_8;
  *param_8 = 0;
  param_1[0x19] = uVar5;
  FUN_1086cf200(param_1 + 0x1a);
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0x3f800000;
  FUN_10875e81c(param_1 + 0x2a,param_6);
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = param_5;
  plVar2 = param_1 + 0x32;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(plVar2,param_11);
  uVar5 = *param_12;
  param_1[0x36] = param_12[1];
  param_1[0x35] = uVar5;
  *param_12 = 0;
  param_12[1] = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x00010875b6a8(param_1 + 0x2e);
  FUN_1086e8d68(param_1 + 0x2a);
  func_0x00010875b758(param_1 + 0x25);
  func_0x000100864b68(param_1 + 0x20);
  func_0x0001086cf230(param_1 + 0x1a);
  func_0x00010875be10(param_1 + 0x19);
  func_0x000107c27a04(puVar6);
  func_0x00010875b664(param_1);
  plVar3 = plVar2;
  __Unwind_Resume();
  uStack_b0 = param_11;
  pcStack_88 = FUN_10875dc08;
  plStack_a8 = plVar2;
  puStack_a0 = puVar6;
  puStack_98 = param_1;
  puStack_90 = &stack0xfffffffffffffff0;
  (**(code **)(*plVar3 + 0x40))(&uStack_c8);
  uVar1 = uStack_c0;
  uVar7 = uStack_c8;
  if (uStack_c8 != uStack_c0) {
    for (; uVar7 != uVar1; uVar7 = uVar7 + 0x18) {
      uVar4 = uVar7;
      (**(code **)(*(long *)plVar3[0x13] + 0x18))();
      if ((uVar4 & 1) != 0) {
        FUN_1086995ac(plVar3 + 0x20,uVar7);
      }
    }
    if (plVar3[0x23] == (long)(uStack_c0 - uStack_c8) / 0x18) {
      uStack_d0 = 1;
      uStack_cc = 1;
      FUN_1086818c8(plVar3[0xb],&uStack_d0);
      FUN_10875ebcc(plVar3,5);
      puVar6 = (undefined8 *)0x1;
      goto LAB_10875dcbc;
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_10875dcbc:
  func_0x000107c27a04(&uStack_c8);
  return puVar6;
}



/* Entry: 10875dc08; end: 10875dcf7;  */

undefined8 FUN_10875dc08(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  ulong uStack_48;
  ulong uStack_40;
  
  (**(code **)(*param_1 + 0x40))(&uStack_48);
  uVar1 = uStack_40;
  uVar4 = uStack_48;
  if (uStack_48 != uStack_40) {
    for (; uVar4 != uVar1; uVar4 = uVar4 + 0x18) {
      uVar2 = uVar4;
      (**(code **)(*(long *)param_1[0x13] + 0x18))();
      if ((uVar2 & 1) != 0) {
        FUN_1086995ac(param_1 + 0x20,uVar4);
      }
    }
    if (param_1[0x23] == (long)(uStack_40 - uStack_48) / 0x18) {
      uStack_50 = 1;
      uStack_4c = 1;
      FUN_1086818c8(param_1[0xb],&uStack_50);
      FUN_10875ebcc(param_1,5);
      uVar3 = 1;
      goto LAB_10875dcbc;
    }
  }
  uVar3 = 0;
LAB_10875dcbc:
  func_0x000107c27a04(&uStack_48);
  return uVar3;
}



/* Entry: 10875dcf8; end: 10875e623;  */

void FUN_10875dcf8(long param_1,ulong *param_2)

{
  ulong *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  undefined ***pppuVar12;
  undefined **extraout_x8;
  undefined **ppuVar13;
  undefined ***pppuVar14;
  undefined **extraout_x8_00;
  undefined **ppuVar15;
  byte bVar16;
  uint uVar17;
  undefined ***pppuVar18;
  long lVar19;
  long *plVar20;
  ulong *puVar21;
  ulong uVar22;
  undefined8 uVar23;
  long *plVar24;
  undefined ***pppuVar25;
  long lStack_2c8;
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [40];
  undefined1 auStack_250 [24];
  undefined1 auStack_238 [40];
  undefined **ppuStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_1c0 [24];
  undefined4 auStack_1a8 [6];
  undefined **ppuStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined **ppuStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 uStack_130;
  undefined8 auStack_e8 [3];
  int iStack_d0;
  undefined1 auStack_c8 [24];
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  ppuStack_160 = (undefined **)((ulong)ppuStack_160 & 0xffffffff00000000);
  FUN_10875e624(param_1 + 0xd0,&ppuStack_160);
  lStack_2c8 = 0;
  lStack_1d8 = 0;
  lStack_1d0 = 0;
  uStack_1c8 = 0;
  puVar21 = param_2;
  if ((*param_2 & 1) != 0) {
    puVar21 = (ulong *)(*param_2 + 7);
  }
  puVar1 = puVar21 + (int)param_2[1];
  func_0x00010875e9c4();
  do {
    if (puVar21 == puVar1) {
      plVar20 = (long *)(param_1 + 0x110);
      while (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0) {
        func_0x000107c27994(&ppuStack_160,plVar20 + 2);
        uStack_148 = CONCAT44(uStack_148._4_4_,5);
        uStack_130 = 0;
        func_0x00010875e980();
        func_0x00010875e99c();
        plVar24 = (long *)**(undefined8 **)(param_1 + 0x58);
        uStack_158 = 0;
        uStack_150 = 0;
        uStack_148 = 0;
        ppuStack_160 = &PTR_FUN_110a609a8;
        uStack_140 = CONCAT44(uStack_140._4_4_,0x287);
        puVar11 = auStack_290;
        func_0x00010875e974(puVar11);
        func_0x00010875e9bc();
        pppuVar18 = &ppuStack_160;
        func_0x000107c28824(pppuVar18,auStack_290,puVar11);
        func_0x000107c278b8(auStack_2a8,"error_code");
        ppuStack_210 = (undefined **)CONCAT44(ppuStack_210._4_4_,5);
        pppuVar12 = &ppuStack_210;
        FUN_108843ae8(pppuVar12);
        func_0x000107c28824(pppuVar18,auStack_2a8,pppuVar12);
        func_0x000107c278b8(auStack_2c0,"error_source");
        func_0x000107c28824(pppuVar18,auStack_2c0,&DAT_10f4b02be);
        func_0x000107c2884c(auStack_278,pppuVar18);
        func_0x00010875e9d4(*(undefined8 *)(*plVar24 + 0x50));
        func_0x000107c2882c(auStack_278);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2c0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_2a8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_290);
        func_0x00010875e9a4();
        lStack_2c8 = lStack_2c8 + 1;
      }
      lVar19 = *(long *)(param_1 + 0xb0);
      lVar2 = *(long *)(param_1 + 0xb8);
      lVar4 = (lVar2 - lVar19) / 0x18;
      if (lVar4 == (lStack_1d0 - lStack_1d8) / 0x38) {
        FUN_10875c8f0(param_1 + 0x170,&lStack_1d8);
        if (lVar2 != lVar19 && lVar4 == lStack_2c8) {
          if ((*param_2 & 1) != 0) {
            param_2 = (ulong *)(*param_2 + 7);
          }
          if (*(int *)(*param_2 + 0x1c) == 2) {
            ppuVar15 = *(undefined ***)(*param_2 + 0x10);
          }
          else {
            ppuVar15 = &PTR_PTR_11327f4d0;
          }
          ppuVar13 = &PTR_PTR_11326b328;
          if ((undefined **)ppuVar15[4] != (undefined **)0x0) {
            ppuVar13 = (undefined **)ppuVar15[4];
          }
          FUN_108681988(*(undefined8 *)(param_1 + 0x58),ppuVar13,1);
        }
        FUN_10875ec20(param_1);
      }
      else {
        FUN_10875ebcc(param_1,0);
      }
      func_0x00010875b6a8(&lStack_1d8);
      return;
    }
    uVar22 = *puVar21;
    iVar3 = *(int *)(uVar22 + 0x1c);
    if (iVar3 == 3) {
      ppuVar13 = *(undefined ***)(*(long *)(uVar22 + 0x10) + 0x18);
      ppuVar15 = &PTR_PTR_11326cb58;
      if (ppuVar13 != (undefined **)0x0) {
        ppuVar15 = ppuVar13;
      }
      func_0x000107c29ee0(&ppuStack_210,ppuVar15);
      func_0x0001089069c0();
      uStack_158 = uStack_208;
      ppuStack_160 = ppuStack_210;
      uStack_150 = uStack_200;
      ppuStack_210 = (undefined **)0x0;
      uStack_208 = 0;
      uStack_200 = 0;
      uStack_148 = CONCAT71(uStack_148._1_7_,1);
      uStack_140 = 0;
      uStack_138 = 0;
      uStack_148 = CONCAT44((int)uVar22,(undefined4)uStack_148);
      uStack_130 = 1;
      func_0x00010875e980();
      func_0x00010875e99c();
      plVar20 = (long *)**(undefined8 **)(param_1 + 0x58);
      uStack_158 = 0;
      uStack_150 = 0;
      uStack_148 = 0;
      uStack_140 = CONCAT44(uStack_140._4_4_,0x287);
      puVar11 = auStack_250;
      ppuStack_160 = extraout_x8;
      func_0x00010875e974(puVar11);
      func_0x00010875e9bc();
      pppuVar18 = &ppuStack_160;
      func_0x000107c28824(pppuVar18,auStack_250,puVar11);
      func_0x000107c2884c(auStack_238,pppuVar18);
      func_0x00010875e9d4(*(undefined8 *)(*plVar20 + 0x50));
      func_0x000107c2882c(auStack_238);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_250);
      func_0x00010875e9a4();
LAB_10875e264:
      func_0x000107c27914(&ppuStack_210);
    }
    else if (iVar3 == 2) {
      lVar19 = *(long *)(uVar22 + 0x10);
      ppuVar15 = &PTR_PTR_11326b328;
      if (*(undefined ***)(lVar19 + 0x20) != (undefined **)0x0) {
        ppuVar15 = *(undefined ***)(lVar19 + 0x20);
      }
      uVar8 = *(undefined4 *)(ppuVar15 + 7);
      ppuVar15 = &PTR_PTR_11326cb58;
      if (*(undefined ***)(lVar19 + 0x18) != (undefined **)0x0) {
        ppuVar15 = *(undefined ***)(lVar19 + 0x18);
      }
      func_0x000107c29ee0(&ppuStack_190,ppuVar15);
      ppuVar15 = &PTR_PTR_11326b328;
      if (*(undefined ***)(lVar19 + 0x20) != (undefined **)0x0) {
        ppuVar15 = *(undefined ***)(lVar19 + 0x20);
      }
      (**(code **)(**(long **)(param_1 + 0x1a8) + 0x10))
                (*(long **)(param_1 + 0x1a8),ppuVar15,
                 *(undefined4 *)(*(long *)(param_1 + 0x58) + 0xfc));
      plVar20 = (long *)**(undefined8 **)(param_1 + 0x58);
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      func_0x00010875e9c4();
      uStack_78 = 0x287;
      puVar9 = auStack_e8;
      func_0x00010875e974(puVar9);
      func_0x00010875e9bc();
      puVar11 = auStack_98;
      func_0x000107c28824(puVar11,auStack_e8,puVar9);
      func_0x00010875e9e8(&ppuStack_b0);
      ppuVar15 = &PTR_PTR_11326b328;
      if (*(undefined ***)(lVar19 + 0x20) != (undefined **)0x0) {
        ppuVar15 = *(undefined ***)(lVar19 + 0x20);
      }
      uVar7 = *(undefined4 *)(ppuVar15 + 7);
      FUN_10875e670();
      auStack_1a8[0] = uVar7;
      puVar10 = auStack_1a8;
      FUN_108843ae8(puVar10);
      func_0x000107c28824(puVar11,&ppuStack_b0,puVar10);
      func_0x00010875e9dc(auStack_c8);
      func_0x000107c28824(puVar11,auStack_c8,&DAT_10f4b02d1);
      func_0x000107c2884c(&ppuStack_210,puVar11);
      (**(code **)(*plVar20 + 0x50))(plVar20,&ppuStack_210);
      func_0x000107c2882c(&ppuStack_210);
      func_0x00010875e9ac();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_b0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_e8);
      func_0x00010875e9b4();
      plVar20 = (long *)**(undefined8 **)(param_1 + 0x58);
      ppuVar15 = &PTR_PTR_11326b328;
      if (*(undefined ***)(lVar19 + 0x20) != (undefined **)0x0) {
        ppuVar15 = *(undefined ***)(lVar19 + 0x20);
      }
      FUN_108681744(auStack_98,ppuVar15,*(undefined4 *)(param_1 + 0xa8),1);
      (**(code **)(*plVar20 + 0x50))(plVar20,auStack_98);
      FUN_10875e670();
      func_0x00010875e9b4();
      uStack_158 = uStack_188;
      ppuStack_160 = ppuStack_190;
      uStack_150 = uStack_180;
      uStack_188 = 0;
      uStack_180 = 0;
      ppuStack_190 = (undefined **)0x0;
      uStack_148 = CONCAT44(uStack_148._4_4_,uVar8);
      uStack_130 = 0;
      func_0x000107c27914(&ppuStack_190);
      func_0x00010875e980();
      func_0x00010875e99c();
      lStack_2c8 = lStack_2c8 + 1;
    }
    else if (iVar3 == 1) {
      uVar23 = *(undefined8 *)(uVar22 + 0x10);
      func_0x0001086a6ac0(&ppuStack_160,uVar23);
      func_0x000107c29ee0(&ppuStack_b0,&ppuStack_160);
      func_0x000107c2a2e0(&ppuStack_160);
      pppuVar18 = *(undefined ****)(param_1 + 0x130);
      bVar16 = 0;
      if (pppuVar18 != (undefined ***)0x0) {
        if (*(long *)(param_1 + 0x140) == 0) {
          bVar16 = 0;
        }
        else {
          pppuVar12 = &ppuStack_b0;
          FUN_108848654();
          uVar22 = (long)pppuVar18 - 1;
          if (((ulong)pppuVar18 & uVar22) == 0) {
            pppuVar25 = (undefined ***)((ulong)pppuVar12 & uVar22);
          }
          else {
            pppuVar25 = pppuVar12;
            if (pppuVar18 <= pppuVar12) {
              uVar5 = 0;
              uVar17 = (uint)pppuVar18;
              if (uVar17 != 0) {
                uVar5 = (uint)pppuVar12 / uVar17;
              }
              pppuVar25 = (undefined ***)(ulong)((uint)pppuVar12 - uVar5 * uVar17);
            }
          }
          plVar20 = *(long **)(*(long *)(param_1 + 0x128) + (long)pppuVar25 * 8);
          if (plVar20 != (long *)0x0) {
            do {
              while( true ) {
                plVar20 = (long *)*plVar20;
                if (plVar20 == (long *)0x0) goto LAB_10875e0e8;
                pppuVar14 = (undefined ***)plVar20[1];
                if (pppuVar14 != pppuVar12) break;
                lVar19 = (long)(plVar20 + 2);
                func_0x000107c28078(lVar19,&ppuStack_b0);
                if ((int)lVar19 != 0) {
                  bVar16 = *(byte *)(plVar20 + 5);
                  goto LAB_10875e0f8;
                }
              }
              if (((ulong)pppuVar18 & uVar22) == 0) {
                pppuVar14 = (undefined ***)((ulong)pppuVar14 & uVar22);
              }
              else if (pppuVar18 <= pppuVar14) {
                uVar6 = 0;
                if (pppuVar18 != (undefined ***)0x0) {
                  uVar6 = (ulong)pppuVar14 / (ulong)pppuVar18;
                }
                pppuVar14 = (undefined ***)((long)pppuVar14 - uVar6 * (long)pppuVar18);
              }
            } while (pppuVar14 == pppuVar25);
          }
LAB_10875e0e8:
          bVar16 = 0;
        }
      }
LAB_10875e0f8:
      plVar20 = *(long **)(param_1 + 200);
      uVar8 = *(undefined4 *)(param_1 + 0x188);
      FUN_10868d098(&ppuStack_160,uVar23);
      (**(code **)(*plVar20 + 0x28))
                (auStack_e8,plVar20,&ppuStack_b0,1,uVar8,param_1 + 0xd0,&ppuStack_160,0,bVar16 & 1);
      FUN_1089058f8(&ppuStack_160);
      uStack_188 = 0;
      uStack_180 = 0;
      uStack_178 = 0;
      func_0x00010875e9c4();
      uStack_170 = 0x287;
      puVar11 = auStack_c8;
      ppuStack_190 = extraout_x8_00;
      func_0x00010875e974(puVar11);
      func_0x00010875e9bc();
      pppuVar18 = &ppuStack_190;
      func_0x000107c28824(pppuVar18,auStack_c8,puVar11);
      func_0x000107c2884c(auStack_98,pppuVar18);
      func_0x00010875e9ac();
      func_0x00010875e9f4();
      if (iStack_d0 == 0) {
        func_0x00010875e9e8(auStack_1a8);
        puVar9 = auStack_e8;
        FUN_1086d44b0(puVar9);
        FUN_108843ae8();
        puVar11 = auStack_98;
        func_0x000107c28824(puVar11,auStack_1a8,puVar9);
        func_0x00010875e9dc(auStack_1c0);
        uVar22 = (ulong)ppuStack_190 >> 0x28;
        uVar5 = (uint)ppuStack_190;
        ppuStack_190._0_5_ = (uint5)(uVar5 & 0xffffff00);
        ppuStack_190 = (undefined **)CONCAT35((int3)uVar22,(uint5)ppuStack_190);
        pppuVar18 = &ppuStack_190;
        FUN_10868159c(pppuVar18);
        func_0x000107c28824(puVar11,auStack_1c0,pppuVar18);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a8);
      }
      plVar20 = (long *)**(undefined8 **)(param_1 + 0x58);
      func_0x000107c2884c(&ppuStack_190,auStack_98);
      func_0x00010875e9d4(*(undefined8 *)(*plVar20 + 0x50));
      func_0x00010875e9f4();
      uStack_208 = uStack_a8;
      ppuStack_210 = ppuStack_b0;
      uStack_200 = uStack_a0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      ppuStack_b0 = (undefined **)0x0;
      uStack_1f8 = auStack_e8[0];
      func_0x00010875e9b4();
      func_0x000107c27914(&ppuStack_b0);
      func_0x00010875c784(&lStack_1d8,&ppuStack_210);
      goto LAB_10875e264;
    }
    puVar21 = puVar21 + 1;
  } while( true );
}



/* Entry: 10875e624; end: 10875e66f;  */

void FUN_10875e624(long param_1,undefined8 param_2)

{
  long lVar1;
  long lStack_28;
  
  lVar1 = param_1 + 0x18;
  func_0x000107c2825c();
  lStack_28 = lVar1;
  func_0x00010875e87c(param_1,param_2,&lStack_28);
  FUN_108681b4c(param_1 + 0x18);
  return;
}



/* Entry: 10875e670; end: 10875e697;  */

undefined4 FUN_10875e670(uint param_1)

{
  if (param_1 < 0xd) {
    return *(undefined4 *)(&UNK_10df4e000 + (ulong)param_1 * 4);
  }
  return 0;
}



/* Entry: 10875e698; end: 10875e6f3;  */

void FUN_10875e698(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x78;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x78);
  }
  *puVar1 = &PTR_FUN_110a90710;
  puVar1[1] = param_1;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = param_1;
  puVar1[0xe] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  *(undefined8 *)((long)puVar1 + 0x51) = 0;
  *(undefined8 *)((long)puVar1 + 0x49) = 0;
  return;
}



/* Entry: 10875e6f4; end: 10875e6fb;  */

void FUN_10875e6f4(void)

{
  return;
}



/* Entry: 10875e6fc; end: 10875e72b;  */

void FUN_10875e6fc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110a6b198;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10875e72c; end: 10875e757;  */

void FUN_10875e72c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110a6b198;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10875e758; end: 10875e7d7;  */

void FUN_10875e758(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *param_2;
  lVar3 = *(long *)(param_1 + 8);
  uStack_38 = *(undefined8 *)(lVar3 + 0x178);
  uStack_40 = *(undefined8 *)(lVar3 + 0x170);
  uStack_30 = *(undefined8 *)(lVar3 + 0x180);
  *(undefined8 *)(lVar3 + 0x178) = 0;
  *(undefined8 *)(lVar3 + 0x180) = 0;
  *(undefined8 *)(lVar3 + 0x170) = 0;
  plVar2 = *(long **)(lVar3 + 0x168);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x30))(plVar2,&uStack_28,&uStack_40);
    func_0x00010875b6a8(&uStack_40);
    return;
  }
  func_0x000104bfeb48();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10875e7c8);
  (*pcVar1)();
}



/* Entry: 10875e7d8; end: 10875e80f;  */

long FUN_10875e7d8(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a6b1f8);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10875e810; end: 10875e81b;  */

undefined ** FUN_10875e810(void)

{
  return &PTR_DAT_110a6b1f8;
}



/* Entry: 10875e81c; end: 10875e8c7;  */

long FUN_10875e81c(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)param_2[3];
  if (plVar1 == (long *)0x0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else if (plVar1 == param_2) {
    *(long *)(param_1 + 0x18) = param_1;
    (**(code **)(*(long *)param_2[3] + 0x18))((long *)param_2[3],param_1);
  }
  else {
    (**(code **)(*plVar1 + 0x10))();
    *(long **)(param_1 + 0x18) = plVar1;
  }
  return param_1;
}



/* Entry: 10875e8c8; end: 10875e973;  */

long FUN_10875e8c8(long *param_1,undefined4 *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_58 [16];
  undefined4 *puStack_48;
  
  plVar1 = param_1;
  FUN_1086edc74(param_1,(param_1[1] - *param_1 >> 4) + 1);
  FUN_1086edd28(auStack_58,plVar1,param_1[1] - *param_1 >> 4,param_1 + 2);
  uVar2 = *param_3;
  *puStack_48 = *param_2;
  *(undefined8 *)(puStack_48 + 2) = uVar2;
  puStack_48 = puStack_48 + 4;
  FUN_1086edcb4(param_1,auStack_58);
  lVar3 = param_1[1];
  func_0x0001086edd70(auStack_58);
  return lVar3;
}



/* Entry: 10875e974; end: 10875e9fb;  */

void FUN_10875e974(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_10f4affde;
  func_0x00010002b82c(param_1,&UNK_10f4affde);
  func_0x000107c613d0(puVar1);
  func_0x000107c60c50();
  return;
}



/* Entry: 10875e9fc; end: 10875eb1f;  */

undefined8 *
FUN_10875e9fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 *param_7,undefined4 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar5 = param_2;
  func_0x000107c27e5c();
  uStack_58 = 0;
  uStack_70 = param_2;
  uStack_68 = uVar5;
  uStack_60 = param_4;
  func_0x000107c2793c(&UNK_10f4ba116);
  func_0x000107c3173c(auStack_88);
  uStack_90 = *param_7;
  *param_7 = 0;
  func_0x000107c29808(param_1,auStack_88,param_3,&uStack_90);
  func_0x000107c29578(&uStack_90);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88);
  *param_1 = &PTR_FUN_110a6b2b8;
  func_0x00010867a334(param_1 + 0xd,param_5);
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x12] = param_4;
  lVar4 = param_6[1];
  uVar5 = *param_6;
  param_1[0x14] = param_6[1];
  param_1[0x13] = uVar5;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined4 *)(param_1 + 0x15) = param_8;
  return param_1;
}



/* Entry: 10875eb20; end: 10875ebcb;  */

void FUN_10875eb20(long *param_1,ulong param_2,code *UNRECOVERED_JUMPTABLE)

{
  long *plVar1;
  undefined4 uVar2;
  ulong unaff_x19;
  long unaff_x20;
  undefined1 auStack_40 [16];
  long alStack_30 [2];
  
  plVar1 = (long *)param_1[8];
  (**(code **)(*plVar1 + 0x10))(plVar1,param_1[9]);
  if ((int)plVar1 != 0) {
    func_0x000107c29820(alStack_30,param_1);
    plVar1 = *(long **)(alStack_30[0] + 0x70);
    func_0x00010875efb4();
    (**(code **)(*plVar1 + 0x10))(plVar1,auStack_40);
    func_0x00010875efac();
    func_0x00010875ef94();
    return;
  }
  uVar2 = 3;
  if ((param_2 & 0x100000000) != 0) {
    uVar2 = (undefined4)param_2;
  }
  func_0x00010875efcc(param_1,uVar2);
  (**(code **)(*param_1 + 0x38))();
  FUN_10867a27c(unaff_x20 + 0x68,unaff_x19 & 0xffffffff | 0x100000000);
  func_0x00010875efc0();
  FUN_10875ec6c(unaff_x20);
  func_0x00010875efe0();
                    /* WARNING: Could not recover jumptable at 0x00010875ec1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10875ebcc; end: 10875ec1f;  */

void FUN_10875ebcc(long *param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
  ulong unaff_x19;
  long unaff_x20;
  
  func_0x00010875efcc();
  (**(code **)(*param_1 + 0x38))();
  FUN_10867a27c(unaff_x20 + 0x68,unaff_x19 & 0xffffffff | 0x100000000);
  func_0x00010875efc0();
  FUN_10875ec6c();
  func_0x00010875efe0();
                    /* WARNING: Could not recover jumptable at 0x00010875ec1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10875ec20; end: 10875ec6b;  */

void FUN_10875ec20(long *param_1)

{
  *(undefined1 *)(param_1 + 0x11) = 1;
  FUN_10867a27c(param_1 + 0xd,0);
  func_0x000107c28b24(param_1[0xb]);
  FUN_10875ec6c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010875ec68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1);
  return;
}



/* Entry: 10875ec6c; end: 10875edc7;  */

void FUN_10875ec6c(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  code **ppcVar5;
  code **ppcVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long alStack_90 [2];
  code *pcStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c29820(alStack_90);
  puVar7 = *(undefined8 **)(alStack_90[0] + 0x30);
  func_0x00010875efb4();
  func_0x000107c28150();
  lVar8 = puVar7[2];
  __ZNSt3__15mutex4lockEv(lVar8 + 8);
  lVar9 = *(long *)(lVar8 + 0x70);
  pcStack_80 = FUN_10875ef18;
  ppuStack_78 = &PTR_FUN_110a6b290;
  ppcVar6 = &pcStack_80;
  uStack_50 = param_1;
  func_0x000107c28154(lVar8 + 0x48,ppcVar6);
  func_0x00010875ef9c();
  __ZNSt3__15mutex6unlockEv();
  if (lVar9 == 0) {
    plVar4 = (long *)*puVar7;
    ppuStack_78 = (undefined **)puVar7[3];
    pcStack_80 = (code *)puVar7[2];
    if (puVar7[3] != 0) {
      plVar1 = (long *)(puVar7[3] + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    ppcVar6 = &pcStack_80;
    (**(code **)(*plVar4 + 0x10))(plVar4,ppcVar6);
    func_0x000107c27e74();
  }
  func_0x00010875efac();
  func_0x00010875ef94();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  ppcVar5 = &pcStack_80;
  func_0x000107c27e74(ppcVar5);
  func_0x00010875efac();
  func_0x00010875ef94();
  func_0x00010875ef8c();
  func_0x00010875efcc();
  FUN_10867a27c(ppcVar5 + 0xd,(ulong)ppcVar6 & 0xffffffff | 0x100000000);
  func_0x00010875efc0();
  FUN_10875ec6c(puVar7);
  func_0x00010875efe0();
                    /* WARNING: Could not recover jumptable at 0x00010875ee00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10875edc8; end: 10875ee03;  */

void FUN_10875edc8(long param_1,ulong param_2,code *UNRECOVERED_JUMPTABLE)

{
  func_0x00010875efcc();
  FUN_10867a27c(param_1 + 0x68,param_2 & 0xffffffff | 0x100000000);
  func_0x00010875efc0();
  FUN_10875ec6c();
  func_0x00010875efe0();
                    /* WARNING: Could not recover jumptable at 0x00010875ee00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10875ee04; end: 10875ef0f;  */

undefined8 FUN_10875ee04(long *param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined4 uStack_68;
  undefined1 uStack_64;
  ulong uStack_60;
  ulong uStack_58;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lStack_48 = 0;
  lStack_40 = 0;
  uStack_38 = 0;
  (**(code **)(*param_1 + 0x40))(&uStack_60);
  uVar1 = uStack_58;
  uVar4 = uStack_60;
  if (uStack_60 != uStack_58) {
    for (; uVar4 != uVar1; uVar4 = uVar4 + 0x18) {
      uVar2 = uVar4;
      (**(code **)(*(long *)param_1[0x13] + 0x18))();
      if ((uVar2 & 1) != 0) {
        func_0x000107c28840(&lStack_48,uVar4);
      }
    }
    if (lStack_40 - lStack_48 == uStack_58 - uStack_60) {
      uStack_68 = 1;
      uStack_64 = 1;
      FUN_1086818c8(param_1[0xb],&uStack_68);
      FUN_10875ebcc(param_1,5);
      uVar3 = 1;
      goto LAB_10875eebc;
    }
  }
  uVar3 = 0;
LAB_10875eebc:
  func_0x000107c27a04(&uStack_60);
  func_0x000107c27a04(&lStack_48);
  return uVar3;
}



/* Entry: 10875ef10; end: 10875ef17;  */

void FUN_10875ef10(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10875ef14);
  (*pcVar1)();
}



/* Entry: 10875ef18; end: 10875ef67;  */

void FUN_10875ef18(long param_1)

{
  undefined1 auStack_50 [40];
  undefined1 uStack_28;
  
  auStack_50[0] = 0;
  uStack_28 = 0;
  func_0x000107c28b2c(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x58),auStack_50);
  func_0x000107c29560(auStack_50);
  return;
}



/* Entry: 10875ef68; end: 10875eff3;  */

void FUN_10875ef68(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10875eff4; end: 10875f1c7;  */

undefined ** FUN_10875eff4(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  undefined **ppuVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  long *plVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 *in_x6;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined *puVar14;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined **unaff_x19;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  undefined *in_stack_00000000;
  undefined *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  long in_stack_00000030;
  undefined **ppuStack_8f0;
  undefined *puStack_8e8;
  undefined8 uStack_8d0;
  long lStack_8c8;
  undefined **ppuStack_8c0;
  undefined *puStack_8b8;
  undefined *puStack_8b0;
  undefined4 uStack_8a8;
  int iStack_7b4;
  char cStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined **ppuStack_6e0;
  undefined **ppuStack_6d8;
  undefined8 uStack_6d0;
  long lStack_6c8;
  undefined **ppuStack_6c0;
  undefined *puStack_6b0;
  undefined *puStack_6a8;
  undefined **ppuStack_6a0;
  undefined **ppuStack_690;
  undefined *puStack_688;
  undefined **ppuStack_680;
  undefined **ppuStack_678;
  undefined **ppuStack_670;
  undefined8 uStack_668;
  undefined **ppuStack_408;
  undefined **ppuStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined **ppuStack_3e8;
  undefined *apuStack_3d0 [69];
  char cStack_1a8;
  code *pcStack_1a0;
  undefined **ppuStack_198;
  undefined8 *puStack_190;
  undefined1 auStack_188 [88];
  undefined **ppuStack_130;
  undefined *puStack_128;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined **ppuStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined **appuStack_88 [3];
  undefined ***pppuStack_70;
  undefined8 uStack_68;
  
  func_0x000108760584();
  uStack_68 = extraout_x8;
  func_0x000107c278b8(auStack_a0,&UNK_10f4ba11c);
  pppuStack_70 = appuStack_88;
  appuStack_88[0] = &PTR_FUN_110a6b4f8;
  uStack_a8 = *in_stack_00000020;
  *in_stack_00000020 = 0;
  FUN_10875e9fc();
  func_0x000107c29578(&uStack_a8);
  func_0x00010865f8f8(appuStack_88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
  *unaff_x19 = (undefined *)&PTR_FUN_110a6b310;
  unaff_x19[0x17] = (undefined *)0x0;
  unaff_x19[0x18] = (undefined *)0x0;
  unaff_x19[0x16] = (undefined *)0x0;
  puVar14 = (undefined *)*in_x3;
  unaff_x19[0x17] = (undefined *)in_x3[1];
  unaff_x19[0x16] = puVar14;
  unaff_x19[0x18] = (undefined *)in_x3[2];
  *in_x3 = 0;
  in_x3[1] = 0;
  in_x3[2] = 0;
  FUN_1086ac390(unaff_x19 + 0x19,in_x4);
  *(char *)(unaff_x19 + 0x32) = (char)in_x5;
  unaff_x19[0x34] = (undefined *)0x0;
  unaff_x19[0x35] = (undefined *)0x0;
  unaff_x19[0x33] = (undefined *)0x0;
  puVar14 = (undefined *)*in_x6;
  unaff_x19[0x34] = (undefined *)in_x6[1];
  unaff_x19[0x33] = puVar14;
  unaff_x19[0x35] = (undefined *)in_x6[2];
  *in_x6 = 0;
  in_x6[1] = 0;
  in_x6[2] = 0;
  unaff_x19[0x36] = in_stack_00000000;
  unaff_x19[0x37] = in_stack_00000008;
  func_0x000107c27afc(unaff_x19 + 0x38,in_stack_00000010);
  ppuVar5 = unaff_x19 + 0x3c;
  uVar12 = in_stack_00000018;
  func_0x000107c27aa0();
  iVar11 = (int)uVar12;
  *(undefined1 *)(unaff_x19 + 0x42) = 0;
  *(undefined1 *)(unaff_x19 + 0x48) = 0;
  uVar4 = *(char *)(in_stack_00000030 + 0x30) == '\x01';
  if ((bool)uVar4) {
    ppuVar5 = unaff_x19 + 0x42;
    lVar13 = in_stack_00000030;
    FUN_10875fc1c();
    iVar11 = (int)lVar13;
  }
  puVar14 = (undefined *)*in_stack_00000028;
  *in_stack_00000028 = 0;
  unaff_x19[0x49] = puVar14;
  func_0x00010876055c(uStack_68);
  if (!(bool)uVar4) {
    ___stack_chk_fail();
    if (iVar11 != 0) {
      func_0x000104bd46a0();
      func_0x000107c29578(&uStack_a8);
      func_0x00010865f8f8(appuStack_88);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a0);
    }
    func_0x0001087604f4();
    puStack_110 = in_stack_00000000;
    puStack_108 = in_stack_00000008;
    uStack_100 = in_stack_00000010;
    uStack_f8 = in_stack_00000018;
    lStack_f0 = in_stack_00000030;
    pcStack_b8 = FUN_10875f1c8;
    puStack_e8 = in_x3;
    uStack_e0 = in_x4;
    uStack_d8 = in_x5;
    puStack_d0 = in_x6;
    ppuStack_c8 = ppuVar5;
    puStack_c0 = &stack0xfffffffffffffff0;
    func_0x000108760584();
    uStack_118 = extraout_x8_00;
    func_0x000107c297b4(&puStack_6b0,ppuVar5 + 1);
    ppuStack_6a0 = ppuVar5;
    func_0x000107c297b4(&uStack_6d0,ppuVar5 + 1);
    lStack_8c8 = lStack_6c8;
    uStack_8d0 = uStack_6d0;
    uStack_6d0 = 0;
    lStack_6c8 = 0;
    ppuStack_8c0 = ppuVar5;
    ppuStack_6c0 = ppuVar5;
    func_0x000108760480();
    puStack_8b0 = ppuStack_680[0x4b];
    puStack_8b8 = ppuStack_680[0x4a];
    if (ppuStack_680[0x4b] != (undefined *)0x0) {
      do {
        func_0x0001087604a0();
      } while (extraout_w10 != 0);
    }
    uStack_8a8 = *(undefined4 *)(ppuVar5[0xb] + 0xfc);
    func_0x0001087604c4();
    pcStack_1a0 = FUN_108760040;
    ppuStack_198 = &PTR_FUN_110a6b4d0;
    puVar6 = (undefined8 *)0x30;
    __Znwm();
    puVar6[1] = lStack_8c8;
    *puVar6 = uStack_8d0;
    if (lStack_8c8 != 0) {
      do {
        func_0x0001087604a0();
      } while (extraout_w10_00 != 0);
    }
    puVar6[3] = puStack_8b8;
    puVar6[2] = ppuStack_8c0;
    puVar6[4] = puStack_8b0;
    if (puStack_8b0 != (undefined *)0x0) {
      do {
        func_0x0001087604a0();
      } while (extraout_w10_01 != 0);
    }
    *(undefined4 *)(puVar6 + 5) = uStack_8a8;
    ppuVar15 = (undefined **)ppuVar5[1];
    puVar14 = ppuVar5[2];
    ppuStack_8f0 = ppuVar15;
    puStack_8e8 = puVar14;
    puStack_190 = puVar6;
    if (puVar14 == (undefined *)0x0) {
      puVar17 = ppuVar5[0xb];
    }
    else {
      do {
        func_0x0001087604a0();
      } while (extraout_w10_02 != 0);
      puVar17 = ppuVar5[0xb];
      do {
        func_0x0001087604a0();
      } while (extraout_w10_03 != 0);
    }
    ppuVar7 = (undefined **)0xb8;
    ppuStack_690 = ppuVar15;
    puStack_688 = puVar14;
    __Znwm();
    puVar3 = puStack_6a8;
    puVar2 = puStack_6b0;
    ppuVar7[1] = (undefined *)0x0;
    ppuVar7[2] = (undefined *)0x0;
    *ppuVar7 = (undefined *)&PTR_FUN_110a6b380;
    ppuStack_680 = (undefined **)FUN_10875fcb8;
    ppuStack_678 = &PTR_FUN_110a6b3c0;
    puStack_688 = (undefined *)0x0;
    ppuStack_690 = (undefined **)0x0;
    ppuVar16 = ppuVar7 + 3;
    *ppuVar16 = (undefined *)&PTR_FUN_110a6b498;
    ppuStack_408 = (undefined **)FUN_10875fd3c;
    ppuStack_400 = &PTR_DAT_110a6b3e8;
    puStack_6b0 = (undefined *)0x0;
    puStack_6a8 = (undefined *)0x0;
    ppuStack_3e8 = ppuStack_6a0;
    ppuVar7[4] = FUN_10875fd3c;
    ppuVar7[5] = (undefined *)&PTR_DAT_110a6b3e8;
    ppuVar7[7] = puVar3;
    ppuVar7[6] = puVar2;
    uStack_3f0 = 0;
    uStack_3f8 = 0;
    ppuVar7[8] = (undefined *)ppuStack_6a0;
    ppuVar7[10] = FUN_108760040;
    ppuStack_670 = ppuVar15;
    uStack_668 = puVar14;
    (*(code *)ppuStack_198[2])(ppuVar7 + 0xb,&ppuStack_198);
    *ppuVar16 = (undefined *)&PTR_DAT_110a6b410;
    ppuVar7[0x10] = (undefined *)ppuStack_680;
    (*(code *)ppuStack_678[2])(ppuVar7 + 0x11,&ppuStack_678);
    ppuVar7[0x16] = puVar17;
    (*(code *)*ppuStack_400)(&ppuStack_400);
    (*(code *)*ppuStack_678)(&ppuStack_678);
    func_0x000107c297a8(&ppuStack_690);
    uStack_6f8 = 0;
    uStack_6f0 = 0;
    ppuStack_6e0 = ppuVar16;
    ppuStack_6d8 = ppuVar7;
    FUN_108760430(&uStack_6f8);
    func_0x000107c297a8(&ppuStack_8f0);
    func_0x000108760504();
    FUN_10875fc68(&uStack_8d0);
    FUN_10875faa4(&pcStack_1a0);
    puStack_128 = ppuVar5[0x12];
    func_0x0001087604bc(&ppuStack_408);
    func_0x000107c29ee4(&ppuStack_680,ppuStack_408 + 3);
    func_0x00010875faac(&pcStack_1a0);
    func_0x000107c287d0();
    func_0x000108760514();
    func_0x000107c297b0(&ppuStack_408);
    func_0x00010875fabc(&pcStack_1a0);
    func_0x00010890d3ac();
    puVar1 = (undefined8 *)ppuVar5[0x34];
    for (puVar6 = (undefined8 *)ppuVar5[0x33]; puVar6 != puVar1; puVar6 = puVar6 + 3) {
      ppuStack_678 = (undefined **)0x0;
      ppuStack_680 = &PTR_DAT_110a93b98;
      uStack_668 = (undefined *)0x0;
      func_0x000107c3034c(&ppuStack_680,*puVar6,*(int *)(puVar6 + 1) - (int)*puVar6);
      func_0x0001087604fc();
      func_0x00010876051c();
      func_0x0001087604cc();
    }
    if (((ulong)ppuVar5[0x37] & 1) != 0) {
      func_0x0001087604e0();
      FUN_108912b84(&ppuStack_680);
      uStack_668 = (undefined *)CONCAT44(6,(undefined4)uStack_668);
      ppuVar15 = ppuStack_678;
      if (((ulong)ppuStack_678 & 1) != 0) {
        func_0x0001087604d4();
      }
      func_0x0001087601d0();
      ppuVar15[2] = ppuVar5[0x36];
      ppuStack_670 = ppuVar15;
      func_0x0001087604fc();
      func_0x00010876051c();
      func_0x0001087604cc();
    }
    if (*(char *)(ppuVar5 + 0x41) == '\x01') {
      func_0x0001087604e0();
      ppuVar15 = ppuVar5 + 0x3c;
      func_0x000107c29ee4(&ppuStack_408);
      func_0x000108760540();
      *(uint *)(ppuVar15 + 2) = *(uint *)(ppuVar15 + 2) | 1;
      if (ppuVar15[3] == (undefined *)0x0) {
        puVar14 = ppuVar15[1];
        if (((ulong)puVar14 & 1) != 0) {
          func_0x0001087604d4();
        }
        func_0x000107c287e0();
        ppuVar15[3] = puVar14;
      }
      func_0x000107c287d0();
      pppuVar8 = &ppuStack_408;
      func_0x000107c2a2e0();
      func_0x000108760540();
      *(int *)(pppuVar8 + 4) = (int)ppuVar5[0x3f];
      func_0x000108760540();
      *(int *)((long)pppuVar8 + 0x24) = (int)ppuVar5[0x40];
      func_0x0001087604fc();
      func_0x00010876051c();
      func_0x0001087604cc();
    }
    ppuVar9 = (undefined **)ppuVar5[0x17];
    for (ppuVar15 = (undefined **)ppuVar5[0x16]; ppuVar15 != ppuVar9; ppuVar15 = ppuVar15 + 6) {
      FUN_1087602a4(auStack_188);
      FUN_108907d50();
    }
    if (((ulong)ppuVar5[0x3b] & 1) != 0) {
      ppuVar9 = ppuVar5 + 0x38;
      func_0x000107c29ee4(&ppuStack_680);
      puStack_190 = (undefined8 *)((ulong)puStack_190 | 4);
      if (ppuStack_130 == (undefined **)0x0) {
        ppuVar9 = ppuStack_198;
        if (((ulong)ppuStack_198 & 1) != 0) {
          func_0x0001087604d4();
        }
        FUN_1087602b0();
        ppuStack_130 = ppuVar9;
      }
      ppuVar15 = ppuStack_130;
      func_0x000108760570();
      if (ppuVar9 == (undefined **)0x0) {
        puVar14 = ppuVar15[1];
        if (((ulong)puVar14 & 1) != 0) {
          func_0x0001087604d4();
        }
        func_0x000107c287e0();
        ppuVar15[3] = puVar14;
      }
      func_0x000107c287d0();
      func_0x000108760514();
    }
    puVar14 = ppuVar5[0x16];
    uVar4 = 0;
    if ((((long)ppuVar5[0x17] - (long)puVar14 == 0x30) &&
        (uVar4 = *(int *)(puVar14 + 0x28) == 1, (bool)uVar4)) &&
       ((*(byte *)(*(long *)(puVar14 + 0x20) + 0x10) & 1) != 0)) {
      func_0x000107c29ee0(&uStack_6f8,*(undefined8 *)(*(long *)(puVar14 + 0x20) + 0x18));
      func_0x000108760480();
      func_0x000107c29f64(&uStack_8d0,ppuStack_680[0xc],&uStack_6f8,0);
      func_0x0001087604c4();
      uVar4 = 0;
      if (cStack_700 == '\x01') {
        ppuVar15 = (undefined **)ppuVar5[0xb];
        func_0x000107c278b8(&ppuStack_680,&DAT_10f4b36ec);
        ppuVar9 = &puStack_8b8;
        func_0x000107c29e74();
        func_0x000107c278b8(&ppuStack_408,(&PTR_DAT_110a6b568)[(ulong)ppuVar9 & 0xffffffff]);
        func_0x000107c28b34(ppuVar15,&ppuStack_680,&ppuStack_408);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_408);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_680);
        iVar11 = (int)&puStack_8b8;
        func_0x000107c28da0();
        if (iStack_7b4 == 3) {
          iVar11 = 1;
        }
        uVar4 = 0;
        if (iVar11 == 1) {
          func_0x0001087604bc(&ppuStack_8f0);
          FUN_10886bca0(&ppuStack_680,ppuStack_8f0[0xc],&uStack_6f8);
          func_0x000107c28db8(&ppuStack_408,&ppuStack_680);
          func_0x000107c28d4c(&ppuStack_680);
          func_0x000108760524();
          uVar4 = cStack_1a8 == '\x01';
          if ((bool)uVar4) {
            func_0x000108760480();
            ppuVar15 = (undefined **)ppuStack_680[0xc];
            func_0x0001087604bc(&ppuStack_8f0);
            plVar10 = (long *)ppuStack_8f0[0x30];
            (**(code **)(*plVar10 + 0x10))();
            FUN_10886c844(ppuVar15,plVar10,&uStack_6f8);
            func_0x000108760524();
            func_0x0001087604c4();
            iVar11 = (int)&ppuStack_408;
            FUN_10868f768();
            if (iVar11 != 0) {
              func_0x000108760480();
              ppuVar15 = (undefined **)ppuStack_680[0xc];
              FUN_1088647c4(ppuVar15,&uStack_6f8,apuStack_3d0);
              func_0x0001087604c4();
              if ((int)ppuVar15 != 0) {
                func_0x0001087604e0();
                ppuVar9 = apuStack_3d0;
                func_0x000107c29ee4(&ppuStack_8f0);
                uVar4 = uStack_668._4_4_ == 0x11;
                if (!(bool)uVar4) {
                  FUN_108912b84(&ppuStack_680);
                  uStack_668 = (undefined *)CONCAT44(0x11,(undefined4)uStack_668);
                  ppuVar9 = ppuStack_678;
                  if (((ulong)ppuStack_678 & 1) != 0) {
                    func_0x0001087604d4();
                  }
                  func_0x0001087602e8();
                  ppuStack_670 = ppuVar9;
                }
                ppuVar15 = ppuStack_670;
                func_0x000108760570();
                if (ppuVar9 == (undefined **)0x0) {
                  puVar14 = ppuVar15[1];
                  if (((ulong)puVar14 & 1) != 0) {
                    func_0x0001087604d4();
                  }
                  func_0x000107c287e0();
                  ppuVar15[3] = puVar14;
                }
                func_0x000107c287d0();
                func_0x000107c2a2e0(&ppuStack_8f0);
                func_0x0001087604fc();
                func_0x00010876051c();
                func_0x0001087604cc();
              }
            }
          }
          func_0x000107c28d30(&ppuStack_408);
        }
      }
      func_0x000107c288c8(&uStack_8d0);
      func_0x000107c27914(&uStack_6f8);
    }
    while( true ) {
      func_0x000108760480();
      ppuStack_6d8 = (undefined **)0x0;
      ppuStack_6e0 = (undefined **)0x0;
      ppuStack_408 = ppuVar16;
      ppuStack_400 = ppuVar7;
      (**(code **)(*(long *)ppuStack_680[10] + 0x20))
                (ppuStack_680[10],&pcStack_1a0,&ppuStack_408,ppuVar5 + 0x42);
      func_0x000108760458(&ppuStack_408);
      func_0x0001087604c4();
      FUN_108902090(&pcStack_1a0);
      FUN_108760430(&ppuStack_6e0);
      func_0x000107c297a4(&uStack_6d0);
      ppuVar9 = &puStack_6b0;
      func_0x000107c297a4(ppuVar9);
      func_0x00010876055c(uStack_118);
      if ((bool)uVar4) {
        return ppuVar9;
      }
      ___stack_chk_fail();
      func_0x0001087604b0();
      func_0x0001087604cc();
      func_0x000107c28d30(&ppuStack_408);
      func_0x000107c288c8(&uStack_8d0);
      func_0x000107c27914(&uStack_6f8);
      uVar4 = (int)&puStack_c0 == 0xe1;
      if (!(bool)uVar4) break;
      ___cxa_begin_catch(ppuVar15);
      ___cxa_end_catch();
    }
    FUN_108902090(&pcStack_1a0);
    FUN_108760430(&ppuStack_6e0);
    func_0x000107c297a4(&uStack_6d0);
    func_0x000107c297a4(&puStack_6b0);
    __Unwind_Resume();
    *ppuVar15 = (undefined *)&PTR_FUN_110a90128;
    ppuVar15[1] = (undefined *)0x0;
    FUN_108902068();
    return ppuVar15;
  }
  return unaff_x19;
}



/* Entry: 10875f1c8; end: 10875faa3;  */

undefined ** FUN_10875f1c8(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined ***pppuVar10;
  undefined **ppuVar11;
  long *plVar12;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  undefined *unaff_x19;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined **ppuStack_840;
  long lStack_838;
  undefined8 uStack_820;
  long lStack_818;
  undefined *puStack_808;
  undefined *puStack_800;
  undefined4 uStack_7f8;
  int iStack_704;
  char cStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined **ppuStack_630;
  undefined **ppuStack_628;
  undefined8 uStack_620;
  long lStack_618;
  undefined *puStack_600;
  undefined *puStack_5f8;
  undefined **ppuStack_5e0;
  long lStack_5d8;
  undefined **ppuStack_5d0;
  undefined **ppuStack_5c8;
  undefined **ppuStack_5c0;
  undefined8 uStack_5b8;
  undefined **ppuStack_358;
  undefined **ppuStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined *apuStack_320 [69];
  char cStack_f8;
  code *pcStack_f0;
  undefined **ppuStack_e8;
  undefined8 *puStack_e0;
  undefined1 auStack_d8 [88];
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  
  func_0x000108760584();
  uStack_68 = extraout_x8;
  func_0x000107c297b4(&puStack_600,unaff_x19 + 8);
  func_0x000107c297b4(&uStack_620,unaff_x19 + 8);
  lStack_818 = lStack_618;
  uStack_820 = uStack_620;
  uStack_620 = 0;
  lStack_618 = 0;
  func_0x000108760480();
  puStack_800 = ppuStack_5d0[0x4b];
  puStack_808 = ppuStack_5d0[0x4a];
  if (ppuStack_5d0[0x4b] != (undefined *)0x0) {
    do {
      func_0x0001087604a0();
    } while (extraout_w10 != 0);
  }
  uStack_7f8 = *(undefined4 *)(*(long *)(unaff_x19 + 0x58) + 0xfc);
  func_0x0001087604c4();
  pcStack_f0 = FUN_108760040;
  ppuStack_e8 = &PTR_FUN_110a6b4d0;
  puVar7 = (undefined8 *)0x30;
  __Znwm();
  puVar7[1] = lStack_818;
  *puVar7 = uStack_820;
  if (lStack_818 != 0) {
    do {
      func_0x0001087604a0();
    } while (extraout_w10_00 != 0);
  }
  puVar7[3] = puStack_808;
  puVar7[2] = unaff_x19;
  puVar7[4] = puStack_800;
  if (puStack_800 != (undefined *)0x0) {
    do {
      func_0x0001087604a0();
    } while (extraout_w10_01 != 0);
  }
  *(undefined4 *)(puVar7 + 5) = uStack_7f8;
  ppuVar13 = *(undefined ***)(unaff_x19 + 8);
  lVar1 = *(long *)(unaff_x19 + 0x10);
  ppuStack_840 = ppuVar13;
  lStack_838 = lVar1;
  puStack_e0 = puVar7;
  if (lVar1 == 0) {
    puVar15 = *(undefined **)(unaff_x19 + 0x58);
  }
  else {
    do {
      func_0x0001087604a0();
    } while (extraout_w10_02 != 0);
    puVar15 = *(undefined **)(unaff_x19 + 0x58);
    do {
      func_0x0001087604a0();
    } while (extraout_w10_03 != 0);
  }
  ppuVar8 = (undefined **)0xb8;
  ppuStack_5e0 = ppuVar13;
  lStack_5d8 = lVar1;
  __Znwm();
  puVar4 = puStack_5f8;
  puVar3 = puStack_600;
  ppuVar8[1] = (undefined *)0x0;
  ppuVar8[2] = (undefined *)0x0;
  *ppuVar8 = (undefined *)&PTR_FUN_110a6b380;
  ppuStack_5d0 = (undefined **)FUN_10875fcb8;
  ppuStack_5c8 = &PTR_FUN_110a6b3c0;
  lStack_5d8 = 0;
  ppuStack_5e0 = (undefined **)0x0;
  ppuVar14 = ppuVar8 + 3;
  *ppuVar14 = (undefined *)&PTR_FUN_110a6b498;
  ppuStack_358 = (undefined **)FUN_10875fd3c;
  ppuStack_350 = &PTR_DAT_110a6b3e8;
  puStack_600 = (undefined *)0x0;
  puStack_5f8 = (undefined *)0x0;
  ppuVar8[4] = FUN_10875fd3c;
  ppuVar8[5] = (undefined *)&PTR_DAT_110a6b3e8;
  ppuVar8[7] = puVar4;
  ppuVar8[6] = puVar3;
  uStack_340 = 0;
  uStack_348 = 0;
  ppuVar8[8] = unaff_x19;
  ppuVar8[10] = FUN_108760040;
  ppuStack_5c0 = ppuVar13;
  uStack_5b8 = lVar1;
  (*(code *)ppuStack_e8[2])(ppuVar8 + 0xb,&ppuStack_e8);
  *ppuVar14 = (undefined *)&PTR_DAT_110a6b410;
  ppuVar8[0x10] = (undefined *)ppuStack_5d0;
  (*(code *)ppuStack_5c8[2])(ppuVar8 + 0x11,&ppuStack_5c8);
  ppuVar8[0x16] = puVar15;
  (*(code *)*ppuStack_350)(&ppuStack_350);
  (*(code *)*ppuStack_5c8)(&ppuStack_5c8);
  func_0x000107c297a8(&ppuStack_5e0);
  uStack_648 = 0;
  uStack_640 = 0;
  ppuStack_630 = ppuVar14;
  ppuStack_628 = ppuVar8;
  FUN_108760430(&uStack_648);
  func_0x000107c297a8(&ppuStack_840);
  func_0x000108760504();
  FUN_10875fc68(&uStack_820);
  FUN_10875faa4(&pcStack_f0);
  uStack_78 = *(undefined8 *)(unaff_x19 + 0x90);
  func_0x0001087604bc(&ppuStack_358);
  func_0x000107c29ee4(&ppuStack_5d0,ppuStack_358 + 3);
  func_0x00010875faac(&pcStack_f0);
  func_0x000107c287d0();
  func_0x000108760514();
  func_0x000107c297b0(&ppuStack_358);
  func_0x00010875fabc(&pcStack_f0);
  func_0x00010890d3ac();
  puVar2 = *(undefined8 **)(unaff_x19 + 0x1a0);
  for (puVar7 = *(undefined8 **)(unaff_x19 + 0x198); puVar7 != puVar2; puVar7 = puVar7 + 3) {
    ppuStack_5c8 = (undefined **)0x0;
    ppuStack_5d0 = &PTR_DAT_110a93b98;
    uStack_5b8 = 0;
    func_0x000107c3034c(&ppuStack_5d0,*puVar7,*(int *)(puVar7 + 1) - (int)*puVar7);
    func_0x0001087604fc();
    func_0x00010876051c();
    func_0x0001087604cc();
  }
  if ((unaff_x19[0x1b8] & 1) != 0) {
    func_0x0001087604e0();
    FUN_108912b84(&ppuStack_5d0);
    uStack_5b8 = CONCAT44(6,(undefined4)uStack_5b8);
    ppuVar13 = ppuStack_5c8;
    if (((ulong)ppuStack_5c8 & 1) != 0) {
      func_0x0001087604d4();
    }
    func_0x0001087601d0();
    ppuVar13[2] = *(undefined **)(unaff_x19 + 0x1b0);
    ppuStack_5c0 = ppuVar13;
    func_0x0001087604fc();
    func_0x00010876051c();
    func_0x0001087604cc();
  }
  if (unaff_x19[0x208] == '\x01') {
    func_0x0001087604e0();
    puVar15 = unaff_x19 + 0x1e0;
    func_0x000107c29ee4(&ppuStack_358);
    func_0x000108760540();
    *(uint *)(puVar15 + 0x10) = *(uint *)(puVar15 + 0x10) | 1;
    if (*(long *)(puVar15 + 0x18) == 0) {
      uVar9 = *(ulong *)(puVar15 + 8);
      if ((uVar9 & 1) != 0) {
        func_0x0001087604d4();
      }
      func_0x000107c287e0();
      *(ulong *)(puVar15 + 0x18) = uVar9;
    }
    func_0x000107c287d0();
    pppuVar10 = &ppuStack_358;
    func_0x000107c2a2e0();
    func_0x000108760540();
    *(int *)(pppuVar10 + 4) = (int)*(undefined8 *)(unaff_x19 + 0x1f8);
    func_0x000108760540();
    *(int *)((long)pppuVar10 + 0x24) = (int)*(undefined8 *)(unaff_x19 + 0x200);
    func_0x0001087604fc();
    func_0x00010876051c();
    func_0x0001087604cc();
  }
  ppuVar11 = *(undefined ***)(unaff_x19 + 0xb8);
  for (ppuVar13 = *(undefined ***)(unaff_x19 + 0xb0); ppuVar13 != ppuVar11; ppuVar13 = ppuVar13 + 6)
  {
    FUN_1087602a4(auStack_d8);
    FUN_108907d50();
  }
  if ((unaff_x19[0x1d8] & 1) != 0) {
    ppuVar11 = (undefined **)(unaff_x19 + 0x1c0);
    func_0x000107c29ee4(&ppuStack_5d0);
    puStack_e0 = (undefined8 *)((ulong)puStack_e0 | 4);
    if (ppuStack_80 == (undefined **)0x0) {
      ppuVar11 = ppuStack_e8;
      if (((ulong)ppuStack_e8 & 1) != 0) {
        func_0x0001087604d4();
      }
      FUN_1087602b0();
      ppuStack_80 = ppuVar11;
    }
    ppuVar13 = ppuStack_80;
    func_0x000108760570();
    if (ppuVar11 == (undefined **)0x0) {
      puVar15 = ppuVar13[1];
      if (((ulong)puVar15 & 1) != 0) {
        func_0x0001087604d4();
      }
      func_0x000107c287e0();
      ppuVar13[3] = puVar15;
    }
    func_0x000107c287d0();
    func_0x000108760514();
  }
  lVar1 = *(long *)(unaff_x19 + 0xb0);
  uVar5 = 0;
  if (((*(long *)(unaff_x19 + 0xb8) - lVar1 == 0x30) &&
      (uVar5 = *(int *)(lVar1 + 0x28) == 1, (bool)uVar5)) &&
     ((*(byte *)(*(long *)(lVar1 + 0x20) + 0x10) & 1) != 0)) {
    func_0x000107c29ee0(&uStack_648,*(undefined8 *)(*(long *)(lVar1 + 0x20) + 0x18));
    func_0x000108760480();
    func_0x000107c29f64(&uStack_820,ppuStack_5d0[0xc],&uStack_648,0);
    func_0x0001087604c4();
    uVar5 = 0;
    if (cStack_650 == '\x01') {
      ppuVar13 = *(undefined ***)(unaff_x19 + 0x58);
      func_0x000107c278b8(&ppuStack_5d0,&DAT_10f4b36ec);
      ppuVar11 = &puStack_808;
      func_0x000107c29e74();
      func_0x000107c278b8(&ppuStack_358,(&PTR_DAT_110a6b568)[(ulong)ppuVar11 & 0xffffffff]);
      func_0x000107c28b34(ppuVar13,&ppuStack_5d0,&ppuStack_358);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_358);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_5d0);
      iVar6 = (int)&puStack_808;
      func_0x000107c28da0();
      if (iStack_704 == 3) {
        iVar6 = 1;
      }
      uVar5 = 0;
      if (iVar6 == 1) {
        func_0x0001087604bc(&ppuStack_840);
        FUN_10886bca0(&ppuStack_5d0,ppuStack_840[0xc],&uStack_648);
        func_0x000107c28db8(&ppuStack_358,&ppuStack_5d0);
        func_0x000107c28d4c(&ppuStack_5d0);
        func_0x000108760524();
        uVar5 = cStack_f8 == '\x01';
        if ((bool)uVar5) {
          func_0x000108760480();
          ppuVar13 = (undefined **)ppuStack_5d0[0xc];
          func_0x0001087604bc(&ppuStack_840);
          plVar12 = (long *)ppuStack_840[0x30];
          (**(code **)(*plVar12 + 0x10))();
          FUN_10886c844(ppuVar13,plVar12,&uStack_648);
          func_0x000108760524();
          func_0x0001087604c4();
          iVar6 = (int)&ppuStack_358;
          FUN_10868f768();
          if (iVar6 != 0) {
            func_0x000108760480();
            ppuVar13 = (undefined **)ppuStack_5d0[0xc];
            FUN_1088647c4(ppuVar13,&uStack_648,apuStack_320);
            func_0x0001087604c4();
            if ((int)ppuVar13 != 0) {
              func_0x0001087604e0();
              ppuVar11 = apuStack_320;
              func_0x000107c29ee4(&ppuStack_840);
              uVar5 = uStack_5b8._4_4_ == 0x11;
              if (!(bool)uVar5) {
                FUN_108912b84(&ppuStack_5d0);
                uStack_5b8 = CONCAT44(0x11,(undefined4)uStack_5b8);
                ppuVar11 = ppuStack_5c8;
                if (((ulong)ppuStack_5c8 & 1) != 0) {
                  func_0x0001087604d4();
                }
                func_0x0001087602e8();
                ppuStack_5c0 = ppuVar11;
              }
              ppuVar13 = ppuStack_5c0;
              func_0x000108760570();
              if (ppuVar11 == (undefined **)0x0) {
                puVar15 = ppuVar13[1];
                if (((ulong)puVar15 & 1) != 0) {
                  func_0x0001087604d4();
                }
                func_0x000107c287e0();
                ppuVar13[3] = puVar15;
              }
              func_0x000107c287d0();
              func_0x000107c2a2e0(&ppuStack_840);
              func_0x0001087604fc();
              func_0x00010876051c();
              func_0x0001087604cc();
            }
          }
        }
        func_0x000107c28d30(&ppuStack_358);
      }
    }
    func_0x000107c288c8(&uStack_820);
    func_0x000107c27914(&uStack_648);
  }
  while( true ) {
    func_0x000108760480();
    ppuStack_628 = (undefined **)0x0;
    ppuStack_630 = (undefined **)0x0;
    ppuStack_358 = ppuVar14;
    ppuStack_350 = ppuVar8;
    (**(code **)(*(long *)ppuStack_5d0[10] + 0x20))
              (ppuStack_5d0[10],&pcStack_f0,&ppuStack_358,unaff_x19 + 0x210);
    func_0x000108760458(&ppuStack_358);
    func_0x0001087604c4();
    FUN_108902090(&pcStack_f0);
    FUN_108760430(&ppuStack_630);
    func_0x000107c297a4(&uStack_620);
    ppuVar11 = &puStack_600;
    func_0x000107c297a4(ppuVar11);
    func_0x00010876055c(uStack_68);
    if ((bool)uVar5) {
      return ppuVar11;
    }
    ___stack_chk_fail();
    func_0x0001087604b0();
    func_0x0001087604cc();
    func_0x000107c28d30(&ppuStack_358);
    func_0x000107c288c8(&uStack_820);
    func_0x000107c27914(&uStack_648);
    uVar5 = (int)&stack0xfffffffffffffff0 == 0xe1;
    if (!(bool)uVar5) break;
    ___cxa_begin_catch(ppuVar13);
    ___cxa_end_catch();
  }
  FUN_108902090(&pcStack_f0);
  FUN_108760430(&ppuStack_630);
  func_0x000107c297a4(&uStack_620);
  func_0x000107c297a4(&puStack_600);
  __Unwind_Resume();
  *ppuVar13 = (undefined *)&PTR_FUN_110a90128;
  ppuVar13[1] = (undefined *)0x0;
  FUN_108902068();
  return ppuVar13;
}



/* Entry: 10875faa4; end: 10875facb;  */

undefined8 * FUN_10875faa4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a90128;
  param_1[1] = 0;
  FUN_108902068();
  return param_1;
}



/* Entry: 10875facc; end: 10875fb2f;  */

long FUN_10875facc(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    uVar2 = *(ulong *)(param_2 + 8);
    if ((uVar2 & 1) != 0) {
      uVar2 = *(ulong *)(uVar2 & 0xfffffffffffffffe);
    }
    if (uVar1 == uVar2) {
      FUN_108913a34(param_1);
    }
    else {
      FUN_108913a00(param_1);
    }
  }
  return param_1;
}



/* Entry: 10875fb30; end: 10875fb33;  */

undefined8 * FUN_10875fb30(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110a6b310;
  plVar1 = (long *)param_1[0x49];
  param_1[0x49] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x00010086ab34(param_1 + 0x42);
  func_0x000107c27a1c(param_1 + 0x3c);
  func_0x000107c279dc(param_1 + 0x38);
  func_0x000104bee630(param_1 + 0x33);
  func_0x000107c2a500(param_1 + 0x19);
  FUN_1086a9294(param_1 + 0x16);
  *param_1 = &PTR_FUN_110a6b2b8;
  func_0x000107c2979c(param_1 + 0x13);
  func_0x00010865f8f8(param_1 + 0xd);
  *param_1 = &PTR_DAT_110a6d608;
  func_0x0001005fe494(param_1 + 0xb);
  func_0x0001005640e4(param_1 + 6);
  func_0x000107c60ca0(param_1 + 3);
  func_0x0001005fe52c(param_1 + 1);
  return param_1;
}



/* Entry: 10875fb34; end: 10875fb47;  */

void FUN_10875fb34(void)

{
  func_0x000108760320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10875fb48; end: 10875fb4f;  */

undefined8 FUN_10875fb48(void)

{
  return 0;
}



/* Entry: 10875fb50; end: 10875fc1b;  */

void FUN_10875fb50(undefined8 *param_1,long param_2)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined1 auStack_48 [24];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  func_0x000107c27ab0(param_1,(*(long *)(param_2 + 0xb8) - *(long *)(param_2 + 0xb0)) / 0x30);
  lVar2 = *(long *)(param_2 + 0xb8);
  for (lVar4 = *(long *)(param_2 + 0xb0); lVar4 != lVar2; lVar4 = lVar4 + 0x30) {
    if (*(int *)(lVar4 + 0x28) == 1) {
      ppuVar3 = *(undefined ***)(*(long *)(lVar4 + 0x20) + 0x18);
      ppuVar1 = &PTR_PTR_11326cb58;
      if (ppuVar3 != (undefined **)0x0) {
        ppuVar1 = ppuVar3;
      }
      func_0x000107c29ee0(auStack_48,ppuVar1);
      func_0x000107c27ac4(param_1,auStack_48);
      func_0x000107c27914(auStack_48);
    }
  }
  return;
}



/* Entry: 10875fc1c; end: 10875fc67;  */

void FUN_10875fc1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  if (*(char *)(param_2 + 5) == '\x01') {
    uVar2 = param_2[3];
    uVar1 = param_2[2];
    param_1[4] = param_2[4];
    param_1[3] = uVar2;
    param_1[2] = uVar1;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[2] = 0;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  *(undefined1 *)(param_1 + 6) = 1;
  return;
}



/* Entry: 10875fc68; end: 10875fc8f;  */

undefined8 FUN_10875fc68(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c297ac(param_1 + 0x18);
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 10875fc90; end: 10875fc93;  */

void FUN_10875fc90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6b380;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10875fc94; end: 10875fca7;  */

void FUN_10875fc94(void)

{
  FUN_108760030();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10875fca8; end: 10875fcb7;  */

void FUN_10875fca8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010875fcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10875fcb8; end: 10875fd17;  */

long FUN_10875fcb8(long param_1)

{
  long alStack_30 [2];
  
  func_0x00010084fa6c(alStack_30,param_1 + 0x10);
  if (alStack_30[0] == 0) {
    alStack_30[0] = 0;
  }
  else {
    func_0x00010084fb0c();
  }
  func_0x000107c297a4(alStack_30);
  return alStack_30[0];
}



/* Entry: 10875fd18; end: 10875fd3b;  */

void FUN_10875fd18(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000100562400();
  if (param_1 != 0) {
    func_0x000107c60d68();
  }
  return;
}



/* Entry: 10875fd3c; end: 10875fdaf;  */

void FUN_10875fd3c(undefined8 param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_60 [56];
  undefined4 uStack_28;
  
  lVar1 = *(long *)(param_2 + 0x20);
  plVar2 = *(long **)(lVar1 + 0x248);
  FUN_10875fdb0(auStack_60,param_1);
  uStack_28 = 1;
  (**(code **)(*plVar2 + 0x10))(plVar2,auStack_60);
  FUN_10875fdbc(auStack_60);
  FUN_10875ec20(lVar1);
  return;
}



/* Entry: 10875fdb0; end: 10875fdbb;  */

void FUN_10875fdb0(undefined8 param_1,undefined8 param_2)

{
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001089050f0(param_1,0,param_2);
  func_0x00010890517c(&PTR_FUN_110a900d8);
  if ((extraout_x8 & 1) != 0) {
    func_0x000108905038();
  }
  FUN_108904ab4(unaff_x19 + 0x10);
  *(undefined4 *)(unaff_x19 + 0x30) = 0;
  *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(unaff_x20 + 0x28);
  return;
}



/* Entry: 10875fdbc; end: 10875fe0f;  */

void FUN_10875fdbc(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x38) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110a6b3d8)[*(uint *)(param_1 + 0x38)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  return;
}



/* Entry: 10875fe10; end: 10875fe4b;  */

void FUN_10875fe10(void)

{
  return;
}



/* Entry: 10875fe4c; end: 10875fe5f;  */

void FUN_10875fe4c(void)

{
  func_0x00010875fffc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10875fe60; end: 10875fe77;  */

void FUN_10875fe60(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x98);
  func_0x0001005529b4(lVar2 + 0x20);
  lVar1 = lVar2 + 0x40;
  if ((*(byte *)(lVar2 + 0x50) & 1) == 0) {
    func_0x0001004b4e98();
    *(long *)(lVar2 + 0x48) = lVar1;
    *(undefined1 *)(lVar2 + 0x50) = 1;
  }
  return;
}



/* Entry: 10875fe78; end: 10875febb;  */

void FUN_10875fe78(int param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000108760550();
  if (param_1 != 0) {
    func_0x00010084fb48(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010875feac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x20 + 8))(param_2,(undefined8 *)(unaff_x20 + 8));
    return;
  }
  return;
}



/* Entry: 10875febc; end: 10875ff67;  */

void FUN_10875febc(int param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x20;
  undefined1 auStack_80 [72];
  undefined4 uStack_38;
  undefined1 uStack_34;
  
  func_0x000108760550();
  if (param_1 != 0) {
    uStack_38 = (undefined4)param_3;
    uStack_34 = 1;
    FUN_1086818c8(*(undefined8 *)(unaff_x20 + 0x98),&uStack_38);
    if (*(char *)(param_4 + 0x40) == '\x01') {
      FUN_108681988(*(undefined8 *)(unaff_x20 + 0x98),param_4,0);
    }
    FUN_10875bae4(auStack_80,param_4);
    (**(code **)(unaff_x20 + 0x38))(param_2,param_3,auStack_80,(undefined8 *)(unaff_x20 + 0x38));
    func_0x000107c29564(auStack_80);
  }
  return;
}



/* Entry: 10875ff68; end: 10875ff6b;  */

undefined8 * FUN_10875ff68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6b498;
  func_0x000108760548(param_1[8]);
  func_0x000108760548(param_1[2]);
  return param_1;
}



/* Entry: 10875ff6c; end: 10875ff7f;  */

void FUN_10875ff6c(void)

{
  FUN_10875ffbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10875ff80; end: 10875ffbb;  */

void FUN_10875ff80(void)

{
  return;
}



/* Entry: 10875ffbc; end: 10876002f;  */

undefined8 * FUN_10875ffbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6b498;
  func_0x000108760548(param_1[8]);
  func_0x000108760548(param_1[2]);
  return param_1;
}



/* Entry: 108760030; end: 10876003f;  */

void FUN_108760030(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a6b380;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 108760040; end: 1087600eb;  */

void FUN_108760040(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  undefined1 auStack_a8 [72];
  undefined4 auStack_60 [14];
  undefined4 uStack_28;
  
  lVar2 = *(long *)(param_4 + 0x10);
  FUN_10875bc3c(auStack_a8,param_3);
  FUN_10875bbdc(auStack_a8,*(undefined4 *)(lVar2 + 0x28),lVar2 + 0x18);
  lVar2 = *(long *)(lVar2 + 0x10);
  plVar1 = *(long **)(lVar2 + 0x248);
  auStack_60[0] = (undefined4)param_1;
  uStack_28 = 0;
  (**(code **)(*plVar1 + 0x10))(plVar1,auStack_60);
  FUN_108770c94(param_1);
  FUN_10875fdbc(auStack_60);
  FUN_10875ebcc(lVar2,param_1);
  func_0x000107c29564(auStack_a8);
  return;
}



/* Entry: 1087600ec; end: 10876010b;  */

void FUN_1087600ec(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10875fc68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10876010c; end: 108760123;  */

void FUN_10876010c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 108760124; end: 10876018b;  */

void FUN_108760124(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x60) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      func_0x0001087604d4();
    }
    func_0x000107c287e0();
    *(ulong *)(param_1 + 0x60) = uVar1;
  }
  return;
}



/* Entry: 10876018c; end: 108760197;  */

void FUN_10876018c(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4(0,FUN_108760198);
    func_0x000100627e90();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0001000640a4(puVar2,FUN_108760198);
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        func_0x000100627e90();
        *puVar2 = (ulong)puVar3;
        func_0x00010006472c();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x000100064758();
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
      }
      func_0x000100064768();
      func_0x000100627e90();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 108760198; end: 1087602a3;  */

void FUN_108760198(long param_1)

{
  if (param_1 == 0) {
    func_0x00010876052c();
  }
  else {
    func_0x000108760494();
  }
  func_0x000108760534(&UNK_110a93b88);
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1087602a4; end: 1087602af;  */

void FUN_1087602a4(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4(0,&SUB_100684fd0);
    func_0x000100627e90();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0001000640a4(puVar2,&SUB_100684fd0);
      }
      else {
        func_0x000100064574();
        puVar3 = puVar2;
        func_0x000100627e90();
        *puVar2 = (ulong)puVar3;
        func_0x00010006472c();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x000100064758();
        if (!bVar1) {
          func_0x000107c39c9c();
          return;
        }
      }
      else {
        func_0x000100064574();
        func_0x000100064780();
      }
      func_0x000100064768();
      func_0x000100627e90();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 1087602b0; end: 108760393;  */

void FUN_1087602b0(long param_1)

{
  if (param_1 == 0) {
    func_0x00010876052c();
  }
  else {
    func_0x000108760494();
  }
  func_0x000108760534(&UNK_110a8ffd8);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 108760394; end: 10876039b;  */

void FUN_108760394(void)

{
  return;
}



/* Entry: 10876039c; end: 1087603bf;  */

void FUN_10876039c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  *puVar1 = &PTR_FUN_110a6b4f8;
  return;
}



/* Entry: 1087603c0; end: 1087603eb;  */

void FUN_1087603c0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_110a6b4f8;
  return;
}



/* Entry: 1087603ec; end: 108760423;  */

long FUN_1087603ec(long param_1,undefined8 param_2)

{
  func_0x000107c27934(param_2,&PTR_DAT_110a6b558);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 108760424; end: 10876042f;  */

undefined ** FUN_108760424(void)

{
  return &PTR_DAT_110a6b558;
}



/* Entry: 108760430; end: 10876047f;  */

long FUN_108760430(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x000107c278a0();
  }
  return param_1;
}



/* Entry: 108760480; end: 108760597;  */

void FUN_108760480(void)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long unaff_x19;
  
  plVar3 = *(long **)(unaff_x19 + 0x30);
  (**(code **)(*plVar3 + 0x108))();
  if (plVar3[1] != 0) {
    plVar3 = (long *)(plVar3[1] + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return;
}



/* Entry: 108760598; end: 1087606cf;  */

undefined8 *
FUN_108760598(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c278b8(auStack_78,&UNK_10f4ba131);
  uStack_80 = *param_6;
  *param_6 = 0;
  FUN_10875e9fc(param_1,auStack_78,param_2,param_3,param_5,param_9,&uStack_80,6);
  func_0x000107c29578(&uStack_80);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  *param_1 = &PTR_FUN_110a6b598;
  func_0x000107c28fb8(param_1 + 0x16,param_4);
  FUN_1086e76d4(param_1 + 0x50,param_8);
  FUN_10866e480(param_1 + 0x57,param_7);
  return param_1;
}



/* Entry: 1087606d0; end: 108760c3b;  */

void FUN_1087606d0(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined ***pppuVar12;
  undefined **ppuVar13;
  undefined8 **ppuVar14;
  undefined8 extraout_x8;
  ulong uVar15;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long alStack_268 [5];
  long *plStack_240;
  ulong *puStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  long lStack_1f8;
  long lStack_1f0;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  long lStack_1b0;
  undefined *puStack_1a8;
  undefined *puStack_1a0;
  undefined4 uStack_198;
  undefined8 uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  ulong uStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  code *pcStack_d8;
  undefined **ppuStack_d0;
  long *plStack_c8;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_78;
  
  func_0x0001087629a0();
  uStack_78 = extraout_x8;
  func_0x0001087629e0(&uStack_1e0);
  lStack_1d0 = param_1;
  func_0x0001087629e0(&puStack_200);
  puStack_1b8 = (undefined8 *)lStack_1f8;
  puStack_1c0 = puStack_200;
  puStack_200 = (undefined8 *)0x0;
  lStack_1f8 = 0;
  lStack_1f0 = param_1;
  lStack_1b0 = param_1;
  func_0x000108762844(&ppuStack_158);
  puStack_1a0 = ppuStack_158[0x4b];
  puStack_1a8 = ppuStack_158[0x4a];
  if (ppuStack_158[0x4b] != (undefined *)0x0) {
    do {
      func_0x000108762878();
    } while (extraout_w10 != 0);
  }
  uStack_198 = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0xfc);
  func_0x000107c297b0(&ppuStack_158);
  pcStack_d8 = FUN_108762064;
  ppuStack_d0 = &PTR_FUN_110a6b758;
  plVar7 = (long *)0x30;
  __Znwm();
  plVar7[1] = (long)puStack_1b8;
  *plVar7 = (long)puStack_1c0;
  if (puStack_1b8 != (undefined8 *)0x0) {
    do {
      func_0x000108762878();
    } while (extraout_w10_00 != 0);
  }
  plVar7[3] = (long)puStack_1a8;
  plVar7[2] = lStack_1b0;
  plVar7[4] = (long)puStack_1a0;
  if (puStack_1a0 != (undefined *)0x0) {
    do {
      func_0x000108762878();
    } while (extraout_w10_01 != 0);
  }
  *(undefined4 *)(plVar7 + 5) = uStack_198;
  uVar1 = *(undefined8 *)(param_1 + 8);
  lVar17 = *(long *)(param_1 + 0x10);
  uStack_168 = uVar1;
  lStack_160 = lVar17;
  plStack_c8 = plVar7;
  if (lVar17 == 0) {
    uVar18 = *(undefined8 *)(param_1 + 0x58);
  }
  else {
    do {
      func_0x000108762878();
    } while (extraout_w10_02 != 0);
    uVar18 = *(undefined8 *)(param_1 + 0x58);
    do {
      func_0x000108762878();
    } while (extraout_w10_03 != 0);
  }
  puVar8 = (undefined8 *)0xb8;
  uStack_188 = uVar1;
  lStack_180 = lVar17;
  __Znwm();
  uVar5 = uStack_1d8;
  uVar4 = uStack_1e0;
  plVar7 = puVar8 + 1;
  *plVar7 = 0;
  puVar8[2] = 0;
  *puVar8 = &PTR_FUN_110a6b608;
  ppuStack_158 = (undefined **)FUN_108761d20;
  ppuStack_150 = &PTR_FUN_110a6b648;
  uStack_188 = 0;
  lStack_180 = 0;
  puVar10 = puVar8 + 3;
  *puVar10 = &PTR_FUN_110a6b720;
  pcStack_a8 = FUN_108761da0;
  ppuStack_a0 = &PTR_DAT_110a6b670;
  uStack_1e0 = 0;
  uStack_1d8 = 0;
  uStack_90 = 0;
  lStack_88 = lStack_1d0;
  puVar8[4] = FUN_108761da0;
  puVar8[5] = &PTR_DAT_110a6b670;
  puVar8[7] = uVar5;
  puVar8[6] = uVar4;
  uStack_98 = 0;
  puVar8[8] = lStack_1d0;
  puVar8[10] = FUN_108762064;
  uStack_148 = uVar1;
  lStack_140 = lVar17;
  (*(code *)ppuStack_d0[2])(puVar8 + 0xb,&ppuStack_d0);
  *puVar10 = &PTR_DAT_110a6b698;
  puVar8[0x10] = ppuStack_158;
  (*(code *)ppuStack_150[2])(puVar8 + 0x11,&ppuStack_150);
  puVar8[0x16] = uVar18;
  (*(code *)*ppuStack_a0)(&ppuStack_a0);
  (*(code *)*ppuStack_150)(&ppuStack_150);
  func_0x000107c297a8(&uStack_188);
  uStack_178 = 0;
  uStack_170 = 0;
  puStack_210 = puVar10;
  puStack_208 = puVar8;
  func_0x0001087625b0(&uStack_178);
  func_0x000107c297a8(&uStack_168);
  func_0x000108762958();
  FUN_108761cd0(&puStack_1c0);
  ppuStack_158 = &PTR_FUN_110a8e888;
  ppuStack_150 = (undefined **)0x0;
  lStack_140 = 0;
  uStack_148 = 0;
  uStack_130 = 0;
  uStack_138 = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  uStack_118 = 0;
  puStack_110 = &DAT_11383d918;
  uStack_e0 = 0;
  ppuStack_100 = (undefined **)0x0;
  ppuStack_108 = (undefined **)0x0;
  uStack_f0 = 0;
  uStack_ec = 0;
  ppuStack_f8 = (undefined **)0x0;
  uStack_e8 = (undefined4)*(undefined8 *)(param_1 + 0x90);
  uStack_e4 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20);
  func_0x000108762844(&puStack_1c0);
  func_0x000107c29ee4(&pcStack_a8,puStack_1c0 + 3);
  uStack_148 = uStack_148 | 1;
  if (ppuStack_108 == (undefined **)0x0) {
    ppuVar13 = ppuStack_150;
    if (((ulong)ppuStack_150 & 1) != 0) {
      func_0x000108762a4c();
    }
    func_0x000107c287e0();
    ppuStack_108 = ppuVar13;
  }
  func_0x000107c287d0();
  func_0x000108762998();
  func_0x000107c297b0(&puStack_1c0);
  ppuVar13 = ppuStack_150;
  if (((ulong)ppuStack_150 & 1) != 0) {
    ppuVar13 = *(undefined ***)((ulong)ppuStack_150 & 0xfffffffffffffffe);
  }
  func_0x000107c30248(&puStack_110,*(ulong *)(param_1 + 0x128) & 0xfffffffffffffffc,ppuVar13);
  uStack_e0 = *(undefined4 *)(param_1 + 0x1b8);
  func_0x000107c29ee4(&pcStack_a8,param_1 + 0xb0);
  uStack_148 = uStack_148 | 4;
  if (ppuStack_f8 == (undefined **)0x0) {
    ppuVar13 = ppuStack_150;
    if (((ulong)ppuStack_150 & 1) != 0) {
      func_0x000108762a4c();
    }
    func_0x000107c287e0();
    ppuStack_f8 = ppuVar13;
  }
  func_0x000107c287d0();
  func_0x000108762998();
  uVar15 = *(ulong *)(param_1 + 0xe0);
  puVar16 = (ulong *)(param_1 + 0xe0);
  if ((uVar15 & 1) != 0) {
    puVar16 = (ulong *)(uVar15 + 7);
  }
  ppuVar13 = ppuStack_150;
  for (lVar17 = (long)*(int *)(param_1 + 0xe8) << 3; ppuStack_150 = ppuVar13, lVar17 != 0;
      lVar17 = lVar17 + -8) {
    uVar15 = *puVar16;
    plVar9 = &lStack_140;
    FUN_10866ea00();
    ppuVar13 = &PTR_PTR_11326cb58;
    if (*(undefined ***)(uVar15 + 0x18) != (undefined **)0x0) {
      ppuVar13 = *(undefined ***)(uVar15 + 0x18);
    }
    uVar15 = plVar9[1];
    if ((uVar15 & 1) != 0) {
      uVar15 = *(ulong *)(uVar15 & 0xfffffffffffffffe);
    }
    func_0x000107c30248(plVar9 + 2,(ulong)ppuVar13[2] & 0xfffffffffffffffc,uVar15);
    puVar16 = puVar16 + 1;
    ppuVar13 = ppuStack_150;
  }
  if ((*(byte *)(param_1 + 0xd8) >> 1 & 1) != 0) {
    puVar16 = *(ulong **)(param_1 + 0x138);
    uStack_148 = uStack_148 | 2;
    if (ppuStack_100 == (undefined **)0x0) {
      if (((ulong)ppuVar13 & 1) != 0) {
        func_0x000108762a4c();
      }
      func_0x000107c28fb4();
      ppuStack_100 = ppuVar13;
    }
    FUN_1088bc4d8();
  }
  uVar6 = *(char *)(param_1 + 0x310) == '\x01';
  if ((bool)uVar6) {
    uStack_148 = uStack_148 | 8;
    if (CONCAT44(uStack_ec,uStack_f0) == 0) {
      ppuVar13 = ppuStack_150;
      if (((ulong)ppuStack_150 & 1) != 0) {
        func_0x000108762a4c();
      }
      FUN_1086d03e4();
      uStack_f0 = SUB84(ppuVar13,0);
      uStack_ec = (undefined4)((ulong)ppuVar13 >> 0x20);
    }
    FUN_1088f75d4();
  }
  func_0x000108762844(&pcStack_a8);
  plVar9 = *(long **)(pcStack_a8 + 0x50);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = *plVar7 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  pppuVar12 = &ppuStack_158;
  ppuVar14 = &puStack_1c0;
  puStack_1c0 = puVar10;
  puStack_1b8 = puVar8;
  (**(code **)(*plVar9 + 0x30))(plVar9,pppuVar12,ppuVar14,param_1 + 0x280);
  func_0x0001087625d8(&puStack_1c0);
  func_0x000107c297b0(&pcStack_a8);
  FUN_1088f87b8(&ppuStack_158);
  func_0x0001087625b0(&puStack_210);
  func_0x000107c297a4(&puStack_200);
  puVar10 = &uStack_1e0;
  func_0x000107c297a4();
  func_0x0001087628a0(uStack_78);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  func_0x000108762998();
  FUN_1088f87b8(&ppuStack_158);
  func_0x0001087625b0(&puStack_210);
  func_0x000107c297a4(&puStack_200);
  puVar11 = &uStack_1e0;
  func_0x000107c297a4(puVar11);
  func_0x00010876284c();
  pcStack_218 = FUN_108760c3c;
  plStack_240 = plVar7;
  puStack_238 = puVar16;
  puStack_230 = puVar8;
  puStack_228 = puVar10;
  puStack_220 = &stack0xfffffffffffffff0;
  func_0x000107c29820(alStack_268 + 3);
  alStack_268[0] = 0;
  alStack_268[1] = 0;
  alStack_268[2] = 0;
  (**(code **)**(undefined8 **)(alStack_268[3] + 0x170))
            (*(undefined8 **)(alStack_268[3] + 0x170),pppuVar12,pppuVar12,1,ppuVar14,alStack_268);
  func_0x000104be1274(alStack_268);
  func_0x000107c297b0(alStack_268 + 3);
  func_0x000107c29820(alStack_268,puVar11);
  (**(code **)(**(long **)(alStack_268[0] + 0x170) + 0x48))
            (*(long **)(alStack_268[0] + 0x170),pppuVar12);
  func_0x000107c297b0(alStack_268);
  return;
}



/* Entry: 108760c3c; end: 108760cfb;  */

void FUN_108760c3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long alStack_58 [5];
  
  func_0x000107c29820(alStack_58 + 3);
  alStack_58[0] = 0;
  alStack_58[1] = 0;
  alStack_58[2] = 0;
  (**(code **)**(undefined8 **)(alStack_58[3] + 0x170))
            (*(undefined8 **)(alStack_58[3] + 0x170),param_2,param_2,1,param_3,alStack_58);
  func_0x000104be1274(alStack_58);
  func_0x000107c297b0(alStack_58 + 3);
  func_0x000107c29820(alStack_58,param_1);
  (**(code **)(**(long **)(alStack_58[0] + 0x170) + 0x48))
            (*(long **)(alStack_58[0] + 0x170),param_2);
  func_0x000107c297b0(alStack_58);
  return;
}



/* Entry: 108760cfc; end: 10876194b;  */

void FUN_108760cfc(long param_1,undefined4 *param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  code *pcVar6;
  undefined1 uVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *plVar12;
  undefined4 *puVar13;
  undefined4 extraout_w8;
  undefined4 uVar14;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined *puVar15;
  long extraout_x8_02;
  uint extraout_w9;
  long lVar16;
  undefined4 extraout_w10;
  ulong *puVar17;
  undefined8 uVar18;
  long *plVar19;
  undefined1 auStack_668 [40];
  undefined1 auStack_640 [40];
  long *plStack_618;
  long alStack_610 [2];
  long alStack_600 [27];
  byte bStack_528;
  long alStack_520 [4];
  undefined4 uStack_500;
  undefined1 auStack_438 [24];
  undefined8 uStack_420;
  undefined8 uStack_418;
  long lStack_410;
  long *plStack_3e0;
  undefined1 auStack_3d8 [24];
  undefined1 auStack_3c0 [40];
  undefined1 auStack_398 [24];
  undefined1 auStack_380 [40];
  undefined1 auStack_358 [24];
  undefined1 auStack_340 [17];
  byte bStack_32f;
  undefined1 uStack_328;
  int iStack_320;
  ulong uStack_2e0;
  undefined **ppuStack_268;
  long lStack_260;
  undefined1 auStack_228 [40];
  long lStack_200;
  char cStack_1e8;
  undefined8 uStack_1e0;
  byte bStack_1d8;
  undefined1 uStack_1a0;
  undefined1 uStack_198;
  char cStack_18c;
  long alStack_188 [3];
  undefined1 uStack_170;
  undefined1 uStack_168;
  undefined4 uStack_160;
  byte bStack_15c;
  byte bStack_158;
  long alStack_150 [3];
  undefined8 *puStack_138;
  undefined4 uStack_130;
  byte bStack_78;
  undefined8 uStack_70;
  
  puVar13 = param_2;
  func_0x0001087629a0();
  uVar7 = puVar13[10] == 1;
  uStack_70 = extraout_x8;
  if ((bool)uVar7) {
    uVar14 = *param_2;
    FUN_10875ebcc(param_1,uVar14);
    FUN_1087619cc(param_1,uVar14);
  }
  else {
    if (puVar13[10] != 0) goto LAB_1087615e0;
    ppuVar8 = &PTR_PTR_11327c548;
    if (*(undefined ***)(param_2 + 6) != (undefined **)0x0) {
      ppuVar8 = *(undefined ***)(param_2 + 6);
    }
    uVar7 = *(char *)(ppuVar8 + 0xb) == '\x01';
    if ((bool)uVar7) {
      func_0x00010876282c();
      func_0x000108762a40();
      FUN_10885ef30(auStack_358);
      FUN_108663a10(alStack_188,auStack_358);
      FUN_108656820(auStack_358);
      func_0x000108762868();
      if ((bStack_158 & 1) == 0) {
        func_0x000108762970();
      }
      else {
        if ((bStack_15c & 1) == 0) {
          uVar14 = 0;
        }
        else {
          func_0x000108762a2c(uStack_160);
          uVar14 = extraout_w8;
          if (2 < extraout_w9) {
            uVar14 = extraout_w10;
          }
          bStack_15c = 0;
        }
        uStack_168 = 0;
        uStack_170 = 0;
        func_0x00010876282c();
        func_0x000108762a40();
        func_0x000107c29f60(auStack_358);
        func_0x000108762868();
        uStack_1a0 = 0;
        uStack_198 = 0;
        if (cStack_18c == '\x01') {
          cStack_18c = '\0';
        }
        uVar7 = cStack_1e8 == '\x01';
        if ((bool)uVar7) {
          func_0x000108762820();
          func_0x00010876290c();
          func_0x000107c278b8(auStack_398,&UNK_10f4ba144);
          plVar19 = alStack_520;
          func_0x000107c28824(plVar19,auStack_398,&UNK_10f4ba14f);
          func_0x000107c2884c(auStack_380,plVar19);
          func_0x0001087629b0();
          func_0x0001087628d4();
          func_0x000107c2882c(auStack_380);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_398);
          func_0x0001087628dc();
          func_0x000108762870();
LAB_108761030:
          func_0x000108762970();
        }
        else {
          func_0x000107c278b8(alStack_520,&DAT_10f4bdfd4);
          func_0x000107c27b9c(auStack_228,alStack_520);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_520);
          uVar7 = lStack_200 == 1;
          if (0 < lStack_200) {
            func_0x000108762820();
            func_0x00010876290c();
            func_0x000107c278b8(auStack_3d8,&UNK_10f4ba144);
            plVar19 = alStack_520;
            func_0x000107c28824(plVar19,auStack_3d8,&UNK_10f4ba15d);
            func_0x000107c2884c(auStack_3c0,plVar19);
            func_0x0001087629b0();
            func_0x0001087628d4();
            func_0x000107c2882c(auStack_3c0);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3d8);
            func_0x0001087628dc();
            func_0x000108762870();
            alStack_520[0] = 0;
            alStack_520[1] = 0;
            alStack_520[2] = 0;
            func_0x000108762a18();
            func_0x00010867b9fc(alStack_520);
            goto LAB_108761030;
          }
          func_0x00010876282c();
          (**(code **)(**(long **)(alStack_520[0] + 0x200) + 0x10))(&plStack_3e0);
          func_0x000108762868();
          func_0x0001087628c4();
          ppuVar8 = &PTR_PTR_11327ad30;
          if (*(undefined ***)(extraout_x8_01 + 0x50) != (undefined **)0x0) {
            ppuVar8 = *(undefined ***)(extraout_x8_01 + 0x50);
          }
          uVar11 = uStack_2e0 & 0xfffffffffffffffc;
          func_0x000107c278d0(uVar11,(ulong)ppuVar8[0xc] & 0xfffffffffffffffc);
          if ((uVar11 & 1) == 0) {
            (**(code **)(*plStack_3e0 + 0x20))(plStack_3e0,ppuVar8);
          }
          if (iStack_320 != *(int *)(ppuVar8 + 4)) {
            ppuVar1 = &PTR_PTR_11327c548;
            if (*(undefined ***)(param_2 + 6) != (undefined **)0x0) {
              ppuVar1 = *(undefined ***)(param_2 + 6);
            }
            alStack_520[0] = 0;
            alStack_520[1] = 0;
            alStack_520[2] = 0;
            FUN_10876194c(alStack_520,(long)*(int *)(ppuVar1 + 7));
            puVar15 = ppuVar1[6];
            ppuVar2 = ppuVar1 + 6;
            if (((ulong)puVar15 & 1) != 0) {
              ppuVar2 = (undefined **)(puVar15 + 7);
            }
            FUN_1087623e8(ppuVar2,ppuVar2 + *(int *)(ppuVar1 + 7),alStack_520);
            (**(code **)(*plStack_3e0 + 0x18))(plStack_3e0,ppuVar8,alStack_520);
            FUN_1086cd80c(alStack_520);
          }
          func_0x0001088f56bc(auStack_340,ppuVar8);
          lStack_200 = lStack_260;
          if ((bStack_1d8 & 1) == 0) {
            func_0x0001087628c4();
            if (*(int *)(extraout_x8_02 + 0x20) != 0) {
              uVar11 = *(ulong *)(extraout_x8_02 + 0x18);
              puVar17 = (ulong *)(extraout_x8_02 + 0x18);
              if ((uVar11 & 1) != 0) {
                puVar17 = (ulong *)(uVar11 + 7);
              }
              lVar16 = (long)*(int *)(extraout_x8_02 + 0x20) * 8;
              puVar5 = puVar17;
              while (puVar4 = puVar5, lVar16 = lVar16 + -8, lVar16 != 0) {
                puVar17 = puVar17 + 1;
                puVar5 = puVar17;
                if (*(ulong *)(*puVar4 + 0x60) <= *(ulong *)(*puVar17 + 0x60)) {
                  puVar5 = puVar4;
                }
              }
              uStack_1e0 = *(undefined8 *)(*puVar4 + 0x60);
              bStack_1d8 = 1;
            }
          }
          func_0x00010876282c();
          uVar18 = *(undefined8 *)(*(long *)(alStack_520[0] + 0x60) + 0x18);
          func_0x000107c278b8(auStack_438,&UNK_10f4ba16c);
          func_0x000107c31420(&uStack_420,uVar18,auStack_438);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_438);
          func_0x000108762868();
          func_0x00010876282c();
          func_0x000108762a40();
          FUN_10885fef4();
          func_0x000108762868();
          func_0x00010876282c();
          func_0x000108762a40();
          FUN_10885ff98();
          func_0x000108762868();
          func_0x00010876282c();
          (**(code **)(**(long **)(alStack_520[0] + 0x130) + 0x10))
                    (*(long **)(alStack_520[0] + 0x130),auStack_358,lStack_200);
          func_0x000108762868();
          func_0x000108762820();
          func_0x000107c29fa8(alStack_520,*(undefined8 *)(alStack_150[0] + 0x60),alStack_188);
          func_0x000108762870();
          func_0x000107c28ee8(alStack_150,alStack_520);
          _bzero(alStack_600,0xe0);
          while ((((bStack_78 & 1) != 0 || ((bStack_528 & 1) != 0)) &&
                 (alStack_150[0] != alStack_600[0]))) {
            plVar19 = alStack_150;
            FUN_1086a10f8(plVar19);
            plVar12 = plVar19;
            func_0x0001087628c4();
            FUN_1086c1e2c(plVar12 + 5);
            func_0x0001088bf408();
            func_0x000108762844(alStack_610);
            FUN_108864b3c(*(undefined8 *)(alStack_610[0] + 0x60),plVar19);
            func_0x0001087628e4();
            func_0x000107c28fdc(alStack_150);
          }
          func_0x000108762988(alStack_600);
          func_0x000108762988(alStack_150);
          func_0x000107c28fcc(alStack_520);
          alStack_520[1] = 0;
          alStack_520[0] = 0;
          alStack_520[3] = 0;
          alStack_520[2] = 0;
          uStack_500 = 0x3f800000;
          uVar7 = *(undefined ***)(param_2 + 6) == (undefined **)0x0;
          ppuVar8 = &PTR_PTR_11327c548;
          if (!(bool)uVar7) {
            ppuVar8 = *(undefined ***)(param_2 + 6);
          }
          func_0x000108762820();
          uVar18 = *(undefined8 *)(alStack_150[0] + 0x60);
          func_0x000108762844(alStack_610);
          FUN_1086a67dc(alStack_600,ppuVar8 + 3,alStack_188,&uStack_420,uVar18,
                        *(undefined8 *)(alStack_610[0] + 0x120),alStack_520);
          func_0x0001087628e4();
          func_0x000108762870();
          func_0x000108762820();
          (**(code **)(**(long **)(alStack_150[0] + 0xd0) + 0xa0))
                    (*(long **)(alStack_150[0] + 0xd0),alStack_188,auStack_340,&uStack_420);
          func_0x000108762870();
          func_0x000107c31428(&uStack_420);
          if ((bStack_32f >> 6 & 1) != 0) {
            func_0x000108762820();
            uVar7 = ppuStack_268 == (undefined **)0x0;
            ppuVar8 = &PTR_PTR_11327acf8;
            if (!(bool)uVar7) {
              ppuVar8 = ppuStack_268;
            }
            (**(code **)(**(long **)(alStack_150[0] + 0x260) + 0x20))
                      (*(long **)(alStack_150[0] + 0x260),auStack_358,ppuVar8,(long)iStack_320,
                       0x2e0128);
            func_0x000108762870();
          }
          func_0x000108762a18();
          func_0x000108762820();
          plStack_618 = plStack_3e0;
          plStack_3e0 = (long *)0x0;
          (**(code **)(**(long **)(alStack_150[0] + 0x200) + 0x18))
                    (*(long **)(alStack_150[0] + 0x200),&plStack_618);
          plVar19 = plStack_618;
          plStack_618 = (long *)0x0;
          if (plVar19 != (long *)0x0) {
            func_0x000108762854();
          }
          func_0x000108762870();
          func_0x000108762844(alStack_610);
          func_0x0001087629bc();
          uStack_130 = 0x1e8;
          plVar19 = alStack_150;
          func_0x000107c28b38(plVar19,0);
          func_0x000107c2884c(auStack_640,plVar19);
          func_0x0001087629b0();
          func_0x0001087628d4();
          func_0x000108762950();
          func_0x000108762948();
          func_0x0001087628e4();
          func_0x000108762970();
          func_0x0001087629bc();
          uStack_130 = 0x25a;
          plVar19 = alStack_150;
          FUN_1086b8004(plVar19,uVar14);
          FUN_1086c31c4();
          func_0x0001087629f8();
          func_0x000107c2884c(auStack_668,plVar19);
          func_0x0001087629b0();
          func_0x0001087628d4();
          func_0x000107c2882c(auStack_668);
          func_0x000108762948();
          func_0x00010867b9fc(alStack_600);
          func_0x00010867bb84(alStack_520);
          func_0x000107c31424(&uStack_420);
          plVar19 = plStack_3e0;
          plStack_3e0 = (long *)0x0;
          if (plVar19 != (long *)0x0) {
            func_0x000108762854();
          }
        }
        func_0x000107c287e4(auStack_358);
      }
      FUN_1086569a0(alStack_188);
      goto LAB_108761124;
    }
    ppuVar1 = &PTR_PTR_11326b328;
    if ((undefined **)ppuVar8[9] != (undefined **)0x0) {
      ppuVar1 = (undefined **)ppuVar8[9];
    }
    func_0x00010876282c();
    (**(code **)(**(long **)(alStack_520[0] + 0x250) + 0x10))
              (*(long **)(alStack_520[0] + 0x250),ppuVar1,
               *(undefined4 *)(*(long *)(param_1 + 0x58) + 0xfc));
    func_0x000108762868();
    ppuVar8 = ppuVar1;
    FUN_108770bcc();
    func_0x000108762820();
    plVar19 = *(long **)(alStack_150[0] + 0xf0);
    func_0x0001087628ec();
    uVar14 = 1;
    if ((int)ppuVar8 == 1) {
      uVar14 = 2;
    }
    puVar9 = auStack_358;
    func_0x000107c28b38(puVar9,uVar14);
    func_0x000107c278b8(alStack_600,"failure_reason");
    func_0x000107c2881c(puVar9,alStack_600,*(undefined4 *)(ppuVar1 + 7));
    func_0x000107c2884c(alStack_520,puVar9);
    (**(code **)(*plVar19 + 0x50))(plVar19,alStack_520);
    func_0x0001087628dc();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_600);
    func_0x000108762990();
    func_0x000108762870();
    iVar3 = *(int *)(ppuVar1 + 7);
    if (iVar3 == 0) {
LAB_108760ebc:
      func_0x0001087629f0(*(undefined8 *)(param_1 + 0x58),ppuVar1);
      uVar14 = 3;
LAB_1087610fc:
      FUN_10875ebcc(param_1,uVar14);
    }
    else {
      if (iVar3 != 7) {
        if (iVar3 == 2) goto LAB_108760ebc;
        func_0x0001087629f0(*(undefined8 *)(param_1 + 0x58),ppuVar1);
        uVar14 = 4;
        if ((int)ppuVar8 == 1) {
          uVar14 = 1;
        }
        goto LAB_1087610fc;
      }
      func_0x000108762844(alStack_188);
      plVar19 = *(long **)(alStack_188[0] + 0x100);
      func_0x0001087629e0(&uStack_420);
      puStack_138 = (undefined8 *)0x0;
      puVar10 = (undefined8 *)0x20;
      lStack_410 = param_1;
      __Znwm();
      *puVar10 = &PTR_SUB_110a6b780;
      puVar10[2] = uStack_418;
      puVar10[1] = uStack_420;
      uStack_420 = 0;
      uStack_418 = 0;
      puVar10[3] = param_1;
      auStack_358[0] = 0;
      uStack_328 = 0;
      puStack_138 = puVar10;
      (**(code **)(*plVar19 + 0x18))(plVar19,0x12009f,param_1 + 0xb0,alStack_150,auStack_358);
      func_0x00010086ab34(auStack_358);
      FUN_1086d1cac(alStack_150);
      func_0x000107c297a4(&uStack_420);
      func_0x000107c297b0(alStack_188);
    }
    func_0x0001087628c4();
    uVar7 = *(undefined ***)(extraout_x8_00 + 0x48) == (undefined **)0x0;
    ppuVar8 = &PTR_PTR_11326b328;
    if (!(bool)uVar7) {
      ppuVar8 = *(undefined ***)(extraout_x8_00 + 0x48);
    }
    FUN_108770bcc(ppuVar8);
    FUN_1087619cc(param_1,ppuVar8);
  }
LAB_108761124:
  func_0x0001087628a0(uStack_70);
  if ((bool)uVar7) {
    return;
  }
  ___stack_chk_fail();
LAB_1087615e0:
  func_0x00010563ab98();
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1087615e8);
  (*pcVar6)();
}



/* Entry: 10876194c; end: 1087619cb;  */

void FUN_10876194c(long *param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined ***pppuVar2;
  int iVar3;
  undefined4 extraout_w8;
  uint extraout_w9;
  undefined4 extraout_w10;
  undefined1 auStack_128 [40];
  long alStack_100 [2];
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_d0;
  undefined1 auStack_a8 [40];
  undefined4 uStack_80;
  byte bStack_7c;
  char cStack_78;
  undefined1 auStack_48 [40];
  
  if ((ulong)((param_1[2] - *param_1) / 0x28) < param_2) {
    if (0x666666666666666 < param_2) {
      FUN_10872caa4();
      iVar3 = (int)param_2;
      func_0x000108762978();
      func_0x00010876284c();
      if (iVar3 != 3) {
        func_0x000107c29820(alStack_100);
        FUN_10885ef30(&ppuStack_f0,*(undefined8 *)(alStack_100[0] + 0x60),param_1[0x12]);
        FUN_108663a10(auStack_a8,&ppuStack_f0);
        FUN_108656820(&ppuStack_f0);
        func_0x000107c297b0(alStack_100);
        if ((cStack_78 == '\x01') && ((bStack_7c & 1) != 0)) {
          uStack_e0 = 0;
          uStack_d8 = 0;
          ppuStack_f0 = &PTR_FUN_110a609a8;
          uStack_e8 = 0;
          uStack_d0 = 0x25a;
          func_0x000108762a2c(uStack_80);
          uVar1 = extraout_w8;
          if (2 < extraout_w9) {
            uVar1 = extraout_w10;
          }
          pppuVar2 = &ppuStack_f0;
          FUN_1086b8004(pppuVar2,uVar1);
          FUN_1086c31c4();
          func_0x0001087629f8();
          func_0x000107c2884c(auStack_128,pppuVar2);
          func_0x0001087629b0();
          func_0x0001087628d4();
          func_0x000107c2882c(auStack_128);
          func_0x000108762950();
        }
        func_0x000108762980();
      }
      return;
    }
    FUN_1087621c0(auStack_48,param_2,(param_1[1] - *param_1) / 0x28);
    func_0x000108762a20();
    func_0x000108762978();
  }
  return;
}



/* Entry: 1087619cc; end: 108761b13;  */

void FUN_1087619cc(long param_1,int param_2)

{
  undefined4 uVar1;
  undefined ***pppuVar2;
  undefined4 extraout_w8;
  uint extraout_w9;
  undefined4 extraout_w10;
  undefined1 auStack_d8 [40];
  long alStack_b0 [2];
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined1 auStack_58 [40];
  undefined4 uStack_30;
  byte bStack_2c;
  char cStack_28;
  
  if (param_2 != 3) {
    func_0x000107c29820(alStack_b0);
    FUN_10885ef30(&ppuStack_a0,*(undefined8 *)(alStack_b0[0] + 0x60),*(undefined8 *)(param_1 + 0x90)
                 );
    FUN_108663a10(auStack_58,&ppuStack_a0);
    FUN_108656820(&ppuStack_a0);
    func_0x000107c297b0(alStack_b0);
    if ((cStack_28 == '\x01') && ((bStack_2c & 1) != 0)) {
      uStack_90 = 0;
      uStack_88 = 0;
      ppuStack_a0 = &PTR_FUN_110a609a8;
      uStack_98 = 0;
      uStack_80 = 0x25a;
      func_0x000108762a2c(uStack_30);
      uVar1 = extraout_w8;
      if (2 < extraout_w9) {
        uVar1 = extraout_w10;
      }
      pppuVar2 = &ppuStack_a0;
      FUN_1086b8004(pppuVar2,uVar1);
      FUN_1086c31c4();
      func_0x0001087629f8();
      func_0x000107c2884c(auStack_d8,pppuVar2);
      func_0x0001087629b0();
      func_0x0001087628d4();
      func_0x000107c2882c(auStack_d8);
      func_0x000108762950();
    }
    func_0x000108762980();
  }
  return;
}


