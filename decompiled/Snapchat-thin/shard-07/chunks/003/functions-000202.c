/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1053a4b78; end: 1053a4b87;  */

void FUN_1053a4b78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001053a4b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x68) + 0x30))();
  return;
}



/* Entry: 1053a4b88; end: 1053a4d67;  */

undefined8 * FUN_1053a4b88(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined8 *puStack_80;
  long *plStack_60;
  undefined8 uStack_58;
  
  puVar5 = &uStack_110;
  puVar6 = &uStack_110;
  func_0x0001053a5288();
  uStack_58 = extraout_x8;
  FUN_1053a4738();
  puVar7 = *(undefined8 **)(unaff_x19 + 0x48);
  uStack_108 = *(undefined8 *)(unaff_x19 + 0x60);
  uStack_110 = *(undefined8 *)(unaff_x19 + 0x58);
  if (*(long *)(unaff_x19 + 0x60) != 0) {
    do {
      func_0x000100c1be8c();
    } while (extraout_w10 != 0);
  }
  plVar3 = *(long **)(unaff_x19 + 0x68);
  (**(code **)(*plVar3 + 0x28))(&uStack_100);
  func_0x00010028c49c();
  lVar8 = puVar7[2];
  __ZNSt3__15mutex4lockEv(lVar8 + 8);
  lVar9 = *(long *)(lVar8 + 0x70);
  uStack_90 = 0x1053a5118;
  ppuStack_88 = &PTR_FUN_110880a90;
  puVar4 = (undefined8 *)0x78;
  __Znwm();
  uVar2 = uStack_108;
  uVar1 = uStack_110;
  uStack_110 = 0;
  uStack_108 = 0;
  puVar4[1] = uVar2;
  *puVar4 = uVar1;
  puVar4[3] = uStack_f8;
  puVar4[2] = uStack_100;
  puVar4[4] = uStack_f0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_100 = 0;
  puVar4[6] = uStack_e0;
  puVar4[5] = uStack_e8;
  puVar4[7] = uStack_d8;
  uStack_e8 = 0;
  uStack_e0 = 0;
  puVar4[9] = uStack_c8;
  puVar4[8] = uStack_d0;
  puVar4[10] = uStack_c0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  *(undefined1 *)(puVar4 + 0xb) = uStack_b8;
  puVar4[0xd] = uStack_a8;
  puVar4[0xc] = uStack_b0;
  puVar4[0xe] = uStack_a0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
  puStack_80 = puVar4;
  plStack_60 = plVar3;
  func_0x0001005760fc(lVar8 + 0x48,&uStack_90);
  func_0x0001053a51a4(ppuStack_88);
  __ZNSt3__15mutex6unlockEv(lVar8 + 8);
  if (lVar9 == 0) {
    plVar3 = (long *)*puVar7;
    ppuStack_88 = (undefined **)puVar7[3];
    uStack_90 = puVar7[2];
    if (puVar7[3] != 0) {
      do {
        func_0x000100c1be8c();
      } while (extraout_w10_00 != 0);
    }
    (**(code **)(*plVar3 + 0x10))();
    func_0x000100576684(&uStack_90);
  }
  FUN_1053a4d68();
  func_0x0001053a5274(uStack_58);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000100576684(&uStack_90);
    FUN_1053a4d68();
    func_0x0001053a51b0();
    func_0x0001053a063c((undefined1 *)((long)puVar6 + 0x10));
    if (*(long *)((long)puVar6 + 8) != 0) {
      func_0x0001000df548();
    }
    return (undefined8 *)(undefined1 *)puVar6;
  }
  return puVar5;
}



/* Entry: 1053a4d68; end: 1053a4d8f;  */

long FUN_1053a4d68(long param_1)

