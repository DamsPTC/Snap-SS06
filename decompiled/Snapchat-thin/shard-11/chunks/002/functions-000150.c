/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1082cdd5c; end: 1082cde37;  */

void FUN_1082cdd5c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined8 *unaff_x23;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined2 uStack_8c;
  undefined2 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined8 uStack_64;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  
  uStack_80 = param_4;
  func_0x0001082cf40c();
  uStack_84 = 0;
  uStack_78 = 1;
  uStack_6c = 0;
  uStack_74 = 0;
  uStack_5c = 0;
  uStack_64 = 0;
  uStack_4c = 0;
  uStack_54 = 0;
  uStack_44 = 0;
  uStack_7c = param_5;
  func_0x0001082cf484();
  uStack_98 = *unaff_x23;
  *unaff_x23 = 0;
  uStack_90 = *(undefined4 *)(unaff_x23 + 1);
  uStack_8c = *(undefined2 *)((long)unaff_x23 + 0xc);
  FUN_1082cf1e0();
  FUN_1082764bc(&uStack_98);
  FUN_1082c8ba8();
  if (param_1 != 0) {
    func_0x0001082cf390();
  }
  return;
}



/* Entry: 1082cde38; end: 1082cdf07;  */

void FUN_1082cde38(void)

{
  undefined1 *puVar1;
  undefined1 auStack_84 [68];
  
  puVar1 = auStack_84;
  func_0x0001082cf4d4();
  FUN_1082cd784();
  func_0x0001082cf484();
  func_0x0001082cf370();
  FUN_1082cf1e0();
  func_0x0001082cf454();
  func_0x0001082cf3cc();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001082cf390();
  }
  return;
}



/* Entry: 1082cdf08; end: 1082cdf9b;  */

void FUN_1082cdf08(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_84 [68];
  
  func_0x0001082cf40c();
  puVar1 = auStack_84;
  func_0x0001082cf4d4(puVar1,*param_1);
  FUN_1082cd784();
  func_0x0001082cf484();
  func_0x0001082cf370();
  func_0x0001082cf43c();
  func_0x0001082cf454();
  func_0x0001082cf3cc();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001082cf390();
  }
  return;
}



/* Entry: 1082cdf9c; end: 1082ce023;  */

void FUN_1082cdf9c(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined1 auStack_84 [68];
  
  func_0x0001082cf40c();
  puVar1 = auStack_84;
  func_0x0001082cf4d4(puVar1,*param_1);
  func_0x0001082cf494();
  func_0x0001082cf484();
  func_0x0001082cf370();
  func_0x0001082cf43c();
  func_0x0001082cf454();
  func_0x0001082cf3cc();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001082cf390();
  }
  return;
}



/* Entry: 1082ce024; end: 1082ce0b7;  */

void FUN_1082ce024(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  uint param_5)

{
  undefined1 *puVar1;
  undefined1 auStack_84 [68];
  
  func_0x0001082cf40c();
  puVar1 = auStack_84;
  func_0x0001082cf494(puVar1,*param_1,param_4 & 0xffffffff | (ulong)param_5 << 8 | 0x100000000,
                      0x100000000);
  func_0x0001082cf484();
  func_0x0001082cf370();
  func_0x0001082cf43c();
  func_0x0001082cf454();
  func_0x0001082cf3cc();
  if (puVar1 != (undefined1 *)0x0) {
    func_0x0001082cf390();
  }
  return;
}



/* Entry: 1082ce0b8; end: 1082ce177;  */

void FUN_1082ce0b8(float *param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  long extraout_x8;
  int iVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  FUN_10810c9b4(param_1);
  func_0x0001082cf510();
  func_0x0001082cf3fc();
  uVar5 = *(undefined8 *)(extraout_x8 + 0xb0);
  lVar2 = param_2;
  FUN_1082ce178();
  iVar4 = (int)((ulong)uVar5 >> 0x20);
  if ((int)lVar2 == 0) {
    if (*(int *)(param_2 + 0x48) != 1) {
      return;
    }
    fVar8 = (float)iVar4;
    fVar6 = 1.0;
    fVar7 = -1.0;
  }
  else {
    fVar6 = 1.0 / (float)(int)uVar5;
    fVar7 = (float)iVar4;
    if (*(int *)(param_2 + 0x48) != 1) {
      fVar7 = 1.0 / fVar7;
      bVar1 = true;
      if ((fVar7 != 0.0) && (bVar1 = false, !NAN(fVar6))) {
        bVar1 = fVar6 == 0.0;
      }
      fVar8 = 0.0;
      if (!bVar1) {
        fVar8 = 2.24208e-44;
      }
      bVar1 = false;
      if ((fVar7 == 1.0) && (bVar1 = false, !NAN(fVar6))) {
        bVar1 = fVar6 == 1.0;
      }
      *param_1 = fVar6;
      param_1[2] = 0.0;
      param_1[3] = 0.0;
      param_1[1] = 0.0;
      param_1[4] = fVar7;
      if (!bVar1) {
        fVar8 = (float)((uint)fVar8 | 2);
      }
      param_1[7] = 0.0;
      param_1[8] = 1.0;
      param_1[5] = 0.0;
      param_1[6] = 0.0;
      param_1[9] = fVar8;
      return;
    }
    fVar7 = -1.0 / fVar7;
    fVar8 = 1.0;
  }
  *param_1 = fVar6;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = fVar7;
  param_1[5] = fVar8;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  bVar1 = false;
  if ((fVar7 == 1.0) && (bVar1 = false, !NAN(fVar6))) {
    bVar1 = fVar6 == 1.0;
  }
  uVar3 = 2;
  if (bVar1) {
    uVar3 = 0;
  }
  fVar8 = (float)(uVar3 | fVar8 != 0.0);
  bVar1 = true;
  if ((fVar7 != 0.0) && (bVar1 = false, !NAN(fVar6))) {
    bVar1 = fVar6 == 0.0;
  }
  fVar6 = (float)((uint)fVar8 | 0x10);
  if (bVar1) {
    fVar6 = fVar8;
  }
  param_1[8] = 1.0;
  param_1[9] = fVar6;
  return;
}



/* Entry: 1082ce178; end: 1082ce1ef;  */

uint FUN_1082ce178(long param_1)

{
  code *pcVar1;
  uint uVar2;
  long extraout_x8;
  
  func_0x0001082cf4e4(*(undefined8 *)(param_1 + 0x40));
  func_0x0001082cf3fc();
  if (*(int *)(extraout_x8 + 0x8c) != 2) {
    if (8 < *(ushort *)(param_1 + 0x90)) {
LAB_1082ce1ec:
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1082ce1f0);
      (*pcVar1)();
    }
    if ((1 << (ulong)(*(ushort *)(param_1 + 0x90) & 0x1f) & 0x1b8U) == 0) {
      if (8 < *(ushort *)(param_1 + 0x92)) goto LAB_1082ce1ec;
      uVar2 = 0x47 >> (ulong)(*(ushort *)(param_1 + 0x92) & 0x1f);
      goto LAB_1082ce1dc;
    }
  }
  uVar2 = 0;
LAB_1082ce1dc:
  return uVar2 & 1;
}



/* Entry: 1082ce1f0; end: 1082cea47;  */

void FUN_1082ce1f0(long param_1,long *param_2)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  bool bVar6;
  code *pcVar7;
  bool bVar8;
  undefined4 uVar9;
  char *pcVar10;
  char *pcVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long *plStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  long *plStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long alStack_70 [2];
  
  lVar12 = param_2[3];
  lVar17 = *param_2;
  alStack_70[0] = lVar17;
  if ((*(short *)(lVar12 + 0x90) == 0) && (*(short *)(lVar12 + 0x92) == 0)) {
    func_0x0001082cf544();
    FUN_10828bae8(lVar17 + extraout_x8_01,&UNK_10f486005);
    func_0x0001082cf544();
    FUN_1082dc98c(lVar17 + extraout_x8_02,*(undefined4 *)(param_1 + 0x30),param_2[6],0);
    func_0x0001082cf544();
    func_0x00010828bb68(lVar17 + extraout_x8_03);
    FUN_1083a3ab4();
    return;
  }
  func_0x0001082cf544();
  FUN_10828bae8(lVar17 + extraout_x8,&UNK_10f48600d);
  uStack_78 = 0;
  uVar1 = *(ushort *)(lVar12 + 0x90);
  if (((ushort)(uVar1 - 7) < 2) || (*(ushort *)(lVar12 + 0x92) - 7 < 2)) {
    lVar17 = param_2[1];
    func_0x00010828bb5c(lVar17,lVar12,2,0x17,&DAT_10f3c5525,&uStack_78);
    *(int *)(param_1 + 0x2c) = (int)lVar17;
    uVar1 = *(ushort *)(lVar12 + 0x90);
  }
  uVar16 = (uint)uVar1;
  if (8 < uVar16) {
LAB_1082ce9a4:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1082ce9a8);
    (*pcVar7)();
  }
  uVar1 = *(ushort *)(lVar12 + 0x92);
  if (8 < uVar1) goto LAB_1082ce9a4;
  uVar3 = 0x17e >> (ulong)(uVar16 & 0x1f);
  uVar4 = 0x17e >> (ulong)(uVar1 & 0x1f);
  uStack_80 = 0;
  if (((0x1fcU >> (ulong)(uVar16 & 0x1f) | 0x1fcU >> (ulong)(uVar1 & 0x1f)) & 1) != 0) {
    uVar9 = (undefined4)param_2[1];
    func_0x0001082cf4b4();
    *(undefined4 *)(param_1 + 0x20) = uVar9;
  }
  uStack_88 = 0;
  if (((uVar3 | uVar4) & 1) != 0) {
    uVar9 = (undefined4)param_2[1];
    func_0x0001082cf4b4();
    *(undefined4 *)(param_1 + 0x24) = uVar9;
  }
  if (8 < *(ushort *)(lVar12 + 0x90)) goto LAB_1082ce9a4;
  uVar16 = 1;
  if ((1 << (ulong)(*(ushort *)(lVar12 + 0x90) & 0x1f) & 0x1b8U) == 0) {
    if (8 < *(ushort *)(lVar12 + 0x92)) goto LAB_1082ce9a4;
    uVar16 = 0x1b8 >> (ulong)(*(ushort *)(lVar12 + 0x92) & 0x1f);
  }
  func_0x0001082cf4e4(*(undefined8 *)(lVar12 + 0x40));
  func_0x0001082cf3fc();
  uStack_90 = 0;
  if (((uVar16 & 1) != 0) && (*(int *)(extraout_x8_00 + 0x8c) != 2)) {
    lVar17 = param_2[1];
    func_0x00010828bb5c(lVar17,lVar12,2,0xe,&UNK_10f486029,&uStack_90);
    *(int *)(param_1 + 0x28) = (int)lVar17;
  }
  puStack_a8 = &uStack_90;
  plStack_b8 = alStack_70;
  puStack_b0 = &uStack_80;
  uVar1 = *(ushort *)(lVar12 + 0x90) & 0xfffe;
  bVar8 = uVar1 == 4;
  uVar5 = *(ushort *)(lVar12 + 0x92) & 0xfffe;
  plStack_a0 = plStack_b8;
  lStack_98 = param_1;
  if (bVar8 || uVar5 == 4) {
    func_0x0001082cf39c();
    func_0x0001082cf420();
    if (uVar1 == 4) {
      func_0x0001082cf39c();
      func_0x0001082cf420();
      puVar13 = &UNK_10f486061;
      puVar14 = &UNK_10f486074;
    }
    else {
      puVar14 = (undefined *)0x0;
      puVar13 = (undefined *)0x0;
    }
    if (uVar5 != 4) goto LAB_1082ce450;
    func_0x0001082cf39c();
    func_0x0001082cf420();
    puVar18 = &UNK_10f4860a0;
    bVar6 = true;
    puVar19 = &UNK_10f4860b3;
  }
  else {
    puVar13 = (undefined *)0x0;
    puVar14 = (undefined *)0x0;
    bVar8 = false;
LAB_1082ce450:
    bVar6 = false;
    puVar19 = (undefined *)0x0;
    puVar18 = (undefined *)0x0;
  }
  func_0x0001082cf39c();
  func_0x0001082cf420();
  FUN_1082cea48(&plStack_b8,*(undefined2 *)(lVar12 + 0x90),&DAT_10f62b0e2,&DAT_10f62b0e2,"z",puVar13
                ,puVar14);
  FUN_1082cea48(&plStack_b8,*(undefined2 *)(lVar12 + 0x92),"y","y",&DAT_10f30a8bb,puVar18,puVar19);
  func_0x0001082cf39c();
  func_0x0001082cf420();
  if (((uVar3 ^ uVar4) & 1) == 0) {
    pcVar10 = "";
    pcVar11 = ".xy";
    puVar13 = &UNK_10f4860f3;
  }
  else {
    FUN_1082cec50(alStack_70[0],&uStack_88,uVar3 & 1,&DAT_10f4860f7,&DAT_10f4860f7,&DAT_10f4860fa);
    pcVar10 = ".y";
    puVar13 = &DAT_10f486100;
    pcVar11 = pcVar10;
    uVar3 = uVar4;
  }
  FUN_1082cec50(alStack_70[0],&uStack_88,uVar3 & 1,pcVar10,pcVar11,puVar13);
  func_0x0001082cf474();
  if (uVar1 == 4 && uVar5 == 4) {
    func_0x0001082cf45c();
    func_0x0001082cf474();
    func_0x0001082cf3ac();
    func_0x0001082cf428(&uStack_c8);
    func_0x0001082cf428(&uStack_d0);
    func_0x0001082cf428(&uStack_d8);
    func_0x0001082cf45c();
    FUN_1083a3ca0(uStack_d8);
    FUN_1083a3ca0(uStack_d0);
LAB_1082ce688:
    FUN_1083a3ca0(uStack_c8);
  }
  else {
    if (bVar8) {
      func_0x0001082cf45c();
      func_0x0001082cf474();
      func_0x0001082cf3ac();
      func_0x0001082cf428(&uStack_c8);
      func_0x0001082cf45c();
      goto LAB_1082ce688;
    }
    if (bVar6) {
      func_0x0001082cf45c();
      func_0x0001082cf474();
      func_0x0001082cf3ac();
      func_0x0001082cf428(&uStack_c8);
      func_0x0001082cf45c();
      goto LAB_1082ce688;
    }
    func_0x0001082cf3ac();
    func_0x0001082cf45c();
  }
  func_0x0001082cf508();
  uVar1 = *(ushort *)(lVar12 + 0x90);
  uVar5 = uVar1 - 3;
  sVar2 = *(short *)(lVar12 + 0x92);
  lVar17 = 0x1138270b0;
  if ((uVar1 < 9) && ((1 << (ulong)(uVar1 & 0x1f) & 0x118U) != 0)) {
    func_0x0001082cf39c();
    func_0x0001082cf420();
    lVar17 = 0x1138270b0;
    if (uVar5 < 2) {
      func_0x0001082cf39c();
      func_0x0001082cf44c();
      func_0x0001082cf3c0();
      lVar17 = lStack_c0;
      if (lStack_c0 != 0x1138270b0) {
        lStack_c0 = 0x1138270b0;
      }
      func_0x0001082cf4fc();
    }
  }
  uVar1 = sVar2 - 3;
  if ((uVar1 < 2) || (*(short *)(lVar12 + 0x92) == 8)) {
    func_0x0001082cf39c();
    func_0x0001082cf420();
    lVar15 = 0x1138270b0;
    if (uVar1 < 2) {
      func_0x0001082cf39c();
      func_0x0001082cf44c();
      func_0x0001082cf3c0();
      lVar15 = lStack_c0;
      if (lStack_c0 != 0x1138270b0) {
        lStack_c0 = 0x1138270b0;
      }
      func_0x0001082cf4fc();
    }
  }
  else {
    lVar15 = 0x1138270b0;
  }
  if ((uVar1 | uVar5) < 2) {
    func_0x0001082cf3c0();
    func_0x0001082cf39c();
    func_0x0001082cf44c();
    func_0x0001082cf508();
  }
  else if (1 < uVar5) goto LAB_1082ce824;
  func_0x0001082cf39c();
  func_0x0001082cf44c();
LAB_1082ce824:
  if (uVar1 < 2) {
    func_0x0001082cf39c();
    func_0x0001082cf44c();
  }
  if (*(short *)(lVar12 + 0x90) == 8) {
    func_0x0001082cf3f0(alStack_70[0]);
    func_0x0001082cf44c();
  }
  if (*(short *)(lVar12 + 0x92) == 8) {
    func_0x0001082cf3f0(alStack_70[0]);
    func_0x0001082cf44c();
  }
  if (*(short *)(lVar12 + 0x90) == 7) {
    func_0x0001082cf3f0(alStack_70[0]);
    func_0x0001082cf44c();
  }
  if (*(short *)(lVar12 + 0x92) == 7) {
    func_0x0001082cf3f0(alStack_70[0]);
    func_0x0001082cf44c();
  }
  func_0x0001082cf39c();
  func_0x0001082cf44c();
  FUN_1083a3ca0(lVar15);
  FUN_1083a3ca0(lVar17);
  return;
}



/* Entry: 1082cea48; end: 1082cec4f;  */

/* WARNING: Removing unreachable block (ram,0x0001083a3774) */
/* WARNING: Removing unreachable block (ram,0x0001083a3878) */

void FUN_1082cea48(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  uint *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x10;
  long extraout_x10_00;
  ulong uVar9;
  undefined8 uStack_58;
  
  switch(param_2) {
  case 0:
  case 1:
  case 7:
  case 8:
    func_0x0001082cf35c();
    puVar8 = &UNK_10f48673c;
    lVar4 = extraout_x8 + extraout_x9;
    break;
  case 2:
  case 3:
    func_0x0001082cf344();
    puVar8 = &UNK_10f486759;
    lVar4 = extraout_x8_01 + extraout_x10;
    uStack_58 = param_4;
    break;
  case 4:
  case 5:
    func_0x0001082cf35c();
    func_0x0001082cf420();
    func_0x0001082cf344();
    func_0x0001082cf46c();
    func_0x0001082cf35c();
    func_0x0001082cf44c();
    func_0x0001082cf344();
    func_0x0001082cf524();
    func_0x0001082cf46c();
    func_0x0001082cf35c();
    func_0x0001082cf420();
    func_0x0001082cf35c();
    func_0x0001082cf420();
    func_0x0001082cf344();
    func_0x0001082cf524();
    func_0x0001082cf46c();
    func_0x0001082cf344();
    func_0x0001082cf46c();
    func_0x0001082cf35c();
    func_0x0001082cf420();
    func_0x0001082cf35c();
    func_0x0001082cf420();
    func_0x0001082cf35c();
    puVar8 = &UNK_10f48687a;
    lVar4 = extraout_x8_00 + extraout_x9_00;
    goto code_r0x0001082cec24;
  case 6:
    func_0x0001082cf35c();
    func_0x0001082cf420();
    func_0x0001082cf344();
    func_0x0001082cf46c();
    func_0x0001082cf35c();
    func_0x0001082cf44c();
    func_0x0001082cf344();
    func_0x0001082cf524();
    func_0x0001082cf46c();
    func_0x0001082cf344();
    func_0x0001082cf524();
    puVar8 = &UNK_10f4868dd;
    lVar4 = extraout_x8_02 + extraout_x10_00;
code_r0x0001082cec24:
    FUN_10828bae8(lVar4,puVar8);
    func_0x0001082cf35c();
    plVar3 = (long *)(extraout_x8_03 + extraout_x9_01);
    func_0x00010828bb68();
    plVar5 = plVar3;
    FUN_1083a3d50();
    if (plVar5 != (long *)0x0) {
      uVar9 = (ulong)*(uint *)*plVar3;
      plVar2 = (long *)(uVar9 ^ 0xffffffff);
      if ((long)plVar5 + uVar9 >> 0x20 == 0) {
        plVar2 = plVar5;
      }
      if (plVar2 != (long *)0x0) {
        uVar1 = (long)plVar2 + uVar9;
        if (((uint *)*plVar3)[1] == 1 && (uVar1 ^ uVar9) < 4) {
          plVar5 = plVar3;
          func_0x0001083a3dbc(plVar3,0xffffffffffffffff,&DAT_10f2da10d);
          func_0x0001083a3dd4((long)plVar5 + uVar9);
          *(undefined1 *)((long)plVar5 + uVar1) = 0;
          *(int *)*plVar3 = (int)uVar1;
        }
        else {
          puVar6 = &uStack_58;
          FUN_1083a3310(puVar6,(long)plVar2 + (ulong)*(uint *)*plVar3);
          func_0x0001083a3de0();
          if (uVar9 != 0) {
            func_0x0001083a3d9c(puVar6,*plVar3 + 8);
          }
          func_0x0001083a3dd4((long)puVar6 + uVar9);
          puVar7 = (uint *)*plVar3;
          lVar4 = *puVar7 - uVar9;
          if (uVar9 <= *puVar7 && lVar4 != 0) {
            _memcpy((long)puVar6 + uVar9 + (long)plVar2,(long)puVar7 + uVar9 + 8,lVar4);
            puVar7 = (uint *)*plVar3;
          }
          func_0x0001083a3cdc(puVar7);
        }
      }
    }
    return;
  default:
    goto LAB_1082cebac;
  }
  FUN_10828bae8(lVar4,puVar8);
LAB_1082cebac:
  return;
}



/* Entry: 1082cec50; end: 1082ceca3;  */

void FUN_1082cec50(long *param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  
  if (param_3 == 0) {
    puVar1 = &UNK_10f486945;
  }
  else {
    puVar1 = &UNK_10f486912;
  }
  FUN_10828bae8((long)param_1 + *(long *)(*param_1 + -0x18),puVar1);
  return;
}



/* Entry: 1082ceca4; end: 1082ced5f;  */

void FUN_1082ceca4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  long extraout_x8;
  long extraout_x9;
  long lVar1;
  long lStack_38;
  
  lVar1 = param_2[2];
  *param_1 = 0x1138270b0;
  lStack_38 = 0x1138270b0;
  if (*(long *)*param_2 == 0) {
    func_0x0001083a3534(&lStack_38,param_3);
  }
  else {
    FUN_1083a394c(&lStack_38,&UNK_10f486965);
  }
  func_0x0001082cf3f0(*(undefined8 *)param_2[1]);
  FUN_1082dc868(extraout_x8 + extraout_x9,param_1,*(undefined4 *)(lVar1 + 0x30),lStack_38 + 8);
  FUN_1083a3ca0(lStack_38);
  return;
}



/* Entry: 1082ced60; end: 1082cee83;  */

void FUN_1082ced60(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  float *pfVar2;
  ulong uVar3;
  long lVar4;
  float *pfVar5;
  float fVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar1 = param_3;
  FUN_10826e1d4();
  func_0x0001082cf3fc();
  func_0x0001082cf510();
  func_0x0001082cf3fc();
  func_0x0001082cf510();
  if (*(int *)(param_1 + 0x28) != -1) {
    func_0x0001082cf4f0(*(undefined8 *)(*param_2 + 0x48));
  }
  if (*(int *)(param_1 + 0x20) != -1) {
    func_0x0001082cf4c4(param_3[0xe]);
  }
  uVar3 = (ulong)*(uint *)(param_1 + 0x24);
  if (*(uint *)(param_1 + 0x24) != 0xffffffff) {
    func_0x0001082cf4c4(param_3[0x10]);
  }
  pfVar2 = (float *)(ulong)*(uint *)(param_1 + 0x2c);
  if (*(uint *)(param_1 + 0x2c) != 0xffffffff) {
    func_0x0001082cf4f0(*(undefined8 *)(*param_2 + 0x88));
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  lVar4 = plVar1[2];
  if (*(int *)(*plVar1 + 0x48) == 1) {
    pfVar5 = (float *)plVar1[1];
    fVar6 = *pfVar5 - pfVar2[1];
    pfVar2[1] = fVar6;
    pfVar2[1] = *pfVar5 - pfVar2[3];
    pfVar2[3] = fVar6;
  }
  if ((*(int *)(lVar4 + 0x28) == -1) && (*(int *)plVar1[3] != 2)) {
    pfVar5 = (float *)plVar1[4];
    *pfVar2 = *pfVar5 * *pfVar2;
    pfVar2[2] = *pfVar5 * pfVar2[2];
    pfVar2[1] = pfVar5[1] * pfVar2[1];
    pfVar2[3] = pfVar5[1] * pfVar2[3];
  }
                    /* WARNING: Could not recover jumptable at 0x0001082cef30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)plVar1[5] + 0x88))((long *)plVar1[5],uVar3,1);
  return;
}



/* Entry: 1082cee84; end: 1082cef33;  */

void FUN_1082cee84(long *param_1,float *param_2,undefined8 param_3)

{
  long lVar1;
  float *pfVar2;
  float fVar3;
  
  lVar1 = param_1[2];
  if (*(int *)(*param_1 + 0x48) == 1) {
    pfVar2 = (float *)param_1[1];
    fVar3 = *pfVar2 - param_2[1];
    param_2[1] = fVar3;
    param_2[1] = *pfVar2 - param_2[3];
    param_2[3] = fVar3;
  }
  if ((*(int *)(lVar1 + 0x28) == -1) && (*(int *)param_1[3] != 2)) {
    pfVar2 = (float *)param_1[4];
    *param_2 = *pfVar2 * *param_2;
    param_2[2] = *pfVar2 * param_2[2];
    param_2[1] = pfVar2[1] * param_2[1];
    param_2[3] = pfVar2[1] * param_2[3];
  }
                    /* WARNING: Could not recover jumptable at 0x0001082cef30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[5] + 0x88))((long *)param_1[5],param_3,1);
  return;
}



/* Entry: 1082cef34; end: 1082cf1a3;  */

void FUN_1082cef34(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  puVar1[6] = 0;
  puVar1[1] = 0x1138270b0;
  puVar1[2] = 0;
  puVar1[3] = 0x100000000;
  *puVar1 = &PTR_FUN_110a38910;
  puVar1[4] = 0xffffffffffffffff;
  puVar1[5] = 0xffffffffffffffff;
  *(undefined4 *)(puVar1 + 6) = 0xffffffff;
  *param_1 = puVar1;
  return;
}



/* Entry: 1082cf1a4; end: 1082cf1a7;  */

undefined8 * FUN_1082cf1a4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a350d0;
  FUN_10828b9a0(param_1 + 2);
  FUN_1083a3c7c(param_1 + 1);
  return param_1;
}



/* Entry: 1082cf1a8; end: 1082cf1bb;  */

void FUN_1082cf1a8(void)

{
  FUN_10828b854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082cf1bc; end: 1082cf1bf;  */

undefined8 * FUN_1082cf1bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a388c0;
  FUN_1082764bc(param_1 + 8);
  *param_1 = &PTR_DAT_110a35070;
  FUN_10827f4d4(param_1 + 3);
  return param_1;
}



/* Entry: 1082cf1c0; end: 1082cf1d3;  */

void FUN_1082cf1c0(void)

{
  undefined1 *unaff_x19;
  
  FUN_1082cf314();
  FUN_1082a397c();
  FUN_1082a37e8();
  FUN_108276af4();
  *unaff_x19 = 0;
  return;
}



/* Entry: 1082cf1d4; end: 1082cf1df;  */

undefined * FUN_1082cf1d4(void)

{
  return &UNK_10f48696f;
}



/* Entry: 1082cf1e0; end: 1082cf2b7;  */

undefined8 * FUN_1082cf1e0(undefined8 *param_1,undefined8 *param_2,int param_3,undefined8 *param_4)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  
  puVar2 = param_4;
  FUN_1082cf2b8();
  uVar3 = 3;
  if (param_3 != 1) {
    uVar3 = 1;
  }
  if ((int)puVar2 != 0) {
    uVar3 = 1;
  }
  *(undefined4 *)(param_1 + 1) = 0x2d;
  param_1[3] = param_1 + 2;
  param_1[4] = 0x200000000;
  param_1[5] = 0;
  *(uint *)(param_1 + 6) = uVar3;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = &PTR_FUN_110a388c0;
  uVar4 = *param_2;
  *param_2 = 0;
  param_1[8] = uVar4;
  uVar1 = *(undefined2 *)((long)param_2 + 0xc);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 1);
  *(undefined2 *)((long)param_1 + 0x4c) = uVar1;
  uVar4 = *param_4;
  param_1[0xb] = param_4[1];
  param_1[10] = uVar4;
  uVar4 = *(undefined8 *)((long)param_4 + 0x14);
  param_1[0xf] = *(undefined8 *)((long)param_4 + 0x1c);
  param_1[0xe] = uVar4;
  uVar4 = *(undefined8 *)((long)param_4 + 0x24);
  param_1[0x11] = *(undefined8 *)((long)param_4 + 0x2c);
  param_1[0x10] = uVar4;
  *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_4 + 2);
  *(undefined2 *)((long)param_1 + 0x92) = *(undefined2 *)((long)param_4 + 0x12);
  *(uint *)(param_1 + 6) = uVar3 | 0x10;
  uVar4 = *(undefined8 *)((long)param_4 + 0x34);
  param_1[0xd] = *(undefined8 *)((long)param_4 + 0x3c);
  param_1[0xc] = uVar4;
  return param_1;
}



/* Entry: 1082cf2b8; end: 1082cf313;  */

bool FUN_1082cf2b8(char *param_1)

{
  if ((*param_1 == '\x03') || (param_1[1] == '\x03')) {
    return true;
  }
  if ((1 < *(ushort *)(param_1 + 0x10) - 7) && (1 < *(ushort *)(param_1 + 0x12) - 7)) {
    return false;
  }
  return *(float *)(param_1 + 0x40) < 1.0;
}



/* Entry: 1082cf314; end: 1082cf343;  */

undefined8 * FUN_1082cf314(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110a388c0;
  FUN_1082764bc(param_1 + 8);
  *param_1 = &PTR_DAT_110a35070;
  FUN_10827f4d4(param_1 + 3);
  return param_1;
}



/* Entry: 1082cf344; end: 1082cf54f;  */

void FUN_1082cf344(void)

{
  return;
}



/* Entry: 1082cf550; end: 1082cfddf;  */

void FUN_1082cf550(undefined8 *param_1,long param_2,undefined8 **param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,float *param_7,undefined8 *param_8)

