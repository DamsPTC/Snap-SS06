/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10777f89c; end: 10777f8b7;  */

undefined8 * FUN_10777f89c(long param_1)

{
  func_0x000104c3365c(param_1 + 0xd8);
  func_0x000107327aec(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x18) = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 0x40);
  func_0x0001072c9884(param_1 + 0x28);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 10777fd38; end: 10777fd73;  */

void FUN_10777fd38(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,*param_2);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 10778021c; end: 10778039b;  */

/* WARNING: Possible PIC construction at 0x000107780250: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107298084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107780420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107780280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010778031c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107780284) */
/* WARNING: Removing unreachable block (ram,0x0001077802b4) */
/* WARNING: Removing unreachable block (ram,0x0001077802cc) */
/* WARNING: Removing unreachable block (ram,0x000107780424) */
/* WARNING: Removing unreachable block (ram,0x000107298088) */
/* WARNING: Removing unreachable block (ram,0x000107780254) */
/* WARNING: Removing unreachable block (ram,0x000107780270) */
/* WARNING: Removing unreachable block (ram,0x000107780260) */
/* WARNING: Removing unreachable block (ram,0x000107780320) */
/* WARNING: Removing unreachable block (ram,0x000107780328) */
/* WARNING: Removing unreachable block (ram,0x000107780354) */
/* WARNING: Removing unreachable block (ram,0x000107780388) */
/* WARNING: Removing unreachable block (ram,0x000107780398) */
/* WARNING: Removing unreachable block (ram,0x00010778033c) */

undefined1  [16] FUN_10778021c(byte *param_1,byte *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 **ppuVar1;
  undefined1 in_ZR;
  bool bVar2;
  undefined1 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 extraout_x8;
  long extraout_x8_00;
  undefined8 uVar11;
  undefined8 extraout_x8_01;
  byte *extraout_x8_02;
  undefined8 ***pppuVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined *puStack_458;
  undefined1 auStack_450 [56];
  undefined1 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  byte *pbStack_400;
  byte *pbStack_3f8;
  undefined8 **ppuStack_3f0;
  undefined *puStack_3e8;
  undefined1 uStack_3e0;
  undefined1 uStack_3a8;
  undefined8 uStack_3a0;
  long lStack_398;
  undefined8 **ppuStack_370;
  undefined *puStack_368;
  byte abStack_360 [56];
  undefined1 auStack_328 [56];
  undefined1 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_280;
  undefined8 uStack_278;
  byte abStack_88 [56];
  undefined1 uStack_50;
  
  pbVar4 = param_2;
  func_0x000107781398();
  pbVar7 = abStack_88;
  pbVar4 = pbVar4 + 0x18;
  pbVar5 = abStack_360;
  uStack_278 = 0x107780254;
  pppuVar12 = (undefined8 ***)&puStack_280;
  puStack_280 = (undefined8 *)&stack0xfffffffffffffff0;
  func_0x000107781398();
  if (*(int *)(pbVar4 + 0x70) == 0) {
    abStack_88[0] = 0;
    uStack_50 = 0;
    func_0x000107781384(extraout_x8);
    pbVar5 = pbVar4;
    pbVar10 = param_2;
    if ((bool)in_ZR) {
      auVar14._8_8_ = param_3;
      auVar14._0_8_ = pbVar4;
      return auVar14;
    }
  }
  else {
    bVar2 = *(int *)(pbVar4 + 0x70) == 1;
    if (!bVar2) {
      auStack_328[0] = 0;
      uStack_2f0 = 0;
      uStack_2e8 = 0;
      puStack_458 = &UNK_107780424;
      ppuVar1 = (undefined8 **)abStack_360;
      pbVar10 = (byte *)0x1138369c0;
      goto code_r0x0001000df598;
    }
    pbVar5 = pbVar4;
    func_0x000107781384(extraout_x8);
    pbVar10 = pbVar4;
    if (bVar2) {
      pppuVar12 = (undefined8 ***)&puStack_280;
      puStack_458 = &UNK_107298088;
      ppuVar1 = &puStack_280;
      pbVar5 = pbVar7;
      pbVar10 = pbVar4 + 8;
      pbVar7 = param_1;
      pbVar4 = param_2;
      goto code_r0x0001000df598;
    }
  }
  pbVar4 = pbVar10;
  ___stack_chk_fail();
  func_0x000104c2f714(abStack_360);
  puVar6 = (undefined8 *)auStack_328;
  func_0x00010724b3d8();
  func_0x0001077813bc();
  puStack_368 = &SUB_10778049c;
  ppuStack_370 = pppuVar12;
  func_0x000107781398();
  lStack_398 = extraout_x8_00;
  if (*(int *)(puVar6 + 7) == 0) {
    pbVar7 = (byte *)0x0;
    uVar11 = 0;
  }
  else {
    if (*(int *)(puVar6 + 7) == 1) {
      pbVar7 = (byte *)*puVar6;
    }
    else {
      uStack_3e0 = 0;
      uStack_3a8 = 0;
      uStack_3a0 = 0;
      pbVar7 = (byte *)*param_4;
      func_0x00010778104c();
      func_0x0001077813f8();
    }
    uVar11 = 1;
  }
  uVar3 = *(long *)PTR____stack_chk_guard_11034bdc0 == lStack_398;
  if ((bool)uVar3) {
    auVar15._8_8_ = uVar11;
    auVar15._0_8_ = pbVar7;
    return auVar15;
  }
  ___stack_chk_fail();
  func_0x0001077813b0();
  func_0x0001077813bc();
  puStack_3e8 = &SUB_107780540;
  pppuVar12 = &ppuStack_3f0;
  pbStack_400 = pbVar4;
  pbStack_3f8 = pbVar5;
  ppuStack_3f0 = &ppuStack_370;
  func_0x000107781398();
  uStack_408 = extraout_x8_01;
  if (*(int *)(pbVar7 + 0x30) == 0) {
    uVar8 = 0;
    pbVar7 = pbVar5;
  }
  else {
    uVar3 = *(int *)(pbVar7 + 0x30) == 1;
    if ((bool)uVar3) {
      pbVar7 = (byte *)(ulong)*pbVar7;
    }
    else {
      auStack_450[0] = 0;
      uStack_418 = 0;
      uStack_410 = 0;
      func_0x000107280464();
      func_0x0001077813f8();
    }
    uVar8 = (ulong)((uint)pbVar7 | 0x100);
  }
  func_0x000107781384(uStack_408);
  if ((bool)uVar3) {
    auVar16._8_8_ = param_3;
    auVar16._0_8_ = uVar8;
    return auVar16;
  }
  ___stack_chk_fail();
  func_0x0001077813b0();
  func_0x0001077813bc();
  puStack_458 = &SUB_1077805c4;
  pbVar9 = *(byte **)(uVar8 + 0x150);
  (**(code **)(*(long *)pbVar9 + 0x18))();
  ppuVar1 = (undefined8 **)auStack_450;
  pbVar5 = extraout_x8_02;
  pbVar10 = (byte *)(uVar8 + 0x18);
  if (*(char *)(uVar8 + 0x50) == '\0') {
    ppuVar1 = (undefined8 **)auStack_450;
    pbVar10 = pbVar9;
  }
code_r0x0001000df598:
  *(byte **)((long)ppuVar1 + -0x20) = pbVar4;
  *(byte **)((long)ppuVar1 + -0x18) = pbVar7;
  *(undefined8 ****)((long)ppuVar1 + -0x10) = pppuVar12;
  *(undefined **)((long)ppuVar1 + -8) = puStack_458;
  func_0x0001000d03a8(pbVar5,pbVar10);
  func_0x000104c2feb0();
  pbVar7[0x30] = 0xff;
  pbVar7[0x31] = 0xff;
  pbVar7[0x32] = 0xff;
  pbVar7[0x33] = 0xff;
  pbVar7[0x34] = 0xff;
  pbVar7[0x35] = 0xff;
  pbVar7[0x36] = 0xff;
  pbVar7[0x37] = 0xff;
  func_0x000104c2fe38();
  *(byte **)(pbVar7 + 0x30) = pbVar4;
  auVar13._8_8_ = pbVar10;
  auVar13._0_8_ = pbVar7;
  return auVar13;
}



/* Entry: 107780b4c; end: 107780ba7;  */

/* WARNING: Possible PIC construction at 0x000107780b6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107780b70) */
/* WARNING: Removing unreachable block (ram,0x000107780b9c) */
/* WARNING: Removing unreachable block (ram,0x000107780b74) */

long * FUN_107780b4c(long param_1)

{
  uint uVar1;
  long *plVar2;
  
  if (*(char *)(param_1 + 0x1c0) != '\x01') {
    plVar2 = *(long **)(param_1 + 0x1c8);
                    /* WARNING: Could not recover jumptable at 0x000107780b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x20))();
    return plVar2;
  }
  if (*(int *)(param_1 + 0x170) != 0) {
    uVar1 = *(byte *)(param_1 + 0x140) >> 1 & 1;
    if (*(int *)(param_1 + 0x170) == 1) {
      uVar1 = 1;
    }
    return (long *)(ulong)uVar1;
  }
  return (long *)0x1;
}



/* Entry: 107780dfc; end: 107780e27;  */

undefined1 * FUN_107780dfc(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x90] = 0;
  func_0x000107780e28();
  return param_1;
}



/* Entry: 107780f80; end: 10778100b;  */

void FUN_107780f80(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000104c318bc();
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  if (*(char *)(param_2 + 0x50) == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    *(undefined8 *)(param_1 + 0x38) = uVar1;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  if (*(char *)(param_2 + 0x70) == '\x01') {
    uVar2 = *(undefined8 *)(param_2 + 0x60);
    uVar1 = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x60) = uVar2;
    *(undefined8 *)(param_1 + 0x58) = uVar1;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(undefined8 *)(param_2 + 0x68) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  return;
}



/* Entry: 107781190; end: 1077811cb;  */

long FUN_107781190(long param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 uStack_28;
  
  func_0x0001077813c4();
  func_0x000107781460();
  func_0x0001077813f8();
  func_0x000107781384(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  func_0x0001077813b0();
  func_0x0001077813bc();
  func_0x0001004a5364(param_2,&PTR_DAT_1109d6d30);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 1077812ac; end: 1077812c7;  */

void FUN_1077812ac(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109d6da0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 107781920; end: 10778196b;  */

void FUN_107781920(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 107781c60; end: 107781c83;  */

void FUN_107781c60(undefined8 param_1,long param_2)

{
  long unaff_x19;
  undefined8 unaff_x20;
  
  func_0x0001000d03a8(param_1,*(long *)(param_2 + 8) + 8);
  func_0x000104c2feb0();
  *(undefined8 *)(unaff_x19 + 0x30) = 0xffffffffffffffff;
  func_0x000104c2fe38();
  *(undefined8 *)(unaff_x19 + 0x30) = unaff_x20;
  return;
}



/* Entry: 107782348; end: 1077823b3;  */

void FUN_107782348(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  float fVar3;
  
  lVar1 = param_1;
  puVar2 = param_2;
  func_0x000107783824();
  if (((ulong)puVar2 & 1) != 0) {
    lVar1 = param_2[1] + lVar1 * 0x78;
    func_0x000100060964(lVar1,*param_3);
    fVar3 = *(float *)(param_3 + 1);
    *(undefined4 *)(lVar1 + 0x38) = 3;
    *(double *)(lVar1 + 0x40) = (double)fVar3;
  }
  func_0x000107783804(*param_2);
  *(char *)(param_1 + 0x10) = (char)puVar2;
  return;
}



/* Entry: 1077831c4; end: 1077831cf;  */

void FUN_1077831c4(undefined1 *param_1)

{
  *param_1 = 0;
  param_1[0x18] = 0;
  return;
}



/* Entry: 10778334c; end: 107783397;  */

uint * FUN_10778334c(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*param_1 == 7) {
    return (uint *)0x0;
  }
  uVar2 = *param_1;
  if (uVar2 == 6) {
    return (uint *)0x0;
  }
  param_1 = param_1 + 2;
  if (uVar2 != 1) {
    param_1 = (uint *)0x0;
  }
  puVar1 = (uint *)0x0;
  if ((uVar2 & 0xfffffffe) != 2 && (uVar2 & 0xfffffffe) != 4) {
    puVar1 = param_1;
  }
  return puVar1;
}



/* Entry: 1077834a0; end: 1077834bb;  */

void FUN_1077834a0(long param_1)

{
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_();
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 1077835c0; end: 10778364b;  */

void FUN_1077835c0(long *param_1,long *param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  func_0x000104c32bd8();
  if ((param_3 & 1) != 0) {
    func_0x00010778364c(*param_2,lVar2,param_4,param_5,param_6);
  }
  lVar1 = ((long *)*param_2)[1];
  *param_1 = *(long *)*param_2 + lVar2;
  param_1[1] = lVar1 + lVar2 * 0x78;
  *(char *)(param_1 + 2) = (char)param_3;
  return;
}



/* Entry: 107783a94; end: 107783ad3;  */

uint FUN_107783a94(long param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x160);
  uVar2 = (int)param_1 + 0x140;
  func_0x000107783ad4();
  *(char *)(param_1 + 0x160) = (char)uVar2;
  uVar3 = 0x100;
  if (((uVar2 ^ bVar1) & 1) == 0) {
    uVar3 = 0;
  }
  return uVar3 | uVar2;
}



/* Entry: 107783d0c; end: 107783e5b;  */

void FUN_107783d0c(long *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 *puStack_40;
  
  func_0x000107786418();
  func_0x000107786750();
  puStack_40[1] = 0;
  puStack_40[2] = 0;
  *puStack_40 = &PTR_DAT_1109d7158;
  func_0x000107785684(puStack_40 + 3,param_2);
  puStack_40[3] = &PTR_DAT_1109d72b0;
  func_0x00010727fe7c(puStack_40 + 0x30,param_2 + 0x168);
  func_0x00010727fe7c(puStack_40 + 0x37,param_2 + 0x1a0);
  func_0x0001074c4884(puStack_40 + 0x3e,param_2 + 0x1d8);
  func_0x0001074c4858(puStack_40 + 0x4c,param_2 + 0x248);
  func_0x0001074c4824(puStack_40 + 0x59,param_2 + 0x2b0);
  func_0x0001077857d8(puStack_40 + 0x65,param_2 + 0x310);
  func_0x000107786668();
  *param_1 = (long)(puStack_40 + 3);
  param_1[1] = (long)puStack_40;
  func_0x000107786560();
  func_0x00010778634c(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107266a30(puStack_40 + 0x59);
  func_0x0001072ca524(puStack_40 + 0x4c);
  func_0x000107432d98(puStack_40 + 0x3e);
  func_0x000107785810(puStack_40 + 0x30);
  func_0x000107785780(puStack_40 + 3);
  do {
    __ZNSt3__119__shared_weak_countD2Ev(puStack_40);
    func_0x000107786668();
    func_0x00010778677c();
  } while( true );
}



/* Entry: 1077848f8; end: 107784987;  */

void FUN_1077848f8(undefined8 param_1,long param_2,long *param_3)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  long lStack_48;
  undefined1 auStack_40 [16];
  
  lStack_48 = *param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    lStack_48 = (long)param_3;
  }
  func_0x00010750c5d0(auStack_40,&lStack_48);
  ppuVar1 = &PTR_DAT_1109d7058;
  func_0x000107785358(&PTR_DAT_1109d7058,&UNK_1109d7148,auStack_40);
  if (ppuVar1 != (undefined **)&UNK_1109d7148) {
    puVar2 = auStack_40;
    func_0x000107785400(puVar2,ppuVar1);
    if ((int)puVar2 == 0) {
      func_0x000107784150(param_1,*(undefined8 *)(param_2 + 8),*(undefined1 *)(ppuVar1 + 1));
      return;
    }
  }
  func_0x000107786670();
  return;
}



/* Entry: 107784cb8; end: 107784ce7;  */

/* WARNING: Possible PIC construction at 0x000107784d04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107784d08) */
/* WARNING: Removing unreachable block (ram,0x000107784d24) */
/* WARNING: Removing unreachable block (ram,0x000107784d1c) */

void FUN_107784cb8(float *param_1,float *param_2,float *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  float *pfVar4;
  float *pfVar5;
  undefined8 extraout_x8;
  float *extraout_x8_00;
  float *extraout_x8_01;
  undefined8 extraout_x8_02;
  float *extraout_x8_03;
  float *pfVar6;
  float *extraout_x8_04;
  float *extraout_x8_05;
  undefined4 *extraout_x8_06;
  float *unaff_x19;
  float *unaff_x20;
  long lVar7;
  undefined1 **unaff_x29;
  undefined1 *puVar8;
  undefined *unaff_x30;
  undefined *puVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uStack_110;
  undefined8 uStack_108;
  float afStack_100 [8];
  double dStack_e0;
  undefined8 uStack_a8;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined1 auStack_68 [72];
  
  pfVar5 = param_1;
  if (param_2[0xe] == 0.0) {
LAB_1077863ac:
    pfVar5[0x10] = 0.0;
    pfVar5[0x11] = 0.0;
    pfVar5[10] = 0.0;
    pfVar5[0xb] = 0.0;
    pfVar5[8] = 0.0;
    pfVar5[9] = 0.0;
    pfVar5[0xe] = 0.0;
    pfVar5[0xf] = 0.0;
    pfVar5[0xc] = 0.0;
    pfVar5[0xd] = 0.0;
    pfVar5[2] = 0.0;
    pfVar5[3] = 0.0;
    pfVar5[0] = 0.0;
    pfVar5[1] = 0.0;
    pfVar5[6] = 0.0;
    pfVar5[7] = 0.0;
    pfVar5[4] = 0.0;
    pfVar5[5] = 0.0;
    *pfVar5 = 9.80909e-45;
    return;
  }
  uVar3 = 0;
  pfVar4 = param_2;
  if (param_2[0xe] == 1.4013e-45) {
    func_0x000107786380();
    puStack_78 = &UNK_107784d08;
    unaff_x29 = &puStack_80;
    puStack_80 = &stack0xfffffffffffffff0;
    func_0x000107786398(auStack_68);
    afStack_100[0] = 0.0;
    afStack_100[1] = 0.0;
    afStack_100[2] = 0.0;
    afStack_100[3] = 0.0;
    afStack_100[4] = 0.0;
    afStack_100[5] = 0.0;
    uStack_a8 = extraout_x8;
    func_0x0001072ac134(afStack_100,2);
    for (lVar7 = 0; uVar3 = lVar7 == 8, !(bool)uVar3; lVar7 = lVar7 + 4) {
      dStack_e0 = (double)*(float *)((long)param_2 + lVar7);
      afStack_100[6] = 4.2039e-45;
      func_0x0001072aad1c(afStack_100,afStack_100 + 6);
      func_0x000104c3323c(afStack_100 + 6);
    }
    pfVar4 = afStack_100;
    func_0x000107327958(&uStack_110);
    *unaff_x19 = 0.0;
    *(undefined8 *)(unaff_x19 + 4) = uStack_108;
    *(undefined8 *)(unaff_x19 + 2) = uStack_110;
    uStack_110 = 0;
    uStack_108 = 0;
    func_0x000104c33108(&uStack_110);
    unaff_x19 = afStack_100;
    func_0x000107269124();
    func_0x00010778634c(uStack_a8);
    if ((bool)uVar3) {
      return;
    }
    ___stack_chk_fail();
    param_3 = afStack_100;
    func_0x000107269124();
    unaff_x30 = &LAB_107784e0c;
    func_0x000107786550();
    register0x00000008 = (BADSPACEBASE *)&uStack_110;
    param_1 = extraout_x8_00;
    unaff_x20 = param_2;
  }
  puVar1 = (undefined1 *)((long)register0x00000008 + -0x70);
  *(float **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(float **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 ***)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined **)((long)register0x00000008 + -8) = unaff_x30;
  puVar8 = (undefined1 *)((long)register0x00000008 + -0x10);
  func_0x000107786360();
  func_0x00010778657c();
  func_0x000107786470();
  func_0x00010778643c();
  func_0x000107786334();
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    puVar9 = &UNK_107784e48;
    __Unwind_Resume();
    pfVar5 = extraout_x8_01;
    if (param_3[0xc] == 0.0) goto LAB_1077863ac;
    uVar3 = param_3[0xc] == 1.4013e-45;
    pfVar6 = extraout_x8_01;
    if ((bool)uVar3) {
      puVar1 = (undefined1 *)((long)register0x00000008 + -0xd0);
      *(undefined1 **)((long)register0x00000008 + -0x80) = puVar8;
      *(undefined **)((long)register0x00000008 + -0x78) = &UNK_107784e48;
      puVar8 = (undefined1 *)((long)register0x00000008 + -0x80);
      pfVar4 = extraout_x8_01;
      func_0x000107786418();
      *(undefined8 *)((long)register0x00000008 + -0x88) = extraout_x8_02;
      fVar10 = *param_3;
      *(undefined4 *)((long)register0x00000008 + -200) = 3;
      *(double *)((long)register0x00000008 + -0xc0) = (double)fVar10;
      param_3 = (float *)((long)register0x00000008 + -200);
      func_0x000104c32a18();
      *(undefined1 *)(pfVar4 + 0x10) = 1;
      func_0x000107786500();
      func_0x00010778634c(*(undefined8 *)((long)register0x00000008 + -0x88));
      if ((bool)uVar3) {
        return;
      }
      puVar9 = &UNK_107784ed0;
      ___stack_chk_fail();
      pfVar6 = extraout_x8_03;
    }
    puVar2 = puVar1 + -0x70;
    *(float **)(puVar1 + -0x20) = unaff_x20;
    *(float **)(puVar1 + -0x18) = param_1;
    *(undefined1 **)(puVar1 + -0x10) = puVar8;
    *(undefined **)(puVar1 + -8) = puVar9;
    puVar8 = puVar1 + -0x10;
    func_0x000107786360();
    func_0x00010778657c();
    func_0x000107786470();
    func_0x00010778643c();
    func_0x000107786334();
    if (!(bool)uVar3) {
      ___stack_chk_fail();
      puVar9 = &UNK_107784f0c;
      __Unwind_Resume();
      pfVar5 = extraout_x8_04;
      if (pfVar4[0x26] == 0.0) goto LAB_1077863ac;
      pfVar5 = pfVar4 + 2;
      uVar3 = pfVar4[0x26] == 1.4013e-45;
      pfVar4 = extraout_x8_04;
      if ((bool)uVar3) {
        puVar2 = puVar1 + -0xe0;
        *(float **)(puVar1 + -0x90) = unaff_x20;
        *(float **)(puVar1 + -0x88) = pfVar6;
        *(undefined1 **)(puVar1 + -0x80) = puVar8;
        *(undefined **)(puVar1 + -0x78) = &UNK_107784f0c;
        puVar8 = puVar1 + -0x80;
        func_0x000107786380();
        func_0x00010775f12c(puVar1 + -0xd8);
        func_0x000107786470();
        func_0x00010778647c(1);
        func_0x000107786334();
        if ((bool)uVar3) {
          return;
        }
        ___stack_chk_fail();
        puVar9 = &UNK_107784f80;
        __Unwind_Resume();
        param_3 = pfVar5;
        pfVar4 = extraout_x8_05;
      }
      *(float **)(puVar2 + -0x20) = unaff_x20;
      *(float **)(puVar2 + -0x18) = pfVar6;
      *(undefined1 **)(puVar2 + -0x10) = puVar8;
      *(undefined **)(puVar2 + -8) = puVar9;
      func_0x000107786360();
      func_0x00010778657c();
      func_0x000107786470();
      func_0x00010778643c();
      func_0x000107786334();
      if (!(bool)uVar3) {
        ___stack_chk_fail();
        __Unwind_Resume();
        *(float **)(puVar2 + -0x90) = unaff_x20;
        *(float **)(puVar2 + -0x88) = pfVar4;
        *(undefined1 **)(puVar2 + -0x80) = puVar2 + -0x10;
        *(undefined **)(puVar2 + -0x78) = &UNK_107784fbc;
        func_0x000107269c1c(puVar2 + -0xa0);
        if (*(char *)(param_3 + 2) == '\x01') {
          func_0x0001077867e0(*(undefined8 *)param_3);
          func_0x000107785078(puVar2 + -0xc0);
        }
        if (*(char *)(param_3 + 6) == '\x01') {
          func_0x0001077867e0(*(undefined8 *)(param_3 + 4));
          func_0x0001077850a0(puVar2 + -0xc0,puVar2 + -0xa0,"delay",puVar2 + -0xa8);
        }
        uVar12 = *(undefined8 *)(puVar2 + -0x98);
        uVar11 = *(undefined8 *)(puVar2 + -0xa0);
        *(undefined8 *)(puVar2 + -0xa0) = 0;
        *(undefined8 *)(puVar2 + -0x98) = 0;
        *extraout_x8_06 = 1;
        *(undefined8 *)(extraout_x8_06 + 4) = uVar12;
        *(undefined8 *)(extraout_x8_06 + 2) = uVar11;
        *(undefined8 *)(puVar2 + -0xd0) = 0;
        *(undefined8 *)(puVar2 + -200) = 0;
        func_0x000104c335c0(puVar2 + -0xd0);
        func_0x000104c335c0(puVar2 + -0xa0);
        return;
      }
    }
  }
  return;
}



/* Entry: 107784f3c; end: 107784f7f;  */

void FUN_107784f3c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 in_ZR;
  undefined4 *extraout_x8;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [8];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_68 [72];
  
  func_0x000107786380();
  func_0x00010775f12c(auStack_68);
  func_0x000107786470();
  func_0x00010778647c(1);
  func_0x000107786334();
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    __Unwind_Resume();
    func_0x000107786360();
    func_0x00010778657c();
    func_0x000107786470();
    func_0x00010778643c();
    func_0x000107786334();
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      __Unwind_Resume();
      func_0x000107269c1c(&uStack_110);
      if (*(char *)(param_2 + 1) == '\x01') {
        func_0x0001077867e0(*param_2);
        func_0x000107785078(auStack_130);
      }
      if (*(char *)(param_2 + 3) == '\x01') {
        func_0x0001077867e0(param_2[2]);
        func_0x0001077850a0(auStack_130,&uStack_110,"delay",auStack_118);
      }
      uVar2 = uStack_108;
      uVar1 = uStack_110;
      uStack_110 = 0;
      uStack_108 = 0;
      *extraout_x8 = 1;
      *(undefined8 *)(extraout_x8 + 4) = uVar2;
      *(undefined8 *)(extraout_x8 + 2) = uVar1;
      uStack_140 = 0;
      uStack_138 = 0;
      func_0x000104c335c0(&uStack_140);
      func_0x000104c335c0(&uStack_110);
      return;
    }
  }
  return;
}



/* Entry: 107785148; end: 10778516f;  */

void FUN_107785148(long param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *param_4;
  uStack_20 = *param_5;
  func_0x000107785194(*(long *)(param_1 + 8) + param_2 * 0x78,&uStack_18,&uStack_20);
  return;
}



/* Entry: 107785258; end: 10778527b;  */

void FUN_107785258(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_3;
  uStack_18 = param_2;
  func_0x00010778527c(param_1,&uStack_18,&uStack_20);
  return;
}



/* Entry: 107785478; end: 10778549b;  */

void FUN_107785478(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_11;
  
  func_0x00010778549c(&uStack_11,param_1,param_2);
  return;
}



/* Entry: 1077855d4; end: 107785623;  */

undefined8 * FUN_1077855d4(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x0001077839b8();
  *puVar1 = &PTR_DAT_1109d72b0;
  puVar1[0x2e] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x30] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x32] = 0;
  puVar1[0x31] = 0;
  puVar1[0x34] = 0;
  puVar1[0x33] = 0;
  puVar1[0x36] = 0;
  puVar1[0x35] = 0;
  puVar1[0x38] = 0;
  puVar1[0x37] = 0;
  puVar1[0x3a] = 0;
  puVar1[0x39] = 0;
  func_0x00010778583c(puVar1 + 0x3b);
  return param_1;
}



/* Entry: 1077858ec; end: 107785913;  */

void FUN_1077858ec(undefined8 param_1,undefined8 param_2)

{
  func_0x000107786544();
  func_0x0001073dd630(param_2);
  func_0x0001077866f4();
  func_0x000107786790();
  func_0x000107786770();
  return;
}



/* Entry: 107785ae0; end: 107785b27;  */

void FUN_107785ae0(ulong *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *param_2;
  func_0x000107785b28();
  uVar2 = *param_1;
  *param_1 = lVar1 + uVar2 * 0x1000 + (uVar2 >> 4) + 0x9e3779b97f4a7c15 ^ uVar2;
  return;
}



/* Entry: 107785cc4; end: 107785ceb;  */

void FUN_107785cc4(long param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    func_0x000107786568();
    func_0x000107785cec();
  }
  return;
}



/* Entry: 107785dc4; end: 107785dcf;  */

void FUN_107785dc4(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x000107786544(*param_1,param_1[1]);
  func_0x000107432d98();
  func_0x0001077866f4();
  func_0x0001073dec2c();
  *(undefined4 *)(unaff_x20 + 0x40) = 2;
  return;
}



/* Entry: 107785f1c; end: 107785f23;  */

void FUN_107785f1c(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (*(int *)(*param_1 + 0x38) == 1) {
    *param_2 = *param_3;
    return;
  }
  func_0x000107786568();
  func_0x000107785f58();
  return;
}



/* Entry: 10778600c; end: 107786037;  */

void FUN_10778600c(void)

{
  long unaff_x20;
  
  func_0x000107786544();
  func_0x0001072ca524();
  func_0x0001077866f4();
  func_0x000107339958();
  *(undefined4 *)(unaff_x20 + 0x38) = 2;
  return;
}



/* Entry: 1077861a4; end: 1077861c7;  */

void FUN_1077861a4(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  func_0x0001072ca37c(lVar1);
  *(undefined4 *)(lVar1 + 0x90) = 0;
  return;
}



/* Entry: 107786334; end: 1077867ff;  */

void FUN_107786334(void)

{
  return;
}



/* Entry: 107786978; end: 10778697f;  */

undefined8 FUN_107786978(void)

{
  return 0;
}



/* Entry: 107786b20; end: 107786b33;  */

void FUN_107786b20(void)

{
  func_0x000107781c1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107786db8; end: 107786dfb;  */

undefined8 * FUN_107786db8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109d7408;
  func_0x000107786e24(param_1 + 3);
  return param_1;
}



/* Entry: 107786f30; end: 107786f93;  */

undefined8 * FUN_107786f30(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x0001077839b8(param_1,param_2,0x1138369c0);
  *puVar1 = &PTR_DAT_1109d74d0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  func_0x000107786f94(puVar1 + 0x2d,param_3);
  return param_1;
}



/* Entry: 1077870cc; end: 1077870df;  */

void FUN_1077870cc(void)

