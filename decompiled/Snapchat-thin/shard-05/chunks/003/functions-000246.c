/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103d3e570; end: 103d3edd7;  */

uint FUN_103d3e570(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  ulong uVar11;
  ulong uStack_278;
  ulong uStack_270;
  ulong auStack_268 [5];
  ulong uStack_240;
  double dStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  double dStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  double dStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c0;
  double dStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_190;
  double dStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_160;
  double dStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_130;
  double dStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_100;
  double dStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d0;
  double dStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a0;
  double dStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar2 = *param_1;
  if (uVar2 != *param_2 || param_1[1] != param_2[1]) {
    func_0x000107c605b8();
    uVar1 = 0;
    if ((uVar2 & 1) == 0) goto LAB_103d3edb4;
  }
  dVar9 = (double)param_1[5];
  uVar7 = param_1[4];
  uStack_270 = param_1[7];
  uStack_278 = param_1[6];
  uVar5 = param_1[8];
  dVar10 = (double)param_2[5];
  uVar2 = param_2[4];
  uVar11 = param_2[7];
  uVar8 = param_2[6];
  uVar6 = param_2[8];
  uStack_d0 = uVar2;
  dStack_c8 = dVar10;
  uStack_c0 = uVar8;
  uStack_b8 = uVar11;
  uStack_b0 = uVar6;
  uStack_a0 = uVar7;
  dStack_98 = dVar9;
  uStack_90 = uStack_278;
  uStack_88 = uStack_270;
  uStack_80 = uVar5;
  if (uVar5 >> 0x3c < 0xf) {
    if (0xe < uVar6 >> 0x3c) goto LAB_103d3e860;
    if (uVar7 == uVar2) {
      if ((dVar9 != dVar10) || ((int)uStack_278 != (int)uVar8)) {
        FUN_103d3e4c8(&uStack_a0,&uStack_240,0x113004ba0,&UNK_10dc80c30);
        puVar3 = &uStack_d0;
LAB_103d3ed70:
        FUN_103d3e4c8(puVar3,&uStack_240,0x113004ba0,&UNK_10dc80c30);
        uVar2 = uVar7;
        goto LAB_103d3ed84;
      }
      FUN_103d3e4c8(&uStack_a0,&uStack_240,0x113004ba0,&UNK_10dc80c30);
      FUN_103d3e4c8(&uStack_d0,&uStack_240,0x113004ba0,&UNK_10dc80c30);
      uVar2 = uStack_270;
      func_0x000100e25fcc(uStack_270,uVar5,uVar11,uVar6);
      FUN_103d3d504(uVar7,dVar10,uVar8,uVar11,uVar6);
      if ((uVar2 & 1) != 0) goto LAB_103d3e64c;
    }
    else {
      FUN_103d3e4c8(&uStack_a0,&uStack_240,0x113004ba0,&UNK_10dc80c30);
      puVar3 = &uStack_d0;
LAB_103d3ed34:
      FUN_103d3e4c8(puVar3,&uStack_240,0x113004ba0,&UNK_10dc80c30);
LAB_103d3ed84:
      FUN_103d3d504(uVar2,dVar10,uVar8,uVar11,uVar6);
    }
LAB_103d3ed9c:
    FUN_103d3d504(uVar7,dVar9,uStack_278,uStack_270,uVar5);
  }
  else {
    if (0xe < uVar6 >> 0x3c) {
      FUN_103d3e4c8(&uStack_a0,&uStack_240,0x113004ba0,&UNK_10dc80c30);
      FUN_103d3e4c8(&uStack_d0,&uStack_240,0x113004ba0,&UNK_10dc80c30);
LAB_103d3e64c:
      FUN_103d3d504(uVar7,dVar9,uStack_278,uStack_270,uVar5);
      dVar9 = (double)param_1[10];
      uVar7 = param_1[9];
      uStack_270 = param_1[0xc];
      uStack_278 = param_1[0xb];
      uVar5 = param_1[0xd];
      dVar10 = (double)param_2[10];
      uVar2 = param_2[9];
      uVar11 = param_2[0xc];
      uVar8 = param_2[0xb];
      uVar6 = param_2[0xd];
      uStack_130 = uVar2;
      dStack_128 = dVar10;
      uStack_120 = uVar8;
      uStack_118 = uVar11;
      uStack_110 = uVar6;
      uStack_100 = uVar7;
      dStack_f8 = dVar9;
      uStack_f0 = uStack_278;
      uStack_e8 = uStack_270;
      uStack_e0 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_103d3e940;
        if (uVar7 != uVar2) {
          FUN_103d3e4c8(&uStack_100,&uStack_240,0x113004ba0,&UNK_10dc80c30);
          puVar3 = &uStack_130;
          goto LAB_103d3ed34;
        }
        if ((dVar9 != dVar10) || ((int)uStack_278 != (int)uVar8)) {
          FUN_103d3e4c8(&uStack_100,&uStack_240,0x113004ba0,&UNK_10dc80c30);
          puVar3 = &uStack_130;
          goto LAB_103d3ed70;
        }
        FUN_103d3e4c8(&uStack_100,&uStack_240,0x113004ba0,&UNK_10dc80c30);
        FUN_103d3e4c8(&uStack_130,&uStack_240,0x113004ba0,&UNK_10dc80c30);
        uVar2 = uStack_270;
        func_0x000100e25fcc(uStack_270,uVar5,uVar11,uVar6);
        FUN_103d3d504(uVar7,dVar10,uVar8,uVar11,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_103d3ed9c;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_103d3e940:
          uStack_240 = uVar7;
          dStack_238 = dVar9;
          uStack_230 = uStack_278;
          uStack_228 = uStack_270;
          uStack_220 = uVar5;
          uStack_218 = uVar2;
          dStack_210 = dVar10;
          uStack_208 = uVar8;
          uStack_200 = uVar11;
          uStack_1f8 = uVar6;
          FUN_103d3e4c8(&uStack_100,&uStack_160,0x113004ba0,&UNK_10dc80c30);
          puVar3 = &uStack_130;
          puVar4 = &uStack_160;
          goto LAB_103d3ebf8;
        }
        FUN_103d3e4c8(&uStack_100,&uStack_240,0x113004ba0,&UNK_10dc80c30);
        FUN_103d3e4c8(&uStack_130,&uStack_240,0x113004ba0,&UNK_10dc80c30);
      }
      FUN_103d3d504(uVar7,dVar9,uStack_278,uStack_270,uVar5);
      dVar9 = (double)param_1[0xf];
      uVar7 = param_1[0xe];
      uStack_270 = param_1[0x11];
      uStack_278 = param_1[0x10];
      uVar5 = param_1[0x12];
      dVar10 = (double)param_2[0xf];
      uVar2 = param_2[0xe];
      uVar11 = param_2[0x11];
      uVar8 = param_2[0x10];
      uVar6 = param_2[0x12];
      uStack_190 = uVar2;
      dStack_188 = dVar10;
      uStack_180 = uVar8;
      uStack_178 = uVar11;
      uStack_170 = uVar6;
      uStack_160 = uVar7;
      dStack_158 = dVar9;
      uStack_150 = uStack_278;
      uStack_148 = uStack_270;
      uStack_140 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_103d3ea7c;
        if (uVar7 != uVar2) {
          FUN_103d3e4c8(&uStack_160,&uStack_240,0x113004ba0,&UNK_10dc80c30);
          puVar3 = &uStack_190;
          goto LAB_103d3ed34;
        }
        if ((dVar9 != dVar10) || ((int)uStack_278 != (int)uVar8)) {
          FUN_103d3e4c8(&uStack_160,&uStack_240,0x113004ba0,&UNK_10dc80c30);
          puVar3 = &uStack_190;
          goto LAB_103d3ed70;
        }
        FUN_103d3e4c8(&uStack_160,&uStack_240,0x113004ba0,&UNK_10dc80c30);
        FUN_103d3e4c8(&uStack_190,&uStack_240,0x113004ba0,&UNK_10dc80c30);
        uVar2 = uStack_270;
        func_0x000100e25fcc(uStack_270,uVar5,uVar11,uVar6);
        FUN_103d3d504(uVar7,dVar10,uVar8,uVar11,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_103d3ed9c;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_103d3ea7c:
          uStack_240 = uVar7;
          dStack_238 = dVar9;
          uStack_230 = uStack_278;
          uStack_228 = uStack_270;
          uStack_220 = uVar5;
          uStack_218 = uVar2;
          dStack_210 = dVar10;
          uStack_208 = uVar8;
          uStack_200 = uVar11;
          uStack_1f8 = uVar6;
          FUN_103d3e4c8(&uStack_160,&uStack_1c0,0x113004ba0,&UNK_10dc80c30);
          puVar3 = &uStack_190;
          puVar4 = &uStack_1c0;
          goto LAB_103d3ebf8;
        }
        FUN_103d3e4c8(&uStack_160,&uStack_240,0x113004ba0,&UNK_10dc80c30);
        FUN_103d3e4c8(&uStack_190,&uStack_240,0x113004ba0,&UNK_10dc80c30);
      }
      FUN_103d3d504(uVar7,dVar9,uStack_278,uStack_270,uVar5);
      dVar9 = (double)param_1[0x14];
      uVar7 = param_1[0x13];
      uStack_270 = param_1[0x16];
      uStack_278 = param_1[0x15];
      uVar5 = param_1[0x17];
      dVar10 = (double)param_2[0x14];
      uVar2 = param_2[0x13];
      uVar11 = param_2[0x16];
      uVar8 = param_2[0x15];
      uVar6 = param_2[0x17];
      uStack_1f0 = uVar2;
      dStack_1e8 = dVar10;
      uStack_1e0 = uVar8;
      uStack_1d8 = uVar11;
      uStack_1d0 = uVar6;
      uStack_1c0 = uVar7;
      dStack_1b8 = dVar9;
      uStack_1b0 = uStack_278;
      uStack_1a8 = uStack_270;
      uStack_1a0 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_103d3ebb8;
        if (uVar7 != uVar2) {
          FUN_103d3e4c8(&uStack_1c0,&uStack_240,0x113004ba0,&UNK_10dc80c30);
          puVar3 = &uStack_1f0;
          goto LAB_103d3ed34;
        }
        if ((dVar9 != dVar10) || ((int)uStack_278 != (int)uVar8)) {
          FUN_103d3e4c8(&uStack_1c0,&uStack_240,0x113004ba0,&UNK_10dc80c30);
          puVar3 = &uStack_1f0;
          goto LAB_103d3ed70;
        }
        FUN_103d3e4c8(&uStack_1c0,&uStack_240,0x113004ba0,&UNK_10dc80c30);
        FUN_103d3e4c8(&uStack_1f0,&uStack_240,0x113004ba0,&UNK_10dc80c30);
        uVar2 = uStack_270;
        func_0x000100e25fcc(uStack_270,uVar5,uVar11,uVar6);
        FUN_103d3d504(uVar7,dVar10,uVar8,uVar11,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_103d3ed9c;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_103d3ebb8:
          uStack_240 = uVar7;
          dStack_238 = dVar9;
          uStack_230 = uStack_278;
          uStack_228 = uStack_270;
          uStack_220 = uVar5;
          uStack_218 = uVar2;
          dStack_210 = dVar10;
          uStack_208 = uVar8;
          uStack_200 = uVar11;
          uStack_1f8 = uVar6;
          FUN_103d3e4c8(&uStack_1c0,auStack_268,0x113004ba0,&UNK_10dc80c30);
          puVar3 = &uStack_1f0;
          puVar4 = auStack_268;
          goto LAB_103d3ebf8;
        }
        FUN_103d3e4c8(&uStack_1c0,&uStack_240,0x113004ba0,&UNK_10dc80c30);
        FUN_103d3e4c8(&uStack_1f0,&uStack_240,0x113004ba0,&UNK_10dc80c30);
      }
      FUN_103d3d504(uVar7,dVar9,uStack_278,uStack_270,uVar5);
      uVar2 = param_1[2];
      func_0x000100e25fcc(uVar2,param_1[3],param_2[2],param_2[3]);
      uVar1 = (uint)uVar2;
      goto LAB_103d3edb4;
    }
LAB_103d3e860:
    uStack_240 = uVar7;
    dStack_238 = dVar9;
    uStack_230 = uStack_278;
    uStack_228 = uStack_270;
    uStack_220 = uVar5;
    uStack_218 = uVar2;
    dStack_210 = dVar10;
    uStack_208 = uVar8;
    uStack_200 = uVar11;
    uStack_1f8 = uVar6;
    FUN_103d3e4c8(&uStack_a0,&uStack_100,0x113004ba0,&UNK_10dc80c30);
    puVar3 = &uStack_d0;
    puVar4 = &uStack_100;
LAB_103d3ebf8:
    FUN_103d3e4c8(puVar3,puVar4,0x113004ba0,&UNK_10dc80c30);
    func_0x000103d5122c(&uStack_240,0x113005ff8,&UNK_10dc87750);
  }
  uVar1 = 0;
LAB_103d3edb4:
  return uVar1 & 1;
}



/* Entry: 103d3edd8; end: 103d3ee1b;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_103d3edd8(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (0xe < param_4 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_3);
  return;
}



/* Entry: 103d3ee1c; end: 103d3f01b;  */

void FUN_103d3ee1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113004e10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81998;
  func_0x000107c61520(&UNK_10dc81998,&UNK_1107042c8);
  puRam0000000113004e10 = puVar1;
  return;
}



/* Entry: 103d3f01c; end: 103d3f097;  */

/* WARNING: Possible PIC construction at 0x000103d3f04c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d3f050) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d3f01c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  pbVar12 = (byte *)*param_1;
  pbVar15 = (byte *)param_1[1];
  pbVar16 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar15,pbVar16,pbVar17,0);
    return pbVar12;
  }
  uVar13 = param_1[2];
  if ((uVar13 != param_2[2] || param_1[3] != param_2[3]) &&
     (func_0x000107c605b8(), (uVar13 & 1) == 0)) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[4];
  pbVar25 = (byte *)param_1[5];
  lVar24 = param_2[4];
  uVar13 = param_2[5];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar13 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar14 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar13 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar13 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar25;
            puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
            pbVar14 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar14 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar14) {
                pbVar14 = unaff_x23;
              }
              pbVar14 = pbVar14 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar14 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar14) {
              pbVar14 = unaff_x23;
            }
            pbVar14 = pbVar14 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar24,uVar13);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar13;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar15 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar24 = *(long *)pbVar14;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar17 = *(byte **)(pbVar14 + 0x10);
        lVar24 = *(long *)pbVar14;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar15 = pbVar25;
        if ((pbVar10 == pbVar16) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        lVar24 = *(long *)(pbVar14 + 0x18);
        if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 != (byte *)0x0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar24);
            func_0x000107c61174();
            pbVar12 = pbVar23;
            func_0x000107c60118();
            func_0x000107c61170(pbVar23);
            func_0x000107c61170(lVar24);
            pbVar23 = pbVar12;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar24 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar15 = pbVar23, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar17 = *(byte **)(pbVar14 + 0x18),
           pbVar25 == *(byte **)(pbVar14 + 0x10) && pbVar23 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar14 + 0x10);
      lVar24 = *(long *)(pbVar14 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar12 = pbVar10;
        pbVar15 = pbVar25;
        if ((pbVar10 != pbVar16) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar14 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar14 + 0x18),lVar24,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar23 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar14 + 0x20);
        lVar24 = *(long *)(pbVar14 + 0x18);
        bVar27 = pbVar14[8] | (byte)lVar24;
        bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar14[0x10] | (byte)lVar26;
        bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar14 + 0x20);
      lVar24 = *(long *)(pbVar14 + 0x18);
      bVar27 = pbVar14[8] | (byte)lVar24;
      bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar14[0x10] | (byte)lVar26;
      bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar24 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar14 + 8);
    uVar13 = *(ulong *)(pbVar14 + 0x10);
    lVar26 = *(long *)pbVar14;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 103d3f098; end: 103d3f117;  */

void FUN_103d3f098(void)

{
  undefined *puVar1;
  
  if (puRam0000000113004e90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc82058;
  func_0x000107c61520(&UNK_10dc82058,&UNK_110704700);
  puRam0000000113004e90 = puVar1;
  return;
}



/* Entry: 103d3f118; end: 103d3f5b7;  */

ulong * FUN_103d3f118(ulong *param_1,ulong *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 auStack_278 [72];
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar4 = *param_1;
  if (((uVar4 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar4 & 1) != 0))
     && ((uVar4 = param_1[2], uVar4 == param_2[2] && param_1[3] == param_2[3] ||
         (func_0x000107c605b8(), (uVar4 & 1) != 0)))) {
    uVar16 = param_1[0x11];
    uVar13 = param_1[0x10];
    uStack_98 = param_1[0x13];
    uStack_a0 = param_1[0x12];
    uVar19 = param_1[0x13];
    uStack_180 = param_1[0x12];
    uStack_88 = param_1[0x15];
    uStack_90 = param_1[0x14];
    uStack_b8 = param_1[0xf];
    uStack_c0 = param_1[0xe];
    uStack_a8 = param_1[0x11];
    uStack_b0 = param_1[0x10];
    uStack_198 = param_1[0xf];
    uVar4 = param_1[0xe];
    uStack_140 = param_2[0x11];
    uStack_148 = param_2[0x10];
    uStack_e8 = param_2[0x13];
    uStack_f0 = param_2[0x12];
    uStack_130 = param_2[0x13];
    uStack_138 = param_2[0x12];
    uStack_d8 = param_2[0x15];
    uStack_e0 = param_2[0x14];
    uStack_108 = param_2[0xf];
    uStack_110 = param_2[0xe];
    uStack_f8 = param_2[0x11];
    uStack_100 = param_2[0x10];
    uStack_150 = param_2[0xf];
    uStack_158 = param_2[0xe];
    uVar11 = param_1[0x15];
    uVar10 = param_1[0x14];
    uStack_120 = param_2[0x15];
    uStack_128 = param_2[0x14];
    uStack_80 = param_1[0x16];
    uStack_d0 = param_2[0x16];
    uVar9 = param_1[0x16];
    uStack_118 = param_2[0x16];
    uStack_1a0 = uVar4;
    uStack_190 = uVar13;
    uStack_188 = uVar16;
    uStack_178 = uVar19;
    uStack_170 = uVar10;
    uStack_168 = uVar11;
    uStack_160 = uVar9;
    if (uStack_198 == 0) {
      if (uStack_150 != 0) goto LAB_103d3f30c;
      FUN_103d3e4c8(&uStack_c0,&uStack_230,0x113004c38,&UNK_10dc80c50);
      FUN_103d3e4c8(&uStack_110,&uStack_230,0x113004c38,&UNK_10dc80c50);
LAB_103d3f46c:
      puVar5 = &uStack_1a0;
      func_0x000103d5122c(puVar5,0x113004c38,&UNK_10dc80c50);
      if ((((((byte)param_1[4] ^ (byte)param_2[4]) & 1) == 0) && (param_1[5] == param_2[5])) &&
         (param_1[6] == param_2[6])) {
        if ((char)param_2[8] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000103d3f4dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((ulong)(byte)(&UNK_10dc80b8e)[param_2[7]] * 4 + 0x103d3f4e0))();
          return puVar5;
        }
        if (param_1[7] == param_2[7]) {
          uVar4 = param_1[9];
          if ((((uVar4 == param_2[9]) && (param_1[10] == param_2[10])) ||
              (func_0x000107c605b8(), (uVar4 & 1) != 0)) &&
             ((((byte)param_1[0xb] ^ (byte)param_2[0xb]) & 1) == 0)) {
            uVar4 = param_1[0xc];
            func_0x000100e25fcc(uVar4,param_1[0xd],param_2[0xc],param_2[0xd]);
            uVar3 = (uint)uVar4;
            goto LAB_103d3f388;
          }
        }
      }
    }
    else {
      if (uStack_150 == 0) {
LAB_103d3f30c:
        uStack_230 = uVar4;
        uStack_228 = uStack_198;
        uStack_220 = uVar13;
        uStack_218 = uVar16;
        uStack_210 = uStack_180;
        uStack_208 = uVar19;
        uStack_200 = uVar10;
        uStack_1f8 = uVar11;
        uStack_1f0 = uVar9;
        uStack_1e8 = uStack_158;
        uStack_1e0 = uStack_150;
        uStack_1d8 = uStack_148;
        uStack_1d0 = uStack_140;
        uStack_1c8 = uStack_138;
        uStack_1c0 = uStack_130;
        uStack_1b8 = uStack_128;
        uStack_1b0 = uStack_120;
        uStack_1a8 = uStack_118;
        FUN_103d3e4c8(&uStack_c0,auStack_278,0x113004c38,&UNK_10dc80c50);
        FUN_103d3e4c8(&uStack_110,auStack_278,0x113004c38,&UNK_10dc80c50);
        uVar6 = 0x113004c40;
        puVar7 = &UNK_10dc80c58;
        puVar5 = &uStack_230;
      }
      else {
        bVar2 = (byte)uStack_180;
        uStack_228 = param_2[0xf];
        uStack_230 = param_2[0xe];
        uVar17 = param_2[0x11];
        uVar14 = param_2[0x10];
        uVar12 = param_2[0x13];
        uStack_210 = param_2[0x12];
        uVar18 = param_2[0x15];
        uVar15 = param_2[0x14];
        uVar8 = param_2[0x16];
        bVar1 = (byte)uStack_210;
        uStack_220 = uVar14;
        uStack_218 = uVar17;
        uStack_208 = uVar12;
        uStack_200 = uVar15;
        uStack_1f8 = uVar18;
        uStack_1f0 = uVar8;
        if ((((uVar4 == uStack_230) && (uStack_228 == uStack_198)) ||
            (func_0x000107c605b8(), (uVar4 & 1) != 0)) &&
           ((((uVar13 == uVar14 && (uVar16 == uVar17)) ||
             (func_0x000107c605b8(uVar13,uVar16,uVar14,uVar17,0), (uVar13 & 1) != 0)) &&
            ((((bVar1 ^ bVar2) & 1) == 0 &&
             (((uVar19 == uVar12 && (uVar10 == uVar15)) ||
              (func_0x000107c605b8(uVar19,uVar10,uVar12,uVar15,0), (uVar19 & 1) != 0)))))))) {
          FUN_103d3e4c8(&uStack_c0,auStack_278,0x113004c38,&UNK_10dc80c50);
          FUN_103d3e4c8(&uStack_110,auStack_278,0x113004c38,&UNK_10dc80c50);
          func_0x000100e25fcc(uVar11,uVar9,uVar18,uVar8);
          func_0x000103d5122c(&uStack_230,0x113004c38,&UNK_10dc80c50);
          if ((uVar11 & 1) != 0) goto LAB_103d3f46c;
          uVar6 = 0x113004c38;
          puVar7 = &UNK_10dc80c50;
          puVar5 = &uStack_1a0;
        }
        else {
          uVar6 = 0x113004c38;
          puVar7 = &UNK_10dc80c50;
          FUN_103d3e4c8(&uStack_c0,auStack_278,0x113004c38,&UNK_10dc80c50);
          FUN_103d3e4c8(&uStack_110,auStack_278,0x113004c38,&UNK_10dc80c50);
          func_0x000103d5122c(&uStack_230,0x113004c38,&UNK_10dc80c50);
          puVar5 = &uStack_1a0;
        }
      }
      func_0x000103d5122c(puVar5,uVar6,puVar7);
    }
  }
  uVar3 = 0;
LAB_103d3f388:
  return (ulong *)(ulong)(uVar3 & 1);
}



/* Entry: 103d3f5b8; end: 103d3f643;  */

/* WARNING: Possible PIC construction at 0x000103d3f5e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d3f5ec) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d3f5b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  pbVar12 = (byte *)*param_1;
  pbVar15 = (byte *)param_1[1];
  pbVar16 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar15,pbVar16,pbVar17,0);
    return pbVar12;
  }
  uVar13 = param_1[2];
  if (((uVar13 != param_2[2] || param_1[3] != param_2[3]) &&
      (func_0x000107c605b8(), (uVar13 & 1) == 0)) ||
     (((*(byte *)(param_1 + 4) ^ *(byte *)(param_2 + 4)) & 1) != 0)) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[5];
  pbVar25 = (byte *)param_1[6];
  lVar24 = param_2[5];
  uVar13 = param_2[6];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar13 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar14 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if (((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
         ((uVar13 >> 0x3e < 3 || ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000))))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar13 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar25;
            puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
            pbVar14 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar14 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar14) {
                pbVar14 = unaff_x23;
              }
              pbVar14 = pbVar14 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar14 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar14) {
              pbVar14 = unaff_x23;
            }
            pbVar14 = pbVar14 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar24,uVar13);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar13;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar15 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar24 = *(long *)pbVar14;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar17 = *(byte **)(pbVar14 + 0x10);
        lVar24 = *(long *)pbVar14;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar15 = pbVar25;
        if ((pbVar10 == pbVar16) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        lVar24 = *(long *)(pbVar14 + 0x18);
        if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 != (byte *)0x0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar24);
            func_0x000107c61174();
            pbVar12 = pbVar23;
            func_0x000107c60118();
            func_0x000107c61170(pbVar23);
            func_0x000107c61170(lVar24);
            pbVar23 = pbVar12;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar24 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar15 = pbVar23, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar17 = *(byte **)(pbVar14 + 0x18),
           pbVar25 == *(byte **)(pbVar14 + 0x10) && pbVar23 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar14 + 0x10);
      lVar24 = *(long *)(pbVar14 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar12 = pbVar10;
        pbVar15 = pbVar25;
        if ((pbVar10 != pbVar16) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar14 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar14 + 0x18),lVar24,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar23 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar14 + 0x20);
        lVar24 = *(long *)(pbVar14 + 0x18);
        bVar27 = pbVar14[8] | (byte)lVar24;
        bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar14[0x10] | (byte)lVar26;
        bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar14 + 0x20);
      lVar24 = *(long *)(pbVar14 + 0x18);
      bVar27 = pbVar14[8] | (byte)lVar24;
      bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar14[0x10] | (byte)lVar26;
      bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar24 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar14 + 8);
    uVar13 = *(ulong *)(pbVar14 + 0x10);
    lVar26 = *(long *)pbVar14;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 103d3f644; end: 103d3fb53;  */

uint FUN_103d3f644(ulong *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined1 auStack_998 [232];
  ulong uStack_8b0;
  ulong uStack_8a8;
  ulong uStack_8a0;
  ulong uStack_898;
  ulong uStack_890;
  ulong uStack_888;
  ulong uStack_880;
  ulong uStack_878;
  ulong uStack_870;
  ulong uStack_868;
  ulong uStack_860;
  ulong uStack_858;
  ulong uStack_850;
  ulong uStack_848;
  ulong uStack_840;
  ulong uStack_838;
  ulong uStack_830;
  ulong uStack_828;
  ulong uStack_820;
  ulong uStack_818;
  ulong uStack_810;
  ulong uStack_808;
  ulong uStack_800;
  ulong uStack_7f8;
  ulong uStack_7f0;
  ulong uStack_7e8;
  ulong uStack_7e0;
  ulong uStack_7d8;
  ulong uStack_7d0;
  ulong uStack_7c0;
  ulong uStack_7b8;
  ulong uStack_7b0;
  ulong uStack_7a8;
  ulong uStack_7a0;
  ulong uStack_798;
  ulong uStack_790;
  ulong uStack_788;
  ulong uStack_780;
  ulong uStack_778;
  ulong uStack_770;
  ulong uStack_768;
  ulong uStack_760;
  ulong uStack_758;
  ulong uStack_750;
  ulong uStack_748;
  ulong uStack_740;
  ulong uStack_738;
  ulong uStack_730;
  ulong uStack_728;
  ulong uStack_720;
  ulong uStack_718;
  ulong uStack_710;
  ulong uStack_708;
  ulong uStack_700;
  ulong uStack_6f8;
  ulong uStack_6f0;
  ulong uStack_6e8;
  ulong uStack_6e0;
  ulong uStack_6d0;
  ulong uStack_6c8;
  ulong uStack_6c0;
  ulong uStack_6b8;
  ulong uStack_6b0;
  ulong uStack_6a8;
  ulong uStack_6a0;
  ulong uStack_698;
  ulong uStack_690;
  ulong uStack_688;
  ulong uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_658;
  ulong uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  ulong uStack_638;
  ulong uStack_630;
  ulong uStack_628;
  ulong uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  ulong uStack_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  ulong uStack_500;
  ulong uStack_4f8;
  ulong uStack_4f0;
  ulong uStack_4e8;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  ulong uStack_4c8;
  ulong uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  ulong uStack_4a8;
  ulong uStack_4a0;
  ulong uStack_498;
  ulong uStack_490;
  ulong uStack_488;
  ulong uStack_480;
  ulong uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar4 = *param_1;
  if (((uVar4 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar4 & 1) != 0))
     && ((uVar4 = param_1[2], uVar4 == param_2[2] && param_1[3] == param_2[3] ||
         (func_0x000107c605b8(), (uVar4 & 1) != 0)))) {
    uVar4 = param_1[4];
    uVar6 = param_2[4];
    if ((char)param_2[5] == '\x01') {
      if ((long)uVar6 < 2) {
        if (uVar6 == 0) {
          if (uVar4 == 0) {
LAB_103d3f6e0:
            uStack_448 = param_1[0x23];
            uStack_450 = param_1[0x22];
            uStack_178 = param_1[0x25];
            uStack_180 = param_1[0x24];
            uStack_438 = param_1[0x25];
            uStack_440 = param_1[0x24];
            uStack_168 = param_1[0x27];
            uStack_170 = param_1[0x26];
            uStack_488 = param_1[0x1b];
            uStack_490 = param_1[0x1a];
            uStack_1b8 = param_1[0x1d];
            uStack_1c0 = param_1[0x1c];
            uStack_478 = param_1[0x1d];
            uStack_480 = param_1[0x1c];
            uStack_1a8 = param_1[0x1f];
            uStack_1b0 = param_1[0x1e];
            uStack_468 = param_1[0x1f];
            uStack_470 = param_1[0x1e];
            uStack_198 = param_1[0x21];
            uStack_1a0 = param_1[0x20];
            uStack_458 = param_1[0x21];
            uStack_460 = param_1[0x20];
            uStack_188 = param_1[0x23];
            uStack_190 = param_1[0x22];
            uStack_4c8 = param_1[0x13];
            uStack_4d0 = param_1[0x12];
            uStack_1f8 = param_1[0x15];
            uStack_200 = param_1[0x14];
            uStack_4b8 = param_1[0x15];
            uStack_4c0 = param_1[0x14];
            uStack_1e8 = param_1[0x17];
            uStack_1f0 = param_1[0x16];
            uStack_4a8 = param_1[0x17];
            uStack_4b0 = param_1[0x16];
            uStack_1d8 = param_1[0x19];
            uStack_1e0 = param_1[0x18];
            uStack_498 = param_1[0x19];
            uStack_4a0 = param_1[0x18];
            uStack_1c8 = param_1[0x1b];
            uStack_1d0 = param_1[0x1a];
            uStack_238 = param_1[0xd];
            uStack_240 = param_1[0xc];
            uStack_228 = param_1[0xf];
            uStack_230 = param_1[0xe];
            uStack_4f8 = param_1[0xd];
            uStack_500 = param_1[0xc];
            uStack_4e8 = param_1[0xf];
            uStack_4f0 = param_1[0xe];
            uStack_218 = param_1[0x11];
            uStack_220 = param_1[0x10];
            uStack_208 = param_1[0x13];
            uStack_210 = param_1[0x12];
            uStack_4d8 = param_1[0x11];
            uStack_4e0 = param_1[0x10];
            uStack_360 = param_2[0x23];
            uStack_368 = param_2[0x22];
            uStack_268 = param_2[0x25];
            uStack_270 = param_2[0x24];
            uStack_350 = param_2[0x25];
            uStack_358 = param_2[0x24];
            uStack_258 = param_2[0x27];
            uStack_260 = param_2[0x26];
            uStack_3a0 = param_2[0x1b];
            uStack_3a8 = param_2[0x1a];
            uStack_2a8 = param_2[0x1d];
            uStack_2b0 = param_2[0x1c];
            uStack_390 = param_2[0x1d];
            uStack_398 = param_2[0x1c];
            uStack_298 = param_2[0x1f];
            uStack_2a0 = param_2[0x1e];
            uStack_380 = param_2[0x1f];
            uStack_388 = param_2[0x1e];
            uStack_288 = param_2[0x21];
            uStack_290 = param_2[0x20];
            uStack_370 = param_2[0x21];
            uStack_378 = param_2[0x20];
            uStack_278 = param_2[0x23];
            uStack_280 = param_2[0x22];
            uStack_3e0 = param_2[0x13];
            uStack_3e8 = param_2[0x12];
            uStack_2e8 = param_2[0x15];
            uStack_2f0 = param_2[0x14];
            uStack_3d0 = param_2[0x15];
            uStack_3d8 = param_2[0x14];
            uStack_2d8 = param_2[0x17];
            uStack_2e0 = param_2[0x16];
            uStack_3c0 = param_2[0x17];
            uStack_3c8 = param_2[0x16];
            uStack_2c8 = param_2[0x19];
            uStack_2d0 = param_2[0x18];
            uStack_3b0 = param_2[0x19];
            uStack_3b8 = param_2[0x18];
            uStack_2c0 = param_2[0x1a];
            uStack_2b8 = param_2[0x1b];
            uStack_328 = param_2[0xd];
            uStack_330 = param_2[0xc];
            uStack_320 = param_2[0xe];
            uStack_318 = param_2[0xf];
            uStack_410 = param_2[0xd];
            uStack_418 = param_2[0xc];
            uStack_400 = param_2[0xf];
            uStack_408 = param_2[0xe];
            uStack_3f8 = param_2[0x10];
            uStack_3f0 = param_2[0x11];
            uStack_2f8 = param_2[0x13];
            uStack_300 = param_2[0x12];
            uStack_308 = param_2[0x11];
            uStack_310 = param_2[0x10];
            uStack_428 = param_1[0x27];
            uStack_430 = param_1[0x26];
            iVar2 = (int)&uStack_418;
            uStack_340 = param_2[0x27];
            uStack_348 = param_2[0x26];
            uStack_160 = param_1[0x28];
            uStack_250 = param_2[0x28];
            uStack_420 = param_1[0x28];
            uStack_338 = param_2[0x28];
            iVar1 = (int)&uStack_500;
            FUN_103d3d8a0();
            if (iVar1 == 1) {
              FUN_103d3d8a0();
              if (iVar2 == 1) {
                uStack_608 = uStack_438;
                uStack_610 = uStack_440;
                uStack_5f8 = uStack_428;
                uStack_600 = uStack_430;
                uStack_5f0 = uStack_420;
                uStack_648 = uStack_478;
                uStack_650 = uStack_480;
                uStack_638 = uStack_468;
                uStack_640 = uStack_470;
                uStack_628 = uStack_458;
                uStack_630 = uStack_460;
                uStack_618 = uStack_448;
                uStack_620 = uStack_450;
                uStack_688 = uStack_4b8;
                uStack_690 = uStack_4c0;
                uStack_678 = uStack_4a8;
                uStack_680 = uStack_4b0;
                uStack_668 = uStack_498;
                uStack_670 = uStack_4a0;
                uStack_658 = uStack_488;
                uStack_660 = uStack_490;
                uStack_6c8 = uStack_4f8;
                uStack_6d0 = uStack_500;
                uStack_6b8 = uStack_4e8;
                uStack_6c0 = uStack_4f0;
                uStack_6a8 = uStack_4d8;
                uStack_6b0 = uStack_4e0;
                uStack_698 = uStack_4c8;
                uStack_6a0 = uStack_4d0;
                FUN_103d3e4c8(&uStack_240,&uStack_150,0x113004c68,&UNK_10dc80c78);
                FUN_103d3e4c8(&uStack_330,&uStack_150,0x113004c68,&UNK_10dc80c78);
                func_0x000103d5122c(&uStack_6d0,0x113004c68,&UNK_10dc80c78);
LAB_103d3fad8:
                if ((param_1[6] == param_2[6]) && (param_1[7] == param_2[7])) {
                  uVar4 = param_1[8];
                  if (((uVar4 == param_2[8]) && (param_1[9] == param_2[9])) ||
                     (func_0x000107c605b8(), (uVar4 & 1) != 0)) {
                    uVar4 = param_1[10];
                    func_0x000100e25fcc(uVar4,param_1[0xb],param_2[10],param_2[0xb]);
                    uVar3 = (uint)uVar4;
                    goto LAB_103d3fb30;
                  }
                }
              }
              else {
LAB_103d3f91c:
                func_0x000107c610b4(&uStack_6d0,&uStack_500,0x1d0);
                FUN_103d3e4c8(&uStack_240,&uStack_150,0x113004c68,&UNK_10dc80c78);
                FUN_103d3e4c8(&uStack_330,&uStack_150,0x113004c68,&UNK_10dc80c78);
                func_0x000103d5122c(&uStack_6d0,0x113004c70,&UNK_10dc80c80);
              }
            }
            else {
              uStack_6f8 = uStack_438;
              uStack_700 = uStack_440;
              uStack_6e8 = uStack_428;
              uStack_6f0 = uStack_430;
              uStack_6e0 = uStack_420;
              uStack_738 = uStack_478;
              uStack_740 = uStack_480;
              uStack_728 = uStack_468;
              uStack_730 = uStack_470;
              uStack_718 = uStack_458;
              uStack_720 = uStack_460;
              uStack_708 = uStack_448;
              uStack_710 = uStack_450;
              uStack_778 = uStack_4b8;
              uStack_780 = uStack_4c0;
              uStack_768 = uStack_4a8;
              uStack_770 = uStack_4b0;
              uStack_758 = uStack_498;
              uStack_760 = uStack_4a0;
              uStack_748 = uStack_488;
              uStack_750 = uStack_490;
              uStack_7b8 = uStack_4f8;
              uStack_7c0 = uStack_500;
              uStack_7a8 = uStack_4e8;
              uStack_7b0 = uStack_4f0;
              uStack_798 = uStack_4d8;
              uStack_7a0 = uStack_4e0;
              uStack_788 = uStack_4c8;
              uStack_790 = uStack_4d0;
              FUN_103d3d8a0();
              if (iVar2 == 1) goto LAB_103d3f91c;
              uStack_7e8 = uStack_350;
              uStack_7f0 = uStack_358;
              uStack_7d8 = uStack_340;
              uStack_7e0 = uStack_348;
              uStack_828 = uStack_390;
              uStack_830 = uStack_398;
              uStack_818 = uStack_380;
              uStack_820 = uStack_388;
              uStack_808 = uStack_370;
              uStack_810 = uStack_378;
              uStack_7f8 = uStack_360;
              uStack_800 = uStack_368;
              uStack_868 = uStack_3d0;
              uStack_870 = uStack_3d8;
              uStack_858 = uStack_3c0;
              uStack_860 = uStack_3c8;
              uStack_848 = uStack_3b0;
              uStack_850 = uStack_3b8;
              uStack_838 = uStack_3a0;
              uStack_840 = uStack_3a8;
              uStack_8a8 = uStack_410;
              uStack_8b0 = uStack_418;
              uStack_898 = uStack_400;
              uStack_8a0 = uStack_408;
              uStack_888 = uStack_3f0;
              uStack_890 = uStack_3f8;
              uStack_878 = uStack_3e0;
              uStack_880 = uStack_3e8;
              uStack_608 = uStack_350;
              uStack_610 = uStack_358;
              uStack_5f8 = uStack_340;
              uStack_600 = uStack_348;
              uStack_648 = uStack_390;
              uStack_650 = uStack_398;
              uStack_638 = uStack_380;
              uStack_640 = uStack_388;
              uStack_628 = uStack_370;
              uStack_630 = uStack_378;
              uStack_618 = uStack_360;
              uStack_620 = uStack_368;
              uStack_688 = uStack_3d0;
              uStack_690 = uStack_3d8;
              uStack_678 = uStack_3c0;
              uStack_680 = uStack_3c8;
              uStack_668 = uStack_3b0;
              uStack_670 = uStack_3b8;
              uStack_658 = uStack_3a0;
              uStack_660 = uStack_3a8;
              uStack_6c8 = uStack_410;
              uStack_6d0 = uStack_418;
              uStack_6b8 = uStack_400;
              uStack_6c0 = uStack_408;
              uStack_6a8 = uStack_3f0;
              uStack_6b0 = uStack_3f8;
              uStack_698 = uStack_3e0;
              uStack_6a0 = uStack_3e8;
              uStack_98 = uStack_708;
              uStack_a0 = uStack_710;
              uStack_88 = uStack_6f8;
              uStack_90 = uStack_700;
              uStack_78 = uStack_6e8;
              uStack_80 = uStack_6f0;
              uStack_d8 = uStack_748;
              uStack_e0 = uStack_750;
              uStack_c8 = uStack_738;
              uStack_d0 = uStack_740;
              uStack_7d0 = uStack_338;
              uStack_5f0 = uStack_338;
              uStack_70 = uStack_6e0;
              uStack_b8 = uStack_728;
              uStack_c0 = uStack_730;
              uStack_a8 = uStack_718;
              uStack_b0 = uStack_720;
              uStack_108 = uStack_778;
              uStack_110 = uStack_780;
              uStack_f8 = uStack_768;
              uStack_100 = uStack_770;
              uStack_e8 = uStack_758;
              uStack_f0 = uStack_760;
              uStack_148 = uStack_7b8;
              uStack_150 = uStack_7c0;
              uStack_138 = uStack_7a8;
              uStack_140 = uStack_7b0;
              uStack_128 = uStack_798;
              uStack_130 = uStack_7a0;
              uStack_118 = uStack_788;
              uStack_120 = uStack_790;
              FUN_103d3e4c8(&uStack_240,auStack_998,0x113004c68,&UNK_10dc80c78);
              FUN_103d3e4c8(&uStack_330,auStack_998,0x113004c68,&UNK_10dc80c78);
              puVar5 = &uStack_150;
              FUN_103d3d920(puVar5,&uStack_6d0);
              func_0x000103d5122c(&uStack_8b0,0x113004c68,&UNK_10dc80c78);
              func_0x000103d5122c(&uStack_500,0x113004c68,&UNK_10dc80c78);
              if (((ulong)puVar5 & 1) != 0) goto LAB_103d3fad8;
            }
          }
        }
        else if (uVar4 == 1) goto LAB_103d3f6e0;
      }
      else if (uVar6 == 2) {
        if (uVar4 == 2) goto LAB_103d3f6e0;
      }
      else if (uVar4 == 3) goto LAB_103d3f6e0;
    }
    else if (uVar4 == uVar6) goto LAB_103d3f6e0;
  }
  uVar3 = 0;