{
  char cVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined1 in_ZR;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 **ppuVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  undefined8 **ppuVar14;
  undefined8 uVar15;
  long *extraout_x8;
  long lVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  undefined8 **unaff_x25;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  float fVar23;
  float fVar25;
  undefined1 auVar24 [16];
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  long lStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  long lStack_280;
  long lStack_278;
  undefined1 *puStack_270;
  code *pcStack_268;
  undefined8 *puStack_260;
  undefined8 uStack_258;
  undefined8 *puStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  ulong uStack_208;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  uint uStack_1ec;
  undefined8 uStack_1e8;
  undefined8 *puStack_1e0;
  long lStack_1d8;
  undefined4 uStack_1d0;
  undefined2 uStack_1cc;
  long alStack_1c8 [2];
  long alStack_1b8 [2];
  long alStack_1a8 [2];
  undefined1 auStack_198 [40];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  undefined4 uStack_148;
  undefined2 uStack_144;
  undefined8 auStack_140 [4];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 auStack_e0 [11];
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  undefined8 uStack_88;
  
  uStack_88 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2 + 0x20;
  ppuVar10 = param_3;
  uStack_208 = param_4;
  uStack_1e8 = param_5;
  func_0x0001082b7404();
  if (*(int *)(param_2 + 0x28) == 0) {
    *param_1 = 0;
    goto LAB_1082cfcd4;
  }
  uStack_238 = (ulong)param_3 >> 8;
  uVar20 = (uint)param_3;
  if ((uVar20 & 0xff) == 3) {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
LAB_1082cf5fc:
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    if (*(uint *)(param_2 + 0x30) < 0x1c) {
      _memcpy(auStack_e0,(&PTR_DAT_113256048)[*(uint *)(param_2 + 0x30)],0x50);
    }
    else {
      uStack_9c = 0;
      auStack_e0[9] = 0;
      auStack_e0[10] = 0;
      auStack_e0[7] = 0;
      auStack_e0[8] = 0;
      auStack_e0[5] = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      uStack_ac = 0;
      auStack_e0[3] = 0;
      auStack_e0[4] = 0;
      auStack_e0[1] = 0;
      auStack_e0[2] = 0;
      uStack_98 = 0x3f800000;
      uStack_b4 = 0x3f80000000000000;
      auStack_e0[6] = 0x3f800000;
    }
    lVar16 = 0x10;
    for (piVar13 = (int *)(param_2 + 0x4c); (lVar16 != 0x60 && (piVar13[-1] != -1));
        piVar13 = piVar13 + 2) {
      *(undefined4 *)((long)&uStack_120 + (long)*piVar13 * 4 + (long)piVar13[-1] * 0x10) =
           *(undefined4 *)((long)auStack_e0 + lVar16);
      lVar16 = lVar16 + 0x14;
    }
  }
  else {
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    if ((uVar20 >> 8 & 0xff) == 3) goto LAB_1082cf5fc;
  }
  uVar21 = 0;
  uStack_210 = 0;
  uStack_1ec = (uint)(param_7 != (float *)0x0);
  auStack_140[1] = 0;
  auStack_140[0] = 0;
  auStack_140[3] = 0;
  auStack_140[2] = 0;
  uStack_230 = uStack_208 & 0xffffffff | 0x100000000;
  puStack_240 = (undefined8 *)0x0;
  if (param_8 != (undefined8 *)0x0) {
    puStack_240 = &uStack_170;
  }
  uVar22 = (ulong)((uint)lVar5 & ((int)(uint)lVar5 >> 0x1f ^ 0xffffffffU));
  uStack_228 = (ulong)param_3 & 0xffff | 0x100000000;
  puVar8 = &uStack_120;
  auVar24 = NEON_fmov(0x3f800000,4);
  uStack_218 = auVar24._8_8_;
  uStack_220 = auVar24._0_8_;
  puStack_250 = param_1;
  uStack_248 = param_6;
  for (; uVar22 != uVar21; uVar21 = uVar21 + 1) {
    FUN_1082cfde0(&lStack_150,param_2,uVar21);
    if (7 < *(int *)(param_2 + 0x34) - 1U) {
      puStack_260 = (undefined8 *)&UNK_10f47f47e;
      uStack_258 = 0x2b;
      FUN_10841076c(&UNK_10f47f455);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1082cfd24);
      (*pcVar3)();
    }
    uVar28 = 0x3f800000;
    fVar30 = (float)*(int *)(param_2 + 0x24);
    fVar31 = (float)*(int *)(param_2 + 0x20);
    uVar27 = 0x3f800000;
    fVar25 = 0.0;
    uVar29 = 0;
    fVar23 = 0.0;
    uVar15 = 0;
    switch(*(int *)(param_2 + 0x34)) {
    case 1:
      auStack_e0[2] = (undefined4)uRam0000000113254e28;
      auStack_e0[3] = (undefined4)((ulong)uRam0000000113254e28 >> 0x20);
      auStack_e0[0] = (undefined4)uRam0000000113254e20;
      auStack_e0[1] = (undefined4)((ulong)uRam0000000113254e20 >> 0x20);
      auStack_e0[6] = (undefined4)uRam0000000113254e38;
      auStack_e0[7] = (undefined4)((ulong)uRam0000000113254e38 >> 0x20);
      auStack_e0[4] = (undefined4)uRam0000000113254e30;
      auStack_e0[5] = (undefined4)((ulong)uRam0000000113254e30 >> 0x20);
      auStack_e0[8] = (undefined4)uRam0000000113254e40;
      auStack_e0[9] = (undefined4)((ulong)uRam0000000113254e40 >> 0x20);
      goto code_r0x0001082cf7e0;
    case 2:
      uVar29 = 0x3f800000;
      uVar15 = 0xbf800000;
      goto code_r0x0001082cf788;
    case 3:
      uVar27 = 0;
      uVar15 = 0xbf800000;
      uVar28 = 0;
      uVar29 = 0xbf800000;
      fVar23 = fVar30;
      fVar25 = fVar31;
      break;
    case 4:
      uVar29 = 0xbf800000;
      uVar15 = 0x3f800000;
      fVar23 = fVar30;
      fVar31 = fVar25;
code_r0x0001082cf788:
      uVar27 = 0;
      uVar28 = 0;
      fVar25 = fVar31;
      break;
    case 6:
      uVar27 = 0xbf800000;
      uVar15 = 0;
      fVar25 = fVar31;
      break;
    case 7:
      uVar27 = 0xbf800000;
      fVar25 = fVar31;
    case 8:
      uVar28 = 0xbf800000;
      uVar15 = 0;
      fVar23 = fVar30;
    }
    puStack_260 = (undefined8 *)CONCAT44(puStack_260._4_4_,0x3f800000);
    FUN_10816eae8(auStack_e0,uVar15,uVar27,fVar25,uVar28,uVar29,fVar23,0,0);
code_r0x0001082cf7e0:
    FUN_10818cfd0(auStack_e0,auStack_e0);
    uStack_160 = 0;
    uStack_158 = 0;
    uStack_170 = 0;
    uStack_168 = 0;
    uVar6 = param_2 + 0x20;
    FUN_1081527d8(uVar6,uVar21);
    iVar17 = (int)uVar6;
    iVar19 = (int)(uVar6 >> 0x20);
    ppuVar10 = param_3;
    if (iVar17 < 2 && iVar19 < 2) {
      if (param_7 != (float *)0x0) {
        uStack_160 = *(undefined8 *)param_7;
        uStack_158 = *(undefined8 *)(param_7 + 2);
      }
      if (param_8 == (undefined8 *)0x0) {
        uVar12 = 0;
        fVar31 = 1.0;
        fVar23 = 1.0;
        uVar11 = uStack_1ec;
        goto code_r0x0001082cf9a4;
      }
      uStack_170 = *param_8;
      uStack_168 = param_8[1];
      uVar6 = uStack_208;
      lVar5 = lStack_150;
      if (param_7 == (float *)0x0) goto code_r0x0001082cfab4;
code_r0x0001082cfa48:
      lStack_150 = 0;
      alStack_1b8[0] = lVar5;
      func_0x0001082d04b8(uStack_148);
      plVar7 = alStack_1b8;
      puStack_260 = puVar8;
      FUN_1082cdf9c(auStack_198,plVar7,0,auStack_e0,param_3,uStack_208,&uStack_160,&uStack_170,
                    uStack_1e8);
      func_0x0001082d048c();
      if (plVar7 != (long *)0x0) {
        FUN_1082d0480();
        func_0x0001082d04f0();
        if (plVar7 != (long *)0x0) {
          FUN_1082d0480();
        }
      }
      plVar7 = alStack_1b8;
    }
    else {
      auVar24._8_8_ = uVar6;
      auVar24._0_8_ = uVar6;
      auVar24 = NEON_scvtf(auVar24,4);
      fStack_200 = (float)uStack_220 / auVar24._0_4_;
      fVar31 = (float)((ulong)uStack_220 >> 0x20) / auVar24._4_4_;
      fStack_1f8 = (float)uStack_218 / auVar24._8_4_;
      fStack_1f4 = (float)((ulong)uStack_218 >> 0x20) / auVar24._12_4_;
      fStack_1fc = fVar31;
      func_0x00010815f6c0(auStack_198);
      FUN_108363f68(auStack_e0,auStack_198);
      if (param_7 == (float *)0x0) {
        fVar30 = (float)*(int *)(lStack_150 + 0x90);
        fVar26 = (float)*(int *)(lStack_150 + 0x94);
        fVar23 = 0.0;
        fVar25 = 0.0;
      }
      else {
        fVar23 = fStack_200 * *param_7;
        fVar25 = fStack_1fc * param_7[1];
        fVar30 = fStack_1f8 * param_7[2];
        fVar26 = fStack_1f4 * param_7[3];
      }
      uStack_158 = CONCAT44(fVar26,fVar30);
      uStack_160 = CONCAT44(fVar25,fVar23);
      if (param_8 != (undefined8 *)0x0) {
        uStack_170 = CONCAT44(fStack_1fc * (float)((ulong)*param_8 >> 0x20),
                              fStack_200 * (float)*param_8);
        uStack_168 = CONCAT44(fStack_1f4 * (float)((ulong)param_8[1] >> 0x20),
                              fStack_1f8 * (float)param_8[1]);
      }
      uVar11 = uStack_1ec;
      if ((((ulong)param_3 & 0xff) != 0) &&
         (fVar23 = (float)*(int *)(lStack_150 + 0x90) -
                   fStack_200 *
                   (float)(*(int *)(lStack_150 + 0x90) * iVar17 - *(int *)(param_2 + 0x20)),
         fVar23 < fVar30)) {
        uStack_158 = CONCAT44(fVar26,fVar23);
        uVar11 = 1;
      }
      if (((uVar20 >> 8 & 0xff) != 0) &&
         (fVar23 = (float)*(int *)(lStack_150 + 0x94) -
                   fVar31 * (float)(*(int *)(lStack_150 + 0x94) * iVar19 - *(int *)(param_2 + 0x24))
         , fVar23 < fVar26)) {
        uStack_158 = CONCAT44(fVar23,(undefined4)uStack_158);
        uVar11 = 1;
      }
      fVar23 = fStack_200;
      if ((ulong)param_3 >> 0x20 == 0) {
        bVar4 = uVar6 >> 0x20 != 1;
        uVar12 = (uint)(iVar17 != 1);
        if (bVar4) {
          uVar12 = 1;
        }
        uStack_210 = CONCAT44(uStack_210._4_4_ | iVar17 != 1,(uint)uStack_210 | bVar4);
        if (param_8 == (undefined8 *)0x0) goto code_r0x0001082cf9a4;
        uStack_168 = CONCAT44((float)(int)uStack_168._4_4_ + 0.5,(float)(int)(float)uStack_168 + 0.5
                             );
        uStack_170 = CONCAT44((float)(int)uStack_170._4_4_ + 0.5,(float)(int)(float)uStack_170 + 0.5
                             );
        if ((uVar11 & 1) == 0) goto code_r0x0001082cfa1c;
        lVar5 = lStack_150;
        if (uVar12 == 0) goto code_r0x0001082cfa48;
      }
      else {
        uVar12 = 0;
code_r0x0001082cf9a4:
        lVar5 = lStack_150;
        if (uVar11 == 0) {
code_r0x0001082cfa1c:
          ppuVar14 = (undefined8 **)((ulong)unaff_x25 & 0xffff0000 | uStack_228);
          uVar6 = uStack_208;
          if (uVar12 != 0) {
            ppuVar10 = ppuVar14;
            uVar6 = uStack_230;
            unaff_x25 = ppuVar14;
          }
code_r0x0001082cfab4:
          lStack_1d8 = lStack_150;
          lStack_150 = 0;
          uStack_1d0 = uStack_148;
          uStack_1cc = uStack_144;
          plVar7 = &lStack_1d8;
          FUN_1082cde38(auStack_198,plVar7,0,auStack_e0,ppuVar10,uVar6,uStack_1e8,puVar8);
          func_0x0001082d048c();
          if (plVar7 != (long *)0x0) {
            FUN_1082d0480();
            func_0x0001082d04f0();
            if (plVar7 != (long *)0x0) {
              FUN_1082d0480();
            }
          }
          plVar7 = &lStack_1d8;
          goto code_r0x0001082cfb10;
        }
        if (uVar12 == 0) {
          if (param_8 != (undefined8 *)0x0) goto code_r0x0001082cfa48;
          lStack_150 = 0;
          alStack_1c8[0] = lVar5;
          func_0x0001082d04b8(uStack_148);
          puStack_260 = (undefined8 *)((ulong)puStack_260 & 0xffffffffffffff00);
          plVar7 = alStack_1c8;
          FUN_1082cdf08(auStack_198,plVar7,0,auStack_e0,param_3,uStack_208,&uStack_160,uStack_1e8,
                        puVar8);
          func_0x0001082d048c();
          if (plVar7 != (long *)0x0) {
            FUN_1082d0480();
            func_0x0001082d04f0();
            if (plVar7 != (long *)0x0) {
              FUN_1082d0480();
            }
          }
          plVar7 = alStack_1c8;
          goto code_r0x0001082cfb10;
        }
      }
      lStack_150 = 0;
      alStack_1a8[0] = lVar5;
      func_0x0001082d04b8(uStack_148);
      plVar7 = alStack_1a8;
      puStack_260 = puVar8;
      FUN_1082ce024(auStack_198,fVar23 * 0.5,fVar31 * 0.5,plVar7,0,auStack_e0,uVar20 & 0xff,
                    (uint)uStack_238 & 0xff,&uStack_160,puStack_240,uStack_1e8);
      func_0x0001082d048c();
      if (plVar7 != (long *)0x0) {
        FUN_1082d0480();
        func_0x0001082d04f0();
        if (plVar7 != (long *)0x0) {
          FUN_1082d0480();
        }
      }
      plVar7 = alStack_1a8;
    }
code_r0x0001082cfb10:
    FUN_1082764bc(plVar7);
    FUN_1082764bc(&lStack_150);
    puVar8 = puVar8 + 2;
  }
  puVar8 = (undefined8 *)0x68;
  FUN_1082a37b0();
  uVar29 = *(undefined4 *)(param_2 + 0x30);
  uVar20 = uStack_210._4_4_ & 0xff | (uint)uStack_210 << 8;
  uVar12 = 3;
  if (-1 < *(int *)(param_2 + 0x60)) {
    uVar12 = 1;
  }
  *(undefined4 *)(puVar8 + 1) = 0x2f;
  puVar8[3] = puVar8 + 2;
  puVar8[4] = 0x200000000;
  puVar8[5] = 0;
  *(uint *)(puVar8 + 6) = uVar12;
  *(undefined4 *)((long)puVar8 + 0x34) = 0;
  *(undefined1 *)(puVar8 + 7) = 0;
  *puVar8 = &PTR_FUN_110a38970;
  uVar15 = *(undefined8 *)(param_2 + 0x48);
  uVar27 = *(undefined8 *)(param_2 + 0x50);
  uVar28 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)((long)puVar8 + 0x54) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)((long)puVar8 + 0x4c) = uVar28;
  *(undefined8 *)((long)puVar8 + 0x44) = uVar27;
  *(undefined8 *)((long)puVar8 + 0x3c) = uVar15;
  *(undefined4 *)((long)puVar8 + 0x5c) = uVar29;
  *(short *)(puVar8 + 0xc) = (short)uVar20;
  if ((uVar20 & 0x101) == 0) {
    puVar2 = auStack_140;
    for (; uVar22 != 0; uVar22 = uVar22 - 1) {
      uVar15 = *puVar2;
      *puVar2 = 0;
      auStack_e0[0] = (undefined4)uVar15;
      auStack_e0[1] = (undefined4)((ulong)uVar15 >> 0x20);
      FUN_108296280(puVar8,auStack_e0,1);
      lVar5 = CONCAT44(auStack_e0[1],auStack_e0[0]);
      auStack_e0[0] = 0;
      auStack_e0[1] = 0;
      if (lVar5 != 0) {
        FUN_1082d0480();
      }
      puVar2 = puVar2 + 1;
    }
  }
  else {
    *(uint *)(puVar8 + 6) = uVar12 | 0x10;
    puVar2 = auStack_140;
    for (; uVar22 != 0; uVar22 = uVar22 - 1) {
      uVar15 = *puVar2;
      *puVar2 = 0;
      auStack_e0[0] = (undefined4)uVar15;
      auStack_e0[1] = (undefined4)((ulong)uVar15 >> 0x20);
      FUN_108296280(puVar8,auStack_e0,4);
      lVar5 = CONCAT44(auStack_e0[1],auStack_e0[0]);
      auStack_e0[0] = 0;
      auStack_e0[1] = 0;
      if (lVar5 != 0) {
        FUN_1082d0480();
      }
      puVar2 = puVar2 + 1;
    }
  }
  ppuVar10 = &puStack_1e0;
  puStack_1e0 = puVar8;
  FUN_1082c8ba8(puStack_250,uStack_248);
  puVar8 = puStack_1e0;
  puStack_1e0 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_1082d0480();
  }
  lVar16 = 0x18;
  do {
    lVar5 = (long)auStack_140 + lVar16;
    func_0x00010827f53c();
    lVar16 = lVar16 + -8;
    in_ZR = lVar16 == -8;
  } while (!(bool)in_ZR);
LAB_1082cfcd4:
  func_0x0001082d04dc(uStack_88);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = puStack_1e0;
  puStack_1e0 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    FUN_1082d0480();
  }
  lVar16 = 0x18;
  do {
    func_0x00010827f53c((long)auStack_140 + lVar16);
    iVar17 = (int)ppuVar10;
    lVar16 = lVar16 + -8;
  } while (lVar16 != -8);
  lVar9 = lVar5;
  __Unwind_Resume();
  pcStack_268 = FUN_1082cfde0;
  lVar18 = *(long *)(lVar9 + (long)iVar17 * 8);
  if (lVar18 != 0) {
    piVar13 = (int *)(lVar18 + 8);
    do {
      cVar1 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar13,0x10);
      if (bVar4) {
        *piVar13 = *piVar13 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  uVar29 = *(undefined4 *)(lVar9 + 0x40);
  lStack_298 = lVar18;
  puStack_290 = param_8;
  puStack_288 = auStack_140;
  lStack_280 = lVar5;
  lStack_278 = lVar16;
  puStack_270 = &stack0xfffffffffffffff0;
  FUN_10828aa20();
  lStack_298 = 0;
  *extraout_x8 = lVar18;
  *(undefined4 *)(extraout_x8 + 1) = uVar29;
  *(short *)((long)extraout_x8 + 0xc) = (short)lVar9;
  FUN_1082764bc(&lStack_298);
  return;
}



/* Entry: 1082cfde0; end: 1082cfe5b;  */

void FUN_1082cfde0(long *param_1,long param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lStack_38;
  
  lVar5 = *(long *)(param_2 + (long)param_3 * 8);
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 8);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  lStack_38 = lVar5;
  FUN_10828aa20();
  lStack_38 = 0;
  *param_1 = lVar5;
  *(undefined4 *)(param_1 + 1) = uVar2;
  *(short *)((long)param_1 + 0xc) = (short)param_2;
  FUN_1082764bc(&lStack_38);
  return;
}



/* Entry: 1082cfe5c; end: 1082cfea7;  */

void FUN_1082cfe5c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  puVar1[1] = 0x1138270b0;
  puVar1[2] = 0;
  *puVar1 = &PTR_DAT_110a389d8;
  puVar1[4] = 0xffffffffffffffff;
  puVar1[3] = 0x100000000;
  *param_1 = puVar1;
  return;
}



/* Entry: 1082cfea8; end: 1082cff2f;  */

void FUN_1082cfea8(long param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = 0;
  uVar1 = 0;
  puVar2 = (uint *)(param_1 + 0x40);
  lVar4 = 0x20;
  do {
    if (-1 < (int)puVar2[-1]) {
      uVar1 = ((*puVar2 & 0xff) << 2 | puVar2[-1]) << (ulong)((uVar3 & 7) << 2) | uVar1;
      uVar3 = uVar3 + 1;
    }
    lVar4 = lVar4 + -8;
    puVar2 = puVar2 + 2;
  } while (lVar4 != 0);
  uVar3 = uVar1 | 0x10000;
  if (*(int *)(param_1 + 0x5c) != 0x1c) {
    uVar3 = uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0001082cff2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x10))
            (param_3,0x20,
             uVar3 | (uint)*(byte *)(param_1 + 0x60) << 0x11 |
             (uint)*(byte *)(param_1 + 0x61) << 0x12,"unknown",7);
  return;
}



/* Entry: 1082cff30; end: 1082cffb3;  */

void FUN_1082cff30(long param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  
  lVar2 = 0;
  piVar3 = (int *)(param_1 + 0x40);
  while( true ) {
    if (lVar2 == 0x20) {
      func_0x00010778c200(param_1 + 0x60,param_2 + 0x60,2);
      return;
    }
    piVar1 = (int *)(param_2 + 0x3c + lVar2);
    if (piVar3[-1] != *piVar1 || *piVar3 != piVar1[1]) break;
    lVar2 = lVar2 + 8;
    piVar3 = piVar3 + 2;
  }
  return;
}



/* Entry: 1082cffb4; end: 1082d002f;  */

void FUN_1082cffb4(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = (undefined8 *)0x68;
  FUN_1082a37b0();
  FUN_10828b420();
  *puVar1 = &PTR_FUN_110a38970;
  uVar3 = *(undefined8 *)(param_2 + 0x44);
  uVar2 = *(undefined8 *)(param_2 + 0x3c);
  uVar4 = *(undefined8 *)(param_2 + 0x4c);
  *(undefined8 *)((long)puVar1 + 0x54) = *(undefined8 *)(param_2 + 0x54);
  *(undefined8 *)((long)puVar1 + 0x4c) = uVar4;
  *(undefined8 *)((long)puVar1 + 0x44) = uVar3;
  *(undefined8 *)((long)puVar1 + 0x3c) = uVar2;
  *(undefined4 *)((long)puVar1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined2 *)(puVar1 + 0xc) = *(undefined2 *)(param_2 + 0x60);
  *param_1 = puVar1;
  return;
}



/* Entry: 1082d0030; end: 1082d0033;  */

undefined8 * FUN_1082d0030(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a35070;
  FUN_10827f4d4(param_1 + 3);
  return param_1;
}



/* Entry: 1082d0034; end: 1082d0047;  */

void FUN_1082d0034(void)

{
  undefined1 *unaff_x19;
  
  FUN_10828b3f0();
  FUN_1082a397c();
  FUN_1082a37e8();
  FUN_108276af4();
  *unaff_x19 = 0;
  return;
}



/* Entry: 1082d0048; end: 1082d0057;  */

undefined * FUN_1082d0048(void)

{
  return &UNK_10f48697d;
}



/* Entry: 1082d0058; end: 1082d006b;  */

void FUN_1082d0058(void)

{
  FUN_10828b854();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1082d006c; end: 1082d0383;  */

void FUN_1082d006c(long param_1,undefined8 *param_2)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  char *pcVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  char *pcVar11;
  uint uVar12;
  long *plVar13;
  long lVar14;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  plVar13 = (long *)*param_2;
  lVar10 = param_2[3];
  uVar3 = *(uint *)(lVar10 + 0x20);
  if (((*(byte *)(lVar10 + 0x60) & 1) == 0) && (*(char *)(lVar10 + 0x61) != '\x01')) {
    pcVar11 = "";
  }
  else {
    func_0x0001082d04ac();
    func_0x0001082d04a4();
    if (*(char *)(lVar10 + 0x60) == '\x01') {
      func_0x0001082d04ac();
      FUN_10829dbfc((long)plVar13 + extraout_x8,&UNK_10f4869a7);
    }
    if (*(char *)(lVar10 + 0x61) == '\x01') {
      func_0x0001082d04ac();
      FUN_10829dbfc((long)plVar13 + extraout_x8_00,&UNK_10f4869d7);
    }
    pcVar11 = "snappedCoords";
  }
  func_0x0001082d04ac();
  func_0x0001082d04a4();
  uVar12 = 0;
  iVar4 = *(int *)(lVar10 + 0x54);
  lVar2 = 3;
  if (-1 < iVar4) {
    lVar2 = 4;
  }
  do {
    if (uVar12 == (uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU))) {
      if (iVar4 < 0) {
        func_0x0001082d04ac();
        func_0x0001082d04a4();
      }
      if (*(int *)(lVar10 + 0x5c) != 0x1c) {
        uVar9 = param_2[1];
        func_0x00010828bb5c(uVar9,lVar10,2,0x19,&UNK_10f486a43,0);
        *(int *)(param_1 + 0x20) = (int)uVar9;
        uVar9 = param_2[1];
        func_0x00010828bb5c(uVar9,lVar10,2,0x16,&UNK_10f486a54,0);
        *(int *)(param_1 + 0x24) = (int)uVar9;
        lVar10 = *(long *)(*plVar13 + -0x18);
        func_0x0001082d04d0(param_2[1],*(undefined4 *)(param_1 + 0x20));
        func_0x0001082d04d0(param_2[1],*(undefined4 *)(param_1 + 0x24));
        FUN_10828bae8((long)plVar13 + lVar10,&UNK_10f486a68);
      }
      if (-1 < iVar4) {
        func_0x0001082d04ac();
        func_0x0001082d04a4();
      }
      func_0x0001082d04ac();
      func_0x0001082d04a4();
      return;
    }
    uStack_78 = 0;
    lStack_70 = 0;
    uStack_68 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    piVar6 = (int *)(lVar10 + 0x40);
    pcVar8 = "rgba";
    lVar7 = uStack_68;
    for (lVar14 = lVar2; uStack_68 = lVar7, lVar14 != 0; lVar14 = lVar14 + -1) {
      if (piVar6[-1] == uVar12) {
        iVar5 = *piVar6;
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (&uStack_78,(long)*pcVar8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (&uStack_90,(long)(char)(&UNK_10f434344)[iVar5]);
      }
      piVar6 = piVar6 + 2;
      pcVar8 = pcVar8 + 1;
      lVar7 = uStack_68;
    }
    uStack_68._7_1_ = (char)((ulong)lVar7 >> 0x38);
    if (lVar7 < 0) {
      if (lStack_70 != 0) goto LAB_1082d01ec;
    }
    else {
      bVar1 = uStack_68._7_1_ != '\0';
      if (bVar1) {
LAB_1082d01ec:
        lVar14 = *(long *)(*plVar13 + -0x18);
        pcVar8 = pcVar11;
        _strlen(pcVar11);
        FUN_10828bad0(&uStack_98,param_1,uVar12,param_2,pcVar11,pcVar8);
        FUN_10828bae8((long)plVar13 + lVar14,&UNK_10f486a22);
        FUN_1083a3ca0(uStack_98);
      }
    }
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_90);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_78);
    uVar12 = uVar12 + 1;
  } while( true );
}



/* Entry: 1082d0384; end: 1082d047f;  */

void FUN_1082d0384(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(uint *)(param_3 + 0x5c);
  uVar2 = uVar1 == 0x1c;
  if (!(bool)uVar2) {
    uVar2 = uVar1 == 0x1b;
    if (uVar1 < 0x1c) {
      puVar3 = (undefined4 *)(&PTR_DAT_113255f68)[uVar1];
      uStack_4c = *puVar3;
      uStack_58 = puVar3[4];
      uStack_48 = *(undefined8 *)(puVar3 + 1);
      uStack_40 = *(undefined8 *)(puVar3 + 5);
      uStack_54 = puVar3[9];
      uStack_50 = puVar3[0xe];
      uStack_38 = CONCAT44(puVar3[10],puVar3[7]);
      uStack_30 = *(undefined8 *)(puVar3 + 0xb);
    }
    else {
      uStack_40 = 0x3f80000000000000;
      uStack_48 = 0;
      uStack_4c = 0x3f800000;
      uStack_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_38 = uStack_48;
      uStack_30 = uStack_40;
    }
    (**(code **)(*param_2 + 0x98))(param_2,(int)param_1[4],&uStack_4c);
    (**(code **)(*param_2 + 0x68))(param_2,*(undefined4 *)((long)param_1 + 0x24),1,&uStack_58);
    param_1 = param_2;
  }
  func_0x0001082d04dc(uStack_28);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0001082d0488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1082d0480; end: 1082d04fb;  */

void FUN_1082d0480(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001082d0488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))();
  return;
}



/* Entry: 1082d04fc; end: 1082d058f;  */

undefined4
FUN_1082d04fc(undefined4 param_1,undefined8 *param_2,undefined8 *param_3,undefined1 param_4,
             undefined4 param_5)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(undefined4 *)((long)param_2 + 0x14);
  puVar2 = param_2;
  func_0x0001081e8e18();
  *puVar2 = *param_3;
  puVar2 = param_2 + 3;
  FUN_1081e8ea0();
  *(undefined4 *)puVar2 = param_1;
  func_0x00010840f37c(param_2 + 6);
  *(undefined1 *)(param_2[7] + (long)*(int *)((long)param_2 + 0x44) + -1) = param_4;
  func_0x00010840f37c(param_2 + 9);
  *(undefined4 *)(param_2[10] + (long)*(int *)((long)param_2 + 0x5c) * 4 + -4) = param_5;
  return uVar1;
}



/* Entry: 1082d0590; end: 1082d05c3;  */

void FUN_1082d0590(long param_1)

{
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
  return;
}



/* Entry: 1082d05c4; end: 1082d0627;  */

void FUN_1082d05c4(long param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  
  if ((param_4 != param_2 && param_2 != param_3) && param_3 != param_4) {
    piVar1 = (int *)(param_1 + 0x98);
    FUN_108266494();
    *piVar1 = param_2;
    piVar1 = (int *)(param_1 + 0x98);
    FUN_108266494();
    *piVar1 = param_3;
    piVar1 = (int *)(param_1 + 0x98);
    FUN_108266494();
    *piVar1 = param_4;
  }
  return;
}



/* Entry: 1082d0628; end: 1082d062b;  */

/* WARNING: Removing unreachable block (ram,0x00010840f420) */

int * FUN_1082d0628(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = param_1[5];
  iVar4 = (int)param_2;
  if (iVar4 <= param_1[4] - iVar1) {
    param_1[5] = iVar1 + iVar4;
    return param_1;
  }
  if (0 < iVar4) {
    iVar2 = param_1[5];
    piVar3 = param_1;
    FUN_10840f278(param_1,param_2);
    func_0x00010840f168(param_1,piVar3);
    FUN_10840f2ec(param_1,iVar4 + iVar1,iVar1,iVar2);
  }
  return (int *)(*(long *)(param_1 + 2) + (long)*param_1 * (long)iVar1);
}



/* Entry: 1082d062c; end: 1082d0667;  */

float FUN_1082d062c(float param_1,float param_2,int param_3)

{
  float fStack_18;
  float fStack_14;
  
  fStack_14 = param_1;
  fStack_18 = -param_2;
  if (param_3 != 1) {
    fStack_14 = -param_1;
    fStack_18 = param_2;
  }
  func_0x000108384954(&fStack_18);
  return fStack_18;
}



/* Entry: 1082d0668; end: 1082d0683;  */

float FUN_1082d0668(long param_1,int param_2)

{
  float fVar1;
  
  fVar1 = -*(float *)(param_1 + 4);
  if (param_2 != 1) {
    fVar1 = *(float *)(param_1 + 4);
  }
  return fVar1;
}



/* Entry: 1082d0684; end: 1082d0edf;  */

bool FUN_1082d0684(float param_1,float param_2,float param_3,float param_4,ulong param_5,
                  ulong param_6,ulong *param_7)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  float *pfVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  uint uStack_d8;
  ulong uStack_d0;
  undefined4 auStack_c8 [2];
  undefined4 *puStack_c0;
  undefined8 uStack_b8;
  float fStack_b0;
  float fStack_ac;
  
  if (*(int *)(param_6 + 0x14) < 3) {
    return false;
  }
  iVar19 = 0;
  uStack_d0 = param_6;
LAB_1082d0704:
  if (iVar19 == 8) {
    FUN_1082d10b0(param_5,uStack_d0);
    return false;
  }
  uVar21 = param_5 + 200 + (ulong)(uStack_d0 == param_5 + 200) * 0x18;
  func_0x00010840f1a4(uVar21,*(undefined4 *)(param_5 + 0xc4));
  uVar27 = 0;
  *(undefined4 *)(uVar21 + 0x14) = 0;
  *(undefined4 *)(param_5 + 0x10c) = 0;
  uVar5 = *(uint *)(uStack_d0 + 0x14);
  lVar29 = *(long *)(uStack_d0 + 8);
  fVar30 = 0.0;
  uStack_d8 = 0xffffffff;
  fVar34 = 3.4028235e+38;
LAB_1082d0768:
  pfVar23 = (float *)(lVar29 + 8 + uVar27 * 0x18);
  do {
    if ((uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU)) == uVar27) {
      if (uStack_d8 == 0xffffffff) goto LAB_1082d0e08;
      if (((int)uStack_d8 < 0) || ((int)uVar5 <= (int)uStack_d8)) goto LAB_1082d0ea4;
      uVar22 = *(undefined8 *)(lVar29 + (ulong)uStack_d8 * 0x18 + 8);
      uVar27 = uStack_d0;
      func_0x0001082d279c();
      if (((int)uVar27 < 0) || (*(int *)(param_5 + 0x14) <= (int)uVar27)) goto LAB_1082d0ea4;
      pfVar23 = (float *)(*(long *)(param_5 + 8) + (uVar27 & 0xffffffff) * 8);
      fStack_b0 = fVar30 * (float)uVar22 + *pfVar23;
      fStack_ac = fVar30 * (float)((ulong)uVar22 >> 0x20) + pfVar23[1];
      uVar3 = *(uint *)(lVar29 + (ulong)uStack_d8 * 0x18 + 0x14);
      if ((((int)uVar3 < 0) || (*(int *)(param_5 + 0x14) <= (int)uVar3)) ||
         (*(int *)(param_5 + 0x74) <= (int)uVar3)) goto LAB_1082d0ea4;
      pfVar23 = (float *)(*(long *)(param_5 + 8) + (ulong)uVar3 * 8);
      pfVar1 = (float *)(*(long *)(param_5 + 0x68) + (ulong)uVar3 * 8);
      fVar34 = -(*pfVar1 * (fStack_b0 - *pfVar23)) - (fStack_ac - pfVar23[1]) * pfVar1[1];
      fVar30 = param_3;
      if (fVar34 < param_3) {
        fVar30 = fVar34;
      }
      auStack_c8[0] = 4;
      puStack_c0 = (undefined4 *)0x0;
      uStack_b8 = 0;
      func_0x00010840f168(auStack_c8,uVar5);
      if (*(int *)(uStack_d0 + 0x14) < 1) goto LAB_1082d0ea4;
      lVar29 = *(long *)(uStack_d0 + 8);
      uVar5 = *(uint *)(lVar29 + 0x10);
      uVar27 = (ulong)uVar5;
      uVar15 = *(undefined4 *)(lVar29 + 0x14);
      uVar28 = param_5;
      func_0x0001082d28ac(param_5,uVar27,lVar29 + 8,uVar15,&fStack_b0);
      if ((uVar28 & 1) == 0) {
        func_0x0001082d27e8();
        goto LAB_1082d0e24;
      }
      if (((int)uVar5 < 0) || (*(int *)(param_5 + 0x44) <= (int)uVar5)) goto LAB_1082d0ea4;
      lVar29 = param_5 + 0xf8;
      func_0x0001082d2314(lVar29,&fStack_b0,uVar27,uVar15,
                          (*(byte *)(*(long *)(param_5 + 0x38) + uVar27) ^ 0xff) & 1);
      puVar10 = puStack_c0;
      uVar5 = uStack_b8._4_4_;
      uVar27 = (ulong)uStack_b8._4_4_;
      if ((int)uStack_b8._4_4_ < 1) goto LAB_1082d0ea4;
      *puStack_c0 = (int)lVar29;
      lVar29 = 0x2c;
      uVar28 = 1;
      break;
    }
    uVar28 = uStack_d0;
    FUN_1082d1ef0(uStack_d0,uVar27);
    if (((int)uVar28 < 0) || (iVar16 = *(int *)(param_5 + 0x14), iVar16 <= (int)uVar28))
    goto LAB_1082d0ea4;
    uVar3 = (uint)uVar27 + 1;
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar3 / uVar5;
    }
    uVar3 = uVar3 - uVar9 * uVar5;
    lVar25 = *(long *)(param_5 + 8);
    uVar26 = uStack_d0;
    FUN_1082d1ef0(uStack_d0,(ulong)uVar3);
    if ((((int)uVar26 < 0) || (iVar16 <= (int)uVar26)) || ((int)uVar5 <= (int)uVar3))
    goto LAB_1082d0ea4;
    lVar20 = lVar29 + (ulong)uVar3 * 0x18;
    fVar33 = *(float *)(lVar20 + 8);
    fVar31 = *(float *)(lVar20 + 0xc);
    fVar32 = -(fVar33 * pfVar23[1]) + fVar31 * *pfVar23;
    if (0.00024414062 < ABS(fVar32)) {
      pfVar1 = (float *)(lVar25 + (uVar28 & 0xffffffff) * 8);
      pfVar2 = (float *)(lVar25 + (uVar26 & 0xffffffff) * 8);
      fVar32 = ((pfVar2[1] - pfVar1[1]) * -fVar33 + fVar31 * (*pfVar2 - *pfVar1)) / fVar32;
      bVar13 = true;
      if ((0.0 < fVar32) && (bVar13 = true, !NAN(fVar32 - fVar32))) {
        bVar13 = false;
      }
      if (!bVar13) goto LAB_1082d0838;
    }
    pfVar23 = pfVar23 + 6;
    uVar27 = uVar27 + 1;
  } while( true );