{
  func_0x0001053a063c(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1053a4d90; end: 1053a4d97;  */

void FUN_1053a4d90(void)

{
  func_0x000100c22208();
  func_0x0001000e30f4();
  return;
}



/* Entry: 1053a4d98; end: 1053a4dab;  */

void FUN_1053a4d98(void)

{
  FUN_1053a4df8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053a4dac; end: 1053a4dd3;  */

undefined4 * FUN_1053a4dac(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Entry: 1053a4dd4; end: 1053a4de7;  */

void FUN_1053a4dd4(void)

{
  func_0x000100c22280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053a4de8; end: 1053a4df7;  */

undefined8 FUN_1053a4de8(void)

{
  return 0xffffffff;
}



/* Entry: 1053a4df8; end: 1053a4e4f;  */

undefined8 * FUN_1053a4df8(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_DAT_1108809c8;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  func_0x000100c1b690(param_1 + 0xb);
  func_0x000100558bb4(param_1 + 9);
  func_0x000100c22594(param_1 + 2);
  return param_1;
}



/* Entry: 1053a4e50; end: 1053a4ed3;  */

void FUN_1053a4e50(long param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  long extraout_x8;
  ulong uVar3;
  ulong *unaff_x19;
  
  func_0x0001005760f0();
  func_0x0001053a5250();
  if ((bool)in_ZR) {
    uVar1 = *unaff_x19;
    bVar2 = unaff_x19[1] == uVar1;
    if (uVar1 < unaff_x19[1]) {
      func_0x0001053a5188();
      if (!bVar2) {
        func_0x0001053a51b8();
      }
      func_0x0001053a5240();
    }
    else {
      uVar3 = (long)(extraout_x8 - uVar1) >> 2;
      if (extraout_x8 - uVar1 == 0) {
        uVar3 = 0;
      }
      func_0x0001053a5204();
      func_0x0001053a5168(param_1 + (uVar3 >> 2) * 8);
      func_0x0001053a5210();
      func_0x0001053a5150();
    }
  }
  func_0x0001005763d0();
  return;
}



/* Entry: 1053a4ed4; end: 1053a4f57;  */

void FUN_1053a4ed4(long param_1)

{
  ulong uVar1;
  undefined1 in_ZR;
  bool bVar2;
  long extraout_x8;
  ulong uVar3;
  ulong *unaff_x19;
  
  func_0x0001005760f0();
  func_0x0001053a5250();
  if ((bool)in_ZR) {
    uVar1 = *unaff_x19;
    bVar2 = unaff_x19[1] == uVar1;
    if (uVar1 < unaff_x19[1]) {
      func_0x0001053a5188();
      if (!bVar2) {
        func_0x0001053a51b8();
      }
      func_0x0001053a5240();
    }
    else {
      uVar3 = (long)(extraout_x8 - uVar1) >> 2;
      if (extraout_x8 - uVar1 == 0) {
        uVar3 = 0;
      }
      func_0x0001053a5204();
      func_0x0001053a5168(param_1 + (uVar3 >> 2) * 8);
      func_0x0001053a5210();
      func_0x0001053a5150();
    }
  }
  func_0x0001005763d0();
  return;
}



/* Entry: 1053a4f58; end: 1053a4fff;  */

void FUN_1053a4f58(ulong *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  long extraout_x8;
  long lVar3;
  long lVar4;
  long extraout_x9;
  long unaff_x19;
  undefined8 *unaff_x20;
  ulong unaff_x21;
  ulong uVar5;
  long unaff_x22;
  
  func_0x0001005760f0();
  uVar5 = param_1[1];
  bVar1 = *param_1 <= uVar5;
  uVar2 = uVar5 == *param_1;
  if ((bool)uVar2) {
    lVar3 = unaff_x19;
    func_0x0001053a5250();
    if (bVar1) {
      lVar4 = (long)(extraout_x9 - uVar5) >> 2;
      if (extraout_x9 - uVar5 == 0) {
        lVar4 = 1;
      }
      func_0x000100576320();
      func_0x0001053a5168(lVar3 + (lVar4 * 2 + 6U & 0xfffffffffffffff8));
      func_0x0001053a5210();
      func_0x0001053a5150();
      uVar5 = *(ulong *)(unaff_x19 + 8);
    }
    else {
      func_0x0001053a51c4();
      lVar3 = extraout_x8;
      if (!(bool)uVar2) {
        _memmove();
        lVar3 = *(long *)(unaff_x19 + 0x10);
      }
      *(ulong *)(unaff_x19 + 8) = unaff_x21;
      *(long *)(unaff_x19 + 0x10) = lVar3 + unaff_x22 * 8;
      uVar5 = unaff_x21;
    }
  }
  *(undefined8 *)(uVar5 - 8) = *unaff_x20;
  *(undefined8 **)(unaff_x19 + 8) = (undefined8 *)(uVar5 - 8);
  return;
}



/* Entry: 1053a5000; end: 1053a50ab;  */

void FUN_1053a5000(long *param_1)

{
  ulong uVar1;
  bool bVar2;
  long extraout_x8;
  long lVar3;
  long lVar4;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  
  func_0x0001005760f0();
  lVar3 = param_1[1];
  if (lVar3 == *param_1) {
    uVar1 = *(ulong *)(unaff_x19 + 0x18);
    bVar2 = *(ulong *)(unaff_x19 + 0x10) == uVar1;
    if (*(ulong *)(unaff_x19 + 0x10) < uVar1) {
      func_0x0001053a51c4();
      lVar3 = extraout_x8;
      if (!bVar2) {
        _memmove();
        lVar3 = *(long *)(unaff_x19 + 0x10);
      }
      *(long *)(unaff_x19 + 8) = unaff_x21;
      *(long *)(unaff_x19 + 0x10) = lVar3 + unaff_x22 * 8;
      lVar3 = unaff_x21;
    }
    else {
      lVar4 = (long)(uVar1 - lVar3) >> 2;
      if (uVar1 - lVar3 == 0) {
        lVar4 = 1;
      }
      lVar3 = *(long *)(unaff_x19 + 0x20);
      func_0x000100576320();
      func_0x0001053a5168(lVar3 + (lVar4 * 2 + 6U & 0xfffffffffffffff8));
      func_0x0001053a5210();
      func_0x0001053a5150();
      lVar3 = *(long *)(unaff_x19 + 8);
    }
  }
  *(undefined8 *)(lVar3 + -8) = *unaff_x20;
  *(undefined8 **)(unaff_x19 + 8) = (undefined8 *)(lVar3 + -8);
  return;
}



/* Entry: 1053a50ac; end: 1053a50f3;  */

void FUN_1053a50ac(long param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar2 = param_3 - (long)param_2 >> 3;
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  puVar1 = puVar3;
  for (lVar4 = lVar2 << 3; lVar4 != 0; lVar4 = lVar4 + -8) {
    *puVar1 = *param_2;
    puVar1 = puVar1 + 1;
    param_2 = param_2 + 1;
  }
  *(undefined8 **)(param_1 + 0x10) = puVar3 + lVar2;
  return;
}



/* Entry: 1053a50f4; end: 1053a5113;  */

void FUN_1053a50f4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1053a4b50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1053a5114; end: 1053a512b;  */

void FUN_1053a5114(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1053a512c; end: 1053a514b;  */

void FUN_1053a512c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1053a4d68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1053a514c; end: 1053a52a7;  */

void FUN_1053a514c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1053a52a8; end: 1053a5337;  */

undefined8 *
FUN_1053a52a8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar4;
  
  ppuVar1 = &PTR___tlv_bootstrap_11340e260;
  (*(code *)PTR___tlv_bootstrap_11340e260)();
  puVar2 = *ppuVar1;
  *param_1 = &PTR_FUN_110880b58;
  param_1[1] = puVar2;
  FUN_1053a5338(param_1 + 2);
  lVar3 = param_3[1];
  uVar4 = *param_3;
  param_1[0xc] = param_3[1];
  param_1[0xb] = uVar4;
  if (lVar3 != 0) {
    do {
      FUN_1053a5984();
    } while (extraout_w10 != 0);
  }
  lVar3 = param_4[1];
  uVar4 = *param_4;
  param_1[0xe] = param_4[1];
  param_1[0xd] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x0001053a5988();
    } while (extraout_w10_00 != 0);
  }
  return param_1;
}



/* Entry: 1053a5338; end: 1053a5343;  */

void FUN_1053a5338(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x000107c39e18(param_1,0,param_2);
  func_0x000107c39e44(&PTR_DAT_110d09d18);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b56b7f4();
  }
  func_0x00010b56b89c();
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x00010b56b4dc();
  }
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x21;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x00010b56ba14();
  }
  *(undefined8 *)(unaff_x19 + 0x38) = unaff_x21;
  *(undefined1 *)(unaff_x19 + 0x40) = *(undefined1 *)(unaff_x20 + 0x40);
  return;
}



/* Entry: 1053a5344; end: 1053a5533;  */

void FUN_1053a5344(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined **ppuVar1;
  undefined1 in_ZR;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  uint uVar9;
  code **ppcVar10;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined **ppuStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined1 auStack_148 [40];
  long lStack_120;
  undefined8 *puStack_118;
  undefined4 *puStack_110;
  undefined8 *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 auStack_e0 [2];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined **ppuStack_78;
  undefined8 *puStack_70;
  undefined4 *puStack_50;
  
  func_0x0001053a59d0();
  FUN_1053a5534();
  pcStack_80 = (code *)CONCAT44(pcStack_80._4_4_,*param_3);
  uVar2 = SUB84(&pcStack_80,0);
  func_0x0001053ab348();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_b8,param_3 + 2);
  uStack_90 = uStack_b0;
  uStack_98 = uStack_b8;
  uStack_88 = uStack_a8;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  auStack_a0[0] = uVar2;
  func_0x0001053a5a14();
  puVar11 = *(undefined8 **)(unaff_x19 + 0x58);
  uStack_e8 = *(undefined8 *)(unaff_x19 + 0x70);
  uStack_f0 = *(undefined8 *)(unaff_x19 + 0x68);
  if (*(long *)(unaff_x19 + 0x70) != 0) {
    do {
      func_0x0001053a5988();
    } while (extraout_w10 != 0);
  }
  puVar3 = auStack_e0;
  FUN_1053a4dac(puVar3,auStack_a0);
  func_0x00010028c49c();
  lVar12 = puVar11[2];
  __ZNSt3__15mutex4lockEv(lVar12 + 8);
  lVar13 = *(long *)(lVar12 + 0x70);
  pcStack_80 = FUN_1053a5918;
  ppuStack_78 = &PTR_FUN_110880be8;
  puVar4 = (undefined8 *)0x30;
  __Znwm();
  puVar4[1] = uStack_e8;
  *puVar4 = uStack_f0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  *(undefined4 *)(puVar4 + 2) = auStack_e0[0];
  puVar4[4] = uStack_d0;
  puVar4[3] = uStack_d8;
  puVar4[5] = uStack_c8;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  ppcVar10 = &pcStack_80;
  puStack_70 = puVar4;
  puStack_50 = puVar3;
  func_0x0001005760fc(lVar12 + 0x48,ppcVar10);
  uVar9 = (uint)ppcVar10;
  func_0x0001053a59b0();
  __ZNSt3__15mutex6unlockEv(lVar12 + 8);
  if (lVar13 == 0) {
    plVar5 = (long *)*puVar11;
    ppuStack_78 = (undefined **)puVar11[3];
    pcStack_80 = (code *)puVar11[2];
    if (puVar11[3] != 0) {
      do {
        func_0x0001053a5988();
      } while (extraout_w10_00 != 0);
    }
    uVar9 = 0;
    (**(code **)(*plVar5 + 0x10))();
    func_0x000100576684(&pcStack_80);
  }
  FUN_1053a56b0(&uStack_f0);
  puVar4 = &uStack_98;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x0001053a59e8();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000100576684(&pcStack_80);
    FUN_1053a56b0(&uStack_f0);
    puVar6 = &uStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x0001053a5a0c();
    pcStack_f8 = FUN_1053a5534;
    uStack_160 = 0;
    uStack_158 = 0;
    ppuStack_170 = &PTR_FUN_110880ab8;
    uStack_168 = 0;
    uStack_150 = 0;
    lStack_120 = lVar12;
    puStack_118 = puVar11;
    puStack_110 = auStack_a0;
    puStack_108 = puVar4;
    puStack_100 = &stack0xfffffffffffffff0;
    func_0x00010002b838(auStack_188,"kind");
    ppuVar8 = &PTR_PTR_11339b0c8;
    if ((undefined **)puVar6[8] != (undefined **)0x0) {
      ppuVar8 = (undefined **)puVar6[8];
    }
    ppuVar1 = &PTR_PTR_11339afc0;
    if ((undefined **)ppuVar8[7] != (undefined **)0x0) {
      ppuVar1 = (undefined **)ppuVar8[7];
    }
    ppuVar8 = &PTR_PTR_11339af30;
    if ((undefined **)ppuVar1[8] != (undefined **)0x0) {
      ppuVar8 = (undefined **)ppuVar1[8];
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_1a0,(ulong)ppuVar8[2] & 0xfffffffffffffffc);
    pppuVar7 = &ppuStack_170;
    func_0x000100c220c4(pppuVar7,auStack_188,auStack_1a0);
    func_0x00010002b838(auStack_1b8,"success");
    func_0x000100c22114(pppuVar7,auStack_1b8,uVar9 & 1);
    func_0x000100c22244(auStack_148,pppuVar7);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a0);
    func_0x0001053a5a14();
    pppuVar7 = &ppuStack_170;
    func_0x000100c22280();
    func_0x000100c222a0();
    ppuVar8 = *pppuVar7;
    func_0x0001053a5a00(*(undefined8 *)(*ppuVar8 + 0x10));
    func_0x000100c222a0();
    func_0x0001053a5a00(*(undefined8 *)(*(long *)*ppuVar8 + 8));
    func_0x000100c22280(auStack_148);
    return;
  }
  return;
}