{
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1077871f8; end: 1077878d3;  */

void FUN_1077871f8(long *param_1,long param_2)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 extraout_x8;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puStack_70;
  
  func_0x00010778c688();
  func_0x00010778ca34();
  puStack_70[1] = 0;
  puStack_70[2] = 0;
  *puStack_70 = &PTR_DAT_1109d7e58;
  func_0x000107785684(puStack_70 + 3,param_2);
  puStack_70[3] = &PTR_DAT_1109d7fb0;
  func_0x00010727fe7c(puStack_70 + 0x30,param_2 + 0x168);
  func_0x0001073243b8(puStack_70 + 0x38,param_2 + 0x1a8);
  func_0x00010727fe7c(puStack_70 + 0x46,param_2 + 0x218);
  func_0x00010727fe7c(puStack_70 + 0x4d,param_2 + 0x250);
  func_0x00010727fe7c(puStack_70 + 0x54,param_2 + 0x288);
  func_0x00010727fe7c(puStack_70 + 0x5b,param_2 + 0x2c0);
  func_0x00010727fe7c(puStack_70 + 0x62,param_2 + 0x2f8);
  func_0x0001073243b8(puStack_70 + 0x6a,param_2 + 0x338);
  func_0x0001073243b8(puStack_70 + 0x79,param_2 + 0x3b0);
  func_0x0001073243b8(puStack_70 + 0x88,param_2 + 0x428);
  func_0x0001073243b8(puStack_70 + 0x97,param_2 + 0x4a0);
  func_0x00010727fe7c(puStack_70 + 0xa5,param_2 + 0x510);
  func_0x0001074c4824(puStack_70 + 0xac,param_2 + 0x548);
  func_0x0001074c4884(puStack_70 + 0xb8,param_2 + 0x5a8);
  func_0x0001074c4858(puStack_70 + 0xc6,param_2 + 0x618);
  func_0x0001074c4824(puStack_70 + 0xd3,param_2 + 0x680);
  func_0x0001074c4858(puStack_70 + 0xdf,param_2 + 0x6e0);
  func_0x0001074c4858(puStack_70 + 0xec,param_2 + 0x748);
  func_0x0001074c4824(puStack_70 + 0xf9,param_2 + 0x7b0);
  func_0x0001074c4824(puStack_70 + 0x105,param_2 + 0x810);
  func_0x0001074c4824(puStack_70 + 0x111,param_2 + 0x870);
  func_0x0001074c4824(puStack_70 + 0x11d,param_2 + 0x8d0);
  func_0x0001074c4858(puStack_70 + 0x129,param_2 + 0x930);
  func_0x00010778b718(puStack_70 + 0x136,param_2 + 0x998);
  func_0x0001074c4824(puStack_70 + 0x142,param_2 + 0x9f8);
  func_0x0001074c4824(puStack_70 + 0x14e,param_2 + 0xa58);
  func_0x0001074c4824(puStack_70 + 0x15a,param_2 + 0xab8);
  func_0x0001074c4884(puStack_70 + 0x166,param_2 + 0xb18);
  func_0x0001074c4858(puStack_70 + 0x174,param_2 + 0xb88);
  func_0x00010778b738(puStack_70 + 0x181,param_2 + 0xbf0);
  func_0x00010778b718(puStack_70 + 0x18d,param_2 + 0xc50);
  func_0x0001074c4884(puStack_70 + 0x199,param_2 + 0xcb0);
  func_0x0001074c4824(puStack_70 + 0x1a7,param_2 + 0xd20);
  func_0x00010778b758(puStack_70 + 0x1b3,param_2 + 0xd80);
  func_0x00010778b758(puStack_70 + 0x1c1,param_2 + 0xdf0);
  func_0x00010778b758(puStack_70 + 0x1cf,param_2 + 0xe60);
  func_0x00010778b758(puStack_70 + 0x1dd,param_2 + 0xed0);
  func_0x00010778b758(puStack_70 + 0x1eb,param_2 + 0xf40);
  func_0x00010748d7e8(puStack_70 + 0x1f9,param_2 + 0xfb0);
  uVar3 = *(undefined8 *)(param_2 + 0xff0);
  uVar2 = *(undefined8 *)(param_2 + 0xfe8);
  uVar5 = *(undefined8 *)(param_2 + 0x1000);
  uVar4 = *(undefined8 *)(param_2 + 0xff8);
  puStack_70[0x204] = *(undefined8 *)(param_2 + 0x1008);
  puStack_70[0x203] = uVar5;
  puStack_70[0x202] = uVar4;
  puStack_70[0x201] = uVar3;
  puStack_70[0x200] = uVar2;
  func_0x00010778c89c(0x1010);
  func_0x00010778c918(0x1070);
  func_0x00010778b758();
  func_0x00010778c918(0x10e0);
  func_0x0001074c4858();
  func_0x00010778c918(0x1148);
  func_0x00010778b78c();
  func_0x00010778c89c(0x11c8);
  func_0x00010778c89c(0x1228);
  func_0x00010778c918(0x1288);
  func_0x00010778b758();
  func_0x00010778b78c(puStack_70 + 0x262,param_2 + 0x12f8);
  func_0x0001074c4858(puStack_70 + 0x272,param_2 + 0x1378);
  func_0x00010778b78c(puStack_70 + 0x27f,param_2 + 0x13e0);
  func_0x0001074c4824(puStack_70 + 0x28f,param_2 + 0x1460);
  puVar1 = puStack_70 + 0x29b;
  func_0x00010778b758(puVar1,param_2 + 0x14c0);
  func_0x00010778c9a0();
  *param_1 = (long)(puStack_70 + 3);
  param_1[1] = (long)puStack_70;
  func_0x00010778c86c();
  func_0x00010778c57c(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107266a30(puStack_70 + 0x28f);
  func_0x00010748a890(puStack_70 + 0x27f);
  func_0x0001072ca524(puStack_70 + 0x272);
  func_0x00010748a890(puStack_70 + 0x262);
  func_0x00010727fc70(puStack_70 + 0x254);
  func_0x000107266a30(puStack_70 + 0x248);
  func_0x000107266a30(puStack_70 + 0x23c);
  func_0x00010748a890(puStack_70 + 0x22c);
  func_0x0001072ca524(puStack_70 + 0x21f);
  func_0x00010727fc70(puStack_70 + 0x211);
  func_0x000107266a30(puStack_70 + 0x205);
  func_0x00010748a94c(puStack_70 + 0x1f9);
  func_0x00010727fc70(puStack_70 + 0x1eb);
  func_0x00010727fc70(puStack_70 + 0x1dd);
  func_0x00010727fc70(puStack_70 + 0x1cf);
  func_0x00010727fc70(puStack_70 + 0x1c1);
  func_0x00010727fc70(puStack_70 + 0x1b3);
  func_0x000107266a30(puStack_70 + 0x1a7);
  func_0x000107432d98(puStack_70 + 0x199);
  func_0x00010727fc1c(puStack_70 + 0x18d);
  func_0x00010748aaa4(puStack_70 + 0x181);
  func_0x0001072ca524(puStack_70 + 0x174);
  func_0x000107432d98(puStack_70 + 0x166);
  func_0x000107266a30(puStack_70 + 0x15a);
  func_0x000107266a30(puStack_70 + 0x14e);
  func_0x000107266a30(puStack_70 + 0x142);
  func_0x00010727fc1c(puStack_70 + 0x136);
  func_0x0001072ca524(puStack_70 + 0x129);
  func_0x000107266a30(puStack_70 + 0x11d);
  func_0x000107266a30(puStack_70 + 0x111);
  func_0x000107266a30(puStack_70 + 0x105);
  func_0x000107266a30(puStack_70 + 0xf9);
  func_0x0001072ca524(puStack_70 + 0xec);
  func_0x0001072ca524(puStack_70 + 0xdf);
  func_0x000107266a30(puStack_70 + 0xd3);
  func_0x0001072ca524(puStack_70 + 0xc6);
  func_0x000107432d98(puStack_70 + 0xb8);
  func_0x000107266a30(puStack_70 + 0xac);
  func_0x00010778b7c0(puStack_70 + 0x30);
  do {
    func_0x000107785780(puStack_70 + 3);
    __ZNSt3__119__shared_weak_countD2Ev(puStack_70);
    func_0x00010778c9a0();
    __Unwind_Resume(puVar1);
    func_0x00010727fc1c(puStack_70 + 0x5b);
    func_0x00010727fc1c(puStack_70 + 0x54);
    func_0x00010727fc1c(puStack_70 + 0x4d);
    func_0x00010727fc1c(puStack_70 + 0x46);
    func_0x00010732442c(puStack_70 + 0x38);
    func_0x00010727fc1c(puStack_70 + 0x30);
  } while( true );
}



/* Entry: 10778acb0; end: 10778ad3f;  */

void FUN_10778acb0(undefined8 param_1,long param_2,long *param_3)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  long lStack_48;
  undefined1 auStack_40 [16];
  
  lStack_48 = *param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    lStack_48 = (long)param_3;
  }
  func_0x00010750c5d0(auStack_40,&lStack_48);
  ppuVar1 = &PTR_DAT_1109d75d8;
  func_0x000107785358(&PTR_DAT_1109d75d8,&UNK_1109d7e48,auStack_40);
  if (ppuVar1 != (undefined **)&UNK_1109d7e48) {
    puVar2 = auStack_40;
    func_0x000107785400(puVar2,ppuVar1);
    if ((int)puVar2 == 0) {
      func_0x000107787f74(param_1,*(undefined8 *)(param_2 + 8),*(undefined1 *)(ppuVar1 + 1));
      return;
    }
  }
  func_0x00010778c7c4();
  return;
}



/* Entry: 10778b1c4; end: 10778b207;  */

/* WARNING: Possible PIC construction at 0x00010778b258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010778b3bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010778b25c) */
/* WARNING: Removing unreachable block (ram,0x00010778b27c) */
/* WARNING: Removing unreachable block (ram,0x00010778b274) */
/* WARNING: Removing unreachable block (ram,0x00010778b3c0) */
/* WARNING: Removing unreachable block (ram,0x00010778b3e0) */
/* WARNING: Removing unreachable block (ram,0x00010778b3d8) */

undefined8 * FUN_10778b1c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar6;
  undefined8 ****ppppuVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  code *pcVar10;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  double dStack_150;
  undefined8 ***pppuStack_f0;
  undefined *puStack_e8;
  undefined1 auStack_d8 [72];
  undefined8 ***pppuStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [72];
  undefined8 uStack_28;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)auStack_70;
  ppppuVar7 = (undefined8 ****)&stack0xfffffffffffffff0;
  func_0x00010778c620();
  func_0x00010778c7e0();
  func_0x00010778c980();
  func_0x00010778c758();
  func_0x00010778c738(2);
  func_0x00010778c57c(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar9 = &UNK_10778b208;
    __Unwind_Resume();
    puVar4 = extraout_x8;
    if (*(int *)(param_1 + 8) == 0) {
code_r0x00010778c6f0:
      puVar4[8] = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
      puVar4[7] = 0;
      puVar4[6] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      *(undefined4 *)puVar4 = 7;
      return param_1;
    }
    uVar3 = 0;
    puVar5 = param_1;
    if (*(int *)(param_1 + 8) == 1) {
      puStack_78 = &UNK_10778b208;
      pppuStack_80 = ppppuVar7;
      func_0x00010778c620();
      puVar2 = &uStack_180;
      puStack_e8 = &UNK_10778b25c;
      ppppuVar7 = &pppuStack_f0;
      pppuStack_f0 = &pppuStack_80;
      func_0x00010778c620(auStack_d8);
      uStack_170 = 0;
      uStack_168 = 0;
      uStack_160 = 0;
      puVar4 = &uStack_170;
      func_0x00010778ca0c();
      for (lVar6 = 0; uVar3 = lVar6 == 0x10, !(bool)uVar3; lVar6 = lVar6 + 4) {
        dStack_150 = (double)*(float *)((long)param_1 + lVar6);
        uStack_158 = 3;
        func_0x00010778ca48();
        func_0x00010778c8e8();
      }
      func_0x00010778ca28();
      *(undefined4 *)unaff_x19 = 0;
      unaff_x19[2] = uStack_178;
      unaff_x19[1] = uStack_180;
      func_0x00010778c8d4();
      func_0x00010778c9a8();
      func_0x00010778c564();
      if ((bool)uVar3) {
        return puVar4;
      }
      ___stack_chk_fail();
      param_2 = puVar4;
      func_0x00010778c9a8();
      puVar9 = &UNK_10778b328;
      func_0x00010778c858();
      unaff_x19 = puVar4;
      unaff_x20 = param_1;
    }
    puVar1 = (undefined1 *)((long)puVar2 + -0x70);
    *(undefined8 **)((long)puVar2 + -0x20) = unaff_x20;
    *(undefined8 **)((long)puVar2 + -0x18) = unaff_x19;
    *(undefined8 *****)((long)puVar2 + -0x10) = ppppuVar7;
    *(undefined **)((long)puVar2 + -8) = puVar9;
    puVar8 = (undefined1 *)((long)puVar2 + -0x10);
    func_0x00010778c620();
    func_0x00010778c7e0();
    func_0x00010778c980();
    func_0x00010778c758();
    func_0x00010778c738(2);
    func_0x00010778c57c(*(undefined8 *)((long)puVar2 + -0x28));
    param_1 = param_2;
    if (!(bool)uVar3) {
      ___stack_chk_fail();
      pcVar10 = (code *)&UNK_10778b36c;
      __Unwind_Resume();
      param_1 = param_2;
      puVar4 = extraout_x8_00;
      if (*(int *)(param_2 + 0xe) == 0) goto code_r0x00010778c6f0;
      uVar3 = *(int *)(param_2 + 0xe) == 1;
      if ((bool)uVar3) {
        *(undefined8 **)((long)puVar2 + -0x90) = unaff_x20;
        *(undefined8 **)((long)puVar2 + -0x88) = unaff_x19;
        *(undefined1 **)((long)puVar2 + -0x80) = puVar8;
        *(undefined **)((long)puVar2 + -0x78) = &UNK_10778b36c;
        func_0x00010778c620(param_2 + 1);
        *(undefined8 *)((long)puVar2 + -0x98) = extraout_x8_01;
        puVar1 = (undefined1 *)((long)puVar2 + -0x140);
        puVar5 = (undefined8 *)((long)puVar2 + -0x140);
        *(undefined8 **)((long)puVar2 + -0x100) = unaff_x20;
        *(undefined8 **)((long)puVar2 + -0xf8) = unaff_x19;
        *(undefined1 **)((long)puVar2 + -0xf0) = (undefined1 *)((long)puVar2 + -0x80);
        *(undefined **)((long)puVar2 + -0xe8) = &UNK_10778b3c0;
        puVar8 = (undefined1 *)((long)puVar2 + -0xf0);
        func_0x00010778c620((undefined1 *)((long)puVar2 + -0xd8));
        *(undefined8 *)((long)puVar2 + -0x108) = extraout_x8_02;
        func_0x000104c2fe00((undefined1 *)((long)puVar2 + -0x140));
        func_0x000104c33004(unaff_x19,(undefined1 *)((long)puVar2 + -0x140));
        func_0x000104c2f714();
        func_0x00010778c57c(*(undefined8 *)((long)puVar2 + -0x108));
        if ((bool)uVar3) {
          return puVar5;
        }
        pcVar10 = FUN_10778b440;
        ___stack_chk_fail();
      }
      *(undefined8 **)(puVar1 + -0x20) = unaff_x20;
      *(undefined8 **)(puVar1 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar1 + -0x10) = puVar8;
      *(code **)(puVar1 + -8) = pcVar10;
      func_0x00010778c620();
      func_0x00010778c7e0();
      func_0x00010778c980();
      func_0x00010778c758();
      func_0x00010778c738(2);
      func_0x00010778c57c(*(undefined8 *)(puVar1 + -0x28));
      param_1 = puVar5;
      if (!(bool)uVar3) {
        ___stack_chk_fail();
        __Unwind_Resume();
        *(undefined8 **)(puVar1 + -0x90) = unaff_x20;
        *(undefined8 **)(puVar1 + -0x88) = unaff_x19;
        *(undefined1 **)(puVar1 + -0x80) = puVar1 + -0x10;
        *(undefined **)(puVar1 + -0x78) = &UNK_10778b484;
        if (*(char *)(puVar5 + 7) == '\x01') {
          func_0x00010748aaa4(puVar5);
        }
        return puVar5;
      }
    }
  }
  return param_1;
}



/* Entry: 10778b440; end: 10778b483;  */

long FUN_10778b440(long param_1)

{
  undefined1 in_ZR;
  undefined8 uStack_28;
  
  func_0x00010778c620();
  func_0x00010778c7e0();
  func_0x00010778c980();
  func_0x00010778c758();
  func_0x00010778c738(2);
  func_0x00010778c57c(uStack_28);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  if (*(char *)(param_1 + 0x38) == '\x01') {
    func_0x00010748aaa4(param_1);
  }
  return param_1;
}



/* Entry: 10778b650; end: 10778b663;  */

void FUN_10778b650(void)

{
  func_0x00010778b6b8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10778bc18; end: 10778bc3f;  */

void FUN_10778bc18(undefined8 param_1,undefined8 param_2)

{
  func_0x00010778c87c();
  func_0x0001073ddbd0(param_2);
  func_0x00010778c9d0();
  func_0x00010778ca60();
  func_0x00010778c970();
  return;
}



/* Entry: 10778bdf0; end: 10778be7b;  */

void FUN_10778bdf0(ulong *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *param_2;
  func_0x000107785b28();
  uVar2 = *param_1;
  *param_1 = lVar1 + uVar2 * 0x1000 + (uVar2 >> 4) + 0x9e3779b97f4a7c15 ^ uVar2;
  return;
}



/* Entry: 10778bfec; end: 10778c00f;  */

void FUN_10778bfec(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  func_0x00010748aaa4(lVar1);
  *(undefined4 *)(lVar1 + 0x30) = 0;
  return;
}



/* Entry: 10778c0f4; end: 10778c0ff;  */

void FUN_10778c0f4(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x00010778c87c(*param_1,param_1[1]);
  func_0x00010748aaa4();
  func_0x00010778c9d0();
  func_0x00010748d780();
  *(undefined4 *)(unaff_x20 + 0x30) = 2;
  return;
}



/* Entry: 10778c2e8; end: 10778c347;  */

void FUN_10778c2e8(long *param_1,long param_2,long param_3)

{
  undefined1 uVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x30) == 2) {
    func_0x00010778ca54();
    uVar1 = *(undefined1 *)(param_3 + 0x2c);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_3 + 0x28);
    *(undefined1 *)(param_2 + 0x2c) = uVar1;
  }
  else {
    func_0x00010748a94c(lVar2);
    func_0x00010778c9d0();
    func_0x00010748d86c();
    *(undefined4 *)(lVar2 + 0x30) = 2;
  }
  return;
}



/* Entry: 10778c564; end: 10778cb47;  */

void FUN_10778c564(void)

{
  return;
}



/* Entry: 10778d264; end: 10778d29b;  */

/* WARNING: Possible PIC construction at 0x00010778d038: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010778d03c) */
/* WARNING: Removing unreachable block (ram,0x00010778d04c) */
/* WARNING: Removing unreachable block (ram,0x00010778d040) */

ulong FUN_10778d264(long param_1)

{
  ulong uVar1;
  long unaff_x19;
  long unaff_x20;
  
  uVar1 = unaff_x20 + param_1;
  func_0x00010778d284(uVar1,unaff_x19 + param_1);
  func_0x00010778d1ec();
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    return (ulong)((*(byte *)(unaff_x20 + 0x10) & 2) == 0 && *(int *)(unaff_x20 + 0x30) != 1);
  }
  return 0;
}



/* Entry: 10778d4e8; end: 10778d523;  */