LAB_1082d09c4:
  iVar16 = *(int *)(uStack_d0 + 0x14);
  uVar26 = (long)iVar16 - 1;
  uVar14 = (long)(uVar28 - uVar26) < 0;
  if ((long)uVar26 <= (long)uVar28) goto LAB_1082d0a94;
  uVar26 = uStack_d0;
  FUN_1082d1ef0(uStack_d0,uVar28);
  puVar4 = (undefined4 *)(*(long *)(uStack_d0 + 8) + lVar29);
  uVar15 = *puVar4;
  uVar17 = param_5;
  func_0x0001082d28ac(param_5,uVar26,puVar4 + -3,uVar15,&fStack_b0);
  if ((uVar17 & 1) == 0) {
    func_0x0001082d27e8();
    goto LAB_1082d0e24;
  }
  if (*(int *)(param_5 + 0x10c) == 0) goto LAB_1082d0ea4;
  lVar25 = *(long *)(param_5 + 0x100) + (long)*(int *)(param_5 + 0x10c) * 0x14;
  func_0x0001082d2778(fStack_b0 - *(float *)(lVar25 + -0x14),fStack_ac - *(float *)(lVar25 + -0x10))
  ;
  if ((bool)uVar14) {
    lVar25 = param_5 + 0xf8;
    FUN_1082d237c(lVar25,uVar15);
    uVar15 = (undefined4)lVar25;
  }
  else {
    func_0x0001082d27dc();
    uVar26 = uVar17;
    func_0x0001082d27dc();
    if (((int)uVar26 < 0) || (*(int *)(param_5 + 0x44) <= (int)uVar26)) goto LAB_1082d0ea4;
    lVar25 = param_5 + 0xf8;
    func_0x0001082d2314(lVar25,&fStack_b0,uVar17,uVar15,
                        (*(byte *)(*(long *)(param_5 + 0x38) + (uVar26 & 0xffffffff)) ^ 0xff) & 1);
    uVar15 = (undefined4)lVar25;
  }
  if (uVar27 <= uVar28) goto LAB_1082d0ea4;
  puVar10[uVar28] = uVar15;
  uVar28 = uVar28 + 1;
  lVar29 = lVar29 + 0x18;
  goto LAB_1082d09c4;
LAB_1082d0838:
  fVar31 = -(fVar32 * (pfVar23[1] * pfVar23[-1] + *pfVar23 * pfVar23[-2]));
  uVar3 = (uint)uVar27;
  if (fVar34 <= fVar31) {
    fVar31 = fVar34;
    fVar32 = fVar30;
    uVar3 = uStack_d8;
  }
  uStack_d8 = uVar3;
  fVar30 = fVar32;
  fVar34 = fVar31;
  uVar27 = uVar27 + 1;
  goto LAB_1082d0768;
LAB_1082d0a94:
  uVar28 = uStack_d0;
  func_0x0001082d279c(uStack_d0);
  if (iVar16 < 1) goto LAB_1082d0ea4;
  lVar29 = *(long *)(uStack_d0 + 8) + (uVar26 & 0xffffffff) * 0x18;
  uVar15 = *(undefined4 *)(lVar29 + 0x14);
  uVar17 = param_5;
  func_0x0001082d28ac(param_5,uVar28,lVar29 + 8,uVar15,&fStack_b0);
  if ((uVar17 & 1) == 0) {
    func_0x0001082d27e8();
LAB_1082d0e24:
    func_0x0001082d2874();
    goto LAB_1082d0e28;
  }
  iVar7 = *(int *)(param_5 + 0x10c);
  if ((iVar7 == 0) || (iVar7 < 1)) goto LAB_1082d0ea4;
  pfVar23 = *(float **)(param_5 + 0x100);
  fVar32 = fStack_b0 - pfVar23[(long)iVar7 * 5 + -5];
  fVar31 = fStack_ac - pfVar23[(long)iVar7 * 5 + -4];
  fVar32 = fVar31 * fVar31 + fVar32 * fVar32;
  fVar31 = fStack_b0 - *pfVar23;
  fVar33 = fStack_ac - pfVar23[1];
  fVar31 = fVar33 * fVar33 + fVar31 * fVar31;
  bVar13 = true;
  if ((0.00390625 <= fVar32) && (bVar13 = false, !NAN(fVar31))) {
    bVar13 = fVar31 < 0.00390625;
  }
  if (bVar13) {
    bVar13 = true;
    if ((fVar32 < 0.00390625) && (bVar13 = false, !NAN(fVar31))) {
      bVar13 = fVar31 < 0.00390625;
    }
    if (!bVar13) {
LAB_1082d0c28:
      uVar18 = param_5 + 0xf8;
      FUN_1082d237c(uVar18,uVar15);
      goto LAB_1082d0c34;
    }
    if (fVar31 < 0.00390625 && fVar32 >= 0.00390625) {
      pfVar23[2] = -NAN;
      *(undefined1 *)(pfVar23 + 4) = 1;
      if ((int)uVar5 < iVar16) goto LAB_1082d0ea4;
      uVar18 = 0;
      goto LAB_1082d0c3c;
    }
    fVar32 = *pfVar23 - pfVar23[(long)iVar7 * 5 + -5];
    fVar31 = pfVar23[1] - pfVar23[(long)iVar7 * 5 + -4];
    if (0.00390625 <= fVar31 * fVar31 + fVar32 * fVar32) goto LAB_1082d0c28;
    if (iVar7 != 1) {
      *(int *)(param_5 + 0x10c) = iVar7 + -1;
    }
    pfVar23[2] = -NAN;
    *(undefined1 *)(pfVar23 + 4) = 1;
    if (((int)uVar5 < iVar16) || (puVar10[uVar26 & 0xffffffff] = 0, iVar16 == 1))
    goto LAB_1082d0ea4;
    uVar3 = iVar16 - 2;
    iVar16 = puVar10[uVar3];
    for (; -1 < (int)uVar3; uVar3 = uVar3 - 1) {
      if (uVar5 <= uVar3) goto LAB_1082d0ea4;
      if (puVar10[uVar3] != iVar16) break;
      puVar10[uVar3] = 0;
    }
  }
  else {
    func_0x0001082d2790();
    uVar28 = uVar17;
    func_0x0001082d2790();
    if (((int)uVar28 < 0) || (*(int *)(param_5 + 0x44) <= (int)uVar28)) goto LAB_1082d0ea4;
    uVar18 = param_5 + 0xf8;
    func_0x0001082d2314(uVar18,&fStack_b0,uVar17,uVar15,
                        (*(byte *)(*(long *)(param_5 + 0x38) + (uVar28 & 0xffffffff)) ^ 0xff) & 1);
LAB_1082d0c34:
    if ((int)uVar5 < iVar16) {
LAB_1082d0ea4:
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x1082d0ea8);
      (*pcVar11)();
    }
LAB_1082d0c3c:
    puVar10[uVar26 & 0xffffffff] = (int)uVar18;
    uVar17 = uVar18;
  }
  lVar25 = 0;
  lVar29 = 0;
  fVar32 = param_2 + (param_4 - param_2) * ((fVar30 - param_1) / (param_3 - param_1));
  fVar30 = 1.0;
  if (fVar32 <= 1.0) {
    fVar30 = fVar32;
  }
  if (fVar30 <= 0.0) {
    fVar30 = 0.0;
  }
  if (ABS(param_1 - param_3) <= 0.00024414062) {
    fVar30 = param_4;
  }
  for (; lVar29 < *(int *)(param_5 + 0x10c); lVar29 = lVar29 + 1) {
    lVar24 = *(long *)(param_5 + 0x100);
    lVar20 = lVar24 + lVar25;
    bVar6 = *(byte *)(lVar20 + 0x10);
    func_0x0001082d28a0();
    iVar16 = (int)uVar17;
    if ((iVar19 == 0) || ((bVar6 & 1) != 0)) {
      uVar28 = param_5;
      FUN_1082d04fc(fVar30,param_5,lVar20,iVar16 != -1,0);
      iVar16 = (int)uVar28;
    }
    else {
      if (((iVar16 < 0) || (*(int *)(param_5 + 0x14) <= iVar16)) ||
         (*(undefined8 *)(*(long *)(param_5 + 8) + (uVar17 & 0xffffffff) * 8) =
               *(undefined8 *)(lVar24 + lVar25), *(int *)(param_5 + 0x2c) <= iVar16))
      goto LAB_1082d0ea4;
      *(float *)(*(long *)(param_5 + 0x20) + (uVar17 & 0xffffffff) * 4) = param_4;
      func_0x0001082d28a0();
    }
    if (*(int *)(param_5 + 0x10c) <= (int)lVar29) goto LAB_1082d0ea4;
    uVar15 = *(undefined4 *)(*(long *)(param_5 + 0x100) + lVar25 + 0xc);
    uVar17 = uVar21;
    FUN_1082d2658();
    *(int *)(uVar17 + 0x10) = iVar16;
    *(undefined4 *)(uVar17 + 0x14) = uVar15;
    lVar25 = lVar25 + 0x14;
  }
  for (lVar29 = 0; uVar27 * 4 - lVar29 != 0; lVar29 = lVar29 + 4) {
    uVar17 = uVar21;
    FUN_1082d1ef0(uVar21,*(undefined4 *)((long)puVar10 + lVar29));
    *(int *)((long)puVar10 + lVar29) = (int)uVar17;
  }
  for (uVar28 = 0; iVar16 = *(int *)(uStack_d0 + 0x14), (long)uVar28 < (long)iVar16;
      uVar28 = uVar28 + 1) {
    iVar7 = (int)uVar28 + 1;
    iVar8 = 0;
    if (iVar16 != 0) {
      iVar8 = iVar7 / iVar16;
    }
    uVar3 = iVar7 - iVar8 * iVar16;
    func_0x0001082d2790();
    uVar26 = uVar17;
    func_0x0001082d27dc();
    if ((int)uVar5 <= (int)uVar3) goto LAB_1082d0ea4;
    uVar18 = param_5;
    FUN_1082d05c4(param_5,uVar17,uVar26,puVar10[uVar3]);
    func_0x0001082d2790();
    if (uVar28 == uVar27) goto LAB_1082d0ea4;
    uVar17 = param_5;
    FUN_1082d05c4(param_5,uVar18,puVar10[uVar3],puVar10[uVar28]);
  }
  if ((param_3 <= fVar34) && (*(int *)(param_5 + 0x114) != 2)) {
    func_0x0001082d2290(param_5,uVar21);
  }
  iVar16 = *(int *)(uVar21 + 0x14);
  func_0x0001082d2874();
  bVar13 = false;
  bVar12 = false;
  if (2 < iVar16) {
    bVar13 = false;
    bVar12 = true;
    if (!NAN(param_3) && !NAN(fVar34)) {
      bVar13 = param_3 == fVar34;
      bVar12 = fVar34 <= param_3;
    }
  }
  if (bVar12 && !bVar13) {
LAB_1082d0e08:
    func_0x0001082d28b4();
    iVar19 = iVar19 + 1;
    uStack_d0 = uVar21;
    goto LAB_1082d0704;
  }
LAB_1082d0e28:
  iVar19 = *(int *)(uVar21 + 0x14);
  if (2 < iVar19) {
    func_0x0001082d28b4();
  }
  *param_7 = uVar21;
  return 2 < iVar19;
}



/* Entry: 1082d0ee0; end: 1082d10af;  */

void FUN_1082d0ee0(long param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x19;
  long unaff_x20;
  long lVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  
  func_0x0001082d28d8();
  lVar11 = 0;
  uVar9 = (ulong)*(uint *)(param_1 + 0x14);
  lVar10 = 0;
  while (iVar8 = (int)uVar9, lVar10 < iVar8) {
    iVar4 = 0;
    iVar13 = (int)(lVar10 + 1);
    if (iVar8 != 0) {
      iVar4 = iVar13 / iVar8;
    }
    uVar2 = *(uint *)(*(long *)(unaff_x20 + 8) + (ulong)(uint)(iVar13 - iVar4 * iVar8) * 0x18 + 0x10
                     );
    if (((int)uVar2 < 0) || (*(int *)(unaff_x19 + 0x14) <= (int)uVar2)) goto LAB_1082d10ac;
    puVar7 = (undefined8 *)(*(long *)(unaff_x20 + 8) + lVar11);
    uVar3 = *(uint *)(puVar7 + 2);
    if (((int)uVar3 < 0) || (*(int *)(unaff_x19 + 0x14) <= (int)uVar3)) goto LAB_1082d10ac;
    uVar18 = *(undefined8 *)(*(long *)(unaff_x19 + 8) + (ulong)uVar2 * 8);
    uVar22 = *(undefined8 *)(*(long *)(unaff_x19 + 8) + (ulong)uVar3 * 8);
    uVar18 = CONCAT44((float)((ulong)uVar18 >> 0x20) - (float)((ulong)uVar22 >> 0x20),
                      (float)uVar18 - (float)uVar22);
    *puVar7 = uVar18;
    FUN_10838497c();
    uVar19 = (undefined4)uVar22;
    uVar15 = (undefined4)uVar18;
    if (*(int *)(unaff_x20 + 0x14) <= lVar10) goto LAB_1082d10ac;
    FUN_1082d0668(*(long *)(unaff_x20 + 8) + lVar11,*(undefined4 *)(unaff_x19 + 0x90));
    uVar9 = (ulong)*(int *)(unaff_x20 + 0x14);
    if ((long)uVar9 <= lVar10) goto LAB_1082d10ac;
    puVar1 = (undefined4 *)(*(long *)(unaff_x20 + 8) + lVar11);
    *puVar1 = uVar15;
    puVar1[1] = uVar19;
    lVar11 = lVar11 + 0x18;
    lVar10 = lVar10 + 1;
  }
  lVar11 = 0;
  uVar5 = 0;
  uVar14 = (ulong)(iVar8 - 1);
  while( true ) {
    uVar12 = uVar5;
    if ((long)(int)uVar9 <= (long)uVar12) {
      return;
    }
    iVar8 = (int)uVar14;
    if ((iVar8 < 0) || ((int)uVar9 <= iVar8)) break;
    puVar7 = (undefined8 *)(*(long *)(unaff_x20 + 8) + lVar11);
    uVar18 = *puVar7;
    uVar22 = *(undefined8 *)(*(long *)(unaff_x20 + 8) + (uVar14 & 0xffffffff) * 0x18);
    uVar18 = CONCAT44((float)((ulong)uVar18 >> 0x20) + (float)((ulong)uVar22 >> 0x20),
                      (float)uVar18 + (float)uVar22);
    puVar7 = puVar7 + 1;
    *puVar7 = uVar18;
    func_0x000108384954();
    fVar16 = (float)uVar18;
    fVar20 = (float)uVar22;
    uVar2 = *(uint *)(unaff_x20 + 0x14);
    if (((ulong)puVar7 & 1) == 0) {
      if ((((long)(int)uVar2 <= (long)uVar12) ||
          (FUN_1082d0668(*(long *)(unaff_x20 + 8) + lVar11,-*(int *)(unaff_x19 + 0x90)),
          *(int *)(unaff_x20 + 0x14) <= iVar8)) ||
         (fVar21 = fVar20, fVar17 = fVar16,
         FUN_1082d0668(*(long *)(unaff_x20 + 8) + (uVar14 & 0xffffffff) * 0x18,
                       *(undefined4 *)(unaff_x19 + 0x90)),
         (long)*(int *)(unaff_x20 + 0x14) <= (long)uVar12)) break;
      lVar10 = *(long *)(unaff_x20 + 8) + lVar11;
      *(float *)(lVar10 + 8) = fVar16 + fVar17;
      *(float *)(lVar10 + 0xc) = fVar20 + fVar21;
      func_0x000108384954();
      uVar2 = *(uint *)(unaff_x20 + 0x14);
    }
    else {
      if ((long)(int)uVar2 <= (long)uVar12) break;
      lVar10 = *(long *)(unaff_x20 + 8) + lVar11;
      uVar18 = *(undefined8 *)(lVar10 + 8);
      *(ulong *)(lVar10 + 8) = CONCAT44(-(float)((ulong)uVar18 >> 0x20),-(float)uVar18);
    }
    uVar9 = (ulong)uVar2;
    lVar11 = lVar11 + 0x18;
    uVar5 = uVar12 + 1;
    uVar14 = uVar12;
  }
LAB_1082d10ac:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1082d10b0);
  (*pcVar6)();
}



/* Entry: 1082d10b0; end: 1082d10cb;  */

void FUN_1082d10b0(long param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  int extraout_w8;
  
  if (*(int *)(param_1 + 0x114) == 2 || *(int *)(param_2 + 0x14) < 1) {
    return;
  }
  if (*(int *)(param_2 + 0x14) < 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1082d2314);
    (*pcVar2)();
  }
  func_0x0001082d28d8();
  for (iVar1 = extraout_w8 + -2; -1 < iVar1; iVar1 = iVar1 + -1) {
    FUN_1082d1ef0();
    FUN_1082d1ef0();
    FUN_1082d05c4();
  }
  return;
}



/* Entry: 1082d10cc; end: 1082d1b27;  */

void FUN_1082d10cc(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined8 ******ppppppuVar11;
  long lVar12;
  undefined8 *****pppppuVar13;
  undefined8 *****pppppuVar14;
  undefined8 *****pppppuVar15;
  undefined8 *****pppppuVar16;
  undefined8 *****pppppuVar17;
  undefined8 *****pppppuVar18;
  undefined8 ******ppppppuVar19;
  undefined4 uVar20;
  uint extraout_w8;
  long lVar21;
  ulong uVar22;
  undefined8 ****ppppuVar23;
  float *pfVar24;
  undefined8 *puVar25;
  float *pfVar26;
  ulong uVar27;
  undefined8 ****ppppuVar28;
  long unaff_x19;
  undefined8 *****unaff_x20;
  ulong uVar29;
  ulong uVar30;
  int iVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  undefined8 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 ***pppuStack_268;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  uint *puStack_190;
  undefined2 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 ****ppppuStack_158;
  undefined8 ****ppppuStack_150;
  undefined8 ****ppppuStack_148;
  undefined8 *****pppppuStack_140;
  undefined8 ****ppppuStack_138;
  undefined1 auStack_130 [4];
  uint uStack_12c;
  undefined1 auStack_128 [120];
  uint uStack_b0;
  undefined8 ****appppuStack_a8 [2];
  undefined8 ****ppppuStack_98;
  long lStack_90;
  
  plVar9 = param_3;
  func_0x0001082d28f0();
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x0001083773e0();
  uStack_168 = plVar9[1];
  uStack_170 = (undefined8 *****)*plVar9;
  ppppppuVar19 = (undefined8 ******)&uStack_170;
  FUN_108189c38();
  uVar22 = (ulong)(uint)uStack_170._4_4_;
  fVar32 = ((float)uStack_170 - (float)uStack_170) * uStack_170._4_4_ * (float)uStack_168 *
           uStack_168._4_4_;
  uVar27 = (ulong)(uint)fVar32;
  if (!NAN(fVar32)) {
    func_0x0001082d2860(*(undefined4 *)(*param_3 + 0x30));
    func_0x0001082d2860(unaff_x19 + 0x18);
    func_0x0001082d2860(unaff_x19 + 0x30);
    ppppppuVar19 = (undefined8 ******)(ulong)(*(int *)(*param_3 + 0x30) * 0x12 + 6);
    func_0x00010840f1a4(unaff_x19 + 0x98);
    *(undefined4 *)(unaff_x19 + 0x120) = 0;
    lVar21 = *param_3;
    uStack_1a0 = *(undefined8 *)(lVar21 + 0x28);
    lStack_1b0 = *(long *)(lVar21 + 0x40);
    lStack_1a8 = lStack_1b0 + *(int *)(lVar21 + 0x48);
    puStack_190 = (uint *)0x0;
    if (*(long *)(lVar21 + 0x58) != 0) {
      puStack_190 = (uint *)(*(long *)(lVar21 + 0x58) + -4);
    }
    uStack_178 = 0;
    uStack_198 = uStack_1a0;
    while( true ) {
      plVar9 = &lStack_1b0;
      FUN_1082d1ffc();
      fVar32 = (float)uVar27;
      if (plVar9 == (long *)0x0) break;
      switch((int)ppppppuVar19) {
      case 1:
        ppppppuVar19 = (undefined8 ******)0x2;
        puVar10 = (undefined1 *)plVar9;
        FUN_1082d213c();
        if (((ulong)puVar10 & 1) == 0) {
          uVar27 = (ulong)*(uint *)((long)plVar9 + 8);
          uVar22 = (ulong)*(uint *)((long)plVar9 + 0xc);
          FUN_1082d24d0();
          pppppuStack_140 = (undefined8 *****)CONCAT44((int)uVar22,(int)uVar27);
          ppppppuVar19 = &pppppuStack_140;
          FUN_1082d23d4();
        }
        break;
      case 2:
        func_0x0001082d287c();
        if (((ulong)plVar9 & 1) == 0) {
          func_0x0001082d282c();
          ppppppuVar19 = &pppppuStack_140;
          FUN_1082d24f4();
        }
        break;
      case 3:
        func_0x0001082d287c();
        if (((ulong)plVar9 & 1) == 0) {
          uVar27 = (ulong)*puStack_190;
          func_0x0001082d282c();
          uStack_b0 = 0;
          ppppppuVar11 = &pppppuStack_140;
          ppppppuVar19 = (undefined8 ******)appppuStack_a8;
          uVar22 = 0x3e800000;
          pppppuStack_140 = &ppppuStack_138;
          FUN_1082d25dc();
          pppppuVar13 = *ppppppuVar11;
          uVar2 = uStack_b0;
          for (uVar8 = uStack_b0 & ((int)uStack_b0 >> 0x1f ^ 0xffffffffU); uVar2 = uVar2 - 1,
              uVar8 != 0; uVar8 = uVar8 - 1) {
            ppppppuVar19 = ppppppuVar11 + 1;
            ppppuStack_158 = pppppuVar13;
            ppppppuVar11 = ppppppuVar11 + 2;
            ppppuStack_150 = *ppppppuVar19;
            ppppppuVar19 = (undefined8 ******)&ppppuStack_98;
            if (uVar2 != 0) {
              ppppppuVar19 = ppppppuVar11;
            }
            ppppuStack_148 = *ppppppuVar19;
            ppppppuVar19 = (undefined8 ******)&ppppuStack_158;
            FUN_1082d24f4();
            pppppuVar13 = (undefined8 *****)ppppuStack_148;
          }
          FUN_1082d2744(&pppppuStack_140);
        }
        break;
      case 4:
        ppppppuVar19 = (undefined8 ******)0x4;
        FUN_1082d213c();
        if (((ulong)plVar9 & 1) == 0) {
          FUN_1083645e0();
          ppppppuVar19 = &pppppuStack_140;
          FUN_1082d2ba4(0x3e4ccccd,ppppppuVar19);
          func_0x0001082d2894();
          appppuStack_a8[0] = *(undefined8 *****)(unaff_x19 + 0x130);
          ppppppuVar11 = &pppppuStack_140;
          uVar27 = 0x3d23d70b;
          FUN_1082d2c48(ppppppuVar11,&ppppuStack_138,auStack_130,auStack_128,appppuStack_a8,
                        ppppppuVar19);
          func_0x0001082d2894();
          uVar30 = 0;
          iVar7 = (int)ppppppuVar11;
          uVar8 = iVar7 - 1;
          while( true ) {
            if (uVar30 == (uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU))) break;
            if ((long)*(int *)(unaff_x19 + 0x13c) <= (long)uVar30) goto LAB_1082d1ac4;
            func_0x0001082d28c0();
            uVar30 = uVar30 + 1;
          }
          if (iVar7 < 1 || *(int *)(unaff_x19 + 0x13c) < iVar7) goto LAB_1082d1ac4;
          ppppppuVar19 = (undefined8 ******)(*(long *)(unaff_x19 + 0x130) + (ulong)uVar8 * 8);
          FUN_1082d23d4();
        }
      }
    }
    uVar8 = *(uint *)(unaff_x19 + 0x14);
    bVar5 = (int)(uVar8 - 2) < 0;
    if (1 < (int)uVar8) {
      pfVar24 = *(float **)(unaff_x19 + 8);
      uVar27 = (ulong)(uint)(pfVar24[(ulong)uVar8 * 2 + -2] - *pfVar24);
      uVar22 = (ulong)(uint)(pfVar24[(ulong)uVar8 * 2 + -1] - pfVar24[1]);
      func_0x0001082d2778(uVar27,uVar22);
      if (bVar5) {
        FUN_1082d0590();
      }
      *(undefined4 *)(unaff_x19 + 0x120) = 0;
      while( true ) {
        fVar32 = (float)uVar27;
        ppppppuVar19 = (undefined8 ******)(ulong)*(uint *)(unaff_x19 + 0x14);
        if ((int)*(uint *)(unaff_x19 + 0x14) < 3) break;
        lVar21 = *(long *)(unaff_x19 + 8) + (long)ppppppuVar19 * 8;
        lVar12 = lVar21 + -0x10;
        FUN_1082d2178(lVar12,lVar21 + -8,*(long *)(unaff_x19 + 8),unaff_x19 + 0x120);
        if ((int)lVar12 == 0) {
          iVar7 = *(int *)(unaff_x19 + 0x14);
          if (((iVar7 == 0) || (iVar7 < 1)) || (iVar7 == 1)) goto LAB_1082d1ac4;
          iVar7 = (int)*(undefined8 *)(unaff_x19 + 8) + iVar7 * 8 + -8;
          FUN_1082d2178();
          fVar32 = (float)uVar27;
          if (iVar7 == 0) {
            ppppppuVar19 = (undefined8 ******)(ulong)*(uint *)(unaff_x19 + 0x14);
            if (2 < (int)*(uint *)(unaff_x19 + 0x14)) {
              FUN_1082d0628(unaff_x19 + 0x60);
              uVar8 = *(uint *)(unaff_x19 + 0x14);
              if (((int)uVar8 < 2) || (uVar2 = *(uint *)(unaff_x19 + 0x74), (int)uVar2 < 1))
              goto LAB_1082d1ac4;
              puVar25 = *(undefined8 **)(unaff_x19 + 8);
              pfVar24 = *(float **)(unaff_x19 + 0x68);
              *(ulong *)pfVar24 =
                   CONCAT44((float)((ulong)puVar25[1] >> 0x20) - (float)((ulong)*puVar25 >> 0x20),
                            (float)puVar25[1] - (float)*puVar25);
              fVar37 = (float)*puVar25 - (float)puVar25[(ulong)uVar8 - 1];
              fVar38 = (float)((ulong)*puVar25 >> 0x20) -
                       (float)((ulong)puVar25[(ulong)uVar8 - 1] >> 0x20);
              *(ulong *)(pfVar24 + (ulong)uVar2 * 2 + -2) = CONCAT44(fVar38,fVar37);
              fVar32 = *pfVar24;
              uVar27 = (ulong)(uint)pfVar24[1];
              uVar20 = 0xffffffff;
              if (0.0 < -(fVar37 * pfVar24[1]) + fVar32 * fVar38) {
                uVar20 = 1;
              }
              *(undefined4 *)(unaff_x19 + 0x90) = uVar20;
              FUN_1082d062c();
              uVar22 = (ulong)*(uint *)(unaff_x19 + 0x74);
              if ((int)*(uint *)(unaff_x19 + 0x74) < 1) goto LAB_1082d1ac4;
              lVar21 = 0;
              pfVar26 = *(float **)(unaff_x19 + 0x68);
              *pfVar26 = fVar32;
              pfVar24 = pfVar26;
              lVar12 = 1;
              goto LAB_1082d1520;
            }
            break;
          }
          func_0x0001082d2808();
          func_0x0001082d2808(unaff_x19 + 0x18);
          func_0x0001082d2808(unaff_x19 + 0x30);
          func_0x0001082d2808(unaff_x19 + 0x48);
        }
        else {
          FUN_1082d0590();
        }
      }
      if (((int)ppppppuVar19 == 2) && (*(int *)(unaff_x19 + 0x114) != 1)) {
        *(undefined4 *)(unaff_x19 + 0x90) = 0xffffffff;
        FUN_1082d0628(unaff_x19 + 0x60,2);
        if ((*(int *)(unaff_x19 + 0x14) < 2) || (*(int *)(unaff_x19 + 0x74) < 1))
        goto LAB_1082d1ac4;
        pfVar24 = *(float **)(unaff_x19 + 8);
        bVar5 = *(int *)(unaff_x19 + 0x90) != 1;
        fVar32 = pfVar24[2] - *pfVar24;
        if (bVar5) {
          fVar32 = -(pfVar24[2] - *pfVar24);
        }
        fVar37 = -(pfVar24[3] - pfVar24[1]);
        if (bVar5) {
          fVar37 = pfVar24[3] - pfVar24[1];
        }
        pfVar24 = *(float **)(unaff_x19 + 0x68);
        *pfVar24 = fVar37;
        pfVar24[1] = fVar32;
        func_0x000108384954();
        if ((*(int *)(unaff_x19 + 0x74) < 1) || (*(int *)(unaff_x19 + 0x74) == 1))
        goto LAB_1082d1ac4;
        uVar34 = **(undefined8 **)(unaff_x19 + 0x68);
        uVar27 = CONCAT44(-(float)((ulong)uVar34 >> 0x20),-(float)uVar34);
        (*(undefined8 **)(unaff_x19 + 0x68))[1] = uVar27;
        pppppuStack_140 = (undefined8 *****)0x0;
        func_0x0001082d2888();
        pppppuStack_140 = (undefined8 ******)0x0;
        func_0x0001082d2888();
        goto LAB_1082d1678;
      }
    }
  }
  pppppuVar13 = (undefined8 *****)0x0;
  goto LAB_1082d15a0;
LAB_1082d1520:
  pfVar24[1] = (float)uVar27;
  iVar7 = (int)uVar22;
  if (iVar7 + -1 <= lVar12) goto LAB_1082d17f8;
  if ((long)*(int *)(unaff_x19 + 0x14) <= lVar12 + 1) goto LAB_1082d1ac4;
  lVar1 = *(long *)(unaff_x19 + 8) + lVar21;
  uVar36 = *(undefined8 *)(lVar1 + 8);
  uVar34 = *(undefined8 *)(lVar1 + 0x10);
  fVar32 = (float)uVar34 - (float)uVar36;
  uVar27 = (ulong)(uint)((float)((ulong)uVar34 >> 0x20) - (float)((ulong)uVar36 >> 0x20));
  FUN_1082d062c(*(undefined4 *)(unaff_x19 + 0x90));
  uVar22 = (ulong)*(int *)(unaff_x19 + 0x74);
  if ((long)uVar22 <= lVar12) goto LAB_1082d1ac4;
  pfVar26 = *(float **)(unaff_x19 + 0x68);
  pfVar24 = pfVar26 + lVar12 * 2;
  *(float *)((long)pfVar26 + lVar21 + 8) = fVar32;
  lVar21 = lVar21 + 8;
  lVar12 = lVar12 + 1;
  goto LAB_1082d1520;
