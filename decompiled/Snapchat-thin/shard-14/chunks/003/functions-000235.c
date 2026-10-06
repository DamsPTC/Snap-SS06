/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b12ee70; end: 10b12ee8f;  */

void FUN_10b12ee70(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b12cd9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b12ee90; end: 10b12ee93;  */

void FUN_10b12ee90(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b12ee94; end: 10b12eee7;  */

void FUN_10b12ee94(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x00010b134530();
  lVar2 = *param_2;
  *param_1 = lVar2;
  if (lVar2 == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
    *puVar1 = &PTR_FUN_110cbcf48;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = lVar2;
  }
  *(undefined8 **)(unaff_x19 + 8) = puVar1;
  *unaff_x20 = 0;
  return;
}



/* Entry: 10b12eee8; end: 10b12eeeb;  */

void FUN_10b12eee8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b12eeec; end: 10b12eeff;  */

void FUN_10b12eeec(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b12ef00; end: 10b12ef0f;  */

void FUN_10b12ef00(long param_1)

{
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b135110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x18) + 8))();
    return;
  }
  return;
}



/* Entry: 10b12ef10; end: 10b12ef43;  */

long FUN_10b12ef10(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010b1360bc(param_2,param_1,&PTR_DAT_110cbcf88);
  param_1 = param_1 + 0x18;
  if ((int)lVar1 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10b12ef44; end: 10b12ef47;  */

void FUN_10b12ef44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b12ef48; end: 10b12ef67;  */

void FUN_10b12ef48(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b119df0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b12ef68; end: 10b12ef6b;  */

void FUN_10b12ef68(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b12ef6c; end: 10b12eff3;  */

void FUN_10b12ef6c(long param_1)

{
  undefined1 auStack_348 [744];
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [16];
  
  func_0x00010b121ddc(auStack_60,param_1 + 0x10);
  FUN_10b11c900(auStack_348);
  func_0x00010b135010(auStack_40);
  FUN_10b11d020(param_1 + 0x40,auStack_40);
  func_0x00010b134db4();
  func_0x00010b134610();
  func_0x00010b1352c8();
  return;
}



/* Entry: 10b12eff4; end: 10b12f053;  */

undefined8 * FUN_10b12eff4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_110cbcfb0;
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[3] = param_2[2];
  param_1[2] = uVar2;
  param_1[1] = uVar1;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 3);
  uVar1 = param_2[4];
  param_1[6] = param_2[5];
  param_1[5] = uVar1;
  param_2[4] = 0;
  param_2[5] = 0;
  func_0x00010b123c68(param_1 + 7,param_2 + 6);
  return param_1;
}



/* Entry: 10b12f054; end: 10b12f063;  */

void FUN_10b12f054(long param_1)

{
  func_0x00010b135038(param_1 + 8);
  FUN_10b1237f0();
  func_0x00010b135c70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbce54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev_110346348)();
  return;
}



/* Entry: 10b12f064; end: 10b12f45b;  */

void FUN_10b12f064(uint *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  long lVar2;
  uint auStack_700 [2];
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined1 uStack_6e0;
  undefined1 auStack_6d8 [744];
  undefined1 auStack_3f0 [632];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined1 auStack_140 [32];
  long lStack_120;
  undefined4 auStack_118 [2];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  char cStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  char cStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  code *pcStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  undefined8 uStack_8;
  
  func_0x00010b134cf8();
  func_0x00010b133e8c();
  lVar2 = *(long *)(param_2 + 0x10);
  auStack_700[0] = auStack_700[0] & 0xffffff00;
  uStack_6e0 = (char)param_1[8] == '\x01';
  if ((bool)uStack_6e0) {
    auStack_700[0] = *param_1;
    uStack_6f0 = *(undefined8 *)(param_1 + 4);
    uStack_6f8 = *(undefined8 *)(param_1 + 2);
    uStack_6e8 = *(undefined8 *)(param_1 + 6);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  uStack_8 = extraout_x8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(&uStack_a8,lVar2 + 0x308)
  ;
  uStack_78 = *(undefined4 *)(lVar2 + 0x300);
  uStack_88 = uStack_a0;
  uStack_90 = uStack_a8;
  uStack_80 = uStack_98;
  uStack_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b134af0(*(undefined8 *)(lVar2 + 0x580));
  FUN_10b1ff1d0(auStack_b8);
  FUN_10b1238dc(auStack_6d8,lVar2);
  FUN_10b121c1c(auStack_3f0,lVar2 + 0x2e8);
  uStack_170 = *(undefined8 *)(lVar2 + 0x568);
  uStack_178 = *(undefined8 *)(lVar2 + 0x560);
  *(undefined8 *)(lVar2 + 0x568) = 0;
  *(undefined8 *)(lVar2 + 0x560) = 0;
  uStack_160 = *(undefined8 *)(lVar2 + 0x578);
  uStack_168 = *(undefined8 *)(lVar2 + 0x570);
  *(undefined8 *)(lVar2 + 0x578) = 0;
  *(undefined8 *)(lVar2 + 0x570) = 0;
  uStack_150 = *(undefined8 *)(lVar2 + 0x588);
  uStack_158 = *(undefined8 *)(lVar2 + 0x580);
  if (*(long *)(lVar2 + 0x588) != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  uStack_148 = *(undefined4 *)(lVar2 + 0x590);
  func_0x00010b121ddc(auStack_140,&uStack_90);
  lStack_120 = *(long *)(lVar2 + 0x598);
  if (lStack_120 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_00 != 0);
  }
  FUN_10b123178(auStack_118,auStack_700);
  uStack_f0 = uStack_f0 & 0xffffffffffffff00;
  cStack_d8 = '\0';
  if (*(char *)(lVar2 + 0x5b8) == '\x01') {
    uStack_f0 = *(ulong *)(lVar2 + 0x5a0);
    lStack_e8 = *(long *)(lVar2 + 0x5a8);
    if (lStack_e8 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10_01 != 0);
    }
    uStack_e0 = *(undefined8 *)(lVar2 + 0x5b0);
    cStack_d8 = '\x01';
  }
  uStack_d0 = *(undefined8 *)(lVar2 + 0x5c0);
  lStack_c8 = *(long *)(lVar2 + 0x5c8);
  if (lStack_c8 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_02 != 0);
  }
  uStack_c0 = *(undefined8 *)(lVar2 + 0x5d0);
  pcStack_68 = FUN_10b12f4b8;
  ppuStack_60 = &PTR_FUN_110cbcfc8;
  lVar2 = 0x620;
  __Znwm();
  FUN_10b1238dc();
  func_0x00010b135ba8();
  *(undefined8 *)(lVar2 + 0x568) = uStack_170;
  *(undefined8 *)(lVar2 + 0x560) = uStack_178;
  uStack_178 = 0;
  uStack_170 = 0;
  *(undefined8 *)(lVar2 + 0x578) = uStack_160;
  *(undefined8 *)(lVar2 + 0x570) = uStack_168;
  uStack_168 = 0;
  uStack_160 = 0;
  *(undefined8 *)(lVar2 + 0x588) = uStack_150;
  *(undefined8 *)(lVar2 + 0x580) = uStack_158;
  uStack_158 = 0;
  uStack_150 = 0;
  *(undefined4 *)(lVar2 + 0x590) = uStack_148;
  func_0x00010b121ddc(lVar2 + 0x598,auStack_140);
  *(long *)(lVar2 + 0x5b8) = lStack_120;
  if (lStack_120 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_03 != 0);
  }
  *(undefined1 *)(lVar2 + 0x5c0) = 0;
  *(undefined1 *)(lVar2 + 0x5e0) = 0;
  if (cStack_f8 == '\x01') {
    *(undefined4 *)(lVar2 + 0x5c0) = auStack_118[0];
    *(undefined8 *)(lVar2 + 0x5d8) = uStack_100;
    *(undefined8 *)(lVar2 + 0x5d0) = uStack_108;
    *(undefined8 *)(lVar2 + 0x5c8) = uStack_110;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    *(undefined1 *)(lVar2 + 0x5e0) = 1;
  }
  *(undefined1 *)(lVar2 + 0x5e8) = 0;
  *(undefined1 *)(lVar2 + 0x600) = 0;
  uVar1 = cStack_d8 == '\x01';
  if ((bool)uVar1) {
    *(long *)(lVar2 + 0x5f0) = lStack_e8;
    *(ulong *)(lVar2 + 0x5e8) = uStack_f0;
    uStack_f0 = 0;
    lStack_e8 = 0;
    *(undefined8 *)(lVar2 + 0x5f8) = uStack_e0;
    *(undefined1 *)(lVar2 + 0x600) = 1;
  }
  *(long *)(lVar2 + 0x610) = lStack_c8;
  *(undefined8 *)(lVar2 + 0x608) = uStack_d0;
  uStack_d0 = 0;
  lStack_c8 = 0;
  *(undefined8 *)(lVar2 + 0x618) = uStack_c0;
  lStack_58 = lVar2;
  func_0x00010b1346dc();
  func_0x00010b134584();
  func_0x00010b133eb4(ppuStack_60);
  FUN_10b12f45c(auStack_6d8);
  FUN_10b127ebc(auStack_b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_90);
  FUN_10b1231c8(auStack_700);
  func_0x00010b133dfc(uStack_8);
  if (!(bool)uVar1) {
    ___stack_chk_fail();
    func_0x00010b133eb4(ppuStack_60);
    FUN_10b12f45c(auStack_6d8);
    FUN_10b127ebc(auStack_b8);
    do {
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_90);
      FUN_10b1231c8(auStack_700);
      func_0x00010b1343d0();
    } while( true );
  }
  return;
}



/* Entry: 10b12f45c; end: 10b12f4b7;  */

long FUN_10b12f45c(long param_1)

{
  func_0x00010b129c40(param_1 + 0x608);
  FUN_10b123d38(param_1 + 0x5e8);
  FUN_10b1231c8(param_1 + 0x5c0);
  func_0x00010b12b970(param_1 + 0x5b8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x598);
  func_0x00010b12592c(param_1 + 0x580);
  FUN_10b1237f0(param_1 + 0x560);
  func_0x00010b121af0(param_1 + 0x2e8);
  func_0x000107c279a4(param_1 + 0x2c0);
  func_0x0001052a038c(param_1 + 0x278);
  func_0x00010539dd5c(param_1 + 0x40);
  return param_1;
}



/* Entry: 10b12f4b8; end: 10b12f56b;  */

void FUN_10b12f4b8(undefined8 param_1,long param_2)