LAB_103d3fb30:
  return uVar3 & 1;
}



/* Entry: 103d3fb54; end: 103d3fd53;  */

/* WARNING: Possible PIC construction at 0x000103d3fb84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d3fbe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d3fbec) */
/* WARNING: Removing unreachable block (ram,0x000103d3fb88) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d3fb54(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  pbVar13 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  pbVar17 = (byte *)*param_2;
  pbVar12 = (byte *)param_2[1];
  if (pbVar13 == pbVar17 && pbVar16 == pbVar12) {
    uVar14 = param_1[2];
    if (((uVar14 != param_2[2] || param_1[3] != param_2[3]) &&
        (func_0x000107c605b8(), (uVar14 & 1) == 0)) ||
       (((*(byte *)(param_1 + 4) ^ *(byte *)(param_2 + 4)) & 1) != 0)) {
      return (byte *)0x0;
    }
    pbVar13 = (byte *)param_1[5];
    pbVar16 = (byte *)param_1[6];
    pbVar17 = (byte *)param_2[5];
    pbVar12 = (byte *)param_2[6];
    if ((pbVar13 == pbVar17) && (pbVar16 == pbVar12)) {
      pbVar10 = (byte *)param_1[7];
      pbVar25 = (byte *)param_1[8];
      lVar24 = param_2[7];
      uVar14 = param_2[8];
      puVar7 = (undefined1 *)register0x00000008;
      do {
        *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
        *(byte **)(puVar7 + -0x48) = unaff_x25;
        *(byte **)(puVar7 + -0x40) = unaff_x24;
        *(byte **)(puVar7 + -0x38) = unaff_x23;
        *(ulong *)(puVar7 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
        *(ulong *)(puVar7 + -0x20) = unaff_x20;
        *(byte **)(puVar7 + -0x18) = unaff_x19;
        *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar7 + -8) = unaff_x30;
        *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar4 = (uint)((ulong)pbVar25 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar14 >> 0x20);
        uVar21 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar15 = pbVar25;
        if ((ulong)pbVar25 >> 0x3e == 3) {
          uVar20 = 0;
          if (((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
             ((uVar14 >> 0x3e < 3 || ((uVar20 = 0, lVar24 != 0 || (uVar14 != 0xc000000000000000)))))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
          }
          else {
            iVar19 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar20 = (ulong)(iVar19 - iVar8);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar21 == 0) {
            uVar22 = uVar14 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar19 = (int)((ulong)lVar24 >> 0x20);
          if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar20 = 0;
          if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar21 == 2) {
            uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
            if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar20 < 1) goto code_r0x000100e26128;
            if (uVar18 < 2) {
              if (uVar18 == 0) {
                puVar7[-0x70] = (char)pbVar10;
                puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                puVar7[-0x68] = (char)pbVar25;
                puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
                puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
                puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
                puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
                puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
                pbVar15 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar8;
              unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar6)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar25;
              if (pbVar10 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar10 = (byte *)0x0;
              }
              else {
                pbVar15 = pbVar10;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar15)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar15);
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar15) {
                    pbVar15 = unaff_x23;
                  }
                  pbVar15 = pbVar15 + (long)pbVar10;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar15 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar15 = puVar7 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar26 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar15 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar26,(long)pbVar15)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar26 - (long)pbVar15);
              }
              unaff_x23 = unaff_x24 + -lVar26;
              if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar25;
              if (pbVar10 == (byte *)0x0) {
                pbVar15 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar15) {
                  pbVar15 = unaff_x23;
                }
                pbVar15 = pbVar15 + (long)pbVar10;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar15,lVar24,uVar14);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar14;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar20 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
          return pbVar9;
        }
        func_0x000107c60e78();
        *(byte **)(puVar7 + -0xc0) = unaff_x24;
        *(byte **)(puVar7 + -0xb8) = unaff_x23;
        *(ulong *)(puVar7 + -0xb0) = unaff_x22;
        *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
        *(ulong *)(puVar7 + -0xa0) = unaff_x20;
        *(byte **)(puVar7 + -0x98) = unaff_x19;
        *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
        *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
        pbVar13 = *(byte **)pbVar9;
        pbVar10 = *(byte **)(pbVar9 + 8);
        pbVar23 = *(byte **)(pbVar9 + 0x18);
        bVar27 = pbVar9[0x28];
        pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar16 = pbVar10;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar15[0x28] == 0) {
              lVar24 = *(long *)pbVar15;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar13,lVar24,uVar11);
              return (byte *)(ulong)((uint)pbVar13 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar15[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)(pbVar15 + 8);
            pbVar12 = *(byte **)(pbVar15 + 0x10);
            lVar24 = *(long *)pbVar15;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar13,lVar24,uVar11);
            if (((ulong)pbVar13 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar13 = pbVar10;
            pbVar16 = pbVar25;
            if ((pbVar10 == pbVar17) && (pbVar25 == pbVar12)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar15[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)pbVar15;
            pbVar12 = *(byte **)(pbVar15 + 8);
            lVar24 = *(long *)(pbVar15 + 0x18);
            if ((pbVar13 == pbVar17) && (pbVar10 == pbVar12)) {
              if (((pbVar9[0x10] ^ pbVar15[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar23 != (byte *)0x0) {
                if (lVar24 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar24);
                func_0x000107c61174();
                pbVar12 = pbVar23;
                func_0x000107c60118();
                func_0x000107c61170(pbVar23);
                func_0x000107c61170(lVar24);
                pbVar23 = pbVar12;
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar24 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
          }
          break;
        }
        lVar26 = *(long *)(pbVar9 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar15[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)pbVar15;
            pbVar12 = *(byte **)(pbVar15 + 8);
            if (((pbVar13 == pbVar17) && (pbVar10 == pbVar12)) &&
               (pbVar13 = pbVar25, pbVar16 = pbVar23, pbVar17 = *(byte **)(pbVar15 + 0x10),
               pbVar12 = *(byte **)(pbVar15 + 0x18),
               pbVar25 == *(byte **)(pbVar15 + 0x10) && pbVar23 == *(byte **)(pbVar15 + 0x18))) {
              return (byte *)0x1;
            }
            break;
          }
          if (pbVar15[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar15 != ((uint)pbVar13 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar12 = *(byte **)(pbVar15 + 0x10);
          lVar24 = *(long *)(pbVar15 + 0x20);
          if (pbVar25 == (byte *)0x0) {
            if (pbVar12 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar12 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)(pbVar15 + 8);
            pbVar13 = pbVar10;
            pbVar16 = pbVar25;
            if ((pbVar10 != pbVar17) || (pbVar25 != pbVar12)) break;
          }
          if (lVar26 != 0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar23 == *(byte **)(pbVar15 + 0x18)) && (lVar26 == lVar24)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar15 + 0x18),lVar24,0);
joined_r0x000100e266a4:
            if (((ulong)pbVar23 & 1) == 0) {
              return (byte *)0x0;
            }
            return (byte *)0x1;
          }
          goto joined_r0x000100e26620;
        }
        if (bVar27 != 5) {
          if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
              lVar26 == 0) && pbVar25 == (byte *)0x0) {
            if (pbVar15[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar26 = *(long *)(pbVar15 + 0x20);
            lVar24 = *(long *)(pbVar15 + 0x18);
            bVar27 = pbVar15[8] | (byte)lVar24;
            bVar28 = pbVar15[9] | (byte)((ulong)lVar24 >> 8);
            bVar29 = pbVar15[10] | (byte)((ulong)lVar24 >> 0x10);
            bVar30 = pbVar15[0xb] | (byte)((ulong)lVar24 >> 0x18);
            bVar31 = pbVar15[0xc] | (byte)((ulong)lVar24 >> 0x20);
            bVar32 = pbVar15[0xd] | (byte)((ulong)lVar24 >> 0x28);
            bVar33 = pbVar15[0xe] | (byte)((ulong)lVar24 >> 0x30);
            bVar34 = pbVar15[0xf] | (byte)((ulong)lVar24 >> 0x38);
            bVar35 = pbVar15[0x10] | (byte)lVar26;
            bVar36 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
            bVar37 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
            bVar38 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
            bVar39 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
            bVar40 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
            bVar41 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
            bVar42 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
            auVar43[1] = bVar28;
            auVar43[0] = bVar27;
            auVar43[2] = bVar29;
            auVar43[3] = bVar30;
            auVar43[4] = bVar31;
            auVar43[5] = bVar32;
            auVar43[6] = bVar33;
            auVar43[7] = bVar34;
            auVar43[8] = bVar35;
            auVar43[9] = bVar36;
            auVar43[10] = bVar37;
            auVar43[0xb] = bVar38;
            auVar43[0xc] = bVar39;
            auVar43[0xd] = bVar40;
            auVar43[0xe] = bVar41;
            auVar43[0xf] = bVar42;
            auVar3[1] = bVar28;
            auVar3[0] = bVar27;
            auVar3[2] = bVar29;
            auVar3[3] = bVar30;
            auVar3[4] = bVar31;
            auVar3[5] = bVar32;
            auVar3[6] = bVar33;
            auVar3[7] = bVar34;
            auVar3[8] = bVar35;
            auVar3[9] = bVar36;
            auVar3[10] = bVar37;
            auVar3[0xb] = bVar38;
            auVar3[0xc] = bVar39;
            auVar3[0xd] = bVar40;
            auVar3[0xe] = bVar41;
            auVar3[0xf] = bVar42;
            auVar43 = NEON_ext(auVar43,auVar3,8,1);
            if (CONCAT17(bVar34 | auVar43[7],
                         CONCAT16(bVar33 | auVar43[6],
                                  CONCAT15(bVar32 | auVar43[5],
                                           CONCAT14(bVar31 | auVar43[4],
                                                    CONCAT13(bVar30 | auVar43[3],
                                                             CONCAT12(bVar29 | auVar43[2],
                                                                      CONCAT11(bVar28 | auVar43[1],
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar15 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar13 == (byte *)0x1) &&
             (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
              lVar26 == 0)) {
            if (pbVar15[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar15 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar15[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar15 != 2) {
              return (byte *)0x0;
            }
          }
          lVar26 = *(long *)(pbVar15 + 0x20);
          lVar24 = *(long *)(pbVar15 + 0x18);
          bVar27 = pbVar15[8] | (byte)lVar24;
          bVar28 = pbVar15[9] | (byte)((ulong)lVar24 >> 8);
          bVar29 = pbVar15[10] | (byte)((ulong)lVar24 >> 0x10);
          bVar30 = pbVar15[0xb] | (byte)((ulong)lVar24 >> 0x18);
          bVar31 = pbVar15[0xc] | (byte)((ulong)lVar24 >> 0x20);
          bVar32 = pbVar15[0xd] | (byte)((ulong)lVar24 >> 0x28);
          bVar33 = pbVar15[0xe] | (byte)((ulong)lVar24 >> 0x30);
          bVar34 = pbVar15[0xf] | (byte)((ulong)lVar24 >> 0x38);
          bVar35 = pbVar15[0x10] | (byte)lVar26;
          bVar36 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
          bVar37 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
          bVar38 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
          bVar39 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
          bVar40 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
          bVar41 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
          bVar42 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
          auVar1[1] = bVar28;
          auVar1[0] = bVar27;
          auVar1[2] = bVar29;
          auVar1[3] = bVar30;
          auVar1[4] = bVar31;
          auVar1[5] = bVar32;
          auVar1[6] = bVar33;
          auVar1[7] = bVar34;
          auVar1[8] = bVar35;
          auVar1[9] = bVar36;
          auVar1[10] = bVar37;
          auVar1[0xb] = bVar38;
          auVar1[0xc] = bVar39;
          auVar1[0xd] = bVar40;
          auVar1[0xe] = bVar41;
          auVar1[0xf] = bVar42;
          auVar2[1] = bVar28;
          auVar2[0] = bVar27;
          auVar2[2] = bVar29;
          auVar2[3] = bVar30;
          auVar2[4] = bVar31;
          auVar2[5] = bVar32;
          auVar2[6] = bVar33;
          auVar2[7] = bVar34;
          auVar2[8] = bVar35;
          auVar2[9] = bVar36;
          auVar2[10] = bVar37;
          auVar2[0xb] = bVar38;
          auVar2[0xc] = bVar39;
          auVar2[0xd] = bVar40;
          auVar2[0xe] = bVar41;
          auVar2[0xf] = bVar42;
          auVar43 = NEON_ext(auVar1,auVar2,8,1);
          lVar24 = CONCAT17(bVar34 | auVar43[7],
                            CONCAT16(bVar33 | auVar43[6],
                                     CONCAT15(bVar32 | auVar43[5],
                                              CONCAT14(bVar31 | auVar43[4],
                                                       CONCAT13(bVar30 | auVar43[3],
                                                                CONCAT12(bVar29 | auVar43[2],
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar15[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar15 + 8);
        uVar14 = *(ulong *)(pbVar15 + 0x10);
        lVar26 = *(long *)pbVar15;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar13,lVar26,uVar11);
        if (((ulong)pbVar13 & 1) == 0) {
          return (byte *)0x0;
        }
        unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
        unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
        unaff_x20 = *(ulong *)(puVar7 + -0xa0);
        unaff_x19 = *(byte **)(puVar7 + -0x98);
        unaff_x22 = *(ulong *)(puVar7 + -0xb0);
        unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
        unaff_x24 = *(byte **)(puVar7 + -0xc0);
        unaff_x23 = *(byte **)(puVar7 + -0xb8);
        puVar7 = puVar7 + -0x80;
      } while( true );
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(pbVar13,pbVar16,pbVar17,pbVar12,0);
  return pbVar13;
}



/* Entry: 103d3fd54; end: 103d3fe47;  */

/* WARNING: Possible PIC construction at 0x000103d3fd8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d3fe28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d3fd90) */
/* WARNING: Removing unreachable block (ram,0x000103d3fe2c) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d3fd54(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  long lVar26;
  byte *pbVar27;
  ulong unaff_x22;
  undefined8 *puVar28;
  byte *unaff_x23;
  undefined8 *puVar29;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  undefined1 auVar46 [16];
  
  pbVar12 = (byte *)*param_1;
  pbVar15 = (byte *)param_1[1];
  pbVar16 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar15,pbVar16,pbVar17,0);
    return pbVar12;
  }
  lVar19 = param_1[2];
  lVar22 = param_2[2];
  lVar26 = *(long *)(lVar19 + 0x10);
  if (lVar26 == *(long *)(lVar22 + 0x10)) {
    if (lVar26 != 0 && lVar19 != lVar22) {
      puVar28 = (undefined8 *)(lVar22 + 0x28);
      puVar29 = (undefined8 *)(lVar19 + 0x28);
      do {
        pbVar12 = (byte *)puVar29[-1];
        pbVar15 = (byte *)*puVar29;
        pbVar16 = (byte *)puVar28[-1];
        pbVar17 = (byte *)*puVar28;
        if ((byte *)puVar29[-1] != (byte *)puVar28[-1] || (byte *)*puVar29 != (byte *)*puVar28)
        goto code_r0x000107c605b8;
        puVar28 = puVar28 + 2;
        puVar29 = puVar29 + 2;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
    }
    uVar13 = param_1[3];
    if ((uVar13 == param_2[3] && param_1[4] == param_2[4]) ||
       (func_0x000107c605b8(), (uVar13 & 1) != 0)) {
      pbVar10 = (byte *)param_1[5];
      pbVar27 = (byte *)param_1[6];
      lVar26 = param_2[5];
      uVar13 = param_2[6];
      puVar7 = (undefined1 *)register0x00000008;
      do {
        *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
        *(byte **)(puVar7 + -0x48) = unaff_x25;
        *(byte **)(puVar7 + -0x40) = unaff_x24;
        *(byte **)(puVar7 + -0x38) = unaff_x23;
        *(ulong *)(puVar7 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
        *(ulong *)(puVar7 + -0x20) = unaff_x20;
        *(byte **)(puVar7 + -0x18) = unaff_x19;
        *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar7 + -8) = unaff_x30;
        *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar4 = (uint)((ulong)pbVar27 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar13 >> 0x20);
        uVar23 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar14 = pbVar27;
        if ((ulong)pbVar27 >> 0x3e == 3) {
          uVar21 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
              (uVar13 >> 0x3e < 3)) || ((uVar21 = 0, lVar26 != 0 || (uVar13 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar21 = (ulong)pbVar27 >> 0x30 & 0xff;
          }
          else {
            iVar20 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar21 = (ulong)(iVar20 - iVar8);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar23 == 0) {
            uVar24 = uVar13 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar20 = (int)((ulong)lVar26 >> 0x20);
          if (SBORROW4(iVar20,(int)lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar21 == (long)(iVar20 - (int)lVar26)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar21 = 0;
          if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar23 == 2) {
            uVar24 = *(long *)(lVar26 + 0x18) - *(long *)(lVar26 + 0x10);
            if (SBORROW8(*(long *)(lVar26 + 0x18),*(long *)(lVar26 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar21 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar21 < 1) goto code_r0x000100e26128;
            if (uVar18 < 2) {
              if (uVar18 == 0) {
                puVar7[-0x70] = (char)pbVar10;
                puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                puVar7[-0x68] = (char)pbVar27;
                puVar7[-0x67] = (char)((ulong)pbVar27 >> 8);
                puVar7[-0x66] = (char)((ulong)pbVar27 >> 0x10);
                puVar7[-0x65] = (char)((ulong)pbVar27 >> 0x18);
                puVar7[-100] = (char)((ulong)pbVar27 >> 0x20);
                puVar7[-99] = (char)((ulong)pbVar27 >> 0x28);
                pbVar14 = puVar7 + (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar8;
              unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar6)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar27;
              if (pbVar10 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar10 = (byte *)0x0;
              }
              else {
                pbVar14 = pbVar10;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar14) {
                    pbVar14 = unaff_x23;
                  }
                  pbVar14 = pbVar14 + (long)pbVar10;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar14 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar14 = puVar7 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar19 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar14 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar19,(long)pbVar14)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar19 - (long)pbVar14);
              }
              unaff_x23 = unaff_x24 + -lVar19;
              if (SBORROW8((long)unaff_x24,lVar19)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar27;
              if (pbVar10 == (byte *)0x0) {
                pbVar14 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar14) {
                  pbVar14 = unaff_x23;
                }
                pbVar14 = pbVar14 + (long)pbVar10;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar27 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar26,uVar13);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar13;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar21 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
          return pbVar9;
        }
        func_0x000107c60e78();
        *(byte **)(puVar7 + -0xc0) = unaff_x24;
        *(byte **)(puVar7 + -0xb8) = unaff_x23;
        *(ulong *)(puVar7 + -0xb0) = unaff_x22;
        *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
        *(ulong *)(puVar7 + -0xa0) = unaff_x20;
        *(byte **)(puVar7 + -0x98) = unaff_x19;
        *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
        *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
        pbVar12 = *(byte **)pbVar9;
        pbVar10 = *(byte **)(pbVar9 + 8);
        pbVar25 = *(byte **)(pbVar9 + 0x18);
        bVar30 = pbVar9[0x28];
        pbVar27 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar15 = pbVar10;
        if (bVar30 < 3) {
          if (bVar30 == 0) {
            if (pbVar14[0x28] == 0) {
              lVar26 = *(long *)pbVar14;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar26,uVar11);
              return (byte *)(ulong)((uint)pbVar12 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar30 == 1) {
            if (pbVar14[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar14 + 8);
            pbVar17 = *(byte **)(pbVar14 + 0x10);
            lVar26 = *(long *)pbVar14;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar26,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar15 = pbVar27;
            if ((pbVar10 == pbVar16) && (pbVar27 == pbVar17)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar14[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar17 = *(byte **)(pbVar14 + 8);
            lVar26 = *(long *)(pbVar14 + 0x18);
            if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
              if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar25 != (byte *)0x0) {
                if (lVar26 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar26);
                func_0x000107c61174();
                pbVar12 = pbVar25;
                func_0x000107c60118();
                func_0x000107c61170(pbVar25);
                func_0x000107c61170(lVar26);
                pbVar25 = pbVar12;
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar26 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
          }
          goto code_r0x000107c605b8;
        }
        lVar19 = *(long *)(pbVar9 + 0x20);
        if (bVar30 < 5) {
          if (bVar30 != 3) {
            if (pbVar14[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar17 = *(byte **)(pbVar14 + 8);
            if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
               (pbVar12 = pbVar27, pbVar15 = pbVar25, pbVar16 = *(byte **)(pbVar14 + 0x10),
               pbVar17 = *(byte **)(pbVar14 + 0x18),
               pbVar27 == *(byte **)(pbVar14 + 0x10) && pbVar25 == *(byte **)(pbVar14 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar14[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar17 = *(byte **)(pbVar14 + 0x10);
          lVar26 = *(long *)(pbVar14 + 0x20);
          if (pbVar27 == (byte *)0x0) {
            if (pbVar17 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar17 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar14 + 8);
            pbVar12 = pbVar10;
            pbVar15 = pbVar27;
            if ((pbVar10 != pbVar16) || (pbVar27 != pbVar17)) goto code_r0x000107c605b8;
          }
          if (lVar19 != 0) {
            if (lVar26 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar25 == *(byte **)(pbVar14 + 0x18)) && (lVar19 == lVar26)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar25,lVar19,*(byte **)(pbVar14 + 0x18),lVar26,0);
joined_r0x000100e266a4:
            if (((ulong)pbVar25 & 1) == 0) {
              return (byte *)0x0;
            }
            return (byte *)0x1;
          }
          goto joined_r0x000100e26620;
        }
        if (bVar30 != 5) {
          if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
              lVar19 == 0) && pbVar27 == (byte *)0x0) {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar19 = *(long *)(pbVar14 + 0x20);
            lVar26 = *(long *)(pbVar14 + 0x18);
            bVar30 = pbVar14[8] | (byte)lVar26;
            bVar31 = pbVar14[9] | (byte)((ulong)lVar26 >> 8);
            bVar32 = pbVar14[10] | (byte)((ulong)lVar26 >> 0x10);
            bVar33 = pbVar14[0xb] | (byte)((ulong)lVar26 >> 0x18);
            bVar34 = pbVar14[0xc] | (byte)((ulong)lVar26 >> 0x20);
            bVar35 = pbVar14[0xd] | (byte)((ulong)lVar26 >> 0x28);
            bVar36 = pbVar14[0xe] | (byte)((ulong)lVar26 >> 0x30);
            bVar37 = pbVar14[0xf] | (byte)((ulong)lVar26 >> 0x38);
            bVar38 = pbVar14[0x10] | (byte)lVar19;
            bVar39 = pbVar14[0x11] | (byte)((ulong)lVar19 >> 8);
            bVar40 = pbVar14[0x12] | (byte)((ulong)lVar19 >> 0x10);
            bVar41 = pbVar14[0x13] | (byte)((ulong)lVar19 >> 0x18);
            bVar42 = pbVar14[0x14] | (byte)((ulong)lVar19 >> 0x20);
            bVar43 = pbVar14[0x15] | (byte)((ulong)lVar19 >> 0x28);
            bVar44 = pbVar14[0x16] | (byte)((ulong)lVar19 >> 0x30);
            bVar45 = pbVar14[0x17] | (byte)((ulong)lVar19 >> 0x38);
            auVar46[1] = bVar31;
            auVar46[0] = bVar30;
            auVar46[2] = bVar32;
            auVar46[3] = bVar33;
            auVar46[4] = bVar34;
            auVar46[5] = bVar35;
            auVar46[6] = bVar36;
            auVar46[7] = bVar37;
            auVar46[8] = bVar38;
            auVar46[9] = bVar39;
            auVar46[10] = bVar40;
            auVar46[0xb] = bVar41;
            auVar46[0xc] = bVar42;
            auVar46[0xd] = bVar43;
            auVar46[0xe] = bVar44;
            auVar46[0xf] = bVar45;
            auVar3[1] = bVar31;
            auVar3[0] = bVar30;
            auVar3[2] = bVar32;
            auVar3[3] = bVar33;
            auVar3[4] = bVar34;
            auVar3[5] = bVar35;
            auVar3[6] = bVar36;
            auVar3[7] = bVar37;
            auVar3[8] = bVar38;
            auVar3[9] = bVar39;
            auVar3[10] = bVar40;
            auVar3[0xb] = bVar41;
            auVar3[0xc] = bVar42;
            auVar3[0xd] = bVar43;
            auVar3[0xe] = bVar44;
            auVar3[0xf] = bVar45;
            auVar46 = NEON_ext(auVar46,auVar3,8,1);
            if (CONCAT17(bVar37 | auVar46[7],
                         CONCAT16(bVar36 | auVar46[6],
                                  CONCAT15(bVar35 | auVar46[5],
                                           CONCAT14(bVar34 | auVar46[4],
                                                    CONCAT13(bVar33 | auVar46[3],
                                                             CONCAT12(bVar32 | auVar46[2],
                                                                      CONCAT11(bVar31 | auVar46[1],
                                                                               bVar30 | auVar46[0]))
                                                            ))))) == 0 && *(long *)pbVar14 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar12 == (byte *)0x1) &&
             (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
              lVar19 == 0)) {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar14 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar14 != 2) {
              return (byte *)0x0;
            }
          }
          lVar19 = *(long *)(pbVar14 + 0x20);
          lVar26 = *(long *)(pbVar14 + 0x18);
          bVar30 = pbVar14[8] | (byte)lVar26;
          bVar31 = pbVar14[9] | (byte)((ulong)lVar26 >> 8);
          bVar32 = pbVar14[10] | (byte)((ulong)lVar26 >> 0x10);
          bVar33 = pbVar14[0xb] | (byte)((ulong)lVar26 >> 0x18);
          bVar34 = pbVar14[0xc] | (byte)((ulong)lVar26 >> 0x20);
          bVar35 = pbVar14[0xd] | (byte)((ulong)lVar26 >> 0x28);
          bVar36 = pbVar14[0xe] | (byte)((ulong)lVar26 >> 0x30);
          bVar37 = pbVar14[0xf] | (byte)((ulong)lVar26 >> 0x38);
          bVar38 = pbVar14[0x10] | (byte)lVar19;
          bVar39 = pbVar14[0x11] | (byte)((ulong)lVar19 >> 8);
          bVar40 = pbVar14[0x12] | (byte)((ulong)lVar19 >> 0x10);
          bVar41 = pbVar14[0x13] | (byte)((ulong)lVar19 >> 0x18);
          bVar42 = pbVar14[0x14] | (byte)((ulong)lVar19 >> 0x20);
          bVar43 = pbVar14[0x15] | (byte)((ulong)lVar19 >> 0x28);
          bVar44 = pbVar14[0x16] | (byte)((ulong)lVar19 >> 0x30);
          bVar45 = pbVar14[0x17] | (byte)((ulong)lVar19 >> 0x38);
          auVar1[1] = bVar31;
          auVar1[0] = bVar30;
          auVar1[2] = bVar32;
          auVar1[3] = bVar33;
          auVar1[4] = bVar34;
          auVar1[5] = bVar35;
          auVar1[6] = bVar36;
          auVar1[7] = bVar37;
          auVar1[8] = bVar38;
          auVar1[9] = bVar39;
          auVar1[10] = bVar40;
          auVar1[0xb] = bVar41;
          auVar1[0xc] = bVar42;
          auVar1[0xd] = bVar43;
          auVar1[0xe] = bVar44;
          auVar1[0xf] = bVar45;
          auVar2[1] = bVar31;
          auVar2[0] = bVar30;
          auVar2[2] = bVar32;
          auVar2[3] = bVar33;
          auVar2[4] = bVar34;
          auVar2[5] = bVar35;
          auVar2[6] = bVar36;
          auVar2[7] = bVar37;
          auVar2[8] = bVar38;
          auVar2[9] = bVar39;
          auVar2[10] = bVar40;
          auVar2[0xb] = bVar41;
          auVar2[0xc] = bVar42;
          auVar2[0xd] = bVar43;
          auVar2[0xe] = bVar44;
          auVar2[0xf] = bVar45;
          auVar46 = NEON_ext(auVar1,auVar2,8,1);
          lVar26 = CONCAT17(bVar37 | auVar46[7],
                            CONCAT16(bVar36 | auVar46[6],
                                     CONCAT15(bVar35 | auVar46[5],
                                              CONCAT14(bVar34 | auVar46[4],
                                                       CONCAT13(bVar33 | auVar46[3],
                                                                CONCAT12(bVar32 | auVar46[2],
                                                                         CONCAT11(bVar31 | auVar46[1
                                                  ],bVar30 | auVar46[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar14[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar14 + 8);
        uVar13 = *(ulong *)(pbVar14 + 0x10);
        lVar19 = *(long *)pbVar14;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar19,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
        unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
        unaff_x20 = *(ulong *)(puVar7 + -0xa0);
        unaff_x19 = *(byte **)(puVar7 + -0x98);
        unaff_x22 = *(ulong *)(puVar7 + -0xb0);
        unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
        unaff_x24 = *(byte **)(puVar7 + -0xc0);
        unaff_x23 = *(byte **)(puVar7 + -0xb8);
        puVar7 = puVar7 + -0x80;
      } while( true );
    }
  }
  return (byte *)0x0;
}



/* Entry: 103d3fe48; end: 103d402db;  */

