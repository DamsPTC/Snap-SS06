/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 004c5774; end: 004c5793;  */

void FUN_004c5774(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x004c21d0();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 004c5794; end: 004c5797;  */

void FUN_004c5794(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 004c5798; end: 004c57ef;  */

void FUN_004c5798(undefined8 param_1)

{
  undefined1 auStack_78 [72];
  
  func_0x004c3bf4(auStack_78,0);
  func_0x004c654c();
  func_0x004c6300();
  func_0x004bfc5c(param_1);
  func_0x004c62ec();
  func_0x004c6150();
  return;
}



/* Entry: 004c57f0; end: 004c580f;  */

void FUN_004c57f0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_004c21a4();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 004c5810; end: 004c5813;  */

void FUN_004c5810(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 004c5814; end: 004c5887;  */

void FUN_004c5814(long param_1)

{
  func_0x004c5fac();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004c5888; end: 004c589b;  */

void FUN_004c5888(void)

{
  func_0x004c585c();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c589c; end: 004c58df;  */

void FUN_004c589c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  int extraout_w10;
  undefined8 uVar3;
  
  puVar1 = param_1;
  func_0x004c6424();
  *puVar1 = &PTR_SUB_009ee398;
  lVar2 = param_1[2];
  uVar3 = param_1[1];
  puVar1[2] = param_1[2];
  puVar1[1] = uVar3;
  if (lVar2 != 0) {
    do {
      func_0x004c5ef4();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 004c58e0; end: 004c5937;  */

void FUN_004c58e0(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 unaff_x30;
  undefined8 uVar2;
  
  *param_2 = &PTR_SUB_009ee398;
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x004c5ef4(unaff_x30);
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 004c5938; end: 004c596f;  */

long FUN_004c5938(long param_1,undefined8 param_2)

{
  FUN_0046a7e8(param_2,&PTR_DAT_009ee408);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 004c5970; end: 004c597b;  */

undefined ** FUN_004c5970(void)

{
  return &PTR_DAT_009ee408;
}



/* Entry: 004c597c; end: 004c59af;  */

void FUN_004c597c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined1 *puVar1;
  undefined1 uStack_21;
  
  puVar1 = &uStack_21;
  FUN_004c59b0(puVar1,param_1);
  *param_3 = (long)puVar1;
  return;
}



/* Entry: 004c59b0; end: 004c5a0b;  */

undefined8 FUN_004c59b0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_3;
  FUN_004c67d8(auStack_38,param_2);
  FUN_00461998(uVar1,"{}",auStack_38);
  func_0x004c63ac();
  return uVar1;
}



/* Entry: 004c5a0c; end: 004c5a0f;  */

void FUN_004c5a0c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ee428;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004c5a10; end: 004c5a23;  */

void FUN_004c5a10(void)

{
  FUN_004c5b20();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c5a24; end: 004c5a2f;  */

void FUN_004c5a24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004c5ee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 004c5a30; end: 004c5a43;  */

void FUN_004c5a30(void)

{
  FUN_004c5ae8();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c5a44; end: 004c5a5b;  */

void FUN_004c5a44(void)

{
  return;
}



/* Entry: 004c5a5c; end: 004c5a6f;  */

void FUN_004c5a5c(void)

{
  FUN_004c5aac();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c5a70; end: 004c5a73;  */

void FUN_004c5a70(void)

{
  long in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x004c647c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(in_x3 + 0x10))();
  return;
}



/* Entry: 004c5a74; end: 004c5aa7;  */

void FUN_004c5a74(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
    func_0x004c6100(*(undefined8 *)(lVar1 + 8));
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)(lVar1);
    return;
  }
  return;
}



/* Entry: 004c5aa8; end: 004c5aab;  */

void FUN_004c5aa8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 004c5aac; end: 004c5ae7;  */

undefined8 * FUN_004c5aac(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_009ee520;
  func_0x004c6100(param_1[8]);
  func_0x004c6100(param_1[2]);
  return param_1;
}



/* Entry: 004c5ae8; end: 004c5b1f;  */

undefined8 * FUN_004c5ae8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_009ee478;
  func_0x004bea94(param_1[0xd]);
  *param_1 = &PTR_DAT_009ee520;
  func_0x004c6100(param_1[8]);
  func_0x004c6100(param_1[2]);
  return param_1;
}



/* Entry: 004c5b20; end: 004c5b6b;  */

void FUN_004c5b20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ee428;
                    /* WARNING: Could not recover jumptable at 0x00779e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_00998ba8)();
  return;
}



/* Entry: 004c5b6c; end: 004c5b9b;  */

void FUN_004c5b6c(undefined8 param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_2 + 0x10);
  func_0x004bfc5c();
                    /* WARNING: Could not recover jumptable at 0x004c5b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
  return;
}



/* Entry: 004c5b9c; end: 004c5bd3;  */

void FUN_004c5b9c(long param_1)

{
  param_1 = param_1 + 8;
  func_0x004c5fac();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004c5bd4; end: 004c5c1b;  */

void FUN_004c5bd4(long param_1)

{
  func_0x004c5fac();
  if (param_1 != 0) {
    func_0x0040ce94();
  }
  return;
}



/* Entry: 004c5c1c; end: 004c5c23;  */

void FUN_004c5c1c(void)

{
  return;
}



/* Entry: 004c5c24; end: 004c5c53;  */

void FUN_004c5c24(long param_1)

{
  dword *pdVar1;
  undefined8 uVar2;
  
  pdVar1 = &MACH_HEADER.ncmds;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined ***)pdVar1 = &PTR_FUN_009ee5b0;
  *(undefined8 *)(pdVar1 + 2) = uVar2;
  return;
}



/* Entry: 004c5c54; end: 004c5c8f;  */

void FUN_004c5c54(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_009ee5b0;
  param_2[1] = uVar1;
  return;
}



/* Entry: 004c5c90; end: 004c5cc7;  */

long FUN_004c5c90(long param_1,undefined8 param_2)

{
  FUN_0046a7e8(param_2,&PTR_DAT_009ee620);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 004c5cc8; end: 004c5cd3;  */

undefined ** FUN_004c5cc8(void)

{
  return &PTR_DAT_009ee620;
}



/* Entry: 004c5cd4; end: 004c5d3f;  */

long FUN_004c5cd4(long param_1)

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
  func_0x004c63b4(uVar1);
  return param_1;
}



/* Entry: 004c5d40; end: 004c5d63;  */

void FUN_004c5d40(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00779f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__17promiseIvED1Ev_00998c70)(param_1 + 8);
  return;
}



/* Entry: 004c5d64; end: 004c5dc3;  */

void FUN_004c5d64(long param_1)

{
  func_0x004c53dc(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00779f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__17promiseIvED1Ev_00998c70)(param_1);
  return;
}



/* Entry: 004c5dc4; end: 004c5e1f;  */

void FUN_004c5dc4(long param_1)

{
  func_0x004c53dc(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00779f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__17promiseIvED1Ev_00998c70)(param_1 + 8);
  return;
}



/* Entry: 004c5e20; end: 004c5e3f;  */

void FUN_004c5e20(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x004c5344();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_0099c620)();
    return;
  }
  return;
}



/* Entry: 004c5e40; end: 004c6597;  */

void FUN_004c5e40(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 004c6598; end: 004c662f;  */

void FUN_004c6598(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  
  puVar2 = param_1 + 2;
  *puVar2 = 0;
  *param_1 = &PTR_FUN_009fea90;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  plVar3 = (long *)(param_2 + 0x10);
  while (plVar3 = (long *)*plVar3, plVar3 != (long *)0x0) {
    puVar1 = puVar2;
    func_0x004c6640(puVar2);
    func_0x004c668c();
    FUN_004c6734();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
    func_0x004c668c(puVar1);
    func_0x004c6630();
    FUN_0051ac2c();
  }
  return;
}



/* Entry: 004c6630; end: 004c664b;  */

void FUN_004c6630(long param_1)

{
  ulong uVar1;
  
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x004c6784();
    *(ulong *)(param_1 + 0x20) = uVar1;
  }
  return;
}



/* Entry: 004c664c; end: 004c6733;  */

void FUN_004c664c(segment_command *param_1)

{
  segment_command *psVar1;
  
  if (param_1 == (segment_command *)0x0) {
    psVar1 = &segment_command_00000020;
    __Znwm();
  }
  else {
    psVar1 = param_1;
    func_0x004c67cc();
  }
  *(undefined ***)psVar1 = &PTR_FUN_009fea40;
  *(segment_command **)psVar1->segname = param_1;
  psVar1->vmaddr = 0;
  return;
}



/* Entry: 004c6734; end: 004c674b;  */

ulong * FUN_004c6734(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uStack_28;
  
  uStack_28 = *(ulong *)(param_1 + 8);
  if ((uStack_28 & 1) != 0) {
    uStack_28 = *(ulong *)(uStack_28 & 0xfffffffffffffffe);
  }
  puVar1 = (ulong *)(param_1 + 0x18);
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    if (uStack_28 == 0) {
      puVar2 = puVar1;
      func_0x005332cc();
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
      uVar3 = 2;
    }
    else {
      puVar2 = &uStack_28;
      FUN_00533294();
      uVar3 = 3;
    }
    *puVar1 = uVar3 | (ulong)puVar2;
    return puVar2;
  }
  return (ulong *)(*puVar1 & 0xfffffffffffffffc);
}



/* Entry: 004c674c; end: 004c67c3;  */

void FUN_004c674c(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x004c6784();
    *(ulong *)(param_1 + 0x20) = uVar1;
  }
  return;
}



/* Entry: 004c67c4; end: 004c67d7;  */

void FUN_004c67c4(void)

{
  return;
}



/* Entry: 004c67d8; end: 004c6847;  */

long * FUN_004c67d8(undefined8 param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 uVar4;
  bool bVar5;
  long *plVar6;
  undefined1 *puVar7;
  long *plVar8;
  undefined1 **ppuVar9;
  undefined1 ***pppuVar10;
  long *plVar11;
  undefined1 **ppuVar12;
  undefined8 extraout_x8;
  long *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined1 **ppuVar13;
  char cVar14;
  uint uVar15;
  long lVar16;
  char *pcStack_168;
  char *pcStack_160;
  undefined8 uStack_158;
  undefined1 auStack_150 [16];
  long *plStack_140;
  undefined1 **ppuStack_138;
  undefined1 *puStack_130;
  code *pcStack_128;
  undefined1 ***pppuStack_120;
  code *pcStack_118;
  undefined1 **ppuStack_110;
  long *plStack_108;
  undefined1 **ppuStack_100;
  undefined8 uStack_f8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 uStack_79;
  undefined1 *puStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  long alStack_38 [2];
  undefined8 uStack_28;
  
  plVar6 = param_2;
  func_0x004c6ff4();
  uStack_28 = extraout_x8;
  FUN_004c751c(plVar6[1] - *plVar6);
  lVar16 = param_2[1] - *param_2;
  uVar4 = lVar16 == 0;
  if (!(bool)uVar4) {
    _memmove(alStack_38,*param_2,lVar16);
  }
  plVar6 = alStack_38;
  FUN_00479d58(param_1);
  func_0x004c6fc0(uStack_28);
  if ((bool)uVar4) {
    return plVar6;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar8 = &lStack_a0;
  pcStack_48 = FUN_004c6848;
  plStack_60 = param_2;
  uStack_58 = param_1;
  puStack_50 = &stack0xfffffffffffffff0;
  func_0x004c6ff4();
  puVar7 = &uStack_79;
  uStack_68 = extraout_x8_01;
  FUN_004c68cc();
  ppuVar13 = &puStack_78;
  puStack_78 = puVar7;
  plStack_70 = plVar6;
  FUN_004baa7c(&lStack_a0,ppuVar13,&uStack_68);
  extraout_x8_00[1] = lStack_98;
  *extraout_x8_00 = lStack_a0;
  extraout_x8_00[2] = lStack_90;
  lStack_98 = 0;
  lStack_90 = 0;
  lStack_a0 = 0;
  FUN_0040d974(&lStack_a0);
  func_0x004c6fc0(uStack_68);
  if ((bool)uVar4) {
    return plVar8;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_a8 = FUN_004c68cc;
  ppuVar9 = ppuVar13;
  ppuStack_b0 = &puStack_50;
  _strlen();
  ppuVar9 = (undefined1 **)((long)ppuVar13 + (long)ppuVar9);
  pppuVar10 = &ppuStack_110;
  ppuVar12 = ppuVar9;
  func_0x004c6ff4(plVar8);
  ppuStack_110 = ppuVar13;
  uStack_f8 = extraout_x8_02;
  FUN_004c6a50();
  plVar6 = (long *)pppuVar10;
  if ((int)pppuVar10 == 0x7b) {
    func_0x004c6fac();
  }
  bVar2 = 0;
  lVar16 = 0;
  plVar8 = plVar6;
  do {
    uVar15 = (uint)lVar16;
    cVar14 = (char)plVar8;
    if (uVar15 == 4) {
      if (((uint)plVar8 & 0xff) == 0x2d) {
LAB_004c69c0:
        func_0x004c6fac();
        cVar14 = (char)plVar6;
        bVar1 = 1;
      }
      else {
        bVar1 = 0;
      }
    }
    else {
      bVar5 = (uVar15 & 0x7ffffffd) != 8;
      bVar1 = (uVar15 != 6 && bVar5) & bVar2;
      if ((uVar15 == 6 || !bVar5) && (!(bool)(bVar2 ^ 1))) {
        if (((uint)plVar8 & 0xff) == 0x2d) goto LAB_004c69c0;
        goto LAB_004c6a48;
      }
    }
    bVar2 = bVar1;
    plVar11 = (long *)(ulong)(uint)(int)cVar14;
    FUN_004c6adc();
    plVar8 = plVar11;
    func_0x004c6fac();
    plVar6 = plVar8;
    FUN_004c6adc();
    *(byte *)((long)&plStack_108 + lVar16) = (byte)plVar6 | (byte)((int)plVar11 << 4);
    lVar16 = lVar16 + 1;
    if (lVar16 != 0) {
      if (lVar16 == 0x10) {
        if ((((int)pppuVar10 == 0x7b) && (func_0x004c6fac(), (int)plVar6 != 0x7d)) ||
           (bVar5 = ppuStack_110 == ppuVar9, !bVar5)) {
LAB_004c6a48:
          FUN_004c6a78();
        }
        else {
          func_0x004c6fc0(uStack_f8);
          plVar6 = plStack_108;
          ppuVar12 = ppuStack_100;
          if (bVar5) {
            return plStack_108;
          }
        }
        ___stack_chk_fail();
        ppuVar13 = (undefined1 **)*plVar6;
        if (ppuVar13 == ppuVar12) {
          pcStack_118 = FUN_004c6a50;
          pppuStack_120 = &ppuStack_b0;
          FUN_004c6a78();
          pcStack_128 = FUN_004c6a78;
          plStack_140 = (long *)pppuVar10;
          ppuStack_138 = ppuVar9;
          puStack_130 = (undefined1 *)&pppuStack_120;
          __ZNSt13runtime_errorC1EPKc(auStack_150,"invalid uuid string");
          pcStack_168 = 
          "external/snap_client++snap_dependencies_extension+boost/src/boost/uuid/string_generator.hpp"
          ;
          pcStack_160 = "void boost::uuids::string_generator::throw_invalid() const";
          uStack_158 = 0xc0;
          FUN_004c6b74(auStack_150,&pcStack_168);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x4c6ac8);
          (*pcVar3)();
        }
        *plVar6 = (long)((long)ppuVar13 + 1);
        return (long *)(long)*(char *)ppuVar13;
      }
      func_0x004c6fac();
      plVar8 = plVar6;
    }
  } while( true );
}



/* Entry: 004c6848; end: 004c68cb;  */

long * FUN_004c6848(long *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  undefined1 in_ZR;
  bool bVar4;
  undefined1 *puVar5;
  long *plVar6;
  undefined1 **ppuVar7;
  undefined1 ***pppuVar8;
  long *plVar9;
  long *plVar10;
  undefined1 **ppuVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined1 **ppuVar12;
  char cVar13;
  uint uVar14;
  long lVar15;
  char *pcStack_128;
  char *pcStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [16];
  long *plStack_100;
  undefined1 **ppuStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined1 **ppuStack_e0;
  code *pcStack_d8;
  undefined1 **ppuStack_d0;
  long *plStack_c8;
  undefined1 **ppuStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_70;
  code *pcStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 uStack_39;
  undefined1 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  plVar6 = &lStack_60;
  func_0x004c6ff4();
  puVar5 = &uStack_39;
  uStack_28 = extraout_x8;
  FUN_004c68cc();
  ppuVar12 = &puStack_38;
  puStack_38 = puVar5;
  uStack_30 = param_2;
  FUN_004baa7c(&lStack_60,ppuVar12,&uStack_28);
  param_1[1] = lStack_58;
  *param_1 = lStack_60;
  param_1[2] = lStack_50;
  lStack_58 = 0;
  lStack_50 = 0;
  lStack_60 = 0;
  FUN_0040d974(&lStack_60);
  func_0x004c6fc0(uStack_28);
  if ((bool)in_ZR) {
    return plVar6;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  pcStack_68 = FUN_004c68cc;
  ppuVar7 = ppuVar12;
  puStack_70 = &stack0xfffffffffffffff0;
  _strlen();
  ppuVar7 = (undefined1 **)((long)ppuVar12 + (long)ppuVar7);
  pppuVar8 = &ppuStack_d0;
  ppuVar11 = ppuVar7;
  func_0x004c6ff4(plVar6);
  ppuStack_d0 = ppuVar12;
  uStack_b8 = extraout_x8_00;
  FUN_004c6a50();
  plVar6 = (long *)pppuVar8;
  if ((int)pppuVar8 == 0x7b) {
    func_0x004c6fac();
  }
  bVar2 = 0;
  lVar15 = 0;
  plVar10 = plVar6;
  do {
    uVar14 = (uint)lVar15;
    cVar13 = (char)plVar10;
    if (uVar14 == 4) {
      if (((uint)plVar10 & 0xff) == 0x2d) {
LAB_004c69c0:
        func_0x004c6fac();
        cVar13 = (char)plVar6;
        bVar1 = 1;
      }
      else {
        bVar1 = 0;
      }
    }
    else {
      bVar4 = (uVar14 & 0x7ffffffd) != 8;
      bVar1 = (uVar14 != 6 && bVar4) & bVar2;
      if ((uVar14 == 6 || !bVar4) && (!(bool)(bVar2 ^ 1))) {
        if (((uint)plVar10 & 0xff) == 0x2d) goto LAB_004c69c0;
        goto LAB_004c6a48;
      }
    }
    bVar2 = bVar1;
    plVar9 = (long *)(ulong)(uint)(int)cVar13;
    FUN_004c6adc();
    plVar10 = plVar9;
    func_0x004c6fac();
    plVar6 = plVar10;
    FUN_004c6adc();
    *(byte *)((long)&plStack_c8 + lVar15) = (byte)plVar6 | (byte)((int)plVar9 << 4);
    lVar15 = lVar15 + 1;
    if (lVar15 != 0) {
      if (lVar15 == 0x10) {
        if ((((int)pppuVar8 == 0x7b) && (func_0x004c6fac(), (int)plVar6 != 0x7d)) ||
           (bVar4 = ppuStack_d0 == ppuVar7, !bVar4)) {
LAB_004c6a48:
          FUN_004c6a78();
        }
        else {
          func_0x004c6fc0(uStack_b8);
          plVar6 = plStack_c8;
          ppuVar11 = ppuStack_c0;
          if (bVar4) {
            return plStack_c8;
          }
        }
        ___stack_chk_fail();
        ppuVar12 = (undefined1 **)*plVar6;
        if (ppuVar12 == ppuVar11) {
          pcStack_d8 = FUN_004c6a50;
          ppuStack_e0 = &puStack_70;
          FUN_004c6a78();
          pcStack_e8 = FUN_004c6a78;
          plStack_100 = (long *)pppuVar8;
          ppuStack_f8 = ppuVar7;
          puStack_f0 = (undefined1 *)&ppuStack_e0;
          __ZNSt13runtime_errorC1EPKc(auStack_110,"invalid uuid string");
          pcStack_128 = 
          "external/snap_client++snap_dependencies_extension+boost/src/boost/uuid/string_generator.hpp"
          ;
          pcStack_120 = "void boost::uuids::string_generator::throw_invalid() const";
          uStack_118 = 0xc0;
          FUN_004c6b74(auStack_110,&pcStack_128);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x4c6ac8);
          (*pcVar3)();
        }
        *plVar6 = (long)((long)ppuVar12 + 1);
        return (long *)(long)*(char *)ppuVar12;
      }
      func_0x004c6fac();
      plVar10 = plVar6;
    }
  } while( true );
}



/* Entry: 004c68cc; end: 004c68ff;  */

long * FUN_004c68cc(undefined8 param_1,char *param_2)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  char *pcVar5;
  char **ppcVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  char *pcVar10;
  undefined8 extraout_x8;
  char *pcVar11;
  char cVar12;
  uint uVar13;
  long lVar14;
  char *pcStack_c8;
  char *pcStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  long *plStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  char *pcStack_70;
  long *plStack_68;
  char *pcStack_60;
  undefined8 uStack_58;
  
  pcVar5 = param_2;
  _strlen();
  pcVar5 = param_2 + (long)pcVar5;
  ppcVar6 = &pcStack_70;
  pcVar10 = pcVar5;
  func_0x004c6ff4(param_1);
  pcStack_70 = param_2;
  uStack_58 = extraout_x8;
  FUN_004c6a50();
  plVar7 = (long *)ppcVar6;
  if ((int)ppcVar6 == 0x7b) {
    func_0x004c6fac();
  }
  bVar2 = 0;
  lVar14 = 0;
  plVar9 = plVar7;
  do {
    uVar13 = (uint)lVar14;
    cVar12 = (char)plVar9;
    if (uVar13 == 4) {
      if (((uint)plVar9 & 0xff) == 0x2d) {
LAB_004c69c0:
        func_0x004c6fac();
        cVar12 = (char)plVar7;
        bVar1 = 1;
      }
      else {
        bVar1 = 0;
      }
    }
    else {
      bVar4 = (uVar13 & 0x7ffffffd) != 8;
      bVar1 = (uVar13 != 6 && bVar4) & bVar2;
      if ((uVar13 == 6 || !bVar4) && (!(bool)(bVar2 ^ 1))) {
        if (((uint)plVar9 & 0xff) == 0x2d) goto LAB_004c69c0;
        goto LAB_004c6a48;
      }
    }
    bVar2 = bVar1;
    plVar8 = (long *)(ulong)(uint)(int)cVar12;
    FUN_004c6adc();
    plVar9 = plVar8;
    func_0x004c6fac();
    plVar7 = plVar9;
    FUN_004c6adc();
    *(byte *)((long)&plStack_68 + lVar14) = (byte)plVar7 | (byte)((int)plVar8 << 4);
    lVar14 = lVar14 + 1;
    if (lVar14 != 0) {
      if (lVar14 == 0x10) {
        if ((((int)ppcVar6 == 0x7b) && (func_0x004c6fac(), (int)plVar7 != 0x7d)) ||
           (bVar4 = pcStack_70 == pcVar5, !bVar4)) {
LAB_004c6a48:
          FUN_004c6a78();
        }
        else {
          func_0x004c6fc0(uStack_58);
          plVar7 = plStack_68;
          pcVar10 = pcStack_60;
          if (bVar4) {
            return plStack_68;
          }
        }
        ___stack_chk_fail();
        pcVar11 = (char *)*plVar7;
        if (pcVar11 == pcVar10) {
          pcStack_78 = FUN_004c6a50;
          puStack_80 = &stack0xfffffffffffffff0;
          FUN_004c6a78();
          pcStack_88 = FUN_004c6a78;
          plStack_a0 = (long *)ppcVar6;
          pcStack_98 = pcVar5;
          puStack_90 = (undefined1 *)&puStack_80;
          __ZNSt13runtime_errorC1EPKc(auStack_b0,"invalid uuid string");
          pcStack_c8 = 
          "external/snap_client++snap_dependencies_extension+boost/src/boost/uuid/string_generator.hpp"
          ;
          pcStack_c0 = "void boost::uuids::string_generator::throw_invalid() const";
          uStack_b8 = 0xc0;
          FUN_004c6b74(auStack_b0,&pcStack_c8);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x4c6ac8);
          (*pcVar3)();
        }
        *plVar7 = (long)(pcVar11 + 1);
        return (long *)(long)*pcVar11;
      }
      func_0x004c6fac();
      plVar9 = plVar7;
    }
  } while( true );
}