void FUN_10778d4e8(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010778ee20(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010778f8f0();
  return;
}



/* Entry: 10778dc68; end: 10778df4f;  */

/* WARNING: Possible PIC construction at 0x00010778df94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010778df98) */
/* WARNING: Removing unreachable block (ram,0x00010778dfb0) */
/* WARNING: Removing unreachable block (ram,0x00010778dfbc) */
/* WARNING: Removing unreachable block (ram,0x00010778e068) */
/* WARNING: Removing unreachable block (ram,0x00010778e074) */
/* WARNING: Removing unreachable block (ram,0x00010778e684) */
/* WARNING: Removing unreachable block (ram,0x00010778e68c) */
/* WARNING: Removing unreachable block (ram,0x00010778e6a0) */
/* WARNING: Removing unreachable block (ram,0x00010778e088) */
/* WARNING: Removing unreachable block (ram,0x00010778e6a8) */
/* WARNING: Removing unreachable block (ram,0x00010778e6b8) */
/* WARNING: Removing unreachable block (ram,0x00010778e6c0) */
/* WARNING: Removing unreachable block (ram,0x00010778e9d0) */
/* WARNING: Removing unreachable block (ram,0x00010778e6c8) */
/* WARNING: Removing unreachable block (ram,0x00010778e9dc) */
/* WARNING: Removing unreachable block (ram,0x00010778e094) */
/* WARNING: Removing unreachable block (ram,0x00010778e6e8) */
/* WARNING: Removing unreachable block (ram,0x00010778e6f8) */
/* WARNING: Removing unreachable block (ram,0x00010778e700) */
/* WARNING: Removing unreachable block (ram,0x00010778e9e8) */
/* WARNING: Removing unreachable block (ram,0x00010778e708) */
/* WARNING: Removing unreachable block (ram,0x00010778e9f4) */
/* WARNING: Removing unreachable block (ram,0x00010778e09c) */
/* WARNING: Removing unreachable block (ram,0x00010778e0ac) */
/* WARNING: Removing unreachable block (ram,0x00010778e0b4) */
/* WARNING: Removing unreachable block (ram,0x00010778e9b8) */
/* WARNING: Removing unreachable block (ram,0x00010778e0bc) */
/* WARNING: Removing unreachable block (ram,0x00010778e9c4) */
/* WARNING: Removing unreachable block (ram,0x00010778e9fc) */
/* WARNING: Removing unreachable block (ram,0x00010778ea00) */
/* WARNING: Removing unreachable block (ram,0x00010778dfd4) */
/* WARNING: Removing unreachable block (ram,0x00010778e044) */
/* WARNING: Removing unreachable block (ram,0x00010778e04c) */
/* WARNING: Removing unreachable block (ram,0x00010778e060) */
/* WARNING: Removing unreachable block (ram,0x00010778dff0) */
/* WARNING: Removing unreachable block (ram,0x00010778e120) */
/* WARNING: Removing unreachable block (ram,0x00010778e134) */
/* WARNING: Removing unreachable block (ram,0x00010778e13c) */
/* WARNING: Removing unreachable block (ram,0x00010778e7dc) */
/* WARNING: Removing unreachable block (ram,0x00010778e144) */
/* WARNING: Removing unreachable block (ram,0x00010778e7e8) */
/* WARNING: Removing unreachable block (ram,0x00010778dff8) */
/* WARNING: Removing unreachable block (ram,0x00010778e0dc) */
/* WARNING: Removing unreachable block (ram,0x00010778e0f0) */
/* WARNING: Removing unreachable block (ram,0x00010778e0f8) */
/* WARNING: Removing unreachable block (ram,0x00010778e7c4) */
/* WARNING: Removing unreachable block (ram,0x00010778e100) */
/* WARNING: Removing unreachable block (ram,0x00010778e7d0) */
/* WARNING: Removing unreachable block (ram,0x00010778e000) */
/* WARNING: Removing unreachable block (ram,0x00010778e164) */
/* WARNING: Removing unreachable block (ram,0x00010778e17c) */
/* WARNING: Removing unreachable block (ram,0x00010778e194) */
/* WARNING: Removing unreachable block (ram,0x00010778e1fc) */
/* WARNING: Removing unreachable block (ram,0x00010778e204) */
/* WARNING: Removing unreachable block (ram,0x00010778e218) */
/* WARNING: Removing unreachable block (ram,0x00010778e1a8) */
/* WARNING: Removing unreachable block (ram,0x00010778e220) */
/* WARNING: Removing unreachable block (ram,0x00010778e234) */
/* WARNING: Removing unreachable block (ram,0x00010778e23c) */
/* WARNING: Removing unreachable block (ram,0x00010778e860) */
/* WARNING: Removing unreachable block (ram,0x00010778e244) */
/* WARNING: Removing unreachable block (ram,0x00010778e86c) */
/* WARNING: Removing unreachable block (ram,0x00010778e1b0) */
/* WARNING: Removing unreachable block (ram,0x00010778e264) */
/* WARNING: Removing unreachable block (ram,0x00010778e2e4) */
/* WARNING: Removing unreachable block (ram,0x00010778e360) */
/* WARNING: Removing unreachable block (ram,0x00010778e368) */
/* WARNING: Removing unreachable block (ram,0x00010778e2f8) */
/* WARNING: Removing unreachable block (ram,0x00010778e30c) */
/* WARNING: Removing unreachable block (ram,0x00010778e314) */
/* WARNING: Removing unreachable block (ram,0x00010778e728) */
/* WARNING: Removing unreachable block (ram,0x00010778e31c) */
/* WARNING: Removing unreachable block (ram,0x00010778e734) */
/* WARNING: Removing unreachable block (ram,0x00010778e278) */
/* WARNING: Removing unreachable block (ram,0x00010778e280) */
/* WARNING: Removing unreachable block (ram,0x00010778e33c) */
/* WARNING: Removing unreachable block (ram,0x00010778e344) */
/* WARNING: Removing unreachable block (ram,0x00010778e358) */
/* WARNING: Removing unreachable block (ram,0x00010778e294) */
/* WARNING: Removing unreachable block (ram,0x00010778e378) */
/* WARNING: Removing unreachable block (ram,0x00010778e38c) */
/* WARNING: Removing unreachable block (ram,0x00010778e394) */
/* WARNING: Removing unreachable block (ram,0x00010778e828) */
/* WARNING: Removing unreachable block (ram,0x00010778e39c) */
/* WARNING: Removing unreachable block (ram,0x00010778e830) */
/* WARNING: Removing unreachable block (ram,0x00010778e29c) */
/* WARNING: Removing unreachable block (ram,0x00010778e3b8) */
/* WARNING: Removing unreachable block (ram,0x00010778e4b0) */
/* WARNING: Removing unreachable block (ram,0x00010778e5f8) */
/* WARNING: Removing unreachable block (ram,0x00010778e600) */
/* WARNING: Removing unreachable block (ram,0x00010778e614) */
/* WARNING: Removing unreachable block (ram,0x00010778e4c4) */
/* WARNING: Removing unreachable block (ram,0x00010778e4d8) */
/* WARNING: Removing unreachable block (ram,0x00010778e4e0) */
/* WARNING: Removing unreachable block (ram,0x00010778e764) */
/* WARNING: Removing unreachable block (ram,0x00010778e4e8) */
/* WARNING: Removing unreachable block (ram,0x00010778e76c) */
/* WARNING: Removing unreachable block (ram,0x00010778e774) */
/* WARNING: Removing unreachable block (ram,0x00010778e778) */
/* WARNING: Removing unreachable block (ram,0x00010778e3cc) */
/* WARNING: Removing unreachable block (ram,0x00010778e450) */
/* WARNING: Removing unreachable block (ram,0x00010778e5d4) */
/* WARNING: Removing unreachable block (ram,0x00010778e5dc) */
/* WARNING: Removing unreachable block (ram,0x00010778e5e8) */
/* WARNING: Removing unreachable block (ram,0x00010778e5f0) */
/* WARNING: Removing unreachable block (ram,0x00010778e46c) */
/* WARNING: Removing unreachable block (ram,0x00010778e480) */
/* WARNING: Removing unreachable block (ram,0x00010778e488) */
/* WARNING: Removing unreachable block (ram,0x00010778e740) */
/* WARNING: Removing unreachable block (ram,0x00010778e490) */
/* WARNING: Removing unreachable block (ram,0x00010778e74c) */
/* WARNING: Removing unreachable block (ram,0x00010778e754) */
/* WARNING: Removing unreachable block (ram,0x00010778e758) */
/* WARNING: Removing unreachable block (ram,0x00010778e3d4) */
/* WARNING: Removing unreachable block (ram,0x00010778e504) */
/* WARNING: Removing unreachable block (ram,0x00010778e61c) */
/* WARNING: Removing unreachable block (ram,0x00010778e624) */
/* WARNING: Removing unreachable block (ram,0x00010778e638) */
/* WARNING: Removing unreachable block (ram,0x00010778e520) */
/* WARNING: Removing unreachable block (ram,0x00010778e534) */
/* WARNING: Removing unreachable block (ram,0x00010778e53c) */
/* WARNING: Removing unreachable block (ram,0x00010778e784) */
/* WARNING: Removing unreachable block (ram,0x00010778e544) */
/* WARNING: Removing unreachable block (ram,0x00010778e78c) */
/* WARNING: Removing unreachable block (ram,0x00010778e794) */
/* WARNING: Removing unreachable block (ram,0x00010778e798) */
/* WARNING: Removing unreachable block (ram,0x00010778e3dc) */
/* WARNING: Removing unreachable block (ram,0x00010778e560) */
/* WARNING: Removing unreachable block (ram,0x00010778e664) */
/* WARNING: Removing unreachable block (ram,0x00010778e584) */
/* WARNING: Removing unreachable block (ram,0x00010778e590) */
/* WARNING: Removing unreachable block (ram,0x00010778e8f0) */
/* WARNING: Removing unreachable block (ram,0x00010778e8f8) */
/* WARNING: Removing unreachable block (ram,0x00010778ea58) */
/* WARNING: Removing unreachable block (ram,0x00010778e900) */
/* WARNING: Removing unreachable block (ram,0x00010778e974) */
/* WARNING: Removing unreachable block (ram,0x00010778e97c) */
/* WARNING: Removing unreachable block (ram,0x00010778eaa8) */
/* WARNING: Removing unreachable block (ram,0x00010778e984) */
/* WARNING: Removing unreachable block (ram,0x00010778e940) */
/* WARNING: Removing unreachable block (ram,0x00010778e948) */
/* WARNING: Removing unreachable block (ram,0x00010778ea8c) */
/* WARNING: Removing unreachable block (ram,0x00010778e950) */
/* WARNING: Removing unreachable block (ram,0x00010778e884) */
/* WARNING: Removing unreachable block (ram,0x00010778e88c) */
/* WARNING: Removing unreachable block (ram,0x00010778ea34) */
/* WARNING: Removing unreachable block (ram,0x00010778e894) */
/* WARNING: Removing unreachable block (ram,0x00010778e8cc) */
/* WARNING: Removing unreachable block (ram,0x00010778e8d4) */
/* WARNING: Removing unreachable block (ram,0x00010778ea4c) */
/* WARNING: Removing unreachable block (ram,0x00010778e8dc) */
/* WARNING: Removing unreachable block (ram,0x00010778e8a8) */
/* WARNING: Removing unreachable block (ram,0x00010778e8b0) */
/* WARNING: Removing unreachable block (ram,0x00010778ea40) */
/* WARNING: Removing unreachable block (ram,0x00010778e8b8) */
/* WARNING: Removing unreachable block (ram,0x00010778e914) */
/* WARNING: Removing unreachable block (ram,0x00010778e91c) */
/* WARNING: Removing unreachable block (ram,0x00010778ea78) */
/* WARNING: Removing unreachable block (ram,0x00010778e924) */
/* WARNING: Removing unreachable block (ram,0x00010778e5a8) */
/* WARNING: Removing unreachable block (ram,0x00010778e5b0) */
/* WARNING: Removing unreachable block (ram,0x00010778ea64) */
/* WARNING: Removing unreachable block (ram,0x00010778ea9c) */
/* WARNING: Removing unreachable block (ram,0x00010778e5b8) */
/* WARNING: Removing unreachable block (ram,0x00010778e968) */
/* WARNING: Removing unreachable block (ram,0x00010778e994) */
/* WARNING: Removing unreachable block (ram,0x00010778e9a8) */
/* WARNING: Removing unreachable block (ram,0x00010778e9ac) */
/* WARNING: Removing unreachable block (ram,0x00010778e3e4) */
/* WARNING: Removing unreachable block (ram,0x00010778e640) */
/* WARNING: Removing unreachable block (ram,0x00010778e648) */
/* WARNING: Removing unreachable block (ram,0x00010778e65c) */
/* WARNING: Removing unreachable block (ram,0x00010778e410) */
/* WARNING: Removing unreachable block (ram,0x00010778e424) */
/* WARNING: Removing unreachable block (ram,0x00010778e42c) */
/* WARNING: Removing unreachable block (ram,0x00010778e7a4) */
/* WARNING: Removing unreachable block (ram,0x00010778e434) */
/* WARNING: Removing unreachable block (ram,0x00010778e7ac) */
/* WARNING: Removing unreachable block (ram,0x00010778e7b4) */
/* WARNING: Removing unreachable block (ram,0x00010778e7b8) */
/* WARNING: Removing unreachable block (ram,0x00010778e2a4) */
/* WARNING: Removing unreachable block (ram,0x00010778e2b8) */
/* WARNING: Removing unreachable block (ram,0x00010778e2c0) */
/* WARNING: Removing unreachable block (ram,0x00010778e814) */
/* WARNING: Removing unreachable block (ram,0x00010778e2c8) */
/* WARNING: Removing unreachable block (ram,0x00010778e81c) */
/* WARNING: Removing unreachable block (ram,0x00010778e838) */
/* WARNING: Removing unreachable block (ram,0x00010778e83c) */
/* WARNING: Removing unreachable block (ram,0x00010778e1b8) */
/* WARNING: Removing unreachable block (ram,0x00010778e1cc) */
/* WARNING: Removing unreachable block (ram,0x00010778e1d4) */
/* WARNING: Removing unreachable block (ram,0x00010778e848) */
/* WARNING: Removing unreachable block (ram,0x00010778e1dc) */
/* WARNING: Removing unreachable block (ram,0x00010778e854) */
/* WARNING: Removing unreachable block (ram,0x00010778e874) */
/* WARNING: Removing unreachable block (ram,0x00010778e878) */
/* WARNING: Removing unreachable block (ram,0x00010778e004) */
/* WARNING: Removing unreachable block (ram,0x00010778e018) */
/* WARNING: Removing unreachable block (ram,0x00010778e020) */
/* WARNING: Removing unreachable block (ram,0x00010778e7f4) */
/* WARNING: Removing unreachable block (ram,0x00010778e028) */
/* WARNING: Removing unreachable block (ram,0x00010778e7fc) */
/* WARNING: Removing unreachable block (ram,0x00010778e804) */
/* WARNING: Removing unreachable block (ram,0x00010778e808) */
/* WARNING: Removing unreachable block (ram,0x00010778ea08) */
/* WARNING: Removing unreachable block (ram,0x00010778ea0c) */
/* WARNING: Removing unreachable block (ram,0x00010778dfa4) */
/* WARNING: Removing unreachable block (ram,0x00010778ea10) */
/* WARNING: Removing unreachable block (ram,0x00010778eab4) */
/* WARNING: Removing unreachable block (ram,0x00010778eabc) */
/* WARNING: Removing unreachable block (ram,0x00010778eb8c) */
/* WARNING: Removing unreachable block (ram,0x00010778ebc8) */
/* WARNING: Removing unreachable block (ram,0x00010778ea1c) */
/* WARNING: Recovered jumptable eliminated as dead code */

long * FUN_10778dc68(long *param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 uVar4;
  long *plVar5;
  long *plVar6;
  undefined1 uVar7;
  long alStack_1f0 [2];
  long *plStack_1e0;
  undefined1 **ppuStack_1d0;
  undefined *puStack_1c8;
  long lStack_190;
  ulong uStack_188;
  undefined1 *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  plVar6 = &lStack_70;
  plVar5 = param_1;
  func_0x00010778f7e4();
  uVar4 = (int)param_3 == 0x16;
  switch(param_3 & 0xffffffff) {
  case 0:
    func_0x00010778f6dc();
    if ((bool)uVar4) {
      plVar5 = (long *)(param_2 + 0x3b0);
code_r0x00010778de90:
      func_0x000107785298(param_1,plVar5,&stack0xffffffffffffffef);
      return plVar5;
    }
    break;
  case 1:
    func_0x00010778f6dc();
    if ((bool)uVar4) {
      plVar5 = (long *)(param_2 + 0x410);
code_r0x00010778dda8:
      func_0x000107784c0c(param_1,plVar5,&stack0xffffffffffffffef);
      return plVar5;
    }
    break;
  case 2:
    func_0x00010778f6dc();
    if ((bool)uVar4) {
      plVar5 = (long *)(param_2 + 0x480);
code_r0x00010778de70:
      FUN_107784cb8(param_1,plVar5,&stack0xffffffffffffffef);
      return plVar5;
    }
    break;
  case 3:
    func_0x00010778f6dc();
    if ((bool)uVar4) {
      plVar5 = (long *)(param_2 + 0x4e8);
code_r0x00010778df00:
      func_0x000107784e48(param_1,plVar5,&stack0xffffffffffffffef);
      return plVar5;
    }
    break;
  case 4:
    func_0x00010778f6dc();
    if ((bool)uVar4) {
      plVar5 = (long *)(param_2 + 0x548);
      goto code_r0x00010778dda8;
    }
    break;
  case 5:
    func_0x00010778f6dc();
    if ((bool)uVar4) {
      plVar5 = (long *)(param_2 + 0x5b8);
      func_0x000107784f0c(param_1,plVar5,&stack0xffffffffffffffef);
      return plVar5;
    }
    break;
  case 6:
    func_0x00010778f6dc();
    if ((bool)uVar4) {
      plVar5 = (long *)(param_2 + 0x680);
      goto code_r0x00010778de70;
    }
    break;
  case 7:
    func_0x00010778f6dc();
    if ((bool)uVar4) {
      plVar5 = (long *)(param_2 + 0x6e8);
      func_0x00010778b120(param_1,plVar5,&stack0xffffffffffffffef);
      return plVar5;
    }
    break;
  case 8:
    func_0x00010778f978(param_2 + 1000);
    func_0x00010778f7d8();
    goto LAB_10778df38;
  case 9:
    func_0x00010778f978(param_2 + 0x458);
    func_0x00010778f7d8();
    goto LAB_10778df38;
  case 10:
    uStack_68 = *(undefined8 *)(param_2 + 0x4c8);
    lStack_70 = *(long *)(param_2 + 0x4c0);
    uStack_58 = *(undefined8 *)(param_2 + 0x4d8);
    uStack_60 = *(undefined8 *)(param_2 + 0x4d0);
    uStack_50 = *(undefined8 *)(param_2 + 0x4e0);
    func_0x00010778f7d8();
    goto LAB_10778df38;
  case 0xb:
    uStack_68 = *(undefined8 *)(param_2 + 0x528);
    lStack_70 = *(long *)(param_2 + 0x520);
    uStack_58 = *(undefined8 *)(param_2 + 0x538);
    uStack_60 = *(undefined8 *)(param_2 + 0x530);
    uStack_50 = *(undefined8 *)(param_2 + 0x540);
    func_0x00010778f7d8();
    goto LAB_10778df38;
  case 0xc:
    uStack_68 = *(undefined8 *)(param_2 + 0x598);
    lStack_70 = *(long *)(param_2 + 0x590);
    uStack_58 = *(undefined8 *)(param_2 + 0x5a8);
    uStack_60 = *(undefined8 *)(param_2 + 0x5a0);
    uStack_50 = *(undefined8 *)(param_2 + 0x5b0);
    func_0x00010778f7d8();
    goto LAB_10778df38;
  case 0xd:
    func_0x00010778f978(param_2 + 0x658);
    func_0x00010778f7d8();
    goto LAB_10778df38;
  case 0xe:
    uStack_68 = *(undefined8 *)(param_2 + 0x6c8);
    lStack_70 = *(long *)(param_2 + 0x6c0);
    uStack_58 = *(undefined8 *)(param_2 + 0x6d8);
    uStack_60 = *(undefined8 *)(param_2 + 0x6d0);
    uStack_50 = *(undefined8 *)(param_2 + 0x6e0);
    func_0x00010778f7d8();
    goto LAB_10778df38;
  case 0xf:
    uStack_68 = *(undefined8 *)(param_2 + 0x728);
    lStack_70 = *(long *)(param_2 + 0x720);
    uStack_58 = *(undefined8 *)(param_2 + 0x738);
    uStack_60 = *(undefined8 *)(param_2 + 0x730);
    uStack_50 = *(undefined8 *)(param_2 + 0x740);
    func_0x00010778f7d8();
    goto LAB_10778df38;
  case 0x10:
    func_0x00010778f6dc();
    if ((bool)uVar4) {
      plVar5 = (long *)(param_2 + 0x168);
      goto code_r0x00010778de90;
    }
    break;
  case 0x11:
    if (*(int *)(param_2 + 0x1d0) == 0) goto LAB_10778de08;
    uVar4 = *(int *)(param_2 + 0x1d0) == 1;
    if ((bool)uVar4) {
      puVar1 = &UNK_1109df618;
      if (*(char *)(param_2 + 0x1a0) != '\x01') {
        puVar1 = &UNK_1109df628;
      }
      uVar4 = *(char *)(param_2 + 0x1a0) == '\0';
      puVar2 = &UNK_1109df608;
      if (!(bool)uVar4) {
        puVar2 = puVar1;
      }
      param_2 = *(long *)(puVar2 + 8);
      func_0x00010724ae4c();
      func_0x00010778fa28();
      uVar7 = 1;
    }
    else {
      plVar6 = *(long **)(param_2 + 0x1a0);
      (**(code **)(*plVar6 + 0x28))(&lStack_70);
      func_0x00010778fa28();
      uVar7 = 2;
    }
    *(undefined1 *)(param_1 + 8) = uVar7;
    func_0x00010778fa10();
    plVar5 = plVar6;
    goto LAB_10778df38;
  case 0x12:
    func_0x00010778f6dc();
    if ((bool)uVar4) {
      plVar5 = (long *)(param_2 + 0x1d8);
      goto code_r0x00010778de90;
    }
    break;
  case 0x13:
    func_0x00010778f6dc();
    if ((bool)uVar4) {
      plVar5 = (long *)(param_2 + 0x210);
      goto code_r0x00010778df00;
    }
    break;
  case 0x14:
    func_0x00010778f6dc();
    if ((bool)uVar4) {
      plVar5 = (long *)(param_2 + 0x248);
code_r0x00010778dee0:
      func_0x00010778b36c(param_1,plVar5,&stack0xffffffffffffffef);
      return plVar5;
    }
    break;
  case 0x15:
    func_0x00010778f6dc();
    if ((bool)uVar4) {
      plVar5 = (long *)(param_2 + 0x2c0);
      goto code_r0x00010778dee0;
    }
    break;
  case 0x16:
    func_0x00010778f6dc();
    if ((bool)uVar4) {
      plVar5 = (long *)(param_2 + 0x338);
      goto code_r0x00010778dee0;
    }
    break;
  default:
LAB_10778de08:
    func_0x00010778f944();
LAB_10778df38:
    func_0x00010778f6dc();
    if ((bool)uVar4) {
      return plVar5;
    }
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puStack_78 = &DAT_10778df50;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x00010778f7e4();
  plVar6 = alStack_1f0;
  iVar3 = (int)alStack_1f0;
  puStack_1c8 = &UNK_10778df98;
  plStack_1e0 = plVar5;
  ppuStack_1d0 = &puStack_80;
  lStack_190 = param_2;
  uStack_188 = param_3;
  func_0x00010772d2fc(alStack_1f0,&lStack_190);
  func_0x00010778f938();
  func_0x000107785358();
  if ((plVar6 == (long *)&UNK_1109d8320) || (func_0x000107785400(alStack_1f0,plVar6), iVar3 != 0)) {
    plVar6 = (long *)&UNK_1109d8320;
  }
  return plVar6;
}



/* Entry: 10778ef04; end: 10778ef33;  */

undefined8 * FUN_10778ef04(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x22b63cbeea4e1b) {
    puVar1 = (undefined8 *)(param_2 * 0x760);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109d8330;
  func_0x00010778ef9c(param_1 + 3);
  return param_1;
}



/* Entry: 10778f038; end: 10778f04b;  */

void FUN_10778f038(void)

{
  return;
}



/* Entry: 10778f294; end: 10778f2b3;  */

void FUN_10778f294(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x00010778f2b4(&uStack_18);
  return;
}



/* Entry: 10778f460; end: 10778f48b;  */

void FUN_10778f460(undefined8 param_1,long param_2)

{
  func_0x00010778fa48(*(undefined4 *)(param_2 + 0x30));
  func_0x00010778fa3c();
  return;
}



/* Entry: 10778fad0; end: 10778fc2b;  */

uint FUN_10778fad0(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  uVar1 = param_1 + 0xd0;
  func_0x00010778cf84(uVar1,param_2 + 0xd0);
  if ((uVar1 & 1) == 0) {
    lVar2 = param_1 + 0x140;
    func_0x000107781d84(lVar2,param_2 + 0x140);
    if ((int)lVar2 != 0) {
      lVar2 = param_1 + 0x168;
      func_0x000107785b50(lVar2,param_2 + 0x168);
      if ((int)lVar2 != 0) {
        lVar2 = param_1 + 0x1a0;
        func_0x00010778f524(lVar2,param_2 + 0x1a0);
        if ((int)lVar2 != 0) {
          lVar2 = param_1 + 0x1d8;
          func_0x000107785b50(lVar2,param_2 + 0x1d8);
          if ((int)lVar2 != 0) {
            lVar2 = param_1 + 0x210;
            func_0x000107786038(lVar2,param_2 + 0x210);
            if ((int)lVar2 != 0) {
              lVar2 = param_1 + 0x248;
              func_0x00010778be7c(lVar2,param_2 + 0x248);
              if ((int)lVar2 != 0) {
                lVar2 = param_1 + 0x2c0;
                func_0x00010778be7c(lVar2,param_2 + 0x2c0);
                if ((int)lVar2 != 0) {
                  lVar2 = param_1 + 0x338;
                  func_0x00010778be7c(lVar2,param_2 + 0x338);
                  if ((int)lVar2 != 0) {
                    uVar1 = param_1 + 0x5b8;
                    func_0x00010778fc2c(uVar1,param_2 + 0x5b8);
                    if ((uVar1 & 1) == 0) {
                      lVar2 = param_1 + 0x3b0;
                      func_0x00010778d0dc(lVar2,param_2 + 0x3b0);
                      lVar3 = param_1 + 0x410;
                      func_0x00010778d05c(lVar3,param_2 + 0x410);
                      lVar4 = param_1 + 0x480;
                      func_0x00010778d09c(lVar4,param_2 + 0x480);
                      lVar5 = param_1 + 0x4e8;
                      func_0x00010778d01c(lVar5,param_2 + 0x4e8);
                      lVar6 = param_1 + 0x548;
                      func_0x00010778d05c(lVar6,param_2 + 0x548);
                      lVar7 = param_1 + 0x5b8;
                      func_0x00010778fcc4(lVar7,param_2 + 0x5b8);
                      lVar8 = param_1 + 0x680;
                      func_0x00010778d09c(lVar8,param_2 + 0x680);
                      param_1 = param_1 + 0x6e8;
                      func_0x00010778d11c(param_1,param_2 + 0x6e8);
                      uVar9 = (uint)lVar2 | (uint)lVar3 | (uint)lVar4 | (uint)lVar5 |
                              (uint)lVar6 | (uint)lVar7 | (uint)lVar8 | (uint)param_1;
                      goto LAB_10778fb8c;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar9 = 1;
LAB_10778fb8c:
  return uVar9 & 1;
}



/* Entry: 10778fdf0; end: 10778fdf3;  */

undefined8 * FUN_10778fdf0(undefined8 *param_1)

{
  func_0x0001073df8c4(param_1 + 5);
  *param_1 = &PTR_DAT_1109ab0d0;
  func_0x0001073ad4c4(param_1 + 1);
  return param_1;
}



/* Entry: 10778ff64; end: 10778ff93;  */

void FUN_10778ff64(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  uVar3 = param_2[1];
  uVar2 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  *param_1 = &PTR_DAT_1109ab0d0;
  param_1[2] = uVar3;
  param_1[1] = uVar2;
  uStack0000000000000010 = 0;
  uStack0000000000000018 = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  puVar1 = (undefined1 *)&stack0x00000010;
  func_0x0001073ad858();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1077905b4; end: 107790693;  */

long FUN_1077905b4(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x168;
  func_0x00010778f398(lVar2);
  uVar1 = lVar2 + 0x9e3779b97f4a7c15;
  func_0x00010778f398(param_1 + 0x1a0);
  func_0x0001077918ac();
  func_0x00010778f398(param_1 + 0x1d8);
  func_0x0001077918ac();
  func_0x00010778f398(param_1 + 0x210);
  func_0x0001077918ac();
  func_0x00010778f398(param_1 + 0x248);
  func_0x0001077918ac();
  func_0x00010778f398(param_1 + 0x280);
  func_0x0001077918ac();
  func_0x00010778f398(param_1 + 0x2b8);
  func_0x0001077918ac();
  func_0x00010778f398(param_1 + 0x2f0);
  func_0x0001077918ac();
  func_0x00010778f398(param_1 + 0x328);
  func_0x0001077918ac();
  func_0x00010778f398(param_1 + 0x360);
  func_0x0001077918ac();
  func_0x00010778f398(param_1 + 0x398);
  func_0x0001077918ac();
  func_0x00010778f398(param_1 + 0x3d0);
  func_0x0001077918ac();
  param_1 = param_1 + 0x408;
  func_0x00010778f398(param_1);
  return (param_1 + uVar1 * 0x1000 + (uVar1 >> 4) + 0x9e3779b97f4a7c15 ^ uVar1) + 0x9e3779b97f4a7c15
  ;
}



/* Entry: 1077913b0; end: 10779143f;  */

void FUN_1077913b0(undefined8 param_1,long param_2,long *param_3)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  long lStack_48;
  undefined1 auStack_40 [16];
  
  lStack_48 = *param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    lStack_48 = (long)param_3;
  }
  func_0x00010750c5d0(auStack_40,&lStack_48);
  ppuVar1 = &PTR_DAT_1109d8588;
  func_0x000107785358(&PTR_DAT_1109d8588,&UNK_1109d8720,auStack_40);
  if (ppuVar1 != (undefined **)&UNK_1109d8720) {
    puVar2 = auStack_40;
    func_0x000107785400(puVar2,ppuVar1);
    if ((int)puVar2 == 0) {
      func_0x0001077909b8(param_1,*(undefined8 *)(param_2 + 8),*(undefined1 *)(ppuVar1 + 1));
      return;
    }
  }
  func_0x0001077919d0();
  return;
}



/* Entry: 1077916b0; end: 1077916ef;  */

undefined8 * FUN_1077916b0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109d8730;
  func_0x000107791718(param_1 + 3);
  return param_1;
}



/* Entry: 107791a88; end: 107791adf;  */

/* WARNING: Possible PIC construction at 0x00010778d038: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010778d03c) */
/* WARNING: Removing unreachable block (ram,0x00010778d04c) */
/* WARNING: Removing unreachable block (ram,0x00010778d040) */

ulong FUN_107791a88(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = param_1 + 0xd0;
  func_0x00010778cf84(uVar1,param_2 + 0xd0);
  if ((uVar1 & 1) == 0) {
    lVar2 = param_1 + 0x140;
    func_0x000107781d84(lVar2,param_2 + 0x140);
    if ((int)lVar2 != 0) {
      uVar1 = param_1 + 0x478;
      func_0x00010778d284(uVar1,param_2 + 0x478);
      func_0x00010778d1ec();
      if ((int)uVar1 == 0) {
        return uVar1;
      }
      if (*(int *)(unaff_x20 + 0x30) != 0) {
        return (ulong)((*(byte *)(unaff_x20 + 0x10) & 2) == 0 && *(int *)(unaff_x20 + 0x30) != 1);
      }
      return 0;
    }
  }
  return 1;
}



/* Entry: 107791c4c; end: 107791cb7;  */

undefined8 * FUN_107791c4c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  func_0x000107791cb8(auStack_40,param_2,param_3);
  func_0x000107793fec(auStack_30,auStack_40);
  func_0x000107781b94(param_1,auStack_30);
  func_0x000107794b88();
  func_0x0001077949f4();
  *param_1 = &PTR_DAT_1109d8868;
  return param_1;
}



/* Entry: 107792524; end: 1077925ef;  */

/* WARNING: Possible PIC construction at 0x000107792570: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000107792d18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107792574) */
/* WARNING: Removing unreachable block (ram,0x00010779257c) */
/* WARNING: Removing unreachable block (ram,0x000107792598) */
/* WARNING: Removing unreachable block (ram,0x000107792d1c) */
/* WARNING: Removing unreachable block (ram,0x000107792e80) */
/* WARNING: Removing unreachable block (ram,0x000107792e88) */
/* WARNING: Removing unreachable block (ram,0x000107792e9c) */
/* WARNING: Removing unreachable block (ram,0x000107792d24) */
/* WARNING: Removing unreachable block (ram,0x000107792d38) */
/* WARNING: Removing unreachable block (ram,0x000107792d40) */
/* WARNING: Removing unreachable block (ram,0x0001077933c8) */
/* WARNING: Removing unreachable block (ram,0x000107792d48) */
/* WARNING: Removing unreachable block (ram,0x0001077933d0) */
/* WARNING: Removing unreachable block (ram,0x0001077933d8) */
/* WARNING: Removing unreachable block (ram,0x0001077933dc) */
/* WARNING: Removing unreachable block (ram,0x0001077925a8) */
/* WARNING: Removing unreachable block (ram,0x0001077925b4) */
/* WARNING: Removing unreachable block (ram,0x0001077925cc) */
/* WARNING: Type propagation algorithm not settling */

void FUN_107792524(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                  long *param_5)

{
  byte bVar1;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined **ppuVar6;
  undefined8 ******ppppppuVar7;
  undefined1 *puVar8;
  undefined8 *******pppppppuVar9;
  long *plVar10;
  undefined8 *******pppppppuVar11;
  undefined1 *puVar12;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  long extraout_x8_22;
  long extraout_x8_23;
  long extraout_x8_24;
  long extraout_x8_25;
  long extraout_x8_26;
  long extraout_x8_27;
  long extraout_x8_28;
  code *extraout_x9;
  code *extraout_x9_00;
  undefined8 *puVar13;
  long unaff_x19;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  undefined *puVar17;
  undefined1 uStack_271;
  undefined1 ***pppuStack_270;
  undefined *puStack_268;
  undefined8 ******appppppuStack_260 [3];
  undefined8 ******ppppppuStack_248;
  undefined8 uStack_240;
  ulong uStack_238;
  long *plStack_230;
  ulong uStack_228;
  undefined8 *******pppppppuStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 ******ppppppuStack_200;
  undefined8 *****pppppuStack_1f8;
  undefined8 *****pppppuStack_1f0;
  undefined8 *****pppppuStack_1e8;
  undefined1 uStack_1e0;
  byte bStack_1d8;
  byte bStack_1c8;
  byte bStack_1c0;
  byte bStack_1b8;
  byte bStack_160;
  undefined8 uStack_158;
  undefined8 uStack_118;
  undefined1 **ppuStack_110;
  undefined *puStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined1 uStack_78;
  undefined1 uStack_50;
  
  puVar5 = auStack_90;
  func_0x0001077947e4();
  func_0x000107781de4();
  uVar14 = 0x12;
  plVar10 = *(long **)(param_1 + 8);
  plVar4 = &lStack_100;
  plVar3 = &lStack_100;
  uStack_98 = 0x107792574;
  lStack_b0 = param_1;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x000107794804();
  uVar2 = (int)uVar14 == 0x1e;
  switch(uVar14 & 0xffffffff) {
  case 0:
    func_0x000107794700();
    if ((bool)uVar2) {
      plVar10 = plVar10 + 0x5e;
code_r0x000107784b60:
      func_0x000107784e48(auStack_90,plVar10,&stack0xffffffffffffff5f);
      return;
    }
    break;
  case 1:
    func_0x000107794700();
    if ((bool)uVar2) {
      func_0x000107784c0c(auStack_90,plVar10 + 0x6a,&stack0xffffffffffffff5f);
      return;
    }
    break;
  case 2:
    func_0x000107794700();
    if ((bool)uVar2) {
      func_0x000107793bbc(auStack_90,plVar10 + 0x78,&stack0xffffffffffffff5f);
      return;
    }
    break;
  case 3:
    func_0x000107794700();
    if ((bool)uVar2) {
      plVar10 = plVar10 + 0x92;
      goto code_r0x000107784b60;
    }
    break;
  case 4:
    func_0x000107794700();
    if ((bool)uVar2) {
      plVar3 = plVar10 + 0x9e;
      func_0x000107791900(auStack_90);
      plVar3 = (long *)*plVar3;
      uStack_b8 = extraout_x8;
      if (plVar3 == (long *)0x0) {
        func_0x0001077919d0();
      }
      else {
        (**(code **)(*plVar3 + 0x28))(&lStack_f8);
        plVar10 = &lStack_f8;
        func_0x000104c32a18(unaff_x19,plVar10);
        *(undefined1 *)(unaff_x19 + 0x40) = 2;
        plVar3 = &lStack_f8;
        func_0x000104c3323c(plVar3);
      }
      func_0x0001077918dc(uStack_b8);
      if ((bool)uVar2) {
        return;
      }
      ___stack_chk_fail();
      __Unwind_Resume();
      puStack_108 = &UNK_1077915b8;
      ppuStack_110 = &puStack_a0;
      func_0x0001077915e0((long)&uStack_118 + 7,plVar3,plVar10);
      return;
    }
    break;
  case 5:
    func_0x000107794700();
    if ((bool)uVar2) {
      plVar10 = plVar10 + 0xa5;
code_r0x000107784b44:
      FUN_107784cb8(auStack_90,plVar10,&stack0xffffffffffffff5f);
      return;
    }
    break;
  case 6:
    func_0x000107794700();
    if ((bool)uVar2) {
      plVar10 = plVar10 + 0xb2;
      goto code_r0x000107784b60;
    }
    break;
  case 7:
    func_0x000107794700();
    if ((bool)uVar2) {
      plVar10 = plVar10 + 0xbe;
      goto code_r0x000107784b60;
    }
    break;
  case 8:
    func_0x000107794700();
    if ((bool)uVar2) {
      func_0x000107784f0c(auStack_90,plVar10 + 0xca,&stack0xffffffffffffff5f);
      return;
    }
    break;
  case 9:
    func_0x000107794700();
    if ((bool)uVar2) {
      plVar10 = plVar10 + 0xe3;
      goto code_r0x000107784b44;
    }
    break;
  case 10:
    func_0x000107794700();
    if ((bool)uVar2) {
      func_0x00010778b120(auStack_90,plVar10 + 0xf0,&stack0xffffffffffffff5f);
      return;
    }
    break;
  case 0xb:
    func_0x000107794700();
    if ((bool)uVar2) {
      plVar10 = plVar10 + 0xfc;
      goto code_r0x000107784b60;
    }
    break;
  case 0xc:
    func_0x000107794814(plVar10 + 0x65);
    func_0x0001077947d8();
    goto code_r0x000107792954;
  case 0xd:
    func_0x000107794814(plVar10 + 0x73);
    func_0x0001077947d8();
    goto code_r0x000107792954;
  case 0xe:
    func_0x000107794814(plVar10 + 0x81);
    func_0x0001077947d8();
    goto code_r0x000107792954;
  case 0xf:
    func_0x000107794814(plVar10 + 0x99);
    func_0x0001077947d8();
    goto code_r0x000107792954;
  case 0x10:
    lStack_f8 = plVar10[0xa1];
    lStack_100 = plVar10[0xa0];
    lStack_e8 = plVar10[0xa3];
    lStack_f0 = plVar10[0xa2];
    lStack_e0 = plVar10[0xa4];
    func_0x0001077947d8();
    goto code_r0x000107792954;
  case 0x11:
    func_0x000107794814(plVar10 + 0xad);
    func_0x0001077947d8();
    goto code_r0x000107792954;
  case 0x12:
    func_0x000107794814(plVar10 + 0xb9);
    func_0x0001077947d8();
    goto code_r0x000107792954;
  case 0x13:
    func_0x000107794814(plVar10 + 0xc5);
    func_0x0001077947d8();
    goto code_r0x000107792954;
  case 0x14:
    lStack_f8 = plVar10[0xdf];
    lStack_100 = plVar10[0xde];
    lStack_e8 = plVar10[0xe1];
    lStack_f0 = plVar10[0xe0];
    lStack_e0 = plVar10[0xe2];
    func_0x0001077947d8();
    goto code_r0x000107792954;
  case 0x15:
    func_0x000107794814(plVar10 + 0xeb);
    func_0x0001077947d8();
    goto code_r0x000107792954;
  case 0x16:
    func_0x000107794814(plVar10 + 0xf7);
    func_0x0001077947d8();
    goto code_r0x000107792954;
  case 0x17:
    func_0x000107794814(plVar10 + 0x103);
    func_0x0001077947d8();
    goto code_r0x000107792954;
  case 0x18:
    if ((int)plVar10[0x33] == 0) goto code_r0x00010779272c;
    uVar2 = (int)plVar10[0x33] == 1;
    if ((bool)uVar2) {
      plVar10 = (long *)(ulong)*(byte *)(plVar10 + 0x2d);
      func_0x0001077f2518();
      func_0x00010724ae4c();
      goto code_r0x000107792720;
    }
    puVar5 = (undefined1 *)plVar10[0x2d];
    func_0x000107794aa4();
    (*extraout_x9_00)(&lStack_100);
code_r0x000107792944:
    func_0x000107794b7c();
    uStack_50 = 2;
code_r0x00010779294c:
    func_0x000107794b64();
    goto code_r0x000107792954;
  case 0x19:
    if ((int)plVar10[0x3a] != 0) {
      uVar2 = (int)plVar10[0x3a] == 1;
      if (!(bool)uVar2) {
        puVar5 = (undefined1 *)plVar10[0x34];
        func_0x000107794aa4();
        (*extraout_x9)(&lStack_100);
        goto code_r0x000107792944;
      }
      plVar10 = (long *)(ulong)*(byte *)(plVar10 + 0x34);
      func_0x0001077f25a0();
      func_0x00010724ae4c();
      plVar3 = plVar4;
code_r0x000107792720:
      func_0x000107794b7c();
      uStack_50 = 1;
      puVar5 = (undefined1 *)plVar3;
      goto code_r0x00010779294c;
    }
  default:
code_r0x00010779272c:
    func_0x000107794a30();
code_r0x000107792954:
    func_0x000107794700();
    if ((bool)uVar2) {
      return;
    }
    break;
  case 0x1a:
    func_0x000107794700();
    if ((bool)uVar2) {
      plVar10 = plVar10 + 0x3b;
code_r0x000107784bf0:
      func_0x000107785298(auStack_90,plVar10,&stack0xffffffffffffff5f);
      return;
    }
    break;
  case 0x1b:
    func_0x000107794700();
    if ((bool)uVar2) {
      plVar10 = plVar10 + 0x42;
      goto code_r0x000107784b60;
    }
    break;
  case 0x1c:
    func_0x000107794700();
    if ((bool)uVar2) {
      plVar10 = plVar10 + 0x49;
      goto code_r0x000107784b60;
    }
    break;
  case 0x1d:
    func_0x000107794700();
    if ((bool)uVar2) {
      plVar10 = plVar10 + 0x50;
      goto code_r0x000107784bf0;
    }
    break;
  case 0x1e:
    func_0x000107794700();
    if ((bool)uVar2) {
      plVar10 = plVar10 + 0x57;
      goto code_r0x000107784b60;
    }
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  plVar4 = (long *)appppppuStack_260;
  pppppppuVar9 = appppppuStack_260;
  puStack_108 = &DAT_10779296c;
  puVar12 = param_4;
  plVar3 = param_5;
  uStack_118 = auStack_90;
  ppuStack_110 = &puStack_a0;
  func_0x0001077947e4();
  plStack_230 = plVar10;
  uStack_228 = uVar14;
  uStack_158 = extraout_x8_00;
  func_0x00010772d2fc(&ppppppuStack_200,&plStack_230);
  ppuVar6 = &PTR_DAT_1109d88e0;
  pppppppuVar11 = (undefined8 *******)&UNK_1109d8bc8;
  plVar10 = (long *)&ppppppuStack_200;
  func_0x000107785358(&PTR_DAT_1109d88e0,&UNK_1109d8bc8,plVar10);
  uVar2 = ppuVar6 == (undefined **)&UNK_1109d8bc8;
  if ((bool)uVar2) {
code_r0x0001077929e0:
    auStack_90[0] = 0;
    uStack_78 = 0;
    goto code_r0x000107793744;
  }
  ppppppuVar7 = &ppppppuStack_200;
  pppppppuVar11 = (undefined8 *******)ppuVar6;
  func_0x000107785400(ppppppuVar7,ppuVar6);
  if ((int)ppppppuVar7 != 0) goto code_r0x0001077929e0;
  bVar1 = *(byte *)(ppuVar6 + 1);
  uVar2 = bVar1 == 0x1e;
  uVar15 = (uint)bVar1;
  switch(bVar1) {
  case 0:
  case 3:
  case 6:
  case 7:
  case 0xb:
  case 0x1e:
    func_0x000107794838();
    func_0x00010779474c();
    func_0x00010733b904();
    if ((bStack_1c8 & 1) != 0) {
      uVar16 = (uint)bVar1;
      uVar2 = uVar16 == 0xb;
      switch(bVar1) {
      case 0:
        func_0x00010779491c();
        puVar8 = (undefined1 *)&ppppppuStack_200;
        pppppppuVar11 = (undefined8 *******)(extraout_x8_01 + 0x2f0);
        func_0x000107786038(puVar8,pppppppuVar11);
        if (((ulong)puVar8 & 1) == 0) {
          if ((*(long *)(puVar5 + 0x10) == 0) || (*(long *)(*(long *)(puVar5 + 0x10) + 8) != 0)) {
            pppppppuVar11 = (undefined8 *******)*param_5;
            func_0x00010779488c();
            func_0x00010779494c(pppppppuStack_220 + 0x5e);
            func_0x0001077947a0();
            func_0x00010779487c();
          }
          else {
            func_0x00010779494c(*param_5 + 0x2f0);
          }
          func_0x0001077947bc();
          func_0x000107794884();
        }
        break;
      case 1:
      case 2:
      case 4:
      case 5:
      case 8:
      case 9:
      case 10:
code_r0x000107792afc:
        func_0x00010727e950(&ppppppuStack_200);
        ppppppuVar7 = &ppppppuStack_248;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppppuVar7);
        uVar2 = uVar16 - 1 == 9;
        switch(uVar16 - 1) {
        case 0:
          goto code_r0x000107792b30;
        case 1:
          goto code_r0x000107792d10;
        case 2:
        case 5:
        case 6:
          break;
        case 3:
          goto code_r0x000107792bdc;
        case 4:
          goto code_r0x000107792b84;
        case 7:
          goto code_r0x000107792cb8;
        case 8:
          goto code_r0x000107792c60;
        case 9:
          goto code_r0x000107792d64;
        default:
          uVar2 = uVar16 - 0x18 == 5;
          switch(uVar16 - 0x18) {
          case 0:
            goto code_r0x0001077930c4;
          case 1:
            goto code_r0x000107793064;
          case 2:
          case 5:
            goto code_r0x000107792ffc;
          }
        }
        goto code_r0x0001077931e4;
      case 3:
        func_0x00010779491c();
        puVar8 = (undefined1 *)&ppppppuStack_200;
        pppppppuVar11 = (undefined8 *******)(extraout_x8_18 + 0x490);
        func_0x000107786038(puVar8,pppppppuVar11);
        if (((ulong)puVar8 & 1) == 0) {
          if ((*(long *)(puVar5 + 0x10) == 0) || (*(long *)(*(long *)(puVar5 + 0x10) + 8) != 0)) {
            pppppppuVar11 = (undefined8 *******)*param_5;
            func_0x00010779488c();
            func_0x00010779494c(pppppppuStack_220 + 0x92);
            func_0x0001077947a0();
            func_0x00010779487c();
          }
          else {
            func_0x00010779494c(*param_5 + 0x490);
          }
          func_0x0001077947bc();
          func_0x000107794884();
        }
        break;
      case 6:
        func_0x00010779491c();
        puVar8 = (undefined1 *)&ppppppuStack_200;
        pppppppuVar11 = (undefined8 *******)(extraout_x8_17 + 0x590);
        func_0x000107786038(puVar8,pppppppuVar11);
        if (((ulong)puVar8 & 1) == 0) {
          if ((*(long *)(puVar5 + 0x10) == 0) || (*(long *)(*(long *)(puVar5 + 0x10) + 8) != 0)) {
            pppppppuVar11 = (undefined8 *******)*param_5;
            func_0x00010779488c();
            func_0x00010779494c(pppppppuStack_220 + 0xb2);
            func_0x0001077947a0();
            func_0x00010779487c();
          }
          else {
            func_0x00010779494c(*param_5 + 0x590);
          }
          func_0x0001077947bc();
          func_0x000107794884();
        }
        break;
      case 7:
        func_0x00010779491c();
        puVar8 = (undefined1 *)&ppppppuStack_200;
        pppppppuVar11 = (undefined8 *******)(extraout_x8_19 + 0x5f0);
        func_0x000107786038(puVar8,pppppppuVar11);
        if (((ulong)puVar8 & 1) == 0) {
          if ((*(long *)(puVar5 + 0x10) == 0) || (*(long *)(*(long *)(puVar5 + 0x10) + 8) != 0)) {
            pppppppuVar11 = (undefined8 *******)*param_5;
            func_0x00010779488c();
            func_0x00010779494c(pppppppuStack_220 + 0xbe);
            func_0x0001077947a0();
            func_0x00010779487c();
          }
          else {
            func_0x00010779494c(*param_5 + 0x5f0);
          }
          func_0x0001077947bc();
          func_0x000107794884();
        }
        break;
      case 0xb:
        func_0x00010779491c();
        puVar8 = (undefined1 *)&ppppppuStack_200;
        pppppppuVar11 = (undefined8 *******)(extraout_x8_16 + 0x7e0);
        func_0x000107786038(puVar8,pppppppuVar11);
        if (((ulong)puVar8 & 1) == 0) {
          if ((*(long *)(puVar5 + 0x10) == 0) || (*(long *)(*(long *)(puVar5 + 0x10) + 8) != 0)) {
            func_0x00010779488c();
            pppppppuVar11 = pppppppuStack_220;
            func_0x0001077946cc(&ppppppuStack_200,pppppppuStack_220);
            func_0x0001077947a0();
            func_0x00010779487c();
          }
          else {
            pppppppuVar11 = (undefined8 *******)*param_5;
            func_0x0001077946cc(&ppppppuStack_200,pppppppuVar11);
          }
          func_0x0001077947bc();
          func_0x000107794884();
        }
        break;
      default:
        uVar2 = uVar15 == 0x1e;
        if (!(bool)uVar2) goto code_r0x000107792afc;
        func_0x00010779491c();
        puVar8 = (undefined1 *)&ppppppuStack_200;
        pppppppuVar11 = (undefined8 *******)(extraout_x8_03 + 0x2b8);
        func_0x000107786038(puVar8,pppppppuVar11);
        if (((ulong)puVar8 & 1) == 0) {
          if ((*(long *)(puVar5 + 0x10) == 0) || (*(long *)(*(long *)(puVar5 + 0x10) + 8) != 0)) {
            pppppppuVar11 = (undefined8 *******)*param_5;
            func_0x00010779488c();
            func_0x0001077949a8(pppppppuStack_220 + 0x57);
            func_0x0001077947a0();
            func_0x00010779487c();
          }
          else {
            func_0x0001077949a8(*param_5 + 0x2b8);
          }
          func_0x0001077947bc();
          func_0x000107794884();
        }
      }
      goto code_r0x000107793730;
    }
    func_0x000107794768();
    if (extraout_x8_02 != 0) {
      func_0x000107794780();
      func_0x0001077947cc();
      func_0x000107794790();
code_r0x000107792aa0:
      func_0x0001077947f8();
      func_0x000107794930();
    }
code_r0x000107792aa8:
    func_0x000107794718();
code_r0x000107793734:
    func_0x000107794994();
    func_0x00010727e950();
    break;
  case 1:
code_r0x000107792b30:
    func_0x000107794838();
    func_0x00010779474c();
    func_0x0001077848c0();
    if ((bStack_1b8 & 1) == 0) {
      func_0x000107794768();
      if (extraout_x8_12 != 0) {
        func_0x000107794780();
        func_0x0001077947cc();
        func_0x000107794790();
        func_0x0001077947f8();
        func_0x000107794930();
      }
      func_0x000107794718();
    }
    else {
      func_0x00010779491c();
      puVar8 = (undefined1 *)&ppppppuStack_200;
      pppppppuVar11 = (undefined8 *******)(extraout_x8_04 + 0x350);
      func_0x000107785bfc(puVar8,pppppppuVar11);
      if (((ulong)puVar8 & 1) == 0) {
        if ((*(long *)(puVar5 + 0x10) == 0) || (*(long *)(*(long *)(puVar5 + 0x10) + 8) != 0)) {
          pppppppuVar11 = (undefined8 *******)*param_5;
          func_0x00010779488c();
          func_0x000107794b90(pppppppuStack_220);
          func_0x0001077947a0();
          func_0x00010779487c();
        }
        else {
          func_0x000107794b90(*param_5);
        }
        func_0x0001077947bc();
        func_0x000107794884();
      }
      func_0x000107794954();
    }
    func_0x000107794994();
    func_0x00010754e888();
    break;
  case 2:
code_r0x000107792d10:
    func_0x000107794824();
    func_0x00010779474c();
    puVar17 = &UNK_107792d1c;
    goto code_r0x0001077939c8;
  case 4:
code_r0x000107792bdc:
    pppppppuStack_220 = (undefined8 *******)0x0;
    uStack_218 = 0;
    uStack_210 = 0;
    ppppppuStack_200._0_1_ = 0;
    appppppuStack_260[0]._0_1_ = 0;
    pppppppuVar11 = &pppppppuStack_220;
    puVar12 = (undefined1 *)&ppppppuStack_200;
    plVar10 = param_5;
    func_0x000107791374(&ppppppuStack_248,param_4,pppppppuVar11,param_5);
    if ((uStack_238 & 1) == 0) {
      func_0x000107794768();
      if (extraout_x8_11 != 0) {
        func_0x000105988308(&ppppppuStack_200,param_5 + 8,&pppppppuStack_220);
        func_0x0001077947cc();
        puVar12 = (undefined1 *)&ppppppuStack_200;
        plVar10 = (long *)0xdd;
        func_0x0001003a9204(appppppuStack_260);
        func_0x000100066230(&pppppppuStack_220,appppppuStack_260);
        func_0x000107794930();
        pppppppuVar11 = pppppppuVar9;
      }
      func_0x000107794a10();
      uStack_78 = extraout_w8;
    }
    else {
      func_0x00010779491c();
      ppppppuVar7 = &ppppppuStack_248;
      pppppppuVar11 = (undefined8 *******)(extraout_x8_06 + 0x4f0);
      func_0x0001077908b8(ppppppuVar7,pppppppuVar11);
      if (((ulong)ppppppuVar7 & 1) == 0) {
        if ((*(long *)(puVar5 + 0x10) == 0) || (*(long *)(*(long *)(puVar5 + 0x10) + 8) != 0)) {
          func_0x000107791d04(&ppppppuStack_200,*param_5);
          func_0x000107794b58(CONCAT71(ppppppuStack_200._1_7_,ppppppuStack_200._0_1_));
          pppppppuVar11 = &ppppppuStack_200;
          func_0x0001077943bc(param_5,pppppppuVar11);
          func_0x000107793af4(&ppppppuStack_200);
        }
        else {
          func_0x000107794b58(*param_5);
        }
        func_0x0001077947bc();
        func_0x000107794884();
      }
      func_0x000107794954();
      uStack_78 = extraout_w8_01;
    }
    func_0x000107791528(&ppppppuStack_248);
    param_5 = plVar10;
    plVar3 = plVar4;
    goto code_r0x00010779384c;
  case 5:
code_r0x000107792b84:
    func_0x000107794838();
    func_0x00010779474c();
    func_0x0001073398b8();
    if ((bStack_1c0 & 1) != 0) {
      func_0x00010779491c();
      puVar8 = (undefined1 *)&ppppppuStack_200;
      pppppppuVar11 = (undefined8 *******)(extraout_x8_05 + 0x528);
      func_0x000107785dfc(puVar8,pppppppuVar11);
      if (((ulong)puVar8 & 1) == 0) {
        if ((*(long *)(puVar5 + 0x10) == 0) || (*(long *)(*(long *)(puVar5 + 0x10) + 8) != 0)) {
          pppppppuVar11 = (undefined8 *******)*param_5;
          func_0x00010779488c();
          func_0x000107794a54(pppppppuStack_220 + 0xa5);
          func_0x0001077947a0();
          func_0x00010779487c();
        }
        else {
          func_0x000107794a54(*param_5 + 0x528);
        }
        func_0x0001077947bc();
        func_0x000107794884();
      }
      goto code_r0x000107793394;
    }
    func_0x000107794768();
    if (extraout_x8_10 != 0) {
      func_0x000107794780();
      func_0x0001077947cc();
      func_0x000107794790();
code_r0x000107792e4c:
      func_0x0001077947f8();
      func_0x000107794930();
    }
code_r0x000107792e54:
    func_0x000107794718();
    goto code_r0x000107793398;
  case 8:
code_r0x000107792cb8:
    func_0x000107794838();
    func_0x00010779474c();
    func_0x0001077848dc();
    if ((bStack_160 & 1) == 0) {
      func_0x000107794768();
      if (extraout_x8_14 != 0) {
        func_0x000107794780();
        func_0x0001077947cc();
        func_0x000107794790();
        func_0x0001077947f8();
        func_0x000107794930();
      }
      func_0x000107794718();
    }
    else {
      func_0x00010779491c();
      puVar8 = (undefined1 *)&ppppppuStack_200;
      pppppppuVar11 = (undefined8 *******)(extraout_x8_08 + 0x650);
      func_0x0001077860a0(puVar8,pppppppuVar11);
      if (((ulong)puVar8 & 1) == 0) {
        if ((*(long *)(puVar5 + 0x10) == 0) || (*(long *)(*(long *)(puVar5 + 0x10) + 8) != 0)) {
          pppppppuVar11 = (undefined8 *******)*param_5;
          func_0x00010779488c();
          func_0x000107794b34(pppppppuStack_220);
          func_0x0001077947a0();
          func_0x00010779487c();
        }
        else {
          func_0x000107794b34(*param_5);
        }
        func_0x0001077947bc();
        func_0x000107794884();
      }
      func_0x000107794954();
    }
    func_0x000107794994();
    func_0x00010754f474();
    break;
  case 9:
code_r0x000107792c60:
    func_0x000107794824();
    func_0x00010779474c();
    func_0x0001073398b8();
    if ((bStack_1c0 & 1) == 0) {
      func_0x000107794768();
      if (extraout_x8_13 != 0) {
        func_0x000107794780();
        func_0x0001077947cc();
        func_0x000107794790();
        goto code_r0x000107792e4c;
      }
      goto code_r0x000107792e54;
    }
    func_0x00010779491c();
    puVar8 = (undefined1 *)&ppppppuStack_200;
    pppppppuVar11 = (undefined8 *******)(extraout_x8_07 + 0x718);
    func_0x000107785dfc(puVar8,pppppppuVar11);
    if (((ulong)puVar8 & 1) == 0) {
      if ((*(long *)(puVar5 + 0x10) == 0) || (*(long *)(*(long *)(puVar5 + 0x10) + 8) != 0)) {
        pppppppuVar11 = (undefined8 *******)*param_5;
        func_0x00010779488c();
        func_0x000107794a54(pppppppuStack_220 + 0xe3);
        func_0x0001077947a0();
        func_0x00010779487c();
      }
      else {
        func_0x000107794a54(*param_5 + 0x718);
      }
      func_0x0001077947bc();
      func_0x000107794884();
    }
code_r0x000107793394:
    func_0x000107794954();
code_r0x000107793398:
    func_0x000107794994();
    func_0x000107339974();
    break;
  case 10:
code_r0x000107792d64:
    func_0x000107794824();
    func_0x00010779474c();
    func_0x00010778ac78();
    if ((bStack_1c8 & 1) == 0) {
      func_0x000107794768();
      if (extraout_x8_15 != 0) {
        func_0x000107794780();
        func_0x0001077947cc();
        func_0x000107794790();
        func_0x0001077947f8();
        func_0x000107794930();
      }
      func_0x000107794718();
    }
    else {
      func_0x00010779491c();
      puVar8 = (undefined1 *)&ppppppuStack_200;
      pppppppuVar11 = (undefined8 *******)(extraout_x8_09 + 0x780);
      func_0x00010778bef0(puVar8,pppppppuVar11);
      if (((ulong)puVar8 & 1) == 0) {
        if ((*(long *)(puVar5 + 0x10) == 0) || (*(long *)(*(long *)(puVar5 + 0x10) + 8) != 0)) {
          pppppppuVar11 = (undefined8 *******)*param_5;
          func_0x00010779488c();
          func_0x000107794b1c(pppppppuStack_220);
          func_0x0001077947a0();
          func_0x00010779487c();
        }
        else {
          func_0x000107794b1c(*param_5);
        }
        func_0x0001077947bc();
        func_0x000107794884();
      }
      func_0x000107794954();
    }
    func_0x000107794994();
    func_0x00010778b484();
    break;
  default:
code_r0x0001077931e4:
    uVar2 = uVar15 - 0x1b == 1;
    if (uVar15 - 0x1b < 2) {
      func_0x000107794824();
      func_0x00010779474c();
      func_0x00010733b904();
      if ((bStack_1c8 & 1) == 0) {
        func_0x000107794768();
        if (extraout_x8_28 != 0) {
          func_0x000107794780();
          func_0x0001077947cc();
          func_0x000107794790();
          goto code_r0x000107792aa0;
        }
        goto code_r0x000107792aa8;
      }
      func_0x00010779491c();
      uVar2 = uVar15 == 0x1b;
      if ((bool)uVar2) {
        puVar8 = (undefined1 *)&ppppppuStack_200;
        pppppppuVar11 = (undefined8 *******)(extraout_x8_27 + 0x210);
        func_0x000107786038(puVar8,pppppppuVar11);
        if (((ulong)puVar8 & 1) == 0) {
          if ((*(long *)(puVar5 + 0x10) == 0) || (*(long *)(*(long *)(puVar5 + 0x10) + 8) != 0)) {
            pppppppuVar11 = (undefined8 *******)*param_5;
            func_0x00010779488c();
            func_0x0001077949a8(pppppppuStack_220 + 0x42);
            func_0x0001077947a0();
            func_0x00010779487c();
          }
          else {
            func_0x0001077949a8(*param_5 + 0x210);
          }
          func_0x0001077947bc();
          func_0x000107794884();
        }
      }
      else {
        puVar8 = (undefined1 *)&ppppppuStack_200;
        pppppppuVar11 = (undefined8 *******)(extraout_x8_27 + 0x248);
        func_0x000107786038(puVar8,pppppppuVar11);
        if (((ulong)puVar8 & 1) == 0) {
          if ((*(long *)(puVar5 + 0x10) == 0) || (*(long *)(*(long *)(puVar5 + 0x10) + 8) != 0)) {
            pppppppuVar11 = (undefined8 *******)*param_5;
            func_0x00010779488c();
            func_0x0001077949a8(pppppppuStack_220 + 0x49);
            func_0x0001077947a0();
            func_0x00010779487c();
          }
          else {
            func_0x0001077949a8(*param_5 + 0x248);
          }
          func_0x0001077947bc();
          func_0x000107794884();
        }
      }
code_r0x000107793730:
      func_0x000107794954();
      goto code_r0x000107793734;
    }
    pppppppuStack_220 = (undefined8 *******)0x0;
    uStack_218 = 0;
    uStack_210 = 0;
    pppppppuVar11 = &pppppppuStack_220;
    func_0x00010754bb48(&ppppppuStack_200,param_4,pppppppuVar11,param_5);
    if ((bStack_1d8 & 1) == 0) {
      func_0x000107794a10();
      uStack_78 = extraout_w8_00;
      goto code_r0x00010779384c;
    }
    uVar2 = uVar15 - 0xc == 0xb;
    switch(uVar15 - 0xc) {
    case 0:
      if ((*(long *)(puVar5 + 0x10) == 0) || (*(long *)(*(long *)(puVar5 + 0x10) + 8) != 0)) {
        func_0x000107794914();
        ppppppuVar7 = ppppppuStack_248 + 0x65;
        *(undefined1 *)(ppppppuStack_248 + 0x69) = uStack_1e0;
        break;
      }
      puVar13 = (undefined8 *)(*(long *)(puVar5 + 8) + 0x328);
      *(undefined1 *)(*(long *)(puVar5 + 8) + 0x348) = uStack_1e0;
code_r0x00010779383c:
      puVar13[1] = pppppuStack_1f8;
      *puVar13 = CONCAT71(ppppppuStack_200._1_7_,ppppppuStack_200._0_1_);
      puVar13[3] = pppppuStack_1e8;
      puVar13[2] = pppppuStack_1f0;
      goto code_r0x000107793844;
    case 1:
      if ((*(long *)(puVar5 + 0x10) != 0) && (*(long *)(*(long *)(puVar5 + 0x10) + 8) == 0)) {
        puVar13 = (undefined8 *)(*(long *)(puVar5 + 8) + 0x398);
        *(undefined1 *)(*(long *)(puVar5 + 8) + 0x3b8) = uStack_1e0;
        goto code_r0x00010779383c;
      }
      func_0x000107794914();
      ppppppuVar7 = ppppppuStack_248 + 0x73;
      *(undefined1 *)(ppppppuStack_248 + 0x77) = uStack_1e0;
      break;
    case 2:
      if ((*(long *)(puVar5 + 0x10) != 0) && (*(long *)(*(long *)(puVar5 + 0x10) + 8) == 0)) {
        puVar13 = (undefined8 *)(*(long *)(puVar5 + 8) + 0x408);
        *(undefined1 *)(*(long *)(puVar5 + 8) + 0x428) = uStack_1e0;
        goto code_r0x00010779383c;
      }
      func_0x000107794914();
      ppppppuVar7 = ppppppuStack_248 + 0x81;
      *(undefined1 *)(ppppppuStack_248 + 0x85) = uStack_1e0;
      break;
    case 3:
      if ((*(long *)(puVar5 + 0x10) != 0) && (*(long *)(*(long *)(puVar5 + 0x10) + 8) == 0)) {
        puVar13 = (undefined8 *)(*(long *)(puVar5 + 8) + 0x4c8);
        *(undefined1 *)(*(long *)(puVar5 + 8) + 0x4e8) = uStack_1e0;
        goto code_r0x00010779383c;
      }
      func_0x000107794914();
      ppppppuVar7 = ppppppuStack_248 + 0x99;
      *(undefined1 *)(ppppppuStack_248 + 0x9d) = uStack_1e0;
      break;
    case 4:
      if ((*(long *)(puVar5 + 0x10) != 0) && (*(long *)(*(long *)(puVar5 + 0x10) + 8) == 0)) {
        func_0x000107794ab0(*(undefined8 *)(puVar5 + 8));
        goto code_r0x000107793844;
      }
      func_0x000107794914();
      func_0x000107794ab0(ppppppuStack_248);
      goto code_r0x0001077936c8;
    case 5:
      if ((*(long *)(puVar5 + 0x10) != 0) && (*(long *)(*(long *)(puVar5 + 0x10) + 8) == 0)) {
        puVar13 = (undefined8 *)(*(long *)(puVar5 + 8) + 0x568);
        *(undefined1 *)(*(long *)(puVar5 + 8) + 0x588) = uStack_1e0;
        goto code_r0x00010779383c;
      }
      func_0x000107794914();
      ppppppuVar7 = ppppppuStack_248 + 0xad;
      *(undefined1 *)(ppppppuStack_248 + 0xb1) = uStack_1e0;
      break;
    case 6:
      if ((*(long *)(puVar5 + 0x10) != 0) && (*(long *)(*(long *)(puVar5 + 0x10) + 8) == 0)) {
        puVar13 = (undefined8 *)(*(long *)(puVar5 + 8) + 0x5c8);
        *(undefined1 *)(*(long *)(puVar5 + 8) + 0x5e8) = uStack_1e0;
        goto code_r0x00010779383c;
      }
      func_0x000107794914();
      ppppppuVar7 = ppppppuStack_248 + 0xb9;
      *(undefined1 *)(ppppppuStack_248 + 0xbd) = uStack_1e0;
      break;
    case 7:
      if ((*(long *)(puVar5 + 0x10) != 0) && (*(long *)(*(long *)(puVar5 + 0x10) + 8) == 0)) {
        puVar13 = (undefined8 *)(*(long *)(puVar5 + 8) + 0x628);
        *(undefined1 *)(*(long *)(puVar5 + 8) + 0x648) = uStack_1e0;
        goto code_r0x00010779383c;
      }
      func_0x000107794914();
      ppppppuVar7 = ppppppuStack_248 + 0xc5;
      *(undefined1 *)(ppppppuStack_248 + 0xc9) = uStack_1e0;
      break;
    case 8:
      if ((*(long *)(puVar5 + 0x10) == 0) || (*(long *)(*(long *)(puVar5 + 0x10) + 8) != 0)) {
        func_0x000107794914();
        func_0x000107794ac8(ppppppuStack_248);
        goto code_r0x0001077936c8;
      }
      func_0x000107794ac8(*(undefined8 *)(puVar5 + 8));
      goto code_r0x000107793844;
    case 9:
      if ((*(long *)(puVar5 + 0x10) != 0) && (*(long *)(*(long *)(puVar5 + 0x10) + 8) == 0)) {
        puVar13 = (undefined8 *)(*(long *)(puVar5 + 8) + 0x758);
        *(undefined1 *)(*(long *)(puVar5 + 8) + 0x778) = uStack_1e0;
        goto code_r0x00010779383c;
      }
      func_0x000107794914();
      ppppppuVar7 = ppppppuStack_248 + 0xeb;
      *(undefined1 *)(ppppppuStack_248 + 0xef) = uStack_1e0;
      break;
    case 10:
      if ((*(long *)(puVar5 + 0x10) != 0) && (*(long *)(*(long *)(puVar5 + 0x10) + 8) == 0)) {
        puVar13 = (undefined8 *)(*(long *)(puVar5 + 8) + 0x7b8);
        *(undefined1 *)(*(long *)(puVar5 + 8) + 0x7d8) = uStack_1e0;
        goto code_r0x00010779383c;
      }
      func_0x000107794914();
      ppppppuVar7 = ppppppuStack_248 + 0xf7;
      *(undefined1 *)(ppppppuStack_248 + 0xfb) = uStack_1e0;
      break;
    case 0xb:
      if ((*(long *)(puVar5 + 0x10) != 0) && (*(long *)(*(long *)(puVar5 + 0x10) + 8) == 0)) {
        puVar13 = (undefined8 *)(*(long *)(puVar5 + 8) + 0x818);
        *(undefined1 *)(*(long *)(puVar5 + 8) + 0x838) = uStack_1e0;
        goto code_r0x00010779383c;
      }
      func_0x000107794914();
      ppppppuVar7 = ppppppuStack_248 + 0x103;
      *(undefined1 *)(ppppppuStack_248 + 0x107) = uStack_1e0;
      break;
    default:
      goto code_r0x000107793844;
    }
    ppppppuVar7[1] = pppppuStack_1f8;
    *ppppppuVar7 = (undefined8 *****)CONCAT71(ppppppuStack_200._1_7_,ppppppuStack_200._0_1_);
    ppppppuVar7[3] = pppppuStack_1e8;
    ppppppuVar7[2] = pppppuStack_1f0;
code_r0x0001077936c8:
    pppppppuVar11 = &ppppppuStack_248;
    func_0x0001077943bc(puVar5 + 8,pppppppuVar11);
    func_0x000107793af4(&ppppppuStack_248);
code_r0x000107793844:
    func_0x000107794954();
    uStack_78 = extraout_w8_02;
code_r0x00010779384c:
    pppppppuVar9 = &pppppppuStack_220;
    goto code_r0x000107793740;
  case 0x18:
code_r0x0001077930c4:
    ppppppuStack_248 = (undefined8 ******)0x0;
    uStack_240 = 0;
    uStack_238 = 0;
    func_0x000107794a8c();
    plVar3 = (long *)0x0;
    func_0x000107557da8();
    if ((bStack_1c8 & 1) == 0) {
      func_0x000107794768();
      if (extraout_x8_25 != 0) {
        func_0x000107794780();
        func_0x0001077947cc();
        func_0x000107794790();
        func_0x0001077947f8();
        func_0x000107794930();
      }
      func_0x000107794718();
    }
    else {
      func_0x00010779491c();
      puVar8 = (undefined1 *)&ppppppuStack_200;
      pppppppuVar11 = (undefined8 *******)(extraout_x8_22 + 0x168);
      func_0x000107794360(puVar8,pppppppuVar11);
      if (((ulong)puVar8 & 1) == 0) {
        if ((*(long *)(puVar5 + 0x10) == 0) || (*(long *)(*(long *)(puVar5 + 0x10) + 8) != 0)) {
          pppppppuVar11 = (undefined8 *******)*param_5;
          func_0x00010779488c();
          func_0x000107794af4(pppppppuStack_220);
          func_0x0001077947a0();
          func_0x00010779487c();
        }
        else {
          func_0x000107794af4(*param_5);
        }
        func_0x0001077947bc();
        func_0x000107794884();
      }
      func_0x000107794954();
    }
    func_0x000107794994();
    func_0x000107793dc0();
    break;
  case 0x19:
code_r0x000107793064:
    ppppppuStack_248 = (undefined8 ******)0x0;
    uStack_240 = 0;
    uStack_238 = 0;
    func_0x000107794a8c();
    plVar3 = (long *)0x1;
    func_0x000107557f84();
    if ((bStack_1c8 & 1) == 0) {
      func_0x000107794768();
      if (extraout_x8_24 != 0) {
        func_0x000107794780();
        func_0x0001077947cc();
        func_0x000107794790();
        func_0x0001077947f8();
        func_0x000107794930();
      }
      func_0x000107794718();
    }
    else {
      func_0x00010779491c();
      puVar8 = (undefined1 *)&ppppppuStack_200;
      pppppppuVar11 = (undefined8 *******)(extraout_x8_21 + 0x1a0);
      func_0x0001077944fc(puVar8,pppppppuVar11);
      if (((ulong)puVar8 & 1) == 0) {
        if ((*(long *)(puVar5 + 0x10) == 0) || (*(long *)(*(long *)(puVar5 + 0x10) + 8) != 0)) {
          pppppppuVar11 = (undefined8 *******)*param_5;
          func_0x00010779488c();
          func_0x000107794b00(pppppppuStack_220);
          func_0x0001077947a0();
          func_0x00010779487c();
        }
        else {
          func_0x000107794b00(*param_5);
        }
        func_0x0001077947bc();
        func_0x000107794884();
      }
      func_0x000107794954();
    }
    func_0x000107794994();
    func_0x000107793dec();
    break;
  case 0x1a:
  case 0x1d:
code_r0x000107792ffc:
    func_0x000107794824();
    func_0x00010779474c();
    func_0x00010733e5bc();
    if ((bStack_1c8 & 1) == 0) {
      func_0x000107794768();
      if (extraout_x8_23 != 0) {
        func_0x000107794780();
        func_0x0001077947cc();
        func_0x000107794790();
        func_0x0001077947f8();
        func_0x000107794930();
      }
      func_0x000107794718();
    }
    else {
      uVar2 = uVar15 == 0x1d;
      if ((bool)uVar2) {
        func_0x00010779491c();
        puVar8 = (undefined1 *)&ppppppuStack_200;
        pppppppuVar11 = (undefined8 *******)(extraout_x8_26 + 0x280);
        func_0x000107785b50(puVar8,pppppppuVar11);
        if (((ulong)puVar8 & 1) == 0) {
          if ((*(long *)(puVar5 + 0x10) == 0) || (*(long *)(*(long *)(puVar5 + 0x10) + 8) != 0)) {
            pppppppuVar11 = (undefined8 *******)*param_5;
            func_0x00010779488c();
            func_0x000107794a4c(pppppppuStack_220 + 0x50);
            func_0x0001077947a0();
            func_0x00010779487c();
          }
          else {
            func_0x000107794a4c(*param_5 + 0x280);
          }
          func_0x0001077947bc();
          func_0x000107794884();
        }
      }
      else {
        uVar2 = uVar15 == 0x1a;
        if (!(bool)uVar2) {
          func_0x00010733e5d8(&ppppppuStack_200);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&ppppppuStack_248);
          goto code_r0x0001077931e4;
        }
        func_0x00010779491c();
        puVar8 = (undefined1 *)&ppppppuStack_200;
        pppppppuVar11 = (undefined8 *******)(extraout_x8_20 + 0x1d8);
        func_0x000107785b50(puVar8,pppppppuVar11);
        if (((ulong)puVar8 & 1) == 0) {
          if ((*(long *)(puVar5 + 0x10) == 0) || (*(long *)(*(long *)(puVar5 + 0x10) + 8) != 0)) {
            pppppppuVar11 = (undefined8 *******)*param_5;
            func_0x00010779488c();
            func_0x000107794a4c(pppppppuStack_220 + 0x3b);
            func_0x0001077947a0();
            func_0x00010779487c();
          }
          else {
            func_0x000107794a4c(*param_5 + 0x1d8);
          }
          func_0x0001077947bc();
          func_0x000107794884();
        }
      }
      func_0x000107794954();
    }
    func_0x000107794994();
    func_0x00010733e5d8();
  }
  pppppppuVar9 = &ppppppuStack_248;
  param_5 = plVar10;
code_r0x000107793740:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppppppuVar9);
  plVar10 = param_5;
code_r0x000107793744:
  func_0x000107794738(uStack_158);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x000107794850();
  func_0x00010727e950(&ppppppuStack_200);
  ppppppuVar7 = &ppppppuStack_248;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppppuVar7);
  puVar17 = &UNK_1077939c8;
  func_0x000107794960();
code_r0x0001077939c8:
  pppuStack_270 = &ppuStack_110;
  puStack_268 = puVar17;
  func_0x000107555de4(&uStack_271,ppppppuVar7,pppppppuVar11,plVar10,*puVar12,(char)*plVar3);
  return;
}



/* Entry: 107793c04; end: 107793c53;  */

/* WARNING: Possible PIC construction at 0x000107793c24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107793c28) */
/* WARNING: Removing unreachable block (ram,0x000107793c4c) */
/* WARNING: Removing unreachable block (ram,0x000107793c44) */

long * FUN_107793c04(undefined8 param_1,undefined8 *param_2)

{
  float *pfVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  undefined8 extraout_x8;
  undefined4 *unaff_x19;
  float *pfVar6;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long alStack_100 [3];
  undefined4 auStack_e8 [2];
  double dStack_e0;
  undefined8 uStack_a8;
  undefined1 auStack_68 [72];
  
  func_0x0001077947e4();
  puVar3 = param_2;
  func_0x0001077947e4(auStack_68);
  alStack_100[1] = 0;
  alStack_100[2] = 0;
  alStack_100[0] = 0;
  uStack_a8 = extraout_x8;
  func_0x0001072ac134(alStack_100,((long *)*puVar3)[1] - *(long *)*puVar3 >> 2);
  pfVar1 = (float *)((long *)*param_2)[1];
  for (pfVar6 = *(float **)*param_2; uVar2 = pfVar6 == pfVar1, !(bool)uVar2; pfVar6 = pfVar6 + 1) {
    dStack_e0 = (double)*pfVar6;
    auStack_e8[0] = 3;
    func_0x0001072aad1c(alStack_100,auStack_e8);
    func_0x000104c3323c(auStack_e8);
  }
  plVar5 = alStack_100;
  func_0x000107327958(&uStack_110);
  *unaff_x19 = 0;
  *(undefined8 *)(unaff_x19 + 4) = uStack_108;
  *(undefined8 *)(unaff_x19 + 2) = uStack_110;
  uStack_110 = 0;
  uStack_108 = 0;
  func_0x000104c33108(&uStack_110);
  plVar4 = alStack_100;
  func_0x000107269124();
  func_0x000107794738(uStack_a8);
  if ((bool)uVar2) {
    return plVar4;
  }
  ___stack_chk_fail();
  func_0x000107269124(alStack_100);
  func_0x000107794960();
  func_0x0001077947e4();
  plVar5 = (long *)*plVar5;
  func_0x000107794aa4();
  func_0x000107794ae0();
  func_0x000107794940();
  func_0x000104c32a18();
  *(undefined1 *)(plVar4 + 8) = 2;
  func_0x0001077949a0();
  func_0x000107794700();
  if ((bool)uVar2) {
    return plVar5;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  if ((char)plVar5[9] == '\x01') {
    func_0x0001072dbce8(plVar5);
  }
  return plVar5;
}



/* Entry: 107793f1c; end: 107793f5f;  */

undefined8 * FUN_107793f1c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109d8bd8;
  func_0x000107793f88(param_1 + 3);
  return param_1;
}



/* Entry: 10779402c; end: 107794053;  */

void FUN_10779402c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  func_0x00010727d6bc();
  *(undefined2 *)(lVar1 + 0x28) = *(undefined2 *)(param_2 + 0x28);
  return;
}



/* Entry: 107794280; end: 107794283;  */

undefined8 FUN_107794280(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  
  uVar1 = *(undefined8 *)*param_1;
  func_0x000107349544(uVar1,0);
  func_0x00010734ac10(uVar1);
  func_0x000107349658();
  func_0x00010734aa78();
  *extraout_x9 = 0x6e;
  func_0x00010734aa78();
  *extraout_x9_00 = 0x75;
  func_0x00010734aa78();
  *extraout_x9_01 = 0x6c;
  func_0x00010734ab28();
  *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
  *extraout_x10 = extraout_w8;
  return 1;
}



/* Entry: 1077943b0; end: 1077943bb;  */

undefined8 FUN_1077943b0(void)

{
  return 1;
}



/* Entry: 10779465c; end: 1077946ab;  */

void FUN_10779465c(long param_1,long param_2)

{
  int iVar1;
  undefined1 uStack_19;
  undefined1 *puStack_18;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 != -1 && *(int *)(param_2 + 0x40) == iVar1) {
    puStack_18 = &uStack_19;
    func_0x0001077949c0(*(int *)(param_2 + 0x40) == iVar1,param_1);
  }
  return;
}



/* Entry: 107794dd8; end: 107794e5b;  */

long FUN_107794dd8(undefined8 *param_1)

{
  undefined8 extraout_x8;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  *param_1 = &PTR_DAT_1109d8d48;
  func_0x000107793b1c(param_1 + 0x5e);
  func_0x000107794064(param_1 + 0x2d);
  func_0x0001077866dc(param_1);
  *unaff_x20 = extraout_x8;
  func_0x000107284db4(param_1 + 0x28);
  func_0x000107284d8c(unaff_x19 + 0xd0);
  func_0x000107283194(unaff_x19 + 0xc0);
  func_0x0001072c9b9c(unaff_x19 + 0xb0);
  func_0x000104c2f714(unaff_x19 + 0x78);
  func_0x000104c2f714(unaff_x19 + 0x40);
  func_0x000104c2f714(unaff_x20 + 1);
  return unaff_x19;
}



/* Entry: 107795088; end: 107795093;  */

undefined8 * FUN_107795088(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  puVar1 = param_1;
  func_0x0001072f6da0();
  func_0x0001072f6da0(puVar1 + 2);
  return param_1;
}



/* Entry: 1077951ec; end: 1077956e3;  */

void FUN_1077951ec(long *param_1,long param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 *puStack_50;
  undefined8 uStack_48;
  
  uStack_48 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107798044(&uStack_60,1);
  puVar3 = puStack_50;
  puStack_50[1] = 0;
  puStack_50[2] = 0;
  *puStack_50 = &PTR_DAT_1109d9338;
  func_0x000107785684(puStack_50 + 3,param_2);
  puVar3[3] = &PTR_DAT_1109d94f0;
  func_0x00010727d614(puVar3 + 0x30,param_2 + 0x168);
  func_0x00010727fe7c(puVar3 + 0x37,param_2 + 0x1a0);
  func_0x00010727fe7c(puVar3 + 0x3e,param_2 + 0x1d8);
  func_0x00010727d614(puVar3 + 0x45,param_2 + 0x210);
  func_0x0001073243b8(puVar3 + 0x4d,param_2 + 0x250);
  func_0x0001073243b8(puVar3 + 0x5c,param_2 + 0x2c8);
  func_0x00010727d614(puVar3 + 0x6a,param_2 + 0x338);
  func_0x00010727d614(puVar3 + 0x71,param_2 + 0x370);
  func_0x00010727d614(puVar3 + 0x78,param_2 + 0x3a8);
  func_0x0001073243b8(puVar3 + 0x80,param_2 + 1000);
  func_0x0001073243b8(puVar3 + 0x8f,param_2 + 0x460);
  func_0x0001072f673c(puVar3 + 0x9d,param_2 + 0x4d0);
  puVar1 = puVar3 + 0xa6;
  *(undefined1 *)(puVar3 + 0xa6) = 0;
  *(undefined4 *)(puVar3 + 0xac) = 0xffffffff;
  func_0x00010755eba8(puVar1);
  uVar2 = *(uint *)(param_2 + 0x548);
  uVar4 = uVar2 == 0xffffffff;
  if (!(bool)uVar4) {
    puStack_68 = puVar1;
    (*(code *)(&PTR_DAT_1109d9378)[uVar2])(&puStack_68,param_2 + 0x518);
    *(uint *)(puVar3 + 0xac) = uVar2;
  }
  func_0x00010727fe7c(puVar3 + 0xad,param_2 + 0x550);
  func_0x00010727fe7c(puVar3 + 0xb4,param_2 + 0x588);
  func_0x0001073243b8(puVar3 + 0xbc,param_2 + 0x5c8);
  func_0x0001072f673c(puVar3 + 0xca,param_2 + 0x638);
  func_0x00010727d614(puVar3 + 0xd3,param_2 + 0x680);
  func_0x00010727d614(puVar3 + 0xda,param_2 + 0x6b8);
  func_0x00010727d614(puVar3 + 0xe1,param_2 + 0x6f0);
  func_0x0001072f67c4(puVar3 + 0xe8,param_2 + 0x728);
  func_0x0001072f673c(puVar3 + 0xf1,param_2 + 0x770);
  func_0x00010727d614(puVar3 + 0xfa,param_2 + 0x7b8);
  func_0x0001077981dc(puVar3 + 0x101,param_2 + 0x7f0);
  func_0x0001074c4824(puVar3 + 0x115,param_2 + 0x890);
  func_0x000107798220(puVar3 + 0x121,param_2 + 0x8f0);
  func_0x0001074c4824(puVar3 + 0x12e,param_2 + 0x958);
  func_0x000107798220(puVar3 + 0x13a,param_2 + 0x9b8);
  func_0x0001074c4824(puVar3 + 0x147,param_2 + 0xa20);
  func_0x000107798220(puVar3 + 0x153,param_2 + 0xa80);
  func_0x0001074c4824(puVar3 + 0x160,param_2 + 0xae8);
  func_0x000107798220(puVar3 + 0x16c,param_2 + 0xb48);
  func_0x0001074c4824(puVar3 + 0x179,param_2 + 0xbb0);
  func_0x0001074c4824(puVar3 + 0x185,param_2 + 0xc10);
  func_0x0001074c4824(puVar3 + 0x191,param_2 + 0xc70);
  func_0x0001074c4824(puVar3 + 0x19d,param_2 + 0xcd0);
  puVar3 = puStack_50;
  puStack_50 = (undefined8 *)0x0;
  func_0x000107798158(&uStack_60);
  *param_1 = (long)(puVar3 + 3);
  param_1[1] = (long)puVar3;
  uStack_60 = 0;
  uStack_58 = 0;
  func_0x00010779956c();
  func_0x0001077990c8(uStack_48);
  if ((bool)uVar4) {
    return;
  }
  ___stack_chk_fail();
  do {
    func_0x00010755eba8(puVar1);
    func_0x0001072ca648(puVar3 + 0x9d);
    func_0x00010732442c(puVar3 + 0x8f);
    func_0x00010732442c(puVar3 + 0x80);
    func_0x000107266a30(puVar3 + 0x78);
    func_0x000107266a30(puVar3 + 0x71);
    func_0x000107266a30(puVar3 + 0x6a);
    func_0x00010732442c(puVar3 + 0x5c);
    func_0x00010732442c(puVar3 + 0x4d);
    func_0x000107266a30(puVar3 + 0x45);
    func_0x00010727fc1c(puVar3 + 0x3e);
    func_0x00010727fc1c(puVar3 + 0x37);
    func_0x000107266a30(puVar3 + 0x30);
    func_0x000107785780(puVar3 + 3);
    __ZNSt3__119__shared_weak_countD2Ev(puVar3);
    func_0x000107798158(&uStack_60);
    func_0x0001077994fc();
    func_0x0001072ca648(puVar3 + 0xca);
    func_0x00010732442c(puVar3 + 0xbc);
    func_0x00010727fc1c(puVar3 + 0xb4);
    func_0x00010727fc1c(puVar3 + 0xad);
  } while( true );
}



/* Entry: 107797a90; end: 107797b1f;  */

void FUN_107797a90(undefined8 param_1,long param_2,long *param_3)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  long lStack_48;
  undefined1 auStack_40 [16];
  
  lStack_48 = *param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    lStack_48 = (long)param_3;
  }
  func_0x00010750c5d0(auStack_40,&lStack_48);
  ppuVar1 = &PTR_DAT_1109d8e90;
  func_0x000107785358(&PTR_DAT_1109d8e90,&UNK_1109d9328,auStack_40);
  if (ppuVar1 != (undefined **)&UNK_1109d9328) {
    puVar2 = auStack_40;
    func_0x000107785400(puVar2,ppuVar1);
    if ((int)puVar2 == 0) {
      func_0x000107795f14(param_1,*(undefined8 *)(param_2 + 8),*(undefined1 *)(ppuVar1 + 1));
      return;
    }
  }
  func_0x000107799480();
  return;
}



/* Entry: 107797e2c; end: 107797e77;  */

/* WARNING: Possible PIC construction at 0x000107797e4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107797e50) */
/* WARNING: Removing unreachable block (ram,0x000107797e70) */
/* WARNING: Removing unreachable block (ram,0x000107797e68) */

undefined8 * FUN_107797e2c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_x8;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [64];
  undefined8 uStack_a8;
  undefined1 auStack_68 [72];
  
  func_0x0001077991a8();
  puVar3 = param_2;
  func_0x0001077991a8(auStack_68);
  uStack_f8 = 0;
  uStack_f0 = 0;
  uStack_100 = 0;
  puVar4 = &uStack_100;
  uStack_a8 = extraout_x8;
  func_0x0001072ac134(puVar4,(((long *)*puVar3)[1] - *(long *)*puVar3) / 0x38);
  puVar1 = (undefined8 *)((undefined8 *)*param_2)[1];
  for (puVar3 = *(undefined8 **)*param_2; uVar2 = puVar3 == puVar1, !(bool)uVar2;
      puVar3 = puVar3 + 7) {
    puVar4 = puVar3;
    func_0x00010778b3e8(auStack_e8);
    func_0x000107799574();
    func_0x000107799450();
  }
  func_0x000107799530();
  func_0x0001077993b0();
  func_0x0001077994c4();
  func_0x0001077990c8(uStack_a8);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x0001077994c4();
    func_0x00010779934c();
    func_0x0001077991a8();
    func_0x0001077992bc();
    func_0x000107799434();
    func_0x0001077992a8();
    func_0x000104c32a18();
    func_0x0001077992f4(2);
    func_0x0001077990b0();
    if (!(bool)uVar2) {
      ___stack_chk_fail();
      __Unwind_Resume();
      if (*(char *)(puVar4 + 7) == '\x01') {
        func_0x00010779954c();
      }
      return puVar4;
    }
    return puVar4;
  }
  return puVar4;
}