LAB_1082d17f8:
  if (iVar7 == 0) {
LAB_1082d1ac4:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1082d1ac8);
    (*pcVar4)();
  }
  uVar27 = (ulong)(uint)pfVar26[(long)iVar7 * 2 + -2];
  fVar32 = pfVar26[(long)iVar7 * 2 + -1];
  FUN_1082d062c(*(undefined4 *)(unaff_x19 + 0x90));
  if (*(int *)(unaff_x19 + 0x74) == 0) goto LAB_1082d1ac4;
  lVar21 = *(long *)(unaff_x19 + 0x68) + (long)*(int *)(unaff_x19 + 0x74) * 8;
  *(int *)(lVar21 + -8) = (int)uVar27;
  *(float *)(lVar21 + -4) = fVar32;
  func_0x00010840f168(unaff_x19 + 0x78);
  iVar7 = *(int *)(unaff_x19 + 0x8c);
  uVar22 = 0;
  uVar30 = (ulong)(iVar7 - 1);
  while (uVar29 = uVar22, (long)uVar29 < (long)iVar7) {
    if ((((long)*(int *)(unaff_x19 + 0x74) <= (long)uVar29) ||
        (uVar8 = (uint)uVar30, (int)uVar8 < 0)) || (*(int *)(unaff_x19 + 0x74) <= (int)uVar8))
    goto LAB_1082d1ac4;
    puVar25 = (undefined8 *)(*(long *)(unaff_x19 + 0x80) + uVar29 * 8);
    uVar34 = *(undefined8 *)(*(long *)(unaff_x19 + 0x68) + uVar29 * 8);
    uVar36 = *(undefined8 *)(*(long *)(unaff_x19 + 0x68) + (uVar30 & 0xffffffff) * 8);
    uVar34 = CONCAT44((float)((ulong)uVar34 >> 0x20) + (float)((ulong)uVar36 >> 0x20),
                      (float)uVar34 + (float)uVar36);
    *puVar25 = uVar34;
    func_0x000108384954();
    fVar32 = (float)uVar34;
    fVar37 = (float)uVar36;
    uVar30 = uVar30 & 0xffffffff;
    if (((ulong)puVar25 & 1) == 0) {
      if ((((long)*(int *)(unaff_x19 + 0x74) <= (long)uVar29) ||
          (FUN_1082d0668(*(long *)(unaff_x19 + 0x68) + uVar29 * 8,-*(int *)(unaff_x19 + 0x90)),
          *(int *)(unaff_x19 + 0x74) <= (int)uVar8)) ||
         (fVar38 = fVar37, fVar33 = fVar32,
         FUN_1082d0668(*(long *)(unaff_x19 + 0x68) + uVar30 * 8,*(undefined4 *)(unaff_x19 + 0x90)),
         (long)*(int *)(unaff_x19 + 0x8c) <= (long)uVar29)) goto LAB_1082d1ac4;
      uVar27 = (ulong)(uint)(fVar32 + fVar33);
      pfVar24 = (float *)(*(long *)(unaff_x19 + 0x80) + uVar29 * 8);
      *pfVar24 = fVar32 + fVar33;
      pfVar24[1] = fVar37 + fVar38;
      func_0x000108384954();
    }
    else {
      if ((long)*(int *)(unaff_x19 + 0x8c) <= (long)uVar29) goto LAB_1082d1ac4;
      uVar34 = *(undefined8 *)(*(long *)(unaff_x19 + 0x80) + uVar29 * 8);
      uVar27 = CONCAT44(-(float)((ulong)uVar34 >> 0x20),-(float)uVar34);
      *(ulong *)(*(long *)(unaff_x19 + 0x80) + uVar29 * 8) = uVar27;
    }
    if ((int)*(uint *)(unaff_x19 + 0x5c) <= (int)uVar8) goto LAB_1082d1ac4;
    lVar21 = *(long *)(unaff_x19 + 0x50);
    if (*(int *)(lVar21 + uVar30 * 4) == 1) {
      if (*(uint *)(unaff_x19 + 0x5c) <= uVar29) goto LAB_1082d1ac4;
      if (*(int *)(lVar21 + uVar29 * 4) == 0) {
        *(undefined4 *)(lVar21 + uVar30 * 4) = 0;
      }
      else {
        if (((long)(int)*(uint *)(unaff_x19 + 0x74) <= (long)uVar29) ||
           (*(uint *)(unaff_x19 + 0x74) <= uVar8)) goto LAB_1082d1ac4;
        pfVar24 = (float *)(*(long *)(unaff_x19 + 0x68) + uVar29 * 8);
        pfVar26 = (float *)(*(long *)(unaff_x19 + 0x68) + uVar30 * 8);
        fVar32 = ABS(pfVar24[1] * pfVar26[1] + *pfVar26 * *pfVar24);
        uVar27 = (ulong)(uint)fVar32;
        if (fVar32 <= 0.8) {
          *(undefined4 *)(lVar21 + uVar30 * 4) = 0;
          *(undefined4 *)(lVar21 + uVar29 * 4) = 0;
        }
        else {
          *(undefined4 *)(lVar21 + uVar30 * 4) = 2;
          *(undefined4 *)(lVar21 + uVar29 * 4) = 2;
        }
      }
    }
    iVar7 = *(int *)(unaff_x19 + 0x8c);
    uVar30 = uVar29;
    uVar22 = uVar29 + 1;
  }
LAB_1082d1678:
  func_0x00010840f1a4(unaff_x19 + 0xf8,*(undefined4 *)(unaff_x19 + 0x14));
  func_0x00010840f1a4(unaff_x19 + 0xb0,*(undefined4 *)(unaff_x19 + 0x14));
  for (iVar7 = 0; fVar37 = (float)uVar27, iVar7 < *(int *)(unaff_x19 + 0x14); iVar7 = iVar7 + 1) {
    lVar21 = unaff_x19 + 0xb0;
    FUN_1082d2658();
    *(int *)(lVar21 + 0x10) = iVar7;
    *(int *)(lVar21 + 0x14) = iVar7;
  }
  lVar12 = 0;
  for (lVar21 = 0; lVar21 < *(int *)(unaff_x19 + 0xc4); lVar21 = lVar21 + 1) {
    if (((*(int *)(unaff_x19 + 0x74) <= lVar21) ||
        (*(undefined8 *)(*(long *)(unaff_x19 + 0xb8) + lVar12) =
              *(undefined8 *)(*(long *)(unaff_x19 + 0x68) + lVar21 * 8),
        *(int *)(unaff_x19 + 0x8c) <= lVar21)) || (*(int *)(unaff_x19 + 0xc4) <= lVar21))
    goto LAB_1082d1ac4;
    *(undefined8 *)(*(long *)(unaff_x19 + 0xb8) + lVar12 + 8) =
         *(undefined8 *)(*(long *)(unaff_x19 + 0x80) + lVar21 * 8);
    lVar12 = lVar12 + 0x18;
  }
  if (*(int *)(unaff_x19 + 0x114) == 2) {
    FUN_108365614();
    fVar32 = fVar37 * *(float *)(unaff_x19 + 0x110);
    func_0x0001082d283c(fVar32);
    func_0x0001082d28e4();
    func_0x0001082d27d0(fVar32 + -0.5,0x3f800000);
    func_0x0001082d28cc();
    lStack_1b0 = CONCAT44(lStack_1b0._4_4_,0x18);
    lStack_1a8 = 0;
    uStack_1a0 = 0;
    FUN_1082d1b28(0x3f800000,0);
    _free(lStack_1a8);
LAB_1082d1a20:
    _free(ppppuStack_138);
    *(undefined4 *)(unaff_x19 + 0x8c) = 0;
    ppppuStack_138 = unaff_x20;
    if ((*(int *)(unaff_x19 + 0x114) == 2) && (2 < *(int *)(unaff_x19 + 0xc4))) {
      fVar37 = fVar37 * *(float *)(unaff_x19 + 0x110);
      func_0x0001082d28e4();
      fVar37 = fVar37 + -0.5;
      ppppppuVar19 = (undefined8 ******)(unaff_x19 + 0xb0);
      fVar32 = 0.0;
      uVar22 = 0x3f800000;
      FUN_1082d0684(0,0x3f800000,fVar37,0x3f800000);
      if ((int)unaff_x19 != 0) {
        uVar22 = 0x3f800000;
        ppppppuVar19 = (undefined8 ******)pppppuStack_140;
        fVar32 = fVar37;
        FUN_1082d0684(fVar37,0x3f800000,fVar37 + 1.0,0);
      }
    }
    else {
      ppppppuVar19 = (undefined8 ******)(unaff_x19 + 0xb0);
      fVar32 = 0.0;
      uVar22 = 0x3f000000;
      func_0x0001082d2854(0,0x3f000000,0x3f000000);
    }
  }
  else {
    if (*(int *)(unaff_x19 + 0x114) != 3) {
      func_0x0001082d283c();
      fVar37 = 0.0;
      func_0x0001082d27d0(0x3f000000,0);
      goto LAB_1082d1a20;
    }
    FUN_108365614();
    fVar32 = *(float *)(unaff_x19 + 0x110);
    fVar37 = fVar37 * fVar32;
    func_0x0001082d283c(fVar37);
    func_0x0001082d28e4();
    func_0x0001082d27d0(fVar37 + fVar32,0);
    *(undefined4 *)(unaff_x19 + 0xac) = 0;
    func_0x0001082d28cc();
    uVar22 = (ulong)(uStack_12c & ((int)uStack_12c >> 0x1f ^ 0xffffffffU));
    puVar3 = (undefined4 *)((long)ppppuStack_138 + 0x14);
    for (uVar27 = uVar22; uVar27 != 0; uVar27 = uVar27 - 1) {
      *puVar3 = puVar3[-1];
      puVar3 = puVar3 + 6;
    }
    func_0x00010840f168(unaff_x19 + 0x60,*(int *)(unaff_x19 + 0x74) + uStack_12c);
    pppppuVar13 = (undefined8 *****)(ppppuStack_138 + 2);
    for (; uVar22 != 0; uVar22 = uVar22 - 1) {
      uVar8 = *(uint *)pppppuVar13;
      if (((int)uVar8 < 0) || (*(int *)(unaff_x19 + 0x74) <= (int)uVar8)) goto LAB_1082d1ac4;
      *(undefined8 *****)(*(long *)(unaff_x19 + 0x68) + (ulong)uVar8 * 8) = pppppuVar13[-2];
      pppppuVar13 = pppppuVar13 + 3;
    }
    *(undefined4 *)(unaff_x19 + 0x8c) = 0;
    ppppppuVar19 = &pppppuStack_140;
    fVar32 = 0.0;
    uVar22 = 0;
    func_0x0001082d2854(0,0,0x3f800000);
    _free(ppppuStack_138);
  }
  pppppuVar13 = (undefined8 *****)0x1;
  unaff_x20 = (undefined8 *****)ppppuStack_138;
LAB_1082d15a0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  _free(unaff_x20);
  pppppuVar14 = pppppuVar13;
  __Unwind_Resume();
  if (*(int *)((long)ppppppuVar19 + 0x14) != 0) {
    fVar37 = fVar32;
    func_0x0001082d28f0();
    fVar38 = fVar32 * *(float *)((long)pppppuVar14 + 0x11c);
    lVar21 = 8;
    uVar27 = 0;
    uVar30 = (ulong)(extraout_w8 - 1);
    while (uVar29 = uVar27, (extraout_w8 & ((int)extraout_w8 >> 0x1f ^ 0xffffffffU)) != uVar29) {
      pppppuVar14 = unaff_x20;
      func_0x0001082d279c();
      if (((((int)uVar30 < 0) || (*(int *)((long)unaff_x20 + 0x14) <= (int)uVar30)) ||
          (uVar8 = (uint)pppppuVar14, (int)uVar8 < 0)) ||
         (*(int *)((long)pppppuVar13 + 0x14) <= (int)uVar8)) goto LAB_1082d1eec;
      ppppuVar23 = unaff_x20[1];
      ppppuVar28 = ppppuVar23 + (uVar30 & 0xffffffff) * 3;
      fVar42 = *(float *)ppppuVar28;
      fVar41 = *(float *)((long)ppppuVar28 + 4);
      fVar33 = *(float *)(pppppuVar13[1] + ((ulong)pppppuVar14 & 0xffffffff));
      fVar35 = *(float *)((long)(pppppuVar13[1] + ((ulong)pppppuVar14 & 0xffffffff)) + 4);
      fStack_258 = fVar32 * SUB84(*ppppuVar28,0) + fVar33;
      fStack_254 = fVar32 * (float)((ulong)*ppppuVar28 >> 0x20) + fVar35;
      if ((long)*(int *)((long)unaff_x20 + 0x14) <= (long)uVar29) goto LAB_1082d1eec;
      pfVar24 = (float *)((long)ppppuVar23 + lVar21 + -8);
      fVar39 = *pfVar24;
      fVar40 = *(float *)((long)ppppuVar23 + lVar21 + -4);
      fVar33 = fVar33 + fVar32 * *pfVar24;
      fVar35 = fVar35 + fVar32 * fVar40;
      fStack_260 = fVar33;
      fStack_25c = fVar35;
      if (*(int *)((long)pppppuVar13 + 0x5c) <= (int)uVar8) goto LAB_1082d1eec;
      iVar7 = *(int *)((long)pppppuVar13[10] + ((ulong)pppppuVar14 & 0xffffffff) * 4);
      pppppuVar15 = pppppuVar14;
      func_0x0001082d27f4();
      pppppuVar16 = pppppuVar15;
      func_0x0001082d284c();
      iVar31 = (int)pppppuVar15;
      *(int *)(pppppuVar16 + 2) = iVar31;
      *(uint *)((long)pppppuVar16 + 0x14) = uVar8;
      if ((iVar31 < 0) ||
         (bVar5 = iVar31 - *(int *)((long)pppppuVar13 + 0x14) < 0,
         *(int *)((long)pppppuVar13 + 0x14) <= iVar31)) goto LAB_1082d1eec;
      func_0x0001082d2778(fVar33 - *(float *)(pppppuVar13[1] + ((ulong)pppppuVar15 & 0xffffffff)),
                          fVar35 - *(float *)((long)(pppppuVar13[1] +
                                                    ((ulong)pppppuVar15 & 0xffffffff)) + 4));
      if (!bVar5) {
        func_0x0001082d27f4();
        if ((int)pppppuVar16 != iVar31) {
          fVar41 = fVar41 * fVar40;
          if (iVar7 == 2) {
            if (0.8 <= fVar41 + fVar39 * fVar42) goto LAB_1082d1e18;
            if ((long)*(int *)((long)unaff_x20 + 0x14) <= (long)uVar29) goto LAB_1082d1eec;
            pppuStack_268 = *(undefined8 ****)((long)unaff_x20[1] + lVar21);
            pppppuVar17 = (undefined8 *****)&pppuStack_268;
            func_0x000108384970(-fVar32);
            uVar2 = *(uint *)((long)pppppuVar13 + 0x14);
            bVar5 = uVar2 <= uVar8;
            uVar6 = (int)(uVar8 - uVar2) < 0;
            if (((int)uVar2 <= (int)uVar8) || (func_0x0001082d2810(), bVar5)) goto LAB_1082d1eec;
            func_0x0001082d27a4();
            if (!(bool)uVar6) {
LAB_1082d1dc4:
              pppppuVar17 = pppppuVar13;
              FUN_1082d04fc(uVar22,pppppuVar13,&pppuStack_268,0,0);
              pppppuVar18 = pppppuVar17;
              func_0x0001082d284c();
              *(int *)(pppppuVar18 + 2) = (int)pppppuVar17;
              *(uint *)((long)pppppuVar18 + 0x14) = uVar8;
              FUN_1082d05c4(pppppuVar13,pppppuVar14,pppppuVar15,pppppuVar17);
              pppppuVar15 = pppppuVar17;
              goto LAB_1082d1e18;
            }
          }
          else {
            if (*(char *)(pppppuVar13 + 0x23) != '\x02') {
              pppppuVar17 = pppppuVar16;
              if (*(char *)(pppppuVar13 + 0x23) != '\0') goto LAB_1082d1e20;
              if ((long)*(int *)((long)unaff_x20 + 0x14) <= (long)uVar29) goto LAB_1082d1eec;
              pppuStack_268 = *(undefined8 ****)((long)unaff_x20[1] + lVar21);
              fVar41 = fVar41 + fVar39 * fVar42 + 1.0;
              func_0x0001082d28e4();
              fVar33 = 0.0;
              if (0.0 <= fVar41) {
                fVar33 = fVar41;
              }
              fVar33 = (fVar37 * fVar37) / fVar33;
              if (fVar33 <= fVar38 * fVar38) {
                func_0x000108384970(-SQRT(fVar33),&pppuStack_268);
                uVar2 = *(uint *)((long)pppppuVar13 + 0x14);
                bVar5 = uVar2 <= uVar8;
                uVar6 = (int)(uVar8 - uVar2) < 0;
                if (((int)uVar2 <= (int)uVar8) || (func_0x0001082d2810(), bVar5))
                goto LAB_1082d1eec;
                func_0x0001082d27a4();
                if (!(bool)uVar6) goto LAB_1082d1dc4;
              }
            }
LAB_1082d1e18:
            pppppuVar17 = pppppuVar13;
            FUN_1082d05c4(pppppuVar13,pppppuVar14,pppppuVar15,pppppuVar16);
          }
LAB_1082d1e20:
          func_0x0001082d284c();
          *(int *)(pppppuVar17 + 2) = (int)pppppuVar16;
          *(uint *)((long)pppppuVar17 + 0x14) = uVar8;
        }
      }
      if (lVar21 != 8) {
        FUN_1082d1ef0(unaff_x20,uVar30);
        func_0x0001082d28fc();
        FUN_1082d05c4();
        func_0x0001082d28fc();
        FUN_1082d05c4();
      }
      lVar21 = lVar21 + 0x18;
      uVar30 = uVar29;
      uVar27 = uVar29 + 1;
    }
    FUN_1082d1ef0(unaff_x20,extraout_w8 - 1);
    if (*(int *)((long)unaff_x20 + 0x14) < 1) {
LAB_1082d1eec:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1082d1ef0);
      (*pcVar4)();
    }
    func_0x0001082d28fc();
    FUN_1082d05c4();
    func_0x0001082d28fc();
    FUN_1082d05c4();
  }
  return;
}



/* Entry: 1082d1b28; end: 1082d1eef;  */

void FUN_1082d1b28(float param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint extraout_w8;
  float *pfVar12;
  float *pfVar13;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uStack_b8;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  
  if (*(int *)(param_4 + 0x14) != 0) {
    fVar18 = param_1;
    func_0x0001082d28f0();
    fVar19 = param_1 * *(float *)(param_3 + 0x11c);
    lVar14 = 8;
    uVar4 = 0;
    uVar16 = (ulong)(extraout_w8 - 1);
    while (uVar15 = uVar4, (extraout_w8 & ((int)extraout_w8 >> 0x1f ^ 0xffffffffU)) != uVar15) {
      puVar10 = unaff_x20;
      func_0x0001082d279c();
      if (((((int)uVar16 < 0) || (*(int *)((long)unaff_x20 + 0x14) <= (int)uVar16)) ||
          (uVar8 = (uint)puVar10, (int)uVar8 < 0)) ||
         (*(int *)((long)unaff_x19 + 0x14) <= (int)uVar8)) goto LAB_1082d1eec;
      pfVar13 = (float *)(unaff_x20[1] + (uVar16 & 0xffffffff) * 0x18);
      fVar25 = *pfVar13;
      fVar24 = pfVar13[1];
      pfVar12 = (float *)(unaff_x19[1] + ((ulong)puVar10 & 0xffffffff) * 8);
      fVar20 = *pfVar12;
      fVar21 = pfVar12[1];
      fStack_a8 = param_1 * (float)*(undefined8 *)pfVar13 + fVar20;
      fStack_a4 = param_1 * (float)((ulong)*(undefined8 *)pfVar13 >> 0x20) + fVar21;
      if ((long)*(int *)((long)unaff_x20 + 0x14) <= (long)uVar15) goto LAB_1082d1eec;
      lVar1 = unaff_x20[1] + lVar14;
      pfVar12 = (float *)(lVar1 + -8);
      fVar22 = *pfVar12;
      fVar23 = *(float *)(lVar1 + -4);
      fVar20 = fVar20 + param_1 * *pfVar12;
      fVar21 = fVar21 + param_1 * fVar23;
      fStack_b0 = fVar20;
      fStack_ac = fVar21;
      if (*(int *)((long)unaff_x19 + 0x5c) <= (int)uVar8) goto LAB_1082d1eec;
      iVar3 = *(int *)(unaff_x19[10] + ((ulong)puVar10 & 0xffffffff) * 4);
      func_0x0001082d27f4();
      puVar11 = puVar10;
      func_0x0001082d284c();
      iVar17 = (int)puVar10;
      *(int *)(puVar11 + 2) = iVar17;
      *(uint *)((long)puVar11 + 0x14) = uVar8;
      if ((iVar17 < 0) ||
         (bVar6 = iVar17 - *(int *)((long)unaff_x19 + 0x14) < 0,
         *(int *)((long)unaff_x19 + 0x14) <= iVar17)) goto LAB_1082d1eec;
      pfVar12 = (float *)(unaff_x19[1] + ((ulong)puVar10 & 0xffffffff) * 8);
      func_0x0001082d2778(fVar20 - *pfVar12,fVar21 - pfVar12[1]);
      if (!bVar6) {
        func_0x0001082d27f4();
        iVar9 = (int)puVar11;
        if (iVar9 != iVar17) {
          fVar24 = fVar24 * fVar23;
          if (iVar3 == 2) {
            if (0.8 <= fVar24 + fVar22 * fVar25) goto LAB_1082d1e18;
            if ((long)*(int *)((long)unaff_x20 + 0x14) <= (long)uVar15) goto LAB_1082d1eec;
            uStack_b8 = *(undefined8 *)(unaff_x20[1] + lVar14);
            puVar11 = &uStack_b8;
            func_0x000108384970(-param_1);
            uVar2 = *(uint *)((long)unaff_x19 + 0x14);
            bVar6 = uVar2 <= uVar8;
            uVar7 = (int)(uVar8 - uVar2) < 0;
            if (((int)uVar2 <= (int)uVar8) || (func_0x0001082d2810(), bVar6)) goto LAB_1082d1eec;
            func_0x0001082d27a4();
            if (!(bool)uVar7) {
LAB_1082d1dc4:
              puVar10 = unaff_x19;
              FUN_1082d04fc(param_2);
              puVar11 = puVar10;
              func_0x0001082d284c();
              *(int *)(puVar11 + 2) = (int)puVar10;
              *(uint *)((long)puVar11 + 0x14) = uVar8;
              FUN_1082d05c4();
              goto LAB_1082d1e18;
            }
          }
          else {
            if (*(char *)(unaff_x19 + 0x23) != '\x02') {
              if (*(char *)(unaff_x19 + 0x23) != '\0') goto LAB_1082d1e20;
              if ((long)*(int *)((long)unaff_x20 + 0x14) <= (long)uVar15) goto LAB_1082d1eec;
              uStack_b8 = *(undefined8 *)(unaff_x20[1] + lVar14);
              fVar24 = fVar24 + fVar22 * fVar25 + 1.0;
              func_0x0001082d28e4();
              fVar20 = 0.0;
              if (0.0 <= fVar24) {
                fVar20 = fVar24;
              }
              fVar20 = (fVar18 * fVar18) / fVar20;
              if (fVar20 <= fVar19 * fVar19) {
                func_0x000108384970(-SQRT(fVar20),&uStack_b8);
                uVar2 = *(uint *)((long)unaff_x19 + 0x14);
                bVar6 = uVar2 <= uVar8;
                uVar7 = (int)(uVar8 - uVar2) < 0;
                if (((int)uVar2 <= (int)uVar8) || (func_0x0001082d2810(), bVar6))
                goto LAB_1082d1eec;
                func_0x0001082d27a4();
                if (!(bool)uVar7) goto LAB_1082d1dc4;
              }
            }
LAB_1082d1e18:
            puVar11 = unaff_x19;
            FUN_1082d05c4();
          }
LAB_1082d1e20:
          func_0x0001082d284c();
          *(int *)(puVar11 + 2) = iVar9;
          *(uint *)((long)puVar11 + 0x14) = uVar8;
        }
      }
      if (lVar14 != 8) {
        FUN_1082d1ef0();
        func_0x0001082d28fc();
        FUN_1082d05c4();
        func_0x0001082d28fc();
        FUN_1082d05c4();
      }
      lVar14 = lVar14 + 0x18;
      uVar16 = uVar15;
      uVar4 = uVar15 + 1;
    }
    FUN_1082d1ef0();
    if (*(int *)((long)unaff_x20 + 0x14) < 1) {
LAB_1082d1eec:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1082d1ef0);
      (*pcVar5)();
    }
    func_0x0001082d28fc();
    FUN_1082d05c4();
    func_0x0001082d28fc();
    FUN_1082d05c4();
  }
  return;
}



/* Entry: 1082d1ef0; end: 1082d1ffb;  */

undefined4 FUN_1082d1ef0(long param_1,uint param_2)

{
  code *pcVar1;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x14))) {
    return *(undefined4 *)(*(long *)(param_1 + 8) + (ulong)param_2 * 0x18 + 0x10);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082d1f18);
  (*pcVar1)();
}



/* Entry: 1082d1ffc; end: 1082d213b;  */

void FUN_1082d1ffc(long *param_1)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  long *plStack_28;
  
  pbVar3 = (byte *)*param_1;
  while( true ) {
    while( true ) {
      plStack_28 = param_1;
      if (pbVar3 == (byte *)param_1[1]) {
        if ((char)param_1[7] != '\x01') {
          return;
        }
        FUN_1082d262c(&plStack_28);
        return;
      }
      pbVar1 = pbVar3 + 1;
      *param_1 = (long)pbVar1;
      bVar2 = *pbVar3;
      pbVar3 = pbVar1;
      if (bVar2 != 5) break;
      if ((char)param_1[7] == '\x01') {
        FUN_1082d262c(&plStack_28);
        return;
      }
    }
    if (bVar2 != 0) {
      *(undefined2 *)(param_1 + 7) = 1;
      param_1[2] = param_1[2] + ((ulong)bVar2 + 2 >> 1) * 8;
      param_1[4] = param_1[4] + (ulong)((bVar2 - 1 & (uint)bVar2) >> 1) * 4;
      return;
    }
    if ((char)param_1[7] == '\x01') break;
    lVar4 = param_1[2];
    param_1[2] = lVar4 + 8;
    param_1[3] = lVar4;
    *(undefined1 *)((long)param_1 + 0x39) = 1;
  }
  FUN_1082d262c(&plStack_28);
  lVar4 = param_1[2];
  param_1[2] = lVar4 + 8;
  param_1[3] = lVar4;
  return;
}



/* Entry: 1082d213c; end: 1082d2177;  */

bool FUN_1082d213c(float *param_1,int param_2)

{
  float *pfVar1;
  bool bVar2;
  long lVar3;
  float *pfVar4;
  float fVar5;
  
  lVar3 = 0;
  pfVar4 = param_1 + 3;
  do {
    lVar3 = lVar3 + 1;
    if (param_2 <= lVar3) break;
    pfVar1 = pfVar4 + -1;
    fVar5 = *pfVar4;
    pfVar4 = pfVar4 + 2;
    bVar2 = false;
    if ((*param_1 == *pfVar1) && (bVar2 = false, !NAN(param_1[1]) && !NAN(fVar5))) {
      bVar2 = param_1[1] == fVar5;
    }
  } while (bVar2);
  return param_2 <= lVar3;
}



/* Entry: 1082d2178; end: 1082d2253;  */

undefined8 FUN_1082d2178(float *param_1,float *param_2,float *param_3,float *param_4)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fStack_48;
  float fStack_44;
  
  fVar5 = *param_3 - *param_1;
  fVar6 = param_3[1] - param_1[1];
  fStack_44 = -fVar5;
  fStack_48 = fVar6;
  func_0x000108384954(&fStack_48);
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar4 = *param_4 +
          ABS((fStack_44 * fVar3 + fVar2 * fStack_48) -
              (fStack_44 * param_1[1] + *param_1 * fStack_48));
  if (((0.0625 <= fVar4) || (fVar6 * (fVar3 - param_1[1]) + (fVar2 - *param_1) * fVar5 <= 0.0)) ||
     (fVar6 * (param_3[1] - fVar3) + (*param_3 - fVar2) * fVar5 <= 0.0)) {
    uVar1 = 0;
  }
  else {
    *param_4 = fVar4;
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 1082d2254; end: 1082d228f;  */

void FUN_1082d2254(void)

{
  code *pcVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001082d28d8();
  func_0x0001081e8e18();
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    *(undefined8 *)(*(long *)(unaff_x20 + 8) + (long)*(int *)(unaff_x20 + 0x14) * 8 + -8) =
         *unaff_x19;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082d2290);
  (*pcVar1)();
}



/* Entry: 1082d2290; end: 1082d237b;  */

void FUN_1082d2290(undefined8 param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  int extraout_w8;
  
  if (*(int *)(param_2 + 0x14) < 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1082d2314);
    (*pcVar2)();
  }
  func_0x0001082d28d8();
  for (iVar1 = extraout_w8 + -2; -1 < iVar1; iVar1 = iVar1 + -1) {
    FUN_1082d1ef0();
    FUN_1082d1ef0();
    FUN_1082d05c4();
  }
  return;
}



/* Entry: 1082d237c; end: 1082d23d3;  */

int FUN_1082d237c(long param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 != 0) {
    lVar3 = *(long *)(param_1 + 8) + (long)iVar1 * 0x14;
    *(undefined4 *)(lVar3 + -0xc) = 0xffffffff;
    *(undefined4 *)(lVar3 + -8) = param_2;
    *(undefined1 *)(lVar3 + -4) = 1;
    return iVar1 + -1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1082d23ac);
  (*pcVar2)();
}



/* Entry: 1082d23d4; end: 1082d24cf;  */

undefined8 * FUN_1082d23d4(undefined8 *param_1,float *param_2,undefined4 param_3)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 uVar4;
  long lVar5;
  undefined8 *puVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  uVar2 = *(uint *)((long)param_1 + 0x14);
  if (0 < (int)uVar2) {
    lVar1 = param_1[1] + (ulong)uVar2 * 8;
    fVar7 = *param_2 - *(float *)(lVar1 + -8);
    fVar9 = param_2[1] - *(float *)(lVar1 + -4);
    if (fVar9 * fVar9 + fVar7 * fVar7 < 0.00390625) {
      return param_1;
    }
    uVar4 = (int)(uVar2 - 1) < 0;
    if (uVar2 != 1) {
      lVar5 = lVar1 + -0x10;
      FUN_1082d2178(lVar5,(float *)(lVar1 + -8),param_2,param_1 + 0x24);
      if ((int)lVar5 != 0) {
        puVar6 = param_1;
        FUN_1082d0590(param_1);
        if (*(int *)((long)param_1 + 0x14) == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1082d24d0);
          (*pcVar3)();
        }
        lVar1 = param_1[1] + (long)*(int *)((long)param_1 + 0x14) * 8;
        FUN_1082d2778(*param_2 - *(float *)(lVar1 + -8),param_2[1] - *(float *)(lVar1 + -4));
        if ((bool)uVar4) {
          return puVar6;
        }
        goto LAB_1082d2498;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
LAB_1082d2498:
  uVar8 = 0x3f000000;
  if (*(int *)((long)param_1 + 0x114) != 1) {
    uVar8 = 0x3f800000;
  }
  uVar2 = *(uint *)((long)param_1 + 0x14);
  puVar6 = param_1;
  func_0x0001081e8e18();
  *puVar6 = *(undefined8 *)param_2;
  puVar6 = param_1 + 3;
  FUN_1081e8ea0();
  *(undefined4 *)puVar6 = uVar8;
  func_0x00010840f37c(param_1 + 6);
  *(undefined1 *)(param_1[7] + (long)*(int *)((long)param_1 + 0x44) + -1) = 0;
  func_0x00010840f37c(param_1 + 9);
  *(undefined4 *)(param_1[10] + (long)*(int *)((long)param_1 + 0x5c) * 4 + -4) = param_3;
  return (undefined8 *)(ulong)uVar2;
}



/* Entry: 1082d24d0; end: 1082d24f3;  */

undefined4 FUN_1082d24d0(undefined8 param_1)

{
  undefined4 auStack_18 [2];
  
  FUN_10836464c(param_1,auStack_18);
  return auStack_18[0];
}



/* Entry: 1082d24f4; end: 1082d25db;  */

void FUN_1082d24f4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x19;
  int iVar2;
  undefined8 unaff_x20;
  ulong uVar3;
  
  func_0x0001082d28f0();
  FUN_1082d2a40(0x3e4ccccd,param_2);
  func_0x00010840f168(unaff_x19 + 0x128,param_2);
  FUN_1082d2ac0(0x3d23d70b);
  func_0x00010840f168(unaff_x19 + 0x128,unaff_x20);
  uVar3 = 0;
  iVar2 = (int)unaff_x20;
  while( true ) {
    if (uVar3 == (iVar2 - 1U & ((int)(iVar2 - 1U) >> 0x1f ^ 0xffffffffU))) break;
    if ((long)*(int *)(unaff_x19 + 0x13c) <= (long)uVar3) goto LAB_1082d25d8;
    func_0x0001082d28c0();
    uVar3 = uVar3 + 1;
  }
  if (0 < iVar2 && iVar2 <= *(int *)(unaff_x19 + 0x13c)) {
    FUN_1082d23d4();
    return;
  }
LAB_1082d25d8:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1082d25dc);
  (*pcVar1)();
}



/* Entry: 1082d25dc; end: 1082d262b;  */

void FUN_1082d25dc(float param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  float fStack_18;
  
  uStack_28 = param_4[1];
  uStack_30 = *param_4;
  uStack_20 = param_4[2];
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (!NAN(param_1 - param_1)) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(param_1)) {
      bVar1 = param_1 < 0.0;
      bVar2 = param_1 == 0.0;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    param_1 = 1.0;
  }
  fStack_18 = param_1;
  FUN_1082d268c(param_2,param_3,&uStack_30);
  return;
}



/* Entry: 1082d262c; end: 1082d2657;  */

void FUN_1082d262c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 0x28) = *(undefined8 *)(*(long *)(lVar1 + 0x10) + -8);
  *(undefined8 *)(lVar1 + 0x30) = **(undefined8 **)(lVar1 + 0x18);
  *(undefined2 *)(lVar1 + 0x38) = 0x100;
  return;
}



/* Entry: 1082d2658; end: 1082d268b;  */

long FUN_1082d2658(long param_1)

{
  func_0x00010840f37c();
  return *(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x14) * 0x18 + -0x18;
}



/* Entry: 1082d268c; end: 1082d2743;  */