{
  long extraout_x8;
  int extraout_w10;
  long lVar1;
  undefined8 auStack_40 [2];
  undefined1 auStack_30 [16];
  
  lVar1 = *(long *)(param_2 + 0x10);
  auStack_40[0] = CONCAT44(auStack_40[0]._4_4_,(uint)*(byte *)(lVar1 + 0x5e0) << 2);
  FUN_10b118928(auStack_30,*(long *)(lVar1 + 0x580) + 0x18,
                (ulong)*(uint *)(lVar1 + 0x590) | 0x100000000,lVar1 + 0x2e8,lVar1 + 0x598,
                lVar1 + 0x5b8,auStack_40,lVar1 + 0x5e8,lVar1,1);
  func_0x00010b135ad4();
  auStack_40[0] = param_1;
  if (extraout_x8 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  FUN_10b11d020(lVar1 + 0x560,auStack_40);
  func_0x00010b0f7f30(auStack_40);
  FUN_10b1a1ae8(*(undefined8 *)(lVar1 + 0x608),*(undefined8 *)(lVar1 + 0x618));
  func_0x00010b13559c();
  return;
}



/* Entry: 10b12f56c; end: 10b12f58b;  */

void FUN_10b12f56c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b12f45c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b12f58c; end: 10b12f58f;  */

void FUN_10b12f58c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b12f590; end: 10b12f5af;  */

void FUN_10b12f590(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b11a120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b12f5b0; end: 10b12f5b3;  */

void FUN_10b12f5b0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b12f5b4; end: 10b12f5e3;  */

void FUN_10b12f5b4(long param_1)

{
  char cVar1;
  ulong uVar2;
  undefined **ppuVar3;
  undefined1 in_ZR;
  undefined **ppuVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 extraout_x8;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  int extraout_w10;
  int extraout_w10_00;
  undefined *puVar10;
  long *plVar11;
  long *plVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 *unaff_x19;
  long *plVar18;
  undefined8 *puVar19;
  undefined **ppuStack_318;
  undefined1 uStack_310;
  undefined **ppuStack_308;
  undefined1 uStack_300;
  undefined1 auStack_2f8 [48];
  int aiStack_2c8 [2];
  int iStack_2c0;
  long lStack_2b8;
  undefined4 uStack_2ac;
  int aiStack_250 [2];
  int iStack_248;
  long lStack_240;
  undefined **ppuStack_1d8;
  char cStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long lStack_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  long *plStack_188;
  long alStack_180 [12];
  undefined8 *puStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  long *plStack_b0;
  long lStack_a8;
  long lStack_a0;
  char cStack_50;
  undefined8 uStack_48;
  
  FUN_10b1a1614(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x20));
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010b1aa2b8(*(undefined8 *)(param_1 + 0x10));
  uStack_1c8 = uVar6;
  uStack_48 = extraout_x8;
  FUN_10b19af84(&ppuStack_1d8);
  func_0x00010b1aa5c8(aiStack_250);
  ppuVar3 = (undefined **)(unaff_x19 + 0xc5);
  ppuVar4 = ppuVar3;
  func_0x00010b1a75c4(ppuVar3,&uStack_1c8);
  if (ppuVar4 == (undefined **)0x0) goto LAB_10b1a1ec8;
  puVar10 = (undefined *)unaff_x19[0xc6];
  puVar7 = *ppuVar4;
  puVar8 = ppuVar4[1];
  puVar14 = puVar10 + -1;
  if (((ulong)puVar10 & (ulong)puVar14) == 0) {
    puVar8 = (undefined *)((ulong)puVar14 & (ulong)puVar8);
  }
  else if (puVar10 <= puVar8) {
    uVar2 = 0;
    if (puVar10 != (undefined *)0x0) {
      uVar2 = (ulong)puVar8 / (ulong)puVar10;
    }
    puVar8 = puVar8 + -(uVar2 * (long)puVar10);
  }
  puVar15 = *ppuVar3;
  ppuVar3 = *(undefined ***)(puVar15 + (long)puVar8 * 8);
  do {
    ppuVar13 = ppuVar3;
    ppuVar3 = (undefined **)*ppuVar13;
  } while ((undefined **)*ppuVar13 != ppuVar4);
  ppuStack_f0 = (undefined **)(unaff_x19 + 199);
  if (ppuVar13 == ppuStack_f0) {
LAB_10b1a1bb0:
    if (puVar7 == (undefined *)0x0) {
LAB_10b1a1be4:
      *(undefined8 *)(puVar15 + (long)puVar8 * 8) = 0;
      puVar7 = *ppuVar4;
      goto LAB_10b1a1bec;
    }
    puVar16 = *(undefined **)(puVar7 + 8);
    if (((ulong)puVar10 & (ulong)puVar14) == 0) {
      puVar17 = (undefined *)((ulong)puVar16 & (ulong)puVar14);
    }
    else {
      puVar17 = puVar16;
      if (puVar10 <= puVar16) {
        uVar2 = 0;
        if (puVar10 != (undefined *)0x0) {
          uVar2 = (ulong)puVar16 / (ulong)puVar10;
        }
        puVar17 = puVar16 + -(uVar2 * (long)puVar10);
      }
    }
    if (puVar17 != puVar8) goto LAB_10b1a1be4;
LAB_10b1a1bf4:
    if (((ulong)puVar10 & (ulong)puVar14) == 0) {
      puVar16 = (undefined *)((ulong)puVar16 & (ulong)puVar14);
    }
    else if (puVar10 <= puVar16) {
      uVar2 = 0;
      if (puVar10 != (undefined *)0x0) {
        uVar2 = (ulong)puVar16 / (ulong)puVar10;
      }
      puVar16 = puVar16 + -(uVar2 * (long)puVar10);
    }
    if (puVar16 != puVar8) {
      *(undefined ***)(puVar15 + (long)puVar16 * 8) = ppuVar13;
      puVar7 = *ppuVar4;
    }
  }
  else {
    puVar16 = ppuVar13[1];
    if (((ulong)puVar10 & (ulong)puVar14) == 0) {
      puVar16 = (undefined *)((ulong)puVar16 & (ulong)puVar14);
    }
    else if (puVar10 <= puVar16) {
      uVar2 = 0;
      if (puVar10 != (undefined *)0x0) {
        uVar2 = (ulong)puVar16 / (ulong)puVar10;
      }
      puVar16 = puVar16 + -(uVar2 * (long)puVar10);
    }
    if (puVar16 != puVar8) goto LAB_10b1a1bb0;
LAB_10b1a1bec:
    if (puVar7 != (undefined *)0x0) {
      puVar16 = *(undefined **)(puVar7 + 8);
      goto LAB_10b1a1bf4;
    }
  }
  *ppuVar13 = puVar7;
  *ppuVar4 = (undefined *)0x0;
  unaff_x19[200] = unaff_x19[200] + -1;
  uStack_e8 = 1;
  ppuStack_f8 = ppuVar4;
  FUN_10b1a6098(&ppuStack_f8);
  func_0x00010b1aa5c8(aiStack_2c8);
  in_ZR = aiStack_2c8[0] == aiStack_250[0];
  if (((!(bool)in_ZR) || (in_ZR = iStack_2c0 == iStack_248, !(bool)in_ZR)) ||
     (in_ZR = lStack_2b8 == lStack_240, !(bool)in_ZR)) {
    FUN_10b1a1934(unaff_x19,aiStack_2c8);
  }
  if (unaff_x19[200] == 0) {
    puVar7 = &UNK_10f731335;
    func_0x000107c278b8(&ppuStack_f8);
    func_0x00010b1aae6c(auStack_2f8,unaff_x19);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppuStack_f8);
    if (*(char *)((long)unaff_x19 + 0x46b) == '\x01') {
      ppuStack_308 = ppuStack_1d8;
      uStack_300 = cStack_1d0;
      ppuStack_1d8 = (undefined **)0x0;
      cStack_1d0 = '\0';
      puVar7 = (undefined *)0x0;
      FUN_10b19fb24(auStack_2f8);
      FUN_10b122f98(&ppuStack_308);
      func_0x00010b1aabf8(&ppuStack_f8);
      if (cStack_1d0 == '\x01') {
        __ZNSt3__121recursive_timed_mutex6unlockEv(ppuStack_1d8);
      }
      ppuStack_1d8 = ppuStack_f8;
      cStack_1d0 = ppuStack_f0._0_1_;
      ppuStack_f8 = (undefined **)0x0;
      ppuStack_f0 = (undefined **)((ulong)ppuStack_f0 & 0xffffffffffffff00);
      FUN_10b122f98(&ppuStack_f8);
    }
    puVar5 = unaff_x19;
    FUN_10b19af40();
    if (unaff_x19[0xb9] != 0) {
      plVar18 = (long *)unaff_x19[0x88];
      uStack_1b8 = unaff_x19[0x1d];
      uStack_1c0 = unaff_x19[0x1c];
      if (unaff_x19[0x1d] != 0) {
        do {
          func_0x00010b1aa2e0();
        } while (extraout_w10 != 0);
      }
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                (&uStack_1b0,unaff_x19[0x6f]);
      lStack_c8 = lStack_1a0;
      uStack_e0 = uStack_1b8;
      uStack_e8 = uStack_1c0;
      uStack_198 = *(undefined4 *)(unaff_x19 + 0x6e);
      uStack_194 = uStack_2ac;
      uStack_190 = *(undefined4 *)((long)unaff_x19 + 0x374);
      plVar11 = (long *)unaff_x19[0xb7];
      lStack_a8 = unaff_x19[0xb8];
      lStack_a0 = unaff_x19[0xb9];
      plVar12 = alStack_180;
      if (lStack_a0 != 0) {
        *(long **)(lStack_a8 + 0x10) = alStack_180;
        unaff_x19[0xb7] = unaff_x19 + 0xb8;
        unaff_x19[0xb8] = 0;
        unaff_x19[0xb9] = 0;
        plVar12 = plVar11;
      }
      ppuStack_f8 = (undefined **)FUN_10b1a8a30;
      ppuStack_f0 = &PTR_DAT_110cc2f00;
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      uStack_d0 = uStack_1a8;
      uStack_d8 = uStack_1b0;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      uStack_c0 = CONCAT44(uStack_2ac,uStack_198);
      lStack_1a0 = 0;
      plStack_b0 = &lStack_a8;
      plStack_188 = plVar12;
      alStack_180[0] = lStack_a8;
      if (lStack_a0 != 0) {
        *(long **)(lStack_a8 + 0x10) = plStack_b0;
        alStack_180[0] = 0;
        plStack_188 = alStack_180;
        plStack_b0 = plVar12;
      }
      alStack_180[1] = 0;
      puVar7 = (undefined *)0x0;
      uStack_b8 = uStack_190;
      func_0x00010b1aab58(*(undefined8 *)(*plVar18 + 0x10));
      func_0x00010b1aa400(ppuStack_f0);
      puVar5 = &uStack_1c0;
      func_0x00010b1a2160();
    }
    cVar1 = *(char *)(unaff_x19 + 0xca);
    *(undefined1 *)(unaff_x19 + 0xca) = 0;
    in_ZR = cVar1 == '\x01';
    if ((bool)in_ZR) {
      ppuStack_318 = ppuStack_1d8;
      uStack_310 = cStack_1d0;
      ppuStack_1d8 = (undefined **)0x0;
      cStack_1d0 = 0;
      if ((unaff_x19[0x8e] != 0) && (unaff_x19[0x77] != 0)) {
        lVar9 = (long)*(char *)(unaff_x19[0x6f] + 0x17);
        if (lVar9 < 0) {
          lVar9 = *(long *)(unaff_x19[0x6f] + 8);
        }
        if (((lVar9 != 0) && (lVar9 = *(long *)(unaff_x19[0x8e] + 0x148), lVar9 != 0)) &&
           (((*(byte *)((long)unaff_x19 + 0x469) & 1) == 0 &&
            ((func_0x00010b1aac00(), ((ulong)puVar7 & 1) != 0 &&
             (in_ZR = puVar5 == (undefined8 *)0x1, 0 < (long)puVar5)))))) {
          in_ZR = *(char *)(unaff_x19 + 0x14) == '\x01';
          if ((bool)in_ZR) {
            if (unaff_x19[0x97] != 0) {
              puVar19 = unaff_x19 + 0x96;
              func_0x000107c27bdc();
              puVar19 = puVar19 + 5;
LAB_10b1a1f3c:
              puVar19 = (undefined8 *)*puVar19;
              in_ZR = puVar19 == (undefined8 *)0x1;
              if (0 < (long)puVar19) {
                ppuStack_f8 = (undefined **)((ulong)ppuStack_f8 & 0xffffffffffffff00);
                cStack_50 = '\0';
                uStack_110 = 0;
                uStack_108 = 0;
                uStack_100 = 0;
                if (puVar19 < puVar5) {
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
                            (&uStack_1c0,unaff_x19 + 0x1e);
                  uStack_1a8 = unaff_x19[0x77];
                  lStack_1a0 = unaff_x19[0x78];
                  if (lStack_1a0 != 0) {
                    do {
                      func_0x00010b1aa2e0();
                    } while (extraout_w10_00 != 0);
                  }
                  func_0x00010b1aa5c8(&uStack_198);
                  puStack_120 = puVar19;
                  if (cStack_50 == '\x01') {
                    func_0x00010b1a3edc();
                  }
                  else {
                    func_0x00010b1a3f5c(&ppuStack_f8,&uStack_1c0);
                    cStack_50 = '\x01';
                  }
                  FUN_10b12ec28(&uStack_1c0);
                }
                else {
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
                            (&uStack_110,unaff_x19 + 0x1e);
                }
                FUN_10b19cef0(&ppuStack_318);
                in_ZR = cStack_50 == '\x01';
                if ((bool)in_ZR) {
                  func_0x00010b1a3f5c(&uStack_1c0,&ppuStack_f8);
                  FUN_10b1afdc8(lVar9,&uStack_1c0);
                  FUN_10b12ec28(&uStack_1c0);
                }
                else {
                  FUN_10b1b0064(lVar9,&uStack_110);
                }
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_110);
                FUN_10b1a3f9c(&ppuStack_f8);
              }
            }
          }
          else {
            in_ZR = 0;
            if (*(char *)(unaff_x19 + 0x2f) == '\x01') {
              puVar19 = unaff_x19 + 0x2c;
              goto LAB_10b1a1f3c;
            }
          }
        }
      }
      func_0x00010b1aa468();
    }
    FUN_10b1a45c4(auStack_2f8);
  }
  func_0x00010529fe04(aiStack_2c8);