/* Entry: 10779809c; end: 1077980db;  */

undefined8 * FUN_10779809c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109d9338;
  func_0x000107798104(param_1 + 3);
  return param_1;
}



/* Entry: 1077981b4; end: 10779831f;  */

void FUN_1077981b4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  func_0x00010727d6bc();
  *(undefined2 *)(lVar1 + 0x28) = *(undefined2 *)(param_2 + 0x28);
  return;
}



/* Entry: 107798520; end: 10779852f;  */

undefined8 * FUN_107798520(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  
  func_0x0001077991d0(*(undefined8 *)*param_1);
  param_2 = (undefined8 *)*param_2;
  func_0x000107799464();
  func_0x000107799434();
  func_0x0001077992a8();
  func_0x0001077778dc();
  func_0x000107799354();
  func_0x0001077990b0();
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  func_0x000107799354();
  func_0x00010779934c();
  uVar1 = *(undefined8 *)*param_2;
  func_0x000107349544(uVar1,0);
  func_0x00010734ac10(uVar1);
  func_0x000107349658();
  func_0x00010734aa78();
  *extraout_x9 = 0x6e;
  func_0x00010734aa78();
  *extraout_x9_00 = 0x75;
  func_0x00010734aa78();
  *extraout_x9_01 = 0x6c;
  func_0x00010734ab28();
  *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
  *extraout_x10 = extraout_w8;
  return (undefined8 *)0x1;
}