long FUN_1082d268c(undefined8 param_1,uint param_2)

{
  long lVar1;
  undefined4 unaff_w19;
  long unaff_x20;
  
  func_0x0001082d28d8();
  FUN_108352f4c();
  *(int *)(unaff_x20 + 0x90) = 1 << (ulong)(param_2 & 0x1f);
  lVar1 = unaff_x20;
  func_0x0001082d26f0();
  FUN_108353014();
  *(undefined4 *)(unaff_x20 + 0x90) = unaff_w19;
  return lVar1;
}



/* Entry: 1082d2744; end: 1082d2777;  */

long * FUN_1082d2744(long *param_1)

{
  if ((long *)*param_1 != param_1 + 1) {
    _free();
  }
  return param_1;
}



/* Entry: 1082d2778; end: 1082d2907;  */

void FUN_1082d2778(void)

{
  return;
}



/* Entry: 1082d2908; end: 1082d2a3f;  */

float FUN_1082d2908(ulong param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  float fVar4;
  ulong uVar5;
  float fVar6;
  undefined8 uStack_a8;
  float fStack_a0;
  undefined8 uStack_9c;
  float fStack_94;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  
  uVar5 = param_1;
  FUN_108365614();
  fVar6 = (float)uVar5;
  if (fVar6 < 0.0) {
    for (uVar3 = 0; fVar6 = (float)uVar5, uVar3 != 4; uVar3 = uVar3 + 1) {
      lVar1 = 8;
      if ((uVar3 & 1) != 0) {
        lVar1 = 0;
      }
      fStack_a0 = *(float *)((long)param_3 + lVar1);
      lVar1 = 4;
      if (1 < uVar3) {
        lVar1 = 0xc;
      }
      fStack_94 = *(float *)((long)param_3 + lVar1);
      uStack_a8 = 0x3f800000;
      bVar2 = false;
      if ((fStack_94 == 0.0) && (bVar2 = false, !NAN(fStack_a0))) {
        bVar2 = fStack_a0 == 0.0;
      }
      uStack_84 = 0x10;
      if (!bVar2) {
        uStack_84 = 0x11;
      }
      uStack_9c = 0x3f80000000000000;
      uStack_90 = 0;
      uStack_88 = 0x3f800000;
      FUN_108363f68(&uStack_a8,param_2);
      fVar4 = 1.0;
      FUN_108365100(&uStack_a8);
      if (fVar4 <= fVar6) {
        fVar4 = fVar6;
      }
      uVar5 = (ulong)(uint)fVar4;
    }
  }
  if (fVar6 <= 0.0) {
    fVar4 = (float)param_3[1] - (float)*param_3;
    fVar6 = (float)((ulong)param_3[1] >> 0x20) - (float)((ulong)*param_3 >> 0x20);
    if (fVar6 <= fVar4) {
      fVar6 = fVar4;
    }
  }
  else {
    fVar6 = (float)param_1 / fVar6;
  }
  fVar4 = 0.0001;
  if (0.0001 <= fVar6) {
    fVar4 = fVar6;
  }
  return fVar4;
}



/* Entry: 1082d2a40; end: 1082d2abf;  */

int FUN_1082d2a40(float param_1,undefined8 *param_2)

{
  uint extraout_w8;
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)param_2[1];
  fVar3 = (float)((ulong)param_2[1] >> 0x20);
  fVar2 = ((float)*param_2 - (fVar2 + fVar2)) + (float)param_2[2];
  fVar4 = ((float)((ulong)*param_2 >> 0x20) - (fVar3 + fVar3)) + (float)((ulong)param_2[2] >> 0x20);
  fVar3 = fVar2 * 1.0 + fVar4 * 0.0;
  fVar2 = fVar2 * 0.0 + fVar4 * 1.0;
  if ((1.0 / param_1) * (1.0 / param_1) * 0.0625 * (fVar3 * fVar3 + fVar2 * fVar2) <= 1.0) {
    uVar1 = 0;
  }
  else {
    func_0x0001082d3898();
    uVar1 = extraout_w8;
  }
  if (9 < uVar1) {
    uVar1 = 10;
  }
  return 1 << (ulong)(uVar1 & 0x1f);
}



/* Entry: 1082d2ac0; end: 1082d2ba3;  */

undefined8 *
FUN_1082d2ac0(float param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 param_5,uint param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 uVar3;
  undefined8 *puVar4;
  uint extraout_w8;
  undefined8 extraout_x8;
  uint uVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  undefined8 uStack_58;
  
  func_0x0001082d37b8();
  uVar3 = param_6 == 2;
  puVar4 = param_2;
  fVar6 = param_1;
  uStack_58 = extraout_x8;
  if (1 < param_6) {
    puVar4 = param_3;
    func_0x0001082d37c8();
    uVar3 = fVar6 == param_1;
    if (param_1 <= fVar6) {
      uVar7 = CONCAT44((float)((ulong)*param_3 >> 0x20) + (float)((ulong)*param_2 >> 0x20),
                       (float)*param_3 + (float)*param_2);
      func_0x0001082d3884(uVar7,0x3f0000003f000000,(int)*param_4);
      uVar7 = CONCAT44((float)((ulong)uVar7 >> 0x20) * 0.5,(float)uVar7 * 0.5);
      uStack_78 = uVar7;
      func_0x0001082d3838(param_2,auStack_70,&uStack_78);
      fVar6 = (float)uVar7;
      puVar4 = &uStack_78;
      func_0x0001082d3838(puVar4,(ulong)auStack_70 | 8,param_4);
      puVar4 = (undefined8 *)(ulong)(uint)((int)puVar4 + (int)param_2);
      goto LAB_1082d2b78;
    }
  }
  func_0x0001082d3808();
LAB_1082d2b78:
  func_0x0001082d3794(uStack_58);
  if ((bool)uVar3) {
    return puVar4;
  }
  ___stack_chk_fail();
  fVar9 = (float)puVar4[1];
  fVar8 = ((float)*puVar4 - (fVar9 + fVar9)) + *(float *)(puVar4 + 2);
  fVar10 = ((float)((ulong)*puVar4 >> 0x20) -
           (*(float *)((long)puVar4 + 0xc) + *(float *)((long)puVar4 + 0xc))) +
           *(float *)((long)puVar4 + 0x14);
  fVar11 = (fVar9 - (*(float *)(puVar4 + 2) + *(float *)(puVar4 + 2))) + *(float *)(puVar4 + 3);
  fVar12 = ((float)((ulong)puVar4[1] >> 0x20) -
           (*(float *)((long)puVar4 + 0x14) + *(float *)((long)puVar4 + 0x14))) +
           *(float *)((long)puVar4 + 0x1c);
  fVar9 = fVar8 * 1.0 + fVar10 * 0.0;
  fVar8 = fVar8 * 0.0 + fVar10 * 1.0;
  fVar10 = fVar11 * 1.0 + fVar12 * 0.0;
  fVar11 = fVar11 * 0.0 + fVar12 * 1.0;
  fVar9 = fVar9 * fVar9;
  fVar8 = fVar8 * fVar8;
  fVar10 = fVar10 * fVar10;
  fVar11 = fVar11 * fVar11;
  auVar13._4_4_ = fVar8;
  auVar13._0_4_ = fVar9;
  auVar13._8_4_ = fVar10;
  auVar13._12_4_ = fVar11;
  auVar14._4_4_ = fVar8;
  auVar14._0_4_ = fVar9;
  auVar14._8_4_ = fVar10;
  auVar14._12_4_ = fVar11;
  auVar13 = NEON_ext(auVar13,auVar14,4,1);
  auVar1._4_4_ = fVar8;
  auVar1._0_4_ = fVar9;
  auVar1._8_4_ = fVar10;
  auVar1._12_4_ = fVar11;
  auVar2._4_4_ = fVar8;
  auVar2._0_4_ = fVar9;
  auVar2._8_4_ = fVar10;
  auVar2._12_4_ = fVar11;
  auVar14 = NEON_ext(auVar1,auVar2,8,1);
  fVar9 = auVar13._0_4_ + fVar9;
  fVar8 = auVar13._4_4_ + auVar14._4_4_;
  if (fVar8 <= fVar9) {
    fVar8 = fVar9;
  }
  if ((1.0 / fVar6) * (1.0 / fVar6) * 0.5625 * fVar8 <= 1.0) {
    uVar5 = 0;
  }
  else {
    func_0x0001082d3898(FUN_1082d2ba4);
    uVar5 = extraout_w8;
  }
  if (9 < uVar5) {
    uVar5 = 10;
  }
  return (undefined8 *)(ulong)(uint)(1 << (ulong)(uVar5 & 0x1f));
}



/* Entry: 1082d2ba4; end: 1082d2c47;  */

int FUN_1082d2ba4(float param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint extraout_w8;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  fVar5 = (float)param_2[1];
  fVar4 = ((float)*param_2 - (fVar5 + fVar5)) + *(float *)(param_2 + 2);
  fVar6 = ((float)((ulong)*param_2 >> 0x20) -
          (*(float *)((long)param_2 + 0xc) + *(float *)((long)param_2 + 0xc))) +
          *(float *)((long)param_2 + 0x14);
  fVar7 = (fVar5 - (*(float *)(param_2 + 2) + *(float *)(param_2 + 2))) + *(float *)(param_2 + 3);
  fVar8 = ((float)((ulong)param_2[1] >> 0x20) -
          (*(float *)((long)param_2 + 0x14) + *(float *)((long)param_2 + 0x14))) +
          *(float *)((long)param_2 + 0x1c);
  fVar5 = fVar4 * 1.0 + fVar6 * 0.0;
  fVar4 = fVar4 * 0.0 + fVar6 * 1.0;
  fVar6 = fVar7 * 1.0 + fVar8 * 0.0;
  fVar7 = fVar7 * 0.0 + fVar8 * 1.0;
  fVar5 = fVar5 * fVar5;
  fVar4 = fVar4 * fVar4;
  fVar6 = fVar6 * fVar6;
  fVar7 = fVar7 * fVar7;
  auVar9._4_4_ = fVar4;
  auVar9._0_4_ = fVar5;
  auVar9._8_4_ = fVar6;
  auVar9._12_4_ = fVar7;
  auVar10._4_4_ = fVar4;
  auVar10._0_4_ = fVar5;
  auVar10._8_4_ = fVar6;
  auVar10._12_4_ = fVar7;
  auVar9 = NEON_ext(auVar9,auVar10,4,1);
  auVar1._4_4_ = fVar4;
  auVar1._0_4_ = fVar5;
  auVar1._8_4_ = fVar6;
  auVar1._12_4_ = fVar7;
  auVar2._4_4_ = fVar4;
  auVar2._0_4_ = fVar5;
  auVar2._8_4_ = fVar6;
  auVar2._12_4_ = fVar7;
  auVar10 = NEON_ext(auVar1,auVar2,8,1);
  fVar5 = auVar9._0_4_ + fVar5;
  fVar4 = auVar9._4_4_ + auVar10._4_4_;
  if (fVar4 <= fVar5) {
    fVar4 = fVar5;
  }
  if ((1.0 / param_1) * (1.0 / param_1) * 0.5625 * fVar4 <= 1.0) {
    uVar3 = 0;
  }
  else {
    func_0x0001082d3898();
    uVar3 = extraout_w8;
  }
  if (9 < uVar3) {
    uVar3 = 10;
  }
  return 1 << (ulong)(uVar3 & 0x1f);
}



/* Entry: 1082d2c48; end: 1082d2d73;  */

void FUN_1082d2c48(float param_1,float *param_2,float *param_3,float *param_4,undefined8 *param_5,
                  undefined8 param_6,uint param_7)

{
  float *pfVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  float *pfVar8;
  float *pfVar9;
  uint uVar10;
  undefined8 extraout_x8;
  float fVar11;
  float fVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  func_0x0001082d37b8();
  uVar6 = param_7 == 2;
  pfVar8 = param_2;
  pfVar9 = param_3;
  uStack_58 = extraout_x8;
  if (param_7 < 2) {
LAB_1082d2c7c:
    func_0x0001082d3808();
  }
  else {
    fVar11 = param_1;
    func_0x0001082d37c8(param_3);
    uVar6 = fVar11 == param_1;
    if (fVar11 < param_1) {
      pfVar8 = param_4;
      func_0x0001082d37c8();
      uVar6 = fVar11 == param_1;
      if (fVar11 < param_1) goto LAB_1082d2c7c;
    }
    fVar20 = (float)*(undefined8 *)param_3;
    fVar21 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
    fVar19 = (float)*(undefined8 *)param_4;
    fVar11 = (fVar20 + (float)*(undefined8 *)param_2) * 0.5;
    fVar12 = (fVar21 + (float)((ulong)*(undefined8 *)param_2 >> 0x20)) * 0.5;
    fVar20 = (fVar20 + fVar19) * 0.5;
    fVar21 = (fVar21 + (float)((ulong)*(undefined8 *)param_4 >> 0x20)) * 0.5;
    uStack_68 = CONCAT44(fVar21,fVar20);
    uStack_70 = CONCAT44(fVar12,fVar11);
    uVar16 = 0x3f0000003f000000;
    auVar14._0_8_ =
         CONCAT44((param_4[1] + (float)((ulong)*param_5 >> 0x20)) * 0.5,
                  (fVar19 + (float)*param_5) * 0.5);
    auVar14._8_8_ = 0;
    auVar15._4_4_ = fVar12;
    auVar15._0_4_ = fVar11;
    auVar15._8_4_ = fVar20;
    auVar15._12_4_ = fVar21;
    auVar15 = NEON_ext(auVar15,auVar14,8,1);
    fVar11 = fVar11 + auVar15._0_4_;
    fVar12 = fVar12 + auVar15._4_4_;
    uStack_60 = auVar14._0_8_;
    func_0x0001082d3884();
    uStack_88 = CONCAT44(fVar12 * (float)((ulong)uVar16 >> 0x20),fVar11 * (float)uVar16);
    func_0x0001082d3828(param_2,&uStack_70,auStack_80,&uStack_88);
    puVar7 = &uStack_88;
    pfVar9 = (float *)((ulong)auStack_80 | 8);
    func_0x0001082d3828(puVar7,pfVar9,&uStack_60,param_5);
    pfVar8 = (float *)(ulong)(uint)((int)puVar7 + (int)param_2);
  }
  func_0x0001082d3794(uStack_58);
  if ((bool)uVar6) {
    return;
  }
  ___stack_chk_fail();
  fVar11 = *pfVar9;
  fVar12 = pfVar9[1];
  dVar17 = (double)fVar11;
  dVar18 = (double)fVar12;
  fVar20 = pfVar9[2];
  fVar22 = pfVar9[3];
  dVar23 = (double)fVar20;
  dVar24 = (double)fVar22;
  fVar19 = pfVar9[4];
  fVar21 = pfVar9[5];
  dVar26 = (double)fVar19;
  dVar27 = (double)fVar21;
  dVar25 = -(dVar27 * dVar17) + dVar18 * dVar26;
  dVar13 = -(dVar18 * dVar23) + dVar24 * dVar17;
  dVar28 = dVar13 + -(dVar24 * dVar26) + dVar27 * dVar23 + dVar25;
  fVar29 = ABS((float)dVar28);
  bVar4 = false;
  bVar5 = false;
  if (!NAN(dVar28 - dVar28)) {
    bVar4 = false;
    bVar5 = true;
    if (!NAN(fVar29)) {
      bVar4 = fVar29 == 5.9604645e-08;
      bVar5 = 5.9604645e-08 <= fVar29;
    }
  }
  if (bVar5 && !bVar4) {
    dVar28 = 1.0 / dVar28;
    *pfVar8 = (float)(((dVar18 - dVar24) + (dVar27 - dVar18) * 0.5) * dVar28);
    dVar26 = ((dVar23 - dVar17) + (dVar17 - dVar26) * 0.5) * dVar28;
    dVar25 = (dVar13 + dVar25 * 0.5) * dVar28;
    auVar3._8_4_ = SUB84(dVar25,0);
    auVar3._0_8_ = dVar26;
    auVar3._12_4_ = (int)((ulong)dVar25 >> 0x20);
    *(ulong *)(pfVar8 + 3) =
         CONCAT44((float)((dVar23 - dVar17) * dVar28),(float)((dVar18 - dVar24) * dVar28));
    *(ulong *)(pfVar8 + 1) = CONCAT44((float)auVar3._8_8_,(float)dVar26);
    fVar11 = (float)(dVar13 * dVar28);
  }
  else {
    fVar29 = (fVar12 - fVar22) * (fVar12 - fVar22) + (fVar11 - fVar20) * (fVar11 - fVar20);
    fVar22 = (fVar22 - fVar21) * (fVar22 - fVar21) + (fVar20 - fVar19) * (fVar20 - fVar19);
    fVar20 = fVar22;
    if (fVar22 <= fVar29) {
      fVar20 = fVar29;
    }
    fVar12 = (fVar21 - fVar12) * (fVar21 - fVar12) + (fVar19 - fVar11) * (fVar19 - fVar11);
    fVar11 = fVar12;
    if (fVar12 <= fVar20) {
      fVar11 = fVar20;
    }
    if (fVar11 <= 0.0) {
      pfVar8[2] = 100.0;
      pfVar8[3] = 0.0;
      pfVar8[0] = 0.0;
      pfVar8[1] = 0.0;
      pfVar8[4] = 0.0;
      fVar11 = 100.0;
    }
    else {
      uVar10 = 2;
      if (fVar12 <= fVar20) {
        uVar10 = (uint)(fVar29 < fVar22);
      }
      uVar2 = 0;
      if (uVar10 != 2) {
        uVar2 = uVar10 + 1;
      }
      pfVar1 = pfVar9 + (ulong)uVar10 * 2;
      fVar11 = pfVar9[(ulong)uVar2 * 2] - *pfVar1;
      fVar12 = (pfVar9 + (ulong)uVar2 * 2)[1] - pfVar1[1];
      pfVar8[0] = 0.0;
      pfVar8[1] = 0.0;
      pfVar8[2] = 0.0;
      pfVar8[3] = fVar12;
      pfVar8[4] = -fVar11;
      fVar11 = -(fVar12 * *pfVar1) - -(fVar11 * pfVar1[1]);
    }
  }
  pfVar8[5] = fVar11;
  return;
}



/* Entry: 1082d2d74; end: 1082d3007;  */

void FUN_1082d2d74(float *param_1,float *param_2)

{
  float *pfVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar6 = *param_2;
  fVar8 = param_2[1];
  fVar12 = param_2[2];
  fVar14 = param_2[3];
  fVar11 = param_2[4];
  fVar13 = param_2[5];
  fVar10 = -(fVar13 * fVar6) + fVar8 * fVar11;
  fVar9 = -(fVar8 * fVar12) + fVar14 * fVar6;
  fVar7 = fVar9 + -(fVar14 * fVar11) + fVar13 * fVar12 + fVar10;
  fVar15 = ABS(fVar7);
  bVar3 = false;
  bVar4 = false;
  if (!NAN(fVar7 - fVar7)) {
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar15)) {
      bVar3 = fVar15 == 5.9604645e-08;
      bVar4 = 5.9604645e-08 <= fVar15;
    }
  }
  if (bVar4 && !bVar3) {
    fVar7 = 1.0 / fVar7;
    *param_1 = ((fVar8 - fVar14) + (fVar13 - fVar8) * 0.5) * fVar7;
    *(ulong *)(param_1 + 3) = CONCAT44((fVar12 - fVar6) * fVar7,(fVar8 - fVar14) * fVar7);
    *(ulong *)(param_1 + 1) =
         CONCAT44((fVar9 + fVar10 * 0.5) * fVar7,((fVar12 - fVar6) + (fVar6 - fVar11) * 0.5) * fVar7
                 );
    fVar9 = fVar9 * fVar7;
  }
  else {
    fVar9 = (fVar8 - fVar14) * (fVar8 - fVar14) + (fVar6 - fVar12) * (fVar6 - fVar12);
    fVar10 = (fVar14 - fVar13) * (fVar14 - fVar13) + (fVar12 - fVar11) * (fVar12 - fVar11);
    fVar7 = fVar10;
    if (fVar10 <= fVar9) {
      fVar7 = fVar9;
    }
    fVar8 = (fVar13 - fVar8) * (fVar13 - fVar8) + (fVar11 - fVar6) * (fVar11 - fVar6);
    fVar6 = fVar8;
    if (fVar8 <= fVar7) {
      fVar6 = fVar7;
    }
    if (fVar6 <= 0.0) {
      param_1[2] = 100.0;
      param_1[3] = 0.0;
      param_1[0] = 0.0;
      param_1[1] = 0.0;
      param_1[4] = 0.0;
      fVar9 = 100.0;
    }
    else {
      uVar5 = 2;
      if (fVar8 <= fVar7) {
        uVar5 = (uint)(fVar9 < fVar10);
      }
      uVar2 = 0;
      if (uVar5 != 2) {
        uVar2 = uVar5 + 1;
      }
      pfVar1 = param_2 + (ulong)uVar5 * 2;
      fVar7 = param_2[(ulong)uVar2 * 2] - *pfVar1;
      fVar9 = (param_2 + (ulong)uVar2 * 2)[1] - pfVar1[1];
      param_1[0] = 0.0;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
      param_1[3] = fVar9;
      param_1[4] = -fVar7;
      fVar9 = -(fVar9 * *pfVar1) - -(fVar7 * pfVar1[1]);
    }
  }
  param_1[5] = fVar9;
  return;
}



/* Entry: 1082d3008; end: 1082d30b3;  */

/* WARNING: Possible PIC construction at 0x0001082d3500: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001082d3504) */

float * FUN_1082d3008(float param_1,float *param_2,float *param_3,float *param_4,undefined8 param_5,
                     undefined8 param_6)

{
  float *pfVar1;
  bool bVar2;
  bool bVar3;
  undefined1 in_ZR;
  undefined1 uVar4;
  undefined1 in_OV;
  undefined1 uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_280 [24];
  float afStack_268 [8];
  undefined8 uStack_248;
  float afStack_1c8 [20];
  undefined8 uStack_178;
  undefined1 auStack_130 [24];
  float afStack_118 [8];
  undefined8 uStack_f8;
  float afStack_98 [20];
  undefined8 uStack_48;
  
  func_0x0001082d37b8();
  uVar15 = (ulong)(uint)*param_2;
  uStack_48 = extraout_x8;
  func_0x0001082d37a8(uVar15,param_2[1]);
  iVar9 = (int)param_6;
  pfVar7 = param_3;
  if (!(bool)in_OV) {
    uVar15 = (ulong)(uint)param_2[2];
    func_0x0001082d37a8(uVar15,param_2[3]);
    iVar9 = (int)param_6;
    pfVar7 = param_3;
    if (!(bool)in_OV) {
      uVar15 = (ulong)(uint)param_2[4];
      func_0x0001082d37a8(uVar15,param_2[5]);
      iVar9 = (int)param_6;
      pfVar7 = param_3;
      if (!(bool)in_OV) {
        func_0x0001082d3848();
        iVar9 = (int)param_6;
        pfVar7 = param_3;
        if (!(bool)in_OV) {
          pfVar6 = afStack_98;
          pfVar7 = afStack_98;
          FUN_108351fc8();
          for (uVar13 = (ulong)((uint)param_2 & ((int)(uint)param_2 >> 0x1f ^ 0xffffffffU));
              iVar9 = (int)param_6, uVar13 != 0; uVar13 = uVar13 - 1) {
            param_4 = (float *)0x0;
            param_5 = 1;
            param_6 = 1;
            param_2 = pfVar6;
            pfVar7 = param_3;
            uVar15 = (ulong)(uint)(param_1 * param_1);
            FUN_1082d30b4();
            pfVar6 = pfVar6 + 6;
          }
        }
      }
    }
  }
  func_0x0001082d3794(uStack_48);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  pfVar6 = param_2;
  pfVar8 = pfVar7;
  pfVar11 = param_4;
  uVar18 = param_5;
  func_0x0001082d37b8();
  iVar12 = (int)uVar18;
  uVar18 = *(undefined8 *)pfVar6;
  fVar17 = (float)uVar18;
  fVar22 = (float)*(undefined8 *)(pfVar6 + 2);
  fVar24 = fVar22 - fVar17;
  fVar16 = (float)((ulong)uVar18 >> 0x20);
  fVar25 = (float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20);
  fVar26 = fVar25 - fVar16;
  fVar19 = (float)*(undefined8 *)(pfVar6 + 6);
  fVar29 = (float)*(undefined8 *)(pfVar6 + 4);
  fVar21 = fVar29 - fVar19;
  fVar20 = (float)((ulong)*(undefined8 *)(pfVar6 + 6) >> 0x20);
  fVar28 = (float)((ulong)*(undefined8 *)(pfVar6 + 4) >> 0x20);
  fVar23 = fVar28 - fVar20;
  fVar27 = fVar23 * fVar23 + fVar21 * fVar21;
  uStack_f8 = extraout_x8_00;
  if (0.00024414062 <= fVar26 * fVar26 + fVar24 * fVar24) {
LAB_1082d3150:
    uVar13 = CONCAT44(fVar25 - fVar20,fVar22 - fVar19);
    uVar18 = NEON_fmov(0x3fc00000,4);
    fVar22 = (float)((ulong)uVar18 >> 0x20);
    uVar13 = uVar13 ^ (uVar13 ^ CONCAT44(fVar23,fVar21)) &
                      ~CONCAT44(-(uint)((int)((uint)(fVar27 < 0.00024414062) << 0x1f) < 0),
                                -(uint)((int)((uint)(fVar27 < 0.00024414062) << 0x1f) < 0));
    fVar17 = fVar17 + fVar24 * (float)uVar18;
    fVar16 = fVar16 + fVar26 * fVar22;
    fVar19 = fVar19 + (float)uVar13 * (float)uVar18;
    fVar20 = fVar20 + (float)(uVar13 >> 0x20) * fVar22;
    iVar14 = (int)param_4;
    fVar22 = 0.0;
    if (iVar14 < 0xb) {
      fVar22 = (fVar16 - fVar20) * (fVar16 - fVar20) + (fVar17 - fVar19) * (fVar17 - fVar19);
    }
    fVar25 = (float)uVar15;
    uVar4 = NAN(fVar22) || NAN(fVar25);
    uVar5 = fVar22 == fVar25;
    if (fVar22 < fVar25) {
      iVar14 = (int)param_5;
      uVar4 = SBORROW4(iVar14,iVar9);
      uVar5 = iVar14 == iVar9;
      uVar13 = CONCAT44((fVar20 + fVar16) * 0.5,(fVar19 + fVar17) * 0.5);
      uVar15 = CONCAT44(fVar20,fVar19) ^
               (CONCAT44(fVar20,fVar19) ^ CONCAT44(fVar16,fVar17)) &
               CONCAT44(-(uint)(iVar14 << 0x1f < 0),-(uint)(iVar14 << 0x1f < 0));
      if ((bool)uVar5) {
        uVar15 = uVar13;
      }
      func_0x0001082d386c();
      fVar17 = (float)uVar13;
      *(undefined8 *)pfVar6 = *(undefined8 *)param_2;
      *(ulong *)(pfVar6 + 2) = uVar15;
      goto LAB_1082d31dc;
    }
    FUN_108351de8(param_2,auStack_130);
    FUN_1082d30b4(uVar15,auStack_130,pfVar7,iVar14 + 1,param_5,0);
    pfVar6 = afStack_118;
    pfVar11 = (float *)(ulong)(iVar14 + 1);
    iVar12 = 0;
    FUN_1082d30b4();
    fVar17 = (float)uVar15;
  }
  else {
    uVar4 = NAN(fVar27);
    uVar5 = fVar27 == 0.00024414062;
    if (0.00024414062 <= fVar27) {
      fVar24 = fVar29 - fVar17;
      fVar26 = fVar28 - fVar16;
      goto LAB_1082d3150;
    }
    func_0x0001082d386c();
    fVar17 = (float)uVar18;
    *(undefined8 *)pfVar6 = *(undefined8 *)param_2;
    *(undefined8 *)(pfVar6 + 2) = *(undefined8 *)param_2;
LAB_1082d31dc:
    *(undefined8 *)(pfVar6 + 4) = *(undefined8 *)(param_2 + 6);
    pfVar7 = pfVar8;
  }
  func_0x0001082d3794(uStack_f8);
  if ((bool)uVar5) {
    return pfVar6;
  }
  ___stack_chk_fail();
  func_0x0001082d37b8();
  fVar16 = *pfVar6;
  uStack_178 = extraout_x8_01;
  func_0x0001082d37a8(fVar16,pfVar6[1]);
  iVar9 = (int)pfVar7;
  pfVar8 = pfVar11;
  if (!(bool)uVar4) {
    fVar16 = pfVar6[2];
    func_0x0001082d37a8(fVar16,pfVar6[3]);
    iVar9 = (int)pfVar7;
    pfVar8 = pfVar11;
    if (!(bool)uVar4) {
      fVar16 = pfVar6[4];
      func_0x0001082d37a8(fVar16,pfVar6[5]);
      iVar9 = (int)pfVar7;
      pfVar8 = pfVar11;
      if (!(bool)uVar4) {
        func_0x0001082d3848();
        iVar9 = (int)pfVar7;
        pfVar8 = pfVar11;
        if (!(bool)uVar4) {
          pfVar1 = afStack_1c8;
          pfVar10 = afStack_1c8;
          FUN_108351fc8();
          for (uVar15 = (ulong)((uint)pfVar6 & ((int)(uint)pfVar6 >> 0x1f ^ 0xffffffffU));
              iVar9 = (int)pfVar10, uVar15 != 0; uVar15 = uVar15 - 1) {
            iVar12 = 0;
            pfVar6 = pfVar1;
            pfVar10 = pfVar7;
            pfVar8 = pfVar11;
            fVar16 = fVar17 * fVar17;
            FUN_1082d3308();
            pfVar1 = pfVar1 + 6;
          }
        }
      }
    }
  }
  func_0x0001082d3794(uStack_178);
  if ((bool)uVar5) {
    return pfVar6;
  }
  ___stack_chk_fail();
  pfVar7 = pfVar6;
  iVar14 = iVar9;
  func_0x0001082d37b8();
  fVar17 = *pfVar7;
  fVar19 = pfVar7[1];
  fVar25 = pfVar7[2] - fVar17;
  fVar21 = pfVar7[3] - fVar19;
  fVar20 = pfVar7[6];
  fVar22 = pfVar7[7];
  fVar23 = pfVar7[4] - fVar20;
  fVar24 = pfVar7[5] - fVar22;
  fVar26 = fVar24 * fVar24 + fVar23 * fVar23;
  uStack_248 = extraout_x8_02;
  if (0.00024414062 <= fVar21 * fVar21 + fVar25 * fVar25) {
LAB_1082d33b0:
    fVar29 = pfVar7[2] - fVar20;
    fVar28 = pfVar7[3] - fVar22;
    fVar27 = fVar28 * fVar28 + fVar29 * fVar29;
    if (0.00024414062 <= fVar26) {
      fVar27 = fVar26;
      fVar29 = fVar23;
      fVar28 = fVar24;
    }
    fVar23 = fVar17 - fVar20;
    fVar24 = fVar19 - fVar22;
    fVar26 = fVar21 * fVar21 + fVar25 * fVar25;
    bVar2 = true;
    if ((0.00024414062 <= fVar27) && (bVar2 = false, !NAN(fVar26))) {
      bVar2 = fVar26 < 0.00024414062;
    }
    if (bVar2) {
LAB_1082d34b4:
      if ((fVar24 * fVar28 + fVar29 * fVar23 < 0.0) ||
         (fVar16 = fVar24 * fVar21 + fVar23 * fVar25, uVar4 = fVar16 == 0.0, 0.0 < fVar16)) {
        iVar14 = 6;
        goto FUN_1082d3644;
      }
      func_0x0001082d37d4();
      func_0x0001082d3878();
      pfVar7[2] = (fVar20 + fVar29 + fVar17 + fVar25) * 0.5;
      pfVar7[3] = (fVar22 + fVar28 + fVar19 + fVar21) * 0.5;
      goto LAB_1082d35e4;
    }
    fVar26 = fVar24 * fVar24 + fVar23 * fVar23;
    fVar27 = 1.0 / fVar26;
    fVar30 = -(fVar23 * fVar21) + fVar24 * fVar25;
    fVar31 = -(fVar23 * fVar28) + fVar24 * fVar29;
    fVar30 = fVar27 * fVar30 * fVar30;
    fVar27 = fVar27 * fVar31 * fVar31;
    bVar2 = false;
    if ((0.00024414062 < fVar26) && (bVar2 = false, !NAN(fVar30) && !NAN(fVar16))) {
      bVar2 = fVar30 < fVar16;
    }
    bVar3 = false;
    if ((bVar2) && (bVar3 = false, !NAN(fVar27) && !NAN(fVar16))) {
      bVar3 = fVar27 < fVar16;
    }
    if (bVar3) goto LAB_1082d34b4;
    fVar25 = fVar25 * 1.5;
    fVar21 = fVar21 * 1.5;
    fVar29 = fVar29 * 1.5;
    fVar28 = fVar28 * 1.5;
    fVar27 = fVar17 + fVar25;
    fVar30 = fVar19 + fVar21;
    fVar24 = fVar20 + fVar29;
    fVar26 = fVar22 + fVar28;
    fVar23 = 0.0;
    if (iVar12 < 0xb) {
      fVar23 = (fVar30 - fVar26) * (fVar30 - fVar26) + (fVar27 - fVar24) * (fVar27 - fVar24);
    }
    uVar4 = fVar23 == fVar16;
    if (fVar23 < fVar16) {
      fVar31 = (fVar24 + fVar27) * 0.5;
      fVar23 = (fVar26 + fVar30) * 0.5;
      fVar32 = -(fVar25 * (fVar23 - fVar19)) + fVar21 * (fVar31 - fVar17);
      if (iVar9 == 0) {
        if (fVar32 <= 0.0) goto LAB_1082d3538;
LAB_1082d355c:
        fVar17 = fVar19 * -fVar25 + fVar17 * fVar21;
        fVar19 = -(fVar29 * fVar22) + fVar20 * fVar28;
        fVar23 = 1.0 / (fVar28 * fVar25 - fVar29 * fVar21);
        fVar31 = fVar23 * (-(fVar29 * fVar17) + fVar19 * fVar25);
        fVar23 = (fVar19 * fVar21 - fVar28 * fVar17) * fVar23;
        fVar17 = (fVar30 - fVar23) * (fVar30 - fVar23) + (fVar27 - fVar31) * (fVar27 - fVar31);
        fVar19 = (fVar26 - fVar23) * (fVar26 - fVar23) + (fVar24 - fVar31) * (fVar24 - fVar31);
        fVar19 = fVar19 + fVar17 + SQRT(fVar17 * fVar19) * 2.0;
        bVar2 = false;
        uVar4 = true;
        bVar3 = false;
        if (iVar12 < 0xb) {
          bVar2 = false;
          uVar4 = false;
          bVar3 = true;
          if (!NAN(fVar19) && !NAN(fVar16)) {
            bVar2 = fVar19 < fVar16;
            uVar4 = fVar19 == fVar16;
            bVar3 = false;
          }
        }
        if (!(bool)uVar4 && bVar2 == bVar3) goto LAB_1082d361c;
      }
      else {
        if (fVar32 < 0.0) goto LAB_1082d355c;
LAB_1082d3538:
        fVar32 = -(fVar29 * (fVar23 - fVar22)) + fVar28 * (fVar31 - fVar20);
        uVar4 = fVar32 == 0.0;
        if (iVar9 == 0) {
          if (0.0 > fVar32) goto LAB_1082d355c;
        }
        else if (!(bool)uVar4 && 0.0 <= fVar32) goto LAB_1082d355c;
      }
      func_0x0001082d37d4();
      func_0x0001082d3878();
      pfVar7[2] = fVar31;
      pfVar7[3] = fVar23;
      goto LAB_1082d35e4;
    }
LAB_1082d361c:
    iVar14 = (int)auStack_280;
    FUN_108351de8(pfVar6);
    func_0x0001082d37e0(auStack_280);
    pfVar7 = afStack_268;
    func_0x0001082d37e0();
  }
  else {
    uVar4 = fVar26 == 0.00024414062;
    if (0.00024414062 <= fVar26) {
      fVar25 = pfVar7[4] - fVar17;
      fVar21 = pfVar7[5] - fVar19;
      goto LAB_1082d33b0;
    }
    func_0x0001082d37d4();
    func_0x0001082d3878();
    *(undefined8 *)(pfVar7 + 2) = *(undefined8 *)pfVar6;
LAB_1082d35e4:
    *(undefined8 *)(pfVar7 + 4) = *(undefined8 *)(pfVar6 + 6);
  }
  func_0x0001082d3794(uStack_248);
  if ((bool)uVar4) {
    return pfVar7;
  }
  ___stack_chk_fail();
  pfVar8 = pfVar7;
FUN_1082d3644:
  func_0x0001082d3680(0x3ff8000000000000);
  fVar17 = pfVar8[2];
  pfVar8[2] = (float)((int)fVar17 + iVar14);
  return (float *)(*(long *)pfVar8 + (long)(int)fVar17 * 8);
}