LAB_10b1a1ec8:
  func_0x00010529fe04(aiStack_250);
  FUN_10b122f98(&ppuStack_1d8);
  func_0x00010b1aa28c(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b1aada8();
    FUN_10b12ec28();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_110);
    FUN_10b1a3f9c(&ppuStack_f8);
    FUN_10b122f98(&ppuStack_318);
    FUN_10b1a45c4(auStack_2f8);
    func_0x00010529fe04(aiStack_2c8);
    func_0x00010529fe04(aiStack_250);
    FUN_10b122f98(&ppuStack_1d8);
    do {
      func_0x00010b1aa3d8();
    } while( true );
  }
  return;
}



/* Entry: 10b12f5e4; end: 10b12f5ff;  */

void FUN_10b12f5e4(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b12f600; end: 10b12f633;  */

void FUN_10b12f600(void)

{
  func_0x00010b134308();
  func_0x00010b1362ec();
  func_0x00010b1342a8();
  func_0x00010b134e3c();
  return;
}



/* Entry: 10b12f634; end: 10b12f683;  */

void FUN_10b12f634(long param_1)

{
  param_1 = param_1 + 8;
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return;
}



/* Entry: 10b12f684; end: 10b12f6e3;  */

void FUN_10b12f684(long param_1)

{
  long extraout_x9;
  int extraout_w11;
  undefined8 *unaff_x19;
  
  func_0x00010b134828();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    do {
      func_0x00010b1340a4();
    } while (extraout_w11 != 0);
    if (extraout_x9 == 0) {
      func_0x00010b1343b8();
    }
  }
  return;
}



/* Entry: 10b12f6e4; end: 10b12f6f7;  */

void FUN_10b12f6e4(void)