/* Entry: 107798684; end: 1077986a3;  */

undefined8 FUN_107798684(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 extraout_w8;
  undefined1 *extraout_x9;
  undefined1 *extraout_x9_00;
  undefined1 *extraout_x9_01;
  long extraout_x9_02;
  undefined1 *extraout_x10;
  undefined8 extraout_x11;
  
  uVar1 = *(undefined8 *)*param_1;
  func_0x000107349544(uVar1,0);
  func_0x00010734ac10(uVar1);
  func_0x000107349658();
  func_0x00010734aa78();
  *extraout_x9 = 0x6e;
  func_0x00010734aa78();
  *extraout_x9_00 = 0x75;
  func_0x00010734aa78();
  *extraout_x9_01 = 0x6c;
  func_0x00010734ab28();
  *(undefined8 *)(extraout_x9_02 + 0x18) = extraout_x11;
  *extraout_x10 = extraout_w8;
  return 1;
}



/* Entry: 10779883c; end: 107798857;  */

void FUN_10779883c(void)

{
  func_0x000107799588();
  func_0x00010779917c();
  return;
}



/* Entry: 107798a18; end: 107798a67;  */

void FUN_107798a18(long param_1,long param_2)

{
  int iVar1;
  undefined1 uStack_19;
  undefined1 *puStack_18;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 != -1 && *(int *)(param_2 + 0x40) == iVar1) {
    puStack_18 = &uStack_19;
    func_0x0001077993e4(*(int *)(param_2 + 0x40) == iVar1,param_1);
  }
  return;
}



/* Entry: 107798b6c; end: 107798ba3;  */

void FUN_107798b6c(long param_1,long *param_2,long *param_3)

{
  long lStack_20;
  long *plStack_18;
  
  if (*(int *)(param_1 + 0x40) == 1) {
    if (param_2 != param_3) {
      plStack_18 = (long *)param_3[1];
      lStack_20 = *param_3;
      *param_3 = 0;
      param_3[1] = 0;
      func_0x000107295ce8(param_2,&lStack_20);
      func_0x00010726b120(&lStack_20);
    }
    return;
  }
  lStack_20 = param_1;
  plStack_18 = param_3;
  func_0x000107798ba4(&lStack_20);
  return;
}



/* Entry: 107798d90; end: 107798de3;  */

