/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b1e63c4; end: 10b1e63e3;  */

void FUN_10b1e63c4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b1c8944();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1e63e4; end: 10b1e63ff;  */

void FUN_10b1e63e4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b1e6400; end: 10b1e6423;  */

void FUN_10b1e6400(long param_1)

{
  func_0x00010b1eb114();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10b1e6424; end: 10b1e646f;  */

void FUN_10b1e6424(undefined8 param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  code *extraout_x9;
  code *extraout_x9_00;
  code *pcVar2;
  long extraout_x10;
  uint extraout_w11;
  int extraout_w12;
  
  func_0x00010b1eb388();
  if (extraout_x10 != 0) {
    do {
      func_0x00010b1eb0ac();
    } while (extraout_w12 != 0);
  }
  func_0x00010b1eb02c();
  lVar1 = extraout_x8;
  pcVar2 = extraout_x9;
  if ((extraout_w11 & 1) != 0) {
    func_0x00010b1ec364();
    lVar1 = extraout_x8_00;
    pcVar2 = extraout_x9_00;
  }
  (*pcVar2)(param_1,*(undefined8 *)(lVar1 + 8));
  func_0x00010b1eb728();
  return;
}



/* Entry: 10b1e6470; end: 10b1e647f;  */

void FUN_10b1e6470(void)

{
  return;
}



/* Entry: 10b1e6480; end: 10b1e6533;  */

void FUN_10b1e6480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 uVar4;
  int extraout_w11;
  int extraout_w11_00;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000060;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 *puStack_10;
  code *pcStack_8;
  
  func_0x00010b1ed2f4();
  func_0x00010b1eaeac();
  in_stack_00000018 = extraout_x8;
  func_0x00010b1ecc3c();
  FUN_10b1e6548();
  FUN_10b1e6598(in_stack_00000010,param_2,param_3,param_4,param_5,param_6,param_7);
  lVar2 = in_stack_00000010;
  in_stack_00000010 = 0;
  FUN_10b1e6534(lVar2 + 0x18);
  puVar1 = (undefined8 *)register0x00000008;
  FUN_10b1e6784();
  func_0x00010b1eaddc(in_stack_00000018);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1eb5a0();
  FUN_10b1e6784();
  func_0x00010b1eb590();
  *extraout_x8_00 = puVar1;
  extraout_x8_00[1] = lVar2;
  if ((puVar1 != (undefined8 *)0x0) && ((puVar1[1] == 0 || (*(long *)(puVar1[1] + 8) == -1)))) {
    puStack_10 = &stack0x00000060;
    pcStack_8 = FUN_10b1e6534;
    uVar4 = 0;
    puVar3 = puVar1;
    if (extraout_x8_00[1] != 0) {
      do {
        func_0x00010b1eaf98();
      } while (extraout_w11 != 0);
      do {
        func_0x00010b1eaf98();
        uVar4 = extraout_x8_01;
      } while (extraout_w11_00 != 0);
    }
    uStack_18 = puVar1[1];
    uStack_20 = *puVar1;
    *puVar1 = puVar3;
    puVar1[1] = uVar4;
    FUN_10b1e66e4(&uStack_20);
    func_0x00010b1ee090();
    return;
  }
  return;
}



/* Entry: 10b1e6534; end: 10b1e6547;  */

void FUN_10b1e6534(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long extraout_x8;
  long lVar2;
  int extraout_w11;
  int extraout_w11_00;
  long lStack_20;
  long lStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  if ((param_2 != (long *)0x0) && ((param_2[1] == 0 || (*(long *)(param_2[1] + 8) == -1)))) {
    lVar2 = 0;
    plVar1 = param_2;
    if (param_1[1] != 0) {
      do {
        func_0x00010b1eaf98();
      } while (extraout_w11 != 0);
      do {
        func_0x00010b1eaf98();
        lVar2 = extraout_x8;
      } while (extraout_w11_00 != 0);
    }
    lStack_18 = param_2[1];
    lStack_20 = *param_2;
    *param_2 = (long)plVar1;
    param_2[1] = lVar2;
    FUN_10b1e66e4(&lStack_20);
    func_0x00010b1ee090();
    return;
  }
  return;
}



/* Entry: 10b1e6548; end: 10b1e6567;  */

void FUN_10b1e6548(void)

{
  func_0x00010b1ed37c();
  FUN_10b1e6568();
  func_0x00010b1ed010();
  return;
}



/* Entry: 10b1e6568; end: 10b1e6597;  */

undefined8 * FUN_10b1e6568(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x186186186186187) {
    puVar1 = (undefined8 *)(param_2 * 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cc43d8;
  FUN_10b1e6630(param_1 + 3);
  return param_1;
}



/* Entry: 10b1e6598; end: 10b1e65cf;  */

undefined8 * FUN_10b1e6598(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_110cc43d8;
  FUN_10b1e6630(param_1 + 3);
  return param_1;
}



/* Entry: 10b1e65d0; end: 10b1e65d3;  */

void FUN_10b1e65d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc43d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1e65d4; end: 10b1e65e7;  */

void FUN_10b1e65d4(void)

{
  FUN_10b1e6708();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1e65e8; end: 10b1e662f;  */

undefined8 FUN_10b1e65e8(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x000107c27c20(param_1 + 0x80);
  if (*(long *)(param_1 + 0x70) != 0) {
    func_0x00010b1ee0c0(*(undefined8 *)(param_1 + 0x60));
  }
  func_0x000107c28e38(param_1 + 0x50);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x28);
  param_1 = param_1 + 0x18;
  func_0x00010b1eb954();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return unaff_x19;
}



/* Entry: 10b1e6630; end: 10b1e6643;  */

void FUN_10b1e6630(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1e6644; end: 10b1e66e3;  */

void FUN_10b1e6644(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  undefined8 *unaff_x22;
  undefined8 uVar2;
  
  func_0x00010b1ecb5c();
  *param_1 = 0;
  param_1[1] = 0;
  func_0x00010b1ecf44(param_1 + 2);
  *(undefined8 *)(unaff_x19 + 0x28) = param_5;
  *(undefined4 *)(unaff_x19 + 0x30) = param_4;
  lVar1 = unaff_x22[1];
  uVar2 = *unaff_x22;
  *(undefined8 *)(unaff_x19 + 0x40) = unaff_x22[1];
  *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10 != 0);
  }
  *(undefined **)(unaff_x19 + 0x48) = &UNK_10e52b660;
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  *(undefined8 *)(unaff_x19 + 0x58) = 0;
  *(undefined8 *)(unaff_x19 + 0x60) = 0;
  lVar1 = param_6[1];
  uVar2 = *param_6;
  *(undefined8 *)(unaff_x19 + 0x70) = param_6[1];
  *(undefined8 *)(unaff_x19 + 0x68) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10_00 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x78) = param_7;
  *(undefined8 *)(unaff_x19 + 0x80) = 0;
  *(undefined1 *)(unaff_x19 + 0x88) = 0;
  return;
}



/* Entry: 10b1e66e4; end: 10b1e6707;  */

void FUN_10b1e66e4(long param_1)