/* Entry: 004c6900; end: 004c6a4f;  */

long * FUN_004c6900(undefined8 param_1,char *param_2,char *param_3)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  char **ppcVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  char *pcVar9;
  undefined8 extraout_x8;
  char *pcVar10;
  char cVar11;
  uint uVar12;
  long lVar13;
  char *pcStack_c8;
  char *pcStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [16];
  long *plStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  char *pcStack_70;
  long *plStack_68;
  char *pcStack_60;
  undefined8 uStack_58;
  
  ppcVar5 = &pcStack_70;
  pcVar9 = param_3;
  func_0x004c6ff4();
  pcStack_70 = param_2;
  uStack_58 = extraout_x8;
  FUN_004c6a50();
  plVar6 = (long *)ppcVar5;
  if ((int)ppcVar5 == 0x7b) {
    func_0x004c6fac();
  }
  bVar2 = 0;
  lVar13 = 0;
  plVar8 = plVar6;
  do {
    uVar12 = (uint)lVar13;
    cVar11 = (char)plVar8;
    if (uVar12 == 4) {
      if (((uint)plVar8 & 0xff) == 0x2d) {
LAB_004c69c0:
        func_0x004c6fac();
        cVar11 = (char)plVar6;
        bVar1 = 1;
      }
      else {
        bVar1 = 0;
      }
    }
    else {
      bVar4 = (uVar12 & 0x7ffffffd) != 8;
      bVar1 = (uVar12 != 6 && bVar4) & bVar2;
      if ((uVar12 == 6 || !bVar4) && (!(bool)(bVar2 ^ 1))) {
        if (((uint)plVar8 & 0xff) == 0x2d) goto LAB_004c69c0;
        goto LAB_004c6a48;
      }
    }
    bVar2 = bVar1;
    plVar7 = (long *)(ulong)(uint)(int)cVar11;
    FUN_004c6adc();
    plVar8 = plVar7;
    func_0x004c6fac();
    plVar6 = plVar8;
    FUN_004c6adc();
    *(byte *)((long)&plStack_68 + lVar13) = (byte)plVar6 | (byte)((int)plVar7 << 4);
    lVar13 = lVar13 + 1;
    if (lVar13 != 0) {
      if (lVar13 == 0x10) {
        if ((((int)ppcVar5 == 0x7b) && (func_0x004c6fac(), (int)plVar6 != 0x7d)) ||
           (bVar4 = pcStack_70 == param_3, !bVar4)) {
LAB_004c6a48:
          FUN_004c6a78();
        }
        else {
          func_0x004c6fc0(uStack_58);
          plVar6 = plStack_68;
          pcVar9 = pcStack_60;
          if (bVar4) {
            return plStack_68;
          }
        }
        ___stack_chk_fail();
        pcVar10 = (char *)*plVar6;
        if (pcVar10 == pcVar9) {
          pcStack_78 = FUN_004c6a50;
          puStack_80 = &stack0xfffffffffffffff0;
          FUN_004c6a78();
          pcStack_88 = FUN_004c6a78;
          plStack_a0 = (long *)ppcVar5;
          pcStack_98 = param_3;
          puStack_90 = (undefined1 *)&puStack_80;
          __ZNSt13runtime_errorC1EPKc(auStack_b0,"invalid uuid string");
          pcStack_c8 = 
          "external/snap_client++snap_dependencies_extension+boost/src/boost/uuid/string_generator.hpp"
          ;
          pcStack_c0 = "void boost::uuids::string_generator::throw_invalid() const";
          uStack_b8 = 0xc0;
          FUN_004c6b74(auStack_b0,&pcStack_c8);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x4c6ac8);
          (*pcVar3)();
        }
        *plVar6 = (long)(pcVar10 + 1);
        return (long *)(long)*pcVar10;
      }
      func_0x004c6fac();
      plVar8 = plVar6;
    }
  } while( true );
}