{
  func_0x00010b12f6bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b12f6f8; end: 10b12f767;  */

void FUN_10b12f6f8(long param_1)

{
  func_0x00010b1354d8(*(undefined8 *)(param_1 + 0xd8));
  func_0x00010b134c94();
  func_0x00010b134d6c();
  func_0x00010b1350ac();
  return;
}



/* Entry: 10b12f768; end: 10b12f7c7;  */

void FUN_10b12f768(long param_1)

{
  long extraout_x9;
  int extraout_w11;
  undefined8 *unaff_x19;
  
  func_0x00010b134828();
  *unaff_x19 = 0;
  if (param_1 != 0) {
    do {
      func_0x00010b1340a4();
    } while (extraout_w11 != 0);
    if (extraout_x9 == 0) {
      func_0x00010b1343b8();
    }
  }
  return;
}



/* Entry: 10b12f7c8; end: 10b12f7db;  */

void FUN_10b12f7c8(void)

{
  func_0x00010b12f7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b12f7dc; end: 10b12f84b;  */

void FUN_10b12f7dc(long param_1)

{
  func_0x00010b1354d8(*(undefined8 *)(param_1 + 0xd8));
  func_0x00010b134c94();
  func_0x00010b134d6c();
  func_0x00010b1350ac();
  return;
}



/* Entry: 10b12f84c; end: 10b12f8c3;  */

void FUN_10b12f84c(undefined1 *param_1)

{
  uint uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b134530();
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  FUN_10b123f0c();
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if (uVar1 != 0xffffffff) {
    (*(code *)(&PTR_FUN_110cbd0d0)[uVar1])(&stack0xffffffffffffffc8);
    *(uint *)(unaff_x19 + 0x10) = uVar1;
  }
  FUN_10b12255c(unaff_x19 + 0x18,unaff_x20 + 0x18);
  *(undefined4 *)(unaff_x19 + 0x308) = *(undefined4 *)(unaff_x20 + 0x308);
  return;
}



/* Entry: 10b12f8c4; end: 10b12f8cb;  */

void FUN_10b12f8c4(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = *param_2;
  puVar1[1] = param_2[1];
  *puVar1 = uVar2;
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



/* Entry: 10b12f8cc; end: 10b1302f3;  */

undefined8 ****** FUN_10b12f8cc(long param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  byte bVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  undefined8 ******ppppppuVar9;
  undefined8 ******ppppppuVar10;
  undefined8 in_x7;
  byte extraout_w8;
  undefined1 extraout_w8_00;
  undefined4 extraout_w8_01;
  undefined8 extraout_x8;
  undefined8 *****extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 *extraout_x8_02;
  undefined8 *extraout_x8_03;
  undefined8 *****pppppuVar11;
  undefined8 extraout_x8_04;
  undefined8 ******extraout_x8_05;
  undefined8 ******extraout_x8_06;
  undefined8 *extraout_x8_07;
  undefined4 extraout_w9;
  undefined8 extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  undefined8 ******ppppppuVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  long *plVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auStack_b98 [24];
  char cStack_b80;
  long lStack_b78;
  undefined8 uStack_b70;
  long lStack_b60;
  undefined8 uStack_b58;
  undefined1 uStack_b40;
  undefined1 uStack_b28;
  long alStack_b20 [4];
  undefined1 auStack_b00 [16];
  undefined8 *****pppppuStack_af0;
  undefined8 ****ppppuStack_ae8;
  undefined8 ****ppppuStack_ae0;
  undefined8 ****ppppuStack_ad8;
  undefined8 ****ppppuStack_ad0;
  undefined8 ****ppppuStack_ac8;
  undefined8 ****ppppuStack_ac0;
  undefined1 uStack_ab8;
  undefined8 *****pppppuStack_800;
  long lStack_7f8;
  undefined8 *****pppppuStack_7f0;
  undefined8 *puStack_7e8;
  undefined1 auStack_7e0 [32];
  undefined1 auStack_7c0 [32];
  undefined1 auStack_7a0 [120];
  byte bStack_728;
  long lStack_720;
  long lStack_718;
  undefined1 uStack_710;
  long lStack_708;
  long lStack_700;
  long lStack_6f8;
  undefined8 *****pppppuStack_6f0;
  undefined8 ****ppppuStack_6e8;
  undefined8 *****pppppuStack_6e0;
  undefined **ppuStack_6d8;
  byte bStack_6d0;
  undefined8 *****pppppuStack_6c8;
  long lStack_6c0;
  undefined1 auStack_6b8 [24];
  undefined8 *****pppppuStack_6a0;
  undefined8 *****pppppuStack_690;
  undefined **ppuStack_688;
  undefined1 auStack_678 [104];
  undefined8 ****appppuStack_610 [3];
  undefined1 auStack_5f8 [72];
  long lStack_5b0;
  char cStack_5a0;
  int iStack_594;
  byte bStack_570;
  char cStack_436;
  code *pcStack_380;
  undefined **ppuStack_378;
  undefined8 uStack_370;
  undefined8 *****pppppuStack_338;
  undefined **ppuStack_330;
  undefined8 *****pppppuStack_328;
  long lStack_320;
  undefined8 uStack_318;
  undefined1 auStack_310 [760];
  undefined8 uStack_18;
  
  func_0x00010b134cf8();
  func_0x00010b133e8c();
  plVar15 = *(long **)(param_1 + 0x10);
  ppppppuVar12 = (undefined8 ******)plVar15[0x6f];
  uStack_18 = extraout_x8;
  func_0x00010b135cac();
  if ((char)plVar15[0x6e] == '\x01') {
    FUN_10b121c1c(auStack_5f8,plVar15 + 0x1f);
  }
  else {
    func_0x00010b1344c4(auStack_5f8,ppppppuVar12[5],plVar15 + 0x1a);
  }
  pppppuVar11 = ppppppuVar12[0x18];
  ppppuStack_ae8 = ppppppuVar12[0x19];
  pppppuStack_af0 = pppppuVar11;
  if ((undefined8 *****)ppppuStack_ae8 != (undefined8 *****)0x0) {
    do {
      func_0x00010b133f58();
      pppppuVar11 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  if (pppppuVar11 != (undefined8 *****)0x0) {
    pppppuVar11 = pppppuVar11 + 6;
    FUN_10b1ae664(pppppuVar11,auStack_5f8);
    if ((int)pppppuVar11 != 0) {
      func_0x00010b1344c4(&pppppuStack_338,ppppppuVar12[5],plVar15 + 0x1a);
      FUN_10b1151e4(auStack_5f8,&pppppuStack_338);
      func_0x00010b121af0(&pppppuStack_338);
    }
  }
  ppppppuVar9 = &pppppuStack_af0;
  func_0x00010b125888();
  func_0x00010b135cac();
  if (cStack_436 == '\x01') {
    func_0x00010b135358();
    uVar14 = *extraout_x8_01;
    func_0x00010b135a38();
    func_0x00010b135c08();
    FUN_10b20bd54(uVar14,&pppppuStack_338);
    func_0x00010b13543c();
  }
  if (cStack_5a0 == '\x01') {
    if (lStack_5b0 < 1) {
      uVar17 = 0;
    }
    else {
      ppppppuVar10 = ppppppuVar12;
      FUN_10b11b37c(ppppppuVar12,auStack_5f8,&UNK_10f7300e1,0x11);
      uVar17 = (uint)((int)ppppppuVar10 == 3);
    }
  }
  else {
    uVar17 = 1;
  }
  bVar6 = bStack_570 == 1 && iStack_594 == 2;
  if (bStack_570 == 1 && iStack_594 == 2) {
    iVar7 = (int)auStack_5f8;
    FUN_10b1c4c0c();
    if (iVar7 == 0) goto LAB_10b12fa54;
    func_0x00010b135358();
    FUN_10b20bea8(*extraout_x8_02,&UNK_10f7300f3,0x15);
    func_0x00010b134c50(&pppppuStack_338);
    FUN_10b129c64(pppppuStack_328,auStack_5f8);
    func_0x00010b1358f4();
    uVar18 = 1;
  }
  else {
LAB_10b12fa54:
    uVar18 = 0;
  }
  uVar8 = (uint)auStack_5f8;
  FUN_10b11b654();
  if (uVar8 != 0) {
    func_0x00010b135358();
    uVar14 = *extraout_x8_03;
    func_0x00010b1348b4(cStack_5a0);
    uVar13 = extraout_w9;
    if ((bool)bVar6) {
      uVar13 = extraout_w8_01;
    }
    FUN_10b11b69c(auStack_5f8);
    func_0x00010b1360d8(uVar14,&UNK_10f730109,0x17,uVar13,&UNK_10f72f7f3);
    func_0x00010b134c50(&pppppuStack_338);
    FUN_10b129c64(pppppuStack_328,auStack_5f8);
    func_0x00010b1358f4();
  }
  if (((uVar18 | uVar8 | uVar17 | bStack_570 ^ 0xffffffff) & 1) != 0) {
    func_0x00010b135358();
    func_0x00010b135c08();
    func_0x00010b134cc0();
    func_0x00010b13543c();
    pppppuVar11 = (undefined8 *****)*plVar15;
    ppppppuVar12 = (undefined8 ******)pppppuVar11[3][6][6];
    puStack_7e8 = pppppuVar11[3][6][7];
    pppppuStack_7f0 = ppppppuVar12;
    if ((undefined8 **)puStack_7e8 != (undefined8 **)0x0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10 != 0);
      pppppuVar11 = (undefined8 *****)*plVar15;
    }
    ppppuStack_ae8 = (undefined8 ****)plVar15[1];
    pppppuStack_af0 = pppppuVar11;
    if ((undefined8 *****)ppppuStack_ae8 != (undefined8 *****)0x0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10_00 != 0);
    }
    func_0x00010b123c68(&ppppuStack_ae0,plVar15 + 2);
    ppppppuVar9 = (undefined8 ******)&ppppuStack_ac0;
    func_0x00010b135e10();
    pppppuStack_338 = (undefined8 *****)FUN_10b13042c;
    ppuStack_330 = &PTR_FUN_110cbd0e0;
    func_0x00010b135d68();
    ppppppuVar9[1] = (undefined8 *****)ppppuStack_ae8;
    *ppppppuVar9 = pppppuStack_af0;
    pppppuStack_af0 = (undefined8 ******)0x0;
    ppppuStack_ae8 = (undefined8 *****)0x0;
    ppppppuVar9[3] = (undefined8 *****)ppppuStack_ad8;
    ppppppuVar9[2] = (undefined8 *****)ppppuStack_ae0;
    ppppuStack_ae0 = (undefined8 *****)0x0;
    ppppuStack_ad8 = (undefined8 *****)0x0;
    ppppppuVar9[5] = (undefined8 *****)ppppuStack_ac8;
    ppppppuVar9[4] = (undefined8 *****)ppppuStack_ad0;
    ppppuStack_ad0 = (undefined8 *****)0x0;
    ppppuStack_ac8 = (undefined8 *****)0x0;
    func_0x00010b121ddc(ppppppuVar9 + 6,&ppppuStack_ac0);
    pppppuStack_328 = ppppppuVar9;
    func_0x00010b1346dc();
    func_0x00010b134584();
    func_0x00010b133eb4(ppuStack_330);
    FUN_10b1302f4(&pppppuStack_af0);
    ppppppuVar9 = &pppppuStack_7f0;
    FUN_10b127ebc(ppppppuVar9);
    goto LAB_10b12ffa0;
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (appppuStack_610,auStack_5f8);
  lVar3 = plVar15[0x1e];
  FUN_10b11fae8(auStack_678,ppppppuVar12,*(undefined1 *)((long)plVar15 + 0xf1));
  pppppuStack_af0 = (undefined8 *****)((ulong)pppppuStack_af0 & 0xffffffffffffff00);
  uStack_ab8 = 0;
  ppppppuVar10 = &pppppuStack_af0;
  func_0x00010b1359c0();
  func_0x00010b135e68(&pppppuStack_338,ppppppuVar12,auStack_5f8,(char)lVar3,plVar15 + 0xb,
                      plVar15 + 0x1a,auStack_678,in_x7,extraout_x9,extraout_x8_04,ppppppuVar10,
                      cStack_436);
  func_0x00010b121ac0(auStack_678);
  pppppuStack_690 = pppppuStack_338;
  ppuStack_688 = ppuStack_330;
  ppppppuVar10 = (undefined8 ******)pppppuStack_338;
  if (ppuStack_330 != (undefined **)0x0) {
    do {
      func_0x00010b133f58();
      ppppppuVar10 = extraout_x8_05;
    } while (extraout_w11_00 != 0);
  }
  bVar1 = ppppppuVar10 == (undefined8 ******)0x0;
  bVar2 = (undefined8 ******)pppppuStack_328 == (undefined8 ******)0x0;
  bVar4 = bVar1 && bVar2;
  if (ppppppuVar10 == (undefined8 ******)0x0 &&
      (undefined8 ******)pppppuStack_328 == (undefined8 ******)0x0) {
    func_0x00010b134c50(&pppppuStack_af0);
    pppppuVar11 = (undefined8 *****)ppppuStack_ae0;
    FUN_10b129c64(ppppuStack_ae0,appppuStack_610);
    uVar13 = *(undefined4 *)(pppppuVar11 + 0x61);
    func_0x00010b135e08();
    ppppppuVar10 = (undefined8 ******)pppppuStack_690;
    if ((undefined8 ******)pppppuStack_690 == (undefined8 ******)0x0) goto LAB_10b12fc98;
LAB_10b12fcb0:
    ppppuStack_ae8 = (undefined8 ****)(long)(char)*(code *)((long)ppppppuVar10 + 0x777);
    if ((long)ppppuStack_ae8 < 0) {
      pppppuStack_af0 = ppppppuVar10[0xec];
      ppppuStack_ae8 = ppppppuVar10[0xed];
    }
    else {
      pppppuStack_af0 = ppppppuVar10 + 0xec;
    }
  }
  else {
    uVar13 = 4;
    if (ppppppuVar10 != (undefined8 ******)0x0) goto LAB_10b12fcb0;
LAB_10b12fc98:
    if ((undefined8 ******)pppppuStack_328 == (undefined8 ******)0x0) {
      ppppppuVar10 = (undefined8 ******)appppuStack_610;
    }
    else {
      ppppppuVar10 = (undefined8 ******)pppppuStack_328;
      func_0x00010b12cc78();
    }
    ppppuStack_ae8 = (undefined8 ****)(long)*(char *)((long)ppppppuVar10 + 0x17);
    pppppuStack_af0 = ppppppuVar10;
    if ((long)ppppuStack_ae8 < 0) {
      pppppuStack_af0 = *ppppppuVar10;
      ppppuStack_ae8 = ppppppuVar10[1];
    }
  }
  pppppuVar11 = appppuStack_610;
  func_0x0001082afa98(pppppuVar11,&pppppuStack_af0);
  if ((undefined8 ******)pppppuStack_690 == (undefined8 ******)0x0) {
    bVar16 = 0;
    bVar5 = true;
    bVar6 = bVar4;
  }
  else {
    func_0x00010b134248();
    bVar5 = (undefined8 ******)pppppuStack_690 == (undefined8 ******)0x0;
    bVar6 = bVar5;
    bVar16 = bVar4;
  }
  bVar4 = 0;
  if (((undefined8 ******)pppppuStack_328 != (undefined8 ******)0x0) && (bVar5)) {
    bVar4 = *(byte *)((long)pppppuStack_328 + 0x469) ^ 1;
  }
  if (((!bVar1 || !bVar2) && (bVar16 & 1) == 0) && ((bVar4 & 1) == 0)) {
    func_0x00010b134c50(&pppppuStack_af0);
    pppppuVar11 = (undefined8 *****)ppppuStack_ae0;
    FUN_10b129c64(ppppuStack_ae0,appppuStack_610);
    *(undefined4 *)(pppppuVar11 + 0x61) = 2;
    func_0x00010b135e08();
  }
  func_0x00010b135cac();
  puStack_7e8 = (undefined8 *)plVar15[1];
  pppppuStack_7f0 = (undefined8 *****)*plVar15;
  if (plVar15[1] != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_01 != 0);
  }
  func_0x00010b135e10(auStack_7e0);
  func_0x00010b123c68(auStack_7c0,plVar15 + 2);
  FUN_10b121fd0(auStack_7a0,plVar15 + 0xb);
  bStack_6d0 = bVar4 & 1;
  lStack_718 = plVar15[7];
  lStack_720 = plVar15[6];
  uStack_710 = (undefined1)plVar15[8];
  lStack_708 = plVar15[9];
  lStack_700 = plVar15[10];
  ppuStack_6d8 = ppuStack_688;
  pppppuStack_6e0 = pppppuStack_690;
  bStack_728 = bVar16;
  lStack_6f8 = param_1;
  pppppuStack_6f0 = ppppppuVar9;
  ppppuStack_6e8 = pppppuVar11;
  if (ppuStack_688 != (undefined **)0x0) {
    do {
      func_0x00010b133f58();
      bStack_6d0 = extraout_w8;
    } while (extraout_w11_01 != 0);
  }
  pppppuStack_6c8 = pppppuStack_328;
  lStack_6c0 = lStack_320;
  if (lStack_320 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_02 != 0);
  }
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (auStack_6b8,appppuStack_610);
  pppppuStack_800 = pppppuStack_328;
  lStack_7f8 = lStack_320;
  ppppppuVar9 = (undefined8 ******)pppppuStack_328;
  pppppuStack_6a0 = ppppppuVar12;
  if (lStack_320 != 0) {
    do {
      func_0x00010b133f58();
      ppppppuVar9 = extraout_x8_06;
    } while (extraout_w11_02 != 0);
  }
  if (ppppppuVar9 == (undefined8 ******)0x0) {
    if ((undefined8 ******)pppppuStack_690 == (undefined8 ******)0x0) {
      func_0x00010b135358();
      FUN_10b20bf78(*extraout_x8_07,&UNK_10f730131,0x16,(int)plVar15[0x1d]);
      func_0x00010b135e10(alStack_b20);
      func_0x00010b135444();
      FUN_10b130968(auStack_b98,&UNK_10f730148);
      uStack_b58 = uStack_b70;
      lStack_b60 = lStack_b78;
      func_0x00010b13631c();
      uStack_b40 = 0;
      uStack_b28 = 0;
      bVar6 = cStack_b80 == '\x01';
      if ((bool)bVar6) {
        func_0x00010b1354bc();
        uStack_b28 = extraout_w8_00;
      }
      func_0x0001052b8c70(&pcStack_380,&lStack_b60);
      FUN_10b1195f4(&pppppuStack_af0,&pcStack_380);
      FUN_10b11c794(auStack_b00,ppppppuVar12,alStack_b20,&pppppuStack_af0,uVar13);
      FUN_10b11d020(plVar15 + 2,auStack_b00);
      func_0x00010b0f7f30(auStack_b00);
      func_0x00010b0faf64(&pppppuStack_af0);
      func_0x0001052a038c(&pcStack_380);
      func_0x0001052a03ac(&lStack_b60);
      func_0x00010b135504();
      func_0x00010b135288();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(alStack_b20);
      goto LAB_10b12fec8;
    }
    func_0x00010b135d0c();
    ppppppuVar12 = (undefined8 ******)pppppuStack_690;
    FUN_10b130318(&pppppuStack_af0,&pppppuStack_7f0);
    pcStack_380 = FUN_10b130980;
    ppuStack_378 = &PTR_FUN_110cbd110;
    uVar14 = 0x158;
    __Znwm();
    FUN_10b130318();
    uStack_370 = uVar14;
    FUN_10b192aec(alStack_b20,ppppppuVar12,&pcStack_380,plVar15 + 0xb);
    FUN_10b12ee94(&lStack_b60,alStack_b20);
    lVar3 = alStack_b20[0];
    alStack_b20[0] = 0;
    if (lVar3 != 0) {
      func_0x00010b133ecc();
    }
    func_0x00010b133eb4(ppuStack_378);
    FUN_10b1303e4(&pppppuStack_af0);
    if ((lStack_b60 != 0) && (plVar15[4] != 0)) {
      FUN_10b21069c(plVar15[4],&lStack_b60);
    }
    func_0x00010539eeb0(&lStack_b60);
  }
  else {
    FUN_10b12255c(&pppppuStack_af0,auStack_310);
    pcStack_380 = FUN_10b1304cc;
    ppuStack_378 = &PTR_FUN_110cbd0f8;
    uVar14 = 0x158;
    __Znwm();
    FUN_10b130318();
    uStack_370 = uVar14;
    FUN_10b118a10(ppppppuVar12,&pppppuStack_800,uStack_318,&pppppuStack_af0,plVar15 + 4,&pcStack_380
                  ,0);
    func_0x00010b133eec(ppuStack_378);
    FUN_10b122590(&pppppuStack_af0);
LAB_10b12fec8:
    func_0x00010b135d0c();
  }
  FUN_10b1303e4(&pppppuStack_7f0);
  FUN_10b129c1c(&pppppuStack_690);
  func_0x00010b121a94(&pppppuStack_338);
  ppppppuVar9 = (undefined8 ******)appppuStack_610;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppppuVar9);
LAB_10b12ffa0:
  func_0x00010b1352c0();
  func_0x00010b133dfc(uStack_18);
  if ((bool)bVar6) {
    return ppppppuVar9;
  }
  ___stack_chk_fail();
  func_0x00010b1353cc();
  func_0x00010539eeb0();
  FUN_10b1303e4(&pppppuStack_7f0);
  FUN_10b129c1c(&pppppuStack_690);
  func_0x00010b121a94(&pppppuStack_338);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appppuStack_610);
  func_0x00010b1352c0();
  func_0x00010b1343d0();
  func_0x00010b135038();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b1357bc();
  ppppppuVar9 = ppppppuVar12;
  func_0x000107c350ac();
  if (ppppppuVar9 != (undefined8 ******)0x0) {
    func_0x000107c278a0();
  }
  return ppppppuVar12;
}