/* Entry: 1053a5534; end: 1053a56af;  */

void FUN_1053a5534(long param_1,uint param_2)

{
  undefined **ppuVar1;
  undefined ***pppuVar2;
  undefined **ppuVar3;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  uStack_70 = 0;
  uStack_68 = 0;
  ppuStack_80 = &PTR_FUN_110880ab8;
  uStack_78 = 0;
  uStack_60 = 0;
  func_0x00010002b838(auStack_98,"kind");
  ppuVar3 = &PTR_PTR_11339b0c8;
  if (*(undefined ***)(param_1 + 0x40) != (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(param_1 + 0x40);
  }
  ppuVar1 = &PTR_PTR_11339afc0;
  if ((undefined **)ppuVar3[7] != (undefined **)0x0) {
    ppuVar1 = (undefined **)ppuVar3[7];
  }
  ppuVar3 = &PTR_PTR_11339af30;
  if ((undefined **)ppuVar1[8] != (undefined **)0x0) {
    ppuVar3 = (undefined **)ppuVar1[8];
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_b0,(ulong)ppuVar3[2] & 0xfffffffffffffffc);
  pppuVar2 = &ppuStack_80;
  func_0x000100c220c4(pppuVar2,auStack_98,auStack_b0);
  func_0x00010002b838(auStack_c8,"success");
  func_0x000100c22114(pppuVar2,auStack_c8,param_2 & 1);
  func_0x000100c22244(auStack_58,pppuVar2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
  func_0x0001053a5a14();
  pppuVar2 = &ppuStack_80;
  func_0x000100c22280();
  func_0x000100c222a0();
  ppuVar3 = *pppuVar2;
  func_0x0001053a5a00(*(undefined8 *)(*ppuVar3 + 0x10));
  func_0x000100c222a0();
  func_0x0001053a5a00(*(undefined8 *)(*(long *)*ppuVar3 + 8));
  func_0x000100c22280(auStack_58);
  return;
}



/* Entry: 1053a56b0; end: 1053a56d7;  */

long FUN_1053a56b0(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1053a56d8; end: 1053a588f;  */

undefined8 * FUN_1053a56d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined8 *puStack_70;
  
  uVar4 = param_3;
  func_0x0001053a59d0();
  FUN_1053aac64(&uStack_a0,uVar4);
  func_0x00010b56ab18(param_3);
  FUN_1053a5534();
  puVar5 = *(undefined8 **)(unaff_x19 + 0x58);
  uStack_c8 = *(undefined8 *)(unaff_x19 + 0x70);
  uStack_d0 = *(undefined8 *)(unaff_x19 + 0x68);
  if (*(long *)(unaff_x19 + 0x70) != 0) {
    do {
      func_0x0001053a5988();
    } while (extraout_w10 != 0);
  }
  uStack_b8 = uStack_98;
  uStack_c0 = uStack_a0;
  uStack_b0 = uStack_90;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a0 = 0;
  func_0x00010028c49c();
  lVar6 = puVar5[2];
  __ZNSt3__15mutex4lockEv(lVar6 + 8);
  lVar7 = *(long *)(lVar6 + 0x70);
  uStack_80 = 0x1053a5950;
  ppuStack_78 = &PTR_FUN_110880c00;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  uVar1 = uStack_c8;
  uVar4 = uStack_d0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  puVar2[1] = uVar1;
  *puVar2 = uVar4;
  puVar2[3] = uStack_b8;
  puVar2[2] = uStack_c0;
  puVar2[4] = uStack_b0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c0 = 0;
  puStack_70 = puVar2;
  func_0x0001005760fc(lVar6 + 0x48,&uStack_80);
  func_0x0001053a59c0();
  __ZNSt3__15mutex6unlockEv(lVar6 + 8);
  if (lVar7 == 0) {
    plVar3 = (long *)*puVar5;
    ppuStack_78 = (undefined **)puVar5[3];
    uStack_80 = puVar5[2];
    if (puVar5[3] != 0) {
      do {
        func_0x0001053a5988();
      } while (extraout_w10_00 != 0);
    }
    (**(code **)(*plVar3 + 0x10))();
    func_0x000100576684(&uStack_80);
  }
  FUN_1053a5890(&uStack_d0);
  puVar5 = &uStack_a0;
  func_0x000100100fec();
  func_0x0001053a59e8();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000100576684(&uStack_80);
    FUN_1053a5890(&uStack_d0);
    puVar5 = &uStack_a0;
    func_0x000100100fec();
    func_0x0001053a5a0c();
    func_0x000100100fec(puVar5 + 2);
    if (puVar5[1] != 0) {
      func_0x0001000df548();
    }
    return puVar5;
  }
  return puVar5;
}



/* Entry: 1053a5890; end: 1053a58b7;  */

long FUN_1053a5890(long param_1)

{
  func_0x000100100fec(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1053a58b8; end: 1053a58bb;  */

undefined8 * FUN_1053a58b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110880b58;
  func_0x0001053a0f8c(param_1 + 0xd);
  func_0x000100558bb4(param_1 + 0xb);
  func_0x00010b56a700(param_1 + 2);
  return param_1;
}



/* Entry: 1053a58bc; end: 1053a58cf;  */

void FUN_1053a58bc(void)

{
  FUN_1053a58d0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053a58d0; end: 1053a5917;  */

undefined8 * FUN_1053a58d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110880b58;
  func_0x0001053a0f8c(param_1 + 0xd);
  func_0x000100558bb4(param_1 + 0xb);
  func_0x00010b56a700(param_1 + 2);
  return param_1;
}



/* Entry: 1053a5918; end: 1053a592b;  */

void FUN_1053a5918(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)**(undefined8 **)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001053a5928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 **)(param_1 + 0x10) + 2);
  return;
}