{
  func_0x00010b1eb954();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10b1e6708; end: 10b1e6713;  */

void FUN_10b1e6708(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc43d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1e6714; end: 10b1e6783;  */

void FUN_10b1e6714(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 extraout_x8;
  undefined8 uVar1;
  int extraout_w11;
  int extraout_w11_00;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if ((param_2 != (undefined8 *)0x0) && ((param_2[1] == 0 || (*(long *)(param_2[1] + 8) == -1)))) {
    uVar1 = 0;
    if (*(long *)(param_1 + 8) != 0) {
      do {
        func_0x00010b1eaf98();
      } while (extraout_w11 != 0);
      do {
        func_0x00010b1eaf98();
        uVar1 = extraout_x8;
      } while (extraout_w11_00 != 0);
    }
    uStack_18 = param_2[1];
    uStack_20 = *param_2;
    *param_2 = param_3;
    param_2[1] = uVar1;
    FUN_10b1e66e4(&uStack_20);
    func_0x00010b1ee090();
    return;
  }
  return;
}



/* Entry: 10b1e6784; end: 10b1e6793;  */

void FUN_10b1e6784(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1e6794; end: 10b1e694f;  */

void FUN_10b1e6794(long param_1)

{
  long lVar1;
  undefined1 in_ZR;
  code *extraout_x9;
  code *extraout_x9_00;
  code *pcVar2;
  long extraout_x10;
  uint extraout_w11;
  int extraout_w12;
  long lVar3;
  long lStack_178;
  undefined1 uStack_170;
  undefined1 auStack_168 [32];
  undefined1 auStack_148 [32];
  long lStack_128;
  undefined1 uStack_120;
  undefined1 auStack_118 [88];
  undefined4 uStack_c0;
  undefined1 auStack_b8 [16];
  undefined1 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  code **ppcStack_90;
  long *plStack_88;
  undefined1 *puStack_80;
  undefined1 *puStack_78;
  long *plStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  code ***pppcStack_58;
  undefined8 uStack_38;
  
  func_0x00010b1eaf00();
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(lVar3 + 0x28);
  lStack_128 = *(long *)(lVar3 + 0x30) / 1000;
  uStack_120 = 1;
  func_0x000107c27f70(auStack_148,lVar3 + 0x38);
  func_0x000107c27f70(auStack_168,lVar3);
  lStack_178 = *(long *)(lVar3 + 0x50) / 1000;
  uStack_170 = 1;
  pcStack_a0 = FUN_10b1fcbf8;
  uStack_98 = 0;
  auStack_b8[0] = 0;
  uStack_a8 = 0;
  ppcStack_90 = &pcStack_a0;
  plStack_88 = &lStack_128;
  puStack_80 = auStack_148;
  plStack_70 = &lStack_178;
  pcStack_68 = FUN_10b1e6950;
  ppuStack_60 = &PTR_FUN_110cc4418;
  pppcStack_58 = &ppcStack_90;
  puStack_78 = auStack_168;
  func_0x00010b1ec284();
  func_0x00010b1ebe34(lVar1 + 0x80,&pcStack_68);
  func_0x00010b1eafb4(ppuStack_60);
  auStack_118[0] = 1;
  uStack_c0 = 0;
  func_0x00010b1dd05c(auStack_118);
  FUN_10b1dd074(auStack_118);
  FUN_10b1b78d0(auStack_b8);
  func_0x000107c279a4(auStack_168);
  func_0x000107c279a4();
  func_0x00010b1eaddc(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10b1dd074(auStack_118);
  FUN_10b1b78d0(auStack_b8);
  func_0x000107c279a4(auStack_168);
  func_0x000107c279a4(auStack_148);
  func_0x00010b1eb590();
  func_0x00010b1eb388();
  if (extraout_x10 != 0) {
    do {
      func_0x00010b1eb0ac();
    } while (extraout_w12 != 0);
  }
  func_0x00010b1eb02c();
  pcVar2 = extraout_x9;
  if ((extraout_w11 & 1) != 0) {
    func_0x00010b1ec364();
    pcVar2 = extraout_x9_00;
  }
  (*pcVar2)();
  func_0x00010b1eb728();
  return;
}



/* Entry: 10b1e6950; end: 10b1e69a7;  */

void FUN_10b1e6950(undefined8 param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  code *extraout_x9;
  code *extraout_x9_00;
  code *pcVar2;
  long extraout_x10;
  uint extraout_w11;
  int extraout_w12;
  
  func_0x00010b1eb388();
  if (extraout_x10 != 0) {
    do {
      func_0x00010b1eb0ac();
    } while (extraout_w12 != 0);
  }
  func_0x00010b1eb02c();
  lVar1 = extraout_x8;
  pcVar2 = extraout_x9;
  if ((extraout_w11 & 1) != 0) {
    func_0x00010b1ec364();
    lVar1 = extraout_x8_00;
    pcVar2 = extraout_x9_00;
  }
  (*pcVar2)(param_1,**(undefined8 **)(lVar1 + 8),(*(undefined8 **)(lVar1 + 8))[1],
            *(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
            **(undefined8 **)(lVar1 + 0x20),(*(undefined8 **)(lVar1 + 0x20))[1]);
  func_0x00010b1eb728();
  return;
}



/* Entry: 10b1e69a8; end: 10b1e69b7;  */

void FUN_10b1e69a8(void)

{
  return;
}



/* Entry: 10b1e69b8; end: 10b1e69d7;  */

void FUN_10b1e69b8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b1c93c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1e69d8; end: 10b1e69db;  */

void FUN_10b1e69d8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b1e69dc; end: 10b1e6a0f;  */

void FUN_10b1e69dc(void)

{
  undefined8 uStack_28;
  
  func_0x00010b1ec70c();
  __ZNSt3__117__assoc_sub_state4waitEv(uStack_28);
  func_0x00010b1eca70();
  return;
}



/* Entry: 10b1e6a10; end: 10b1e6a2f;  */

void FUN_10b1e6a10(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b1c93ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1e6a30; end: 10b1e6a33;  */

void FUN_10b1e6a30(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b1e6a34; end: 10b1e6a73;  */

void FUN_10b1e6a34(long param_1)

{
  if (**(long **)(param_1 + 0x10) != 0) {
    func_0x00010b1ebcb4();
    func_0x00010b1ede14();
    func_0x00010b1eb910();
    func_0x00010b1ed99c();
  }
  return;
}



/* Entry: 10b1e6a74; end: 10b1e6a8b;  */

void FUN_10b1e6a74(void)

{
  return;
}



/* Entry: 10b1e6a8c; end: 10b1e6aab;  */

void FUN_10b1e6a8c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b1c9768();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1e6aac; end: 10b1e6aaf;  */

void FUN_10b1e6aac(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b1e6ab0; end: 10b1e6aef;  */

long FUN_10b1e6ab0(long param_1,undefined8 param_2)

{
  func_0x000106e5c56c(param_1,&UNK_10f739a8d);
  FUN_10b20b48c(param_2);
  func_0x000107c278b8(param_1 + 0x10,param_2);
  return param_1;
}



/* Entry: 10b1e6af0; end: 10b1e6b23;  */

void FUN_10b1e6af0(void)

{
  func_0x00010b1e6b08();
  return;
}



/* Entry: 10b1e6b24; end: 10b1e6ce3;  */

undefined1  [16] FUN_10b1e6b24(undefined8 param_1,undefined8 param_2,long *param_3,int *param_4)

{
  int iVar1;
  ulong uVar2;
  undefined1 in_NG;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  long lVar7;
  ulong uVar8;
  undefined8 extraout_x9;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong unaff_x23;
  undefined1 auVar12 [16];
  long *aplStack_58 [3];
  
  iVar1 = *param_4;
  uVar9 = (ulong)iVar1;
  uVar11 = param_3[1];
  if (uVar11 != 0) {
    uVar6 = uVar11 - 1;
    if ((uVar11 & uVar6) == 0) {
      unaff_x23 = uVar6 & uVar9;
      in_NG = false;
    }
    else {
      in_NG = (long)(uVar11 - uVar9) < 0;
      unaff_x23 = uVar9;
      if (uVar11 <= uVar9) {
        uVar8 = 0;
        if (uVar11 != 0) {
          uVar8 = uVar9 / uVar11;
        }
        unaff_x23 = uVar9 - uVar8 * uVar11;
      }
    }
    plVar10 = *(long **)(*param_3 + unaff_x23 * 8);
    if (plVar10 != (long *)0x0) {
      do {
        while( true ) {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_10b1e6bd0;
          uVar8 = plVar10[1];
          if (uVar8 != uVar9) break;
          in_NG = (int)plVar10[2] - iVar1 < 0;
          if ((int)plVar10[2] == iVar1) {
            uVar5 = 0;
            aplStack_58[0] = plVar10;
            goto LAB_10b1e6ccc;
          }
        }
        if ((uVar11 & uVar6) == 0) {
          uVar8 = uVar8 & uVar6;
        }
        else if (uVar11 <= uVar8) {
          uVar2 = 0;
          if (uVar11 != 0) {
            uVar2 = uVar8 / uVar11;
          }
          uVar8 = uVar8 - uVar2 * uVar11;
        }
        in_NG = (long)(uVar8 - unaff_x23) < 0;
      } while (uVar8 == unaff_x23);
    }
  }
LAB_10b1e6bd0:
  func_0x00010b1ec2e0(aplStack_58);
  FUN_10b1e6ce4();
  func_0x00010b1eb0f0();
  if ((uVar11 == 0) || (func_0x00010b1ebbbc(param_1,param_2,(float)uVar11), (bool)in_NG)) {
    bVar3 = 2 < uVar11;
    bVar4 = uVar11 == 3;
    func_0x00010b1eaeec(uVar11 << 1);
    uVar5 = extraout_x8;
    if (!bVar3 || bVar4) {
      uVar5 = extraout_x9;
    }
    func_0x000107c2be50(param_3,uVar5);
    uVar11 = param_3[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x23 = uVar11 - 1 & uVar9;
    }
    else {
      unaff_x23 = uVar9;
      if (uVar11 <= uVar9) {
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar9 / uVar11;
        }
        unaff_x23 = uVar9 - uVar6 * uVar11;
      }
    }
  }
  lVar7 = *param_3;
  plVar10 = *(long **)(lVar7 + unaff_x23 * 8);
  if (plVar10 == (long *)0x0) {
    param_3 = param_3 + 2;
    *aplStack_58[0] = *param_3;
    *param_3 = (long)aplStack_58[0];
    *(long **)(lVar7 + unaff_x23 * 8) = param_3;
    if (*aplStack_58[0] != 0) {
      uVar9 = *(ulong *)(*aplStack_58[0] + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar9 = uVar9 & uVar11 - 1;
      }
      else if (uVar11 <= uVar9) {
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar9 / uVar11;
        }
        uVar9 = uVar9 - uVar6 * uVar11;
      }
      *(long **)(lVar7 + uVar9 * 8) = aplStack_58[0];
    }
  }
  else {
    *aplStack_58[0] = *plVar10;
    *plVar10 = (long)aplStack_58[0];
  }
  func_0x00010b1eb1cc();
  FUN_10b1e6e2c();
  uVar5 = 1;
LAB_10b1e6ccc:
  auVar12._8_8_ = uVar5;
  auVar12._0_8_ = aplStack_58[0];
  return auVar12;
}



/* Entry: 10b1e6ce4; end: 10b1e6d2b;  */

void FUN_10b1e6ce4(undefined8 *param_1,long param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x18;
  __Znwm();
  *param_1 = puVar1;
  param_1[1] = param_2 + 0x10;
  param_1[2] = 1;
  *puVar1 = 0;
  puVar1[1] = param_3;
  *(undefined4 *)(puVar1 + 2) = *param_4;
  return;
}



/* Entry: 10b1e6d2c; end: 10b1e6df7;  */

void FUN_10b1e6d2c(long param_1,ulong param_2)

{
  ulong uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x8_00;
  ulong uVar3;
  ulong extraout_x9;
  long *extraout_x9_00;
  long *plVar4;
  long *extraout_x9_01;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong extraout_x11;
  ulong uVar5;
  ulong extraout_x11_00;
  long *plVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    FUN_10b1e6df8(param_1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    FUN_10b1e6e10(param_1 + 8);
    func_0x00010b1ee5f4();
    FUN_10b1e6df8();
    uVar3 = 0;
    *(ulong *)(param_1 + 8) = param_2;
    while (param_2 != uVar3) {
      func_0x00010b1ebda4();
      uVar3 = extraout_x9;
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x00010b1ee534();
      func_0x00010b1ee520();
      lVar2 = extraout_x8;
      plVar6 = extraout_x9_00;
      uVar3 = extraout_x10;
      uVar5 = extraout_x11;
      while (plVar4 = plVar6, plVar6 = (long *)*plVar4, plVar6 != (long *)0x0) {
        uVar7 = plVar6[1];
        if ((param_2 & uVar3) == 0) {
          uVar7 = uVar7 & uVar3;
        }
        else if (param_2 <= uVar7) {
          uVar1 = 0;
          if (param_2 != 0) {
            uVar1 = uVar7 / param_2;
          }
          uVar7 = uVar7 - uVar1 * param_2;
        }
        if (uVar7 != uVar5) {
          if (*(long *)(lVar2 + uVar7 * 8) == 0) {
            *(long **)(lVar2 + uVar7 * 8) = plVar4;
            uVar5 = uVar7;
          }
          else {
            *plVar4 = *plVar6;
            func_0x00010b1eadf0();
            lVar2 = extraout_x8_00;
            plVar6 = extraout_x9_01;
            uVar3 = extraout_x10_00;
            uVar5 = extraout_x11_00;
          }
        }
      }
    }
  }
  return;
}



/* Entry: 10b1e6df8; end: 10b1e6e0f;  */

void FUN_10b1e6df8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1e6e10; end: 10b1e6e2b;  */

void FUN_10b1e6e10(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3d == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  func_0x000107c35104();
  FUN_10b1e6e4c();
  return;
}



/* Entry: 10b1e6e2c; end: 10b1e6e4b;  */

void FUN_10b1e6e2c(void)

{
  func_0x000107c35104();
  FUN_10b1e6e4c();
  return;
}



/* Entry: 10b1e6e4c; end: 10b1e6e63;  */

void FUN_10b1e6e4c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1e6e64; end: 10b1e6f8f;  */

void FUN_10b1e6e64(long param_1)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  long extraout_x8_00;
  code *extraout_x9;
  code *extraout_x9_00;
  code *pcVar1;
  long extraout_x10;
  uint extraout_w11;
  int extraout_w12;
  int unaff_w20;
  long lVar2;
  code *pcStack_98;
  undefined8 uStack_90;
  code **ppcStack_88;
  long lStack_80;
  code *pcStack_78;
  undefined **ppuStack_70;
  code ***pppcStack_68;
  undefined8 uStack_48;
  
  func_0x00010b1eaf40();
  lVar2 = *(long *)(param_1 + 0x10);
  pcStack_98 = FUN_10b1fcec0;
  uStack_90 = 0;
  ppcStack_88 = &pcStack_98;
  pcStack_78 = FUN_10b1e6f90;
  ppuStack_70 = &PTR_FUN_110cc4490;
  pppcStack_68 = &ppcStack_88;
  lStack_80 = lVar2;
  uStack_48 = extraout_x8;
  func_0x00010b1ec284(*(undefined8 *)(lVar2 + 0x60));
  func_0x00010b1ebe34(extraout_x8_00 + 0x80,&pcStack_78);
  func_0x00010b1eb08c(ppuStack_70);
  func_0x00010b1ec6fc();
  do {
    func_0x00010b1ed360();
    do {
      func_0x00010b1ebffc();
      func_0x00010b1ebcc4();
      func_0x00010b1ed830(*(undefined8 *)(*(long *)(lVar2 + 0x60) + 0x238));
      func_0x00010b1eb5b4();
      func_0x00010b1ebff4();
      func_0x00010b1eaddc(uStack_48);
      if ((bool)in_ZR) {
        return;
      }
      ___stack_chk_fail();
      func_0x00010b1eb5a0();
      FUN_10b120998();
      do {
        func_0x00010b1eb590();
        func_0x00010b1eb648();
      } while (unaff_w20 == 0);
      func_0x00010b1eb08c(ppuStack_70);
      in_ZR = unaff_w20 == 2;
      if (!(bool)in_ZR) {
        func_0x00010b1eb8dc();
        func_0x00010b1eb388();
        if (extraout_x10 != 0) {
          do {
            func_0x00010b1eb0ac();
          } while (extraout_w12 != 0);
        }
        func_0x00010b1eb02c();
        pcVar1 = extraout_x9;
        if ((extraout_w11 & 1) != 0) {
          func_0x00010b1ec364();
          pcVar1 = extraout_x9_00;
        }
        (*pcVar1)();
        func_0x00010b1eb728();
        return;
      }
      func_0x00010b1ebea4();
      func_0x00010b1ed340();
      ___cxa_end_catch();
      func_0x00010b1ec868();
      if (!(bool)in_ZR) break;
      func_0x00010b1ed330();
      func_0x00010b1ec868();
    } while ((bool)in_ZR);
  } while( true );
}



/* Entry: 10b1e6f90; end: 10b1e6fdb;  */

void FUN_10b1e6f90(undefined8 param_1)

{
  long extraout_x8;
  long extraout_x8_00;
  long lVar1;
  code *extraout_x9;
  code *extraout_x9_00;
  code *pcVar2;
  long extraout_x10;
  uint extraout_w11;
  int extraout_w12;
  
  func_0x00010b1eb388();
  if (extraout_x10 != 0) {
    do {
      func_0x00010b1eb0ac();
    } while (extraout_w12 != 0);
  }
  func_0x00010b1eb02c();
  lVar1 = extraout_x8;
  pcVar2 = extraout_x9;
  if ((extraout_w11 & 1) != 0) {
    func_0x00010b1ec364();
    lVar1 = extraout_x8_00;
    pcVar2 = extraout_x9_00;
  }
  (*pcVar2)(param_1,*(undefined8 *)(lVar1 + 8));
  func_0x00010b1eb728();
  return;
}



/* Entry: 10b1e6fdc; end: 10b1e6feb;  */

void FUN_10b1e6fdc(void)

{
  return;
}



/* Entry: 10b1e6fec; end: 10b1e700b;  */

void FUN_10b1e6fec(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b1c9c38();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1e700c; end: 10b1e7013;  */

void FUN_10b1e700c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b1e7014; end: 10b1e7027;  */

void FUN_10b1e7014(void)

{
  FUN_10b1e707c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1e7028; end: 10b1e707b;  */

void FUN_10b1e7028(long param_1)

{
  (**(code **)(param_1 + 0x90))();
  func_0x00010b1ec788();
  return;
}



/* Entry: 10b1e707c; end: 10b1e70df;  */

void FUN_10b1e707c(long *param_1)

{
  *param_1 = (long)&PTR_DAT_110cc44d0;
  func_0x00010b1eca48(param_1[0x13]);
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  func_0x000107c60d50(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  func_0x000107c60c18(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 10b1e70e0; end: 10b1e70e3;  */

void FUN_10b1e70e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc4518;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b1e70e4; end: 10b1e70f7;  */

void FUN_10b1e70e4(void)

{
  func_0x00010b1e7104();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1e70f8; end: 10b1e710f;  */

void FUN_10b1e70f8(long param_1)

{
  code *extraout_x8;
  long extraout_x9;
  int extraout_w11;
  
  param_1 = param_1 + 0x18;
  func_0x00010054fc34();
  if (param_1 != 0) {
    do {
      func_0x0001005eedc8();
    } while (extraout_w11 != 0);
    if (extraout_x9 == 0) {
      func_0x00010054fc78();
      (*extraout_x8)();
    }
  }
  return;
}



/* Entry: 10b1e7110; end: 10b1e7133;  */

void FUN_10b1e7110(long param_1)

{
  func_0x00010b1eb954();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b1e7134; end: 10b1e714b;  */

undefined1 FUN_10b1e7134(undefined1 *param_1)

{
  func_0x000107c29b34();
  return *param_1;
}



/* Entry: 10b1e714c; end: 10b1e714f;  */

void FUN_10b1e714c(long *param_1)

{
  *param_1 = (long)&PTR_FUN_110cc4568;
  FUN_10b1e7110(param_1 + 0x12);
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  func_0x000107c60d50(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  func_0x000107c60c18(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 10b1e7150; end: 10b1e7163;  */

void FUN_10b1e7150(void)

{
  FUN_10b1e71b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1e7164; end: 10b1e71b7;  */

void FUN_10b1e7164(void)

{
  FUN_10b1e7134();
  func_0x00010b1ec788();
  return;
}



/* Entry: 10b1e71b8; end: 10b1e7217;  */

void FUN_10b1e71b8(long *param_1)

{
  *param_1 = (long)&PTR_FUN_110cc4568;
  FUN_10b1e7110(param_1 + 0x12);
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  func_0x000107c60d50(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  func_0x000107c60c18(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 10b1e7218; end: 10b1e722f;  */

/* WARNING: Removing unreachable block (ram,0x00010b1ca878) */

byte FUN_10b1e7218(long param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  ulong *****pppppuVar12;
  ulong *****pppppuVar13;
  ulong *****pppppuVar14;
  ulong *****pppppuVar15;
  ulong *****pppppuVar16;
  ulong uVar17;
  uint uVar18;
  undefined1 extraout_w8;
  char extraout_w8_00;
  undefined1 extraout_w8_01;
  char extraout_w8_02;
  ulong *****pppppuVar19;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  ulong *****extraout_x8_03;
  ulong extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  undefined8 *****extraout_x8_07;
  undefined8 *****pppppuVar20;
  ulong extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  ulong ****extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  undefined8 *puVar21;
  undefined8 extraout_x9;
  ulong extraout_x9_00;
  int *piVar22;
  ulong extraout_x9_01;
  undefined8 *****extraout_x9_02;
  ulong extraout_x9_03;
  ulong *****pppppuVar23;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  ulong ****ppppuVar24;
  ulong extraout_x11;
  ulong *****extraout_x12;
  byte bVar25;
  int iVar26;
  long lVar27;
  long lVar28;
  undefined8 *****pppppuVar29;
  ulong *****pppppuVar30;
  undefined4 *puVar31;
  undefined8 uVar32;
  undefined8 ****ppppuVar33;
  ulong *****unaff_x26;
  undefined8 *****pppppuVar34;
  undefined8 *****pppppuVar35;
  ulong ****ppppuVar36;
  ulong *****pppppuVar37;
  undefined8 uVar38;
  ulong uStack_910;
  undefined1 auStack_8f0 [32];
  ulong ****ppppuStack_8d0;
  ulong ****ppppuStack_8c8;
  ulong ****ppppuStack_8c0;
  char cStack_8b8;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined4 uStack_870;
  undefined8 ****ppppuStack_868;
  undefined1 uStack_860;
  ulong uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_818;
  ulong ****ppppuStack_810;
  undefined1 auStack_808 [24];
  char cStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  char cStack_7d8;
  undefined8 ****ppppuStack_7d0;
  undefined8 ****ppppuStack_7c8;
  undefined8 ****ppppuStack_7c0;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  ulong ***apppuStack_770 [8];
  ulong ****ppppuStack_730;
  undefined1 uStack_728;
  undefined1 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined1 uStack_6f8;
  undefined1 auStack_6f0 [64];
  long alStack_6b0 [7];
  byte bStack_678;
  long lStack_670;
  undefined8 ***pppuStack_668;
  undefined8 ***pppuStack_660;
  undefined8 ***pppuStack_658;
  char cStack_650;
  undefined8 ***pppuStack_648;
  undefined8 ***pppuStack_640;
  byte bStack_638;
  ulong ***apppuStack_630 [3];
  undefined1 auStack_618 [24];
  ulong ****ppppuStack_600;
  ulong ****ppppuStack_5f8;
  ulong ****ppppuStack_5f0;
  long lStack_5e8;
  undefined4 uStack_5e0;
  undefined1 auStack_5a8 [8];
  undefined8 uStack_5a0;
  undefined8 auStack_598 [3];
  char cStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  char cStack_568;
  undefined8 ****ppppuStack_560;
  undefined8 ****ppppuStack_558;
  undefined8 ****ppppuStack_550;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined1 auStack_4f8 [64];
  undefined8 uStack_4b8;
  undefined1 uStack_4b0;
  undefined1 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined1 uStack_480;
  undefined1 auStack_478 [64];
  long alStack_438 [7];
  byte bStack_400;
  long lStack_3f8;
  undefined8 ***pppuStack_3f0;
  undefined8 ***pppuStack_3e8;
  undefined8 ***pppuStack_3e0;
  char cStack_3d8;
  undefined8 ***pppuStack_3d0;
  undefined8 ***pppuStack_3c8;
  byte bStack_3c0;
  undefined1 auStack_3b8 [24];
  undefined1 auStack_3a0 [24];
  undefined1 auStack_388 [16];
  undefined1 uStack_378;
  ulong ****ppppuStack_370;
  ulong ****ppppuStack_368;
  ulong ****ppppuStack_360;
  char cStack_358;
  ulong ****ppppuStack_350;
  undefined1 uStack_348;
  undefined7 uStack_347;
  undefined8 uStack_340;
  char cStack_338;
  undefined1 uStack_331;
  byte bStack_328;
  ulong ***pppuStack_300;
  ulong ***pppuStack_2f8;
  ulong ****ppppuStack_2f0;
  ulong ****ppppuStack_2e8;
  ulong ****ppppuStack_2e0;
  long lStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  ulong ****ppppuStack_288;
  ulong ****ppppuStack_280;
  undefined8 uStack_278;
  undefined8 ****ppppuStack_240;
  ulong ***pppuStack_238;
  undefined1 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 uStack_208;
  undefined1 uStack_200;
  ulong ****ppppuStack_1f8;
  ulong ****ppppuStack_1f0;
  ulong ****appppuStack_1e8 [7];
  undefined8 ****ppppuStack_1b0;
  undefined1 uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  byte bStack_170;
  undefined8 ****ppppuStack_168;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong ***pppuStack_140;
  ulong ***pppuStack_138;
  undefined1 uStack_130;
  byte bStack_128;
  ulong ****ppppuStack_120;
  undefined1 uStack_118;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  ulong ****ppppuStack_e0;
  ulong ****ppppuStack_d8;
  ulong ****ppppuStack_d0;
  ulong ****ppppuStack_c8;
  ulong uStack_c0;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [40];
  int iStack_80;
  undefined8 ****ppppuStack_70;
  undefined8 ****ppppuStack_68;
  undefined8 ****ppppuStack_60;
  undefined1 uStack_58;
  char cStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  char cStack_28;
  
  puVar21 = *(undefined8 **)(param_1 + 0x10);
  pppppuVar15 = (ulong *****)*puVar21;
  uVar17 = (ulong)*(byte *)(puVar21 + 4);
  uVar18 = (uint)*(byte *)((long)puVar21 + 0x21);
  pppppuVar16 = (ulong *****)(puVar21 + 1);
  func_0x00010b1ec024(pppppuVar15,pppppuVar16,uVar17);
  uStack_910 = CONCAT44(uStack_910._4_4_,uVar18);
  pppppuVar29 = &ppppuStack_868;
  pppppuVar12 = pppppuVar15;
  pppppuVar30 = pppppuVar16;
  func_0x00010b1eae84();
  __ZNSt3__16chrono12system_clock3nowEv();
  uVar8 = *(char *)(pppppuVar15 + 0xc6) == '\x01';
  if ((bool)uVar8) {
    lStack_2c8 = 0;
    lStack_2d0 = 0;
    uStack_2c0 = 0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (auStack_5a8,pppppuVar16);
    FUN_10b1f4818(&ppppuStack_70,pppppuVar15 + 0xbb,auStack_5a8,uVar17,uVar18);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_5a8);
    uStack_348 = 0;
    bStack_328 = 0;
    ppppuStack_350 = (ulong ****)&ppppuStack_70;
    FUN_10b1e77b0(&ppppuStack_350);
    bVar10 = false;
    pppppuVar30 = pppppuVar15;
    pppppuVar23 = pppppuVar16;
LAB_10b1ca374:
    if ((bStack_328 & 1) != 0) {
      pppppuVar13 = pppppuVar30;
      FUN_10b1cd5c8(pppppuVar30,pppppuVar23[1],*(undefined1 *)((long)pppppuVar23 + 0x17),uStack_340,
                    uStack_331,3);
      if (((ulong)pppppuVar13 & 1) == 0) goto LAB_10b1ca3dc;
      func_0x00010b1ed7dc(&ppppuStack_868);
      func_0x00010b1eb674();
      if (((uStack_858 == 0) || (uVar17 = uStack_858, func_0x00010b1ecd0c(), !(bool)uVar8)) ||
         (uVar8 = *(long *)(uVar17 + 0x38) == 0, 0 < *(long *)(uVar17 + 0x38))) goto LAB_10b1ca3d8;
      if (*(char *)((long)pppppuVar30 + 0x296) == '\x01') {
        ppppuStack_168 = ppppuStack_868;
        uStack_160 = uStack_860;
        ppppuStack_868 = (undefined8 *****)0x0;
        uStack_860 = 0;
        uStack_148 = uStack_848;
        uStack_150 = uStack_850;
        uStack_850 = 0;
        uStack_848 = 0;
        uStack_158 = uVar17;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&ppppuStack_240);
        uVar17 = uStack_158;
        pppppuVar23 = &ppppuStack_e0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                  (pppppuVar23,&ppppuStack_240);
        ppppuStack_c8 = *(ulong *****)(uVar17 + 0x60);
        ppppuStack_5f8 = (ulong ****)0x0;
        ppppuStack_600 = (ulong ****)0x0;
        lStack_5e8 = 0;
        ppppuStack_5f0 = (ulong ****)0x0;
        uStack_5e0 = 0x3f800000;
        for (lVar27 = 0; uVar8 = lVar27 + -0x20 < 0, lVar27 != 0x20; lVar27 = lVar27 + 0x20) {
          func_0x00010b1ed9d4(&ppppuStack_600);
          pppppuVar37 = (ulong *****)ppppuStack_5f8;
          pppppuVar13 = pppppuVar23;
          if ((ulong *****)ppppuStack_5f8 != (ulong *****)0x0) {
            uVar17 = (long)ppppuStack_5f8 - 1;
            if (((ulong)ppppuStack_5f8 & uVar17) == 0) {
              unaff_x26 = (ulong *****)(uVar17 & (ulong)pppppuVar23);
              uVar8 = false;
            }
            else {
              uVar8 = (long)pppppuVar23 - (long)ppppuStack_5f8 < 0;
              unaff_x26 = pppppuVar23;
              if (ppppuStack_5f8 <= pppppuVar23) {
                uVar4 = 0;
                if ((ulong *****)ppppuStack_5f8 != (ulong *****)0x0) {
                  uVar4 = (ulong)pppppuVar23 / (ulong)ppppuStack_5f8;
                }
                unaff_x26 = (ulong *****)((long)pppppuVar23 - uVar4 * (long)ppppuStack_5f8);
              }
            }
            ppppuVar36 = (ulong ****)ppppuStack_600[(long)unaff_x26];
            if (ppppuVar36 != (ulong ****)0x0) {
              do {
                while( true ) {
                  ppppuVar36 = (ulong ****)*ppppuVar36;
                  if (ppppuVar36 == (ulong ****)0x0) goto LAB_10b1ca4fc;
                  pppppuVar19 = (ulong *****)ppppuVar36[1];
                  uVar8 = (long)pppppuVar19 - (long)pppppuVar23 < 0;
                  if (pppppuVar19 != pppppuVar23) break;
                  pppppuVar13 = (ulong *****)(ppppuVar36 + 2);
                  func_0x00010b1ebe54();
                  if (((ulong)pppppuVar13 & 1) != 0) goto LAB_10b1ca614;
                }
                if (((ulong)pppppuVar37 & uVar17) == 0) {
                  pppppuVar19 = (ulong *****)((ulong)pppppuVar19 & uVar17);
                }
                else if (pppppuVar37 <= pppppuVar19) {
                  uVar4 = 0;
                  if (pppppuVar37 != (ulong *****)0x0) {
                    uVar4 = (ulong)pppppuVar19 / (ulong)pppppuVar37;
                  }
                  pppppuVar19 = (ulong *****)((long)pppppuVar19 - uVar4 * (long)pppppuVar37);
                }
                uVar8 = (long)pppppuVar19 - (long)unaff_x26 < 0;
              } while (pppppuVar19 == unaff_x26);
            }
          }
LAB_10b1ca4fc:
          func_0x00010b1ec5d4();
          appppuStack_1e8[0] = (ulong ****)0x0;
          *pppppuVar13 = (ulong ****)0x0;
          pppppuVar13[1] = (ulong ****)pppppuVar23;
          ppppuStack_1f8 = (ulong ****)pppppuVar13;
          ppppuStack_1f0 = (ulong ****)&ppppuStack_5f0;
          func_0x00010b1eca94(pppppuVar13 + 2);
          pppppuVar13[5] = *(ulong *****)((long)&ppppuStack_c8 + lVar27);
          appppuStack_1e8[0] = (ulong ****)CONCAT71(appppuStack_1e8[0]._1_7_,1);
          func_0x00010b1ebbc8(lStack_5e8);
          if ((pppppuVar37 == (ulong *****)0x0) || (func_0x00010b1ebbbc(), (bool)uVar8)) {
            func_0x00010b1ee148();
            bVar7 = (ulong *****)0x2 < pppppuVar37;
            bVar9 = pppppuVar37 == (ulong *****)0x3;
            func_0x00010b1eaeec();
            uVar32 = extraout_x8;
            if (!bVar7 || bVar9) {
              uVar32 = extraout_x9;
            }
            FUN_10b1b7c48(&ppppuStack_600,uVar32);
            pppppuVar37 = (ulong *****)ppppuStack_5f8;
            if (((ulong)ppppuStack_5f8 & (ulong)((long)ppppuStack_5f8 + -1)) == 0) {
              unaff_x26 = (ulong *****)((ulong)((long)ppppuStack_5f8 + -1) & (ulong)pppppuVar23);
            }
            else {
              unaff_x26 = pppppuVar23;
              if (ppppuStack_5f8 <= pppppuVar23) {
                uVar17 = 0;
                if ((ulong *****)ppppuStack_5f8 != (ulong *****)0x0) {
                  uVar17 = (ulong)pppppuVar23 / (ulong)ppppuStack_5f8;
                }
                unaff_x26 = (ulong *****)((long)pppppuVar23 - uVar17 * (long)ppppuStack_5f8);
              }
            }
          }
          ppppuVar36 = (ulong ****)ppppuStack_600[(long)unaff_x26];
          if (ppppuVar36 == (ulong ****)0x0) {
            *ppppuStack_1f8 = (ulong ***)ppppuStack_5f0;
            ppppuStack_5f0 = ppppuStack_1f8;
            ppppuStack_600[(long)unaff_x26] = (ulong ***)&ppppuStack_5f0;
            if ((ulong ****)*ppppuStack_1f8 != (ulong ****)0x0) {
              pppppuVar23 = (ulong *****)(*ppppuStack_1f8)[1];
              if (((ulong)pppppuVar37 & (long)pppppuVar37 - 1U) == 0) {
                pppppuVar23 = (ulong *****)((ulong)pppppuVar23 & (long)pppppuVar37 - 1U);
              }
              else if (pppppuVar37 <= pppppuVar23) {
                uVar17 = 0;
                if (pppppuVar37 != (ulong *****)0x0) {
                  uVar17 = (ulong)pppppuVar23 / (ulong)pppppuVar37;
                }
                pppppuVar23 = (ulong *****)((long)pppppuVar23 - uVar17 * (long)pppppuVar37);
              }
              ppppuStack_600[(long)pppppuVar23] = (ulong ***)ppppuStack_1f8;
            }
          }
          else {
            *ppppuStack_1f8 = *ppppuVar36;
            *ppppuVar36 = (ulong ***)ppppuStack_1f8;
          }
          ppppuStack_1f8 = (ulong ****)0x0;
          lStack_5e8 = lStack_5e8 + 1;
          pppppuVar13 = &ppppuStack_1f8;
          FUN_10b1b7e40();
LAB_10b1ca614:
          pppppuVar23 = pppppuVar13;
        }
        pppppuVar23 = &ppppuStack_e0;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        ppppuStack_1f0 = (ulong ****)0x0;
        ppppuStack_1f8 = (ulong ****)0x0;
        appppuStack_1e8[0] = (ulong ****)0x0;
        lVar27 = *(long *)(uStack_158 + 0x50) - *(long *)(uStack_158 + 0x48);
        if (lVar27 != 0) {
          uVar17 = lVar27 / 0x88;
          if (uVar17 >> 0x3b != 0) {
            FUN_10b1d8b08();
            goto LAB_10b1cc094;
          }
          lVar27 = 0;
          FUN_10b1d8b14(&ppppuStack_e0,uVar17,0,appppuStack_1e8);
          func_0x00010b1ee2c4();
          pppppuVar23 = (ulong *****)(extraout_x8_00 - lVar27);
          _memcpy();
          ppppuVar36 = ppppuStack_1f8;
          appppuStack_1e8[0] = ppppuStack_c8;
          ppppuStack_1f0 = ppppuStack_d0;
          ppppuStack_1f8 = (ulong ****)(extraout_x8_00 - lVar27);
          func_0x00010b1ec444(ppppuVar36);
        }
        FUN_10b2029a0();
        pppppuVar13 = pppppuVar23;
        __ZNSt3__16chrono12system_clock3nowEv();
        ppppuStack_280 = (ulong ****)0x0;
        ppppuStack_288 = (ulong ****)0x0;
        uStack_278 = 0;
        piVar2 = *(int **)(uStack_158 + 0x50);
        for (piVar22 = *(int **)(uStack_158 + 0x48); piVar22 != piVar2; piVar22 = piVar22 + 0x22) {
          pppppuVar30 = pppppuVar23;
          FUN_10b20345c(pppppuVar23,*piVar22,piVar22[0xe]);
          iVar26 = *piVar22;
          unaff_x26 = *(ulong ******)(piVar22 + 10);
          ppppuVar36 = *(ulong *****)(piVar22 + 0x10);
          if (ppppuStack_1f0 < appppuStack_1e8[0]) {
            *(int *)ppppuStack_1f0 = iVar26;
            ppppuStack_1f0[1] = (ulong ***)pppppuVar30;
            ppppuStack_1f0[2] = (ulong ***)unaff_x26;
            pppppuVar37 = (ulong *****)(ppppuStack_1f0 + 4);
            ppppuStack_1f0[3] = (ulong ***)ppppuVar36;
          }
          else {
            lVar27 = (long)ppppuStack_1f0 - (long)ppppuStack_1f8 >> 5;
            if (lVar27 + 1U >> 0x3b != 0) {
              FUN_10b1d8b08();
              goto LAB_10b1cc094;
            }
            func_0x00010b1ec290();
            uVar32 = extraout_x8_01;
            if (0x7fffffffffffffdf < extraout_x9_00) {
              uVar32 = 0x7ffffffffffffff;
            }
            FUN_10b1d8b14(&ppppuStack_e0,uVar32);
            *(int *)ppppuStack_d0 = iVar26;
            ppppuStack_d0[1] = (ulong ***)pppppuVar30;
            ppppuStack_d0[2] = (ulong ***)unaff_x26;
            ppppuStack_d0[3] = (ulong ***)ppppuVar36;
            pppppuVar37 = (ulong *****)(ppppuStack_d0 + 4);
            func_0x00010b1ee2c4();
            unaff_x26 = (ulong *****)(extraout_x8_02 - lVar27);
            _memcpy(unaff_x26);
            ppppuVar36 = ppppuStack_1f8;
            appppuStack_1e8[0] = ppppuStack_c8;
            ppppuStack_1f8 = (ulong ****)unaff_x26;
            ppppuStack_1f0 = (ulong ****)pppppuVar37;
            func_0x00010b1ec444(ppppuVar36);
          }
          ppppuStack_1f0 = (ulong ****)pppppuVar37;
          if (*(long *)(piVar22 + 0xc) == 0) {
            lVar27 = *(long *)(piVar22 + 10);
            FUN_10b1cd230(lVar27,*(undefined8 *)(piVar22 + 0x10),*(undefined8 *)(uStack_158 + 0x60),
                          pppppuVar30);
            if (0 < lVar27 && lVar27 < (long)pppppuVar13) {
              FUN_10b1d8bac(&ppppuStack_288,piVar22);
            }
          }
          pppppuVar30 = pppppuVar15;
        }
        lVar27 = (long)ppppuStack_1f0 - (long)ppppuStack_1f8;
        for (pppppuVar23 = (ulong *****)ppppuStack_1f8; lVar27 = lVar27 + -0x20,
            pppppuVar37 = (ulong *****)ppppuStack_288, pppppuVar23 != (ulong *****)ppppuStack_1f0;
            pppppuVar23 = pppppuVar23 + 4) {
          pppppuVar19 = (ulong *****)ppppuStack_1f0;
          if ((pppppuVar23[1] == (ulong ****)0x0) || (*(int *)((long)pppppuVar23[1] + 0x4c) < 1))
          goto LAB_10b1caa78;
        }
        goto LAB_10b1cad9c;
      }
      ppppuStack_5f8 = (ulong ****)0x0;
      ppppuStack_600 = (ulong ****)0x0;
      ppppuStack_5f0 = (ulong ****)0x0;
      ppppuStack_1f0 = (ulong ****)0x0;
      ppppuStack_1f8 = (ulong ****)0x0;
      appppuStack_1e8[0] = (ulong ****)0x0;
      puVar1 = *(undefined4 **)(uVar17 + 0x50);
      for (puVar31 = *(undefined4 **)(uVar17 + 0x48); puVar31 != puVar1; puVar31 = puVar31 + 0x22) {
        pppppuVar37 = pppppuVar13;
        if (*(long *)(puVar31 + 0xc) < 1) {
          FUN_10b2029a0();
          FUN_10b20345c();
          pppppuVar37 = *(ulong ******)(puVar31 + 10);
          FUN_10b1cd230(pppppuVar37,*(undefined8 *)(puVar31 + 0x10),
                        *(undefined8 *)(uStack_858 + 0x60),pppppuVar13);
          if (0 < (long)pppppuVar37 && (long)pppppuVar37 < (long)pppppuVar12) {
            *(ulong ******)(puVar31 + 0xc) = pppppuVar12;
            FUN_10b1d8bac(&ppppuStack_600,puVar31);
            pppppuVar37 = &ppppuStack_1f8;
            FUN_10b1d75ec(pppppuVar37,*puVar31);
          }
        }
        pppppuVar13 = pppppuVar37;
      }
      FUN_10b1cd2ac(pppppuVar30[0x47],uStack_858,&ppppuStack_600);
      if (*(char *)((long)pppppuVar30 + 0x295) == '\x01') {
        lVar27 = 0;
        lVar28 = 0;
        pppppuVar13 = (ulong *****)ppppuStack_5f8;
LAB_10b1ca6d4:
        if (lVar27 != 0xc) {
          iVar26 = *(int *)(&UNK_10e564630 + lVar27);
          ppppuVar36 = *(ulong *****)(uStack_858 + 0x48);
          while( true ) {
            if (ppppuVar36 == *(ulong *****)(uStack_858 + 0x50)) goto LAB_10b1ca80c;
            if (*(int *)ppppuVar36 == iVar26) break;
            ppppuVar36 = ppppuVar36 + 0x11;
          }
          pppppuVar37 = (ulong *****)0x0;
          for (pppppuVar23 = (ulong *****)ppppuStack_600; pppppuVar23 != pppppuVar13;
              pppppuVar23 = pppppuVar23 + 1) {
            ppppuVar24 = *pppppuVar23;
            if (ppppuVar36 != ppppuVar24 && *(int *)ppppuVar24 == iVar26) {
              ppppuVar24[6] = (ulong ***)0x0;
              pppppuVar37 = (ulong *****)((long)pppppuVar37 + 1);
            }
          }
          pppppuVar19 = (ulong *****)ppppuStack_600;
          pppppuVar23 = pppppuVar16;
          if (pppppuVar37 != (ulong *****)0x0) {
            for (; uVar8 = pppppuVar19 == pppppuVar13, !(bool)uVar8; pppppuVar19 = pppppuVar19 + 1)
            {
              pppppuVar23 = pppppuVar19;
              if ((*pppppuVar19)[6] == (ulong ***)0x0) goto LAB_10b1ca774;
            }
            goto LAB_10b1ca79c;
          }
          goto LAB_10b1ca80c;
        }
        ppppuStack_5f8 = (ulong ****)pppppuVar13;
        if (lVar28 != 0) {
          ppppuStack_d8 = (ulong ****)0x0;
          ppppuStack_e0 = (ulong ****)0x0;
          ppppuStack_d0 = (ulong ****)0x0;
          FUN_10b114b00(pppppuVar30[0x47],0xdc,&ppppuStack_e0,*(undefined8 *)(uStack_858 + 0x28));
          FUN_10b120998(&ppppuStack_e0);
        }
      }
      pppppuVar13 = *(ulong ******)(uStack_858 + 0x48);
      unaff_x26 = *(ulong ******)(uStack_858 + 0x50);
      pppppuVar37 = pppppuVar13;
      FUN_10b1bf2b0(pppppuVar13,unaff_x26);
      ppppuVar36 = ppppuStack_1f0;
      pppppuVar19 = (ulong *****)ppppuStack_1f8;
      if (pppppuVar37 == (ulong *****)0x0) {
        for (; uVar8 = pppppuVar13 == unaff_x26, !(bool)uVar8; pppppuVar13 = pppppuVar13 + 0x11) {
          if (0 < (long)pppppuVar13[6]) {
            func_0x00010b1ed7dc();
            FUN_10b1be404();
          }
        }
        if ((uVar18 == 0) || (((ulong)pppppuVar30[0xbe] & 1) == 0)) {
          if ((*(long *)(uStack_858 + 0x170) == 0) ||
             (uVar8 = true, *(long *)(*(long *)(uStack_858 + 0x170) + 8) == -1)) {
            ppppuStack_1b0 = ppppuStack_868;
            uStack_1a8 = uStack_860;
            ppppuStack_868 = (undefined8 *****)0x0;
            uStack_860 = 0;
            uStack_1a0 = uStack_858;
            uStack_190 = uStack_848;
            uStack_198 = uStack_850;
            uStack_850 = 0;
            uStack_848 = 0;
            func_0x00010b1ed7dc(&ppppuStack_e0);
            func_0x00010b1ebe44();
            func_0x00010b1d3e60(&ppppuStack_1b0);
            func_0x00010b1ee270();
            if ((bool)uVar8) {
              func_0x00010b1ece38(&lStack_2d0);
            }
            func_0x00010b1ebf30();
            iVar26 = 0;
          }
          else {
            iVar26 = 3;
          }
        }
        else {
          bVar10 = true;
          iVar26 = 2;
        }
      }
      else {
        for (; ppppuVar24 = ppppuStack_5f8, uVar8 = pppppuVar19 == (ulong *****)ppppuVar36,
            pppppuVar13 = (ulong *****)ppppuStack_600, !(bool)uVar8;
            pppppuVar19 = (ulong *****)((long)pppppuVar19 + 4)) {
          ppppuVar24 = pppppuVar30[0x47];
          FUN_10b12983c(&ppppuStack_e0,*(int *)pppppuVar19);
          func_0x00010b20b440(*(int *)pppppuVar37);
          func_0x00010b1ec990(auStack_b8,"other");
          func_0x00010b1eb930(&ppppuStack_240,&ppppuStack_e0);
          func_0x00010b1eb5b4(ppppuVar24,0xb8,&ppppuStack_240);
          func_0x00010b1ece9c();
          do {
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
            func_0x00010b1ee484();
          } while (!(bool)uVar8);
          pppppuVar30 = pppppuVar15;
        }
        for (; pppppuVar13 != (ulong *****)ppppuVar24; pppppuVar13 = pppppuVar13 + 1) {
          if (*(char *)((long)pppppuVar30 + 0x294) == '\x01') {
            for (piVar22 = *(int **)(uStack_858 + 0x48); piVar22 != *(int **)(uStack_858 + 0x50);
                piVar22 = piVar22 + 0x22) {
              if ((*(long *)(piVar22 + 0xc) == 0) && (*piVar22 == *(int *)*pppppuVar13))
              goto LAB_10b1cabc4;
            }
          }
          func_0x00010b1ed7dc();
          FUN_10b1be404();
LAB_10b1cabc4:
        }
        if ((uVar18 == 0) || (((ulong)pppppuVar30[0xbe] & 1) == 0)) {
          iVar26 = 3;
        }
        else {
          bVar10 = true;
          iVar26 = 2;
        }
      }
      func_0x00010b1b399c(&ppppuStack_1f8);
      FUN_10b1d8c5c(&ppppuStack_600);
      func_0x00010b1eca08();
      uVar8 = iVar26 == 3;
      if (((bool)uVar8) || (iVar26 == 0)) goto LAB_10b1ca3dc;
    }
    goto LAB_10b1cbf54;
  }
  if ((long)pppppuVar15[0x51] < 1) {
LAB_10b1caedc:
    pppppuVar13 = pppppuVar12;
    FUN_10b2029a0();
    uStack_888 = 0;
    uStack_890 = 0;
    uStack_878 = 0;
    uStack_880 = 0;
    uStack_870 = 0x3f800000;
    pppppuVar23 = pppppuVar13 + 0xc;
    FUN_10b1e72c8();
    ppppuStack_e0 = (ulong ****)pppppuVar23;
    ppppuStack_d8 = (ulong ****)pppppuVar30;
    iVar26 = 0x7fffffff;
    while (iVar5 = iVar26, (ulong *****)ppppuStack_e0 != (ulong *****)0x0) {
      iVar3 = *(int *)(ppppuStack_d8 + 7);
      FUN_10b1e734c(&ppppuStack_e0);
      iVar26 = iVar3;
      if (iVar5 <= iVar3) {
        iVar26 = iVar5;
      }
      if (iVar3 < 1) {
        iVar26 = iVar5;
      }
    }
    uVar8 = iVar5 == 0x7fffffff;
    if (!(bool)uVar8) {
      func_0x00010b1edaa4(&ppppuStack_600);
      ppppuStack_168 = (undefined8 ****)((ulong)ppppuStack_168 & 0xffffffffffffff00);
      uStack_158 = uStack_158 & 0xffffffffffffff00;
      func_0x00010b1edc80(&ppppuStack_868);
      pppppuVar30 = (ulong *****)ppppuStack_868[1];
      ppppuStack_1f0 = (ulong ****)ppppuStack_868[2];
      ppppuStack_1f8 = (ulong ****)pppppuVar30;
      if ((ulong *****)ppppuStack_1f0 != (ulong *****)0x0) {
        do {
          func_0x00010b1eaf98();
          pppppuVar30 = extraout_x8_03;
        } while (extraout_w11 != 0);
      }
      FUN_10b1fafd0(&uStack_818,pppppuVar30[2],&ppppuStack_600);
      uStack_728 = 0;
      uStack_6f8 = 0;
      if (cStack_7d8 != '\0') {
        uStack_710 = 0;
        uVar8 = cStack_7f0 == '\x01';
        if ((bool)uVar8) {
          func_0x00010b1ecb3c();
          uStack_710 = extraout_w8;
        }
        uStack_700 = uStack_7e0;
        uStack_708 = uStack_7e8;
        uStack_6f8 = 1;
        FUN_10b1d7db0(auStack_808);
      }
      ppppuStack_730 = ppppuStack_810;
      ppppuStack_810 = (ulong ****)0x0;
      FUN_10b1d7d18(auStack_6f0,&ppppuStack_730);
      uStack_788 = 0;
      uStack_790 = 0;
      uStack_778 = 0;
      uStack_780 = 0;
      uStack_7a8 = 0;
      uStack_7b0 = 0;
      uStack_798 = 0;
      uStack_7a0 = 0;
      FUN_10b1d7d18(apppuStack_770,&uStack_7b0);
      ppppuStack_7c8 = (undefined8 *****)0x0;
      ppppuStack_7c0 = (undefined8 *****)0x0;
      ppppuStack_7d0 = (undefined8 *****)0x0;
      FUN_10b1d7f2c(&lStack_670,auStack_6f0);
      pppppuVar30 = (ulong *****)apppuStack_770;
      FUN_10b1d7f2c(alStack_6b0);
      ppppuStack_1b0 = &ppppuStack_7d0;
      uStack_1a8 = 0;
      pppppuVar29 = (undefined8 *****)0x1;
      while ((((bStack_638 & 1) != 0 || ((bStack_678 & 1) != 0)) &&
             (uVar8 = 1, lStack_670 != alStack_6b0[0]))) {
        if ((bStack_638 & 1) == 0) {
          uVar32 = *(undefined8 *)(lStack_670 + 8);
          func_0x00010b1eb9a4(apppuStack_630);
          pppppuVar30 = (ulong *****)apppuStack_630;
          func_0x000107c27f54(auStack_618,&UNK_10f2e0451);
          func_0x00010b1eb99c(uVar32);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_618);
          func_0x00010b1eda74();
        }
        ppppuVar33 = ppppuStack_7c8;
        pppppuVar20 = (undefined8 *****)ppppuStack_7d0;
        if (ppppuStack_7c8 < ppppuStack_7c0) {
          *(undefined1 *)ppppuStack_7c8 = 0;
          *(undefined1 *)(ppppuStack_7c8 + 3) = 0;
          uVar8 = cStack_650 == '\x01';
          if ((bool)uVar8) {
            ppppuStack_7c8[2] = pppuStack_658;
            ppppuStack_7c8[1] = pppuStack_660;
            *ppppuStack_7c8 = pppuStack_668;
            func_0x00010b1ee1ec();
            *(undefined1 *)(ppppuVar33 + 3) = 1;
          }
          ppppuVar33[5] = pppuStack_640;
          ppppuVar33[4] = pppuStack_648;
          pppppuVar20 = (undefined8 *****)(ppppuVar33 + 6);
        }
        else {
          lVar27 = (long)ppppuStack_7c8 - (long)ppppuStack_7d0;
          if (0x555555555555555 < lVar27 / 0x30 + 1U) {
            FUN_10b1d7df0();
            goto LAB_10b1cc094;
          }
          func_0x00010b1eb414(((long)ppppuStack_7c0 - (long)ppppuStack_7d0) / 0x30);
          uVar17 = extraout_x9_01;
          if (0x2aaaaaaaaaaaaa9 < extraout_x8_04) {
            uVar17 = extraout_x11;
          }
          if (uVar17 == 0) {
            lVar28 = 0;
          }
          else {
            if (extraout_x11 < uVar17) goto LAB_10b1cc078;
            lVar28 = uVar17 * 0x30;
            __Znwm();
          }
          puVar21 = (undefined8 *)(lVar28 + lVar27);
          func_0x00010b1ec934();
          if (cStack_650 == '\x01') {
            puVar21[1] = pppuStack_660;
            *puVar21 = pppuStack_668;
            puVar21[2] = pppuStack_658;
            func_0x00010b1ee1ec();
            *(undefined1 *)(puVar21 + 3) = 1;
          }
          puVar21[5] = pppuStack_640;
          puVar21[4] = pppuStack_648;
          pppppuVar34 = (undefined8 *****)(puVar21 + (lVar27 / -0x30) * 6);
          for (lVar27 = 0;
              bVar10 = (undefined8 *****)((long)pppppuVar20 + lVar27) ==
                       (undefined8 *****)ppppuVar33, !bVar10; lVar27 = lVar27 + 0x30) {
            func_0x00010b1ec378();
            lVar27 = extraout_x8_05;
            if (bVar10) {
              func_0x00010b1eb768();
              *(undefined1 *)(extraout_x10 + 0x18) = 1;
              lVar27 = extraout_x8_06;
            }
            uVar32 = *(undefined8 *)((long)pppppuVar20 + lVar27 + 0x20);
            *(undefined8 *)((long)pppppuVar34 + lVar27 + 0x28) =
                 *(undefined8 *)((long)pppppuVar20 + lVar27 + 0x28);
            *(undefined8 *)((long)pppppuVar34 + lVar27 + 0x20) = uVar32;
          }
          for (; uVar8 = pppppuVar20 == (undefined8 *****)ppppuVar33, !(bool)uVar8;
              pppppuVar20 = pppppuVar20 + 6) {
            func_0x00010b1eddb4();
          }
          pppppuVar20 = (undefined8 *****)(puVar21 + 6);
          ppppuStack_7c0 = (undefined8 ****)(lVar28 + uVar17 * 0x30);
          bVar10 = (undefined8 *****)ppppuStack_7d0 != (undefined8 *****)0x0;
          ppppuStack_7d0 = pppppuVar34;
          if (bVar10) {
            ppppuStack_7c8 = pppppuVar20;
            __ZdlPv();
          }
        }
        ppppuStack_7c8 = pppppuVar20;
        FUN_10b1d7dfc(&lStack_670);
      }
      uStack_1a8 = 1;
      FUN_10b1d7ec0(&ppppuStack_1b0);
      func_0x00010b1ebe7c(alStack_6b0);
      FUN_10b1d7f8c(&pppuStack_668);
      func_0x00010b1ebe7c(apppuStack_770);
      func_0x00010b1ed9c8();
      func_0x00010b1ebe7c(auStack_6f0);
      func_0x00010b1ebe7c(&ppppuStack_730);
      ppppuStack_68 = ppppuStack_7c8;
      ppppuStack_70 = ppppuStack_7d0;
      ppppuStack_60 = ppppuStack_7c0;
      ppppuStack_7d0 = (undefined8 *****)0x0;
      ppppuStack_7c8 = (undefined8 *****)0x0;
      ppppuStack_7c0 = (undefined8 *****)0x0;
      uStack_58 = 1;
      FUN_10b1d7fac(&ppppuStack_7d0);
      FUN_10b1d7fd0(&uStack_818);
      FUN_10b1b7824(&ppppuStack_1f8);
      func_0x00010bccbe4c(&ppppuStack_868);
      func_0x00010b1ecedc();
      func_0x00010b1ee1d8();
      if ((bool)uVar8) {
        func_0x00010b1ecc04();
        uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
      }
      iStack_80 = 0;
      func_0x00010b1ed198();
      ppppuStack_70 = (undefined8 ****)((ulong)ppppuStack_70 & 0xffffffffffffff00);
      uStack_58 = 0;
      if (iStack_80 == 0) {
        func_0x00010b1ee1b0();
        if ((bool)uVar8) {
          func_0x00010b1ed644();
          func_0x00010b1ee19c();
          cStack_338 = extraout_w8_00;
        }
      }
      else {
        if (iStack_80 != 1) {
          func_0x00010563ab98();
          goto LAB_10b1cc094;
        }
        ppppuStack_350 = (ulong ****)((ulong)ppppuStack_350 & 0xffffffffffffff00);
        cStack_338 = '\0';
      }
      func_0x00010b1ed198();
      func_0x00010b1ecb88();
      FUN_10b1d803c();
      FUN_10b1b78d0(&ppppuStack_168);
      func_0x000107c279a4(&ppppuStack_600);
      if (cStack_338 == '\x01') {
        pppppuVar37 = (ulong *****)CONCAT71(uStack_347,uStack_348);
        for (pppppuVar23 = (ulong *****)ppppuStack_350; pppppuVar23 != pppppuVar37;
            pppppuVar23 = pppppuVar23 + 6) {
          if (*(char *)(pppppuVar23 + 5) == '\x01') {
            pppppuVar29 = (undefined8 *****)((long)pppppuVar23[4] * 1000);
          }
          else {
            pppppuVar29 = (undefined8 *****)0x0;
          }
          pppppuVar30 = pppppuVar23;
          func_0x00010549026c();
          puVar21 = &uStack_890;
          FUN_10b1b7254();
          *puVar21 = pppppuVar29;
        }
      }
      FUN_10b1d801c(&ppppuStack_350);
    }
    uStack_8a8 = 0;
    uStack_8a0 = 0;
    uStack_898 = 0;
    pppppuVar23 = pppppuVar13 + 0xc;
    FUN_10b1e72c8();
    ppppuStack_288 = (ulong ****)pppppuVar23;
    ppppuStack_280 = (ulong ****)pppppuVar30;
    func_0x00010b1ec26c();
    pppppuVar30 = (ulong *****)ppppuStack_280;
    while (ppppuStack_280 = (ulong ****)pppppuVar30, pppppuVar23 != (ulong *****)0x0) {
      uVar17 = (ulong)*(int *)((long)pppppuVar30 + 0x54);
      if (0 < *(int *)((long)pppppuVar30 + 0x54)) {
        uVar18 = *(uint *)(pppppuVar30 + 7);
        uVar8 = uVar18 == 1;
        if (0 < (int)uVar18) {
          uVar4 = (ulong)uVar18;
          if ((long)uVar17 <= (long)(ulong)uVar18) {
            uVar4 = uVar17;
          }
          uVar8 = *(char *)((long)pppppuVar30 + 0x5d) == '\x01';
          if ((bool)uVar8) {
            uVar17 = uVar4;
          }
        }
        ppppuVar36 = *pppppuVar30;
        func_0x00010b1edaa4(&ppppuStack_168);
        uStack_910 = uStack_910 & 0xffffffffffffff00 | 1;
        ppppuStack_1b0 = (undefined8 ****)((ulong)ppppuStack_1b0 & 0xffffffffffffff00);
        uStack_1a0 = uStack_1a0 & 0xffffffffffffff00;
        func_0x00010bccbc98(&ppppuStack_600,pppppuVar15 + 0x10,&UNK_10f73845f,0x3b);
        pppppuVar20 = (undefined8 *****)ppppuStack_600[1];
        pppuStack_238 = ppppuStack_600[2];
        pppppuVar23 = pppppuVar12;
        ppppuStack_240 = pppppuVar20;
        if ((ulong ****)pppuStack_238 != (ulong ****)0x0) {
          do {
            func_0x00010b1eaf98();
            pppppuVar20 = extraout_x8_07;
            pppppuVar23 = extraout_x12;
          } while (extraout_w11_00 != 0);
        }
        FUN_10b1fb254(auStack_5a8,pppppuVar20[2],&ppppuStack_168,
                      (ulong)ppppuVar36 & 0xffffffff | 0x100000000,
                      (long)(pppppuVar23 + uVar17 * -0x1e848) / 1000,uStack_910);
        uStack_4b0 = 0;
        uStack_480 = 0;
        if (cStack_568 != '\0') {
          uStack_498 = 0;
          bVar10 = cStack_580 == '\x01';
          uVar8 = bVar10;
          if (bVar10) {
            func_0x00010b1ebc9c(auStack_598[0]);
          }
          uStack_488 = uStack_570;
          uStack_490 = uStack_578;
          uStack_480 = 1;
          uStack_498 = bVar10;
          FUN_10b1d8118(auStack_598);
        }
        uStack_4b8 = uStack_5a0;
        uStack_5a0 = 0;
        FUN_10b1d8080(auStack_478,&uStack_4b8);
        uStack_508 = 0;
        uStack_510 = 0;
        uStack_518 = 0;
        uStack_520 = 0;
        uStack_538 = 0;
        uStack_540 = 0;
        uStack_528 = 0;
        uStack_530 = 0;
        FUN_10b1d8080(auStack_4f8,&uStack_540);
        ppppuStack_550 = (undefined8 *****)0x0;
        ppppuStack_560 = (undefined8 *****)0x0;
        ppppuStack_558 = (undefined8 *****)0x0;
        FUN_10b1d8294(&lStack_3f8,auStack_478);
        FUN_10b1d8294(alStack_438,auStack_4f8);
        ppppuStack_1f8 = (ulong ****)&ppppuStack_560;
        ppppuStack_1f0 = (ulong ****)((ulong)ppppuStack_1f0 & 0xffffffffffffff00);
        while ((((bStack_3c0 & 1) != 0 || ((bStack_400 & 1) != 0)) &&
               (uVar8 = 1, lStack_3f8 != alStack_438[0]))) {
          if ((bStack_3c0 & 1) == 0) {
            uVar32 = *(undefined8 *)(lStack_3f8 + 8);
            func_0x00010b1eb9a4(auStack_3b8);
            func_0x00010b1eb224(auStack_3a0);
            func_0x00010b1eb99c(uVar32);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3a0);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_3b8);
          }
          ppppuVar33 = ppppuStack_558;
          pppppuVar20 = (undefined8 *****)ppppuStack_560;
          if (ppppuStack_558 < ppppuStack_550) {
            func_0x00010b1ec934();
            uVar8 = cStack_3d8 == '\x01';
            if ((bool)uVar8) {
              func_0x00010b1ec278(pppuStack_3e0,pppuStack_3f0);
              pppuStack_3e8 = (undefined8 ****)0x0;
              pppuStack_3e0 = (undefined8 ****)0x0;
              pppuStack_3f0 = (undefined8 ****)0x0;
              *(undefined1 *)(ppppuVar33 + 3) = 1;
            }
            ppppuVar33[5] = pppuStack_3c8;
            ppppuVar33[4] = pppuStack_3d0;
            pppppuVar20 = (undefined8 *****)(ppppuVar33 + 6);
          }
          else {
            lVar27 = (long)ppppuStack_558 - (long)ppppuStack_560;
            if (pppppuVar29 < (undefined8 *****)(lVar27 / 0x30 + 1)) {
              FUN_10b1d8158();
              goto LAB_10b1cc094;
            }
            func_0x00010b1eb414(((long)ppppuStack_550 - (long)ppppuStack_560) / 0x30);
            pppppuVar34 = extraout_x9_02;
            if (0x2aaaaaaaaaaaaa9 < extraout_x8_08) {
              pppppuVar34 = pppppuVar29;
            }
            if (pppppuVar34 == (undefined8 *****)0x0) {
              lVar28 = 0;
            }
            else {
              if (pppppuVar29 < pppppuVar34) {
                func_0x000104bd35f4();
                goto LAB_10b1cc094;
              }
              lVar28 = (long)pppppuVar34 * 0x30;
              __Znwm();
            }
            pppppuVar29 = (undefined8 *****)(lVar28 + lVar27);
            *(undefined1 *)pppppuVar29 = 0;
            *(undefined1 *)(pppppuVar29 + 3) = 0;
            if (cStack_3d8 == '\x01') {
              pppppuVar29[1] = (undefined8 ****)pppuStack_3e8;
              *pppppuVar29 = (undefined8 ****)pppuStack_3f0;
              pppppuVar29[2] = (undefined8 ****)pppuStack_3e0;
              pppuStack_3e8 = (undefined8 ****)0x0;
              pppuStack_3e0 = (undefined8 ****)0x0;
              pppuStack_3f0 = (undefined8 ****)0x0;
              *(undefined1 *)(pppppuVar29 + 3) = 1;
            }
            pppppuVar29[5] = (undefined8 ****)pppuStack_3c8;
            pppppuVar29[4] = (undefined8 ****)pppuStack_3d0;
            pppppuVar35 = pppppuVar29 + (lVar27 / -0x30) * 6;
            for (lVar27 = 0;
                bVar10 = (undefined8 *****)((long)pppppuVar20 + lVar27) ==
                         (undefined8 *****)ppppuVar33, !bVar10; lVar27 = lVar27 + 0x30) {
              func_0x00010b1ec378();
              lVar27 = extraout_x8_09;
              if (bVar10) {
                func_0x00010b1eb768();
                *(undefined1 *)(extraout_x10_00 + 0x18) = 1;
                lVar27 = extraout_x8_10;
              }
              uVar32 = *(undefined8 *)((long)pppppuVar20 + lVar27 + 0x20);
              *(undefined8 *)((long)pppppuVar35 + lVar27 + 0x28) =
                   *(undefined8 *)((long)pppppuVar20 + lVar27 + 0x28);
              *(undefined8 *)((long)pppppuVar35 + lVar27 + 0x20) = uVar32;
            }
            for (; uVar8 = pppppuVar20 == (undefined8 *****)ppppuVar33, !(bool)uVar8;
                pppppuVar20 = pppppuVar20 + 6) {
              func_0x000107c279a4(pppppuVar20);
            }
            pppppuVar20 = pppppuVar29 + 6;
            ppppuStack_550 = (undefined8 ****)(lVar28 + (long)pppppuVar34 * 0x30);
            bVar10 = (undefined8 *****)ppppuStack_560 != (undefined8 *****)0x0;
            ppppuStack_560 = pppppuVar35;
            ppppuStack_558 = pppppuVar20;
            if (bVar10) {
              __ZdlPv();
            }
            func_0x00010b1ec26c();
          }
          ppppuStack_558 = pppppuVar20;
          FUN_10b1d8164(&lStack_3f8);
        }
        ppppuStack_1f0 = (ulong ****)CONCAT71(ppppuStack_1f0._1_7_,1);
        FUN_10b1d8228(&ppppuStack_1f8);
        func_0x00010b1ebd20(alStack_438);
        FUN_10b1d82f4(&pppuStack_3f0);
        func_0x00010b1ebd20(auStack_4f8);
        func_0x00010b1ebd20(&uStack_540);
        func_0x00010b1ebd20(auStack_478);
        func_0x00010b1ebd20(&uStack_4b8);
        ppppuStack_68 = ppppuStack_558;
        ppppuStack_70 = ppppuStack_560;
        ppppuStack_60 = ppppuStack_550;
        ppppuStack_560 = (undefined8 *****)0x0;
        ppppuStack_558 = (undefined8 *****)0x0;
        ppppuStack_550 = (undefined8 *****)0x0;
        uStack_58 = 1;
        FUN_10b1d8314(&ppppuStack_560);
        FUN_10b1d8338(auStack_5a8);
        FUN_10b1b7824(&ppppuStack_240);
        func_0x00010bccbe4c(&ppppuStack_600);
        func_0x00010bccbdb4(&ppppuStack_600);
        func_0x00010b1ee1d8();
        if ((bool)uVar8) {
          func_0x00010b1ecc04();
          uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
        }
        iStack_80 = 0;
        func_0x00010b1ed190();
        ppppuStack_70 = (undefined8 ****)((ulong)ppppuStack_70 & 0xffffffffffffff00);
        uStack_58 = 0;
        if (iStack_80 == 0) {
          func_0x00010b1ee1b0();
          if ((bool)uVar8) {
            func_0x00010b1ed644();
            ppppuStack_d0 = (ulong ****)0x0;
            ppppuStack_c8 = (ulong ****)0x0;
            ppppuStack_d8 = (ulong ****)0x0;
            cStack_338 = '\x01';
          }
        }
        else {
          if (iStack_80 != 1) {
            func_0x00010563ab98();
            goto LAB_10b1cc094;
          }
          cStack_338 = '\0';
          ppppuStack_350 = (ulong ****)((ulong)ppppuStack_350 & 0xffffffffffffff00);
        }
        func_0x00010b1ed190();
        func_0x00010b1ecb88();
        FUN_10b1d83a4();
        FUN_10b1b78d0(&ppppuStack_1b0);
        func_0x000107c279a4(&ppppuStack_168);
        if ((cStack_338 == '\x01') &&
           (pppppuVar37 = (ulong *****)CONCAT71(uStack_347,uStack_348),
           pppppuVar23 = (ulong *****)ppppuStack_350, (ulong *****)ppppuStack_350 != pppppuVar37)) {
          for (; uVar8 = pppppuVar23 == pppppuVar37, !(bool)uVar8; pppppuVar23 = pppppuVar23 + 6) {
            pppppuVar14 = pppppuVar23;
            func_0x00010549026c(pppppuVar23);
            pppppuVar19 = pppppuVar23 + 4;
            func_0x000107267f8c();
            FUN_10b1cca18(&ppppuStack_e0,pppppuVar15,pppppuVar16,pppppuVar14,ppppuVar36,
                          pppppuVar30 + 1,0,(long)*pppppuVar19 * 1000,&uStack_890,0);
            func_0x00010b1ee270();
            if ((bool)uVar8) {
              func_0x00010b1ece38(&uStack_8a8);
            }
            func_0x00010b1ebf30();
          }
        }
        FUN_10b1d8384(&ppppuStack_350);
      }
      FUN_10b1e734c(&ppppuStack_288);
      pppppuVar30 = (ulong *****)ppppuStack_280;
      pppppuVar23 = (ulong *****)ppppuStack_288;
    }
    func_0x00010b1edaa4(auStack_8f0);
    auStack_388[0] = 0;
    uStack_378 = 0;
    func_0x00010b1edc80(&ppppuStack_350);
    ppppuVar36 = (ulong ****)ppppuStack_350[1];
    pppuStack_2f8 = ppppuStack_350[2];
    pppuStack_300 = (ulong ***)ppppuVar36;
    if ((ulong ****)pppuStack_2f8 != (ulong ****)0x0) {
      do {
        func_0x00010b1eaf98();
        ppppuVar36 = extraout_x8_11;
      } while (extraout_w11_01 != 0);
    }
    FUN_10b1fb3c8(&ppppuStack_70,ppppuVar36[2],auStack_8f0);
    pppuStack_238 = (ulong ***)((ulong)pppuStack_238 & 0xffffffffffffff00);
    uStack_200 = 0;
    if (cStack_28 != '\0') {
      uStack_220 = 0;
      if (cStack_48 == '\x01') {
        func_0x00010b1ecb3c();
        uStack_220 = extraout_w8_01;
      }
      uStack_210 = uStack_38;
      uStack_218 = uStack_40;
      uStack_208 = uStack_30;
      uStack_200 = 1;
      FUN_10b1d87d8(&ppppuStack_60);
    }
    ppppuStack_240 = ppppuStack_68;
    ppppuStack_68 = (undefined8 *****)0x0;
    func_0x00010b1d8730(&ppppuStack_1f8,&ppppuStack_240);
    uStack_290 = 0;
    uStack_298 = 0;
    uStack_2a0 = 0;
    uStack_2a8 = 0;
    uStack_2b0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    lStack_2c8 = 0;
    lStack_2d0 = 0;
    func_0x00010b1d8730(&ppppuStack_288,&lStack_2d0);
    ppppuStack_2e0 = (ulong ****)0x0;
    ppppuStack_2f0 = (ulong ****)0x0;
    ppppuStack_2e8 = (ulong ****)0x0;
    FUN_10b1d897c(&ppppuStack_168,&ppppuStack_1f8);
    FUN_10b1d897c(&ppppuStack_1b0,&ppppuStack_288);
    ppppuStack_120 = (ulong ****)&ppppuStack_2f0;
    uStack_118 = 0;
    while ((((bStack_128 & 1) != 0 || ((bStack_170 & 1) != 0)) && (ppppuStack_168 != ppppuStack_1b0)
           )) {
      if ((bStack_128 & 1) == 0) {
        ppppuVar33 = (undefined8 ****)ppppuStack_168[1];
        func_0x00010b1eb9a4(auStack_110);
        func_0x00010b1eb224(auStack_f8);
        func_0x00010b1eb99c(ppppuVar33);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_f8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_110);
      }
      ppppuVar36 = ppppuStack_2e8;
      pppppuVar30 = (ulong *****)ppppuStack_2f0;
      if (ppppuStack_2e8 < ppppuStack_2e0) {
        func_0x00010b1ec934();
        if ((char)uStack_148 == '\x01') {
          func_0x00010b1ec278(uStack_150,CONCAT71(uStack_15f,uStack_160));
          func_0x00010b1ee1ec();
          *(undefined1 *)(ppppuVar36 + 3) = 1;
        }
        *(undefined1 *)(ppppuVar36 + 6) = uStack_130;
        ppppuVar36[5] = pppuStack_138;
        ppppuVar36[4] = pppuStack_140;
        pppppuVar30 = (ulong *****)(ppppuVar36 + 7);
      }
      else {
        lVar27 = (long)ppppuStack_2e8 - (long)ppppuStack_2f0;
        uVar17 = lVar27 / 0x38 + 1;
        uVar8 = 0x492492492492491 < uVar17;
        if (0x492492492492492 < uVar17) {
          FUN_10b1d8828();
          goto LAB_10b1cc094;
        }
        func_0x00010b1eb414(((long)ppppuStack_2e0 - (long)ppppuStack_2f0) / 0x38);
        func_0x00010b1ed5cc();
        uVar17 = extraout_x9_03;
        if ((bool)uVar8) {
          uVar17 = 0x492492492492492;
        }
        if (uVar17 == 0) {
          lVar28 = 0;
        }
        else {
          if (0x492492492492492 < uVar17) {
            func_0x000104bd35f4();
            goto LAB_10b1cc094;
          }
          lVar28 = uVar17 * 0x38;
          __Znwm();
        }
        puVar21 = (undefined8 *)(lVar28 + lVar27);
        *(undefined1 *)puVar21 = 0;
        *(undefined1 *)(puVar21 + 3) = 0;
        if ((char)uStack_148 == '\x01') {
          puVar21[1] = uStack_158;
          *puVar21 = CONCAT71(uStack_15f,uStack_160);
          puVar21[2] = uStack_150;
          func_0x00010b1ee1ec();
          *(undefined1 *)(puVar21 + 3) = 1;
        }
        puVar21[5] = pppuStack_138;
        puVar21[4] = pppuStack_140;
        *(undefined1 *)(puVar21 + 6) = uStack_130;
        pppppuVar23 = (ulong *****)(puVar21 + (lVar27 / -0x38) * 7);
        for (lVar27 = 0;
            bVar10 = (ulong *****)((long)pppppuVar30 + lVar27) == (ulong *****)ppppuVar36, !bVar10;
            lVar27 = lVar27 + 0x38) {
          func_0x00010b1ec378();
          lVar27 = extraout_x8_12;
          if (bVar10) {
            func_0x00010b1eb768();
            *(undefined1 *)(extraout_x10_01 + 0x18) = 1;
            lVar27 = extraout_x8_13;
          }
          uVar38 = *(undefined8 *)((long)pppppuVar30 + lVar27 + 0x28);
          uVar32 = *(undefined8 *)((long)pppppuVar30 + lVar27 + 0x20);
          *(undefined1 *)((long)pppppuVar23 + lVar27 + 0x30) =
               *(undefined1 *)((long)pppppuVar30 + lVar27 + 0x30);
          *(undefined8 *)((long)pppppuVar23 + lVar27 + 0x28) = uVar38;
          *(undefined8 *)((long)pppppuVar23 + lVar27 + 0x20) = uVar32;
        }
        for (; pppppuVar30 != (ulong *****)ppppuVar36; pppppuVar30 = pppppuVar30 + 7) {
          func_0x00010b1eddb4();
        }
        pppppuVar30 = (ulong *****)(puVar21 + 7);
        ppppuStack_2e0 = (ulong ****)(lVar28 + uVar17 * 0x38);
        bVar10 = (ulong *****)ppppuStack_2f0 != (ulong *****)0x0;
        ppppuStack_2f0 = (ulong ****)pppppuVar23;
        if (bVar10) {
          ppppuStack_2e8 = (ulong ****)pppppuVar30;
          __ZdlPv();
        }
      }
      ppppuStack_2e8 = (ulong ****)pppppuVar30;
      FUN_10b1d8834(&ppppuStack_168);
    }
    uStack_118 = 1;
    FUN_10b1d8910(&ppppuStack_120);
    func_0x00010b1ebe84(&ppppuStack_1b0);
    FUN_10b1d89e4(&uStack_160);
    func_0x00010b1ebe84(&ppppuStack_288);
    func_0x00010b1ed8b0();
    func_0x00010b1ebe84(&ppppuStack_1f8);
    func_0x00010b1ebe84(&ppppuStack_240);
    ppppuStack_368 = ppppuStack_2e8;
    ppppuStack_370 = ppppuStack_2f0;
    ppppuStack_360 = ppppuStack_2e0;
    ppppuStack_2f0 = (ulong ****)0x0;
    ppppuStack_2e8 = (ulong ****)0x0;
    ppppuStack_2e0 = (ulong ****)0x0;
    cStack_358 = '\x01';
    FUN_10b1d8a04(&ppppuStack_2f0);
    FUN_10b1d8a28(&ppppuStack_70);
    FUN_10b1b7824(&pppuStack_300);
    func_0x00010bccbe4c(&ppppuStack_350);
    func_0x00010bccbdb4(&ppppuStack_350);
    ppppuStack_d8 = (ulong ****)((ulong)ppppuStack_d8 & 0xffffffffffffff00);
    uVar17 = uStack_c0 >> 8;
    uStack_c0 = uStack_c0 & 0xffffffffffffff00;
    if (cStack_358 == '\x01') {
      ppppuStack_d0 = ppppuStack_368;
      ppppuStack_d8 = ppppuStack_370;
      ppppuStack_c8 = ppppuStack_360;
      ppppuStack_360 = (ulong ****)0x0;
      ppppuStack_368 = (ulong ****)0x0;
      ppppuStack_370 = (ulong ****)0x0;
      uStack_c0 = CONCAT71((int7)uVar17,1);
    }
    iStack_80 = 0;
    func_0x00010b1ed250();
    ppppuStack_370 = (ulong ****)((ulong)ppppuStack_370 & 0xffffffffffffff00);
    cStack_358 = 0;
    if (iStack_80 == 0) {
      ppppuStack_8d0 = (ulong ****)((ulong)ppppuStack_8d0._1_7_ << 8);
      cStack_8b8 = '\0';
      if ((char)uStack_c0 == '\x01') {
        ppppuStack_8c8 = ppppuStack_d0;
        ppppuStack_8d0 = ppppuStack_d8;
        ppppuStack_8c0 = ppppuStack_c8;
        func_0x00010b1ee19c();
        cStack_8b8 = extraout_w8_02;
      }
    }
    else {
      if (iStack_80 != 1) {
        func_0x00010563ab98();
        goto LAB_10b1cc094;
      }
      ppppuStack_8d0 = (ulong ****)((ulong)ppppuStack_8d0._1_7_ << 8);
      cStack_8b8 = '\0';
    }
    func_0x00010b1ed250();
    func_0x00010b1ecb88();
    FUN_10b1d8aa0();
    FUN_10b1b78d0(auStack_388);
    func_0x00010b1ec510();
    ppppuVar36 = ppppuStack_8c8;
    uVar8 = 0;
    if (cStack_8b8 == '\x01') {
      pppppuVar30 = (ulong *****)(ppppuStack_8d0 + 5);
      while( true ) {
        pppppuVar23 = pppppuVar30 + -5;
        uVar11 = pppppuVar23 == (ulong *****)ppppuVar36;
        uVar8 = 1;
        if ((bool)uVar11) break;
        ppppuStack_e0 = (ulong ****)(ulong)*(uint *)(pppppuVar30 + -1);
        pppppuVar37 = pppppuVar13 + 0xc;
        pppppuVar19 = &ppppuStack_e0;
        FUN_10b1cd0e4();
        if ((pppppuVar37 == (ulong *****)0x0) ||
           (uVar11 = *(int *)((long)pppppuVar19 + 0x54) == 0, *(int *)((long)pppppuVar19 + 0x54) < 1
           )) {
          func_0x00010549026c(pppppuVar23);
          if ((*(byte *)((long)pppppuVar30 + -4) & 1) == 0) {
            func_0x000104bdc2c8();
            goto LAB_10b1cc094;
          }
          iVar26 = *(int *)(pppppuVar30 + -1);
          pppppuVar37 = pppppuVar13;
          FUN_10b1231f8(pppppuVar13,iVar26);
          pppppuVar19 = pppppuVar30;
          func_0x000107267f8c();
          FUN_10b1cca18(&ppppuStack_e0,pppppuVar15,pppppuVar16,pppppuVar23,iVar26,pppppuVar37,
                        (long)*pppppuVar19 * 1000,0,&uStack_890,0);
          func_0x00010b1ee270();
          if ((bool)uVar11) {
            func_0x00010b1ece38(&uStack_8a8);
          }
          func_0x00010b1ebf30();
        }
        pppppuVar30 = pppppuVar30 + 7;
      }
    }
    FUN_10b1cd118(pppppuVar15,&uStack_8a8,3);
    FUN_10b1cc598(pppppuVar15,pppppuVar16,pppppuVar12);
    FUN_10b1d8a80(&ppppuStack_8d0);
    func_0x00010b128754(&uStack_8a8);
    FUN_10b1b78fc(&uStack_890);
  }
  else {
    uVar8 = pppppuVar12 == (ulong *****)pppppuVar15[0x98];
    if ((long)pppppuVar15[0x98] <= (long)pppppuVar12) {
      pppppuVar15[0x98] = (ulong ****)(pppppuVar12 + (long)pppppuVar15[0x51] * 0x7d);
      goto LAB_10b1caedc;
    }
  }
  bVar25 = 1;
LAB_10b1cc02c:
  func_0x00010b1eadc4();
  if ((bool)uVar8) {
    return bVar25;
  }
  ___stack_chk_fail();
LAB_10b1cc078:
  func_0x000104bd35f4();
LAB_10b1cc094:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10b1cc098);
  (*pcVar6)();
LAB_10b1caa78:
  pppppuVar14 = pppppuVar19 + -4;
  if (pppppuVar14 == pppppuVar23) goto LAB_10b1cad9c;
  if ((pppppuVar19[-3] != (ulong ****)0x0) && (0 < *(int *)((long)pppppuVar19[-3] + 0x4c))) {
    pppppuVar37 = (ulong *****)0x0;
    unaff_x26 = (ulong *****)((lVar27 >> 5) + 1);
    ppppuStack_d8 = (ulong ****)0x0;
    ppppuStack_e0 = (ulong ****)0x0;
    if (lVar27 >> 5 < 3) goto LAB_10b1cad70;
    pppppuVar37 = unaff_x26;
    if ((ulong *****)0x3fffffffffffffe < unaff_x26) {
      pppppuVar37 = (ulong *****)0x3ffffffffffffff;
    }
    if (pppppuVar37 == (ulong *****)0x0) goto LAB_10b1cacbc;
    goto LAB_10b1caca0;
  }
  lVar27 = lVar27 + -0x20;
  pppppuVar19 = pppppuVar14;
  goto LAB_10b1caa78;
  while (pppppuVar37 = (ulong *****)((ulong)pppppuVar37 >> 1), pppppuVar37 != (ulong *****)0x0) {
LAB_10b1caca0:
    lVar27 = (long)pppppuVar37 << 5;
    __ZnwmRKSt9nothrow_t(lVar27,PTR___ZSt7nothrow_1103469d8);
    if (lVar27 != 0) goto LAB_10b1cad54;
  }
LAB_10b1cacbc:
  lVar27 = 0;
LAB_10b1cad54:
  uStack_818 = 0;
  ppppuStack_810 = (ulong ****)pppppuVar37;
  FUN_10b1e7798(&ppppuStack_e0,lVar27);
  ppppuStack_d8 = (ulong ****)pppppuVar37;
  FUN_10b1e7470(&uStack_818);
LAB_10b1cad70:
  FUN_10b1e7490(pppppuVar23,pppppuVar14,unaff_x26,ppppuStack_e0,pppppuVar37);
  FUN_10b1e7470(&ppppuStack_e0);
  pppppuVar37 = (ulong *****)ppppuStack_288;
LAB_10b1cad9c:
  for (; ppppuVar36 = ppppuStack_280, pppppuVar23 = (ulong *****)ppppuStack_288,
      pppppuVar37 != (ulong *****)ppppuStack_280; pppppuVar37 = pppppuVar37 + 1) {
    (*pppppuVar37)[6] = (ulong ***)pppppuVar13;
  }
  FUN_10b1cd2ac(pppppuVar30[0x47],uStack_158,&ppppuStack_288);
  for (; pppppuVar23 != (ulong *****)ppppuVar36; pppppuVar23 = pppppuVar23 + 1) {
    (*pppppuVar23)[6] = (ulong ***)0x0;
  }
  uStack_c0 = 0;
  ppppuStack_c8 = (ulong ****)0x0;
  ppppuStack_d0 = (ulong ****)0x0;
  ppppuStack_d8 = (ulong ****)0x0;
  ppppuStack_e0 = (ulong ****)0x0;
  FUN_10b1be194(&ppppuStack_168,&ppppuStack_e0);
  func_0x00010b1d3e60(&ppppuStack_e0);
  ppppuVar36 = ppppuStack_1f0;
  for (pppppuVar23 = (ulong *****)ppppuStack_1f8; uVar8 = pppppuVar23 == (ulong *****)ppppuVar36,
      !(bool)uVar8; pppppuVar23 = pppppuVar23 + 4) {
    FUN_10b1cca18(&ppppuStack_e0,pppppuVar30,pppppuVar16,&ppppuStack_240,*(int *)pppppuVar23,
                  pppppuVar23[1],pppppuVar23[2],pppppuVar23[3],&ppppuStack_600,
                  CONCAT11((char)uVar18,1));
    func_0x00010b1ee270();
    if ((bool)uVar8) {
      func_0x00010b1ece38(&lStack_2d0);
    }
    func_0x00010b1ebf30();
  }
  if (((uVar18 & 1) == 0) || (uVar8 = *(char *)(pppppuVar30 + 0xc6) == '\x01', !(bool)uVar8)) {
    func_0x00010b1eda7c();
    func_0x00010b1edb5c();
    func_0x00010b1ece7c();
    func_0x00010b1edbb4();
    func_0x00010b1eda10();
    pppppuVar23 = pppppuVar16;
LAB_10b1ca3d8:
    func_0x00010b1eca08();
LAB_10b1ca3dc:
    FUN_10b1e77b0(&ppppuStack_350);
    goto LAB_10b1ca374;
  }
  ppppuVar36 = pppppuVar30[0xbe];
  func_0x00010b1eda7c();
  func_0x00010b1edb5c();
  func_0x00010b1ece7c();
  func_0x00010b1edbb4();
  func_0x00010b1eda10();
  pppppuVar23 = pppppuVar16;
  if (((ulong)ppppuVar36 & 1) == 0) goto LAB_10b1ca3d8;
  func_0x00010b1eca08();
  bVar10 = true;
LAB_10b1cbf54:
  FUN_10b1d8c84(&uStack_348);
  func_0x00010b1eba88(&ppppuStack_70);
  if ((bVar10) && (ppppuVar36 = pppppuVar30[0x47], ppppuVar36 != (ulong ****)0x0)) {
    func_0x00010b1ec990(&ppppuStack_e0,"phase");
    func_0x00010b1eb654(&ppppuStack_70,&ppppuStack_e0);
    func_0x00010b1eb5b4(ppppuVar36,0xda,&ppppuStack_70);
    func_0x00010b1ecab0();
    func_0x00010b1eb5ac(&ppppuStack_e0);
  }
  uVar8 = lStack_2d0 == lStack_2c8;
  if (!(bool)uVar8) {
    FUN_10b1cd118(pppppuVar30,&lStack_2d0,3);
  }
  bVar25 = bVar10 ^ 1;
  func_0x00010b128754(&lStack_2d0);
  if ((uVar18 == 0) || (((ulong)pppppuVar30[0xbe] & 1) == 0)) {
    ppppuVar36 = pppppuVar30[0x51];
    uVar8 = ppppuVar36 == (ulong ****)0x1;
    if (0 < (long)ppppuVar36) {
      uVar8 = pppppuVar12 == (ulong *****)pppppuVar30[0x98];
      if ((long)pppppuVar12 < (long)pppppuVar30[0x98]) goto LAB_10b1cc02c;
      pppppuVar30[0x98] = (ulong ****)(pppppuVar12 + (long)ppppuVar36 * 0x7d);
    }
    func_0x00010b1ed7dc();
    FUN_10b1cc598();
  }
  goto LAB_10b1cc02c;
LAB_10b1ca774:
  while (pppppuVar19 = pppppuVar19 + 1, pppppuVar19 != pppppuVar13) {
    if ((*pppppuVar19)[6] != (ulong ***)0x0) {
      *pppppuVar23 = *pppppuVar19;
      pppppuVar23 = pppppuVar23 + 1;
    }
  }
  uVar8 = pppppuVar23 == pppppuVar13;
  if (!(bool)uVar8) {
    pppppuVar13 = pppppuVar23;
  }
LAB_10b1ca79c:
  pppppuVar23 = (ulong *****)ppppuStack_1f8;
  if (ppppuVar36[6] == (ulong ***)0x0) {
    for (; uVar8 = pppppuVar23 == (ulong *****)ppppuStack_1f0, !(bool)uVar8;
        pppppuVar23 = (ulong *****)((long)pppppuVar23 + 4)) {
      pppppuVar19 = pppppuVar23;
      if (*(int *)pppppuVar23 == iVar26) goto LAB_10b1ca840;
    }
  }
LAB_10b1ca7a4:
  ppppuVar36 = pppppuVar30[0x47];
  FUN_10b12983c(&ppppuStack_e0,iVar26);
  FUN_10b1edaec(pppppuVar37);
  func_0x00010b123dbc(auStack_b8,&UNK_10f731bc3,0xf);
  func_0x00010b1eb930(&ppppuStack_240,&ppppuStack_e0);
  func_0x00010b1eb5b4(ppppuVar36,0xdb,&ppppuStack_240);
  lVar28 = (long)pppppuVar37 + lVar28;
  func_0x00010b1ece9c();
  pppppuVar30 = (ulong *****)0x38;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_a8);
    func_0x00010b1ee484();
  } while (!(bool)uVar8);
  func_0x00010b1ece40();
  pppppuVar23 = pppppuVar37;
LAB_10b1ca80c:
  lVar27 = lVar27 + 4;
  goto LAB_10b1ca6d4;
LAB_10b1ca840:
  while (pppppuVar23 = (ulong *****)((long)pppppuVar23 + 4),
        pppppuVar23 != (ulong *****)ppppuStack_1f0) {
    if (*(int *)pppppuVar23 != iVar26) {
      *(int *)pppppuVar19 = *(int *)pppppuVar23;
      pppppuVar19 = (ulong *****)((long)pppppuVar19 + 4);
    }
  }
  uVar8 = pppppuVar19 == (ulong *****)ppppuStack_1f0;
  if (!(bool)uVar8) {
    uVar8 = true;
    ppppuStack_1f0 = (ulong ****)pppppuVar19;
  }
  goto LAB_10b1ca7a4;
}



/* Entry: 10b1e7230; end: 10b1e725b;  */

void FUN_10b1e7230(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x00010b1eb938();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b1e725c; end: 10b1e7277;  */

void FUN_10b1e725c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b1e7278; end: 10b1e72a3;  */

void FUN_10b1e7278(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x00010b1eb938();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b1e72a4; end: 10b1e72c7;  */

void FUN_10b1e72a4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b1e72c8; end: 10b1e72f3;  */

undefined1  [16] FUN_10b1e72c8(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = param_1[1];
  uStack_20 = *param_1;
  FUN_10b1e72f4(&uStack_20);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Entry: 10b1e72f4; end: 10b1e734b;  */

void FUN_10b1e72f4(long *param_1)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  pcVar1 = (char *)*param_1;
  while (*pcVar1 < -1) {
    uVar3 = *(undefined8 *)pcVar1;
    uVar2 = CONCAT17(-(-2 < (char)((ulong)uVar3 >> 0x38)),
                     CONCAT16(-(-2 < (char)((ulong)uVar3 >> 0x30)),
                              CONCAT15(-(-2 < (char)((ulong)uVar3 >> 0x28)),
                                       CONCAT14(-(-2 < (char)((ulong)uVar3 >> 0x20)),
                                                CONCAT13(-(-2 < (char)((ulong)uVar3 >> 0x18)),
                                                         CONCAT12(-(-2 < (char)((ulong)uVar3 >> 0x10
                                                                               )),
                                                                  CONCAT11(-(-2 < (char)((ulong)
                                                  uVar3 >> 8)),-(-2 < (char)uVar3))))))));
    uVar2 = (uVar2 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar2 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar2 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20);
    pcVar1 = pcVar1 + (uVar2 >> 3);
    *param_1 = (long)pcVar1;
    param_1[1] = param_1[1] + (uVar2 >> 3) * 0x68;
  }
  if (*pcVar1 != -1) {
    return;
  }
  *param_1 = 0;
  return;
}



/* Entry: 10b1e734c; end: 10b1e737f;  */

long * FUN_10b1e734c(long *param_1)

{
  param_1[1] = param_1[1] + 0x68;
  *param_1 = *param_1 + 1;
  FUN_10b1e72f4();
  return param_1;
}



/* Entry: 10b1e7380; end: 10b1e746f;  */

long FUN_10b1e7380(ulong *param_1,int *param_2,ulong param_3)

{
  int *piVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  undefined8 uVar9;
  byte bVar15;
  
  lVar2 = 0;
  uVar3 = *param_1;
  uVar5 = uVar3 >> 0xc ^ param_3 >> 7;
  bVar4 = (byte)param_3 & 0x7f;
  while( true ) {
    uVar5 = uVar5 & param_1[2];
    uVar9 = *(undefined8 *)(uVar3 + uVar5);
    bVar8 = (byte)((ulong)uVar9 >> 8);
    bVar10 = (byte)((ulong)uVar9 >> 0x10);
    bVar11 = (byte)((ulong)uVar9 >> 0x18);
    bVar12 = (byte)((ulong)uVar9 >> 0x20);
    bVar13 = (byte)((ulong)uVar9 >> 0x28);
    bVar14 = (byte)((ulong)uVar9 >> 0x30);
    bVar15 = (byte)((ulong)uVar9 >> 0x38);
    for (uVar6 = CONCAT17(-(bVar15 == bVar4),
                          CONCAT16(-(bVar14 == bVar4),
                                   CONCAT15(-(bVar13 == bVar4),
                                            CONCAT14(-(bVar12 == bVar4),
                                                     CONCAT13(-(bVar11 == bVar4),
                                                              CONCAT12(-(bVar10 == bVar4),
                                                                       CONCAT11(-(bVar8 == bVar4),
                                                                                -((byte)uVar9 ==
                                                                                 bVar4)))))))) &
                 0x8080808080808080; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
      uVar7 = (uVar6 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar6 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar5 + ((ulong)LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) >> 3) & param_1[2];
      piVar1 = (int *)(param_1[1] + uVar7 * 0x68);
      if (*piVar1 == *param_2 && piVar1[1] == param_2[1]) {
        return uVar3 + uVar7;
      }
    }
    bVar8 = NEON_umaxv(CONCAT17(-(bVar15 == 0x80),
                                CONCAT16(-(bVar14 == 0x80),
                                         CONCAT15(-(bVar13 == 0x80),
                                                  CONCAT14(-(bVar12 == 0x80),
                                                           CONCAT13(-(bVar11 == 0x80),
                                                                    CONCAT12(-(bVar10 == 0x80),
                                                                             CONCAT11(-(bVar8 == 
                                                  0x80),-((byte)uVar9 == 0x80)))))))),1);
    if ((bVar8 & 1) != 0) break;
    lVar2 = lVar2 + 8;
    uVar5 = lVar2 + uVar5;
  }
  return 0;
}



/* Entry: 10b1e7470; end: 10b1e748f;  */

void FUN_10b1e7470(void)

{
  func_0x000107c35104();
  FUN_10b1e7798();
  return;
}



/* Entry: 10b1e7490; end: 10b1e7797;  */

undefined8 *
FUN_10b1e7490(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4,long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *unaff_x19;
  undefined8 *unaff_x21;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  func_0x00010b1ebbb0();
  if (param_3 == 3) {
    puVar3 = unaff_x19 + 4;
    if ((unaff_x19[5] == 0) || (*(int *)(unaff_x19[5] + 0x4c) < 1)) {
      uVar17 = unaff_x19[5];
      uVar15 = *puVar3;
      uVar14 = unaff_x19[7];
      uVar12 = unaff_x19[6];
      uVar18 = *unaff_x21;
      uVar16 = unaff_x21[3];
      uVar13 = unaff_x21[2];
      unaff_x19[5] = unaff_x21[1];
      *puVar3 = uVar18;
      unaff_x19[7] = uVar16;
      unaff_x19[6] = uVar13;
      unaff_x21[1] = uVar17;
      *unaff_x21 = uVar15;
      unaff_x21[3] = uVar14;
      unaff_x21[2] = uVar12;
      func_0x00010b1ee3cc();
      return puVar3;
    }
    func_0x00010b1ee3cc();
    uVar17 = unaff_x19[5];
    uVar15 = *puVar3;
    uVar14 = unaff_x19[7];
    uVar12 = unaff_x19[6];
    uVar18 = *unaff_x21;
    uVar16 = unaff_x21[3];
    uVar13 = unaff_x21[2];
    unaff_x19[5] = unaff_x21[1];
    *puVar3 = uVar18;
    unaff_x19[7] = uVar16;
    unaff_x19[6] = uVar13;
  }
  else {
    if (param_3 != 2) {
      if (param_3 <= param_5) {
        uVar12 = *unaff_x19;
        uVar15 = unaff_x19[3];
        uVar14 = unaff_x19[2];
        param_4[1] = unaff_x19[1];
        *param_4 = uVar12;
        param_4[3] = uVar15;
        param_4[2] = uVar14;
        puVar3 = param_4 + 4;
        puVar1 = unaff_x19;
        while (puVar6 = unaff_x19 + 4, puVar6 != unaff_x21) {
          if ((unaff_x19[5] == 0) || (*(int *)(unaff_x19[5] + 0x4c) < 1)) {
            uVar12 = *puVar6;
            uVar15 = unaff_x19[7];
            uVar14 = unaff_x19[6];
            puVar3[1] = unaff_x19[5];
            *puVar3 = uVar12;
            puVar3[3] = uVar15;
            puVar3[2] = uVar14;
            puVar3 = puVar3 + 4;
            unaff_x19 = puVar6;
          }
          else {
            uVar12 = *puVar6;
            uVar15 = unaff_x19[7];
            uVar14 = unaff_x19[6];
            puVar1[1] = unaff_x19[5];
            *puVar1 = uVar12;
            puVar1[3] = uVar15;
            puVar1[2] = uVar14;
            unaff_x19 = puVar6;
            puVar1 = puVar1 + 4;
          }
        }
        uVar12 = *puVar6;
        uVar15 = unaff_x19[7];
        uVar14 = unaff_x19[6];
        puVar1[1] = unaff_x19[5];
        *puVar1 = uVar12;
        puVar1[3] = uVar15;
        puVar1[2] = uVar14;
        puVar6 = puVar1 + 4;
        for (; param_4 < puVar3; param_4 = param_4 + 4) {
          uVar12 = *param_4;
          uVar15 = param_4[3];
          uVar14 = param_4[2];
          puVar6[1] = param_4[1];
          *puVar6 = uVar12;
          puVar6[3] = uVar15;
          puVar6[2] = uVar14;
          puVar6 = puVar6 + 4;
        }
        return puVar1 + 4;
      }
      puVar3 = unaff_x19 + (param_3 / 2) * 4;
      lVar2 = param_3 / 2 << 5;
      do {
        lVar5 = *(long *)((long)unaff_x19 + lVar2 + -0x18);
        if ((lVar5 != 0) && (0 < *(int *)(lVar5 + 0x4c))) {
          func_0x00010b1ed938();
          break;
        }
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
      puVar1 = puVar3;
      while ((puVar1[1] != 0 && (0 < *(int *)(puVar1[1] + 0x4c)))) {
        puVar1 = puVar1 + 4;
        puVar6 = unaff_x21 + 4;
        if (puVar1 == unaff_x21) {
LAB_10b1e7630:
          if (unaff_x19 == puVar3) {
            return puVar6;
          }
          if (puVar3 == puVar6) {
            return unaff_x19;
          }
          if (unaff_x19 + 4 == puVar3) {
            uVar14 = unaff_x19[1];
            uVar12 = *unaff_x19;
            uVar17 = unaff_x19[3];
            uVar15 = unaff_x19[2];
            _memmove(unaff_x19,unaff_x19 + 4,(long)puVar6 - (long)puVar3);
            puVar3 = (undefined8 *)((long)unaff_x19 + ((long)puVar6 - (long)puVar3));
            puVar3[1] = uVar14;
            *puVar3 = uVar12;
            puVar3[3] = uVar17;
            puVar3[2] = uVar15;
            return puVar3;
          }
          if (puVar3 + 4 != puVar6) {
            lVar4 = (long)puVar3 - (long)unaff_x19;
            lVar7 = lVar4 >> 5;
            lVar2 = (long)puVar6 - (long)puVar3 >> 5;
            puVar1 = puVar3;
            lVar5 = lVar7;
            if (lVar7 == lVar2) {
              for (; unaff_x19 != puVar3 && puVar1 != puVar6; unaff_x19 = unaff_x19 + 4) {
                uVar17 = unaff_x19[1];
                uVar15 = *unaff_x19;
                uVar14 = unaff_x19[3];
                uVar12 = unaff_x19[2];
                uVar18 = *puVar1;
                uVar16 = puVar1[3];
                uVar13 = puVar1[2];
                unaff_x19[1] = puVar1[1];
                *unaff_x19 = uVar18;
                unaff_x19[3] = uVar16;
                unaff_x19[2] = uVar13;
                puVar1[1] = uVar17;
                *puVar1 = uVar15;
                puVar1[3] = uVar14;
                puVar1[2] = uVar12;
                puVar1 = puVar1 + 4;
              }
              return puVar3;
            }
            do {
              lVar8 = lVar2;
              lVar2 = 0;
              if (lVar8 != 0) {
                lVar2 = lVar5 / lVar8;
              }
              lVar2 = lVar5 - lVar2 * lVar8;
              lVar5 = lVar8;
            } while (lVar2 != 0);
            puVar1 = unaff_x19 + lVar8 * 4;
            while (puVar1 != unaff_x19) {
              puVar9 = puVar1 + -4;
              uVar14 = puVar1[-3];
              uVar12 = puVar1[-4];
              uVar17 = puVar1[-1];
              uVar15 = puVar1[-2];
              puVar10 = puVar9;
              puVar1 = (undefined8 *)(lVar4 + (long)puVar9);
              do {
                puVar11 = puVar1;
                uVar13 = *puVar11;
                uVar18 = puVar11[3];
                uVar16 = puVar11[2];
                puVar10[1] = puVar11[1];
                *puVar10 = uVar13;
                puVar10[3] = uVar18;
                puVar10[2] = uVar16;
                lVar2 = (long)puVar6 - (long)puVar11 >> 5;
                puVar1 = (undefined8 *)((long)puVar11 + lVar4);
                if (lVar2 <= lVar7) {
                  puVar1 = unaff_x19 + (lVar7 - lVar2) * 4;
                }
                puVar10 = puVar11;
              } while (puVar1 != puVar9);
              puVar11[1] = uVar14;
              *puVar11 = uVar12;
              puVar11[3] = uVar17;
              puVar11[2] = uVar15;
              puVar1 = puVar9;
            }
            return (undefined8 *)((long)unaff_x19 + ((long)puVar6 - (long)puVar3));
          }
          uVar14 = puVar6[-3];
          uVar12 = puVar6[-4];
          uVar17 = puVar6[-1];
          uVar15 = puVar6[-2];
          if (puVar6 + -4 != unaff_x19) {
            func_0x00010b1ebdbc();
            _memmove();
          }
          unaff_x19[1] = uVar14;
          *unaff_x19 = uVar12;
          unaff_x19[3] = uVar17;
          unaff_x19[2] = uVar15;
          return (undefined8 *)((long)puVar6 - ((long)(puVar6 + -4) - (long)unaff_x19));
        }
      }
      func_0x00010b1ed938();
      puVar6 = puVar1;
      goto LAB_10b1e7630;
    }
    uVar17 = unaff_x19[1];
    uVar15 = *unaff_x19;
    uVar14 = unaff_x19[3];
    uVar12 = unaff_x19[2];
    uVar18 = *unaff_x21;
    uVar16 = unaff_x21[3];
    uVar13 = unaff_x21[2];
    unaff_x19[1] = unaff_x21[1];
    *unaff_x19 = uVar18;
    unaff_x19[3] = uVar16;
    unaff_x19[2] = uVar13;
  }
  unaff_x21[1] = uVar17;
  *unaff_x21 = uVar15;
  unaff_x21[3] = uVar14;
  unaff_x21[2] = uVar12;
  return unaff_x21;
}



/* Entry: 10b1e7798; end: 10b1e77af;  */

void FUN_10b1e7798(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1e77b0; end: 10b1e786f;  */

void FUN_10b1e77b0(void)

{
  char cVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x9;
  long unaff_x19;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  char cStack_28;
  
  func_0x00010b1eb65c();
  func_0x00010b1eda84();
  cVar1 = *(char *)(unaff_x19 + 0x28);
  if (cVar1 == cStack_28) {
    if (cVar1 != '\0') {
      func_0x000107c27b9c(unaff_x19 + 8,&uStack_48);
      *(undefined8 *)(unaff_x19 + 0x20) = uStack_30;
    }
  }
  else if (cVar1 == '\0') {
    *(undefined8 *)(unaff_x19 + 0x10) = uStack_40;
    *(undefined8 *)(unaff_x19 + 8) = uStack_48;
    func_0x00010b1ed800(uStack_38);
    *(undefined8 *)(unaff_x19 + 0x18) = extraout_x8;
    *(undefined8 *)(unaff_x19 + 0x20) = extraout_x9;
    func_0x00010b1ec94c();
  }
  else {
    func_0x00010b1eb938();
    *(undefined1 *)(unaff_x19 + 0x28) = 0;
  }
  FUN_10b1d8c84(&uStack_48);
  return;
}



/* Entry: 10b1e7870; end: 10b1e7883;  */

void FUN_10b1e7870(void)

{
  return;
}



/* Entry: 10b1e7884; end: 10b1e7897;  */

void FUN_10b1e7884(void)

{
  FUN_10b1e78c8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1e7898; end: 10b1e78c7;  */

void FUN_10b1e7898(long param_1)

{
  func_0x000107c281bc(param_1 + 0x70);
  FUN_10b125080(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__115recursive_mutexD1Ev_110346598)(param_1 + 0x18);
  return;
}



/* Entry: 10b1e78c8; end: 10b1e78d7;  */

void FUN_10b1e78c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1e78d8; end: 10b1e7a7b;  */

void FUN_10b1e78d8(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_3 != 0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10 != 0);
    do {
      func_0x00010b1eb124();
    } while (extraout_w10_00 != 0);
  }
  puVar2 = (undefined8 *)*param_1;
  uStack_68 = param_2;
  lStack_60 = param_3;
  func_0x00010b1edce4();
  FUN_10b12d50c(&uStack_68);
  FUN_10b124fa8(*param_1 + 0x40);
  lVar1 = *param_1;
  puVar3 = *(undefined8 **)(lVar1 + 0x58);
  uStack_48 = *(undefined8 *)(lVar1 + 0x68);
  uStack_50 = *(undefined8 *)(lVar1 + 0x60);
  *(undefined8 *)(lVar1 + 0x60) = 0;
  *(undefined8 *)(lVar1 + 0x68) = 0;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  puStack_58 = puVar3;
  func_0x00010b1ec5c0();
  func_0x00010b1ee56c();
  for (; puVar3 != puVar2; puVar3 = puVar3 + 1) {
    (**(code **)*puVar3)();
  }
  func_0x00010b1ed270();
  func_0x000107c27b58(&uStack_68);
  func_0x00010b1ed28c();
  func_0x000107c27b68(param_1[2]);
  return;
}



/* Entry: 10b1e7a7c; end: 10b1e7a7f;  */

undefined8 * FUN_10b1e7a7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc4660;
  func_0x00010b1e7b04(param_1 + 1);
  return param_1;
}



/* Entry: 10b1e7a80; end: 10b1e7a93;  */

void FUN_10b1e7a80(void)

{
  FUN_10b1e7ad8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1e7a94; end: 10b1e7ad7;  */

void FUN_10b1e7a94(long param_1,undefined8 param_2,long param_3)

{
  int extraout_w10;
  
  func_0x00010b1ee38c();
  if (param_3 != 0) {
    do {
      func_0x00010b1eb124();
    } while (extraout_w10 != 0);
  }
  FUN_10b1e78d8(param_1 + 8);
  func_0x00010b1ec7ac();
  return;
}



/* Entry: 10b1e7ad8; end: 10b1e7b27;  */

undefined8 * FUN_10b1e7ad8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cc4660;
  func_0x00010b1e7b04(param_1 + 1);
  return param_1;
}



/* Entry: 10b1e7b28; end: 10b1e7c2f;  */

void FUN_10b1e7b28(long param_1)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 extraout_x8;
  long unaff_x19;
  long lVar3;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [40];
  undefined1 auStack_60 [40];
  undefined8 uStack_38;
  
  func_0x00010b1eae28();
  plVar2 = *(long **)(param_1 + 0x18);
  uStack_38 = extraout_x8;
  if (0 < **(long **)(param_1 + 0x10)) {
    lVar3 = plVar2[0x47];
    func_0x00010b1eb1fc(auStack_88);
    func_0x00010b1ec188(auStack_60);
    func_0x00010b1eb930(auStack_a0,auStack_88);
    func_0x00010b1eb5b4(lVar3,0x99,auStack_a0);
    func_0x00010b1ebff4();
    lVar3 = 0x38;
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_88 + lVar3);
      lVar3 = lVar3 + -0x28;
    } while (lVar3 != -0x18);
  }
  (**(code **)(*plVar2 + 0x18))();
  uVar1 = plVar2 == (long *)**(undefined8 **)(unaff_x19 + 0x20);
  func_0x00010b1eaddc(uStack_38,(long)plVar2 <= (long)**(undefined8 **)(unaff_x19 + 0x20));
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1eb5a0();
  FUN_10b120998();
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
    func_0x00010b1ec0a4();
  } while (!(bool)uVar1);
  func_0x00010b1eb590();
  return;
}



/* Entry: 10b1e7c30; end: 10b1e7c53;  */

void FUN_10b1e7c30(void)

{
  return;
}



/* Entry: 10b1e7c54; end: 10b1e7cf7;  */

void FUN_10b1e7c54(long param_1)

{
  undefined8 *puVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined8 extraout_x8;
  long unaff_x19;
  undefined1 auStack_70 [24];
  code *pcStack_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  func_0x00010b1eae28();
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  pcStack_58 = FUN_10b1e7b28;
  ppuStack_50 = &PTR_FUN_110cc4690;
  uStack_38 = puVar1[2];
  uStack_40 = puVar1[1];
  uStack_48 = *puVar1;
  uStack_28 = extraout_x8;
  func_0x00010b1edf68(auStack_70,*(undefined8 *)(param_1 + 0x20),&pcStack_58);
  FUN_10b1d9314(*(undefined8 *)(unaff_x19 + 0x18),auStack_70);
  func_0x00010b128754(auStack_70);
  func_0x00010b1eb150(ppuStack_50);
  lVar2 = unaff_x19 + 0x10;
  __ZNSt3__17promiseIvE9set_valueEv(lVar2);
  func_0x00010b1eaddc(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b1eb590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd61c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__17promiseIvED1Ev_1103468b8)(lVar2 + 8);
  return;
}



/* Entry: 10b1e7cf8; end: 10b1e7d3f;  */

void FUN_10b1e7cf8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd61c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__17promiseIvED1Ev_1103468b8)(param_1 + 8);
  return;
}



/* Entry: 10b1e7d40; end: 10b1e7db3;  */

void FUN_10b1e7d40(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x00010b1eb558();
  if (unaff_x20 != 0) {
    func_0x00010b1ec8c8();
    if ((bool)in_ZR) {
      func_0x00010b1e7d74(unaff_x20 + 0x10);
    }
    func_0x00010b1eb70c();
  }
  return;
}



/* Entry: 10b1e7db4; end: 10b1e7dfb;  */

long FUN_10b1e7db4(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  
  lVar2 = param_1;
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != 0) {
    func_0x00010b1ed74c();
    func_0x00010b1e7d74();
    func_0x00010b1eb70c();
    lVar1 = unaff_x21;
  }
  func_0x00010b1ebc2c();
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b1e7dfc; end: 10b1e7e13;  */

void FUN_10b1e7dfc(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1e7e14; end: 10b1e7e37;  */

void FUN_10b1e7e14(long param_1)

{
  func_0x00010b1eb114();
  if (param_1 != 0) {
    __ZdlPv();
  }
  return;
}



/* Entry: 10b1e7e38; end: 10b1e80a3;  */

undefined1  [16] FUN_10b1e7e38(long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar6;
  long extraout_x8_06;
  ulong extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  ulong uVar7;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  long extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  ulong uVar8;
  long *extraout_x10;
  long *plVar9;
  long *extraout_x10_00;
  ulong extraout_x10_01;
  long extraout_x11;
  ulong extraout_x11_00;
  ulong extraout_x11_01;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x24;
  undefined1 auVar10 [16];
  
  func_0x00010b1ed2f4();
  func_0x00010b1ed594();
  if (unaff_x24 != 0) {
    func_0x00010b1ec098();
    if ((bool)in_ZR) {
      unaff_x21 = extraout_x8 & unaff_x22;
      in_ZR = true;
    }
    else {
      in_NG = (long)(unaff_x24 - unaff_x22) < 0;
      in_ZR = unaff_x24 == unaff_x22;
      unaff_x21 = unaff_x22;
      if (unaff_x24 <= unaff_x22) {
        uVar8 = 0;
        if (unaff_x24 != 0) {
          uVar8 = unaff_x22 / unaff_x24;
        }
        unaff_x21 = unaff_x22 - uVar8 * unaff_x24;
      }
    }
    func_0x00010b1ee190();
    uVar8 = extraout_x8_00;
    if (unaff_x20 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (long *)*unaff_x20;
          if (unaff_x20 == (long *)0x0) goto LAB_10b1e7ecc;
          uVar7 = unaff_x20[1];
          if (uVar7 != unaff_x22) break;
          in_NG = (int)unaff_x20[2] - (int)unaff_x22 < 0;
          in_ZR = 0;
          if ((int)unaff_x20[2] == (int)unaff_x22) {
            uVar5 = 0;
            goto LAB_10b1e8084;
          }
        }
        if ((unaff_x24 & uVar8) == 0) {
          uVar7 = uVar7 & uVar8;
        }
        else if (unaff_x24 <= uVar7) {
          func_0x00010b1ec08c();
          uVar8 = extraout_x8_01;
          uVar7 = extraout_x9;
        }
        in_NG = (long)(uVar7 - unaff_x21) < 0;
        in_ZR = uVar7 == unaff_x21;
      } while ((bool)in_ZR);
    }
  }
LAB_10b1e7ecc:
  plVar1 = (long *)(unaff_x19 + 0x10);
  func_0x00010b1ec004();
  func_0x00010b1eb61c();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  func_0x00010b1eb0f0();
  if ((unaff_x24 != 0) && (func_0x00010b1eb5ec(), !(bool)in_NG)) goto LAB_10b1e8038;
  func_0x00010b1eaff0();
  uVar4 = unaff_x24 == 3;
  func_0x00010b1eaeec();
  func_0x00010b1ee224();
  if ((bool)uVar4) {
    unaff_x21 = 2;
  }
  else if ((unaff_x21 & extraout_x8_02) != 0) {
    func_0x00010b1ecfa4();
    func_0x00010b1ed2dc();
  }
  uVar4 = unaff_x21 == unaff_x24;
  if (unaff_x24 < unaff_x21) {
LAB_10b1e7f28:
    if (unaff_x21 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10b1e8098);
      (*pcVar2)();
    }
    __Znwm(unaff_x21 << 3);
    FUN_10b1e80a4();
    func_0x00010b1ec590();
    uVar8 = extraout_x9_00;
    while (uVar4 = unaff_x21 == uVar8, !(bool)uVar4) {
      func_0x00010b1ebda4();
      uVar8 = extraout_x9_01;
    }
    unaff_x24 = unaff_x21;
    if (*plVar1 != 0) {
      func_0x00010b1eb8ac();
      func_0x00010b1ec544();
      *(long **)(extraout_x8_03 + extraout_x11 * 8) = plVar1;
      plVar9 = extraout_x10;
      while (*plVar9 != 0) {
        func_0x00010b1ee368();
        lVar6 = extraout_x8_04;
        plVar9 = extraout_x12;
        uVar8 = extraout_x11_00;
        if ((bool)uVar4) {
          uVar7 = extraout_x13 & extraout_x9_02;
        }
        else {
          uVar7 = extraout_x13;
          if (unaff_x21 <= extraout_x13) {
            func_0x00010b1ee20c();
            lVar6 = extraout_x8_05;
            uVar8 = extraout_x11_01;
            plVar9 = extraout_x12_00;
            uVar7 = extraout_x13_00;
          }
        }
        uVar4 = uVar7 == uVar8;
        if (!(bool)uVar4) {
          if (*(long *)(lVar6 + uVar7 * 8) == 0) {
            func_0x00010b1ebf54();
            plVar9 = extraout_x12_01;
          }
          else {
            func_0x00010b1ead88();
            plVar9 = extraout_x10_00;
          }
        }
      }
    }
  }
  else if (unaff_x21 < unaff_x24) {
    func_0x00010b1eafd8();
    uVar3 = 2 < unaff_x24;
    uVar4 = unaff_x24 == 3;
    if (((bool)uVar3) && (func_0x00010b1ed1a0(), extraout_x8_06 == 0)) {
      func_0x00010b1ead68();
    }
    else {
      __ZNSt3__112__next_primeEm();
    }
    func_0x00010b1ed3f4();
    if ((bool)uVar3) {
      unaff_x24 = *(ulong *)(unaff_x19 + 8);
    }
    else {
      if (unaff_x21 != 0) goto LAB_10b1e7f28;
      func_0x00010b1ed31c();
      FUN_10b1e80a4();
      func_0x00010b1ed5e4();
    }
  }
  func_0x00010b1ec098();
  if ((bool)uVar4) {
    in_ZR = 1;
    unaff_x21 = extraout_x8_07 & unaff_x22;
  }
  else {
    in_ZR = unaff_x24 == unaff_x22;
    unaff_x21 = unaff_x22;
    if (unaff_x24 <= unaff_x22) {
      uVar8 = 0;
      if (unaff_x24 != 0) {
        uVar8 = unaff_x22 / unaff_x24;
      }
      unaff_x21 = unaff_x22 - uVar8 * unaff_x24;
    }
  }
LAB_10b1e8038:
  func_0x00010b1ee578();
  if (extraout_x9_03 == 0) {
    func_0x00010b1eb7b8();
    *(long **)(extraout_x8_08 + unaff_x21 * 8) = plVar1;
    if (*unaff_x20 != 0) {
      func_0x00010b1eb5bc();
      lVar6 = extraout_x8_09;
      if ((bool)in_ZR) {
        uVar8 = extraout_x9_04 & extraout_x10_01;
      }
      else {
        uVar8 = extraout_x9_04;
        if (unaff_x24 <= extraout_x9_04) {
          func_0x00010b1ec08c();
          lVar6 = extraout_x8_10;
          uVar8 = extraout_x9_05;
        }
      }
      *(long **)(lVar6 + uVar8 * 8) = unaff_x20;
    }
  }
  else {
    func_0x00010b1eb5cc();
  }
  func_0x00010b1eb1cc();
  FUN_10b1e80bc();
  uVar5 = 1;
LAB_10b1e8084:
  auVar10._8_8_ = uVar5;
  auVar10._0_8_ = unaff_x20;
  return auVar10;
}



/* Entry: 10b1e80a4; end: 10b1e80bb;  */

void FUN_10b1e80a4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1e80bc; end: 10b1e8157;  */

void FUN_10b1e80bc(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x00010b1eb558();
  if (unaff_x20 != 0) {
    func_0x00010b1ec8c8();
    if ((bool)in_ZR) {
      func_0x00010b1d3960(unaff_x20 + 0x18);
    }
    func_0x00010b1eb70c();
  }
  return;
}



/* Entry: 10b1e8158; end: 10b1e8493;  */

void FUN_10b1e8158(ulong param_1,long *param_2)

{
  code *pcVar1;
  undefined1 in_ZR;
  ulong uVar2;
  undefined8 **ppuVar3;
  undefined8 **ppuVar4;
  undefined8 **ppuVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  long extraout_x9;
  long extraout_x9_00;
  long *unaff_x19;
  undefined1 auStack_d8 [8];
  undefined8 **ppuStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 **ppuStack_c0;
  undefined8 *puStack_b8;
  undefined8 *apuStack_b0 [5];
  undefined8 *puStack_88;
  undefined8 *apuStack_80 [5];
  undefined8 uStack_58;
  
  uVar2 = param_1;
  func_0x00010b1eaeac();
  uStack_58 = extraout_x8;
  if ((uVar2 & 1) == 0) {
    if (((uint)param_1 >> 1 & 1) != 0) {
      puStack_b8 = (undefined8 *)*param_2;
      func_0x00010b1ee020(*(undefined8 *)(param_2[1] + 0x10),apuStack_b0);
      puStack_88 = puStack_b8;
      ppuVar3 = apuStack_80;
      (*(code *)apuStack_b0[0][2])(ppuVar3,apuStack_b0);
      func_0x00010b1ecea4();
      ppuVar4 = ppuVar3;
      func_0x00010b1ec504();
      ppuVar4[2] = (undefined8 *)0x0;
      ppuVar4[3] = extraout_x8_01;
      func_0x00010b1eb468();
      *ppuVar4 = &PTR_FUN_110cc4730;
      ppuVar4[1] = (undefined8 *)0x0;
      ppuVar4[0x15] = puStack_88;
      func_0x00010b1eb2bc();
      func_0x00010b1ecb94();
      (**(code **)(extraout_x9_00 + 0x10))(ppuVar4 + 0x16,apuStack_80);
      *(uint *)(ppuVar3 + 0x11) = *(uint *)(ppuVar3 + 0x11) | 8;
      *unaff_x19 = (long)ppuVar3;
      ppuStack_c0 = ppuVar3;
      func_0x000107c2805c(ppuVar3);
      func_0x00010b1e8a20(&ppuStack_c0);
      func_0x00010b1eb08c(apuStack_80[0]);
      pcVar1 = (code *)*apuStack_b0[0];
      goto LAB_10b1e834c;
    }
    *unaff_x19 = 0;
  }
  else {
    puStack_b8 = (undefined8 *)*param_2;
    ppuVar3 = apuStack_b0;
    (**(code **)(param_2[1] + 0x10))();
    puStack_88 = puStack_b8;
    func_0x00010b1ecf2c();
    func_0x00010b1ecea4();
    ppuVar4 = ppuVar3;
    func_0x00010b1ec504();
    ppuVar4[2] = (undefined8 *)0x0;
    ppuVar4[3] = extraout_x8_00;
    func_0x00010b1eb468();
    *ppuVar4 = &PTR_FUN_110cc46d0;
    ppuVar4[1] = (undefined8 *)0x0;
    ppuVar4[0x15] = puStack_88;
    func_0x00010b1eb2bc();
    func_0x00010b1ecb94();
    ppuVar4 = ppuVar4 + 0x16;
    (**(code **)(extraout_x9 + 0x10))(ppuVar4,apuStack_80);
    ppuStack_d0 = ppuVar3;
    func_0x00010b1edbac();
    ppuVar5 = ppuVar4;
    __ZNSt3__115__thread_structC1Ev();
    ppuStack_c8 = ppuVar4;
    func_0x00010b1ebccc();
    ppuStack_c8 = (undefined8 **)0x0;
    ppuStack_c0 = ppuVar5;
    *ppuVar5 = ppuVar4;
    ppuVar5[2] = (undefined8 *)0x1;
    ppuVar5[1] = (undefined8 *)0x18;
    ppuVar5[3] = ppuVar3;
    puVar6 = auStack_d8;
    func_0x000107c2844c(puVar6,FUN_10b1e88b8,ppuVar5);
    if ((int)puVar6 != 0) goto LAB_10b1e837c;
    ppuStack_c0 = (undefined8 **)0x0;
    FUN_10b1e8918(&ppuStack_c0);
    func_0x000107c28454(&ppuStack_c8);
    __ZNSt3__16thread6detachEv(auStack_d8);
    __ZNSt3__16threadD1Ev(auStack_d8);
    *unaff_x19 = (long)ppuVar3;
    func_0x000107c2805c(ppuVar3);
    func_0x00010b1e8940(&ppuStack_d0);
    func_0x00010b1eb338(apuStack_80[0]);
    pcVar1 = (code *)*apuStack_b0[0];
LAB_10b1e834c:
    (*pcVar1)(apuStack_b0);
  }
  func_0x00010b1eaddc(uStack_58);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
LAB_10b1e837c:
  func_0x00010b1ec49c();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b1e8470);
  (*pcVar1)();
}



/* Entry: 10b1e8494; end: 10b1e84af;  */

void FUN_10b1e8494(void)

{
  func_0x00010b1ee5e8();
  FUN_10b1e8a54();
  return;
}



/* Entry: 10b1e84b0; end: 10b1e850b;  */

void FUN_10b1e84b0(void)

{
  func_0x00010b1eae08();
  FUN_10b1e8b38();
  return;
}



/* Entry: 10b1e850c; end: 10b1e872f;  */

void FUN_10b1e850c(undefined8 param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *extraout_x8;
  undefined8 in_register_00005008;
  undefined8 *in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  
  func_0x00010b1ee684();
  if ((param_2 & 1) == 0) {
    if (((uint)param_2 >> 1 & 1) == 0) {
      *extraout_x8 = 0;
      return;
    }
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
    puVar7 = (undefined8 *)0xb8;
    __Znwm();
    func_0x00010b1eaec0();
    puVar7[0x10] = 0;
    *puVar7 = &PTR_FUN_110cc4810;
    puVar7[1] = 0;
    puVar7[0x15] = uVar1;
    puVar7[0x16] = uVar2;
    *(undefined4 *)(puVar7 + 0x11) = 8;
    *extraout_x8 = puVar7;
    in_stack_00000038 = puVar7;
    func_0x000107c2805c();
    func_0x00010b1e8ef8(&stack0x00000038);
  }
  else {
    uVar1 = *param_3;
    uVar2 = param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
    puVar4 = (undefined8 *)0xb8;
    __Znwm();
    puVar7 = puVar4;
    func_0x00010b1eaec0();
    *(undefined8 *)((long)puVar7 + 0x84) = in_register_00005008;
    *(undefined8 *)((long)puVar7 + 0x7c) = param_1;
    *puVar7 = &PTR_FUN_110cc47c8;
    puVar7[1] = 0;
    puVar7[0x15] = uVar1;
    puVar7[0x16] = uVar2;
    in_stack_00000028 = puVar7;
    func_0x00010b1edbac();
    puVar5 = puVar7;
    __ZNSt3__115__thread_structC1Ev();
    in_stack_00000030 = puVar7;
    func_0x00010b1ebccc();
    in_stack_00000030 = (undefined8 *)0x0;
    *puVar5 = puVar7;
    puVar5[2] = 1;
    puVar5[1] = 0x18;
    puVar5[3] = puVar4;
    puVar6 = &stack0x00000020;
    in_stack_00000038 = puVar5;
    func_0x000107c2844c(puVar6,FUN_10b1e8d8c,puVar5);
    if ((int)puVar6 != 0) {
      func_0x00010b1ec49c();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10b1e8700);
      (*pcVar3)();
    }
    in_stack_00000038 = (undefined8 *)0x0;
    FUN_10b1e8dec(&stack0x00000038);
    func_0x000107c28454(&stack0x00000030);
    __ZNSt3__16thread6detachEv(&stack0x00000020);
    __ZNSt3__16threadD1Ev(&stack0x00000020);
    *extraout_x8 = puVar4;
    func_0x000107c2805c(puVar4);
    func_0x00010b1e8e14(&stack0x00000028);
  }
  func_0x00010b1edd68();
  func_0x00010b1ed350();
  return;
}



/* Entry: 10b1e8730; end: 10b1e8733;  */

void FUN_10b1e8730(long *param_1)

{
  *param_1 = (long)&PTR_FUN_110cc46d0;
  func_0x00010b1eca48(param_1[0x16]);
  *param_1 = (long)(PTR___ZTVNSt3__117__assoc_sub_stateE_110346b28 + 0x10);
  func_0x000107c60d50(param_1 + 0xb);
  func_0x000107c60d94(param_1 + 3);
  func_0x000107c60c18(param_1 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__114__shared_countD2Ev_110346530)(param_1);
  return;
}



/* Entry: 10b1e8734; end: 10b1e8747;  */

void FUN_10b1e8734(void)

{
  func_0x00010b1e880c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b1e8748; end: 10b1e876f;  */

void FUN_10b1e8748(long *param_1)

{
  __ZNSt3__117__assoc_sub_state4waitEv();
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    FUN_10b124b28(param_1 + 0x12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010b1e8808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 10b1e8770; end: 10b1e87d3;  */

void FUN_10b1e8770(void)

{
  func_0x00010b1eda84();
  func_0x00010b1eb918();
  FUN_10b1e883c();
  func_0x00010b1ebf9c();
  return;
}



/* Entry: 10b1e87d4; end: 10b1e883b;  */

void FUN_10b1e87d4(long *param_1)

{
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    FUN_10b124b28(param_1 + 0x12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010b1e8808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1);
  return;
}



/* Entry: 10b1e883c; end: 10b1e88b7;  */

void FUN_10b1e883c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  func_0x00010b1eb648();
  __ZNSt3__15mutex4lockEv();
  lVar2 = unaff_x19;
  func_0x000107c28058();
  if ((int)lVar2 == 0) {
    *(undefined8 *)(unaff_x19 + 0x90) = 0;
    *(undefined8 *)(unaff_x19 + 0x98) = 0;
    *(undefined8 *)(unaff_x19 + 0xa0) = 0;
    uVar3 = *unaff_x20;
    *(undefined8 *)(unaff_x19 + 0x98) = unaff_x20[1];
    *(undefined8 *)(unaff_x19 + 0x90) = uVar3;
    *(undefined8 *)(unaff_x19 + 0xa0) = unaff_x20[2];
    *unaff_x20 = 0;
    unaff_x20[1] = 0;
    unaff_x20[2] = 0;
    func_0x00010b1ec4d8();
    func_0x00010b1eb9c4();
    return;
  }
  func_0x00010538ceb0(2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10b1e88ac);
  (*pcVar1)();
}