/* Entry: 10b1302f4; end: 10b130317;  */

long FUN_10b1302f4(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b135038();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010b1357bc();
  lVar1 = unaff_x19;
  func_0x000107c350ac();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b130318; end: 10b1303e3;  */

void FUN_10b130318(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010b134530();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x00010b1360c4();
  func_0x00010b1237e0(unaff_x19 + 0x30,unaff_x20 + 0x30);
  FUN_10b121fd0(unaff_x19 + 0x50,unaff_x20 + 0x50);
  _memcpy(unaff_x19 + 200,unaff_x20 + 200,0x48);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x110);
  *(undefined8 *)(unaff_x19 + 0x118) = *(undefined8 *)(unaff_x20 + 0x118);
  *(undefined8 *)(unaff_x19 + 0x110) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined1 *)(unaff_x19 + 0x120) = *(undefined1 *)(unaff_x20 + 0x120);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x130);
  *(undefined8 *)(unaff_x19 + 0x128) = *(undefined8 *)(unaff_x20 + 0x128);
  *(undefined8 *)(unaff_x19 + 0x130) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x128) = 0;
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x140);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x138);
  *(undefined8 *)(unaff_x19 + 0x148) = *(undefined8 *)(unaff_x20 + 0x148);
  *(undefined8 *)(unaff_x19 + 0x140) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x138) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  *(undefined8 *)(unaff_x20 + 0x148) = 0;
  *(undefined8 *)(unaff_x20 + 0x138) = 0;
  *(undefined8 *)(unaff_x19 + 0x150) = *(undefined8 *)(unaff_x20 + 0x150);
  return;
}



/* Entry: 10b1303e4; end: 10b13042b;  */

undefined8 FUN_10b1303e4(long param_1)