/* Entry: 1053a592c; end: 1053a594b;  */

void FUN_1053a592c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1053a56b0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1053a594c; end: 1053a5963;  */

void FUN_1053a594c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1053a5964; end: 1053a5983;  */

void FUN_1053a5964(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1053a5890();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1053a5984; end: 1053a5a27;  */

void FUN_1053a5984(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1053a5a28; end: 1053a5b63;  */

undefined1 * FUN_1053a5a28(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [56];
  undefined8 uStack_b8;
  long lStack_b0;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_48;
  
  puVar1 = auStack_110;
  puVar2 = auStack_110;
  func_0x0001005ef1cc();
  func_0x000100c1b064();
  if (extraout_x8 != 0) {
    do {
      func_0x00010054fdc4();
    } while (extraout_w10 != 0);
  }
  func_0x000100c1b07c();
  if (extraout_x8_00 != 0) {
    do {
      func_0x00010054fdc4();
    } while (extraout_w10_00 != 0);
  }
  FUN_1053a6068(auStack_f0);
  lStack_b0 = param_3[1];
  uStack_b8 = *param_3;
  if (param_3[1] != 0) {
    do {
      func_0x00010054fdc4();
    } while (extraout_w10_01 != 0);
  }
  pcStack_a8 = FUN_1053a6404;
  ppuStack_a0 = &PTR_FUN_110880d30;
  __Znwm(0x68);
  func_0x000100c1b124();
  FUN_1053a6068();
  param_3[0xc] = lStack_b0;
  param_3[0xb] = uStack_b8;
  if (lStack_b0 != 0) {
    do {
      func_0x00010054fdc4();
    } while (extraout_w10_02 != 0);
  }
  puStack_98 = param_3;
  func_0x000100078afc();
  func_0x000100c1b144();
  func_0x0001005ef43c(ppuStack_a0);
  FUN_1053a5b64();
  func_0x00010054ff88(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001005ef43c(ppuStack_a0);
    FUN_1053a5b64();
    func_0x0001053a6ad0();
    func_0x0001053a0f8c(puVar2 + 0x58);
    FUN_1053a1e28(puVar2 + 0x20);
    func_0x000100c1b710();
    func_0x00010076e0d4();
    if (puVar2 != (undefined1 *)0x0) {
      func_0x0001000df548();
    }
    return puVar1;
  }
  return puVar1;
}



/* Entry: 1053a5b64; end: 1053a5b93;  */

undefined8 FUN_1053a5b64(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001053a0f8c(param_1 + 0x58);
  FUN_1053a1e28(param_1 + 0x20);
  func_0x000100c1b710();
  func_0x00010076e0d4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1053a5b94; end: 1053a5ccf;  */

undefined1 * FUN_1053a5b94(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [80];
  undefined8 uStack_c0;
  long lStack_b8;
  code *pcStack_a8;
  undefined **ppuStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_48;
  
  puVar1 = auStack_130;
  puVar2 = auStack_130;
  func_0x0001005ef1cc();
  func_0x000100c1b064();
  if (extraout_x8 != 0) {
    do {
      func_0x00010054fdc4();
    } while (extraout_w10 != 0);
  }
  func_0x000100c1b07c();
  if (extraout_x8_00 != 0) {
    do {
      func_0x00010054fdc4();
    } while (extraout_w10_00 != 0);
  }
  FUN_1053a61cc(auStack_110);
  lStack_b8 = param_3[1];
  uStack_c0 = *param_3;
  if (param_3[1] != 0) {
    do {
      func_0x00010054fdc4();
    } while (extraout_w10_01 != 0);
  }
  pcStack_a8 = FUN_1053a66c8;
  ppuStack_a0 = &PTR_FUN_110880d98;
  __Znwm(0x80);
  func_0x000100c1b124();
  FUN_1053a61cc();
  param_3[0xf] = lStack_b8;
  param_3[0xe] = uStack_c0;
  if (lStack_b8 != 0) {
    do {
      func_0x00010054fdc4();
    } while (extraout_w10_02 != 0);
  }
  puStack_98 = param_3;
  func_0x000100078afc();
  func_0x000100c1b144();
  func_0x0001005ef43c(ppuStack_a0);
  FUN_1053a5cd0();
  func_0x00010054ff88(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x0001005ef43c(ppuStack_a0);
    FUN_1053a5cd0();
    func_0x0001053a6ad0();
    func_0x0001053a1f38(puVar2 + 0x70);
    func_0x0001053a1e50(puVar2 + 0x20);
    func_0x000100c1b710();
    func_0x00010076e0d4();
    if (puVar2 != (undefined1 *)0x0) {
      func_0x0001000df548();
    }
    return puVar1;
  }
  return puVar1;
}



/* Entry: 1053a5cd0; end: 1053a5cff;  */

undefined8 FUN_1053a5cd0(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x0001053a1f38(param_1 + 0x70);
  func_0x0001053a1e50(param_1 + 0x20);
  func_0x000100c1b710();
  func_0x00010076e0d4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1053a5d00; end: 1053a5d57;  */

void FUN_1053a5d00(void)

{
  undefined1 auStack_58 [40];
  
  func_0x00010076a7f8();
  func_0x00010076a8a8();
  func_0x0001004a21bc(auStack_58);
  func_0x00010076aaf0();
  func_0x00010076e31c();
  return;
}



/* Entry: 1053a5d58; end: 1053a5ed7;  */

void FUN_1053a5d58(undefined8 param_1)

{
  long *plVar1;
  undefined1 auStack_90 [24];
  long *plStack_78;
  undefined8 ***pppuStack_70;
  ulong uStack_68;
  byte bStack_59;
  undefined1 auStack_58 [24];
  undefined **ppuStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  ppuStack_40 = &PTR_DAT_110d09db8;
  uStack_38 = 0;
  uStack_28 = 0;
  func_0x0001053a6b74();
  func_0x000100651b10(auStack_58);
  func_0x0001053a5a1c(&pppuStack_70,auStack_58);
  if (-1 < (char)bStack_59) {
    uStack_68 = (ulong)bStack_59;
    pppuStack_70 = &pppuStack_70;
  }
  func_0x0001001a3c94(&ppuStack_40,pppuStack_70,uStack_68);
  func_0x000100c22278();
  func_0x00010002b838(&pppuStack_70,"unknown");
  func_0x000100c1b80c(&plStack_78,0,&pppuStack_70);
  func_0x000100c22278();
  func_0x00010002b838(&pppuStack_70,"loginResponse");
  func_0x00010002b838(auStack_90,"unknown");
  FUN_1053ab050(&ppuStack_40,&pppuStack_70,0,&plStack_78,auStack_90);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_90);
  func_0x000100c22278();
  (**(code **)(*plStack_78 + 0x28))(param_1);
  plVar1 = plStack_78;
  plStack_78 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    func_0x0001053a6ac4();
  }
  func_0x000100100fec(auStack_58);
  func_0x00010b56a3cc(&ppuStack_40);
  return;
}



/* Entry: 1053a5ed8; end: 1053a604f;  */

void FUN_1053a5ed8(undefined8 param_1)

{
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 ***pppuStack_a0;
  ulong uStack_98;
  byte bStack_89;
  undefined1 auStack_88 [24];
  undefined **ppuStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  
  ppuStack_70 = &PTR_DAT_110d0eb60;
  uStack_68 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_3f = 0;
  uStack_47 = 0;
  uStack_40 = 0;
  func_0x0001053a6b74();
  func_0x000100651b10(auStack_88);
  func_0x0001053a5a1c(&pppuStack_a0,auStack_88);
  if (-1 < (char)bStack_89) {
    uStack_98 = (ulong)bStack_89;
    pppuStack_a0 = &pppuStack_a0;
  }
  func_0x0001001a3c94(&ppuStack_70,pppuStack_a0,uStack_98);
  func_0x0001053a6b48();
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_130 = 0;
  uStack_128 = 0;
  func_0x000100c1b9f8(param_1,&uStack_b8,&uStack_d0,&uStack_e8,0,&uStack_118);
  func_0x000100100fec(&uStack_118);
  func_0x000100100fec(&uStack_130);
  func_0x000100100fec(&uStack_e8);
  func_0x000100100fec(&uStack_100);
  func_0x000100c1bab8(&uStack_d0);
  func_0x000100c1bb30(&uStack_b8);
  func_0x00010002b838(&pppuStack_a0,"loginResponse");
  FUN_1053ab22c(&ppuStack_70,param_1,&pppuStack_a0);
  func_0x0001053a6b48();
  func_0x000100100fec(auStack_88);
  func_0x00010b5861e8(&ppuStack_70);
  return;
}



/* Entry: 1053a6050; end: 1053a6053;  */

undefined8 * FUN_1053a6050(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110880c28;
  func_0x000100450be4(param_1 + 5);
  func_0x000100558bb4(param_1 + 3);
  func_0x0001053a6b50();
  return param_1;
}



/* Entry: 1053a6054; end: 1053a6067;  */

void FUN_1053a6054(void)

{
  FUN_1053a6358();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053a6068; end: 1053a609f;  */

void FUN_1053a6068(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001053a6bd4();
  func_0x0001053a6be0();
  *(undefined1 *)(unaff_x19 + 0x30) = *(undefined1 *)(unaff_x20 + 0x30);
  return;
}



/* Entry: 1053a60a0; end: 1053a619f;  */

undefined8 * FUN_1053a60a0(undefined8 *param_1,ulong *param_2)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  undefined8 *puStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar5 = *param_2;
  uVar1 = param_2[1];
  uStack_78 = 0;
  bVar3 = uVar5 <= uVar1;
  puStack_80 = param_1;
  if (uVar1 - uVar5 != 0) {
    func_0x0001053a6b58(uVar1 - uVar5);
    if (bVar3) {
      FUN_1053a141c();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1053a617c);
      (*pcVar2)();
    }
    puVar4 = param_1 + 2;
    func_0x0001053a1508();
    *param_1 = puVar4;
    param_1[1] = puVar4;
    param_1[2] = puVar4 + (long)param_2 * 3;
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    uStack_58 = 0;
    puStack_70 = param_1 + 2;
    puStack_50 = puVar4;
    for (; puStack_48 = puVar4, uVar5 != uVar1; uVar5 = uVar5 + 0x18) {
      func_0x00010054f8dc(puVar4,uVar5);
      puVar4 = puStack_48 + 3;
    }
    uStack_58 = 1;
    FUN_1053a1618(&puStack_70);
    param_1[1] = puVar4;
  }
  uStack_78 = 1;
  FUN_1053a61a0(&puStack_80);
  return param_1;
}



/* Entry: 1053a61a0; end: 1053a61cb;  */

long FUN_1053a61a0(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x0001053a1320(param_1);
  }
  return param_1;
}