void FUN_107798d90(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x68) != -1 || *(int *)(param_2 + 0x68) != -1) {
    if (*(int *)(param_2 + 0x68) == -1) {
      if (*(uint *)(param_1 + 0x68) != 0xffffffff) {
        func_0x000107344d8c((&PTR_DAT_1109a0f70)[*(uint *)(param_1 + 0x68)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
      return;
    }
    func_0x000107799410();
  }
  return;
}



/* Entry: 1077990b0; end: 107799603;  */

void FUN_1077990b0(void)

{
  return;
}



/* Entry: 107799ae4; end: 107799af7;  */

void FUN_107799ae4(void)

{
  func_0x000107799ab8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10779a7c4; end: 10779a7ff;  */

void FUN_10779a7c4(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010779b6e0(&uStack_30);
  param_1[1] = uStack_28;
  *param_1 = uStack_30;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x00010779ba64();
  return;
}



/* Entry: 10779b250; end: 10779b2a7;  */

void FUN_10779b250(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *unaff_x19;
  undefined8 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x00010779baa8();
  if (lStack_38 != 0) {
    plVar1 = (long *)(lStack_38 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  unaff_x19[1] = lStack_38;
  *unaff_x19 = uStack_40;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001077832b8(&uStack_30);
  func_0x00010779ba64();
  return;
}



/* Entry: 10779b470; end: 10779b493;  */

undefined8 FUN_10779b470(undefined8 param_1)

{
  func_0x00010779b494();
  return param_1;
}



/* Entry: 10779b5a8; end: 10779b5db;  */

void FUN_10779b5a8(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010779bb7c();
  uVar2 = unaff_x19[1];
  uVar1 = *unaff_x19;
  uVar4 = unaff_x19[3];
  uVar3 = unaff_x19[2];
  *(undefined4 *)(unaff_x20 + 4) = *(undefined4 *)(unaff_x19 + 4);
  unaff_x20[1] = uVar2;
  *unaff_x20 = uVar1;
  unaff_x20[3] = uVar4;
  unaff_x20[2] = uVar3;
  *(undefined4 *)(unaff_x20 + 10) = 1;
  return;
}



/* Entry: 10779b7c4; end: 10779b7f3;  */

undefined8 * FUN_10779b7c4(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0xa0a0a0a0a0a0a1) {
    puVar1 = (undefined8 *)(param_2 * 0x198);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109d9710;
  func_0x00010779b85c(param_1 + 3);
  return param_1;
}



/* Entry: 10779b970; end: 10779bb93;  */

void FUN_10779b970(void)

{
  undefined1 *unaff_x19;
  undefined1 in_stack_00000018;
  undefined1 in_stack_0000001c;
  
  unaff_x19[0x18] = in_stack_00000018;
  *unaff_x19 = in_stack_0000001c;
  return;
}



/* Entry: 10779bf70; end: 10779c03b;  */

/* WARNING: Possible PIC construction at 0x00010779bfc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010779bfc4) */
/* WARNING: Removing unreachable block (ram,0x00010779bfcc) */
/* WARNING: Removing unreachable block (ram,0x00010779bfe8) */
/* WARNING: Removing unreachable block (ram,0x00010779bff8) */
/* WARNING: Removing unreachable block (ram,0x00010779c004) */
/* WARNING: Removing unreachable block (ram,0x00010779c01c) */

void FUN_10779bf70(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long *param_8)

{
  byte bVar1;
  undefined1 uVar2;
  long *plVar3;
  long *plVar4;
  undefined **ppuVar5;
  undefined1 *puVar6;
  undefined1 **ppuVar7;
  undefined *puVar8;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined8 *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  long extraout_x8_22;
  long extraout_x8_23;
  ulong uVar9;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [32];
  undefined1 uStack_1a8;
  byte bStack_1a0;
  uint uStack_198;
  byte bStack_190;
  undefined1 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  ulong uStack_168;
  undefined1 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  long alStack_90 [8];
  undefined1 uStack_50;
  
  plVar3 = alStack_90;
  func_0x00010779d0bc();
  func_0x000107781de4(param_1);
  uVar9 = 0xb;
  puVar8 = *(undefined **)(param_4 + 8);
  plVar4 = &lStack_100;
  uStack_98 = 0x10779bfc4;
  lStack_b0 = param_4;
  uStack_a8 = param_1;
  puStack_a0 = &stack0xfffffffffffffff0;
  func_0x00010779d0bc();
  uVar2 = (int)uVar9 == 0xf;
  switch(uVar9 & 0xffffffff) {
  case 0:
    func_0x00010779d010();
    if ((bool)uVar2) {
      puVar8 = puVar8 + 0x168;
code_r0x000107784b60:
      func_0x000107784e48(alStack_90,puVar8,(long)&uStack_a8 + 7);
      return;
    }
    goto code_r0x00010779c244;
  case 1:
    func_0x00010779d010();
    if ((bool)uVar2) {
      puVar8 = puVar8 + 0x1c8;
      goto code_r0x000107784b60;
    }
    goto code_r0x00010779c244;
  case 2:
    func_0x00010779d010();
    if ((bool)uVar2) {
      puVar8 = puVar8 + 0x228;
      goto code_r0x000107784b60;
    }
    goto code_r0x00010779c244;
  case 3:
    func_0x00010779d010();
    if ((bool)uVar2) {
      puVar8 = puVar8 + 0x288;
      goto code_r0x000107784b60;
    }
    goto code_r0x00010779c244;
  case 4:
    func_0x00010779d010();
    if ((bool)uVar2) {
      puVar8 = puVar8 + 0x2e8;
      goto code_r0x000107784b60;
    }
    goto code_r0x00010779c244;
  case 5:
    func_0x00010779d010();
    if ((bool)uVar2) {
      puVar8 = puVar8 + 0x348;
      goto code_r0x000107784b60;
    }
    goto code_r0x00010779c244;
  case 6:
    if (*(int *)(puVar8 + 0x3d8) == 0) goto code_r0x00010779c1d0;
    uVar2 = *(int *)(puVar8 + 0x3d8) == 1;
    if ((bool)uVar2) {
      uVar2 = puVar8[0x3a8] == '\0';
      puVar8 = &DAT_10f42a7b5;
      if ((bool)uVar2) {
        puVar8 = &DAT_10f42a7ae;
      }
      func_0x00010724ae4c();
      func_0x00010779d1b8();
      uStack_50 = 1;
    }
    else {
      plVar4 = *(long **)(puVar8 + 0x3a8);
      (**(code **)(*plVar4 + 0x28))(&lStack_100);
      func_0x00010779d1b8();
      uStack_50 = 2;
    }
    func_0x00010779d1a4();
    break;
  case 7:
    func_0x00010779d010();
    if ((bool)uVar2) {
      puVar8 = puVar8 + 0x408;
      goto code_r0x000107784b60;
    }
    goto code_r0x00010779c244;
  case 8:
    in_register_00005008 = *(undefined8 *)(puVar8 + 0x1a8);
    param_2 = *(long *)(puVar8 + 0x1a0);
    in_register_00005028 = *(undefined8 *)(puVar8 + 0x1b8);
    param_3 = *(undefined8 *)(puVar8 + 0x1b0);
    uStack_e0 = *(undefined8 *)(puVar8 + 0x1c0);
    lStack_100 = param_2;
    uStack_f8 = in_register_00005008;
    uStack_f0 = param_3;
    uStack_e8 = in_register_00005028;
    func_0x00010779d048();
    plVar4 = plVar3;
    break;
  case 9:
    in_register_00005008 = *(undefined8 *)(puVar8 + 0x208);
    param_2 = *(long *)(puVar8 + 0x200);
    in_register_00005028 = *(undefined8 *)(puVar8 + 0x218);
    param_3 = *(undefined8 *)(puVar8 + 0x210);
    uStack_e0 = *(undefined8 *)(puVar8 + 0x220);
    lStack_100 = param_2;
    uStack_f8 = in_register_00005008;
    uStack_f0 = param_3;
    uStack_e8 = in_register_00005028;
    func_0x00010779d048();
    plVar4 = plVar3;
    break;
  case 10:
    in_register_00005008 = *(undefined8 *)(puVar8 + 0x268);
    param_2 = *(long *)(puVar8 + 0x260);
    in_register_00005028 = *(undefined8 *)(puVar8 + 0x278);
    param_3 = *(undefined8 *)(puVar8 + 0x270);
    uStack_e0 = *(undefined8 *)(puVar8 + 0x280);
    lStack_100 = param_2;
    uStack_f8 = in_register_00005008;
    uStack_f0 = param_3;
    uStack_e8 = in_register_00005028;
    func_0x00010779d048();
    plVar4 = plVar3;
    break;
  case 0xb:
    in_register_00005008 = *(undefined8 *)(puVar8 + 0x2c8);
    param_2 = *(long *)(puVar8 + 0x2c0);
    in_register_00005028 = *(undefined8 *)(puVar8 + 0x2d8);
    param_3 = *(undefined8 *)(puVar8 + 0x2d0);
    uStack_e0 = *(undefined8 *)(puVar8 + 0x2e0);
    lStack_100 = param_2;
    uStack_f8 = in_register_00005008;
    uStack_f0 = param_3;
    uStack_e8 = in_register_00005028;
    func_0x00010779d048();
    plVar4 = plVar3;
    break;
  case 0xc:
    in_register_00005008 = *(undefined8 *)(puVar8 + 0x328);
    param_2 = *(long *)(puVar8 + 800);
    in_register_00005028 = *(undefined8 *)(puVar8 + 0x338);
    param_3 = *(undefined8 *)(puVar8 + 0x330);
    uStack_e0 = *(undefined8 *)(puVar8 + 0x340);
    lStack_100 = param_2;
    uStack_f8 = in_register_00005008;
    uStack_f0 = param_3;
    uStack_e8 = in_register_00005028;
    func_0x00010779d048();
    plVar4 = plVar3;
    break;
  case 0xd:
    in_register_00005008 = *(undefined8 *)(puVar8 + 0x388);
    param_2 = *(long *)(puVar8 + 0x380);
    in_register_00005028 = *(undefined8 *)(puVar8 + 0x398);
    param_3 = *(undefined8 *)(puVar8 + 0x390);
    uStack_e0 = *(undefined8 *)(puVar8 + 0x3a0);
    lStack_100 = param_2;
    uStack_f8 = in_register_00005008;
    uStack_f0 = param_3;
    uStack_e8 = in_register_00005028;
    func_0x00010779d048();
    plVar4 = plVar3;
    break;
  case 0xe:
    in_register_00005008 = *(undefined8 *)(puVar8 + 1000);
    param_2 = *(long *)(puVar8 + 0x3e0);
    in_register_00005028 = *(undefined8 *)(puVar8 + 0x3f8);
    param_3 = *(undefined8 *)(puVar8 + 0x3f0);
    uStack_e0 = *(undefined8 *)(puVar8 + 0x400);
    lStack_100 = param_2;
    uStack_f8 = in_register_00005008;
    uStack_f0 = param_3;
    uStack_e8 = in_register_00005028;
    func_0x00010779d048();
    plVar4 = plVar3;
    break;
  case 0xf:
    in_register_00005008 = *(undefined8 *)(puVar8 + 0x448);
    param_2 = *(long *)(puVar8 + 0x440);
    in_register_00005028 = *(undefined8 *)(puVar8 + 0x458);
    param_3 = *(undefined8 *)(puVar8 + 0x450);
    uStack_e0 = *(undefined8 *)(puVar8 + 0x460);
    lStack_100 = param_2;
    uStack_f8 = in_register_00005008;
    uStack_f0 = param_3;
    uStack_e8 = in_register_00005028;
    func_0x00010779d048();
    plVar4 = plVar3;
    break;
  default:
code_r0x00010779c1d0:
    func_0x00010779d110();
    plVar4 = plVar3;
  }
  func_0x00010779d010();
  plVar3 = plVar4;
  if ((bool)uVar2) {
    return;
  }
code_r0x00010779c244:
  ___stack_chk_fail();
  __Unwind_Resume();
  puStack_170 = puVar8;
  uStack_168 = uVar9;
  func_0x00010772d2fc(auStack_1c8,&puStack_170);
  ppuVar5 = &PTR_DAT_1109d97f8;
  func_0x000107785358(&PTR_DAT_1109d97f8,&UNK_1109d9978,auStack_1c8);
  if (ppuVar5 == (undefined **)&UNK_1109d9978) {
code_r0x00010779c2b8:
    *(undefined1 *)extraout_x8 = 0;
    *(undefined1 *)(extraout_x8 + 3) = 0;
    return;
  }
  puVar6 = auStack_1c8;
  func_0x000107785400(puVar6,ppuVar5);
  if ((int)puVar6 != 0) goto code_r0x00010779c2b8;
  bVar1 = *(byte *)(ppuVar5 + 1);
  if (bVar1 < 6) {
code_r0x00010779c2d0:
    puStack_188 = (undefined1 *)0x0;
    uStack_180 = 0;
    uStack_178 = 0;
    puStack_160 = (undefined1 *)((ulong)puStack_160 & 0xffffffffffffff00);
    auStack_1e0[0] = 0;
    func_0x00010733b904(auStack_1c8,param_7,&puStack_188,param_8,&puStack_160,auStack_1e0);
    if ((bStack_190 & 1) == 0) {
      func_0x00010779d154();
      if (extraout_x8_01 != 0) {
        func_0x00010779d144();
        func_0x00010779d180();
        func_0x00010779d134();
        func_0x00010779d16c();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1e0);
      }
      func_0x00010779d0e8();
      uVar2 = extraout_w8;
    }
    else {
      switch(bVar1) {
      case 0:
        func_0x00010779d0d4();
        puVar6 = auStack_1c8;
        func_0x000107786038(puVar6,extraout_x8_00 + 0x168);
        if (((ulong)puVar6 & 1) == 0) {
          if ((plVar3[2] == 0) || (*(long *)(plVar3[2] + 8) != 0)) {
            func_0x00010779d0a4();
            func_0x00010779d084(puStack_160 + 0x168);
            func_0x00010779d03c();
            func_0x00010779d09c();
          }
          else {
            func_0x00010779d084(*param_8 + 0x168);
          }
          func_0x00010779d054();
          func_0x00010779d0b4();
        }
        break;
      case 1:
        func_0x00010779d0d4();
        puVar6 = auStack_1c8;
        func_0x000107786038(puVar6,extraout_x8_06 + 0x1c8);
        if (((ulong)puVar6 & 1) == 0) {
          if ((plVar3[2] == 0) || (*(long *)(plVar3[2] + 8) != 0)) {
            func_0x00010779d0a4();
            func_0x00010779d084(puStack_160 + 0x1c8);
            func_0x00010779d03c();
            func_0x00010779d09c();
          }
          else {
            func_0x00010779d084(*param_8 + 0x1c8);
          }
          func_0x00010779d054();
          func_0x00010779d0b4();
        }
        break;
      case 2:
        func_0x00010779d0d4();
        puVar6 = auStack_1c8;
        func_0x000107786038(puVar6,extraout_x8_08 + 0x228);
        if (((ulong)puVar6 & 1) == 0) {
          if ((plVar3[2] == 0) || (*(long *)(plVar3[2] + 8) != 0)) {
            func_0x00010779d0a4();
            func_0x00010779d084(puStack_160 + 0x228);
            func_0x00010779d03c();
            func_0x00010779d09c();
          }
          else {
            func_0x00010779d084(*param_8 + 0x228);
          }
          func_0x00010779d054();
          func_0x00010779d0b4();
        }
        break;
      case 3:
        func_0x00010779d0d4();
        puVar6 = auStack_1c8;
        func_0x000107786038(puVar6,extraout_x8_09 + 0x288);
        if (((ulong)puVar6 & 1) == 0) {
          if ((plVar3[2] == 0) || (*(long *)(plVar3[2] + 8) != 0)) {
            func_0x00010779d0a4();
            func_0x00010779d084(puStack_160 + 0x288);
            func_0x00010779d03c();
            func_0x00010779d09c();
          }
          else {
            func_0x00010779d084(*param_8 + 0x288);
          }
          func_0x00010779d054();
          func_0x00010779d0b4();
        }
        break;
      case 4:
        func_0x00010779d0d4();
        puVar6 = auStack_1c8;
        func_0x000107786038(puVar6,extraout_x8_10 + 0x2e8);
        if (((ulong)puVar6 & 1) == 0) {
          if ((plVar3[2] == 0) || (*(long *)(plVar3[2] + 8) != 0)) {
            func_0x00010779d0a4();
            func_0x00010779d084(puStack_160 + 0x2e8);
            func_0x00010779d03c();
            func_0x00010779d09c();
          }
          else {
            func_0x00010779d084(*param_8 + 0x2e8);
          }
          func_0x00010779d054();
          func_0x00010779d0b4();
        }
        break;
      case 5:
        func_0x00010779d0d4();
        puVar6 = auStack_1c8;
        func_0x000107786038(puVar6,extraout_x8_05 + 0x348);
        if (((ulong)puVar6 & 1) == 0) {
          if ((plVar3[2] == 0) || (*(long *)(plVar3[2] + 8) != 0)) {
            func_0x00010779d0a4();
            func_0x00010779d084(puStack_160 + 0x348);
            func_0x00010779d03c();
            func_0x00010779d09c();
          }
          else {
            func_0x00010779d084(*param_8 + 0x348);
          }
          func_0x00010779d054();
          func_0x00010779d0b4();
        }
        break;
      default:
        func_0x00010779d178();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&puStack_188);
        if (bVar1 != 6) goto code_r0x00010779c39c;
        goto code_r0x00010779c444;
      case 7:
        func_0x00010779d0d4();
        puVar6 = auStack_1c8;
        func_0x000107786038(puVar6,extraout_x8_07 + 0x408);
        if (((ulong)puVar6 & 1) == 0) {
          if ((plVar3[2] == 0) || (*(long *)(plVar3[2] + 8) != 0)) {
            func_0x00010779d0a4();
            func_0x00010779d084(puStack_160 + 0x408);
            func_0x00010779d03c();
            func_0x00010779d09c();
          }
          else {
            func_0x00010779d084(*param_8 + 0x408);
          }
          func_0x00010779d054();
          func_0x00010779d0b4();
        }
      }
      uVar2 = 0;
      *(undefined1 *)extraout_x8 = 0;
    }
    *(undefined1 *)(extraout_x8 + 3) = uVar2;
    func_0x00010779d178();
  }
  else {
    if (bVar1 != 6) {
      if (bVar1 == 7) goto code_r0x00010779c2d0;
code_r0x00010779c39c:
      puStack_160 = (undefined1 *)0x0;
      uStack_158 = 0;
      uStack_150 = 0;
      func_0x00010754bb48(auStack_1c8,param_7,&puStack_160,param_8);
      if ((bStack_1a0 & 1) == 0) {
        extraout_x8[1] = uStack_158;
        *extraout_x8 = puStack_160;
        extraout_x8[2] = uStack_150;
        uStack_158 = 0;
        uStack_150 = 0;
        puStack_160 = (undefined1 *)0x0;
        uVar2 = 1;
      }
      else {
        switch(bVar1) {
        case 8:
          if ((plVar3[2] == 0) || (*(long *)(plVar3[2] + 8) != 0)) {
            func_0x00010779d0ac();
            func_0x00010779d074();
            *(undefined8 *)(extraout_x8_02 + 0x1a8) = in_register_00005008;
            *(long *)(extraout_x8_02 + 0x1a0) = param_2;
            *(undefined8 *)(extraout_x8_02 + 0x1b8) = in_register_00005028;
            *(undefined8 *)(extraout_x8_02 + 0x1b0) = param_3;
            *(undefined1 *)(extraout_x8_02 + 0x1c0) = uStack_1a8;
code_r0x00010779c80c:
            func_0x00010779ce5c(plVar3 + 1,&puStack_188);
            func_0x00010779cb08(&puStack_188);
          }
          else {
            func_0x00010779d064();
            *(undefined8 *)(extraout_x8_20 + 0x1a8) = in_register_00005008;
            *(long *)(extraout_x8_20 + 0x1a0) = param_2;
            *(undefined8 *)(extraout_x8_20 + 0x1b8) = in_register_00005028;
            *(undefined8 *)(extraout_x8_20 + 0x1b0) = param_3;
            *(undefined1 *)(extraout_x8_20 + 0x1c0) = uStack_1a8;
          }
          break;
        case 9:
          if ((plVar3[2] == 0) || (*(long *)(plVar3[2] + 8) != 0)) {
            func_0x00010779d0ac();
            func_0x00010779d074();
            *(undefined8 *)(extraout_x8_14 + 0x208) = in_register_00005008;
            *(long *)(extraout_x8_14 + 0x200) = param_2;
            *(undefined8 *)(extraout_x8_14 + 0x218) = in_register_00005028;
            *(undefined8 *)(extraout_x8_14 + 0x210) = param_3;
            *(undefined1 *)(extraout_x8_14 + 0x220) = uStack_1a8;
            goto code_r0x00010779c80c;
          }
          func_0x00010779d064();
          *(undefined8 *)(extraout_x8_21 + 0x208) = in_register_00005008;
          *(long *)(extraout_x8_21 + 0x200) = param_2;
          *(undefined8 *)(extraout_x8_21 + 0x218) = in_register_00005028;
          *(undefined8 *)(extraout_x8_21 + 0x210) = param_3;
          *(undefined1 *)(extraout_x8_21 + 0x220) = uStack_1a8;
          break;
        case 10:
          if ((plVar3[2] == 0) || (*(long *)(plVar3[2] + 8) != 0)) {
            func_0x00010779d0ac();
            func_0x00010779d074();
            *(undefined8 *)(extraout_x8_12 + 0x268) = in_register_00005008;
            *(long *)(extraout_x8_12 + 0x260) = param_2;
            *(undefined8 *)(extraout_x8_12 + 0x278) = in_register_00005028;
            *(undefined8 *)(extraout_x8_12 + 0x270) = param_3;
            *(undefined1 *)(extraout_x8_12 + 0x280) = uStack_1a8;
            goto code_r0x00010779c80c;
          }
          func_0x00010779d064();
          *(undefined8 *)(extraout_x8_18 + 0x268) = in_register_00005008;
          *(long *)(extraout_x8_18 + 0x260) = param_2;
          *(undefined8 *)(extraout_x8_18 + 0x278) = in_register_00005028;
          *(undefined8 *)(extraout_x8_18 + 0x270) = param_3;
          *(undefined1 *)(extraout_x8_18 + 0x280) = uStack_1a8;
          break;
        case 0xb:
          if ((plVar3[2] == 0) || (*(long *)(plVar3[2] + 8) != 0)) {
            func_0x00010779d0ac();
            func_0x00010779d074();
            *(undefined8 *)(extraout_x8_13 + 0x2c8) = in_register_00005008;
            *(long *)(extraout_x8_13 + 0x2c0) = param_2;
            *(undefined8 *)(extraout_x8_13 + 0x2d8) = in_register_00005028;
            *(undefined8 *)(extraout_x8_13 + 0x2d0) = param_3;
            *(undefined1 *)(extraout_x8_13 + 0x2e0) = uStack_1a8;
            goto code_r0x00010779c80c;
          }
          func_0x00010779d064();
          *(undefined8 *)(extraout_x8_19 + 0x2c8) = in_register_00005008;
          *(long *)(extraout_x8_19 + 0x2c0) = param_2;
          *(undefined8 *)(extraout_x8_19 + 0x2d8) = in_register_00005028;
          *(undefined8 *)(extraout_x8_19 + 0x2d0) = param_3;
          *(undefined1 *)(extraout_x8_19 + 0x2e0) = uStack_1a8;
          break;
        case 0xc:
          if ((plVar3[2] == 0) || (*(long *)(plVar3[2] + 8) != 0)) {
            func_0x00010779d0ac();
            func_0x00010779d074();
            *(undefined8 *)(extraout_x8_11 + 0x328) = in_register_00005008;
            *(long *)(extraout_x8_11 + 800) = param_2;
            *(undefined8 *)(extraout_x8_11 + 0x338) = in_register_00005028;
            *(undefined8 *)(extraout_x8_11 + 0x330) = param_3;
            *(undefined1 *)(extraout_x8_11 + 0x340) = uStack_1a8;
            goto code_r0x00010779c80c;
          }
          func_0x00010779d064();
          *(undefined8 *)(extraout_x8_17 + 0x328) = in_register_00005008;
          *(long *)(extraout_x8_17 + 800) = param_2;
          *(undefined8 *)(extraout_x8_17 + 0x338) = in_register_00005028;
          *(undefined8 *)(extraout_x8_17 + 0x330) = param_3;
          *(undefined1 *)(extraout_x8_17 + 0x340) = uStack_1a8;
          break;
        case 0xd:
          if ((plVar3[2] == 0) || (*(long *)(plVar3[2] + 8) != 0)) {
            func_0x00010779d0ac();
            func_0x00010779d074();
            *(undefined8 *)(extraout_x8_15 + 0x388) = in_register_00005008;
            *(long *)(extraout_x8_15 + 0x380) = param_2;
            *(undefined8 *)(extraout_x8_15 + 0x398) = in_register_00005028;
            *(undefined8 *)(extraout_x8_15 + 0x390) = param_3;
            *(undefined1 *)(extraout_x8_15 + 0x3a0) = uStack_1a8;
            goto code_r0x00010779c80c;
          }
          func_0x00010779d064();
          *(undefined8 *)(extraout_x8_22 + 0x388) = in_register_00005008;
          *(long *)(extraout_x8_22 + 0x380) = param_2;
          *(undefined8 *)(extraout_x8_22 + 0x398) = in_register_00005028;
          *(undefined8 *)(extraout_x8_22 + 0x390) = param_3;
          *(undefined1 *)(extraout_x8_22 + 0x3a0) = uStack_1a8;
          break;
        case 0xe:
          if ((plVar3[2] == 0) || (*(long *)(plVar3[2] + 8) != 0)) {
            func_0x00010779d0ac();
            func_0x00010779d074();
            *(undefined8 *)(extraout_x8_16 + 1000) = in_register_00005008;
            *(long *)(extraout_x8_16 + 0x3e0) = param_2;
            *(undefined8 *)(extraout_x8_16 + 0x3f8) = in_register_00005028;
            *(undefined8 *)(extraout_x8_16 + 0x3f0) = param_3;
            *(undefined1 *)(extraout_x8_16 + 0x400) = uStack_1a8;
            goto code_r0x00010779c80c;
          }
          func_0x00010779d064();
          *(undefined8 *)(extraout_x8_23 + 1000) = in_register_00005008;
          *(long *)(extraout_x8_23 + 0x3e0) = param_2;
          *(undefined8 *)(extraout_x8_23 + 0x3f8) = in_register_00005028;
          *(undefined8 *)(extraout_x8_23 + 0x3f0) = param_3;
          *(undefined1 *)(extraout_x8_23 + 0x400) = uStack_1a8;
          break;
        case 0xf:
          if ((plVar3[2] == 0) || (*(long *)(plVar3[2] + 8) != 0)) {
            func_0x00010779d0ac();
            func_0x00010779d074();
            func_0x00010779d1d4();
            goto code_r0x00010779c80c;
          }
          func_0x00010779d064();
          func_0x00010779d1d4();
        }
        uVar2 = 0;
        *(undefined1 *)extraout_x8 = 0;
      }
      *(undefined1 *)(extraout_x8 + 3) = uVar2;
      ppuVar7 = &puStack_160;
      goto code_r0x00010779c8ec;
    }
code_r0x00010779c444:
    puStack_188 = (undefined1 *)0x0;
    uStack_180 = 0;
    uStack_178 = 0;
    func_0x000107558408(auStack_1c8,&puStack_160,param_7,&puStack_188,param_8,0,0);
    if ((bStack_190 & 1) == 0) {
      func_0x00010779d154();
      if (extraout_x8_04 != 0) {
        func_0x00010779d144();
        func_0x00010779d180();
        func_0x00010779d134();
        func_0x00010779d16c();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1e0);
      }
      func_0x00010779d0e8();
      uVar2 = extraout_w8_00;
    }
    else {
      func_0x00010779d0d4();
      if (uStack_198 == 0xffffffff || *(uint *)(extraout_x8_03 + 0x3d8) != uStack_198) {
        if (*(uint *)(extraout_x8_03 + 0x3d8) != uStack_198) {
code_r0x00010779c680:
          if ((plVar3[2] == 0) || (*(long *)(plVar3[2] + 8) != 0)) {
            func_0x00010779d0a4();
            func_0x00010779ced0(puStack_160 + 0x3a8,auStack_1c8);
            func_0x00010779d03c();
            func_0x00010779d09c();
          }
          else {
            func_0x00010779ced0(*param_8 + 0x3a8,auStack_1c8);
          }
          func_0x00010779d054();
          func_0x00010779d0b4();
        }
      }
      else {
        ppuVar7 = &puStack_160;
        puStack_160 = auStack_1e0;
        (*(code *)(&PTR_DAT_1109d99c8)[uStack_198])(ppuVar7,auStack_1c8,extraout_x8_03 + 0x3a8);
        if (((ulong)ppuVar7 & 1) == 0) goto code_r0x00010779c680;
      }
      uVar2 = 0;
      *(undefined1 *)extraout_x8 = 0;
    }
    *(undefined1 *)(extraout_x8 + 3) = uVar2;
    func_0x00010779cb8c(auStack_1c8);
  }
  ppuVar7 = &puStack_188;
code_r0x00010779c8ec:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppuVar7);
  return;
}



/* Entry: 10779cc88; end: 10779ccb7;  */

undefined8 * FUN_10779cc88(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x38e38e38e38e39) {
    puVar1 = (undefined8 *)(param_2 * 0x480);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1109d9988;
  func_0x00010779cd20(param_1 + 3);
  return param_1;
}



/* Entry: 10779cdb8; end: 10779cdcf;  */

void FUN_10779cdb8(void)

{
  func_0x00010779cdd0();
  return;
}



/* Entry: 10779d1f4; end: 10779d207;  */

void FUN_10779d1f4(void)

{
  func_0x00010779d234();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10779d400; end: 10779d403;  */

undefined8 * FUN_10779d400(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1109d6e58;
  func_0x00010778350c(param_1 + 6);
  func_0x000107783268(param_1 + 3);
  func_0x0001073ad4c4(param_1 + 1);
  return param_1;
}



/* Entry: 10779df9c; end: 10779dfeb;  */

long * FUN_10779df9c(long *param_1,ulong param_2)

{
  if ((ulong)((param_1[1] - *param_1) / 0xe98) <= param_2) {
    func_0x0001077a0cd0();
    func_0x0001077a2ddc(param_1[1]);
    return param_1 + 0x74;
  }
  return (long *)(*param_1 + param_2 * 0xe98);
}



/* Entry: 10779e3c4; end: 10779e8db;  */

/* WARNING: Possible PIC construction at 0x00010779f188: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010779f18c) */
/* WARNING: Type propagation algorithm not settling */

long **** FUN_10779e3c4(long ***param_1,long ***param_2,long ****param_3,long ****param_4,
                       long ****param_5,ulong param_6,long ****param_7,undefined ****param_8)

{
  byte bVar1;
  byte bVar2;
  undefined ****ppppuVar3;
  undefined1 uVar4;
  long ****pppplVar5;
  undefined **ppuVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined ****ppppuVar9;
  ulong uVar10;
  long ****pppplVar11;
  undefined *****pppppuVar12;
  undefined **ppuVar13;
  undefined ****ppppuVar14;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 uVar15;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  undefined8 uVar16;
  undefined8 extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long extraout_x8_16;
  long extraout_x8_17;
  long extraout_x8_18;
  long extraout_x8_19;
  long extraout_x8_20;
  long extraout_x8_21;
  undefined8 extraout_x8_22;
  long extraout_x8_23;
  long extraout_x8_24;
  long extraout_x8_25;
  long extraout_x8_26;
  long extraout_x8_27;
  long extraout_x8_28;
  long extraout_x8_29;
  long extraout_x8_30;
  long extraout_x8_31;
  long extraout_x8_32;
  long extraout_x8_33;
  long extraout_x8_34;
  long extraout_x8_35;
  long extraout_x8_36;
  long extraout_x8_37;
  long extraout_x8_38;
  long extraout_x8_39;
  long extraout_x8_40;
  long extraout_x8_41;
  long extraout_x8_42;
  long extraout_x8_43;
  long extraout_x8_44;
  long extraout_x8_45;
  long extraout_x8_46;
  long extraout_x8_47;
  long extraout_x8_48;
  long extraout_x8_49;
  long extraout_x8_50;
  long extraout_x8_51;
  long extraout_x8_52;
  long extraout_x8_53;
  long extraout_x8_54;
  long extraout_x8_55;
  long extraout_x8_56;
  long extraout_x8_57;
  long extraout_x8_58;
  long extraout_x8_59;
  long extraout_x8_60;
  long extraout_x8_61;
  long extraout_x8_62;
  long extraout_x8_63;
  long extraout_x8_64;
  long extraout_x8_65;
  long extraout_x8_66;
  long extraout_x8_67;
  long extraout_x8_68;
  long extraout_x8_69;
  long extraout_x8_70;
  long extraout_x8_71;
  long extraout_x8_72;
  long extraout_x8_73;
  long extraout_x8_74;
  long extraout_x8_75;
  long extraout_x8_76;
  long extraout_x8_77;
  long extraout_x8_78;
  long extraout_x8_79;
  long extraout_x8_80;
  long extraout_x8_81;
  long extraout_x8_82;
  long extraout_x8_83;
  long extraout_x8_84;
  long extraout_x8_85;
  long extraout_x8_86;
  long extraout_x8_87;
  long extraout_x8_88;
  long extraout_x8_89;
  long extraout_x8_90;
  long extraout_x8_91;
  long extraout_x8_92;
  long extraout_x8_93;
  long extraout_x8_94;
  long extraout_x8_95;
  long extraout_x8_96;
  long extraout_x8_97;
  long extraout_x8_98;
  long extraout_x8_99;
  long extraout_x8_x00100;
  long extraout_x8_x00101;
  long extraout_x8_x00102;
  long extraout_x8_x00103;
  long extraout_x8_x00104;
  long extraout_x8_x00105;
  long extraout_x8_x00106;
  long extraout_x8_x00107;
  long extraout_x8_x00108;
  long extraout_x8_x00109;
  long extraout_x8_x00110;
  long extraout_x8_x00111;
  long extraout_x8_x00112;
  long extraout_x8_x00113;
  long extraout_x8_x00114;
  long extraout_x8_x00115;
  long extraout_x8_x00116;
  long extraout_x8_x00117;
  long extraout_x8_x00118;
  long extraout_x8_x00119;
  long extraout_x8_x00120;
  long extraout_x8_x00121;
  long extraout_x8_x00122;
  long extraout_x8_x00123;
  long extraout_x8_x00124;
  long extraout_x8_x00125;
  long extraout_x8_x00126;
  long extraout_x8_x00127;
  long extraout_x8_x00128;
  long extraout_x8_x00129;
  long ****extraout_x8_x00130;
  undefined1 extraout_w9;
  undefined1 extraout_w9_00;
  undefined1 extraout_w9_01;
  undefined1 extraout_w9_02;
  undefined1 extraout_w9_03;
  undefined1 extraout_w9_04;
  undefined1 extraout_w9_05;
  undefined1 extraout_w9_06;
  undefined1 extraout_w9_07;
  undefined1 extraout_w9_08;
  undefined1 extraout_w9_09;
  undefined1 extraout_w9_10;
  undefined1 extraout_w9_11;
  undefined1 extraout_w9_12;
  undefined8 *extraout_x9;
  undefined8 *extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long extraout_x9_04;
  long extraout_x9_05;
  long extraout_x9_06;
  long extraout_x9_07;
  long extraout_x9_08;
  long extraout_x9_09;
  long extraout_x9_10;
  long extraout_x9_11;
  long extraout_x9_12;
  long lVar17;
  undefined1 extraout_w10;
  undefined1 extraout_w10_00;
  undefined1 extraout_w10_01;
  undefined1 extraout_w10_02;
  undefined1 extraout_w10_03;
  undefined1 extraout_w10_04;
  undefined1 extraout_w10_05;
  undefined1 extraout_w10_06;
  undefined1 extraout_w10_07;
  undefined1 extraout_w10_08;
  undefined1 extraout_w10_09;
  undefined1 extraout_w10_10;
  long unaff_x20;
  uint uVar18;
  uint uVar19;
  long ****unaff_x24;
  undefined1 **ppuVar20;
  undefined *puVar21;
  long ***in_register_00005008;
  long ***in_register_00005028;
  undefined ****ppppuStack_328;
  long ***appplStack_320 [2];
  long ****pppplStack_310;
  long ****pppplStack_308;
  undefined ****ppppuStack_300;
  undefined *****pppppuStack_2f8;
  long ***appplStack_2b8 [3];
  long ****pppplStack_2a0;
  ulong uStack_298;
  long ***ppplStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long ***appplStack_270 [5];
  byte bStack_248;
  byte bStack_238;
  byte bStack_230;
  byte bStack_228;
  byte bStack_1f8;
  byte bStack_1d0;
  undefined8 uStack_1c8;
  undefined1 auStack_170 [24];
  long ***appplStack_158 [3];
  long ****pppplStack_140;
  long ****pppplStack_138;
  undefined ****ppppuStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined ****appppuStack_108 [4];
  undefined1 uStack_e8;
  byte bStack_e0;
  byte bStack_d0;
  byte bStack_c8;
  byte bStack_c0;
  undefined8 uStack_b8;
  undefined1 *puStack_80;
  undefined *puStack_78;
  long ***ppplStack_70;
  long ***ppplStack_68;
  long ***ppplStack_60;
  long ***ppplStack_58;
  long ***ppplStack_50;
  
  pppplVar5 = param_3;
  func_0x0001077a2c5c();
  uVar4 = (int)param_6 == 0x29;
  pppplVar11 = param_5;
  switch(param_6 & 0xffffffff) {
  case 0:
    func_0x0001077a2ad8();
    pppplVar11 = param_5;
    func_0x0001077a2a5c();
    param_5 = param_4;
    if ((bool)uVar4) {
      pppplVar5 = pppplVar5 + 0x131;
      func_0x000107784c0c(param_3,pppplVar5,&stack0xffffffffffffffef);
      return pppplVar5;
    }
    break;
  case 1:
    func_0x0001077a2ad8();
    pppplVar11 = param_5;
    func_0x0001077a2a5c();
    param_5 = param_4;
    if ((bool)uVar4) {
      param_4 = pppplVar5 + 0x13f;
code_r0x00010779e714:
      func_0x000107784e48(param_3);
      return param_4;
    }
    break;
  case 2:
    func_0x0001077a2ad8();
    pppplVar11 = param_5;
    func_0x0001077a2a5c();
    param_5 = param_4;
    if ((bool)uVar4) {
      param_4 = pppplVar5 + 0x14b;
code_r0x00010779e764:
      FUN_107784cb8(param_3);
      return param_4;
    }
    break;
  case 3:
    func_0x0001077a2ad8();
    pppplVar11 = param_5;
    func_0x0001077a2a5c();
    param_5 = param_4;
    if ((bool)uVar4) {
      param_4 = pppplVar5 + 0x158;
      goto code_r0x00010779e714;
    }
    break;
  case 4:
    func_0x0001077a2ad8();
    pppplVar11 = param_5;
    func_0x0001077a2a5c();
    param_5 = param_4;
    if ((bool)uVar4) {
      param_4 = pppplVar5 + 0x164;
      goto code_r0x00010779e714;
    }
    break;
  case 5:
    func_0x0001077a2ad8();
    pppplVar11 = param_5;
    func_0x0001077a2a5c();
    param_5 = param_4;
    if ((bool)uVar4) {
      param_4 = pppplVar5 + 0x170;
      goto code_r0x00010779e764;
    }
    break;
  case 6:
    func_0x0001077a2ad8();
    pppplVar11 = param_5;
    func_0x0001077a2a5c();
    param_5 = param_4;
    if ((bool)uVar4) {
      param_4 = pppplVar5 + 0x17d;
      goto code_r0x00010779e714;
    }
    break;
  case 7:
    func_0x0001077a2ad8();
    pppplVar11 = param_5;
    func_0x0001077a2a5c();
    param_5 = param_4;
    if ((bool)uVar4) {
      param_4 = pppplVar5 + 0x189;
      goto code_r0x00010779e764;
    }
    break;
  case 8:
    func_0x0001077a2ad8();
    pppplVar11 = param_5;
    func_0x0001077a2a5c();
    param_5 = param_4;
    if ((bool)uVar4) {
      param_4 = pppplVar5 + 0x196;
      goto code_r0x00010779e714;
    }
    break;
  case 9:
    func_0x00010779e164(param_4);
    func_0x0001077a2a5c();
    if ((bool)uVar4) goto code_r0x00010779e714;
    break;
  case 10:
    func_0x0001077a2ad8();
    pppplVar11 = param_5;
    func_0x0001077a2a5c();
    param_5 = param_4;
    if ((bool)uVar4) {
      param_4 = pppplVar5 + 0x1ae;
      goto code_r0x00010779e764;
    }
    break;
  case 0xb:
    func_0x0001077a2ad8();
    pppplVar11 = param_5;
    func_0x0001077a2a5c();
    param_5 = param_4;
    if ((bool)uVar4) {
      param_4 = pppplVar5 + 0x1bb;
      goto code_r0x00010779e714;
    }
    break;
  case 0xc:
    func_0x0001077a2ad8();
    pppplVar11 = param_5;
    func_0x0001077a2a5c();
    param_5 = param_4;
    if ((bool)uVar4) {
      param_4 = pppplVar5 + 0x1c7;
      goto code_r0x00010779e714;
    }
    break;
  case 0xd:
    func_0x0001077a2ad8();
    in_register_00005008 = pppplVar5[0x13b];
    param_1 = pppplVar5[0x13a];
    in_register_00005028 = pppplVar5[0x13d];
    param_2 = pppplVar5[0x13c];
    ppplStack_50 = pppplVar5[0x13e];
    ppplStack_70 = param_1;
    ppplStack_68 = in_register_00005008;
    ppplStack_60 = param_2;
    ppplStack_58 = in_register_00005028;
    func_0x0001077a2c50();
    pppplVar11 = param_5;
    goto LAB_10779e8c4;
  case 0xe:
    func_0x0001077a2ad8();
    in_register_00005008 = pppplVar5[0x147];
    param_1 = pppplVar5[0x146];
    in_register_00005028 = pppplVar5[0x149];
    param_2 = pppplVar5[0x148];
    ppplStack_50 = pppplVar5[0x14a];
    ppplStack_70 = param_1;
    ppplStack_68 = in_register_00005008;
    ppplStack_60 = param_2;
    ppplStack_58 = in_register_00005028;
    func_0x0001077a2c50();
    pppplVar11 = param_5;
    goto LAB_10779e8c4;
  case 0xf:
    func_0x0001077a2ad8();
    func_0x0001077a2e40(pppplVar5 + 0x153);
    func_0x0001077a2c50();
    pppplVar11 = param_5;
    goto LAB_10779e8c4;
  case 0x10:
    func_0x0001077a2ad8();
    func_0x0001077a2e40(pppplVar5 + 0x15f);
    func_0x0001077a2c50();
    pppplVar11 = param_5;
    goto LAB_10779e8c4;
  case 0x11:
    func_0x0001077a2ad8();
    func_0x0001077a2e40(pppplVar5 + 0x16b);
    func_0x0001077a2c50();
    pppplVar11 = param_5;
    goto LAB_10779e8c4;
  case 0x12:
    func_0x0001077a2ad8();
    in_register_00005008 = pppplVar5[0x179];
    param_1 = pppplVar5[0x178];
    in_register_00005028 = pppplVar5[0x17b];
    param_2 = pppplVar5[0x17a];
    ppplStack_50 = pppplVar5[0x17c];
    ppplStack_70 = param_1;
    ppplStack_68 = in_register_00005008;
    ppplStack_60 = param_2;
    ppplStack_58 = in_register_00005028;
    func_0x0001077a2c50();
    pppplVar11 = param_5;
    goto LAB_10779e8c4;
  case 0x13:
    func_0x0001077a2ad8();
    in_register_00005008 = pppplVar5[0x185];
    param_1 = pppplVar5[0x184];
    in_register_00005028 = pppplVar5[0x187];
    param_2 = pppplVar5[0x186];
    ppplStack_50 = pppplVar5[0x188];
    ppplStack_70 = param_1;
    ppplStack_68 = in_register_00005008;
    ppplStack_60 = param_2;
    ppplStack_58 = in_register_00005028;
    func_0x0001077a2c50();
    pppplVar11 = param_5;
    goto LAB_10779e8c4;
  case 0x14:
    func_0x0001077a2ad8();
    func_0x0001077a2e40(pppplVar5 + 0x191);
    func_0x0001077a2c50();
    pppplVar11 = param_5;
    goto LAB_10779e8c4;
  case 0x15:
    func_0x0001077a2ad8();
    func_0x0001077a2e40(pppplVar5 + 0x19d);
    func_0x0001077a2c50();
    pppplVar11 = param_5;
    goto LAB_10779e8c4;
  case 0x16:
    func_0x0001077a2ad8();
    func_0x0001077a2e40(pppplVar5 + 0x1a9);
    func_0x0001077a2c50();
    pppplVar11 = param_5;
    goto LAB_10779e8c4;
  case 0x17:
    func_0x0001077a2ad8();
    in_register_00005008 = pppplVar5[0x1b7];
    param_1 = pppplVar5[0x1b6];
    in_register_00005028 = pppplVar5[0x1b9];
    param_2 = pppplVar5[0x1b8];
    ppplStack_50 = pppplVar5[0x1ba];
    ppplStack_70 = param_1;
    ppplStack_68 = in_register_00005008;
    ppplStack_60 = param_2;
    ppplStack_58 = in_register_00005028;
    func_0x0001077a2c50();
    pppplVar11 = param_5;
    goto LAB_10779e8c4;
  case 0x18:
    func_0x0001077a2ad8();
    in_register_00005008 = pppplVar5[0x1c3];
    param_1 = pppplVar5[0x1c2];
    in_register_00005028 = pppplVar5[0x1c5];
    param_2 = pppplVar5[0x1c4];
    ppplStack_50 = pppplVar5[0x1c6];
    ppplStack_70 = param_1;
    ppplStack_68 = in_register_00005008;
    ppplStack_60 = param_2;
    ppplStack_58 = in_register_00005028;
    func_0x0001077a2c50();
    pppplVar11 = param_5;
    goto LAB_10779e8c4;
  case 0x19:
    func_0x0001077a2ad8();
    in_register_00005008 = pppplVar5[0x1cf];
    param_1 = pppplVar5[0x1ce];
    in_register_00005028 = pppplVar5[0x1d1];
    param_2 = pppplVar5[0x1d0];
    ppplStack_50 = pppplVar5[0x1d2];
    ppplStack_70 = param_1;
    ppplStack_68 = in_register_00005008;
    ppplStack_60 = param_2;
    ppplStack_58 = in_register_00005028;
    func_0x0001077a2c50();
    pppplVar11 = param_5;
    goto LAB_10779e8c4;
  case 0x1a:
    func_0x0001077a2ad8();
    pppplVar11 = param_5;
    func_0x0001077a2a5c();
    param_5 = param_4;
    if ((bool)uVar4) {
      pppplVar5 = pppplVar5 + 0x58;
code_r0x00010779e878:
      func_0x000107785298(param_3,pppplVar5,&stack0xffffffffffffffef);
      return pppplVar5;
    }
    break;
  case 0x1b:
    func_0x0001077a2ad8();
    pppplVar11 = param_5;
    func_0x0001077a2a5c();
    param_5 = param_4;
    if ((bool)uVar4) {
      pppplVar5 = pppplVar5 + 0x5f;
code_r0x00010779e484:
      uVar4 = 1;
      ppppuVar3 = (undefined ****)&ppplStack_70;
      ppuVar20 = (undefined1 **)&stack0xfffffffffffffff0;
      pppplVar11 = param_3;
      func_0x0001077a2c5c();
      if (*(int *)(pppplVar5 + 6) == 0) {
        func_0x0001077a2d50();
      }
      else {
        uVar4 = *(int *)(pppplVar5 + 6) == 1;
        if ((bool)uVar4) {
          uVar10 = (ulong)*(byte *)pppplVar5;
          func_0x0001077f2d98(uVar10);
          pppplVar11 = &ppplStack_68;
          func_0x00010724ae4c(pppplVar11,uVar10);
          func_0x0001077a318c();
          uVar15 = 1;
        }
        else {
          pppplVar11 = (long ****)*pppplVar5;
          func_0x0001077a2f18(pppplVar11);
          func_0x0001077a2f24();
          func_0x0001077a318c();
          uVar15 = 2;
        }
        *(undefined1 *)(param_3 + 8) = uVar15;
        func_0x0001077a2e7c();
      }
      func_0x0001077a2a5c();
      if ((bool)uVar4) {
        return pppplVar11;
      }
      ___stack_chk_fail();
      puVar21 = &UNK_1077a0d68;
      __Unwind_Resume();
      goto code_r0x0001077a0d68;
    }
    break;
  case 0x1c:
    func_0x0001077a2ad8();
    pppplVar11 = param_5;
    func_0x0001077a2a5c();
    param_5 = param_4;
    if ((bool)uVar4) {
      pppplVar5 = pppplVar5 + 0x66;
      goto code_r0x00010779e878;
    }
    break;
  case 0x1d:
    func_0x0001077a2ad8();
    pppplVar11 = param_5;
    func_0x0001077a2a5c();
    param_5 = param_4;
    if ((bool)uVar4) {
      pppplVar5 = pppplVar5 + 0x6d;
      goto code_r0x00010779e878;
    }
    break;
  case 0x1e:
    func_0x00010779dfcc(param_4);
    func_0x0001077a2a5c();
    if ((bool)uVar4) {
      func_0x000107784f0c(param_3);
      return param_4;
    }
    break;
  case 0x1f:
    func_0x0001077a2ad8();
    pppplVar11 = param_5;
    func_0x0001077a2a5c();
    param_5 = param_4;
    if ((bool)uVar4) {
      pppplVar5 = pppplVar5 + 0x88;
code_r0x00010779e618:
      func_0x00010778b36c(param_3,pppplVar5,&stack0xffffffffffffffef);
      return pppplVar5;
    }
    break;
  case 0x20:
    func_0x00010779e058(param_4);
    func_0x0001077a2a5c();
    if ((bool)uVar4) goto code_r0x00010779e764;
    break;
  case 0x21:
    func_0x0001077a2ad8();
    pppplVar11 = param_5;
    func_0x0001077a2a5c();
    param_5 = param_4;
    if ((bool)uVar4) {
      pppplVar5 = pppplVar5 + 0x9f;
      goto code_r0x00010779e618;
    }
    break;
  case 0x22:
    func_0x0001077a2ad8();
    pppplVar11 = param_5;
    func_0x0001077a2a5c();
    param_5 = param_4;
    if ((bool)uVar4) {
      pppplVar5 = pppplVar5 + 0xae;
      goto code_r0x00010779e484;
    }
    break;
  case 0x23:
    func_0x0001077a2ad8();
    pppplVar11 = param_5;
    func_0x0001077a2a5c();
    param_5 = param_4;
    if ((bool)uVar4) {
      param_4 = pppplVar5 + 0xb5;
      goto code_r0x00010779e714;
    }
    break;
  case 0x24:
    func_0x0001077a2ad8();
    pppplVar11 = param_5;
    func_0x0001077a2a5c();
    param_5 = param_4;
    if ((bool)uVar4) {
      param_4 = pppplVar5 + 0xbc;
      goto code_r0x00010779e714;
    }
    break;
  case 0x25:
    func_0x0001077a2ad8();
    pppplVar11 = param_5;
    func_0x0001077a2a5c();
    param_5 = param_4;
    if ((bool)uVar4) {
      pppplVar5 = pppplVar5 + 0xc3;
      goto code_r0x00010779e878;
    }
    break;
  case 0x26:
    func_0x0001077a2ad8();
    if (*(int *)(pppplVar5 + 0xd0) == 0) goto LAB_10779e860;
    uVar4 = *(int *)(pppplVar5 + 0xd0) == 1;
    if (!(bool)uVar4) {
      pppplVar5 = (long ****)pppplVar5[0xca];
      func_0x0001077a2f18(pppplVar5);
      func_0x0001077a30a0();
      goto code_r0x00010779e8b8;
    }
    pppplVar5 = (long ****)(ulong)*(byte *)(pppplVar5 + 0xca);
    func_0x0001077f2a50();
    param_4 = pppplVar5;
    func_0x0001077a307c();
code_r0x00010779e854:
    func_0x0001077a2ea8();
    uVar16 = 1;
code_r0x00010779e8c0:
    func_0x0001077a31f0(uVar16);
    pppplVar11 = param_5;
    goto LAB_10779e8c4;
  case 0x27:
    func_0x0001077a2ad8();
    if (*(int *)(pppplVar5 + 0xd7) != 0) {
      uVar4 = *(int *)(pppplVar5 + 0xd7) == 1;
      if ((bool)uVar4) {
        uVar4 = *(char *)(pppplVar5 + 0xd1) == '\0';
        param_4 = (long ****)&DAT_10f42a790;
        if ((bool)uVar4) {
          param_4 = (long ****)&DAT_10f42a788;
        }
        func_0x0001077a307c();
        goto code_r0x00010779e854;
      }
      pppplVar5 = (long ****)pppplVar5[0xd1];
      func_0x0001077a2f18(pppplVar5);
      func_0x0001077a30a0();
code_r0x00010779e8b8:
      func_0x0001077a2ea8();
      uVar16 = 2;
      goto code_r0x00010779e8c0;
    }
  default:
LAB_10779e860:
    func_0x0001077a2d50();
    pppplVar11 = param_5;
LAB_10779e8c4:
    func_0x0001077a2a5c();
    param_5 = param_4;
    if ((bool)uVar4) {
      return pppplVar5;
    }
    break;
  case 0x28:
    func_0x0001077a2ad8();
    if (*(int *)(pppplVar5 + 0xde) != 0) {
      uVar4 = *(int *)(pppplVar5 + 0xde) == 1;
      if ((bool)uVar4) {
        pppplVar5 = (long ****)(ulong)*(byte *)(pppplVar5 + 0xd8);
        func_0x0001077f2978();
        param_4 = pppplVar5;
        func_0x0001077a307c();
        goto code_r0x00010779e854;
      }
      pppplVar5 = (long ****)pppplVar5[0xd8];
      func_0x0001077a2f18(pppplVar5);
      func_0x0001077a30a0();
      goto code_r0x00010779e8b8;
    }
    goto LAB_10779e860;
  case 0x29:
    func_0x0001077a2ad8();
    pppplVar11 = param_5;
    func_0x0001077a2a5c();
    param_5 = param_4;
    if ((bool)uVar4) {
      param_4 = pppplVar5 + 0xdf;
      goto code_r0x00010779e714;
    }
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  ppppuVar3 = (undefined ****)auStack_170;
  puStack_78 = &DAT_10779e8dc;
  ppuVar20 = &puStack_80;
  uVar10 = param_6;
  pppplVar5 = param_7;
  puStack_80 = &stack0xfffffffffffffff0;
  func_0x0001077a312c();
  func_0x0001077a2d10();
  ppuVar6 = &PTR_DAT_1109d9f58;
  pppppuVar12 = (undefined *****)&pppplStack_140;
  pppplStack_140 = param_5;
  pppplStack_138 = pppplVar11;
  uStack_b8 = extraout_x8;
  func_0x00010778ebd4();
  if (ppuVar6 == &PTR_DAT_1109da180) {
    *(undefined1 *)param_3 = 0;
    *(undefined1 *)(param_3 + 3) = 0;
    uVar4 = 1;
    ppuVar6 = &PTR_DAT_1109da180;
    goto code_r0x00010779f2cc;
  }
  bVar1 = *(byte *)(ppuVar6 + 1);
  uVar4 = bVar1 == 0x16;
  uVar18 = (uint)bVar1;
  if (bVar1 < 0x17) {
    uVar19 = (uint)bVar1;
    switch(bVar1) {
    default:
      func_0x0001077a2b44();
      func_0x0001077a2cbc();
      func_0x00010733b904();
      if ((bStack_d0 & 1) == 0) {
        func_0x0001077a2ca4();
        if (extraout_x8_01 != 0) {
          func_0x0001077a2d00();
          func_0x0001077a2c80();
          func_0x0001077a2b34();
          func_0x0001077a2c98();
          func_0x0001077a2e6c();
        }
        func_0x0001077a2a08();
      }
      else {
        uVar4 = uVar19 - 0xc == 10;
        switch(uVar19 - 0xc) {
        case 0:
          func_0x0001077a2edc();
          uVar7 = 0;
          pppppuVar12 = (undefined *****)(extraout_x8_00 + 0x168);
          func_0x000107786038();
          if ((uVar7 & 1) == 0) {
            if ((*(long *)(unaff_x20 + 0x10) == 0) ||
               (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
              func_0x0001077a2e0c(*param_7);
              func_0x0001077a2e8c(ppppuStack_130 + 0x2d);
              func_0x0001077a2c8c();
              func_0x0001077a2de4();
            }
            else {
              func_0x0001077a2e8c(*param_7 + 0x2d);
            }
            func_0x0001077a2c28();
            func_0x0001077a2e14();
          }
          break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 9:
code_r0x00010779ea54:
          func_0x00010727e950(appppuStack_108);
          func_0x0001077a2ecc();
          uVar4 = uVar18 - 2 == 0x13;
          switch(uVar18 - 2) {
          case 0:
          case 1:
          case 3:
            goto code_r0x00010779ea84;
          case 0xb:
          case 0xe:
            goto code_r0x00010779eaf4;
          case 0xc:
            goto code_r0x00010779efa4;
          case 0xd:
            goto code_r0x00010779eed0;
          case 0x13:
            goto code_r0x00010779eb7c;
          }
          goto code_r0x00010779ef30;
        case 5:
          func_0x0001077a2edc();
          uVar7 = 0;
          pppppuVar12 = (undefined *****)(extraout_x8_12 + 0x2a0);
          func_0x000107786038();
          if ((uVar7 & 1) == 0) {
            if ((*(long *)(unaff_x20 + 0x10) == 0) ||
               (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
              func_0x0001077a2e0c(*param_7);
              func_0x0001077a2e8c(ppppuStack_130 + 0x54);
              func_0x0001077a2c8c();
              func_0x0001077a2de4();
            }
            else {
              func_0x0001077a2e8c(*param_7 + 0x54);
            }
            func_0x0001077a2c28();
            func_0x0001077a2e14();
          }
          break;
        case 6:
          func_0x0001077a2edc();
          uVar7 = 0;
          pppppuVar12 = (undefined *****)(extraout_x8_11 + 0x2d8);
          func_0x000107786038();
          if ((uVar7 & 1) == 0) {
            if ((*(long *)(unaff_x20 + 0x10) == 0) ||
               (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
              func_0x0001077a2e0c(*param_7);
              func_0x0001077a2e8c(ppppuStack_130 + 0x5b);
              func_0x0001077a2c8c();
              func_0x0001077a2de4();
            }
            else {
              func_0x0001077a2e8c(*param_7 + 0x5b);
            }
            func_0x0001077a2c28();
            func_0x0001077a2e14();
          }
          break;
        case 7:
          func_0x0001077a2edc();
          uVar7 = 0;
          pppppuVar12 = (undefined *****)(extraout_x8_10 + 0x310);
          func_0x000107786038();
          if ((uVar7 & 1) == 0) {
            if ((*(long *)(unaff_x20 + 0x10) == 0) ||
               (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
              func_0x0001077a2e0c(*param_7);
              func_0x0001077a2e8c(ppppuStack_130 + 0x62);
              func_0x0001077a2c8c();
              func_0x0001077a2de4();
            }
            else {
              func_0x0001077a2e8c(*param_7 + 0x62);
            }
            func_0x0001077a2c28();
            func_0x0001077a2e14();
          }
          break;
        case 8:
          func_0x0001077a2edc();
          uVar7 = 0;
          pppppuVar12 = (undefined *****)(extraout_x8_09 + 0x348);
          func_0x000107786038();
          if ((uVar7 & 1) == 0) {
            if ((*(long *)(unaff_x20 + 0x10) == 0) ||
               (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
              func_0x0001077a2e0c(*param_7);
              func_0x0001077a2e8c(ppppuStack_130 + 0x69);
              func_0x0001077a2c8c();
              func_0x0001077a2de4();
            }
            else {
              func_0x0001077a2e8c(*param_7 + 0x69);
            }
            func_0x0001077a2c28();
            func_0x0001077a2e14();
          }
          break;
        case 10:
          func_0x0001077a2edc();
          uVar7 = 0;
          pppppuVar12 = (undefined *****)(extraout_x8_13 + 0x3b8);
          func_0x000107786038();
          if ((uVar7 & 1) == 0) {
            if ((*(long *)(unaff_x20 + 0x10) == 0) ||
               (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
              func_0x0001077a2e0c(*param_7);
              func_0x0001077a2e8c(ppppuStack_130 + 0x77);
              func_0x0001077a2c8c();
              func_0x0001077a2de4();
            }
            else {
              func_0x0001077a2e8c(*param_7 + 0x77);
            }
            func_0x0001077a2c28();
            func_0x0001077a2e14();
          }
          break;
        default:
          uVar4 = uVar19 == 4;
          if ((bool)uVar4) {
            func_0x0001077a2edc();
            uVar7 = 0;
            pppppuVar12 = (undefined *****)(extraout_x8_17 + 0x9f0);
            func_0x000107786038();
            if ((uVar7 & 1) == 0) {
              if ((*(long *)(unaff_x20 + 0x10) == 0) ||
                 (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
                func_0x0001077a2e0c(*param_7);
                func_0x0001077a2fa0(ppppuStack_130 + 0x13e);
                func_0x0001077a2c8c();
                func_0x0001077a2de4();
              }
              else {
                func_0x0001077a2fa0(*param_7 + 0x13e);
              }
              func_0x0001077a2c28();
              func_0x0001077a2e14();
            }
          }
          else {
            uVar4 = uVar19 == 1;
            if ((bool)uVar4) {
              func_0x0001077a2edc();
              uVar7 = 0;
              pppppuVar12 = (undefined *****)(extraout_x8_16 + 0x8c0);
              func_0x000107786038();
              if ((uVar7 & 1) == 0) {
                if ((*(long *)(unaff_x20 + 0x10) == 0) ||
                   (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
                  func_0x0001077a2e0c(*param_7);
                  func_0x0001077a2fa0(ppppuStack_130 + 0x118);
                  func_0x0001077a2c8c();
                  func_0x0001077a2de4();
                }
                else {
                  func_0x0001077a2fa0(*param_7 + 0x118);
                }
                func_0x0001077a2c28();
                func_0x0001077a2e14();
              }
            }
            else {
              if (uVar19 != 0) goto code_r0x00010779ea54;
              func_0x0001077a2edc();
              uVar7 = 0;
              pppppuVar12 = (undefined *****)(extraout_x8_02 + 0x860);
              func_0x000107786038();
              if ((uVar7 & 1) == 0) {
                if ((*(long *)(unaff_x20 + 0x10) == 0) ||
                   (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
                  func_0x0001077a2e0c(*param_7);
                  func_0x0001077a2fa0(ppppuStack_130 + 0x10c);
                  func_0x0001077a2c8c();
                  func_0x0001077a2de4();
                }
                else {
                  func_0x0001077a2fa0(*param_7 + 0x10c);
                }
                func_0x0001077a2c28();
                func_0x0001077a2e14();
              }
            }
          }
        }
        func_0x0001077a2eb4();
      }
      func_0x0001077a3120();
      func_0x00010727e950();
      break;
    case 2:
    case 3:
    case 5:
code_r0x00010779ea84:
      func_0x0001077a2b44();
      func_0x0001077a2cbc();
      func_0x0001073398b8();
      if ((bStack_c8 & 1) == 0) {
        func_0x0001077a2ca4();
        if (extraout_x8_05 != 0) {
          func_0x0001077a2d00();
          func_0x0001077a2c80();
          func_0x0001077a2b34();
          func_0x0001077a2c98();
          func_0x0001077a2e6c();
        }
        func_0x0001077a2a08();
      }
      else {
        uVar4 = uVar19 == 5;
        if ((bool)uVar4) {
          func_0x0001077a2edc();
          uVar7 = 0;
          pppppuVar12 = (undefined *****)(extraout_x8_15 + 0xa50);
          func_0x000107785dfc();
          if ((uVar7 & 1) == 0) {
            if ((*(long *)(unaff_x20 + 0x10) == 0) ||
               (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
              func_0x0001077a2e0c(*param_7);
              func_0x0001077a2fa8(ppppuStack_130 + 0x14a);
              func_0x0001077a2c8c();
              func_0x0001077a2de4();
            }
            else {
              func_0x0001077a2fa8(*param_7 + 0x14a);
            }
            func_0x0001077a2c28();
            func_0x0001077a2e14();
          }
        }
        else {
          uVar4 = uVar19 == 3;
          if ((bool)uVar4) {
            func_0x0001077a2edc();
            uVar7 = 0;
            pppppuVar12 = (undefined *****)(extraout_x8_14 + 0x988);
            func_0x000107785dfc();
            if ((uVar7 & 1) == 0) {
              if ((*(long *)(unaff_x20 + 0x10) == 0) ||
                 (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
                func_0x0001077a2e0c(*param_7);
                func_0x0001077a2fa8(ppppuStack_130 + 0x131);
                func_0x0001077a2c8c();
                func_0x0001077a2de4();
              }
              else {
                func_0x0001077a2fa8(*param_7 + 0x131);
              }
              func_0x0001077a2c28();
              func_0x0001077a2e14();
            }
          }
          else {
            uVar4 = uVar19 == 2;
            if (!(bool)uVar4) {
              func_0x000107339974(appppuStack_108);
              func_0x0001077a2ecc();
              goto code_r0x00010779ef30;
            }
            func_0x0001077a2edc();
            uVar7 = 0;
            pppppuVar12 = (undefined *****)(extraout_x8_03 + 0x920);
            func_0x000107785dfc();
            if ((uVar7 & 1) == 0) {
              if ((*(long *)(unaff_x20 + 0x10) == 0) ||
                 (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
                func_0x0001077a2e0c(*param_7);
                func_0x0001077a2fa8(ppppuStack_130 + 0x124);
                func_0x0001077a2c8c();
                func_0x0001077a2de4();
              }
              else {
                func_0x0001077a2fa8(*param_7 + 0x124);
              }
              func_0x0001077a2c28();
              func_0x0001077a2e14();
            }
          }
        }
        func_0x0001077a2eb4();
      }
      func_0x0001077a3120();
      func_0x000107339974();
      break;
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
      goto code_r0x00010779ef30;
    case 0xd:
    case 0x10:
code_r0x00010779eaf4:
      func_0x0001077a2b44();
      func_0x0001077a2cbc();
      func_0x00010733d400();
      if ((bStack_c0 & 1) == 0) {
        func_0x0001077a2ca4();
        if (extraout_x8_07 != 0) {
          func_0x0001077a2d00();
          func_0x0001077a2c80();
          func_0x0001077a2b34();
          func_0x0001077a2c98();
          func_0x0001077a2e6c();
        }
        func_0x0001077a2a08();
      }
      else {
        uVar4 = uVar18 == 0x10;
        if ((bool)uVar4) {
          pppppuVar12 = appppuStack_108;
          func_0x00010779e0e4();
        }
        else {
          uVar4 = uVar19 == 0xd;
          if (!(bool)uVar4) {
            func_0x00010733d41c(appppuStack_108);
            func_0x0001077a2ecc();
            uVar4 = true;
            if (uVar19 == 0xe) goto code_r0x00010779efa4;
            uVar4 = uVar19 == 0xf;
            if ((bool)uVar4) goto code_r0x00010779eed0;
            goto code_r0x00010779ef30;
          }
          func_0x0001077a2edc();
          uVar7 = 0;
          pppppuVar12 = (undefined *****)(extraout_x8_04 + 0x1a0);
          FUN_107798a18();
          if ((uVar7 & 1) == 0) {
            if ((*(long *)(unaff_x20 + 0x10) == 0) ||
               (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
              func_0x0001077a2e0c(*param_7);
              func_0x0001077a31bc(ppppuStack_130);
              func_0x0001077a2c8c();
              func_0x0001077a2de4();
            }
            else {
              func_0x0001077a31bc(*param_7);
            }
            func_0x0001077a2c28();
            func_0x0001077a2e14();
          }
        }
        func_0x0001077a2eb4();
      }
      func_0x0001077a3120();
      func_0x00010733d41c();
      break;
    case 0xe:
code_r0x00010779efa4:
      func_0x0001077a2b44();
      func_0x0001077a2cbc();
      func_0x00010733e5bc();
      if ((bStack_d0 & 1) != 0) {
        func_0x0001077a2edc();
        uVar7 = 0;
        pppppuVar12 = (undefined *****)(extraout_x8_19 + 0x1e8);
        func_0x000107785b50();
        if ((uVar7 & 1) == 0) {
          if ((*(long *)(unaff_x20 + 0x10) == 0) ||
             (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
            func_0x0001077a2e0c(*param_7);
            func_0x0001077a305c(ppppuStack_130 + 0x3d);
            func_0x0001077a2c8c();
            func_0x0001077a2de4();
          }
          else {
            func_0x0001077a305c(*param_7 + 0x3d);
          }
          func_0x0001077a2c28();
          func_0x0001077a2e14();
        }
        goto code_r0x00010779f160;
      }
      func_0x0001077a2ca4();
      if (extraout_x8_20 != 0) {
        func_0x0001077a2d00();
        func_0x0001077a2c80();
        func_0x0001077a2b34();
        goto code_r0x00010779f030;
      }
code_r0x00010779f038:
      func_0x0001077a2a08();
      goto code_r0x00010779f164;
    case 0xf:
code_r0x00010779eed0:
      func_0x0001077a2ec0();
      ppppuStack_130 = (undefined ****)((ulong)ppppuStack_130 & 0xffffffffffffff00);
      auStack_170[0] = 0;
      func_0x0001077a2cbc();
      func_0x00010733e5bc();
      if ((bStack_d0 & 1) == 0) {
        func_0x0001077a2ca4();
        if (extraout_x8_21 != 0) {
          func_0x0001077a2d00();
          func_0x0001077a2c80();
          func_0x0001077a2b34();
code_r0x00010779f030:
          func_0x0001077a2c98();
          func_0x0001077a2e6c();
        }
        goto code_r0x00010779f038;
      }
      func_0x0001077a2edc();
      uVar7 = 0;
      pppppuVar12 = (undefined *****)(extraout_x8_18 + 0x220);
      func_0x000107785b50();
      if ((uVar7 & 1) == 0) {
        if ((*(long *)(unaff_x20 + 0x10) == 0) || (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0))
        {
          func_0x0001077a2e0c(*param_7);
          func_0x0001077a305c(ppppuStack_130 + 0x44);
          func_0x0001077a2c8c();
          func_0x0001077a2de4();
        }
        else {
          func_0x0001077a305c(*param_7 + 0x44);
        }
        func_0x0001077a2c28();
        func_0x0001077a2e14();
      }
code_r0x00010779f160:
      func_0x0001077a2eb4();
code_r0x00010779f164:
      func_0x0001077a3120();
      func_0x00010733e5d8();
      break;
    case 0x15:
code_r0x00010779eb7c:
      func_0x0001077a2ec0();
      func_0x00010755a164(appppuStack_108,&ppppuStack_130,param_6,appplStack_158,param_7,0,0);
      if ((bStack_d0 & 1) == 0) {
        func_0x0001077a2ca4();
        if (extraout_x8_08 != 0) {
          func_0x0001077a2d00();
          func_0x0001077a2c80();
          func_0x0001077a2b34();
          func_0x0001077a2c98();
          func_0x0001077a2e6c();
        }
        func_0x0001077a2a08();
      }
      else {
        func_0x0001077a2edc();
        pppplVar5 = (long ****)appppuStack_108;
        func_0x0001077a2750(pppplVar5,extraout_x8_06 + 0x380);
        if (((ulong)pppplVar5 & 1) == 0) {
          if ((*(long *)(unaff_x20 + 0x10) == 0) ||
             (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
            func_0x0001077a2e0c(*param_7);
            func_0x0001077a31a4(ppppuStack_130);
            func_0x0001077a2c8c();
            func_0x0001077a2de4();
          }
          else {
            func_0x0001077a31a4(*param_7);
          }
          func_0x0001077a2c28();
          func_0x0001077a2e14();
        }
        func_0x0001077a2eb4();
      }
      func_0x0001077a3120();
      puVar21 = &UNK_10779f18c;
code_r0x0001077a0d68:
      *(long *)((long)ppppuVar3 + -0x20) = unaff_x20;
      *(long *****)((long)ppppuVar3 + -0x18) = param_3;
      *(undefined1 ***)((long)ppppuVar3 + -0x10) = ppuVar20;
      *(undefined **)((long)ppppuVar3 + -8) = puVar21;
      func_0x0001077a2ff4();
      if ((bool)uVar4) {
        func_0x0001077a3214();
      }
      return param_3;
    }
    ppuVar6 = (undefined **)appplStack_158;
    goto code_r0x00010779f2c8;
  }
code_r0x00010779ef30:
  ppppuStack_130 = (undefined ****)0x0;
  uStack_128 = 0;
  uStack_120 = 0;
  pppppuVar12 = &ppppuStack_130;
  func_0x00010754bb48(appppuStack_108,param_6);
  if ((bStack_e0 & 1) == 0) {
    func_0x0001077a300c();
    uVar15 = extraout_w8;
    goto code_r0x00010779f100;
  }
  uVar4 = uVar18 - 6 == 5;
  switch(uVar18 - 6) {
  case 0:
    if ((*(long *)(unaff_x20 + 0x10) != 0) && (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) == 0)) {
      *(undefined1 *)(*(long *)(unaff_x20 + 8) + 0x8b8) = uStack_e8;
      goto code_r0x00010779f36c;
    }
    func_0x0001077a2e38(*(undefined8 *)(unaff_x20 + 8));
    *(undefined1 *)(appplStack_158[0] + 0x117) = uStack_e8;
code_r0x00010779f0e8:
    func_0x0001077a3048();
    extraout_x9[1] = in_register_00005008;
    *extraout_x9 = param_1;
    extraout_x9[3] = in_register_00005028;
    extraout_x9[2] = param_2;
code_r0x00010779f0f0:
    func_0x0001077a3180();
    func_0x0001077a0ca8(appplStack_158);
    break;
  case 1:
    if ((*(long *)(unaff_x20 + 0x10) == 0) || (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
      func_0x0001077a2e38(*(undefined8 *)(unaff_x20 + 8));
      *(undefined1 *)(appplStack_158[0] + 0x123) = uStack_e8;
      goto code_r0x00010779f0e8;
    }
    *(undefined1 *)(*(long *)(unaff_x20 + 8) + 0x918) = uStack_e8;
    goto code_r0x00010779f36c;
  case 2:
    if ((*(long *)(unaff_x20 + 0x10) == 0) || (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
      func_0x0001077a2e38(*(undefined8 *)(unaff_x20 + 8));
      func_0x0001077a3048(appplStack_158[0]);
      func_0x0001077a3248();
      goto code_r0x00010779f0f0;
    }
    func_0x0001077a3048(*(undefined8 *)(unaff_x20 + 8));
    func_0x0001077a3248();
    break;
  case 3:
    if ((*(long *)(unaff_x20 + 0x10) == 0) || (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
      func_0x0001077a2e38(*(undefined8 *)(unaff_x20 + 8));
      *(undefined1 *)(appplStack_158[0] + 0x13d) = uStack_e8;
      goto code_r0x00010779f0e8;
    }
    *(undefined1 *)(*(long *)(unaff_x20 + 8) + 0x9e8) = uStack_e8;
    goto code_r0x00010779f36c;
  case 4:
    if ((*(long *)(unaff_x20 + 0x10) == 0) || (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
      func_0x0001077a2e38(*(undefined8 *)(unaff_x20 + 8));
      *(undefined1 *)(appplStack_158[0] + 0x149) = uStack_e8;
      goto code_r0x00010779f0e8;
    }
    *(undefined1 *)(*(long *)(unaff_x20 + 8) + 0xa48) = uStack_e8;
code_r0x00010779f36c:
    func_0x0001077a3048();
    extraout_x9_00[1] = in_register_00005008;
    *extraout_x9_00 = param_1;
    extraout_x9_00[3] = in_register_00005028;
    extraout_x9_00[2] = param_2;
    break;
  case 5:
    if ((*(long *)(unaff_x20 + 0x10) == 0) || (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
      func_0x0001077a2e38(*(undefined8 *)(unaff_x20 + 8));
      func_0x0001077a3048(appplStack_158[0]);
      func_0x0001077a3234();
      goto code_r0x00010779f0f0;
    }
    func_0x0001077a3048(*(undefined8 *)(unaff_x20 + 8));
    func_0x0001077a3234();
  }
  func_0x0001077a2eb4();
  uVar15 = extraout_w8_00;
code_r0x00010779f100:
  *(undefined1 *)(param_3 + 3) = uVar15;
  ppuVar6 = (undefined **)&ppppuStack_130;
  pppplVar11 = param_7;
code_r0x00010779f2c8:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
code_r0x00010779f2cc:
  func_0x0001077a2ae8(uStack_b8);
  if ((bool)uVar4) {
    return (long ****)ppuVar6;
  }
  ___stack_chk_fail();
  func_0x0001077a2de4();
  func_0x00010727e950(appppuStack_108);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(appplStack_158);
  func_0x0001077a2e74();
  func_0x0001077a312c();
  func_0x0001077a2d10();
  pppplStack_2a0 = pppplVar11;
  uStack_298 = uVar10;
  uStack_1c8 = extraout_x8_22;
  func_0x00010772d2fc(appplStack_270,&pppplStack_2a0);
  ppuVar8 = &PTR_DAT_1109d9b68;
  ppuVar13 = &PTR_DAT_1109d9f58;
  ppppuVar14 = (undefined ****)appplStack_270;
  func_0x000107785358(&PTR_DAT_1109d9b68,&PTR_DAT_1109d9f58);
  uVar4 = ppuVar8 == &PTR_DAT_1109d9f58;
  pppplVar11 = (long ****)ppuVar8;
  if ((bool)uVar4) {
code_r0x00010779f4c4:
    *(undefined1 *)ppuVar6 = 0;
    *(undefined1 *)(ppuVar6 + 3) = 0;
    goto code_r0x0001077a0254;
  }
  pppplVar11 = appplStack_270;
  ppuVar13 = ppuVar8;
  func_0x000107785400(pppplVar11,ppuVar8);
  unaff_x24 = (long ****)ppuVar8;
  if ((int)pppplVar11 != 0) goto code_r0x00010779f4c4;
  bVar1 = *(byte *)(ppuVar8 + 1);
  unaff_x24 = (long ****)(ulong)bVar1;
  uVar4 = bVar1 == 0;
  if ((bool)uVar4) {
    func_0x0001077a2b44();
    func_0x0001077a2b74();
    func_0x0001077848c0();
    if ((bStack_228 & 1) == 0) {
      func_0x0001077a2b5c();
      if (extraout_x8_27 != 0) {
        func_0x0001077a2bf0();
        func_0x0001077a2c80();
        func_0x0001077a2b34();
        func_0x0001077a2c98();
        func_0x0001077a2e6c();
      }
      func_0x0001077a2a08();
    }
    else {
      func_0x0001077a2c70();
      func_0x0001077a2c44();
      func_0x0001077a2e60();
      ppuVar13 = (undefined **)(extraout_x8_25 + 0x988);
      func_0x000107785bfc();
      if (((ulong)pppplVar11 & 1) == 0) {
        if ((*(long *)(unaff_x20 + 0x10) == 0) || (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0))
        {
          func_0x0001077a2e0c(*param_8);
          func_0x0001077a2b0c();
          func_0x0001077a3198();
          func_0x0001077a2c38();
          func_0x0001077a2de4();
        }
        else {
          func_0x0001077a2b20();
          func_0x0001077a3198();
        }
        func_0x0001077a2c28();
        func_0x0001077a2e14();
      }
      func_0x0001077a2eb4();
    }
    func_0x0001077a2f58();
    func_0x00010754e888();
    goto code_r0x0001077a024c;
  }
  bVar2 = (bVar1 & 0xf7) - 3;
  uVar4 = bVar2 == 2;
  uVar18 = (uint)bVar1;
  if (bVar2 < 2) {
code_r0x00010779f518:
    func_0x0001077a2b44();
    func_0x0001077a2b74();
    func_0x00010733b904();
    if ((bStack_238 & 1) == 0) {
      func_0x0001077a2b5c();
      if (extraout_x8_26 != 0) {
        func_0x0001077a2bf0();
        func_0x0001077a2c80();
        func_0x0001077a2b34();
        func_0x0001077a2c98();
        func_0x0001077a2e6c();
      }
      func_0x0001077a2a08();
    }
    else {
      uVar4 = uVar18 - 1 == 0xb;
      switch(uVar18 - 1) {
      case 0:
        func_0x0001077a2c70();
        func_0x0001077a2c44();
        func_0x0001077a2e60();
        ppuVar13 = (undefined **)(extraout_x8_23 + 0x9f8);
        func_0x000107786038();
        if (((ulong)pppplVar11 & 1) == 0) {
          if ((*(long *)(unaff_x20 + 0x10) == 0) ||
             (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
            func_0x0001077a2e0c(*param_8);
            func_0x0001077a2b0c();
            func_0x0001077a2e30(extraout_x8_24 + 0x9f8);
            func_0x0001077a2c38();
            func_0x0001077a2de4();
          }
          else {
            func_0x0001077a2b20();
            func_0x0001077a2e30(extraout_x8_85 + 0x9f8);
          }
          func_0x0001077a2c28();
          func_0x0001077a2e14();
        }
        break;
      case 1:
      case 4:
      case 6:
      case 9:
code_r0x00010779f6bc:
        pppplVar11 = (long ****)0x0;
        func_0x00010727e950();
        func_0x0001077a2ecc();
        uVar4 = uVar18 - 2 == 0x26;
        switch(uVar18 - 2) {
        case 0:
        case 3:
        case 5:
        case 8:
        case 0x1e:
          goto code_r0x00010779f6f0;
        case 0x18:
        case 0x1b:
          goto code_r0x00010779fbac;
        case 0x19:
        case 0x20:
          goto code_r0x00010779fd78;
        case 0x1a:
        case 0x23:
          goto code_r0x00010779fe88;
        case 0x1c:
          goto code_r0x0001077a0008;
        case 0x1d:
        case 0x1f:
          goto code_r0x00010779ff94;
        case 0x24:
          goto code_r0x00010779f9e4;
        case 0x25:
          goto code_r0x00010779fa40;
        case 0x26:
          goto code_r0x00010779fa9c;
        }
        goto code_r0x0001077a00d4;
      case 2:
        func_0x0001077a2c70();
        func_0x0001077a2c44();
        func_0x0001077a2e60();
        ppuVar13 = (undefined **)(extraout_x8_35 + 0xac0);
        func_0x000107786038();
        if (((ulong)pppplVar11 & 1) == 0) {
          if ((*(long *)(unaff_x20 + 0x10) == 0) ||
             (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
            func_0x0001077a2e0c(*param_8);
            func_0x0001077a2b0c();
            func_0x0001077a2e30(extraout_x8_36 + 0xac0);
            func_0x0001077a2c38();
            func_0x0001077a2de4();
          }
          else {
            func_0x0001077a2b20();
            func_0x0001077a2e30(extraout_x8_84 + 0xac0);
          }
          func_0x0001077a2c28();
          func_0x0001077a2e14();
        }
        break;
      case 3:
        func_0x0001077a2c70();
        func_0x0001077a2c44();
        func_0x0001077a2e60();
        ppuVar13 = (undefined **)(extraout_x8_39 + 0xb20);
        func_0x000107786038();
        if (((ulong)pppplVar11 & 1) == 0) {
          if ((*(long *)(unaff_x20 + 0x10) == 0) ||
             (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
            func_0x0001077a2e0c(*param_8);
            func_0x0001077a2b0c();
            func_0x0001077a2e30(extraout_x8_40 + 0xb20);
            func_0x0001077a2c38();
            func_0x0001077a2de4();
          }
          else {
            func_0x0001077a2b20();
            func_0x0001077a2e30(extraout_x8_87 + 0xb20);
          }
          func_0x0001077a2c28();
          func_0x0001077a2e14();
        }
        break;
      case 5:
        func_0x0001077a2c70();
        func_0x0001077a2c44();
        func_0x0001077a2e60();
        ppuVar13 = (undefined **)(extraout_x8_41 + 0xbe8);
        func_0x000107786038();
        if (((ulong)pppplVar11 & 1) == 0) {
          if ((*(long *)(unaff_x20 + 0x10) == 0) ||
             (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
            func_0x0001077a2e0c(*param_8);
            func_0x0001077a2b0c();
            func_0x0001077a2e30(extraout_x8_42 + 0xbe8);
            func_0x0001077a2c38();
            func_0x0001077a2de4();
          }
          else {
            func_0x0001077a2b20();
            func_0x0001077a2e30(extraout_x8_88 + 0xbe8);
          }
          func_0x0001077a2c28();
          func_0x0001077a2e14();
        }
        break;
      case 7:
        func_0x0001077a2c70();
        func_0x0001077a2c44();
        func_0x0001077a2e60();
        ppuVar13 = (undefined **)(extraout_x8_33 + 0xcb0);
        func_0x000107786038();
        if (((ulong)pppplVar11 & 1) == 0) {
          if ((*(long *)(unaff_x20 + 0x10) == 0) ||
             (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
            func_0x0001077a2e0c(*param_8);
            func_0x0001077a2b0c();
            func_0x0001077a2e30(extraout_x8_34 + 0xcb0);
            func_0x0001077a2c38();
            func_0x0001077a2de4();
          }
          else {
            func_0x0001077a2b20();
            func_0x0001077a2e30(extraout_x8_83 + 0xcb0);
          }
          func_0x0001077a2c28();
          func_0x0001077a2e14();
        }
        break;
      case 8:
        func_0x0001077a30d0();
        func_0x00010779e184();
        break;
      case 10:
        func_0x0001077a2c70();
        func_0x0001077a2c44();
        func_0x0001077a2e60();
        ppuVar13 = (undefined **)(extraout_x8_43 + 0xdd8);
        func_0x000107786038();
        if (((ulong)pppplVar11 & 1) == 0) {
          if ((*(long *)(unaff_x20 + 0x10) == 0) ||
             (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
            func_0x0001077a2e0c(*param_8);
            func_0x0001077a2b0c();
            func_0x0001077a2e30(extraout_x8_44 + 0xdd8);
            func_0x0001077a2c38();
            func_0x0001077a2de4();
          }
          else {
            func_0x0001077a2b20();
            func_0x0001077a2e30(extraout_x8_89 + 0xdd8);
          }
          func_0x0001077a2c28();
          func_0x0001077a2e14();
        }
        break;
      case 0xb:
        func_0x0001077a2c70();
        func_0x0001077a2c44();
        func_0x0001077a2e60();
        ppuVar13 = (undefined **)(extraout_x8_37 + 0xe38);
        func_0x000107786038();
        if (((ulong)pppplVar11 & 1) == 0) {
          if ((*(long *)(unaff_x20 + 0x10) == 0) ||
             (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
            func_0x0001077a2e0c(*param_8);
            func_0x0001077a2b0c();
            func_0x0001077a2e30(extraout_x8_38 + 0xe38);
            func_0x0001077a2c38();
            func_0x0001077a2de4();
          }
          else {
            func_0x0001077a2b20();
            func_0x0001077a2e30(extraout_x8_86 + 0xe38);
          }
          func_0x0001077a2c28();
          func_0x0001077a2e14();
        }
        break;
      default:
        uVar4 = uVar18 == 0x23;
        if ((bool)uVar4) {
          func_0x0001077a2c70();
          func_0x0001077a2c44();
          func_0x0001077a2e60();
          ppuVar13 = (undefined **)(extraout_x8_45 + 0x5a8);
          func_0x000107786038();
          if (((ulong)pppplVar11 & 1) == 0) {
            if ((*(long *)(unaff_x20 + 0x10) == 0) ||
               (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
              func_0x0001077a2e0c(*param_8);
              func_0x0001077a2b0c();
              func_0x0001077a2e30(extraout_x8_46 + 0x5a8);
              func_0x0001077a2c38();
              func_0x0001077a2de4();
            }
            else {
              func_0x0001077a2b20();
              func_0x0001077a2e30(extraout_x8_91 + 0x5a8);
            }
            func_0x0001077a2c28();
            func_0x0001077a2e14();
          }
        }
        else {
          uVar4 = uVar18 == 0x24;
          if ((bool)uVar4) {
            func_0x0001077a2c70();
            func_0x0001077a2c44();
            func_0x0001077a2e60();
            ppuVar13 = (undefined **)(extraout_x8_47 + 0x5e0);
            func_0x000107786038();
            if (((ulong)pppplVar11 & 1) == 0) {
              if ((*(long *)(unaff_x20 + 0x10) == 0) ||
                 (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
                func_0x0001077a2e0c(*param_8);
                func_0x0001077a2b0c();
                func_0x0001077a2e30(extraout_x8_48 + 0x5e0);
                func_0x0001077a2c38();
                func_0x0001077a2de4();
              }
              else {
                func_0x0001077a2b20();
                func_0x0001077a2e30(extraout_x8_92 + 0x5e0);
              }
              func_0x0001077a2c28();
              func_0x0001077a2e14();
            }
          }
          else {
            uVar4 = uVar18 == 0x29;
            if (!(bool)uVar4) goto code_r0x00010779f6bc;
            func_0x0001077a2c70();
            func_0x0001077a2c44();
            func_0x0001077a2e60();
            ppuVar13 = (undefined **)(extraout_x8_28 + 0x6f8);
            func_0x000107786038();
            if (((ulong)pppplVar11 & 1) == 0) {
              if ((*(long *)(unaff_x20 + 0x10) == 0) ||
                 (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
                func_0x0001077a2e0c(*param_8);
                func_0x0001077a2b0c();
                func_0x0001077a2e30(extraout_x8_29 + 0x6f8);
                func_0x0001077a2c38();
                func_0x0001077a2de4();
              }
              else {
                func_0x0001077a2b20();
                func_0x0001077a2e30(extraout_x8_90 + 0x6f8);
              }
              func_0x0001077a2c28();
              func_0x0001077a2e14();
            }
          }
        }
      }
      func_0x0001077a2eb4();
    }
    func_0x0001077a2f58();
    func_0x00010727e950();
    goto code_r0x0001077a024c;
  }
  uVar4 = uVar18 - 1 == 0x28;
  switch(uVar18 - 1) {
  case 0:
  case 5:
  case 7:
  case 8:
  case 0x22:
  case 0x23:
  case 0x28:
    goto code_r0x00010779f518;
  case 1:
  case 4:
  case 6:
  case 9:
  case 0x1f:
code_r0x00010779f6f0:
    func_0x0001077a2b44();
    func_0x0001077a2b74();
    func_0x0001073398b8();
    if ((bStack_230 & 1) == 0) {
      func_0x0001077a2b5c();
      if (extraout_x8_32 != 0) {
        func_0x0001077a2bf0();
        func_0x0001077a2c80();
        func_0x0001077a2b34();
        func_0x0001077a2c98();
        func_0x0001077a2e6c();
      }
      func_0x0001077a2a08();
    }
    else {
      uVar4 = uVar18 - 2 == 8;
      switch(uVar18 - 2) {
      case 0:
        func_0x0001077a2c70();
        func_0x0001077a2c44();
        func_0x0001077a2e60();
        ppuVar13 = (undefined **)(extraout_x8_30 + 0xa58);
        func_0x000107785dfc();
        if (((ulong)pppplVar11 & 1) == 0) {
          if ((*(long *)(unaff_x20 + 0x10) == 0) ||
             (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
            func_0x0001077a2e0c(*param_8);
            func_0x0001077a2b0c();
            func_0x0001077a2f34(extraout_x8_31 + 0xa58);
            func_0x0001077a2c38();
            func_0x0001077a2de4();
          }
          else {
            func_0x0001077a2b20();
            func_0x0001077a2f34(extraout_x8_x00106 + 0xa58);
          }
          func_0x0001077a2c28();
          func_0x0001077a2e14();
        }
        break;
      case 1:
      case 2:
      case 4:
      case 6:
      case 7:
code_r0x00010779fb78:
        pppplVar11 = (long ****)0x0;
        func_0x000107339974();
        func_0x0001077a2ecc();
        uVar4 = bVar1 - 0x1a == 5;
        switch(bVar1 - 0x1a) {
        case 0:
        case 3:
          goto code_r0x00010779fbac;
        case 1:
          goto code_r0x00010779fd78;
        case 2:
          goto code_r0x00010779fe88;
        case 4:
          goto code_r0x0001077a0008;
        case 5:
          goto code_r0x00010779ff94;
        }
        goto code_r0x0001077a00d4;
      case 3:
        func_0x0001077a2c70();
        func_0x0001077a2c44();
        func_0x0001077a2e60();
        ppuVar13 = (undefined **)(extraout_x8_62 + 0xb80);
        func_0x000107785dfc();
        if (((ulong)pppplVar11 & 1) == 0) {
          if ((*(long *)(unaff_x20 + 0x10) == 0) ||
             (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
            func_0x0001077a2e0c(*param_8);
            func_0x0001077a2b0c();
            func_0x0001077a2f34(extraout_x8_63 + 0xb80);
            func_0x0001077a2c38();
            func_0x0001077a2de4();
          }
          else {
            func_0x0001077a2b20();
            func_0x0001077a2f34(extraout_x8_x00108 + 0xb80);
          }
          func_0x0001077a2c28();
          func_0x0001077a2e14();
        }
        break;
      case 5:
        func_0x0001077a2c70();
        func_0x0001077a2c44();
        func_0x0001077a2e60();
        ppuVar13 = (undefined **)(extraout_x8_58 + 0xc48);
        func_0x000107785dfc();
        if (((ulong)pppplVar11 & 1) == 0) {
          if ((*(long *)(unaff_x20 + 0x10) == 0) ||
             (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
            func_0x0001077a2e0c(*param_8);
            func_0x0001077a2b0c();
            func_0x0001077a2f34(extraout_x8_59 + 0xc48);
            func_0x0001077a2c38();
            func_0x0001077a2de4();
          }
          else {
            func_0x0001077a2b20();
            func_0x0001077a2f34(extraout_x8_x00105 + 0xc48);
          }
          func_0x0001077a2c28();
          func_0x0001077a2e14();
        }
        break;
      case 8:
        func_0x0001077a2c70();
        func_0x0001077a2c44();
        func_0x0001077a2e60();
        ppuVar13 = (undefined **)(extraout_x8_60 + 0xd70);
        func_0x000107785dfc();
        if (((ulong)pppplVar11 & 1) == 0) {
          if ((*(long *)(unaff_x20 + 0x10) == 0) ||
             (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
            func_0x0001077a2e0c(*param_8);
            func_0x0001077a2b0c();
            func_0x0001077a2f34(extraout_x8_61 + 0xd70);
            func_0x0001077a2c38();
            func_0x0001077a2de4();
          }
          else {
            func_0x0001077a2b20();
            func_0x0001077a2f34(extraout_x8_x00107 + 0xd70);
          }
          func_0x0001077a2c28();
          func_0x0001077a2e14();
        }
        break;
      default:
        uVar4 = uVar18 == 0x20;
        if (!(bool)uVar4) goto code_r0x00010779fb78;
        func_0x0001077a30d0();
        func_0x00010779e078();
      }
      func_0x0001077a2eb4();
    }
    func_0x0001077a2f58();
    func_0x000107339974();
    break;
  default:
code_r0x0001077a00d4:
    ppplStack_290 = (long ***)0x0;
    uStack_288 = 0;
    uStack_280 = 0;
    ppuVar13 = (undefined **)&ppplStack_290;
    ppppuVar14 = param_8;
    func_0x00010754bb48(appplStack_270,pppplVar5,ppuVar13);
    if ((bStack_248 & 1) == 0) {
      func_0x0001077a300c();
      uVar15 = extraout_w8_01;
      goto code_r0x0001077a04a4;
    }
    uVar4 = uVar18 - 0xd == 0xc;
    switch(uVar18 - 0xd) {
    case 0:
      if ((*(long *)(unaff_x20 + 0x10) == 0) || (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
        func_0x0001077a2e38(*(undefined8 *)(unaff_x20 + 8));
        func_0x0001077a2bac();
        *(long ****)(extraout_x8_82 + 0x9e8) = in_register_00005028;
        *(long ****)(extraout_x8_82 + 0x9e0) = param_2;
        *(undefined1 *)(extraout_x8_82 + 0x9f0) = extraout_w9;
        *(long ****)(extraout_x8_82 + 0x9d8) = in_register_00005008;
        *(long ****)(extraout_x8_82 + 0x9d0) = param_1;
code_r0x0001077a0494:
        func_0x0001077a3180();
        func_0x0001077a0ca8(appplStack_2b8);
      }
      else {
        func_0x0001077a2b90();
        *(undefined1 *)(extraout_x8_x00124 + 0x9f0) = extraout_w9_08;
        *(long ****)(extraout_x8_x00124 + 0x9e8) = in_register_00005028;
        *(long ****)(extraout_x8_x00124 + 0x9e0) = param_2;
        *(long ****)(extraout_x8_x00124 + 0x9d8) = in_register_00005008;
        *(long ****)(extraout_x8_x00124 + 0x9d0) = param_1;
      }
      break;
    case 1:
      if ((*(long *)(unaff_x20 + 0x10) == 0) || (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
        func_0x0001077a2e38(*(undefined8 *)(unaff_x20 + 8));
        func_0x0001077a2bac();
        *(long ****)(extraout_x8_x00100 + 0xa48) = in_register_00005028;
        *(long ****)(extraout_x8_x00100 + 0xa40) = param_2;
        *(undefined1 *)(extraout_x8_x00100 + 0xa50) = extraout_w9_02;
        *(long ****)(extraout_x8_x00100 + 0xa38) = in_register_00005008;
        *(long ****)(extraout_x8_x00100 + 0xa30) = param_1;
        goto code_r0x0001077a0494;
      }
      func_0x0001077a2b90();
      *(undefined1 *)(extraout_x8_x00125 + 0xa50) = extraout_w9_09;
      *(long ****)(extraout_x8_x00125 + 0xa48) = in_register_00005028;
      *(long ****)(extraout_x8_x00125 + 0xa40) = param_2;
      *(long ****)(extraout_x8_x00125 + 0xa38) = in_register_00005008;
      *(long ****)(extraout_x8_x00125 + 0xa30) = param_1;
      break;
    case 2:
      if ((*(long *)(unaff_x20 + 0x10) == 0) || (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
        func_0x0001077a2e38(*(undefined8 *)(unaff_x20 + 8));
        func_0x0001077a2c14();
        func_0x0001077a2f0c();
        *(undefined1 *)(extraout_x8_97 + 0xab8) = extraout_w10_01;
        lVar17 = extraout_x9_03;
code_r0x0001077a03ac:
        *(long ****)(lVar17 + 0x48) = in_register_00005008;
        *(long ****)(lVar17 + 0x40) = param_1;
        *(long ****)(lVar17 + 0x58) = in_register_00005028;
        *(long ****)(lVar17 + 0x50) = param_2;
        goto code_r0x0001077a0494;
      }
      func_0x0001077a2c00();
      func_0x0001077a2f0c();
      *(undefined1 *)(extraout_x8_x00121 + 0xab8) = extraout_w10_07;
      lVar17 = extraout_x9_09;
      goto code_r0x0001077a06fc;
    case 3:
      if ((*(long *)(unaff_x20 + 0x10) == 0) || (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
        func_0x0001077a2e38(*(undefined8 *)(unaff_x20 + 8));
        func_0x0001077a2c14();
        func_0x0001077a2f0c();
        *(undefined1 *)(extraout_x8_98 + 0xb18) = extraout_w10_02;
        lVar17 = extraout_x9_04;
code_r0x0001077a048c:
        *(long ****)(lVar17 + 0x50) = in_register_00005028;
        *(long ****)(lVar17 + 0x48) = param_2;
        *(long ****)(lVar17 + 0x40) = in_register_00005008;
        *(long ****)(lVar17 + 0x38) = param_1;
        goto code_r0x0001077a0494;
      }
      func_0x0001077a2c00();
      func_0x0001077a2f0c();
      *(undefined1 *)(extraout_x8_x00122 + 0xb18) = extraout_w10_08;
      lVar17 = extraout_x9_10;
      goto code_r0x0001077a0778;
    case 4:
      if ((*(long *)(unaff_x20 + 0x10) == 0) || (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
        func_0x0001077a2e38(*(undefined8 *)(unaff_x20 + 8));
        func_0x0001077a2c14();
        func_0x0001077a2f0c();
        *(undefined1 *)(extraout_x8_94 + 0xb78) = extraout_w10;
        lVar17 = extraout_x9_01;
        goto code_r0x0001077a048c;
      }
      func_0x0001077a2c00();
      func_0x0001077a2f0c();
      *(undefined1 *)(extraout_x8_x00118 + 0xb78) = extraout_w10_05;
      lVar17 = extraout_x9_07;
      goto code_r0x0001077a0778;
    case 5:
      if ((*(long *)(unaff_x20 + 0x10) == 0) || (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
        func_0x0001077a2e38(*(undefined8 *)(unaff_x20 + 8));
        func_0x0001077a2bac();
        *(long ****)(extraout_x8_x00101 + 0xbd8) = in_register_00005028;
        *(long ****)(extraout_x8_x00101 + 0xbd0) = param_2;
        *(undefined1 *)(extraout_x8_x00101 + 0xbe0) = extraout_w9_03;
        *(long ****)(extraout_x8_x00101 + 0xbc8) = in_register_00005008;
        *(long ****)(extraout_x8_x00101 + 0xbc0) = param_1;
        goto code_r0x0001077a0494;
      }
      func_0x0001077a2b90();
      *(undefined1 *)(extraout_x8_x00126 + 0xbe0) = extraout_w9_10;
      *(long ****)(extraout_x8_x00126 + 0xbd8) = in_register_00005028;
      *(long ****)(extraout_x8_x00126 + 0xbd0) = param_2;
      *(long ****)(extraout_x8_x00126 + 0xbc8) = in_register_00005008;
      *(long ****)(extraout_x8_x00126 + 0xbc0) = param_1;
      break;
    case 6:
      if ((*(long *)(unaff_x20 + 0x10) == 0) || (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
        func_0x0001077a2e38(*(undefined8 *)(unaff_x20 + 8));
        func_0x0001077a2bac();
        *(long ****)(extraout_x8_x00102 + 0xc38) = in_register_00005028;
        *(long ****)(extraout_x8_x00102 + 0xc30) = param_2;
        *(undefined1 *)(extraout_x8_x00102 + 0xc40) = extraout_w9_04;
        *(long ****)(extraout_x8_x00102 + 0xc28) = in_register_00005008;
        *(long ****)(extraout_x8_x00102 + 0xc20) = param_1;
        goto code_r0x0001077a0494;
      }
      func_0x0001077a2b90();
      *(undefined1 *)(extraout_x8_x00127 + 0xc40) = extraout_w9_11;
      *(long ****)(extraout_x8_x00127 + 0xc38) = in_register_00005028;
      *(long ****)(extraout_x8_x00127 + 0xc30) = param_2;
      *(long ****)(extraout_x8_x00127 + 0xc28) = in_register_00005008;
      *(long ****)(extraout_x8_x00127 + 0xc20) = param_1;
      break;
    case 7:
      if ((*(long *)(unaff_x20 + 0x10) == 0) || (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
        func_0x0001077a2e38(*(undefined8 *)(unaff_x20 + 8));
        func_0x0001077a2c14();
        func_0x0001077a2f0c();
        *(undefined1 *)(extraout_x8_99 + 0xca8) = extraout_w10_03;
        lVar17 = extraout_x9_05;
        goto code_r0x0001077a03ac;
      }
      func_0x0001077a2c00();
      func_0x0001077a2f0c();
      *(undefined1 *)(extraout_x8_x00123 + 0xca8) = extraout_w10_09;
      lVar17 = extraout_x9_11;
code_r0x0001077a06fc:
      *(long ****)(lVar17 + 0x48) = in_register_00005008;
      *(long ****)(lVar17 + 0x40) = param_1;
      *(long ****)(lVar17 + 0x58) = in_register_00005028;
      *(long ****)(lVar17 + 0x50) = param_2;
      break;
    case 8:
      if ((*(long *)(unaff_x20 + 0x10) == 0) || (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
        func_0x0001077a2e38(*(undefined8 *)(unaff_x20 + 8));
        func_0x0001077a2c14();
        func_0x0001077a2f0c();
        *(undefined1 *)(extraout_x8_x00104 + 0xd08) = extraout_w10_04;
        lVar17 = extraout_x9_06;
        goto code_r0x0001077a048c;
      }
      func_0x0001077a2c00();
      func_0x0001077a2f0c();
      *(undefined1 *)(extraout_x8_x00129 + 0xd08) = extraout_w10_10;
      lVar17 = extraout_x9_12;
      goto code_r0x0001077a0778;
    case 9:
      if ((*(long *)(unaff_x20 + 0x10) == 0) || (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
        func_0x0001077a2e38(*(undefined8 *)(unaff_x20 + 8));
        func_0x0001077a2c14();
        func_0x0001077a2f0c();
        *(undefined1 *)(extraout_x8_96 + 0xd68) = extraout_w10_00;
        lVar17 = extraout_x9_02;
        goto code_r0x0001077a048c;
      }
      func_0x0001077a2c00();
      func_0x0001077a2f0c();
      *(undefined1 *)(extraout_x8_x00120 + 0xd68) = extraout_w10_06;
      lVar17 = extraout_x9_08;
code_r0x0001077a0778:
      *(long ****)(lVar17 + 0x50) = in_register_00005028;
      *(long ****)(lVar17 + 0x48) = param_2;
      *(long ****)(lVar17 + 0x40) = in_register_00005008;
      *(long ****)(lVar17 + 0x38) = param_1;
      break;
    case 10:
      if ((*(long *)(unaff_x20 + 0x10) == 0) || (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
        func_0x0001077a2e38(*(undefined8 *)(unaff_x20 + 8));
        func_0x0001077a2bac();
        *(long ****)(extraout_x8_x00103 + 0xdc8) = in_register_00005028;
        *(long ****)(extraout_x8_x00103 + 0xdc0) = param_2;
        *(undefined1 *)(extraout_x8_x00103 + 0xdd0) = extraout_w9_05;
        *(long ****)(extraout_x8_x00103 + 0xdb8) = in_register_00005008;
        *(long ****)(extraout_x8_x00103 + 0xdb0) = param_1;
        goto code_r0x0001077a0494;
      }
      func_0x0001077a2b90();
      *(undefined1 *)(extraout_x8_x00128 + 0xdd0) = extraout_w9_12;
      *(long ****)(extraout_x8_x00128 + 0xdc8) = in_register_00005028;
      *(long ****)(extraout_x8_x00128 + 0xdc0) = param_2;
      *(long ****)(extraout_x8_x00128 + 0xdb8) = in_register_00005008;
      *(long ****)(extraout_x8_x00128 + 0xdb0) = param_1;
      break;
    case 0xb:
      if ((*(long *)(unaff_x20 + 0x10) == 0) || (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
        func_0x0001077a2e38(*(undefined8 *)(unaff_x20 + 8));
        func_0x0001077a2bac();
        *(long ****)(extraout_x8_93 + 0xe28) = in_register_00005028;
        *(long ****)(extraout_x8_93 + 0xe20) = param_2;
        *(undefined1 *)(extraout_x8_93 + 0xe30) = extraout_w9_00;
        *(long ****)(extraout_x8_93 + 0xe18) = in_register_00005008;
        *(long ****)(extraout_x8_93 + 0xe10) = param_1;
        goto code_r0x0001077a0494;
      }
      func_0x0001077a2b90();
      *(undefined1 *)(extraout_x8_x00117 + 0xe30) = extraout_w9_06;
      *(long ****)(extraout_x8_x00117 + 0xe28) = in_register_00005028;
      *(long ****)(extraout_x8_x00117 + 0xe20) = param_2;
      *(long ****)(extraout_x8_x00117 + 0xe18) = in_register_00005008;
      *(long ****)(extraout_x8_x00117 + 0xe10) = param_1;
      break;
    case 0xc:
      if ((*(long *)(unaff_x20 + 0x10) == 0) || (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
        func_0x0001077a2e38(*(undefined8 *)(unaff_x20 + 8));
        func_0x0001077a2bac();
        *(long ****)(extraout_x8_95 + 0xe88) = in_register_00005028;
        *(long ****)(extraout_x8_95 + 0xe80) = param_2;
        *(undefined1 *)(extraout_x8_95 + 0xe90) = extraout_w9_01;
        *(long ****)(extraout_x8_95 + 0xe78) = in_register_00005008;
        *(long ****)(extraout_x8_95 + 0xe70) = param_1;
        goto code_r0x0001077a0494;
      }
      func_0x0001077a2b90();
      *(undefined1 *)(extraout_x8_x00119 + 0xe90) = extraout_w9_07;
      *(long ****)(extraout_x8_x00119 + 0xe88) = in_register_00005028;
      *(long ****)(extraout_x8_x00119 + 0xe80) = param_2;
      *(long ****)(extraout_x8_x00119 + 0xe78) = in_register_00005008;
      *(long ****)(extraout_x8_x00119 + 0xe70) = param_1;
    }
    func_0x0001077a2eb4();
    uVar15 = extraout_w8_02;
code_r0x0001077a04a4:
    *(undefined1 *)(ppuVar6 + 3) = uVar15;
    pppplVar11 = &ppplStack_290;
    goto code_r0x0001077a0250;
  case 0x19:
  case 0x1c:
code_r0x00010779fbac:
    func_0x0001077a2b44();
    func_0x0001077a2b74();
    func_0x00010733e5bc();
    if ((bStack_238 & 1) == 0) {
      func_0x0001077a2b5c();
      if (extraout_x8_57 != 0) {
        func_0x0001077a2bf0();
        func_0x0001077a2c80();
        func_0x0001077a2b34();
        goto code_r0x00010779ff14;
      }
      goto code_r0x00010779ff1c;
    }
    uVar4 = bVar1 == 0x1d;
    if ((bool)uVar4) {
      func_0x0001077a2c70();
      func_0x0001077a2c44();
      func_0x0001077a2e60();
      ppuVar13 = (undefined **)(extraout_x8_64 + 0x368);
      func_0x000107785b50();
      if (((ulong)pppplVar11 & 1) == 0) {
        if ((*(long *)(unaff_x20 + 0x10) == 0) || (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0))
        {
          func_0x0001077a2e0c(*param_8);
          func_0x0001077a2b0c();
          func_0x0001077a2f2c(extraout_x8_65 + 0x368);
          func_0x0001077a2c38();
          func_0x0001077a2de4();
        }
        else {
          func_0x0001077a2b20();
          func_0x0001077a2f2c(extraout_x8_x00116 + 0x368);
        }
        func_0x0001077a2c28();
        func_0x0001077a2e14();
      }
    }
    else {
      uVar4 = bVar1 == 0x1a;
      if (!(bool)uVar4) {
        pppplVar11 = (long ****)0x0;
        func_0x00010733e5d8();
        func_0x0001077a2ecc();
        uVar4 = true;
        if (bVar1 == 0x1b) goto code_r0x00010779fd78;
        uVar4 = bVar1 == 0x1c;
        if ((bool)uVar4) goto code_r0x00010779fe88;
        goto code_r0x0001077a00d4;
      }
      func_0x0001077a2c70();
      func_0x0001077a2c44();
      func_0x0001077a2e60();
      ppuVar13 = (undefined **)(extraout_x8_55 + 0x2c0);
      func_0x000107785b50();
      if (((ulong)pppplVar11 & 1) == 0) {
        if ((*(long *)(unaff_x20 + 0x10) == 0) || (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0))
        {
          func_0x0001077a2e0c(*param_8);
          func_0x0001077a2b0c();
          func_0x0001077a2f2c(extraout_x8_56 + 0x2c0);
          func_0x0001077a2c38();
          func_0x0001077a2de4();
        }
        else {
          func_0x0001077a2b20();
          func_0x0001077a2f2c(extraout_x8_x00115 + 0x2c0);
        }
        func_0x0001077a2c28();
        func_0x0001077a2e14();
      }
    }
code_r0x0001077a0664:
    func_0x0001077a2eb4();
    goto code_r0x0001077a0668;
  case 0x1a:
  case 0x21:
code_r0x00010779fd78:
    func_0x0001077a2b44();
    func_0x0001077a2b74();
    func_0x00010733ba0c();
    if ((bStack_238 & 1) == 0) {
      func_0x0001077a2b5c();
      if (extraout_x8_68 != 0) {
        func_0x0001077a2bf0();
        func_0x0001077a2c80();
        func_0x0001077a2b34();
        func_0x0001077a2c98();
        func_0x0001077a2e6c();
      }
      func_0x0001077a2a08();
    }
    else {
      uVar4 = bVar1 == 0x22;
      if ((bool)uVar4) {
        func_0x0001077a2c70();
        func_0x0001077a2c44();
        func_0x0001077a2e60();
        ppuVar13 = (undefined **)(extraout_x8_69 + 0x570);
        func_0x0001077a21dc();
        if (((ulong)pppplVar11 & 1) == 0) {
          if ((*(long *)(unaff_x20 + 0x10) == 0) ||
             (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
            func_0x0001077a2e0c(*param_8);
            func_0x0001077a2b0c();
            func_0x0001077a3084(extraout_x8_70 + 0x570);
            func_0x0001077a2c38();
            func_0x0001077a2de4();
          }
          else {
            func_0x0001077a2b20();
            func_0x0001077a3084(extraout_x8_x00114 + 0x570);
          }
          func_0x0001077a2c28();
          func_0x0001077a2e14();
        }
      }
      else {
        uVar4 = bVar1 == 0x1b;
        if (!(bool)uVar4) {
          pppplVar11 = (long ****)0x0;
          func_0x00010733bad0();
          func_0x0001077a2ecc();
          uVar4 = bVar1 - 0x1c == 5;
          switch(bVar1 - 0x1c) {
          case 0:
            goto code_r0x00010779fe88;
          case 2:
            goto code_r0x0001077a0008;
          case 3:
          case 5:
            goto code_r0x00010779ff94;
          }
          goto code_r0x0001077a00d4;
        }
        func_0x0001077a2c70();
        func_0x0001077a2c44();
        func_0x0001077a2e60();
        ppuVar13 = (undefined **)(extraout_x8_66 + 0x2f8);
        func_0x0001077a21dc();
        if (((ulong)pppplVar11 & 1) == 0) {
          if ((*(long *)(unaff_x20 + 0x10) == 0) ||
             (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
            func_0x0001077a2e0c(*param_8);
            func_0x0001077a2b0c();
            func_0x0001077a3084(extraout_x8_67 + 0x2f8);
            func_0x0001077a2c38();
            func_0x0001077a2de4();
          }
          else {
            func_0x0001077a2b20();
            func_0x0001077a3084(extraout_x8_x00113 + 0x2f8);
          }
          func_0x0001077a2c28();
          func_0x0001077a2e14();
        }
      }
      func_0x0001077a2eb4();
    }
    func_0x0001077a2f58();
    func_0x00010733bad0();
    break;
  case 0x1b:
  case 0x24:
code_r0x00010779fe88:
    func_0x0001077a2ec0();
    ppplStack_290 = (long ***)((ulong)ppplStack_290 & 0xffffffffffffff00);
    func_0x0001077a2b74();
    func_0x00010733e5bc();
    if ((bStack_238 & 1) != 0) {
      uVar4 = bVar1 == 0x25;
      if ((bool)uVar4) {
        func_0x0001077a2c70();
        func_0x0001077a2c44();
        func_0x0001077a2e60();
        ppuVar13 = (undefined **)(extraout_x8_74 + 0x618);
        func_0x000107785b50();
        if (((ulong)pppplVar11 & 1) == 0) {
          if ((*(long *)(unaff_x20 + 0x10) == 0) ||
             (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
            func_0x0001077a2e0c(*param_8);
            func_0x0001077a2b0c();
            func_0x0001077a2f2c(extraout_x8_75 + 0x618);
            func_0x0001077a2c38();
            func_0x0001077a2de4();
          }
          else {
            func_0x0001077a2b20();
            func_0x0001077a2f2c(extraout_x8_x00112 + 0x618);
          }
          func_0x0001077a2c28();
          func_0x0001077a2e14();
        }
      }
      else {
        uVar4 = bVar1 == 0x1c;
        if (!(bool)uVar4) {
          pppplVar11 = (long ****)0x0;
          func_0x00010733e5d8();
          func_0x0001077a2ecc();
          uVar4 = true;
          if (bVar1 == 0x1e) goto code_r0x0001077a0008;
          uVar4 = true;
          if ((bVar1 == 0x1f) || (uVar4 = bVar1 == 0x21, (bool)uVar4)) goto code_r0x00010779ff94;
          goto code_r0x0001077a00d4;
        }
        func_0x0001077a2c70();
        func_0x0001077a2c44();
        func_0x0001077a2e60();
        ppuVar13 = (undefined **)(extraout_x8_71 + 0x330);
        func_0x000107785b50();
        if (((ulong)pppplVar11 & 1) == 0) {
          if ((*(long *)(unaff_x20 + 0x10) == 0) ||
             (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
            func_0x0001077a2e0c(*param_8);
            func_0x0001077a2b0c();
            func_0x0001077a2f2c(extraout_x8_72 + 0x330);
            func_0x0001077a2c38();
            func_0x0001077a2de4();
          }
          else {
            func_0x0001077a2b20();
            func_0x0001077a2f2c(extraout_x8_x00111 + 0x330);
          }
          func_0x0001077a2c28();
          func_0x0001077a2e14();
        }
      }
      goto code_r0x0001077a0664;
    }
    func_0x0001077a2b5c();
    if (extraout_x8_73 != 0) {
      func_0x0001077a2bf0();
      func_0x0001077a2c80();
      func_0x0001077a2b34();
code_r0x00010779ff14:
      func_0x0001077a2c98();
      func_0x0001077a2e6c();
    }
code_r0x00010779ff1c:
    func_0x0001077a2a08();
code_r0x0001077a0668:
    func_0x0001077a2f58();
    func_0x00010733e5d8();
    break;
  case 0x1d:
code_r0x0001077a0008:
    func_0x0001077a2b44();
    func_0x0001077a2b74();
    func_0x0001077848dc();
    if ((bStack_1d0 & 1) == 0) {
      func_0x0001077a2b5c();
      if (extraout_x8_79 != 0) {
        func_0x0001077a2bf0();
        func_0x0001077a2c80();
        func_0x0001077a2b34();
        func_0x0001077a2c98();
        func_0x0001077a2e6c();
      }
      func_0x0001077a2a08();
    }
    else {
      func_0x0001077a30d0();
      func_0x00010779dfec();
      func_0x0001077a2eb4();
    }
    func_0x0001077a2f58();
    func_0x00010754f474();
    break;
  case 0x1e:
  case 0x20:
code_r0x00010779ff94:
    func_0x0001077a2b44();
    func_0x0001077a2b74();
    func_0x000107323db4();
    if ((bStack_1f8 & 1) == 0) {
      func_0x0001077a2b5c();
      if (extraout_x8_78 != 0) {
        func_0x0001077a2bf0();
        func_0x0001077a2c80();
        func_0x0001077a2b34();
        func_0x0001077a2c98();
        func_0x0001077a2e6c();
      }
      func_0x0001077a2a08();
    }
    else {
      uVar4 = bVar1 == 0x21;
      if ((bool)uVar4) {
        func_0x0001077a2c70();
        func_0x0001077a2c44();
        func_0x0001077a2e60();
        ppuVar13 = (undefined **)(extraout_x8_80 + 0x4f8);
        func_0x00010778be7c();
        if (((ulong)pppplVar11 & 1) == 0) {
          if ((*(long *)(unaff_x20 + 0x10) == 0) ||
             (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
            func_0x0001077a2e0c(*param_8);
            func_0x0001077a2b0c();
            func_0x0001077a3054(extraout_x8_81 + 0x500);
            func_0x0001077a2c38();
            func_0x0001077a2de4();
          }
          else {
            func_0x0001077a2b20();
            func_0x0001077a3054(extraout_x8_x00110 + 0x500);
          }
          func_0x0001077a2c28();
          func_0x0001077a2e14();
        }
      }
      else {
        uVar4 = bVar1 == 0x1f;
        if (!(bool)uVar4) {
          func_0x00010732493c(appplStack_270);
          func_0x0001077a2ecc();
          goto code_r0x0001077a00d4;
        }
        func_0x0001077a2c70();
        func_0x0001077a2c44();
        func_0x0001077a2e60();
        ppuVar13 = (undefined **)(extraout_x8_76 + 0x440);
        func_0x00010778be7c();
        if (((ulong)pppplVar11 & 1) == 0) {
          if ((*(long *)(unaff_x20 + 0x10) == 0) ||
             (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0)) {
            func_0x0001077a2e0c(*param_8);
            func_0x0001077a2b0c();
            func_0x0001077a3054(extraout_x8_77 + 0x448);
            func_0x0001077a2c38();
            func_0x0001077a2de4();
          }
          else {
            func_0x0001077a2b20();
            func_0x0001077a3054(extraout_x8_x00109 + 0x448);
          }
          func_0x0001077a2c28();
          func_0x0001077a2e14();
        }
      }
      func_0x0001077a2eb4();
    }
    func_0x0001077a2f58();
    func_0x00010732493c();
    break;
  case 0x25:
code_r0x00010779f9e4:
    func_0x0001077a2ec0();
    func_0x0001077a2dec();
    func_0x00010755a524();
    if ((bStack_238 & 1) == 0) {
      func_0x0001077a2b5c();
      if (extraout_x8_52 != 0) {
        func_0x0001077a2bf0();
        func_0x0001077a2c80();
        func_0x0001077a2b34();
        func_0x0001077a2c98();
        func_0x0001077a2e6c();
      }
      func_0x0001077a2a08();
    }
    else {
      func_0x0001077a3110();
      func_0x0001077a2ddc();
      func_0x0001077a2e60();
      ppuVar13 = (undefined **)(extraout_x8_49 + 0x650);
      func_0x0001077a2360();
      if (((ulong)pppplVar11 & 1) == 0) {
        if ((*(long *)(unaff_x20 + 0x10) == 0) || (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0))
        {
          func_0x0001077a2e0c(*param_8);
          func_0x0001077a2e50(ppplStack_290);
          func_0x0001077a23ac();
          func_0x0001077a2c38();
          func_0x0001077a2de4();
        }
        else {
          func_0x0001077a2e50(*param_8);
          func_0x0001077a23ac();
        }
        func_0x0001077a2c28();
        func_0x0001077a2e14();
      }
      func_0x0001077a2eb4();
    }
    func_0x0001077a2f58();
    func_0x0001077a0d8c();
    break;
  case 0x26:
code_r0x00010779fa40:
    func_0x0001077a2ec0();
    func_0x0001077a2dec();
    func_0x00010755a340();
    if ((bStack_238 & 1) == 0) {
      func_0x0001077a2b5c();
      if (extraout_x8_53 != 0) {
        func_0x0001077a2bf0();
        func_0x0001077a2c80();
        func_0x0001077a2b34();
        func_0x0001077a2c98();
        func_0x0001077a2e6c();
      }
      func_0x0001077a2a08();
    }
    else {
      func_0x0001077a3110();
      func_0x0001077a2ddc();
      func_0x0001077a2e60();
      ppuVar13 = (undefined **)(extraout_x8_50 + 0x688);
      func_0x0001077a24b0();
      if (((ulong)pppplVar11 & 1) == 0) {
        if ((*(long *)(unaff_x20 + 0x10) == 0) || (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0))
        {
          func_0x0001077a2e0c(*param_8);
          func_0x0001077a2e50(ppplStack_290);
          func_0x0001077a24fc();
          func_0x0001077a2c38();
          func_0x0001077a2de4();
        }
        else {
          func_0x0001077a2e50(*param_8);
          func_0x0001077a24fc();
        }
        func_0x0001077a2c28();
        func_0x0001077a2e14();
      }
      func_0x0001077a2eb4();
    }
    func_0x0001077a2f58();
    func_0x0001077a0db4();
    break;
  case 0x27:
code_r0x00010779fa9c:
    func_0x0001077a2ec0();
    func_0x0001077a2dec();
    func_0x00010755a700();
    if ((bStack_238 & 1) == 0) {
      func_0x0001077a2b5c();
      if (extraout_x8_54 != 0) {
        func_0x0001077a2bf0();
        func_0x0001077a2c80();
        func_0x0001077a2b34();
        func_0x0001077a2c98();
        func_0x0001077a2e6c();
      }
      func_0x0001077a2a08();
    }
    else {
      func_0x0001077a3110();
      func_0x0001077a2ddc();
      func_0x0001077a2e60();
      ppuVar13 = (undefined **)(extraout_x8_51 + 0x6c0);
      func_0x0001077a2600();
      if (((ulong)pppplVar11 & 1) == 0) {
        if ((*(long *)(unaff_x20 + 0x10) == 0) || (*(long *)(*(long *)(unaff_x20 + 0x10) + 8) != 0))
        {
          func_0x0001077a2e0c(*param_8);
          func_0x0001077a2e50(ppplStack_290);
          func_0x0001077a264c();
          func_0x0001077a2c38();
          func_0x0001077a2de4();
        }
        else {
          func_0x0001077a2e50(*param_8);
          func_0x0001077a264c();
        }
        func_0x0001077a2c28();
        func_0x0001077a2e14();
      }
      func_0x0001077a2eb4();
    }
    func_0x0001077a2f58();
    func_0x0001077a0ddc();
  }
code_r0x0001077a024c:
  pppplVar11 = appplStack_2b8;
code_r0x0001077a0250:
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(pppplVar11);
code_r0x0001077a0254:
  func_0x0001077a2ae8(uStack_1c8);
  if ((bool)uVar4) {
    return pppplVar11;
  }
  ___stack_chk_fail();
  func_0x0001077a2f70();
  func_0x00010754f474();
  ppppuVar9 = (undefined ****)appplStack_2b8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(ppppuVar9);
  func_0x0001077a2e74();
  ppppuStack_328 = (undefined ****)*ppppuVar14;
  if (-1 < *(char *)((long)ppppuVar14 + 0x17)) {
    ppppuStack_328 = ppppuVar14;
  }
  pppplStack_310 = unaff_x24;
  pppplStack_308 = pppplVar5;
  ppppuStack_300 = param_8;
  pppppuStack_2f8 = pppppuVar12;
  func_0x00010750c5d0(appplStack_320,&ppppuStack_328);
  ppuVar6 = &PTR_DAT_1109d9b68;
  func_0x000107785358(&PTR_DAT_1109d9b68,&PTR_DAT_1109d9f58,appplStack_320);
  pppplVar5 = (long ****)ppuVar6;
  if (ppuVar6 != &PTR_DAT_1109d9f58) {
    pppplVar5 = appplStack_320;
    func_0x000107785400(pppplVar5,ppuVar6);
    if ((int)pppplVar5 == 0) {
      pppplVar5 = extraout_x8_x00130;
      FUN_10779e3c4(extraout_x8_x00130,ppppuVar9,ppuVar13,*(undefined1 *)(ppuVar6 + 1));
      return pppplVar5;
    }
  }
  func_0x0001077a2d50();
  return pppplVar5;
}



/* Entry: 1077a0ce4; end: 1077a0d67;  */

undefined1 * FUN_1077a0ce4(undefined1 *param_1,byte *param_2)

{
  undefined1 in_ZR;
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined1 auStack_68 [72];
  
  puVar2 = param_1;
  func_0x0001077a2c5c();
  if (*(int *)(param_2 + 0x30) == 0) {
    func_0x0001077a2d50();
  }
  else {
    in_ZR = *(int *)(param_2 + 0x30) == 1;
    if ((bool)in_ZR) {
      uVar1 = (ulong)*param_2;
      func_0x0001077f2d98(uVar1);
      puVar2 = auStack_68;
      func_0x00010724ae4c(puVar2,uVar1);
      func_0x0001077a318c();
      uVar3 = 1;
    }
    else {
      puVar2 = *(undefined1 **)param_2;
      func_0x0001077a2f18(puVar2);
      func_0x0001077a2f24();
      func_0x0001077a318c();
      uVar3 = 2;
    }
    param_1[0x40] = uVar3;
    func_0x0001077a2e7c();
  }
  func_0x0001077a2a5c();
  if ((bool)in_ZR) {
    return puVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  func_0x0001077a2ff4();
  if ((bool)in_ZR) {
    func_0x0001077a3214();
  }
  return param_1;
}



/* Entry: 1077a0f34; end: 1077a0f47;  */

void FUN_1077a0f34(void)

{
  func_0x0001077a0fac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