/* Entry: 1082d30b4; end: 1082d325b;  */

/* WARNING: Possible PIC construction at 0x0001082d3500: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001082d3504) */

float * FUN_1082d30b4(undefined8 param_1,float *param_2,float *param_3,float *param_4,
                     undefined8 param_5,int param_6)

{
  float *pfVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  int iVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_1e0 [24];
  float afStack_1c8 [8];
  undefined8 uStack_1a8;
  float afStack_128 [20];
  undefined8 uStack_d8;
  undefined1 auStack_90 [24];
  float afStack_78 [8];
  undefined8 uStack_58;
  
  pfVar6 = param_2;
  pfVar7 = param_3;
  pfVar10 = param_4;
  uVar16 = param_5;
  func_0x0001082d37b8();
  iVar11 = (int)uVar16;
  uVar16 = *(undefined8 *)pfVar6;
  fVar15 = (float)uVar16;
  fVar21 = (float)*(undefined8 *)(pfVar6 + 2);
  fVar23 = fVar21 - fVar15;
  fVar14 = (float)((ulong)uVar16 >> 0x20);
  fVar24 = (float)((ulong)*(undefined8 *)(pfVar6 + 2) >> 0x20);
  fVar25 = fVar24 - fVar14;
  fVar18 = (float)*(undefined8 *)(pfVar6 + 6);
  fVar28 = (float)*(undefined8 *)(pfVar6 + 4);
  fVar20 = fVar28 - fVar18;
  fVar19 = (float)((ulong)*(undefined8 *)(pfVar6 + 6) >> 0x20);
  fVar27 = (float)((ulong)*(undefined8 *)(pfVar6 + 4) >> 0x20);
  fVar22 = fVar27 - fVar19;
  fVar26 = fVar22 * fVar22 + fVar20 * fVar20;
  uStack_58 = extraout_x8;
  if (0.00024414062 <= fVar25 * fVar25 + fVar23 * fVar23) {
LAB_1082d3150:
    uVar13 = CONCAT44(fVar24 - fVar19,fVar21 - fVar18);
    uVar16 = NEON_fmov(0x3fc00000,4);
    fVar21 = (float)((ulong)uVar16 >> 0x20);
    uVar13 = uVar13 ^ (uVar13 ^ CONCAT44(fVar22,fVar20)) &
                      ~CONCAT44(-(uint)((int)((uint)(fVar26 < 0.00024414062) << 0x1f) < 0),
                                -(uint)((int)((uint)(fVar26 < 0.00024414062) << 0x1f) < 0));
    fVar15 = fVar15 + fVar23 * (float)uVar16;
    fVar14 = fVar14 + fVar25 * fVar21;
    fVar18 = fVar18 + (float)uVar13 * (float)uVar16;
    fVar19 = fVar19 + (float)(uVar13 >> 0x20) * fVar21;
    iVar12 = (int)param_4;
    fVar21 = 0.0;
    if (iVar12 < 0xb) {
      fVar21 = (fVar14 - fVar19) * (fVar14 - fVar19) + (fVar15 - fVar18) * (fVar15 - fVar18);
    }
    fVar24 = (float)param_1;
    uVar4 = NAN(fVar21) || NAN(fVar24);
    uVar5 = fVar21 == fVar24;
    if (fVar21 < fVar24) {
      iVar12 = (int)param_5;
      uVar4 = SBORROW4(iVar12,param_6);
      uVar5 = iVar12 == param_6;
      uVar17 = CONCAT44((fVar19 + fVar14) * 0.5,(fVar18 + fVar15) * 0.5);
      uVar13 = CONCAT44(fVar19,fVar18) ^
               (CONCAT44(fVar19,fVar18) ^ CONCAT44(fVar14,fVar15)) &
               CONCAT44(-(uint)(iVar12 << 0x1f < 0),-(uint)(iVar12 << 0x1f < 0));
      if ((bool)uVar5) {
        uVar13 = uVar17;
      }
      func_0x0001082d386c();
      fVar15 = (float)uVar17;
      *(undefined8 *)pfVar6 = *(undefined8 *)param_2;
      *(ulong *)(pfVar6 + 2) = uVar13;
      goto LAB_1082d31dc;
    }
    FUN_108351de8(param_2,auStack_90);
    FUN_1082d30b4(param_1,auStack_90,param_3,iVar12 + 1,param_5,0);
    pfVar6 = afStack_78;
    pfVar10 = (float *)(ulong)(iVar12 + 1);
    iVar11 = 0;
    FUN_1082d30b4();
    fVar15 = (float)param_1;
  }
  else {
    uVar4 = NAN(fVar26);
    uVar5 = fVar26 == 0.00024414062;
    if (0.00024414062 <= fVar26) {
      fVar23 = fVar28 - fVar15;
      fVar25 = fVar27 - fVar14;
      goto LAB_1082d3150;
    }
    func_0x0001082d386c();
    fVar15 = (float)uVar16;
    *(undefined8 *)pfVar6 = *(undefined8 *)param_2;
    *(undefined8 *)(pfVar6 + 2) = *(undefined8 *)param_2;
LAB_1082d31dc:
    *(undefined8 *)(pfVar6 + 4) = *(undefined8 *)(param_2 + 6);
    param_3 = pfVar7;
  }
  func_0x0001082d3794(uStack_58);
  if ((bool)uVar5) {
    return pfVar6;
  }
  ___stack_chk_fail();
  func_0x0001082d37b8();
  fVar14 = *pfVar6;
  uStack_d8 = extraout_x8_00;
  func_0x0001082d37a8(fVar14,pfVar6[1]);
  iVar12 = (int)param_3;
  pfVar7 = pfVar10;
  if (!(bool)uVar4) {
    fVar14 = pfVar6[2];
    func_0x0001082d37a8(fVar14,pfVar6[3]);
    iVar12 = (int)param_3;
    pfVar7 = pfVar10;
    if (!(bool)uVar4) {
      fVar14 = pfVar6[4];
      func_0x0001082d37a8(fVar14,pfVar6[5]);
      iVar12 = (int)param_3;
      pfVar7 = pfVar10;
      if (!(bool)uVar4) {
        func_0x0001082d3848();
        iVar12 = (int)param_3;
        pfVar7 = pfVar10;
        if (!(bool)uVar4) {
          pfVar1 = afStack_128;
          pfVar9 = afStack_128;
          FUN_108351fc8();
          for (uVar13 = (ulong)((uint)pfVar6 & ((int)(uint)pfVar6 >> 0x1f ^ 0xffffffffU));
              iVar12 = (int)pfVar9, uVar13 != 0; uVar13 = uVar13 - 1) {
            iVar11 = 0;
            pfVar6 = pfVar1;
            pfVar9 = param_3;
            pfVar7 = pfVar10;
            fVar14 = fVar15 * fVar15;
            FUN_1082d3308();
            pfVar1 = pfVar1 + 6;
          }
        }
      }
    }
  }
  func_0x0001082d3794(uStack_d8);
  if ((bool)uVar5) {
    return pfVar6;
  }
  ___stack_chk_fail();
  pfVar10 = pfVar6;
  iVar8 = iVar12;
  func_0x0001082d37b8();
  fVar15 = *pfVar10;
  fVar18 = pfVar10[1];
  fVar24 = pfVar10[2] - fVar15;
  fVar20 = pfVar10[3] - fVar18;
  fVar19 = pfVar10[6];
  fVar21 = pfVar10[7];
  fVar22 = pfVar10[4] - fVar19;
  fVar23 = pfVar10[5] - fVar21;
  fVar25 = fVar23 * fVar23 + fVar22 * fVar22;
  uStack_1a8 = extraout_x8_01;
  if (0.00024414062 <= fVar20 * fVar20 + fVar24 * fVar24) {
LAB_1082d33b0:
    fVar28 = pfVar10[2] - fVar19;
    fVar27 = pfVar10[3] - fVar21;
    fVar26 = fVar27 * fVar27 + fVar28 * fVar28;
    if (0.00024414062 <= fVar25) {
      fVar26 = fVar25;
      fVar28 = fVar22;
      fVar27 = fVar23;
    }
    fVar22 = fVar15 - fVar19;
    fVar23 = fVar18 - fVar21;
    fVar25 = fVar20 * fVar20 + fVar24 * fVar24;
    bVar2 = true;
    if ((0.00024414062 <= fVar26) && (bVar2 = false, !NAN(fVar25))) {
      bVar2 = fVar25 < 0.00024414062;
    }
    if (bVar2) {
LAB_1082d34b4:
      if ((fVar23 * fVar27 + fVar28 * fVar22 < 0.0) ||
         (fVar14 = fVar23 * fVar20 + fVar22 * fVar24, uVar4 = fVar14 == 0.0, 0.0 < fVar14)) {
        iVar8 = 6;
        goto FUN_1082d3644;
      }
      func_0x0001082d37d4();
      func_0x0001082d3878();
      pfVar10[2] = (fVar19 + fVar28 + fVar15 + fVar24) * 0.5;
      pfVar10[3] = (fVar21 + fVar27 + fVar18 + fVar20) * 0.5;
      goto LAB_1082d35e4;
    }
    fVar25 = fVar23 * fVar23 + fVar22 * fVar22;
    fVar26 = 1.0 / fVar25;
    fVar29 = -(fVar22 * fVar20) + fVar23 * fVar24;
    fVar30 = -(fVar22 * fVar27) + fVar23 * fVar28;
    fVar29 = fVar26 * fVar29 * fVar29;
    fVar26 = fVar26 * fVar30 * fVar30;
    bVar2 = false;
    if ((0.00024414062 < fVar25) && (bVar2 = false, !NAN(fVar29) && !NAN(fVar14))) {
      bVar2 = fVar29 < fVar14;
    }
    bVar3 = false;
    if ((bVar2) && (bVar3 = false, !NAN(fVar26) && !NAN(fVar14))) {
      bVar3 = fVar26 < fVar14;
    }
    if (bVar3) goto LAB_1082d34b4;
    fVar24 = fVar24 * 1.5;
    fVar20 = fVar20 * 1.5;
    fVar28 = fVar28 * 1.5;
    fVar27 = fVar27 * 1.5;
    fVar26 = fVar15 + fVar24;
    fVar29 = fVar18 + fVar20;
    fVar23 = fVar19 + fVar28;
    fVar25 = fVar21 + fVar27;
    fVar22 = 0.0;
    if (iVar11 < 0xb) {
      fVar22 = (fVar29 - fVar25) * (fVar29 - fVar25) + (fVar26 - fVar23) * (fVar26 - fVar23);
    }
    uVar4 = fVar22 == fVar14;
    if (fVar22 < fVar14) {
      fVar30 = (fVar23 + fVar26) * 0.5;
      fVar22 = (fVar25 + fVar29) * 0.5;
      fVar31 = -(fVar24 * (fVar22 - fVar18)) + fVar20 * (fVar30 - fVar15);
      if (iVar12 == 0) {
        if (fVar31 <= 0.0) goto LAB_1082d3538;
LAB_1082d355c:
        fVar15 = fVar18 * -fVar24 + fVar15 * fVar20;
        fVar18 = -(fVar28 * fVar21) + fVar19 * fVar27;
        fVar22 = 1.0 / (fVar27 * fVar24 - fVar28 * fVar20);
        fVar30 = fVar22 * (-(fVar28 * fVar15) + fVar18 * fVar24);
        fVar22 = (fVar18 * fVar20 - fVar27 * fVar15) * fVar22;
        fVar15 = (fVar29 - fVar22) * (fVar29 - fVar22) + (fVar26 - fVar30) * (fVar26 - fVar30);
        fVar18 = (fVar25 - fVar22) * (fVar25 - fVar22) + (fVar23 - fVar30) * (fVar23 - fVar30);
        fVar18 = fVar18 + fVar15 + SQRT(fVar15 * fVar18) * 2.0;
        bVar2 = false;
        uVar4 = true;
        bVar3 = false;
        if (iVar11 < 0xb) {
          bVar2 = false;
          uVar4 = false;
          bVar3 = true;
          if (!NAN(fVar18) && !NAN(fVar14)) {
            bVar2 = fVar18 < fVar14;
            uVar4 = fVar18 == fVar14;
            bVar3 = false;
          }
        }
        if (!(bool)uVar4 && bVar2 == bVar3) goto LAB_1082d361c;
      }
      else {
        if (fVar31 < 0.0) goto LAB_1082d355c;
LAB_1082d3538:
        fVar31 = -(fVar28 * (fVar22 - fVar21)) + fVar27 * (fVar30 - fVar19);
        uVar4 = fVar31 == 0.0;
        if (iVar12 == 0) {
          if (0.0 > fVar31) goto LAB_1082d355c;
        }
        else if (!(bool)uVar4 && 0.0 <= fVar31) goto LAB_1082d355c;
      }
      func_0x0001082d37d4();
      func_0x0001082d3878();
      pfVar10[2] = fVar30;
      pfVar10[3] = fVar22;
      goto LAB_1082d35e4;
    }
LAB_1082d361c:
    iVar8 = (int)auStack_1e0;
    FUN_108351de8(pfVar6);
    func_0x0001082d37e0(auStack_1e0);
    pfVar10 = afStack_1c8;
    func_0x0001082d37e0();
  }
  else {
    uVar4 = fVar25 == 0.00024414062;
    if (0.00024414062 <= fVar25) {
      fVar24 = pfVar10[4] - fVar15;
      fVar20 = pfVar10[5] - fVar18;
      goto LAB_1082d33b0;
    }
    func_0x0001082d37d4();
    func_0x0001082d3878();
    *(undefined8 *)(pfVar10 + 2) = *(undefined8 *)pfVar6;
LAB_1082d35e4:
    *(undefined8 *)(pfVar10 + 4) = *(undefined8 *)(pfVar6 + 6);
  }
  func_0x0001082d3794(uStack_1a8);
  if ((bool)uVar4) {
    return pfVar10;
  }
  ___stack_chk_fail();
  pfVar7 = pfVar10;
FUN_1082d3644:
  func_0x0001082d3680(0x3ff8000000000000);
  fVar15 = pfVar7[2];
  pfVar7[2] = (float)((int)fVar15 + iVar8);
  return (float *)(*(long *)pfVar7 + (long)(int)fVar15 * 8);
}



/* Entry: 1082d325c; end: 1082d3307;  */

/* WARNING: Possible PIC construction at 0x0001082d3500: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001082d3504) */

float * FUN_1082d325c(float param_1,float *param_2,float *param_3,float *param_4,int param_5)

{
  bool bVar1;
  bool bVar2;
  undefined1 in_ZR;
  undefined1 uVar3;
  undefined1 in_OV;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_150 [24];
  float afStack_138 [8];
  undefined8 uStack_118;
  float afStack_98 [20];
  undefined8 uStack_48;
  
  func_0x0001082d37b8();
  fVar10 = *param_2;
  uStack_48 = extraout_x8;
  func_0x0001082d37a8(fVar10,param_2[1]);
  iVar6 = (int)param_3;
  pfVar5 = param_4;
  if (!(bool)in_OV) {
    fVar10 = param_2[2];
    func_0x0001082d37a8(fVar10,param_2[3]);
    iVar6 = (int)param_3;
    pfVar5 = param_4;
    if (!(bool)in_OV) {
      fVar10 = param_2[4];
      func_0x0001082d37a8(fVar10,param_2[5]);
      iVar6 = (int)param_3;
      pfVar5 = param_4;
      if (!(bool)in_OV) {
        func_0x0001082d3848();
        iVar6 = (int)param_3;
        pfVar5 = param_4;
        if (!(bool)in_OV) {
          pfVar4 = afStack_98;
          pfVar8 = afStack_98;
          FUN_108351fc8();
          for (uVar9 = (ulong)((uint)param_2 & ((int)(uint)param_2 >> 0x1f ^ 0xffffffffU));
              iVar6 = (int)pfVar8, uVar9 != 0; uVar9 = uVar9 - 1) {
            param_5 = 0;
            param_2 = pfVar4;
            pfVar8 = param_3;
            pfVar5 = param_4;
            fVar10 = param_1 * param_1;
            FUN_1082d3308();
            pfVar4 = pfVar4 + 6;
          }
        }
      }
    }
  }
  func_0x0001082d3794(uStack_48);
  if ((bool)in_ZR) {
    return param_2;
  }
  ___stack_chk_fail();
  pfVar4 = param_2;
  iVar7 = iVar6;
  func_0x0001082d37b8();
  fVar11 = *pfVar4;
  fVar12 = pfVar4[1];
  fVar15 = pfVar4[2] - fVar11;
  fVar16 = pfVar4[3] - fVar12;
  fVar13 = pfVar4[6];
  fVar14 = pfVar4[7];
  fVar18 = pfVar4[4] - fVar13;
  fVar19 = pfVar4[5] - fVar14;
  fVar20 = fVar19 * fVar19 + fVar18 * fVar18;
  uStack_118 = extraout_x8_00;
  if (0.00024414062 <= fVar16 * fVar16 + fVar15 * fVar15) {
LAB_1082d33b0:
    fVar22 = pfVar4[2] - fVar13;
    fVar17 = pfVar4[3] - fVar14;
    fVar21 = fVar17 * fVar17 + fVar22 * fVar22;
    if (0.00024414062 <= fVar20) {
      fVar21 = fVar20;
      fVar22 = fVar18;
      fVar17 = fVar19;
    }
    fVar18 = fVar11 - fVar13;
    fVar19 = fVar12 - fVar14;
    fVar20 = fVar16 * fVar16 + fVar15 * fVar15;
    bVar1 = true;
    if ((0.00024414062 <= fVar21) && (bVar1 = false, !NAN(fVar20))) {
      bVar1 = fVar20 < 0.00024414062;
    }
    if (bVar1) {
LAB_1082d34b4:
      if ((fVar19 * fVar17 + fVar22 * fVar18 < 0.0) ||
         (fVar10 = fVar19 * fVar16 + fVar18 * fVar15, uVar3 = fVar10 == 0.0, 0.0 < fVar10)) {
        iVar7 = 6;
        goto FUN_1082d3644;
      }
      func_0x0001082d37d4();
      func_0x0001082d3878();
      pfVar4[2] = (fVar13 + fVar22 + fVar11 + fVar15) * 0.5;
      pfVar4[3] = (fVar14 + fVar17 + fVar12 + fVar16) * 0.5;
      goto LAB_1082d35e4;
    }
    fVar20 = fVar19 * fVar19 + fVar18 * fVar18;
    fVar21 = 1.0 / fVar20;
    fVar23 = -(fVar18 * fVar16) + fVar19 * fVar15;
    fVar24 = -(fVar18 * fVar17) + fVar19 * fVar22;
    fVar23 = fVar21 * fVar23 * fVar23;
    fVar21 = fVar21 * fVar24 * fVar24;
    bVar1 = false;
    if ((0.00024414062 < fVar20) && (bVar1 = false, !NAN(fVar23) && !NAN(fVar10))) {
      bVar1 = fVar23 < fVar10;
    }
    bVar2 = false;
    if ((bVar1) && (bVar2 = false, !NAN(fVar21) && !NAN(fVar10))) {
      bVar2 = fVar21 < fVar10;
    }
    if (bVar2) goto LAB_1082d34b4;
    fVar15 = fVar15 * 1.5;
    fVar16 = fVar16 * 1.5;
    fVar22 = fVar22 * 1.5;
    fVar17 = fVar17 * 1.5;
    fVar21 = fVar11 + fVar15;
    fVar23 = fVar12 + fVar16;
    fVar19 = fVar13 + fVar22;
    fVar20 = fVar14 + fVar17;
    fVar18 = 0.0;
    if (param_5 < 0xb) {
      fVar18 = (fVar23 - fVar20) * (fVar23 - fVar20) + (fVar21 - fVar19) * (fVar21 - fVar19);
    }
    uVar3 = fVar18 == fVar10;
    if (fVar18 < fVar10) {
      fVar24 = (fVar19 + fVar21) * 0.5;
      fVar18 = (fVar20 + fVar23) * 0.5;
      fVar25 = -(fVar15 * (fVar18 - fVar12)) + fVar16 * (fVar24 - fVar11);
      if (iVar6 == 0) {
        if (fVar25 <= 0.0) goto LAB_1082d3538;
LAB_1082d355c:
        fVar11 = fVar12 * -fVar15 + fVar11 * fVar16;
        fVar12 = -(fVar22 * fVar14) + fVar13 * fVar17;
        fVar18 = 1.0 / (fVar17 * fVar15 - fVar22 * fVar16);
        fVar24 = fVar18 * (-(fVar22 * fVar11) + fVar12 * fVar15);
        fVar18 = (fVar12 * fVar16 - fVar17 * fVar11) * fVar18;
        fVar11 = (fVar23 - fVar18) * (fVar23 - fVar18) + (fVar21 - fVar24) * (fVar21 - fVar24);
        fVar12 = (fVar20 - fVar18) * (fVar20 - fVar18) + (fVar19 - fVar24) * (fVar19 - fVar24);
        fVar12 = fVar12 + fVar11 + SQRT(fVar11 * fVar12) * 2.0;
        bVar1 = false;
        uVar3 = true;
        bVar2 = false;
        if (param_5 < 0xb) {
          bVar1 = false;
          uVar3 = false;
          bVar2 = true;
          if (!NAN(fVar12) && !NAN(fVar10)) {
            bVar1 = fVar12 < fVar10;
            uVar3 = fVar12 == fVar10;
            bVar2 = false;
          }
        }
        if (!(bool)uVar3 && bVar1 == bVar2) goto LAB_1082d361c;
      }
      else {
        if (fVar25 < 0.0) goto LAB_1082d355c;
LAB_1082d3538:
        fVar25 = -(fVar22 * (fVar18 - fVar14)) + fVar17 * (fVar24 - fVar13);
        uVar3 = fVar25 == 0.0;
        if (iVar6 == 0) {
          if (0.0 > fVar25) goto LAB_1082d355c;
        }
        else if (!(bool)uVar3 && 0.0 <= fVar25) goto LAB_1082d355c;
      }
      func_0x0001082d37d4();
      func_0x0001082d3878();
      pfVar4[2] = fVar24;
      pfVar4[3] = fVar18;
      goto LAB_1082d35e4;
    }
LAB_1082d361c:
    iVar7 = (int)auStack_150;
    FUN_108351de8(param_2);
    func_0x0001082d37e0(auStack_150);
    pfVar4 = afStack_138;
    func_0x0001082d37e0();
  }
  else {
    uVar3 = fVar20 == 0.00024414062;
    if (0.00024414062 <= fVar20) {
      fVar15 = pfVar4[4] - fVar11;
      fVar16 = pfVar4[5] - fVar12;
      goto LAB_1082d33b0;
    }
    func_0x0001082d37d4();
    func_0x0001082d3878();
    *(undefined8 *)(pfVar4 + 2) = *(undefined8 *)param_2;
LAB_1082d35e4:
    *(undefined8 *)(pfVar4 + 4) = *(undefined8 *)(param_2 + 6);
  }
  func_0x0001082d3794(uStack_118);
  if ((bool)uVar3) {
    return pfVar4;
  }
  ___stack_chk_fail();
  pfVar5 = pfVar4;
FUN_1082d3644:
  func_0x0001082d3680(0x3ff8000000000000);
  fVar10 = pfVar5[2];
  pfVar5[2] = (float)((int)fVar10 + iVar7);
  return (float *)(*(long *)pfVar5 + (long)(int)fVar10 * 8);
}



/* Entry: 1082d3308; end: 1082d3643;  */

/* WARNING: Possible PIC construction at 0x0001082d3500: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001082d3504) */

float * FUN_1082d3308(float param_1,float *param_2,int param_3,float *param_4,int param_5)

{
  bool bVar1;
  bool bVar2;
  undefined1 uVar3;
  float *pfVar4;
  int iVar5;
  undefined8 extraout_x8;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_b0 [24];
  float afStack_98 [8];
  undefined8 uStack_78;
  
  pfVar4 = param_2;
  iVar5 = param_3;
  func_0x0001082d37b8();
  fVar6 = *pfVar4;
  fVar7 = pfVar4[1];
  fVar10 = pfVar4[2] - fVar6;
  fVar11 = pfVar4[3] - fVar7;
  fVar8 = pfVar4[6];
  fVar9 = pfVar4[7];
  fVar13 = pfVar4[4] - fVar8;
  fVar14 = pfVar4[5] - fVar9;
  fVar15 = fVar14 * fVar14 + fVar13 * fVar13;
  uStack_78 = extraout_x8;
  if (0.00024414062 <= fVar11 * fVar11 + fVar10 * fVar10) {
LAB_1082d33b0:
    fVar17 = pfVar4[2] - fVar8;
    fVar12 = pfVar4[3] - fVar9;
    fVar16 = fVar12 * fVar12 + fVar17 * fVar17;
    if (0.00024414062 <= fVar15) {
      fVar16 = fVar15;
      fVar17 = fVar13;
      fVar12 = fVar14;
    }
    fVar13 = fVar6 - fVar8;
    fVar14 = fVar7 - fVar9;
    fVar15 = fVar11 * fVar11 + fVar10 * fVar10;
    bVar1 = true;
    if ((0.00024414062 <= fVar16) && (bVar1 = false, !NAN(fVar15))) {
      bVar1 = fVar15 < 0.00024414062;
    }
    if (bVar1) {
LAB_1082d34b4:
      if ((fVar14 * fVar12 + fVar17 * fVar13 < 0.0) ||
         (fVar13 = fVar14 * fVar11 + fVar13 * fVar10, uVar3 = fVar13 == 0.0, 0.0 < fVar13)) {
        iVar5 = 6;
        goto FUN_1082d3644;
      }
      func_0x0001082d37d4();
      func_0x0001082d3878();
      pfVar4[2] = (fVar8 + fVar17 + fVar6 + fVar10) * 0.5;
      pfVar4[3] = (fVar9 + fVar12 + fVar7 + fVar11) * 0.5;
      goto LAB_1082d35e4;
    }
    fVar15 = fVar14 * fVar14 + fVar13 * fVar13;
    fVar16 = 1.0 / fVar15;
    fVar18 = -(fVar13 * fVar11) + fVar14 * fVar10;
    fVar19 = -(fVar13 * fVar12) + fVar14 * fVar17;
    fVar18 = fVar16 * fVar18 * fVar18;
    fVar16 = fVar16 * fVar19 * fVar19;
    bVar1 = false;
    if ((0.00024414062 < fVar15) && (bVar1 = false, !NAN(fVar18) && !NAN(param_1))) {
      bVar1 = fVar18 < param_1;
    }
    bVar2 = false;
    if ((bVar1) && (bVar2 = false, !NAN(fVar16) && !NAN(param_1))) {
      bVar2 = fVar16 < param_1;
    }
    if (bVar2) goto LAB_1082d34b4;
    fVar10 = fVar10 * 1.5;
    fVar11 = fVar11 * 1.5;
    fVar17 = fVar17 * 1.5;
    fVar12 = fVar12 * 1.5;
    fVar16 = fVar6 + fVar10;
    fVar18 = fVar7 + fVar11;
    fVar14 = fVar8 + fVar17;
    fVar15 = fVar9 + fVar12;
    fVar13 = 0.0;
    if (param_5 < 0xb) {
      fVar13 = (fVar18 - fVar15) * (fVar18 - fVar15) + (fVar16 - fVar14) * (fVar16 - fVar14);
    }
    uVar3 = fVar13 == param_1;
    if (fVar13 < param_1) {
      fVar19 = (fVar14 + fVar16) * 0.5;
      fVar13 = (fVar15 + fVar18) * 0.5;
      fVar20 = -(fVar10 * (fVar13 - fVar7)) + fVar11 * (fVar19 - fVar6);
      if (param_3 == 0) {
        if (fVar20 <= 0.0) goto LAB_1082d3538;
LAB_1082d355c:
        fVar6 = fVar7 * -fVar10 + fVar6 * fVar11;
        fVar7 = -(fVar17 * fVar9) + fVar8 * fVar12;
        fVar13 = 1.0 / (fVar12 * fVar10 - fVar17 * fVar11);
        fVar19 = fVar13 * (-(fVar17 * fVar6) + fVar7 * fVar10);
        fVar13 = (fVar7 * fVar11 - fVar12 * fVar6) * fVar13;
        fVar6 = (fVar18 - fVar13) * (fVar18 - fVar13) + (fVar16 - fVar19) * (fVar16 - fVar19);
        fVar7 = (fVar15 - fVar13) * (fVar15 - fVar13) + (fVar14 - fVar19) * (fVar14 - fVar19);
        fVar7 = fVar7 + fVar6 + SQRT(fVar6 * fVar7) * 2.0;
        bVar1 = false;
        uVar3 = true;
        bVar2 = false;
        if (param_5 < 0xb) {
          bVar1 = false;
          uVar3 = false;
          bVar2 = true;
          if (!NAN(fVar7) && !NAN(param_1)) {
            bVar1 = fVar7 < param_1;
            uVar3 = fVar7 == param_1;
            bVar2 = false;
          }
        }
        if (!(bool)uVar3 && bVar1 == bVar2) goto LAB_1082d361c;
      }
      else {
        if (fVar20 < 0.0) goto LAB_1082d355c;
LAB_1082d3538:
        fVar20 = -(fVar17 * (fVar13 - fVar9)) + fVar12 * (fVar19 - fVar8);
        uVar3 = fVar20 == 0.0;
        if (param_3 == 0) {
          if (0.0 > fVar20) goto LAB_1082d355c;
        }
        else if (!(bool)uVar3 && 0.0 <= fVar20) goto LAB_1082d355c;
      }
      func_0x0001082d37d4();
      func_0x0001082d3878();
      pfVar4[2] = fVar19;
      pfVar4[3] = fVar13;
      goto LAB_1082d35e4;
    }
LAB_1082d361c:
    iVar5 = (int)auStack_b0;
    FUN_108351de8(param_2);
    func_0x0001082d37e0(auStack_b0);
    pfVar4 = afStack_98;
    func_0x0001082d37e0();
  }
  else {
    uVar3 = fVar15 == 0.00024414062;
    if (0.00024414062 <= fVar15) {
      fVar10 = pfVar4[4] - fVar6;
      fVar11 = pfVar4[5] - fVar7;
      goto LAB_1082d33b0;
    }
    func_0x0001082d37d4();
    func_0x0001082d3878();
    *(undefined8 *)(pfVar4 + 2) = *(undefined8 *)param_2;
LAB_1082d35e4:
    *(undefined8 *)(pfVar4 + 4) = *(undefined8 *)(param_2 + 6);
  }
  func_0x0001082d3794(uStack_78);
  if ((bool)uVar3) {
    return pfVar4;
  }
  ___stack_chk_fail();
  param_4 = pfVar4;
FUN_1082d3644:
  func_0x0001082d3680(0x3ff8000000000000);
  fVar6 = param_4[2];
  param_4[2] = (float)((int)fVar6 + iVar5);
  return (float *)(*(long *)param_4 + (long)(int)fVar6 * 8);
}