/* Entry: 004c6a50; end: 004c6a77;  */

long FUN_004c6a50(long *param_1,char *param_2)

{
  code *pcVar1;
  char *pcVar2;
  char *pcStack_58;
  char *pcStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  pcVar2 = (char *)*param_1;
  if (pcVar2 != param_2) {
    *param_1 = (long)(pcVar2 + 1);
    return (long)*pcVar2;
  }
  FUN_004c6a78();
  __ZNSt13runtime_errorC1EPKc(auStack_40,"invalid uuid string");
  pcStack_58 = 
  "external/snap_client++snap_dependencies_extension+boost/src/boost/uuid/string_generator.hpp";
  pcStack_50 = "void boost::uuids::string_generator::throw_invalid() const";
  uStack_48 = 0xc0;
  FUN_004c6b74(auStack_40,&pcStack_58);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4c6ac8);
  (*pcVar1)();
}



/* Entry: 004c6a78; end: 004c6adb;  */

void FUN_004c6a78(void)

{
  code *pcVar1;
  char *pcStack_48;
  char *pcStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  
  __ZNSt13runtime_errorC1EPKc(auStack_30,"invalid uuid string");
  pcStack_48 = 
  "external/snap_client++snap_dependencies_extension+boost/src/boost/uuid/string_generator.hpp";
  pcStack_40 = "void boost::uuids::string_generator::throw_invalid() const";
  uStack_38 = 0xc0;
  FUN_004c6b74(auStack_30,&pcStack_48);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x4c6ac8);
  (*pcVar1)();
}