uint FUN_103d3fe48(ulong *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_998 [232];
  ulong uStack_8b0;
  ulong uStack_8a8;
  ulong uStack_8a0;
  ulong uStack_898;
  ulong uStack_890;
  ulong uStack_888;
  ulong uStack_880;
  ulong uStack_878;
  ulong uStack_870;
  ulong uStack_868;
  ulong uStack_860;
  ulong uStack_858;
  ulong uStack_850;
  ulong uStack_848;
  ulong uStack_840;
  ulong uStack_838;
  ulong uStack_830;
  ulong uStack_828;
  ulong uStack_820;
  ulong uStack_818;
  ulong uStack_810;
  ulong uStack_808;
  ulong uStack_800;
  ulong uStack_7f8;
  ulong uStack_7f0;
  ulong uStack_7e8;
  ulong uStack_7e0;
  ulong uStack_7d8;
  ulong uStack_7d0;
  ulong uStack_7c0;
  ulong uStack_7b8;
  ulong uStack_7b0;
  ulong uStack_7a8;
  ulong uStack_7a0;
  ulong uStack_798;
  ulong uStack_790;
  ulong uStack_788;
  ulong uStack_780;
  ulong uStack_778;
  ulong uStack_770;
  ulong uStack_768;
  ulong uStack_760;
  ulong uStack_758;
  ulong uStack_750;
  ulong uStack_748;
  ulong uStack_740;
  ulong uStack_738;
  ulong uStack_730;
  ulong uStack_728;
  ulong uStack_720;
  ulong uStack_718;
  ulong uStack_710;
  ulong uStack_708;
  ulong uStack_700;
  ulong uStack_6f8;
  ulong uStack_6f0;
  ulong uStack_6e8;
  ulong uStack_6e0;
  ulong uStack_6d0;
  ulong uStack_6c8;
  ulong uStack_6c0;
  ulong uStack_6b8;
  ulong uStack_6b0;
  ulong uStack_6a8;
  ulong uStack_6a0;
  ulong uStack_698;
  ulong uStack_690;
  ulong uStack_688;
  ulong uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_658;
  ulong uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  ulong uStack_638;
  ulong uStack_630;
  ulong uStack_628;
  ulong uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  ulong uStack_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  ulong uStack_500;
  ulong uStack_4f8;
  ulong uStack_4f0;
  ulong uStack_4e8;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  ulong uStack_4c8;
  ulong uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  ulong uStack_4a8;
  ulong uStack_4a0;
  ulong uStack_498;
  ulong uStack_490;
  ulong uStack_488;
  ulong uStack_480;
  ulong uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uStack_448 = param_1[0x1d];
  uStack_450 = param_1[0x1c];
  uStack_178 = param_1[0x1f];
  uStack_180 = param_1[0x1e];
  uStack_438 = param_1[0x1f];
  uStack_440 = param_1[0x1e];
  uStack_168 = param_1[0x21];
  uStack_170 = param_1[0x20];
  uStack_488 = param_1[0x15];
  uStack_490 = param_1[0x14];
  uStack_1b8 = param_1[0x17];
  uStack_1c0 = param_1[0x16];
  uStack_478 = param_1[0x17];
  uStack_480 = param_1[0x16];
  uStack_1a8 = param_1[0x19];
  uStack_1b0 = param_1[0x18];
  uStack_468 = param_1[0x19];
  uStack_470 = param_1[0x18];
  uStack_198 = param_1[0x1b];
  uStack_1a0 = param_1[0x1a];
  uStack_458 = param_1[0x1b];
  uStack_460 = param_1[0x1a];
  uStack_188 = param_1[0x1d];
  uStack_190 = param_1[0x1c];
  uStack_4c8 = param_1[0xd];
  uStack_4d0 = param_1[0xc];
  uStack_1f8 = param_1[0xf];
  uStack_200 = param_1[0xe];
  uStack_4b8 = param_1[0xf];
  uStack_4c0 = param_1[0xe];
  uStack_1e8 = param_1[0x11];
  uStack_1f0 = param_1[0x10];
  uStack_4a8 = param_1[0x11];
  uStack_4b0 = param_1[0x10];
  uStack_1d8 = param_1[0x13];
  uStack_1e0 = param_1[0x12];
  uStack_498 = param_1[0x13];
  uStack_4a0 = param_1[0x12];
  uStack_1c8 = param_1[0x15];
  uStack_1d0 = param_1[0x14];
  uStack_238 = param_1[7];
  uStack_240 = param_1[6];
  uStack_228 = param_1[9];
  uStack_230 = param_1[8];
  uStack_218 = param_1[0xb];
  uStack_220 = param_1[10];
  uStack_208 = param_1[0xd];
  uStack_210 = param_1[0xc];
  uStack_4f8 = param_1[7];
  uStack_500 = param_1[6];
  uStack_4e8 = param_1[9];
  uStack_4f0 = param_1[8];
  uStack_4d8 = param_1[0xb];
  uStack_4e0 = param_1[10];
  uStack_360 = param_2[0x1d];
  uStack_368 = param_2[0x1c];
  uStack_268 = param_2[0x1f];
  uStack_270 = param_2[0x1e];
  uStack_350 = param_2[0x1f];
  uStack_358 = param_2[0x1e];
  uStack_258 = param_2[0x21];
  uStack_260 = param_2[0x20];
  uStack_3a0 = param_2[0x15];
  uStack_3a8 = param_2[0x14];
  uStack_2a8 = param_2[0x17];
  uStack_2b0 = param_2[0x16];
  uStack_390 = param_2[0x17];
  uStack_398 = param_2[0x16];
  uStack_298 = param_2[0x19];
  uStack_2a0 = param_2[0x18];
  uStack_380 = param_2[0x19];
  uStack_388 = param_2[0x18];
  uStack_288 = param_2[0x1b];
  uStack_290 = param_2[0x1a];
  uStack_370 = param_2[0x1b];
  uStack_378 = param_2[0x1a];
  uStack_278 = param_2[0x1d];
  uStack_280 = param_2[0x1c];
  uStack_3e0 = param_2[0xd];
  uStack_3e8 = param_2[0xc];
  uStack_2e8 = param_2[0xf];
  uStack_2f0 = param_2[0xe];
  uStack_3d0 = param_2[0xf];
  uStack_3d8 = param_2[0xe];
  uStack_2d8 = param_2[0x11];
  uStack_2e0 = param_2[0x10];
  uStack_3c0 = param_2[0x11];
  uStack_3c8 = param_2[0x10];
  uStack_2c8 = param_2[0x13];
  uStack_2d0 = param_2[0x12];
  uStack_3b0 = param_2[0x13];
  uStack_3b8 = param_2[0x12];
  uStack_2c0 = param_2[0x14];
  uStack_2b8 = param_2[0x15];
  uStack_328 = param_2[7];
  uStack_330 = param_2[6];
  uStack_320 = param_2[8];
  uStack_318 = param_2[9];
  uStack_410 = param_2[7];
  uStack_418 = param_2[6];
  uStack_400 = param_2[9];
  uStack_408 = param_2[8];
  uStack_3f8 = param_2[10];
  uStack_3f0 = param_2[0xb];
  uStack_2f8 = param_2[0xd];
  uStack_300 = param_2[0xc];
  uStack_308 = param_2[0xb];
  uStack_310 = param_2[10];
  uStack_428 = param_1[0x21];
  uStack_430 = param_1[0x20];
  iVar2 = (int)&uStack_418;
  uStack_340 = param_2[0x21];
  uStack_348 = param_2[0x20];
  uStack_160 = param_1[0x22];
  uStack_250 = param_2[0x22];
  uStack_420 = param_1[0x22];
  uStack_338 = param_2[0x22];
  iVar1 = (int)&uStack_500;
  FUN_103d3d8a0();
  if (iVar1 == 1) {
    FUN_103d3d8a0();
    if (iVar2 == 1) {
      uStack_608 = uStack_438;
      uStack_610 = uStack_440;
      uStack_5f8 = uStack_428;
      uStack_600 = uStack_430;
      uStack_5f0 = uStack_420;
      uStack_648 = uStack_478;
      uStack_650 = uStack_480;
      uStack_638 = uStack_468;
      uStack_640 = uStack_470;
      uStack_628 = uStack_458;
      uStack_630 = uStack_460;
      uStack_618 = uStack_448;
      uStack_620 = uStack_450;
      uStack_688 = uStack_4b8;
      uStack_690 = uStack_4c0;
      uStack_678 = uStack_4a8;
      uStack_680 = uStack_4b0;
      uStack_668 = uStack_498;
      uStack_670 = uStack_4a0;
      uStack_658 = uStack_488;
      uStack_660 = uStack_490;
      uStack_6c8 = uStack_4f8;
      uStack_6d0 = uStack_500;
      uStack_6b8 = uStack_4e8;
      uStack_6c0 = uStack_4f0;
      uStack_6a8 = uStack_4d8;
      uStack_6b0 = uStack_4e0;
      uStack_698 = uStack_4c8;
      uStack_6a0 = uStack_4d0;
      FUN_103d3e4c8(&uStack_240,&uStack_150,0x113004c68,&UNK_10dc80c78);
      FUN_103d3e4c8(&uStack_330,&uStack_150,0x113004c68,&UNK_10dc80c78);
      func_0x000103d5122c(&uStack_6d0,0x113004c68,&UNK_10dc80c78);
LAB_103d4023c:
      uVar5 = *param_1;
      if (((uVar5 == *param_2) && (param_1[1] == param_2[1])) ||
         (func_0x000107c605b8(), (uVar5 & 1) != 0)) {
        uVar5 = param_1[2];
        uVar6 = param_2[2];
        if ((char)param_2[3] == '\x01') {
          if (uVar6 == 0) {
            if (uVar5 == 0) goto LAB_103d40294;
          }
          else if (uVar6 == 1) {
            if (uVar5 == 1) {
LAB_103d40294:
              uVar5 = param_1[4];
              func_0x000100e25fcc(uVar5,param_1[5],param_2[4],param_2[5]);
              uVar3 = (uint)uVar5;
              goto LAB_103d402ac;
            }
          }
          else if (uVar5 == 2) goto LAB_103d40294;
        }
        else if (uVar5 == uVar6) goto LAB_103d40294;
      }
LAB_103d402a8:
      uVar3 = 0;
      goto LAB_103d402ac;
    }
  }
  else {
    uStack_6f8 = uStack_438;
    uStack_700 = uStack_440;
    uStack_6e8 = uStack_428;
    uStack_6f0 = uStack_430;
    uStack_6e0 = uStack_420;
    uStack_738 = uStack_478;
    uStack_740 = uStack_480;
    uStack_728 = uStack_468;
    uStack_730 = uStack_470;
    uStack_718 = uStack_458;
    uStack_720 = uStack_460;
    uStack_708 = uStack_448;
    uStack_710 = uStack_450;
    uStack_778 = uStack_4b8;
    uStack_780 = uStack_4c0;
    uStack_768 = uStack_4a8;
    uStack_770 = uStack_4b0;
    uStack_758 = uStack_498;
    uStack_760 = uStack_4a0;
    uStack_748 = uStack_488;
    uStack_750 = uStack_490;
    uStack_7b8 = uStack_4f8;
    uStack_7c0 = uStack_500;
    uStack_7a8 = uStack_4e8;
    uStack_7b0 = uStack_4f0;
    uStack_798 = uStack_4d8;
    uStack_7a0 = uStack_4e0;
    uStack_788 = uStack_4c8;
    uStack_790 = uStack_4d0;
    FUN_103d3d8a0();
    if (iVar2 != 1) {
      uStack_7e8 = uStack_350;
      uStack_7f0 = uStack_358;
      uStack_7d8 = uStack_340;
      uStack_7e0 = uStack_348;
      uStack_828 = uStack_390;
      uStack_830 = uStack_398;
      uStack_818 = uStack_380;
      uStack_820 = uStack_388;
      uStack_808 = uStack_370;
      uStack_810 = uStack_378;
      uStack_7f8 = uStack_360;
      uStack_800 = uStack_368;
      uStack_868 = uStack_3d0;
      uStack_870 = uStack_3d8;
      uStack_858 = uStack_3c0;
      uStack_860 = uStack_3c8;
      uStack_848 = uStack_3b0;
      uStack_850 = uStack_3b8;
      uStack_838 = uStack_3a0;
      uStack_840 = uStack_3a8;
      uStack_8a8 = uStack_410;
      uStack_8b0 = uStack_418;
      uStack_898 = uStack_400;
      uStack_8a0 = uStack_408;
      uStack_888 = uStack_3f0;
      uStack_890 = uStack_3f8;
      uStack_878 = uStack_3e0;
      uStack_880 = uStack_3e8;
      uStack_608 = uStack_350;
      uStack_610 = uStack_358;
      uStack_5f8 = uStack_340;
      uStack_600 = uStack_348;
      uStack_648 = uStack_390;
      uStack_650 = uStack_398;
      uStack_638 = uStack_380;
      uStack_640 = uStack_388;
      uStack_628 = uStack_370;
      uStack_630 = uStack_378;
      uStack_618 = uStack_360;
      uStack_620 = uStack_368;
      uStack_688 = uStack_3d0;
      uStack_690 = uStack_3d8;
      uStack_678 = uStack_3c0;
      uStack_680 = uStack_3c8;
      uStack_668 = uStack_3b0;
      uStack_670 = uStack_3b8;
      uStack_658 = uStack_3a0;
      uStack_660 = uStack_3a8;
      uStack_6c8 = uStack_410;
      uStack_6d0 = uStack_418;
      uStack_6b8 = uStack_400;
      uStack_6c0 = uStack_408;
      uStack_6a8 = uStack_3f0;
      uStack_6b0 = uStack_3f8;
      uStack_698 = uStack_3e0;
      uStack_6a0 = uStack_3e8;
      uStack_98 = uStack_708;
      uStack_a0 = uStack_710;
      uStack_88 = uStack_6f8;
      uStack_90 = uStack_700;
      uStack_78 = uStack_6e8;
      uStack_80 = uStack_6f0;
      uStack_d8 = uStack_748;
      uStack_e0 = uStack_750;
      uStack_c8 = uStack_738;
      uStack_d0 = uStack_740;
      uStack_7d0 = uStack_338;
      uStack_5f0 = uStack_338;
      uStack_70 = uStack_6e0;
      uStack_b8 = uStack_728;
      uStack_c0 = uStack_730;
      uStack_a8 = uStack_718;
      uStack_b0 = uStack_720;
      uStack_108 = uStack_778;
      uStack_110 = uStack_780;
      uStack_f8 = uStack_768;
      uStack_100 = uStack_770;
      uStack_e8 = uStack_758;
      uStack_f0 = uStack_760;
      uStack_148 = uStack_7b8;
      uStack_150 = uStack_7c0;
      uStack_138 = uStack_7a8;
      uStack_140 = uStack_7b0;
      uStack_128 = uStack_798;
      uStack_130 = uStack_7a0;
      uStack_118 = uStack_788;
      uStack_120 = uStack_790;
      FUN_103d3e4c8(&uStack_240,auStack_998,0x113004c68,&UNK_10dc80c78);
      FUN_103d3e4c8(&uStack_330,auStack_998,0x113004c68,&UNK_10dc80c78);
      puVar4 = &uStack_150;
      FUN_103d3d920(puVar4,&uStack_6d0);
      func_0x000103d5122c(&uStack_8b0,0x113004c68,&UNK_10dc80c78);
      func_0x000103d5122c(&uStack_500,0x113004c68,&UNK_10dc80c78);
      if (((ulong)puVar4 & 1) != 0) goto LAB_103d4023c;
      goto LAB_103d402a8;
    }
  }
  func_0x000107c610b4(&uStack_6d0,&uStack_500,0x1d0);
  FUN_103d3e4c8(&uStack_240,&uStack_150,0x113004c68,&UNK_10dc80c78);
  FUN_103d3e4c8(&uStack_330,&uStack_150,0x113004c68,&UNK_10dc80c78);
  func_0x000103d5122c(&uStack_6d0,0x113004c70,&UNK_10dc80c80);
  uVar3 = 0;
LAB_103d402ac:
  return uVar3 & 1;
}



/* Entry: 103d402dc; end: 103d4041b;  */