/* Entry: 1053a61cc; end: 1053a62f3;  */

void FUN_1053a61cc(undefined8 param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  ulong uVar5;
  undefined8 *puStack_80;
  undefined1 uStack_78;
  long lStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x0001053a6bd4();
  func_0x0001053a6be0();
  puStack_80 = (undefined8 *)(unaff_x19 + 0x30);
  *puStack_80 = 0;
  *(undefined8 *)(unaff_x19 + 0x38) = 0;
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  uVar5 = *(ulong *)(unaff_x20 + 0x30);
  uVar1 = *(ulong *)(unaff_x20 + 0x38);
  uStack_78 = 0;
  bVar3 = uVar5 <= uVar1;
  if (uVar1 - uVar5 != 0) {
    func_0x0001053a6b58(uVar1 - uVar5);
    if (bVar3) {
      FUN_1053a3f58();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1053a62b8);
      (*pcVar2)();
    }
    lVar4 = unaff_x19 + 0x40;
    func_0x0001053a4044();
    *(long *)(unaff_x19 + 0x30) = lVar4;
    *(long *)(unaff_x19 + 0x38) = lVar4;
    *(long *)(unaff_x19 + 0x40) = lVar4 + param_2 * 0x18;
    plStack_68 = &lStack_50;
    plStack_60 = &lStack_48;
    uStack_58 = 0;
    lStack_70 = unaff_x19 + 0x40;
    lStack_50 = lVar4;
    for (; lStack_48 = lVar4, uVar5 != uVar1; uVar5 = uVar5 + 0x18) {
      func_0x00010054f8dc(lVar4,uVar5);
      lVar4 = lStack_48 + 0x18;
    }
    uStack_58 = 1;
    FUN_1053a4130(&lStack_70);
    *(long *)(unaff_x19 + 0x38) = lVar4;
  }
  uStack_78 = 1;
  FUN_1053a62f4(&puStack_80);
  *(undefined1 *)(unaff_x19 + 0x48) = *(undefined1 *)(unaff_x20 + 0x48);
  return;
}



/* Entry: 1053a62f4; end: 1053a631f;  */

long FUN_1053a62f4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    func_0x0001053a1eb4(param_1);
  }
  return param_1;
}



/* Entry: 1053a6320; end: 1053a6357;  */

void FUN_1053a6320(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x0001004a2588(lVar1);
  *(long *)(param_1 + 8) = lVar1 + 0x30;
  return;
}



/* Entry: 1053a6358; end: 1053a63d7;  */

undefined8 * FUN_1053a6358(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110880c28;
  func_0x000100450be4(param_1 + 5);
  func_0x000100558bb4(param_1 + 3);
  func_0x0001053a6b50();
  return param_1;
}



/* Entry: 1053a63d8; end: 1053a63db;  */

void FUN_1053a63d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110880c88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1053a63dc; end: 1053a63ef;  */

void FUN_1053a63dc(void)

{
  func_0x0001053a63f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053a63f0; end: 1053a6403;  */

void FUN_1053a63f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010089b898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1053a6404; end: 1053a65ab;  */

void FUN_1053a6404(long param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 *puStack_a0;
  undefined8 *puStack_98;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  puVar8 = *(undefined8 **)(param_1 + 0x10);
  ppuStack_88 = &PTR_DAT_110d09d18;
  uStack_80 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_68 = 0;
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_48 = 0;
  uStack_78 = 1;
  uVar4 = 0;
  FUN_1053a65ac();
  uStack_58 = uVar4;
  func_0x0001053a5a1c(&puStack_a0,puVar8 + 4);
  func_0x0001053a6b8c();
  func_0x0001001a3c94(uVar4);
  func_0x0001053a6bb8();
  lVar1 = puVar8[8];
  for (lVar7 = puVar8[7]; lVar7 != lVar1; lVar7 = lVar7 + 0x18) {
    func_0x0001053a5a1c(&puStack_a0,lVar7);
    FUN_1053a65e8(&uStack_70);
    func_0x0001053a6b8c();
    func_0x0001001a3c94();
    func_0x0001053a6bb8();
  }
  uStack_48 = *(undefined1 *)(puVar8 + 10);
  puVar5 = (undefined8 *)0x90;
  __Znwm();
  plVar9 = puVar5 + 1;
  *plVar9 = 0;
  puVar5[2] = 0;
  puVar6 = puVar5 + 3;
  *puVar5 = &PTR_FUN_110880cf0;
  FUN_1053a52a8(puVar6,&ppuStack_88,puVar8 + 2,puVar8 + 0xb);
  uVar4 = *puVar8;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = *plVar9 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puStack_b0 = puVar6;
  puStack_a8 = puVar5;
  puStack_a0 = puVar6;
  puStack_98 = puVar5;
  FUN_1053a734c(uVar4,&ppuStack_88,&puStack_b0);
  FUN_1053a665c(&puStack_b0);
  func_0x0001053a6680(&puStack_a0);
  func_0x00010b56a700(&ppuStack_88);
  return;
}



/* Entry: 1053a65ac; end: 1053a65e7;  */

undefined8 * FUN_1053a65ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x58;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x58);
  }
  *puVar1 = &PTR_DAT_110d0ac58;
  puVar1[1] = param_1;
  func_0x00010b56d2ec();
  return puVar1;
}