/* Entry: 1082d3644; end: 1082d36cb;  */

long FUN_1082d3644(long *param_1,int param_2)

{
  long lVar1;
  
  func_0x0001082d3680(0x3ff8000000000000);
  lVar1 = param_1[1];
  *(int *)(param_1 + 1) = (int)lVar1 + param_2;
  return *param_1 + (long)(int)lVar1 * 8;
}



/* Entry: 1082d36cc; end: 1082d373f;  */

void FUN_1082d36cc(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  if (*(int *)(param_1 + 1) != 0) {
    _memcpy(param_2,*param_1,(long)*(int *)(param_1 + 1) << 3);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    _free(*param_1);
  }
  param_3 = param_3 >> 3;
  if (0x7ffffffe < param_3) {
    param_3 = 0x7fffffff;
  }
  *param_1 = param_2;
  *(uint *)((long)param_1 + 0xc) = (int)param_3 << 1 | 1;
  return;
}



/* Entry: 1082d3740; end: 1082d3793;  */

void FUN_1082d3740(ulong param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  if ((int)(*(uint *)(param_1 + 8) ^ 0x7fffffff) < param_2) {
    puVar1 = &stack0xfffffffffffffff0;
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x1082d3764;
    func_0x00010bdb1a68();
  }
  else {
    param_1 = (ulong)(*(uint *)(param_1 + 8) + param_2);
    puVar1 = (undefined1 *)register0x00000008;
  }
  *(undefined1 **)(puVar1 + -0x10) = unaff_x29;
  *(undefined8 *)(puVar1 + -8) = unaff_x30;
  *(undefined8 *)(puVar1 + -0x18) = 0x7fffffff;
  *(undefined8 *)(puVar1 + -0x20) = 8;
  FUN_10840fe24(puVar1 + -0x20,param_1);
  return;
}



/* Entry: 1082d3794; end: 1082d38bb;  */

void FUN_1082d3794(void)

{
  return;
}



/* Entry: 1082d38bc; end: 1082d39af;  */

void FUN_1082d38bc(undefined8 *param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  float *pfVar2;
  float fVar3;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar4 [16];
  float fVar8;
  float fVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  pfVar2 = param_3;
  func_0x0001081421e0();
  if ((int)pfVar2 < 4) {
    pfVar2 = param_3;
    func_0x0001081421e0();
    fVar3 = *param_2;
    fVar5 = param_2[1];
    fVar6 = param_2[2];
    fVar7 = param_2[3];
    if (0 < (int)pfVar2) {
      fVar8 = param_3[2];
      fVar9 = param_3[5];
      if ((int)pfVar2 == 1) {
        fVar3 = fVar3 + fVar8;
        fVar5 = fVar5 + fVar9;
        fVar6 = fVar6 + fVar8;
        fVar7 = fVar7 + fVar9;
      }
      else {
        fVar3 = fVar8 + fVar3 * *param_3;
        fVar5 = fVar9 + fVar5 * param_3[4];
        fVar6 = fVar8 + fVar6 * *param_3;
        fVar7 = fVar9 + fVar7 * param_3[4];
      }
    }
    uVar1 = 0;
    uStack_60 = CONCAT44(fVar3,fVar3);
    uStack_58 = CONCAT44(fVar6,fVar6);
    uStack_68 = CONCAT44(fVar7,fVar5);
    uStack_70 = CONCAT44(fVar7,fVar5);
    auVar4 = NEON_fmov(0x3f800000,4);
    uStack_78 = auVar4._8_8_;
    uStack_80 = auVar4._0_8_;
  }
  else {
    func_0x0001082d3ce8();
    FUN_1082d39b0();
    uVar1 = SUB84(param_3,0);
  }
  *(undefined4 *)(param_1 + 6) = uVar1;
  param_1[1] = uStack_58;
  *param_1 = uStack_60;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  param_1[5] = uStack_78;
  param_1[4] = uStack_80;
  return;
}



/* Entry: 1082d39b0; end: 1082d3a0b;  */

undefined4 FUN_1082d39b0(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  iVar1 = (int)param_1;
  uVar2 = param_1;
  FUN_10827a0d8();
  if ((uVar2 & 1) == 0) {
    func_0x000108363d40(0x39800000);
    if ((param_1 & 1) == 0) {
      FUN_10828e338();
      uVar3 = 2;
      if (iVar1 != 0) {
        uVar3 = 3;
      }
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 1082d3a0c; end: 1082d3af3;  */

void FUN_1082d3a0c(undefined8 *param_1,float *param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  iVar1 = (int)param_3;
  fVar3 = *param_2;
  fVar5 = param_2[1];
  fVar6 = param_2[6];
  fVar8 = param_2[7];
  fVar4 = param_2[2];
  fVar7 = param_2[3];
  fVar9 = param_2[4];
  fVar10 = param_2[5];
  FUN_10828e338();
  if ((param_3 & 1) == 0) {
    if ((((*param_2 == param_2[6]) && (param_2[2] == param_2[4])) && (param_2[1] == param_2[3])) &&
       (param_2[5] == param_2[7])) {
      iVar2 = iVar1;
      FUN_1082d39b0();
    }
    else {
      iVar2 = 2;
    }
  }
  else {
    iVar2 = 3;
  }
  func_0x0001081420b8();
  if (iVar1 == 0) {
    func_0x0001082d3ce8();
    param_1[1] = uStack_58;
    *param_1 = uStack_60;
    param_1[3] = uStack_68;
    param_1[2] = uStack_70;
  }
  else {
    param_1[1] = CONCAT44(fVar9,fVar4);
    *param_1 = CONCAT44(fVar6,fVar3);
    param_1[3] = CONCAT44(fVar10,fVar7);
    param_1[2] = CONCAT44(fVar8,fVar5);
    auStack_80 = NEON_fmov(0x3f800000,4);
  }
  param_1[5] = auStack_80._8_8_;
  param_1[4] = auStack_80._0_8_;
  *(int *)(param_1 + 6) = iVar2;
  return;
}



/* Entry: 1082d3af4; end: 1082d3c03;  */

void FUN_1082d3af4(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,float *param_4,
                  float *param_5,undefined8 *param_6)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 extraout_var_02;
  undefined8 extraout_var_03;
  undefined8 extraout_var_04;
  undefined1 auVar4 [16];
  
  FUN_1082d3cc4(*param_3,*param_1);
  uVar2 = func_0x0001082d3cd8();
  FUN_1082d3cc4(param_3[1],*param_2);
  uVar3 = func_0x0001082d3cd8();
  func_0x0001082d3ccc(uVar3,param_3[2]);
  uVar3 = func_0x0001082d3cd8();
  param_4[2] = (float)extraout_var + (float)extraout_var_00;
  param_4[3] = (float)((ulong)extraout_var >> 0x20) + (float)((ulong)extraout_var_00 >> 0x20);
  *param_4 = (float)uVar2 + (float)uVar3;
  param_4[1] = (float)((ulong)uVar2 >> 0x20) + (float)((ulong)uVar3 >> 0x20);
  FUN_1082d3cc4(param_3[3],*param_1);
  uVar2 = func_0x0001082d3cd8();
  FUN_1082d3cc4(param_3[4],*param_2);
  uVar3 = func_0x0001082d3cd8();
  func_0x0001082d3ccc(uVar3,param_3[5]);
  uVar3 = func_0x0001082d3cd8();
  param_5[2] = (float)extraout_var_01 + (float)extraout_var_02;
  param_5[3] = (float)((ulong)extraout_var_01 >> 0x20) + (float)((ulong)extraout_var_02 >> 0x20);
  *param_5 = (float)uVar2 + (float)uVar3;
  param_5[1] = (float)((ulong)uVar2 >> 0x20) + (float)((ulong)uVar3 >> 0x20);
  puVar1 = param_3;
  FUN_10828e338();
  if ((int)puVar1 == 0) {
    auVar4 = NEON_fmov(0x3f800000,4);
  }
  else {
    FUN_1082d3cc4(param_3[6],*param_1);
    uVar2 = func_0x0001082d3cd8();
    FUN_1082d3cc4(param_3[7],*param_2);
    uVar3 = func_0x0001082d3cd8();
    func_0x0001082d3ccc(uVar3,param_3[8]);
    uVar3 = func_0x0001082d3cd8();
    auVar4._0_4_ = (float)uVar2 + (float)uVar3;
    auVar4._4_4_ = (float)((ulong)uVar2 >> 0x20) + (float)((ulong)uVar3 >> 0x20);
    auVar4._8_4_ = (float)extraout_var_03 + (float)extraout_var_04;
    auVar4._12_4_ =
         (float)((ulong)extraout_var_03 >> 0x20) + (float)((ulong)extraout_var_04 >> 0x20);
  }
  param_6[1] = auVar4._8_8_;
  *param_6 = auVar4._0_8_;
  return;
}



/* Entry: 1082d3c04; end: 1082d3c67;  */

bool FUN_1082d3c04(float *param_1,uint param_2)

{
  if (((((param_2 & 1) == 0) || (*param_1 == (float)(int)*param_1)) &&
      (((param_2 >> 2 & 1) == 0 || (param_1[3] == (float)(int)param_1[3])))) &&
     (((param_2 >> 1 & 1) == 0 || (param_1[4] == (float)(int)param_1[4])))) {
    if ((param_2 >> 3 & 1) == 0) {
      return false;
    }
    return param_1[7] != (float)(int)param_1[7];
  }
  return true;
}



/* Entry: 1082d3c68; end: 1082d3cc3;  */

bool FUN_1082d3c68(float param_1,float param_2,float param_3,float param_4,float *param_5,
                  float *param_6)

{
  bool bVar1;
  
  if (param_5[0xc] != 0.0) {
    return false;
  }
  FUN_1082c0b88();
  *param_6 = param_1;
  param_6[1] = param_2;
  param_6[2] = param_3;
  param_6[3] = param_4;
  if (*param_5 == param_1) {
    bVar1 = param_5[4] == param_2;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1082d3cc4; end: 1082d3d23;  */

float FUN_1082d3cc4(float param_1,float param_2)

{
  return param_2 * param_1;
}



/* Entry: 1082d3d24; end: 1082d4053;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x0001082d3e04 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1082d3d24(undefined8 param_1,float param_2,float param_3,undefined8 param_4)

{
  float fVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 in_b0;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  byte bVar18;
  byte bVar19;
  undefined1 in_register_00005001;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  byte bVar26;
  byte bVar27;
  undefined1 in_register_00005002;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  byte bVar34;
  byte bVar35;
  undefined1 in_register_00005003;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  byte bVar42;
  byte bVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  char cVar52;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  byte bVar53;
  byte bVar55;
  byte bVar56;
  float fVar54;
  byte bVar57;
  float fVar58;
  float fStack_8c;
  undefined1 auStack_50 [4];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  
  FUN_1082d4054();
  fVar6 = (float)CONCAT13(in_register_00005003,
                          CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
  fStack_8c = (float)(CONCAT17((char)((uint)extraout_s1 >> 0x18),
                               CONCAT16((char)((uint)extraout_s1 >> 0x10),
                                        CONCAT15((char)((uint)extraout_s1 >> 8),
                                                 CONCAT14(SUB41(extraout_s1,0),fVar6)))) >> 0x20);
  fVar54 = param_3;
  func_0x0001082d4060(param_4);
  fVar1 = (float)CONCAT13(in_register_00005003,
                          CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
  func_0x0001082d406c(param_4);
  fVar5 = (float)CONCAT13(in_register_00005003,
                          CONCAT12(in_register_00005002,CONCAT11(in_register_00005001,in_b0)));
  fVar11 = 6.1035156e-05;
  iVar4 = -(uint)(fVar5 < 6.1035156e-05);
  bVar53 = (byte)iVar4;
  bVar55 = (byte)((uint)iVar4 >> 8);
  bVar56 = (byte)((uint)iVar4 >> 0x10);
  bVar57 = (byte)((uint)iVar4 >> 0x18);
  iVar7 = -(uint)(extraout_s1_00 < 6.1035156e-05);
  uVar17 = (undefined1)((uint)iVar7 >> 8);
  uVar25 = (undefined1)((uint)iVar7 >> 0x10);
  uVar33 = (undefined1)((uint)iVar7 >> 0x18);
  iVar8 = -(uint)(param_2 < 6.1035156e-05);
  iVar9 = -(uint)(fVar54 < 6.1035156e-05);
  auVar3[4] = (char)iVar7;
  auVar3._0_4_ = iVar4;
  auVar3[5] = uVar17;
  auVar3[6] = uVar25;
  auVar3[7] = uVar33;
  auVar3[8] = (char)iVar8;
  auVar3[9] = (char)((uint)iVar8 >> 8);
  auVar3[10] = (char)((uint)iVar8 >> 0x10);
  auVar3[0xb] = (char)((uint)iVar8 >> 0x18);
  auVar3[0xc] = (char)iVar9;
  auVar3[0xd] = (char)((uint)iVar9 >> 8);
  auVar3[0xe] = (char)((uint)iVar9 >> 0x10);
  auVar3[0xf] = (char)((uint)iVar9 >> 0x18);
  cVar52 = NEON_umaxv(auVar3,1);
  fStack_4c = extraout_s1_00;
  fStack_48 = param_2;
  fStack_44 = fVar54;
  if (cVar52 == '\0') {
    FUN_1082d40d8(auStack_50);
  }
  else {
    bVar12 = bVar53;
    bVar15 = bVar55;
    bVar22 = bVar56;
    bVar23 = bVar57;
    fVar58 = fVar11;
    func_0x0001082d4088();
    func_0x0001082d7708();
    bVar13 = SUB41(extraout_s1_01,0);
    bVar20 = (byte)((uint)extraout_s1_01 >> 8);
    bVar28 = (byte)((uint)extraout_s1_01 >> 0x10);
    bVar36 = (byte)((uint)extraout_s1_01 >> 0x18);
    if ((float)CONCAT13(bVar23,CONCAT12(bVar22,CONCAT11(bVar15,bVar12))) <= extraout_s1_01) {
      bVar13 = bVar12;
      bVar20 = bVar15;
      bVar28 = bVar22;
      bVar36 = bVar23;
    }
    bVar12 = bVar53;
    bVar15 = bVar55;
    bVar22 = bVar56;
    bVar23 = bVar57;
    func_0x0001082d4088(CONCAT17(uVar33,CONCAT16(uVar25,CONCAT15(uVar17,CONCAT14((char)iVar7,
                                                                                 CONCAT13(bVar37,
                                                  CONCAT12(bVar29,CONCAT11(bVar21,bVar14))))))),
                        0x7f8000007f800000,fVar1 / fVar5);
    bVar37 = bVar23;
    bVar29 = bVar22;
    bVar21 = bVar15;
    bVar14 = bVar12;
    func_0x0001082d7708();
    bVar12 = bVar53;
    bVar22 = bVar55;
    bVar30 = bVar56;
    bVar38 = bVar57;
    func_0x0001082d4088();
    func_0x0001082d76f4();
    bVar15 = SUB41(extraout_s1_02,0);
    bVar23 = (byte)((uint)extraout_s1_02 >> 8);
    bVar31 = (byte)((uint)extraout_s1_02 >> 0x10);
    bVar39 = (byte)((uint)extraout_s1_02 >> 0x18);
    if (extraout_s1_02 <= (float)CONCAT13(bVar38,CONCAT12(bVar30,CONCAT11(bVar22,bVar12)))) {
      bVar15 = bVar12;
      bVar23 = bVar22;
      bVar31 = bVar30;
      bVar39 = bVar38;
    }
    func_0x0001082d4088();
    func_0x0001082d76f4();
    uVar17 = 0;
    uVar25 = 0;
    uVar33 = 0x80;
    uVar41 = 0x38;
    uVar45 = 0;
    uVar47 = 0;
    uVar49 = 0;
    uVar51 = 0;
    func_0x0001082d4090(CONCAT17(uVar50,CONCAT16(uVar48,CONCAT15(uVar46,CONCAT14(uVar44,CONCAT13(
                                                  uVar40,CONCAT12(uVar32,CONCAT11(uVar24,uVar16)))))
                                                )),CONCAT44(extraout_s1_00,fVar5));
    uVar50 = uVar51;
    uVar48 = uVar49;
    uVar46 = uVar47;
    uVar44 = uVar45;
    uVar40 = uVar41;
    uVar32 = uVar33;
    uVar24 = uVar25;
    uVar16 = uVar17;
    uVar17 = uVar16;
    uVar25 = uVar24;
    uVar33 = uVar32;
    uVar41 = uVar40;
    uVar45 = uVar44;
    uVar47 = uVar46;
    uVar49 = uVar48;
    uVar51 = uVar50;
    func_0x0001082d7618();
    auVar10._4_4_ = extraout_s1_00;
    auVar10._0_4_ = fVar5;
    auVar10._8_4_ = param_2;
    auVar10._12_4_ = fVar54;
    NEON_rev64(auVar10,4);
    fVar5 = extraout_s1 *
            ((float)CONCAT13(uVar41,CONCAT12(uVar33,CONCAT11(uVar25,uVar17))) /
            (extraout_s1_00 - fVar5));
    param_3 = param_3 * ((float)CONCAT13(uVar51,CONCAT12(uVar49,CONCAT11(uVar47,uVar45))) /
                        (fVar54 - extraout_s1_00));
    func_0x0001082d780c();
    func_0x0001082d75e8();
    fVar6 = fVar5 + fVar6 * fVar11;
    uVar17 = SUB41(fVar6,0);
    uVar25 = (undefined1)((uint)fVar6 >> 8);
    uVar33 = (undefined1)((uint)fVar6 >> 0x10);
    uVar41 = (undefined1)((uint)fVar6 >> 0x18);
    fVar5 = (float)(CONCAT17((char)((uint)param_3 >> 0x18),
                             CONCAT16((char)((uint)param_3 >> 0x10),
                                      CONCAT15((char)((uint)param_3 >> 8),
                                               CONCAT14(SUB41(param_3,0),fVar5)))) >> 0x20) +
            fStack_8c * fVar58;
    uVar45 = SUB41(fVar5,0);
    uVar47 = (undefined1)((uint)fVar5 >> 8);
    uVar49 = (undefined1)((uint)fVar5 >> 0x10);
    uVar51 = (undefined1)((uint)fVar5 >> 0x18);
    func_0x0001082d7800();
    func_0x0001082d7618();
    uVar2 = CONCAT13(uVar41,CONCAT12(uVar33,CONCAT11(uVar25,uVar17)));
    fStack_8c = (float)(CONCAT17(uVar51,CONCAT16(uVar49,CONCAT15(uVar47,CONCAT14(uVar45,uVar2)))) >>
                       0x20);
    func_0x0001082d7800();
    func_0x0001082d7618();
    iVar4 = -(uint)(extraout_s1_00 < 6.1035156e-05);
    iVar7 = -(uint)(fVar54 < 6.1035156e-05);
    uVar17 = (undefined1)((uint)iVar7 >> 8);
    uVar25 = (undefined1)((uint)iVar7 >> 0x10);
    bVar53 = bVar53 ^ (byte)iVar4;
    bVar55 = bVar55 ^ (byte)((uint)iVar4 >> 8);
    bVar56 = bVar56 ^ (byte)((uint)iVar4 >> 0x10);
    bVar57 = bVar57 ^ (byte)((uint)iVar4 >> 0x18);
    bVar14 = bVar53;
    bVar21 = bVar55;
    bVar29 = bVar56;
    bVar37 = bVar57;
    func_0x0001082d4088(CONCAT17(uVar51,CONCAT16(uVar25,CONCAT15(uVar17,CONCAT14((char)iVar7,
                                                                                 CONCAT13(bVar42,
                                                  CONCAT12(bVar34,CONCAT11(bVar26,bVar18))))))),
                        CONCAT44(fStack_8c,uVar2),
                        CONCAT13(bVar36,CONCAT12(bVar28,CONCAT11(bVar20,bVar13))));
    bVar42 = bVar37;
    bVar34 = bVar29;
    bVar26 = bVar21;
    bVar18 = bVar14;
    func_0x0001082d7708();
    func_0x0001082d7840();
    func_0x0001082d7708();
    func_0x0001082d4088(CONCAT17(uVar51,CONCAT16(uVar25,CONCAT15(uVar17,CONCAT14((char)iVar7,
                                                                                 CONCAT13(bVar43,
                                                  CONCAT12(bVar35,CONCAT11(bVar27,bVar19))))))),
                        CONCAT44(fStack_8c,uVar2),
                        CONCAT13(bVar39,CONCAT12(bVar31,CONCAT11(bVar23,bVar15))));
    bVar43 = bVar57;
    bVar35 = bVar56;
    bVar27 = bVar55;
    bVar19 = bVar53;
    func_0x0001082d76f4();
    func_0x0001082d7840();
    func_0x0001082d76f4();
  }
  return;
}



/* Entry: 1082d4054; end: 1082d409f;  */

undefined4 FUN_1082d4054(undefined4 *param_1)

{
  return *param_1;
}



/* Entry: 1082d40a0; end: 1082d40c7;  */

void FUN_1082d40a0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x3880000038800000;
  uStack_20 = 0x3880000038800000;
  func_0x0001082d4078(param_1,&uStack_20);
  return;
}



/* Entry: 1082d40c8; end: 1082d40d7;  */

float FUN_1082d40c8(float param_1,float param_2)

{
  return param_1 + param_2;
}



/* Entry: 1082d40d8; end: 1082d40ff;  */

void FUN_1082d40d8(undefined4 param_1,undefined8 param_2)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = CONCAT44(param_1,param_1);
  uStack_20 = CONCAT44(param_1,param_1);
  func_0x0001082d4078(&uStack_20,param_2);
  return;
}



/* Entry: 1082d4100; end: 1082d416f;  */

void FUN_1082d4100(int param_1,int param_2,ulong param_3,int *param_4,int *param_5)

{
  *param_4 = param_1;
  *param_5 = param_2;
  if (param_1 != 0) {
    if (param_1 == 2) {
      *param_5 = 0xf;
      return;
    }
    if (param_1 != 1) {
      return;
    }
    if (param_2 == 0) {
      *param_4 = 0;
      return;
    }
    if (*(int *)(param_3 + 0x30) != 0) {
      return;
    }
    FUN_1082d3c04();
    if ((param_3 & 1) != 0) {
      return;
    }
    *param_4 = 0;
  }
  *param_5 = 0;
  return;
}



/* Entry: 1082d4170; end: 1082d4907;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1082d4170(undefined8 param_1,undefined8 param_2,float param_3,float param_4,ulong param_5,
                  ulong param_6,long param_7)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined8 uVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 uVar21;
  bool bVar22;
  long lVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  ulong uVar26;
  ulong uVar27;
  undefined4 uVar28;
  undefined8 extraout_x8;
  byte bVar29;
  uint uVar30;
  float fVar31;
  byte bVar40;
  undefined8 uVar32;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  float fVar44;
  float fVar45;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined8 extraout_var_01;
  float fVar46;
  char cVar47;
  int iVar48;
  undefined8 uVar52;
  float fVar62;
  undefined1 auVar53 [16];
  float fVar49;
  float fVar58;
  float fVar66;
  undefined1 auVar54 [16];
  float fVar50;
  float fVar59;
  float fVar63;
  undefined1 auVar55 [16];
  float fVar60;
  float fVar64;
  undefined1 auVar56 [16];
  float fVar51;
  float fVar61;
  float fVar65;
  undefined1 auVar57 [16];
  undefined4 uVar67;
  undefined4 uVar68;
  int iVar69;
  int iVar70;
  int iVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  undefined1 auVar77 [12];
  undefined8 uStack_1e0;
  float fStack_180;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  undefined8 uStack_140;
  undefined8 uStack_130;
  undefined4 uStack_128;
  float fStack_124;
  undefined8 uStack_120;
  float fStack_118;
  float fStack_114;
  undefined8 uStack_110;
  undefined4 uStack_108;
  float fStack_104;
  undefined8 uStack_100;
  float fStack_f8;
  float fStack_f4;
  undefined8 uStack_f0;
  float fStack_e8;
  float fStack_e4;
  undefined8 uStack_e0;
  float fStack_d8;
  float fStack_d4;
  undefined4 uStack_d0;
  undefined8 uStack_c0;
  float fStack_b8;
  float fStack_b4;
  undefined8 uStack_b0;
  float fStack_a8;
  float fStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  float fStack_88;
  float fStack_84;
  undefined8 uStack_80;
  float fStack_78;
  float fStack_74;
  undefined8 uStack_70;
  float fStack_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined8 uStack_48;
  
  func_0x0001082d77cc();
  uVar21 = *(int *)(param_5 + 0x30) == 3;
  uVar26 = param_6;
  uStack_48 = extraout_x8;
  if (2 < *(int *)(param_5 + 0x30)) {
    func_0x0001082d406c();
    uVar32 = func_0x0001082d7618();
    param_3 = (float)-(uint)(6.1035156e-05 <= (float)uVar32);
    fVar31 = (float)((ulong)uVar32 >> 0x20);
    iVar69 = -(uint)(6.1035156e-05 <= fVar31);
    iVar70 = -(uint)(6.1035156e-05 <= (float)extraout_var);
    fVar43 = (float)((ulong)extraout_var >> 0x20);
    iVar71 = -(uint)(6.1035156e-05 <= fVar43);
    auVar53._4_4_ = iVar69;
    auVar53._0_4_ = param_3;
    auVar53._8_4_ = iVar70;
    auVar53._12_4_ = iVar71;
    iVar48 = NEON_uminv(auVar53,4);
    if (iVar48 == 0) {
      auVar54._4_4_ = iVar69;
      auVar54._0_4_ = param_3;
      auVar54._8_4_ = iVar70;
      auVar54._12_4_ = iVar71;
      cVar47 = NEON_umaxv(auVar54,1);
      if (cVar47 == '\0') {
        lVar23 = 0;
        goto LAB_1082d41c8;
      }
      uVar3 = CONCAT44(iVar69,param_3);
      bVar29 = -(6.1035156e-05 <= (float)uVar32);
      iVar48 = -(uint)(6.1035156e-05 <= fVar31);
      iVar69 = -(uint)(6.1035156e-05 <= (float)extraout_var);
      iVar70 = -(uint)(6.1035156e-05 <= fVar43);
      bVar40 = (byte)iVar48;
      uVar30 = (uint)(byte)(UNK_10dddb700 & ~bVar29);
      auVar77._0_8_ =
           CONCAT17(UNK_10dddb700._7_1_ & ~(byte)((uint)iVar48 >> 0x18),
                    (uint7)CONCAT14(UNK_10dddb700._4_1_ & ~bVar40,uVar30));
      auVar77[8] = UNK_10dddb700._8_1_ & ~(byte)iVar69;
      auVar77[9] = UNK_10dddb700._9_1_ & ~(byte)((uint)iVar69 >> 8);
      auVar77[10] = UNK_10dddb700._10_1_ & ~(byte)((uint)iVar69 >> 0x10);
      auVar77[0xb] = UNK_10dddb700._11_1_ & ~(byte)((uint)iVar69 >> 0x18);
      auVar55[0xc] = UNK_10dddb700._12_1_ & ~(byte)iVar70;
      auVar55._0_12_ = auVar77;
      auVar55[0xd] = UNK_10dddb700._13_1_ & ~(byte)((uint)iVar70 >> 8);
      auVar55[0xe] = UNK_10dddb700._14_1_ & ~(byte)((uint)iVar70 >> 0x10);
      auVar55[0xf] = UNK_10dddb700._15_1_ & ~(byte)((uint)iVar70 >> 0x18);
      iVar48 = *(int *)(param_5 + 100);
      uVar30 = uVar30 + (int)((ulong)auVar77._0_8_ >> 0x20) + auVar77._8_4_ + auVar55._12_4_;
      fStack_78 = 0.0;
      fStack_74 = 0.0;
      uStack_80._0_4_ = 0.0;
      uStack_80._4_4_ = 0.0;
      fStack_68 = 0.0;
      fStack_64 = 0.0;
      uStack_70 = 0;
      if (iVar48 < 3) {
        iVar48 = 2;
      }
      uStack_98 = 0;
      uStack_a0 = 0;
      fStack_88 = 0.0;
      fStack_84 = 0.0;
      uStack_90._0_4_ = 0.0;
      uStack_90._4_4_ = 0.0;
      fStack_b8 = 0.0;
      fStack_b4 = 0.0;
      uStack_c0 = 0;
      fStack_a8 = 0.0;
      fStack_a4 = 0.0;
      uStack_b0._0_4_ = 0.0;
      uStack_b0._4_4_ = 0.0;
      puVar24 = &uStack_c0;
      param_7 = param_5 + 0x34;
      uVar27 = param_5;
      FUN_1082d4908();
      uVar35 = uStack_a0;
      fStack_168 = (float)uStack_98;
      fStack_164 = (float)((ulong)uStack_98 >> 0x20);
      fStack_170 = (float)uStack_a0;
      fStack_16c = (float)((ulong)uStack_a0 >> 0x20);
      func_0x0001082d4090();
      uVar32 = func_0x0001082d7618();
      fVar43 = fStack_b4;
      fVar31 = fStack_b8;
      uVar38 = uStack_c0;
      auVar56._8_4_ = fStack_168;
      auVar56._0_8_ = uVar35;
      auVar56._12_4_ = fStack_164;
      auVar53 = NEON_rev64(auVar56,4);
      uStack_1e0 = CONCAT44(fStack_164,fStack_16c);
      fVar49 = (float)uVar32 / (fStack_16c - fStack_170);
      fVar58 = (float)((ulong)uVar32 >> 0x20) / (fStack_164 - fStack_16c);
      fVar62 = (float)extraout_var_00 / (auVar53._4_4_ - fStack_168);
      fVar66 = (float)((ulong)extraout_var_00 >> 0x20) / (auVar53._12_4_ - fStack_164);
      auVar57._8_4_ = fStack_b8;
      auVar57._0_8_ = uStack_c0;
      fVar51 = (float)((ulong)uStack_c0 >> 0x20);
      auVar57._12_4_ = fStack_b4;
      auVar53 = NEON_rev64(auVar57,4);
      fVar41 = fStack_b4 * fVar58;
      func_0x0001082d780c();
      uVar32 = func_0x0001082d7618();
      uVar39 = uStack_70;
      fStack_180 = (float)uVar38;
      fVar45 = (float)uVar32;
      fVar42 = (float)((ulong)uVar32 >> 0x20);
      fVar44 = (float)extraout_var_01;
      fVar46 = (float)((ulong)extraout_var_01 >> 0x20);
      fVar76 = auVar53._4_4_ * fVar62 + fVar31 * fVar44;
      uVar34 = CONCAT44(uStack_b0._4_4_,(float)uStack_b0);
      auVar10._4_4_ = uStack_b0._4_4_;
      auVar10._0_4_ = (float)uStack_b0;
      auVar10._8_4_ = fStack_a8;
      uVar36 = CONCAT44(uStack_90._4_4_,(float)uStack_90);
      auVar8._4_4_ = uStack_90._4_4_;
      auVar8._0_4_ = (float)uStack_90;
      auVar8._8_4_ = fStack_88;
      uVar37 = CONCAT44(uStack_80._4_4_,(float)uStack_80);
      auVar6._4_4_ = uStack_80._4_4_;
      auVar6._0_4_ = (float)uStack_80;
      auVar6._8_4_ = fStack_78;
      auVar10._12_4_ = fStack_a4;
      auVar54 = NEON_rev64(auVar10,4);
      fVar72 = fStack_a4 * fVar46;
      fVar50 = uStack_b0._4_4_ * fVar49 + (float)uStack_b0 * fVar45;
      fVar59 = fStack_a4 * fVar58 + uStack_b0._4_4_ * fVar42;
      fVar63 = auVar54._4_4_ * fVar62 + fStack_a8 * fVar44;
      uVar5 = CONCAT44(auVar53._12_4_ * fVar66 + fVar43 * fVar46,fVar76);
      uVar32 = CONCAT44(fVar41 + fVar51 * fVar42,fVar51 * fVar49 + fStack_180 * fVar45);
      auVar8._12_4_ = fStack_84;
      auVar55 = NEON_rev64(auVar8,4);
      fVar73 = fStack_84 * fVar46;
      fVar41 = uStack_90._4_4_ * fVar49 + (float)uStack_90 * fVar45;
      fVar60 = fStack_84 * fVar58 + uStack_90._4_4_ * fVar42;
      fVar64 = auVar55._4_4_ * fVar62 + fStack_88 * fVar44;
      auVar4._8_4_ = fStack_68;
      auVar4._0_8_ = uStack_70;
      param_4 = (float)uStack_70;
      fVar75 = (float)((ulong)uStack_70 >> 0x20);
      auVar6._12_4_ = fStack_74;
      auVar56 = NEON_rev64(auVar6,4);
      fVar74 = fStack_74 * fVar46;
      fVar51 = uStack_80._4_4_ * fVar49 + (float)uStack_80 * fVar45;
      fVar61 = fStack_74 * fVar58 + uStack_80._4_4_ * fVar42;
      fVar65 = auVar56._4_4_ * fVar62 + fStack_78 * fVar44;
      auVar4._12_4_ = fStack_64;
      auVar57 = NEON_rev64(auVar4,4);
      fVar46 = fStack_64 * fVar46;
      fVar31 = fVar49 * fVar75 + param_4 * fVar45;
      fVar43 = fVar58 * fStack_64 + fVar75 * fVar42;
      fVar45 = fVar62 * auVar57._4_4_ + fStack_68 * fVar44;
      fVar42 = 6.1035156e-05;
      uVar52 = CONCAT44(-(uint)(6.1035156e-05 <= fStack_164),-(uint)(6.1035156e-05 <= fStack_16c));
      auVar20._8_4_ = fStack_168;
      auVar20._0_8_ = uVar35;
      auVar20._12_4_ = fStack_164;
      auVar19._8_4_ = fStack_168;
      auVar19._0_8_ = uVar35;
      auVar19._12_4_ = fStack_164;
      auVar53 = NEON_ext(auVar19,auVar20,8,1);
      uStack_140 = CONCAT44(-(uint)(6.1035156e-05 <= auVar53._8_4_),
                            -(uint)(6.1035156e-05 <= fStack_168));
      uVar1 = uVar30 + 0xf;
      uVar2 = uVar1 & 0xf;
      uVar30 = (uVar30 ^ uVar1) & 0xf;
      uVar21 = uVar30 == uVar2;
      if (uVar2 < uVar30) {
        uVar7 = CONCAT44(fStack_74,uStack_80._4_4_);
        uVar9 = CONCAT44(fStack_84,uStack_90._4_4_);
        uVar38 = CONCAT44(fStack_64,fVar75);
        uVar11 = CONCAT44(fStack_a4,uStack_b0._4_4_);
        uVar33 = FUN_1082d4a58();
        func_0x0001082d7628();
        uVar34 = func_0x0001082d7664(uVar34,uVar11);
        func_0x0001082d7628();
        uVar35 = func_0x0001082d7664(uVar35,uStack_1e0);
        func_0x0001082d7628();
        uVar36 = func_0x0001082d7664(uVar36,uVar9);
        func_0x0001082d7628();
        uVar37 = func_0x0001082d7664(uVar37,uVar7);
        func_0x0001082d7628();
        uVar38 = func_0x0001082d7664(uVar39,uVar38);
        func_0x0001082d7628();
        uStack_d0 = uStack_60;
        FUN_1082d49a8(uVar3);
        puVar25 = puVar24;
        uVar26 = uVar27;
        FUN_1082d49a8(uVar52);
        uVar39 = func_0x0001082d76a8(uVar26 | uVar27);
        uVar3 = uStack_c0;
        uVar67 = (undefined4)uStack_c0;
        uVar28 = uVar67;
        FUN_1082d75ac(uStack_140);
        uStack_130 = func_0x0001082d76a0(uVar39,uVar32);
        fVar45 = (float)uStack_b0;
        fVar42 = (float)uStack_b0;
        uStack_128 = uVar28;
        fStack_124 = param_4;
        FUN_1082d75ac(uStack_140);
        uStack_120 = func_0x0001082d76a0(uVar39,CONCAT44(fVar59,fVar50));
        uVar68 = (undefined4)uStack_a0;
        uVar28 = uVar68;
        fStack_118 = fVar42;
        fStack_114 = param_4;
        FUN_1082d75ac(uStack_140);
        uStack_110 = func_0x0001082d7694();
        fVar42 = (float)uStack_90;
        fVar46 = (float)uStack_90;
        uStack_108 = uVar28;
        fStack_104 = param_4;
        FUN_1082d75ac(uStack_140);
        uStack_100 = func_0x0001082d76a0(uVar39,CONCAT44(fVar60,fVar41));
        fVar44 = (float)uStack_80;
        fVar49 = (float)uStack_80;
        fStack_f8 = fVar46;
        fStack_f4 = param_4;
        FUN_1082d75ac(uStack_140);
        uStack_f0 = func_0x0001082d76a0(uVar39,CONCAT44(fVar61,fVar51));
        param_3 = (float)uStack_70;
        fVar46 = param_3;
        fStack_e8 = fVar49;
        fStack_e4 = param_4;
        FUN_1082d75ac(uStack_140);
        uStack_e0 = func_0x0001082d76a0(uVar39,CONCAT44(fVar43,fVar31));
        bVar22 = (~(byte)iVar69 & 1) == 0;
        uVar30 = 0xfffffff7;
        if (bVar22) {
          uVar30 = 0xfffffffe;
        }
        uVar1 = 0xfffffffd;
        if (bVar22) {
          uVar1 = 0xfffffffb;
        }
        uVar2 = 0xfffffff7;
        uVar12 = 0xfffffffd;
        if ((~bVar40 & 1) == 0) {
          uVar2 = uVar1;
          uVar12 = uVar30;
        }
        uVar21 = (~bVar29 & 1) == 0;
        uVar30 = 0xfffffffb;
        if ((bool)uVar21) {
          uVar30 = uVar12;
        }
        *(uint *)(param_6 + 0x68) = *(uint *)(param_5 + 0x68) & uVar30;
        auVar13._8_8_ = uVar5;
        auVar13._0_8_ = uVar32;
        auVar53 = NEON_ext(auVar13,auVar13,8,1);
        uVar30 = 0xfffffffe;
        if ((bool)uVar21) {
          uVar30 = uVar2;
        }
        fStack_d8 = fVar46;
        fStack_d4 = param_4;
        FUN_1082d49a8(uStack_140);
        FUN_1082d75ac(puVar25,uVar33,uVar67);
        func_0x0001082d76a0(puVar24,CONCAT44(auVar53._8_4_,fVar76));
        uVar32 = func_0x0001082d77dc();
        uVar32 = func_0x0001082d76e0(uVar32,CONCAT44(fVar59,fVar50));
        FUN_1082d75ac(uVar32,uVar34);
        uStack_b0 = func_0x0001082d76a0(puVar24,uVar3);
        fStack_a8 = fVar45;
        fStack_a4 = param_4;
        FUN_1082d75ac(puVar25,uVar35);
        auVar77 = func_0x0001082d76a0(puVar24,0x3880000038800000);
        uStack_a0 = CONCAT44(auVar77._8_4_,auVar77._0_4_);
        uStack_98 = CONCAT44(param_4,uVar68);
        uVar32 = func_0x0001082d76e0(auVar77._0_8_,CONCAT44(fVar60,fVar41));
        FUN_1082d75ac(uVar32,uVar36);
        auVar77 = func_0x0001082d76a0(puVar24,uVar3);
        uStack_90._4_4_ = auVar77._8_4_;
        uStack_90._0_4_ = auVar77._0_4_;
        fStack_88 = fVar42;
        fStack_84 = param_4;
        uVar32 = func_0x0001082d76e0(auVar77._0_8_,CONCAT44(fVar61,fVar51));
        FUN_1082d75ac(uVar32,uVar37);
        auVar77 = func_0x0001082d76a0(puVar24,uVar3);
        uStack_80._4_4_ = auVar77._8_4_;
        uStack_80._0_4_ = auVar77._0_4_;
        fStack_78 = fVar44;
        fStack_74 = param_4;
        uVar32 = func_0x0001082d76e0(auVar77._0_8_,CONCAT44(fVar43,fVar31));
        FUN_1082d75ac(uVar32,uVar38);
        func_0x0001082d76a0(puVar24,uVar3);
        func_0x0001082d772c();
        *(uint *)(param_5 + 0x68) = *(uint *)(param_5 + 0x68) & uVar30;
        param_7 = 3;
        FUN_1082d49c0(&uStack_130,param_6,3,param_6 + 0x34,iVar48);
        lVar23 = 2;
        uVar26 = param_6;
        goto LAB_1082d41c8;
      }
      FUN_1082d49a8(uVar52);
      uVar26 = uVar27;
      FUN_1082d49a8(uStack_140);
      func_0x0001082d76a8(uVar26 & uVar27);
      auVar14._8_8_ = uVar5;
      auVar14._0_8_ = uVar32;
      NEON_rev64(auVar14,4);
      NEON_ext(auVar14,auVar14,8,1);
      FUN_1082d75ac(uVar52,uVar32,fVar76);
      auVar53 = func_0x0001082d77a4();
      FUN_1082d75ac(auVar53._0_8_,auVar53._8_8_,fVar42);
      func_0x0001082d76a0(uVar3,uVar38);
      func_0x0001082d77dc();
      auVar15._8_4_ = fVar63;
      auVar15._0_8_ = CONCAT44(fVar59,fVar50);
      auVar15._12_4_ = auVar54._12_4_ * fVar66 + fVar72;
      NEON_rev64(auVar15,4);
      NEON_ext(auVar15,auVar15,8,1);
      FUN_1082d75ac(uVar52,CONCAT44(fVar59,fVar50),fVar63);
      func_0x0001082d77a4();
      fVar44 = fVar42;
      uVar32 = FUN_1082d75ac();
      uStack_b0 = func_0x0001082d7694(uVar32,CONCAT44(uStack_b0._4_4_,(float)uStack_b0));
      uVar28 = 0x38800000;
      fStack_a8 = fVar42;
      fStack_a4 = param_4;
      uStack_a0 = func_0x0001082d4088(uVar3,uStack_a0);
      uStack_98 = CONCAT44(param_4,uVar28);
      auVar16._8_4_ = fVar64;
      auVar16._0_8_ = CONCAT44(fVar60,fVar41);
      auVar16._12_4_ = auVar55._12_4_ * fVar66 + fVar73;
      NEON_rev64(auVar16,4);
      NEON_ext(auVar16,auVar16,8,1);
      FUN_1082d75ac(uVar52,CONCAT44(fVar60,fVar41),fVar64);
      func_0x0001082d77a4();
      fVar41 = fVar44;
      uVar32 = FUN_1082d75ac();
      uStack_90 = func_0x0001082d7694(uVar32,CONCAT44(uStack_90._4_4_,(float)uStack_90));
      auVar17._8_4_ = fVar65;
      auVar17._0_8_ = CONCAT44(fVar61,fVar51);
      auVar17._12_4_ = auVar56._12_4_ * fVar66 + fVar74;
      NEON_rev64(auVar17,4);
      NEON_ext(auVar17,auVar17,8,1);
      fStack_88 = fVar44;
      fStack_84 = param_4;
      FUN_1082d75ac(uVar52,CONCAT44(fVar61,fVar51),fVar65);
      func_0x0001082d77a4();
      param_3 = fVar41;
      uVar32 = FUN_1082d75ac();
      uStack_80 = func_0x0001082d7694(uVar32,CONCAT44(uStack_80._4_4_,(float)uStack_80));
      auVar18._8_4_ = fVar45;
      auVar18._0_8_ = CONCAT44(fVar43,fVar31);
      auVar18._12_4_ = fVar66 * auVar57._12_4_ + fVar46;
      NEON_rev64(auVar18,4);
      NEON_ext(auVar18,auVar18,8,1);
      fStack_78 = fVar41;
      fStack_74 = param_4;
      FUN_1082d75ac(uVar52,CONCAT44(fVar43,fVar31),fVar45);
      func_0x0001082d77a4();
      uVar32 = FUN_1082d75ac();
      func_0x0001082d7694(uVar32,uStack_70);
      func_0x0001082d772c();
    }
  }
  lVar23 = 1;
LAB_1082d41c8:
  func_0x0001082d7680(uStack_48);
  if ((bool)uVar21) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001082d4054(uVar26);
  func_0x0001082d7784();
  uVar32 = func_0x0001082d4060(uVar26);
  *(undefined8 *)(lVar23 + 0x10) = uVar32;
  *(float *)(lVar23 + 0x18) = param_3;
  *(float *)(lVar23 + 0x1c) = param_4;
  uVar32 = func_0x0001082d406c(uVar26);
  *(undefined8 *)(lVar23 + 0x20) = uVar32;
  *(float *)(lVar23 + 0x28) = param_3;
  *(float *)(lVar23 + 0x2c) = param_4;
  if (param_7 == 0) {
    uVar28 = 0;
  }
  else {
    uVar32 = func_0x0001082d4054(param_7);
    *(undefined8 *)(lVar23 + 0x30) = uVar32;
    *(float *)(lVar23 + 0x38) = param_3;
    *(float *)(lVar23 + 0x3c) = param_4;
    uVar32 = func_0x0001082d4060(param_7);
    *(undefined8 *)(lVar23 + 0x40) = uVar32;
    *(float *)(lVar23 + 0x48) = param_3;
    *(float *)(lVar23 + 0x4c) = param_4;
    uVar32 = func_0x0001082d406c(param_7);
    *(undefined8 *)(lVar23 + 0x50) = uVar32;
    *(float *)(lVar23 + 0x58) = param_3;
    *(float *)(lVar23 + 0x5c) = param_4;
    uVar28 = 2;
    if (*(int *)(param_7 + 0x30) == 3) {
      uVar28 = 3;
    }
  }
  *(undefined4 *)(lVar23 + 0x60) = uVar28;
  return;
}



/* Entry: 1082d4908; end: 1082d49a7;  */

void FUN_1082d4908(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  undefined4 uVar1;
  
  FUN_1082d4054(param_6);
  func_0x0001082d7784();
  func_0x0001082d4060(param_6);
  *(undefined4 *)(param_5 + 0x10) = param_1;
  *(undefined4 *)(param_5 + 0x14) = param_2;
  *(undefined4 *)(param_5 + 0x18) = param_3;
  *(undefined4 *)(param_5 + 0x1c) = param_4;
  func_0x0001082d406c(param_6);
  *(undefined4 *)(param_5 + 0x20) = param_1;
  *(undefined4 *)(param_5 + 0x24) = param_2;
  *(undefined4 *)(param_5 + 0x28) = param_3;
  *(undefined4 *)(param_5 + 0x2c) = param_4;
  if (param_7 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_1082d4054(param_7);
    *(undefined4 *)(param_5 + 0x30) = param_1;
    *(undefined4 *)(param_5 + 0x34) = param_2;
    *(undefined4 *)(param_5 + 0x38) = param_3;
    *(undefined4 *)(param_5 + 0x3c) = param_4;
    func_0x0001082d4060(param_7);
    *(undefined4 *)(param_5 + 0x40) = param_1;
    *(undefined4 *)(param_5 + 0x44) = param_2;
    *(undefined4 *)(param_5 + 0x48) = param_3;
    *(undefined4 *)(param_5 + 0x4c) = param_4;
    func_0x0001082d406c(param_7);
    *(undefined4 *)(param_5 + 0x50) = param_1;
    *(undefined4 *)(param_5 + 0x54) = param_2;
    *(undefined4 *)(param_5 + 0x58) = param_3;
    *(undefined4 *)(param_5 + 0x5c) = param_4;
    uVar1 = 2;
    if (*(int *)(param_7 + 0x30) == 3) {
      uVar1 = 3;
    }
  }
  *(undefined4 *)(param_5 + 0x60) = uVar1;
  return;
}



/* Entry: 1082d49a8; end: 1082d49bf;  */

undefined1  [16] FUN_1082d49a8(undefined8 param_1)

{
  int in_register_00005008;
  int in_register_0000500c;
  undefined1 auVar1 [16];
  
  auVar1._12_4_ = -(uint)(in_register_0000500c == 0);
  auVar1._8_4_ = -(uint)(in_register_00005008 == 0);
  auVar1._4_4_ = -(uint)((int)((ulong)param_1 >> 0x20) == 0);
  auVar1._0_4_ = -(uint)((int)param_1 == 0);
  return auVar1;
}



/* Entry: 1082d49c0; end: 1082d4a57;  */

/* WARNING: Possible PIC construction at 0x0001082d4a04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001082d4a08) */
/* WARNING: Removing unreachable block (ram,0x0001082d4a50) */
/* WARNING: Removing unreachable block (ram,0x0001082d7834) */
/* WARNING: Removing unreachable block (ram,0x0001082d4a14) */
/* WARNING: Removing unreachable block (ram,0x0001082d4a30) */
/* WARNING: Removing unreachable block (ram,0x0001082d4a38) */

void FUN_1082d49c0(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = *param_1;
  param_2[1] = param_1[1];
  *param_2 = uVar1;
  uVar1 = param_1[2];
  param_2[3] = param_1[3];
  param_2[2] = uVar1;
  if (param_3 == 3) {
    uVar1 = param_1[4];
    param_2[5] = param_1[5];
    param_2[4] = uVar1;
  }
  else if (*(int *)(param_2 + 6) == 3) {
    auVar2 = NEON_fmov(0x3f800000,4);
    param_2[5] = auVar2._8_8_;
    param_2[4] = auVar2._0_8_;
  }
  *(int *)(param_2 + 6) = param_3;
  return;
}



/* Entry: 1082d4a58; end: 1082d4a5f;  */

float FUN_1082d4a58(float param_1,float param_2)

{
  return param_1 * param_2;
}



/* Entry: 1082d4a60; end: 1082d4ca7;  */

void FUN_1082d4a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,int param_6,undefined8 *param_7,uint param_8)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int extraout_w8;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if (*(int *)(param_7 + 6) != 0) {
    if ((param_8 & 1) != 0) {
      return;
    }
    if (*(int *)(param_7 + 6) == 3) {
      return;
    }
    uVar6 = FUN_1082d4054(param_7);
    uVar10 = param_2;
    uVar11 = param_3;
    uVar12 = param_4;
    uVar7 = func_0x0001082d4060(param_7);
    uVar1 = param_5[2];
    uVar13 = CONCAT44(*param_5,*param_5);
    uVar5 = param_5[1];
    uVar9 = param_5[3];
    uVar14 = CONCAT44(uVar9,uVar5);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_d0 = 0;
    uStack_c8 = 0;
    puVar2 = &uStack_80;
    FUN_1082d4ef0(uVar6,uVar7,param_2,uVar10,param_3,uVar11,puVar2,&uStack_90,&uStack_a0);
    if ((int)puVar2 == 0) {
      return;
    }
    puVar2 = &uStack_b0;
    puVar3 = &uStack_c0;
    FUN_1082d4ef0(param_2,uVar10,param_4,uVar12,param_3,uVar11,uVar13,uVar14,puVar2,puVar3,
                  &uStack_d0);
    if ((int)puVar2 == 0) {
      return;
    }
    FUN_1082d5168(uStack_80,uStack_90,uStack_a0);
    puVar2 = puVar3;
    FUN_1082d5168(uStack_b0,uStack_c0,uStack_d0);
    func_0x0001082d76a8((ulong)puVar2 | (ulong)puVar3);
    func_0x0001082d786c();
    if (extraout_w8 == 0) {
      return;
    }
    param_7[1] = CONCAT44(uVar1,uVar1);
    *param_7 = uVar13;
    param_7[3] = CONCAT44(uVar9,uVar5);
    param_7[2] = uVar14;
    if (*(int *)(param_7 + 6) == 3) {
      auVar8 = NEON_fmov(0x3f800000,4);
      param_7[5] = auVar8._8_8_;
      param_7[4] = auVar8._0_8_;
    }
    *(undefined4 *)(param_7 + 6) = 0;
    uVar4 = 0xf;
    if (param_6 == 0) {
      uVar4 = 0;
    }
    goto LAB_1082d4c74;
  }
  puVar2 = param_7;
  FUN_1082d4ca8();
  uVar4 = (uint)puVar2;
  if (param_8 == 0) {
    if (uVar4 == 0) {
      func_0x0001082d7860();
      goto LAB_1082d4c64;
    }
    func_0x0001082d7860();
LAB_1082d4c28:
    func_0x0001082d4cec();
  }
  else {
    if (uVar4 != 0) {
      uVar4 = (int)param_7 + 0x34;
      FUN_1082d4ca8();
      if (uVar4 != 0) {
        func_0x0001082d7860();
        goto LAB_1082d4c28;
      }
    }
    func_0x0001082d7860();
LAB_1082d4c64:
    FUN_1082d4e24();
  }
  if (param_6 == 0) {
    uVar4 = *(uint *)(param_7 + 0xd) & (uVar4 ^ 0xffffffff);
  }
  else {
    uVar4 = *(uint *)(param_7 + 0xd) | uVar4;
  }
LAB_1082d4c74:
  *(uint *)(param_7 + 0xd) = uVar4;
  return;
}