uint FUN_103d402dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a0 [192];
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == *(long *)(param_4 + 0x10)) {
    if (lVar3 != 0 && param_1 != param_4) {
      puVar4 = (undefined8 *)(param_1 + 0x20);
      puVar5 = (undefined8 *)(param_4 + 0x20);
      do {
        uStack_158 = puVar4[0x11];
        uStack_160 = puVar4[0x10];
        uStack_148 = puVar4[0x13];
        uStack_150 = puVar4[0x12];
        uStack_138 = puVar4[0x15];
        uStack_140 = puVar4[0x14];
        uStack_128 = puVar4[0x17];
        uStack_130 = puVar4[0x16];
        uStack_198 = puVar4[9];
        uStack_1a0 = puVar4[8];
        uStack_188 = puVar4[0xb];
        uStack_190 = puVar4[10];
        uStack_178 = puVar4[0xd];
        uStack_180 = puVar4[0xc];
        uStack_168 = puVar4[0xf];
        uStack_170 = puVar4[0xe];
        uStack_1d8 = puVar4[1];
        uStack_1e0 = *puVar4;
        uStack_1c8 = puVar4[3];
        uStack_1d0 = puVar4[2];
        uStack_1b8 = puVar4[5];
        uStack_1c0 = puVar4[4];
        uStack_1a8 = puVar4[7];
        uStack_1b0 = puVar4[6];
        uStack_98 = puVar5[0x11];
        uStack_a0 = puVar5[0x10];
        uStack_88 = puVar5[0x13];
        uStack_90 = puVar5[0x12];
        uStack_78 = puVar5[0x15];
        uStack_80 = puVar5[0x14];
        uStack_68 = puVar5[0x17];
        uStack_70 = puVar5[0x16];
        uStack_d8 = puVar5[9];
        uStack_e0 = puVar5[8];
        uStack_c8 = puVar5[0xb];
        uStack_d0 = puVar5[10];
        uStack_b8 = puVar5[0xd];
        uStack_c0 = puVar5[0xc];
        uStack_a8 = puVar5[0xf];
        uStack_b0 = puVar5[0xe];
        uStack_118 = puVar5[1];
        uStack_120 = *puVar5;
        uStack_108 = puVar5[3];
        uStack_110 = puVar5[2];
        uStack_f8 = puVar5[5];
        uStack_100 = puVar5[4];
        uStack_e8 = puVar5[7];
        uStack_f0 = puVar5[6];
        func_0x000103d3e510(&uStack_1e0,auStack_2a0);
        func_0x000103d3e510(&uStack_120,auStack_2a0);
        puVar2 = &uStack_1e0;
        FUN_103d3e570(puVar2,&uStack_120);
        func_0x000103d3e544(&uStack_120);
        func_0x000103d3e544(&uStack_1e0);
        if (((ulong)puVar2 & 1) == 0) goto LAB_103d403f4;
        puVar5 = puVar5 + 0x18;
        puVar4 = puVar4 + 0x18;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    func_0x000100e25fcc(param_2,param_3,param_5,param_6);
    uVar1 = (uint)param_2;
  }
  else {
LAB_103d403f4:
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 103d4041c; end: 103d4053f;  */

/* WARNING: Possible PIC construction at 0x000103d404a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d404a8) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d4041c(byte *param_1,byte *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  if (((*param_1 ^ *param_2) & 1) == 0) {
    if (param_2[0x10] == 1) {
                    /* WARNING: Could not recover jumptable at 0x000103d4045c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10dc80ba3)[*(long *)(param_2 + 8)] * 4 + 0x103d40460))();
      return param_1;
    }
    if (*(long *)(param_1 + 8) == *(long *)(param_2 + 8)) {
      pbVar12 = *(byte **)(param_1 + 0x18);
      pbVar14 = *(byte **)(param_1 + 0x20);
      pbVar15 = *(byte **)(param_2 + 0x18);
      pbVar17 = *(byte **)(param_2 + 0x20);
      if (*(byte **)(param_1 + 0x18) != *(byte **)(param_2 + 0x18) ||
          *(byte **)(param_1 + 0x20) != *(byte **)(param_2 + 0x20)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
        )(pbVar12,pbVar14,pbVar15,pbVar17,0);
        return pbVar12;
      }
      pbVar10 = *(byte **)(param_1 + 0x28);
      pbVar25 = *(byte **)(param_1 + 0x30);
      lVar24 = *(long *)(param_2 + 0x28);
      uVar16 = *(ulong *)(param_2 + 0x30);
      puVar7 = (undefined1 *)register0x00000008;
      do {
        *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
        *(byte **)(puVar7 + -0x48) = unaff_x25;
        *(byte **)(puVar7 + -0x40) = unaff_x24;
        *(byte **)(puVar7 + -0x38) = unaff_x23;
        *(ulong *)(puVar7 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
        *(ulong *)(puVar7 + -0x20) = unaff_x20;
        *(byte **)(puVar7 + -0x18) = unaff_x19;
        *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar7 + -8) = unaff_x30;
        *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar4 = (uint)((ulong)pbVar25 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar16 >> 0x20);
        uVar21 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar13 = pbVar25;
        if ((ulong)pbVar25 >> 0x3e == 3) {
          uVar20 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
              (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
          }
          else {
            iVar19 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar20 = (ulong)(iVar19 - iVar8);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar21 == 0) {
            uVar22 = uVar16 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar19 = (int)((ulong)lVar24 >> 0x20);
          if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar20 = 0;
          if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar21 == 2) {
            uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
            if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar20 < 1) goto code_r0x000100e26128;
            if (uVar18 < 2) {
              if (uVar18 == 0) {
                puVar7[-0x70] = (char)pbVar10;
                puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                puVar7[-0x68] = (char)pbVar25;
                puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
                puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
                puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
                puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
                puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
                pbVar13 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar8;
              unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar6)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar25;
              if (pbVar10 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar10 = (byte *)0x0;
              }
              else {
                pbVar13 = pbVar10;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar13) {
                    pbVar13 = unaff_x23;
                  }
                  pbVar13 = pbVar13 + (long)pbVar10;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar13 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar13 = puVar7 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar26 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar13 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
              }
              unaff_x23 = unaff_x24 + -lVar26;
              if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar25;
              if (pbVar10 == (byte *)0x0) {
                pbVar13 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar13) {
                  pbVar13 = unaff_x23;
                }
                pbVar13 = pbVar13 + (long)pbVar10;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar16;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar20 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
          return pbVar9;
        }
        func_0x000107c60e78();
        *(byte **)(puVar7 + -0xc0) = unaff_x24;
        *(byte **)(puVar7 + -0xb8) = unaff_x23;
        *(ulong *)(puVar7 + -0xb0) = unaff_x22;
        *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
        *(ulong *)(puVar7 + -0xa0) = unaff_x20;
        *(byte **)(puVar7 + -0x98) = unaff_x19;
        *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
        *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
        pbVar12 = *(byte **)pbVar9;
        pbVar10 = *(byte **)(pbVar9 + 8);
        pbVar23 = *(byte **)(pbVar9 + 0x18);
        bVar27 = pbVar9[0x28];
        pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar14 = pbVar10;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar13[0x28] == 0) {
              lVar24 = *(long *)pbVar13;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar24,uVar11);
              return (byte *)(ulong)((uint)pbVar12 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar13[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar13 + 8);
            pbVar17 = *(byte **)(pbVar13 + 0x10);
            lVar24 = *(long *)pbVar13;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar24,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar14 = pbVar25;
            if ((pbVar10 == pbVar15) && (pbVar25 == pbVar17)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar13[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar17 = *(byte **)(pbVar13 + 8);
            lVar24 = *(long *)(pbVar13 + 0x18);
            if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
              if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar23 != (byte *)0x0) {
                if (lVar24 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar24);
                func_0x000107c61174();
                pbVar12 = pbVar23;
                func_0x000107c60118();
                func_0x000107c61170(pbVar23);
                func_0x000107c61170(lVar24);
                pbVar23 = pbVar12;
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar24 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
          }
          goto code_r0x000107c605b8;
        }
        lVar26 = *(long *)(pbVar9 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar13[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar17 = *(byte **)(pbVar13 + 8);
            if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
               (pbVar12 = pbVar25, pbVar14 = pbVar23, pbVar15 = *(byte **)(pbVar13 + 0x10),
               pbVar17 = *(byte **)(pbVar13 + 0x18),
               pbVar25 == *(byte **)(pbVar13 + 0x10) && pbVar23 == *(byte **)(pbVar13 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar13[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar17 = *(byte **)(pbVar13 + 0x10);
          lVar24 = *(long *)(pbVar13 + 0x20);
          if (pbVar25 == (byte *)0x0) {
            if (pbVar17 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar17 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar13 + 8);
            pbVar12 = pbVar10;
            pbVar14 = pbVar25;
            if ((pbVar10 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
          }
          if (lVar26 != 0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar23 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar24)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar13 + 0x18),lVar24,0);
joined_r0x000100e266a4:
            if (((ulong)pbVar23 & 1) == 0) {
              return (byte *)0x0;
            }
            return (byte *)0x1;
          }
          goto joined_r0x000100e26620;
        }
        if (bVar27 != 5) {
          if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
              lVar26 == 0) && pbVar25 == (byte *)0x0) {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar26 = *(long *)(pbVar13 + 0x20);
            lVar24 = *(long *)(pbVar13 + 0x18);
            bVar27 = pbVar13[8] | (byte)lVar24;
            bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
            bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
            bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
            bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
            bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
            bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
            bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
            bVar35 = pbVar13[0x10] | (byte)lVar26;
            bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
            bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
            bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
            bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
            bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
            bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
            bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
            auVar43[1] = bVar28;
            auVar43[0] = bVar27;
            auVar43[2] = bVar29;
            auVar43[3] = bVar30;
            auVar43[4] = bVar31;
            auVar43[5] = bVar32;
            auVar43[6] = bVar33;
            auVar43[7] = bVar34;
            auVar43[8] = bVar35;
            auVar43[9] = bVar36;
            auVar43[10] = bVar37;
            auVar43[0xb] = bVar38;
            auVar43[0xc] = bVar39;
            auVar43[0xd] = bVar40;
            auVar43[0xe] = bVar41;
            auVar43[0xf] = bVar42;
            auVar3[1] = bVar28;
            auVar3[0] = bVar27;
            auVar3[2] = bVar29;
            auVar3[3] = bVar30;
            auVar3[4] = bVar31;
            auVar3[5] = bVar32;
            auVar3[6] = bVar33;
            auVar3[7] = bVar34;
            auVar3[8] = bVar35;
            auVar3[9] = bVar36;
            auVar3[10] = bVar37;
            auVar3[0xb] = bVar38;
            auVar3[0xc] = bVar39;
            auVar3[0xd] = bVar40;
            auVar3[0xe] = bVar41;
            auVar3[0xf] = bVar42;
            auVar43 = NEON_ext(auVar43,auVar3,8,1);
            if (CONCAT17(bVar34 | auVar43[7],
                         CONCAT16(bVar33 | auVar43[6],
                                  CONCAT15(bVar32 | auVar43[5],
                                           CONCAT14(bVar31 | auVar43[4],
                                                    CONCAT13(bVar30 | auVar43[3],
                                                             CONCAT12(bVar29 | auVar43[2],
                                                                      CONCAT11(bVar28 | auVar43[1],
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar13 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar12 == (byte *)0x1) &&
             (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
              lVar26 == 0)) {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar13 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar13 != 2) {
              return (byte *)0x0;
            }
          }
          lVar26 = *(long *)(pbVar13 + 0x20);
          lVar24 = *(long *)(pbVar13 + 0x18);
          bVar27 = pbVar13[8] | (byte)lVar24;
          bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
          bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
          bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
          bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
          bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
          bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
          bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
          bVar35 = pbVar13[0x10] | (byte)lVar26;
          bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
          bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
          bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
          bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
          bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
          bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
          bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
          auVar1[1] = bVar28;
          auVar1[0] = bVar27;
          auVar1[2] = bVar29;
          auVar1[3] = bVar30;
          auVar1[4] = bVar31;
          auVar1[5] = bVar32;
          auVar1[6] = bVar33;
          auVar1[7] = bVar34;
          auVar1[8] = bVar35;
          auVar1[9] = bVar36;
          auVar1[10] = bVar37;
          auVar1[0xb] = bVar38;
          auVar1[0xc] = bVar39;
          auVar1[0xd] = bVar40;
          auVar1[0xe] = bVar41;
          auVar1[0xf] = bVar42;
          auVar2[1] = bVar28;
          auVar2[0] = bVar27;
          auVar2[2] = bVar29;
          auVar2[3] = bVar30;
          auVar2[4] = bVar31;
          auVar2[5] = bVar32;
          auVar2[6] = bVar33;
          auVar2[7] = bVar34;
          auVar2[8] = bVar35;
          auVar2[9] = bVar36;
          auVar2[10] = bVar37;
          auVar2[0xb] = bVar38;
          auVar2[0xc] = bVar39;
          auVar2[0xd] = bVar40;
          auVar2[0xe] = bVar41;
          auVar2[0xf] = bVar42;
          auVar43 = NEON_ext(auVar1,auVar2,8,1);
          lVar24 = CONCAT17(bVar34 | auVar43[7],
                            CONCAT16(bVar33 | auVar43[6],
                                     CONCAT15(bVar32 | auVar43[5],
                                              CONCAT14(bVar31 | auVar43[4],
                                                       CONCAT13(bVar30 | auVar43[3],
                                                                CONCAT12(bVar29 | auVar43[2],
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar13[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar13 + 8);
        uVar16 = *(ulong *)(pbVar13 + 0x10);
        lVar26 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar26,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
        unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
        unaff_x20 = *(ulong *)(puVar7 + -0xa0);
        unaff_x19 = *(byte **)(puVar7 + -0x98);
        unaff_x22 = *(ulong *)(puVar7 + -0xb0);
        unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
        unaff_x24 = *(byte **)(puVar7 + -0xc0);
        unaff_x23 = *(byte **)(puVar7 + -0xb8);
        puVar7 = puVar7 + -0x80;
      } while( true );
    }
  }
  return (byte *)0x0;
}



/* Entry: 103d40540; end: 103d4095b;  */

uint FUN_103d40540(long *param_1,long *param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_7c0 [192];
  long lStack_700;
  long lStack_6f8;
  long lStack_6f0;
  long lStack_6e8;
  long lStack_6e0;
  long lStack_6d8;
  long lStack_6d0;
  long lStack_6c8;
  long lStack_6c0;
  long lStack_6b8;
  long lStack_6b0;
  long lStack_6a8;
  long lStack_6a0;
  long lStack_698;
  long lStack_690;
  long lStack_688;
  long lStack_680;
  long lStack_678;
  long lStack_670;
  long lStack_668;
  long lStack_660;
  long lStack_658;
  long lStack_650;
  long lStack_648;
  long lStack_640;
  long lStack_638;
  long lStack_630;
  long lStack_628;
  long lStack_620;
  long lStack_618;
  long lStack_610;
  long lStack_608;
  long lStack_600;
  long lStack_5f8;
  long lStack_5f0;
  long lStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  long lStack_5d0;
  long lStack_5c8;
  long lStack_5c0;
  long lStack_5b8;
  long lStack_5b0;
  long lStack_5a8;
  long lStack_5a0;
  long lStack_598;
  long lStack_590;
  long lStack_588;
  long lStack_580;
  long lStack_578;
  long lStack_570;
  long lStack_568;
  long lStack_560;
  long lStack_558;
  long lStack_550;
  long lStack_548;
  long lStack_540;
  long lStack_538;
  long lStack_530;
  long lStack_528;
  long lStack_520;
  long lStack_518;
  long lStack_510;
  long lStack_508;
  long lStack_500;
  long lStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
  long lStack_4d8;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  lVar4 = *param_1;
  lVar5 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar5 == 0) {
      if (lVar4 != 0) {
        return 0;
      }
    }
    else if (lVar5 == 1) {
      if (lVar4 != 1) {
        return 0;
      }
    }
    else if (lVar4 != 2) {
      return 0;
    }
  }
  else if (lVar4 != lVar5) {
    return 0;
  }
  lStack_378 = param_1[0x15];
  lStack_380 = param_1[0x14];
  lStack_128 = param_1[0x17];
  lStack_130 = param_1[0x16];
  lStack_388 = param_1[0x13];
  lStack_390 = param_1[0x12];
  lStack_138 = param_1[0x15];
  lStack_140 = param_1[0x14];
  lStack_368 = param_1[0x17];
  lStack_370 = param_1[0x16];
  lStack_118 = param_1[0x19];
  lStack_120 = param_1[0x18];
  lStack_358 = param_1[0x19];
  lStack_360 = param_1[0x18];
  lStack_108 = param_1[0x1b];
  lStack_110 = param_1[0x1a];
  lStack_3b8 = param_1[0xd];
  lStack_3c0 = param_1[0xc];
  lStack_168 = param_1[0xf];
  lStack_170 = param_1[0xe];
  lStack_3c8 = param_1[0xb];
  lStack_3d0 = param_1[10];
  lStack_178 = param_1[0xd];
  lStack_180 = param_1[0xc];
  lStack_3a8 = param_1[0xf];
  lStack_3b0 = param_1[0xe];
  lStack_158 = param_1[0x11];
  lStack_160 = param_1[0x10];
  lStack_398 = param_1[0x11];
  lStack_3a0 = param_1[0x10];
  lStack_148 = param_1[0x13];
  lStack_150 = param_1[0x12];
  lStack_1b8 = param_1[5];
  lStack_1c0 = param_1[4];
  lStack_1a8 = param_1[7];
  lStack_1b0 = param_1[6];
  lStack_198 = param_1[9];
  lStack_1a0 = param_1[8];
  lStack_188 = param_1[0xb];
  lStack_190 = param_1[10];
  lStack_3f8 = param_1[5];
  lStack_400 = param_1[4];
  lStack_3e8 = param_1[7];
  lStack_3f0 = param_1[6];
  lStack_3d8 = param_1[9];
  lStack_3e0 = param_1[8];
  lStack_2b8 = param_2[0x15];
  lStack_2c0 = param_2[0x14];
  lStack_1e8 = param_2[0x17];
  lStack_1f0 = param_2[0x16];
  lStack_2c8 = param_2[0x13];
  lStack_2d0 = param_2[0x12];
  lStack_1f8 = param_2[0x15];
  lStack_200 = param_2[0x14];
  lStack_2a8 = param_2[0x17];
  lStack_2b0 = param_2[0x16];
  lStack_1d8 = param_2[0x19];
  lStack_1e0 = param_2[0x18];
  lStack_298 = param_2[0x19];
  lStack_2a0 = param_2[0x18];
  lStack_1c8 = param_2[0x1b];
  lStack_1d0 = param_2[0x1a];
  lStack_2f8 = param_2[0xd];
  lStack_300 = param_2[0xc];
  lStack_228 = param_2[0xf];
  lStack_230 = param_2[0xe];
  lStack_308 = param_2[0xb];
  lStack_310 = param_2[10];
  lStack_238 = param_2[0xd];
  lStack_240 = param_2[0xc];
  lStack_2e8 = param_2[0xf];
  lStack_2f0 = param_2[0xe];
  lStack_218 = param_2[0x11];
  lStack_220 = param_2[0x10];
  lStack_2d8 = param_2[0x11];
  lStack_2e0 = param_2[0x10];
  lStack_208 = param_2[0x13];
  lStack_210 = param_2[0x12];
  lStack_278 = param_2[5];
  lStack_280 = param_2[4];
  lStack_268 = param_2[7];
  lStack_270 = param_2[6];
  lStack_258 = param_2[9];
  lStack_260 = param_2[8];
  lStack_248 = param_2[0xb];
  lStack_250 = param_2[10];
  lStack_338 = param_2[5];
  lStack_340 = param_2[4];
  lStack_328 = param_2[7];
  lStack_330 = param_2[6];
  lStack_320 = param_2[8];
  lStack_318 = param_2[9];
  lStack_348 = param_1[0x1b];
  lStack_350 = param_1[0x1a];
  lStack_288 = param_2[0x1b];
  lStack_290 = param_2[0x1a];
  iVar1 = (int)&lStack_400;
  func_0x000100d6dc90();
  if (iVar1 == 1) {
    iVar1 = (int)&lStack_340;
    func_0x000100d6dc90();
    if (iVar1 == 1) {
      lStack_4f8 = lStack_378;
      lStack_500 = lStack_380;
      lStack_4e8 = lStack_368;
      lStack_4f0 = lStack_370;
      lStack_4d8 = lStack_358;
      lStack_4e0 = lStack_360;
      lStack_4c8 = lStack_348;
      lStack_4d0 = lStack_350;
      lStack_538 = lStack_3b8;
      lStack_540 = lStack_3c0;
      lStack_528 = lStack_3a8;
      lStack_530 = lStack_3b0;
      lStack_518 = lStack_398;
      lStack_520 = lStack_3a0;
      lStack_508 = lStack_388;
      lStack_510 = lStack_390;
      lStack_578 = lStack_3f8;
      lStack_580 = lStack_400;
      lStack_568 = lStack_3e8;
      lStack_570 = lStack_3f0;
      lStack_558 = lStack_3d8;
      lStack_560 = lStack_3e0;
      lStack_548 = lStack_3c8;
      lStack_550 = lStack_3d0;
      FUN_103d3e4c8(&lStack_1c0,&lStack_100,0x113004b88,&UNK_10dc80c10);
      FUN_103d3e4c8(&lStack_280,&lStack_100,0x113004b88,&UNK_10dc80c10);
      func_0x000103d5122c(&lStack_580,0x113004b88,&UNK_10dc80c10);
LAB_103d40934:
      lVar4 = param_1[2];
      func_0x000100e25fcc(lVar4,param_1[3],param_2[2],param_2[3]);
      uVar2 = (uint)lVar4;
      goto LAB_103d40940;
    }
LAB_103d407b4:
    func_0x000107c610b4(&lStack_580,&lStack_400,0x180);
    FUN_103d3e4c8(&lStack_1c0,&lStack_100,0x113004b88,&UNK_10dc80c10);
    FUN_103d3e4c8(&lStack_280,&lStack_100,0x113004b88,&UNK_10dc80c10);
    func_0x000103d5122c(&lStack_580,0x113004b90,&UNK_10dc80c18);
  }
  else {
    lStack_5b8 = lStack_378;
    lStack_5c0 = lStack_380;
    lStack_5a8 = lStack_368;
    lStack_5b0 = lStack_370;
    lStack_598 = lStack_358;
    lStack_5a0 = lStack_360;
    lStack_588 = lStack_348;
    lStack_590 = lStack_350;
    lStack_5f8 = lStack_3b8;
    lStack_600 = lStack_3c0;
    lStack_5e8 = lStack_3a8;
    lStack_5f0 = lStack_3b0;
    lStack_5d8 = lStack_398;
    lStack_5e0 = lStack_3a0;
    lStack_5c8 = lStack_388;
    lStack_5d0 = lStack_390;
    lStack_638 = lStack_3f8;
    lStack_640 = lStack_400;
    lStack_628 = lStack_3e8;
    lStack_630 = lStack_3f0;
    lStack_618 = lStack_3d8;
    lStack_620 = lStack_3e0;
    lStack_608 = lStack_3c8;
    lStack_610 = lStack_3d0;
    iVar1 = (int)&lStack_340;
    func_0x000100d6dc90();
    if (iVar1 == 1) goto LAB_103d407b4;
    lStack_678 = lStack_2b8;
    lStack_680 = lStack_2c0;
    lStack_668 = lStack_2a8;
    lStack_670 = lStack_2b0;
    lStack_658 = lStack_298;
    lStack_660 = lStack_2a0;
    lStack_648 = lStack_288;
    lStack_650 = lStack_290;
    lStack_6b8 = lStack_2f8;
    lStack_6c0 = lStack_300;
    lStack_6a8 = lStack_2e8;
    lStack_6b0 = lStack_2f0;
    lStack_698 = lStack_2d8;
    lStack_6a0 = lStack_2e0;
    lStack_688 = lStack_2c8;
    lStack_690 = lStack_2d0;
    lStack_6f8 = lStack_338;
    lStack_700 = lStack_340;
    lStack_6e8 = lStack_328;
    lStack_6f0 = lStack_330;
    lStack_6d8 = lStack_318;
    lStack_6e0 = lStack_320;
    lStack_6c8 = lStack_308;
    lStack_6d0 = lStack_310;
    lStack_4f8 = lStack_2b8;
    lStack_500 = lStack_2c0;
    lStack_4e8 = lStack_2a8;
    lStack_4f0 = lStack_2b0;
    lStack_4d8 = lStack_298;
    lStack_4e0 = lStack_2a0;
    lStack_4c8 = lStack_288;
    lStack_4d0 = lStack_290;
    lStack_538 = lStack_2f8;
    lStack_540 = lStack_300;
    lStack_528 = lStack_2e8;
    lStack_530 = lStack_2f0;
    lStack_518 = lStack_2d8;
    lStack_520 = lStack_2e0;
    lStack_508 = lStack_2c8;
    lStack_510 = lStack_2d0;
    lStack_578 = lStack_338;
    lStack_580 = lStack_340;
    lStack_568 = lStack_328;
    lStack_570 = lStack_330;
    lStack_558 = lStack_318;
    lStack_560 = lStack_320;
    lStack_548 = lStack_308;
    lStack_550 = lStack_310;
    lStack_78 = lStack_5b8;
    lStack_80 = lStack_5c0;
    lStack_68 = lStack_5a8;
    lStack_70 = lStack_5b0;
    lStack_58 = lStack_598;
    lStack_60 = lStack_5a0;
    lStack_48 = lStack_588;
    lStack_50 = lStack_590;
    lStack_b8 = lStack_5f8;
    lStack_c0 = lStack_600;
    lStack_a8 = lStack_5e8;
    lStack_b0 = lStack_5f0;
    lStack_98 = lStack_5d8;
    lStack_a0 = lStack_5e0;
    lStack_88 = lStack_5c8;
    lStack_90 = lStack_5d0;
    lStack_f8 = lStack_638;
    lStack_100 = lStack_640;
    lStack_e8 = lStack_628;
    lStack_f0 = lStack_630;
    lStack_d8 = lStack_618;
    lStack_e0 = lStack_620;
    lStack_c8 = lStack_608;
    lStack_d0 = lStack_610;
    FUN_103d3e4c8(&lStack_1c0,auStack_7c0,0x113004b88,&UNK_10dc80c10);
    FUN_103d3e4c8(&lStack_280,auStack_7c0,0x113004b88,&UNK_10dc80c10);
    plVar3 = &lStack_100;
    FUN_103d3cf90(plVar3,&lStack_580);
    func_0x000103d5122c(&lStack_700,0x113004b88,&UNK_10dc80c10);
    func_0x000103d5122c(&lStack_400,0x113004b88,&UNK_10dc80c10);
    if (((ulong)plVar3 & 1) != 0) goto LAB_103d40934;
  }
  uVar2 = 0;
LAB_103d40940:
  return uVar2 & 1;
}



/* Entry: 103d4095c; end: 103d40a43;  */

/* WARNING: Possible PIC construction at 0x000103d409a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d409a4) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d4095c(int *param_1,int *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  if (*param_1 == *param_2) {
    pbVar12 = *(byte **)(param_1 + 2);
    pbVar14 = *(byte **)(param_1 + 4);
    pbVar15 = *(byte **)(param_2 + 2);
    pbVar17 = *(byte **)(param_2 + 4);
    if (*(byte **)(param_1 + 2) != *(byte **)(param_2 + 2) ||
        *(byte **)(param_1 + 4) != *(byte **)(param_2 + 4)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
    }
    lVar19 = *(long *)(param_1 + 6);
    lVar22 = *(long *)(param_2 + 6);
    if ((char)param_2[8] == '\x01') {
      if (lVar22 < 2) {
        if (lVar22 == 0) {
          if (lVar19 == 0) {
LAB_103d409fc:
            pbVar10 = *(byte **)(param_1 + 10);
            pbVar26 = *(byte **)(param_1 + 0xc);
            lVar19 = *(long *)(param_2 + 10);
            uVar16 = *(ulong *)(param_2 + 0xc);
            puVar7 = (undefined1 *)register0x00000008;
            do {
              *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
              *(byte **)(puVar7 + -0x48) = unaff_x25;
              *(byte **)(puVar7 + -0x40) = unaff_x24;
              *(byte **)(puVar7 + -0x38) = unaff_x23;
              *(ulong *)(puVar7 + -0x30) = unaff_x22;
              *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
              *(ulong *)(puVar7 + -0x20) = unaff_x20;
              *(byte **)(puVar7 + -0x18) = unaff_x19;
              *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
              *(undefined8 *)(puVar7 + -8) = unaff_x30;
              *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
              uVar4 = (uint)((ulong)pbVar26 >> 0x20);
              uVar18 = uVar4 >> 0x1e;
              uVar5 = (uint)(uVar16 >> 0x20);
              uVar23 = uVar5 >> 0x1e;
              iVar8 = (int)pbVar10;
              pbVar13 = pbVar26;
              if ((ulong)pbVar26 >> 0x3e == 3) {
                uVar21 = 0;
                if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
                    (uVar16 >> 0x3e < 3)) ||
                   ((uVar21 = 0, lVar19 != 0 || (uVar16 != 0xc000000000000000))))
                goto joined_r0x000100e26170;
code_r0x000100e26128:
                pbVar9 = (byte *)0x1;
              }
              else if (uVar4 >> 0x1e < 2) {
                if (uVar18 == 0) {
                  uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
                }
                else {
                  iVar20 = (int)((ulong)pbVar10 >> 0x20);
                  if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                    (*pcVar6)();
                  }
                  uVar21 = (ulong)(iVar20 - iVar8);
                }
joined_r0x000100e26170:
                if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
                if (uVar23 == 0) {
                  uVar24 = uVar16 >> 0x30 & 0xff;
                  goto code_r0x000100e2608c;
                }
                iVar20 = (int)((ulong)lVar19 >> 0x20);
                if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                  (*pcVar6)();
                }
                if (uVar21 == (long)(iVar20 - (int)lVar19)) goto code_r0x000100e26094;
code_r0x000100e26154:
                pbVar9 = (byte *)0x0;
              }
              else {
                if (uVar18 == 2) {
                  uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
                  if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                    (*pcVar6)();
                  }
                  goto joined_r0x000100e26170;
                }
                uVar21 = 0;
                if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
                if (uVar23 == 2) {
                  uVar24 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
                  if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                    (*pcVar6)();
                  }
code_r0x000100e2608c:
                  if (uVar21 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
                  if ((long)uVar21 < 1) goto code_r0x000100e26128;
                  if (uVar18 < 2) {
                    if (uVar18 == 0) {
                      puVar7[-0x70] = (char)pbVar10;
                      puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                      puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                      puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                      puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                      puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                      puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                      puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                      puVar7[-0x68] = (char)pbVar26;
                      puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
                      puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
                      puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
                      puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
                      puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
                      pbVar13 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                      unaff_x21 = 0;
                      func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                      pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                      goto code_r0x000100e262b0;
                    }
                    unaff_x25 = (byte *)(long)iVar8;
                    unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
                    if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                      (*pcVar6)();
                    }
                    func_0x000107c5ec30();
                    unaff_x24 = pbVar26;
                    if (pbVar10 == (byte *)0x0) {
                      func_0x000107c5ec38();
                      pbVar10 = (byte *)0x0;
                    }
                    else {
                      pbVar13 = pbVar10;
                      func_0x000107c5ec3c();
                      if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                        (*pcVar6)();
                      }
                      pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
                      func_0x000107c5ec38();
                      unaff_x19 = pbVar10;
                      if (pbVar10 != (byte *)0x0) {
                        if ((long)unaff_x23 <= (long)pbVar13) {
                          pbVar13 = unaff_x23;
                        }
                        pbVar13 = pbVar13 + (long)pbVar10;
                        goto code_r0x000100e262a4;
                      }
                    }
                    pbVar13 = (byte *)0x0;
                  }
                  else {
                    if (uVar18 != 2) {
                      *(undefined8 *)(puVar7 + -0x6a) = 0;
                      *(undefined8 *)(puVar7 + -0x70) = 0;
                      pbVar13 = puVar7 + -0x70;
                      goto code_r0x000100e26260;
                    }
                    lVar22 = *(long *)(pbVar10 + 0x10);
                    unaff_x24 = *(byte **)(pbVar10 + 0x18);
                    func_0x000107c5ec30();
                    pbVar13 = pbVar10;
                    if (pbVar10 != (byte *)0x0) {
                      func_0x000107c5ec3c();
                      if (SBORROW8(lVar22,(long)pbVar13)) {
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                        (*pcVar6)();
                      }
                      pbVar10 = pbVar10 + (lVar22 - (long)pbVar13);
                    }
                    unaff_x23 = unaff_x24 + -lVar22;
                    if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                      (*pcVar6)();
                    }
                    func_0x000107c5ec38();
                    unaff_x19 = pbVar10;
                    unaff_x25 = pbVar26;
                    if (pbVar10 == (byte *)0x0) {
                      pbVar13 = (byte *)0x0;
                    }
                    else {
                      if ((long)unaff_x23 <= (long)pbVar13) {
                        pbVar13 = unaff_x23;
                      }
                      pbVar13 = pbVar13 + (long)pbVar10;
                    }
                  }
code_r0x000100e262a4:
                  unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
                  unaff_x21 = 0;
                  func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar19,uVar16);
                  pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
                  unaff_x22 = uVar16;
                }
                else {
                  pbVar9 = (byte *)(ulong)(uVar21 == 0);
                }
              }
code_r0x000100e262b0:
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
                return pbVar9;
              }
              func_0x000107c60e78();
              *(byte **)(puVar7 + -0xc0) = unaff_x24;
              *(byte **)(puVar7 + -0xb8) = unaff_x23;
              *(ulong *)(puVar7 + -0xb0) = unaff_x22;
              *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
              *(ulong *)(puVar7 + -0xa0) = unaff_x20;
              *(byte **)(puVar7 + -0x98) = unaff_x19;
              *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
              *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
              pbVar12 = *(byte **)pbVar9;
              pbVar10 = *(byte **)(pbVar9 + 8);
              pbVar25 = *(byte **)(pbVar9 + 0x18);
              bVar27 = pbVar9[0x28];
              pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                                 (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
              pbVar14 = pbVar10;
              if (bVar27 < 3) {
                if (bVar27 == 0) {
                  if (pbVar13[0x28] == 0) {
                    lVar19 = *(long *)pbVar13;
                    uVar11 = 0;
                    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                    func_0x000107c60118(pbVar12,lVar19,uVar11);
                    return (byte *)(ulong)((uint)pbVar12 & 1);
                  }
                  return (byte *)0x0;
                }
                if (bVar27 == 1) {
                  if (pbVar13[0x28] != 1) {
                    return (byte *)0x0;
                  }
                  pbVar15 = *(byte **)(pbVar13 + 8);
                  pbVar17 = *(byte **)(pbVar13 + 0x10);
                  lVar19 = *(long *)pbVar13;
                  uVar11 = 0;
                  func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                  func_0x000107c60118(pbVar12,lVar19,uVar11);
                  if (((ulong)pbVar12 & 1) == 0) {
                    return (byte *)0x0;
                  }
                  pbVar12 = pbVar10;
                  pbVar14 = pbVar26;
                  if ((pbVar10 == pbVar15) && (pbVar26 == pbVar17)) {
                    return (byte *)0x1;
                  }
                }
                else {
                  if (pbVar13[0x28] != 2) {
                    return (byte *)0x0;
                  }
                  pbVar15 = *(byte **)pbVar13;
                  pbVar17 = *(byte **)(pbVar13 + 8);
                  lVar19 = *(long *)(pbVar13 + 0x18);
                  if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
                    if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                      return (byte *)0x0;
                    }
                    if (pbVar25 != (byte *)0x0) {
                      if (lVar19 == 0) {
                        return (byte *)0x0;
                      }
                      func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                      func_0x000107c61174(lVar19);
                      func_0x000107c61174();
                      pbVar12 = pbVar25;
                      func_0x000107c60118();
                      func_0x000107c61170(pbVar25);
                      func_0x000107c61170(lVar19);
                      pbVar25 = pbVar12;
                      goto joined_r0x000100e266a4;
                    }
joined_r0x000100e26620:
                    if (lVar19 == 0) {
                      return (byte *)0x1;
                    }
                    return (byte *)0x0;
                  }
                }
                goto code_r0x000107c605b8;
              }
              lVar22 = *(long *)(pbVar9 + 0x20);
              if (bVar27 < 5) {
                if (bVar27 != 3) {
                  if (pbVar13[0x28] != 4) {
                    return (byte *)0x0;
                  }
                  pbVar15 = *(byte **)pbVar13;
                  pbVar17 = *(byte **)(pbVar13 + 8);
                  if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
                     (pbVar12 = pbVar26, pbVar14 = pbVar25, pbVar15 = *(byte **)(pbVar13 + 0x10),
                     pbVar17 = *(byte **)(pbVar13 + 0x18),
                     pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18))
                     ) {
                    return (byte *)0x1;
                  }
                  goto code_r0x000107c605b8;
                }
                if (pbVar13[0x28] != 3) {
                  return (byte *)0x0;
                }
                if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)(pbVar13 + 0x10);
                lVar19 = *(long *)(pbVar13 + 0x20);
                if (pbVar26 == (byte *)0x0) {
                  if (pbVar17 != (byte *)0x0) {
                    return (byte *)0x0;
                  }
                }
                else {
                  if (pbVar17 == (byte *)0x0) {
                    return (byte *)0x0;
                  }
                  pbVar15 = *(byte **)(pbVar13 + 8);
                  pbVar12 = pbVar10;
                  pbVar14 = pbVar26;
                  if ((pbVar10 != pbVar15) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
                }
                if (lVar22 != 0) {
                  if (lVar19 == 0) {
                    return (byte *)0x0;
                  }
                  if ((pbVar25 == *(byte **)(pbVar13 + 0x18)) && (lVar22 == lVar19)) {
                    return (byte *)0x1;
                  }
                  func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar13 + 0x18),lVar19,0);
joined_r0x000100e266a4:
                  if (((ulong)pbVar25 & 1) == 0) {
                    return (byte *)0x0;
                  }
                  return (byte *)0x1;
                }
                goto joined_r0x000100e26620;
              }
              if (bVar27 != 5) {
                if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0)
                    && lVar22 == 0) && pbVar26 == (byte *)0x0) {
                  if (pbVar13[0x28] != 6) {
                    return (byte *)0x0;
                  }
                  lVar22 = *(long *)(pbVar13 + 0x20);
                  lVar19 = *(long *)(pbVar13 + 0x18);
                  bVar27 = pbVar13[8] | (byte)lVar19;
                  bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
                  bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
                  bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
                  bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
                  bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
                  bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
                  bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
                  bVar35 = pbVar13[0x10] | (byte)lVar22;
                  bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
                  bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
                  bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
                  bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
                  bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
                  bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
                  bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
                  auVar43[1] = bVar28;
                  auVar43[0] = bVar27;
                  auVar43[2] = bVar29;
                  auVar43[3] = bVar30;
                  auVar43[4] = bVar31;
                  auVar43[5] = bVar32;
                  auVar43[6] = bVar33;
                  auVar43[7] = bVar34;
                  auVar43[8] = bVar35;
                  auVar43[9] = bVar36;
                  auVar43[10] = bVar37;
                  auVar43[0xb] = bVar38;
                  auVar43[0xc] = bVar39;
                  auVar43[0xd] = bVar40;
                  auVar43[0xe] = bVar41;
                  auVar43[0xf] = bVar42;
                  auVar3[1] = bVar28;
                  auVar3[0] = bVar27;
                  auVar3[2] = bVar29;
                  auVar3[3] = bVar30;
                  auVar3[4] = bVar31;
                  auVar3[5] = bVar32;
                  auVar3[6] = bVar33;
                  auVar3[7] = bVar34;
                  auVar3[8] = bVar35;
                  auVar3[9] = bVar36;
                  auVar3[10] = bVar37;
                  auVar3[0xb] = bVar38;
                  auVar3[0xc] = bVar39;
                  auVar3[0xd] = bVar40;
                  auVar3[0xe] = bVar41;
                  auVar3[0xf] = bVar42;
                  auVar43 = NEON_ext(auVar43,auVar3,8,1);
                  if (CONCAT17(bVar34 | auVar43[7],
                               CONCAT16(bVar33 | auVar43[6],
                                        CONCAT15(bVar32 | auVar43[5],
                                                 CONCAT14(bVar31 | auVar43[4],
                                                          CONCAT13(bVar30 | auVar43[3],
                                                                   CONCAT12(bVar29 | auVar43[2],
                                                                            CONCAT11(bVar28 | 
                                                  auVar43[1],bVar27 | auVar43[0]))))))) == 0 &&
                      *(long *)pbVar13 == 0) {
                    return (byte *)0x1;
                  }
                  return (byte *)0x0;
                }
                if ((pbVar12 == (byte *)0x1) &&
                   (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0)
                    && lVar22 == 0)) {
                  if (pbVar13[0x28] != 6) {
                    return (byte *)0x0;
                  }
                  if (*(long *)pbVar13 != 1) {
                    return (byte *)0x0;
                  }
                }
                else {
                  if (pbVar13[0x28] != 6) {
                    return (byte *)0x0;
                  }
                  if (*(long *)pbVar13 != 2) {
                    return (byte *)0x0;
                  }
                }
                lVar22 = *(long *)(pbVar13 + 0x20);
                lVar19 = *(long *)(pbVar13 + 0x18);
                bVar27 = pbVar13[8] | (byte)lVar19;
                bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
                bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
                bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
                bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
                bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
                bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
                bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
                bVar35 = pbVar13[0x10] | (byte)lVar22;
                bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
                bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
                bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
                bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
                bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
                bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
                bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
                auVar1[1] = bVar28;
                auVar1[0] = bVar27;
                auVar1[2] = bVar29;
                auVar1[3] = bVar30;
                auVar1[4] = bVar31;
                auVar1[5] = bVar32;
                auVar1[6] = bVar33;
                auVar1[7] = bVar34;
                auVar1[8] = bVar35;
                auVar1[9] = bVar36;
                auVar1[10] = bVar37;
                auVar1[0xb] = bVar38;
                auVar1[0xc] = bVar39;
                auVar1[0xd] = bVar40;
                auVar1[0xe] = bVar41;
                auVar1[0xf] = bVar42;
                auVar2[1] = bVar28;
                auVar2[0] = bVar27;
                auVar2[2] = bVar29;
                auVar2[3] = bVar30;
                auVar2[4] = bVar31;
                auVar2[5] = bVar32;
                auVar2[6] = bVar33;
                auVar2[7] = bVar34;
                auVar2[8] = bVar35;
                auVar2[9] = bVar36;
                auVar2[10] = bVar37;
                auVar2[0xb] = bVar38;
                auVar2[0xc] = bVar39;
                auVar2[0xd] = bVar40;
                auVar2[0xe] = bVar41;
                auVar2[0xf] = bVar42;
                auVar43 = NEON_ext(auVar1,auVar2,8,1);
                lVar19 = CONCAT17(bVar34 | auVar43[7],
                                  CONCAT16(bVar33 | auVar43[6],
                                           CONCAT15(bVar32 | auVar43[5],
                                                    CONCAT14(bVar31 | auVar43[4],
                                                             CONCAT13(bVar30 | auVar43[3],
                                                                      CONCAT12(bVar29 | auVar43[2],
                                                                               CONCAT11(bVar28 | 
                                                  auVar43[1],bVar27 | auVar43[0])))))));
                goto joined_r0x000100e26620;
              }
              if (pbVar13[0x28] != 5) {
                return (byte *)0x0;
              }
              lVar19 = *(long *)(pbVar13 + 8);
              uVar16 = *(ulong *)(pbVar13 + 0x10);
              lVar22 = *(long *)pbVar13;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar22,uVar11);
              if (((ulong)pbVar12 & 1) == 0) {
                return (byte *)0x0;
              }
              unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
              unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
              unaff_x20 = *(ulong *)(puVar7 + -0xa0);
              unaff_x19 = *(byte **)(puVar7 + -0x98);
              unaff_x22 = *(ulong *)(puVar7 + -0xb0);
              unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
              unaff_x24 = *(byte **)(puVar7 + -0xc0);
              unaff_x23 = *(byte **)(puVar7 + -0xb8);
              puVar7 = puVar7 + -0x80;
            } while( true );
          }
        }
        else if (lVar19 == 1) goto LAB_103d409fc;
      }
      else if (lVar22 == 2) {
        if (lVar19 == 2) goto LAB_103d409fc;
      }
      else if (lVar22 == 3) {
        if (lVar19 == 3) goto LAB_103d409fc;
      }
      else if (lVar19 == 4) goto LAB_103d409fc;
    }
    else if (lVar19 == lVar22) goto LAB_103d409fc;
  }
  return (byte *)0x0;
}



/* Entry: 103d40a44; end: 103d40bb7;  */

uint FUN_103d40a44(long *param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_288 [184];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar5 = *param_1;
  lVar4 = *param_2;
  lVar6 = *(long *)(lVar5 + 0x10);
  if (lVar6 == *(long *)(lVar4 + 0x10)) {
    if (lVar6 != 0 && lVar5 != lVar4) {
      puVar7 = (undefined8 *)(lVar5 + 0x20);
      puVar8 = (undefined8 *)(lVar4 + 0x20);
      do {
        uStack_1c8 = puVar7[1];
        uStack_1d0 = *puVar7;
        uStack_1b8 = puVar7[3];
        uStack_1c0 = puVar7[2];
        uStack_1a8 = puVar7[5];
        uStack_1b0 = puVar7[4];
        uStack_198 = puVar7[7];
        uStack_1a0 = puVar7[6];
        uStack_188 = puVar7[9];
        uStack_190 = puVar7[8];
        uStack_178 = puVar7[0xb];
        uStack_180 = puVar7[10];
        uStack_168 = puVar7[0xd];
        uStack_170 = puVar7[0xc];
        uStack_158 = puVar7[0xf];
        uStack_160 = puVar7[0xe];
        uStack_148 = puVar7[0x11];
        uStack_150 = puVar7[0x10];
        uStack_138 = puVar7[0x13];
        uStack_140 = puVar7[0x12];
        uStack_128 = puVar7[0x15];
        uStack_130 = puVar7[0x14];
        uStack_120 = puVar7[0x16];
        uStack_108 = puVar8[1];
        uStack_110 = *puVar8;
        uStack_f8 = puVar8[3];
        uStack_100 = puVar8[2];
        uStack_e8 = puVar8[5];
        uStack_f0 = puVar8[4];
        uStack_d8 = puVar8[7];
        uStack_e0 = puVar8[6];
        uStack_c8 = puVar8[9];
        uStack_d0 = puVar8[8];
        uStack_b8 = puVar8[0xb];
        uStack_c0 = puVar8[10];
        uStack_a8 = puVar8[0xd];
        uStack_b0 = puVar8[0xc];
        uStack_98 = puVar8[0xf];
        uStack_a0 = puVar8[0xe];
        uStack_88 = puVar8[0x11];
        uStack_90 = puVar8[0x10];
        uStack_78 = puVar8[0x13];
        uStack_80 = puVar8[0x12];
        uStack_68 = puVar8[0x15];
        uStack_70 = puVar8[0x14];
        uStack_60 = puVar8[0x16];
        FUN_103d511cc(&uStack_1d0,auStack_288);
        FUN_103d511cc(&uStack_110,auStack_288);
        puVar2 = &uStack_1d0;
        FUN_103d3f118(puVar2,&uStack_110);
        func_0x000103d51200(&uStack_110);
        func_0x000103d51200(&uStack_1d0);
        if (((ulong)puVar2 & 1) == 0) goto LAB_103d40b94;
        puVar8 = puVar8 + 0x17;
        puVar7 = puVar7 + 0x17;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    uVar3 = param_1[1];
    if (((uVar3 == param_2[1] && param_1[2] == param_2[2]) ||
        (func_0x000107c605b8(), (uVar3 & 1) != 0)) && (param_1[3] == param_2[3])) {
      lVar6 = param_1[4];
      func_0x000100e25fcc(lVar6,param_1[5],param_2[4],param_2[5]);
      uVar1 = (uint)lVar6;
      goto LAB_103d40b98;
    }
  }
LAB_103d40b94:
  uVar1 = 0;
LAB_103d40b98:
  return uVar1 & 1;
}



/* Entry: 103d40bb8; end: 103d40d3f;  */

/* WARNING: Possible PIC construction at 0x000103d40be8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d40c3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d40c84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d40d14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d40d18) */
/* WARNING: Removing unreachable block (ram,0x000103d40c88) */
/* WARNING: Removing unreachable block (ram,0x000103d40c40) */
/* WARNING: Removing unreachable block (ram,0x000103d40bec) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d40bb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  pbVar13 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  pbVar17 = (byte *)*param_2;
  pbVar12 = (byte *)param_2[1];
  if (pbVar13 == pbVar17 && pbVar16 == pbVar12) {
    uVar14 = param_1[2];
    if (((uVar14 != param_2[2] || param_1[3] != param_2[3]) &&
        (func_0x000107c605b8(), (uVar14 & 1) == 0)) || (param_1[4] != param_2[4])) {
      return (byte *)0x0;
    }
    pbVar13 = (byte *)param_1[5];
    pbVar16 = (byte *)param_1[6];
    pbVar17 = (byte *)param_2[5];
    pbVar12 = (byte *)param_2[6];
    if ((pbVar13 == pbVar17) && (pbVar16 == pbVar12)) {
      uVar14 = param_1[7];
      if (((uVar14 != param_2[7]) || (param_1[8] != param_2[8])) &&
         (func_0x000107c605b8(), (uVar14 & 1) == 0)) {
        return (byte *)0x0;
      }
      pbVar13 = (byte *)param_1[9];
      pbVar16 = (byte *)param_1[10];
      pbVar17 = (byte *)param_2[9];
      pbVar12 = (byte *)param_2[10];
      if ((pbVar13 == pbVar17) && (pbVar16 == pbVar12)) {
        uVar14 = param_1[0xb];
        if (((uVar14 != param_2[0xb]) || (param_1[0xc] != param_2[0xc])) &&
           (func_0x000107c605b8(), (uVar14 & 1) == 0)) {
          return (byte *)0x0;
        }
        lVar19 = param_1[0xd];
        lVar22 = param_2[0xd];
        if (*(char *)(param_2 + 0xe) == '\x01') {
          if (lVar22 == 0) {
            if (lVar19 != 0) {
              return (byte *)0x0;
            }
          }
          else if (lVar22 == 1) {
            if (lVar19 != 1) {
              return (byte *)0x0;
            }
          }
          else if (lVar19 != 2) {
            return (byte *)0x0;
          }
        }
        else if (lVar19 != lVar22) {
          return (byte *)0x0;
        }
        pbVar13 = (byte *)param_1[0xf];
        pbVar16 = (byte *)param_1[0x10];
        pbVar17 = (byte *)param_2[0xf];
        pbVar12 = (byte *)param_2[0x10];
        if ((pbVar13 == pbVar17) && (pbVar16 == pbVar12)) {
          pbVar10 = (byte *)param_1[0x11];
          pbVar26 = (byte *)param_1[0x12];
          lVar19 = param_2[0x11];
          uVar14 = param_2[0x12];
          puVar7 = (undefined1 *)register0x00000008;
          do {
            *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
            *(byte **)(puVar7 + -0x48) = unaff_x25;
            *(byte **)(puVar7 + -0x40) = unaff_x24;
            *(byte **)(puVar7 + -0x38) = unaff_x23;
            *(ulong *)(puVar7 + -0x30) = unaff_x22;
            *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
            *(ulong *)(puVar7 + -0x20) = unaff_x20;
            *(byte **)(puVar7 + -0x18) = unaff_x19;
            *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
            *(undefined8 *)(puVar7 + -8) = unaff_x30;
            *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
            uVar4 = (uint)((ulong)pbVar26 >> 0x20);
            uVar18 = uVar4 >> 0x1e;
            uVar5 = (uint)(uVar14 >> 0x20);
            uVar23 = uVar5 >> 0x1e;
            iVar8 = (int)pbVar10;
            pbVar15 = pbVar26;
            if ((ulong)pbVar26 >> 0x3e == 3) {
              uVar21 = 0;
              if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
                  (uVar14 >> 0x3e < 3)) ||
                 ((uVar21 = 0, lVar19 != 0 || (uVar14 != 0xc000000000000000))))
              goto joined_r0x000100e26170;
code_r0x000100e26128:
              pbVar9 = (byte *)0x1;
            }
            else if (uVar4 >> 0x1e < 2) {
              if (uVar18 == 0) {
                uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
              }
              else {
                iVar20 = (int)((ulong)pbVar10 >> 0x20);
                if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                  (*pcVar6)();
                }
                uVar21 = (ulong)(iVar20 - iVar8);
              }
joined_r0x000100e26170:
              if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
              if (uVar23 == 0) {
                uVar24 = uVar14 >> 0x30 & 0xff;
                goto code_r0x000100e2608c;
              }
              iVar20 = (int)((ulong)lVar19 >> 0x20);
              if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                (*pcVar6)();
              }
              if (uVar21 == (long)(iVar20 - (int)lVar19)) goto code_r0x000100e26094;
code_r0x000100e26154:
              pbVar9 = (byte *)0x0;
            }
            else {
              if (uVar18 == 2) {
                uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
                if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                  (*pcVar6)();
                }
                goto joined_r0x000100e26170;
              }
              uVar21 = 0;
              if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
              if (uVar23 == 2) {
                uVar24 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
                if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                  (*pcVar6)();
                }
code_r0x000100e2608c:
                if (uVar21 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
                if ((long)uVar21 < 1) goto code_r0x000100e26128;
                if (uVar18 < 2) {
                  if (uVar18 == 0) {
                    puVar7[-0x70] = (char)pbVar10;
                    puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                    puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                    puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                    puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                    puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                    puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                    puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                    puVar7[-0x68] = (char)pbVar26;
                    puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
                    puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
                    puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
                    puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
                    puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
                    pbVar15 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                    unaff_x21 = 0;
                    func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                    pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                    goto code_r0x000100e262b0;
                  }
                  unaff_x25 = (byte *)(long)iVar8;
                  unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
                  if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                    (*pcVar6)();
                  }
                  func_0x000107c5ec30();
                  unaff_x24 = pbVar26;
                  if (pbVar10 == (byte *)0x0) {
                    func_0x000107c5ec38();
                    pbVar10 = (byte *)0x0;
                  }
                  else {
                    pbVar15 = pbVar10;
                    func_0x000107c5ec3c();
                    if (SBORROW8((long)unaff_x25,(long)pbVar15)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                      (*pcVar6)();
                    }
                    pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar15);
                    func_0x000107c5ec38();
                    unaff_x19 = pbVar10;
                    if (pbVar10 != (byte *)0x0) {
                      if ((long)unaff_x23 <= (long)pbVar15) {
                        pbVar15 = unaff_x23;
                      }
                      pbVar15 = pbVar15 + (long)pbVar10;
                      goto code_r0x000100e262a4;
                    }
                  }
                  pbVar15 = (byte *)0x0;
                }
                else {
                  if (uVar18 != 2) {
                    *(undefined8 *)(puVar7 + -0x6a) = 0;
                    *(undefined8 *)(puVar7 + -0x70) = 0;
                    pbVar15 = puVar7 + -0x70;
                    goto code_r0x000100e26260;
                  }
                  lVar22 = *(long *)(pbVar10 + 0x10);
                  unaff_x24 = *(byte **)(pbVar10 + 0x18);
                  func_0x000107c5ec30();
                  pbVar15 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    func_0x000107c5ec3c();
                    if (SBORROW8(lVar22,(long)pbVar15)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                      (*pcVar6)();
                    }
                    pbVar10 = pbVar10 + (lVar22 - (long)pbVar15);
                  }
                  unaff_x23 = unaff_x24 + -lVar22;
                  if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                    (*pcVar6)();
                  }
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar10;
                  unaff_x25 = pbVar26;
                  if (pbVar10 == (byte *)0x0) {
                    pbVar15 = (byte *)0x0;
                  }
                  else {
                    if ((long)unaff_x23 <= (long)pbVar15) {
                      pbVar15 = unaff_x23;
                    }
                    pbVar15 = pbVar15 + (long)pbVar10;
                  }
                }
code_r0x000100e262a4:
                unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar15,lVar19,uVar14);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
                unaff_x22 = uVar14;
              }
              else {
                pbVar9 = (byte *)(ulong)(uVar21 == 0);
              }
            }
code_r0x000100e262b0:
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
              return pbVar9;
            }
            func_0x000107c60e78();
            *(byte **)(puVar7 + -0xc0) = unaff_x24;
            *(byte **)(puVar7 + -0xb8) = unaff_x23;
            *(ulong *)(puVar7 + -0xb0) = unaff_x22;
            *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
            *(ulong *)(puVar7 + -0xa0) = unaff_x20;
            *(byte **)(puVar7 + -0x98) = unaff_x19;
            *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
            *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
            pbVar13 = *(byte **)pbVar9;
            pbVar10 = *(byte **)(pbVar9 + 8);
            pbVar25 = *(byte **)(pbVar9 + 0x18);
            bVar27 = pbVar9[0x28];
            pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                               (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
            pbVar16 = pbVar10;
            if (bVar27 < 3) {
              if (bVar27 == 0) {
                if (pbVar15[0x28] == 0) {
                  lVar19 = *(long *)pbVar15;
                  uVar11 = 0;
                  func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                  func_0x000107c60118(pbVar13,lVar19,uVar11);
                  return (byte *)(ulong)((uint)pbVar13 & 1);
                }
                return (byte *)0x0;
              }
              if (bVar27 == 1) {
                if (pbVar15[0x28] != 1) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)(pbVar15 + 8);
                pbVar12 = *(byte **)(pbVar15 + 0x10);
                lVar19 = *(long *)pbVar15;
                uVar11 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar13,lVar19,uVar11);
                if (((ulong)pbVar13 & 1) == 0) {
                  return (byte *)0x0;
                }
                pbVar13 = pbVar10;
                pbVar16 = pbVar26;
                if ((pbVar10 == pbVar17) && (pbVar26 == pbVar12)) {
                  return (byte *)0x1;
                }
              }
              else {
                if (pbVar15[0x28] != 2) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)pbVar15;
                pbVar12 = *(byte **)(pbVar15 + 8);
                lVar19 = *(long *)(pbVar15 + 0x18);
                if ((pbVar13 == pbVar17) && (pbVar10 == pbVar12)) {
                  if (((pbVar9[0x10] ^ pbVar15[0x10]) & 1) != 0) {
                    return (byte *)0x0;
                  }
                  if (pbVar25 != (byte *)0x0) {
                    if (lVar19 == 0) {
                      return (byte *)0x0;
                    }
                    func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                    func_0x000107c61174(lVar19);
                    func_0x000107c61174();
                    pbVar12 = pbVar25;
                    func_0x000107c60118();
                    func_0x000107c61170(pbVar25);
                    func_0x000107c61170(lVar19);
                    pbVar25 = pbVar12;
                    goto joined_r0x000100e266a4;
                  }
joined_r0x000100e26620:
                  if (lVar19 == 0) {
                    return (byte *)0x1;
                  }
                  return (byte *)0x0;
                }
              }
              break;
            }
            lVar22 = *(long *)(pbVar9 + 0x20);
            if (bVar27 < 5) {
              if (bVar27 != 3) {
                if (pbVar15[0x28] != 4) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)pbVar15;
                pbVar12 = *(byte **)(pbVar15 + 8);
                if (((pbVar13 == pbVar17) && (pbVar10 == pbVar12)) &&
                   (pbVar13 = pbVar26, pbVar16 = pbVar25, pbVar17 = *(byte **)(pbVar15 + 0x10),
                   pbVar12 = *(byte **)(pbVar15 + 0x18),
                   pbVar26 == *(byte **)(pbVar15 + 0x10) && pbVar25 == *(byte **)(pbVar15 + 0x18)))
                {
                  return (byte *)0x1;
                }
                break;
              }
              if (pbVar15[0x28] != 3) {
                return (byte *)0x0;
              }
              if ((uint)*pbVar15 != ((uint)pbVar13 & 0xff)) {
                return (byte *)0x0;
              }
              pbVar12 = *(byte **)(pbVar15 + 0x10);
              lVar19 = *(long *)(pbVar15 + 0x20);
              if (pbVar26 == (byte *)0x0) {
                if (pbVar12 != (byte *)0x0) {
                  return (byte *)0x0;
                }
              }
              else {
                if (pbVar12 == (byte *)0x0) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)(pbVar15 + 8);
                pbVar13 = pbVar10;
                pbVar16 = pbVar26;
                if ((pbVar10 != pbVar17) || (pbVar26 != pbVar12)) break;
              }
              if (lVar22 != 0) {
                if (lVar19 == 0) {
                  return (byte *)0x0;
                }
                if ((pbVar25 == *(byte **)(pbVar15 + 0x18)) && (lVar22 == lVar19)) {
                  return (byte *)0x1;
                }
                func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar15 + 0x18),lVar19,0);
joined_r0x000100e266a4:
                if (((ulong)pbVar25 & 1) == 0) {
                  return (byte *)0x0;
                }
                return (byte *)0x1;
              }
              goto joined_r0x000100e26620;
            }
            if (bVar27 != 5) {
              if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
                  lVar22 == 0) && pbVar26 == (byte *)0x0) {
                if (pbVar15[0x28] != 6) {
                  return (byte *)0x0;
                }
                lVar22 = *(long *)(pbVar15 + 0x20);
                lVar19 = *(long *)(pbVar15 + 0x18);
                bVar27 = pbVar15[8] | (byte)lVar19;
                bVar28 = pbVar15[9] | (byte)((ulong)lVar19 >> 8);
                bVar29 = pbVar15[10] | (byte)((ulong)lVar19 >> 0x10);
                bVar30 = pbVar15[0xb] | (byte)((ulong)lVar19 >> 0x18);
                bVar31 = pbVar15[0xc] | (byte)((ulong)lVar19 >> 0x20);
                bVar32 = pbVar15[0xd] | (byte)((ulong)lVar19 >> 0x28);
                bVar33 = pbVar15[0xe] | (byte)((ulong)lVar19 >> 0x30);
                bVar34 = pbVar15[0xf] | (byte)((ulong)lVar19 >> 0x38);
                bVar35 = pbVar15[0x10] | (byte)lVar22;
                bVar36 = pbVar15[0x11] | (byte)((ulong)lVar22 >> 8);
                bVar37 = pbVar15[0x12] | (byte)((ulong)lVar22 >> 0x10);
                bVar38 = pbVar15[0x13] | (byte)((ulong)lVar22 >> 0x18);
                bVar39 = pbVar15[0x14] | (byte)((ulong)lVar22 >> 0x20);
                bVar40 = pbVar15[0x15] | (byte)((ulong)lVar22 >> 0x28);
                bVar41 = pbVar15[0x16] | (byte)((ulong)lVar22 >> 0x30);
                bVar42 = pbVar15[0x17] | (byte)((ulong)lVar22 >> 0x38);
                auVar43[1] = bVar28;
                auVar43[0] = bVar27;
                auVar43[2] = bVar29;
                auVar43[3] = bVar30;
                auVar43[4] = bVar31;
                auVar43[5] = bVar32;
                auVar43[6] = bVar33;
                auVar43[7] = bVar34;
                auVar43[8] = bVar35;
                auVar43[9] = bVar36;
                auVar43[10] = bVar37;
                auVar43[0xb] = bVar38;
                auVar43[0xc] = bVar39;
                auVar43[0xd] = bVar40;
                auVar43[0xe] = bVar41;
                auVar43[0xf] = bVar42;
                auVar3[1] = bVar28;
                auVar3[0] = bVar27;
                auVar3[2] = bVar29;
                auVar3[3] = bVar30;
                auVar3[4] = bVar31;
                auVar3[5] = bVar32;
                auVar3[6] = bVar33;
                auVar3[7] = bVar34;
                auVar3[8] = bVar35;
                auVar3[9] = bVar36;
                auVar3[10] = bVar37;
                auVar3[0xb] = bVar38;
                auVar3[0xc] = bVar39;
                auVar3[0xd] = bVar40;
                auVar3[0xe] = bVar41;
                auVar3[0xf] = bVar42;
                auVar43 = NEON_ext(auVar43,auVar3,8,1);
                if (CONCAT17(bVar34 | auVar43[7],
                             CONCAT16(bVar33 | auVar43[6],
                                      CONCAT15(bVar32 | auVar43[5],
                                               CONCAT14(bVar31 | auVar43[4],
                                                        CONCAT13(bVar30 | auVar43[3],
                                                                 CONCAT12(bVar29 | auVar43[2],
                                                                          CONCAT11(bVar28 | auVar43[
                                                  1],bVar27 | auVar43[0]))))))) == 0 &&
                    *(long *)pbVar15 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
              if ((pbVar13 == (byte *)0x1) &&
                 (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
                  lVar22 == 0)) {
                if (pbVar15[0x28] != 6) {
                  return (byte *)0x0;
                }
                if (*(long *)pbVar15 != 1) {
                  return (byte *)0x0;
                }
              }
              else {
                if (pbVar15[0x28] != 6) {
                  return (byte *)0x0;
                }
                if (*(long *)pbVar15 != 2) {
                  return (byte *)0x0;
                }
              }
              lVar22 = *(long *)(pbVar15 + 0x20);
              lVar19 = *(long *)(pbVar15 + 0x18);
              bVar27 = pbVar15[8] | (byte)lVar19;
              bVar28 = pbVar15[9] | (byte)((ulong)lVar19 >> 8);
              bVar29 = pbVar15[10] | (byte)((ulong)lVar19 >> 0x10);
              bVar30 = pbVar15[0xb] | (byte)((ulong)lVar19 >> 0x18);
              bVar31 = pbVar15[0xc] | (byte)((ulong)lVar19 >> 0x20);
              bVar32 = pbVar15[0xd] | (byte)((ulong)lVar19 >> 0x28);
              bVar33 = pbVar15[0xe] | (byte)((ulong)lVar19 >> 0x30);
              bVar34 = pbVar15[0xf] | (byte)((ulong)lVar19 >> 0x38);
              bVar35 = pbVar15[0x10] | (byte)lVar22;
              bVar36 = pbVar15[0x11] | (byte)((ulong)lVar22 >> 8);
              bVar37 = pbVar15[0x12] | (byte)((ulong)lVar22 >> 0x10);
              bVar38 = pbVar15[0x13] | (byte)((ulong)lVar22 >> 0x18);
              bVar39 = pbVar15[0x14] | (byte)((ulong)lVar22 >> 0x20);
              bVar40 = pbVar15[0x15] | (byte)((ulong)lVar22 >> 0x28);
              bVar41 = pbVar15[0x16] | (byte)((ulong)lVar22 >> 0x30);
              bVar42 = pbVar15[0x17] | (byte)((ulong)lVar22 >> 0x38);
              auVar1[1] = bVar28;
              auVar1[0] = bVar27;
              auVar1[2] = bVar29;
              auVar1[3] = bVar30;
              auVar1[4] = bVar31;
              auVar1[5] = bVar32;
              auVar1[6] = bVar33;
              auVar1[7] = bVar34;
              auVar1[8] = bVar35;
              auVar1[9] = bVar36;
              auVar1[10] = bVar37;
              auVar1[0xb] = bVar38;
              auVar1[0xc] = bVar39;
              auVar1[0xd] = bVar40;
              auVar1[0xe] = bVar41;
              auVar1[0xf] = bVar42;
              auVar2[1] = bVar28;
              auVar2[0] = bVar27;
              auVar2[2] = bVar29;
              auVar2[3] = bVar30;
              auVar2[4] = bVar31;
              auVar2[5] = bVar32;
              auVar2[6] = bVar33;
              auVar2[7] = bVar34;
              auVar2[8] = bVar35;
              auVar2[9] = bVar36;
              auVar2[10] = bVar37;
              auVar2[0xb] = bVar38;
              auVar2[0xc] = bVar39;
              auVar2[0xd] = bVar40;
              auVar2[0xe] = bVar41;
              auVar2[0xf] = bVar42;
              auVar43 = NEON_ext(auVar1,auVar2,8,1);
              lVar19 = CONCAT17(bVar34 | auVar43[7],
                                CONCAT16(bVar33 | auVar43[6],
                                         CONCAT15(bVar32 | auVar43[5],
                                                  CONCAT14(bVar31 | auVar43[4],
                                                           CONCAT13(bVar30 | auVar43[3],
                                                                    CONCAT12(bVar29 | auVar43[2],
                                                                             CONCAT11(bVar28 | 
                                                  auVar43[1],bVar27 | auVar43[0])))))));
              goto joined_r0x000100e26620;
            }
            if (pbVar15[0x28] != 5) {
              return (byte *)0x0;
            }
            lVar19 = *(long *)(pbVar15 + 8);
            uVar14 = *(ulong *)(pbVar15 + 0x10);
            lVar22 = *(long *)pbVar15;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar13,lVar22,uVar11);
            if (((ulong)pbVar13 & 1) == 0) {
              return (byte *)0x0;
            }
            unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
            unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
            unaff_x20 = *(ulong *)(puVar7 + -0xa0);
            unaff_x19 = *(byte **)(puVar7 + -0x98);
            unaff_x22 = *(ulong *)(puVar7 + -0xb0);
            unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
            unaff_x24 = *(byte **)(puVar7 + -0xc0);
            unaff_x23 = *(byte **)(puVar7 + -0xb8);
            puVar7 = puVar7 + -0x80;
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(pbVar13,pbVar16,pbVar17,pbVar12,0);
  return pbVar13;
}



/* Entry: 103d40d40; end: 103d40def;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d40d40(byte *param_1,byte *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  if (((*param_1 ^ *param_2) & 1) == 0) {
    lVar19 = *(long *)(param_1 + 8);
    lVar22 = *(long *)(param_2 + 8);
    if (param_2[0x10] == 1) {
      if (lVar22 < 3) {
        if (lVar22 == 0) {
          if (lVar19 == 0) goto LAB_103d40d94;
        }
        else if (lVar22 == 1) {
          if (lVar19 == 1) {
LAB_103d40d94:
            pbVar10 = *(byte **)(param_1 + 0x18);
            pbVar26 = *(byte **)(param_1 + 0x20);
            lVar19 = *(long *)(param_2 + 0x18);
            uVar16 = *(ulong *)(param_2 + 0x20);
            puVar7 = (undefined1 *)register0x00000008;
            do {
              *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
              *(byte **)(puVar7 + -0x48) = unaff_x25;
              *(byte **)(puVar7 + -0x40) = unaff_x24;
              *(byte **)(puVar7 + -0x38) = unaff_x23;
              *(ulong *)(puVar7 + -0x30) = unaff_x22;
              *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
              *(ulong *)(puVar7 + -0x20) = unaff_x20;
              *(byte **)(puVar7 + -0x18) = unaff_x19;
              *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
              *(undefined8 *)(puVar7 + -8) = unaff_x30;
              *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
              uVar4 = (uint)((ulong)pbVar26 >> 0x20);
              uVar18 = uVar4 >> 0x1e;
              uVar5 = (uint)(uVar16 >> 0x20);
              uVar23 = uVar5 >> 0x1e;
              iVar8 = (int)pbVar10;
              pbVar13 = pbVar26;
              if ((ulong)pbVar26 >> 0x3e == 3) {
                uVar21 = 0;
                if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
                    (uVar16 >> 0x3e < 3)) ||
                   ((uVar21 = 0, lVar19 != 0 || (uVar16 != 0xc000000000000000))))
                goto joined_r0x000100e26170;
code_r0x000100e26128:
                pbVar9 = (byte *)0x1;
              }
              else if (uVar4 >> 0x1e < 2) {
                if (uVar18 == 0) {
                  uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
                }
                else {
                  iVar20 = (int)((ulong)pbVar10 >> 0x20);
                  if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                    (*pcVar6)();
                  }
                  uVar21 = (ulong)(iVar20 - iVar8);
                }
joined_r0x000100e26170:
                if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
                if (uVar23 == 0) {
                  uVar24 = uVar16 >> 0x30 & 0xff;
                  goto code_r0x000100e2608c;
                }
                iVar20 = (int)((ulong)lVar19 >> 0x20);
                if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                  (*pcVar6)();
                }
                if (uVar21 == (long)(iVar20 - (int)lVar19)) goto code_r0x000100e26094;
code_r0x000100e26154:
                pbVar9 = (byte *)0x0;
              }
              else {
                if (uVar18 == 2) {
                  uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
                  if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                    (*pcVar6)();
                  }
                  goto joined_r0x000100e26170;
                }
                uVar21 = 0;
                if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
                if (uVar23 == 2) {
                  uVar24 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
                  if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                    (*pcVar6)();
                  }
code_r0x000100e2608c:
                  if (uVar21 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
                  if ((long)uVar21 < 1) goto code_r0x000100e26128;
                  if (uVar18 < 2) {
                    if (uVar18 == 0) {
                      puVar7[-0x70] = (char)pbVar10;
                      puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                      puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                      puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                      puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                      puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                      puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                      puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                      puVar7[-0x68] = (char)pbVar26;
                      puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
                      puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
                      puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
                      puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
                      puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
                      pbVar13 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                      unaff_x21 = 0;
                      func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                      pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                      goto code_r0x000100e262b0;
                    }
                    unaff_x25 = (byte *)(long)iVar8;
                    unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
                    if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                      (*pcVar6)();
                    }
                    func_0x000107c5ec30();
                    unaff_x24 = pbVar26;
                    if (pbVar10 == (byte *)0x0) {
                      func_0x000107c5ec38();
                      pbVar10 = (byte *)0x0;
                    }
                    else {
                      pbVar13 = pbVar10;
                      func_0x000107c5ec3c();
                      if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                        (*pcVar6)();
                      }
                      pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
                      func_0x000107c5ec38();
                      unaff_x19 = pbVar10;
                      if (pbVar10 != (byte *)0x0) {
                        if ((long)unaff_x23 <= (long)pbVar13) {
                          pbVar13 = unaff_x23;
                        }
                        pbVar13 = pbVar13 + (long)pbVar10;
                        goto code_r0x000100e262a4;
                      }
                    }
                    pbVar13 = (byte *)0x0;
                  }
                  else {
                    if (uVar18 != 2) {
                      *(undefined8 *)(puVar7 + -0x6a) = 0;
                      *(undefined8 *)(puVar7 + -0x70) = 0;
                      pbVar13 = puVar7 + -0x70;
                      goto code_r0x000100e26260;
                    }
                    lVar22 = *(long *)(pbVar10 + 0x10);
                    unaff_x24 = *(byte **)(pbVar10 + 0x18);
                    func_0x000107c5ec30();
                    pbVar13 = pbVar10;
                    if (pbVar10 != (byte *)0x0) {
                      func_0x000107c5ec3c();
                      if (SBORROW8(lVar22,(long)pbVar13)) {
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                        (*pcVar6)();
                      }
                      pbVar10 = pbVar10 + (lVar22 - (long)pbVar13);
                    }
                    unaff_x23 = unaff_x24 + -lVar22;
                    if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                      (*pcVar6)();
                    }
                    func_0x000107c5ec38();
                    unaff_x19 = pbVar10;
                    unaff_x25 = pbVar26;
                    if (pbVar10 == (byte *)0x0) {
                      pbVar13 = (byte *)0x0;
                    }
                    else {
                      if ((long)unaff_x23 <= (long)pbVar13) {
                        pbVar13 = unaff_x23;
                      }
                      pbVar13 = pbVar13 + (long)pbVar10;
                    }
                  }
code_r0x000100e262a4:
                  unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
                  unaff_x21 = 0;
                  func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar19,uVar16);
                  pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
                  unaff_x22 = uVar16;
                }
                else {
                  pbVar9 = (byte *)(ulong)(uVar21 == 0);
                }
              }
code_r0x000100e262b0:
              if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
                return pbVar9;
              }
              func_0x000107c60e78();
              *(byte **)(puVar7 + -0xc0) = unaff_x24;
              *(byte **)(puVar7 + -0xb8) = unaff_x23;
              *(ulong *)(puVar7 + -0xb0) = unaff_x22;
              *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
              *(ulong *)(puVar7 + -0xa0) = unaff_x20;
              *(byte **)(puVar7 + -0x98) = unaff_x19;
              *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
              *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
              pbVar12 = *(byte **)pbVar9;
              pbVar10 = *(byte **)(pbVar9 + 8);
              pbVar25 = *(byte **)(pbVar9 + 0x18);
              bVar27 = pbVar9[0x28];
              pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                                 (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
              pbVar14 = pbVar10;
              if (bVar27 < 3) {
                if (bVar27 == 0) {
                  if (pbVar13[0x28] == 0) {
                    lVar19 = *(long *)pbVar13;
                    uVar11 = 0;
                    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                    func_0x000107c60118(pbVar12,lVar19,uVar11);
                    return (byte *)(ulong)((uint)pbVar12 & 1);
                  }
                  return (byte *)0x0;
                }
                if (bVar27 == 1) {
                  if (pbVar13[0x28] != 1) {
                    return (byte *)0x0;
                  }
                  pbVar15 = *(byte **)(pbVar13 + 8);
                  pbVar17 = *(byte **)(pbVar13 + 0x10);
                  lVar19 = *(long *)pbVar13;
                  uVar11 = 0;
                  func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                  func_0x000107c60118(pbVar12,lVar19,uVar11);
                  if (((ulong)pbVar12 & 1) == 0) {
                    return (byte *)0x0;
                  }
                  pbVar12 = pbVar10;
                  pbVar14 = pbVar26;
                  if ((pbVar10 == pbVar15) && (pbVar26 == pbVar17)) {
                    return (byte *)0x1;
                  }
                }
                else {
                  if (pbVar13[0x28] != 2) {
                    return (byte *)0x0;
                  }
                  pbVar15 = *(byte **)pbVar13;
                  pbVar17 = *(byte **)(pbVar13 + 8);
                  lVar19 = *(long *)(pbVar13 + 0x18);
                  if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
                    if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                      return (byte *)0x0;
                    }
                    if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
                    if (lVar19 == 0) {
                      return (byte *)0x0;
                    }
                    func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                    func_0x000107c61174(lVar19);
                    func_0x000107c61174();
                    pbVar10 = pbVar25;
                    func_0x000107c60118();
                    func_0x000107c61170(pbVar25);
                    func_0x000107c61170(lVar19);
                    pbVar25 = pbVar10;
joined_r0x000100e266a4:
                    if (((ulong)pbVar25 & 1) == 0) {
                      return (byte *)0x0;
                    }
                    return (byte *)0x1;
                  }
                }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)
                  PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
                )(pbVar12,pbVar14,pbVar15,pbVar17,0);
                return pbVar12;
              }
              lVar22 = *(long *)(pbVar9 + 0x20);
              if (bVar27 < 5) {
                if (bVar27 != 3) {
                  if (pbVar13[0x28] != 4) {
                    return (byte *)0x0;
                  }
                  pbVar15 = *(byte **)pbVar13;
                  pbVar17 = *(byte **)(pbVar13 + 8);
                  if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
                     (pbVar12 = pbVar26, pbVar14 = pbVar25, pbVar15 = *(byte **)(pbVar13 + 0x10),
                     pbVar17 = *(byte **)(pbVar13 + 0x18),
                     pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18))
                     ) {
                    return (byte *)0x1;
                  }
                  goto code_r0x000107c605b8;
                }
                if (pbVar13[0x28] != 3) {
                  return (byte *)0x0;
                }
                if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)(pbVar13 + 0x10);
                lVar19 = *(long *)(pbVar13 + 0x20);
                if (pbVar26 == (byte *)0x0) {
                  if (pbVar17 != (byte *)0x0) {
                    return (byte *)0x0;
                  }
                }
                else {
                  if (pbVar17 == (byte *)0x0) {
                    return (byte *)0x0;
                  }
                  pbVar15 = *(byte **)(pbVar13 + 8);
                  pbVar12 = pbVar10;
                  pbVar14 = pbVar26;
                  if ((pbVar10 != pbVar15) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
                }
                if (lVar22 != 0) {
                  if (lVar19 == 0) {
                    return (byte *)0x0;
                  }
                  if ((pbVar25 == *(byte **)(pbVar13 + 0x18)) && (lVar22 == lVar19)) {
                    return (byte *)0x1;
                  }
                  func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar13 + 0x18),lVar19,0);
                  goto joined_r0x000100e266a4;
                }
joined_r0x000100e26620:
                if (lVar19 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
              if (bVar27 != 5) {
                if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0)
                    && lVar22 == 0) && pbVar26 == (byte *)0x0) {
                  if (pbVar13[0x28] != 6) {
                    return (byte *)0x0;
                  }
                  lVar22 = *(long *)(pbVar13 + 0x20);
                  lVar19 = *(long *)(pbVar13 + 0x18);
                  bVar27 = pbVar13[8] | (byte)lVar19;
                  bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
                  bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
                  bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
                  bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
                  bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
                  bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
                  bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
                  bVar35 = pbVar13[0x10] | (byte)lVar22;
                  bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
                  bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
                  bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
                  bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
                  bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
                  bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
                  bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
                  auVar43[1] = bVar28;
                  auVar43[0] = bVar27;
                  auVar43[2] = bVar29;
                  auVar43[3] = bVar30;
                  auVar43[4] = bVar31;
                  auVar43[5] = bVar32;
                  auVar43[6] = bVar33;
                  auVar43[7] = bVar34;
                  auVar43[8] = bVar35;
                  auVar43[9] = bVar36;
                  auVar43[10] = bVar37;
                  auVar43[0xb] = bVar38;
                  auVar43[0xc] = bVar39;
                  auVar43[0xd] = bVar40;
                  auVar43[0xe] = bVar41;
                  auVar43[0xf] = bVar42;
                  auVar3[1] = bVar28;
                  auVar3[0] = bVar27;
                  auVar3[2] = bVar29;
                  auVar3[3] = bVar30;
                  auVar3[4] = bVar31;
                  auVar3[5] = bVar32;
                  auVar3[6] = bVar33;
                  auVar3[7] = bVar34;
                  auVar3[8] = bVar35;
                  auVar3[9] = bVar36;
                  auVar3[10] = bVar37;
                  auVar3[0xb] = bVar38;
                  auVar3[0xc] = bVar39;
                  auVar3[0xd] = bVar40;
                  auVar3[0xe] = bVar41;
                  auVar3[0xf] = bVar42;
                  auVar43 = NEON_ext(auVar43,auVar3,8,1);
                  if (CONCAT17(bVar34 | auVar43[7],
                               CONCAT16(bVar33 | auVar43[6],
                                        CONCAT15(bVar32 | auVar43[5],
                                                 CONCAT14(bVar31 | auVar43[4],
                                                          CONCAT13(bVar30 | auVar43[3],
                                                                   CONCAT12(bVar29 | auVar43[2],
                                                                            CONCAT11(bVar28 | 
                                                  auVar43[1],bVar27 | auVar43[0]))))))) == 0 &&
                      *(long *)pbVar13 == 0) {
                    return (byte *)0x1;
                  }
                  return (byte *)0x0;
                }
                if ((pbVar12 == (byte *)0x1) &&
                   (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0)
                    && lVar22 == 0)) {
                  if (pbVar13[0x28] != 6) {
                    return (byte *)0x0;
                  }
                  if (*(long *)pbVar13 != 1) {
                    return (byte *)0x0;
                  }
                }
                else {
                  if (pbVar13[0x28] != 6) {
                    return (byte *)0x0;
                  }
                  if (*(long *)pbVar13 != 2) {
                    return (byte *)0x0;
                  }
                }
                lVar22 = *(long *)(pbVar13 + 0x20);
                lVar19 = *(long *)(pbVar13 + 0x18);
                bVar27 = pbVar13[8] | (byte)lVar19;
                bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
                bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
                bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
                bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
                bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
                bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
                bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
                bVar35 = pbVar13[0x10] | (byte)lVar22;
                bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
                bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
                bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
                bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
                bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
                bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
                bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
                auVar1[1] = bVar28;
                auVar1[0] = bVar27;
                auVar1[2] = bVar29;
                auVar1[3] = bVar30;
                auVar1[4] = bVar31;
                auVar1[5] = bVar32;
                auVar1[6] = bVar33;
                auVar1[7] = bVar34;
                auVar1[8] = bVar35;
                auVar1[9] = bVar36;
                auVar1[10] = bVar37;
                auVar1[0xb] = bVar38;
                auVar1[0xc] = bVar39;
                auVar1[0xd] = bVar40;
                auVar1[0xe] = bVar41;
                auVar1[0xf] = bVar42;
                auVar2[1] = bVar28;
                auVar2[0] = bVar27;
                auVar2[2] = bVar29;
                auVar2[3] = bVar30;
                auVar2[4] = bVar31;
                auVar2[5] = bVar32;
                auVar2[6] = bVar33;
                auVar2[7] = bVar34;
                auVar2[8] = bVar35;
                auVar2[9] = bVar36;
                auVar2[10] = bVar37;
                auVar2[0xb] = bVar38;
                auVar2[0xc] = bVar39;
                auVar2[0xd] = bVar40;
                auVar2[0xe] = bVar41;
                auVar2[0xf] = bVar42;
                auVar43 = NEON_ext(auVar1,auVar2,8,1);
                lVar19 = CONCAT17(bVar34 | auVar43[7],
                                  CONCAT16(bVar33 | auVar43[6],
                                           CONCAT15(bVar32 | auVar43[5],
                                                    CONCAT14(bVar31 | auVar43[4],
                                                             CONCAT13(bVar30 | auVar43[3],
                                                                      CONCAT12(bVar29 | auVar43[2],
                                                                               CONCAT11(bVar28 | 
                                                  auVar43[1],bVar27 | auVar43[0])))))));
                goto joined_r0x000100e26620;
              }
              if (pbVar13[0x28] != 5) {
                return (byte *)0x0;
              }
              lVar19 = *(long *)(pbVar13 + 8);
              uVar16 = *(ulong *)(pbVar13 + 0x10);
              lVar22 = *(long *)pbVar13;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar22,uVar11);
              if (((ulong)pbVar12 & 1) == 0) {
                return (byte *)0x0;
              }
              unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
              unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
              unaff_x20 = *(ulong *)(puVar7 + -0xa0);
              unaff_x19 = *(byte **)(puVar7 + -0x98);
              unaff_x22 = *(ulong *)(puVar7 + -0xb0);
              unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
              unaff_x24 = *(byte **)(puVar7 + -0xc0);
              unaff_x23 = *(byte **)(puVar7 + -0xb8);
              puVar7 = puVar7 + -0x80;
            } while( true );
          }
        }
        else if (lVar19 == 2) goto LAB_103d40d94;
      }
      else if (lVar22 == 3) {
        if (lVar19 == 3) goto LAB_103d40d94;
      }
      else if (lVar22 == 4) {
        if (lVar19 == 4) goto LAB_103d40d94;
      }
      else if (lVar19 == 5) goto LAB_103d40d94;
    }
    else if (lVar19 == lVar22) goto LAB_103d40d94;
  }
  return (byte *)0x0;
}



/* Entry: 103d40df0; end: 103d41377;  */

uint FUN_103d40df0(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  
  if ((*param_1 != *param_2) || ((int)param_1[1] != (int)param_2[1])) {
    return 0;
  }
  lVar5 = param_1[5];
  uVar3 = param_1[4];
  lVar9 = param_1[7];
  uVar7 = param_1[6];
  lVar6 = param_2[5];
  uVar4 = param_2[4];
  lVar10 = param_2[7];
  uVar8 = param_2[6];
  uStack_a0 = uVar4;
  lStack_98 = lVar6;
  uStack_90 = uVar8;
  lStack_88 = lVar10;
  uStack_80 = uVar3;
  lStack_78 = lVar5;
  uStack_70 = uVar7;
  lStack_68 = lVar9;
  if (lVar5 == 0) {
    if (lVar6 == 0) {
      FUN_103d3e4c8(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      FUN_103d3e4c8(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
LAB_103d40f9c:
      func_0x000101597ae4(uVar3,lVar5,uVar7,lVar9);
      lVar5 = param_1[2];
      func_0x000100e25fcc(lVar5,param_1[3],param_2[2],param_2[3]);
      uVar1 = (uint)lVar5;
      goto LAB_103d41028;
    }
LAB_103d40f00:
    FUN_103d3e4c8(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
    FUN_103d3e4c8(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
    func_0x000101597ae4(uVar3,lVar5,uVar7,lVar9);
    uVar3 = uVar4;
    lVar5 = lVar6;
    uVar7 = uVar8;
    lVar9 = lVar10;
  }
  else {
    if (lVar6 == 0) goto LAB_103d40f00;
    if (((uVar3 == uVar4) && (lVar5 == lVar6)) ||
       (uVar2 = uVar3, func_0x000107c605b8(uVar3,lVar5,uVar4,lVar6,0), (uVar2 & 1) != 0)) {
      FUN_103d3e4c8(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      FUN_103d3e4c8(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      uVar2 = uVar7;
      func_0x000100e25fcc(uVar7,lVar9,uVar8,lVar10);
      func_0x000101597ae4(uVar4,lVar6,uVar8,lVar10);
      if ((uVar2 & 1) != 0) goto LAB_103d40f9c;
    }
    else {
      FUN_103d3e4c8(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      FUN_103d3e4c8(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      func_0x000101597ae4(uVar4,lVar6,uVar8,lVar10);
    }
  }
  func_0x000101597ae4(uVar3,lVar5,uVar7,lVar9);
  uVar1 = 0;
LAB_103d41028:
  return uVar1 & 1;
}



/* Entry: 103d41378; end: 103d4145f;  */

/* WARNING: Possible PIC construction at 0x000103d413a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d413ac) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d41378(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  pbVar12 = (byte *)*param_1;
  pbVar15 = (byte *)param_1[1];
  pbVar16 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar15,pbVar16,pbVar17,0);
    return pbVar12;
  }
  lVar19 = param_1[2];
  lVar22 = param_2[2];
  if (*(char *)(param_2 + 3) == '\x01') {
    if (lVar22 < 2) {
      if (lVar22 == 0) {
        if (lVar19 != 0) {
          return (byte *)0x0;
        }
      }
      else if (lVar19 != 1) {
        return (byte *)0x0;
      }
    }
    else if (lVar22 == 2) {
      if (lVar19 != 2) {
        return (byte *)0x0;
      }
    }
    else if (lVar19 != 3) {
      return (byte *)0x0;
    }
  }
  else if (lVar19 != lVar22) {
    return (byte *)0x0;
  }
  if (((*(byte *)((long)param_1 + 0x19) ^ *(byte *)((long)param_2 + 0x19)) & 1) == 0) {
    uVar13 = param_1[4];
    if (((uVar13 == param_2[4]) && (param_1[5] == param_2[5])) ||
       (func_0x000107c605b8(), (uVar13 & 1) != 0)) {
      pbVar10 = (byte *)param_1[6];
      pbVar26 = (byte *)param_1[7];
      lVar19 = param_2[6];
      uVar13 = param_2[7];
      puVar7 = (undefined1 *)register0x00000008;
      do {
        *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
        *(byte **)(puVar7 + -0x48) = unaff_x25;
        *(byte **)(puVar7 + -0x40) = unaff_x24;
        *(byte **)(puVar7 + -0x38) = unaff_x23;
        *(ulong *)(puVar7 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
        *(ulong *)(puVar7 + -0x20) = unaff_x20;
        *(byte **)(puVar7 + -0x18) = unaff_x19;
        *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar7 + -8) = unaff_x30;
        *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar4 = (uint)((ulong)pbVar26 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar13 >> 0x20);
        uVar23 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar14 = pbVar26;
        if ((ulong)pbVar26 >> 0x3e == 3) {
          uVar21 = 0;
          if (((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
             ((uVar13 >> 0x3e < 3 || ((uVar21 = 0, lVar19 != 0 || (uVar13 != 0xc000000000000000)))))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
          }
          else {
            iVar20 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar21 = (ulong)(iVar20 - iVar8);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar23 == 0) {
            uVar24 = uVar13 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar20 = (int)((ulong)lVar19 >> 0x20);
          if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar21 == (long)(iVar20 - (int)lVar19)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar21 = 0;
          if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar23 == 2) {
            uVar24 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
            if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar21 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar21 < 1) goto code_r0x000100e26128;
            if (uVar18 < 2) {
              if (uVar18 == 0) {
                puVar7[-0x70] = (char)pbVar10;
                puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                puVar7[-0x68] = (char)pbVar26;
                puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
                puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
                puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
                puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
                puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
                pbVar14 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar8;
              unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar6)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar26;
              if (pbVar10 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar10 = (byte *)0x0;
              }
              else {
                pbVar14 = pbVar10;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar14) {
                    pbVar14 = unaff_x23;
                  }
                  pbVar14 = pbVar14 + (long)pbVar10;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar14 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar14 = puVar7 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar22 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar14 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar22,(long)pbVar14)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar22 - (long)pbVar14);
              }
              unaff_x23 = unaff_x24 + -lVar22;
              if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar26;
              if (pbVar10 == (byte *)0x0) {
                pbVar14 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar14) {
                  pbVar14 = unaff_x23;
                }
                pbVar14 = pbVar14 + (long)pbVar10;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar19,uVar13);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar13;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar21 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
          return pbVar9;
        }
        func_0x000107c60e78();
        *(byte **)(puVar7 + -0xc0) = unaff_x24;
        *(byte **)(puVar7 + -0xb8) = unaff_x23;
        *(ulong *)(puVar7 + -0xb0) = unaff_x22;
        *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
        *(ulong *)(puVar7 + -0xa0) = unaff_x20;
        *(byte **)(puVar7 + -0x98) = unaff_x19;
        *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
        *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
        pbVar12 = *(byte **)pbVar9;
        pbVar10 = *(byte **)(pbVar9 + 8);
        pbVar25 = *(byte **)(pbVar9 + 0x18);
        bVar27 = pbVar9[0x28];
        pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar15 = pbVar10;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar14[0x28] == 0) {
              lVar19 = *(long *)pbVar14;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar19,uVar11);
              return (byte *)(ulong)((uint)pbVar12 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar14[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar14 + 8);
            pbVar17 = *(byte **)(pbVar14 + 0x10);
            lVar19 = *(long *)pbVar14;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar19,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar15 = pbVar26;
            if ((pbVar10 == pbVar16) && (pbVar26 == pbVar17)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar14[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar17 = *(byte **)(pbVar14 + 8);
            lVar19 = *(long *)(pbVar14 + 0x18);
            if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
              if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar25 != (byte *)0x0) {
                if (lVar19 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar19);
                func_0x000107c61174();
                pbVar12 = pbVar25;
                func_0x000107c60118();
                func_0x000107c61170(pbVar25);
                func_0x000107c61170(lVar19);
                pbVar25 = pbVar12;
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar19 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
          }
          goto code_r0x000107c605b8;
        }
        lVar22 = *(long *)(pbVar9 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar14[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar17 = *(byte **)(pbVar14 + 8);
            if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
               (pbVar12 = pbVar26, pbVar15 = pbVar25, pbVar16 = *(byte **)(pbVar14 + 0x10),
               pbVar17 = *(byte **)(pbVar14 + 0x18),
               pbVar26 == *(byte **)(pbVar14 + 0x10) && pbVar25 == *(byte **)(pbVar14 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar14[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar17 = *(byte **)(pbVar14 + 0x10);
          lVar19 = *(long *)(pbVar14 + 0x20);
          if (pbVar26 == (byte *)0x0) {
            if (pbVar17 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar17 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar14 + 8);
            pbVar12 = pbVar10;
            pbVar15 = pbVar26;
            if ((pbVar10 != pbVar16) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
          }
          if (lVar22 != 0) {
            if (lVar19 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar25 == *(byte **)(pbVar14 + 0x18)) && (lVar22 == lVar19)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar14 + 0x18),lVar19,0);
joined_r0x000100e266a4:
            if (((ulong)pbVar25 & 1) == 0) {
              return (byte *)0x0;
            }
            return (byte *)0x1;
          }
          goto joined_r0x000100e26620;
        }
        if (bVar27 != 5) {
          if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
              lVar22 == 0) && pbVar26 == (byte *)0x0) {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar22 = *(long *)(pbVar14 + 0x20);
            lVar19 = *(long *)(pbVar14 + 0x18);
            bVar27 = pbVar14[8] | (byte)lVar19;
            bVar28 = pbVar14[9] | (byte)((ulong)lVar19 >> 8);
            bVar29 = pbVar14[10] | (byte)((ulong)lVar19 >> 0x10);
            bVar30 = pbVar14[0xb] | (byte)((ulong)lVar19 >> 0x18);
            bVar31 = pbVar14[0xc] | (byte)((ulong)lVar19 >> 0x20);
            bVar32 = pbVar14[0xd] | (byte)((ulong)lVar19 >> 0x28);
            bVar33 = pbVar14[0xe] | (byte)((ulong)lVar19 >> 0x30);
            bVar34 = pbVar14[0xf] | (byte)((ulong)lVar19 >> 0x38);
            bVar35 = pbVar14[0x10] | (byte)lVar22;
            bVar36 = pbVar14[0x11] | (byte)((ulong)lVar22 >> 8);
            bVar37 = pbVar14[0x12] | (byte)((ulong)lVar22 >> 0x10);
            bVar38 = pbVar14[0x13] | (byte)((ulong)lVar22 >> 0x18);
            bVar39 = pbVar14[0x14] | (byte)((ulong)lVar22 >> 0x20);
            bVar40 = pbVar14[0x15] | (byte)((ulong)lVar22 >> 0x28);
            bVar41 = pbVar14[0x16] | (byte)((ulong)lVar22 >> 0x30);
            bVar42 = pbVar14[0x17] | (byte)((ulong)lVar22 >> 0x38);
            auVar43[1] = bVar28;
            auVar43[0] = bVar27;
            auVar43[2] = bVar29;
            auVar43[3] = bVar30;
            auVar43[4] = bVar31;
            auVar43[5] = bVar32;
            auVar43[6] = bVar33;
            auVar43[7] = bVar34;
            auVar43[8] = bVar35;
            auVar43[9] = bVar36;
            auVar43[10] = bVar37;
            auVar43[0xb] = bVar38;
            auVar43[0xc] = bVar39;
            auVar43[0xd] = bVar40;
            auVar43[0xe] = bVar41;
            auVar43[0xf] = bVar42;
            auVar3[1] = bVar28;
            auVar3[0] = bVar27;
            auVar3[2] = bVar29;
            auVar3[3] = bVar30;
            auVar3[4] = bVar31;
            auVar3[5] = bVar32;
            auVar3[6] = bVar33;
            auVar3[7] = bVar34;
            auVar3[8] = bVar35;
            auVar3[9] = bVar36;
            auVar3[10] = bVar37;
            auVar3[0xb] = bVar38;
            auVar3[0xc] = bVar39;
            auVar3[0xd] = bVar40;
            auVar3[0xe] = bVar41;
            auVar3[0xf] = bVar42;
            auVar43 = NEON_ext(auVar43,auVar3,8,1);
            if (CONCAT17(bVar34 | auVar43[7],
                         CONCAT16(bVar33 | auVar43[6],
                                  CONCAT15(bVar32 | auVar43[5],
                                           CONCAT14(bVar31 | auVar43[4],
                                                    CONCAT13(bVar30 | auVar43[3],
                                                             CONCAT12(bVar29 | auVar43[2],
                                                                      CONCAT11(bVar28 | auVar43[1],
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar14 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar12 == (byte *)0x1) &&
             (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
              lVar22 == 0)) {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar14 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar14 != 2) {
              return (byte *)0x0;
            }
          }
          lVar22 = *(long *)(pbVar14 + 0x20);
          lVar19 = *(long *)(pbVar14 + 0x18);
          bVar27 = pbVar14[8] | (byte)lVar19;
          bVar28 = pbVar14[9] | (byte)((ulong)lVar19 >> 8);
          bVar29 = pbVar14[10] | (byte)((ulong)lVar19 >> 0x10);
          bVar30 = pbVar14[0xb] | (byte)((ulong)lVar19 >> 0x18);
          bVar31 = pbVar14[0xc] | (byte)((ulong)lVar19 >> 0x20);
          bVar32 = pbVar14[0xd] | (byte)((ulong)lVar19 >> 0x28);
          bVar33 = pbVar14[0xe] | (byte)((ulong)lVar19 >> 0x30);
          bVar34 = pbVar14[0xf] | (byte)((ulong)lVar19 >> 0x38);
          bVar35 = pbVar14[0x10] | (byte)lVar22;
          bVar36 = pbVar14[0x11] | (byte)((ulong)lVar22 >> 8);
          bVar37 = pbVar14[0x12] | (byte)((ulong)lVar22 >> 0x10);
          bVar38 = pbVar14[0x13] | (byte)((ulong)lVar22 >> 0x18);
          bVar39 = pbVar14[0x14] | (byte)((ulong)lVar22 >> 0x20);
          bVar40 = pbVar14[0x15] | (byte)((ulong)lVar22 >> 0x28);
          bVar41 = pbVar14[0x16] | (byte)((ulong)lVar22 >> 0x30);
          bVar42 = pbVar14[0x17] | (byte)((ulong)lVar22 >> 0x38);
          auVar1[1] = bVar28;
          auVar1[0] = bVar27;
          auVar1[2] = bVar29;
          auVar1[3] = bVar30;
          auVar1[4] = bVar31;
          auVar1[5] = bVar32;
          auVar1[6] = bVar33;
          auVar1[7] = bVar34;
          auVar1[8] = bVar35;
          auVar1[9] = bVar36;
          auVar1[10] = bVar37;
          auVar1[0xb] = bVar38;
          auVar1[0xc] = bVar39;
          auVar1[0xd] = bVar40;
          auVar1[0xe] = bVar41;
          auVar1[0xf] = bVar42;
          auVar2[1] = bVar28;
          auVar2[0] = bVar27;
          auVar2[2] = bVar29;
          auVar2[3] = bVar30;
          auVar2[4] = bVar31;
          auVar2[5] = bVar32;
          auVar2[6] = bVar33;
          auVar2[7] = bVar34;
          auVar2[8] = bVar35;
          auVar2[9] = bVar36;
          auVar2[10] = bVar37;
          auVar2[0xb] = bVar38;
          auVar2[0xc] = bVar39;
          auVar2[0xd] = bVar40;
          auVar2[0xe] = bVar41;
          auVar2[0xf] = bVar42;
          auVar43 = NEON_ext(auVar1,auVar2,8,1);
          lVar19 = CONCAT17(bVar34 | auVar43[7],
                            CONCAT16(bVar33 | auVar43[6],
                                     CONCAT15(bVar32 | auVar43[5],
                                              CONCAT14(bVar31 | auVar43[4],
                                                       CONCAT13(bVar30 | auVar43[3],
                                                                CONCAT12(bVar29 | auVar43[2],
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar14[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar19 = *(long *)(pbVar14 + 8);
        uVar13 = *(ulong *)(pbVar14 + 0x10);
        lVar22 = *(long *)pbVar14;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar22,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
        unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
        unaff_x20 = *(ulong *)(puVar7 + -0xa0);
        unaff_x19 = *(byte **)(puVar7 + -0x98);
        unaff_x22 = *(ulong *)(puVar7 + -0xb0);
        unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
        unaff_x24 = *(byte **)(puVar7 + -0xc0);
        unaff_x23 = *(byte **)(puVar7 + -0xb8);
        puVar7 = puVar7 + -0x80;
      } while( true );
    }
  }
  return (byte *)0x0;
}



/* Entry: 103d41460; end: 103d416a7;  */

uint FUN_103d41460(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_310 [80];
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long lStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_1b8 = param_1[5];
  uStack_1c0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_1a8 = param_1[7];
  uStack_1b0 = param_1[6];
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_198 = param_1[9];
  uStack_1a0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  lStack_1c8 = param_1[3];
  uStack_1d0 = param_1[2];
  uStack_208 = param_2[5];
  uStack_210 = param_2[4];
  uStack_108 = param_2[7];
  uStack_110 = param_2[6];
  uStack_1f8 = param_2[7];
  uStack_200 = param_2[6];
  uStack_f8 = param_2[9];
  uStack_100 = param_2[8];
  uStack_1e8 = param_2[9];
  uStack_1f0 = param_2[8];
  uStack_e8 = param_2[0xb];
  uStack_f0 = param_2[10];
  uStack_128 = param_2[3];
  uStack_130 = param_2[2];
  uStack_118 = param_2[5];
  uStack_120 = param_2[4];
  lStack_218 = param_2[3];
  uStack_220 = param_2[2];
  uStack_1d8 = param_2[0xb];
  uStack_1e0 = param_2[10];
  uStack_188 = param_1[0xb];
  uStack_190 = param_1[10];
  uStack_180 = uStack_220;
  lStack_178 = lStack_218;
  uStack_170 = uStack_210;
  uStack_168 = uStack_208;
  uStack_160 = uStack_200;
  uStack_158 = uStack_1f8;
  uStack_150 = uStack_1f0;
  uStack_148 = uStack_1e8;
  uStack_140 = uStack_1e0;
  uStack_138 = uStack_1d8;
  if (lStack_1c8 == 0) {
    if (lStack_218 != 0) goto LAB_103d415a0;
    uStack_248 = param_1[7];
    uStack_250 = param_1[6];
    uStack_238 = param_1[9];
    uStack_240 = param_1[8];
    uStack_228 = param_1[0xb];
    uStack_230 = param_1[10];
    lStack_268 = param_1[3];
    uStack_270 = param_1[2];
    uStack_258 = param_1[5];
    uStack_260 = param_1[4];
    FUN_103d3e4c8(&uStack_e0,&uStack_90,0x113004ba8,&UNK_10dc80c38);
    FUN_103d3e4c8(&uStack_130,&uStack_90,0x113004ba8,&UNK_10dc80c38);
    func_0x000103d5122c(&uStack_270,0x113004ba8,&UNK_10dc80c38);
  }
  else {
    if (lStack_218 == 0) {
LAB_103d415a0:
      uStack_270 = uStack_1d0;
      lStack_268 = lStack_1c8;
      uStack_260 = uStack_1c0;
      uStack_258 = uStack_1b8;
      uStack_250 = uStack_1b0;
      uStack_248 = uStack_1a8;
      uStack_240 = uStack_1a0;
      uStack_238 = uStack_198;
      uStack_230 = uStack_190;
      uStack_228 = uStack_188;
      FUN_103d3e4c8(&uStack_e0,&uStack_90,0x113004ba8,&UNK_10dc80c38);
      FUN_103d3e4c8(&uStack_130,&uStack_90,0x113004ba8,&UNK_10dc80c38);
      func_0x000103d5122c(&uStack_270,0x113004bb0,&UNK_10dc80c40);
      uVar1 = 0;
      goto LAB_103d4168c;
    }
    uStack_298 = param_2[7];
    uStack_2a0 = param_2[6];
    uStack_288 = param_2[9];
    uStack_290 = param_2[8];
    uStack_278 = param_2[0xb];
    uStack_280 = param_2[10];
    uStack_2b8 = param_2[3];
    uStack_2c0 = param_2[2];
    uStack_2a8 = param_2[5];
    uStack_2b0 = param_2[4];
    uStack_88 = param_1[3];
    uStack_90 = param_1[2];
    uStack_78 = param_1[5];
    uStack_80 = param_1[4];
    uStack_68 = param_1[7];
    uStack_70 = param_1[6];
    uStack_58 = param_1[9];
    uStack_60 = param_1[8];
    uStack_48 = param_1[0xb];
    uStack_50 = param_1[10];
    uStack_270 = uStack_2c0;
    lStack_268 = uStack_2b8;
    uStack_260 = uStack_2b0;
    uStack_258 = uStack_2a8;
    uStack_250 = uStack_2a0;
    uStack_248 = uStack_298;
    uStack_240 = uStack_290;
    uStack_238 = uStack_288;
    uStack_230 = uStack_280;
    uStack_228 = uStack_278;
    FUN_103d3e4c8(&uStack_e0,auStack_310,0x113004ba8,&UNK_10dc80c38);
    FUN_103d3e4c8(&uStack_130,auStack_310,0x113004ba8,&UNK_10dc80c38);
    puVar2 = &uStack_90;
    func_0x000103d3d554(puVar2,&uStack_270);
    func_0x000103d5122c(&uStack_2c0,0x113004ba8,&UNK_10dc80c38);
    func_0x000103d5122c(&uStack_1d0,0x113004ba8,&UNK_10dc80c38);
    if (((ulong)puVar2 & 1) == 0) {
      uVar1 = 0;
      goto LAB_103d4168c;
    }
  }
  uVar3 = *param_1;
  func_0x000100e25fcc(uVar3,param_1[1],*param_2,param_2[1]);
  uVar1 = (uint)uVar3;
LAB_103d4168c:
  return uVar1 & 1;
}



/* Entry: 103d416a8; end: 103d4178f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d416a8(long *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  lVar19 = *param_1;
  lVar22 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar22 < 4) {
      if (lVar22 < 2) {
        if (lVar22 == 0) {
          if (lVar19 != 0) {
            return (byte *)0x0;
          }
        }
        else if (lVar19 != 1) {
          return (byte *)0x0;
        }
      }
      else if (lVar22 == 2) {
        if (lVar19 != 2) {
          return (byte *)0x0;
        }
      }
      else if (lVar19 != 3) {
        return (byte *)0x0;
      }
    }
    else if (lVar22 < 6) {
      if (lVar22 == 4) {
        if (lVar19 != 4) {
          return (byte *)0x0;
        }
      }
      else if (lVar19 != 5) {
        return (byte *)0x0;
      }
    }
    else if (lVar22 == 6) {
      if (lVar19 != 6) {
        return (byte *)0x0;
      }
    }
    else if (lVar22 == 7) {
      if (lVar19 != 7) {
        return (byte *)0x0;
      }
    }
    else if (lVar19 != 8) {
      return (byte *)0x0;
    }
  }
  else if (lVar19 != lVar22) {
    return (byte *)0x0;
  }
  if ((double)param_1[2] != (double)param_2[2]) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[3];
  pbVar26 = (byte *)param_1[4];
  lVar19 = param_2[3];
  uVar16 = param_2[4];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar26 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar23 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar26;
    if ((ulong)pbVar26 >> 0x3e == 3) {
      uVar21 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar21 = 0, lVar19 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
      }
      else {
        iVar20 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar21 = (ulong)(iVar20 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar23 == 0) {
        uVar24 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar20 = (int)((ulong)lVar19 >> 0x20);
      if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar21 == (long)(iVar20 - (int)lVar19)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar21 = 0;
      if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar23 == 2) {
        uVar24 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
        if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar21 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar21 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar26;
            puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
            pbVar13 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar26;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar22 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar22,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar22 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar22;
          if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar26;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar19,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar21 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar25 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar19 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar19,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar19 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar19,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar26;
        if ((pbVar10 == pbVar15) && (pbVar26 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar19 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar19 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar19);
          func_0x000107c61174();
          pbVar10 = pbVar25;
          func_0x000107c60118();
          func_0x000107c61170(pbVar25);
          func_0x000107c61170(lVar19);
          pbVar25 = pbVar10;
joined_r0x000100e266a4:
          if (((ulong)pbVar25 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
    }
    lVar22 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar26, pbVar14 = pbVar25, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar19 = *(long *)(pbVar13 + 0x20);
      if (pbVar26 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar10;
        pbVar14 = pbVar26;
        if ((pbVar10 != pbVar15) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar22 != 0) {
        if (lVar19 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar25 == *(byte **)(pbVar13 + 0x18)) && (lVar22 == lVar19)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar13 + 0x18),lVar19,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar19 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar22 == 0) && pbVar26 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar22 = *(long *)(pbVar13 + 0x20);
        lVar19 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar19;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar22;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
          lVar22 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar22 = *(long *)(pbVar13 + 0x20);
      lVar19 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar19;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar22;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar19 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar19 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar22 = *(long *)pbVar13;
    uVar11 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar22,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 103d41790; end: 103d4197f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d41790(byte *param_1,byte *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  if (((*param_1 ^ *param_2) & 1) == 0) {
    lVar18 = *(long *)(param_1 + 8);
    lVar22 = *(long *)(param_2 + 8);
    if (param_2[0x10] == 1) {
      if (lVar22 < 3) {
        if (lVar22 == 0) {
          if (lVar18 != 0) {
            return (byte *)0x0;
          }
        }
        else if (lVar22 == 1) {
          if (lVar18 != 1) {
            return (byte *)0x0;
          }
        }
        else if (lVar18 != 2) {
          return (byte *)0x0;
        }
      }
      else if (lVar22 == 3) {
        if (lVar18 != 3) {
          return (byte *)0x0;
        }
      }
      else if (lVar22 == 4) {
        if (lVar18 != 4) {
          return (byte *)0x0;
        }
      }
      else if (lVar18 != 5) {
        return (byte *)0x0;
      }
    }
    else if (lVar18 != lVar22) {
      return (byte *)0x0;
    }
    lVar18 = *(long *)(param_1 + 0x18);
    lVar22 = *(long *)(param_2 + 0x18);
    if (param_2[0x20] == 1) {
      if (lVar22 < 2) {
        if (lVar22 == 0) {
          if (lVar18 != 0) {
            return (byte *)0x0;
          }
        }
        else if (lVar18 != 1) {
          return (byte *)0x0;
        }
      }
      else if (lVar22 == 2) {
        if (lVar18 != 2) {
          return (byte *)0x0;
        }
      }
      else if (lVar22 == 3) {
        if (lVar18 != 3) {
          return (byte *)0x0;
        }
      }
      else if (lVar18 != 4) {
        return (byte *)0x0;
      }
    }
    else if (lVar18 != lVar22) {
      return (byte *)0x0;
    }
    uVar19 = *(ulong *)(param_1 + 0x28);
    FUN_103d3b700(uVar19,*(undefined8 *)(param_2 + 0x28));
    if ((uVar19 & 1) != 0) {
      uVar19 = *(ulong *)(param_1 + 0x30);
      FUN_103d3b700(uVar19,*(undefined8 *)(param_2 + 0x30));
      if ((uVar19 & 1) != 0) {
        pbVar10 = *(byte **)(param_1 + 0x38);
        pbVar26 = *(byte **)(param_1 + 0x40);
        lVar18 = *(long *)(param_2 + 0x38);
        uVar19 = *(ulong *)(param_2 + 0x40);
        puVar7 = (undefined1 *)register0x00000008;
        do {
          *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
          *(byte **)(puVar7 + -0x48) = unaff_x25;
          *(byte **)(puVar7 + -0x40) = unaff_x24;
          *(byte **)(puVar7 + -0x38) = unaff_x23;
          *(ulong *)(puVar7 + -0x30) = unaff_x22;
          *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
          *(ulong *)(puVar7 + -0x20) = unaff_x20;
          *(byte **)(puVar7 + -0x18) = unaff_x19;
          *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
          *(undefined8 *)(puVar7 + -8) = unaff_x30;
          *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          uVar4 = (uint)((ulong)pbVar26 >> 0x20);
          uVar17 = uVar4 >> 0x1e;
          uVar5 = (uint)(uVar19 >> 0x20);
          uVar23 = uVar5 >> 0x1e;
          iVar8 = (int)pbVar10;
          pbVar13 = pbVar26;
          if ((ulong)pbVar26 >> 0x3e == 3) {
            uVar21 = 0;
            if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
                (uVar19 >> 0x3e < 3)) ||
               ((uVar21 = 0, lVar18 != 0 || (uVar19 != 0xc000000000000000))))
            goto joined_r0x000100e26170;
code_r0x000100e26128:
            pbVar9 = (byte *)0x1;
          }
          else if (uVar4 >> 0x1e < 2) {
            if (uVar17 == 0) {
              uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
            }
            else {
              iVar20 = (int)((ulong)pbVar10 >> 0x20);
              if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                (*pcVar6)();
              }
              uVar21 = (ulong)(iVar20 - iVar8);
            }
joined_r0x000100e26170:
            if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
            if (uVar23 == 0) {
              uVar24 = uVar19 >> 0x30 & 0xff;
              goto code_r0x000100e2608c;
            }
            iVar20 = (int)((ulong)lVar18 >> 0x20);
            if (SBORROW4(iVar20,(int)lVar18)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar6)();
            }
            if (uVar21 == (long)(iVar20 - (int)lVar18)) goto code_r0x000100e26094;
code_r0x000100e26154:
            pbVar9 = (byte *)0x0;
          }
          else {
            if (uVar17 == 2) {
              uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
              if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                (*pcVar6)();
              }
              goto joined_r0x000100e26170;
            }
            uVar21 = 0;
            if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
            if (uVar23 == 2) {
              uVar24 = *(long *)(lVar18 + 0x18) - *(long *)(lVar18 + 0x10);
              if (SBORROW8(*(long *)(lVar18 + 0x18),*(long *)(lVar18 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar6)();
              }
code_r0x000100e2608c:
              if (uVar21 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
              if ((long)uVar21 < 1) goto code_r0x000100e26128;
              if (uVar17 < 2) {
                if (uVar17 == 0) {
                  puVar7[-0x70] = (char)pbVar10;
                  puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                  puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                  puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                  puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                  puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                  puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                  puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                  puVar7[-0x68] = (char)pbVar26;
                  puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
                  puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
                  puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
                  puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
                  puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
                  pbVar13 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                  unaff_x21 = 0;
                  func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                  pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                  goto code_r0x000100e262b0;
                }
                unaff_x25 = (byte *)(long)iVar8;
                unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
                if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                  (*pcVar6)();
                }
                func_0x000107c5ec30();
                unaff_x24 = pbVar26;
                if (pbVar10 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  pbVar10 = (byte *)0x0;
                }
                else {
                  pbVar13 = pbVar10;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                    (*pcVar6)();
                  }
                  pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    if ((long)unaff_x23 <= (long)pbVar13) {
                      pbVar13 = unaff_x23;
                    }
                    pbVar13 = pbVar13 + (long)pbVar10;
                    goto code_r0x000100e262a4;
                  }
                }
                pbVar13 = (byte *)0x0;
              }
              else {
                if (uVar17 != 2) {
                  *(undefined8 *)(puVar7 + -0x6a) = 0;
                  *(undefined8 *)(puVar7 + -0x70) = 0;
                  pbVar13 = puVar7 + -0x70;
                  goto code_r0x000100e26260;
                }
                lVar22 = *(long *)(pbVar10 + 0x10);
                unaff_x24 = *(byte **)(pbVar10 + 0x18);
                func_0x000107c5ec30();
                pbVar13 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar22,(long)pbVar13)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar6)();
                  }
                  pbVar10 = pbVar10 + (lVar22 - (long)pbVar13);
                }
                unaff_x23 = unaff_x24 + -lVar22;
                if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar6)();
                }
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                unaff_x25 = pbVar26;
                if (pbVar10 == (byte *)0x0) {
                  pbVar13 = (byte *)0x0;
                }
                else {
                  if ((long)unaff_x23 <= (long)pbVar13) {
                    pbVar13 = unaff_x23;
                  }
                  pbVar13 = pbVar13 + (long)pbVar10;
                }
              }
code_r0x000100e262a4:
              unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar18,uVar19);
              pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
              unaff_x22 = uVar19;
            }
            else {
              pbVar9 = (byte *)(ulong)(uVar21 == 0);
            }
          }
code_r0x000100e262b0:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
            return pbVar9;
          }
          func_0x000107c60e78();
          *(byte **)(puVar7 + -0xc0) = unaff_x24;
          *(byte **)(puVar7 + -0xb8) = unaff_x23;
          *(ulong *)(puVar7 + -0xb0) = unaff_x22;
          *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
          *(ulong *)(puVar7 + -0xa0) = unaff_x20;
          *(byte **)(puVar7 + -0x98) = unaff_x19;
          *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
          *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
          pbVar12 = *(byte **)pbVar9;
          pbVar10 = *(byte **)(pbVar9 + 8);
          pbVar25 = *(byte **)(pbVar9 + 0x18);
          bVar27 = pbVar9[0x28];
          pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                             (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
          pbVar14 = pbVar10;
          if (bVar27 < 3) {
            if (bVar27 == 0) {
              if (pbVar13[0x28] == 0) {
                lVar18 = *(long *)pbVar13;
                uVar11 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,lVar18,uVar11);
                return (byte *)(ulong)((uint)pbVar12 & 1);
              }
              return (byte *)0x0;
            }
            if (bVar27 == 1) {
              if (pbVar13[0x28] != 1) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)(pbVar13 + 8);
              pbVar16 = *(byte **)(pbVar13 + 0x10);
              lVar18 = *(long *)pbVar13;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar18,uVar11);
              if (((ulong)pbVar12 & 1) == 0) {
                return (byte *)0x0;
              }
              pbVar12 = pbVar10;
              pbVar14 = pbVar26;
              if ((pbVar10 == pbVar15) && (pbVar26 == pbVar16)) {
                return (byte *)0x1;
              }
            }
            else {
              if (pbVar13[0x28] != 2) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)pbVar13;
              pbVar16 = *(byte **)(pbVar13 + 8);
              lVar18 = *(long *)(pbVar13 + 0x18);
              if ((pbVar12 == pbVar15) && (pbVar10 == pbVar16)) {
                if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                  return (byte *)0x0;
                }
                if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
                if (lVar18 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar18);
                func_0x000107c61174();
                pbVar10 = pbVar25;
                func_0x000107c60118();
                func_0x000107c61170(pbVar25);
                func_0x000107c61170(lVar18);
                pbVar25 = pbVar10;
joined_r0x000100e266a4:
                if (((ulong)pbVar25 & 1) == 0) {
                  return (byte *)0x0;
                }
                return (byte *)0x1;
              }
            }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)
              PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
            )(pbVar12,pbVar14,pbVar15,pbVar16,0);
            return pbVar12;
          }
          lVar22 = *(long *)(pbVar9 + 0x20);
          if (bVar27 < 5) {
            if (bVar27 != 3) {
              if (pbVar13[0x28] != 4) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)pbVar13;
              pbVar16 = *(byte **)(pbVar13 + 8);
              if (((pbVar12 == pbVar15) && (pbVar10 == pbVar16)) &&
                 (pbVar12 = pbVar26, pbVar14 = pbVar25, pbVar15 = *(byte **)(pbVar13 + 0x10),
                 pbVar16 = *(byte **)(pbVar13 + 0x18),
                 pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18))) {
                return (byte *)0x1;
              }
              goto code_r0x000107c605b8;
            }
            if (pbVar13[0x28] != 3) {
              return (byte *)0x0;
            }
            if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar13 + 0x10);
            lVar18 = *(long *)(pbVar13 + 0x20);
            if (pbVar26 == (byte *)0x0) {
              if (pbVar16 != (byte *)0x0) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar16 == (byte *)0x0) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)(pbVar13 + 8);
              pbVar12 = pbVar10;
              pbVar14 = pbVar26;
              if ((pbVar10 != pbVar15) || (pbVar26 != pbVar16)) goto code_r0x000107c605b8;
            }
            if (lVar22 != 0) {
              if (lVar18 == 0) {
                return (byte *)0x0;
              }
              if ((pbVar25 == *(byte **)(pbVar13 + 0x18)) && (lVar22 == lVar18)) {
                return (byte *)0x1;
              }
              func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar13 + 0x18),lVar18,0);
              goto joined_r0x000100e266a4;
            }
joined_r0x000100e26620:
            if (lVar18 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if (bVar27 != 5) {
            if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
                lVar22 == 0) && pbVar26 == (byte *)0x0) {
              if (pbVar13[0x28] != 6) {
                return (byte *)0x0;
              }
              lVar22 = *(long *)(pbVar13 + 0x20);
              lVar18 = *(long *)(pbVar13 + 0x18);
              bVar27 = pbVar13[8] | (byte)lVar18;
              bVar28 = pbVar13[9] | (byte)((ulong)lVar18 >> 8);
              bVar29 = pbVar13[10] | (byte)((ulong)lVar18 >> 0x10);
              bVar30 = pbVar13[0xb] | (byte)((ulong)lVar18 >> 0x18);
              bVar31 = pbVar13[0xc] | (byte)((ulong)lVar18 >> 0x20);
              bVar32 = pbVar13[0xd] | (byte)((ulong)lVar18 >> 0x28);
              bVar33 = pbVar13[0xe] | (byte)((ulong)lVar18 >> 0x30);
              bVar34 = pbVar13[0xf] | (byte)((ulong)lVar18 >> 0x38);
              bVar35 = pbVar13[0x10] | (byte)lVar22;
              bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
              bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
              bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
              bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
              bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
              bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
              bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
              auVar43[1] = bVar28;
              auVar43[0] = bVar27;
              auVar43[2] = bVar29;
              auVar43[3] = bVar30;
              auVar43[4] = bVar31;
              auVar43[5] = bVar32;
              auVar43[6] = bVar33;
              auVar43[7] = bVar34;
              auVar43[8] = bVar35;
              auVar43[9] = bVar36;
              auVar43[10] = bVar37;
              auVar43[0xb] = bVar38;
              auVar43[0xc] = bVar39;
              auVar43[0xd] = bVar40;
              auVar43[0xe] = bVar41;
              auVar43[0xf] = bVar42;
              auVar3[1] = bVar28;
              auVar3[0] = bVar27;
              auVar3[2] = bVar29;
              auVar3[3] = bVar30;
              auVar3[4] = bVar31;
              auVar3[5] = bVar32;
              auVar3[6] = bVar33;
              auVar3[7] = bVar34;
              auVar3[8] = bVar35;
              auVar3[9] = bVar36;
              auVar3[10] = bVar37;
              auVar3[0xb] = bVar38;
              auVar3[0xc] = bVar39;
              auVar3[0xd] = bVar40;
              auVar3[0xe] = bVar41;
              auVar3[0xf] = bVar42;
              auVar43 = NEON_ext(auVar43,auVar3,8,1);
              if (CONCAT17(bVar34 | auVar43[7],
                           CONCAT16(bVar33 | auVar43[6],
                                    CONCAT15(bVar32 | auVar43[5],
                                             CONCAT14(bVar31 | auVar43[4],
                                                      CONCAT13(bVar30 | auVar43[3],
                                                               CONCAT12(bVar29 | auVar43[2],
                                                                        CONCAT11(bVar28 | auVar43[1]
                                                                                 ,bVar27 | auVar43[0
                                                  ]))))))) == 0 && *(long *)pbVar13 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if ((pbVar12 == (byte *)0x1) &&
               (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
                lVar22 == 0)) {
              if (pbVar13[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar13 != 1) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar13[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar13 != 2) {
                return (byte *)0x0;
              }
            }
            lVar22 = *(long *)(pbVar13 + 0x20);
            lVar18 = *(long *)(pbVar13 + 0x18);
            bVar27 = pbVar13[8] | (byte)lVar18;
            bVar28 = pbVar13[9] | (byte)((ulong)lVar18 >> 8);
            bVar29 = pbVar13[10] | (byte)((ulong)lVar18 >> 0x10);
            bVar30 = pbVar13[0xb] | (byte)((ulong)lVar18 >> 0x18);
            bVar31 = pbVar13[0xc] | (byte)((ulong)lVar18 >> 0x20);
            bVar32 = pbVar13[0xd] | (byte)((ulong)lVar18 >> 0x28);
            bVar33 = pbVar13[0xe] | (byte)((ulong)lVar18 >> 0x30);
            bVar34 = pbVar13[0xf] | (byte)((ulong)lVar18 >> 0x38);
            bVar35 = pbVar13[0x10] | (byte)lVar22;
            bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
            bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
            bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
            bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
            bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
            bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
            bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
            auVar1[1] = bVar28;
            auVar1[0] = bVar27;
            auVar1[2] = bVar29;
            auVar1[3] = bVar30;
            auVar1[4] = bVar31;
            auVar1[5] = bVar32;
            auVar1[6] = bVar33;
            auVar1[7] = bVar34;
            auVar1[8] = bVar35;
            auVar1[9] = bVar36;
            auVar1[10] = bVar37;
            auVar1[0xb] = bVar38;
            auVar1[0xc] = bVar39;
            auVar1[0xd] = bVar40;
            auVar1[0xe] = bVar41;
            auVar1[0xf] = bVar42;
            auVar2[1] = bVar28;
            auVar2[0] = bVar27;
            auVar2[2] = bVar29;
            auVar2[3] = bVar30;
            auVar2[4] = bVar31;
            auVar2[5] = bVar32;
            auVar2[6] = bVar33;
            auVar2[7] = bVar34;
            auVar2[8] = bVar35;
            auVar2[9] = bVar36;
            auVar2[10] = bVar37;
            auVar2[0xb] = bVar38;
            auVar2[0xc] = bVar39;
            auVar2[0xd] = bVar40;
            auVar2[0xe] = bVar41;
            auVar2[0xf] = bVar42;
            auVar43 = NEON_ext(auVar1,auVar2,8,1);
            lVar18 = CONCAT17(bVar34 | auVar43[7],
                              CONCAT16(bVar33 | auVar43[6],
                                       CONCAT15(bVar32 | auVar43[5],
                                                CONCAT14(bVar31 | auVar43[4],
                                                         CONCAT13(bVar30 | auVar43[3],
                                                                  CONCAT12(bVar29 | auVar43[2],
                                                                           CONCAT11(bVar28 | auVar43
                                                  [1],bVar27 | auVar43[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar13[0x28] != 5) {
            return (byte *)0x0;
          }
          lVar18 = *(long *)(pbVar13 + 8);
          uVar19 = *(ulong *)(pbVar13 + 0x10);
          lVar22 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar22,uVar11);
          if (((ulong)pbVar12 & 1) == 0) {
            return (byte *)0x0;
          }
          unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
          unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
          unaff_x20 = *(ulong *)(puVar7 + -0xa0);
          unaff_x19 = *(byte **)(puVar7 + -0x98);
          unaff_x22 = *(ulong *)(puVar7 + -0xb0);
          unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
          unaff_x24 = *(byte **)(puVar7 + -0xc0);
          unaff_x23 = *(byte **)(puVar7 + -0xb8);
          puVar7 = puVar7 + -0x80;
        } while( true );
      }
    }
  }
  return (byte *)0x0;
}



/* Entry: 103d41980; end: 103d41a3f;  */

void FUN_103d41980(void)

{
  undefined *puVar1;
  
  if (puRam0000000113004ea8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc82130;
  func_0x000107c61520(&UNK_10dc82130,&UNK_110704788);
  puRam0000000113004ea8 = puVar1;
  return;
}



/* Entry: 103d41a40; end: 103d41adf;  */

/* WARNING: Possible PIC construction at 0x000103d41a70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d41ab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d41ab8) */
/* WARNING: Removing unreachable block (ram,0x000103d41a74) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d41a40(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  pbVar13 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  pbVar17 = (byte *)*param_2;
  pbVar12 = (byte *)param_2[1];
  if (pbVar13 == pbVar17 && pbVar16 == pbVar12) {
    uVar14 = param_1[2];
    if ((uVar14 != param_2[2] || param_1[3] != param_2[3]) &&
       (func_0x000107c605b8(), (uVar14 & 1) == 0)) {
      return (byte *)0x0;
    }
    pbVar13 = (byte *)param_1[4];
    pbVar16 = (byte *)param_1[5];
    pbVar17 = (byte *)param_2[4];
    pbVar12 = (byte *)param_2[5];
    if ((pbVar13 == pbVar17) && (pbVar16 == pbVar12)) {
      pbVar10 = (byte *)param_1[6];
      pbVar25 = (byte *)param_1[7];
      lVar24 = param_2[6];
      uVar14 = param_2[7];
      puVar7 = (undefined1 *)register0x00000008;
      do {
        *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
        *(byte **)(puVar7 + -0x48) = unaff_x25;
        *(byte **)(puVar7 + -0x40) = unaff_x24;
        *(byte **)(puVar7 + -0x38) = unaff_x23;
        *(ulong *)(puVar7 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
        *(ulong *)(puVar7 + -0x20) = unaff_x20;
        *(byte **)(puVar7 + -0x18) = unaff_x19;
        *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar7 + -8) = unaff_x30;
        *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar4 = (uint)((ulong)pbVar25 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar14 >> 0x20);
        uVar21 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar15 = pbVar25;
        if ((ulong)pbVar25 >> 0x3e == 3) {
          uVar20 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
              (uVar14 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar14 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
          }
          else {
            iVar19 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar20 = (ulong)(iVar19 - iVar8);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar21 == 0) {
            uVar22 = uVar14 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar19 = (int)((ulong)lVar24 >> 0x20);
          if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar20 = 0;
          if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar21 == 2) {
            uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
            if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar20 < 1) goto code_r0x000100e26128;
            if (uVar18 < 2) {
              if (uVar18 == 0) {
                puVar7[-0x70] = (char)pbVar10;
                puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                puVar7[-0x68] = (char)pbVar25;
                puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
                puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
                puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
                puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
                puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
                pbVar15 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar8;
              unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar6)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar25;
              if (pbVar10 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar10 = (byte *)0x0;
              }
              else {
                pbVar15 = pbVar10;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar15)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar15);
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar15) {
                    pbVar15 = unaff_x23;
                  }
                  pbVar15 = pbVar15 + (long)pbVar10;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar15 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar15 = puVar7 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar26 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar15 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar26,(long)pbVar15)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar26 - (long)pbVar15);
              }
              unaff_x23 = unaff_x24 + -lVar26;
              if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar25;
              if (pbVar10 == (byte *)0x0) {
                pbVar15 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar15) {
                  pbVar15 = unaff_x23;
                }
                pbVar15 = pbVar15 + (long)pbVar10;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar15,lVar24,uVar14);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar14;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar20 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
          return pbVar9;
        }
        func_0x000107c60e78();
        *(byte **)(puVar7 + -0xc0) = unaff_x24;
        *(byte **)(puVar7 + -0xb8) = unaff_x23;
        *(ulong *)(puVar7 + -0xb0) = unaff_x22;
        *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
        *(ulong *)(puVar7 + -0xa0) = unaff_x20;
        *(byte **)(puVar7 + -0x98) = unaff_x19;
        *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
        *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
        pbVar13 = *(byte **)pbVar9;
        pbVar10 = *(byte **)(pbVar9 + 8);
        pbVar23 = *(byte **)(pbVar9 + 0x18);
        bVar27 = pbVar9[0x28];
        pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar16 = pbVar10;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar15[0x28] == 0) {
              lVar24 = *(long *)pbVar15;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar13,lVar24,uVar11);
              return (byte *)(ulong)((uint)pbVar13 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar15[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)(pbVar15 + 8);
            pbVar12 = *(byte **)(pbVar15 + 0x10);
            lVar24 = *(long *)pbVar15;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar13,lVar24,uVar11);
            if (((ulong)pbVar13 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar13 = pbVar10;
            pbVar16 = pbVar25;
            if ((pbVar10 == pbVar17) && (pbVar25 == pbVar12)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar15[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)pbVar15;
            pbVar12 = *(byte **)(pbVar15 + 8);
            lVar24 = *(long *)(pbVar15 + 0x18);
            if ((pbVar13 == pbVar17) && (pbVar10 == pbVar12)) {
              if (((pbVar9[0x10] ^ pbVar15[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar23 != (byte *)0x0) {
                if (lVar24 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar24);
                func_0x000107c61174();
                pbVar12 = pbVar23;
                func_0x000107c60118();
                func_0x000107c61170(pbVar23);
                func_0x000107c61170(lVar24);
                pbVar23 = pbVar12;
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar24 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
          }
          break;
        }
        lVar26 = *(long *)(pbVar9 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar15[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)pbVar15;
            pbVar12 = *(byte **)(pbVar15 + 8);
            if (((pbVar13 == pbVar17) && (pbVar10 == pbVar12)) &&
               (pbVar13 = pbVar25, pbVar16 = pbVar23, pbVar17 = *(byte **)(pbVar15 + 0x10),
               pbVar12 = *(byte **)(pbVar15 + 0x18),
               pbVar25 == *(byte **)(pbVar15 + 0x10) && pbVar23 == *(byte **)(pbVar15 + 0x18))) {
              return (byte *)0x1;
            }
            break;
          }
          if (pbVar15[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar15 != ((uint)pbVar13 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar12 = *(byte **)(pbVar15 + 0x10);
          lVar24 = *(long *)(pbVar15 + 0x20);
          if (pbVar25 == (byte *)0x0) {
            if (pbVar12 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar12 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar17 = *(byte **)(pbVar15 + 8);
            pbVar13 = pbVar10;
            pbVar16 = pbVar25;
            if ((pbVar10 != pbVar17) || (pbVar25 != pbVar12)) break;
          }
          if (lVar26 != 0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar23 == *(byte **)(pbVar15 + 0x18)) && (lVar26 == lVar24)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar15 + 0x18),lVar24,0);
joined_r0x000100e266a4:
            if (((ulong)pbVar23 & 1) == 0) {
              return (byte *)0x0;
            }
            return (byte *)0x1;
          }
          goto joined_r0x000100e26620;
        }
        if (bVar27 != 5) {
          if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
              lVar26 == 0) && pbVar25 == (byte *)0x0) {
            if (pbVar15[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar26 = *(long *)(pbVar15 + 0x20);
            lVar24 = *(long *)(pbVar15 + 0x18);
            bVar27 = pbVar15[8] | (byte)lVar24;
            bVar28 = pbVar15[9] | (byte)((ulong)lVar24 >> 8);
            bVar29 = pbVar15[10] | (byte)((ulong)lVar24 >> 0x10);
            bVar30 = pbVar15[0xb] | (byte)((ulong)lVar24 >> 0x18);
            bVar31 = pbVar15[0xc] | (byte)((ulong)lVar24 >> 0x20);
            bVar32 = pbVar15[0xd] | (byte)((ulong)lVar24 >> 0x28);
            bVar33 = pbVar15[0xe] | (byte)((ulong)lVar24 >> 0x30);
            bVar34 = pbVar15[0xf] | (byte)((ulong)lVar24 >> 0x38);
            bVar35 = pbVar15[0x10] | (byte)lVar26;
            bVar36 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
            bVar37 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
            bVar38 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
            bVar39 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
            bVar40 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
            bVar41 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
            bVar42 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
            auVar43[1] = bVar28;
            auVar43[0] = bVar27;
            auVar43[2] = bVar29;
            auVar43[3] = bVar30;
            auVar43[4] = bVar31;
            auVar43[5] = bVar32;
            auVar43[6] = bVar33;
            auVar43[7] = bVar34;
            auVar43[8] = bVar35;
            auVar43[9] = bVar36;
            auVar43[10] = bVar37;
            auVar43[0xb] = bVar38;
            auVar43[0xc] = bVar39;
            auVar43[0xd] = bVar40;
            auVar43[0xe] = bVar41;
            auVar43[0xf] = bVar42;
            auVar3[1] = bVar28;
            auVar3[0] = bVar27;
            auVar3[2] = bVar29;
            auVar3[3] = bVar30;
            auVar3[4] = bVar31;
            auVar3[5] = bVar32;
            auVar3[6] = bVar33;
            auVar3[7] = bVar34;
            auVar3[8] = bVar35;
            auVar3[9] = bVar36;
            auVar3[10] = bVar37;
            auVar3[0xb] = bVar38;
            auVar3[0xc] = bVar39;
            auVar3[0xd] = bVar40;
            auVar3[0xe] = bVar41;
            auVar3[0xf] = bVar42;
            auVar43 = NEON_ext(auVar43,auVar3,8,1);
            if (CONCAT17(bVar34 | auVar43[7],
                         CONCAT16(bVar33 | auVar43[6],
                                  CONCAT15(bVar32 | auVar43[5],
                                           CONCAT14(bVar31 | auVar43[4],
                                                    CONCAT13(bVar30 | auVar43[3],
                                                             CONCAT12(bVar29 | auVar43[2],
                                                                      CONCAT11(bVar28 | auVar43[1],
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar15 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar13 == (byte *)0x1) &&
             (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
              lVar26 == 0)) {
            if (pbVar15[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar15 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar15[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar15 != 2) {
              return (byte *)0x0;
            }
          }
          lVar26 = *(long *)(pbVar15 + 0x20);
          lVar24 = *(long *)(pbVar15 + 0x18);
          bVar27 = pbVar15[8] | (byte)lVar24;
          bVar28 = pbVar15[9] | (byte)((ulong)lVar24 >> 8);
          bVar29 = pbVar15[10] | (byte)((ulong)lVar24 >> 0x10);
          bVar30 = pbVar15[0xb] | (byte)((ulong)lVar24 >> 0x18);
          bVar31 = pbVar15[0xc] | (byte)((ulong)lVar24 >> 0x20);
          bVar32 = pbVar15[0xd] | (byte)((ulong)lVar24 >> 0x28);
          bVar33 = pbVar15[0xe] | (byte)((ulong)lVar24 >> 0x30);
          bVar34 = pbVar15[0xf] | (byte)((ulong)lVar24 >> 0x38);
          bVar35 = pbVar15[0x10] | (byte)lVar26;
          bVar36 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
          bVar37 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
          bVar38 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
          bVar39 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
          bVar40 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
          bVar41 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
          bVar42 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
          auVar1[1] = bVar28;
          auVar1[0] = bVar27;
          auVar1[2] = bVar29;
          auVar1[3] = bVar30;
          auVar1[4] = bVar31;
          auVar1[5] = bVar32;
          auVar1[6] = bVar33;
          auVar1[7] = bVar34;
          auVar1[8] = bVar35;
          auVar1[9] = bVar36;
          auVar1[10] = bVar37;
          auVar1[0xb] = bVar38;
          auVar1[0xc] = bVar39;
          auVar1[0xd] = bVar40;
          auVar1[0xe] = bVar41;
          auVar1[0xf] = bVar42;
          auVar2[1] = bVar28;
          auVar2[0] = bVar27;
          auVar2[2] = bVar29;
          auVar2[3] = bVar30;
          auVar2[4] = bVar31;
          auVar2[5] = bVar32;
          auVar2[6] = bVar33;
          auVar2[7] = bVar34;
          auVar2[8] = bVar35;
          auVar2[9] = bVar36;
          auVar2[10] = bVar37;
          auVar2[0xb] = bVar38;
          auVar2[0xc] = bVar39;
          auVar2[0xd] = bVar40;
          auVar2[0xe] = bVar41;
          auVar2[0xf] = bVar42;
          auVar43 = NEON_ext(auVar1,auVar2,8,1);
          lVar24 = CONCAT17(bVar34 | auVar43[7],
                            CONCAT16(bVar33 | auVar43[6],
                                     CONCAT15(bVar32 | auVar43[5],
                                              CONCAT14(bVar31 | auVar43[4],
                                                       CONCAT13(bVar30 | auVar43[3],
                                                                CONCAT12(bVar29 | auVar43[2],
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar15[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar15 + 8);
        uVar14 = *(ulong *)(pbVar15 + 0x10);
        lVar26 = *(long *)pbVar15;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar13,lVar26,uVar11);
        if (((ulong)pbVar13 & 1) == 0) {
          return (byte *)0x0;
        }
        unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
        unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
        unaff_x20 = *(ulong *)(puVar7 + -0xa0);
        unaff_x19 = *(byte **)(puVar7 + -0x98);
        unaff_x22 = *(ulong *)(puVar7 + -0xb0);
        unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
        unaff_x24 = *(byte **)(puVar7 + -0xc0);
        unaff_x23 = *(byte **)(puVar7 + -0xb8);
        puVar7 = puVar7 + -0x80;
      } while( true );
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(pbVar13,pbVar16,pbVar17,pbVar12,0);
  return pbVar13;
}



/* Entry: 103d41ae0; end: 103d41b9f;  */

void FUN_103d41ae0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113004ed8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc822f0;
  func_0x000107c61520(&UNK_10dc822f0,&UNK_110704940);
  puRam0000000113004ed8 = puVar1;
  return;
}



/* Entry: 103d41ba0; end: 103d42193;  */

uint FUN_103d41ba0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  ulong uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  ulong uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined1 auStack_5b8 [40];
  ulong uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  ulong uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  ulong uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_130;
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uStack_398 = param_1[0x13];
  uStack_3a0 = param_1[0x12];
  uStack_158 = param_1[0x15];
  uStack_160 = param_1[0x14];
  uStack_3a8 = param_1[0x11];
  uStack_3b0 = param_1[0x10];
  uStack_168 = param_1[0x13];
  uStack_170 = param_1[0x12];
  uStack_388 = param_1[0x15];
  uStack_390 = param_1[0x14];
  uStack_148 = param_1[0x17];
  uStack_150 = param_1[0x16];
  uStack_3d8 = param_1[0xb];
  uStack_3e0 = param_1[10];
  uStack_198 = param_1[0xd];
  uStack_1a0 = param_1[0xc];
  uStack_3e8 = param_1[9];
  uStack_3f0 = param_1[8];
  uStack_1a8 = param_1[0xb];
  uStack_1b0 = param_1[10];
  uStack_3c8 = param_1[0xd];
  uStack_3d0 = param_1[0xc];
  uStack_188 = param_1[0xf];
  uStack_190 = param_1[0xe];
  uStack_3b8 = param_1[0xf];
  uStack_3c0 = param_1[0xe];
  uStack_178 = param_1[0x11];
  uStack_180 = param_1[0x10];
  uStack_1e8 = param_1[3];
  uStack_1f0 = param_1[2];
  uStack_1d8 = param_1[5];
  uStack_1e0 = param_1[4];
  uStack_418 = param_1[3];
  uStack_420 = param_1[2];
  uStack_408 = param_1[5];
  uStack_410 = param_1[4];
  uStack_1c8 = param_1[7];
  uStack_1d0 = param_1[6];
  uStack_1b8 = param_1[9];
  uStack_1c0 = param_1[8];
  uStack_3f8 = param_1[7];
  uStack_400 = param_1[6];
  uStack_2e0 = param_2[0x13];
  uStack_2e8 = param_2[0x12];
  uStack_218 = param_2[0x15];
  uStack_220 = param_2[0x14];
  uStack_2f0 = param_2[0x11];
  uStack_2f8 = param_2[0x10];
  uStack_228 = param_2[0x13];
  uStack_230 = param_2[0x12];
  uStack_2d0 = param_2[0x15];
  uStack_2d8 = param_2[0x14];
  uStack_208 = param_2[0x17];
  uStack_210 = param_2[0x16];
  uStack_320 = param_2[0xb];
  uStack_328 = param_2[10];
  uStack_258 = param_2[0xd];
  uStack_260 = param_2[0xc];
  uStack_330 = param_2[9];
  uStack_338 = param_2[8];
  uStack_268 = param_2[0xb];
  uStack_270 = param_2[10];
  uStack_310 = param_2[0xd];
  uStack_318 = param_2[0xc];
  uStack_248 = param_2[0xf];
  uStack_250 = param_2[0xe];
  uStack_300 = param_2[0xf];
  uStack_308 = param_2[0xe];
  uStack_238 = param_2[0x11];
  uStack_240 = param_2[0x10];
  uStack_2a8 = param_2[3];
  uStack_2b0 = param_2[2];
  uStack_298 = param_2[5];
  uStack_2a0 = param_2[4];
  uStack_288 = param_2[7];
  uStack_290 = param_2[6];
  uStack_278 = param_2[9];
  uStack_280 = param_2[8];
  uStack_360 = param_2[3];
  uStack_368 = param_2[2];
  uStack_350 = param_2[5];
  uStack_358 = param_2[4];
  uStack_340 = param_2[7];
  uStack_348 = param_2[6];
  uStack_378 = param_1[0x17];
  uStack_380 = param_1[0x16];
  iVar2 = (int)&uStack_368;
  uStack_2c0 = param_2[0x17];
  uStack_2c8 = param_2[0x16];
  uStack_140 = param_1[0x18];
  uStack_200 = param_2[0x18];
  uStack_370 = param_1[0x18];
  uStack_2b8 = param_2[0x18];
  iVar1 = (int)&uStack_420;
  func_0x000100d6dc90();
  if (iVar1 == 1) {
    func_0x000100d6dc90();
    if (iVar2 == 1) {
      uStack_508 = uStack_398;
      uStack_510 = uStack_3a0;
      uStack_4f8 = uStack_388;
      uStack_500 = uStack_390;
      uStack_4e8 = uStack_378;
      uStack_4f0 = uStack_380;
      uStack_4e0 = uStack_370;
      uStack_548 = uStack_3d8;
      uStack_550 = uStack_3e0;
      uStack_538 = uStack_3c8;
      uStack_540 = uStack_3d0;
      uStack_528 = uStack_3b8;
      uStack_530 = uStack_3c0;
      uStack_518 = uStack_3a8;
      uStack_520 = uStack_3b0;
      uStack_588 = uStack_418;
      uStack_590 = uStack_420;
      uStack_578 = uStack_408;
      uStack_580 = uStack_410;
      uStack_568 = uStack_3f8;
      uStack_570 = uStack_400;
      uStack_558 = uStack_3e8;
      uStack_560 = uStack_3f0;
      FUN_103d3e4c8(&uStack_1f0,&uStack_130,0x113004b70,&UNK_10dc80bf8);
      FUN_103d3e4c8(&uStack_2b0,&uStack_130,0x113004b70,&UNK_10dc80bf8);
      func_0x000103d5122c(&uStack_590,0x113004b70,&UNK_10dc80bf8);
LAB_103d41f88:
      uVar9 = param_1[0x1a];
      uVar7 = param_1[0x19];
      uVar13 = param_1[0x1c];
      uVar11 = param_1[0x1b];
      uVar5 = param_1[0x1d];
      uVar10 = param_2[0x1a];
      uVar8 = param_2[0x19];
      uVar14 = param_2[0x1c];
      uVar12 = param_2[0x1b];
      uVar6 = param_2[0x1d];
      uStack_7f0 = uVar8;
      uStack_7e8 = uVar10;
      uStack_7e0 = uVar12;
      uStack_7d8 = uVar14;
      uStack_7d0 = uVar6;
      uStack_730 = uVar7;
      uStack_728 = uVar9;
      uStack_720 = uVar11;
      uStack_718 = uVar13;
      uStack_710 = uVar5;
      if ((uVar7 & 0xff) == 2) {
        if ((uVar8 & 0xff) != 2) {
LAB_103d42034:
          FUN_103d3e4c8(&uStack_730,&uStack_420,0x113004b80,&UNK_10dc80c08);
          FUN_103d3e4c8(&uStack_7f0,&uStack_420,0x113004b80,&UNK_10dc80c08);
          FUN_103d3ce9c(uVar7,uVar9,uVar11,uVar13,uVar5);
          FUN_103d3ce9c(uVar8,uVar10,uVar12,uVar14,uVar6);
          goto LAB_103d420a4;
        }
        FUN_103d3e4c8(&uStack_730,&uStack_420,0x113004b80,&UNK_10dc80c08);
        FUN_103d3e4c8(&uStack_7f0,&uStack_420,0x113004b80,&UNK_10dc80c08);
        FUN_103d3ce9c(uVar7,uVar9,uVar11,uVar13,uVar5);
      }
      else {
        if ((uVar8 & 0xff) == 2) goto LAB_103d42034;
        uStack_420 = CONCAT71(uStack_420._1_7_,(char)uVar8) & 0xffffffffffffff01;
        uStack_410 = CONCAT71(uStack_410._1_7_,(char)uVar12);
        uStack_670 = CONCAT71(uStack_670._1_7_,(char)uVar7) & 0xffffffffffffff01;
        uStack_660 = CONCAT71(uStack_660._1_7_,(char)uVar11);
        uStack_668 = uVar9;
        uStack_658 = uVar13;
        uStack_650 = uVar5;
        uStack_418 = uVar10;
        uStack_408 = uVar14;
        uStack_400 = uVar6;
        FUN_103d3e4c8(&uStack_730,auStack_5b8,0x113004b80,&UNK_10dc80c08);
        FUN_103d3e4c8(&uStack_7f0,auStack_5b8,0x113004b80,&UNK_10dc80c08);
        puVar4 = &uStack_670;
        func_0x000103d3ceb8(puVar4,&uStack_420);
        FUN_103d3ce9c(uVar8,uVar10,uVar12,uVar14,uVar6);
        FUN_103d3ce9c(uVar7,uVar9,uVar11,uVar13,uVar5);
        if (((ulong)puVar4 & 1) == 0) goto LAB_103d420a4;
      }
      uVar5 = *param_1;
      func_0x000100e25fcc(uVar5,param_1[1],*param_2,param_2[1]);
      uVar3 = (uint)uVar5;
      goto LAB_103d420a8;
    }
LAB_103d41dfc:
    func_0x000107c610b4(&uStack_590,&uStack_420,0x170);
    FUN_103d3e4c8(&uStack_1f0,&uStack_130,0x113004b70,&UNK_10dc80bf8);
    FUN_103d3e4c8(&uStack_2b0,&uStack_130,0x113004b70,&UNK_10dc80bf8);
    func_0x000103d5122c(&uStack_590,0x113004b78,&UNK_10dc80c00);
  }
  else {
    uStack_5e8 = uStack_398;
    uStack_5f0 = uStack_3a0;
    uStack_5d8 = uStack_388;
    uStack_5e0 = uStack_390;
    uStack_5c8 = uStack_378;
    uStack_5d0 = uStack_380;
    uStack_5c0 = uStack_370;
    uStack_628 = uStack_3d8;
    uStack_630 = uStack_3e0;
    uStack_618 = uStack_3c8;
    uStack_620 = uStack_3d0;
    uStack_608 = uStack_3b8;
    uStack_610 = uStack_3c0;
    uStack_5f8 = uStack_3a8;
    uStack_600 = uStack_3b0;
    uStack_668 = uStack_418;
    uStack_670 = uStack_420;
    uStack_658 = uStack_408;
    uStack_660 = uStack_410;
    uStack_648 = uStack_3f8;
    uStack_650 = uStack_400;
    uStack_638 = uStack_3e8;
    uStack_640 = uStack_3f0;
    func_0x000100d6dc90();
    if (iVar2 == 1) goto LAB_103d41dfc;
    uStack_6a8 = uStack_2e0;
    uStack_6b0 = uStack_2e8;
    uStack_698 = uStack_2d0;
    uStack_6a0 = uStack_2d8;
    uStack_688 = uStack_2c0;
    uStack_690 = uStack_2c8;
    uStack_6e8 = uStack_320;
    uStack_6f0 = uStack_328;
    uStack_6d8 = uStack_310;
    uStack_6e0 = uStack_318;
    uStack_6c8 = uStack_300;
    uStack_6d0 = uStack_308;
    uStack_6b8 = uStack_2f0;
    uStack_6c0 = uStack_2f8;
    uStack_728 = uStack_360;
    uStack_730 = uStack_368;
    uStack_718 = uStack_350;
    uStack_720 = uStack_358;
    uStack_708 = uStack_340;
    uStack_710 = uStack_348;
    uStack_6f8 = uStack_330;
    uStack_700 = uStack_338;
    uStack_508 = uStack_2e0;
    uStack_510 = uStack_2e8;
    uStack_4f8 = uStack_2d0;
    uStack_500 = uStack_2d8;
    uStack_4e8 = uStack_2c0;
    uStack_4f0 = uStack_2c8;
    uStack_548 = uStack_320;
    uStack_550 = uStack_328;
    uStack_538 = uStack_310;
    uStack_540 = uStack_318;
    uStack_528 = uStack_300;
    uStack_530 = uStack_308;
    uStack_518 = uStack_2f0;
    uStack_520 = uStack_2f8;
    uStack_588 = uStack_360;
    uStack_590 = uStack_368;
    uStack_578 = uStack_350;
    uStack_580 = uStack_358;
    uStack_680 = uStack_2b8;
    uStack_4e0 = uStack_2b8;
    uStack_568 = uStack_340;
    uStack_570 = uStack_348;
    uStack_558 = uStack_330;
    uStack_560 = uStack_338;
    uStack_a8 = uStack_5e8;
    uStack_b0 = uStack_5f0;
    uStack_98 = uStack_5d8;
    uStack_a0 = uStack_5e0;
    uStack_88 = uStack_5c8;
    uStack_90 = uStack_5d0;
    uStack_80 = uStack_5c0;
    uStack_e8 = uStack_628;
    uStack_f0 = uStack_630;
    uStack_d8 = uStack_618;
    uStack_e0 = uStack_620;
    uStack_c8 = uStack_608;
    uStack_d0 = uStack_610;
    uStack_b8 = uStack_5f8;
    uStack_c0 = uStack_600;
    uStack_128 = uStack_668;
    uStack_130 = uStack_670;
    uStack_118 = uStack_658;
    uStack_120 = uStack_660;
    uStack_108 = uStack_648;
    uStack_110 = uStack_650;
    uStack_f8 = uStack_638;
    uStack_100 = uStack_640;
    FUN_103d3e4c8(&uStack_1f0,&uStack_7f0,0x113004b70,&UNK_10dc80bf8);
    FUN_103d3e4c8(&uStack_2b0,&uStack_7f0,0x113004b70,&UNK_10dc80bf8);
    puVar4 = &uStack_130;
    FUN_103d3ca10(puVar4,&uStack_590);
    func_0x000103d5122c(&uStack_730,0x113004b70,&UNK_10dc80bf8);
    func_0x000103d5122c(&uStack_420,0x113004b70,&UNK_10dc80bf8);
    if (((ulong)puVar4 & 1) != 0) goto LAB_103d41f88;
  }
LAB_103d420a4:
  uVar3 = 0;
LAB_103d420a8:
  return uVar3 & 1;
}



/* Entry: 103d42194; end: 103d42593;  */

void FUN_103d42194(void)

{
  undefined *puVar1;
  
  if (puRam0000000113004f00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc824a0;
  func_0x000107c61520(&UNK_10dc824a0,&UNK_110704a50);
  puRam0000000113004f00 = puVar1;
  return;
}



/* Entry: 103d42594; end: 103d4261f;  */

/* WARNING: Possible PIC construction at 0x000103d425d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d425d8) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d42594(int *param_1,int *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  if (*param_1 == *param_2) {
    pbVar12 = *(byte **)(param_1 + 2);
    pbVar15 = *(byte **)(param_1 + 4);
    pbVar16 = *(byte **)(param_2 + 2);
    pbVar17 = *(byte **)(param_2 + 4);
    if (*(byte **)(param_1 + 2) != *(byte **)(param_2 + 2) ||
        *(byte **)(param_1 + 4) != *(byte **)(param_2 + 4)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar15,pbVar16,pbVar17,0);
      return pbVar12;
    }
    uVar13 = *(ulong *)(param_1 + 6);
    if ((uVar13 == *(ulong *)(param_2 + 6) && *(long *)(param_1 + 8) == *(long *)(param_2 + 8)) ||
       (func_0x000107c605b8(), (uVar13 & 1) != 0)) {
      pbVar10 = *(byte **)(param_1 + 10);
      pbVar25 = *(byte **)(param_1 + 0xc);
      lVar24 = *(long *)(param_2 + 10);
      uVar13 = *(ulong *)(param_2 + 0xc);
      puVar7 = (undefined1 *)register0x00000008;
      do {
        *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
        *(byte **)(puVar7 + -0x48) = unaff_x25;
        *(byte **)(puVar7 + -0x40) = unaff_x24;
        *(byte **)(puVar7 + -0x38) = unaff_x23;
        *(ulong *)(puVar7 + -0x30) = unaff_x22;
        *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
        *(ulong *)(puVar7 + -0x20) = unaff_x20;
        *(byte **)(puVar7 + -0x18) = unaff_x19;
        *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
        *(undefined8 *)(puVar7 + -8) = unaff_x30;
        *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar4 = (uint)((ulong)pbVar25 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar13 >> 0x20);
        uVar21 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar14 = pbVar25;
        if ((ulong)pbVar25 >> 0x3e == 3) {
          uVar20 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
              (uVar13 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
          }
          else {
            iVar19 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar20 = (ulong)(iVar19 - iVar8);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar21 == 0) {
            uVar22 = uVar13 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar19 = (int)((ulong)lVar24 >> 0x20);
          if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar20 = 0;
          if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar21 == 2) {
            uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
            if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar20 < 1) goto code_r0x000100e26128;
            if (uVar18 < 2) {
              if (uVar18 == 0) {
                puVar7[-0x70] = (char)pbVar10;
                puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
                puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
                puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
                puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
                puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
                puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
                puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
                puVar7[-0x68] = (char)pbVar25;
                puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
                puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
                puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
                puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
                puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
                pbVar14 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
                goto code_r0x000100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar8;
              unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar6)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar25;
              if (pbVar10 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar10 = (byte *)0x0;
              }
              else {
                pbVar14 = pbVar10;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar14) {
                    pbVar14 = unaff_x23;
                  }
                  pbVar14 = pbVar14 + (long)pbVar10;
                  goto code_r0x000100e262a4;
                }
              }
              pbVar14 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar14 = puVar7 + -0x70;
                goto code_r0x000100e26260;
              }
              lVar26 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar14 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar26,(long)pbVar14)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar26 - (long)pbVar14);
              }
              unaff_x23 = unaff_x24 + -lVar26;
              if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar25;
              if (pbVar10 == (byte *)0x0) {
                pbVar14 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar14) {
                  pbVar14 = unaff_x23;
                }
                pbVar14 = pbVar14 + (long)pbVar10;
              }
            }
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar24,uVar13);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar13;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar20 == 0);
          }
        }
code_r0x000100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
          return pbVar9;
        }
        func_0x000107c60e78();
        *(byte **)(puVar7 + -0xc0) = unaff_x24;
        *(byte **)(puVar7 + -0xb8) = unaff_x23;
        *(ulong *)(puVar7 + -0xb0) = unaff_x22;
        *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
        *(ulong *)(puVar7 + -0xa0) = unaff_x20;
        *(byte **)(puVar7 + -0x98) = unaff_x19;
        *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
        *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
        pbVar12 = *(byte **)pbVar9;
        pbVar10 = *(byte **)(pbVar9 + 8);
        pbVar23 = *(byte **)(pbVar9 + 0x18);
        bVar27 = pbVar9[0x28];
        pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar15 = pbVar10;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar14[0x28] == 0) {
              lVar24 = *(long *)pbVar14;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar24,uVar11);
              return (byte *)(ulong)((uint)pbVar12 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar14[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar14 + 8);
            pbVar17 = *(byte **)(pbVar14 + 0x10);
            lVar24 = *(long *)pbVar14;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar24,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar15 = pbVar25;
            if ((pbVar10 == pbVar16) && (pbVar25 == pbVar17)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar14[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar17 = *(byte **)(pbVar14 + 8);
            lVar24 = *(long *)(pbVar14 + 0x18);
            if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
              if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar23 != (byte *)0x0) {
                if (lVar24 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar24);
                func_0x000107c61174();
                pbVar12 = pbVar23;
                func_0x000107c60118();
                func_0x000107c61170(pbVar23);
                func_0x000107c61170(lVar24);
                pbVar23 = pbVar12;
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar24 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
          }
          goto code_r0x000107c605b8;
        }
        lVar26 = *(long *)(pbVar9 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar14[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar17 = *(byte **)(pbVar14 + 8);
            if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
               (pbVar12 = pbVar25, pbVar15 = pbVar23, pbVar16 = *(byte **)(pbVar14 + 0x10),
               pbVar17 = *(byte **)(pbVar14 + 0x18),
               pbVar25 == *(byte **)(pbVar14 + 0x10) && pbVar23 == *(byte **)(pbVar14 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar14[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar17 = *(byte **)(pbVar14 + 0x10);
          lVar24 = *(long *)(pbVar14 + 0x20);
          if (pbVar25 == (byte *)0x0) {
            if (pbVar17 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar17 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar14 + 8);
            pbVar12 = pbVar10;
            pbVar15 = pbVar25;
            if ((pbVar10 != pbVar16) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
          }
          if (lVar26 != 0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar23 == *(byte **)(pbVar14 + 0x18)) && (lVar26 == lVar24)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar14 + 0x18),lVar24,0);
joined_r0x000100e266a4:
            if (((ulong)pbVar23 & 1) == 0) {
              return (byte *)0x0;
            }
            return (byte *)0x1;
          }
          goto joined_r0x000100e26620;
        }
        if (bVar27 != 5) {
          if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
              lVar26 == 0) && pbVar25 == (byte *)0x0) {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar26 = *(long *)(pbVar14 + 0x20);
            lVar24 = *(long *)(pbVar14 + 0x18);
            bVar27 = pbVar14[8] | (byte)lVar24;
            bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
            bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
            bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
            bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
            bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
            bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
            bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
            bVar35 = pbVar14[0x10] | (byte)lVar26;
            bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
            bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
            bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
            bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
            bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
            bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
            bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
            auVar43[1] = bVar28;
            auVar43[0] = bVar27;
            auVar43[2] = bVar29;
            auVar43[3] = bVar30;
            auVar43[4] = bVar31;
            auVar43[5] = bVar32;
            auVar43[6] = bVar33;
            auVar43[7] = bVar34;
            auVar43[8] = bVar35;
            auVar43[9] = bVar36;
            auVar43[10] = bVar37;
            auVar43[0xb] = bVar38;
            auVar43[0xc] = bVar39;
            auVar43[0xd] = bVar40;
            auVar43[0xe] = bVar41;
            auVar43[0xf] = bVar42;
            auVar3[1] = bVar28;
            auVar3[0] = bVar27;
            auVar3[2] = bVar29;
            auVar3[3] = bVar30;
            auVar3[4] = bVar31;
            auVar3[5] = bVar32;
            auVar3[6] = bVar33;
            auVar3[7] = bVar34;
            auVar3[8] = bVar35;
            auVar3[9] = bVar36;
            auVar3[10] = bVar37;
            auVar3[0xb] = bVar38;
            auVar3[0xc] = bVar39;
            auVar3[0xd] = bVar40;
            auVar3[0xe] = bVar41;
            auVar3[0xf] = bVar42;
            auVar43 = NEON_ext(auVar43,auVar3,8,1);
            if (CONCAT17(bVar34 | auVar43[7],
                         CONCAT16(bVar33 | auVar43[6],
                                  CONCAT15(bVar32 | auVar43[5],
                                           CONCAT14(bVar31 | auVar43[4],
                                                    CONCAT13(bVar30 | auVar43[3],
                                                             CONCAT12(bVar29 | auVar43[2],
                                                                      CONCAT11(bVar28 | auVar43[1],
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar14 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar12 == (byte *)0x1) &&
             (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
              lVar26 == 0)) {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar14 != 1) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            if (*(long *)pbVar14 != 2) {
              return (byte *)0x0;
            }
          }
          lVar26 = *(long *)(pbVar14 + 0x20);
          lVar24 = *(long *)(pbVar14 + 0x18);
          bVar27 = pbVar14[8] | (byte)lVar24;
          bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
          bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
          bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
          bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
          bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
          bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
          bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
          bVar35 = pbVar14[0x10] | (byte)lVar26;
          bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
          bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
          bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
          bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
          bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
          bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
          bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
          auVar1[1] = bVar28;
          auVar1[0] = bVar27;
          auVar1[2] = bVar29;
          auVar1[3] = bVar30;
          auVar1[4] = bVar31;
          auVar1[5] = bVar32;
          auVar1[6] = bVar33;
          auVar1[7] = bVar34;
          auVar1[8] = bVar35;
          auVar1[9] = bVar36;
          auVar1[10] = bVar37;
          auVar1[0xb] = bVar38;
          auVar1[0xc] = bVar39;
          auVar1[0xd] = bVar40;
          auVar1[0xe] = bVar41;
          auVar1[0xf] = bVar42;
          auVar2[1] = bVar28;
          auVar2[0] = bVar27;
          auVar2[2] = bVar29;
          auVar2[3] = bVar30;
          auVar2[4] = bVar31;
          auVar2[5] = bVar32;
          auVar2[6] = bVar33;
          auVar2[7] = bVar34;
          auVar2[8] = bVar35;
          auVar2[9] = bVar36;
          auVar2[10] = bVar37;
          auVar2[0xb] = bVar38;
          auVar2[0xc] = bVar39;
          auVar2[0xd] = bVar40;
          auVar2[0xe] = bVar41;
          auVar2[0xf] = bVar42;
          auVar43 = NEON_ext(auVar1,auVar2,8,1);
          lVar24 = CONCAT17(bVar34 | auVar43[7],
                            CONCAT16(bVar33 | auVar43[6],
                                     CONCAT15(bVar32 | auVar43[5],
                                              CONCAT14(bVar31 | auVar43[4],
                                                       CONCAT13(bVar30 | auVar43[3],
                                                                CONCAT12(bVar29 | auVar43[2],
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar14[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar14 + 8);
        uVar13 = *(ulong *)(pbVar14 + 0x10);
        lVar26 = *(long *)pbVar14;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar26,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
        unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
        unaff_x20 = *(ulong *)(puVar7 + -0xa0);
        unaff_x19 = *(byte **)(puVar7 + -0x98);
        unaff_x22 = *(ulong *)(puVar7 + -0xb0);
        unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
        unaff_x24 = *(byte **)(puVar7 + -0xc0);
        unaff_x23 = *(byte **)(puVar7 + -0xb8);
        puVar7 = puVar7 + -0x80;
      } while( true );
    }
  }
  return (byte *)0x0;
}



/* Entry: 103d42620; end: 103d4269f;  */

void FUN_103d42620(void)

{
  undefined *puVar1;
  
  if (puRam0000000113004ff0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc83070;
  func_0x000107c61520(&UNK_10dc83070,&UNK_1107051e8);
  puRam0000000113004ff0 = puVar1;
  return;
}



/* Entry: 103d426a0; end: 103d42803;  */

uint FUN_103d426a0(long *param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_288 [184];
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  lVar5 = *param_1;
  lVar4 = *param_2;
  lVar6 = *(long *)(lVar5 + 0x10);
  if (lVar6 == *(long *)(lVar4 + 0x10)) {
    if (lVar6 != 0 && lVar5 != lVar4) {
      puVar7 = (undefined8 *)(lVar5 + 0x20);
      puVar8 = (undefined8 *)(lVar4 + 0x20);
      do {
        uStack_1c8 = puVar7[1];
        uStack_1d0 = *puVar7;
        uStack_1b8 = puVar7[3];
        uStack_1c0 = puVar7[2];
        uStack_1a8 = puVar7[5];
        uStack_1b0 = puVar7[4];
        uStack_198 = puVar7[7];
        uStack_1a0 = puVar7[6];
        uStack_188 = puVar7[9];
        uStack_190 = puVar7[8];
        uStack_178 = puVar7[0xb];
        uStack_180 = puVar7[10];
        uStack_168 = puVar7[0xd];
        uStack_170 = puVar7[0xc];
        uStack_158 = puVar7[0xf];
        uStack_160 = puVar7[0xe];
        uStack_148 = puVar7[0x11];
        uStack_150 = puVar7[0x10];
        uStack_138 = puVar7[0x13];
        uStack_140 = puVar7[0x12];
        uStack_128 = puVar7[0x15];
        uStack_130 = puVar7[0x14];
        uStack_120 = puVar7[0x16];
        uStack_108 = puVar8[1];
        uStack_110 = *puVar8;
        uStack_f8 = puVar8[3];
        uStack_100 = puVar8[2];
        uStack_e8 = puVar8[5];
        uStack_f0 = puVar8[4];
        uStack_d8 = puVar8[7];
        uStack_e0 = puVar8[6];
        uStack_c8 = puVar8[9];
        uStack_d0 = puVar8[8];
        uStack_b8 = puVar8[0xb];
        uStack_c0 = puVar8[10];
        uStack_a8 = puVar8[0xd];
        uStack_b0 = puVar8[0xc];
        uStack_98 = puVar8[0xf];
        uStack_a0 = puVar8[0xe];
        uStack_88 = puVar8[0x11];
        uStack_90 = puVar8[0x10];
        uStack_78 = puVar8[0x13];
        uStack_80 = puVar8[0x12];
        uStack_68 = puVar8[0x15];
        uStack_70 = puVar8[0x14];
        uStack_60 = puVar8[0x16];
        func_0x000101713564(&uStack_1d0,auStack_288);
        func_0x000101713564(&uStack_110,auStack_288);
        puVar2 = &uStack_1d0;
        FUN_103d3ca10(puVar2,&uStack_110);
        func_0x0001017135a0(&uStack_110);
        func_0x0001017135a0(&uStack_1d0);
        if (((ulong)puVar2 & 1) == 0) goto LAB_103d427e0;
        puVar8 = puVar8 + 0x17;
        puVar7 = puVar7 + 0x17;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    uVar3 = param_1[1];
    if ((uVar3 == param_2[1] && param_1[2] == param_2[2]) ||
       (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
      lVar6 = param_1[3];
      func_0x000100e25fcc(lVar6,param_1[4],param_2[3],param_2[4]);
      uVar1 = (uint)lVar6;
      goto LAB_103d427e4;
    }
  }
LAB_103d427e0:
  uVar1 = 0;
LAB_103d427e4:
  return uVar1 & 1;
}



/* Entry: 103d42804; end: 103d432c3;  */

void FUN_103d42804(void)

{
  undefined *puVar1;
  
  if (puRam0000000113005008 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc83148;
  func_0x000107c61520(&UNK_10dc83148,&UNK_110705270);
  puRam0000000113005008 = puVar1;
  return;
}



/* Entry: 103d432c4; end: 103d4333b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d432c4(ulong param_1,ulong param_2,byte *param_3,byte *param_4,ulong param_5,
                    undefined8 param_6,long param_7,ulong param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *unaff_x19;
  long lVar21;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  undefined1 auVar39 [16];
  
  if ((((param_1 ^ param_5) & 0x101010101) != 0) ||
     (FUN_103d3af98(param_2,param_6), (param_2 & 1) == 0)) {
    return (byte *)0x0;
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)param_4 >> 0x20);
    uVar15 = uVar4 >> 0x1e;
    uVar5 = (uint)(param_8 >> 0x20);
    uVar18 = uVar5 >> 0x1e;
    iVar7 = (int)param_3;
    pbVar11 = param_4;
    if ((ulong)param_4 >> 0x3e == 3) {
      uVar17 = 0;
      if ((((param_3 != (byte *)0x0) || (param_4 != (byte *)0xc000000000000000)) ||
          (param_8 >> 0x3e < 3)) || ((uVar17 = 0, param_7 != 0 || (param_8 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar15 == 0) {
        uVar17 = (ulong)param_4 >> 0x30 & 0xff;
      }
      else {
        iVar16 = (int)((ulong)param_3 >> 0x20);
        if (SBORROW4(iVar16,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar17 = (ulong)(iVar16 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar18 == 0) {
        uVar19 = param_8 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar16 = (int)((ulong)param_7 >> 0x20);
      if (SBORROW4(iVar16,(int)param_7)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar17 == (long)(iVar16 - (int)param_7)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar15 == 2) {
        uVar17 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
        if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar17 = 0;
      if (uVar18 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar18 == 2) {
        uVar19 = *(long *)(param_7 + 0x18) - *(long *)(param_7 + 0x10);
        if (SBORROW8(*(long *)(param_7 + 0x18),*(long *)(param_7 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar17 != uVar19) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar17 < 1) goto code_r0x000100e26128;
        if (uVar15 < 2) {
          if (uVar15 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)param_3;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)param_3 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)param_3 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)param_3 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)param_3 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)param_3 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)param_3 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)param_3 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)param_4;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)param_4 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)param_4 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)param_4 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)param_4 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)param_4 >> 0x28);
            pbVar11 = (byte *)((long)register0x00000008 + (((ulong)param_4 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)param_3 >> 0x20) - (long)unaff_x25);
          if ((long)param_3 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = param_4;
          if (param_3 == (byte *)0x0) {
            func_0x000107c5ec38();
            param_3 = (byte *)0x0;
          }
          else {
            pbVar11 = param_3;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            param_3 = param_3 + ((long)unaff_x25 - (long)pbVar11);
            func_0x000107c5ec38();
            unaff_x19 = param_3;
            if (param_3 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar11) {
                pbVar11 = unaff_x23;
              }
              pbVar11 = pbVar11 + (long)param_3;
              goto code_r0x000100e262a4;
            }
          }
          pbVar11 = (byte *)0x0;
        }
        else {
          if (uVar15 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar11 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar21 = *(long *)(param_3 + 0x10);
          unaff_x24 = *(byte **)(param_3 + 0x18);
          func_0x000107c5ec30();
          pbVar11 = param_3;
          if (param_3 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar21,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            param_3 = param_3 + (lVar21 - (long)pbVar11);
          }
          unaff_x23 = unaff_x24 + -lVar21;
          if (SBORROW8((long)unaff_x24,lVar21)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = param_3;
          unaff_x25 = param_4;
          if (param_3 == (byte *)0x0) {
            pbVar11 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar11) {
              pbVar11 = unaff_x23;
            }
            pbVar11 = pbVar11 + (long)param_3;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)param_4 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_3,pbVar11,param_7
                            ,param_8);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = param_8;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar17 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar10 = *(byte **)pbVar8;
    param_3 = *(byte **)(pbVar8 + 8);
    pbVar20 = *(byte **)(pbVar8 + 0x18);
    bVar23 = pbVar8[0x28];
    param_4 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar12 = param_3;
    if (bVar23 < 3) {
      if (bVar23 == 0) {
        if (pbVar11[0x28] == 0) {
          lVar21 = *(long *)pbVar11;
          uVar9 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar10,lVar21,uVar9);
          return (byte *)(ulong)((uint)pbVar10 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar23 == 1) {
        if (pbVar11[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar14 = *(byte **)(pbVar11 + 0x10);
        lVar21 = *(long *)pbVar11;
        uVar9 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar10,lVar21,uVar9);
        if (((ulong)pbVar10 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar10 = param_3;
        pbVar12 = param_4;
        if ((param_3 == pbVar13) && (param_4 == pbVar14)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar11[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)pbVar11;
        pbVar14 = *(byte **)(pbVar11 + 8);
        lVar21 = *(long *)(pbVar11 + 0x18);
        if ((pbVar10 == pbVar13) && (param_3 == pbVar14)) {
          if (((pbVar8[0x10] ^ pbVar11[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar20 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar21 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar21);
          func_0x000107c61174();
          pbVar11 = pbVar20;
          func_0x000107c60118();
          func_0x000107c61170(pbVar20);
          func_0x000107c61170(lVar21);
          pbVar20 = pbVar11;
joined_r0x000100e266a4:
          if (((ulong)pbVar20 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar10,pbVar12,pbVar13,pbVar14,0);
      return pbVar10;
    }
    lVar22 = *(long *)(pbVar8 + 0x20);
    if (bVar23 < 5) {
      if (bVar23 != 3) {
        if (pbVar11[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)pbVar11;
        pbVar14 = *(byte **)(pbVar11 + 8);
        if (((pbVar10 == pbVar13) && (param_3 == pbVar14)) &&
           (pbVar10 = param_4, pbVar12 = pbVar20, pbVar13 = *(byte **)(pbVar11 + 0x10),
           pbVar14 = *(byte **)(pbVar11 + 0x18),
           param_4 == *(byte **)(pbVar11 + 0x10) && pbVar20 == *(byte **)(pbVar11 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar11[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar11 != ((uint)pbVar10 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar14 = *(byte **)(pbVar11 + 0x10);
      lVar21 = *(long *)(pbVar11 + 0x20);
      if (param_4 == (byte *)0x0) {
        if (pbVar14 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar10 = param_3;
        pbVar12 = param_4;
        if ((param_3 != pbVar13) || (param_4 != pbVar14)) goto code_r0x000107c605b8;
      }
      if (lVar22 != 0) {
        if (lVar21 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar20 == *(byte **)(pbVar11 + 0x18)) && (lVar22 == lVar21)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar20,lVar22,*(byte **)(pbVar11 + 0x18),lVar21,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar21 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar23 != 5) {
      if ((((pbVar20 == (byte *)0x0 && param_3 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
          lVar22 == 0) && param_4 == (byte *)0x0) {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar22 = *(long *)(pbVar11 + 0x20);
        lVar21 = *(long *)(pbVar11 + 0x18);
        bVar23 = pbVar11[8] | (byte)lVar21;
        bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
        bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
        bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
        bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
        bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
        bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
        bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
        bVar31 = pbVar11[0x10] | (byte)lVar22;
        bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
        bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
        bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
        bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
        bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
        bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
        bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
        auVar39[1] = bVar24;
        auVar39[0] = bVar23;
        auVar39[2] = bVar25;
        auVar39[3] = bVar26;
        auVar39[4] = bVar27;
        auVar39[5] = bVar28;
        auVar39[6] = bVar29;
        auVar39[7] = bVar30;
        auVar39[8] = bVar31;
        auVar39[9] = bVar32;
        auVar39[10] = bVar33;
        auVar39[0xb] = bVar34;
        auVar39[0xc] = bVar35;
        auVar39[0xd] = bVar36;
        auVar39[0xe] = bVar37;
        auVar39[0xf] = bVar38;
        auVar3[1] = bVar24;
        auVar3[0] = bVar23;
        auVar3[2] = bVar25;
        auVar3[3] = bVar26;
        auVar3[4] = bVar27;
        auVar3[5] = bVar28;
        auVar3[6] = bVar29;
        auVar3[7] = bVar30;
        auVar3[8] = bVar31;
        auVar3[9] = bVar32;
        auVar3[10] = bVar33;
        auVar3[0xb] = bVar34;
        auVar3[0xc] = bVar35;
        auVar3[0xd] = bVar36;
        auVar3[0xe] = bVar37;
        auVar3[0xf] = bVar38;
        auVar39 = NEON_ext(auVar39,auVar3,8,1);
        if (CONCAT17(bVar30 | auVar39[7],
                     CONCAT16(bVar29 | auVar39[6],
                              CONCAT15(bVar28 | auVar39[5],
                                       CONCAT14(bVar27 | auVar39[4],
                                                CONCAT13(bVar26 | auVar39[3],
                                                         CONCAT12(bVar25 | auVar39[2],
                                                                  CONCAT11(bVar24 | auVar39[1],
                                                                           bVar23 | auVar39[0]))))))
                    ) == 0 && *(long *)pbVar11 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar10 == (byte *)0x1) &&
         (((pbVar20 == (byte *)0x0 && param_3 == (byte *)0x0) && param_4 == (byte *)0x0) &&
          lVar22 == 0)) {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar11 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar11[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar11 != 2) {
          return (byte *)0x0;
        }
      }
      lVar22 = *(long *)(pbVar11 + 0x20);
      lVar21 = *(long *)(pbVar11 + 0x18);
      bVar23 = pbVar11[8] | (byte)lVar21;
      bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
      bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
      bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
      bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
      bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
      bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
      bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
      bVar31 = pbVar11[0x10] | (byte)lVar22;
      bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
      bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
      bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
      bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
      bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
      bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
      bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
      auVar1[1] = bVar24;
      auVar1[0] = bVar23;
      auVar1[2] = bVar25;
      auVar1[3] = bVar26;
      auVar1[4] = bVar27;
      auVar1[5] = bVar28;
      auVar1[6] = bVar29;
      auVar1[7] = bVar30;
      auVar1[8] = bVar31;
      auVar1[9] = bVar32;
      auVar1[10] = bVar33;
      auVar1[0xb] = bVar34;
      auVar1[0xc] = bVar35;
      auVar1[0xd] = bVar36;
      auVar1[0xe] = bVar37;
      auVar1[0xf] = bVar38;
      auVar2[1] = bVar24;
      auVar2[0] = bVar23;
      auVar2[2] = bVar25;
      auVar2[3] = bVar26;
      auVar2[4] = bVar27;
      auVar2[5] = bVar28;
      auVar2[6] = bVar29;
      auVar2[7] = bVar30;
      auVar2[8] = bVar31;
      auVar2[9] = bVar32;
      auVar2[10] = bVar33;
      auVar2[0xb] = bVar34;
      auVar2[0xc] = bVar35;
      auVar2[0xd] = bVar36;
      auVar2[0xe] = bVar37;
      auVar2[0xf] = bVar38;
      auVar39 = NEON_ext(auVar1,auVar2,8,1);
      lVar21 = CONCAT17(bVar30 | auVar39[7],
                        CONCAT16(bVar29 | auVar39[6],
                                 CONCAT15(bVar28 | auVar39[5],
                                          CONCAT14(bVar27 | auVar39[4],
                                                   CONCAT13(bVar26 | auVar39[3],
                                                            CONCAT12(bVar25 | auVar39[2],
                                                                     CONCAT11(bVar24 | auVar39[1],
                                                                              bVar23 | auVar39[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar11[0x28] != 5) {
      return (byte *)0x0;
    }
    param_7 = *(long *)(pbVar11 + 8);
    param_8 = *(ulong *)(pbVar11 + 0x10);
    lVar21 = *(long *)pbVar11;
    uVar9 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar10,lVar21,uVar9);
    if (((ulong)pbVar10 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 103d4333c; end: 103d4337b;  */

void FUN_103d4333c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113005278 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc84ba0;
  func_0x000107c61520(&UNK_10dc84ba0,&UNK_1107064d0);
  puRam0000000113005278 = puVar1;
  return;
}



/* Entry: 103d4337c; end: 103d4338f;  */

void FUN_103d4337c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d43390();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103d433d0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d43390; end: 103d4343b;  */

void FUN_103d43390(void)

{
  undefined *puVar1;
  
  if (puRam0000000113005280 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc80d40;
  func_0x000107c61520(&UNK_10dc80d40,&UNK_110703e60);
  puRam0000000113005280 = puVar1;
  return;
}



/* Entry: 103d4343c; end: 103d4343f;  */

void FUN_103d4343c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130052a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc80d80;
  func_0x000107c61520(&UNK_10dc80d80,&UNK_110703e60);
  puRam00000001130052a0 = puVar1;
  return;
}



/* Entry: 103d43440; end: 103d4347f;  */

void FUN_103d43440(void)

{
  undefined *puVar1;
  
  if (puRam00000001130052a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc80d80;
  func_0x000107c61520(&UNK_10dc80d80,&UNK_110703e60);
  puRam00000001130052a0 = puVar1;
  return;
}



/* Entry: 103d43480; end: 103d43493;  */

void FUN_103d43480(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d43494();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103d434d4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d43494; end: 103d4353f;  */

void FUN_103d43494(void)

{
  undefined *puVar1;
  
  if (puRam00000001130052a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc80e40;
  func_0x000107c61520(&UNK_10dc80e40,&UNK_110703ef0);
  puRam00000001130052a8 = puVar1;
  return;
}



/* Entry: 103d43540; end: 103d43543;  */

void FUN_103d43540(void)

{
  undefined *puVar1;
  
  if (puRam00000001130052c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc80e80;
  func_0x000107c61520(&UNK_10dc80e80,&UNK_110703ef0);
  puRam00000001130052c8 = puVar1;
  return;
}



/* Entry: 103d43544; end: 103d43583;  */

void FUN_103d43544(void)

{
  undefined *puVar1;
  
  if (puRam00000001130052c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc80e80;
  func_0x000107c61520(&UNK_10dc80e80,&UNK_110703ef0);
  puRam00000001130052c8 = puVar1;
  return;
}



/* Entry: 103d43584; end: 103d43597;  */

void FUN_103d43584(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d43598();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103d435d8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d43598; end: 103d43643;  */

void FUN_103d43598(void)

{
  undefined *puVar1;
  
  if (puRam00000001130052d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc80f40;
  func_0x000107c61520(&UNK_10dc80f40,&UNK_110703f80);
  puRam00000001130052d0 = puVar1;
  return;
}



/* Entry: 103d43644; end: 103d43647;  */

void FUN_103d43644(void)

{
  undefined *puVar1;
  
  if (puRam00000001130052f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc80f80;
  func_0x000107c61520(&UNK_10dc80f80,&UNK_110703f80);
  puRam00000001130052f0 = puVar1;
  return;
}



/* Entry: 103d43648; end: 103d43687;  */

void FUN_103d43648(void)

{
  undefined *puVar1;
  
  if (puRam00000001130052f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc80f80;
  func_0x000107c61520(&UNK_10dc80f80,&UNK_110703f80);
  puRam00000001130052f0 = puVar1;
  return;
}



/* Entry: 103d43688; end: 103d4369b;  */

void FUN_103d43688(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d4369c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103d436dc)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d4369c; end: 103d43747;  */

void FUN_103d4369c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130052f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81040;
  func_0x000107c61520(&UNK_10dc81040,&UNK_110704010);
  puRam00000001130052f8 = puVar1;
  return;
}



/* Entry: 103d43748; end: 103d4374b;  */

void FUN_103d43748(void)

{
  undefined *puVar1;
  
  if (puRam0000000113005318 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81080;
  func_0x000107c61520(&UNK_10dc81080,&UNK_110704010);
  puRam0000000113005318 = puVar1;
  return;
}



/* Entry: 103d4374c; end: 103d4378b;  */

void FUN_103d4374c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113005318 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81080;
  func_0x000107c61520(&UNK_10dc81080,&UNK_110704010);
  puRam0000000113005318 = puVar1;
  return;
}



/* Entry: 103d4378c; end: 103d4379f;  */

void FUN_103d4378c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d437a0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103d437e0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d437a0; end: 103d4384b;  */

void FUN_103d437a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113005320 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81140;
  func_0x000107c61520(&UNK_10dc81140,&UNK_1107040a0);
  puRam0000000113005320 = puVar1;
  return;
}



/* Entry: 103d4384c; end: 103d4384f;  */

void FUN_103d4384c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113005340 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81180;
  func_0x000107c61520(&UNK_10dc81180,&UNK_1107040a0);
  puRam0000000113005340 = puVar1;
  return;
}



/* Entry: 103d43850; end: 103d4388f;  */

void FUN_103d43850(void)

{
  undefined *puVar1;
  
  if (puRam0000000113005340 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81180;
  func_0x000107c61520(&UNK_10dc81180,&UNK_1107040a0);
  puRam0000000113005340 = puVar1;
  return;
}



/* Entry: 103d43890; end: 103d438a3;  */

void FUN_103d43890(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d438a4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103d438e4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d438a4; end: 103d4394f;  */

void FUN_103d438a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113005348 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81240;
  func_0x000107c61520(&UNK_10dc81240,&UNK_110704130);
  puRam0000000113005348 = puVar1;
  return;
}



/* Entry: 103d43950; end: 103d43953;  */

void FUN_103d43950(void)

{
  undefined *puVar1;
  
  if (puRam0000000113005368 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81280;
  func_0x000107c61520(&UNK_10dc81280,&UNK_110704130);
  puRam0000000113005368 = puVar1;
  return;
}



/* Entry: 103d43954; end: 103d43993;  */

void FUN_103d43954(void)

{
  undefined *puVar1;
  
  if (puRam0000000113005368 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81280;
  func_0x000107c61520(&UNK_10dc81280,&UNK_110704130);
  puRam0000000113005368 = puVar1;
  return;
}



/* Entry: 103d43994; end: 103d439a7;  */

void FUN_103d43994(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d439a8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103d439e8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d439a8; end: 103d43a53;  */

void FUN_103d439a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113005370 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81340;
  func_0x000107c61520(&UNK_10dc81340,&UNK_1107041c0);
  puRam0000000113005370 = puVar1;
  return;
}



/* Entry: 103d43a54; end: 103d43a57;  */

void FUN_103d43a54(void)

{
  undefined *puVar1;
  
  if (puRam0000000113005390 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81380;
  func_0x000107c61520(&UNK_10dc81380,&UNK_1107041c0);
  puRam0000000113005390 = puVar1;
  return;
}



/* Entry: 103d43a58; end: 103d43a97;  */

void FUN_103d43a58(void)

{
  undefined *puVar1;
  
  if (puRam0000000113005390 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81380;
  func_0x000107c61520(&UNK_10dc81380,&UNK_1107041c0);
  puRam0000000113005390 = puVar1;
  return;
}



/* Entry: 103d43a98; end: 103d43aab;  */

void FUN_103d43a98(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d43aac();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103d43aec)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d43aac; end: 103d43b57;  */

void FUN_103d43aac(void)

{
  undefined *puVar1;
  
  if (puRam0000000113005398 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81440;
  func_0x000107c61520(&UNK_10dc81440,&UNK_110704250);
  puRam0000000113005398 = puVar1;
  return;
}



/* Entry: 103d43b58; end: 103d43b5b;  */

void FUN_103d43b58(void)

{
  undefined *puVar1;
  
  if (puRam00000001130053b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81480;
  func_0x000107c61520(&UNK_10dc81480,&UNK_110704250);
  puRam00000001130053b8 = puVar1;
  return;
}



/* Entry: 103d43b5c; end: 103d43b9b;  */

void FUN_103d43b5c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130053b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81480;
  func_0x000107c61520(&UNK_10dc81480,&UNK_110704250);
  puRam00000001130053b8 = puVar1;
  return;
}



/* Entry: 103d43b9c; end: 103d43baf;  */

void FUN_103d43b9c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d43bb0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103d43bf0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d43bb0; end: 103d43c5b;  */

void FUN_103d43bb0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130053c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81540;
  func_0x000107c61520(&UNK_10dc81540,&UNK_1107048c8);
  puRam00000001130053c0 = puVar1;
  return;
}



/* Entry: 103d43c5c; end: 103d43c5f;  */

void FUN_103d43c5c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130053e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81580;
  func_0x000107c61520(&UNK_10dc81580,&UNK_1107048c8);
  puRam00000001130053e0 = puVar1;
  return;
}



/* Entry: 103d43c60; end: 103d43c9f;  */

void FUN_103d43c60(void)

{
  undefined *puVar1;
  
  if (puRam00000001130053e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81580;
  func_0x000107c61520(&UNK_10dc81580,&UNK_1107048c8);
  puRam00000001130053e0 = puVar1;
  return;
}



/* Entry: 103d43ca0; end: 103d43cb3;  */

void FUN_103d43ca0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d43cb4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103d43cf4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d43cb4; end: 103d43d5f;  */

void FUN_103d43cb4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130053e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81640;
  func_0x000107c61520(&UNK_10dc81640,&UNK_110705b18);
  puRam00000001130053e8 = puVar1;
  return;
}



/* Entry: 103d43d60; end: 103d43d63;  */

void FUN_103d43d60(void)

{
  undefined *puVar1;
  
  if (puRam0000000113005408 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81680;
  func_0x000107c61520(&UNK_10dc81680,&UNK_110705b18);
  puRam0000000113005408 = puVar1;
  return;
}



/* Entry: 103d43d64; end: 103d43da3;  */

void FUN_103d43d64(void)

{
  undefined *puVar1;
  
  if (puRam0000000113005408 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81680;
  func_0x000107c61520(&UNK_10dc81680,&UNK_110705b18);
  puRam0000000113005408 = puVar1;
  return;
}



/* Entry: 103d43da4; end: 103d43db7;  */

void FUN_103d43da4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d43db8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103d43df8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d43db8; end: 103d43e63;  */

void FUN_103d43db8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113005410 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81740;
  func_0x000107c61520(&UNK_10dc81740,&UNK_1107061b8);
  puRam0000000113005410 = puVar1;
  return;
}



/* Entry: 103d43e64; end: 103d43e67;  */

void FUN_103d43e64(void)

{
  undefined *puVar1;
  
  if (puRam0000000113005430 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81780;
  func_0x000107c61520(&UNK_10dc81780,&UNK_1107061b8);
  puRam0000000113005430 = puVar1;
  return;
}



/* Entry: 103d43e68; end: 103d43ea7;  */

void FUN_103d43e68(void)

{
  undefined *puVar1;
  
  if (puRam0000000113005430 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81780;
  func_0x000107c61520(&UNK_10dc81780,&UNK_1107061b8);
  puRam0000000113005430 = puVar1;
  return;
}



/* Entry: 103d43ea8; end: 103d43ebb;  */

void FUN_103d43ea8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d43ebc();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103d43efc)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d43ebc; end: 103d43f67;  */

void FUN_103d43ebc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113005438 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81840;
  func_0x000107c61520(&UNK_10dc81840,&UNK_1107062c8);
  puRam0000000113005438 = puVar1;
  return;
}



/* Entry: 103d43f68; end: 103d43fab;  */

void FUN_103d43f68(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 103d43fac; end: 103d43faf;  */

void FUN_103d43fac(void)

{
  undefined *puVar1;
  
  if (puRam0000000113005458 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81880;
  func_0x000107c61520(&UNK_10dc81880,&UNK_1107062c8);
  puRam0000000113005458 = puVar1;
  return;
}



/* Entry: 103d43fb0; end: 103d43fef;  */

void FUN_103d43fb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113005458 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81880;
  func_0x000107c61520(&UNK_10dc81880,&UNK_1107062c8);
  puRam0000000113005458 = puVar1;
  return;
}



/* Entry: 103d43ff0; end: 103d44013;  */

void FUN_103d43ff0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d44014();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d44014; end: 103d44053;  */

void FUN_103d44014(void)

{
  undefined *puVar1;
  
  if (puRam0000000113005460 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81970;
  func_0x000107c61520(&UNK_10dc81970,&UNK_1107042c8);
  puRam0000000113005460 = puVar1;
  return;
}



/* Entry: 103d44054; end: 103d4406b;  */

void FUN_103d44054(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d3ee1c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103cd4430)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d4406c; end: 103d440ab;  */

void FUN_103d4406c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113005468 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc819d8;
  func_0x000107c61520(&UNK_10dc819d8,&UNK_1107042c8);
  puRam0000000113005468 = puVar1;
  return;
}



/* Entry: 103d440ac; end: 103d440cf;  */

void FUN_103d440ac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d440d0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d440d0; end: 103d4410f;  */

void FUN_103d440d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113005470 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81a48;
  func_0x000107c61520(&UNK_10dc81a48,&UNK_110704350);
  puRam0000000113005470 = puVar1;
  return;
}



/* Entry: 103d44110; end: 103d44127;  */

void FUN_103d44110(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103d3ee5c)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103cd4470)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d44128; end: 103d44167;  */

void FUN_103d44128(void)

{
  undefined *puVar1;
  
  if (puRam0000000113005478 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81ab0;
  func_0x000107c61520(&UNK_10dc81ab0,&UNK_110704350);
  puRam0000000113005478 = puVar1;
  return;
}



/* Entry: 103d44168; end: 103d4418b;  */

void FUN_103d44168(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d4418c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d4418c; end: 103d441cb;  */

void FUN_103d4418c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113005480 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81b20;
  func_0x000107c61520(&UNK_10dc81b20,&UNK_1107043d8);
  puRam0000000113005480 = puVar1;
  return;
}



/* Entry: 103d441cc; end: 103d441e3;  */

void FUN_103d441cc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103d3ee9c)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103cd471c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d441e4; end: 103d44223;  */

void FUN_103d441e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113005488 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81b88;
  func_0x000107c61520(&UNK_10dc81b88,&UNK_1107043d8);
  puRam0000000113005488 = puVar1;
  return;
}



/* Entry: 103d44224; end: 103d44247;  */

void FUN_103d44224(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d44248();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d44248; end: 103d44287;  */

void FUN_103d44248(void)

{
  undefined *puVar1;
  
  if (puRam0000000113005490 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81bf8;
  func_0x000107c61520(&UNK_10dc81bf8,&UNK_110704460);
  puRam0000000113005490 = puVar1;
  return;
}



/* Entry: 103d44288; end: 103d4429f;  */

void FUN_103d44288(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103d3eedc)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103cd475c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d442a0; end: 103d442df;  */

void FUN_103d442a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113005498 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc81c60;
  func_0x000107c61520(&UNK_10dc81c60,&UNK_110704460);
  puRam0000000113005498 = puVar1;
  return;
}



/* Entry: 103d442e0; end: 103d44303;  */

void FUN_103d442e0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d44304();
  *(long *)(param_1 + 8) = lVar1;
  return;
}