/* Entry: 004c6adc; end: 004c6b73;  */

qword * FUN_004c6adc(undefined1 param_1)

{
  int iVar1;
  undefined *puVar2;
  qword *pqVar3;
  undefined1 (*pauVar4) [16];
  long extraout_x8;
  qword extraout_x9;
  qword extraout_x10;
  undefined1 auVar5 [16];
  undefined1 uStack_21;
  
  uStack_21 = param_1;
  if ((bRam0000000000b61c18 & 1) == 0) {
    iVar1 = 0xb61c18;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      pauRam0000000000b61c10 = (undefined1 (*) [16])&UNK_00808c30;
      ___cxa_guard_release(0xb61c18);
    }
  }
  puVar2 = &UNK_00808c1a;
  pauVar4 = pauRam0000000000b61c10;
  FUN_004c6f5c(&UNK_00808c1a,pauRam0000000000b61c10,&uStack_21);
  if (puVar2 + -0x808c1a < (undefined *)0x16) {
    return (qword *)(ulong)(byte)puVar2[0x17];
  }
  FUN_004c6a78();
  pqVar3 = &segment_command_00000020.vmsize;
  ___cxa_allocate_exception();
  FUN_004c6bb0();
  func_0x004c6fd4();
  func_0x004c7004();
  func_0x004c6fec();
  *pqVar3 = (qword)&PTR____cxa_pure_virtual_009ee7f0;
  __ZNSt13runtime_errorC2ERKS_(pqVar3 + 1);
  pqVar3[5] = 0;
  pqVar3[6] = 0;
  func_0x004c7010();
  *pqVar3 = extraout_x9;
  pqVar3[1] = extraout_x10;
  pqVar3[3] = extraout_x8 + 0x68;
  pqVar3[4] = 0;
  *(undefined4 *)(pqVar3 + 7) = *(undefined4 *)pauVar4[1];
  auVar5 = NEON_ext(*pauVar4,*pauVar4,8,1);
  pqVar3[6] = auVar5._8_8_;
  pqVar3[5] = auVar5._0_8_;
  return pqVar3;
}