/* Entry: 1082d4ca8; end: 1082d4e23;  */

bool FUN_1082d4ca8(float *param_1)

{
  if ((param_1[0xc] == 0.0) && (*param_1 + 0.00024414062 < param_1[2])) {
    return param_1[4] + 0.00024414062 < param_1[5];
  }
  return false;
}



/* Entry: 1082d4e24; end: 1082d4eef;  */

uint FUN_1082d4e24(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  
  uVar3 = param_1;
  func_0x0001082d7670(param_1,0,1,2,3);
  func_0x0001082d7670(param_1,0,2,1,3);
  iVar2 = (int)param_1;
  uVar4 = (uint)uVar3;
  func_0x0001082d784c(uVar4 | 2);
  func_0x0001082d7670();
  func_0x0001082d784c(uVar4 | 4);
  func_0x0001082d7670();
  uVar1 = uVar4 | 8;
  if (iVar2 == 0) {
    uVar1 = uVar4;
  }
  return uVar1;
}



/* Entry: 1082d4ef0; end: 1082d5167;  */

bool FUN_1082d4ef0(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,undefined8 param_7,undefined8 param_8,float *param_9,float *param_10
                  )

{
  float fVar1;
  float fVar2;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulong uVar3;
  
  fVar16 = param_3;
  if (param_3 <= param_1) {
    fVar16 = param_1;
  }
  fVar1 = param_5;
  if (param_5 <= fVar16) {
    fVar1 = fVar16;
  }
  fVar16 = param_3;
  if (param_1 <= param_3) {
    fVar16 = param_1;
  }
  fVar15 = param_5;
  if (fVar16 <= param_5) {
    fVar15 = fVar16;
  }
  fVar16 = param_4;
  if (param_4 <= param_2) {
    fVar16 = param_2;
  }
  fVar11 = param_6;
  if (param_6 <= fVar16) {
    fVar11 = fVar16;
  }
  fVar16 = param_4;
  if (param_2 <= param_4) {
    fVar16 = param_2;
  }
  fVar13 = param_6;
  if (fVar16 <= param_6) {
    fVar13 = fVar16;
  }
  fVar16 = 1.0;
  if (fVar1 - fVar15 <= 1e+07) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = 1e+07 / (fVar1 - fVar15);
    param_1 = param_1 * fVar1;
    param_3 = param_3 * fVar1;
    param_5 = param_5 * fVar1;
  }
  uVar3 = (ulong)(uint)fVar1;
  if (1e+07 < fVar11 - fVar13) {
    fVar16 = 1e+07 / (fVar11 - fVar13);
    param_2 = param_2 * fVar16;
    param_4 = param_4 * fVar16;
    param_6 = param_6 * fVar16;
  }
  uVar4 = (ulong)(uint)fVar16;
  param_5 = param_5 - param_1;
  uVar5 = (ulong)(uint)param_5;
  param_6 = param_6 - param_2;
  uVar6 = (ulong)(uint)param_6;
  param_3 = param_3 - param_1;
  uVar8 = (ulong)(uint)param_3;
  param_4 = param_4 - param_2;
  uVar9 = (ulong)(uint)param_4;
  fVar15 = param_6 * param_6 + param_5 * param_5;
  fVar1 = param_4 * param_6 + param_3 * param_5;
  fVar16 = param_4 * param_4 + param_3 * param_3;
  fVar11 = -(fVar1 * fVar1) + fVar16 * fVar15;
  fVar13 = ABS(fVar11);
  if (0.03125 < fVar13) {
    fVar11 = 1.0 / fVar11;
    fVar14 = fVar13;
    FUN_1082d4a58(uVar3,param_7);
    FUN_1082d7618();
    func_0x0001082d7488();
    FUN_1082d7618();
    FUN_1082d4a58(uVar4,param_8);
    FUN_1082d7618();
    func_0x0001082d7488();
    FUN_1082d7618();
    FUN_1082d4a58(uVar5,uVar3);
    FUN_1082d7618();
    FUN_1082d4a58(uVar6,uVar4);
    FUN_1082d7618();
    uVar7 = CONCAT44((float)(uVar5 >> 0x20) + (float)(uVar6 >> 0x20),(float)uVar5 + (float)uVar6);
    FUN_1082d4a58(uVar8,uVar3);
    FUN_1082d7618();
    FUN_1082d4a58(uVar9,uVar4);
    FUN_1082d7618();
    uVar10 = CONCAT44((float)(uVar8 >> 0x20) + (float)(uVar9 >> 0x20),(float)uVar8 + (float)uVar9);
    FUN_1082d4a58(fVar16,uVar7);
    fVar12 = (float)uVar8;
    FUN_1082d7618();
    fVar2 = fVar1;
    FUN_1082d4a58(fVar1,uVar10);
    FUN_1082d7618();
    fVar16 = fVar16 - fVar2;
    fVar2 = fVar11;
    func_0x0001082d589c();
    *param_9 = fVar16;
    param_9[1] = fVar2;
    param_9[2] = fVar12;
    param_9[3] = fVar14;
    FUN_1082d4a58(fVar15,uVar10);
    FUN_1082d7618();
    FUN_1082d4a58(fVar1,uVar7);
    FUN_1082d7618();
    fVar15 = fVar15 - fVar1;
    func_0x0001082d589c();
    *param_10 = fVar15;
    param_10[1] = fVar11;
    param_10[2] = fVar12;
    param_10[3] = fVar14;
    func_0x0001082d780c();
    FUN_1082d7618();
    func_0x0001082d4098();
    func_0x0001082d7784();
  }
  return 0.03125 < fVar13;
}



/* Entry: 1082d5168; end: 1082d5217;  */

undefined1  [16] FUN_1082d5168(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 in_register_00005008;
  float fVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  int iVar17;
  int iVar18;
  float in_register_00005028;
  int iVar19;
  int iVar20;
  float in_register_0000502c;
  int iVar21;
  int iVar22;
  float fVar23;
  float in_register_00005048;
  float in_register_0000504c;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  float fVar28;
  float fVar30;
  undefined1 auVar29 [16];
  float fVar31;
  
  fVar23 = (float)((ulong)param_3 >> 0x20);
  fVar16 = (float)((ulong)param_2 >> 0x20);
  iVar24 = -(uint)(0.0 <= (float)param_1);
  fVar5 = (float)((ulong)param_1 >> 0x20);
  iVar25 = -(uint)(0.0 <= fVar5);
  iVar26 = -(uint)(0.0 <= (float)in_register_00005008);
  fVar10 = (float)((ulong)in_register_00005008 >> 0x20);
  iVar27 = -(uint)(0.0 <= fVar10);
  auVar29 = NEON_fmov(0x3f800000,4);
  fVar28 = auVar29._0_4_;
  iVar1 = -(uint)((float)param_1 <= fVar28);
  fVar30 = auVar29._4_4_;
  iVar6 = -(uint)(fVar5 <= fVar30);
  fVar5 = auVar29._8_4_;
  iVar7 = -(uint)((float)in_register_00005008 <= fVar5);
  fVar31 = auVar29._12_4_;
  iVar11 = -(uint)(fVar10 <= fVar31);
  uVar2 = CONCAT13((byte)((uint)iVar1 >> 0x18) & (byte)((uint)iVar24 >> 0x18),
                   CONCAT12((byte)((uint)iVar1 >> 0x10) & (byte)((uint)iVar24 >> 0x10),
                            CONCAT11((byte)((uint)iVar1 >> 8) & (byte)((uint)iVar24 >> 8),
                                     (byte)iVar1 & (byte)iVar24)));
  iVar1 = -(uint)(0.0 <= (float)param_2);
  iVar24 = -(uint)(0.0 <= fVar16);
  iVar8 = -(uint)(0.0 <= in_register_00005028);
  iVar12 = -(uint)(0.0 <= in_register_0000502c);
  iVar14 = -(uint)((float)param_2 <= fVar28);
  iVar17 = -(uint)(fVar16 <= fVar30);
  iVar19 = -(uint)(in_register_00005028 <= fVar5);
  iVar21 = -(uint)(in_register_0000502c <= fVar31);
  uVar3 = CONCAT13((byte)((uint)iVar14 >> 0x18) & (byte)((uint)iVar1 >> 0x18),
                   CONCAT12((byte)((uint)iVar14 >> 0x10) & (byte)((uint)iVar1 >> 0x10),
                            CONCAT11((byte)((uint)iVar14 >> 8) & (byte)((uint)iVar1 >> 8),
                                     (byte)iVar14 & (byte)iVar1)));
  iVar1 = -(uint)(0.0 <= (float)param_3);
  iVar14 = -(uint)(0.0 <= fVar23);
  iVar9 = -(uint)(0.0 <= in_register_00005048);
  iVar13 = -(uint)(0.0 <= in_register_0000504c);
  iVar15 = -(uint)((float)param_3 <= fVar28);
  iVar18 = -(uint)(fVar23 <= fVar30);
  iVar20 = -(uint)(in_register_00005048 <= fVar5);
  iVar22 = -(uint)(in_register_0000504c <= fVar31);
  uVar4 = CONCAT13((byte)((uint)iVar15 >> 0x18) & (byte)((uint)iVar1 >> 0x18),
                   CONCAT12((byte)((uint)iVar15 >> 0x10) & (byte)((uint)iVar1 >> 0x10),
                            CONCAT11((byte)((uint)iVar15 >> 8) & (byte)((uint)iVar1 >> 8),
                                     (byte)iVar15 & (byte)iVar1)));
  auVar29._8_8_ =
       CONCAT17((byte)((uint)iVar21 >> 0x18) & (byte)((uint)iVar12 >> 0x18),
                CONCAT16((byte)((uint)iVar21 >> 0x10) & (byte)((uint)iVar12 >> 0x10),
                         CONCAT15((byte)((uint)iVar21 >> 8) & (byte)((uint)iVar12 >> 8),
                                  CONCAT14((byte)iVar21 & (byte)iVar12,
                                           CONCAT13((byte)((uint)iVar19 >> 0x18) &
                                                    (byte)((uint)iVar8 >> 0x18),
                                                    CONCAT12((byte)((uint)iVar19 >> 0x10) &
                                                             (byte)((uint)iVar8 >> 0x10),
                                                             CONCAT11((byte)((uint)iVar19 >> 8) &
                                                                      (byte)((uint)iVar8 >> 8),
                                                                      (byte)iVar19 & (byte)iVar8))))
                                 ))) &
       CONCAT17((byte)((uint)iVar11 >> 0x18) & (byte)((uint)iVar27 >> 0x18),
                CONCAT16((byte)((uint)iVar11 >> 0x10) & (byte)((uint)iVar27 >> 0x10),
                         CONCAT15((byte)((uint)iVar11 >> 8) & (byte)((uint)iVar27 >> 8),
                                  CONCAT14((byte)iVar11 & (byte)iVar27,
                                           CONCAT13((byte)((uint)iVar7 >> 0x18) &
                                                    (byte)((uint)iVar26 >> 0x18),
                                                    CONCAT12((byte)((uint)iVar7 >> 0x10) &
                                                             (byte)((uint)iVar26 >> 0x10),
                                                             CONCAT11((byte)((uint)iVar7 >> 8) &
                                                                      (byte)((uint)iVar26 >> 8),
                                                                      (byte)iVar7 & (byte)iVar26))))
                                 ))) &
       CONCAT17((byte)((uint)iVar22 >> 0x18) & (byte)((uint)iVar13 >> 0x18),
                CONCAT16((byte)((uint)iVar22 >> 0x10) & (byte)((uint)iVar13 >> 0x10),
                         CONCAT15((byte)((uint)iVar22 >> 8) & (byte)((uint)iVar13 >> 8),
                                  CONCAT14((byte)iVar22 & (byte)iVar13,
                                           CONCAT13((byte)((uint)iVar20 >> 0x18) &
                                                    (byte)((uint)iVar9 >> 0x18),
                                                    CONCAT12((byte)((uint)iVar20 >> 0x10) &
                                                             (byte)((uint)iVar9 >> 0x10),
                                                             CONCAT11((byte)((uint)iVar20 >> 8) &
                                                                      (byte)((uint)iVar9 >> 8),
                                                                      (byte)iVar20 & (byte)iVar9))))
                                 )));
  auVar29._0_8_ =
       CONCAT44((int)(CONCAT17((byte)((uint)iVar17 >> 0x18) & (byte)((uint)iVar24 >> 0x18),
                               CONCAT16((byte)((uint)iVar17 >> 0x10) & (byte)((uint)iVar24 >> 0x10),
                                        CONCAT15((byte)((uint)iVar17 >> 8) &
                                                 (byte)((uint)iVar24 >> 8),
                                                 CONCAT14((byte)iVar17 & (byte)iVar24,uVar3)))) >>
                     0x20),uVar3) &
       CONCAT44((int)(CONCAT17((byte)((uint)iVar6 >> 0x18) & (byte)((uint)iVar25 >> 0x18),
                               CONCAT16((byte)((uint)iVar6 >> 0x10) & (byte)((uint)iVar25 >> 0x10),
                                        CONCAT15((byte)((uint)iVar6 >> 8) &
                                                 (byte)((uint)iVar25 >> 8),
                                                 CONCAT14((byte)iVar6 & (byte)iVar25,uVar2)))) >>
                     0x20),uVar2) &
       ((ulong)uVar4 |
       CONCAT17((byte)((uint)iVar18 >> 0x18) & (byte)((uint)iVar14 >> 0x18),
                CONCAT16((byte)((uint)iVar18 >> 0x10) & (byte)((uint)iVar14 >> 0x10),
                         CONCAT15((byte)((uint)iVar18 >> 8) & (byte)((uint)iVar14 >> 8),
                                  CONCAT14((byte)iVar18 & (byte)iVar14,uVar4)))) &
       0xffffffff00000000);
  return auVar29;
}