/* Entry: 1053a65e8; end: 1053a65f3;  */

void FUN_1053a65e8(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0001000640a4(0,FUN_1053a65f4);
    func_0x000100627e90();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0001000640a4(puVar2,FUN_1053a65f4);
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



/* Entry: 1053a65f4; end: 1053a662f;  */

void FUN_1053a65f4(long param_1)

{
  if (param_1 == 0) {
    param_1 = 0x20;
    __Znwm();
  }
  else {
    func_0x0001053a6bc8();
  }
  func_0x000100c1b644(&UNK_110d0ad88);
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1053a6630; end: 1053a6633;  */

void FUN_1053a6630(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110880cf0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1053a6634; end: 1053a6647;  */

void FUN_1053a6634(void)

{
  func_0x0001053a6650();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053a6648; end: 1053a665b;  */

void FUN_1053a6648(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010089b898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1053a665c; end: 1053a66a3;  */

void FUN_1053a665c(long param_1)

{
  func_0x00010076e0d4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1053a66a4; end: 1053a66c3;  */

void FUN_1053a66a4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1053a5b64();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1053a66c4; end: 1053a66c7;  */

void FUN_1053a66c4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1053a66c8; end: 1053a68b7;  */

void FUN_1053a66c8(long param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  undefined8 **ppuVar4;
  char in_NG;
  char in_OV;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 extraout_x8;
  undefined8 uVar8;
  undefined8 **extraout_x10;
  undefined8 extraout_x11;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puStack_c8;
  undefined8 *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  puVar11 = *(undefined8 **)(param_1 + 0x10);
  ppuStack_a0 = &PTR_DAT_110d09cc8;
  uStack_98 = 0;
  uStack_88 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_4f = 0;
  uStack_57 = 0;
  uStack_50 = 0;
  uStack_90 = 1;
  uVar5 = 0;
  FUN_1053a68b8();
  uStack_58 = (undefined1)uVar5;
  uStack_57 = (undefined7)((ulong)uVar5 >> 8);
  func_0x0001053a5a1c(&puStack_b8,puVar11 + 4);
  func_0x0001053a6b00();
  uVar8 = extraout_x11;
  ppuVar4 = extraout_x10;
  if (in_NG == in_OV) {
    uVar8 = extraout_x8;
    ppuVar4 = &puStack_b8;
  }
  func_0x0001001a3c94(uVar5,ppuVar4,uVar8);
  func_0x0001053a6b40();
  lVar1 = puVar11[8];
  for (lVar9 = puVar11[7]; lVar9 != lVar1; lVar9 = lVar9 + 0x18) {
    func_0x0001053a6ba4();
    FUN_1053a65e8(&uStack_88);
    func_0x0001053a6b00();
    func_0x0001001a3c94();
    func_0x0001053a6b40();
  }
  lVar1 = puVar11[0xb];
  for (lVar9 = puVar11[10]; lVar9 != lVar1; lVar9 = lVar9 + 0x18) {
    func_0x0001053a6ba4();
    func_0x000100627dec(&uStack_70,0x1053a690c);
    func_0x0001053a6b00();
    func_0x0001001a3c94();
    func_0x0001053a6b40();
  }
  uStack_4f = CONCAT17(*(undefined1 *)(puVar11 + 0xd),(undefined7)uStack_4f);
  puVar6 = (undefined8 *)0xa8;
  __Znwm();
  plVar10 = puVar6 + 1;
  *plVar10 = 0;
  puVar6[2] = 0;
  puVar7 = puVar6 + 3;
  *puVar6 = &PTR_FUN_110880d58;
  FUN_1053a6bec(puVar7,&ppuStack_a0,puVar11 + 2,puVar11 + 0xe);
  uVar8 = *puVar11;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = *plVar10 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puStack_c8 = puVar7;
  puStack_c0 = puVar6;
  puStack_b8 = puVar7;
  puStack_b0 = puVar6;
  FUN_1053a73e4(uVar8,&ppuStack_a0,&puStack_c8);
  FUN_1053a6980(&puStack_c8);
  func_0x0001053a69a4(&puStack_b8);
  func_0x00010b569180(&ppuStack_a0);
  return;
}



/* Entry: 1053a68b8; end: 1053a6953;  */

void FUN_1053a68b8(long param_1)

{
  long lVar1;
  undefined8 extraout_x8;
  
  if (param_1 == 0) {
    lVar1 = 0x48;
    __Znwm();
  }
  else {
    lVar1 = param_1;
    func_0x00010b4d80e0(param_1,0x48);
  }
  func_0x000100c1b644(&UNK_110d0a748);
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(long *)(lVar1 + 0x28) = param_1;
  func_0x000100c1b650();
  *(undefined8 *)(lVar1 + 0x30) = extraout_x8;
  *(undefined8 *)(lVar1 + 0x38) = extraout_x8;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  return;
}



/* Entry: 1053a6954; end: 1053a6957;  */

void FUN_1053a6954(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110880d58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1053a6958; end: 1053a696b;  */

void FUN_1053a6958(void)

{
  func_0x0001053a6974();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053a696c; end: 1053a697f;  */

void FUN_1053a696c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010089b898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1053a6980; end: 1053a69c7;  */

void FUN_1053a6980(long param_1)

{
  func_0x00010076e0d4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1053a69c8; end: 1053a69e7;  */

void FUN_1053a69c8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1053a5cd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1053a69e8; end: 1053a69ef;  */

void FUN_1053a69e8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1053a69f0; end: 1053a6a03;  */

void FUN_1053a69f0(void)

{
  func_0x0001053a6a58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053a6a04; end: 1053a6a13;  */

undefined8 FUN_1053a6a04(long param_1)

{
  long lVar1;
  undefined8 unaff_x19;
  
  lVar1 = param_1 + 0x18;
  func_0x00010089b840(param_1 + 0x28);
  func_0x00010046e218();
  if (lVar1 != 0) {
    func_0x0001000df548();
  }
  return unaff_x19;
}



/* Entry: 1053a6a14; end: 1053a6a47;  */

void FUN_1053a6a14(void)

{
  FUN_1053a6a48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053a6a48; end: 1053a6a6b;  */

void FUN_1053a6a48(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110880eb0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1053a6a6c; end: 1053a6a7f;  */

void FUN_1053a6a6c(void)

{
  func_0x0001053a6a8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053a6a80; end: 1053a6a9b;  */

void FUN_1053a6a80(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x00010076e0d4();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1053a6a9c; end: 1053a6aaf;  */

void FUN_1053a6a9c(void)

{
  func_0x0001053a6ab8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053a6ab0; end: 1053a6beb;  */

void FUN_1053a6ab0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010089b898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1053a6bec; end: 1053a6c7b;  */

undefined8 *
FUN_1053a6bec(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar4;
  
  ppuVar1 = &PTR___tlv_bootstrap_11340e260;
  (*(code *)PTR___tlv_bootstrap_11340e260)();
  puVar2 = *ppuVar1;
  *param_1 = &PTR_FUN_110880f40;
  param_1[1] = puVar2;
  FUN_1053a6c7c(param_1 + 2);
  lVar3 = param_3[1];
  uVar4 = *param_3;
  param_1[0xf] = param_3[1];
  param_1[0xe] = uVar4;
  if (lVar3 != 0) {
    do {
      FUN_1053a72b4();
    } while (extraout_w10 != 0);
  }
  lVar3 = param_4[1];
  uVar4 = *param_4;
  param_1[0x11] = param_4[1];
  param_1[0x10] = uVar4;
  if (lVar3 != 0) {
    do {
      func_0x0001053a72b8();
    } while (extraout_w10_00 != 0);
  }
  return param_1;
}



/* Entry: 1053a6c7c; end: 1053a6c87;  */

void FUN_1053a6c7c(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  
  func_0x000107c39e18(param_1,0,param_2);
  func_0x000107c39e44(&PTR_DAT_110d09cc8);
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b56b7f4();
  }
  func_0x00010b56b89c();
  func_0x00010b56afc0(unaff_x19 + 0x30);
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  if ((uVar1 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x00010b56b330();
  }
  *(undefined8 *)(unaff_x19 + 0x48) = unaff_x21;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x21 = 0;
  }
  else {
    func_0x00010b56ba14();
  }
  *(undefined8 *)(unaff_x19 + 0x50) = unaff_x21;
  *(undefined1 *)(unaff_x19 + 0x58) = *(undefined1 *)(unaff_x20 + 0x58);
  return;
}



/* Entry: 1053a6c88; end: 1053a6e77;  */

void FUN_1053a6c88(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined **ppuVar1;
  undefined1 in_ZR;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined ***pppuVar7;
  undefined **ppuVar8;
  uint uVar9;
  code **ppcVar10;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined **ppuStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined1 auStack_148 [40];
  long lStack_120;
  undefined8 *puStack_118;
  undefined4 *puStack_110;
  undefined8 *puStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 auStack_e0 [2];
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined **ppuStack_78;
  undefined8 *puStack_70;
  undefined4 *puStack_50;
  
  func_0x0001053a7300();
  FUN_1053a6e78();
  pcStack_80 = (code *)CONCAT44(pcStack_80._4_4_,*param_3);
  uVar2 = SUB84(&pcStack_80,0);
  func_0x0001053ab348();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_b8,param_3 + 2);
  uStack_90 = uStack_b0;
  uStack_98 = uStack_b8;
  uStack_88 = uStack_a8;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  auStack_a0[0] = uVar2;
  func_0x0001053a7344();
  puVar11 = *(undefined8 **)(unaff_x19 + 0x70);
  uStack_e8 = *(undefined8 *)(unaff_x19 + 0x88);
  uStack_f0 = *(undefined8 *)(unaff_x19 + 0x80);
  if (*(long *)(unaff_x19 + 0x88) != 0) {
    do {
      func_0x0001053a72b8();
    } while (extraout_w10 != 0);
  }
  puVar3 = auStack_e0;
  FUN_1053a4dac(puVar3,auStack_a0);
  func_0x00010028c49c();
  lVar12 = puVar11[2];
  __ZNSt3__15mutex4lockEv(lVar12 + 8);
  lVar13 = *(long *)(lVar12 + 0x70);
  pcStack_80 = FUN_1053a7248;
  ppuStack_78 = &PTR_FUN_110880fd0;
  puVar4 = (undefined8 *)0x30;
  __Znwm();
  puVar4[1] = uStack_e8;
  *puVar4 = uStack_f0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  *(undefined4 *)(puVar4 + 2) = auStack_e0[0];
  puVar4[4] = uStack_d0;
  puVar4[3] = uStack_d8;
  puVar4[5] = uStack_c8;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  ppcVar10 = &pcStack_80;
  puStack_70 = puVar4;
  puStack_50 = puVar3;
  func_0x0001005760fc(lVar12 + 0x48,ppcVar10);
  uVar9 = (uint)ppcVar10;
  func_0x0001053a72e0();
  __ZNSt3__15mutex6unlockEv(lVar12 + 8);
  if (lVar13 == 0) {
    plVar5 = (long *)*puVar11;
    ppuStack_78 = (undefined **)puVar11[3];
    pcStack_80 = (code *)puVar11[2];
    if (puVar11[3] != 0) {
      do {
        func_0x0001053a72b8();
      } while (extraout_w10_00 != 0);
    }
    uVar9 = 0;
    (**(code **)(*plVar5 + 0x10))();
    func_0x000100576684(&pcStack_80);
  }
  FUN_1053a6fe0(&uStack_f0);
  puVar4 = &uStack_98;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x0001053a7318();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000100576684(&pcStack_80);
    FUN_1053a6fe0(&uStack_f0);
    puVar6 = &uStack_98;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x0001053a733c();
    pcStack_f8 = FUN_1053a6e78;
    uStack_160 = 0;
    uStack_158 = 0;
    ppuStack_170 = &PTR_FUN_110880ab8;
    uStack_168 = 0;
    uStack_150 = 0;
    lStack_120 = lVar12;
    puStack_118 = puVar11;
    puStack_110 = auStack_a0;
    puStack_108 = puVar4;
    puStack_100 = &stack0xfffffffffffffff0;
    func_0x00010002b838(auStack_188,"kind");
    ppuVar8 = &PTR_PTR_11339afc0;
    if ((undefined **)puVar6[0xb] != (undefined **)0x0) {
      ppuVar8 = (undefined **)puVar6[0xb];
    }
    ppuVar1 = &PTR_PTR_11339af30;
    if ((undefined **)ppuVar8[8] != (undefined **)0x0) {
      ppuVar1 = (undefined **)ppuVar8[8];
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_1a0,(ulong)ppuVar1[2] & 0xfffffffffffffffc);
    pppuVar7 = &ppuStack_170;
    func_0x000100c220c4(pppuVar7,auStack_188,auStack_1a0);
    func_0x00010002b838(auStack_1b8,"success");
    func_0x000100c22114(pppuVar7,auStack_1b8,uVar9 & 1);
    func_0x000100c22244(auStack_148,pppuVar7);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1b8);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a0);
    func_0x0001053a7344();
    pppuVar7 = &ppuStack_170;
    func_0x000100c22280();
    func_0x000100c222a0();
    ppuVar8 = *pppuVar7;
    func_0x0001053a7330(*(undefined8 *)(*ppuVar8 + 0x10));
    func_0x000100c222a0();
    func_0x0001053a7330(*(undefined8 *)(*(long *)*ppuVar8 + 8));
    func_0x000100c22280(auStack_148);
    return;
  }
  return;
}



/* Entry: 1053a6e78; end: 1053a6fdf;  */

void FUN_1053a6e78(long param_1,uint param_2)

{
  undefined **ppuVar1;
  undefined ***pppuVar2;
  undefined **ppuVar3;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined1 auStack_58 [40];
  
  uStack_70 = 0;
  uStack_68 = 0;
  ppuStack_80 = &PTR_FUN_110880ab8;
  uStack_78 = 0;
  uStack_60 = 0;
  func_0x00010002b838(auStack_98,"kind");
  ppuVar3 = &PTR_PTR_11339afc0;
  if (*(undefined ***)(param_1 + 0x58) != (undefined **)0x0) {
    ppuVar3 = *(undefined ***)(param_1 + 0x58);
  }
  ppuVar1 = &PTR_PTR_11339af30;
  if ((undefined **)ppuVar3[8] != (undefined **)0x0) {
    ppuVar1 = (undefined **)ppuVar3[8];
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_b0,(ulong)ppuVar1[2] & 0xfffffffffffffffc);
  pppuVar2 = &ppuStack_80;
  func_0x000100c220c4(pppuVar2,auStack_98,auStack_b0);
  func_0x00010002b838(auStack_c8,"success");
  func_0x000100c22114(pppuVar2,auStack_c8,param_2 & 1);
  func_0x000100c22244(auStack_58,pppuVar2);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_c8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_b0);
  func_0x0001053a7344();
  pppuVar2 = &ppuStack_80;
  func_0x000100c22280();
  func_0x000100c222a0();
  ppuVar3 = *pppuVar2;
  func_0x0001053a7330(*(undefined8 *)(*ppuVar3 + 0x10));
  func_0x000100c222a0();
  func_0x0001053a7330(*(undefined8 *)(*(long *)*ppuVar3 + 8));
  func_0x000100c22280(auStack_58);
  return;
}



/* Entry: 1053a6fe0; end: 1053a7007;  */

long FUN_1053a6fe0(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x18);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1053a7008; end: 1053a71bf;  */

undefined8 * FUN_1053a7008(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined8 *puStack_70;
  
  uVar4 = param_3;
  func_0x0001053a7300();
  FUN_1053aac9c(&uStack_a0,uVar4);
  func_0x00010b569734(param_3);
  FUN_1053a6e78();
  puVar5 = *(undefined8 **)(unaff_x19 + 0x70);
  uStack_c8 = *(undefined8 *)(unaff_x19 + 0x88);
  uStack_d0 = *(undefined8 *)(unaff_x19 + 0x80);
  if (*(long *)(unaff_x19 + 0x88) != 0) {
    do {
      func_0x0001053a72b8();
    } while (extraout_w10 != 0);
  }
  uStack_b8 = uStack_98;
  uStack_c0 = uStack_a0;
  uStack_b0 = uStack_90;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_a0 = 0;
  func_0x00010028c49c();
  lVar6 = puVar5[2];
  __ZNSt3__15mutex4lockEv(lVar6 + 8);
  lVar7 = *(long *)(lVar6 + 0x70);
  uStack_80 = 0x1053a7280;
  ppuStack_78 = &PTR_FUN_110880fe8;
  puVar2 = (undefined8 *)0x28;
  __Znwm();
  uVar1 = uStack_c8;
  uVar4 = uStack_d0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  puVar2[1] = uVar1;
  *puVar2 = uVar4;
  puVar2[3] = uStack_b8;
  puVar2[2] = uStack_c0;
  puVar2[4] = uStack_b0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_c0 = 0;
  puStack_70 = puVar2;
  func_0x0001005760fc(lVar6 + 0x48,&uStack_80);
  func_0x0001053a72f0();
  __ZNSt3__15mutex6unlockEv(lVar6 + 8);
  if (lVar7 == 0) {
    plVar3 = (long *)*puVar5;
    ppuStack_78 = (undefined **)puVar5[3];
    uStack_80 = puVar5[2];
    if (puVar5[3] != 0) {
      do {
        func_0x0001053a72b8();
      } while (extraout_w10_00 != 0);
    }
    (**(code **)(*plVar3 + 0x10))();
    func_0x000100576684(&uStack_80);
  }
  FUN_1053a71c0(&uStack_d0);
  puVar5 = &uStack_a0;
  func_0x000100100fec();
  func_0x0001053a7318();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x000100576684(&uStack_80);
    FUN_1053a71c0(&uStack_d0);
    puVar5 = &uStack_a0;
    func_0x000100100fec();
    func_0x0001053a733c();
    func_0x000100100fec(puVar5 + 2);
    if (puVar5[1] != 0) {
      func_0x0001000df548();
    }
    return puVar5;
  }
  return puVar5;
}



/* Entry: 1053a71c0; end: 1053a71e7;  */

long FUN_1053a71c0(long param_1)

{
  func_0x000100100fec(param_1 + 0x10);
  if (*(long *)(param_1 + 8) != 0) {
    func_0x0001000df548();
  }
  return param_1;
}



/* Entry: 1053a71e8; end: 1053a71eb;  */

undefined8 * FUN_1053a71e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110880f40;
  func_0x0001053a1f38(param_1 + 0x10);
  func_0x000100558bb4(param_1 + 0xe);
  func_0x00010b569180(param_1 + 2);
  return param_1;
}



/* Entry: 1053a71ec; end: 1053a71ff;  */

void FUN_1053a71ec(void)

{
  FUN_1053a7200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053a7200; end: 1053a7247;  */

undefined8 * FUN_1053a7200(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110880f40;
  func_0x0001053a1f38(param_1 + 0x10);
  func_0x000100558bb4(param_1 + 0xe);
  func_0x00010b569180(param_1 + 2);
  return param_1;
}



/* Entry: 1053a7248; end: 1053a725b;  */

void FUN_1053a7248(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)**(undefined8 **)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001053a7258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,*(undefined8 **)(param_1 + 0x10) + 2);
  return;
}



/* Entry: 1053a725c; end: 1053a727b;  */

void FUN_1053a725c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1053a6fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1053a727c; end: 1053a7293;  */

void FUN_1053a727c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1053a7294; end: 1053a72b3;  */

void FUN_1053a7294(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_1053a71c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1053a72b4; end: 1053a734b;  */

void FUN_1053a72b4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 1053a734c; end: 1053a73e3;  */

void FUN_1053a734c(void)

{
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_240 [56];
  undefined1 uStack_208;
  undefined1 uStack_1f0;
  
  func_0x000100c1be9c();
  uStack_208 = 0;
  uStack_1f0 = 0;
  func_0x000100c1bf78();
  func_0x000100c1bfac();
  func_0x000100c1bfb8();
  if (extraout_x8 != 0) {
    do {
      func_0x000100c1bfc8();
    } while (extraout_w10 != 0);
  }
  func_0x000100c1bfd8();
  FUN_1053ac1bc();
  FUN_1053a665c(auStack_240);
  func_0x000100c22088();
  func_0x000100c22090();
  func_0x000100c22098();
  func_0x000100c220a0();
  func_0x000100c220a8();
  func_0x000100c220b0();
  return;
}



/* Entry: 1053a73e4; end: 1053a747b;  */

void FUN_1053a73e4(void)

{
  long extraout_x8;
  int extraout_w10;
  undefined1 auStack_240 [56];
  undefined1 uStack_208;
  undefined1 uStack_1f0;
  
  func_0x000100c1be9c();
  uStack_208 = 0;
  uStack_1f0 = 0;
  func_0x000100c1bf78();
  func_0x000100c1bfac();
  func_0x000100c1bfb8();
  if (extraout_x8 != 0) {
    do {
      func_0x000100c1bfc8();
    } while (extraout_w10 != 0);
  }
  func_0x000100c1bfd8();
  FUN_1053ac2e0();
  FUN_1053a6980(auStack_240);
  func_0x000100c22088();
  func_0x000100c22090();
  func_0x000100c22098();
  func_0x000100c220a0();
  func_0x000100c220a8();
  func_0x000100c220b0();
  return;
}



/* Entry: 1053a747c; end: 1053a747f;  */

void FUN_1053a747c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110881018;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1053a7480; end: 1053a7493;  */

void FUN_1053a7480(void)

{
  func_0x0001053a74a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053a7494; end: 1053a74b7;  */

void FUN_1053a7494(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001053a749c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 1053a74b8; end: 1053a74cb;  */

void FUN_1053a74b8(void)

{
  func_0x0001053a74d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1053a74cc; end: 1053a74f3;  */

void FUN_1053a74cc(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000100561f34();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}