/* Entry: 004c6b74; end: 004c6baf;  */

qword * FUN_004c6b74(undefined8 param_1,undefined1 (*param_2) [16])

{
  qword *pqVar1;
  long extraout_x8;
  qword extraout_x9;
  qword extraout_x10;
  undefined1 auVar2 [16];
  
  pqVar1 = &segment_command_00000020.vmsize;
  ___cxa_allocate_exception();
  FUN_004c6bb0();
  func_0x004c6fd4();
  func_0x004c7004();
  func_0x004c6fec();
  *pqVar1 = (qword)&PTR____cxa_pure_virtual_009ee7f0;
  __ZNSt13runtime_errorC2ERKS_(pqVar1 + 1);
  pqVar1[5] = 0;
  pqVar1[6] = 0;
  func_0x004c7010();
  *pqVar1 = extraout_x9;
  pqVar1[1] = extraout_x10;
  pqVar1[3] = extraout_x8 + 0x68;
  pqVar1[4] = 0;
  *(undefined4 *)(pqVar1 + 7) = *(undefined4 *)param_2[1];
  auVar2 = NEON_ext(*param_2,*param_2,8,1);
  pqVar1[6] = auVar2._8_8_;
  pqVar1[5] = auVar2._0_8_;
  return pqVar1;
}



/* Entry: 004c6bb0; end: 004c6bb7;  */

undefined8 * FUN_004c6bb0(undefined8 *param_1,undefined8 param_2,undefined1 (*param_3) [16])

{
  long extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x10;
  undefined1 auVar1 [16];
  
  *param_1 = &PTR____cxa_pure_virtual_009ee7f0;
  __ZNSt13runtime_errorC2ERKS_(param_1 + 1);
  param_1[5] = 0;
  param_1[6] = 0;
  func_0x004c7010();
  *param_1 = extraout_x9;
  param_1[1] = extraout_x10;
  param_1[3] = extraout_x8 + 0x68;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)param_3[1];
  auVar1 = NEON_ext(*param_3,*param_3,8,1);
  param_1[6] = auVar1._8_8_;
  param_1[5] = auVar1._0_8_;
  return param_1;
}



/* Entry: 004c6bb8; end: 004c6c43;  */

undefined8 * FUN_004c6bb8(undefined8 *param_1,undefined8 param_2,undefined1 (*param_3) [16])

{
  long extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x10;
  undefined1 auVar1 [16];
  
  *param_1 = &PTR____cxa_pure_virtual_009ee7f0;
  __ZNSt13runtime_errorC2ERKS_(param_1 + 1);
  param_1[5] = 0;
  param_1[6] = 0;
  func_0x004c7010();
  *param_1 = extraout_x9;
  param_1[1] = extraout_x10;
  param_1[3] = extraout_x8 + 0x68;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)param_3[1];
  auVar1 = NEON_ext(*param_3,*param_3,8,1);
  param_1[6] = auVar1._8_8_;
  param_1[5] = auVar1._0_8_;
  return param_1;
}



/* Entry: 004c6c44; end: 004c6ca7;  */

long FUN_004c6c44(long param_1)

{
  long lVar1;
  
  lVar1 = 0x40;
  __Znwm(0x40);
  FUN_004c6e20();
  FUN_004c6d74(lVar1 + 0x18,param_1 + 0x18);
  return lVar1;
}



/* Entry: 004c6ca8; end: 004c6cd7;  */

void FUN_004c6ca8(void)

{
  ___cxa_allocate_exception(0x40);
  FUN_004c6d70();
  func_0x004c6fd4();
  func_0x004c7004();
  func_0x004c6fec();
  func_0x004c6f30();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c6cd8; end: 004c6ceb;  */

void FUN_004c6cd8(void)

{
  func_0x004c6f30();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c6cec; end: 004c6d13;  */

long FUN_004c6cec(long param_1)

{
  func_0x004c6c14(param_1 + 0x10);
  __ZNSt13runtime_errorD2Ev(param_1);
  return param_1 + -8;
}



/* Entry: 004c6d14; end: 004c6d37;  */

undefined8 FUN_004c6d14(undefined8 param_1)

{
  FUN_004c6d38();
  return param_1;
}



/* Entry: 004c6d38; end: 004c6d6f;  */

void FUN_004c6d38(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)*param_1;
  if ((plVar1 != (long *)0x0) && ((**(code **)(*plVar1 + 0x20))(), (int)plVar1 != 0)) {
    *param_1 = 0;
  }
  return;
}



/* Entry: 004c6d70; end: 004c6d73;  */

undefined8 * FUN_004c6d70(undefined8 *param_1,long param_2)

{
  long extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x10;
  
  *param_1 = &PTR____cxa_pure_virtual_009ee7f0;
  __ZNSt13runtime_errorC2ERKS_(param_1 + 1,param_2 + 8);
  FUN_004c6e98(param_1 + 3,param_2 + 0x18);
  func_0x004c7010();
  *param_1 = extraout_x9;
  param_1[1] = extraout_x10;
  param_1[3] = extraout_x8 + 0x68;
  return param_1;
}



/* Entry: 004c6d74; end: 004c6e1f;  */

void FUN_004c6d74(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = 0;
  if (*(long **)(param_2 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 8) + 0x28))(&uStack_30);
    func_0x004c6eec(&uStack_28,uStack_30);
    FUN_004c6d14(&uStack_30);
  }
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  func_0x004c6eec(param_1 + 8,uStack_28);
  FUN_004c6d14(&uStack_28);
  return;
}