{
  undefined8 unaff_x19;
  
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(param_1 + 0x138);
  func_0x00010b129c40(param_1 + 0x128);
  func_0x00010b129c1c(param_1 + 0x110);
  func_0x00010529fe04(param_1 + 0x50);
  FUN_10b1237f0(param_1 + 0x30);
  func_0x00010b134b74();
  func_0x000107c350ac();
  if (param_1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b13042c; end: 10b1304a7;  */

void FUN_10b13042c(void)

{
  undefined1 auStack_348 [776];
  undefined1 auStack_40 [16];
  
  func_0x00010b1357c4();
  FUN_10b11c900(auStack_348);
  FUN_10b11c794(auStack_40);
  func_0x00010b135e4c();
  func_0x00010b134db4();
  func_0x00010b134610();
  func_0x00010b1352c8();
  return;
}



/* Entry: 10b1304a8; end: 10b1304c7;  */

void FUN_10b1304a8(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b1302f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1304c8; end: 10b1304cb;  */

void FUN_10b1304c8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b1304cc; end: 10b130523;  */

void FUN_10b1304cc(void)

{
  undefined8 *unaff_x19;
  
  func_0x00010b134dd4();
  *unaff_x19 = 0;
  func_0x00010b1362a8();
  FUN_10b130524();
  func_0x00010b134bbc();
  func_0x00010b134610();
  return;
}



/* Entry: 10b130524; end: 10b130943;  */

void FUN_10b130524(undefined8 *param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined4 extraout_w8;
  undefined4 uVar4;
  undefined8 extraout_x8;
  undefined8 *extraout_x8_00;
  undefined4 extraout_w9;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_b00 [744];
  undefined1 auStack_818 [632];
  undefined1 auStack_5a0 [16];
  undefined1 auStack_590 [632];
  undefined1 auStack_318 [24];
  undefined1 auStack_300 [80];
  undefined4 uStack_2b0;
  char cStack_2a8;
  undefined1 auStack_88 [16];
  long lStack_78;
  undefined1 auStack_60 [40];
  undefined1 auStack_38 [40];
  undefined8 uStack_10;
  
  func_0x00010b134cf8();
  puVar2 = param_1;
  func_0x00010b133e8c();
  lVar7 = puVar2[0x2a];
  uVar1 = *(char *)(puVar2 + 0x24) == '\x01';
  uStack_10 = extraout_x8;
  if ((bool)uVar1) {
    FUN_10b1a23e0(auStack_300,param_1[0x25]);
  }
  else {
    func_0x00010b1340dc(auStack_300,*(undefined8 *)(lVar7 + 0x28),param_1 + 2);
  }
  FUN_10b119744(auStack_300,param_1 + 0x27,*(undefined8 *)(lVar7 + 0x28));
  func_0x00010b1349c0();
  uVar5 = *extraout_x8_00;
  func_0x00010b1348b4(cStack_2a8);
  uVar4 = extraout_w9;
  if ((bool)uVar1) {
    uVar4 = extraout_w8;
  }
  FUN_10b12983c(auStack_88,uVar4);
  uVar1 = cStack_2a8 == '\0';
  if ((bool)uVar1) {
    uStack_2b0 = 0;
  }
  func_0x00010b12aca4(auStack_60,uStack_2b0);
  func_0x00010b12460c(auStack_38,param_3);
  func_0x00010b134fbc(auStack_318,auStack_88);
  func_0x00010b134528(uVar5,6,auStack_318);
  FUN_10b120998(auStack_318);
  do {
    func_0x00010b135454();
    func_0x00010b135170();
  } while (!(bool)uVar1);
  uVar1 = *(char *)(param_1 + 0x19) == '\0';
  uVar4 = 1;
  if ((bool)uVar1) {
    uVar4 = 2;
  }
  *(undefined4 *)(param_2 + 0x270) = uVar4;
  FUN_10b117280(auStack_88,lVar7 + 0x58);
  FUN_10b129c64(lStack_78,auStack_300);
  *(int *)(lStack_78 + 0x308) = (int)param_3;
  FUN_10b12e544(lStack_78 + 0x18,param_2);
  func_0x000107c2798c(auStack_88);
  func_0x000107c28148();
  func_0x000107c278b8(auStack_88,&UNK_10f72f921);
  func_0x00010b135364();
  func_0x00010b133ef8();
  FUN_10b11ba74();
  func_0x00010b134ae8();
  func_0x000107c278b8();
  func_0x00010b135364();
  func_0x00010b133ef8();
  FUN_10b11ba74();
  func_0x00010b134ae8();
  func_0x000107c278b8();
  func_0x00010b135364();
  func_0x00010b133ef8();
  FUN_10b11ba74();
  func_0x00010b134ae8();
  func_0x000107c278b8();
  func_0x00010b135364();
  func_0x00010b133ef8();
  FUN_10b11ba74();
  func_0x00010b134ae8();
  func_0x000107c278b8();
  func_0x00010b135364();
  func_0x00010b133ef8();
  FUN_10b11ba74();
  func_0x00010b134ae8();
  if ((int)param_3 == 0) {
    func_0x000107c278b8();
    func_0x00010b135364();
    func_0x00010b133ef8();
    FUN_10b11ba74();
  }
  else {
    func_0x000107c278b8();
    func_0x00010b135364();
    func_0x00010b133ef8();
    FUN_10b11ba74();
  }
  func_0x00010b134ae8();
  if (*param_4 == 0) {
    lVar6 = param_1[0x22];
    if (lVar6 == 0) {
      uVar5 = *(undefined8 *)(lVar7 + 0x18);
      FUN_10b12394c(auStack_590,auStack_300);
      func_0x00010b135e98(auStack_88,uVar5,auStack_590);
    }
    else {
      FUN_10b194f44(auStack_88,lVar6);
    }
    FUN_10b11a178(param_4,auStack_88);
    func_0x00010b12b970(auStack_88);
    if (lVar6 == 0) {
      func_0x00010b121af0(auStack_590);
    }
  }
  uVar5 = *param_1;
  FUN_10b121c1c(auStack_818,auStack_300);
  FUN_10b123f60(auStack_b00,param_2);
  FUN_10b11bc00(auStack_5a0,uVar5,param_1 + 2,auStack_818,auStack_b00,param_4,param_1 + 10,
                *(undefined1 *)(param_1 + 0x19),param_1 + 6);
  func_0x00010b0f7f30(auStack_5a0);
  func_0x00010b0faf64(auStack_b00);
  func_0x00010b121af0(auStack_818);
  func_0x00010b121af0(auStack_300);
  func_0x00010b133dfc(uStack_10);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b121af0(auStack_590);
  puVar3 = auStack_300;
  func_0x00010b121af0();
  func_0x00010b1343d0();
  if (*(long *)(puVar3 + 8) != 0) {
    FUN_10b1303e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b130944; end: 10b130963;  */

void FUN_10b130944(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b1303e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b130964; end: 10b130967;  */

void FUN_10b130964(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b130968; end: 10b13097f;  */

void FUN_10b130968(void)

{
  func_0x000107c278b8();
  func_0x00010b135188();
  return;
}



/* Entry: 10b130980; end: 10b1309cf;  */

void FUN_10b130980(void)

{
  func_0x00010b1352ec();
  func_0x00010b1362a8();
  FUN_10b130524();
  func_0x00010b134bbc();
  func_0x00010b134610();
  return;
}



/* Entry: 10b1309d0; end: 10b1309ef;  */

void FUN_10b1309d0(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b1303e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1309f0; end: 10b1309f3;  */

void FUN_10b1309f0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b1309f4; end: 10b130a13;  */

void FUN_10b1309f4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b11bfe4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b130a14; end: 10b130a1f;  */

void FUN_10b130a14(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b130a20; end: 10b130a3f;  */

void FUN_10b130a20(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    func_0x00010b11d000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b130a40; end: 10b130a43;  */

void FUN_10b130a40(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b130a44; end: 10b130a9b;  */

void FUN_10b130a44(long param_1)

{
  long lVar1;
  long extraout_x8;
  int extraout_w11;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x10);
  uStack_28 = *(undefined8 *)(lVar1 + 0x38);
  uStack_30 = *(undefined8 *)(lVar1 + 0x30);
  if (*(long *)(lVar1 + 0x38) != 0) {
    do {
      func_0x00010b133f58();
      lVar1 = extraout_x8;
    } while (extraout_w11 != 0);
  }
  FUN_10b11d020(lVar1 + 0x10,&uStack_30);
  func_0x00010b0f7f30(&uStack_30);
  return;
}



/* Entry: 10b130a9c; end: 10b130abb;  */

void FUN_10b130a9c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b11cfdc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b130abc; end: 10b130abf;  */

void FUN_10b130abc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b130ac0; end: 10b130b53;  */

void FUN_10b130ac0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_110cbd158;
  puVar1 = param_1;
  func_0x00010b134ae0();
  func_0x00010b130af8();
  param_1[1] = puVar1;
  return;
}



/* Entry: 10b130b54; end: 10b130b57;  */

void FUN_10b130b54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbd188;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b130b58; end: 10b130b6b;  */

void FUN_10b130b58(void)

{
  FUN_10b130d2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b130b6c; end: 10b130c1b;  */

void FUN_10b130b6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b1340a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 10b130c1c; end: 10b130c3b;  */

void FUN_10b130c1c(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b11d2b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b130c3c; end: 10b130c3f;  */

void FUN_10b130c3c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b130c40; end: 10b130cb7;  */

void FUN_10b130c40(undefined8 *param_1)

{
  long extraout_x8;
  long lVar1;
  int extraout_w10;
  int extraout_w10_00;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar2;
  
  func_0x00010b136488();
  *param_1 = &PTR_FUN_110cbd1e8;
  func_0x00010b134ae0();
  func_0x00010b134f88();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  func_0x00010b136330();
  func_0x00010b121ddc();
  lVar1 = *(long *)(unaff_x21 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x21 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x38) = *(undefined8 *)(unaff_x21 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_00 != 0);
  }
  *(long *)(unaff_x19 + 8) = unaff_x20;
  return;
}



/* Entry: 10b130cb8; end: 10b130cbb;  */

undefined8 * FUN_10b130cb8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbd218;
  func_0x00010b13497c(param_1[8]);
  func_0x00010b13497c(param_1[2]);
  return param_1;
}



/* Entry: 10b130cbc; end: 10b130ccf;  */

void FUN_10b130cbc(void)

{
  FUN_10b130cf0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b130cd0; end: 10b130cef;  */

void FUN_10b130cd0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010b135578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))(param_2,(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 10b130cf0; end: 10b130d2b;  */

undefined8 * FUN_10b130cf0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbd218;
  func_0x00010b13497c(param_1[8]);
  func_0x00010b13497c(param_1[2]);
  return param_1;
}



/* Entry: 10b130d2c; end: 10b130d37;  */

void FUN_10b130d2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110cbd188;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10b130d38; end: 10b13105f;  */

void FUN_10b130d38(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 in_ZR;
  code **ppcVar4;
  long extraout_x8;
  code *extraout_x8_00;
  code *pcVar5;
  long extraout_x8_01;
  long extraout_x8_02;
  code *extraout_x9;
  undefined **extraout_x9_00;
  undefined **ppuVar6;
  code *extraout_x9_01;
  code *extraout_x9_02;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w12;
  int extraout_w12_00;
  int extraout_w12_01;
  int extraout_w12_02;
  code *pcVar7;
  code **ppcVar8;
  undefined1 auStack_418 [120];
  code **ppcStack_3a0;
  code **ppcStack_398;
  undefined1 *puStack_390;
  code *pcStack_388;
  code *pcStack_378;
  code *pcStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  code *pcStack_358;
  code *pcStack_350;
  code *pcStack_348;
  code *pcStack_340;
  int iStack_338;
  code *pcStack_330;
  undefined **ppuStack_328;
  undefined1 auStack_318 [88];
  byte bStack_2c0;
  undefined8 uStack_2a0;
  byte bStack_290;
  code *pcStack_a0;
  undefined **ppuStack_98;
  code *pcStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_38;
  
  func_0x00010b133e24();
  ppcVar8 = *(code ***)(param_1 + 0x10);
  pcVar7 = ppcVar8[8];
  func_0x00010b1340dc(auStack_318,*(undefined8 *)(pcVar7 + 0x28),ppcVar8 + 2);
  if (((bStack_2c0 & 1) == 0) && ((bStack_290 & 1) == 0)) {
    func_0x00010b1349c0();
    func_0x00010b135ec0();
    func_0x00010b134cc0();
    func_0x00010b1349e4();
    func_0x00010b1340c8();
    func_0x00010b135d38();
    pcStack_90 = ppcVar8[6];
    pcStack_340 = ppcVar8[7];
    lStack_88 = 0;
    pcStack_348 = pcStack_90;
    if (pcStack_340 != (code *)0x0) {
      do {
        func_0x00010b133f68();
        lStack_88 = extraout_x8;
        pcStack_90 = extraout_x9;
      } while (extraout_w12 != 0);
    }
    pcStack_a0 = FUN_10b131060;
    ppuStack_98 = &PTR_FUN_110cbd250;
    if (lStack_88 != 0) {
      do {
        func_0x00010b134088();
      } while (extraout_w10 != 0);
    }
    ppcVar8 = &pcStack_a0;
    func_0x00010b1346b0();
    func_0x00010b135ee4();
    func_0x00010b133ea8(ppuStack_98);
    ppcVar4 = &pcStack_348;
    func_0x0001052b81f4();
    func_0x00010b1355c4();
  }
  else {
    pcStack_330 = (code *)0x0;
    ppuStack_328 = (undefined **)0x0;
    FUN_10b11f99c(&pcStack_348,pcVar7,auStack_318);
    in_ZR = iStack_338 != 1 || pcStack_348 == (code *)0x0;
    if (iStack_338 == 1 && pcStack_348 != (code *)0x0) {
      ppuVar6 = (undefined **)0x0;
      pcVar5 = pcStack_348;
      if (pcStack_340 != (code *)0x0) {
        do {
          func_0x00010b133f68();
          pcVar5 = extraout_x8_00;
          ppuVar6 = extraout_x9_00;
        } while (extraout_w12_00 != 0);
      }
      ppuStack_98 = ppuStack_328;
      pcStack_a0 = pcStack_330;
      pcStack_330 = pcVar5;
      ppuStack_328 = ppuVar6;
      FUN_10b129c1c(&pcStack_a0);
    }
    if (pcStack_330 == (code *)0x0) {
      FUN_10b11b37c(pcVar7,auStack_318,&UNK_10f730182,10);
      if ((int)pcVar7 == 0) {
        func_0x00010b1340c8();
        func_0x00010b135fbc();
        pcStack_90 = ppcVar8[6];
        pcStack_370 = ppcVar8[7];
        lStack_88 = 0;
        pcStack_378 = pcStack_90;
        if (pcStack_370 != (code *)0x0) {
          do {
            func_0x00010b133f68();
            lStack_88 = extraout_x8_02;
            pcStack_90 = extraout_x9_02;
          } while (extraout_w12_02 != 0);
        }
        uStack_368 = uStack_2a0;
        uStack_360 = uStack_2a0;
        pcStack_a0 = (code *)0x10b131108;
        ppuStack_98 = &PTR_DAT_110cbd268;
        if (lStack_88 != 0) {
          plVar1 = (long *)(lStack_88 + 8);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = *plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        uStack_78 = uStack_2a0;
        uStack_80 = uStack_2a0;
        func_0x00010b1346b0();
        func_0x00010b135ee4();
        func_0x00010b133ea8(ppuStack_98);
        func_0x0001052b81f4(&pcStack_378);
        ppcVar4 = &pcStack_358;
      }
      else {
        func_0x00010b1340c8();
        func_0x00010b135d38();
        pcStack_90 = ppcVar8[6];
        pcStack_350 = ppcVar8[7];
        lStack_88 = 0;
        pcStack_358 = pcStack_90;
        if (pcStack_350 != (code *)0x0) {
          do {
            func_0x00010b133f68();
            lStack_88 = extraout_x8_01;
            pcStack_90 = extraout_x9_01;
          } while (extraout_w12_01 != 0);
        }
        pcStack_a0 = FUN_10b131140;
        ppuStack_98 = &PTR_FUN_110cbd280;
        if (lStack_88 != 0) {
          do {
            func_0x00010b134088();
          } while (extraout_w10_00 != 0);
        }
        func_0x00010b1346b0();
        func_0x00010b135ee4();
        func_0x00010b133ea8(ppuStack_98);
        func_0x0001052b81f4(&pcStack_358);
        ppcVar4 = &pcStack_378;
      }
      ppcVar8 = &pcStack_a0;
      FUN_10b127ebc(ppcVar4);
    }
    else {
      FUN_10b195140(pcStack_330,ppcVar8 + 6);
    }
    FUN_10b124c64(&pcStack_348);
    ppcVar4 = &pcStack_330;
    FUN_10b129c1c();
  }
  func_0x00010b1356c0();
  func_0x00010b133dfc(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010b133ea8(ppuStack_98);
  func_0x0001052b81f4(&pcStack_378);
  FUN_10b127ebc(&pcStack_358);
  FUN_10b124c64(&pcStack_348);
  FUN_10b129c1c(&pcStack_330);
  func_0x00010b1356c0();
  func_0x00010b1343d0();
  pcStack_388 = FUN_10b131060;
  ppcStack_3a0 = ppcVar8;
  ppcStack_398 = ppcVar4;
  puStack_390 = &stack0xfffffffffffffff0;
  func_0x00010b135240();
  func_0x0001078d3f18(auStack_418,&UNK_10f73018d);
  func_0x00010b134c04();
  if ((bool)in_ZR) {
    func_0x00010b13514c();
  }
  func_0x00010b134584(*(undefined8 *)(*ppcVar4 + 0x18));
  func_0x00010b134ebc();
  func_0x00010b134e84();
  func_0x00010b134da0();
  return;
}



/* Entry: 10b131060; end: 10b1310d3;  */

void FUN_10b131060(void)

{
  undefined1 in_ZR;
  long *unaff_x19;
  undefined1 auStack_98 [120];
  
  func_0x00010b135240();
  func_0x0001078d3f18(auStack_98,&UNK_10f73018d);
  func_0x00010b134c04();
  if ((bool)in_ZR) {
    func_0x00010b13514c();
  }
  func_0x00010b134584(*(undefined8 *)(*unaff_x19 + 0x18));
  func_0x00010b134ebc();
  func_0x00010b134e84();
  func_0x00010b134da0();
  return;
}



/* Entry: 10b1310d4; end: 10b13113f;  */

void FUN_10b1310d4(long param_1)

{
  param_1 = param_1 + 8;
  func_0x0001052b8500();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10b131140; end: 10b1311fb;  */

void FUN_10b131140(void)

{
  long *unaff_x19;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char cStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  func_0x00010b135240();
  func_0x000105641abc(&uStack_98,&UNK_10f7301a3);
  uStack_50 = uStack_68;
  uStack_58 = uStack_70;
  uStack_60 = uStack_78;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_78 = 0;
  uStack_48 = 2;
  uStack_40 = uStack_40 & 0xffffffffffffff00;
  uStack_28 = cStack_80 == '\x01';
  if ((bool)uStack_28) {
    uStack_38 = uStack_90;
    uStack_40 = uStack_98;
    uStack_30 = uStack_88;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_98 = 0;
  }
  func_0x00010b134584(*(undefined8 *)(*unaff_x19 + 0x18));
  func_0x00010b134ebc();
  func_0x00010b134e84();
  func_0x00010b134da0();
  return;
}



/* Entry: 10b1311fc; end: 10b13122f;  */

void FUN_10b1311fc(long param_1)

{
  param_1 = param_1 + 8;
  func_0x0001052b8500();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10b131230; end: 10b13124f;  */

void FUN_10b131230(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b11d408();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b131250; end: 10b131253;  */

void FUN_10b131250(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b131254; end: 10b13139f;  */

long * FUN_10b131254(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  undefined4 uVar4;
  long extraout_x9;
  int extraout_w10;
  long extraout_x10;
  int extraout_w11;
  int extraout_w13;
  long *plVar5;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [56];
  byte bStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 uStack_70;
  code *pcStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  long lStack_50;
  undefined1 uStack_48;
  undefined8 uStack_38;
  
  func_0x00010b133e24();
  plVar5 = *(long **)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(*plVar5 + 0x28);
  lStack_88 = *(long *)(*plVar5 + 0x30);
  uStack_90 = uVar1;
  if (lStack_88 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  FUN_10b11dadc(auStack_e8,uVar1,plVar5 + 4);
  if ((bStack_98 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    FUN_10b11dbf0(uVar1,plVar5 + 8,auStack_e8,auStack_d0);
  }
  lVar3 = *plVar5;
  lStack_58 = plVar5[2];
  lStack_78 = plVar5[3];
  lStack_50 = 0;
  lStack_80 = lStack_58;
  if (lStack_78 != 0) {
    do {
      func_0x00010b1343e8();
      lVar3 = extraout_x8;
      lStack_50 = extraout_x9;
      lStack_58 = extraout_x10;
    } while (extraout_w13 != 0);
  }
  uStack_70 = (undefined1)uVar1;
  pcStack_68 = FUN_10b1313a0;
  ppuStack_60 = &PTR_DAT_110cbd2b0;
  uStack_48 = uStack_70;
  if (lStack_50 != 0) {
    do {
      func_0x00010b133f58();
      uStack_48 = (undefined1)uVar1;
      lVar3 = extraout_x8_00;
    } while (extraout_w11 != 0);
  }
  FUN_10b11cebc(lVar3,plVar5 + 4,&pcStack_68);
  func_0x00010b133ea8(ppuStack_60);
  func_0x00010b0f7f54(&lStack_80);
  func_0x00010b1355bc();
  func_0x00010b1257f8(&uStack_90);
  func_0x00010b133dfc(uStack_38);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b1355bc();
    puVar2 = &uStack_90;
    func_0x00010b1257f8();
    func_0x00010b1343d0();
    plVar5 = (long *)puVar2[2];
    uVar4 = 0;
    if (*(char *)(puVar2 + 4) == '\0') {
      uVar4 = 3;
    }
                    /* WARNING: Could not recover jumptable at 0x00010b134304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x10))(plVar5,uVar4);
    return plVar5;
  }
  return (long *)0x0;
}



/* Entry: 10b1313a0; end: 10b13141f;  */

void FUN_10b1313a0(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x20) == '\0') {
    uVar1 = 3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010b134304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))(*(long **)(param_1 + 0x10),uVar1);
  return;
}



/* Entry: 10b131420; end: 10b13143f;  */

void FUN_10b131420(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b11dfd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b131440; end: 10b131443;  */

void FUN_10b131440(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b131444; end: 10b1317e3;  */

long FUN_10b131444(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 extraout_x8;
  int extraout_w10;
  int extraout_w10_00;
  uint uVar7;
  long lVar8;
  long *plVar9;
  undefined1 auStack_548 [450];
  byte bStack_386;
  long lStack_2d0;
  long lStack_2c8;
  undefined8 uStack_2c0;
  long alStack_2b8 [2];
  undefined1 auStack_2a8 [40];
  undefined1 auStack_280 [8];
  undefined1 uStack_278;
  undefined1 uStack_270;
  undefined1 auStack_258 [16];
  undefined1 uStack_248;
  undefined1 uStack_240;
  undefined1 uStack_1a0;
  undefined1 uStack_198;
  undefined1 uStack_158;
  undefined1 uStack_150;
  undefined1 uStack_118;
  undefined2 uStack_110;
  undefined1 uStack_10e;
  code *pcStack_38;
  undefined **ppuStack_30;
  long *plStack_28;
  undefined8 uStack_8;
  
  func_0x00010b136578();
  func_0x00010b133e8c();
  plVar9 = *(long **)(param_1 + 0x10);
  lVar8 = plVar9[0xb];
  uVar4 = *(undefined8 *)(*(long *)(lVar8 + 0x18) + 0x10);
  uStack_8 = extraout_x8;
  FUN_10b11d784(uVar4);
  uVar5 = *(undefined8 *)(lVar8 + 0x28);
  func_0x00010b1f6a40(auStack_548,uVar5,plVar9 + 4,0,uVar4);
  uVar7 = (uint)uVar5;
  if ((bStack_386 & 1) == 0) {
    func_0x00010b136310();
    func_0x00010b134a28();
    func_0x00010b135630();
    func_0x00010b1361dc();
  }
  else {
    func_0x00010b1361dc();
    func_0x00010b135a38();
    func_0x000107c278b8(&lStack_2d0);
    func_0x00010b134cc0();
    func_0x00010b135c2c();
    uVar7 = 3;
  }
  func_0x00010b1363a4();
  FUN_10b12983c(&lStack_2d0);
  func_0x00010b12aca4(auStack_2a8);
  func_0x00010b1349dc(auStack_280);
  uVar2 = uVar7 == 0;
  func_0x00010b135dc0(auStack_258,&UNK_10f72ff19);
  func_0x00010b134cb0(&pcStack_38,&lStack_2d0);
  func_0x000107c28148(plVar9 + 8);
  FUN_10b1135dc();
  func_0x00010b134d78();
  do {
    func_0x00010b13501c();
    func_0x00010b135388();
  } while (!(bool)uVar2);
  uVar2 = (uVar7 & 0xfffffffd) == 0;
  if (!(bool)uVar2) {
    uStack_278 = 0;
    uStack_270 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_158 = 0;
    uStack_150 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_10e = 0;
    uStack_2c0 = 0;
    lStack_2d0 = 0;
    lStack_2c8 = 0;
    alStack_2b8[0]._0_1_ = 0;
    func_0x00010b1342ec(&lStack_2d0);
    FUN_10b1151e4(auStack_548,&lStack_2d0);
    func_0x00010b121af0(&lStack_2d0);
  }
  lVar8 = *plVar9;
  lStack_2c8 = plVar9[3];
  lStack_2d0 = plVar9[2];
  if (plVar9[3] != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar7);
  plVar6 = alStack_2b8;
  FUN_10b121c1c(plVar6,auStack_548);
  pcStack_38 = FUN_10b131808;
  ppuStack_30 = &PTR_FUN_110cbd2e8;
  func_0x00010b1355f4();
  lVar1 = lStack_2c8;
  lVar3 = lStack_2d0;
  plVar6[1] = lStack_2c8;
  *plVar6 = lVar3;
  if (lVar1 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_00 != 0);
  }
  *(undefined4 *)(plVar6 + 2) = (undefined4)uStack_2c0;
  FUN_10b121c1c(plVar6 + 3,alStack_2b8);
  plStack_28 = plVar6;
  FUN_10b11cebc(lVar8,plVar9 + 4,&pcStack_38);
  func_0x00010b133e7c();
  FUN_10b1317e4(&lStack_2d0);
  func_0x00010b1363a4();
  FUN_10b12983c(&lStack_2d0);
  func_0x00010b1360ac(auStack_2a8);
  func_0x00010b1346c4(&pcStack_38,&lStack_2d0);
  func_0x00010b134528(lVar8,0x48,&pcStack_38);
  func_0x00010b134d78();
  do {
    func_0x00010b1355dc();
    func_0x00010b135170();
  } while (!(bool)uVar2);
  func_0x00010b1355cc();
  func_0x00010b133dfc(uStack_8);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&lStack_2d0);
    func_0x00010b1355cc();
    func_0x00010b1343d0();
    func_0x00010b1348cc();
    func_0x00010b121af0();
    lVar3 = lVar8;
    func_0x000107c3503c();
    if (lVar3 != 0) {
      func_0x000107c278a0();
    }
    return lVar8;
  }
  return 0;
}



/* Entry: 10b1317e4; end: 10b131807;  */

long FUN_10b1317e4(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b1348cc();
  func_0x00010b121af0();
  lVar1 = unaff_x19;
  func_0x000107c3503c();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b131808; end: 10b131817;  */

void FUN_10b131808(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)**(undefined8 **)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010b1360f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined4 *)(*(undefined8 **)(param_1 + 0x10) + 2));
  return;
}



/* Entry: 10b131818; end: 10b131837;  */

void FUN_10b131818(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b1317e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b131838; end: 10b13183b;  */

void FUN_10b131838(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b13183c; end: 10b1318a3;  */

void FUN_10b13183c(undefined8 *param_1)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010b136488();
  *param_1 = &PTR_FUN_110cbd2e8;
  func_0x00010b1355f4();
  func_0x00010b134f88();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  *(undefined4 *)(unaff_x20 + 0x10) = *(undefined4 *)(unaff_x21 + 0x10);
  FUN_10b12394c(unaff_x20 + 0x18,unaff_x21 + 0x18);
  *(long *)(unaff_x19 + 8) = unaff_x20;
  return;
}



/* Entry: 10b1318a4; end: 10b1318c3;  */

void FUN_10b1318a4(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b11e17c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b1318c4; end: 10b1318c7;  */

void FUN_10b1318c4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b1318c8; end: 10b131a47;  */

undefined1 * FUN_10b1318c8(long param_1)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  int extraout_w10;
  int extraout_w10_00;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uStack_8e0;
  long lStack_8d8;
  undefined1 auStack_8d0 [752];
  undefined1 auStack_5e0 [744];
  undefined1 uStack_2f8;
  undefined1 auStack_2f0 [632];
  code *pcStack_78;
  undefined **ppuStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_48;
  
  func_0x00010b133e38();
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  func_0x00010b135e8c(auStack_2f0,*(undefined8 *)(puVar5[8] + 0x28),puVar5 + 4);
  auStack_5e0[0] = 0;
  uStack_2f8 = 0;
  puVar2 = auStack_2f0;
  FUN_10b1c41c0();
  if (puVar2 != (undefined1 *)0x0) {
    FUN_10b1c41c0(auStack_2f0);
    FUN_10b20752c(&uStack_8e0);
    func_0x00010b119678(auStack_5e0,&uStack_8e0);
    func_0x00010b0faf64(&uStack_8e0);
  }
  uVar4 = *puVar5;
  lStack_8d8 = puVar5[3];
  uStack_8e0 = puVar5[2];
  if (puVar5[3] != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  FUN_10b12255c(auStack_8d0,auStack_5e0);
  pcStack_78 = FUN_10b131a6c;
  ppuStack_70 = &PTR_FUN_110cbd320;
  puVar3 = (undefined8 *)0x300;
  __Znwm();
  puVar3[1] = lStack_8d8;
  *puVar3 = uStack_8e0;
  if (lStack_8d8 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10_00 != 0);
  }
  FUN_10b12255c(puVar3 + 2,auStack_8d0);
  puStack_68 = puVar3;
  FUN_10b11cebc(uVar4,puVar5 + 4,&pcStack_78);
  func_0x00010b133f10(ppuStack_70);
  FUN_10b131a48(&uStack_8e0);
  FUN_10b122590(auStack_5e0);
  puVar2 = auStack_2f0;
  func_0x00010b121af0();
  func_0x00010b133dfc(uStack_48);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b133f10(ppuStack_70);
    FUN_10b131a48(&uStack_8e0);
    FUN_10b122590(auStack_5e0);
    func_0x00010b121af0(auStack_2f0);
    func_0x00010b1343d0();
    func_0x00010b134958();
    FUN_10b122590();
    puVar1 = puVar2;
    func_0x000107c3503c();
    if (puVar1 != (undefined1 *)0x0) {
      func_0x000107c278a0();
    }
    return puVar2;
  }
  return (undefined1 *)0x0;
}



/* Entry: 10b131a48; end: 10b131a6b;  */

long FUN_10b131a48(void)

{
  long lVar1;
  long unaff_x19;
  
  func_0x00010b134958();
  FUN_10b122590();
  lVar1 = unaff_x19;
  func_0x000107c3503c();
  if (lVar1 != 0) {
    func_0x000107c278a0();
  }
  return unaff_x19;
}



/* Entry: 10b131a6c; end: 10b131a7f;  */

void FUN_10b131a6c(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)**(undefined8 **)(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010b131a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 **)(param_1 + 0x10) + 2);
  return;
}



/* Entry: 10b131a80; end: 10b131a9f;  */

void FUN_10b131a80(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b131a48();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b131aa0; end: 10b131aa3;  */

void FUN_10b131aa0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b131aa4; end: 10b131b03;  */

void FUN_10b131aa4(undefined8 *param_1)

{
  long extraout_x8;
  int extraout_w10;
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x00010b136488();
  *param_1 = &PTR_FUN_110cbd320;
  __Znwm(0x300);
  func_0x00010b134f88();
  if (extraout_x8 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
  }
  func_0x00010b136330();
  FUN_10b12d728();
  *(undefined8 *)(unaff_x19 + 8) = unaff_x20;
  return;
}



/* Entry: 10b131b04; end: 10b131b23;  */

void FUN_10b131b04(long param_1)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_10b11e308();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b131b24; end: 10b131b27;  */

void FUN_10b131b24(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return;
}



/* Entry: 10b131b28; end: 10b131c2f;  */

void FUN_10b131b28(long param_1)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  long lVar3;
  long extraout_x8_00;
  undefined8 extraout_x9;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w12;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  code *pcStack_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 uStack_68;
  undefined8 uStack_28;
  
  lVar3 = param_1;
  func_0x00010b133e8c();
  lVar3 = *(long *)(*(long *)(lVar3 + 0x10) + 0x18);
  uStack_98 = *(undefined8 *)(*(long *)(lVar3 + 0x30) + 0x40);
  lStack_90 = *(long *)(*(long *)(lVar3 + 0x30) + 0x48);
  uStack_28 = extraout_x8;
  if (lStack_90 != 0) {
    do {
      func_0x00010b134088();
    } while (extraout_w10 != 0);
    lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
  }
  uVar1 = *(undefined8 *)(lVar3 + 0x40);
  FUN_10b1f75f0(uVar1,*(undefined4 *)(param_1 + 0x30));
  uStack_78 = *(undefined8 *)(param_1 + 0x20);
  lStack_a8 = *(long *)(param_1 + 0x28);
  lStack_70 = 0;
  uStack_b0 = uStack_78;
  if (lStack_a8 != 0) {
    do {
      func_0x00010b133f68();
      lStack_70 = extraout_x8_00;
      uStack_78 = extraout_x9;
    } while (extraout_w12 != 0);
  }
  uStack_a0 = (undefined1)uVar1;
  pcStack_88 = FUN_10b131c30;
  ppuStack_80 = &PTR_DAT_110cbd358;
  uStack_68 = uStack_a0;
  if (lStack_70 != 0) {
    do {
      func_0x00010b134088();
      uStack_68 = (undefined1)uVar1;
    } while (extraout_w10_00 != 0);
  }
  func_0x00010b1346dc();
  func_0x00010b134584();
  func_0x00010b133ea8(ppuStack_80);
  func_0x0001052a6df8(&uStack_b0);
  FUN_10b127ebc(&uStack_98);
  func_0x00010b133dfc(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    func_0x00010b133ea8(ppuStack_80);
    func_0x0001052a6df8(&uStack_b0);
    puVar2 = &uStack_98;
    FUN_10b127ebc();
    func_0x00010b1343d0();
                    /* WARNING: Could not recover jumptable at 0x00010b134304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)puVar2[2] + 0x10))((long *)puVar2[2],*(undefined1 *)(puVar2 + 4));
    return;
  }
  return;
}



/* Entry: 10b131c30; end: 10b131cbf;  */

void FUN_10b131c30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010b134304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
            (*(long **)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b131cc0; end: 10b131d3b;  */

undefined8 FUN_10b131cc0(long param_1)

{
  undefined8 unaff_x19;
  
  func_0x00010b131ce8(param_1,*(undefined8 *)(param_1 + 0x10));
  func_0x00010b1353d8(param_1);
  FUN_10b131d3c();
  return unaff_x19;
}



/* Entry: 10b131d3c; end: 10b131d53;  */

void FUN_10b131d3c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10b131d54; end: 10b131f4f;  */

undefined1  [16] FUN_10b131d54(ulong param_1)

{
  ulong uVar1;
  undefined1 in_NG;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x19;
  long *plVar6;
  ulong uVar7;
  ulong unaff_x27;
  ulong uVar8;
  undefined1 auVar9 [16];
  long *aplStack_78 [3];
  
  func_0x00010b13624c();
  func_0x00010b1347f0();
  uVar7 = unaff_x19[1];
  if (uVar7 != 0) {
    uVar8 = uVar7 - 1;
    if ((uVar7 & uVar8) == 0) {
      unaff_x27 = uVar8 & param_1;
      in_NG = false;
    }
    else {
      in_NG = (long)(param_1 - uVar7) < 0;
      unaff_x27 = param_1;
      if (uVar7 <= param_1) {
        uVar4 = 0;
        if (uVar7 != 0) {
          uVar4 = param_1 / uVar7;
        }
        unaff_x27 = param_1 - uVar4 * uVar7;
      }
    }
    plVar6 = *(long **)(*unaff_x19 + unaff_x27 * 8);
    if (plVar6 != (long *)0x0) {
      do {
        while( true ) {
          plVar6 = (long *)*plVar6;
          if (plVar6 == (long *)0x0) goto LAB_10b131e0c;
          uVar4 = plVar6[1];
          in_NG = (long)(uVar4 - param_1) < 0;
          if (uVar4 != param_1) break;
          plVar2 = plVar6 + 2;
          func_0x00010b135c68();
          if (((ulong)plVar2 & 1) != 0) {
            uVar3 = 0;
            aplStack_78[0] = plVar6;
            goto LAB_10b131f20;
          }
        }
        if ((uVar7 & uVar8) == 0) {
          uVar4 = uVar4 & uVar8;
        }
        else if (uVar7 <= uVar4) {
          uVar1 = 0;
          if (uVar7 != 0) {
            uVar1 = uVar4 / uVar7;
          }
          uVar4 = uVar4 - uVar1 * uVar7;
        }
        in_NG = (long)(uVar4 - unaff_x27) < 0;
      } while (uVar4 == unaff_x27);
    }
  }
LAB_10b131e0c:
  func_0x00010b134b9c(aplStack_78);
  FUN_10b131f50();
  if ((uVar7 == 0) ||
     (func_0x00010b135ab0((float)(unaff_x19[3] + 1),(int)unaff_x19[4],(float)uVar7), (bool)in_NG)) {
    func_0x00010b1342d8(uVar7 << 1);
    FUN_10b131fb8();
    uVar7 = unaff_x19[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x27 = uVar7 - 1 & param_1;
    }
    else {
      unaff_x27 = param_1;
      if (uVar7 <= param_1) {
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = param_1 / uVar7;
        }
        unaff_x27 = param_1 - uVar8 * uVar7;
      }
    }
  }
  lVar5 = *unaff_x19;
  plVar6 = *(long **)(lVar5 + unaff_x27 * 8);
  if (plVar6 == (long *)0x0) {
    plVar6 = unaff_x19 + 2;
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
    *(long **)(lVar5 + unaff_x27 * 8) = plVar6;
    if (*aplStack_78[0] != 0) {
      uVar8 = *(ulong *)(*aplStack_78[0] + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar8 = uVar8 & uVar7 - 1;
      }
      else if (uVar7 <= uVar8) {
        uVar4 = 0;
        if (uVar7 != 0) {
          uVar4 = uVar8 / uVar7;
        }
        uVar8 = uVar8 - uVar4 * uVar7;
      }
      *(long **)(lVar5 + uVar8 * 8) = aplStack_78[0];
    }
  }
  else {
    *aplStack_78[0] = *plVar6;
    *plVar6 = (long)aplStack_78[0];
  }
  func_0x00010b1342c0();
  FUN_10b13216c();
  uVar3 = 1;
LAB_10b131f20:
  auVar9._8_8_ = uVar3;
  auVar9._0_8_ = aplStack_78[0];
  return auVar9;
}



/* Entry: 10b131f50; end: 10b131f9f;  */

void FUN_10b131f50(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  
  puVar1 = param_2 + 2;
  func_0x00010b134ad0();
  *param_1 = param_2;
  param_1[1] = puVar1;
  param_1[2] = 0;
  *param_2 = 0;
  param_2[1] = param_3;
  FUN_10b131fa0(param_2 + 2,*param_5);
  func_0x00010b135604();
  return;
}



/* Entry: 10b131fa0; end: 10b131fb7;  */

void FUN_10b131fa0(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