/* Entry: 004c6e20; end: 004c6e97;  */

undefined8 * FUN_004c6e20(undefined8 *param_1,long param_2)

{
  long extraout_x8;
  undefined8 extraout_x9;
  undefined8 extraout_x10;
  
  *param_1 = &PTR____cxa_pure_virtual_009ee7f0;
  __ZNSt13runtime_errorC2ERKS_(param_1 + 1,param_2 + 8);
  FUN_004c6e98(param_1 + 3,param_2 + 0x18);
  func_0x004c7010();
  *param_1 = extraout_x9;
  param_1[1] = extraout_x10;
  param_1[3] = extraout_x8 + 0x68;
  return param_1;
}



/* Entry: 004c6e98; end: 004c6f5b;  */

undefined8 * FUN_004c6e98(undefined8 *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_2 + 8);
  *param_1 = &PTR____cxa_pure_virtual_009ee820;
  param_1[1] = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 004c6f5c; end: 004c6f7b;  */

void FUN_004c6f5c(void)

{
  FUN_004c6f7c();
  return;
}



/* Entry: 004c6f7c; end: 004c6fa7;  */

long FUN_004c6f7c(long param_1,long param_2,char *param_3)

{
  FUN_004c6fa8(param_1,(long)*param_3,param_2 - param_1);
  if (param_1 != 0) {
    param_2 = param_1;
  }
  return param_2;
}



/* Entry: 004c6fa8; end: 004c7023;  */

void FUN_004c6fa8(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077a840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memchr_0099a3e8)();
  return;
}



/* Entry: 004c7024; end: 004c707b;  */

void FUN_004c7024(void)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  uint uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar2 = 0;
  uVar5 = 0;
  do {
    if (2 < uVar5) break;
    FUN_004c707c();
    uVar5 = uVar5 + 1;
  } while (lVar2 == 0);
  puVar1 = PTR___tlv_bootstrap_00b2c588;
  if ((lVar2 == 0) && (2 < uVar5)) {
    ppuVar4 = &PTR___tlv_bootstrap_00b2c588;
    ppuVar3 = ppuVar4;
    (*(code *)PTR___tlv_bootstrap_00b2c588)();
    if (((ulong)*ppuVar3 & 1) == 0) {
      FUN_00524eb4(&uStack_50);
      __ZNSt3__113random_deviceclEv(&uStack_50);
      func_0x0064b9f4();
      func_0x0064b7f8();
      __ZNSt3__113random_deviceD1Ev(&uStack_50);
      (*(code *)puVar1)();
      *(undefined1 *)ppuVar4 = 1;
      ppuVar3 = ppuVar4;
    }
    uStack_50 = 1;
    uStack_48 = 0x7fffffffffffffff;
    func_0x0064b9f4();
    FUN_0064b7f0(&uStack_50,ppuVar3);
    return;
  }
  return;
}



/* Entry: 004c707c; end: 004c70a3;  */

undefined8 FUN_004c707c(void)

{
  undefined8 uStack_18;
  
  FUN_006e92d4(&uStack_18,8);
  return uStack_18;
}



/* Entry: 004c70a4; end: 004c70ab;  */

void FUN_004c70a4(void)

{
  return;
}



/* Entry: 004c70ac; end: 004c70d7;  */

bool FUN_004c70ac(long param_1,undefined4 param_2)

{
  undefined4 uStack_14;
  
  uStack_14 = param_2;
  FUN_004c73b0(param_1,&uStack_14);
  return param_1 != 0;
}



/* Entry: 004c70d8; end: 004c71b3;  */

undefined1 * FUN_004c70d8(long param_1,undefined4 param_2)

{
  char *pcVar1;
  char **ppcVar2;
  char *pcStack_40;
  long lStack_38;
  byte bStack_29;
  undefined4 uStack_24;
  
  ppcVar2 = &pcStack_40;
  uStack_24 = param_2;
  FUN_004c73b0(param_1,&uStack_24);
  if (param_1 == 0) {
    ppcVar2 = (char **)0x0;
  }
  else {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (&pcStack_40,param_1 + 0x18);
    pcVar1 = pcStack_40 + lStack_38;
    if (-1 < (char)bStack_29) {
      pcStack_40 = (char *)&pcStack_40;
      pcVar1 = (char *)((long)&pcStack_40 + (ulong)bStack_29);
    }
    for (; pcStack_40 != pcVar1; pcStack_40 = pcStack_40 + 1) {
      ppcVar2 = (char **)(long)*pcStack_40;
      ___tolower();
      *pcStack_40 = (char)ppcVar2;
    }
    func_0x004c7460();
    if ((((ulong)ppcVar2 & 1) == 0) && (func_0x004c7460(), ((ulong)ppcVar2 & 1) == 0)) {
      func_0x004c7460();
    }
    else {
      ppcVar2 = (char **)((long)&MACH_HEADER.magic + 1);
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_40);
  }
  return (undefined1 *)ppcVar2;
}



/* Entry: 004c71b4; end: 004c731f;  */

code ** FUN_004c71b4(code **param_1,ulong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  dword *pdVar5;
  char in_NG;
  char in_OV;
  int iVar6;
  char *pcVar7;
  code **ppcVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar11;
  code **extraout_x10;
  code **extraout_x10_00;
  code **extraout_x10_01;
  undefined8 extraout_x11;
  undefined8 extraout_x11_00;
  undefined8 extraout_x11_01;
  code *pcVar12;
  code *pcStack_48;
  
  uVar9 = *param_2;
  if ((uVar9 == 0) || (FUN_004c70ac(uVar9,0x11), (uVar9 & 1) == 0)) {
    pcVar7 = "aws.api.snapchat.com:443";
    _strlen();
    if ((code **)0x7ffffffffffffff6 < pcVar7) {
      FUN_0040d740();
      pcStack_48 = FUN_00425d5c;
      pcVar12 = *(code **)((long)pcVar7 + 8);
      if (pcVar12 != (code *)0x0) {
        pcVar1 = pcVar12 + 8;
        do {
          lVar11 = *(long *)pcVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar4) {
            *(long *)pcVar1 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*(long *)pcVar12 + 0x10))(pcVar12);
          __ZNSt3__119__shared_weak_count14__release_weakEv(pcVar12);
        }
      }
      return (code **)pcVar7;
    }
    if ((code **)((long)&MACH_HEADER.sizeofcmds + 2) < pcVar7) {
      pdVar5 = &MACH_HEADER.flags;
      if ((dword *)((ulong)pcVar7 | 7) != (dword *)0x17) {
        pdVar5 = (dword *)((ulong)pcVar7 | 7);
      }
      ppcVar8 = (code **)((long)pdVar5 + 1);
      __Znwm();
      param_1[1] = (code *)pcVar7;
      param_1[2] = (code *)((ulong)((long)pdVar5 + 1) | 0x8000000000000000);
      *param_1 = (code *)ppcVar8;
    }
    else {
      *(char *)((long)param_1 + 0x17) = (char)pcVar7;
      ppcVar8 = param_1;
      if ((code **)pcVar7 == (code **)0x0) goto LAB_00425d3c;
    }
    _memmove(ppcVar8,"aws.api.snapchat.com:443",pcVar7);
LAB_00425d3c:
    *(code *)((long)ppcVar8 + (long)pcVar7) = (code)0x0;
    return param_1;
  }
  uVar9 = *param_2;
  FUN_004c352c(uVar9,&UNK_00808c88);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&pcStack_48,uVar9 + 0x18)
  ;
  uVar9 = *param_2;
  func_0x004c3530(uVar9,&UNK_00808c8c);
  uVar10 = *param_2;
  func_0x004c3530(uVar10,&UNK_00808c90);
  func_0x004c744c();
  uVar2 = extraout_x11;
  ppcVar8 = extraout_x10;
  if (in_NG == in_OV) {
    uVar2 = extraout_x8;
    ppcVar8 = &pcStack_48;
  }
  iVar6 = 0x8e1f42;
  func_0x00465a14("CUSTOM",6,ppcVar8,uVar2);
  if ((iVar6 == 0) || (uVar9 == 0)) {
    func_0x004c744c();
    uVar2 = extraout_x11_00;
    ppcVar8 = extraout_x10_00;
    if (in_NG == in_OV) {
      uVar2 = extraout_x8_00;
      ppcVar8 = &pcStack_48;
    }
    iVar6 = 0x8e1f3a;
    func_0x00465a14("AB_TEST",7,ppcVar8,uVar2);
    if ((iVar6 == 0) || (uVar9 = uVar10, uVar10 == 0)) {
      func_0x004c744c();
      uVar2 = extraout_x11_01;
      ppcVar8 = extraout_x10_01;
      if (in_NG == in_OV) {
        uVar2 = extraout_x8_01;
        ppcVar8 = &pcStack_48;
      }
      iVar6 = 0x8e1f32;
      func_0x00465a14("STAGING",7,ppcVar8,uVar2);
      pcVar7 = "us-east1-aws-api.sc-gw-dev.snapchat.com:443";
      if (iVar6 == 0) {
        pcVar7 = "aws.api.snapchat.com:443";
      }
      FUN_00425cb4(param_1,pcVar7);
      goto LAB_004c72ec;
    }
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(param_1,uVar9 + 0x18);
LAB_004c72ec:
  ppcVar8 = &pcStack_48;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppcVar8);
  return ppcVar8;
}



/* Entry: 004c7320; end: 004c735b;  */

undefined1 * FUN_004c7320(long *param_1)

{
  char *pcVar1;
  char **ppcVar2;
  long lVar3;
  char *pcStack_40;
  long lStack_38;
  byte bStack_29;
  undefined4 uStack_24;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    ppcVar2 = &pcStack_40;
    uStack_24 = 0x10;
    FUN_004c73b0(lVar3,&uStack_24);
    if (lVar3 == 0) {
      ppcVar2 = (char **)0x0;
    }
    else {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&pcStack_40,lVar3 + 0x18);
      pcVar1 = pcStack_40 + lStack_38;
      if (-1 < (char)bStack_29) {
        pcStack_40 = (char *)&pcStack_40;
        pcVar1 = (char *)((long)&pcStack_40 + (ulong)bStack_29);
      }
      for (; pcStack_40 != pcVar1; pcStack_40 = pcStack_40 + 1) {
        ppcVar2 = (char **)(long)*pcStack_40;
        ___tolower();
        *pcStack_40 = (char)ppcVar2;
      }
      func_0x004c7460();
      if ((((ulong)ppcVar2 & 1) == 0) && (func_0x004c7460(), ((ulong)ppcVar2 & 1) == 0)) {
        func_0x004c7460();
      }
      else {
        ppcVar2 = (char **)((long)&MACH_HEADER.magic + 1);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&pcStack_40);
    }
    return (undefined1 *)ppcVar2;
  }
  return (undefined1 *)0x0;
}



/* Entry: 004c735c; end: 004c73af;  */

void FUN_004c735c(undefined1 *param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  undefined4 uStack_24;
  
  lVar1 = *param_2;
  if ((lVar1 == 0) || (uStack_24 = param_3, FUN_004c73b0(lVar1,&uStack_24), lVar1 == 0)) {
    *param_1 = 0;
    param_1[0x18] = 0;
  }
  else {
    FUN_00462e1c(param_1,lVar1 + 0x18);
  }
  return;
}



/* Entry: 004c73b0; end: 004c7467;  */

long FUN_004c73b0(long *param_1,int *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = (ulong)*param_2;
    uVar5 = uVar3 - 1;
    if ((uVar3 & uVar5) == 0) {
      uVar6 = uVar5 & uVar4;
    }
    else {
      uVar6 = uVar4;
      if (uVar3 <= uVar4) {
        uVar6 = 0;
        if (uVar3 != 0) {
          uVar6 = uVar4 / uVar3;
        }
        uVar6 = uVar4 - uVar6 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar6 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar7 = plVar2[1];
        if (uVar7 != uVar4) break;
        if (*(int *)(plVar2 + 2) == *param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar5) == 0) {
        uVar7 = uVar7 & uVar5;
      }
      else if (uVar3 <= uVar7) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar7 / uVar3;
        }
        uVar7 = uVar7 - uVar1 * uVar3;
      }
    } while (uVar7 == uVar6);
  }
  return 0;
}



/* Entry: 004c7468; end: 004c74fb;  */

undefined8 * FUN_004c7468(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *param_1 = &PTR_FUN_009ee898;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uStack_38 = 0;
  uStack_40 = param_2;
  func_0x00461914("Invalid UUID with size {}");
  FUN_00721c60(auStack_58);
  FUN_004575b8(param_1 + 1,auStack_58);
  func_0x004c7be0();
  return param_1;
}



/* Entry: 004c74fc; end: 004c751b;  */

undefined8 * FUN_004c74fc(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  *param_1 = &PTR_FUN_009ee898;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uStack_38 = 0;
  uStack_40 = param_2;
  func_0x00461914("Invalid UUID with size {}");
  FUN_00721c60(auStack_58);
  FUN_004575b8(param_1 + 1,auStack_58);
  func_0x004c7be0();
  return param_1;
}



/* Entry: 004c751c; end: 004c757b;  */

void FUN_004c751c(long param_1)

{
  segment_command *psVar1;
  
  if (param_1 == 0x10) {
    return;
  }
  psVar1 = &segment_command_00000020;
  ___cxa_allocate_exception();
  FUN_004c74fc();
  ___cxa_throw(psVar1,&PTR_DAT_009ee8b0,FUN_004c757c);
  ___cxa_free_exception();
  FUN_004c7bb0();
  *(undefined ***)psVar1 = &PTR_FUN_009ee898;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(psVar1->segname);
                    /* WARNING: Could not recover jumptable at 0x0077a018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_00998cf0)(psVar1);
  return;
}



/* Entry: 004c757c; end: 004c75af;  */

void FUN_004c757c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ee898;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x0077a018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_00998cf0)(param_1);
  return;
}



/* Entry: 004c75b0; end: 004c7617;  */

void FUN_004c75b0(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar2 = *(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc;
  lVar1 = (long)*(char *)(uVar2 + 0x17);
  if (lVar1 < 0) {
    lVar1 = *(long *)(uVar2 + 8);
  }
  FUN_004c751c(lVar1);
  FUN_004c757c(&uStack_40,*(ulong *)(param_2 + 0x10) & 0xfffffffffffffffc);
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  FUN_0040d974(&uStack_40);
  return;
}



/* Entry: 004c7618; end: 004c76ab;  */

void FUN_004c7618(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [24];
  
  func_0x004c7bc0();
  *param_1 = &PTR_FUN_009f1218;
  param_1[1] = 0;
  param_1[2] = &DAT_00b69408;
  *(undefined4 *)(param_1 + 3) = 0;
  func_0x004c75a4(auStack_48,param_2);
  FUN_00532e74(param_1 + 2,auStack_48,0);
  func_0x004c7be0();
  return;
}



/* Entry: 004c76ac; end: 004c76d3;  */

undefined1  [16] FUN_004c76ac(undefined8 *param_1)

{
  func_0x004c7bc0();
  return *(undefined1 (*) [16])*param_1;
}



/* Entry: 004c76d4; end: 004c76ef;  */

undefined4 FUN_004c76d4(uint param_1)

{
  if (param_1 < 0x20) {
    return *(undefined4 *)(&UNK_00808cc4 + (ulong)param_1 * 4);
  }
  return 0;
}



/* Entry: 004c76f0; end: 004c773b;  */

void FUN_004c76f0(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_FUN_009ff3c8;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  uVar1 = *param_2;
  FUN_004c773c();
  *(undefined4 *)((long)param_1 + 0x14) = uVar1;
  uVar1 = param_2[1];
  func_0x004c775c();
  *(undefined4 *)(param_1 + 2) = uVar1;
  return;
}



/* Entry: 004c773c; end: 004c776b;  */

undefined4 FUN_004c773c(int param_1)

{
  if (param_1 - 1U < 0x10) {
    return *(undefined4 *)(&UNK_00808d44 + (ulong)(param_1 - 1U) * 4);
  }
  return 0;
}



/* Entry: 004c776c; end: 004c783f;  */

void FUN_004c776c(long param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_40 [32];
  
  FUN_004c7840(param_1);
  func_0x004c75a4(auStack_40,param_2);
  FUN_004c7ab4(param_1);
  FUN_004575b8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_40);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x18);
  lVar1 = param_2;
  func_0x004c7848();
  *(int *)(param_1 + 0x4c) = (int)lVar1;
  func_0x004c7acc(param_1);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_();
  if (*(char *)(param_2 + 0x48) == '\x01') {
    FUN_004c76f0(auStack_40,param_2 + 0x40);
    func_0x004c785c(param_1);
    FUN_004c786c();
    FUN_0051af68(auStack_40);
  }
  return;
}



/* Entry: 004c7840; end: 004c786b;  */

void FUN_004c7840(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ff418;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = &DAT_00b69408;
  param_1[4] = &DAT_00b69408;
  param_1[5] = &DAT_00b69408;
  param_1[6] = &DAT_00b69408;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = 0;
  return;
}



/* Entry: 004c786c; end: 004c78cf;  */

long FUN_004c786c(long param_1,long param_2)

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
      FUN_0051b114(param_1);
    }
    else {
      FUN_0051b0dc(param_1);
    }
  }
  return param_1;
}



/* Entry: 004c78d0; end: 004c7973;  */

void FUN_004c78d0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_80 [80];
  
  param_1[2] = 0;
  *param_1 = &PTR_FUN_009f7448;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x58) {
    FUN_004c776c(auStack_80,lVar2);
    FUN_004c7b68(param_1 + 2);
    FUN_004c7974();
    FUN_0051b208(auStack_80);
  }
  return;
}



/* Entry: 004c7974; end: 004c79d7;  */

long FUN_004c7974(long param_1,long param_2)

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
      FUN_0051b7e0(param_1);
    }
    else {
      FUN_0051b7a8(param_1);
    }
  }
  return param_1;
}



/* Entry: 004c79d8; end: 004c7a3f;  */

void FUN_004c79d8(undefined8 param_1)

{
  func_0x00461914(&UNK_00808cb5);
  FUN_00721c60(param_1);
  return;
}



/* Entry: 004c7a40; end: 004c7a6f;  */

undefined4 FUN_004c7a40(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = *(char *)(param_1 + 8);
  uVar3 = 9;
  if (cVar2 == '\v') {
    uVar3 = 10;
  }
  uVar1 = 8;
  if (cVar2 != '\r') {
    uVar1 = uVar3;
  }
  uVar3 = 7;
  if (cVar2 != 'e') {
    uVar3 = uVar1;
  }
  return uVar3;
}



/* Entry: 004c7a70; end: 004c7a83;  */

void FUN_004c7a70(void)

{
  FUN_004c7a84();
                    /* WARNING: Could not recover jumptable at 0x0077a060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_0099c620)();
  return;
}



/* Entry: 004c7a84; end: 004c7ab3;  */

void FUN_004c7a84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_009ee898;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 1);
                    /* WARNING: Could not recover jumptable at 0x0077a018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt9exceptionD2Ev_00998cf0)(param_1);
  return;
}



/* Entry: 004c7ab4; end: 004c7ae3;  */

ulong * FUN_004c7ab4(long param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uStack_28;
  
  uStack_28 = *(ulong *)(param_1 + 8);
  if ((uStack_28 & 1) != 0) {
    uStack_28 = *(ulong *)(uStack_28 & 0xfffffffffffffffe);
  }
  puVar1 = (ulong *)(param_1 + 0x20);
  if (((uint)*puVar1 >> 1 & 1) == 0) {
    if (uStack_28 == 0) {
      puVar2 = puVar1;
      func_0x005332cc();
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = 0;
      uVar3 = 2;
    }
    else {
      puVar2 = &uStack_28;
      FUN_00533294();
      uVar3 = 3;
    }
    *puVar1 = uVar3 | (ulong)puVar2;
    return puVar2;
  }
  return (ulong *)(*puVar1 & 0xfffffffffffffffc);
}



/* Entry: 004c7ae4; end: 004c7b67;  */

void FUN_004c7ae4(long param_1)

{
  ulong uVar1;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    func_0x004c7b1c();
    *(ulong *)(param_1 + 0x38) = uVar1;
  }
  return;
}



/* Entry: 004c7b68; end: 004c7b73;  */

void FUN_004c7b68(ulong *param_1)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  long unaff_x22;
  
  puVar2 = (ulong *)*param_1;
  if (puVar2 == (ulong *)0x0) {
    func_0x0054d638(0,FUN_004c7b74);
    func_0x0054d6a0();
    *param_1 = (ulong)puVar2;
  }
  else {
    Hint_Prefetch(puVar2,0,0,0);
    if (((ulong)puVar2 & 1) == 0) {
      if ((int)param_1[1] == 0) {
        func_0x0054d638(puVar2,FUN_004c7b74);
      }
      else {
        func_0x0054d5c0();
        puVar3 = puVar2;
        func_0x0054d6a0();
        *puVar2 = (ulong)puVar3;
        func_0x0054d5f8();
      }
    }
    else {
      bVar1 = (int)param_1[1] == *(int *)((long)param_1 + 0xc);
      if (bVar1 || (int)param_1[1] < *(int *)((long)param_1 + 0xc)) {
        func_0x0054d644();
        if (!bVar1) {
          func_0x0054d5e0();
          return;
        }
      }
      else {
        func_0x0054d5c0();
        func_0x0054d654();
      }
      func_0x0054d664();
      func_0x0054d6a0();
      *(ulong **)(unaff_x22 + 8) = puVar2;
    }
  }
  return;
}



/* Entry: 004c7b74; end: 004c7baf;  */

void FUN_004c7b74(qword *param_1)

{
  qword *pqVar1;
  
  if (param_1 == (qword *)0x0) {
    pqVar1 = &segment_command_00000020.filesize;
    __Znwm();
  }
  else {
    pqVar1 = param_1;
    func_0x005510c4(param_1,0x50);
  }
  *pqVar1 = (qword)&PTR_FUN_009ff418;
  pqVar1[1] = (qword)param_1;
  pqVar1[2] = 0;
  pqVar1[3] = (qword)&DAT_00b69408;
  pqVar1[4] = (qword)&DAT_00b69408;
  pqVar1[5] = (qword)&DAT_00b69408;
  pqVar1[6] = (qword)&DAT_00b69408;
  pqVar1[8] = 0;
  pqVar1[9] = 0;
  pqVar1[7] = 0;
  return;
}


