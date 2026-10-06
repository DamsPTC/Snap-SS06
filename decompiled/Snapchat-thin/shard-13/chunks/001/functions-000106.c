/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10a11b830; end: 10a11cfd7;  */

/* WARNING: Removing unreachable block (ram,0x00010a11c5bc) */
/* WARNING: Type propagation algorithm not settling */

long * FUN_10a11b830(long *param_1,undefined8 param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  undefined1 (*pauVar7) [12];
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  uint *puVar12;
  undefined4 uVar13;
  code *pcVar14;
  bool bVar15;
  bool bVar16;
  char *pcVar17;
  long *plVar18;
  undefined8 ******ppppppuVar19;
  undefined8 *******pppppppuVar20;
  undefined8 *******pppppppuVar21;
  long *plVar22;
  long lVar23;
  uint *puVar24;
  float *pfVar25;
  undefined8 *puVar26;
  float *pfVar27;
  float *pfVar28;
  ulong uVar29;
  ulong uVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  uint uVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  float fVar38;
  uint uVar39;
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 uVar46;
  float fVar48;
  undefined1 auVar47 [16];
  float fVar49;
  undefined8 uVar50;
  undefined8 uVar51;
  float fVar54;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar55;
  int iVar56;
  undefined8 uVar57;
  int iVar59;
  undefined1 auVar58 [16];
  float fVar60;
  undefined8 *******pppppppuStack_300;
  ulong uStack_2f8;
  byte bStack_2e9;
  long alStack_2e8 [40];
  undefined1 uStack_1a1;
  undefined8 uStack_1a0;
  ulong uStack_198;
  byte bStack_190;
  undefined8 *******pppppppuStack_188;
  ulong uStack_180;
  undefined8 *******pppppppuStack_178;
  undefined4 uStack_170;
  int iStack_16c;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[0x38] = 0;
  param_1[0x37] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x34] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x35] = 0;
  param_1[0x30] = 0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x31] = 0;
  param_1[0x2c] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2d] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0xbf800000;
  *(undefined2 *)((long)param_1 + 0x1dc) = 0;
  FUN_10a0f6e20(alStack_2e8,param_2,0);
  pcVar17 = "version";
  pppppppuStack_188 = (undefined8 *******)0x10f267542;
  uStack_180 = 7;
  uStack_170 = 7;
  func_0x00010a107b84();
  iVar56 = 0xf267542;
  iVar59 = 7;
  pppppppuStack_178 = (undefined8 *******)pcVar17;
  FUN_10a107c14();
  iStack_16c = iVar56 * -0x29aff4bf + iVar59 * 0xc0eb86b;
  plVar18 = alStack_2e8;
  FUN_10a0f7e0c(plVar18,&pppppppuStack_188);
  if ((int)plVar18 != 1) {
    FUN_10a00946c(&UNK_10f63b8ac);
    goto LAB_10a11cdb8;
  }
  ppppppuVar19 = (undefined8 ******)&DAT_10f637eac;
  pppppppuStack_188 = (undefined8 *******)&DAT_10f637eac;
  uStack_180 = 5;
  uVar13 = 5;
  func_0x00010a107b84();
  uStack_170 = uVar13;
  iVar56 = 0xf637eac;
  iVar59 = 5;
  pppppppuStack_178 = (undefined8 *******)ppppppuVar19;
  FUN_10a107c14();
  iStack_16c = iVar56 * -0x29aff4bf + iVar59 * 0xc0eb86b;
  plVar18 = alStack_2e8;
  FUN_10a0f7e0c(plVar18,&pppppppuStack_188);
  func_0x000107c2b054(&pppppppuStack_300,&UNK_10f63d556);
  uVar30 = uStack_2f8;
  pppppppuVar21 = pppppppuStack_300;
  if (-1 < (char)bStack_2e9) {
    uVar30 = (ulong)bStack_2e9;
    pppppppuVar21 = &pppppppuStack_300;
  }
  pppppppuVar20 = pppppppuVar21;
  uVar29 = uVar30;
  pppppppuStack_188 = pppppppuVar21;
  uStack_180 = uVar30;
  func_0x00010a107b84();
  uStack_170 = (undefined4)uVar29;
  pppppppuStack_178 = pppppppuVar20;
  FUN_10a107c14();
  iStack_16c = (int)pppppppuVar21 * -0x29aff4bf + (int)uVar30 * 0xc0eb86b;
  (**(code **)(alStack_2e8[0] + 0x1d8))(&uStack_1a0,alStack_2e8,&pppppppuStack_188);
  uVar30 = uStack_198;
  if ((bStack_190 & 1) == 0) {
    FUN_109febc44(&pppppppuStack_188);
    FUN_10a002568(&pppppppuStack_178,&UNK_10f63e5bc,0x1c);
    if (-1 < (char)bStack_2e9) {
      uStack_2f8 = (ulong)bStack_2e9;
      pppppppuStack_300 = &pppppppuStack_300;
    }
    FUN_10a002568(&pppppppuStack_178,pppppppuStack_300,uStack_2f8);
    FUN_10a05168c(&uStack_1a1,&pppppppuStack_178);
    goto LAB_10a11cdb8;
  }
  uVar29 = uStack_198 / 0x18;
  if (uStack_198 % 0x18 != 0) {
    FUN_109febc44(&pppppppuStack_188);
    FUN_10a002568(&pppppppuStack_178,&UNK_10f63e5d9,0x1d);
    if (-1 < (char)bStack_2e9) {
      uStack_2f8 = (ulong)bStack_2e9;
      pppppppuStack_300 = &pppppppuStack_300;
    }
    FUN_10a002568(&pppppppuStack_178,pppppppuStack_300,uStack_2f8);
    FUN_10a002568(&pppppppuStack_178,&UNK_10f63e5f7,0x30);
    FUN_10a05168c(&uStack_1a1,&pppppppuStack_178);
    goto LAB_10a11cdb8;
  }
  lVar23 = param_1[0xc];
  lVar31 = param_1[0xd];
  lVar37 = lVar31 - lVar23;
  bVar16 = uVar29 < (ulong)((lVar37 >> 3) * -0x5555555555555555);
  uVar33 = uVar29 + (lVar37 >> 3) * 0x5555555555555555;
  if (bVar16 || uVar33 == 0) {
    if (bVar16) {
      lVar31 = lVar23 + uVar29 * 0x18;
      goto LAB_10a11bb5c;
    }
  }
  else if ((ulong)((param_1[0xe] - lVar31 >> 3) * -0x5555555555555555) < uVar33) {
    lVar31 = param_1[0xe] - lVar23 >> 3;
    uVar32 = lVar31 * 0x5555555555555556;
    if (uVar32 < uVar29 || uVar32 - uVar29 == 0) {
      uVar32 = uVar29;
    }
    if (0x555555555555554 < (ulong)(lVar31 * -0x5555555555555555)) {
      uVar32 = 0xaaaaaaaaaaaaaaa;
    }
    if (0xaaaaaaaaaaaaaaa < uVar32) {
LAB_10a11cdb4:
      func_0x000109ffded8();
      goto LAB_10a11cdb8;
    }
    lVar31 = uVar32 * 0x18;
    __Znwm();
    lVar36 = ((uVar33 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    _bzero(lVar31 + lVar37,lVar36);
    _memcpy(lVar31,lVar23,lVar37);
    param_1[0xc] = lVar31;
    param_1[0xd] = lVar31 + lVar37 + lVar36;
    param_1[0xe] = lVar31 + uVar32 * 0x18;
    if (lVar23 != 0) {
      __ZdlPv(lVar23);
    }
  }
  else {
    lVar23 = ((uVar33 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
    _bzero(lVar31,lVar23);
    lVar31 = lVar31 + lVar23;
LAB_10a11bb5c:
    param_1[0xd] = lVar31;
  }
  _memcpy(param_1[0xc],uStack_1a0,uVar30);
  if ((char)bStack_2e9 < '\0') {
    __ZdlPv(pppppppuStack_300);
  }
  func_0x000107c2b054(&pppppppuStack_188,&DAT_10f325b95);
  FUN_10a11cfd8(alStack_2e8,&pppppppuStack_188,param_1 + 0xf);
  if ((long)pppppppuStack_178 < 0) {
    __ZdlPv(pppppppuStack_188);
  }
  func_0x000107c2b054(&pppppppuStack_188,&UNK_10f63d55b);
  FUN_10a11cfd8(alStack_2e8,&pppppppuStack_188,param_1 + 0x12);
  if ((long)pppppppuStack_178 < 0) {
    __ZdlPv(pppppppuStack_188);
  }
  func_0x000107c2b054(&pppppppuStack_300,&UNK_10f63d562);
  uVar30 = uStack_2f8;
  pppppppuVar21 = pppppppuStack_300;
  if (-1 < (char)bStack_2e9) {
    uVar30 = (ulong)bStack_2e9;
    pppppppuVar21 = &pppppppuStack_300;
  }
  pppppppuVar20 = pppppppuVar21;
  uVar29 = uVar30;
  pppppppuStack_188 = pppppppuVar21;
  uStack_180 = uVar30;
  func_0x00010a107b84();
  uStack_170 = (undefined4)uVar29;
  pppppppuStack_178 = pppppppuVar20;
  FUN_10a107c14();
  iStack_16c = (int)pppppppuVar21 * -0x29aff4bf + (int)uVar30 * 0xc0eb86b;
  (**(code **)(alStack_2e8[0] + 0x1d8))(&uStack_1a0,alStack_2e8,&pppppppuStack_188);
  uVar30 = uStack_198;
  if ((bStack_190 & 1) == 0) {
    FUN_109febc44(&pppppppuStack_188);
    FUN_10a002568(&pppppppuStack_178,&UNK_10f63e5bc,0x1c);
    if (-1 < (char)bStack_2e9) {
      uStack_2f8 = (ulong)bStack_2e9;
      pppppppuStack_300 = &pppppppuStack_300;
    }
    FUN_10a002568(&pppppppuStack_178,pppppppuStack_300,uStack_2f8);
    FUN_10a05168c(&uStack_1a1,&pppppppuStack_178);
    goto LAB_10a11cdb8;
  }
  if ((uStack_198 & 0xf) != 0) {
    FUN_109febc44(&pppppppuStack_188);
    FUN_10a002568(&pppppppuStack_178,&UNK_10f63e5d9,0x1d);
    if (-1 < (char)bStack_2e9) {
      uStack_2f8 = (ulong)bStack_2e9;
      pppppppuStack_300 = &pppppppuStack_300;
    }
    FUN_10a002568(&pppppppuStack_178,pppppppuStack_300,uStack_2f8);
    FUN_10a002568(&pppppppuStack_178,&UNK_10f63e5f7,0x30);
    FUN_10a05168c(&uStack_1a1,&pppppppuStack_178);
    goto LAB_10a11cdb8;
  }
  func_0x00010983d018(param_1 + 0x15,uStack_198 >> 4);
  _memcpy(param_1[0x15],uStack_1a0,uVar30);
  if ((char)bStack_2e9 < '\0') {
    __ZdlPv(pppppppuStack_300);
  }
  func_0x000107c2b054(&pppppppuStack_188,&UNK_10f63d56e);
  FUN_10a11d1c4(alStack_2e8,&pppppppuStack_188,param_1 + 0x18);
  if ((long)pppppppuStack_178 < 0) {
    __ZdlPv(pppppppuStack_188);
  }
  func_0x000107c2b054(&pppppppuStack_300,&UNK_10f63d578);
  uVar30 = uStack_2f8;
  pppppppuVar21 = pppppppuStack_300;
  if (-1 < (char)bStack_2e9) {
    uVar30 = (ulong)bStack_2e9;
    pppppppuVar21 = &pppppppuStack_300;
  }
  pppppppuVar20 = pppppppuVar21;
  uVar29 = uVar30;
  pppppppuStack_188 = pppppppuVar21;
  uStack_180 = uVar30;
  func_0x00010a107b84();
  uStack_170 = (undefined4)uVar29;
  pppppppuStack_178 = pppppppuVar20;
  FUN_10a107c14();
  iStack_16c = (int)pppppppuVar21 * -0x29aff4bf + (int)uVar30 * 0xc0eb86b;
  (**(code **)(alStack_2e8[0] + 0x1d8))(&uStack_1a0,alStack_2e8,&pppppppuStack_188);
  uVar30 = uStack_198;
  if ((bStack_190 & 1) == 0) {
    FUN_109febc44(&pppppppuStack_188);
    FUN_10a002568(&pppppppuStack_178,&UNK_10f63e5bc,0x1c);
    if (-1 < (char)bStack_2e9) {
      uStack_2f8 = (ulong)bStack_2e9;
      pppppppuStack_300 = &pppppppuStack_300;
    }
    FUN_10a002568(&pppppppuStack_178,pppppppuStack_300,uStack_2f8);
    FUN_10a05168c(&uStack_1a1,&pppppppuStack_178);
    goto LAB_10a11cdb8;
  }
  if ((uStack_198 & 3) != 0) {
    FUN_109febc44(&pppppppuStack_188);
    FUN_10a002568(&pppppppuStack_178,&UNK_10f63e5d9,0x1d);
    if (-1 < (char)bStack_2e9) {
      uStack_2f8 = (ulong)bStack_2e9;
      pppppppuStack_300 = &pppppppuStack_300;
    }
    FUN_10a002568(&pppppppuStack_178,pppppppuStack_300,uStack_2f8);
    FUN_10a002568(&pppppppuStack_178,&UNK_10f63e5f7,0x30);
    FUN_10a05168c(&uStack_1a1,&pppppppuStack_178);
    goto LAB_10a11cdb8;
  }
  func_0x000108a5942c(param_1 + 0x1b,uStack_198 >> 2);
  _memcpy(param_1[0x1b],uStack_1a0,uVar30);
  if ((char)bStack_2e9 < '\0') {
    __ZdlPv(pppppppuStack_300);
  }
  func_0x000107c2b054(&pppppppuStack_188,&UNK_10f63d584);
  FUN_10a11cfd8(alStack_2e8,&pppppppuStack_188,param_1);
  if ((long)pppppppuStack_178 < 0) {
    __ZdlPv(pppppppuStack_188);
  }
  func_0x000107c2b054(&pppppppuStack_300,&UNK_10f63d593);
  uVar30 = uStack_2f8;
  pppppppuVar21 = pppppppuStack_300;
  if (-1 < (char)bStack_2e9) {
    uVar30 = (ulong)bStack_2e9;
    pppppppuVar21 = &pppppppuStack_300;
  }
  pppppppuVar20 = pppppppuVar21;
  uVar29 = uVar30;
  pppppppuStack_188 = pppppppuVar21;
  uStack_180 = uVar30;
  func_0x00010a107b84();
  uStack_170 = (undefined4)uVar29;
  pppppppuStack_178 = pppppppuVar20;
  FUN_10a107c14();
  iStack_16c = (int)pppppppuVar21 * -0x29aff4bf + (int)uVar30 * 0xc0eb86b;
  (**(code **)(alStack_2e8[0] + 0x1d8))(&uStack_1a0,alStack_2e8,&pppppppuStack_188);
  if ((bStack_190 & 1) == 0) {
    FUN_109febc44(&pppppppuStack_188);
    FUN_10a002568(&pppppppuStack_178,&UNK_10f63e5bc,0x1c);
    if (-1 < (char)bStack_2e9) {
      uStack_2f8 = (ulong)bStack_2e9;
      pppppppuStack_300 = &pppppppuStack_300;
    }
    FUN_10a002568(&pppppppuStack_178,pppppppuStack_300,uStack_2f8);
    FUN_10a05168c(&uStack_1a1,&pppppppuStack_178);
    goto LAB_10a11cdb8;
  }
  uVar30 = uStack_198 / 0xc;
  if (uStack_198 % 0xc != 0) {
    FUN_109febc44(&pppppppuStack_188);
    FUN_10a002568(&pppppppuStack_178,&UNK_10f63e5d9,0x1d);
    if (-1 < (char)bStack_2e9) {
      uStack_2f8 = (ulong)bStack_2e9;
      pppppppuStack_300 = &pppppppuStack_300;
    }
    FUN_10a002568(&pppppppuStack_178,pppppppuStack_300,uStack_2f8);
    FUN_10a002568(&pppppppuStack_178,&UNK_10f63e5f7,0x30);
    FUN_10a05168c(&uStack_1a1,&pppppppuStack_178);
    goto LAB_10a11cdb8;
  }
  lVar23 = param_1[3];
  lVar31 = param_1[4];
  lVar37 = lVar31 - lVar23 >> 2;
  bVar16 = uVar30 < (ulong)(lVar37 * -0x5555555555555555);
  uVar29 = uVar30 + lVar37 * 0x5555555555555555;
  if (bVar16 || uVar29 == 0) {
    if (bVar16) {
      lVar31 = lVar23 + uVar30 * 0xc;
      goto LAB_10a11bf5c;
    }
  }
  else if ((ulong)((param_1[5] - lVar31 >> 2) * -0x5555555555555555) < uVar29) {
    lVar37 = param_1[5] - lVar23 >> 2;
    uVar33 = lVar37 * 0x5555555555555556;
    if (uVar33 < uVar30 || uVar33 - uVar30 == 0) {
      uVar33 = uVar30;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar37 * -0x5555555555555555)) {
      uVar33 = 0x1555555555555555;
    }
    plVar22 = param_1 + 3;
    FUN_10a144824();
    lVar31 = (long)plVar22 + (lVar31 - lVar23);
    lVar36 = ((uVar29 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
    _bzero(lVar31,lVar36);
    lVar37 = lVar31 - (param_1[4] - param_1[3]);
    _memcpy(lVar37);
    lVar23 = param_1[3];
    param_1[3] = lVar37;
    param_1[4] = lVar31 + lVar36;
    param_1[5] = (long)plVar22 + uVar33 * 0xc;
    if (lVar23 != 0) {
      __ZdlPv();
    }
  }
  else {
    lVar23 = ((uVar29 * 0xc - 0xc) / 0xc) * 0xc + 0xc;
    _bzero(lVar31,lVar23);
    lVar31 = lVar31 + lVar23;
LAB_10a11bf5c:
    param_1[4] = lVar31;
  }
  _memcpy(param_1[3],uStack_1a0,uStack_198);
  if ((char)bStack_2e9 < '\0') {
    __ZdlPv(pppppppuStack_300);
  }
  func_0x000107c2b054(&pppppppuStack_188,&UNK_10f63d5a2);
  FUN_10a11d1c4(alStack_2e8,&pppppppuStack_188,param_1 + 6);
  if ((long)pppppppuStack_178 < 0) {
    __ZdlPv(pppppppuStack_188);
  }
  func_0x000107c2b054(&pppppppuStack_188,&UNK_10f63d5ac);
  FUN_10a11d1c4(alStack_2e8,&pppppppuStack_188,param_1 + 9);
  if ((long)pppppppuStack_178 < 0) {
    __ZdlPv(pppppppuStack_188);
  }
  uVar30 = (param_1[4] - param_1[3] >> 2) * -0x5555555555555555;
  uVar39 = (uint)uVar30;
  if (0 < (int)uVar39) {
    lVar31 = *param_1;
    lVar23 = param_1[1];
    uVar29 = (lVar23 - lVar31 >> 2) * -0x5555555555555555;
    uVar34 = (uint)uVar29;
    if (2 < (int)uVar34) {
      uVar30 = uVar30 & 0x7fffffff;
      if (uVar30 != 0) {
        uVar33 = 0;
        do {
          puVar24 = (uint *)(param_1[3] + uVar33 * 0xc);
          uVar3 = *puVar24;
          uVar4 = puVar24[1];
          if (uVar3 == uVar4) goto LAB_10a11c6b0;
          uVar6 = puVar24[2];
          if ((((uVar3 == uVar6 || uVar4 == uVar6) || uVar34 <= uVar3) || uVar34 <= uVar4) ||
              uVar34 <= uVar6) goto LAB_10a11c6b0;
          if ((uVar29 < uVar3 || uVar29 - uVar3 == 0) || (uVar29 < uVar4 || uVar29 - uVar4 == 0))
          goto LAB_10a11cdb8;
          pfVar28 = (float *)(lVar31 + (ulong)uVar3 * 0xc);
          pfVar27 = (float *)(lVar31 + (ulong)uVar4 * 0xc);
          fVar42 = *pfVar28;
          fVar41 = *pfVar27;
          if ((fVar42 == fVar41) && ((pfVar28[1] == pfVar27[1] && (pfVar28[2] == pfVar27[2]))))
          goto LAB_10a11c6b0;
          if (uVar29 < uVar6 || uVar29 - uVar6 == 0) goto LAB_10a11cdb8;
          pfVar25 = (float *)(lVar31 + (ulong)uVar6 * 0xc);
          fVar38 = *pfVar25;
          if ((((fVar42 == fVar38) && (pfVar28[1] == pfVar25[1])) && (pfVar28[2] == pfVar25[2])) ||
             (((fVar41 == fVar38 && (pfVar27[1] == pfVar25[1])) && (pfVar27[2] == pfVar25[2]))))
          goto LAB_10a11c6b0;
          iVar56 = 0;
          while ((fVar55 = pfVar28[1], iVar56 == 1 || (fVar55 = fVar42, iVar56 != 2))) {
            bVar16 = INFINITY < ABS(fVar55) || ABS(fVar55) < INFINITY;
            while (iVar56 = iVar56 + 1, !bVar16) {
              if (iVar56 == 2) goto LAB_10a11c6b0;
              bVar16 = false;
            }
          }
          if (0x7f7fffff < (uint)ABS(pfVar28[2])) goto LAB_10a11c6b0;
          iVar56 = 0;
          while ((fVar42 = pfVar27[1], iVar56 == 1 || (fVar42 = fVar41, iVar56 != 2))) {
            bVar16 = INFINITY < ABS(fVar42) || ABS(fVar42) < INFINITY;
            while (iVar56 = iVar56 + 1, !bVar16) {
              if (iVar56 == 2) goto LAB_10a11c6b0;
              bVar16 = false;
            }
          }
          if (0x7f7fffff < (uint)ABS(pfVar27[2])) goto LAB_10a11c6b0;
          iVar56 = 0;
          while ((fVar41 = pfVar25[1], iVar56 == 1 || (fVar41 = fVar38, iVar56 != 2))) {
            bVar16 = INFINITY < ABS(fVar41) || ABS(fVar41) < INFINITY;
            while (iVar56 = iVar56 + 1, !bVar16) {
              if (iVar56 == 2) goto LAB_10a11c6b0;
              bVar16 = false;
            }
          }
          if (0x7f7fffff < (uint)ABS(pfVar25[2])) goto LAB_10a11c6b0;
          uVar33 = uVar33 + 1;
        } while (uVar33 != uVar30);
      }
      lVar37 = param_1[7] - param_1[6];
      if ((uVar29 & 0x7fffffff) == lVar37 >> 2) {
        puVar24 = (uint *)param_1[6];
        if (param_1[10] - param_1[9] == lVar37) {
          do {
            puVar12 = (uint *)param_1[9];
            if (puVar24 == (uint *)param_1[7]) goto joined_r0x00010a11c2a4;
            uVar34 = *puVar24;
            puVar24 = puVar24 + 1;
          } while ((uVar34 & 0x7fffffff) < 0x7f800000);
        }
      }
    }
  }
  goto LAB_10a11c6b0;
  while (uVar34 = *puVar12, puVar12 = puVar12 + 1, (uVar34 & 0x7fffffff) < 0x7f800000) {
joined_r0x00010a11c2a4:
    if (puVar12 == (uint *)param_1[10]) {
      pfVar27 = (float *)param_1[0xc];
      lVar37 = param_1[0xd] - (long)pfVar27 >> 3;
      lVar36 = lVar37 * -0x5555555555555555;
      if (lVar36 - (int)plVar18 == 0) goto joined_r0x00010a11c2ec;
      break;
    }
  }
  goto LAB_10a11c6b0;
joined_r0x00010a11c2ec:
  if (pfVar27 == (float *)param_1[0xd]) goto LAB_10a11c398;
  lVar35 = 0;
  do {
    fVar41 = *(float *)((long)pfVar27 + lVar35);
    bVar16 = false;
    bVar15 = true;
    if (((uint)fVar41 < 0x80000000 && (int)ABS(fVar41) - 0x800000U >> 0x18 < 0x7f ||
        (int)fVar41 - 1U < 0x7fffff) || ABS(fVar41) == 0.0) {
      bVar16 = false;
      bVar15 = true;
      if (!NAN(fVar41)) {
        bVar16 = fVar41 == 1.0;
        bVar15 = 1.0 <= fVar41;
      }
    }
    if (bVar15 && !bVar16) goto LAB_10a11c6b0;
    lVar35 = lVar35 + 4;
  } while (lVar35 != 0x18);
  fVar41 = *pfVar27 + pfVar27[1] + pfVar27[2] + pfVar27[3] + pfVar27[4] + pfVar27[5];
  if ((0x7f7fffff < (uint)ABS(fVar41)) || (0.0001 <= ABS(fVar41 + -1.0))) goto LAB_10a11c6b0;
  pfVar27 = pfVar27 + 6;
  goto joined_r0x00010a11c2ec;
LAB_10a11c5e8:
  if ((0x7f7fffff < (uint)ABS(fVar55)) ||
     (0.0001 <= ABS(SQRT(fVar42 * fVar42 + fVar38 * fVar38 + fVar41 * fVar41 + fVar55 * fVar55) +
                    -1.0))) goto LAB_10a11c6b0;
  pfVar25 = pfVar25 + 4;
  if (pfVar25 == pfVar5) goto LAB_10a11c630;
  goto LAB_10a11c558;
LAB_10a11c69c:
  if (puVar24 != (uint *)param_1[0x1c]) goto code_r0x00010a11c6a4;
  if (pfVar27 != pfVar28) {
    uVar30 = NEON_fmov(0x3f800000,4);
    do {
      fVar41 = 0.0;
      if (0.0 <= pfVar27[2]) {
        fVar41 = pfVar27[2];
      }
      fVar42 = 1.0;
      if (fVar41 <= 1.0) {
        fVar42 = fVar41;
      }
      uVar50 = *(undefined8 *)pfVar27;
      iVar56 = -(uint)((float)uVar50 < 0.0);
      iVar59 = -(uint)((float)((ulong)uVar50 >> 0x20) < 0.0);
      fVar41 = (float)CONCAT13((byte)((ulong)uVar50 >> 0x18) & ~(byte)((uint)iVar56 >> 0x18),
                               CONCAT12((byte)((ulong)uVar50 >> 0x10) &
                                        ~(byte)((uint)iVar56 >> 0x10),
                                        CONCAT11((byte)((ulong)uVar50 >> 8) &
                                                 ~(byte)((uint)iVar56 >> 8),
                                                 (byte)uVar50 & ~(byte)iVar56)));
      uVar29 = CONCAT17((byte)((ulong)uVar50 >> 0x38) & ~(byte)((uint)iVar59 >> 0x18),
                        CONCAT16((byte)((ulong)uVar50 >> 0x30) & ~(byte)((uint)iVar59 >> 0x10),
                                 CONCAT15((byte)((ulong)uVar50 >> 0x28) & ~(byte)((uint)iVar59 >> 8)
                                          ,CONCAT14((byte)((ulong)uVar50 >> 0x20) & ~(byte)iVar59,
                                                    fVar41))));
      *(ulong *)pfVar27 =
           uVar29 ^ (uVar29 ^ uVar30) &
                    CONCAT44(-(uint)((float)(uVar30 >> 0x20) < (float)(uVar29 >> 0x20)),
                             -(uint)((float)uVar30 < fVar41));
      pfVar27[2] = fVar42;
      pfVar27 = pfVar27 + 3;
    } while (pfVar27 != pfVar28);
    lVar31 = *param_1;
    lVar23 = param_1[1];
  }
  if (lVar23 - lVar31 == 0) {
    fVar45 = NAN;
    fVar48 = NAN;
    fVar42 = -INFINITY;
    fVar38 = -INFINITY;
    fVar55 = INFINITY;
    fVar41 = -INFINITY;
  }
  else {
    lVar23 = (lVar23 - lVar31 >> 2) * -0x5555555555555555;
    fVar42 = -INFINITY;
    fVar38 = -INFINITY;
    fVar43 = -INFINITY;
    fVar44 = INFINITY;
    fVar49 = INFINITY;
    fVar54 = -INFINITY;
    pfVar27 = (float *)(lVar31 + 8);
    fVar45 = INFINITY;
    fVar48 = -INFINITY;
    do {
      fVar41 = *pfVar27;
      fVar55 = fVar41;
      if (fVar45 <= fVar41) {
        fVar55 = fVar45;
      }
      fVar45 = pfVar27[-2];
      fVar60 = pfVar27[-1];
      bVar16 = fVar38 < fVar60;
      fVar43 = (float)((uint)fVar43 ^ ((uint)fVar43 ^ (uint)fVar45) & -(uint)(fVar42 < fVar45));
      fVar44 = (float)((uint)fVar44 ^ ((uint)fVar44 ^ (uint)fVar60) & -(uint)(fVar60 < fVar44));
      fVar42 = (float)((uint)fVar42 ^ ((uint)fVar42 ^ (uint)fVar45) & -(uint)(fVar42 < fVar45));
      fVar38 = (float)((uint)fVar38 ^ ((uint)fVar38 ^ (uint)fVar60) & -(uint)(fVar38 < fVar60));
      fVar49 = (float)((uint)fVar49 ^ ((uint)fVar49 ^ (uint)fVar45) & -(uint)(fVar45 < fVar49));
      fVar54 = (float)((uint)fVar54 ^ ((uint)fVar54 ^ (uint)fVar60) & -(uint)bVar16);
      if (fVar41 <= fVar48) {
        fVar41 = fVar48;
      }
      pfVar27 = pfVar27 + 3;
      lVar23 = lVar23 + -1;
      fVar45 = fVar55;
      fVar48 = fVar41;
    } while (lVar23 != 0);
    fVar45 = (fVar49 + fVar43) * 0.5;
    fVar48 = (fVar54 + fVar44) * 0.5;
  }
  fVar55 = (fVar41 + fVar55) * 0.5;
  *(float *)(param_1 + 0x21) = fVar45;
  *(ulong *)((long)param_1 + 0x114) = CONCAT44(fVar38 - fVar48,fVar42 - fVar45);
  *(ulong *)((long)param_1 + 0x10c) = CONCAT44(fVar55,fVar48);
  *(float *)((long)param_1 + 0x11c) = fVar41 - fVar55;
  plVar18 = param_1;
  func_0x00010a11d58c(param_1,param_1);
  plVar22 = param_1;
  func_0x00010a11d9b4(param_1,param_1,plVar18);
  uVar30 = (param_1[0xd] - param_1[0xc] >> 3) * -0x5555555555555555;
  uVar29 = (ulong)(int)uVar30;
  func_0x00010983d018(param_1 + 0x1e,uVar29);
  if ((uVar30 & 0xffffffff) == 0) {
    func_0x00010a11de34(param_1,param_1,plVar18);
LAB_10a11c9f0:
    uVar39 = func_0x00010a11d3a0(param_1,param_1);
    *(uint *)(param_1 + 0x24) = uVar39;
    bVar16 = (uVar39 & 0x7fffffff) - 0x800000 >> 0x18 < 0x7f;
    if (((-1 >= (int)uVar39 || !bVar16) && 0x7ffffd < uVar39 - 1) &&
        (-1 < (int)uVar39 && bVar16 || uVar39 - 1 != 0x7ffffe)) goto LAB_10a11c6b0;
    puVar26 = (undefined8 *)0x68;
    __Znwm();
    *puVar26 = param_1;
    puVar26[1] = 0xffffffffffffffff;
    puVar26[2] = 0xffffffffffffffff;
    puVar26[4] = 0;
    puVar26[3] = 0;
    puVar26[6] = 0;
    puVar26[5] = 0;
    puVar26[8] = 0;
    puVar26[7] = 0;
    puVar26[10] = 0;
    puVar26[9] = 0;
    *(undefined8 *)((long)puVar26 + 0x59) = 0;
    *(undefined8 *)((long)puVar26 + 0x51) = 0;
    lVar31 = param_1[0x25];
    param_1[0x25] = (long)puVar26;
    if (lVar31 != 0) {
      func_0x00010a1447b8(param_1 + 0x25);
    }
    func_0x00010a0f618c(alStack_2e8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
      return param_1;
    }
    ___stack_chk_fail();
    goto LAB_10a11cdb4;
  }
  uVar30 = 0;
  lVar31 = param_1[0x1b];
  lVar37 = param_1[0x1c];
  lVar23 = *plVar22;
  lVar36 = plVar22[1];
  do {
    if ((((lVar37 - lVar31 >> 2 == uVar30) ||
         (uVar33 = (ulong)*(int *)(lVar31 + uVar30 * 4), (ulong)(lVar36 - lVar23 >> 4) <= uVar33))
        || ((ulong)(param_1[0x16] - param_1[0x15] >> 4) <= uVar30)) ||
       ((ulong)(param_1[0x1f] - param_1[0x1e] >> 4) <= uVar30)) goto LAB_10a11cdb8;
    puVar1 = (ulong *)(lVar23 + uVar33 * 0x10);
    fVar48 = *(float *)(puVar1 + 1);
    fVar41 = *(float *)((long)puVar1 + 0xc);
    auVar58._0_8_ = *puVar1;
    auVar58._8_8_ = 0;
    fVar42 = fVar41 * fVar41 + (float)auVar58._0_8_ * (float)auVar58._0_8_ +
             *(float *)((long)puVar1 + 4) * *(float *)((long)puVar1 + 4) + fVar48 * fVar48;
    fVar41 = fVar41 / fVar42;
    auVar47 = NEON_ext(ZEXT416((uint)fVar41),auVar58,0xc,1);
    fVar38 = -fVar48 / fVar42;
    fVar55 = -auVar47._4_4_ / fVar42;
    fVar45 = -auVar47._8_4_ / fVar42;
    fVar42 = -fVar48 / fVar42;
    pauVar7 = (undefined1 (*) [12])(param_1[0x15] + uVar30 * 0x10);
    fVar43 = (float)*(undefined8 *)(*pauVar7 + 8);
    fVar44 = (float)((ulong)*(undefined8 *)(*pauVar7 + 8) >> 0x20);
    uVar50 = *(undefined8 *)*pauVar7;
    auVar11 = *pauVar7;
    auVar10 = *pauVar7;
    auVar9 = *pauVar7;
    fVar48 = (float)((ulong)uVar50 >> 0x20);
    auVar52._4_4_ = fVar44;
    auVar52._0_4_ = fVar44;
    auVar52._8_4_ = fVar44;
    auVar52._12_4_ = fVar44;
    auVar47._4_4_ = fVar55;
    auVar47._0_4_ = fVar38;
    auVar47._8_4_ = fVar45;
    auVar47._12_4_ = fVar42;
    auVar58 = NEON_rev64(auVar47,4);
    auVar53._12_4_ = fVar44;
    auVar53._0_12_ = *pauVar7;
    auVar53 = NEON_ext(auVar52,auVar53,4,1);
    auVar40._4_4_ = fVar38;
    auVar40._0_4_ = -fVar38;
    auVar40._8_4_ = -fVar45;
    auVar40._12_4_ = fVar45;
    auVar8._4_4_ = fVar55;
    auVar8._0_4_ = fVar38;
    auVar8._8_4_ = fVar45;
    auVar8._12_4_ = fVar42;
    auVar47 = NEON_ext(auVar40,auVar8,8,1);
    auVar47 = NEON_ext(auVar47,auVar47,4,1);
    pfVar27 = (float *)(param_1[0x1e] + uVar30 * 0x10);
    pfVar27[2] = (auVar53._8_4_ * auVar58._4_4_ + fVar43 * fVar41 + fVar48 * auVar47._8_4_) -
                 auVar10._0_4_ * fVar45;
    pfVar27[3] = (auVar53._12_4_ * -fVar55 + fVar44 * fVar41 + auVar9._4_4_ * auVar47._12_4_) -
                 auVar10._8_4_ * fVar42;
    *pfVar27 = (auVar53._0_4_ * auVar58._0_4_ + (float)uVar50 * fVar41 + fVar43 * auVar47._0_4_) -
               fVar48 * fVar38;
    pfVar27[1] = (auVar53._4_4_ * fVar45 + fVar48 * fVar41 + auVar9._0_4_ * auVar47._4_4_) -
                 auVar11._8_4_ * fVar55;
    uVar30 = uVar30 + 1;
  } while (uVar29 != uVar30);
  plVar22 = param_1;
  func_0x00010a11de34(param_1,param_1,plVar18);
  lVar31 = 0;
  uVar30 = 0;
  while( true ) {
    if ((plVar22[1] - *plVar22 >> 4 == uVar30) ||
       ((ulong)(param_1[0x16] - param_1[0x15] >> 4) <= uVar30)) goto LAB_10a11cdb8;
    puVar26 = (undefined8 *)(*plVar22 + lVar31);
    puVar2 = (undefined8 *)(param_1[0x15] + lVar31);
    uVar50 = *puVar26;
    uVar46 = puVar26[1];
    uVar51 = *puVar2;
    uVar57 = puVar2[1];
    uVar46 = NEON_rev64(CONCAT44((float)((ulong)uVar46 >> 0x20) * (float)((ulong)uVar57 >> 0x20),
                                 (float)uVar46 * (float)uVar57),4);
    if (0.001 <= ABS(ABS((float)uVar50 * (float)uVar51 + (float)uVar46 +
                         (float)((ulong)uVar50 >> 0x20) * (float)((ulong)uVar51 >> 0x20) +
                         (float)((ulong)uVar46 >> 0x20)) + -1.0)) break;
    uVar30 = uVar30 + 1;
    lVar31 = lVar31 + 0x10;
    if (uVar29 == uVar30) goto LAB_10a11c9f0;
  }
  goto LAB_10a11c6b0;
code_r0x00010a11c6a4:
  uVar34 = *puVar24;
  puVar24 = puVar24 + 1;
  if (uVar39 <= uVar34) goto LAB_10a11c6b0;
  goto LAB_10a11c69c;
LAB_10a11c398:
  pfVar27 = (float *)param_1[0xf];
  pfVar28 = (float *)param_1[0x10];
  pfVar25 = pfVar27;
  if (((long)pfVar28 - (long)pfVar27 >> 2) * -0x5555555555555555 + lVar37 * 0x5555555555555555 == 0)
  {
    for (; pfVar25 != pfVar28; pfVar25 = pfVar25 + 3) {
      iVar56 = 0;
      while ((pfVar5 = pfVar25 + 1, iVar56 == 1 || (pfVar5 = pfVar25, iVar56 != 2))) {
        bVar16 = INFINITY < ABS(*pfVar5) || ABS(*pfVar5) < INFINITY;
        while (iVar56 = iVar56 + 1, !bVar16) {
          if (iVar56 == 2) goto LAB_10a11c6b0;
          bVar16 = false;
        }
      }
      if (0x7f7fffff < (uint)ABS(pfVar25[2])) goto LAB_10a11c6b0;
    }
    pfVar25 = (float *)param_1[0x12];
    if ((param_1[0x13] - (long)pfVar25 >> 2) * -0x5555555555555555 + lVar37 * 0x5555555555555555 ==
        0) {
      for (; pfVar25 != (float *)param_1[0x13]; pfVar25 = pfVar25 + 3) {
        iVar56 = 0;
        fVar38 = *pfVar25;
        fVar42 = pfVar25[1];
        fVar41 = pfVar25[2];
        while ((fVar55 = fVar42, iVar56 == 1 || (fVar55 = fVar38, iVar56 != 2))) {
          bVar16 = INFINITY < ABS(fVar55) || ABS(fVar55) < INFINITY;
          while (iVar56 = iVar56 + 1, !bVar16) {
            if (iVar56 == 2) goto LAB_10a11c6b0;
            bVar16 = false;
          }
        }
        if (((((0x7f7fffff < (uint)ABS(fVar41)) || (fVar38 < 0.0)) || (1.05 < fVar38)) ||
            ((fVar42 < 0.0 || (1.05 < fVar42)))) || ((fVar41 < 0.0 || (1.05 < fVar41))))
        goto LAB_10a11c6b0;
      }
      pfVar25 = (float *)param_1[0x15];
      pfVar5 = (float *)param_1[0x16];
      if (lVar36 - ((long)pfVar5 - (long)pfVar25 >> 4) == 0) {
        if (pfVar25 != pfVar5) {
LAB_10a11c558:
          iVar56 = 0;
          fVar41 = *pfVar25;
          fVar42 = pfVar25[1];
          fVar38 = pfVar25[2];
          fVar55 = pfVar25[3];
          do {
            fVar45 = fVar42;
            if ((iVar56 == 1) || (fVar45 = fVar38, iVar56 == 2)) {
              bVar16 = INFINITY < ABS(fVar45) || ABS(fVar45) < INFINITY;
            }
            else {
              bVar16 = (uint)ABS(fVar41) < 0x7f800000;
              if (iVar56 == 3) goto LAB_10a11c5e8;
            }
            while (iVar56 = iVar56 + 1, !bVar16) {
              if (iVar56 == 3) goto LAB_10a11c6b0;
              bVar16 = false;
            }
          } while( true );
        }
LAB_10a11c630:
        pfVar25 = (float *)param_1[0x18];
        if (lVar36 - (param_1[0x19] - param_1[0x18] >> 2) == 0) {
          do {
            if (pfVar25 == (float *)param_1[0x19]) {
              puVar24 = (uint *)param_1[0x1b];
              if (lVar36 - (param_1[0x1c] - param_1[0x1b] >> 2) == 0) goto LAB_10a11c69c;
              break;
            }
            fVar41 = *pfVar25;
            bVar16 = false;
            bVar15 = true;
            if (((uint)fVar41 < 0x80000000 && (int)ABS(fVar41) - 0x800000U >> 0x18 < 0x7f ||
                (int)fVar41 - 1U < 0x7fffff) || ABS(fVar41) == 0.0) {
              bVar16 = false;
              bVar15 = true;
              if (!NAN(fVar41)) {
                bVar16 = fVar41 == 1.0;
                bVar15 = 1.0 <= fVar41;
              }
            }
            pfVar25 = pfVar25 + 1;
          } while (!bVar15 || bVar16);
        }
      }
    }
  }
LAB_10a11c6b0:
  FUN_10a00946c(&UNK_10f63b8ac);
LAB_10a11cdb8:
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x10a11cdbc);
  (*pcVar14)();
}



/* Entry: 10a11cfd8; end: 10a11d1c3;  */

ulong FUN_10a11cfd8(ulong param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  uint *puVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  undefined1 uStack_2f9;
  long *plStack_2f8;
  ulong uStack_2f0;
  byte bStack_2e8;
  undefined8 *puStack_2e0;
  ulong uStack_2d8;
  undefined8 *puStack_2d0;
  undefined4 uStack_2c8;
  int iStack_2c4;
  long lStack_1c8;
  undefined1 uStack_179;
  undefined8 *puStack_178;
  long *plStack_170;
  byte bStack_168;
  undefined8 *puStack_160;
  ulong uStack_158;
  undefined8 *puStack_150;
  undefined4 uStack_148;
  int iStack_144;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = param_3[1];
  puVar7 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar14 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar7 = param_3;
  }
  puVar11 = puVar7;
  uVar17 = uVar14;
  puStack_160 = puVar7;
  uStack_158 = uVar14;
  func_0x00010a107b84();
  uStack_148 = (undefined4)uVar17;
  puStack_150 = puVar11;
  FUN_10a107c14();
  iStack_144 = (int)puVar7 * -0x29aff4bf + (int)uVar14 * 0xc0eb86b;
  (**(code **)(*param_2 + 0x1d8))(&puStack_178,param_2,&puStack_160);
  if ((bStack_168 & 1) == 0) {
    FUN_109febc44(&puStack_160);
    FUN_10a002568(&puStack_150,&UNK_10f63e5bc,0x1c);
    uVar14 = param_3[1];
    puVar7 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar14 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar7 = param_3;
    }
    FUN_10a002568(&puStack_150,puVar7,uVar14);
    FUN_10a05168c(&uStack_179,&puStack_150);
  }
  else {
    if ((ulong)plStack_170 % 0xc == 0) {
      func_0x0001096b5198(param_4);
      plVar3 = (long *)*param_4;
      _memcpy();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
        return param_1;
      }
      ___stack_chk_fail();
      func_0x000105673d7c(&puStack_160);
      puVar11 = puStack_178;
      plVar8 = plStack_170;
      __Unwind_Resume();
      lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar14 = puVar11[1];
      puVar7 = (undefined8 *)*puVar11;
      if (-1 < (char)*(byte *)((long)puVar11 + 0x17)) {
        uVar14 = (ulong)*(byte *)((long)puVar11 + 0x17);
        puVar7 = puVar11;
      }
      puVar13 = puVar7;
      uVar17 = uVar14;
      puStack_2e0 = puVar7;
      uStack_2d8 = uVar14;
      func_0x00010a107b84();
      uStack_2c8 = (undefined4)uVar17;
      puStack_2d0 = puVar13;
      FUN_10a107c14();
      iStack_2c4 = (int)puVar7 * -0x29aff4bf + (int)uVar14 * 0xc0eb86b;
      (**(code **)(*plVar3 + 0x1d8))(&plStack_2f8,plVar3,&puStack_2e0);
      if ((bStack_2e8 & 1) == 0) {
        FUN_109febc44(&puStack_2e0);
        FUN_10a002568(&puStack_2d0,&UNK_10f63e5bc,0x1c);
        uVar14 = puVar11[1];
        puVar7 = (undefined8 *)*puVar11;
        if (-1 < (char)*(byte *)((long)puVar11 + 0x17)) {
          uVar14 = (ulong)*(byte *)((long)puVar11 + 0x17);
          puVar7 = puVar11;
        }
        FUN_10a002568(&puStack_2d0,puVar7,uVar14);
        FUN_10a05168c(&uStack_2f9,&puStack_2d0);
      }
      else {
        if ((uStack_2f0 & 3) == 0) {
          func_0x00010742a308(plVar8,uStack_2f0 >> 2);
          lVar4 = *plVar8;
          _memcpy(lVar4,plStack_2f8,uStack_2f0);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
            return param_1;
          }
          ___stack_chk_fail();
          func_0x000105673d7c(&puStack_2e0);
          plVar3 = plStack_2f8;
          __Unwind_Resume();
          uVar14 = *(long *)(lVar4 + 0x20) - *(long *)(lVar4 + 0x18);
          func_0x00010742a308(lVar4 + 0x160,(long)(uVar14 * 0x40000000) >> 0x20);
          lVar15 = (uVar14 >> 2) * -0x5555555500000000;
          if (lVar15 == 0) {
            lVar5 = *(long *)(lVar4 + 0x160);
            lVar9 = *(long *)(lVar4 + 0x168);
            lVar20 = lVar9 - lVar5;
          }
          else {
            lVar15 = lVar15 >> 0x20;
            lVar16 = (*(long *)(lVar4 + 0x20) - *(long *)(lVar4 + 0x18) >> 2) * -0x5555555555555555;
            lVar1 = *plVar3;
            uVar17 = (plVar3[1] - lVar1 >> 2) * -0x5555555555555555;
            puVar18 = (uint *)(*(long *)(lVar4 + 0x18) + 4);
            uVar14 = 1;
            lVar19 = 8;
            uVar22 = NEON_fmov(0x40400000,4);
            do {
              if ((((lVar16 == 0) ||
                   (uVar6 = (ulong)puVar18[-1], uVar17 < uVar6 || uVar17 - uVar6 == 0)) ||
                  (uVar10 = (ulong)*puVar18, uVar17 < uVar10 || uVar17 - uVar10 == 0)) ||
                 (uVar12 = (ulong)puVar18[1], uVar17 < uVar12 || uVar17 - uVar12 == 0))
              goto LAB_10a11d588;
              lVar5 = *(long *)(lVar4 + 0x160);
              lVar9 = *(long *)(lVar4 + 0x168);
              lVar20 = lVar9 - lVar5;
              uVar21 = lVar20 >> 2;
              if (uVar21 <= uVar14 - 1) goto LAB_10a11d588;
              puVar13 = (undefined8 *)(lVar1 + uVar6 * 0xc);
              puVar11 = (undefined8 *)(lVar1 + uVar10 * 0xc);
              puVar7 = (undefined8 *)(lVar1 + uVar12 * 0xc);
              fVar26 = *(float *)(puVar13 + 1);
              uVar28 = *puVar13;
              fVar27 = (float)uVar28;
              fVar29 = (float)((ulong)uVar28 >> 0x20);
              fVar24 = (fVar27 + (float)*puVar11 + (float)*puVar7) / (float)uVar22;
              fVar25 = (fVar29 + (float)((ulong)*puVar11 >> 0x20) + (float)((ulong)*puVar7 >> 0x20))
                       / (float)((ulong)uVar22 >> 0x20);
              fVar23 = (fVar26 + *(float *)(puVar11 + 1) + *(float *)(puVar7 + 1)) / 3.0;
              fVar27 = fVar27 - fVar24;
              fVar29 = fVar29 - fVar25;
              fVar26 = fVar26 - fVar23;
              *(float *)(lVar5 + lVar19 + -8) = fVar27 * fVar27 + fVar29 * fVar29 + fVar26 * fVar26;
              if ((uVar21 <= uVar14) ||
                 (fVar26 = (float)*puVar11 - fVar24,
                 fVar27 = (float)((ulong)*puVar11 >> 0x20) - fVar25,
                 *(float *)(lVar5 + uVar14 * 4) =
                      fVar26 * fVar26 + fVar27 * fVar27 +
                      (*(float *)(puVar11 + 1) - fVar23) * (*(float *)(puVar11 + 1) - fVar23),
                 uVar21 <= uVar14 + 1)) goto LAB_10a11d588;
              fVar24 = (float)*puVar7 - fVar24;
              fVar25 = (float)((ulong)*puVar7 >> 0x20) - fVar25;
              *(float *)(lVar5 + lVar19) =
                   fVar24 * fVar24 + fVar25 * fVar25 +
                   (*(float *)(puVar7 + 1) - fVar23) * (*(float *)(puVar7 + 1) - fVar23);
              lVar16 = lVar16 + -1;
              puVar18 = puVar18 + 3;
              uVar14 = uVar14 + 3;
              lVar19 = lVar19 + 0xc;
              lVar15 = lVar15 + -1;
            } while (lVar15 != 0);
          }
          if (lVar5 + (lVar20 >> 3) * 4 != lVar9) {
            FUN_10a001d40();
            lVar5 = *(long *)(lVar4 + 0x160);
            lVar9 = *(long *)(lVar4 + 0x168);
          }
          if (lVar9 - lVar5 != 0) {
            return (ulong)(uint)SQRT(*(float *)(lVar5 + (lVar9 - lVar5 >> 3) * 4));
          }
LAB_10a11d588:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10a11d58c);
          (*pcVar2)();
        }
        FUN_109febc44(&puStack_2e0);
        FUN_10a002568(&puStack_2d0,&UNK_10f63e5d9,0x1d);
        uVar14 = puVar11[1];
        puVar7 = (undefined8 *)*puVar11;
        if (-1 < (char)*(byte *)((long)puVar11 + 0x17)) {
          uVar14 = (ulong)*(byte *)((long)puVar11 + 0x17);
          puVar7 = puVar11;
        }
        FUN_10a002568(&puStack_2d0,puVar7,uVar14);
        FUN_10a002568(&puStack_2d0,&UNK_10f63e5f7,0x30);
        FUN_10a05168c(&uStack_2f9,&puStack_2d0);
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a11d37c);
      (*pcVar2)();
    }
    FUN_109febc44(&puStack_160);
    FUN_10a002568(&puStack_150,&UNK_10f63e5d9,0x1d);
    uVar14 = param_3[1];
    puVar7 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar14 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar7 = param_3;
    }
    FUN_10a002568(&puStack_150,puVar7,uVar14);
    FUN_10a002568(&puStack_150,&UNK_10f63e5f7,0x30);
    FUN_10a05168c(&uStack_179,&puStack_150);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a11d1a0);
  (*pcVar2)();
}



/* Entry: 10a11d1c4; end: 10a11d39f;  */

ulong FUN_10a11d1c4(ulong param_1,long *param_2,undefined8 *param_3,long *param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  uint *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  undefined1 uStack_179;
  long *plStack_178;
  ulong uStack_170;
  byte bStack_168;
  undefined8 *puStack_160;
  ulong uStack_158;
  undefined8 *puStack_150;
  undefined4 uStack_148;
  int iStack_144;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar13 = param_3[1];
  puVar7 = (undefined8 *)*param_3;
  if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
    uVar13 = (ulong)*(byte *)((long)param_3 + 0x17);
    puVar7 = param_3;
  }
  puVar10 = puVar7;
  uVar16 = uVar13;
  puStack_160 = puVar7;
  uStack_158 = uVar13;
  func_0x00010a107b84();
  uStack_148 = (undefined4)uVar16;
  puStack_150 = puVar10;
  FUN_10a107c14();
  iStack_144 = (int)puVar7 * -0x29aff4bf + (int)uVar13 * 0xc0eb86b;
  (**(code **)(*param_2 + 0x1d8))(&plStack_178,param_2,&puStack_160);
  if ((bStack_168 & 1) == 0) {
    FUN_109febc44(&puStack_160);
    FUN_10a002568(&puStack_150,&UNK_10f63e5bc,0x1c);
    uVar13 = param_3[1];
    puVar7 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar13 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar7 = param_3;
    }
    FUN_10a002568(&puStack_150,puVar7,uVar13);
    FUN_10a05168c(&uStack_179,&puStack_150);
  }
  else {
    if ((uStack_170 & 3) == 0) {
      func_0x00010742a308(param_4,uStack_170 >> 2);
      lVar3 = *param_4;
      _memcpy(lVar3,plStack_178,uStack_170);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
        return param_1;
      }
      ___stack_chk_fail();
      func_0x000105673d7c(&puStack_160);
      plVar5 = plStack_178;
      __Unwind_Resume();
      uVar13 = *(long *)(lVar3 + 0x20) - *(long *)(lVar3 + 0x18);
      func_0x00010742a308(lVar3 + 0x160,(long)(uVar13 * 0x40000000) >> 0x20);
      lVar14 = (uVar13 >> 2) * -0x5555555500000000;
      if (lVar14 == 0) {
        lVar4 = *(long *)(lVar3 + 0x160);
        lVar8 = *(long *)(lVar3 + 0x168);
        lVar19 = lVar8 - lVar4;
      }
      else {
        lVar14 = lVar14 >> 0x20;
        lVar15 = (*(long *)(lVar3 + 0x20) - *(long *)(lVar3 + 0x18) >> 2) * -0x5555555555555555;
        lVar1 = *plVar5;
        uVar16 = (plVar5[1] - lVar1 >> 2) * -0x5555555555555555;
        puVar17 = (uint *)(*(long *)(lVar3 + 0x18) + 4);
        uVar13 = 1;
        lVar18 = 8;
        uVar21 = NEON_fmov(0x40400000,4);
        do {
          if ((((lVar15 == 0) || (uVar6 = (ulong)puVar17[-1], uVar16 < uVar6 || uVar16 - uVar6 == 0)
               ) || (uVar9 = (ulong)*puVar17, uVar16 < uVar9 || uVar16 - uVar9 == 0)) ||
             (uVar11 = (ulong)puVar17[1], uVar16 < uVar11 || uVar16 - uVar11 == 0))
          goto LAB_10a11d588;
          lVar4 = *(long *)(lVar3 + 0x160);
          lVar8 = *(long *)(lVar3 + 0x168);
          lVar19 = lVar8 - lVar4;
          uVar20 = lVar19 >> 2;
          if (uVar20 <= uVar13 - 1) goto LAB_10a11d588;
          puVar12 = (undefined8 *)(lVar1 + uVar6 * 0xc);
          puVar10 = (undefined8 *)(lVar1 + uVar9 * 0xc);
          puVar7 = (undefined8 *)(lVar1 + uVar11 * 0xc);
          fVar25 = *(float *)(puVar12 + 1);
          uVar27 = *puVar12;
          fVar26 = (float)uVar27;
          fVar28 = (float)((ulong)uVar27 >> 0x20);
          fVar23 = (fVar26 + (float)*puVar10 + (float)*puVar7) / (float)uVar21;
          fVar24 = (fVar28 + (float)((ulong)*puVar10 >> 0x20) + (float)((ulong)*puVar7 >> 0x20)) /
                   (float)((ulong)uVar21 >> 0x20);
          fVar22 = (fVar25 + *(float *)(puVar10 + 1) + *(float *)(puVar7 + 1)) / 3.0;
          fVar26 = fVar26 - fVar23;
          fVar28 = fVar28 - fVar24;
          fVar25 = fVar25 - fVar22;
          *(float *)(lVar4 + lVar18 + -8) = fVar26 * fVar26 + fVar28 * fVar28 + fVar25 * fVar25;
          if ((uVar20 <= uVar13) ||
             (fVar25 = (float)*puVar10 - fVar23, fVar26 = (float)((ulong)*puVar10 >> 0x20) - fVar24,
             *(float *)(lVar4 + uVar13 * 4) =
                  fVar25 * fVar25 + fVar26 * fVar26 +
                  (*(float *)(puVar10 + 1) - fVar22) * (*(float *)(puVar10 + 1) - fVar22),
             uVar20 <= uVar13 + 1)) goto LAB_10a11d588;
          fVar23 = (float)*puVar7 - fVar23;
          fVar24 = (float)((ulong)*puVar7 >> 0x20) - fVar24;
          *(float *)(lVar4 + lVar18) =
               fVar23 * fVar23 + fVar24 * fVar24 +
               (*(float *)(puVar7 + 1) - fVar22) * (*(float *)(puVar7 + 1) - fVar22);
          lVar15 = lVar15 + -1;
          puVar17 = puVar17 + 3;
          uVar13 = uVar13 + 3;
          lVar18 = lVar18 + 0xc;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      if (lVar4 + (lVar19 >> 3) * 4 != lVar8) {
        FUN_10a001d40();
        lVar4 = *(long *)(lVar3 + 0x160);
        lVar8 = *(long *)(lVar3 + 0x168);
      }
      if (lVar8 - lVar4 != 0) {
        return (ulong)(uint)SQRT(*(float *)(lVar4 + (lVar8 - lVar4 >> 3) * 4));
      }
LAB_10a11d588:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10a11d58c);
      (*pcVar2)();
    }
    FUN_109febc44(&puStack_160);
    FUN_10a002568(&puStack_150,&UNK_10f63e5d9,0x1d);
    uVar13 = param_3[1];
    puVar7 = (undefined8 *)*param_3;
    if (-1 < (char)*(byte *)((long)param_3 + 0x17)) {
      uVar13 = (ulong)*(byte *)((long)param_3 + 0x17);
      puVar7 = param_3;
    }
    FUN_10a002568(&puStack_150,puVar7,uVar13);
    FUN_10a002568(&puStack_150,&UNK_10f63e5f7,0x30);
    FUN_10a05168c(&uStack_179,&puStack_150);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a11d37c);
  (*pcVar2)();
}



/* Entry: 10a11d3a0; end: 10a11df8f;  */

float FUN_10a11d3a0(long param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  uint *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  
  uVar11 = *(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18);
  func_0x00010742a308(param_1 + 0x160,(long)(uVar11 * 0x40000000) >> 0x20);
  lVar12 = (uVar11 >> 2) * -0x5555555500000000;
  if (lVar12 == 0) {
    lVar3 = *(long *)(param_1 + 0x160);
    lVar6 = *(long *)(param_1 + 0x168);
    lVar17 = lVar6 - lVar3;
  }
  else {
    lVar12 = lVar12 >> 0x20;
    lVar13 = (*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18) >> 2) * -0x5555555555555555;
    lVar1 = *param_2;
    uVar14 = (param_2[1] - lVar1 >> 2) * -0x5555555555555555;
    puVar15 = (uint *)(*(long *)(param_1 + 0x18) + 4);
    uVar11 = 1;
    lVar16 = 8;
    uVar19 = NEON_fmov(0x40400000,4);
    do {
      if ((((lVar13 == 0) || (uVar4 = (ulong)puVar15[-1], uVar14 < uVar4 || uVar14 - uVar4 == 0)) ||
          (uVar7 = (ulong)*puVar15, uVar14 < uVar7 || uVar14 - uVar7 == 0)) ||
         (uVar9 = (ulong)puVar15[1], uVar14 < uVar9 || uVar14 - uVar9 == 0)) goto LAB_10a11d588;
      lVar3 = *(long *)(param_1 + 0x160);
      lVar6 = *(long *)(param_1 + 0x168);
      lVar17 = lVar6 - lVar3;
      uVar18 = lVar17 >> 2;
      if (uVar18 <= uVar11 - 1) goto LAB_10a11d588;
      puVar10 = (undefined8 *)(lVar1 + uVar4 * 0xc);
      puVar8 = (undefined8 *)(lVar1 + uVar7 * 0xc);
      puVar5 = (undefined8 *)(lVar1 + uVar9 * 0xc);
      fVar23 = *(float *)(puVar10 + 1);
      uVar25 = *puVar10;
      fVar24 = (float)uVar25;
      fVar26 = (float)((ulong)uVar25 >> 0x20);
      fVar21 = (fVar24 + (float)*puVar8 + (float)*puVar5) / (float)uVar19;
      fVar22 = (fVar26 + (float)((ulong)*puVar8 >> 0x20) + (float)((ulong)*puVar5 >> 0x20)) /
               (float)((ulong)uVar19 >> 0x20);
      fVar20 = (fVar23 + *(float *)(puVar8 + 1) + *(float *)(puVar5 + 1)) / 3.0;
      fVar24 = fVar24 - fVar21;
      fVar26 = fVar26 - fVar22;
      fVar23 = fVar23 - fVar20;
      *(float *)(lVar3 + lVar16 + -8) = fVar24 * fVar24 + fVar26 * fVar26 + fVar23 * fVar23;
      if ((uVar18 <= uVar11) ||
         (fVar23 = (float)*puVar8 - fVar21, fVar24 = (float)((ulong)*puVar8 >> 0x20) - fVar22,
         *(float *)(lVar3 + uVar11 * 4) =
              fVar23 * fVar23 + fVar24 * fVar24 +
              (*(float *)(puVar8 + 1) - fVar20) * (*(float *)(puVar8 + 1) - fVar20),
         uVar18 <= uVar11 + 1)) goto LAB_10a11d588;
      fVar21 = (float)*puVar5 - fVar21;
      fVar22 = (float)((ulong)*puVar5 >> 0x20) - fVar22;
      *(float *)(lVar3 + lVar16) =
           fVar21 * fVar21 + fVar22 * fVar22 +
           (*(float *)(puVar5 + 1) - fVar20) * (*(float *)(puVar5 + 1) - fVar20);
      lVar13 = lVar13 + -1;
      puVar15 = puVar15 + 3;
      uVar11 = uVar11 + 3;
      lVar16 = lVar16 + 0xc;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  if (lVar3 + (lVar17 >> 3) * 4 != lVar6) {
    FUN_10a001d40();
    lVar3 = *(long *)(param_1 + 0x160);
    lVar6 = *(long *)(param_1 + 0x168);
  }
  if (lVar6 - lVar3 != 0) {
    return SQRT(*(float *)(lVar3 + (lVar6 - lVar3 >> 3) * 4));
  }
LAB_10a11d588:
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a11d58c);
  (*pcVar2)();
}



/* Entry: 10a11df90; end: 10a11e27b;  */

long FUN_10a11df90(float param_1,long param_2,long *param_3,long *param_4)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  uint *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
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
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  
  uVar12 = (*(long *)(param_2 + 0x68) - *(long *)(param_2 + 0x60) >> 3) * -0x5555555555555555;
  uVar20 = (ulong)(int)uVar12;
  func_0x0001096b5198(param_2 + 0x178,uVar20);
  if ((uVar12 & 0xffffffff) != 0) {
    lVar13 = 0;
    lVar14 = 0;
    uVar12 = 0;
    do {
      if ((ulong)(*(long *)(param_2 + 0xe0) - *(long *)(param_2 + 0xd8) >> 2) <= uVar12) {
LAB_10a11e278:
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10a11e27c);
        (*pcVar7)();
      }
      iVar6 = *(int *)(*(long *)(param_2 + 0xd8) + uVar12 * 4);
      uVar15 = (*(long *)(param_2 + 0x20) - *(long *)(param_2 + 0x18) >> 2) * -0x5555555555555555;
      if ((uVar15 < (ulong)(long)iVar6 || uVar15 - (long)iVar6 == 0) ||
         (uVar15 = (*(long *)(param_2 + 0x68) - *(long *)(param_2 + 0x60) >> 3) *
                   -0x5555555555555555, uVar15 < uVar12 || uVar15 - uVar12 == 0))
      goto LAB_10a11e278;
      puVar17 = (uint *)(*(long *)(param_2 + 0x18) + (long)iVar6 * 0xc);
      uVar15 = (ulong)*puVar17;
      lVar2 = *param_3;
      uVar19 = (param_3[1] - lVar2 >> 2) * -0x5555555555555555;
      if (uVar19 < uVar15 || uVar19 - uVar15 == 0) goto LAB_10a11e278;
      lVar3 = *(long *)(param_2 + 0x48);
      uVar8 = *(long *)(param_2 + 0x50) - lVar3 >> 2;
      if (uVar8 <= uVar15) goto LAB_10a11e278;
      lVar4 = *param_4;
      uVar9 = (param_4[1] - lVar4 >> 2) * -0x5555555555555555;
      if (((((uVar9 < uVar15 || uVar9 - uVar15 == 0) ||
            (uVar16 = (ulong)puVar17[1], uVar19 < uVar16 || uVar19 - uVar16 == 0)) ||
           (uVar8 <= uVar16)) ||
          ((uVar9 < uVar16 || uVar9 - uVar16 == 0 ||
           (uVar18 = (ulong)puVar17[2], uVar19 < uVar18 || uVar19 - uVar18 == 0)))) ||
         ((uVar8 <= uVar18 || (uVar9 < uVar18 || uVar9 - uVar18 == 0)))) goto LAB_10a11e278;
      lVar5 = *(long *)(param_2 + 0x30);
      uVar19 = *(long *)(param_2 + 0x38) - lVar5 >> 2;
      if ((((uVar19 <= uVar15) || (uVar19 <= uVar16)) || (uVar19 <= uVar18)) ||
         (uVar19 = (*(long *)(param_2 + 0x180) - *(long *)(param_2 + 0x178) >> 2) *
                   -0x5555555555555555, uVar19 < uVar12 || uVar19 - uVar12 == 0))
      goto LAB_10a11e278;
      puVar10 = (undefined8 *)(lVar2 + uVar15 * 0xc);
      fVar21 = param_1 * *(float *)(lVar3 + uVar15 * 4);
      puVar11 = (undefined8 *)(lVar4 + uVar15 * 0xc);
      fVar32 = *(float *)(puVar11 + 1);
      uVar34 = *puVar11;
      fVar33 = (float)uVar34;
      fVar35 = (float)((ulong)uVar34 >> 0x20);
      uVar34 = *puVar10;
      fVar36 = (float)uVar34;
      fVar38 = (float)((ulong)uVar34 >> 0x20);
      fVar39 = *(float *)(puVar10 + 1);
      puVar10 = (undefined8 *)(lVar2 + uVar16 * 0xc);
      fVar24 = param_1 * *(float *)(lVar3 + uVar16 * 4);
      puVar11 = (undefined8 *)(lVar4 + uVar16 * 0xc);
      fVar42 = *(float *)(puVar11 + 1);
      uVar34 = *puVar11;
      fVar22 = (float)uVar34;
      fVar23 = (float)((ulong)uVar34 >> 0x20);
      uVar34 = *puVar10;
      fVar25 = (float)uVar34;
      fVar26 = (float)((ulong)uVar34 >> 0x20);
      fVar44 = *(float *)(puVar10 + 1);
      puVar11 = (undefined8 *)(lVar2 + uVar18 * 0xc);
      fVar29 = param_1 * *(float *)(lVar3 + uVar18 * 4);
      puVar10 = (undefined8 *)(lVar4 + uVar18 * 0xc);
      fVar47 = *(float *)(puVar10 + 1);
      uVar34 = *puVar10;
      fVar27 = (float)uVar34;
      fVar28 = (float)((ulong)uVar34 >> 0x20);
      uVar34 = *puVar11;
      fVar30 = (float)uVar34;
      fVar31 = (float)((ulong)uVar34 >> 0x20);
      fVar49 = *(float *)(puVar11 + 1);
      fVar50 = param_1 * *(float *)(lVar5 + uVar15 * 4);
      pfVar1 = (float *)(*(long *)(param_2 + 0x60) + lVar13);
      fVar37 = *pfVar1;
      fVar40 = pfVar1[1];
      fVar46 = pfVar1[2];
      fVar51 = pfVar1[3];
      fVar41 = param_1 * *(float *)(lVar5 + uVar16 * 4);
      fVar45 = pfVar1[4];
      fVar48 = pfVar1[5];
      fVar43 = param_1 * *(float *)(lVar5 + uVar18 * 4);
      puVar10 = (undefined8 *)(*(long *)(param_2 + 0x178) + lVar14);
      *puVar10 = CONCAT44((fVar35 * fVar21 + fVar38) * fVar37 + (fVar23 * fVar24 + fVar26) * fVar40
                          + (fVar28 * fVar29 + fVar31) * fVar46 +
                          (fVar38 + fVar35 * fVar50) * fVar51 + (fVar26 + fVar23 * fVar41) * fVar45
                          + (fVar31 + fVar28 * fVar43) * fVar48,
                          (fVar33 * fVar21 + fVar36) * fVar37 + (fVar22 * fVar24 + fVar25) * fVar40
                          + (fVar27 * fVar29 + fVar30) * fVar46 +
                          (fVar36 + fVar33 * fVar50) * fVar51 + (fVar25 + fVar22 * fVar41) * fVar45
                          + (fVar30 + fVar27 * fVar43) * fVar48);
      *(float *)(puVar10 + 1) =
           (fVar21 * fVar32 + fVar39) * fVar37 + (fVar24 * fVar42 + fVar44) * fVar40 +
           (fVar29 * fVar47 + fVar49) * fVar46 + (fVar39 + fVar32 * fVar50) * fVar51 +
           fVar45 * (fVar44 + fVar42 * fVar41) + fVar48 * (fVar49 + fVar47 * fVar43);
      uVar12 = uVar12 + 1;
      lVar14 = lVar14 + 0xc;
      lVar13 = lVar13 + 0x18;
    } while (uVar20 != uVar12);
  }
  return param_2 + 0x178;
}



/* Entry: 10a11e27c; end: 10a11e40f;  */

void FUN_10a11e27c(long *param_1,long param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  uVar5 = (param_1[0xd] - param_1[0xc] >> 3) * -0x5555555555555555;
  uVar7 = (ulong)(int)uVar5;
  FUN_10a11b6d8(param_2 + 0x28,uVar7);
  *(undefined4 *)(param_2 + 8) = 0;
  plVar3 = param_1;
  func_0x00010a11d58c(param_1,param_1);
  plVar4 = param_1;
  FUN_10a11df90(0x3f800000,param_1,param_1,plVar3);
  if ((uVar5 & 0xffffffff) != 0) {
    lVar8 = 0;
    lVar9 = 0;
    uVar5 = 0;
    do {
      uVar6 = (plVar4[1] - *plVar4 >> 2) * -0x5555555555555555;
      if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
LAB_10a11e40c:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a11e410);
        (*pcVar2)();
      }
      puVar1 = (undefined8 *)(*plVar4 + lVar8);
      uStack_60 = *puVar1;
      uStack_58 = *(undefined4 *)(puVar1 + 1);
      uVar6 = (param_1[0x13] - param_1[0x12] >> 2) * -0x5555555555555555;
      if (uVar6 < uVar5 || uVar6 - uVar5 == 0) goto LAB_10a11e40c;
      puVar1 = (undefined8 *)(param_1[0x12] + lVar8);
      uStack_70 = *puVar1;
      uStack_68 = *(undefined4 *)(puVar1 + 1);
      uVar6 = (param_1[0x10] - param_1[0xf] >> 2) * -0x5555555555555555;
      if ((uVar6 < uVar5 || uVar6 - uVar5 == 0) ||
         ((ulong)(param_1[0x19] - param_1[0x18] >> 2) <= uVar5)) goto LAB_10a11e40c;
      puVar1 = (undefined8 *)(param_1[0xf] + lVar8);
      uStack_74 = *(undefined4 *)(param_1[0x18] + uVar5 * 4);
      uStack_80 = *puVar1;
      uStack_78 = *(undefined4 *)(puVar1 + 1);
      if ((ulong)(param_1[0x16] - param_1[0x15] >> 4) <= uVar5) goto LAB_10a11e40c;
      FUN_10a11e410(param_2,uVar5,&uStack_60,&uStack_70,param_1[0x15] + lVar9,&uStack_80);
      uVar5 = uVar5 + 1;
      lVar9 = lVar9 + 0x10;
      lVar8 = lVar8 + 0xc;
    } while (uVar7 != uVar5);
  }
  FUN_10a123d38(param_2);
  *(undefined1 *)(param_2 + 0x4a) = 1;
  return;
}



/* Entry: 10a11e410; end: 10a11e5a3;  */

void FUN_10a11e410(long param_1,int param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined8 param_5,float *param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  ulong uVar11;
  int iVar12;
  int iVar14;
  ulong uVar13;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  puVar4 = &uStack_50;
  uVar3 = SUB84(&uStack_50,0);
  uVar5 = (ulong)param_2;
  if (uVar5 < (ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) >> 4)) {
    uVar6 = *(undefined4 *)(param_3 + 1);
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x28) + uVar5 * 0x10);
    *puVar1 = *param_3;
    *(undefined4 *)(puVar1 + 1) = uVar6;
    *(undefined4 *)((long)puVar1 + 0xc) = 0x3f800000;
    uStack_44 = *param_4;
    uStack_50 = *param_3;
    uStack_48 = *(undefined4 *)(param_3 + 1);
    FUN_10a124524();
    if (uVar5 < (ulong)(*(long *)(param_1 + 0x70) - *(long *)(param_1 + 0x68) >> 3)) {
      *(undefined8 **)(*(long *)(param_1 + 0x68) + uVar5 * 8) = puVar4;
      uStack_50 = *(undefined8 *)(param_4 + 1);
      func_0x00010a1248ac();
      if (uVar5 < (ulong)(*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80) >> 2)) {
        *(undefined4 *)(*(long *)(param_1 + 0x80) + uVar5 * 4) = uVar3;
        FUN_10a007c90(param_5,*(undefined1 *)(param_1 + 0x48));
        if (uVar5 < (ulong)(*(long *)(param_1 + 0xa0) - *(long *)(param_1 + 0x98) >> 2)) {
          *(int *)(*(long *)(param_1 + 0x98) + uVar5 * 4) = (int)param_5;
          if (uVar5 < (ulong)(*(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 2)) {
            fVar9 = 0.0;
            if (0.0 <= param_6[3]) {
              fVar9 = param_6[3];
            }
            fVar7 = 1.0;
            if (fVar9 <= 1.0) {
              fVar7 = fVar9;
            }
            uVar10 = *(undefined8 *)(param_6 + 1);
            iVar12 = -(uint)((float)uVar10 < 0.0);
            iVar14 = -(uint)((float)((ulong)uVar10 >> 0x20) < 0.0);
            fVar9 = (float)CONCAT13((byte)((ulong)uVar10 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                                    CONCAT12((byte)((ulong)uVar10 >> 0x10) &
                                             ~(byte)((uint)iVar12 >> 0x10),
                                             CONCAT11((byte)((ulong)uVar10 >> 8) &
                                                      ~(byte)((uint)iVar12 >> 8),
                                                      (byte)uVar10 & ~(byte)iVar12)));
            uVar11 = CONCAT17((byte)((ulong)uVar10 >> 0x38) & ~(byte)((uint)iVar14 >> 0x18),
                              CONCAT16((byte)((ulong)uVar10 >> 0x30) & ~(byte)((uint)iVar14 >> 0x10)
                                       ,CONCAT15((byte)((ulong)uVar10 >> 0x28) &
                                                 ~(byte)((uint)iVar14 >> 8),
                                                 CONCAT14((byte)((ulong)uVar10 >> 0x20) &
                                                          ~(byte)iVar14,fVar9))));
            uVar13 = NEON_fmov(0x3f800000,4);
            uVar11 = uVar11 ^ (uVar11 ^ uVar13) &
                              CONCAT44(-(uint)((float)(uVar13 >> 0x20) < (float)(uVar11 >> 0x20)),
                                       -(uint)((float)uVar13 < fVar9));
            uVar10 = NEON_ushl(CONCAT44((int)(float)(int)((float)(uVar11 >> 0x20) * 255.0),
                                        (int)(float)(int)((float)uVar11 * 255.0)),0x1000000008,4);
            fVar9 = 0.0;
            if (0.0 <= *param_6) {
              fVar9 = *param_6;
            }
            fVar8 = 1.0;
            if (fVar9 <= 1.0) {
              fVar8 = fVar9;
            }
            *(uint *)(*(long *)(param_1 + 0xb0) + uVar5 * 4) =
                 (uint)((ulong)uVar10 >> 0x20) | (int)(fVar7 * 255.0) << 0x18 |
                 (uint)uVar10 | (int)(fVar8 * 255.0);
            *(undefined1 *)(param_1 + 0x49) = 1;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a11e5a4);
  (*pcVar2)();
}



/* Entry: 10a11e5a4; end: 10a11ee47;  */

ulong FUN_10a11e5a4(float param_1,long *param_2,long param_3,undefined8 param_4,undefined8 param_5,
                   uint param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint *puVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  float *pfVar13;
  long lVar14;
  float *pfVar15;
  float *pfVar16;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  float *pfStack_c8;
  float *pfStack_c0;
  float *pfStack_b0;
  float *pfStack_a8;
  float *pfVar17;
  
  __ZNSt3__16chrono12steady_clock3nowEv();
  __ZNSt3__16chrono12steady_clock3nowEv();
  uVar3 = param_2[0x25];
  *(undefined1 *)(uVar3 + 0x60) = *(undefined1 *)((long)param_2 + 0x1dd);
  FUN_10a11ee48(uVar3,param_5,param_4);
  if ((int)uVar3 != 0) {
    lVar20 = param_2[0x25];
    __ZNSt3__16chrono12steady_clock3nowEv();
    FUN_10a11d3a0(param_2,lVar20 + 0x48);
    param_1 = param_1 / *(float *)(param_2 + 0x24);
    plVar4 = param_2;
    func_0x00010a11d58c(param_2,lVar20 + 0x48);
    plVar5 = param_2;
    FUN_10a11df90(param_1,param_2,lVar20 + 0x48,plVar4);
    plVar6 = param_2;
    func_0x00010a11de34(param_2,lVar20 + 0x48,plVar4);
    if (1e-05 <= ABS(param_1 + -1.0)) {
      if (1e-05 <= ABS(param_1 - *(float *)(param_2 + 0x3b))) {
        *(float *)(param_2 + 0x3b) = param_1;
        plVar4 = param_2 + 0x35;
        func_0x0001096b5198(plVar4,(long)((int)((ulong)(param_2[0xd] - param_2[0xc]) >> 3) *
                                         -0x55555555));
        if ((int)((ulong)(param_2[0xd] - param_2[0xc]) >> 3) * -0x55555555 != 0) {
          lVar20 = 0;
          uVar12 = 0;
          do {
            uVar10 = (param_2[0x13] - param_2[0x12] >> 2) * -0x5555555555555555;
            if ((uVar10 < uVar12 || uVar10 - uVar12 == 0) ||
               (uVar10 = (param_2[0x36] - param_2[0x35] >> 2) * -0x5555555555555555,
               uVar10 < uVar12 || uVar10 - uVar12 == 0)) goto LAB_10a11ee28;
            puVar22 = (undefined8 *)(param_2[0x12] + lVar20);
            fVar24 = *(float *)(puVar22 + 1);
            puVar1 = (undefined8 *)(param_2[0x35] + lVar20);
            uVar26 = *puVar22;
            *puVar1 = CONCAT44((float)((ulong)uVar26 >> 0x20) * param_1,(float)uVar26 * param_1);
            *(float *)(puVar1 + 1) = param_1 * fVar24;
            uVar12 = uVar12 + 1;
            lVar20 = lVar20 + 0xc;
          } while (uVar12 < (ulong)(long)((int)((ulong)(param_2[0xd] - param_2[0xc]) >> 3) *
                                         -0x55555555));
        }
      }
      else {
        plVar4 = param_2 + 0x35;
      }
    }
    else {
      plVar4 = param_2 + 0x12;
    }
    lVar20 = (param_2[0xd] - param_2[0xc] >> 3) * -0x5555555555555555;
    iVar9 = (int)lVar20;
    if ((*(byte *)((long)param_2 + 0x1dc) != param_6) ||
       ((long)iVar9 != param_2[0x39] - param_2[0x38] >> 4)) {
      uVar12 = (ulong)iVar9;
      lVar20 = lVar20 << 0x20;
      *(char *)((long)param_2 + 0x1dc) = (char)param_6;
      func_0x00010983d048(param_2 + 0x38,uVar12);
      if ((param_6 & 1) == 0) {
        if (lVar20 != 0) {
          lVar21 = 0;
          lVar20 = 0;
          uVar10 = 0;
          if (uVar12 < 2) {
            uVar12 = 1;
          }
          do {
            uVar19 = (param_2[0x10] - param_2[0xf] >> 2) * -0x5555555555555555;
            if (((uVar19 < uVar10 || uVar19 - uVar10 == 0) ||
                ((ulong)(param_2[0x19] - param_2[0x18] >> 2) <= uVar10)) ||
               ((ulong)(param_2[0x39] - param_2[0x38] >> 4) <= uVar10)) goto LAB_10a11ee28;
            puVar22 = (undefined8 *)(param_2[0xf] + lVar21);
            uVar23 = *(undefined4 *)(puVar22 + 1);
            uVar25 = *(undefined4 *)(param_2[0x18] + uVar10 * 4);
            puVar1 = (undefined8 *)(param_2[0x38] + lVar20);
            *puVar1 = *puVar22;
            *(undefined4 *)(puVar1 + 1) = uVar23;
            *(undefined4 *)((long)puVar1 + 0xc) = uVar25;
            uVar10 = uVar10 + 1;
            lVar20 = lVar20 + 0x10;
            lVar21 = lVar21 + 0xc;
          } while (uVar12 != uVar10);
        }
      }
      else {
        puVar22 = (undefined8 *)param_2[0x25];
        uVar10 = (((long *)*puVar22)[1] - *(long *)*puVar22 >> 2) * -0x5555555555555555;
        lVar21 = (long)(int)uVar10;
        FUN_10a132380(&pfStack_b0,lVar21);
        if ((uVar10 & 0xffffffff) != 0) {
          lVar11 = ((long)(puVar22[7] - puVar22[6]) >> 2) * -0x5555555555555555;
          lVar14 = (long)pfStack_a8 - (long)pfStack_b0 >> 2;
          pfVar13 = pfStack_b0;
          puVar22 = (undefined8 *)(puVar22[6] + 4);
          do {
            if ((lVar11 == 0) || (lVar14 == 0)) goto LAB_10a11ee28;
            fVar24 = (float)*puVar22;
            fVar27 = (float)((ulong)*puVar22 >> 0x20);
            *pfVar13 = SQRT(*(float *)((long)puVar22 + -4) * *(float *)((long)puVar22 + -4) +
                            fVar24 * fVar24 + fVar27 * fVar27);
            lVar14 = lVar14 + -1;
            lVar11 = lVar11 + -1;
            lVar21 = lVar21 + -1;
            pfVar13 = pfVar13 + 1;
            puVar22 = (undefined8 *)((long)puVar22 + 0xc);
          } while (lVar21 != 0);
        }
        FUN_10a132380(&pfStack_c8,uVar12);
        if (lVar20 != 0) {
          lVar21 = 0;
          uVar10 = 0;
          lVar11 = param_2[0x1b];
          lVar14 = param_2[0x1c];
          uVar18 = (long)pfStack_a8 - (long)pfStack_b0 >> 2;
          uVar19 = uVar12;
          if (uVar12 < 2) {
            uVar19 = 1;
          }
          do {
            if (lVar14 - lVar11 >> 2 == uVar10) goto LAB_10a11ee28;
            iVar9 = *(int *)(lVar11 + uVar10 * 4);
            uVar8 = (param_2[4] - param_2[3] >> 2) * -0x5555555555555555;
            if (uVar8 < (ulong)(long)iVar9 || uVar8 - (long)iVar9 == 0) goto LAB_10a11ee28;
            puVar7 = (uint *)(param_2[3] + (long)iVar9 * 0xc);
            if (((uVar18 <= *puVar7) || (uVar18 <= puVar7[1])) ||
               ((uVar18 <= puVar7[2] ||
                ((uVar8 = (param_2[0xd] - param_2[0xc] >> 3) * -0x5555555555555555,
                 uVar8 < uVar10 || uVar8 - uVar10 == 0 ||
                 ((long)pfStack_c0 - (long)pfStack_c8 >> 2 == uVar10)))))) goto LAB_10a11ee28;
            puVar22 = (undefined8 *)(param_2[0xc] + lVar21);
            pfStack_c8[uVar10] =
                 (pfStack_b0[*puVar7] *
                  ((float)*puVar22 + (float)*(undefined8 *)((long)puVar22 + 0xc)) +
                  pfStack_b0[puVar7[1]] *
                  ((float)((ulong)*puVar22 >> 0x20) +
                  (float)((ulong)*(undefined8 *)((long)puVar22 + 0xc) >> 0x20)) +
                 pfStack_b0[puVar7[2]] *
                 (*(float *)(puVar22 + 1) + *(float *)((long)puVar22 + 0x14))) / 3.0;
            uVar10 = uVar10 + 1;
            lVar21 = lVar21 + 0x18;
          } while (uVar19 != uVar10);
        }
        pfVar13 = pfStack_c8;
        if ((pfStack_c8 != pfStack_c0) && (pfStack_c8 + 1 != pfStack_c0)) {
          fVar24 = *pfStack_c8;
          pfVar15 = pfStack_c8;
          pfVar16 = pfStack_c8 + 1;
          do {
            pfVar17 = pfVar16 + 1;
            pfVar13 = pfVar16;
            fVar27 = *pfVar16;
            if (*pfVar16 <= fVar24) {
              pfVar13 = pfVar15;
              fVar27 = fVar24;
            }
            fVar24 = fVar27;
            pfVar15 = pfVar13;
            pfVar16 = pfVar17;
          } while (pfVar17 != pfStack_c0);
        }
        if (lVar20 != 0) {
          lVar20 = 0;
          uVar10 = 0;
          fVar24 = *pfVar13;
          if (uVar12 < 2) {
            uVar12 = 1;
          }
          do {
            if (((ulong)((long)pfStack_c0 - (long)pfStack_c8 >> 2) <= uVar10) ||
               ((ulong)(param_2[0x19] - param_2[0x18] >> 2) <= uVar10)) {
LAB_10a11ee28:
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10a11ee2c);
              (*pcVar2)();
            }
            fVar31 = pfStack_c8[uVar10] / fVar24;
            fVar27 = 0.0;
            if (0.0 <= fVar31) {
              fVar27 = fVar31;
            }
            fVar32 = 1.0;
            if (fVar27 <= 1.0) {
              fVar32 = fVar27;
            }
            if (0.2 <= fVar32) {
              if (0.4 <= fVar32) {
                if (0.6 <= fVar32) {
                  fVar32 = (fVar32 + -0.6) / 0.39999998;
                  fVar33 = 1.0 - fVar32;
                  fVar27 = fVar33 * 0.090152;
                  fVar34 = fVar33 * 0.866305;
                  fVar33 = fVar33 * 0.727275;
                  fVar29 = fVar32 * 0.988362;
                  fVar30 = fVar32 * 0.998364;
                  fVar32 = fVar32 * 0.644924;
                }
                else {
                  fVar32 = (fVar32 + -0.4) / 0.20000002;
                  fVar33 = 1.0 - fVar32;
                  fVar27 = fVar33 * 0.416641;
                  fVar34 = fVar33 * 0.521127;
                  fVar33 = fVar33 * 0.257996;
                  fVar29 = fVar32 * 0.866305;
                  fVar30 = fVar32 * 0.727275;
                  fVar32 = fVar32 * 0.090152;
                }
              }
              else {
                fVar32 = (fVar32 + -0.2) / 0.2;
                fVar33 = 1.0 - fVar32;
                fVar27 = fVar33 * 0.225788;
                fVar34 = fVar33 * 0.177505;
                fVar33 = fVar33 * 0.015556;
                fVar29 = fVar32 * 0.521127;
                fVar30 = fVar32 * 0.257996;
                fVar32 = fVar32 * 0.416641;
              }
            }
            else {
              fVar32 = fVar32 / 0.2;
              fVar33 = 1.0 - fVar32;
              fVar27 = fVar33 * 0.013866;
              fVar34 = fVar33 * 0.001462;
              fVar33 = fVar33 * 0.000466;
              fVar29 = fVar32 * 0.177505;
              fVar30 = fVar32 * 0.015556;
              fVar32 = fVar32 * 0.225788;
            }
            if ((ulong)(param_2[0x39] - param_2[0x38] >> 4) <= uVar10) goto LAB_10a11ee28;
            fVar28 = *(float *)(param_2[0x18] + uVar10 * 4);
            puVar22 = (undefined8 *)(param_2[0x38] + lVar20);
            *puVar22 = CONCAT44(fVar30 + fVar33,fVar29 + fVar34);
            *(float *)(puVar22 + 1) = fVar32 + fVar27;
            *(float *)((long)puVar22 + 0xc) = fVar31 + (1.0 - fVar31) * fVar28;
            uVar10 = uVar10 + 1;
            lVar20 = lVar20 + 0x10;
          } while (uVar12 != uVar10);
        }
        if (pfStack_c8 != (float *)0x0) {
          pfStack_c0 = pfStack_c8;
          __ZdlPv();
        }
        if (pfStack_b0 != (float *)0x0) {
          pfStack_a8 = pfStack_b0;
          __ZdlPv();
        }
      }
    }
    __ZNSt3__16chrono12steady_clock3nowEv();
    FUN_10a11b6d8(param_3 + 0x28,
                  (long)((int)((ulong)(param_2[0xd] - param_2[0xc]) >> 3) * -0x55555555));
    pfStack_b0 = (float *)*plVar5;
    pfStack_a8 = (float *)((plVar5[1] - (long)pfStack_b0 >> 2) * -0x5555555555555555);
    pfStack_c8 = (float *)*plVar4;
    pfStack_c0 = (float *)((plVar4[1] - (long)pfStack_c8 >> 2) * -0x5555555555555555);
    lStack_d8 = *plVar6;
    lStack_d0 = plVar6[1] - lStack_d8 >> 4;
    lStack_e8 = param_2[0x38];
    lStack_e0 = param_2[0x39] - lStack_e8 >> 4;
    FUN_10a122d50(param_3,&pfStack_b0,&pfStack_c8,&lStack_d8,&lStack_e8);
    FUN_10a123d38();
    *(undefined1 *)(param_3 + 0x4a) = 1;
    __ZNSt3__16chrono12steady_clock3nowEv();
    FUN_10a123008();
    uVar3 = uVar3 & 0xffffffff;
    if (*(char *)((long)param_2 + 0x1dd) == '\x01') {
      __ZNSt3__16chrono12steady_clock3nowEv();
      func_0x00010ae06f08(1,0x14,&UNK_10f63ce51,&UNK_10f63ce51,0xffffffff,&UNK_10f63d7fc);
    }
  }
  return uVar3;
}



/* Entry: 10a11ee48; end: 10a122d4f;  */

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_10a11ee48(undefined8 param_1,undefined8 param_2,float param_3,double ******param_4,
             double *******param_5,ulong *param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  ushort *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  char cVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  byte bVar13;
  byte bVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  long lVar18;
  code *pcVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  int iVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  ulong *puVar28;
  uint **ppuVar29;
  double *pdVar30;
  float *pfVar31;
  double *pdVar32;
  double *******pppppppdVar33;
  double *******pppppppdVar34;
  undefined *puVar35;
  uint uVar36;
  uint uVar37;
  ulong uVar38;
  double *******pppppppdVar39;
  uint uVar40;
  ulong uVar41;
  double ******ppppppdVar42;
  undefined8 *puVar43;
  double *pdVar44;
  uint uVar45;
  ulong uVar46;
  double **ppdVar47;
  uint uVar48;
  ushort *puVar49;
  uint uVar50;
  ulong uVar51;
  float *pfVar52;
  double *******pppppppdVar53;
  float *pfVar54;
  uint uVar55;
  ulong uVar56;
  double *******pppppppdVar57;
  uint uVar58;
  long lVar59;
  long lVar60;
  double ******ppppppdVar61;
  long lVar62;
  double *****pppppdVar63;
  long lVar64;
  double *******pppppppdVar65;
  long lVar66;
  double *******pppppppdVar67;
  long lVar68;
  ulong uVar69;
  long *plVar70;
  double ******ppppppdVar71;
  double *******pppppppdVar72;
  uint *puVar73;
  double dVar76;
  double *******pppppppdVar77;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar81;
  undefined4 uVar82;
  undefined4 uVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar90;
  double dVar88;
  double dVar89;
  double dVar91;
  float fVar92;
  float fVar93;
  double dVar94;
  float fVar95;
  float fVar96;
  double dVar97;
  double dVar98;
  double dVar99;
  double dVar100;
  double dVar101;
  double *******pppppppdVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  double dVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  double dVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  double ******ppppppdVar120;
  undefined8 uVar121;
  ulong uStack_560;
  double *******pppppppdStack_550;
  double ******ppppppdStack_530;
  double ******ppppppdStack_528;
  undefined8 uStack_520;
  double ******ppppppdStack_518;
  double ******ppppppdStack_510;
  undefined8 uStack_508;
  float fStack_500;
  float fStack_4fc;
  undefined8 uStack_4f8;
  float fStack_4f0;
  float fStack_4ec;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  float fStack_4d8;
  undefined4 uStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  float fStack_4c8;
  undefined4 uStack_4c4;
  double dStack_4c0;
  double dStack_4b8;
  double dStack_4b0;
  uint *puStack_4a0;
  undefined8 uStack_498;
  double dStack_490;
  double *******pppppppdStack_480;
  undefined8 uStack_478;
  double adStack_470 [4];
  double dStack_450;
  double dStack_448;
  double dStack_440;
  double *******apppppppdStack_430 [2];
  double dStack_420;
  double *******apppppppdStack_418 [3];
  double ******appppppdStack_400 [2];
  double dStack_3f0;
  double *******pppppppdStack_3e0;
  double dStack_3d8;
  double *******apppppppdStack_3d0 [2];
  double dStack_3c0;
  double dStack_3b8;
  double dStack_3b0;
  double dStack_3a8;
  double dStack_3a0;
  double *******apppppppdStack_390 [2];
  undefined8 uStack_380;
  double *******apppppppdStack_378 [3];
  double ******appppppdStack_360 [2];
  double dStack_350;
  double *******apppppppdStack_340 [2];
  double adStack_330 [4];
  double dStack_310;
  double dStack_308;
  double dStack_300;
  double *******pppppppdStack_2f0;
  float fStack_2e8;
  int iStack_2e4;
  long lStack_2e0;
  double *******pppppppdStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  double *******pppppppdStack_2b8;
  double *******pppppppdStack_2b0;
  double *******pppppppdStack_2a8;
  double ******ppppppdStack_2a0;
  double ******ppppppdStack_298;
  double dStack_290;
  double adStack_288 [7];
  double dStack_250;
  double dStack_248;
  double adStack_240 [3];
  undefined8 uStack_228;
  ushort uStack_220;
  byte bStack_21e;
  undefined4 uStack_21c;
  long lStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_200;
  double dStack_1f0;
  double adStack_1e8 [7];
  double dStack_1b0;
  double *******pppppppdStack_150;
  double dStack_148;
  double *******pppppppdStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  undefined8 uStack_d8;
  int iStack_d0;
  undefined2 uStack_cc;
  long lStack_b8;
  
  lStack_b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppdStack_518 = (double ******)0x0;
  ppppppdStack_510 = (double ******)0x0;
  uStack_508 = 0;
  plVar70 = (long *)*param_6;
  if (((plVar70 != (long *)0x0) && (plVar70[0x4c] != 0)) &&
     (plVar25 = *(long **)(plVar70[0x4c] + 0xe0), plVar25 != (long *)0x0)) {
    (**(code **)(*plVar25 + 0x90))();
    lVar59 = *plVar25;
    if (lVar59 != 0) {
      uVar55 = *(uint *)(lVar59 + 0x110);
      if (uVar55 != 0xffffffff) {
        uVar46 = (*(long *)(lVar59 + 0x100) - *(long *)(lVar59 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
        if (uVar55 <= uVar46 && uVar46 - uVar55 != 0) {
          lVar66 = *(long *)(lVar59 + 0xf8) + (ulong)uVar55 * 0x38;
          goto LAB_10a11ef0c;
        }
LAB_10a122a1c:
        FUN_10ab725fc();
        dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
        dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8);
        goto LAB_10a122aec;
      }
      lVar66 = 0;
LAB_10a11ef0c:
      uVar55 = *(uint *)(lVar59 + 0x130);
      if (uVar55 == 0xffffffff) {
        lVar68 = 0;
      }
      else {
        uVar46 = (*(long *)(lVar59 + 0x100) - *(long *)(lVar59 + 0xf8) >> 3) * 0x6db6db6db6db6db7;
        if (uVar46 < uVar55 || uVar46 - uVar55 == 0) goto LAB_10a122a1c;
        lVar68 = *(long *)(lVar59 + 0xf8) + (ulong)uVar55 * 0x38;
      }
      uVar55 = *(uint *)(lVar59 + 0xf0);
      if (uVar55 == 0) {
        uVar46 = 0;
      }
      else {
        uVar46 = 0;
        if ((ulong)uVar55 != 0) {
          uVar46 = (ulong)(*(long *)(lVar59 + 0x18) - *(long *)(lVar59 + 0x10)) / (ulong)uVar55;
        }
      }
      plVar25 = plVar70;
      FUN_10a4247b0();
      if ((plVar25 == (long *)0x0) ||
         (plVar26 = plVar25, (**(code **)(*plVar25 + 0x60))(), (int)plVar26 == 0)) {
        lVar64 = 0;
        bVar22 = false;
      }
      else {
        lVar64 = *(long *)(lVar59 + 0xa0);
        lVar60 = *(long *)(lVar59 + 0xa8);
        lVar62 = lVar64;
        if (lVar64 != lVar60) {
          do {
            FUN_10ab6e728();
            lVar64 = lVar62;
            if (*(long *)(lVar62 + 0x28) == lRam00000001138356d8) break;
            lVar62 = lVar62 + 0x58;
            lVar64 = lVar60;
          } while (lVar62 != lVar60);
          lVar60 = *(long *)(lVar59 + 0xa8);
        }
        bVar22 = lVar64 != lVar60;
        if (!bVar22) {
          lVar64 = 0;
        }
      }
      plVar26 = plVar70;
      FUN_10a424820();
      iVar24 = (int)plVar26;
      uStack_560 = (ulong)plVar26 & 0xffffffff;
      if (iVar24 == 0) {
        pppppppdStack_550 = (double *******)0x0;
        pppppppdVar53 = (double *******)0x0;
      }
      else {
        FUN_10a410af8(plVar70);
        FUN_10a11b744(&pppppppdStack_2d0);
        pppppppdStack_550 = (double *******)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8);
        pppppppdVar53 = pppppppdStack_2d0;
      }
      plVar26 = plVar70;
      FUN_10a425ccc();
      if (plVar26 == (long *)0x0) {
LAB_10a11f088:
        bVar23 = false;
      }
      else {
        bVar23 = (*(ushort *)(plVar26 + 0x30) & 0x12) == 0;
        if (((*(ushort *)(plVar26 + 0x30) & 0x12) == 0) && (lVar68 == 0)) {
          if ((uRam000000011330a9e8 & 1) != 0) {
            func_0x00010ae06f08(0,1,&UNK_10f63d41b,&UNK_10f63d466,0x93,&UNK_10f63d4f3);
          }
          goto LAB_10a11f088;
        }
      }
      if ((lVar66 != 0) && ((bVar22 || iVar24 != 0) || bVar23)) {
        func_0x00010ab4d7d8(&ppppppdStack_530,lVar59,lVar66);
        uVar69 = uVar46 & 0xffffffff;
        FUN_10a1322a0(apppppppdStack_340,uVar69);
        ppppppdVar61 = ppppppdStack_530;
        lVar62 = 0;
        uVar56 = 0;
        while( true ) {
          uVar55 = *(uint *)(lVar59 + 0xf0);
          if (uVar55 == 0) {
            uVar38 = 0;
          }
          else {
            uVar38 = 0;
            if ((ulong)uVar55 != 0) {
              uVar38 = (ulong)(*(long *)(lVar59 + 0x18) - *(long *)(lVar59 + 0x10)) / (ulong)uVar55;
            }
            uVar38 = uVar38 & 0xffffffff;
          }
          if (uVar38 <= uVar56) break;
          uVar121 = (*(code *)(*ppppppdVar61)[2])(ppppppdVar61,uVar56);
          uVar38 = ((long)apppppppdStack_340[1] - (long)apppppppdStack_340[0] >> 2) *
                   -0x5555555555555555;
          dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8);
          dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
          if (uVar38 < uVar56 || uVar38 - uVar56 == 0) goto LAB_10a122aec;
          *(undefined8 *)((long)apppppppdStack_340[0] + lVar62) = uVar121;
          *(float *)((undefined8 *)((long)apppppppdStack_340[0] + lVar62) + 1) = param_3;
          uVar56 = uVar56 + 1;
          lVar62 = lVar62 + 0xc;
        }
        bVar22 = (bool)(bVar22 ^ 1);
        if (lVar64 == 0) {
          bVar22 = true;
        }
        if (bVar22) goto LAB_10a11f38c;
        pppppppdStack_150 = (double *******)((ulong)pppppppdStack_150 & 0xffffffff00000000);
        param_3 = 0.0;
        lVar60 = *(long *)(lVar64 + 0x48);
        FUN_10a11b78c(lVar60,&pppppppdStack_150);
        lVar62 = *(long *)(lVar64 + 0x30);
        uVar56 = *(long *)(lVar64 + 0x38) - lVar62 >> 5;
        dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8);
        dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
        if (((ulong)(long)(int)lVar60 < uVar56) &&
           (dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8),
           dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0),
           (ulong)(lVar60 >> 0x20) < uVar56)) {
          iVar4 = *(int *)(lVar64 + 8);
          lVar64 = *(long *)(lVar62 + (long)(int)lVar60 * 0x20 + 8);
          lVar62 = *(long *)(lVar62 + (lVar60 >> 0x20) * 0x20 + 8);
          func_0x00010ab4d7d8(&pppppppdStack_2d0,lVar59,lVar66);
          pppppppdVar65 = pppppppdStack_2d0;
          if (apppppppdStack_340[1] != apppppppdStack_340[0]) {
            lVar66 = 0;
            uVar56 = 0;
            uVar38 = (ulong)(uint)(iVar4 << 2);
            pfVar52 = (float *)(lVar64 + 8);
            pfVar31 = (float *)(lVar62 + 8);
            goto LAB_10a11f2c0;
          }
          if (pppppppdStack_2d0 != (double *******)0x0) goto LAB_10a11f378;
          goto LAB_10a11f38c;
        }
        goto LAB_10a122aec;
      }
      if (pppppppdVar53 != (double *******)0x0) {
        __ZdlPv(pppppppdVar53);
      }
    }
  }
  if ((uRam000000011330a9e8 & 1) != 0) {
    puVar35 = &UNK_10f63db07;
    uVar121 = 0x8a;
LAB_10a11f17c:
    func_0x00010ae06f08(0,1,&UNK_10f63da24,&UNK_10f63da6f,uVar121,puVar35);
  }
LAB_10a11f198:
  uVar121 = 0;
  goto LAB_10a11f19c;
  while( true ) {
    fVar84 = *(float *)((long)plVar25 + 500);
    fVar95 = 1.0 - pppppppdStack_150._0_4_;
    param_3 = param_3 + fVar84 * (*pfVar31 * pppppppdStack_150._0_4_ + *pfVar52 * fVar95);
    fVar85 = ((float)*(undefined8 *)(pfVar31 + -2) * pppppppdStack_150._0_4_ +
             (float)*(undefined8 *)(pfVar52 + -2) * fVar95) * fVar84;
    fVar84 = ((float)((ulong)*(undefined8 *)(pfVar31 + -2) >> 0x20) * pppppppdStack_150._0_4_ +
             (float)((ulong)*(undefined8 *)(pfVar52 + -2) >> 0x20) * fVar95) * fVar84;
    param_4 = (double ******)CONCAT44(fVar84,fVar85);
    *(undefined8 *)((long)apppppppdStack_340[0] + lVar66) =
         CONCAT44((float)((ulong)uVar121 >> 0x20) + fVar84,(float)uVar121 + fVar85);
    *(float *)((undefined8 *)((long)apppppppdStack_340[0] + lVar66) + 1) = param_3;
    uVar56 = uVar56 + 1;
    lVar66 = lVar66 + 0xc;
    pfVar52 = (float *)((long)pfVar52 + uVar38);
    pfVar31 = (float *)((long)pfVar31 + uVar38);
    if ((ulong)(((long)apppppppdStack_340[1] - (long)apppppppdStack_340[0] >> 2) *
               -0x5555555555555555) <= uVar56) break;
LAB_10a11f2c0:
    uVar121 = (*(code *)(*pppppppdVar65)[2])(pppppppdVar65,uVar56);
    uVar41 = ((long)apppppppdStack_340[1] - (long)apppppppdStack_340[0] >> 2) * -0x5555555555555555;
    dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8);
    dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
    if (uVar41 < uVar56 || uVar41 - uVar56 == 0) goto LAB_10a122aec;
  }
LAB_10a11f378:
  (*(code *)(*pppppppdVar65)[1])(pppppppdVar65);
LAB_10a11f38c:
  if (((long)ppppppdStack_510 - (long)ppppppdStack_518 >> 2) * -0x5555555555555555 - uVar69 != 0) {
    func_0x0001096b5198(&ppppppdStack_518,uVar69);
  }
  uVar55 = (uint)uVar46;
  if (iVar24 != 0) {
    dStack_138 = 0.0;
    pppppppdStack_140 = (double *******)0x0;
    dStack_148 = 0.0;
    pppppppdStack_150 = (double *******)0x0;
    dStack_130 = (double)CONCAT44(dStack_130._4_4_,0x3f800000);
    func_0x00010a1445b4(&pppppppdStack_150,
                        (long)(float)(ulong)((*(long *)(lVar59 + 0x48) - *(long *)(lVar59 + 0x40) >>
                                             3) * -0x71c71c71c71c71c7));
    ppppppdVar61 = *(double *******)(lVar59 + 0x40);
    ppppppdVar71 = *(double *******)(lVar59 + 0x48);
    if (ppppppdVar61 != ppppppdVar71) {
      pppppppdVar65 = param_5;
      do {
        pppppppdVar57 = (double *******)&pppppppdStack_150;
        func_0x000107c2b05c(pppppppdVar57,ppppppdVar61);
        pppppppdVar67 = (double *******)dStack_148;
        if ((double *******)dStack_148 != (double *******)0x0) {
          uVar46 = (long)dStack_148 - 1;
          if (((ulong)dStack_148 & uVar46) == 0) {
            pppppppdVar65 = (double *******)(uVar46 & (ulong)pppppppdVar57);
          }
          else {
            pppppppdVar65 = pppppppdVar57;
            if ((ulong)dStack_148 <= pppppppdVar57) {
              uVar56 = 0;
              if ((double *******)dStack_148 != (double *******)0x0) {
                uVar56 = (ulong)pppppppdVar57 / (ulong)dStack_148;
              }
              pppppppdVar65 = (double *******)((long)pppppppdVar57 - uVar56 * (long)dStack_148);
            }
          }
          if (pppppppdStack_150[(long)pppppppdVar65] != (double ******)0x0) {
            for (pppppdVar63 = *pppppppdStack_150[(long)pppppppdVar65];
                pppppdVar63 != (double *****)0x0; pppppdVar63 = (double *****)*pppppdVar63) {
              pppppppdVar39 = (double *******)pppppdVar63[1];
              if (pppppppdVar39 == pppppppdVar57) {
                pppppppdVar39 = (double *******)&pppppppdStack_150;
                func_0x000107c2b068(pppppppdVar39,pppppdVar63 + 2,ppppppdVar61);
                if (((ulong)pppppppdVar39 & 1) != 0) goto LAB_10a11f608;
              }
              else {
                if (((ulong)pppppppdVar67 & uVar46) == 0) {
                  pppppppdVar39 = (double *******)((ulong)pppppppdVar39 & uVar46);
                }
                else if (pppppppdVar67 <= pppppppdVar39) {
                  uVar56 = 0;
                  if (pppppppdVar67 != (double *******)0x0) {
                    uVar56 = (ulong)pppppppdVar39 / (ulong)pppppppdVar67;
                  }
                  pppppppdVar39 =
                       (double *******)((long)pppppppdVar39 - uVar56 * (long)pppppppdVar67);
                }
                if (pppppppdVar39 != pppppppdVar65) break;
              }
            }
          }
        }
        pppppppdVar39 = (double *******)0x30;
        __Znwm();
        *pppppppdVar39 = (double ******)0x0;
        pppppppdVar39[1] = (double ******)pppppppdVar57;
        if (*(char *)((long)ppppppdVar61 + 0x17) < '\0') {
          func_0x000107c3192c(pppppppdVar39 + 2,*ppppppdVar61,ppppppdVar61[1]);
        }
        else {
          ppppppdVar42 = (double ******)*ppppppdVar61;
          ppppppdVar120 = (double ******)ppppppdVar61[1];
          pppppppdVar39[4] = (double ******)ppppppdVar61[2];
          pppppppdVar39[3] = ppppppdVar120;
          pppppppdVar39[2] = ppppppdVar42;
        }
        pppppppdVar39[5] = ppppppdVar61;
        if ((pppppppdVar67 == (double *******)0x0) ||
           (param_3 = dStack_130._0_4_ * (float)pppppppdVar67,
           param_3 < (float)((long)dStack_138 + 1))) {
          uVar46 = 1;
          if ((double *******)0x2 < pppppppdVar67) {
            uVar46 = (ulong)(((ulong)pppppppdVar67 & (long)pppppppdVar67 - 1U) != 0);
          }
          uVar46 = uVar46 | (long)pppppppdVar67 << 1;
          uVar56 = (ulong)((float)((long)dStack_138 + 1) / dStack_130._0_4_);
          if (uVar46 <= uVar56) {
            uVar46 = uVar56;
          }
          func_0x00010a1445b4(&pppppppdStack_150,uVar46);
          pppppppdVar67 = (double *******)dStack_148;
          if (((ulong)dStack_148 & (long)dStack_148 - 1U) == 0) {
            pppppppdVar65 = (double *******)((long)dStack_148 - 1U & (ulong)pppppppdVar57);
          }
          else {
            pppppppdVar65 = pppppppdVar57;
            if ((ulong)dStack_148 <= pppppppdVar57) {
              uVar46 = 0;
              if ((double *******)dStack_148 != (double *******)0x0) {
                uVar46 = (ulong)pppppppdVar57 / (ulong)dStack_148;
              }
              pppppppdVar65 = (double *******)((long)pppppppdVar57 - uVar46 * (long)dStack_148);
            }
          }
        }
        ppppppdVar42 = pppppppdStack_150[(long)pppppppdVar65];
        if (ppppppdVar42 == (double ******)0x0) {
          *pppppppdVar39 = (double ******)pppppppdStack_140;
          pppppppdStack_150[(long)pppppppdVar65] = (double ******)&pppppppdStack_140;
          pppppppdStack_140 = pppppppdVar39;
          if (*pppppppdVar39 != (double ******)0x0) {
            pppppppdVar57 = (double *******)(*pppppppdVar39)[1];
            if (((ulong)pppppppdVar67 & (long)pppppppdVar67 - 1U) == 0) {
              pppppppdVar57 = (double *******)((ulong)pppppppdVar57 & (long)pppppppdVar67 - 1U);
            }
            else if (pppppppdVar67 <= pppppppdVar57) {
              uVar46 = 0;
              if (pppppppdVar67 != (double *******)0x0) {
                uVar46 = (ulong)pppppppdVar57 / (ulong)pppppppdVar67;
              }
              pppppppdVar57 = (double *******)((long)pppppppdVar57 - uVar46 * (long)pppppppdVar67);
            }
            pppppppdStack_150[(long)pppppppdVar57] = (double ******)pppppppdVar39;
          }
        }
        else {
          *pppppppdVar39 = (double ******)*ppppppdVar42;
          *ppppppdVar42 = (double *****)pppppppdVar39;
        }
        dStack_138 = (double)((long)dStack_138 + 1);
LAB_10a11f608:
        ppppppdVar61 = ppppppdVar61 + 9;
      } while (ppppppdVar61 != ppppppdVar71);
    }
    func_0x00010a424420(&pppppppdStack_2d0,plVar70);
    pppppppdVar65 = pppppppdVar53;
    if (uVar55 != 0) {
      lVar66 = 0;
      uVar46 = 0;
      do {
        uVar56 = ((long)apppppppdStack_340[1] - (long)apppppppdStack_340[0] >> 2) *
                 -0x5555555555555555;
        dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8);
        dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
        if ((uVar56 < uVar46 || uVar56 - uVar46 == 0) ||
           (uVar56 = ((long)ppppppdStack_510 - (long)ppppppdStack_518 >> 2) * -0x5555555555555555,
           dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8),
           dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0),
           uVar56 < uVar46 || uVar56 - uVar46 == 0)) goto LAB_10a122aec;
        pfVar52 = (float *)((long)apppppppdStack_340[0] + lVar66);
        fVar84 = *pfVar52;
        fVar85 = pfVar52[1];
        fVar95 = pfVar52[2];
        param_3 = SUB84(pppppppdStack_2b0,0) * fVar95 + SUB84(ppppppdStack_2a0,0);
        *(undefined8 *)((long)ppppppdStack_518 + lVar66) =
             CONCAT44((float)((ulong)pppppppdStack_2d0 >> 0x20) * fVar84 + uStack_2c0._4_4_ * fVar85
                      + (float)((ulong)pppppppdStack_2b0 >> 0x20) * fVar95 +
                        (float)((ulong)ppppppdStack_2a0 >> 0x20),
                      SUB84(pppppppdStack_2d0,0) * fVar84 + (float)uStack_2c0 * fVar85 + param_3);
        *(float *)((undefined8 *)((long)ppppppdStack_518 + lVar66) + 1) =
             fVar84 * (float)uStack_2c8 + fVar85 * pppppppdStack_2b8._0_4_ +
             fVar95 * pppppppdStack_2a8._0_4_ + ppppppdStack_298._0_4_;
        uVar46 = uVar46 + 1;
        lVar66 = lVar66 + 0xc;
        param_4 = ppppppdStack_2a0;
      } while (uVar69 != uVar46);
    }
    for (; pppppppdVar65 != pppppppdStack_550; pppppppdVar65 = pppppppdVar65 + 3) {
      pppppppdVar57 = (double *******)pppppppdVar65[1];
      if ((double *******)0x7ffffffffffffff7 < pppppppdVar57) goto LAB_10a122a14;
      ppppppdVar61 = *pppppppdVar65;
      if (pppppppdVar57 < (double *******)0x17) {
        uStack_380 = CONCAT17((char)pppppppdVar57,(undefined7)uStack_380);
        pppppppdVar39 = (double *******)apppppppdStack_390;
        if (pppppppdVar57 != (double *******)0x0) goto LAB_10a11f754;
      }
      else {
        pppppppdVar67 = (double *******)0x19;
        if (((ulong)pppppppdVar57 | 7) != 0x17) {
          pppppppdVar67 = (double *******)(((ulong)pppppppdVar57 | 7) + 1);
        }
        pppppppdVar39 = pppppppdVar67;
        __Znwm();
        uStack_380 = (ulong)pppppppdVar67 | 0x8000000000000000;
        apppppppdStack_390[0] = pppppppdVar39;
        apppppppdStack_390[1] = pppppppdVar57;
LAB_10a11f754:
        _memmove(pppppppdVar39,ppppppdVar61,pppppppdVar57);
      }
      *(undefined1 *)((long)pppppppdVar39 + (long)pppppppdVar57) = 0;
      pppppppdVar57 = (double *******)&pppppppdStack_150;
      func_0x000107c2b05c(pppppppdVar57,apppppppdStack_390);
      dVar76 = dStack_148;
      if ((double *******)dStack_148 == (double *******)0x0) {
        pppppdVar63 = (double *****)0x0;
      }
      else {
        uVar46 = (long)dStack_148 - 1;
        if (((ulong)dStack_148 & uVar46) == 0) {
          pppppppdVar67 = (double *******)(uVar46 & (ulong)pppppppdVar57);
        }
        else {
          pppppppdVar67 = pppppppdVar57;
          if ((ulong)dStack_148 <= pppppppdVar57) {
            uVar56 = 0;
            if ((double *******)dStack_148 != (double *******)0x0) {
              uVar56 = (ulong)pppppppdVar57 / (ulong)dStack_148;
            }
            pppppppdVar67 = (double *******)((long)pppppppdVar57 - uVar56 * (long)dStack_148);
          }
        }
        if (pppppppdStack_150[(long)pppppppdVar67] == (double ******)0x0) {
LAB_10a11f81c:
          pppppdVar63 = (double *****)0x0;
        }
        else {
          for (pppppdVar63 = *pppppppdStack_150[(long)pppppppdVar67];
              pppppdVar63 != (double *****)0x0; pppppdVar63 = (double *****)*pppppdVar63) {
            pppppppdVar39 = (double *******)pppppdVar63[1];
            if (pppppppdVar39 == pppppppdVar57) {
              pppppppdVar39 = (double *******)&pppppppdStack_150;
              func_0x000107c2b068(pppppppdVar39,pppppdVar63 + 2,apppppppdStack_390);
              if (((ulong)pppppppdVar39 & 1) != 0) break;
            }
            else {
              if (((ulong)dVar76 & uVar46) == 0) {
                pppppppdVar39 = (double *******)((ulong)pppppppdVar39 & uVar46);
              }
              else if ((ulong)dVar76 <= pppppppdVar39) {
                uVar56 = 0;
                if ((double *******)dVar76 != (double *******)0x0) {
                  uVar56 = (ulong)pppppppdVar39 / (ulong)dVar76;
                }
                pppppppdVar39 = (double *******)((long)pppppppdVar39 - uVar56 * (long)dVar76);
              }
              if (pppppppdVar39 != pppppppdVar67) goto LAB_10a11f81c;
            }
          }
        }
      }
      if ((long)uStack_380 < 0) {
        __ZdlPv(apppppppdStack_390[0]);
      }
      if (pppppdVar63 != (double *****)0x0) {
        dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
        dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8);
        if (uVar55 != 0) {
          lVar66 = 0;
          uVar46 = 0;
          ppdVar47 = *pppppdVar63[5][7] + 1;
          do {
            uVar56 = ((long)ppppppdStack_510 - (long)ppppppdStack_518 >> 2) * -0x5555555555555555;
            if (uVar56 < uVar46 || uVar56 - uVar46 == 0) goto LAB_10a122aec;
            fVar84 = *(float *)ppdVar47;
            fVar85 = *(float *)(pppppppdVar65 + 2);
            puVar43 = (undefined8 *)((long)ppppppdStack_518 + lVar66);
            param_3 = (float)*puVar43;
            *puVar43 = CONCAT44((float)((ulong)ppdVar47[-1] >> 0x20) * fVar85 +
                                (float)((ulong)*puVar43 >> 0x20),
                                SUB84(ppdVar47[-1],0) * fVar85 + param_3);
            *(float *)(puVar43 + 1) = fVar84 * fVar85 + *(float *)(puVar43 + 1);
            uVar46 = uVar46 + 1;
            lVar66 = lVar66 + 0xc;
            ppdVar47 = ppdVar47 + 3;
          } while (uVar69 != uVar46);
        }
      }
    }
    func_0x00010a144550(&pppppppdStack_150);
  }
  if (bVar23) {
    func_0x00010ab4dae0(&pppppppdStack_2f0,lVar59,lVar68);
    FUN_10ab4ccac(&pppppppdStack_150,lVar59);
    func_0x00010737fadc(apppppppdStack_390,uVar69);
    if (0 < (long)apppppppdStack_390[1]) {
      pppppppdStack_2d0 = apppppppdStack_390[0];
      uStack_2c8._0_4_ = 0.0;
      FUN_10a0433f4(&pppppppdStack_2d0);
    }
    plVar25 = *(long **)(lVar59 + 0x90);
    for (plVar70 = *(long **)(lVar59 + 0x88); plVar70 != plVar25;
        plVar70 = (long *)((long)plVar70 + 0x30)) {
      if (*plVar70 != *(long *)((long)plVar70 + 8)) {
        apppppppdStack_3d0[0] = (double *******)0x0;
        dStack_3d8 = 0.0;
        pppppppdStack_3e0 = (double *******)0x0;
        FUN_10a01066c(&pppppppdStack_3e0,*(long *)((long)plVar70 + 8) - *plVar70 >> 2);
        lVar66 = *plVar70;
        if (*(long *)((long)plVar70 + 8) != lVar66) {
          uVar46 = 0;
          do {
            uVar56 = (ulong)*(uint *)(lVar66 + uVar46 * 4);
            uVar69 = (*(long *)(lVar59 + 0x60) - *(long *)(lVar59 + 0x58) >> 5) *
                     -0x5555555555555555;
            if (uVar56 <= uVar69 && uVar69 - uVar56 != 0) {
              lVar66 = *(long *)(lVar59 + 0x58) + uVar56 * 0x60;
              plVar27 = plVar26 + 0x3e;
              FUN_10a063240(plVar27,lVar66);
              if (plVar27 == (long *)0x0) {
                if (((byte)uRam000000011330a9e8 >> 1 & 1) != 0) {
                  func_0x00010ae06f08(1,2,&UNK_10f63d41b,&UNK_10f63d466,0xfd,&UNK_10f63d515);
                }
              }
              else {
                apppppppdStack_430[1] = (double *******)0x0;
                apppppppdStack_430[0] = (double *******)0x0;
                pppppppdVar65 = (double *******)plVar27[7];
                if (((pppppppdVar65 == (double *******)0x0) ||
                    (__ZNSt3__119__shared_weak_count4lockEv(), apppppppdStack_430[1] = pppppppdVar65
                    , pppppppdVar65 == (double *******)0x0)) ||
                   (apppppppdStack_430[0] = (double *******)plVar27[6],
                   apppppppdStack_430[0] == (double *******)0x0)) {
                  pppppppdVar65 = apppppppdStack_430[1];
                  if (((byte)uRam000000011330a9e8 >> 1 & 1) != 0) {
                    func_0x00010ae06f08(1,2,&UNK_10f63d41b,&UNK_10f63d466,0x103,&UNK_10f63d535);
                  }
                  if (pppppppdVar65 == (double *******)0x0) goto LAB_10a11fb10;
                }
                else {
                  ppppppdVar61 = apppppppdStack_430[0][0x28];
                  if ((*(byte *)((long)ppppppdVar61 + 0x2a) & 0x24) != 0) {
                    FUN_10a3e8fd4(ppppppdVar61);
                  }
                  func_0x000109519fd0(&pppppppdStack_2d0,ppppppdVar61 + 0x18,lVar66 + 0x20);
                  dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8);
                  dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
                  if ((ulong)((long)dStack_3d8 - (long)pppppppdStack_3e0 >> 6) <= uVar46)
                  goto LAB_10a122aec;
                  pppppppdVar57 = pppppppdStack_3e0 + uVar46 * 8;
                  param_3 = SUB84(pppppppdStack_2b0,0);
                  pppppppdVar57[5] = (double ******)pppppppdStack_2a8;
                  pppppppdVar57[4] = (double ******)pppppppdStack_2b0;
                  pppppppdVar57[7] = ppppppdStack_298;
                  pppppppdVar57[6] = ppppppdStack_2a0;
                  pppppppdVar57[1] = (double ******)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8);
                  *pppppppdVar57 = (double ******)pppppppdStack_2d0;
                  pppppppdVar57[3] = (double ******)pppppppdStack_2b8;
                  pppppppdVar57[2] = (double ******)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
                  param_4 = ppppppdStack_2a0;
                }
                pppppppdVar57 = pppppppdVar65 + 1;
                do {
                  ppppppdVar61 = *pppppppdVar57;
                  cVar9 = '\x01';
                  bVar22 = (bool)ExclusiveMonitorPass(pppppppdVar57,0x10);
                  if (bVar22) {
                    *pppppppdVar57 = (double ******)((long)ppppppdVar61 + -1);
                    cVar9 = ExclusiveMonitorsStatus();
                  }
                } while (cVar9 != '\0');
                if (ppppppdVar61 == (double ******)0x0) {
                  (*(code *)(*pppppppdVar65)[2])(pppppppdVar65);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(pppppppdVar65);
                }
              }
            }
LAB_10a11fb10:
            uVar46 = uVar46 + 1;
            lVar66 = *plVar70;
          } while (uVar46 < (ulong)(*(long *)((long)plVar70 + 8) - lVar66 >> 2));
        }
        pppppppdVar65 = pppppppdStack_2f0;
        puVar3 = *(uint **)((long)plVar70 + 0x20);
        for (puVar73 = *(uint **)((long)plVar70 + 0x18); puVar73 != puVar3; puVar73 = puVar73 + 3) {
          if (2 < puVar73[1]) {
            uVar58 = 0;
            uVar5 = *puVar73;
            do {
              uVar37 = uVar5 / 3;
              FUN_10ab4e710(apppppppdStack_430,&pppppppdStack_150,uVar58 + uVar37);
              FUN_10ab4e794(&pppppppdStack_2d0,apppppppdStack_430,0);
              fStack_2e8 = uStack_2c8._4_4_;
              if (pppppppdStack_2d0 != (double *******)0x0) {
                if (((uint)(float)uStack_2c8 & 0xff) == 2) {
                  uVar36 = (uint)*(ushort *)pppppppdStack_2d0;
                }
                else {
                  if (((uint)(float)uStack_2c8 & 0xff) != 4) {
                    fStack_2e8 = 0.0;
                    goto LAB_10a11fbc4;
                  }
                  uVar36 = *(uint *)pppppppdStack_2d0;
                }
                fStack_2e8 = (float)((int)(float)uStack_2c0 + uVar36);
              }
LAB_10a11fbc4:
              FUN_10ab4e710(&fStack_500,&pppppppdStack_150,uVar58 + uVar37);
              FUN_10ab4e794(&pppppppdStack_480,&fStack_500,1);
              if (pppppppdStack_480 == (double *******)0x0) {
                iStack_2e4 = uStack_478._4_4_;
              }
              else {
                if ((char)uStack_478 == '\x02') {
                  uVar37 = (uint)*(ushort *)pppppppdStack_480;
                }
                else {
                  if ((char)uStack_478 != '\x04') {
                    iStack_2e4 = 0;
                    goto LAB_10a11fc28;
                  }
                  uVar37 = *(uint *)pppppppdStack_480;
                }
                iStack_2e4 = adStack_470[0]._0_4_ + uVar37;
              }
LAB_10a11fc28:
              FUN_10ab4e710(&dStack_4c0,&pppppppdStack_150,uVar58 + uVar5 / 3);
              FUN_10ab4e794(&puStack_4a0,&dStack_4c0,2);
              if (puStack_4a0 == (uint *)0x0) {
                iVar24 = uStack_498._4_4_;
              }
              else {
                if ((char)uStack_498 == '\x02') {
                  uVar37 = (uint)(ushort)*puStack_4a0;
                }
                else {
                  if ((char)uStack_498 != '\x04') {
                    iVar24 = 0;
                    goto LAB_10a11fc8c;
                  }
                  uVar37 = *puStack_4a0;
                }
                iVar24 = dStack_490._0_4_ + uVar37;
              }
LAB_10a11fc8c:
              lVar66 = 0;
              lStack_2e0 = CONCAT44(lStack_2e0._4_4_,iVar24);
              do {
                uVar37 = *(uint *)((long)&fStack_2e8 + lVar66);
                pppppppdVar57 = (double *******)(ulong)uVar37;
                if (pppppppdVar57 < apppppppdStack_390[1] && uVar37 < uVar55) {
                  uVar46 = 1L << ((ulong)pppppppdVar57 & 0x3f);
                  if (((ulong)apppppppdStack_390[0][uVar37 >> 6] & uVar46) == 0) {
                    apppppppdStack_390[0][uVar37 >> 6] =
                         (double ******)((ulong)apppppppdStack_390[0][uVar37 >> 6] | uVar46);
                    uVar121 = (*(code *)(*pppppppdVar65)[2])(pppppppdVar65,pppppppdVar57);
                    fVar85 = (float)((ulong)uVar121 >> 0x20);
                    uVar45 = (uint)param_3;
                    uVar48 = (uint)fVar85;
                    fVar84 = SUB84(param_4,0);
                    uVar40 = (uint)fVar84;
                    uVar50 = (uint)(float)uVar121;
                    uVar36 = uVar50;
                    if ((int)uVar50 <= (int)uVar48) {
                      uVar36 = uVar48;
                    }
                    if ((int)uVar36 <= (int)uVar45) {
                      uVar36 = uVar45;
                    }
                    if ((int)uVar36 <= (int)uVar40) {
                      uVar36 = uVar40;
                    }
                    if (0x7fffffff < uVar36) {
                      uVar36 = 0xffffffff;
                    }
                    uVar46 = (long)dStack_3d8 - (long)pppppppdStack_3e0 >> 6;
                    if ((int)uVar36 < (int)uVar46) {
                      pppppppdVar67 =
                           (double *******)
                           (((long)apppppppdStack_340[1] - (long)apppppppdStack_340[0] >> 2) *
                           -0x5555555555555555);
                      dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8);
                      dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
                      if ((((pppppppdVar67 < pppppppdVar57 ||
                             (long)pppppppdVar67 - (long)pppppppdVar57 == 0) ||
                           (dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8),
                           dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0),
                           uVar46 <= (ulong)(long)(int)uVar50)) ||
                          ((dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8),
                           dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0),
                           uVar46 <= (ulong)(long)(int)uVar48 ||
                           ((dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8),
                            dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0),
                            uVar46 <= (ulong)(long)(int)uVar45 ||
                            (dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8),
                            dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0),
                            uVar46 <= (ulong)(long)(int)uVar40)))))) ||
                         (pppppppdVar67 =
                               (double *******)
                               (((long)ppppppdStack_510 - (long)ppppppdStack_518 >> 2) *
                               -0x5555555555555555),
                         dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8),
                         dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0),
                         pppppppdVar67 < pppppppdVar57 ||
                         (long)pppppppdVar67 - (long)pppppppdVar57 == 0)) goto LAB_10a122aec;
                      fVar81 = param_3 - (float)(int)param_3;
                      fVar85 = fVar85 - (float)(int)fVar85;
                      fVar84 = fVar84 - (float)(int)fVar84;
                      fVar93 = 1.0 - (fVar84 + fVar81 + fVar85);
                      pfVar52 = (float *)((long)apppppppdStack_340[0] + (ulong)uVar37 * 0xc);
                      fVar92 = *pfVar52;
                      fVar86 = pfVar52[1];
                      fVar95 = pfVar52[2];
                      pppppppdVar57 = pppppppdStack_3e0 + (long)(int)uVar50 * 8;
                      fVar96 = *(float *)(pppppppdVar57 + 1);
                      fVar103 = *(float *)(pppppppdVar57 + 3);
                      fVar104 = *(float *)(pppppppdVar57 + 5);
                      fVar109 = *(float *)(pppppppdVar57 + 7);
                      pppppppdVar67 = pppppppdStack_3e0 + (long)(int)uVar48 * 8;
                      fVar105 = *(float *)(pppppppdVar67 + 1);
                      fVar110 = *(float *)(pppppppdVar67 + 3);
                      fVar111 = *(float *)(pppppppdVar67 + 5);
                      fVar117 = *(float *)(pppppppdVar67 + 7);
                      pppppppdVar39 = pppppppdStack_3e0 + (long)(int)uVar45 * 8;
                      fVar106 = *(float *)(pppppppdVar39 + 1);
                      fVar112 = *(float *)(pppppppdVar39 + 3);
                      fVar113 = *(float *)(pppppppdVar39 + 5);
                      fVar118 = *(float *)(pppppppdVar39 + 7);
                      pppppppdVar72 = pppppppdStack_3e0 + (long)(int)uVar40 * 8;
                      fVar107 = *(float *)(pppppppdVar72 + 1);
                      fVar114 = *(float *)(pppppppdVar72 + 3);
                      fVar115 = *(float *)(pppppppdVar72 + 5);
                      fVar119 = *(float *)(pppppppdVar72 + 7);
                      puVar43 = (undefined8 *)((long)ppppppdStack_518 + (ulong)uVar37 * 0xc);
                      param_3 = (SUB84(*pppppppdVar57,0) * fVar92 +
                                 SUB84(pppppppdVar57[2],0) * fVar86 +
                                SUB84(pppppppdVar57[4],0) * fVar95 + SUB84(pppppppdVar57[6],0)) *
                                fVar93 + (SUB84(*pppppppdVar67,0) * fVar92 +
                                          SUB84(pppppppdVar67[2],0) * fVar86 +
                                         SUB84(pppppppdVar67[4],0) * fVar95 +
                                         SUB84(pppppppdVar67[6],0)) * fVar85 +
                                (SUB84(*pppppppdVar39,0) * fVar92 +
                                 SUB84(pppppppdVar39[2],0) * fVar86 +
                                SUB84(pppppppdVar39[4],0) * fVar95 + SUB84(pppppppdVar39[6],0)) *
                                fVar81;
                      fVar87 = SUB84(*pppppppdVar72,0) * fVar92 + SUB84(pppppppdVar72[2],0) * fVar86
                      ;
                      fVar90 = (float)((ulong)*pppppppdVar72 >> 0x20) * fVar92 +
                               (float)((ulong)pppppppdVar72[2] >> 0x20) * fVar86;
                      param_4 = (double ******)CONCAT44(fVar90,fVar87);
                      *puVar43 = CONCAT44(((float)((ulong)*pppppppdVar57 >> 0x20) * fVar92 +
                                           (float)((ulong)pppppppdVar57[2] >> 0x20) * fVar86 +
                                          (float)((ulong)pppppppdVar57[4] >> 0x20) * fVar95 +
                                          (float)((ulong)pppppppdVar57[6] >> 0x20)) * fVar93 +
                                          ((float)((ulong)*pppppppdVar67 >> 0x20) * fVar92 +
                                           (float)((ulong)pppppppdVar67[2] >> 0x20) * fVar86 +
                                          (float)((ulong)pppppppdVar67[4] >> 0x20) * fVar95 +
                                          (float)((ulong)pppppppdVar67[6] >> 0x20)) * fVar85 +
                                          ((float)((ulong)*pppppppdVar39 >> 0x20) * fVar92 +
                                           (float)((ulong)pppppppdVar39[2] >> 0x20) * fVar86 +
                                          (float)((ulong)pppppppdVar39[4] >> 0x20) * fVar95 +
                                          (float)((ulong)pppppppdVar39[6] >> 0x20)) * fVar81 +
                                          (fVar90 + (float)((ulong)pppppppdVar72[4] >> 0x20) *
                                                    fVar95 + (float)((ulong)pppppppdVar72[6] >> 0x20
                                                                    )) * fVar84,
                                          param_3 + (fVar87 + SUB84(pppppppdVar72[4],0) * fVar95 +
                                                              SUB84(pppppppdVar72[6],0)) * fVar84);
                      *(float *)(puVar43 + 1) =
                           fVar93 * (fVar92 * fVar96 + fVar86 * fVar103 + fVar95 * fVar104 + fVar109
                                    ) +
                           fVar85 * (fVar92 * fVar105 + fVar86 * fVar110 +
                                    fVar95 * fVar111 + fVar117) +
                           fVar81 * (fVar92 * fVar106 + fVar86 * fVar112 +
                                    fVar95 * fVar113 + fVar118) +
                           fVar84 * (fVar92 * fVar107 + fVar86 * fVar114 +
                                    fVar95 * fVar115 + fVar119);
                    }
                  }
                }
                lVar66 = lVar66 + 4;
              } while (lVar66 != 0xc);
              uVar58 = uVar58 + 1;
            } while (uVar58 < puVar73[1] / 3);
          }
        }
        if (pppppppdStack_3e0 != (double *******)0x0) {
          dStack_3d8 = (double)pppppppdStack_3e0;
          __ZdlPv();
        }
      }
    }
    if (apppppppdStack_390[0] != (double *******)0x0) {
      __ZdlPv();
    }
    if (pppppppdStack_2f0 != (double *******)0x0) {
      (*(code *)(*pppppppdStack_2f0)[1])();
    }
    uStack_560 = 1;
  }
  if (apppppppdStack_340[0] != (double *******)0x0) {
    apppppppdStack_340[1] = apppppppdStack_340[0];
    __ZdlPv();
  }
  if (ppppppdStack_530 != (double ******)0x0) {
    (*(code *)(*ppppppdStack_530)[1])();
  }
  if (pppppppdVar53 != (double *******)0x0) {
    __ZdlPv(pppppppdVar53);
  }
  if ((uStack_560 & 1) == 0) {
    if (((byte)uRam000000011330a9e8 >> 1 & 1) != 0) {
      func_0x00010ae06f08(1,2,&UNK_10f63da24,&UNK_10f63da6f,0x8e,&UNK_10f63db41);
    }
    uVar46 = *param_6;
    if (((uVar46 != 0) && (*(long *)(uVar46 + 0x260) != 0)) &&
       (plVar70 = *(long **)(*(long *)(uVar46 + 0x260) + 0xe0), plVar70 != (long *)0x0)) {
      (**(code **)(*plVar70 + 0x90))();
      lVar59 = *plVar70;
      if (lVar59 != 0) {
        uVar55 = *(uint *)(lVar59 + 0x110);
        if (uVar55 != 0xffffffff) {
          lVar66 = *(long *)(lVar59 + 0xf8);
          uVar56 = (*(long *)(lVar59 + 0x100) - lVar66 >> 3) * 0x6db6db6db6db6db7;
          if (uVar56 < uVar55 || uVar56 - uVar55 == 0) goto LAB_10a122a1c;
          if (lVar66 != 0) {
            uVar58 = *(uint *)(lVar59 + 0xf0);
            if (uVar58 == 0) {
              uVar56 = 0;
            }
            else {
              uVar56 = 0;
              if ((ulong)uVar58 != 0) {
                uVar56 = (ulong)(*(long *)(lVar59 + 0x18) - *(long *)(lVar59 + 0x10)) /
                         (ulong)uVar58;
              }
              uVar56 = uVar56 & 0xffffffff;
            }
            func_0x0001096b5198(&ppppppdStack_518,uVar56);
            func_0x00010ab4d7d8(&pppppppdStack_150,lVar59,lVar66 + (ulong)uVar55 * 0x38);
            func_0x00010a424420(&pppppppdStack_2d0,uVar46);
            pppppppdVar53 = pppppppdStack_150;
            lVar66 = 0;
            uVar46 = 0;
            while( true ) {
              uVar55 = *(uint *)(lVar59 + 0xf0);
              if (uVar55 == 0) {
                uVar56 = 0;
              }
              else {
                uVar56 = 0;
                if ((ulong)uVar55 != 0) {
                  uVar56 = (ulong)(*(long *)(lVar59 + 0x18) - *(long *)(lVar59 + 0x10)) /
                           (ulong)uVar55;
                }
                uVar56 = uVar56 & 0xffffffff;
              }
              if (uVar56 <= uVar46) {
                if (pppppppdVar53 != (double *******)0x0) {
                  (*(code *)(*pppppppdVar53)[1])(pppppppdVar53);
                }
                goto LAB_10a120020;
              }
              uVar121 = (*(code *)(*pppppppdVar53)[2])(pppppppdVar53,uVar46);
              fVar85 = (float)((ulong)uVar121 >> 0x20);
              fVar84 = (float)uVar121;
              dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
              dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8);
              uVar56 = ((long)ppppppdStack_510 - (long)ppppppdStack_518 >> 2) * -0x5555555555555555;
              if (uVar56 < uVar46 || uVar56 - uVar46 == 0) break;
              fVar86 = param_3 * pppppppdStack_2a8._0_4_;
              fVar95 = SUB84(pppppppdStack_2b0,0) * param_3;
              fVar81 = (float)((ulong)pppppppdStack_2b0 >> 0x20) * param_3;
              param_3 = SUB84(ppppppdStack_2a0,0);
              *(undefined8 *)((long)ppppppdStack_518 + lVar66) =
                   CONCAT44((float)((ulong)pppppppdStack_2d0 >> 0x20) * fVar84 +
                            uStack_2c0._4_4_ * fVar85 +
                            fVar81 + (float)((ulong)ppppppdStack_2a0 >> 0x20),
                            SUB84(pppppppdStack_2d0,0) * fVar84 + (float)uStack_2c0 * fVar85 +
                            fVar95 + param_3);
              *(float *)((undefined8 *)((long)ppppppdStack_518 + lVar66) + 1) =
                   fVar84 * (float)uStack_2c8 + fVar85 * pppppppdStack_2b8._0_4_ +
                   fVar86 + ppppppdStack_298._0_4_;
              uVar46 = uVar46 + 1;
              lVar66 = lVar66 + 0xc;
            }
            goto LAB_10a122aec;
          }
        }
      }
    }
    if ((uRam000000011330a9e8 & 1) != 0) {
      puVar35 = &UNK_10f63db71;
      uVar121 = 0x91;
      goto LAB_10a11f17c;
    }
    goto LAB_10a11f198;
  }
LAB_10a120020:
  uVar46 = *param_6;
  if ((*(double *******)(uVar46 + 0x40) != param_5[1]) ||
     (*(double *******)(uVar46 + 0x48) != param_5[2])) {
    ppppppdStack_530 = (double ******)0x0;
    ppppppdStack_528 = (double ******)0x0;
    uStack_520 = 0;
    if ((*(long *)(uVar46 + 0x260) == 0) ||
       (puVar28 = *(ulong **)(*(long *)(uVar46 + 0x260) + 0xe0), puVar28 == (ulong *)0x0)) {
LAB_10a120398:
      if ((uRam000000011330a9e8 & 1) != 0) {
        func_0x00010ae06f08(0,1,&UNK_10f63da24,&UNK_10f63da6f,0x9b,&UNK_10f63dba6);
      }
    }
    else {
      (**(code **)(*puVar28 + 0x90))();
      uVar46 = *puVar28;
      if (uVar46 == 0) goto LAB_10a120398;
      uVar38 = uVar46;
      FUN_10ab4a5b4();
      uVar41 = (uVar38 & 0xffffffff) / 3;
      func_0x00010a11b708(&ppppppdStack_530,uVar41);
      uVar69 = *(long *)(uVar46 + 0x30) - *(long *)(uVar46 + 0x28);
      uVar56 = 0;
      if (uVar69 != 0 && *(int *)(uVar46 + 0xe8) != 0) {
        uVar56 = uVar69 >> 1;
      }
      if (2 < (uint)uVar38) {
        lVar59 = 0;
        uVar69 = 0;
        uVar38 = uVar56;
        if (uVar56 < 3) {
          uVar38 = 2;
        }
        uVar51 = 1;
        puVar49 = (ushort *)(*(long *)(uVar46 + 0x28) + 2);
        do {
          dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8);
          dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
          if (((uVar56 <= uVar51 - 1) ||
              (dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8),
              dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0), uVar56 <= uVar51)) ||
             ((dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8),
              dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0), uVar38 / 3 == uVar69
              || (uVar46 = ((long)ppppppdStack_528 - (long)ppppppdStack_530 >> 2) *
                           -0x5555555555555555,
                 dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8),
                 dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0),
                 uVar46 < uVar69 || uVar46 - uVar69 == 0)))) goto LAB_10a122aec;
          uVar6 = puVar49[1];
          uVar7 = *puVar49;
          puVar73 = (uint *)((long)ppppppdStack_530 + lVar59);
          uVar69 = uVar69 + 1;
          *puVar73 = (uint)puVar49[-1];
          puVar73[1] = (uint)uVar7;
          puVar73[2] = (uint)uVar6;
          lVar59 = lVar59 + 0xc;
          uVar51 = uVar51 + 3;
          puVar49 = puVar49 + 3;
        } while (uVar41 != uVar69);
      }
      __ZNSt3__16chrono12steady_clock3nowEv();
      lVar66 = ((long)(*param_5)[1] - (long)**param_5 >> 2) * -0x5555555555555555;
      uVar46 = (ulong)(int)lVar66;
      FUN_10a1322a0(&fStack_2e8,uVar46);
      lVar59 = lStack_2e0;
      ppppppdVar71 = ppppppdStack_510;
      ppppppdVar61 = ppppppdStack_518;
      lVar66 = lVar66 << 0x20;
      if (lVar66 != 0) {
        lVar68 = 0;
        uVar56 = 0;
        do {
          pppppdVar63 = **param_5;
          uVar69 = ((long)(*param_5)[1] - (long)pppppdVar63 >> 2) * -0x5555555555555555;
          dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8);
          dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
          if ((uVar69 < uVar56 || uVar69 - uVar56 == 0) ||
             (uVar69 = (lStack_2e0 - CONCAT44(iStack_2e4,fStack_2e8) >> 2) * -0x5555555555555555,
             dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8),
             dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0),
             uVar69 < uVar56 || uVar69 - uVar56 == 0)) goto LAB_10a122aec;
          pfVar52 = (float *)((long)pppppdVar63 + lVar68);
          fVar84 = *(float *)(param_7 + 1);
          fVar85 = *pfVar52;
          fVar95 = pfVar52[1];
          fVar81 = *(float *)(param_7 + 3);
          fVar86 = pfVar52[2];
          fVar87 = *(float *)(param_7 + 5);
          fVar90 = *(float *)(param_7 + 7);
          puVar43 = (undefined8 *)(CONCAT44(iStack_2e4,fStack_2e8) + lVar68);
          param_3 = (float)param_7[4] * fVar86 + (float)param_7[6];
          *puVar43 = CONCAT44((float)((ulong)*param_7 >> 0x20) * fVar85 +
                              (float)((ulong)param_7[2] >> 0x20) * fVar95 +
                              (float)((ulong)param_7[4] >> 0x20) * fVar86 +
                              (float)((ulong)param_7[6] >> 0x20),
                              (float)*param_7 * fVar85 + (float)param_7[2] * fVar95 + param_3);
          *(float *)(puVar43 + 1) = fVar85 * fVar84 + fVar95 * fVar81 + fVar86 * fVar87 + fVar90;
          uVar56 = uVar56 + 1;
          lVar68 = lVar68 + 0xc;
        } while (uVar46 != uVar56);
      }
      lVar68 = CONCAT44(iStack_2e4,fStack_2e8);
      fVar84 = (float)FUN_10a12310c(lVar68,lStack_2e0,ppppppdStack_518,ppppppdStack_510);
      if (0.001 <= fVar84) {
        lVar64 = lVar59 - lVar68;
        lVar62 = lVar64 >> 2;
        uVar56 = lVar62 * -0x5555555555555555;
        if (uVar56 < 3 || lVar64 != (long)ppppppdVar71 - (long)ppppppdVar61) {
          puStack_4a0 = (uint *)FUN_10a1326f8(lVar68,lVar59);
          uVar56 = (ulong)puStack_4a0 >> 0x20;
          fVar85 = SUB84(puStack_4a0,0);
          uStack_498 = (double)CONCAT44(uStack_498._4_4_,param_3);
          fVar84 = param_3;
          dStack_4c0 = (double)FUN_10a1326f8(ppppppdStack_518,ppppppdStack_510);
          uVar69 = (ulong)dStack_4c0 >> 0x20;
          fVar95 = SUB84(dStack_4c0,0);
          dStack_4b8 = (double)CONCAT44(dStack_4b8._4_4_,fVar84);
          FUN_10a1327b0(apppppppdStack_390,CONCAT44(iStack_2e4,fStack_2e8),lStack_2e0,&puStack_4a0);
          FUN_10a1327b0(&pppppppdStack_3e0,ppppppdStack_518,ppppppdStack_510,&dStack_4c0);
          dStack_250._0_6_ = (uint6)dStack_250._0_4_;
          func_0x00010937ee74(&pppppppdStack_2d0,apppppppdStack_390,0x80);
          uStack_cc = 0;
          func_0x00010937ee74(&pppppppdStack_150,&pppppppdStack_3e0,0x80);
          dVar88 = dStack_110;
          dVar100 = dStack_118;
          dVar91 = dStack_120;
          dVar89 = dStack_128;
          dVar99 = dStack_130;
          dVar101 = dStack_138;
          pppppppdVar65 = pppppppdStack_140;
          dVar76 = dStack_148;
          pppppppdVar53 = pppppppdStack_150;
          if (dStack_250._0_4_ == 0 && iStack_d0 == 0) {
            lVar59 = 0;
            apppppppdStack_418[2] = pppppppdStack_2a8;
            apppppppdStack_418[1] = pppppppdStack_2b0;
            appppppdStack_400[1] = ppppppdStack_298;
            appppppdStack_400[0] = ppppppdStack_2a0;
            dStack_3f0 = dStack_290;
            dStack_420 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
            apppppppdStack_430[1] = (double *******)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8);
            apppppppdStack_430[0] = pppppppdStack_2d0;
            apppppppdStack_418[0] = pppppppdStack_2b8;
            pppppppdVar57 = (double *******)apppppppdStack_418;
            pppppppdVar67 = pppppppdVar57;
            do {
              ppppppdVar71 = pppppppdVar67[-3];
              ppppppdVar61 = *pppppppdVar67;
              ppppppdVar42 = pppppppdVar67[3];
              *(double *)((long)&uStack_478 + lVar59) =
                   dVar76 * (double)ppppppdVar71 + dVar99 * (double)ppppppdVar61 +
                   dVar100 * (double)ppppppdVar42;
              *(double *)((long)&pppppppdStack_480 + lVar59) =
                   (double)pppppppdVar53 * (double)ppppppdVar71 + dVar101 * (double)ppppppdVar61 +
                   dVar91 * (double)ppppppdVar42;
              *(double *)((long)adStack_470 + lVar59) =
                   (double)pppppppdVar65 * (double)ppppppdVar71 +
                   dVar89 * (double)ppppppdVar61 + dVar88 * (double)ppppppdVar42;
              lVar59 = lVar59 + 0x18;
              pppppppdVar67 = pppppppdVar67 + 1;
            } while (lVar59 != 0x48);
            uVar82 = SUB84(adStack_470[0],0);
            uVar83 = (undefined4)((ulong)adStack_470[0] >> 0x20);
            if (dStack_450 *
                (-(adStack_470[2] * adStack_470[0]) + adStack_470[3] * (double)uStack_478) +
                ((double)pppppppdStack_480 *
                 (-(dStack_448 * adStack_470[3]) + dStack_440 * adStack_470[2]) -
                adStack_470[1] * (-(dStack_448 * adStack_470[0]) + dStack_440 * (double)uStack_478))
                < 0.0) {
              lVar59 = 0;
              do {
                ppppppdVar61 = pppppppdVar57[-3];
                ppppppdVar71 = *pppppppdVar57;
                ppppppdVar42 = pppppppdVar57[3];
                *(double *)((long)apppppppdStack_340 + lVar59 + 8) =
                     dVar76 * (double)ppppppdVar61 + dVar99 * (double)ppppppdVar71 +
                     -dVar100 * (double)ppppppdVar42;
                *(double *)((long)apppppppdStack_340 + lVar59) =
                     (double)pppppppdVar53 * (double)ppppppdVar61 + dVar101 * (double)ppppppdVar71 +
                     -dVar91 * (double)ppppppdVar42;
                *(double *)((long)adStack_330 + lVar59) =
                     (double)pppppppdVar65 * (double)ppppppdVar61 +
                     (dVar89 * (double)ppppppdVar71 - dVar88 * (double)ppppppdVar42);
                lVar59 = lVar59 + 0x18;
                pppppppdVar57 = pppppppdVar57 + 1;
              } while (lVar59 != 0x48);
              uVar82 = SUB84(adStack_330[0],0);
              uVar83 = (undefined4)((ulong)adStack_330[0] >> 0x20);
              uStack_478 = apppppppdStack_340[1];
              pppppppdStack_480 = apppppppdStack_340[0];
              adStack_470[1] = adStack_330[1];
              adStack_470[0] = adStack_330[0];
              adStack_470[3] = adStack_330[3];
              adStack_470[2] = adStack_330[2];
              dStack_448 = dStack_308;
              dStack_450 = dStack_310;
              dStack_440 = dStack_300;
            }
            dVar100 = dStack_440;
            dVar91 = dStack_448;
            dVar89 = dStack_450;
            dVar99 = adStack_470[3];
            dVar101 = adStack_470[2];
            dVar76 = adStack_470[1];
            pppppppdVar65 = uStack_478;
            pppppppdVar53 = pppppppdStack_480;
            dVar88 = (double)apppppppdStack_390[0] + (double)apppppppdStack_378[1] + dStack_350;
            if (0.0 < dVar88) {
              lVar59 = 0;
              fStack_500 = 1.0;
              uStack_4f8._4_4_ = 0;
              fStack_4f0 = 0.0;
              fStack_4fc = 0.0;
              uStack_4f8._0_4_ = 0.0;
              fStack_4ec = 1.0;
              uStack_4e8 = 0;
              uStack_4e0 = 0;
              dVar88 = SQRT(((double)pppppppdStack_3e0 + dStack_3c0 + dStack_3a0) / dVar88);
              fStack_4d8 = 1.0;
              uStack_4d4 = 0;
              uStack_4c4 = 0x3f800000;
              pppppppdVar57 = (double *******)&pppppppdStack_480;
              do {
                lVar64 = 0;
                lVar68 = 0;
                pfVar52 = &fStack_500;
                do {
                  pfVar31 = (float *)(&uStack_4f8 + lVar68 * 2);
                  if ((int)lVar59 != 2) {
                    pfVar31 = pfVar52;
                  }
                  pfVar54 = &fStack_4fc + lVar68 * 4;
                  if ((int)lVar59 != 1) {
                    pfVar54 = pfVar31;
                  }
                  *pfVar54 = (float)(dVar88 * *(double *)((long)pppppppdVar57 + lVar64));
                  lVar68 = lVar68 + 1;
                  lVar64 = lVar64 + 0x18;
                  pfVar52 = pfVar52 + 4;
                } while (lVar64 != 0x48);
                lVar59 = lVar59 + 1;
                pppppppdVar57 = pppppppdVar57 + 1;
              } while (lVar59 != 3);
              dVar97 = (double)param_3;
              dVar108 = (double)(float)uVar56;
              dVar116 = (double)fVar85;
              fStack_4c8 = fVar84 - (float)(((double)CONCAT44(uVar83,uVar82) * dVar116 +
                                            dVar100 * dVar97 + dVar99 * dVar108) * dVar88);
              fStack_4d0 = fVar95 - (float)(((double)pppppppdVar53 * dVar116 + dVar76 * dVar108 +
                                            dVar89 * dVar97) * dVar88);
              fStack_4cc = (float)uVar69 -
                           (float)(((double)pppppppdVar65 * dVar116 + dVar101 * dVar108 +
                                   dVar91 * dVar97) * dVar88);
              goto LAB_10a121bac;
            }
            uVar121 = 0x10;
            ___cxa_allocate_exception(0x10);
            __ZNSt13runtime_errorC1EPKc();
          }
          else {
            uVar121 = 0x10;
            ___cxa_allocate_exception(0x10);
            __ZNSt13runtime_errorC1EPKc();
          }
          ___cxa_throw(uVar121,PTR___ZTISt13runtime_error_110346a40,
                       PTR___ZNSt13runtime_errorD1Ev_1103461d8);
          dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
          dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8);
          goto LAB_10a122aec;
        }
        apppppppdStack_430[1] = (double *******)0x0;
        apppppppdStack_430[0] = (double *******)0x0;
        dStack_420 = 0.0;
        lVar59 = 0;
        if (uVar56 != 0) {
          lVar59 = 0x7fffffffffffffff / (long)uVar56;
        }
        if (lVar59 < 3) {
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
          dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8);
          goto LAB_10a122aec;
        }
        func_0x000109534bec(apppppppdStack_430,lVar62,3,uVar56);
        pppppppdStack_480 = (double *******)0x0;
        uStack_478 = (double *******)0x0;
        adStack_470[0] = 0.0;
        func_0x000109534bec(&pppppppdStack_480,lVar62,3,uVar56);
        lVar68 = 0;
        lVar59 = 0;
        uVar69 = 0;
        puStack_4a0 = (uint *)0x0;
        uStack_498 = 0.0;
        dStack_490 = 0.0;
        dVar99 = 0.0;
        auVar75 = ZEXT216(0);
        dStack_4c0 = 0.0;
        dStack_4b8 = 0.0;
        dVar89 = 0.0;
        dVar91 = 0.0;
        dVar100 = 0.0;
        dStack_4b0 = 0.0;
        dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8);
        dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
        do {
          pppppppdVar65 = apppppppdStack_430[1];
          pppppppdVar53 = apppppppdStack_430[0];
          dVar88 = auVar75._8_8_;
          uVar38 = (lStack_2e0 - CONCAT44(iStack_2e4,fStack_2e8) >> 2) * -0x5555555555555555;
          if (uVar38 < uVar69 || uVar38 - uVar69 == 0) goto LAB_10a122aec;
          puVar43 = (undefined8 *)(CONCAT44(iStack_2e4,fStack_2e8) + lVar59);
          dVar101 = (double)*(float *)(puVar43 + 1);
          uVar121 = *puVar43;
          pppppppdVar57 = (double *******)(double)(float)uVar121;
          dVar76 = (double)(float)((ulong)uVar121 >> 0x20);
          uStack_2c8._0_4_ = SUB84(dVar76,0);
          uStack_2c8._4_4_ = (float)((ulong)dVar76 >> 0x20);
          pppppppdStack_2d0 = pppppppdVar57;
          uStack_2c0._0_4_ = SUB84(dVar101,0);
          uStack_2c0._4_4_ = (float)((ulong)dVar101 >> 0x20);
          uVar38 = ((long)ppppppdStack_510 - (long)ppppppdStack_518 >> 2) * -0x5555555555555555;
          if (uVar38 < uVar69 || uVar38 - uVar69 == 0) goto LAB_10a122aec;
          pppppppdVar102 =
               (double *******)
               (double)*(float *)((undefined8 *)((long)ppppppdStack_518 + lVar59) + 1);
          uVar121 = *(undefined8 *)((long)ppppppdStack_518 + lVar59);
          pppppppdVar72 = (double *******)(double)(float)uVar121;
          pppppppdVar77 = (double *******)(double)(float)((ulong)uVar121 >> 0x20);
          dStack_148 = (double)pppppppdVar77;
          pppppppdStack_150 = pppppppdVar72;
          pppppppdStack_140 = pppppppdVar102;
          pppppppdVar67 = apppppppdStack_430[0] + (long)apppppppdStack_430[1] * uVar69;
          pppppppdVar39 = (double *******)((ulong)pppppppdVar67 >> 3 & 1);
          if ((long)apppppppdStack_430[1] <= (long)pppppppdVar39) {
            pppppppdVar39 = apppppppdStack_430[1];
          }
          if (((ulong)pppppppdVar67 & 7) != 0) {
            pppppppdVar39 = apppppppdStack_430[1];
          }
          uStack_2c8 = dVar76;
          uStack_2c0 = dVar101;
          if (0 < (long)pppppppdVar39) {
            _memcpy(pppppppdVar67,&pppppppdStack_2d0,(long)pppppppdVar39 << 3);
          }
          lVar64 = (long)pppppppdVar65 - (long)pppppppdVar39;
          puVar49 = (ushort *)
                    ((lVar64 - (lVar64 >> 0x3f) & 0xfffffffffffffffeU) + (long)pppppppdVar39);
          if (1 < lVar64) {
            puVar2 = puVar49;
            if ((long)puVar49 <= (long)pppppppdVar39 + 2) {
              puVar2 = (ushort *)((long)pppppppdVar39 + 2);
            }
            _memcpy((long)pppppppdVar53 + (long)pppppppdVar39 * 8 + (long)pppppppdVar65 * lVar68,
                    &pppppppdStack_2d0 + (long)pppppppdVar39,
                    ((long)puVar2 + ~(ulong)pppppppdVar39 & 0x1ffffffffffffffe) * 8 + 0x10);
          }
          if ((long)puVar49 < (long)pppppppdVar65) {
            _memcpy((long)pppppppdVar53 +
                    (long)pppppppdVar39 * 8 + (lVar64 / 2) * 0x10 + (long)pppppppdVar65 * lVar68,
                    &pppppppdStack_2d0 + (long)((lVar64 / 2) * 2 + (long)pppppppdVar39),
                    (lVar64 % 2) * 8);
          }
          pppppppdVar39 = uStack_478;
          pppppppdVar67 = pppppppdStack_480;
          pppppppdVar53 = pppppppdStack_480 + (long)uStack_478 * uVar69;
          pppppppdVar65 = (double *******)((ulong)pppppppdVar53 >> 3 & 1);
          if ((long)uStack_478 <= (long)pppppppdVar65) {
            pppppppdVar65 = uStack_478;
          }
          if (((ulong)pppppppdVar53 & 7) != 0) {
            pppppppdVar65 = uStack_478;
          }
          if (0 < (long)pppppppdVar65) {
            _memcpy(pppppppdVar53,&pppppppdStack_150,(long)pppppppdVar65 << 3);
          }
          lVar64 = (long)pppppppdVar39 - (long)pppppppdVar65;
          puVar49 = (ushort *)
                    ((lVar64 - (lVar64 >> 0x3f) & 0xfffffffffffffffeU) + (long)pppppppdVar65);
          if (1 < lVar64) {
            puVar2 = puVar49;
            if ((long)puVar49 <= (long)pppppppdVar65 + 2) {
              puVar2 = (ushort *)((long)pppppppdVar65 + 2);
            }
            _memcpy((long)pppppppdVar67 + (long)pppppppdVar65 * 8 + (long)pppppppdVar39 * lVar68,
                    &pppppppdStack_150 + (long)pppppppdVar65,
                    ((long)puVar2 + ~(ulong)pppppppdVar65 & 0x1ffffffffffffffe) * 8 + 0x10);
          }
          if ((long)puVar49 < (long)pppppppdVar39) {
            _memcpy((long)pppppppdVar67 +
                    (long)pppppppdVar65 * 8 + (lVar64 / 2) * 0x10 + (long)pppppppdVar39 * lVar68,
                    &pppppppdStack_150 + (long)((lVar64 / 2) * 2 + (long)pppppppdVar65),
                    (lVar64 % 2) * 8);
          }
          auVar75._0_8_ = auVar75._0_8_ + (double)pppppppdVar57;
          auVar75._8_8_ = dVar88 + dVar76;
          dVar99 = dVar99 + dVar101;
          dVar89 = dVar89 + (double)pppppppdVar72;
          dVar91 = dVar91 + (double)pppppppdVar77;
          dVar100 = dVar100 + (double)pppppppdVar102;
          uVar69 = uVar69 + 1;
          lVar59 = lVar59 + 0xc;
          lVar68 = lVar68 + 8;
          dVar76 = uStack_2c8;
          dVar101 = uStack_2c0;
        } while (uVar56 != uVar69);
        lVar59 = 0;
        uVar69 = 0;
        ppppppdVar61 = (double ******)(double)uVar56;
        puVar73 = (uint *)(auVar75._0_8_ / (double)ppppppdVar61);
        dVar76 = auVar75._8_8_ / (double)ppppppdVar61;
        uStack_498 = dVar76;
        puStack_4a0 = puVar73;
        dVar99 = dVar99 / (double)ppppppdVar61;
        dStack_490 = dVar99;
        dStack_4b8 = dVar91 / (double)ppppppdVar61;
        dStack_4c0 = dVar89 / (double)ppppppdVar61;
        dStack_4b0 = dVar100 / (double)ppppppdVar61;
        do {
          pppppppdVar53 =
               (double *******)
               ((ulong)(apppppppdStack_430[0] + (long)apppppppdStack_430[1] * uVar69) >> 3 & 1);
          if ((long)apppppppdStack_430[1] <= (long)pppppppdVar53) {
            pppppppdVar53 = apppppppdStack_430[1];
          }
          if (((ulong)(apppppppdStack_430[0] + (long)apppppppdStack_430[1] * uVar69) & 7) != 0) {
            pppppppdVar53 = apppppppdStack_430[1];
          }
          if (0 < (long)pppppppdVar53) {
            pppppppdVar57 =
                 (double *******)
                 ((long)apppppppdStack_430[0] + (long)apppppppdStack_430[1] * lVar59);
            ppuVar29 = &puStack_4a0;
            pppppppdVar65 = pppppppdVar53;
            do {
              *pppppppdVar57 = (double ******)((double)*pppppppdVar57 - (double)*ppuVar29);
              pppppppdVar65 = (double *******)((long)pppppppdVar65 + -1);
              pppppppdVar57 = pppppppdVar57 + 1;
              ppuVar29 = ppuVar29 + 1;
            } while (pppppppdVar65 != (double *******)0x0);
          }
          lVar64 = (long)apppppppdStack_430[1] - (long)pppppppdVar53;
          lVar68 = (lVar64 - (lVar64 >> 0x3f) & 0xfffffffffffffffeU) + (long)pppppppdVar53;
          if (1 < lVar64) {
            ppuVar29 = &puStack_4a0 + (long)pppppppdVar53;
            pdVar30 = (double *)
                      ((long)apppppppdStack_430[0] +
                      (long)apppppppdStack_430[1] * lVar59 + (long)pppppppdVar53 * 8);
            pppppppdVar65 = pppppppdVar53;
            do {
              puVar3 = *ppuVar29;
              pdVar30[1] = pdVar30[1] - (double)ppuVar29[1];
              *pdVar30 = *pdVar30 - (double)puVar3;
              pppppppdVar65 = (double *******)((long)pppppppdVar65 + 2);
              ppuVar29 = ppuVar29 + 2;
              pdVar30 = pdVar30 + 2;
            } while ((long)pppppppdVar65 < lVar68);
          }
          if (lVar68 < (long)apppppppdStack_430[1]) {
            lVar68 = lVar64 % 2;
            pdVar30 = (double *)
                      ((long)apppppppdStack_430[0] +
                      (lVar64 / 2) * 0x10 + (long)pppppppdVar53 * 8 +
                      (long)apppppppdStack_430[1] * lVar59);
            ppuVar29 = &puStack_4a0 + (long)((long)pppppppdVar53 + (lVar64 / 2) * 2);
            do {
              *pdVar30 = *pdVar30 - (double)*ppuVar29;
              lVar68 = lVar68 + -1;
              pdVar30 = pdVar30 + 1;
              ppuVar29 = ppuVar29 + 1;
            } while (lVar68 != 0);
          }
          pppppppdVar53 =
               (double *******)((ulong)(pppppppdStack_480 + (long)uStack_478 * uVar69) >> 3 & 1);
          if ((long)uStack_478 <= (long)pppppppdVar53) {
            pppppppdVar53 = uStack_478;
          }
          if (((ulong)(pppppppdStack_480 + (long)uStack_478 * uVar69) & 7) != 0) {
            pppppppdVar53 = uStack_478;
          }
          if (0 < (long)pppppppdVar53) {
            pppppppdVar57 = (double *******)((long)pppppppdStack_480 + (long)uStack_478 * lVar59);
            pdVar30 = &dStack_4c0;
            pppppppdVar65 = pppppppdVar53;
            do {
              *pppppppdVar57 = (double ******)((double)*pppppppdVar57 - *pdVar30);
              pppppppdVar65 = (double *******)((long)pppppppdVar65 + -1);
              pppppppdVar57 = pppppppdVar57 + 1;
              pdVar30 = pdVar30 + 1;
            } while (pppppppdVar65 != (double *******)0x0);
          }
          lVar64 = (long)uStack_478 - (long)pppppppdVar53;
          lVar68 = (lVar64 - (lVar64 >> 0x3f) & 0xfffffffffffffffeU) + (long)pppppppdVar53;
          if (1 < lVar64) {
            pdVar30 = &dStack_4c0 + (long)pppppppdVar53;
            pdVar32 = (double *)
                      ((long)pppppppdStack_480 + (long)uStack_478 * lVar59 + (long)pppppppdVar53 * 8
                      );
            pppppppdVar65 = pppppppdVar53;
            do {
              dVar101 = *pdVar30;
              pdVar32[1] = pdVar32[1] - pdVar30[1];
              *pdVar32 = *pdVar32 - dVar101;
              pppppppdVar65 = (double *******)((long)pppppppdVar65 + 2);
              pdVar30 = pdVar30 + 2;
              pdVar32 = pdVar32 + 2;
            } while ((long)pppppppdVar65 < lVar68);
          }
          if (lVar68 < (long)uStack_478) {
            lVar68 = lVar64 % 2;
            pdVar30 = (double *)
                      ((long)pppppppdStack_480 +
                      (lVar64 / 2) * 0x10 + (long)pppppppdVar53 * 8 + (long)uStack_478 * lVar59);
            pdVar32 = &dStack_4c0 + (long)((long)pppppppdVar53 + (lVar64 / 2) * 2);
            do {
              *pdVar30 = *pdVar30 - *pdVar32;
              lVar68 = lVar68 + -1;
              pdVar30 = pdVar30 + 1;
              pdVar32 = pdVar32 + 1;
            } while (lVar68 != 0);
          }
          uVar69 = uVar69 + 1;
          lVar59 = lVar59 + 8;
        } while (uVar69 != uVar56);
        uStack_2c8._0_4_ = 0.0;
        uStack_2c8._4_4_ = 0.0;
        uStack_2c0._0_4_ = -NAN;
        uStack_2c0._4_4_ = -NAN;
        pppppppdStack_2a8 = (double *******)0x0;
        pppppppdStack_2b8 = (double *******)0x0;
        pppppppdStack_2b0 = (double *******)0x0;
        if ((apppppppdStack_430[1] != (double *******)0x0) && (uStack_478 != (double *******)0x0)) {
          lVar59 = 0;
          if (uStack_478 != (double *******)0x0) {
            lVar59 = 0x7fffffffffffffff / (long)uStack_478;
          }
          if (lVar59 < (long)apppppppdStack_430[1]) {
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
            dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
            dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8);
            goto LAB_10a122aec;
          }
        }
        func_0x000109534bec(&pppppppdStack_2b8,(long)uStack_478 * (long)apppppppdStack_430[1]);
        pppppppdVar77 = pppppppdStack_2a8;
        pppppppdVar72 = pppppppdStack_2b0;
        pppppppdVar39 = pppppppdStack_2b8;
        dVar88 = dStack_420;
        pppppppdVar67 = apppppppdStack_430[1];
        pppppppdVar57 = apppppppdStack_430[0];
        dVar101 = adStack_470[0];
        pppppppdVar65 = uStack_478;
        pppppppdVar53 = pppppppdStack_480;
        uStack_2c8._0_4_ = SUB84(pppppppdStack_2b8,0);
        uStack_2c8._4_4_ = (float)((ulong)pppppppdStack_2b8 >> 0x20);
        uStack_2c0._0_4_ = SUB84(pppppppdStack_2b0,0);
        uStack_2c0._4_4_ = (float)((ulong)pppppppdStack_2b0 >> 0x20);
        lVar59 = (long)adStack_470[0] + -1;
        if (((long)adStack_470[0] < 1) ||
           (0x13 < (long)adStack_470[0] + (long)pppppppdStack_2b0 + (long)pppppppdStack_2a8)) {
          if (0 < (long)pppppppdStack_2a8 * (long)pppppppdStack_2b0) {
            _bzero(pppppppdStack_2b8,(long)pppppppdStack_2a8 * (long)pppppppdStack_2b0 * 8);
          }
          if (((dStack_420 != 0.0) && (apppppppdStack_430[1] != (double *******)0x0)) &&
             (uStack_478 != (double *******)0x0)) {
            if (pppppppdVar77 == (double *******)0x1) {
              if (apppppppdStack_430[1] == (double *******)0x1) {
                if (dVar101 == 0.0) {
LAB_10a121120:
                  dVar88 = 0.0;
                }
                else {
                  dVar88 = (double)*apppppppdStack_430[0] * (double)*pppppppdStack_480;
                  pppppppdVar65 = apppppppdStack_430[0];
                  pppppppdVar53 = pppppppdStack_480;
                  if (1 < (long)dVar101) {
                    do {
                      dVar88 = dVar88 + (double)pppppppdVar65[1] *
                                        (double)pppppppdVar53[(long)uStack_478];
                      lVar59 = lVar59 + -1;
                      pppppppdVar65 = pppppppdVar65 + 1;
                      pppppppdVar53 = pppppppdVar53 + (long)uStack_478;
                    } while (lVar59 != 0);
                  }
                }
LAB_10a121124:
                *pppppppdVar39 = (double ******)(dVar88 + (double)*pppppppdVar39);
              }
              else {
                pppppppdStack_150 = apppppppdStack_430[0];
                dStack_148 = (double)apppppppdStack_430[1];
                apppppppdStack_390[0] = pppppppdStack_480;
                apppppppdStack_390[1] = uStack_478;
                func_0x000109909a3c(0x3ff0000000000000,apppppppdStack_430[1],dStack_420,
                                    &pppppppdStack_150,apppppppdStack_390,pppppppdVar39,1);
              }
            }
            else if (pppppppdVar72 == (double *******)0x1) {
              if (uStack_478 == (double *******)0x1) {
                if (dVar101 == 0.0) goto LAB_10a121120;
                dVar88 = (double)*apppppppdStack_430[0] * (double)*pppppppdStack_480;
                pppppppdVar65 = pppppppdStack_480;
                pppppppdVar53 = apppppppdStack_430[0];
                if (1 < (long)dVar101) {
                  do {
                    dVar88 = dVar88 + (double)pppppppdVar53[(long)apppppppdStack_430[1]] *
                                      (double)pppppppdVar65[1];
                    lVar59 = lVar59 + -1;
                    pppppppdVar65 = pppppppdVar65 + 1;
                    pppppppdVar53 = pppppppdVar53 + (long)apppppppdStack_430[1];
                  } while (lVar59 != 0);
                }
                goto LAB_10a121124;
              }
              pppppppdStack_150 = pppppppdVar39;
              pppppppdStack_140 = pppppppdVar77;
              dStack_130 = 0.0;
              dStack_128 = 0.0;
              dStack_120 = 4.94065645841247e-324;
              dStack_138 = (double)&pppppppdStack_2b8;
              FUN_10a132554(0x3ff0000000000000,&pppppppdStack_480,apppppppdStack_430[0],
                            apppppppdStack_430,&pppppppdStack_150);
            }
            else {
              dStack_148 = 0.0;
              pppppppdStack_150 = (double *******)0x0;
              pppppppdStack_140 = pppppppdVar72;
              dStack_138 = (double)pppppppdVar77;
              dStack_130 = dStack_420;
              func_0x000109404318(&dStack_130,&pppppppdStack_140,&dStack_138,1);
              dStack_128 = (double)((long)dStack_130 * (long)pppppppdStack_140);
              dStack_120 = (double)((long)dStack_138 * (long)dStack_130);
              func_0x000109404694(0x3ff0000000000000,apppppppdStack_430[1],uStack_478,dStack_420,
                                  apppppppdStack_430[0],apppppppdStack_430[1],pppppppdStack_480,
                                  uStack_478,pppppppdStack_2b8,1,pppppppdStack_2b0,
                                  &pppppppdStack_150,0);
              _free(pppppppdStack_150);
              _free(dStack_148);
            }
          }
        }
        else {
          if ((pppppppdStack_2b0 != apppppppdStack_430[1]) || (pppppppdStack_2a8 != uStack_478)) {
            if ((apppppppdStack_430[1] != (double *******)0x0) &&
               (uStack_478 != (double *******)0x0)) {
              lVar59 = 0;
              if (uStack_478 != (double *******)0x0) {
                lVar59 = 0x7fffffffffffffff / (long)uStack_478;
              }
              if (lVar59 < (long)apppppppdStack_430[1]) {
                ___cxa_allocate_exception(8);
                __ZNSt9bad_allocC1Ev();
                ___cxa_throw();
                dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
                dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8);
                goto LAB_10a122aec;
              }
            }
            func_0x000109534bec(&pppppppdStack_2b8,(long)uStack_478 * (long)apppppppdStack_430[1],
                                apppppppdStack_430[1],uStack_478);
          }
          if (0 < (long)pppppppdStack_2a8) {
            lVar59 = 0;
            pppppppdVar72 = (double *******)0x0;
            pppppppdVar39 = (double *******)0x0;
            do {
              lVar68 = (long)pppppppdVar39 * (long)pppppppdStack_2b0;
              if (0 < (long)pppppppdVar72) {
                if (adStack_470[0] == 0.0) {
                  ppppppdVar71 = (double ******)0x0;
                }
                else {
                  ppppppdVar71 = (double ******)
                                 ((double)*apppppppdStack_430[0] *
                                 (double)pppppppdStack_480[(long)pppppppdVar39]);
                  if (1 < (long)adStack_470[0]) {
                    lVar64 = (long)adStack_470[0] + -1;
                    pdVar30 = (double *)((long)pppppppdStack_480 + lVar59 + (long)uStack_478 * 8);
                    pppppppdVar77 = apppppppdStack_430[0];
                    do {
                      pppppppdVar77 = pppppppdVar77 + (long)apppppppdStack_430[1];
                      ppppppdVar71 = (double ******)
                                     ((double)ppppppdVar71 + (double)*pppppppdVar77 * *pdVar30);
                      pdVar30 = pdVar30 + (long)uStack_478;
                      lVar64 = lVar64 + -1;
                    } while (lVar64 != 0);
                  }
                }
                pppppppdStack_2b8[lVar68] = ppppppdVar71;
              }
              uVar56 = (long)pppppppdStack_2b0 - (long)pppppppdVar72;
              lVar64 = (uVar56 & 0xfffffffffffffffe) + (long)pppppppdVar72;
              if (1 < (long)uVar56) {
                pppppppdVar102 = pppppppdVar57 + (long)pppppppdVar72;
                pppppppdVar77 = pppppppdVar72;
                do {
                  auVar80 = ZEXT216(0);
                  pppppppdVar33 = pppppppdVar102;
                  pppppppdVar34 = pppppppdVar53;
                  dVar101 = dVar88;
                  if (0 < (long)dVar88) {
                    do {
                      dVar97 = auVar80._8_8_;
                      auVar80._0_8_ =
                           auVar80._0_8_ + (double)*pppppppdVar33 * (double)*pppppppdVar34;
                      auVar80._8_8_ = dVar97 + (double)pppppppdVar33[1] * (double)*pppppppdVar34;
                      dVar101 = (double)((long)dVar101 + -1);
                      pppppppdVar33 = pppppppdVar33 + (long)pppppppdVar67;
                      pppppppdVar34 = pppppppdVar34 + (long)pppppppdVar65;
                    } while (dVar101 != 0.0);
                  }
                  (pppppppdStack_2b8 + (long)(lVar68 + (long)pppppppdVar77))[1] = auVar80._8_8_;
                  pppppppdStack_2b8[(long)(lVar68 + (long)pppppppdVar77)] = auVar80._0_8_;
                  pppppppdVar77 = (double *******)((long)pppppppdVar77 + 2);
                  pppppppdVar102 = pppppppdVar102 + 2;
                } while ((long)pppppppdVar77 < lVar64);
              }
              if (lVar64 < (long)pppppppdStack_2b0) {
                pdVar30 = (double *)
                          ((long)apppppppdStack_430[0] +
                          (uVar56 * 8 & 0xfffffffffffffff0) + (long)pppppppdVar72 * 8 +
                          (long)apppppppdStack_430[1] * 8);
                do {
                  if (adStack_470[0] == 0.0) {
                    ppppppdVar71 = (double ******)0x0;
                  }
                  else {
                    ppppppdVar71 = (double ******)
                                   ((double)apppppppdStack_430[0][lVar64] *
                                   (double)pppppppdStack_480[(long)pppppppdVar39]);
                    pdVar32 = pdVar30;
                    lVar62 = (long)adStack_470[0] + -1;
                    pppppppdVar77 = pppppppdStack_480;
                    if (1 < (long)adStack_470[0]) {
                      do {
                        ppppppdVar71 = (double ******)
                                       ((double)ppppppdVar71 +
                                       *pdVar32 *
                                       *(double *)
                                        ((long)(pppppppdVar77 + (long)uStack_478) + lVar59));
                        lVar62 = lVar62 + -1;
                        pdVar32 = pdVar32 + (long)apppppppdStack_430[1];
                        pppppppdVar77 = pppppppdVar77 + (long)uStack_478;
                      } while (lVar62 != 0);
                    }
                  }
                  pppppppdStack_2b8[lVar68 + lVar64] = ppppppdVar71;
                  lVar64 = lVar64 + 1;
                  pdVar30 = pdVar30 + 1;
                } while (lVar64 < (long)pppppppdStack_2b0);
              }
              uVar56 = (long)pppppppdVar72 + ((ulong)pppppppdStack_2b0 & 1);
              pppppppdVar102 = (double *******)(uVar56 & 1);
              pppppppdVar77 = (double *******)-(long)pppppppdVar102;
              if ((long)uVar56 < 0 == SCARRY8((long)pppppppdVar72,(ulong)pppppppdStack_2b0 & 1)) {
                pppppppdVar77 = pppppppdVar102;
              }
              pppppppdVar72 = pppppppdStack_2b0;
              if ((long)pppppppdVar77 <= (long)pppppppdStack_2b0) {
                pppppppdVar72 = pppppppdVar77;
              }
              pppppppdVar39 = (double *******)((long)pppppppdVar39 + 1);
              lVar59 = lVar59 + 8;
              pppppppdVar53 = pppppppdVar53 + 1;
            } while (pppppppdVar39 != pppppppdStack_2a8);
          }
        }
        pdVar30 = (double *)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8);
        lVar59 = CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
        dVar101 = *pdVar30;
        dVar88 = pdVar30[1];
        dVar97 = pdVar30[2];
        dVar108 = pdVar30[3];
        dVar116 = pdVar30[lVar59 + 1];
        dVar94 = pdVar30[lVar59 + 2];
        pdVar30 = pdVar30 + lVar59 * 2;
        dVar11 = *pdVar30;
        dVar12 = pdVar30[1];
        dVar98 = pdVar30[2] / (double)ppppppdVar61;
        apppppppdStack_340[0] = (double *******)(dVar101 / (double)ppppppdVar61);
        apppppppdStack_340[1] = (double *******)(dVar88 / (double)ppppppdVar61);
        adStack_330[0] = dVar97 / (double)ppppppdVar61;
        adStack_330[1] = dVar108 / (double)ppppppdVar61;
        adStack_330[2] = dVar116 / (double)ppppppdVar61;
        adStack_330[3] = dVar94 / (double)ppppppdVar61;
        dStack_310 = dVar11 / (double)ppppppdVar61;
        dStack_308 = dVar12 / (double)ppppppdVar61;
        dStack_300 = dVar98;
        ppppppdStack_2a0 = ppppppdVar61;
        _free(pppppppdStack_2b8);
        uStack_228 = 0x100010000000000;
        uStack_208 = 3;
        uStack_210 = 3;
        uStack_21c = 0x14;
        uStack_220 = 0x100;
        bStack_21e = 0;
        lStack_200 = 3;
        auVar74._0_8_ = ABS(dVar101 / (double)ppppppdVar61);
        auVar74._8_8_ = ABS(dVar88 / (double)ppppppdVar61);
        auVar78._0_8_ = ABS(dVar97 / (double)ppppppdVar61);
        auVar78._8_8_ = ABS(dVar108 / (double)ppppppdVar61);
        auVar75 = NEON_fmax(auVar74,auVar78,8);
        auVar79._0_8_ = ABS(dVar116 / (double)ppppppdVar61);
        auVar79._8_8_ = ABS(dVar94 / (double)ppppppdVar61);
        auVar10._8_8_ = ABS(dVar12 / (double)ppppppdVar61);
        auVar10._0_8_ = ABS(dVar11 / (double)ppppppdVar61);
        auVar80 = NEON_fmax(auVar79,auVar10,8);
        auVar75 = NEON_fmax(auVar75,auVar80,8);
        dVar101 = auVar75._8_8_;
        dVar88 = auVar75._0_8_;
        bVar22 = true;
        if ((dVar101 <= dVar88) && (bVar22 = true, !NAN(dVar101))) {
          bVar22 = false;
        }
        if (!bVar22) {
          dVar101 = dVar88;
        }
        if (!NAN(dVar88)) {
          dVar88 = dVar101;
        }
        bVar22 = true;
        if ((ABS(dVar98) <= dVar88) && (bVar22 = true, !NAN(dVar98))) {
          bVar22 = false;
        }
        dVar101 = ABS(dVar98);
        if (!bVar22) {
          dVar101 = dVar88;
        }
        if (!NAN(dVar88)) {
          dVar88 = dVar101;
        }
        if ((ulong)ABS(dVar88) < 0x7ff0000000000000) {
          lVar59 = 0;
          uVar82 = 0;
          uVar83 = 0x3ff00000;
          if (dVar88 != 0.0) {
            uVar82 = SUB84(dVar88,0);
            uVar83 = (undefined4)((ulong)dVar88 >> 0x20);
          }
          do {
            *(double *)((long)adStack_1e8 + lVar59) =
                 *(double *)((long)apppppppdStack_340 + lVar59 + 8) /
                 (double)CONCAT44(uVar83,uVar82);
            *(double *)((long)&dStack_1f0 + lVar59) =
                 *(double *)((long)apppppppdStack_340 + lVar59) / (double)CONCAT44(uVar83,uVar82);
            *(double *)((long)adStack_1e8 + lVar59 + 8U) =
                 *(double *)((long)adStack_330 + lVar59) / (double)CONCAT44(uVar83,uVar82);
            lVar59 = lVar59 + 0x18;
          } while (lVar59 != 0x48);
          dVar101 = (double)CONCAT44(uVar83,uVar82);
          pppppppdStack_2d0 = (double *******)0x3ff0000000000000;
          uStack_2c8._0_4_ = 0.0;
          uStack_2c8._4_4_ = 0.0;
          pppppppdStack_2b8 = (double *******)0x0;
          uStack_2c0._0_4_ = 0.0;
          uStack_2c0._4_4_ = 0.0;
          pppppppdStack_2b0 = (double *******)0x3ff0000000000000;
          pppppppdStack_2a8 = (double *******)0x0;
          ppppppdStack_298 = (double ******)0x0;
          ppppppdStack_2a0 = (double ******)0x0;
          auVar75 = NEON_fmov(0x3ff0000000000000,8);
          adStack_288[0] = auVar75._8_8_;
          dStack_290 = auVar75._0_8_;
          adStack_288[1] = 0.0;
          adStack_288[2] = 0.0;
          adStack_288[3] = 0.0;
          adStack_288[4] = 1.0;
          adStack_288[5] = 0.0;
          adStack_288[6] = 0.0;
          dStack_250 = 0.0;
          dStack_248 = 1.0;
          dVar88 = ABS(dStack_1b0);
          if (ABS(dStack_1b0) <= ABS(adStack_1e8[3])) {
            dVar88 = ABS(adStack_1e8[3]);
          }
          if (dVar88 <= ABS(dStack_1f0)) {
            dVar88 = ABS(dStack_1f0);
          }
          do {
            if (lStack_200 < 2) break;
            bVar22 = true;
            lVar59 = 1;
            lVar68 = (long)adStack_1e8;
            pppppppdVar53 = (double *******)&pppppppdStack_2b8;
            do {
              lVar64 = 0;
              pdVar32 = &dStack_1f0 + lVar59 * 3;
              pppppppdVar65 = (double *******)&pppppppdStack_2d0;
              pdVar30 = &dStack_1f0;
              dVar97 = dVar88;
              do {
                dVar88 = dVar97 * 4.440892098500626e-16;
                if (dVar97 * 4.440892098500626e-16 <= 2.2250738585072014e-308) {
                  dVar88 = 2.2250738585072014e-308;
                }
                pppppppdVar57 = (double *******)(&dStack_1f0)[lVar64 * 3 + lVar59];
                pppppppdVar67 = (double *******)pdVar32[lVar64];
                dVar108 = ABS((double)pppppppdVar67);
                bVar23 = false;
                bVar20 = false;
                bVar21 = false;
                if (ABS((double)pppppppdVar57) <= dVar88) {
                  bVar23 = false;
                  bVar20 = false;
                  bVar21 = true;
                  if (!NAN(dVar108) && !NAN(dVar88)) {
                    bVar23 = dVar108 < dVar88;
                    bVar20 = dVar108 == dVar88;
                    bVar21 = false;
                  }
                }
                dVar88 = dVar97;
                if (!bVar20 && bVar23 == bVar21) {
                  pppppppdVar39 = (double *******)pdVar32[lVar59];
                  pppppppdStack_2f0 = (double *******)(&dStack_1f0)[lVar64 * 4];
                  if (2.2250738585072014e-308 <= ABS((double)pppppppdVar67 - (double)pppppppdVar57))
                  {
                    dVar88 = ((double)pppppppdVar39 + (double)pppppppdStack_2f0) /
                             ((double)pppppppdVar67 - (double)pppppppdVar57);
                    dVar108 = SQRT(dVar88 * dVar88 + 1.0);
                    dVar116 = 1.0 / dVar108;
                    dVar88 = dVar88 / dVar108;
                  }
                  else {
                    dVar88 = 1.0;
                    dVar116 = 0.0;
                  }
                  if ((dVar88 != 1.0) ||
                     (pppppppdStack_3e0 = pppppppdVar39, dStack_148 = (double)pppppppdVar67,
                     pppppppdStack_140 = pppppppdVar57, dVar116 != 0.0)) {
                    pppppppdStack_3e0 =
                         (double *******)
                         ((double)pppppppdVar67 * dVar116 + (double)pppppppdVar39 * dVar88);
                    pppppppdStack_140 =
                         (double *******)
                         ((double)pppppppdStack_2f0 * dVar116 + (double)pppppppdVar57 * dVar88);
                    dStack_148 = (double)pppppppdVar67 * dVar88 - (double)pppppppdVar39 * dVar116;
                    pppppppdStack_2f0 =
                         (double *******)
                         ((double)pppppppdStack_2f0 * dVar88 - (double)pppppppdVar57 * dVar116);
                  }
                  pppppppdStack_150 = pppppppdStack_3e0;
                  dStack_138 = (double)pppppppdStack_2f0;
                  func_0x0001098e5e58(apppppppdStack_390,&pppppppdStack_3e0,&pppppppdStack_140,
                                      &pppppppdStack_2f0);
                  dVar108 = dVar116 * (double)apppppppdStack_390[1] +
                            (double)apppppppdStack_390[0] * dVar88;
                  dVar88 = dVar116 * (double)apppppppdStack_390[0] -
                           (double)apppppppdStack_390[1] * dVar88;
                  if ((dVar108 != 1.0) || (dVar88 != 0.0)) {
                    lVar62 = 0;
                    do {
                      dVar116 = *(double *)(lVar68 + lVar62);
                      dVar94 = *(double *)((long)pdVar30 + lVar62);
                      *(double *)(lVar68 + lVar62) = dVar88 * dVar94 + dVar116 * dVar108;
                      *(double *)((long)pdVar30 + lVar62) = dVar108 * dVar94 + dVar116 * -dVar88;
                      lVar62 = lVar62 + 0x18;
                    } while (lVar62 != 0x48);
                    if (((uStack_228 & 0x100000000000000) != 0) || ((uStack_220 & 1) != 0)) {
                      lVar62 = 0;
                      do {
                        dVar116 = *(double *)((long)pppppppdVar53 + lVar62);
                        dVar94 = *(double *)((long)pppppppdVar65 + lVar62);
                        *(double *)((long)pppppppdVar53 + lVar62) =
                             dVar88 * dVar94 + dVar116 * dVar108;
                        *(double *)((long)pppppppdVar65 + lVar62) =
                             dVar108 * dVar94 + dVar116 * -dVar88;
                        lVar62 = lVar62 + 8;
                      } while (lVar62 != 0x18);
                    }
                  }
                  if (((double)apppppppdStack_390[0] != 1.0) ||
                     ((double)apppppppdStack_390[1] != 0.0)) {
                    lVar62 = 0xe0;
                    pdVar44 = pdVar32;
                    do {
                      dVar88 = *pdVar44;
                      dVar108 = *(double *)((long)pppppppdVar65 + lVar62);
                      *pdVar44 = dVar108 * -(double)apppppppdStack_390[1] +
                                 dVar88 * (double)apppppppdStack_390[0];
                      *(double *)((long)pppppppdVar65 + lVar62) =
                           (double)apppppppdStack_390[0] * dVar108 +
                           dVar88 * (double)apppppppdStack_390[1];
                      lVar62 = lVar62 + 8;
                      pdVar44 = pdVar44 + 1;
                    } while (lVar62 != 0xf8);
                    if (((uStack_220 & 0x100) != 0) || ((bStack_21e & 1) != 0)) {
                      lVar62 = 0x48;
                      pdVar44 = adStack_288 + lVar59 * 3;
                      do {
                        dVar88 = *pdVar44;
                        dVar108 = *(double *)((long)pppppppdVar65 + lVar62);
                        *pdVar44 = dVar108 * -(double)apppppppdStack_390[1] +
                                   dVar88 * (double)apppppppdStack_390[0];
                        *(double *)((long)pppppppdVar65 + lVar62) =
                             (double)apppppppdStack_390[0] * dVar108 +
                             dVar88 * (double)apppppppdStack_390[1];
                        lVar62 = lVar62 + 8;
                        pdVar44 = pdVar44 + 1;
                      } while (lVar62 != 0x60);
                    }
                  }
                  bVar22 = false;
                  dVar108 = ABS((&dStack_1f0)[lVar59 * 4]);
                  dVar88 = ABS((&dStack_1f0)[lVar64 * 4]);
                  if (dVar88 <= dVar108) {
                    dVar88 = dVar108;
                  }
                  if (dVar88 <= dVar97) {
                    dVar88 = dVar97;
                  }
                }
                lVar64 = lVar64 + 1;
                pdVar30 = pdVar30 + 1;
                pppppppdVar65 = pppppppdVar65 + 3;
                dVar97 = dVar88;
              } while (lVar64 != lVar59);
              lVar59 = lVar59 + 1;
              lVar68 = lVar68 + 8;
              pppppppdVar53 = pppppppdVar53 + 3;
            } while (lVar59 < lStack_200);
          } while (!bVar22);
          lVar59 = lStack_200;
          if (0 < lStack_200) {
            lVar64 = 0;
            lVar68 = 0;
            pdVar30 = &dStack_1f0;
            do {
              dVar88 = *(double *)((long)&dStack_1f0 + lVar64);
              adStack_240[lVar68] = ABS(dVar88);
              if (dVar88 < 0.0) {
                if (((uStack_228._7_1_ | (byte)uStack_220) & 1) != 0) {
                  pdVar30[-0x1b] = -pdVar30[-0x1b];
                  pdVar30[-0x1c] = -pdVar30[-0x1c];
                  pdVar30[-0x1a] = -pdVar30[-0x1a];
                  lVar59 = lStack_200;
                }
              }
              lVar68 = lVar68 + 1;
              pdVar30 = pdVar30 + 3;
              lVar64 = lVar64 + 0x20;
            } while (lVar68 < lVar59);
          }
          adStack_240[1] = adStack_240[1] * dVar101;
          adStack_240[0] = adStack_240[0] * dVar101;
          adStack_240[2] = dVar101 * adStack_240[2];
          lStack_218 = lVar59;
          if (0 < lVar59) {
            lVar64 = 0;
            lVar68 = 0;
            puVar49 = &uStack_220;
            do {
              dVar101 = adStack_240[3 - (lVar59 - lVar68)];
              if (lVar59 - lVar68 < 2) {
                if (dVar101 == 0.0) goto LAB_10a121808;
              }
              else {
                lVar60 = 0;
                lVar62 = 1;
                pdVar30 = (double *)(puVar49 + lVar59 * -4);
                dVar88 = dVar101;
                do {
                  dVar97 = *pdVar30;
                  dVar108 = dVar97;
                  lVar18 = lVar62;
                  if (dVar97 <= dVar88) {
                    dVar97 = dVar88;
                    dVar108 = dVar101;
                    lVar18 = lVar60;
                  }
                  lVar60 = lVar18;
                  dVar101 = dVar108;
                  lVar62 = lVar62 + 1;
                  pdVar30 = pdVar30 + 1;
                  dVar88 = dVar97;
                } while (lVar59 + lVar64 != lVar62);
                if (dVar101 == 0.0) {
LAB_10a121808:
                  lStack_218 = lVar68;
                  break;
                }
                if (lVar60 != 0) {
                  lVar60 = lVar60 + lVar68;
                  dVar101 = adStack_240[lVar68];
                  adStack_240[lVar68] = adStack_240[lVar60];
                  adStack_240[lVar60] = dVar101;
                  if (((uStack_228 & 0x100000000000000) != 0) || ((uStack_220 & 1) != 0)) {
                    ppppppdVar71 = (double ******)(&pppppppdStack_2d0)[lVar68 * 3];
                    uVar121 = (&uStack_2c8)[lVar68 * 3];
                    ppppppdVar42 = (double ******)(&pppppppdStack_2d0)[lVar60 * 3];
                    (&uStack_2c8)[lVar68 * 3] = (&uStack_2c8)[lVar60 * 3];
                    (&pppppppdStack_2d0)[lVar68 * 3] = (double *******)ppppppdVar42;
                    (&uStack_2c8)[lVar60 * 3] = uVar121;
                    (&pppppppdStack_2d0)[lVar60 * 3] = (double *******)ppppppdVar71;
                    uVar121 = (&uStack_2c0)[lVar60 * 3];
                    (&uStack_2c0)[lVar60 * 3] = (&uStack_2c0)[lVar68 * 3];
                    (&uStack_2c0)[lVar68 * 3] = uVar121;
                  }
                  if (((uStack_220 & 0x100) != 0) || ((bStack_21e & 1) != 0)) {
                    dVar101 = adStack_288[lVar68 * 3];
                    dVar88 = adStack_288[lVar68 * 3 + 1];
                    dVar97 = adStack_288[lVar60 * 3];
                    adStack_288[lVar68 * 3 + 1] = adStack_288[lVar60 * 3 + 1];
                    adStack_288[lVar68 * 3] = dVar97;
                    adStack_288[lVar60 * 3 + 1] = dVar88;
                    adStack_288[lVar60 * 3] = dVar101;
                    dVar101 = adStack_288[lVar60 * 3 + 2];
                    adStack_288[lVar60 * 3 + 2] = adStack_288[lVar68 * 3 + 2];
                    adStack_288[lVar68 * 3 + 2] = dVar101;
                  }
                }
              }
              lVar68 = lVar68 + 1;
              lVar64 = lVar64 + -1;
              puVar49 = puVar49 + 4;
              lVar59 = lStack_200;
            } while (lVar68 < lStack_200);
          }
          uStack_228._0_5_ = CONCAT14(1,(undefined4)uStack_228);
        }
        else {
          uStack_228 = 0x100010100000003;
        }
        dVar17 = adStack_240[2];
        dVar16 = adStack_240[1];
        dVar15 = adStack_240[0];
        dVar98 = dStack_248;
        dVar12 = dStack_250;
        dVar11 = adStack_288[6];
        dVar94 = adStack_288[5];
        dVar116 = adStack_288[4];
        dVar108 = adStack_288[3];
        dVar97 = adStack_288[2];
        dVar88 = adStack_288[1];
        dVar101 = adStack_288[0];
        lVar59 = 0;
        apppppppdStack_378[2] = pppppppdStack_2a8;
        apppppppdStack_378[1] = pppppppdStack_2b0;
        appppppdStack_360[1] = ppppppdStack_298;
        appppppdStack_360[0] = ppppppdStack_2a0;
        dStack_350 = dStack_290;
        apppppppdStack_390[1] = (double *******)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8);
        apppppppdStack_390[0] = pppppppdStack_2d0;
        apppppppdStack_378[0] = pppppppdStack_2b8;
        uStack_380 = CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
        pppppppdVar53 = (double *******)apppppppdStack_378;
        pppppppdVar65 = pppppppdVar53;
        do {
          ppppppdVar71 = pppppppdVar65[-3];
          ppppppdVar42 = *pppppppdVar65;
          ppppppdVar120 = pppppppdVar65[3];
          *(double *)((long)&dStack_3d8 + lVar59) =
               dVar88 * (double)ppppppdVar71 + dVar116 * (double)ppppppdVar42 +
               dVar12 * (double)ppppppdVar120;
          *(double *)((long)&pppppppdStack_3e0 + lVar59) =
               dVar101 * (double)ppppppdVar71 + dVar108 * (double)ppppppdVar42 +
               dVar11 * (double)ppppppdVar120;
          *(double *)((long)apppppppdStack_3d0 + lVar59) =
               dVar97 * (double)ppppppdVar71 +
               dVar94 * (double)ppppppdVar42 + dVar98 * (double)ppppppdVar120;
          lVar59 = lVar59 + 0x18;
          pppppppdVar65 = pppppppdVar65 + 1;
        } while (lVar59 != 0x48);
        if (dStack_3b0 * (-(dStack_3c0 * (double)apppppppdStack_3d0[0]) + dStack_3b8 * dStack_3d8) +
            ((double)pppppppdStack_3e0 * (-(dStack_3a8 * dStack_3b8) + dStack_3a0 * dStack_3c0) -
            (double)apppppppdStack_3d0[1] *
            (-(dStack_3a8 * (double)apppppppdStack_3d0[0]) + dStack_3a0 * dStack_3d8)) < 0.0) {
          lVar59 = 0;
          do {
            ppppppdVar71 = pppppppdVar53[-3];
            ppppppdVar42 = *pppppppdVar53;
            ppppppdVar120 = pppppppdVar53[3];
            *(double *)((long)&dStack_148 + lVar59) =
                 dVar88 * (double)ppppppdVar71 + dVar116 * (double)ppppppdVar42 +
                 -dVar12 * (double)ppppppdVar120;
            *(double *)((long)&pppppppdStack_150 + lVar59) =
                 dVar101 * (double)ppppppdVar71 + dVar108 * (double)ppppppdVar42 +
                 -dVar11 * (double)ppppppdVar120;
            *(double *)((long)&pppppppdStack_140 + lVar59) =
                 dVar97 * (double)ppppppdVar71 +
                 (dVar94 * (double)ppppppdVar42 - dVar98 * (double)ppppppdVar120);
            lVar59 = lVar59 + 0x18;
            pppppppdVar53 = pppppppdVar53 + 1;
          } while (lVar59 != 0x48);
          dStack_3d8 = dStack_148;
          pppppppdStack_3e0 = pppppppdStack_150;
          apppppppdStack_3d0[1] = (double *******)dStack_138;
          apppppppdStack_3d0[0] = pppppppdStack_140;
          dStack_3b8 = dStack_128;
          dStack_3c0 = dStack_130;
          dStack_3a8 = dStack_118;
          dStack_3b0 = dStack_120;
          dStack_3a0 = dStack_110;
        }
        uVar56 = (long)dStack_420 * (long)apppppppdStack_430[1];
        if (uVar56 == 0) {
          dVar101 = 0.0;
        }
        else {
          uVar69 = uVar56 + 3;
          if (-1 < (long)uVar56) {
            uVar69 = uVar56;
          }
          if (uVar56 + 1 < 3) {
            dVar101 = (double)*apppppppdStack_430[0] * (double)*apppppppdStack_430[0];
          }
          else {
            uVar38 = uVar56 - ((long)uVar56 >> 0x3f) & 0xfffffffffffffffe;
            dVar101 = (double)*apppppppdStack_430[0] * (double)*apppppppdStack_430[0];
            dVar88 = (double)apppppppdStack_430[0][1] * (double)apppppppdStack_430[0][1];
            if (3 < (long)uVar56) {
              uVar69 = uVar69 & 0xfffffffffffffffc;
              dVar97 = (double)apppppppdStack_430[0][2] * (double)apppppppdStack_430[0][2];
              dVar108 = (double)apppppppdStack_430[0][3] * (double)apppppppdStack_430[0][3];
              if (7 < uVar56) {
                pppppppdVar53 = apppppppdStack_430[0] + 6;
                lVar59 = 4;
                do {
                  dVar101 = dVar101 + (double)pppppppdVar53[-2] * (double)pppppppdVar53[-2];
                  dVar88 = dVar88 + (double)pppppppdVar53[-1] * (double)pppppppdVar53[-1];
                  dVar97 = dVar97 + (double)*pppppppdVar53 * (double)*pppppppdVar53;
                  dVar108 = dVar108 + (double)pppppppdVar53[1] * (double)pppppppdVar53[1];
                  lVar59 = lVar59 + 4;
                  pppppppdVar53 = pppppppdVar53 + 4;
                } while (lVar59 < (long)uVar69);
              }
              dVar101 = dVar97 + dVar101;
              dVar88 = dVar108 + dVar88;
              if ((long)uVar69 < (long)uVar38) {
                ppppppdVar42 = (apppppppdStack_430[0] + uVar69)[1];
                ppppppdVar71 = apppppppdStack_430[0][uVar69];
                dVar101 = dVar101 + (double)ppppppdVar71 * (double)ppppppdVar71;
                dVar88 = dVar88 + (double)ppppppdVar42 * (double)ppppppdVar42;
              }
            }
            dVar101 = dVar101 + dVar88;
            lVar59 = (long)uVar56 % 2;
            if (lVar59 != 0 && lVar59 < 0 == SBORROW8(uVar56,uVar38)) {
              pppppppdVar53 = apppppppdStack_430[0] + ((long)uVar56 / 2) * 2;
              do {
                dVar101 = dVar101 + (double)*pppppppdVar53 * (double)*pppppppdVar53;
                lVar59 = lVar59 + -1;
                pppppppdVar53 = pppppppdVar53 + 1;
              } while (lVar59 != 0);
            }
          }
        }
        lVar59 = 0;
        dVar101 = (dVar17 + dVar15 + dVar16) / (dVar101 / (double)ppppppdVar61);
        pppppppdStack_140 = (double *******)0x0;
        dStack_148 = 0.0;
        dStack_130 = 0.0;
        dStack_138 = 0.0;
        pppppppdStack_150 = (double *******)0x3ff0000000000000;
        dStack_128 = 1.0;
        dStack_118 = 0.0;
        dStack_120 = 0.0;
        uStack_108 = 0;
        dStack_110 = 0.0;
        uStack_100 = 0x3ff0000000000000;
        uStack_f8 = 0;
        uStack_d8 = 0x3ff0000000000000;
        pppppppdVar53 = (double *******)apppppppdStack_3d0;
        do {
          ppppppdVar71 = pppppppdVar53[-2];
          *(double *)((long)&dStack_148 + lVar59) = (double)pppppppdVar53[-1] * dVar101;
          *(double *)((long)&pppppppdStack_150 + lVar59) = (double)ppppppdVar71 * dVar101;
          *(double *)((long)&pppppppdStack_140 + lVar59) = dVar101 * (double)*pppppppdVar53;
          lVar59 = lVar59 + 0x20;
          pppppppdVar53 = pppppppdVar53 + 3;
        } while (lVar59 != 0x60);
        lVar59 = 0;
        dStack_e8 = dVar91 / (double)ppppppdVar61 -
                    (dStack_3d8 * dVar101 * (double)puVar73 + dStack_3c0 * dVar101 * dVar76 +
                    dStack_3a8 * dVar101 * dVar99);
        dStack_f0 = dVar89 / (double)ppppppdVar61 -
                    ((double)pppppppdStack_3e0 * dVar101 * (double)puVar73 +
                     (double)apppppppdStack_3d0[1] * dVar101 * dVar76 +
                    dStack_3b0 * dVar101 * dVar99);
        dStack_e0 = dVar100 / (double)ppppppdVar61 -
                    ((double)puVar73 * (double)apppppppdStack_3d0[0] * dVar101 +
                    dStack_3b8 * dVar101 * dVar76 + dVar99 * dStack_3a0 * dVar101);
        fStack_500 = 1.0;
        uStack_4f8._4_4_ = 0;
        fStack_4f0 = 0.0;
        fStack_4fc = 0.0;
        uStack_4f8._0_4_ = 0.0;
        fStack_4ec = 1.0;
        uStack_4e8 = 0;
        uStack_4e0 = 0;
        fStack_4d8 = 1.0;
        fStack_4cc = 0.0;
        fStack_4c8 = 0.0;
        uStack_4d4 = 0;
        fStack_4d0 = 0.0;
        uStack_4c4 = 0x3f800000;
        pfVar52 = &fStack_500;
        do {
          dVar76 = *(double *)((long)&pppppppdStack_150 + lVar59);
          dVar101 = *(double *)((long)&dStack_148 + lVar59);
          *(ulong *)(pfVar52 + 2) =
               CONCAT44((float)*(double *)((long)&dStack_138 + lVar59),
                        (float)*(double *)((long)&pppppppdStack_140 + lVar59));
          *(ulong *)pfVar52 = CONCAT44((float)dVar101,(float)dVar76);
          lVar59 = lVar59 + 0x20;
          pfVar52 = pfVar52 + 4;
        } while (lVar59 != 0x80);
        _free(pppppppdStack_480);
        _free(apppppppdStack_430[0]);
LAB_10a121bac:
        if (lVar66 != 0) {
          lVar59 = 0;
          uVar56 = 0;
          do {
            uVar69 = (lStack_2e0 - CONCAT44(iStack_2e4,fStack_2e8) >> 2) * -0x5555555555555555;
            dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8);
            dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
            if (uVar69 < uVar56 || uVar69 - uVar56 == 0) goto LAB_10a122aec;
            pfVar52 = (float *)(CONCAT44(iStack_2e4,fStack_2e8) + lVar59);
            fVar84 = *pfVar52;
            fVar85 = pfVar52[1];
            fVar95 = pfVar52[2];
            *(ulong *)pfVar52 =
                 CONCAT44(fStack_4fc * fVar84 + fStack_4ec * fVar85 +
                          fStack_4cc + uStack_4e0._4_4_ * fVar95,
                          fStack_500 * fVar84 + fStack_4f0 * fVar85 +
                          fStack_4d0 + (float)uStack_4e0 * fVar95);
            pfVar52[2] = (float)uStack_4f8 * fVar84 + (float)uStack_4e8 * fVar85 +
                         fStack_4c8 + fStack_4d8 * fVar95;
            uVar56 = uVar56 + 1;
            lVar59 = lVar59 + 0xc;
          } while (uVar46 != uVar56);
        }
        if (((ulong)param_5[0xc] & 1) != 0) {
          fVar86 = (fStack_500 - fStack_4ec) - fStack_4d8;
          fVar85 = (fStack_4ec - fStack_500) - fStack_4d8;
          fVar95 = (fStack_4d8 - fStack_500) - fStack_4ec;
          fVar81 = fStack_500 + fStack_4ec + fStack_4d8;
          fVar84 = fVar86;
          if (fVar86 <= fVar81) {
            fVar84 = fVar81;
          }
          bVar13 = 2;
          if (fVar85 <= fVar84) {
            fVar85 = fVar84;
            bVar13 = fVar81 < fVar86;
          }
          bVar14 = 3;
          if (fVar95 <= fVar85) {
            fVar95 = fVar85;
            bVar14 = bVar13;
          }
          fVar84 = SQRT(fVar95 + 1.0) * 0.5;
          fVar95 = 0.25 / fVar84;
          fVar85 = (float)uStack_4e0 - (float)uStack_4f8;
          if (bVar14 != 2) {
            fVar85 = fStack_4fc - fStack_4f0;
          }
          if (bVar14 != 0) {
            fVar84 = ((float)uStack_4e8 - uStack_4e0._4_4_) * fVar95;
          }
          fVar85 = fVar85 * fVar95;
          if (bVar14 < 2) {
            fVar85 = fVar84;
          }
          if (ABS(fVar85) <= 0.87758255) {
            fVar84 = (float)_acosf(fVar85);
            fVar84 = fVar84 + fVar84;
          }
          else {
            fVar84 = (float)_asinf();
            fVar84 = fVar84 + fVar84;
            if (fVar85 < 0.0) {
              fVar84 = 6.2831855 - fVar84;
            }
          }
          ___sincosf_stret(fVar84);
          func_0x00010ae06f08(1,0x14,&UNK_10f63ce51,&UNK_10f63ce51,0xffffffff,&UNK_10f63d8dd);
          if (lStack_2e0 - CONCAT44(iStack_2e4,fStack_2e8) ==
              (long)ppppppdStack_510 - (long)ppppppdStack_518) {
            FUN_10a12310c();
            func_0x00010ae06f08(1,0x14,&UNK_10f63ce51,&UNK_10f63ce51,0xffffffff,&UNK_10f63d93d);
          }
        }
        pppppppdStack_150 = &ppppppdStack_518;
        dStack_148 = (double)&ppppppdStack_530;
        dStack_130 = 0.0;
        pppppppdStack_140 = (double *******)0x0;
        dStack_138 = 0.0;
        dStack_128._0_4_ = 0xffffffff;
        FUN_109ffe1f4(&pppppppdStack_2d0,
                      ((long)ppppppdStack_528 - (long)ppppppdStack_530 >> 2) * -0x5555555555555555);
        if (pppppppdStack_2d0 != (double *******)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8)) {
          iVar24 = 0;
          pppppppdVar53 = pppppppdStack_2d0;
          do {
            pppppppdVar65 = (double *******)((long)pppppppdVar53 + 4);
            *(int *)pppppppdVar53 = iVar24;
            iVar24 = iVar24 + 1;
            pppppppdVar53 = pppppppdVar65;
          } while (pppppppdVar65 != (double *******)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8));
        }
        pppppppdVar53 = (double *******)&pppppppdStack_150;
        FUN_10a1231ac(pppppppdVar53,&pppppppdStack_2d0);
        dStack_128 = (double)CONCAT44(dStack_128._4_4_,(int)pppppppdVar53);
        if (pppppppdStack_2d0 != (double *******)0x0) {
          uStack_2c8._0_4_ = SUB84(pppppppdStack_2d0,0);
          uStack_2c8._4_4_ = (float)((ulong)pppppppdStack_2d0 >> 0x20);
          __ZdlPv();
        }
        if (*(char *)(param_5 + 0xc) == '\x01') {
          __ZNSt3__16chrono12steady_clock3nowEv();
          func_0x00010ae06f08(1,0x14,&UNK_10f63ce51,&UNK_10f63ce51,0xffffffff,&UNK_10f63d984);
        }
        lVar59 = lStack_2e0 - CONCAT44(iStack_2e4,fStack_2e8) >> 2;
        uVar69 = lVar59 * -0x5555555555555555;
        ppppppdVar71 = param_5[4];
        ppppppdVar61 = param_5[3];
        lVar68 = (long)ppppppdVar71 - (long)ppppppdVar61;
        bVar22 = uVar69 < (ulong)((lVar68 >> 3) * -0x5555555555555555);
        uVar56 = uVar69 + (lVar68 >> 3) * 0x5555555555555555;
        if (bVar22 || uVar56 == 0) {
          if (bVar22) {
            param_5[4] = ppppppdVar61 + lVar59;
          }
        }
        else if ((ulong)(((long)param_5[5] - (long)ppppppdVar71 >> 3) * -0x5555555555555555) <
                 uVar56) {
          if (0xaaaaaaaaaaaaaaa < uVar69) {
            FUN_10a132540();
            dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
            dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8);
            goto LAB_10a122aec;
          }
          lVar64 = (long)param_5[5] - (long)ppppppdVar61 >> 3;
          uVar38 = lVar64 * 0x5555555555555556;
          if (uVar38 < uVar69 || uVar38 + lVar59 * 0x5555555555555555 == 0) {
            uVar38 = uVar69;
          }
          if (0x555555555555554 < (ulong)(lVar64 * -0x5555555555555555)) {
            uVar38 = 0xaaaaaaaaaaaaaaa;
          }
          if (0xaaaaaaaaaaaaaaa < uVar38) {
            func_0x000109ffded8();
            dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
            dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8);
            goto LAB_10a122aec;
          }
          ppppppdVar71 = (double ******)(uVar38 * 0x18);
          __Znwm();
          lVar59 = ((uVar56 * 0x18 - 0x18) / 0x18) * 0x18 + 0x18;
          _bzero((long)ppppppdVar71 + lVar68,lVar59);
          _memcpy(ppppppdVar71,ppppppdVar61,lVar68);
          param_5[3] = ppppppdVar71;
          param_5[4] = (double ******)((long)ppppppdVar71 + lVar68 + lVar59);
          param_5[5] = ppppppdVar71 + uVar38 * 3;
          if (ppppppdVar61 != (double ******)0x0) {
            __ZdlPv(ppppppdVar61);
          }
        }
        else {
          uVar56 = (uVar56 * 0x18 - 0x18) / 0x18;
          _bzero(ppppppdVar71,uVar56 * 0x18 + 0x18);
          param_5[4] = ppppppdVar71 + uVar56 * 3 + 3;
        }
        lVar59 = CONCAT44(iStack_2e4,fStack_2e8);
        if (lStack_2e0 == lVar59) {
          fVar84 = NAN;
        }
        else {
          lVar64 = 0;
          lVar68 = 0;
          uVar56 = 0;
          fVar84 = 0.0;
          do {
            pppppppdStack_2d0 = (double *******)CONCAT44(pppppppdStack_2d0._4_4_,0x7f7fffff);
            uVar69 = ((long)param_5[4] - (long)param_5[3] >> 3) * -0x5555555555555555;
            dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8);
            dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
            if (uVar69 < uVar56 || uVar69 - uVar56 == 0) goto LAB_10a122aec;
            FUN_10a12392c(&pppppppdStack_150,lVar59 + lVar64,&pppppppdStack_2d0,
                          (long)param_5[3] + lVar68,(ulong)dStack_128 & 0xffffffff);
            fVar84 = fVar84 + pppppppdStack_2d0._0_4_;
            uVar56 = uVar56 + 1;
            lVar59 = CONCAT44(iStack_2e4,fStack_2e8);
            uVar69 = (lStack_2e0 - lVar59 >> 2) * -0x5555555555555555;
            lVar68 = lVar68 + 0x18;
            lVar64 = lVar64 + 0xc;
          } while (uVar56 < uVar69);
          fVar84 = fVar84 / (float)uVar69;
        }
        func_0x0001094f5708(&pppppppdStack_2d0,param_7);
        func_0x0001096b5198(param_5 + 6,uVar46);
        if (lVar66 != 0) {
          lVar66 = 0;
          lVar59 = 0;
          uVar56 = 0;
          do {
            ppppppdVar61 = param_5[3];
            uVar69 = ((long)param_5[4] - (long)ppppppdVar61 >> 3) * -0x5555555555555555;
            dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8);
            dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
            if (uVar69 < uVar56 || uVar69 - uVar56 == 0) goto LAB_10a122aec;
            iVar24 = *(int *)((long)ppppppdVar61 + lVar66);
            uVar69 = ((long)ppppppdStack_510 - (long)ppppppdStack_518 >> 2) * -0x5555555555555555;
            dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8);
            dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
            if ((((uVar69 < (ulong)(long)iVar24 || uVar69 - (long)iVar24 == 0) ||
                 (iVar4 = *(int *)((long)ppppppdVar61 + lVar66 + 4),
                 dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8),
                 dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0),
                 uVar69 < (ulong)(long)iVar4 || uVar69 - (long)iVar4 == 0)) ||
                (iVar8 = *(int *)((long)ppppppdVar61 + lVar66 + 8),
                dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8),
                dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0),
                uVar69 < (ulong)(long)iVar8 || uVar69 - (long)iVar8 == 0)) ||
               ((pppppdVar63 = **param_5,
                uVar69 = ((long)(*param_5)[1] - (long)pppppdVar63 >> 2) * -0x5555555555555555,
                dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8),
                dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0),
                uVar69 < uVar56 || uVar69 - uVar56 == 0 ||
                (uVar69 = ((long)param_5[7] - (long)param_5[6] >> 2) * -0x5555555555555555,
                dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8),
                dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0),
                uVar69 < uVar56 || uVar69 - uVar56 == 0)))) goto LAB_10a122aec;
            puVar43 = (undefined8 *)((long)pppppdVar63 + lVar59);
            pfVar31 = (float *)((long)ppppppdStack_518 + (long)iVar24 * 0xc);
            fVar85 = *(float *)((long)ppppppdVar61 + lVar66 + 0xc);
            pfVar52 = (float *)((long)ppppppdStack_518 + (long)iVar4 * 0xc);
            fVar86 = *(float *)((long)ppppppdVar61 + lVar66 + 0x10);
            fVar87 = *(float *)((long)ppppppdVar61 + lVar66 + 0x14);
            pfVar54 = (float *)((long)ppppppdStack_518 + (long)iVar8 * 0xc);
            fVar95 = *pfVar31 * fVar85 + *pfVar52 * fVar86 + *pfVar54 * fVar87;
            fVar90 = *(float *)(puVar43 + 1);
            fVar81 = fVar85 * pfVar31[1] + fVar86 * pfVar52[1] + fVar87 * pfVar54[1];
            fVar85 = fVar85 * pfVar31[2] + fVar86 * pfVar52[2] + fVar87 * pfVar54[2];
            puVar1 = (undefined8 *)((long)param_5[6] + lVar59);
            uVar121 = *puVar43;
            *puVar1 = CONCAT44((float)((ulong)uVar121 >> 0x20) -
                               ((float)((ulong)pppppppdStack_2d0 >> 0x20) * fVar95 +
                                uStack_2c0._4_4_ * fVar81 +
                               (float)((ulong)pppppppdStack_2b0 >> 0x20) * fVar85 +
                               (float)((ulong)ppppppdStack_2a0 >> 0x20)),
                               (float)uVar121 -
                               (SUB84(pppppppdStack_2d0,0) * fVar95 + (float)uStack_2c0 * fVar81 +
                               SUB84(pppppppdStack_2b0,0) * fVar85 + SUB84(ppppppdStack_2a0,0)));
            *(float *)(puVar1 + 1) =
                 fVar90 - ((float)uStack_2c8 * fVar95 + pppppppdStack_2b8._0_4_ * fVar81 +
                          ppppppdStack_298._0_4_ + pppppppdStack_2a8._0_4_ * fVar85);
            uVar56 = uVar56 + 1;
            lVar59 = lVar59 + 0xc;
            lVar66 = lVar66 + 0x18;
          } while (uVar46 != uVar56);
        }
        fVar84 = SQRT(fVar84);
        if (((ulong)param_5[0xc] & 1) != 0) {
          __ZNSt3__16chrono12steady_clock3nowEv();
          func_0x00010ae06f08(1,0x14,&UNK_10f63ce51,&UNK_10f63ce51,0xffffffff,&UNK_10f63d9c1);
        }
        if (pppppppdStack_140 != (double *******)0x0) {
          dStack_138 = (double)pppppppdStack_140;
          __ZdlPv();
        }
      }
      else {
        if (*(char *)(param_5 + 0xc) == '\x01') {
          func_0x00010ae06f08(1,0x14,&UNK_10f63ce51,&UNK_10f63ce51,0xffffffff,&UNK_10f63d87a);
        }
        param_5[4] = param_5[3];
      }
      if (CONCAT44(iStack_2e4,fStack_2e8) != 0) {
        lStack_2e0 = CONCAT44(iStack_2e4,fStack_2e8);
        __ZdlPv();
      }
      (**(code **)(*(long *)*param_6 + 400))(&pppppppdStack_2d0);
      fVar85 = ((float)uStack_2c8 + uStack_2c0._4_4_) - ((float)uStack_2c8 - uStack_2c0._4_4_);
      fVar81 = (float)((ulong)pppppppdStack_2d0 >> 0x20);
      fVar95 = (SUB84(pppppppdStack_2d0,0) + uStack_2c8._4_4_) -
               (SUB84(pppppppdStack_2d0,0) - uStack_2c8._4_4_);
      fVar81 = (fVar81 + (float)uStack_2c0) - (fVar81 - (float)uStack_2c0);
      fVar84 = fVar84 / (SQRT(fVar95 * fVar95 + fVar81 * fVar81 + fVar85 * fVar85) / 1.7320508);
      if (fVar84 < 0.02) {
        if (*(char *)(param_5 + 0xc) == '\x01') {
          func_0x00010ae06f08(1,0x14,&UNK_10f63ce51,&UNK_10f63ce51,0xffffffff,&UNK_10f63dbde);
        }
        ppppppdVar61 = *(double *******)(*param_6 + 0x40);
        param_5[2] = *(double *******)(*param_6 + 0x48);
        param_5[1] = ppppppdVar61;
LAB_10a122774:
        if (ppppppdStack_530 != (double ******)0x0) {
          ppppppdStack_528 = ppppppdStack_530;
          __ZdlPv();
        }
        goto LAB_10a122784;
      }
      if (fVar84 <= 0.1) {
        if ((uRam000000011330a9e8 >> 1 & 1) != 0) {
          func_0x00010ae06f08(1,2,&UNK_10f63da24,&UNK_10f63da6f,0xb4,&UNK_10f63dcdc);
        }
        goto LAB_10a122774;
      }
      if ((uRam000000011330a9e8 >> 1 & 1) != 0) {
        func_0x00010ae06f08(1,2,&UNK_10f63da24,&UNK_10f63da6f,0xb0,&UNK_10f63dc20);
      }
    }
    if (ppppppdStack_530 != (double ******)0x0) {
      ppppppdStack_528 = ppppppdStack_530;
      __ZdlPv();
    }
    goto LAB_10a11f198;
  }
LAB_10a122784:
  func_0x0001094f5708(&pppppppdStack_2d0,param_7);
  func_0x0001096b5198(param_5 + 9,((long)(*param_5)[1] - (long)**param_5 >> 2) * -0x5555555555555555
                     );
  ppppppdVar61 = param_5[9];
  fVar95 = (float)((ulong)pppppppdStack_2d0 >> 0x20);
  fVar84 = (float)((ulong)pppppppdStack_2b0 >> 0x20);
  fVar85 = (float)((ulong)ppppppdStack_2a0 >> 0x20);
  if (param_5[3] == param_5[4]) {
    if (param_5[10] != ppppppdVar61) {
      uVar46 = 1;
      uVar56 = 0;
      do {
        uVar69 = uVar46;
        uVar46 = ((long)ppppppdStack_510 - (long)ppppppdStack_518 >> 2) * -0x5555555555555555;
        dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8);
        dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
        if (uVar46 < uVar56 || uVar46 - uVar56 == 0) goto LAB_10a122aec;
        pfVar52 = (float *)((long)ppppppdStack_518 + uVar56 * 0xc);
        fVar81 = *pfVar52;
        fVar86 = pfVar52[1];
        fVar87 = pfVar52[2];
        puVar43 = (undefined8 *)((long)ppppppdVar61 + uVar56 * 0xc);
        *puVar43 = CONCAT44(fVar95 * fVar81 + uStack_2c0._4_4_ * fVar86 + fVar84 * fVar87 + fVar85,
                            SUB84(pppppppdStack_2d0,0) * fVar81 + (float)uStack_2c0 * fVar86 +
                            SUB84(pppppppdStack_2b0,0) * fVar87 + SUB84(ppppppdStack_2a0,0));
        *(float *)(puVar43 + 1) =
             fVar81 * (float)uStack_2c8 + fVar86 * pppppppdStack_2b8._0_4_ +
             fVar87 * pppppppdStack_2a8._0_4_ + ppppppdStack_298._0_4_;
        ppppppdVar61 = param_5[9];
        uVar38 = ((long)param_5[10] - (long)ppppppdVar61 >> 2) * -0x5555555555555555;
        uVar46 = (ulong)((int)uVar69 + 1);
        uVar56 = uVar69;
      } while (uVar69 <= uVar38 && uVar38 - uVar69 != 0);
    }
  }
  else if (param_5[10] != ppppppdVar61) {
    uVar46 = 1;
    uVar56 = 0;
    do {
      uVar69 = uVar46;
      uVar46 = ((long)param_5[4] - (long)param_5[3] >> 3) * -0x5555555555555555;
      dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8);
      dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
      if (uVar46 < uVar56 || uVar46 - uVar56 == 0) goto LAB_10a122aec;
      ppppppdVar71 = param_5[3] + uVar56 * 3;
      iVar24 = *(int *)ppppppdVar71;
      uVar46 = ((long)ppppppdStack_510 - (long)ppppppdStack_518 >> 2) * -0x5555555555555555;
      dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8);
      dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
      if (((uVar46 < (ulong)(long)iVar24 || uVar46 - (long)iVar24 == 0) ||
          (iVar4 = *(int *)((long)ppppppdVar71 + 4),
          dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8),
          dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0),
          uVar46 < (ulong)(long)iVar4 || uVar46 - (long)iVar4 == 0)) ||
         ((iVar8 = *(int *)(ppppppdVar71 + 1),
          dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8),
          dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0),
          uVar46 < (ulong)(long)iVar8 || uVar46 - (long)iVar8 == 0 ||
          (uVar46 = ((long)param_5[7] - (long)param_5[6] >> 2) * -0x5555555555555555,
          dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8),
          dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0),
          uVar46 < uVar56 || uVar46 - uVar56 == 0)))) goto LAB_10a122aec;
      pfVar31 = (float *)((long)ppppppdStack_518 + (long)iVar24 * 0xc);
      fVar81 = *(float *)((long)ppppppdVar71 + 0xc);
      fVar86 = *(float *)(ppppppdVar71 + 2);
      pfVar52 = (float *)((long)ppppppdStack_518 + (long)iVar4 * 0xc);
      pfVar54 = (float *)((long)ppppppdStack_518 + (long)iVar8 * 0xc);
      fVar92 = *(float *)((long)ppppppdVar71 + 0x14);
      fVar87 = *pfVar31 * fVar81 + *pfVar52 * fVar86 + *pfVar54 * fVar92;
      fVar90 = fVar81 * pfVar31[1] + fVar86 * pfVar52[1] + fVar92 * pfVar54[1];
      fVar81 = fVar81 * pfVar31[2] + fVar86 * pfVar52[2] + fVar92 * pfVar54[2];
      puVar43 = (undefined8 *)((long)param_5[6] + uVar56 * 0xc);
      fVar86 = *(float *)(puVar43 + 1);
      puVar1 = (undefined8 *)((long)ppppppdVar61 + uVar56 * 0xc);
      uVar121 = *puVar43;
      *puVar1 = CONCAT44(fVar95 * fVar87 + uStack_2c0._4_4_ * fVar90 + fVar84 * fVar81 + fVar85 +
                         (float)((ulong)uVar121 >> 0x20),
                         SUB84(pppppppdStack_2d0,0) * fVar87 + (float)uStack_2c0 * fVar90 +
                         SUB84(pppppppdStack_2b0,0) * fVar81 + SUB84(ppppppdStack_2a0,0) +
                         (float)uVar121);
      *(float *)(puVar1 + 1) =
           (float)uStack_2c8 * fVar87 + pppppppdStack_2b8._0_4_ * fVar90 +
           ppppppdStack_298._0_4_ + pppppppdStack_2a8._0_4_ * fVar81 + fVar86;
      ppppppdVar61 = param_5[9];
      uVar38 = ((long)param_5[10] - (long)ppppppdVar61 >> 2) * -0x5555555555555555;
      uVar46 = (ulong)((int)uVar69 + 1);
      uVar56 = uVar69;
    } while (uVar69 <= uVar38 && uVar38 - uVar69 != 0);
  }
  uVar121 = 1;
LAB_10a11f19c:
  if (ppppppdStack_518 != (double ******)0x0) {
    ppppppdStack_510 = ppppppdStack_518;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b8) {
    return uVar121;
  }
  ___stack_chk_fail();
LAB_10a122a14:
  func_0x000109ffde50();
  dVar76 = (double)CONCAT44(uStack_2c8._4_4_,(float)uStack_2c8);
  dVar101 = (double)CONCAT44(uStack_2c0._4_4_,(float)uStack_2c0);
LAB_10a122aec:
                    /* WARNING: Does not return */
  pcVar19 = (code *)SoftwareBreakpoint(1,0x10a122af0);
  uStack_2c8 = dVar76;
  uStack_2c0 = dVar101;
  (*pcVar19)();
}



/* Entry: 10a122d50; end: 10a123007;  */

void FUN_10a122d50(long param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  float *pfVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined4 uVar13;
  float2 fVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  uVar4 = param_2[1];
  if (uVar4 != 0) {
    lVar9 = 0;
    lVar10 = 0;
    uVar11 = 0;
    lVar12 = 4;
    do {
      if (((((ulong)param_2[1] <= uVar11) || ((ulong)param_3[1] <= uVar11)) ||
          ((ulong)param_4[1] <= uVar11)) ||
         (((ulong)param_5[1] <= uVar11 ||
          (lVar2 = *(long *)(param_1 + 0x28),
          (ulong)(*(long *)(param_1 + 0x30) - lVar2 >> 4) <= uVar11)))) {
LAB_10a123004:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a123008);
        (*pcVar3)();
      }
      lVar7 = *param_2;
      lVar6 = *param_3;
      lVar5 = *param_4;
      lVar8 = *param_5;
      uVar13 = *(undefined4 *)(lVar7 + lVar12 + 4);
      *(undefined8 *)(lVar2 + lVar9) = *(undefined8 *)(lVar7 + lVar12 + -4);
      lVar2 = lVar2 + lVar10 * 4;
      *(undefined4 *)(lVar2 + 8) = uVar13;
      *(undefined4 *)(lVar2 + 0xc) = 0x3f800000;
      if ((ulong)(*(long *)(param_1 + 0x70) - *(long *)(param_1 + 0x68) >> 3) <= uVar11)
      goto LAB_10a123004;
      auVar14._0_2_ = (float2)(float)*(undefined8 *)(lVar7 + lVar12);
      fVar16 = (float2)(float)((ulong)*(undefined8 *)(lVar7 + lVar12) >> 0x20);
      auVar14._2_6_ = 0;
      auVar14[8] = SUB21(fVar16,0);
      auVar14[9] = (undefined1)((ushort)fVar16 >> 8);
      auVar14._10_6_ = 0;
      auVar15[8] = 0x20;
      auVar15._0_8_ = 0x10;
      auVar15._9_7_ = 0;
      auVar15 = NEON_ushl(auVar14,auVar15,8);
      *(ulong *)(*(long *)(param_1 + 0x68) + uVar11 * 8) =
           auVar15._8_8_ | auVar15._0_8_ | (ulong)(ushort)(float2)*(float *)(lVar7 + lVar12 + -4) |
           (ulong)(ushort)(float2)*(float *)(lVar6 + lVar12 + -4) << 0x30;
      if ((ulong)(*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80) >> 2) <= uVar11)
      goto LAB_10a123004;
      pfVar1 = (float *)(lVar6 + lVar12);
      *(uint *)(*(long *)(param_1 + 0x80) + lVar10) = CONCAT22((float2)pfVar1[1],(float2)*pfVar1);
      lVar5 = lVar5 + lVar9;
      FUN_10a007c90(lVar5,*(undefined1 *)(param_1 + 0x48));
      if ((ulong)(*(long *)(param_1 + 0xa0) - *(long *)(param_1 + 0x98) >> 2) <= uVar11)
      goto LAB_10a123004;
      *(int *)(*(long *)(param_1 + 0x98) + lVar10) = (int)lVar5;
      fVar21 = *(float *)(lVar8 + lVar9);
      uVar17 = 0;
      uVar18 = 0;
      uVar19 = 0;
      uVar20 = 0;
      if (0.0 <= fVar21) {
        uVar17 = 0;
        uVar18 = 0;
        uVar19 = 0x80;
        uVar20 = 0x3f;
        if (fVar21 <= 1.0) {
          uVar17 = SUB41(fVar21,0);
          uVar18 = (undefined1)((uint)fVar21 >> 8);
          uVar19 = (undefined1)((uint)fVar21 >> 0x10);
          uVar20 = (undefined1)((uint)fVar21 >> 0x18);
        }
      }
      lVar2 = lVar8 + lVar10 * 4;
      fVar22 = *(float *)(lVar2 + 4);
      fVar21 = 0.0;
      if ((0.0 <= fVar22) && (fVar21 = 1.0, fVar22 <= 1.0)) {
        fVar21 = fVar22;
      }
      fVar23 = *(float *)(lVar2 + 8);
      fVar22 = 0.0;
      if ((0.0 <= fVar23) && (fVar22 = 1.0, fVar23 <= 1.0)) {
        fVar22 = fVar23;
      }
      fVar24 = *(float *)(lVar8 + lVar9 + 0xc);
      fVar23 = 0.0;
      if ((0.0 <= fVar24) && (fVar23 = 1.0, fVar24 <= 1.0)) {
        fVar23 = fVar24;
      }
      if ((ulong)(*(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 2) <= uVar11)
      goto LAB_10a123004;
      *(int *)(*(long *)(param_1 + 0xb0) + lVar10) =
           (int)((float)CONCAT13(uVar20,CONCAT12(uVar19,CONCAT11(uVar18,uVar17))) * 255.0 + 0.5) |
           (int)(fVar21 * 255.0 + 0.5) << 8 | (int)(fVar22 * 255.0 + 0.5) << 0x10 |
           (int)(fVar23 * 255.0 + 0.5) << 0x18;
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 4;
      lVar9 = lVar9 + 0x10;
      lVar12 = lVar12 + 0xc;
    } while (uVar4 != uVar11);
  }
  *(undefined1 *)(param_1 + 0x49) = 1;
  FUN_10a123d38(param_1);
  *(undefined1 *)(param_1 + 0x4a) = 1;
  return;
}



/* Entry: 10a123008; end: 10a12310b;  */

undefined8 FUN_10a123008(long param_1)

{
  undefined **ppuVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [48];
  
  ppuVar1 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  if ((*ppuVar1 == (undefined *)0x0) || (*(char *)(param_1 + 0x49) != '\x01')) {
    uVar3 = 0;
  }
  else {
    FUN_10a13299c(auStack_50,&UNK_10f63dd3a);
    plVar2 = *(long **)(*(long *)(param_1 + 200) + 0x288);
    (**(code **)(*plVar2 + 0x98))(plVar2,*(undefined8 *)(param_1 + 0x68),0,0);
    plVar2 = *(long **)(*(long *)(param_1 + 0xd8) + 0x288);
    (**(code **)(*plVar2 + 0x98))(plVar2,*(undefined8 *)(param_1 + 0x80),0,0);
    plVar2 = *(long **)(*(long *)(param_1 + 0xe8) + 0x288);
    (**(code **)(*plVar2 + 0x98))(plVar2,*(undefined8 *)(param_1 + 0x98),0,0);
    plVar2 = *(long **)(*(long *)(param_1 + 0xf8) + 0x288);
    (**(code **)(*plVar2 + 0x98))(plVar2,*(undefined8 *)(param_1 + 0xb0),0,0);
    *(undefined1 *)(param_1 + 0x49) = 0;
    FUN_10a144868(auStack_50);
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 10a12310c; end: 10a1231ab;  */

float FUN_10a12310c(long param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  float *pfVar2;
  long lVar3;
  float *pfVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar1 = (param_2 - param_1 >> 2) * -0x5555555555555555;
  lVar3 = param_4 - param_3 >> 2;
  if (uVar1 + lVar3 * 0x5555555555555555 != 0) {
    return (float)(lVar3 * -0x5555555555555555 + uVar1);
  }
  if (param_2 == param_1) {
    fVar6 = 0.0;
  }
  else {
    pfVar2 = (float *)(param_3 + 8);
    pfVar4 = (float *)(param_1 + 8);
    fVar6 = 0.0;
    uVar5 = uVar1;
    do {
      fVar7 = (float)*(undefined8 *)(pfVar2 + -2) - (float)*(undefined8 *)(pfVar4 + -2);
      fVar8 = (float)((ulong)*(undefined8 *)(pfVar2 + -2) >> 0x20) -
              (float)((ulong)*(undefined8 *)(pfVar4 + -2) >> 0x20);
      fVar6 = fVar6 + fVar7 * fVar7 + fVar8 * fVar8 + (*pfVar2 - *pfVar4) * (*pfVar2 - *pfVar4);
      pfVar2 = pfVar2 + 3;
      pfVar4 = pfVar4 + 3;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return SQRT(fVar6 / (float)uVar1);
}



/* Entry: 10a1231ac; end: 10a123713;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10a1231ac(undefined8 *param_1,long *param_2)

{
  float *pfVar1;
  long *plVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 *puVar7;
  int *piVar8;
  int iVar9;
  undefined8 *puVar10;
  float *pfVar11;
  ulong uVar12;
  undefined8 *puVar13;
  int *piVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  ulong uVar21;
  float fVar22;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  ulong uVar34;
  float fVar35;
  ulong uVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar40;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  float *pfStack_c8;
  float *pfStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  int iStack_90;
  
  iStack_90 = -1;
  uStack_a8 = UNK_10e004a80._8_8_;
  uStack_b0 = (undefined8)UNK_10e004a80;
  uVar21 = 0xff7fffffff7fffff;
  uStack_a0 = 0xff7fffffff7fffff;
  uStack_98 = 0xffffffffffffffff;
  pfStack_c8 = (float *)0x0;
  pfStack_c0 = (float *)0x0;
  uStack_b8 = 0;
  piVar8 = (int *)*param_2;
  piVar3 = (int *)param_2[1];
  piVar14 = piVar8;
  if (piVar8 != piVar3) {
    uVar39 = NEON_fmov(0x40400000,4);
    auVar26 = _UNK_10e004a80;
    do {
      iVar15 = *piVar8;
      lVar16 = *(long *)param_1[1];
      uVar12 = (((long *)param_1[1])[1] - lVar16 >> 2) * -0x5555555555555555;
      if (uVar12 < (ulong)(long)iVar15 || uVar12 - (long)iVar15 == 0) goto LAB_10a1236b4;
      piVar14 = (int *)(lVar16 + (long)iVar15 * 0xc);
      iVar15 = *piVar14;
      lVar16 = *(long *)*param_1;
      uVar12 = (((long *)*param_1)[1] - lVar16 >> 2) * -0x5555555555555555;
      if (((uVar12 < (ulong)(long)iVar15 || uVar12 - (long)iVar15 == 0) ||
          (iVar9 = piVar14[1], uVar12 < (ulong)(long)iVar9 || uVar12 - (long)iVar9 == 0)) ||
         (iVar4 = piVar14[2], uVar12 < (ulong)(long)iVar4 || uVar12 - (long)iVar4 == 0))
      goto LAB_10a1236b4;
      fStack_108 = auVar26._8_4_;
      fStack_110 = auVar26._0_4_;
      fStack_10c = auVar26._4_4_;
      puVar10 = (undefined8 *)(lVar16 + (long)iVar15 * 0xc);
      puVar13 = (undefined8 *)(lVar16 + (long)iVar9 * 0xc);
      puVar7 = (undefined8 *)(lVar16 + (long)iVar4 * 0xc);
      uVar23 = *puVar10;
      auVar31._0_8_ = *puVar13;
      uVar5 = *puVar7;
      fVar38 = (float)uVar5;
      uVar36 = *(ulong *)((long)puVar10 + 4);
      uVar34 = *(ulong *)((long)puVar13 + 4);
      uVar12 = *(ulong *)((long)puVar7 + 4);
      fVar35 = (float)(uVar12 >> 0x20);
      fVar40 = (float)(uVar34 >> 0x20);
      fVar37 = (float)(uVar36 >> 0x20);
      fVar18 = (float)uVar23;
      fVar19 = (float)auVar31._0_8_;
      lStack_e0 = CONCAT44(((float)uVar36 + (float)uVar34 + (float)uVar12) /
                           (float)((ulong)uVar39 >> 0x20),(fVar18 + fVar19 + fVar38) / (float)uVar39
                          );
      lStack_d8 = CONCAT44(lStack_d8._4_4_,(fVar37 + fVar40 + fVar35) / 3.0);
      FUN_10a123714(&pfStack_c8,&lStack_e0);
      uVar21 = uVar21 ^ (uVar21 ^ uVar36) &
                        CONCAT44(-(uint)((float)(uVar21 >> 0x20) < fVar37),
                                 -(uint)((float)uVar21 < (float)uVar36));
      auVar24 = NEON_ext(auVar26,auVar26,8,1);
      uVar21 = uVar21 ^ (uVar21 ^ uVar34) &
                        CONCAT44(-(uint)((float)(uVar21 >> 0x20) < fVar40),
                                 -(uint)((float)uVar21 < (float)uVar34));
      auVar30._8_4_ = fVar37;
      auVar30._0_8_ = uVar23;
      auVar25._0_4_ = -(uint)(fVar18 < fStack_110);
      auVar25._4_4_ = -(uint)((float)((ulong)uVar23 >> 0x20) < fStack_10c);
      auVar25._8_4_ = -(uint)(fVar37 < fStack_108);
      auVar25._12_4_ = -(uint)(auVar24._4_4_ < fVar18);
      auVar30._12_4_ = fVar18;
      auVar26 = auVar26 ^ (auVar26 ^ auVar30) & auVar25;
      auVar24 = NEON_ext(auVar26,auVar26,8,1);
      auVar31._8_4_ = fVar40;
      auVar27._4_4_ = -(uint)((float)((ulong)auVar31._0_8_ >> 0x20) < auVar26._4_4_);
      auVar27._0_4_ = -(uint)(fVar19 < auVar26._0_4_);
      auVar27._12_4_ = -(uint)(auVar24._4_4_ < fVar19);
      auVar27._8_4_ = -(uint)(fVar40 < auVar26._8_4_);
      auVar31._12_4_ = fVar19;
      uVar21 = uVar21 ^ (uVar21 ^ uVar12) &
                        CONCAT44(-(uint)((float)(uVar21 >> 0x20) < fVar35),
                                 -(uint)((float)uVar21 < (float)uVar12));
      auVar26 = auVar26 ^ (auVar26 ^ auVar31) & auVar27;
      auVar27 = NEON_ext(auVar26,auVar26,8,1);
      auVar28._8_4_ = fVar35;
      auVar28._0_8_ = uVar5;
      auVar28._12_4_ = fVar38;
      auVar24._4_4_ = -(uint)((float)((ulong)uVar5 >> 0x20) < auVar26._4_4_);
      auVar24._0_4_ = -(uint)(fVar38 < auVar26._0_4_);
      auVar24._8_4_ = -(uint)(fVar35 < auVar26._8_4_);
      auVar24._12_4_ = -(uint)(auVar27._4_4_ < fVar38);
      auVar26 = auVar28 ^ (auVar28 ^ auVar26) & ~auVar24;
      piVar8 = piVar8 + 1;
    } while (piVar8 != piVar3);
    uStack_a8 = auVar26._8_8_;
    piVar8 = (int *)param_2[1];
    piVar14 = (int *)*param_2;
    uStack_b0 = auVar26._0_8_;
    uStack_a0 = uVar21;
  }
  if ((long)piVar8 - (long)piVar14 == 4) {
    iStack_90 = *piVar14;
    lVar16 = param_1[2];
    lVar17 = param_1[3];
    FUN_10a12380c(param_1 + 2,&uStack_b0);
    lVar16 = (lVar17 - lVar16 >> 2) * -0x71c71c71c71c71c7;
    goto LAB_10a123678;
  }
  if (pfStack_c8 == pfStack_c0) {
    fVar37 = 3.4028235e+38;
    fVar19 = 3.4028235e+38;
    fVar35 = -3.4028235e+38;
    fVar38 = -3.4028235e+38;
    fVar18 = 3.4028235e+38;
    fVar40 = fVar35;
  }
  else {
    fVar37 = 3.4028235e+38;
    pfVar11 = pfStack_c8;
    fVar32 = -3.4028235e+38;
    fVar33 = -3.4028235e+38;
    fVar20 = 3.4028235e+38;
    fVar22 = -3.4028235e+38;
    fVar29 = 3.4028235e+38;
    do {
      fVar35 = *pfVar11;
      fVar38 = pfVar11[1];
      fVar18 = fVar35;
      if (fVar37 <= fVar35) {
        fVar18 = fVar37;
      }
      fVar37 = fVar18;
      fVar18 = fVar38;
      if (fVar20 <= fVar38) {
        fVar18 = fVar20;
      }
      fVar40 = pfVar11[2];
      fVar19 = fVar40;
      if (fVar29 <= fVar40) {
        fVar19 = fVar29;
      }
      if (fVar35 <= fVar32) {
        fVar35 = fVar32;
      }
      if (fVar38 <= fVar22) {
        fVar38 = fVar22;
      }
      if (fVar40 <= fVar33) {
        fVar40 = fVar33;
      }
      pfVar11 = pfVar11 + 3;
      fVar32 = fVar35;
      fVar33 = fVar40;
      fVar20 = fVar18;
      fVar22 = fVar38;
      fVar29 = fVar19;
    } while (pfVar11 != pfStack_c0);
  }
  iVar9 = 2;
  iVar15 = 0;
  if (fVar35 - fVar37 <= fVar40 - fVar19) {
    iVar15 = iVar9;
  }
  if (fVar40 - fVar19 < fVar38 - fVar18) {
    iVar9 = 1;
  }
  if (fVar35 - fVar37 <= fVar38 - fVar18) {
    iVar15 = iVar9;
  }
  if ((iVar15 != 1) && (fVar18 = fVar37, fVar38 = fVar35, iVar15 == 2)) {
    fVar18 = fVar19;
    fVar38 = fVar40;
  }
  lStack_e0 = 0;
  lStack_d8 = 0;
  uStack_d0 = 0;
  lStack_f8 = 0;
  lStack_f0 = 0;
  uStack_e8 = 0;
  if (piVar8 == piVar14) {
    uVar21 = 0;
LAB_10a1235b4:
    FUN_10a132408(&lStack_e0,piVar14,piVar14 + (uVar21 >> 1));
    lVar17 = param_2[1];
    lVar16 = *param_2 + (lVar17 - *param_2 >> 3) * 4;
    FUN_10a132408(&lStack_f8,lVar16,lVar17,lVar17 - lVar16 >> 2);
  }
  else {
    lVar17 = 0;
    lVar16 = 0;
    uVar12 = 0;
    do {
      uVar21 = ((long)pfStack_c0 - (long)pfStack_c8 >> 2) * -0x5555555555555555;
      if (uVar21 < uVar12 || uVar21 - uVar12 == 0) goto LAB_10a1236b4;
      pfVar11 = pfStack_c8 + uVar12 * 3 + 2;
      if (iVar15 != 2) {
        pfVar11 = (float *)((long)pfStack_c8 + lVar16);
      }
      pfVar1 = pfStack_c8 + uVar12 * 3 + 1;
      if (iVar15 != 1) {
        pfVar1 = pfVar11;
      }
      plVar2 = &lStack_e0;
      if ((fVar18 + fVar38) * 0.5 <= *pfVar1) {
        plVar2 = &lStack_f8;
      }
      func_0x000109febdc8(plVar2,(long)piVar14 + lVar17);
      uVar12 = uVar12 + 1;
      piVar14 = (int *)*param_2;
      lVar16 = lVar16 + 0xc;
      lVar17 = lVar17 + 4;
      uVar21 = param_2[1] - (long)piVar14 >> 2;
    } while (uVar12 < uVar21);
    if ((lStack_e0 == lStack_d8) || (lStack_f8 == lStack_f0)) goto LAB_10a1235b4;
  }
  lVar16 = param_1[2];
  lVar17 = param_1[3];
  FUN_10a12380c(param_1 + 2,&uStack_b0);
  puVar7 = param_1;
  FUN_10a1231ac(param_1,&lStack_e0);
  puVar10 = param_1;
  FUN_10a1231ac(param_1,&lStack_f8);
  lVar16 = (lVar17 - lVar16 >> 2) * -0x71c71c71c71c71c7;
  uVar21 = ((long)(param_1[3] - param_1[2]) >> 2) * -0x71c71c71c71c71c7;
  iVar15 = (int)lVar16;
  if (uVar21 < (ulong)(long)iVar15 || uVar21 - (long)iVar15 == 0) {
LAB_10a1236b4:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10a1236b8);
    (*pcVar6)();
  }
  lVar17 = param_1[2] + (long)iVar15 * 0x24;
  *(int *)(lVar17 + 0x18) = (int)puVar7;
  *(int *)(lVar17 + 0x1c) = (int)puVar10;
  if (lStack_f8 != 0) {
    lStack_f0 = lStack_f8;
    __ZdlPv();
  }
  if (lStack_e0 != 0) {
    lStack_d8 = lStack_e0;
    __ZdlPv();
  }
LAB_10a123678:
  if (pfStack_c8 != (float *)0x0) {
    pfStack_c0 = pfStack_c8;
    __ZdlPv();
  }
  return lVar16;
}



/* Entry: 10a123714; end: 10a12380b;  */

void FUN_10a123714(long *param_1,undefined8 *param_2,float *param_3,undefined8 *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  long *plVar7;
  undefined8 uVar8;
  int *piVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  float *pfVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  
  puVar11 = (undefined8 *)param_1[1];
  if (puVar11 < (undefined8 *)param_1[2]) {
    uVar8 = *param_2;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar11 = uVar8;
    lVar17 = (long)puVar11 + 0xc;
  }
  else {
    lVar17 = (long)puVar11 - *param_1;
    uVar12 = (lVar17 >> 2) * -0x5555555555555555 + 1;
    if (0x1555555555555555 < uVar12) {
      FUN_10a051b10();
      puVar11 = (undefined8 *)param_1[1];
      if (puVar11 < (undefined8 *)param_1[2]) {
        uVar26 = param_2[1];
        uVar8 = *param_2;
        uVar22 = param_2[3];
        uVar39 = param_2[2];
        *(undefined4 *)(puVar11 + 4) = *(undefined4 *)(param_2 + 4);
        puVar11[1] = uVar26;
        *puVar11 = uVar8;
        puVar11[3] = uVar22;
        puVar11[2] = uVar39;
        lVar17 = (long)puVar11 + 0x24;
LAB_10a12390c:
        param_1[1] = lVar17;
        return;
      }
      lVar10 = *param_1;
      uVar12 = ((long)puVar11 - lVar10 >> 2) * -0x71c71c71c71c71c7 + 1;
      if (uVar12 < 0x71c71c71c71c71d) {
        lVar17 = param_1[2] - lVar10 >> 2;
        uVar14 = lVar17 * 0x1c71c71c71c71c72;
        if (uVar14 < uVar12 || uVar14 - uVar12 == 0) {
          uVar14 = uVar12;
        }
        if (0x38e38e38e38e38d < (ulong)(lVar17 * -0x71c71c71c71c71c7)) {
          uVar14 = 0x71c71c71c71c71c;
        }
        if (uVar14 < 0x71c71c71c71c71d) {
          lVar16 = uVar14 * 0x24;
          __Znwm();
          puVar11 = (undefined8 *)(lVar16 + ((long)puVar11 - lVar10));
          uVar8 = *param_2;
          uVar39 = param_2[3];
          uVar26 = param_2[2];
          puVar11[1] = param_2[1];
          *puVar11 = uVar8;
          puVar11[3] = uVar39;
          puVar11[2] = uVar26;
          *(undefined4 *)(puVar11 + 4) = *(undefined4 *)(param_2 + 4);
          lVar17 = (long)puVar11 + 0x24;
          _memcpy();
          *param_1 = lVar16;
          param_1[1] = lVar17;
          param_1[2] = lVar16 + uVar14 * 0x24;
          if (lVar10 != 0) {
            __ZdlPv(lVar10);
          }
          goto LAB_10a12390c;
        }
      }
      else {
        FUN_10a1323f4();
      }
      func_0x000109ffded8();
      lVar17 = param_1[2];
      uVar12 = (param_1[3] - lVar17 >> 2) * -0x71c71c71c71c71c7;
      if ((ulong)(long)param_5 <= uVar12 && uVar12 - (long)param_5 != 0) {
        uVar12 = (ulong)param_5;
        do {
          pfVar18 = (float *)(lVar17 + uVar12 * 0x24);
          uVar8 = NEON_rev64(*(undefined8 *)(pfVar18 + 2),4);
          fVar23 = (float)((ulong)uVar8 >> 0x20);
          uVar12 = CONCAT44(fVar23,*pfVar18);
          fVar20 = (float)((ulong)*param_2 >> 0x20);
          fVar19 = pfVar18[1];
          if (pfVar18[1] <= fVar20) {
            fVar19 = fVar20;
          }
          fVar21 = *(float *)(param_2 + 1);
          fVar25 = pfVar18[4];
          if (fVar19 <= pfVar18[4]) {
            fVar25 = fVar19;
          }
          fVar19 = (float)*param_2;
          uVar12 = uVar12 ^ (uVar12 ^ CONCAT44(fVar21,fVar19)) &
                            ~CONCAT44(-(uint)(fVar21 < fVar23),-(uint)(fVar19 < *pfVar18));
          uVar14 = CONCAT44(pfVar18[5],(float)uVar8);
          uVar14 = uVar14 ^ (uVar14 ^ uVar12) &
                            ~CONCAT44(-(uint)(pfVar18[5] < (float)(uVar12 >> 0x20)),
                                      -(uint)((float)uVar8 < (float)uVar12));
          fVar23 = (float)uVar14 - fVar19;
          fVar24 = (float)(uVar14 >> 0x20) - fVar21;
          if (*param_3 < fVar23 * fVar23 + (fVar25 - fVar20) * (fVar25 - fVar20) + fVar24 * fVar24)
          {
            return;
          }
          fVar23 = pfVar18[8];
          if (-1 < (int)fVar23) {
            lVar17 = *(long *)param_1[1];
            uVar12 = (((long *)param_1[1])[1] - lVar17 >> 2) * -0x5555555555555555;
            if ((uint)fVar23 <= uVar12 && uVar12 - (uint)fVar23 != 0) {
              piVar9 = (int *)(lVar17 + (ulong)(uint)fVar23 * 0xc);
              iVar1 = *piVar9;
              lVar17 = *(long *)*param_1;
              uVar12 = (((long *)*param_1)[1] - lVar17 >> 2) * -0x5555555555555555;
              if ((((ulong)(long)iVar1 <= uVar12 && uVar12 - (long)iVar1 != 0) &&
                  (iVar2 = piVar9[1], (ulong)(long)iVar2 <= uVar12 && uVar12 - (long)iVar2 != 0)) &&
                 (iVar3 = piVar9[2], (ulong)(long)iVar3 <= uVar12 && uVar12 - (long)iVar3 != 0)) {
                puVar13 = (undefined8 *)(lVar17 + (long)iVar1 * 0xc);
                puVar15 = (undefined8 *)(lVar17 + (long)iVar2 * 0xc);
                puVar11 = (undefined8 *)(lVar17 + (long)iVar3 * 0xc);
                fVar23 = *(float *)(puVar15 + 1);
                fVar27 = *(float *)(puVar13 + 1);
                fVar30 = fVar23 - fVar27;
                uVar8 = *puVar15;
                uVar26 = *puVar13;
                fVar25 = (float)uVar26;
                fVar36 = (float)uVar8;
                fVar34 = fVar36 - fVar25;
                fVar24 = (float)((ulong)uVar26 >> 0x20);
                fVar37 = (float)((ulong)uVar8 >> 0x20);
                fVar35 = fVar37 - fVar24;
                uVar39 = *puVar11;
                fVar38 = (float)uVar39;
                fVar31 = fVar38 - fVar25;
                fVar40 = (float)((ulong)uVar39 >> 0x20);
                fVar32 = fVar40 - fVar24;
                fVar41 = *(float *)(puVar11 + 1);
                fVar33 = fVar41 - fVar27;
                fVar45 = fVar34 * (fVar19 - fVar25) + fVar35 * (fVar20 - fVar24) +
                         fVar30 * (fVar21 - fVar27);
                fVar44 = (fVar19 - fVar25) * fVar31 + (fVar20 - fVar24) * fVar32 +
                         (fVar21 - fVar27) * fVar33;
                if ((0.0 < fVar45) || (0.0 < fVar44)) {
                  fVar46 = (fVar19 - fVar36) * fVar34 + (fVar20 - fVar37) * fVar35 +
                           (fVar21 - fVar23) * fVar30;
                  fVar48 = (fVar19 - fVar36) * fVar31 + (fVar20 - fVar37) * fVar32 +
                           (fVar21 - fVar23) * fVar33;
                  fVar42 = 1.0;
                  fVar29 = 0.0;
                  bVar5 = false;
                  bVar6 = true;
                  if (0.0 <= fVar46) {
                    bVar5 = false;
                    bVar6 = true;
                    if (!NAN(fVar48) && !NAN(fVar46)) {
                      bVar5 = fVar48 == fVar46;
                      bVar6 = fVar46 <= fVar48;
                    }
                  }
                  if (!bVar6 || bVar5) {
                    fVar28 = 0.0;
                    goto LAB_10a123bbc;
                  }
                  fVar47 = -(fVar46 * fVar44) + fVar48 * fVar45;
                  if (((fVar46 <= 0.0) && (0.0 <= fVar45)) && (fVar47 <= 0.0)) {
                    fVar42 = fVar45 / (fVar45 - fVar46);
                    fVar28 = 1.0 - fVar42;
                    uVar8 = CONCAT44(fVar24 + fVar35 * fVar42,fVar25 + fVar34 * fVar42);
                    fVar23 = fVar27 + fVar30 * fVar42;
                    goto LAB_10a123bbc;
                  }
                  fVar43 = fVar34 * (fVar19 - fVar38) + fVar35 * (fVar20 - fVar40) +
                           fVar30 * (fVar21 - fVar41);
                  fVar49 = fVar31 * (fVar19 - fVar38) + fVar32 * (fVar20 - fVar40) +
                           fVar33 * (fVar21 - fVar41);
                  fVar28 = 0.0;
                  fVar29 = 1.0;
                  bVar5 = false;
                  bVar6 = true;
                  if (0.0 <= fVar49) {
                    bVar5 = false;
                    bVar6 = true;
                    if (!NAN(fVar43) && !NAN(fVar49)) {
                      bVar5 = fVar43 == fVar49;
                      bVar6 = fVar49 <= fVar43;
                    }
                  }
                  if (!bVar6 || bVar5) {
                    fVar42 = 0.0;
                    uVar8 = uVar39;
                    fVar23 = fVar41;
                    goto LAB_10a123bbc;
                  }
                  fVar42 = -(fVar45 * fVar49) + fVar44 * fVar43;
                  if (((0.0 < fVar49) || (0.0 < fVar42)) || (fVar44 < 0.0)) {
                    fVar44 = -(fVar43 * fVar48) + fVar49 * fVar46;
                    if (((0.0 < fVar44) || (fVar48 = fVar48 - fVar46, fVar48 < 0.0)) ||
                       (fVar43 - fVar49 < 0.0)) {
                      fVar29 = 1.0 / (fVar47 + fVar44 + fVar42);
                      fVar42 = fVar42 * fVar29;
                      fVar29 = fVar47 * fVar29;
                      fVar28 = (1.0 - fVar42) - fVar29;
                      uVar8 = CONCAT44(fVar32 * fVar29 + fVar24 + fVar35 * fVar42,
                                       fVar31 * fVar29 + fVar25 + fVar34 * fVar42);
                      fVar23 = fVar33 * fVar29 + fVar27 + fVar30 * fVar42;
                    }
                    else {
                      fVar29 = fVar48 / (fVar48 + (fVar43 - fVar49));
                      fVar42 = 1.0 - fVar29;
                      uVar8 = CONCAT44(fVar37 + (fVar40 - fVar37) * fVar29,
                                       fVar36 + (fVar38 - fVar36) * fVar29);
                      fVar23 = fVar23 + (fVar41 - fVar23) * fVar29;
                    }
                    goto LAB_10a123bbc;
                  }
                  fVar29 = fVar44 / (fVar44 - fVar49);
                  fVar28 = 1.0 - fVar29;
                  uVar26 = CONCAT44(fVar24 + fVar32 * fVar29,fVar25 + fVar31 * fVar29);
                  fVar27 = fVar27 + fVar33 * fVar29;
                }
                else {
                  fVar28 = 1.0;
                  fVar29 = 0.0;
                }
                fVar42 = 0.0;
                uVar8 = uVar26;
                fVar23 = fVar27;
LAB_10a123bbc:
                fVar19 = fVar19 - (float)uVar8;
                fVar20 = fVar20 - (float)((ulong)uVar8 >> 0x20);
                fVar19 = fVar19 * fVar19 + fVar20 * fVar20 + (fVar21 - fVar23) * (fVar21 - fVar23);
                if (fVar19 < *param_3) {
                  *param_3 = fVar19;
                  uVar8 = *(undefined8 *)piVar9;
                  *(int *)(param_4 + 1) = piVar9[2];
                  *param_4 = uVar8;
                  *(float *)((long)param_4 + 0xc) = fVar28;
                  *(float *)(param_4 + 2) = fVar42;
                  *(float *)((long)param_4 + 0x14) = fVar29;
                }
                return;
              }
            }
            break;
          }
          FUN_10a12392c(param_1,param_2,param_3,param_4,pfVar18[6]);
          uVar12 = (ulong)(int)pfVar18[7];
          lVar17 = param_1[2];
          uVar14 = (param_1[3] - lVar17 >> 2) * -0x71c71c71c71c71c7;
        } while (uVar12 <= uVar14 && uVar14 - uVar12 != 0);
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10a123a48);
      (*pcVar4)();
    }
    lVar10 = param_1[2] - *param_1 >> 2;
    uVar14 = lVar10 * 0x5555555555555556;
    if (uVar14 < uVar12 || uVar14 - uVar12 == 0) {
      uVar14 = uVar12;
    }
    if (0xaaaaaaaaaaaaaa9 < (ulong)(lVar10 * -0x5555555555555555)) {
      uVar14 = 0x1555555555555555;
    }
    plVar7 = param_1;
    FUN_10a051b24();
    puVar11 = (undefined8 *)((long)plVar7 + lVar17);
    uVar8 = *param_2;
    *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar11 = uVar8;
    lVar17 = (long)puVar11 + 0xc;
    lVar16 = (long)puVar11 - (param_1[1] - *param_1);
    _memcpy(lVar16);
    lVar10 = *param_1;
    *param_1 = lVar16;
    param_1[1] = lVar17;
    param_1[2] = (long)plVar7 + uVar14 * 0xc;
    if (lVar10 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = lVar17;
  return;
}



/* Entry: 10a12380c; end: 10a12392b;  */

void FUN_10a12380c(long *param_1,undefined8 *param_2,float *param_3,undefined8 *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  
  puVar10 = (undefined8 *)param_1[1];
  if (puVar10 < (undefined8 *)param_1[2]) {
    uVar25 = param_2[1];
    uVar22 = *param_2;
    uVar20 = param_2[3];
    uVar38 = param_2[2];
    *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(param_2 + 4);
    puVar10[1] = uVar25;
    *puVar10 = uVar22;
    puVar10[3] = uVar20;
    puVar10[2] = uVar38;
    lVar11 = (long)puVar10 + 0x24;
LAB_10a12390c:
    param_1[1] = lVar11;
    return;
  }
  lVar15 = *param_1;
  uVar9 = ((long)puVar10 - lVar15 >> 2) * -0x71c71c71c71c71c7 + 1;
  if (uVar9 < 0x71c71c71c71c71d) {
    lVar11 = param_1[2] - lVar15 >> 2;
    uVar13 = lVar11 * 0x1c71c71c71c71c72;
    if (uVar13 < uVar9 || uVar13 - uVar9 == 0) {
      uVar13 = uVar9;
    }
    if (0x38e38e38e38e38d < (ulong)(lVar11 * -0x71c71c71c71c71c7)) {
      uVar13 = 0x71c71c71c71c71c;
    }
    if (uVar13 < 0x71c71c71c71c71d) {
      lVar7 = uVar13 * 0x24;
      __Znwm();
      puVar10 = (undefined8 *)(lVar7 + ((long)puVar10 - lVar15));
      uVar22 = *param_2;
      uVar38 = param_2[3];
      uVar25 = param_2[2];
      puVar10[1] = param_2[1];
      *puVar10 = uVar22;
      puVar10[3] = uVar38;
      puVar10[2] = uVar25;
      *(undefined4 *)(puVar10 + 4) = *(undefined4 *)(param_2 + 4);
      lVar11 = (long)puVar10 + 0x24;
      _memcpy();
      *param_1 = lVar7;
      param_1[1] = lVar11;
      param_1[2] = lVar7 + uVar13 * 0x24;
      if (lVar15 != 0) {
        __ZdlPv(lVar15);
      }
      goto LAB_10a12390c;
    }
  }
  else {
    FUN_10a1323f4();
  }
  func_0x000109ffded8();
  lVar11 = param_1[2];
  uVar9 = (param_1[3] - lVar11 >> 2) * -0x71c71c71c71c71c7;
  if ((ulong)(long)param_5 <= uVar9 && uVar9 - (long)param_5 != 0) {
    uVar9 = (ulong)param_5;
    do {
      pfVar16 = (float *)(lVar11 + uVar9 * 0x24);
      uVar22 = NEON_rev64(*(undefined8 *)(pfVar16 + 2),4);
      fVar21 = (float)((ulong)uVar22 >> 0x20);
      uVar9 = CONCAT44(fVar21,*pfVar16);
      fVar18 = (float)((ulong)*param_2 >> 0x20);
      fVar17 = pfVar16[1];
      if (pfVar16[1] <= fVar18) {
        fVar17 = fVar18;
      }
      fVar19 = *(float *)(param_2 + 1);
      fVar24 = pfVar16[4];
      if (fVar17 <= pfVar16[4]) {
        fVar24 = fVar17;
      }
      fVar17 = (float)*param_2;
      uVar9 = uVar9 ^ (uVar9 ^ CONCAT44(fVar19,fVar17)) &
                      ~CONCAT44(-(uint)(fVar19 < fVar21),-(uint)(fVar17 < *pfVar16));
      uVar13 = CONCAT44(pfVar16[5],(float)uVar22);
      uVar13 = uVar13 ^ (uVar13 ^ uVar9) &
                        ~CONCAT44(-(uint)(pfVar16[5] < (float)(uVar9 >> 0x20)),
                                  -(uint)((float)uVar22 < (float)uVar9));
      fVar21 = (float)uVar13 - fVar17;
      fVar23 = (float)(uVar13 >> 0x20) - fVar19;
      if (*param_3 < fVar21 * fVar21 + (fVar24 - fVar18) * (fVar24 - fVar18) + fVar23 * fVar23) {
        return;
      }
      fVar21 = pfVar16[8];
      if (-1 < (int)fVar21) {
        lVar11 = *(long *)param_1[1];
        uVar9 = (((long *)param_1[1])[1] - lVar11 >> 2) * -0x5555555555555555;
        if ((uint)fVar21 <= uVar9 && uVar9 - (uint)fVar21 != 0) {
          piVar8 = (int *)(lVar11 + (ulong)(uint)fVar21 * 0xc);
          iVar1 = *piVar8;
          lVar11 = *(long *)*param_1;
          uVar9 = (((long *)*param_1)[1] - lVar11 >> 2) * -0x5555555555555555;
          if ((((ulong)(long)iVar1 <= uVar9 && uVar9 - (long)iVar1 != 0) &&
              (iVar2 = piVar8[1], (ulong)(long)iVar2 <= uVar9 && uVar9 - (long)iVar2 != 0)) &&
             (iVar3 = piVar8[2], (ulong)(long)iVar3 <= uVar9 && uVar9 - (long)iVar3 != 0)) {
            puVar12 = (undefined8 *)(lVar11 + (long)iVar1 * 0xc);
            puVar14 = (undefined8 *)(lVar11 + (long)iVar2 * 0xc);
            puVar10 = (undefined8 *)(lVar11 + (long)iVar3 * 0xc);
            fVar21 = *(float *)(puVar14 + 1);
            fVar26 = *(float *)(puVar12 + 1);
            fVar29 = fVar21 - fVar26;
            uVar22 = *puVar14;
            uVar25 = *puVar12;
            fVar24 = (float)uVar25;
            fVar35 = (float)uVar22;
            fVar33 = fVar35 - fVar24;
            fVar23 = (float)((ulong)uVar25 >> 0x20);
            fVar36 = (float)((ulong)uVar22 >> 0x20);
            fVar34 = fVar36 - fVar23;
            uVar38 = *puVar10;
            fVar37 = (float)uVar38;
            fVar30 = fVar37 - fVar24;
            fVar39 = (float)((ulong)uVar38 >> 0x20);
            fVar31 = fVar39 - fVar23;
            fVar40 = *(float *)(puVar10 + 1);
            fVar32 = fVar40 - fVar26;
            fVar44 = fVar33 * (fVar17 - fVar24) + fVar34 * (fVar18 - fVar23) +
                     fVar29 * (fVar19 - fVar26);
            fVar43 = (fVar17 - fVar24) * fVar30 + (fVar18 - fVar23) * fVar31 +
                     (fVar19 - fVar26) * fVar32;
            if ((0.0 < fVar44) || (0.0 < fVar43)) {
              fVar45 = (fVar17 - fVar35) * fVar33 + (fVar18 - fVar36) * fVar34 +
                       (fVar19 - fVar21) * fVar29;
              fVar47 = (fVar17 - fVar35) * fVar30 + (fVar18 - fVar36) * fVar31 +
                       (fVar19 - fVar21) * fVar32;
              fVar41 = 1.0;
              fVar28 = 0.0;
              bVar5 = false;
              bVar6 = true;
              if (0.0 <= fVar45) {
                bVar5 = false;
                bVar6 = true;
                if (!NAN(fVar47) && !NAN(fVar45)) {
                  bVar5 = fVar47 == fVar45;
                  bVar6 = fVar45 <= fVar47;
                }
              }
              if (!bVar6 || bVar5) {
                fVar27 = 0.0;
                goto LAB_10a123bbc;
              }
              fVar46 = -(fVar45 * fVar43) + fVar47 * fVar44;
              if (((fVar45 <= 0.0) && (0.0 <= fVar44)) && (fVar46 <= 0.0)) {
                fVar41 = fVar44 / (fVar44 - fVar45);
                fVar27 = 1.0 - fVar41;
                uVar22 = CONCAT44(fVar23 + fVar34 * fVar41,fVar24 + fVar33 * fVar41);
                fVar21 = fVar26 + fVar29 * fVar41;
                goto LAB_10a123bbc;
              }
              fVar42 = fVar33 * (fVar17 - fVar37) + fVar34 * (fVar18 - fVar39) +
                       fVar29 * (fVar19 - fVar40);
              fVar48 = fVar30 * (fVar17 - fVar37) + fVar31 * (fVar18 - fVar39) +
                       fVar32 * (fVar19 - fVar40);
              fVar27 = 0.0;
              fVar28 = 1.0;
              bVar5 = false;
              bVar6 = true;
              if (0.0 <= fVar48) {
                bVar5 = false;
                bVar6 = true;
                if (!NAN(fVar42) && !NAN(fVar48)) {
                  bVar5 = fVar42 == fVar48;
                  bVar6 = fVar48 <= fVar42;
                }
              }
              if (!bVar6 || bVar5) {
                fVar41 = 0.0;
                uVar22 = uVar38;
                fVar21 = fVar40;
                goto LAB_10a123bbc;
              }
              fVar41 = -(fVar44 * fVar48) + fVar43 * fVar42;
              if (((0.0 < fVar48) || (0.0 < fVar41)) || (fVar43 < 0.0)) {
                fVar43 = -(fVar42 * fVar47) + fVar48 * fVar45;
                if (((0.0 < fVar43) || (fVar47 = fVar47 - fVar45, fVar47 < 0.0)) ||
                   (fVar42 - fVar48 < 0.0)) {
                  fVar28 = 1.0 / (fVar46 + fVar43 + fVar41);
                  fVar41 = fVar41 * fVar28;
                  fVar28 = fVar46 * fVar28;
                  fVar27 = (1.0 - fVar41) - fVar28;
                  uVar22 = CONCAT44(fVar31 * fVar28 + fVar23 + fVar34 * fVar41,
                                    fVar30 * fVar28 + fVar24 + fVar33 * fVar41);
                  fVar21 = fVar32 * fVar28 + fVar26 + fVar29 * fVar41;
                }
                else {
                  fVar28 = fVar47 / (fVar47 + (fVar42 - fVar48));
                  fVar41 = 1.0 - fVar28;
                  uVar22 = CONCAT44(fVar36 + (fVar39 - fVar36) * fVar28,
                                    fVar35 + (fVar37 - fVar35) * fVar28);
                  fVar21 = fVar21 + (fVar40 - fVar21) * fVar28;
                }
                goto LAB_10a123bbc;
              }
              fVar28 = fVar43 / (fVar43 - fVar48);
              fVar27 = 1.0 - fVar28;
              uVar25 = CONCAT44(fVar23 + fVar31 * fVar28,fVar24 + fVar30 * fVar28);
              fVar26 = fVar26 + fVar32 * fVar28;
            }
            else {
              fVar27 = 1.0;
              fVar28 = 0.0;
            }
            fVar41 = 0.0;
            uVar22 = uVar25;
            fVar21 = fVar26;
LAB_10a123bbc:
            fVar17 = fVar17 - (float)uVar22;
            fVar18 = fVar18 - (float)((ulong)uVar22 >> 0x20);
            fVar17 = fVar17 * fVar17 + fVar18 * fVar18 + (fVar19 - fVar21) * (fVar19 - fVar21);
            if (fVar17 < *param_3) {
              *param_3 = fVar17;
              uVar22 = *(undefined8 *)piVar8;
              *(int *)(param_4 + 1) = piVar8[2];
              *param_4 = uVar22;
              *(float *)((long)param_4 + 0xc) = fVar27;
              *(float *)(param_4 + 2) = fVar41;
              *(float *)((long)param_4 + 0x14) = fVar28;
            }
            return;
          }
        }
        break;
      }
      FUN_10a12392c(param_1,param_2,param_3,param_4,pfVar16[6]);
      uVar9 = (ulong)(int)pfVar16[7];
      lVar11 = param_1[2];
      uVar13 = (param_1[3] - lVar11 >> 2) * -0x71c71c71c71c71c7;
    } while (uVar9 <= uVar13 && uVar13 - uVar9 != 0);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a123a48);
  (*pcVar4)();
}



/* Entry: 10a12392c; end: 10a123d37;  */

void FUN_10a12392c(undefined8 *param_1,undefined8 *param_2,float *param_3,undefined8 *param_4,
                  int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
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
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  
  lVar7 = param_1[2];
  uVar9 = (param_1[3] - lVar7 >> 2) * -0x71c71c71c71c71c7;
  if ((ulong)(long)param_5 <= uVar9 && uVar9 - (long)param_5 != 0) {
    uVar9 = (ulong)param_5;
    do {
      pfVar13 = (float *)(lVar7 + uVar9 * 0x24);
      uVar18 = NEON_rev64(*(undefined8 *)(pfVar13 + 2),4);
      fVar17 = (float)((ulong)uVar18 >> 0x20);
      uVar9 = CONCAT44(fVar17,*pfVar13);
      fVar15 = (float)((ulong)*param_2 >> 0x20);
      fVar14 = pfVar13[1];
      if (pfVar13[1] <= fVar15) {
        fVar14 = fVar15;
      }
      fVar16 = *(float *)(param_2 + 1);
      fVar21 = pfVar13[4];
      if (fVar14 <= pfVar13[4]) {
        fVar21 = fVar14;
      }
      fVar14 = (float)*param_2;
      uVar9 = uVar9 ^ (uVar9 ^ CONCAT44(fVar16,fVar14)) &
                      ~CONCAT44(-(uint)(fVar16 < fVar17),-(uint)(fVar14 < *pfVar13));
      uVar19 = CONCAT44(pfVar13[5],(float)uVar18);
      uVar19 = uVar19 ^ (uVar19 ^ uVar9) &
                        ~CONCAT44(-(uint)(pfVar13[5] < (float)(uVar9 >> 0x20)),
                                  -(uint)((float)uVar18 < (float)uVar9));
      fVar17 = (float)uVar19 - fVar14;
      fVar20 = (float)(uVar19 >> 0x20) - fVar16;
      if (*param_3 < fVar17 * fVar17 + (fVar21 - fVar15) * (fVar21 - fVar15) + fVar20 * fVar20) {
        return;
      }
      fVar17 = pfVar13[8];
      if (-1 < (int)fVar17) {
        lVar7 = *(long *)param_1[1];
        uVar9 = (((long *)param_1[1])[1] - lVar7 >> 2) * -0x5555555555555555;
        if ((uint)fVar17 <= uVar9 && uVar9 - (uint)fVar17 != 0) {
          piVar8 = (int *)(lVar7 + (ulong)(uint)fVar17 * 0xc);
          iVar1 = *piVar8;
          lVar7 = *(long *)*param_1;
          uVar9 = (((long *)*param_1)[1] - lVar7 >> 2) * -0x5555555555555555;
          if ((((ulong)(long)iVar1 <= uVar9 && uVar9 - (long)iVar1 != 0) &&
              (iVar2 = piVar8[1], (ulong)(long)iVar2 <= uVar9 && uVar9 - (long)iVar2 != 0)) &&
             (iVar3 = piVar8[2], (ulong)(long)iVar3 <= uVar9 && uVar9 - (long)iVar3 != 0)) {
            puVar11 = (undefined8 *)(lVar7 + (long)iVar1 * 0xc);
            puVar12 = (undefined8 *)(lVar7 + (long)iVar2 * 0xc);
            puVar10 = (undefined8 *)(lVar7 + (long)iVar3 * 0xc);
            fVar17 = *(float *)(puVar12 + 1);
            fVar23 = *(float *)(puVar11 + 1);
            fVar26 = fVar17 - fVar23;
            uVar18 = *puVar12;
            uVar22 = *puVar11;
            fVar21 = (float)uVar22;
            fVar32 = (float)uVar18;
            fVar30 = fVar32 - fVar21;
            fVar20 = (float)((ulong)uVar22 >> 0x20);
            fVar33 = (float)((ulong)uVar18 >> 0x20);
            fVar31 = fVar33 - fVar20;
            uVar35 = *puVar10;
            fVar34 = (float)uVar35;
            fVar27 = fVar34 - fVar21;
            fVar36 = (float)((ulong)uVar35 >> 0x20);
            fVar28 = fVar36 - fVar20;
            fVar37 = *(float *)(puVar10 + 1);
            fVar29 = fVar37 - fVar23;
            fVar41 = fVar30 * (fVar14 - fVar21) + fVar31 * (fVar15 - fVar20) +
                     fVar26 * (fVar16 - fVar23);
            fVar40 = (fVar14 - fVar21) * fVar27 + (fVar15 - fVar20) * fVar28 +
                     (fVar16 - fVar23) * fVar29;
            if ((0.0 < fVar41) || (0.0 < fVar40)) {
              fVar42 = (fVar14 - fVar32) * fVar30 + (fVar15 - fVar33) * fVar31 +
                       (fVar16 - fVar17) * fVar26;
              fVar44 = (fVar14 - fVar32) * fVar27 + (fVar15 - fVar33) * fVar28 +
                       (fVar16 - fVar17) * fVar29;
              fVar38 = 1.0;
              fVar25 = 0.0;
              bVar5 = false;
              bVar6 = true;
              if (0.0 <= fVar42) {
                bVar5 = false;
                bVar6 = true;
                if (!NAN(fVar44) && !NAN(fVar42)) {
                  bVar5 = fVar44 == fVar42;
                  bVar6 = fVar42 <= fVar44;
                }
              }
              if (!bVar6 || bVar5) {
                fVar24 = 0.0;
                goto LAB_10a123bbc;
              }
              fVar43 = -(fVar42 * fVar40) + fVar44 * fVar41;
              if (((fVar42 <= 0.0) && (0.0 <= fVar41)) && (fVar43 <= 0.0)) {
                fVar38 = fVar41 / (fVar41 - fVar42);
                fVar24 = 1.0 - fVar38;
                uVar18 = CONCAT44(fVar20 + fVar31 * fVar38,fVar21 + fVar30 * fVar38);
                fVar17 = fVar23 + fVar26 * fVar38;
                goto LAB_10a123bbc;
              }
              fVar39 = fVar30 * (fVar14 - fVar34) + fVar31 * (fVar15 - fVar36) +
                       fVar26 * (fVar16 - fVar37);
              fVar45 = fVar27 * (fVar14 - fVar34) + fVar28 * (fVar15 - fVar36) +
                       fVar29 * (fVar16 - fVar37);
              fVar24 = 0.0;
              fVar25 = 1.0;
              bVar5 = false;
              bVar6 = true;
              if (0.0 <= fVar45) {
                bVar5 = false;
                bVar6 = true;
                if (!NAN(fVar39) && !NAN(fVar45)) {
                  bVar5 = fVar39 == fVar45;
                  bVar6 = fVar45 <= fVar39;
                }
              }
              if (!bVar6 || bVar5) {
                fVar38 = 0.0;
                uVar18 = uVar35;
                fVar17 = fVar37;
                goto LAB_10a123bbc;
              }
              fVar38 = -(fVar41 * fVar45) + fVar40 * fVar39;
              if (((0.0 < fVar45) || (0.0 < fVar38)) || (fVar40 < 0.0)) {
                fVar40 = -(fVar39 * fVar44) + fVar45 * fVar42;
                if (((0.0 < fVar40) || (fVar44 = fVar44 - fVar42, fVar44 < 0.0)) ||
                   (fVar39 - fVar45 < 0.0)) {
                  fVar25 = 1.0 / (fVar43 + fVar40 + fVar38);
                  fVar38 = fVar38 * fVar25;
                  fVar25 = fVar43 * fVar25;
                  fVar24 = (1.0 - fVar38) - fVar25;
                  uVar18 = CONCAT44(fVar28 * fVar25 + fVar20 + fVar31 * fVar38,
                                    fVar27 * fVar25 + fVar21 + fVar30 * fVar38);
                  fVar17 = fVar29 * fVar25 + fVar23 + fVar26 * fVar38;
                }
                else {
                  fVar25 = fVar44 / (fVar44 + (fVar39 - fVar45));
                  fVar38 = 1.0 - fVar25;
                  uVar18 = CONCAT44(fVar33 + (fVar36 - fVar33) * fVar25,
                                    fVar32 + (fVar34 - fVar32) * fVar25);
                  fVar17 = fVar17 + (fVar37 - fVar17) * fVar25;
                }
                goto LAB_10a123bbc;
              }
              fVar25 = fVar40 / (fVar40 - fVar45);
              fVar24 = 1.0 - fVar25;
              uVar22 = CONCAT44(fVar20 + fVar28 * fVar25,fVar21 + fVar27 * fVar25);
              fVar23 = fVar23 + fVar29 * fVar25;
            }
            else {
              fVar24 = 1.0;
              fVar25 = 0.0;
            }
            fVar38 = 0.0;
            uVar18 = uVar22;
            fVar17 = fVar23;
LAB_10a123bbc:
            fVar14 = fVar14 - (float)uVar18;
            fVar15 = fVar15 - (float)((ulong)uVar18 >> 0x20);
            fVar14 = fVar14 * fVar14 + fVar15 * fVar15 + (fVar16 - fVar17) * (fVar16 - fVar17);
            if (fVar14 < *param_3) {
              *param_3 = fVar14;
              uVar18 = *(undefined8 *)piVar8;
              *(int *)(param_4 + 1) = piVar8[2];
              *param_4 = uVar18;
              *(float *)((long)param_4 + 0xc) = fVar24;
              *(float *)(param_4 + 2) = fVar38;
              *(float *)((long)param_4 + 0x14) = fVar25;
            }
            return;
          }
        }
        break;
      }
      FUN_10a12392c(param_1,param_2,param_3,param_4,pfVar13[6]);
      uVar9 = (ulong)(int)pfVar13[7];
      lVar7 = param_1[2];
      uVar19 = (param_1[3] - lVar7 >> 2) * -0x71c71c71c71c71c7;
    } while (uVar9 <= uVar19 && uVar19 - uVar9 != 0);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10a123a48);
  (*pcVar4)();
}



/* Entry: 10a123d38; end: 10a123dbf;  */

void FUN_10a123d38(long param_1)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  undefined1 auVar3 [16];
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  
  pauVar1 = *(undefined1 (**) [16])(param_1 + 0x28);
  if (pauVar1 != *(undefined1 (**) [16])(param_1 + 0x30)) {
    lVar2 = (long)*(undefined1 (**) [16])(param_1 + 0x30) - (long)pauVar1 >> 4;
    auVar3._8_4_ = 0xff7fffff;
    auVar3._0_8_ = 0xff7fffffff7fffff;
    auVar3._12_4_ = 0xff7fffff;
    auVar5._8_4_ = 0x7f7fffff;
    auVar5._0_8_ = 0x7f7fffff7f7fffff;
    auVar5._12_4_ = 0x7f7fffff;
    do {
      auVar5 = NEON_fmin(auVar5,*pauVar1,4);
      auVar3 = NEON_fmax(auVar3,*pauVar1,4);
      lVar2 = lVar2 + -1;
      pauVar1 = pauVar1 + 1;
    } while (lVar2 != 0);
    fVar6 = (auVar5._0_4_ + auVar3._0_4_) * 0.5;
    fVar7 = (auVar5._4_4_ + auVar3._4_4_) * 0.5;
    fVar4 = (auVar5._8_4_ + auVar3._8_4_) * 0.5;
    *(float *)(param_1 + 0x4c) = fVar6;
    *(ulong *)(param_1 + 0x58) = CONCAT44(auVar3._4_4_ - fVar7,auVar3._0_4_ - fVar6);
    *(ulong *)(param_1 + 0x50) = CONCAT44(fVar4,fVar7);
    *(float *)(param_1 + 0x60) = auVar3._8_4_ - fVar4;
    return;
  }
  *(undefined8 *)(param_1 + 0x54) = 0xff7fffff00000000;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0xff7fffffff7fffff;
  return;
}



/* Entry: 10a123dc0; end: 10a1240c7;  */

undefined8 *
FUN_10a123dc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  long *plStack_68;
  
  puVar5 = param_1;
  FUN_10a1240c8(param_1,param_3,param_4,param_5);
  *puVar5 = &PTR_DAT_110ba6118;
  puVar5[0xe] = 0;
  puVar5[0xd] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  lVar6 = (long)((int)param_4 * (int)param_3);
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  FUN_10a124180(puVar5 + 0xd,lVar6);
  func_0x00010a1242d4(param_1 + 0x10,lVar6);
  func_0x00010a1242d4(param_1 + 0x13,lVar6);
  func_0x00010a1242d4(param_1 + 0x16,lVar6);
  FUN_10a124428(auStack_70,param_2,param_3,param_4,0x22);
  FUN_10a02bf24(param_1 + 0x19,auStack_70);
  plVar2 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  FUN_10a124428(auStack_70,param_2,param_3,param_4,0x21);
  FUN_10a02bf24(param_1 + 0x1b,auStack_70);
  plVar2 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  FUN_10a124428(auStack_70,param_2,param_3,param_4,0x29);
  FUN_10a02bf24(param_1 + 0x1d,auStack_70);
  plVar2 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  FUN_10a124428(auStack_70,param_2,param_3,param_4,4);
  FUN_10a02bf24(param_1 + 0x1f,auStack_70);
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  return param_1;
}



/* Entry: 10a1240c8; end: 10a12417f;  */

undefined8 * FUN_10a1240c8(undefined8 *param_1,int param_2,int param_3,undefined1 param_4)

{
  code *pcVar1;
  
  *param_1 = &PTR_FUN_110ba6f08;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(int *)(param_1 + 8) = param_2;
  *(int *)((long)param_1 + 0x44) = param_3;
  *(undefined1 *)(param_1 + 9) = param_4;
  *(undefined2 *)((long)param_1 + 0x49) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0xff7fffff00000000;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0xff7fffffff7fffff;
  if ((param_3 - 1U | param_2 - 1U) < 0x1000) {
    return param_1;
  }
  FUN_10a00946c(&UNK_10f63b8ac);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10a124160);
  (*pcVar1)();
}



/* Entry: 10a124180; end: 10a124427;  */

void FUN_10a124180(long *param_1,undefined *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  char cVar8;
  bool bVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined **ppuVar14;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined *puVar18;
  undefined8 *puVar19;
  undefined4 *puVar20;
  ulong uVar21;
  long lVar22;
  long lStack_110;
  long *plStack_108;
  undefined *puStack_100;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined8 uStack_e4;
  undefined1 uStack_dc;
  undefined8 uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  long *plStack_b8;
  undefined1 **ppuStack_b0;
  code *pcStack_a8;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  
  lVar17 = *param_1;
  lVar22 = param_1[1];
  puVar18 = (undefined *)(lVar22 - lVar17 >> 3);
  if (param_2 <= puVar18) {
    if (puVar18 <= param_2) {
      return;
    }
    lVar22 = lVar17 + (long)param_2 * 8;
LAB_10a124294:
    param_1[1] = lVar22;
    return;
  }
  uVar21 = (long)param_2 - (long)puVar18;
  if (uVar21 <= (ulong)(param_1[2] - lVar22 >> 3)) {
    _bzero(lVar22,uVar21 * 8);
    lVar22 = lVar22 + uVar21 * 8;
    goto LAB_10a124294;
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    uVar15 = param_1[2] - lVar17;
    puVar18 = (undefined *)((long)uVar15 >> 2);
    if (puVar18 <= param_2) {
      puVar18 = param_2;
    }
    if (0x7ffffffffffffff7 < uVar15) {
      puVar18 = (undefined *)0x1fffffffffffffff;
    }
    uVar15 = (long)puVar18 * 8 + 8;
    _malloc();
    if (uVar15 != 0) {
      puVar16 = (ulong *)(uVar15 & 0xfffffffffffffff8) + 1;
      *(ulong *)(uVar15 & 0xfffffffffffffff8) = uVar15;
      if (puVar16 != (ulong *)0x0) {
        puVar3 = (undefined8 *)*param_1;
        puVar6 = (undefined8 *)param_1[1];
        lVar22 = (long)puVar16 + (lVar22 - lVar17);
        _bzero(lVar22,uVar21 * 8);
        puVar1 = (undefined8 *)((long)puVar3 + (lVar22 - (long)puVar6));
        puVar10 = puVar1;
        for (puVar19 = puVar3; puVar6 != puVar19; puVar19 = puVar19 + 1) {
          *puVar10 = *puVar19;
          puVar10 = puVar10 + 1;
        }
        *param_1 = (long)puVar1;
        param_1[1] = lVar22 + uVar21 * 8;
        param_1[2] = (long)(puVar16 + (long)puVar18);
        if (puVar3 == (undefined8 *)0x0) {
          return;
        }
        uVar12 = puVar3[-1];
        goto _free;
      }
    }
    param_1 = (long *)0x8;
    ___cxa_allocate_exception();
    __ZNSt9bad_allocC1Ev();
    param_2 = PTR___ZTISt9bad_alloc_110346a68;
    puVar18 = PTR___ZNSt9bad_allocD1Ev_110346998;
    ___cxa_throw();
    param_3 = SUB84(puVar18,0);
  }
  FUN_10a1328c0();
  uStack_58 = 0x10a1242d4;
  lVar4 = *param_1;
  lVar17 = param_1[1];
  lVar22 = lVar17 - lVar4;
  puVar18 = (undefined *)(lVar22 >> 2);
  if (puVar18 < param_2) {
    uVar21 = (long)param_2 - (long)puVar18;
    puStack_60 = &stack0xfffffffffffffff0;
    if ((ulong)(param_1[2] - lVar17 >> 2) < uVar21) {
      plVar13 = param_1;
      if ((ulong)param_2 >> 0x3e == 0) {
        uVar15 = param_1[2] - lVar4;
        puVar18 = (undefined *)((long)uVar15 >> 1);
        if (puVar18 <= param_2) {
          puVar18 = param_2;
        }
        if (0x7ffffffffffffffb < uVar15) {
          puVar18 = (undefined *)0x3fffffffffffffff;
        }
        uVar15 = (long)puVar18 * 4 + 8;
        _malloc();
        if (uVar15 != 0) {
          puVar16 = (ulong *)(uVar15 & 0xfffffffffffffff8) + 1;
          *(ulong *)(uVar15 & 0xfffffffffffffff8) = uVar15;
          if (puVar16 != (ulong *)0x0) {
            puVar5 = (undefined4 *)*param_1;
            puVar7 = (undefined4 *)param_1[1];
            lVar22 = (long)puVar16 + lVar22;
            _bzero(lVar22,uVar21 * 4);
            puVar2 = (undefined4 *)((long)puVar5 + (lVar22 - (long)puVar7));
            puVar11 = puVar2;
            for (puVar20 = puVar5; puVar7 != puVar20; puVar20 = puVar20 + 1) {
              *puVar11 = *puVar20;
              puVar11 = puVar11 + 1;
            }
            *param_1 = (long)puVar2;
            param_1[1] = lVar22 + uVar21 * 4;
            param_1[2] = (long)puVar16 + (long)puVar18 * 4;
            if (puVar5 == (undefined4 *)0x0) {
              return;
            }
            uVar12 = *(undefined8 *)(puVar5 + -2);
_free:
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__free_11034c310)(uVar12);
            return;
          }
        }
        plVar13 = (long *)0x8;
        ___cxa_allocate_exception();
        __ZNSt9bad_allocC1Ev();
        param_2 = PTR___ZTISt9bad_alloc_110346a68;
        puVar18 = PTR___ZNSt9bad_allocD1Ev_110346998;
        ___cxa_throw();
        param_3 = SUB84(puVar18,0);
      }
      func_0x00010a1328d4();
      pcStack_a8 = FUN_10a124428;
      ppuVar14 = &PTR___tlv_bootstrap_11340de10;
      puStack_100 = param_2;
      lStack_d0 = lVar22;
      uStack_c8 = uVar21;
      lStack_c0 = lVar17;
      plStack_b8 = param_1;
      ppuStack_b0 = &puStack_60;
      (*(code *)PTR___tlv_bootstrap_11340de10)();
      if (*ppuVar14 == (undefined *)0x0) {
        *plVar13 = 0;
        plVar13[1] = 0;
      }
      else {
        FUN_10a2421c8();
        uStack_d8 = 0x100000000;
        uStack_ec = 1;
        uStack_e4 = 0x100000000;
        uStack_dc = 0;
        uStack_f4 = param_3;
        uStack_f0 = param_4;
        uStack_e8 = param_5;
        FUN_10a048f04(&lStack_110,*(undefined8 *)(param_2 + 0x1e0),&uStack_f4);
        *(undefined1 *)(lStack_110 + 0x19) = 1;
        FUN_10a1328e8(plVar13,&uStack_f4,&puStack_100,&lStack_110);
        if (plStack_108 != (long *)0x0) {
          plVar13 = plStack_108 + 1;
          do {
            lVar22 = *plVar13;
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar9) {
              *plVar13 = lVar22 + -1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          if (lVar22 == 0) {
            (**(code **)(*plStack_108 + 0x10))(plStack_108);
            __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_108);
          }
        }
      }
      return;
    }
    _bzero(lVar17,uVar21 * 4);
    lVar17 = lVar17 + uVar21 * 4;
  }
  else {
    if (puVar18 <= param_2) {
      return;
    }
    lVar17 = lVar4 + (long)param_2 * 4;
  }
  param_1[1] = lVar17;
  return;
}



/* Entry: 10a124428; end: 10a124523;  */

void FUN_10a124428(undefined8 *param_1,long param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined **ppuVar4;
  long lVar5;
  long lStack_70;
  long *plStack_68;
  long lStack_60;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  undefined1 uStack_3c;
  undefined8 uStack_38;
  
  ppuVar4 = &PTR___tlv_bootstrap_11340de10;
  lStack_60 = param_2;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  if (*ppuVar4 == (undefined *)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_10a2421c8();
    uStack_38 = 0x100000000;
    uStack_4c = 1;
    uStack_44 = 0x100000000;
    uStack_3c = 0;
    uStack_54 = param_3;
    uStack_50 = param_4;
    uStack_48 = param_5;
    FUN_10a048f04(&lStack_70,*(undefined8 *)(param_2 + 0x1e0),&uStack_54);
    *(undefined1 *)(lStack_70 + 0x19) = 1;
    FUN_10a1328e8(param_1,&uStack_54,&lStack_60,&lStack_70);
    if (plStack_68 != (long *)0x0) {
      plVar1 = plStack_68 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*plStack_68 + 0x10))(plStack_68);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
      }
    }
  }
  return;
}



/* Entry: 10a124524; end: 10a124a67;  */

long FUN_10a124524(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar2 = *param_1;
  uVar8 = uVar2 >> 0x10 & 0x8000;
  uVar4 = uVar2 >> 0x17 & 0xff;
  uVar10 = uVar2 & 0x7fffff;
  uVar3 = uVar4 - 0x70;
  if (uVar4 < 0x70 || uVar3 == 0) {
    uVar10 = (uVar10 | 0x800000) >> (ulong)(0x71 - uVar4 & 0x1f);
    if (0x65 < uVar4) {
      uVar8 = uVar8 | (uVar10 & 0x1000) * 2 + uVar10 >> 0xd;
    }
  }
  else if (uVar3 == 0x8f) {
    uVar2 = (uint)(uVar10 < 0x2000) | uVar10 >> 0xd | uVar8;
    if (uVar10 == 0) {
      uVar2 = uVar8;
    }
    uVar8 = uVar2 | 0x7c00;
  }
  else {
    uVar5 = uVar10 + 0x2000;
    uVar6 = uVar3;
    if (0x7fdfff < uVar10) {
      uVar5 = 0;
      uVar6 = uVar4 - 0x6f;
    }
    if ((uVar2 & 0x1000) != 0) {
      uVar10 = uVar5;
      uVar3 = uVar6;
    }
    if (uVar3 < 0x1f) {
      uVar8 = uVar3 << 10 | uVar10 >> 0xd | uVar8;
    }
    else {
      iVar9 = 10;
      do {
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      uVar8 = uVar8 | 0x7c00;
    }
  }
  uVar3 = param_1[1];
  uVar10 = uVar3 >> 0x10 & 0x8000;
  uVar5 = uVar3 >> 0x17 & 0xff;
  uVar2 = uVar3 & 0x7fffff;
  uVar4 = uVar5 - 0x70;
  if (uVar5 < 0x70 || uVar4 == 0) {
    uVar2 = (uVar2 | 0x800000) >> (ulong)(0x71 - uVar5 & 0x1f);
    if (0x65 < uVar5) {
      uVar10 = uVar10 | (uVar2 & 0x1000) * 2 + uVar2 >> 0xd;
    }
  }
  else if (uVar4 == 0x8f) {
    uVar3 = (uint)(uVar2 < 0x2000) | uVar2 >> 0xd | uVar10;
    if (uVar2 == 0) {
      uVar3 = uVar10;
    }
    uVar10 = uVar3 | 0x7c00;
  }
  else {
    uVar6 = uVar2 + 0x2000;
    uVar1 = uVar4;
    if (0x7fdfff < uVar2) {
      uVar6 = 0;
      uVar1 = uVar5 - 0x6f;
    }
    if ((uVar3 & 0x1000) != 0) {
      uVar2 = uVar6;
      uVar4 = uVar1;
    }
    if (uVar4 < 0x1f) {
      uVar10 = uVar4 << 10 | uVar2 >> 0xd | uVar10;
    }
    else {
      iVar9 = 10;
      do {
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      uVar10 = uVar10 | 0x7c00;
    }
  }
  uVar4 = param_1[2];
  uVar2 = uVar4 >> 0x10 & 0x8000;
  uVar6 = uVar4 >> 0x17 & 0xff;
  uVar3 = uVar4 & 0x7fffff;
  uVar5 = uVar6 - 0x70;
  if (uVar6 < 0x70 || uVar5 == 0) {
    uVar3 = (uVar3 | 0x800000) >> (ulong)(0x71 - uVar6 & 0x1f);
    if (0x65 < uVar6) {
      uVar2 = uVar2 | (uVar3 & 0x1000) * 2 + uVar3 >> 0xd;
    }
    uVar11 = (ulong)uVar2;
  }
  else if (uVar5 == 0x8f) {
    uVar4 = (uint)(uVar3 < 0x2000) | uVar3 >> 0xd | uVar2;
    if (uVar3 == 0) {
      uVar4 = uVar2;
    }
    uVar11 = (ulong)(uVar4 | 0x7c00);
  }
  else {
    uVar1 = uVar3 + 0x2000;
    uVar7 = uVar5;
    if (0x7fdfff < uVar3) {
      uVar1 = 0;
      uVar7 = uVar6 - 0x6f;
    }
    if ((uVar4 & 0x1000) != 0) {
      uVar3 = uVar1;
      uVar5 = uVar7;
    }
    if (uVar5 < 0x1f) {
      uVar11 = (ulong)(uVar5 << 10 | uVar3 >> 0xd | uVar2);
    }
    else {
      iVar9 = 10;
      do {
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      uVar11 = (ulong)(uVar2 | 0x7c00);
    }
  }
  uVar4 = param_1[3];
  uVar2 = uVar4 >> 0x10 & 0x8000;
  uVar12 = (ulong)uVar2;
  uVar6 = uVar4 >> 0x17 & 0xff;
  uVar3 = uVar4 & 0x7fffff;
  uVar5 = uVar6 - 0x70;
  if (uVar6 < 0x70 || uVar5 == 0) {
    if (0x65 < uVar6) {
      uVar3 = (uVar3 | 0x800000) >> (ulong)(0x71 - uVar6 & 0x1f);
      uVar12 = (ulong)(uVar2 | (uVar3 & 0x1000) * 2 + uVar3 >> 0xd);
    }
  }
  else {
    if (uVar5 == 0x8f) {
      if (uVar3 != 0) {
        uVar12 = (ulong)((uint)(uVar3 < 0x2000) | uVar3 >> 0xd | uVar2 | 0x7c00);
        goto LAB_10a124890;
      }
    }
    else {
      uVar1 = uVar3 + 0x2000;
      uVar7 = uVar5;
      if (0x7fdfff < uVar3) {
        uVar1 = 0;
        uVar7 = uVar6 - 0x6f;
      }
      if ((uVar4 & 0x1000) != 0) {
        uVar3 = uVar1;
        uVar5 = uVar7;
      }
      if (uVar5 < 0x1f) {
        uVar12 = (ulong)(uVar5 << 10 | uVar3 >> 0xd | uVar2);
        goto LAB_10a124890;
      }
      iVar9 = 10;
      do {
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    uVar12 = (ulong)(uVar2 | 0x7c00);
  }
LAB_10a124890:
  return ((uVar12 << 0x30) + (uVar11 << 0x20) | (ulong)(uVar10 << 0x10)) + (ulong)uVar8;
}



/* Entry: 10a124a68; end: 10a124b07;  */

void FUN_10a124a68(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9,
                  long param_10)

{
  if (param_3 != 0) {
    _memmove(*(undefined8 *)(param_1 + 0x68),param_2,param_3 << 3);
  }
  if (param_5 != 0) {
    _memmove(*(undefined8 *)(param_1 + 0x80),param_4,param_5 << 2);
  }
  if (param_7 != 0) {
    _memmove(*(undefined8 *)(param_1 + 0x98),param_6,param_7 << 2);
  }
  if (param_10 != 0) {
    _memmove(*(undefined8 *)(param_1 + 0xb0),param_9,param_10 << 2);
  }
  *(undefined1 *)(param_1 + 0x49) = 1;
  FUN_10a123d38(param_1);
  *(undefined1 *)(param_1 + 0x4a) = 1;
  return;
}



/* Entry: 10a124b08; end: 10a124cf7;  */

void FUN_10a124b08(long param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  if (param_3 != 0) {
    lVar3 = 0;
    uVar4 = 0;
    puVar5 = (undefined4 *)(param_2 + 8);
    do {
      if ((ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) >> 4) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a124b54);
        (*pcVar2)();
      }
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar3);
      uVar6 = *(undefined4 *)(puVar1 + 1);
      *(undefined8 *)(puVar5 + -2) = *puVar1;
      *puVar5 = uVar6;
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x10;
      puVar5 = puVar5 + 3;
    } while (param_3 != uVar4);
  }
  return;
}



/* Entry: 10a124cf8; end: 10a124dd7;  */

void FUN_10a124cf8(long param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong *puVar2;
  code *pcVar3;
  undefined4 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if (param_3 != 0) {
    lVar5 = 0;
    uVar6 = 0;
    puVar7 = (undefined4 *)(param_2 + 8);
    do {
      if ((ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) >> 4) <= uVar6) {
LAB_10a124dd4:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10a124dd8);
        (*pcVar3)();
      }
      uVar8 = *puVar7;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x28) + lVar5);
      *puVar1 = *(undefined8 *)(puVar7 + -2);
      *(undefined4 *)(puVar1 + 1) = uVar8;
      *(undefined4 *)((long)puVar1 + 0xc) = 0x3f800000;
      uStack_44 = 0;
      uStack_50 = puVar7[-2];
      uStack_4c = puVar7[-1];
      uStack_48 = *puVar7;
      puVar4 = &uStack_50;
      FUN_10a124524();
      if ((ulong)(*(long *)(param_1 + 0x70) - *(long *)(param_1 + 0x68) >> 3) <= uVar6)
      goto LAB_10a124dd4;
      puVar2 = (ulong *)(*(long *)(param_1 + 0x68) + uVar6 * 8);
      *puVar2 = (ulong)puVar4 & 0xffffffffffff | (ulong)*(ushort *)((long)puVar2 + 6) << 0x30;
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x10;
      puVar7 = puVar7 + 3;
    } while (param_3 != uVar6);
  }
  *(undefined1 *)(param_1 + 0x49) = 1;
  FUN_10a123d38(param_1);
  *(undefined1 *)(param_1 + 0x4a) = 1;
  return;
}



/* Entry: 10a124dd8; end: 10a124ebb;  */

void FUN_10a124dd8(long param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uStack_38;
  
  if (param_3 != 0) {
    uVar4 = 0;
    puVar5 = (undefined8 *)(param_2 + 4);
    do {
      if ((ulong)(*(long *)(param_1 + 0x70) - *(long *)(param_1 + 0x68) >> 3) <= uVar4) {
LAB_10a124eb8:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a124ebc);
        (*pcVar1)();
      }
      *(float2 *)(*(long *)(param_1 + 0x68) + uVar4 * 8 + 6) = (float2)*(float *)((long)puVar5 + -4)
      ;
      uStack_38 = *puVar5;
      uVar2 = SUB84(&uStack_38,0);
      func_0x00010a1248ac();
      if ((ulong)(*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80) >> 2) <= uVar4)
      goto LAB_10a124eb8;
      *(undefined4 *)(*(long *)(param_1 + 0x80) + uVar4 * 4) = uVar2;
      uVar4 = uVar4 + 1;
      puVar5 = (undefined8 *)((long)puVar5 + 0xc);
    } while (param_3 != uVar4);
  }
  plVar3 = *(long **)(*(long *)(param_1 + 200) + 0x288);
  (**(code **)(*plVar3 + 0x98))(plVar3,*(undefined8 *)(param_1 + 0x68),0,0);
  plVar3 = *(long **)(*(long *)(param_1 + 0xd8) + 0x288);
  (**(code **)(*plVar3 + 0x98))(plVar3,*(undefined8 *)(param_1 + 0x80),0,0);
  *(undefined1 *)(param_1 + 0x49) = 1;
  FUN_10a123d38(param_1);
  *(undefined1 *)(param_1 + 0x4a) = 1;
  return;
}



/* Entry: 10a124ebc; end: 10a125037;  */

void FUN_10a124ebc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  
  FUN_10a008238(param_2,*(undefined8 *)(param_1 + 0x98),param_3,*(undefined1 *)(param_1 + 0x48));
  plVar1 = *(long **)(*(long *)(param_1 + 0xe8) + 0x288);
  (**(code **)(*plVar1 + 0x98))(plVar1,*(undefined8 *)(param_1 + 0x98),0,0);
  *(undefined1 *)(param_1 + 0x49) = 1;
  FUN_10a123d38(param_1);
  *(undefined1 *)(param_1 + 0x4a) = 1;
  return;
}



/* Entry: 10a125038; end: 10a12521f;  */

undefined8 *
FUN_10a125038(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  long *plStack_68;
  
  puVar5 = param_1;
  FUN_10a1240c8(param_1,param_3,param_4,param_5);
  *puVar5 = &PTR_FUN_110ba6148;
  puVar5[0xe] = 0;
  puVar5[0xd] = 0;
  puVar5[0x14] = 0;
  puVar5[0x13] = 0;
  puVar5[0x16] = 0;
  puVar5[0x15] = 0;
  puVar5[0x18] = 0;
  puVar5[0x17] = 0;
  lVar6 = (long)((int)param_4 * (int)param_3);
  puVar5[0x10] = 0;
  puVar5[0xf] = 0;
  puVar5[0x12] = 0;
  puVar5[0x11] = 0;
  FUN_10a124180(puVar5 + 0xd,lVar6);
  func_0x00010a1242d4(param_1 + 0x10,lVar6);
  FUN_10a124428(auStack_70,param_2,param_3,param_4,0x22);
  FUN_10a02bf24(puVar5 + 0x13,auStack_70);
  plVar2 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    plVar1 = plStack_68 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar2);
    }
  }
  FUN_10a124428(auStack_70,param_2,param_3,param_4,0x29);
  FUN_10a02bf24(puVar5 + 0x15,auStack_70);
  if (plStack_68 != (long *)0x0) {
    plVar2 = plStack_68 + 1;
    do {
      lVar6 = *plVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plStack_68 + 0x10))(plStack_68);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plStack_68);
    }
  }
  return param_1;
}



/* Entry: 10a125220; end: 10a1252e3;  */

undefined8 FUN_10a125220(long param_1)

{
  undefined **ppuVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [48];
  
  ppuVar1 = &PTR___tlv_bootstrap_11340de10;
  (*(code *)PTR___tlv_bootstrap_11340de10)();
  if ((*ppuVar1 == (undefined *)0x0) || (*(char *)(param_1 + 0x49) != '\x01')) {
    uVar3 = 0;
  }
  else {
    FUN_10a13299c(auStack_50,&UNK_10f63dd3a);
    plVar2 = *(long **)(*(long *)(param_1 + 0x98) + 0x288);
    (**(code **)(*plVar2 + 0x98))(plVar2,*(undefined8 *)(param_1 + 0x68),0,0);
    plVar2 = *(long **)(*(long *)(param_1 + 0xa8) + 0x288);
    (**(code **)(*plVar2 + 0x98))(plVar2,*(undefined8 *)(param_1 + 0x80),0,0);
    *(undefined1 *)(param_1 + 0x49) = 0;
    FUN_10a144868(auStack_50);
    uVar3 = 1;
  }
  return uVar3;
}



/* Entry: 10a1252e4; end: 10a1253af;  */

void FUN_10a1252e4(long param_1,int param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  undefined8 uStack_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puVar3 = &uStack_40;
  uVar4 = (ulong)param_2;
  if (uVar4 < (ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) >> 4)) {
    fVar5 = *(float *)(param_3 + 1);
    fVar6 = *(float *)(param_4 + 1);
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x28) + uVar4 * 0x10);
    *puVar1 = CONCAT44((float)((ulong)*param_3 >> 0x20) + (float)((ulong)*param_4 >> 0x20),
                       (float)*param_3 + (float)*param_4);
    *(float *)(puVar1 + 1) = fVar5 + fVar6;
    *(undefined4 *)((long)puVar1 + 0xc) = 0x3f800000;
    uStack_40 = *param_4;
    uStack_38 = *(undefined4 *)(param_4 + 1);
    uStack_34 = 0;
    FUN_10a124524();
    if (uVar4 < (ulong)(*(long *)(param_1 + 0x70) - *(long *)(param_1 + 0x68) >> 3)) {
      *(undefined8 **)(*(long *)(param_1 + 0x68) + uVar4 * 8) = puVar3;
      FUN_10a007c90(param_5,*(undefined1 *)(param_1 + 0x48));
      if (uVar4 < (ulong)(*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80) >> 2)) {
        *(int *)(*(long *)(param_1 + 0x80) + uVar4 * 4) = (int)param_5;
        *(undefined1 *)(param_1 + 0x49) = 1;
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a1253b0);
  (*pcVar2)();
}



/* Entry: 10a1253b0; end: 10a1254cb;  */

void FUN_10a1253b0(long param_1,long param_2,ulong param_3,long param_4,ulong param_5,long param_6,
                  ulong param_7)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  float *pfVar5;
  float *pfVar6;
  undefined8 uVar7;
  undefined8 uStack_60;
  float fStack_58;
  undefined4 uStack_54;
  
  if (param_3 != 0) {
    uVar4 = 0;
    pfVar5 = (float *)(param_4 + 8);
    pfVar6 = (float *)(param_2 + 8);
    do {
      if ((param_5 == uVar4) ||
         ((ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28) >> 4) <= uVar4)) {
LAB_10a1254c8:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10a1254cc);
        (*pcVar1)();
      }
      fStack_58 = *pfVar5 - *pfVar6;
      uVar7 = *(undefined8 *)(pfVar5 + -2);
      uStack_60 = CONCAT44(pfVar5[-1] - (float)((ulong)*(undefined8 *)(pfVar6 + -2) >> 0x20),
                           (float)uVar7 - (float)*(undefined8 *)(pfVar6 + -2));
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x28) + uVar4 * 0x10);
      puVar2[1] = CONCAT44(0x3f800000,*pfVar5);
      *puVar2 = uVar7;
      uStack_54 = 0;
      puVar2 = &uStack_60;
      FUN_10a124524();
      if (((ulong)(*(long *)(param_1 + 0x70) - *(long *)(param_1 + 0x68) >> 3) <= uVar4) ||
         (*(undefined8 **)(*(long *)(param_1 + 0x68) + uVar4 * 8) = puVar2, param_7 == uVar4))
      goto LAB_10a1254c8;
      lVar3 = param_6;
      FUN_10a007c90(param_6,*(undefined1 *)(param_1 + 0x48));
      if ((ulong)(*(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x80) >> 2) <= uVar4)
      goto LAB_10a1254c8;
      *(int *)(*(long *)(param_1 + 0x80) + uVar4 * 4) = (int)lVar3;
      uVar4 = uVar4 + 1;
      param_6 = param_6 + 0x10;
      pfVar5 = pfVar5 + 4;
      pfVar6 = pfVar6 + 4;
    } while (param_3 != uVar4);
  }
  *(undefined1 *)(param_1 + 0x49) = 1;
  return;
}



/* Entry: 10a1254cc; end: 10a125587;  */

undefined8 * FUN_10a1254cc(undefined8 *param_1,undefined8 param_2)

{
  param_1[0xf] = &PTR___ZTv0_n24_NSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108df7b0;
  param_1[0x15] = 0;
  *param_1 = &PTR___ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED1Ev_1108df788;
  param_1[1] = 0;
  __ZNSt3__18ios_base4initEPv(param_1 + 0xf,param_1 + 2);
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0xffffffff;
  *param_1 = &PTR_DAT_1108df718;
  param_1[0xf] = &PTR_DAT_1108df740;
  FUN_10a108ad4(param_1 + 2,param_2,8);
  return param_1;
}



/* Entry: 10a125588; end: 10a1257cb;  */

long * FUN_10a125588(long *param_1,undefined8 *param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined1 *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  undefined1 auStack_50 [15];
  char cStack_41;
  
  puVar3 = auStack_50;
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE6sentryC1ERS3_b(&cStack_41,param_1,0);
  if (cStack_41 == '\x01') {
    if (*(char *)((long)param_2 + 0x17) < '\0') {
      *(undefined1 *)*param_2 = 0;
      param_2[1] = 0;
    }
    else {
      *(undefined1 *)param_2 = 0;
      *(undefined1 *)((long)param_2 + 0x17) = 0;
    }
    uVar5 = *(ulong *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x18);
    uVar8 = uVar5;
    if (0x7ffffffffffffff6 < uVar5) {
      uVar8 = 0x7ffffffffffffff7;
    }
    uVar1 = 0x7ffffffffffffff7;
    if (0 < (long)uVar5) {
      uVar1 = uVar8;
    }
    __ZNKSt3__18ios_base6getlocEv(auStack_50);
    __ZNKSt3__16locale9use_facetERNS0_2idE(auStack_50,PTR___ZNSt3__15ctypeIcE2idE_110346770);
    __ZNSt3__16localeD1Ev(auStack_50);
    if (uVar1 == 0) {
      lVar6 = *param_1;
      *(undefined8 *)((long)param_1 + *(long *)(lVar6 + -0x18) + 0x18) = 0;
      uVar2 = 4;
    }
    else {
      uVar8 = 0;
      do {
        plVar4 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28);
        if ((byte *)plVar4[3] == (byte *)plVar4[4]) {
          (**(code **)(*plVar4 + 0x48))();
          uVar2 = (uint)plVar4;
          if (uVar2 != 0xffffffff) goto LAB_10a125670;
          uVar7 = 2;
LAB_10a125708:
          lVar6 = *param_1;
          *(undefined8 *)((long)param_1 + *(long *)(lVar6 + -0x18) + 0x18) = 0;
          uVar2 = uVar7 | 4;
          if (uVar8 != 0) {
            uVar2 = uVar7;
          }
          goto LAB_10a125724;
        }
        uVar2 = (uint)*(byte *)plVar4[3];
LAB_10a125670:
        if (((uVar2 >> 7 & 1) == 0) &&
           ((*(uint *)(*(long *)(puVar3 + 0x10) + (ulong)(uVar2 & 0x7f) * 4) >> 0xe & 1) != 0)) {
          uVar7 = 0;
          goto LAB_10a125708;
        }
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE9push_backEc
                  (param_2,(int)(char)uVar2);
        plVar4 = *(long **)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x28);
        if (plVar4[3] == plVar4[4]) {
          (**(code **)(*plVar4 + 0x50))();
        }
        else {
          plVar4[3] = plVar4[3] + 1;
        }
        uVar8 = uVar8 + 1;
      } while (uVar1 != uVar8);
      lVar6 = *param_1;
      *(undefined8 *)((long)param_1 + *(long *)(lVar6 + -0x18) + 0x18) = 0;
      uVar2 = 0;
    }
LAB_10a125724:
    lVar6 = (long)param_1 + *(long *)(lVar6 + -0x18);
    __ZNSt3__18ios_base5clearEj(lVar6,*(uint *)(lVar6 + 0x20) | uVar2);
  }
  return param_1;
}



/* Entry: 10a1257cc; end: 10a1259ff;  */

void FUN_10a1257cc(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  ulong uVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  int *piVar9;
  undefined8 *puVar10;
  uint uVar11;
  long *plVar12;
  undefined1 auStack_80 [24];
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  plVar12 = (long *)*param_1;
  lVar6 = param_2;
  _strlen();
  if ((long)*(char *)((long)plVar12 + 0x17) < 0) {
    if (lVar6 != plVar12[1]) {
      return;
    }
    if (lVar6 == -1) {
      FUN_109ffddc8();
      goto LAB_10a125984;
    }
    plVar12 = (long *)*plVar12;
  }
  else if (lVar6 != *(char *)((long)plVar12 + 0x17)) {
    return;
  }
  _memcmp(plVar12,param_2);
  if ((int)plVar12 != 0) {
    return;
  }
  piVar9 = (int *)param_1[1];
  cVar3 = *(char *)((long)piVar9 + 0x17);
  if (cVar3 < '\0') {
    if (*(long *)(piVar9 + 2) == 5) {
      piVar9 = *(int **)piVar9;
      goto LAB_10a125898;
    }
    if (*(long *)(piVar9 + 2) == 7) {
      piVar9 = *(int **)piVar9;
      goto LAB_10a125874;
    }
  }
  else {
    if (cVar3 == '\x05') {
LAB_10a125898:
      iVar2 = *piVar9;
      uVar8 = (uint)*(byte *)(piVar9 + 1);
      uVar11 = 0x74;
    }
    else {
      if (cVar3 != '\a') goto LAB_10a1258d8;
LAB_10a125874:
      iVar2 = *piVar9;
      uVar8 = *(uint *)((long)piVar9 + 3);
      uVar11 = 0x32337461;
    }
    if (iVar2 == 0x616f6c66 && uVar8 == uVar11) {
      *param_3 = (int)*(undefined8 *)param_1[2];
      return;
    }
  }
LAB_10a1258d8:
  uVar7 = 0x10;
  ___cxa_allocate_exception(0x10);
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_80,&UNK_10f63e31f,*param_1);
  FUN_10a012db0(auStack_68,auStack_80,&UNK_10f63e337);
  puVar10 = (undefined8 *)param_1[1];
  uVar1 = puVar10[1];
  puVar4 = (undefined8 *)*puVar10;
  if (-1 < (char)*(byte *)((long)puVar10 + 0x17)) {
    uVar1 = (ulong)*(byte *)((long)puVar10 + 0x17);
    puVar4 = puVar10;
  }
  puVar10 = auStack_68;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm(puVar10,puVar4,uVar1)
  ;
  uStack_48 = puVar10[1];
  uStack_50 = *puVar10;
  uStack_40 = puVar10[2];
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = 0;
  __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (uVar7,&uStack_50);
  ___cxa_throw(uVar7,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
LAB_10a125984:
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10a125988);
  (*pcVar5)();
}



/* Entry: 10a125a00; end: 10a125a57;  */

long FUN_10a125a00(long param_1)

{
  long lStack_28;
  
  lStack_28 = param_1 + 0x80;
  FUN_10a0426d8(&lStack_28);
  lStack_28 = param_1 + 0x60;
  FUN_10a0426d8(&lStack_28);
  lStack_28 = param_1 + 0x48;
  FUN_10a0426d8(&lStack_28);
  return param_1;
}



/* Entry: 10a125a58; end: 10a127d2b;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10a125a58(long *param_1,long param_2,uint *param_3)

{
  char *pcVar1;
  undefined *puVar2;
  long *******ppppppplVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  undefined1 auVar8 [16];
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  bool bVar14;
  bool bVar15;
  uint uVar16;
  code *pcVar17;
  long ******pppppplVar18;
  long *plVar19;
  undefined8 uVar20;
  long *****ppppplVar21;
  long *******ppppppplVar22;
  undefined8 *puVar23;
  undefined ********ppppppppuVar24;
  long ****pppplVar25;
  long ******pppppplVar26;
  float *pfVar27;
  ulong uVar28;
  long ******pppppplVar29;
  long *******ppppppplVar30;
  long *****ppppplVar31;
  long *****ppppplVar32;
  ulong uVar33;
  long *******ppppppplVar34;
  undefined8 *puVar35;
  long *******ppppppplVar36;
  long *******ppppppplVar37;
  long *******ppppppplVar38;
  undefined4 *puVar39;
  long *****ppppplVar40;
  long lVar41;
  undefined1 (*pauVar42) [16];
  long lVar43;
  long ******pppppplVar44;
  int iVar45;
  ulong uVar46;
  long *plVar47;
  long ******pppppplVar48;
  long *plVar49;
  undefined8 *******pppppppuVar50;
  long ******pppppplVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  float fVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [12];
  undefined1 auVar57 [16];
  undefined4 uVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined1 auVar67 [16];
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  long lStack_6b8;
  long lStack_6b0;
  undefined8 uStack_6a8;
  long lStack_6a0;
  long lStack_698;
  undefined8 uStack_690;
  byte bStack_688;
  long lStack_680;
  long lStack_678;
  undefined8 uStack_670;
  long *****ppppplStack_660;
  long *****ppppplStack_658;
  long *****ppppplStack_650;
  long *****ppppplStack_648;
  undefined8 uStack_640;
  undefined1 uStack_638;
  undefined ********ppppppppuStack_628;
  ulong uStack_620;
  undefined8 uStack_618;
  undefined1 auStack_610 [56];
  undefined8 uStack_5d8;
  char cStack_5c1;
  undefined **appuStack_5b0 [19];
  undefined8 *******pppppppuStack_518;
  ulong uStack_510;
  byte bStack_501;
  long *****ppppplStack_500;
  undefined8 *puStack_4f8;
  undefined8 *******pppppppuStack_4f0;
  long *****ppppplStack_4e8;
  long *****ppppplStack_4e0;
  long *****ppppplStack_4d8;
  undefined8 uStack_4d0;
  long ****pppplStack_4c8;
  undefined8 uStack_4c0;
  long *******ppppppplStack_4b8;
  short sStack_4b0;
  undefined6 uStack_4ae;
  char cStack_4a1;
  long ******pppppplStack_4a0;
  long ******pppppplStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  long *plStack_480;
  undefined3 uStack_478;
  undefined4 uStack_475;
  uint uStack_471;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar43 = param_2;
  _fopen(param_2,&UNK_10f432965);
  if (lVar43 == 0) {
    uVar20 = 0x10;
    ___cxa_allocate_exception(0x10);
    func_0x000107c2b054(&ppppppppuStack_628,&UNK_10f63dfa7);
    FUN_10a012db0(&uStack_488,&ppppppppuStack_628,param_2);
    __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
              (uVar20,&uStack_488);
    ___cxa_throw(uVar20,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8
                );
    goto LAB_10a12789c;
  }
  uStack_6e8 = -1;
  uStack_6f0 = -1;
  uStack_6d8 = -1;
  uStack_6e0 = -1;
  uStack_6c8 = -1;
  uStack_6d0 = -1;
  uStack_6c0 = -1;
  lStack_678 = 0;
  uStack_670 = 0;
  lStack_680 = 0;
  lStack_6b0 = 0;
  lStack_6b8 = 0;
  lStack_6a0 = 0;
  uStack_6a8 = 0;
  uStack_690 = 0;
  lStack_698 = 0;
  bStack_688 = 0;
  pppppplStack_498 = (long ******)0x0;
  pppppplStack_4a0 = (long ******)0x0;
  uStack_490 = (long ******)0x0;
  puVar23 = &uStack_488;
  _fgets(puVar23,0x400,lVar43);
  if (puVar23 == (undefined8 *)0x0) {
LAB_10a127504:
    uVar20 = 0x10;
    ___cxa_allocate_exception(0x10);
    __ZNSt13runtime_errorC1EPKc();
  }
  else {
    if ((short)uStack_488 != 0x6c70 || uStack_488._2_1_ != 'y') goto LAB_10a127504;
    puVar23 = &uStack_488;
    _fgets(puVar23,0x400,lVar43);
    if (puVar23 != (undefined8 *)0x0) {
      puVar23 = &uStack_488;
      _strlen();
      if (puVar23 != (undefined8 *)0x0) {
        do {
          bVar6 = *(byte *)((long)&uStack_490 + 7 + (long)puVar23);
          if (0x20 < bVar6 || (1L << ((ulong)bVar6 & 0x3f) & 0x100002400U) == 0) break;
          puVar35 = (undefined8 *)((long)puVar23 + -1);
          *(undefined1 *)((long)&uStack_490 + 7 + (long)puVar23) = 0;
          puVar23 = puVar35;
        } while (puVar35 != (undefined8 *)0x0);
      }
      if (((uStack_488 != (long *)0x622074616d726f66 || plStack_480 != (long *)0x696c5f7972616e69)
          || CONCAT17((byte)uStack_471,CONCAT43(uStack_475,uStack_478)) != 0x646e655f656c7474) ||
          CONCAT44(uStack_471,uStack_475) != 0x6e6169646e655f65) {
        uVar20 = 0x10;
        ___cxa_allocate_exception(0x10);
        func_0x000107c2b054(&ppppplStack_660,&UNK_10f63dd86);
        FUN_10a012db0(&ppppppppuStack_628,&ppppplStack_660,&uStack_488);
        __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                  (uVar20,&ppppppppuStack_628);
        ___cxa_throw(uVar20,PTR___ZTISt13runtime_error_110346a40,
                     PTR___ZNSt13runtime_errorD1Ev_1103461d8);
        goto LAB_10a12789c;
      }
      pppppplVar44 = (long ******)0x0;
      pppppplVar48 = (long ******)0x0;
      bVar15 = false;
      pppppppuVar50 = (undefined8 *******)0x0;
      puVar2 = PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10;
      uVar46 = 0xffffffff;
LAB_10a125c54:
      puVar23 = &uStack_488;
      _fgets(puVar23,0x400,lVar43);
      if (puVar23 == (undefined8 *)0x0) goto LAB_10a126adc;
      puVar23 = &uStack_488;
      _strlen();
      for (; (puVar23 != (undefined8 *)0x0 &&
             (cVar7 = *(char *)((long)&uStack_490 + 7 + (long)puVar23),
             cVar7 == '\r' || cVar7 == '\n')); puVar23 = (undefined8 *)((long)puVar23 + -1)) {
        *(undefined1 *)((long)&uStack_490 + 7 + (long)puVar23) = 0;
      }
      FUN_109ffe064(&ppppppplStack_4b8,&uStack_488);
      uVar28 = (ulong)cStack_4a1;
      iVar45 = (int)uVar46;
      if (-1 < (long)uVar28) {
        if ((cStack_4a1 != '\n') ||
           (ppppppplStack_4b8 != (long *******)0x646165685f646e65 || sStack_4b0 != 0x7265)) {
          ppppppplVar22 = (long *******)&ppppppplStack_4b8;
          uVar33 = uVar28;
          goto LAB_10a125d28;
        }
LAB_10a125f10:
        if (-1 < iVar45) {
          uVar28 = ((long)pppppplVar48 - (long)pppppplVar44 >> 4) * -0x5555555555555555;
          if (uVar28 < uVar46 || uVar28 - uVar46 == 0) goto LAB_10a12789c;
          pppppplVar44[uVar46 * 6 + 4] = (long *****)pppppppuVar50;
        }
        bVar14 = false;
        bVar15 = true;
        goto LAB_10a126ac0;
      }
      uVar33 = CONCAT62(uStack_4ae,sStack_4b0);
      ppppppplVar22 = ppppppplStack_4b8;
      if (uVar33 == 10) {
        if (*ppppppplStack_4b8 == (long ******)0x646165685f646e65 &&
            *(short *)(ppppppplStack_4b8 + 1) == 0x7265) goto LAB_10a125f10;
        ppppppplVar30 = ppppppplStack_4b8 + 1;
        ppppppplVar34 = ppppppplVar30;
        ppppppplVar37 = ppppppplStack_4b8;
LAB_10a125d44:
        do {
          ppppppplVar36 = ppppppplVar30;
          if (*(char *)ppppppplVar22 == 'e') {
            lVar41 = 1;
            do {
              ppppppplVar36 = ppppppplVar22;
              if (lVar41 == 8) break;
              ppppppplVar38 = (long *******)((long)ppppppplVar22 + lVar41);
              ppppppplVar36 = ppppppplVar30;
              if (ppppppplVar38 == ppppppplVar34) goto LAB_10a125d98;
              pcVar1 = &UNK_10f5aef38 + lVar41;
              lVar41 = lVar41 + 1;
            } while (*(char *)ppppppplVar38 == *pcVar1);
          }
          ppppppplVar22 = (long *******)((long)ppppppplVar22 + 1);
          ppppppplVar30 = ppppppplVar36;
        } while (ppppppplVar22 != ppppppplVar34);
LAB_10a125d98:
        if ((ppppppplVar36 == ppppppplVar34) || (ppppppplVar36 != ppppppplVar37))
        goto LAB_10a125e3c;
        if (-1 < iVar45) {
          uVar28 = ((long)pppppplVar48 - (long)pppppplVar44 >> 4) * -0x5555555555555555;
          if (uVar28 < uVar46 || uVar28 - uVar46 == 0) goto LAB_10a12789c;
          pppppplVar44[uVar46 * 6 + 4] = (long *****)pppppppuVar50;
        }
        FUN_10a1254cc(&ppppppppuStack_628,&ppppppplStack_4b8);
        pppplStack_4c8 = (long ****)0x0;
        uStack_4d0 = (long ****)0x0;
        uStack_4c0 = (long ****)0x0;
        ppppplStack_4e0 = (long *****)0x0;
        ppppplStack_4e8 = (long *****)0x0;
        ppppplStack_4d8 = (long *****)0x0;
        ppppplStack_500 = (long *****)0x0;
        FUN_10a125588(&ppppppppuStack_628,&uStack_4d0);
        FUN_10a125588();
        __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEErsERm();
        if ((long)ppppplStack_4d8 < 0) {
          func_0x000107c3192c(&ppppplStack_660,ppppplStack_4e8,ppppplStack_4e0);
        }
        else {
          ppppplStack_658 = ppppplStack_4e0;
          ppppplStack_660 = ppppplStack_4e8;
          ppppplStack_650 = ppppplStack_4d8;
        }
        ppppplStack_648 = ppppplStack_500;
        uStack_640 = 0;
        uStack_638 = 0;
        if (pppppplVar48 < uStack_490) {
          pppppplVar48[2] = ppppplStack_650;
          pppppplVar48[1] = ppppplStack_658;
          *pppppplVar48 = ppppplStack_660;
          ppppplStack_658 = (long *****)0x0;
          ppppplStack_650 = (long *****)0x0;
          ppppplStack_660 = (long *****)0x0;
          pppppplVar48[4] = (long *****)0x0;
          pppppplVar48[3] = ppppplStack_500;
          *(undefined1 *)(pppppplVar48 + 5) = 0;
          pppppplVar48 = pppppplVar48 + 6;
          pppppplVar44 = pppppplStack_4a0;
          pppppplStack_498 = pppppplVar48;
        }
        else {
          uVar46 = ((long)pppppplVar48 - (long)pppppplVar44 >> 4) * -0x5555555555555555 + 1;
          if (0x555555555555555 < uVar46) {
            FUN_10a133568();
            goto LAB_10a12789c;
          }
          lVar41 = (long)uStack_490 - (long)pppppplVar44 >> 4;
          uVar28 = lVar41 * 0x5555555555555556;
          if (uVar28 < uVar46 || uVar28 - uVar46 == 0) {
            uVar28 = uVar46;
          }
          if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar41 * -0x5555555555555555)) {
            uVar28 = 0x555555555555555;
          }
          if (0x555555555555555 < uVar28) {
            func_0x000109ffded8();
            goto LAB_10a12789c;
          }
          pppppplVar18 = (long ******)(uVar28 * 0x30);
          __Znwm();
          puVar23 = (undefined8 *)((long)pppppplVar18 + ((long)pppppplVar48 - (long)pppppplVar44));
          puVar23[1] = ppppplStack_658;
          *puVar23 = ppppplStack_660;
          puVar23[2] = ppppplStack_650;
          ppppplStack_658 = (long *****)0x0;
          ppppplStack_650 = (long *****)0x0;
          ppppplStack_660 = (long *****)0x0;
          puVar23[4] = uStack_640;
          puVar23[3] = ppppplStack_648;
          *(undefined1 *)(puVar23 + 5) = uStack_638;
          pppppplVar26 = pppppplVar44;
          pppppplVar29 = pppppplVar18;
          if (pppppplVar44 != pppppplVar48) {
            do {
              ppppplVar21 = *pppppplVar26;
              ppppplVar32 = pppppplVar26[1];
              pppppplVar29[2] = pppppplVar26[2];
              pppppplVar29[1] = ppppplVar32;
              *pppppplVar29 = ppppplVar21;
              pppppplVar26[1] = (long *****)0x0;
              pppppplVar26[2] = (long *****)0x0;
              *pppppplVar26 = (long *****)0x0;
              ppppplVar21 = pppppplVar26[3];
              ppppplVar32 = pppppplVar26[4];
              *(undefined1 *)(pppppplVar29 + 5) = *(undefined1 *)(pppppplVar26 + 5);
              pppppplVar29[4] = ppppplVar32;
              pppppplVar29[3] = ppppplVar21;
              pppppplVar26 = pppppplVar26 + 6;
              pppppplVar29 = pppppplVar29 + 6;
              pppppplVar51 = pppppplVar44;
            } while (pppppplVar26 != pppppplVar48);
            do {
              if (*(char *)((long)pppppplVar51 + 0x17) < '\0') {
                __ZdlPv(*pppppplVar51);
              }
              pppppplVar51 = pppppplVar51 + 6;
            } while (pppppplVar51 != pppppplVar48);
          }
          uStack_490 = pppppplVar18 + uVar28 * 6;
          pppppplStack_4a0 = pppppplVar18;
          if (pppppplVar44 != (long ******)0x0) {
            __ZdlPv(pppppplVar44);
          }
          pppppplVar48 = (long ******)(puVar23 + 6);
          pppppplVar44 = pppppplVar18;
          pppppplStack_498 = pppppplVar48;
          if ((long)ppppplStack_650 < 0) {
            __ZdlPv(ppppplStack_660);
          }
        }
        if ((long)ppppplStack_4d8 < 0) {
          __ZdlPv(ppppplStack_4e8);
        }
        if ((long)uStack_4c0 < 0) {
          __ZdlPv(uStack_4d0);
        }
        appuStack_5b0[0] = &PTR_DAT_1108df740;
        ppppppppuStack_628 = (undefined ********)&PTR_DAT_1108df718;
        uStack_618 = &PTR_DAT_11088d7b0;
        if (cStack_5c1 < '\0') {
          __ZdlPv(uStack_5d8);
        }
        uVar46 = (ulong)((int)((ulong)((long)pppppplVar48 - (long)pppppplVar44) >> 4) * -0x55555555
                        - 1);
        uStack_618 = (undefined **)puVar2;
        __ZNSt3__16localeD1Ev(auStack_610);
        __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(&ppppppppuStack_628,&PTR_PTR_1108df758)
        ;
        __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_5b0);
        pppppppuVar50 = (undefined8 *******)0x0;
      }
      else {
LAB_10a125d28:
        uVar4 = uVar33;
        if (7 < uVar33) {
          uVar4 = 8;
        }
        if (uVar33 != 0) {
          ppppppplVar30 = (long *******)((long)ppppppplVar22 + uVar4);
          ppppppplVar34 = ppppppplVar30;
          ppppppplVar37 = ppppppplVar22;
          goto LAB_10a125d44;
        }
LAB_10a125e3c:
        uVar33 = CONCAT62(uStack_4ae,sStack_4b0);
        ppppppplVar22 = ppppppplStack_4b8;
        if (-1 < cStack_4a1) {
          uVar33 = uVar28;
          ppppppplVar22 = (long *******)&ppppppplStack_4b8;
        }
        uVar28 = uVar33;
        if (0xd < uVar33) {
          uVar28 = 0xe;
        }
        if (uVar33 != 0) {
          ppppppplVar34 = (long *******)((long)ppppppplVar22 + uVar28);
          ppppppplVar37 = ppppppplVar34;
          ppppppplVar30 = ppppppplVar22;
          do {
            ppppppplVar36 = ppppppplVar37;
            if (*(char *)ppppppplVar30 == 'p') {
              lVar41 = 1;
              do {
                ppppppplVar36 = ppppppplVar30;
                if (lVar41 == 0xe) break;
                ppppppplVar38 = (long *******)((long)ppppppplVar30 + lVar41);
                ppppppplVar36 = ppppppplVar37;
                if (ppppppplVar38 == ppppppplVar34) goto LAB_10a125ec8;
                pcVar1 = &UNK_10f63ddc5 + lVar41;
                lVar41 = lVar41 + 1;
              } while (*(char *)ppppppplVar38 == *pcVar1);
            }
            ppppppplVar30 = (long *******)((long)ppppppplVar30 + 1);
            ppppppplVar37 = ppppppplVar36;
          } while (ppppppplVar30 != ppppppplVar34);
LAB_10a125ec8:
          if ((ppppppplVar36 != ppppppplVar34) && (ppppppplVar36 == ppppppplVar22)) {
            if (iVar45 < 0) {
              uVar20 = 0x10;
              ___cxa_allocate_exception(0x10);
              __ZNSt13runtime_errorC1EPKc();
LAB_10a127538:
              ___cxa_throw(uVar20,PTR___ZTISt13runtime_error_110346a40,
                           PTR___ZNSt13runtime_errorD1Ev_1103461d8);
            }
            else {
              uVar28 = ((long)pppppplVar48 - (long)pppppplVar44 >> 4) * -0x5555555555555555;
              if (uVar46 <= uVar28 && uVar28 - uVar46 != 0) {
                bVar14 = true;
                *(undefined1 *)(pppppplVar44 + uVar46 * 6 + 5) = 1;
                goto LAB_10a126ac0;
              }
            }
            goto LAB_10a12789c;
          }
          uVar28 = uVar33;
          if (8 < uVar33) {
            uVar28 = 9;
          }
          ppppppplVar34 = (long *******)((long)ppppppplVar22 + uVar28);
          ppppppplVar37 = ppppppplVar34;
          ppppppplVar30 = ppppppplVar22;
          do {
            ppppppplVar36 = ppppppplVar37;
            if (*(char *)ppppppplVar30 == 'p') {
              lVar41 = 1;
              do {
                ppppppplVar36 = ppppppplVar30;
                if (lVar41 == 9) break;
                ppppppplVar38 = (long *******)((long)ppppppplVar30 + lVar41);
                ppppppplVar36 = ppppppplVar37;
                if (ppppppplVar38 == ppppppplVar34) goto LAB_10a125fbc;
                pcVar1 = &UNK_10f63de09 + lVar41;
                lVar41 = lVar41 + 1;
              } while (*(char *)ppppppplVar38 == *pcVar1);
            }
            ppppppplVar30 = (long *******)((long)ppppppplVar30 + 1);
            ppppppplVar37 = ppppppplVar36;
          } while (ppppppplVar30 != ppppppplVar34);
LAB_10a125fbc:
          if ((ppppppplVar36 == ppppppplVar34) || (ppppppplVar36 != ppppppplVar22)) {
            if (7 < uVar33) {
              uVar33 = 8;
            }
            ppppppplVar37 = (long *******)((long)ppppppplVar22 + uVar33);
            ppppppplVar36 = ppppppplVar37;
            ppppppplVar30 = ppppppplVar22;
            do {
              ppppppplVar38 = ppppppplVar36;
              if (*(char *)ppppppplVar30 == 'c') {
                lVar41 = 1;
                do {
                  ppppppplVar38 = ppppppplVar30;
                  if (lVar41 == 8) break;
                  ppppppplVar3 = (long *******)((long)ppppppplVar30 + lVar41);
                  ppppppplVar38 = ppppppplVar36;
                  if (ppppppplVar3 == ppppppplVar37) goto LAB_10a126340;
                  pcVar1 = &UNK_10f63de7d + lVar41;
                  lVar41 = lVar41 + 1;
                } while (*(char *)ppppppplVar3 == *pcVar1);
              }
              ppppppplVar30 = (long *******)((long)ppppppplVar30 + 1);
              ppppppplVar36 = ppppppplVar38;
            } while (ppppppplVar30 != ppppppplVar37);
LAB_10a126340:
            ppppppplVar30 = ppppppplVar22;
            ppppppplVar36 = ppppppplVar34;
            if ((ppppppplVar38 != ppppppplVar37) && (ppppppplVar38 == ppppppplVar22)) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                        (&ppppppppuStack_628,&ppppppplStack_4b8,8,0xffffffffffffffff,
                         &ppppplStack_660);
              FUN_10a059fa0(&lStack_6b8,&ppppppppuStack_628);
              if ((long)uStack_618 < 0) {
                __ZdlPv(ppppppppuStack_628);
              }
              goto LAB_10a126abc;
            }
            do {
              ppppppplVar37 = ppppppplVar36;
              if (*(char *)ppppppplVar30 == 'o') {
                lVar41 = 1;
                do {
                  ppppppplVar37 = ppppppplVar30;
                  if (lVar41 == 9) break;
                  ppppppplVar38 = (long *******)((long)ppppppplVar30 + lVar41);
                  if (ppppppplVar38 == ppppppplVar34) goto LAB_10a126460;
                  pcVar1 = &UNK_10f63de86 + lVar41;
                  lVar41 = lVar41 + 1;
                  ppppppplVar37 = ppppppplVar36;
                } while (*(char *)ppppppplVar38 == *pcVar1);
              }
              ppppppplVar30 = (long *******)((long)ppppppplVar30 + 1);
              ppppppplVar36 = ppppppplVar37;
            } while (ppppppplVar30 != ppppppplVar34);
LAB_10a126460:
            bVar14 = true;
            if ((ppppppplVar36 == ppppppplVar34) || (ppppppplVar36 != ppppppplVar22))
            goto LAB_10a126ac0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_mmRKS4_
                      (&ppppppppuStack_628,&ppppppplStack_4b8,9,0xffffffffffffffff,&ppppplStack_660)
            ;
            if ((long)uStack_618 < 0) {
              ppppppppuVar24 = ppppppppuStack_628;
              if (uStack_620 == 10) goto LAB_10a126694;
            }
            else if (uStack_618._7_1_ == '\n') {
              ppppppppuVar24 = (undefined ********)&ppppppppuStack_628;
LAB_10a126694:
              if (*ppppppppuVar24 == (undefined *******)0x756c61765f776172 &&
                  *(short *)(ppppppppuVar24 + 1) == 0x7365) {
                bStack_688 = 1;
              }
            }
            FUN_10a0b4ec0(&lStack_6a0,&ppppppppuStack_628);
            if ((long)uStack_618 < 0) {
              __ZdlPv(ppppppppuStack_628);
            }
            goto LAB_10a126ac0;
          }
          if (iVar45 < 0) {
            uVar20 = 0x10;
            ___cxa_allocate_exception(0x10);
            __ZNSt13runtime_errorC1EPKc();
            goto LAB_10a127538;
          }
          FUN_10a1254cc(&ppppppppuStack_628,&ppppppplStack_4b8);
          ppppplStack_660 = (long *****)0x0;
          ppppplStack_658 = (long *****)0x0;
          ppppplStack_650 = (long *****)0x0;
          pppplStack_4c8 = (long ****)0x0;
          uStack_4d0 = (long ****)0x0;
          uStack_4c0 = (long ****)0x0;
          ppppplStack_4e0 = (long *****)0x0;
          ppppplStack_4e8 = (long *****)0x0;
          ppppplStack_4d8 = (long *****)0x0;
          FUN_10a125588(&ppppppppuStack_628,&ppppplStack_660);
          FUN_10a125588();
          FUN_10a125588();
          pppppplVar44 = pppppplStack_4a0;
          if ((long)uStack_4c0 < 0) {
            if ((long)pppplStack_4c8 < 5) {
              if (pppplStack_4c8 == (long ****)0x3) {
                if (*(short *)uStack_4d0 != 0x6e69 || *(char *)((long)uStack_4d0 + 2) != 't')
                goto LAB_10a127808;
              }
              else {
                if (pppplStack_4c8 != (long ****)0x4) goto LAB_10a127808;
                if (*(int *)uStack_4d0 != 0x746e6975) {
                  if ((*(int *)uStack_4d0 == 0x72616863) || (*(int *)uStack_4d0 == 0x38746e69))
                  goto LAB_10a1267a0;
                  goto LAB_10a127808;
                }
              }
            }
            else if (pppplStack_4c8 == (long ****)0x5) {
              if ((*(int *)uStack_4d0 != 0x616f6c66 || *(char *)((long)uStack_4d0 + 4) != 't') &&
                 (*(int *)uStack_4d0 != 0x33746e69 || *(char *)((long)uStack_4d0 + 4) != '2')) {
                if ((*(int *)uStack_4d0 == 0x726f6873 && *(char *)((long)uStack_4d0 + 4) == 't') ||
                   (*(int *)uStack_4d0 == 0x31746e69 && *(char *)((long)uStack_4d0 + 4) == '6'))
                goto LAB_10a12682c;
                pppplVar25 = uStack_4d0;
                if (*(int *)uStack_4d0 != 0x61686375 || *(char *)((long)uStack_4d0 + 4) != 'r')
                goto LAB_10a126780;
                goto LAB_10a1267a0;
              }
            }
            else if (pppplStack_4c8 == (long ****)0x6) {
              if (*(int *)uStack_4d0 == 0x62756f64 && *(short *)((long)uStack_4d0 + 4) == 0x656c)
              goto LAB_10a126834;
              if (*(int *)uStack_4d0 != 0x746e6975 || *(short *)((long)uStack_4d0 + 4) != 0x3233) {
                if ((*(int *)uStack_4d0 == 0x6f687375 && *(short *)((long)uStack_4d0 + 4) == 0x7472)
                   || (*(int *)uStack_4d0 == 0x746e6975 &&
                       *(short *)((long)uStack_4d0 + 4) == 0x3631)) goto LAB_10a12682c;
                goto LAB_10a127808;
              }
            }
            else {
              if (pppplStack_4c8 != (long ****)0x7) goto LAB_10a127808;
              if (*(int *)uStack_4d0 != 0x616f6c66 || *(int *)((long)uStack_4d0 + 3) != 0x32337461)
              {
                if (*(int *)uStack_4d0 == 0x616f6c66 && *(int *)((long)uStack_4d0 + 3) == 0x34367461
                   ) goto LAB_10a126834;
                goto LAB_10a127808;
              }
            }
LAB_10a12685c:
            lVar41 = 4;
          }
          else {
            iVar45 = (int)uStack_4d0;
            if (uStack_4c0._7_1_ < 5) {
              if (uStack_4c0._7_1_ == 3) {
                if ((short)uStack_4d0 == 0x6e69 && uStack_4d0._2_1_ == 't') goto LAB_10a12685c;
                goto LAB_10a127808;
              }
              if (uStack_4c0._7_1_ != 4) goto LAB_10a127808;
              if (((int)uStack_4d0 == 0x38746e69) || ((int)uStack_4d0 == 0x72616863))
              goto LAB_10a1267a0;
              if ((int)uStack_4d0 != 0x746e6975) goto LAB_10a127808;
              goto LAB_10a12685c;
            }
            if (uStack_4c0._7_1_ != 5) {
              if (uStack_4c0._7_1_ == 6) {
                if ((int)uStack_4d0 == 0x62756f64 && uStack_4d0._4_2_ == 0x656c) {
LAB_10a126834:
                  lVar41 = 8;
                  goto LAB_10a126860;
                }
                if ((int)uStack_4d0 == 0x746e6975 && uStack_4d0._4_2_ == 0x3233) goto LAB_10a12685c;
                if (((int)uStack_4d0 == 0x6f687375 && uStack_4d0._4_2_ == 0x7472) ||
                   ((int)uStack_4d0 == 0x746e6975 && uStack_4d0._4_2_ == 0x3631))
                goto LAB_10a12682c;
                goto LAB_10a127808;
              }
              if (uStack_4c0._7_1_ != 7) goto LAB_10a127808;
              if (iVar45 != 0x616f6c66 || uStack_4d0._3_4_ != 0x32337461) {
                if (iVar45 == 0x616f6c66 && uStack_4d0._3_4_ == 0x34367461) goto LAB_10a126834;
                goto LAB_10a127808;
              }
              goto LAB_10a12685c;
            }
            if (((int)uStack_4d0 == 0x616f6c66 && uStack_4d0._4_1_ == 't') ||
               ((int)uStack_4d0 == 0x33746e69 && uStack_4d0._4_1_ == '2')) goto LAB_10a12685c;
            if (((int)uStack_4d0 != 0x726f6873 || uStack_4d0._4_1_ != 't') &&
               ((int)uStack_4d0 != 0x31746e69 || uStack_4d0._4_1_ != '6')) {
              if ((int)uStack_4d0 == 0x61686375 && uStack_4d0._4_1_ == 'r') goto LAB_10a1267a0;
              pppplVar25 = (long ****)&uStack_4d0;
LAB_10a126780:
              if (*(int *)pppplVar25 != 0x746e6975 || *(char *)((long)pppplVar25 + 4) != '8')
              goto LAB_10a127808;
LAB_10a1267a0:
              lVar41 = 1;
              goto LAB_10a126860;
            }
LAB_10a12682c:
            lVar41 = 2;
          }
LAB_10a126860:
          uVar28 = ((long)pppppplVar48 - (long)pppppplStack_4a0 >> 4) * -0x5555555555555555;
          if (uVar28 < uVar46 || uVar28 - uVar46 == 0) goto LAB_10a12789c;
          pppppplVar26 = pppppplStack_4a0 + uVar46 * 6;
          if (*(char *)((long)pppppplVar26 + 0x17) < '\0') {
            if (pppppplVar26[1] == (long *****)0x6) {
              pppppplVar26 = (long ******)*pppppplVar26;
              goto LAB_10a1268b0;
            }
          }
          else if (*(char *)((long)pppppplVar26 + 0x17) == '\x06') {
LAB_10a1268b0:
            if (*(int *)pppppplVar26 == 0x74726576 && *(short *)((long)pppppplVar26 + 4) == 0x7865)
            {
              pppppppuStack_518 = pppppppuVar50;
              FUN_10a0b4ec0(&lStack_680,&ppppplStack_4e8);
              ppppplStack_500 = (long *****)&ppppplStack_4e8;
              pppppppuStack_4f0 = &pppppppuStack_518;
              puStack_4f8 = &uStack_4d0;
              FUN_10a1257cc(&ppppplStack_500,&DAT_10f62b0e2,&uStack_6f0);
              FUN_10a1257cc(&ppppplStack_500,"y",(long)&uStack_6f0 + 4);
              FUN_10a1257cc(&ppppplStack_500,"z",&uStack_6e8);
              FUN_10a1257cc(&ppppplStack_500,&UNK_10f63de38,(long)&uStack_6e8 + 4);
              FUN_10a1257cc(&ppppplStack_500,&UNK_10f63de40,&uStack_6e0);
              FUN_10a1257cc(&ppppplStack_500,&UNK_10f63de48,(long)&uStack_6e0 + 4);
              FUN_10a1257cc(&ppppplStack_500,&UNK_10f63de50,&uStack_6d8);
              FUN_10a1257cc(&ppppplStack_500,&UNK_10f63de56,(long)&uStack_6d8 + 4);
              FUN_10a1257cc(&ppppplStack_500,&UNK_10f63de5c,&uStack_6d0);
              FUN_10a1257cc(&ppppplStack_500,&UNK_10f63de62,(long)&uStack_6d0 + 4);
              FUN_10a1257cc(&ppppplStack_500,&UNK_10f63de68,&uStack_6c8);
              FUN_10a1257cc(&ppppplStack_500,&UNK_10f63de6f,(long)&uStack_6c8 + 4);
              FUN_10a1257cc(&ppppplStack_500,&UNK_10f63de76,&uStack_6c0);
              FUN_10a1257cc(&ppppplStack_500,&DAT_10f68f0f6,(long)&uStack_6c0 + 4);
            }
          }
          if ((long)ppppplStack_4d8 < 0) {
            __ZdlPv(ppppplStack_4e8);
          }
          if ((long)uStack_4c0 < 0) {
            __ZdlPv(uStack_4d0);
          }
          if ((long)ppppplStack_650 < 0) {
            __ZdlPv(ppppplStack_660);
          }
          appuStack_5b0[0] = &PTR_DAT_1108df740;
          ppppppppuStack_628 = (undefined ********)&PTR_DAT_1108df718;
          uStack_618 = &PTR_DAT_11088d7b0;
          if (cStack_5c1 < '\0') {
            __ZdlPv(uStack_5d8);
          }
          pppppppuVar50 = (undefined8 *******)(lVar41 + (long)pppppppuVar50);
          uStack_618 = (undefined **)
                       (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
          __ZNSt3__16localeD1Ev(auStack_610);
          __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev
                    (&ppppppppuStack_628,&PTR_PTR_1108df758);
          __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_5b0);
        }
      }
LAB_10a126abc:
      bVar14 = true;
LAB_10a126ac0:
      if (cStack_4a1 < '\0') {
        __ZdlPv(ppppppplStack_4b8);
      }
      if (!bVar14) goto LAB_10a126adc;
      goto LAB_10a125c54;
    }
    uVar20 = 0x10;
    ___cxa_allocate_exception(0x10);
    __ZNSt13runtime_errorC1EPKc();
  }
  ___cxa_throw(uVar20,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
LAB_10a12789c:
                    /* WARNING: Does not return */
  pcVar17 = (code *)SoftwareBreakpoint(1,0x10a1278a0);
  (*pcVar17)();
LAB_10a126adc:
  if (!bVar15) {
    uVar20 = 0x10;
    ___cxa_allocate_exception(0x10);
    __ZNSt13runtime_errorC1EPKc();
    ___cxa_throw(uVar20,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8
                );
    goto LAB_10a12789c;
  }
  if ((long)pppppplVar48 - (long)pppppplVar44 == 0x30) {
    if (*(char *)((long)pppppplVar44 + 0x17) < '\0') {
      if (pppppplVar44[1] == (long *****)0x6) {
        pppppplVar26 = (long ******)*pppppplVar44;
        goto LAB_10a126b18;
      }
    }
    else {
      pppppplVar26 = pppppplVar44;
      if (*(char *)((long)pppppplVar44 + 0x17) == '\x06') {
LAB_10a126b18:
        if (*(int *)pppppplVar26 == 0x74726576 && *(short *)((long)pppppplVar26 + 4) == 0x7865) {
          if (*(char *)(pppppplVar44 + 5) == '\x01') {
            uVar20 = 0x10;
            ___cxa_allocate_exception(0x10);
            __ZNSt13runtime_errorC1EPKc();
            ___cxa_throw(uVar20,PTR___ZTISt13runtime_error_110346a40,
                         PTR___ZNSt13runtime_errorD1Ev_1103461d8);
            goto LAB_10a12789c;
          }
          ppppplVar21 = pppppplVar44[3];
          ppppplVar32 = pppppplVar44[4];
          FUN_10a13357c(&pppppplStack_4a0);
          bVar6 = bStack_688;
          uVar16 = param_3[1];
          uVar5 = *param_3;
          plStack_480 = (long *)0x0;
          uStack_488 = (long *)0x0;
          uStack_478 = 0;
          uStack_475 = 0;
          uStack_471 = uStack_471 & 0xffffff00;
          if ((uVar5 & 1) != 0) {
            if ((int)uStack_6f0 < 0) {
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (&uStack_488,&DAT_10f62b0e2,1);
            }
            if (uStack_6f0 < 0) {
              plVar49 = plStack_480;
              if (-1 < (char)(byte)uStack_471) {
                plVar49 = (long *)(ulong)(byte)uStack_471;
              }
              if (plVar49 != (long *)0x0) {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (&uStack_488,&DAT_10f68f19e,2);
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (&uStack_488,"y",1);
            }
            if ((int)uStack_6e8 < 0) {
              plVar49 = plStack_480;
              if (-1 < (char)(byte)uStack_471) {
                plVar49 = (long *)(ulong)(byte)uStack_471;
              }
              if (plVar49 != (long *)0x0) {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (&uStack_488,&DAT_10f68f19e,2);
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (&uStack_488,"z",1);
            }
          }
          if ((uVar5 >> 1 & 1) != 0) {
            if ((int)uStack_6d8 < 0) {
              plVar49 = plStack_480;
              if (-1 < (char)(byte)uStack_471) {
                plVar49 = (long *)(ulong)(byte)uStack_471;
              }
              if (plVar49 != (long *)0x0) {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (&uStack_488,&DAT_10f68f19e,2);
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (&uStack_488,&UNK_10f63de50,5);
            }
            if (uStack_6d8 < 0) {
              plVar49 = plStack_480;
              if (-1 < (char)(byte)uStack_471) {
                plVar49 = (long *)(ulong)(byte)uStack_471;
              }
              if (plVar49 != (long *)0x0) {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (&uStack_488,&DAT_10f68f19e,2);
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (&uStack_488,&UNK_10f63de56,5);
            }
            if ((int)uStack_6d0 < 0) {
              plVar49 = plStack_480;
              if (-1 < (char)(byte)uStack_471) {
                plVar49 = (long *)(ulong)(byte)uStack_471;
              }
              if (plVar49 != (long *)0x0) {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (&uStack_488,&DAT_10f68f19e,2);
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (&uStack_488,&UNK_10f63de5c,5);
            }
            if (uStack_6d0 < 0) {
              plVar49 = plStack_480;
              if (-1 < (char)(byte)uStack_471) {
                plVar49 = (long *)(ulong)(byte)uStack_471;
              }
              if (plVar49 != (long *)0x0) {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (&uStack_488,&DAT_10f68f19e,2);
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (&uStack_488,&UNK_10f63de62,5);
            }
          }
          if ((uVar5 >> 2 & 1) != 0) {
            if (uStack_6e8 < 0) {
              plVar49 = plStack_480;
              if (-1 < (char)(byte)uStack_471) {
                plVar49 = (long *)(ulong)(byte)uStack_471;
              }
              if (plVar49 != (long *)0x0) {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (&uStack_488,&DAT_10f68f19e,2);
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (&uStack_488,&UNK_10f63de38,7);
            }
            if ((int)uStack_6e0 < 0) {
              plVar49 = plStack_480;
              if (-1 < (char)(byte)uStack_471) {
                plVar49 = (long *)(ulong)(byte)uStack_471;
              }
              if (plVar49 != (long *)0x0) {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (&uStack_488,&DAT_10f68f19e,2);
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (&uStack_488,&UNK_10f63de40,7);
            }
            if (uStack_6e0 < 0) {
              plVar49 = plStack_480;
              if (-1 < (char)(byte)uStack_471) {
                plVar49 = (long *)(ulong)(byte)uStack_471;
              }
              if (plVar49 != (long *)0x0) {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (&uStack_488,&DAT_10f68f19e,2);
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (&uStack_488,&UNK_10f63de48,7);
            }
          }
          if ((uVar5 >> 3 & 1) != 0) {
            if ((int)uStack_6c8 < 0) {
              plVar49 = plStack_480;
              if (-1 < (char)(byte)uStack_471) {
                plVar49 = (long *)(ulong)(byte)uStack_471;
              }
              if (plVar49 != (long *)0x0) {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (&uStack_488,&DAT_10f68f19e,2);
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (&uStack_488,&UNK_10f63de68,6);
            }
            if (uStack_6c8 < 0) {
              plVar49 = plStack_480;
              if (-1 < (char)(byte)uStack_471) {
                plVar49 = (long *)(ulong)(byte)uStack_471;
              }
              if (plVar49 != (long *)0x0) {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (&uStack_488,&DAT_10f68f19e,2);
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (&uStack_488,&UNK_10f63de6f,6);
            }
            if ((int)uStack_6c0 < 0) {
              plVar49 = plStack_480;
              if (-1 < (char)(byte)uStack_471) {
                plVar49 = (long *)(ulong)(byte)uStack_471;
              }
              if (plVar49 != (long *)0x0) {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (&uStack_488,&DAT_10f68f19e,2);
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (&uStack_488,&UNK_10f63de76,6);
            }
            if (uStack_6c0 < 0) {
              plVar49 = plStack_480;
              if (-1 < (char)(byte)uStack_471) {
                plVar49 = (long *)(ulong)(byte)uStack_471;
              }
              if (plVar49 != (long *)0x0) {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (&uStack_488,&DAT_10f68f19e,2);
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (&uStack_488,&DAT_10f68f0f6,7);
            }
          }
          if ((char)(byte)uStack_471 < '\0') {
            if (plStack_480 == (long *)0x0) {
              __ZdlPv(uStack_488);
              goto LAB_10a126f68;
            }
          }
          else if ((byte)uStack_471 == '\0') {
LAB_10a126f68:
            if ((ppppplVar32 == (long *****)0x0) ||
               (auVar55._8_8_ = 0, auVar55._0_8_ = ppppplVar32, auVar67._8_8_ = 0,
               auVar67._0_8_ = ppppplVar21, SUB168(auVar55 * auVar67,8) == 0)) {
              plVar47 = (long *)((long)ppppplVar21 * (long)ppppplVar32);
              FUN_10a0dc020(&uStack_488,plVar47);
              plVar19 = uStack_488;
              _fread(uStack_488,1,plVar47,lVar43);
              plVar49 = uStack_488;
              if (plVar19 == plVar47) {
                param_1[1] = 0;
                *param_1 = 0;
                param_1[3] = 0;
                param_1[2] = 0;
                param_1[5] = 0;
                param_1[4] = 0;
                param_1[7] = 0;
                param_1[6] = 0;
                param_1[9] = 0;
                param_1[8] = 0;
                param_1[0xb] = 0;
                param_1[10] = 0;
                param_1[0xd] = 0;
                param_1[0xc] = 0;
                *(undefined8 *)((long)param_1 + 0x71) = 0;
                *(undefined8 *)((long)param_1 + 0x69) = 0;
                ppppppppuStack_628 = (undefined ********)0x0;
                uStack_620 = 0;
                uStack_618 = (undefined **)0x0;
                if (lStack_6b0 != lStack_6b8) {
                  lVar41 = 0;
                  uVar46 = 0;
                  do {
                    if (uVar46 != 0) {
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                (&ppppppppuStack_628,&UNK_10f560154,2);
                    }
                    uVar28 = (lStack_6b0 - lStack_6b8 >> 3) * -0x5555555555555555;
                    if (uVar28 < uVar46 || uVar28 - uVar46 == 0) goto LAB_10a12789c;
                    plVar19 = (long *)(lStack_6b8 + lVar41);
                    uVar28 = plVar19[1];
                    plVar47 = (long *)*plVar19;
                    if (-1 < (char)*(byte *)((long)plVar19 + 0x17)) {
                      uVar28 = (ulong)*(byte *)((long)plVar19 + 0x17);
                      plVar47 = plVar19;
                    }
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              (&ppppppppuStack_628,plVar47,uVar28);
                    uVar46 = uVar46 + 1;
                    lVar41 = lVar41 + 0x18;
                  } while (uVar46 < (ulong)((lStack_6b0 - lStack_6b8 >> 3) * -0x5555555555555555));
                }
                if ((lStack_6a0 != lStack_698) &&
                   (__ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              (&ppppppppuStack_628,&UNK_10f63df43,0xb), lStack_698 != lStack_6a0)) {
                  lVar41 = 0;
                  uVar46 = 0;
                  do {
                    if (uVar46 != 0) {
                      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                                (&ppppppppuStack_628,&UNK_10f560154,2);
                    }
                    uVar28 = (lStack_698 - lStack_6a0 >> 3) * -0x5555555555555555;
                    if (uVar28 < uVar46 || uVar28 - uVar46 == 0) goto LAB_10a12789c;
                    plVar19 = (long *)(lStack_6a0 + lVar41);
                    uVar28 = plVar19[1];
                    plVar47 = (long *)*plVar19;
                    if (-1 < (char)*(byte *)((long)plVar19 + 0x17)) {
                      uVar28 = (ulong)*(byte *)((long)plVar19 + 0x17);
                      plVar47 = plVar19;
                    }
                    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                              (&ppppppppuStack_628,plVar47,uVar28);
                    uVar46 = uVar46 + 1;
                    lVar41 = lVar41 + 0x18;
                  } while (uVar46 < (ulong)((lStack_698 - lStack_6a0 >> 3) * -0x5555555555555555));
                }
                bVar6 = (byte)uVar16 | bVar6;
                if (*(char *)((long)param_1 + 0x77) < '\0') {
                  __ZdlPv(param_1[0xc]);
                }
                param_1[0xd] = uStack_620;
                param_1[0xc] = (long)ppppppppuStack_628;
                param_1[0xe] = (long)uStack_618;
                *(byte *)(param_1 + 0xf) = bVar6 & 1;
                if (((uVar5 & 1) != 0) &&
                   (func_0x0001096b5198(param_1,ppppplVar21), ppppplVar21 != (long *****)0x0)) {
                  puVar39 = (undefined4 *)(*param_1 + 8);
                  plVar19 = plVar49;
                  ppppplVar40 = ppppplVar21;
                  do {
                    puVar39[-2] = *(undefined4 *)((long)plVar19 + (long)(int)uStack_6f0);
                    puVar39[-1] = *(undefined4 *)((long)plVar19 + (long)uStack_6f0._4_4_);
                    *puVar39 = *(undefined4 *)((long)plVar19 + (long)(int)uStack_6e8);
                    plVar19 = (long *)((long)plVar19 + (long)ppppplVar32);
                    ppppplVar40 = (long *****)((long)ppppplVar40 - 1);
                    puVar39 = puVar39 + 3;
                  } while (ppppplVar40 != (long *****)0x0);
                }
                if (((uVar5 >> 1 & 1) != 0) &&
                   (func_0x00010983d018(param_1 + 3,ppppplVar21), ppppplVar21 != (long *****)0x0)) {
                  puVar23 = (undefined8 *)param_1[3];
                  puVar35 = puVar23 + 1;
                  plVar19 = plVar49;
                  ppppplVar40 = ppppplVar21;
                  do {
                    uVar52 = *(undefined4 *)((long)plVar19 + (long)(int)uStack_6d8);
                    uVar53 = *(undefined4 *)((long)plVar19 + (long)(int)uStack_6d0);
                    uVar58 = *(undefined4 *)((long)plVar19 + (long)uStack_6d0._4_4_);
                    *(undefined4 *)(puVar35 + -1) =
                         *(undefined4 *)((long)plVar19 + (long)uStack_6d8._4_4_);
                    *(undefined4 *)((long)puVar35 + -4) = uVar53;
                    *(undefined4 *)puVar35 = uVar58;
                    *(undefined4 *)((long)puVar35 + 4) = uVar52;
                    auVar55 = _UNK_10de642d0;
                    plVar19 = (long *)((long)plVar19 + (long)ppppplVar32);
                    ppppplVar40 = (long *****)((long)ppppplVar40 - 1);
                    ppppplVar31 = ppppplVar21;
                    puVar35 = puVar35 + 2;
                  } while (ppppplVar40 != (long *****)0x0);
                  do {
                    fVar54 = (float)*puVar23;
                    fVar62 = fVar54 * fVar54;
                    fVar59 = (float)((ulong)*puVar23 >> 0x20);
                    fVar64 = fVar59 * fVar59;
                    fVar60 = (float)puVar23[1];
                    fVar61 = (float)((ulong)puVar23[1] >> 0x20);
                    auVar12._4_4_ = fVar64;
                    auVar12._0_4_ = fVar62;
                    auVar12._8_4_ = fVar60 * fVar60;
                    auVar12._12_4_ = fVar61 * fVar61;
                    auVar13._4_4_ = fVar64;
                    auVar13._0_4_ = fVar62;
                    auVar13._8_4_ = fVar60 * fVar60;
                    auVar13._12_4_ = fVar61 * fVar61;
                    auVar67 = NEON_ext(auVar12,auVar13,8,1);
                    uVar20 = NEON_rev64(auVar67._0_8_,4);
                    fVar64 = SQRT(fVar62 + (float)uVar20 + fVar64 + (float)((ulong)uVar20 >> 0x20));
                    fVar66 = auVar55._8_4_;
                    fVar62 = auVar55._12_4_;
                    fVar63 = auVar55._0_4_;
                    fVar65 = auVar55._4_4_;
                    if (1e-10 <= fVar64) {
                      fVar64 = 1.0 / fVar64;
                      fVar62 = -fVar64;
                      if (0.0 <= fVar61) {
                        fVar62 = fVar64;
                      }
                      fVar63 = fVar54 * fVar62;
                      fVar65 = fVar59 * fVar62;
                      fVar66 = fVar60 * fVar62;
                      fVar62 = fVar61 * fVar62;
                    }
                    puVar23[1] = CONCAT44(fVar62,fVar66);
                    *puVar23 = CONCAT44(fVar65,fVar63);
                    ppppplVar31 = (long *****)((long)ppppplVar31 - 1);
                    puVar23 = puVar23 + 2;
                  } while (ppppplVar31 != (long *****)0x0);
                }
                if (((uVar5 >> 2 & 1) != 0) &&
                   (func_0x0001096b5198(param_1 + 6,ppppplVar21), ppppplVar21 != (long *****)0x0)) {
                  puVar39 = (undefined4 *)(param_1[6] + 8);
                  plVar19 = plVar49;
                  ppppplVar40 = ppppplVar21;
                  do {
                    puVar39[-2] = *(undefined4 *)((long)plVar19 + (long)uStack_6e8._4_4_);
                    puVar39[-1] = *(undefined4 *)((long)plVar19 + (long)(int)uStack_6e0);
                    *puVar39 = *(undefined4 *)((long)plVar19 + (long)uStack_6e0._4_4_);
                    plVar19 = (long *)((long)plVar19 + (long)ppppplVar32);
                    ppppplVar40 = (long *****)((long)ppppplVar40 - 1);
                    puVar39 = puVar39 + 3;
                  } while (ppppplVar40 != (long *****)0x0);
                  if ((bVar6 & 1) == 0) {
                    lVar41 = (long)ppppplVar21 * 3;
                    puVar39 = (undefined4 *)param_1[6];
                    do {
                      uVar53 = _expf();
                      *puVar39 = uVar53;
                      lVar41 = lVar41 + -1;
                      puVar39 = puVar39 + 1;
                    } while (lVar41 != 0);
                  }
                }
                if (((uVar5 >> 3 & 1) != 0) &&
                   (func_0x00010983d048(param_1 + 9,ppppplVar21), ppppplVar21 != (long *****)0x0)) {
                  puVar39 = (undefined4 *)(param_1[9] + 8);
                  ppppplVar40 = ppppplVar21;
                  do {
                    puVar39[-2] = *(undefined4 *)((long)plVar49 + (long)(int)uStack_6c8);
                    puVar39[-1] = *(undefined4 *)((long)plVar49 + (long)uStack_6c8._4_4_);
                    *puVar39 = *(undefined4 *)((long)plVar49 + (long)(int)uStack_6c0);
                    puVar39[1] = *(undefined4 *)((long)plVar49 + (long)uStack_6c0._4_4_);
                    plVar49 = (long *)((long)plVar49 + (long)ppppplVar32);
                    puVar39 = puVar39 + 4;
                    ppppplVar40 = (long *****)((long)ppppplVar40 - 1);
                  } while (ppppplVar40 != (long *****)0x0);
                  if ((bVar6 & 1) == 0) {
                    pauVar42 = (undefined1 (*) [16])param_1[9];
                    pfVar27 = (float *)(*pauVar42 + 8);
                    ppppplVar32 = ppppplVar21;
                    do {
                      *(ulong *)*(undefined1 (*) [16])(pfVar27 + -2) =
                           CONCAT44((float)((ulong)*(undefined8 *)
                                                    *(undefined1 (*) [16])(pfVar27 + -2) >> 0x20) *
                                    0.2820948 + 0.5,
                                    (float)*(undefined8 *)*(undefined1 (*) [16])(pfVar27 + -2) *
                                    0.2820948 + 0.5);
                      *pfVar27 = *pfVar27 * 0.2820948 + 0.5;
                      ppppplVar32 = (long *****)((long)ppppplVar32 - 1);
                      pfVar27 = pfVar27 + 4;
                    } while (ppppplVar32 != (long *****)0x0);
                    pfVar27 = (float *)(*pauVar42 + 0xc);
                    ppppplVar32 = ppppplVar21;
                    do {
                      if (*pfVar27 <= 0.0) {
                        fVar54 = (float)_expf();
                        fVar62 = fVar54;
                      }
                      else {
                        fVar54 = (float)_expf();
                        fVar62 = 1.0;
                      }
                      *pfVar27 = fVar62 / (fVar54 + 1.0);
                      ppppplVar32 = (long *****)((long)ppppplVar32 - 1);
                      pfVar27 = pfVar27 + 4;
                    } while (ppppplVar32 != (long *****)0x0);
                    auVar55 = NEON_fmov(0x3f800000,4);
                    do {
                      auVar67 = *pauVar42;
                      iVar45 = -(uint)(auVar67._0_4_ < 0.0);
                      iVar9 = -(uint)(auVar67._4_4_ < 0.0);
                      iVar10 = -(uint)(auVar67._8_4_ < 0.0);
                      iVar11 = -(uint)(auVar67._12_4_ < 0.0);
                      fVar62 = (float)CONCAT13(auVar67[3] & ~(byte)((uint)iVar45 >> 0x18),
                                               CONCAT12(auVar67[2] & ~(byte)((uint)iVar45 >> 0x10),
                                                        CONCAT11(auVar67[1] &
                                                                 ~(byte)((uint)iVar45 >> 8),
                                                                 auVar67[0] & ~(byte)iVar45)));
                      auVar56._0_8_ =
                           CONCAT17(auVar67[7] & ~(byte)((uint)iVar9 >> 0x18),
                                    CONCAT16(auVar67[6] & ~(byte)((uint)iVar9 >> 0x10),
                                             CONCAT15(auVar67[5] & ~(byte)((uint)iVar9 >> 8),
                                                      CONCAT14(auVar67[4] & ~(byte)iVar9,fVar62))));
                      auVar56[8] = auVar67[8] & ~(byte)iVar10;
                      auVar56[9] = auVar67[9] & ~(byte)((uint)iVar10 >> 8);
                      auVar56[10] = auVar67[10] & ~(byte)((uint)iVar10 >> 0x10);
                      auVar56[0xb] = auVar67[0xb] & ~(byte)((uint)iVar10 >> 0x18);
                      auVar57[0xc] = auVar67[0xc] & ~(byte)iVar11;
                      auVar57._0_12_ = auVar56;
                      auVar57[0xd] = auVar67[0xd] & ~(byte)((uint)iVar11 >> 8);
                      auVar57[0xe] = auVar67[0xe] & ~(byte)((uint)iVar11 >> 0x10);
                      auVar57[0xf] = auVar67[0xf] & ~(byte)((uint)iVar11 >> 0x18);
                      iVar45 = -(uint)(auVar55._4_4_ < (float)((ulong)auVar56._0_8_ >> 0x20));
                      iVar9 = -(uint)(auVar55._8_4_ < auVar56._8_4_);
                      iVar10 = -(uint)(auVar55._12_4_ < auVar57._12_4_);
                      auVar8[4] = (char)iVar45;
                      auVar8._0_4_ = -(uint)(auVar55._0_4_ < fVar62);
                      auVar8[5] = (char)((uint)iVar45 >> 8);
                      auVar8[6] = (char)((uint)iVar45 >> 0x10);
                      auVar8[7] = (char)((uint)iVar45 >> 0x18);
                      auVar8[8] = (char)iVar9;
                      auVar8[9] = (char)((uint)iVar9 >> 8);
                      auVar8[10] = (char)((uint)iVar9 >> 0x10);
                      auVar8[0xb] = (char)((uint)iVar9 >> 0x18);
                      auVar8[0xc] = (char)iVar10;
                      auVar8[0xd] = (char)((uint)iVar10 >> 8);
                      auVar8[0xe] = (char)((uint)iVar10 >> 0x10);
                      auVar8[0xf] = (char)((uint)iVar10 >> 0x18);
                      auVar57 = auVar57 ^ (auVar57 ^ auVar55) & auVar8;
                      *(long *)(*pauVar42 + 8) = auVar57._8_8_;
                      *(long *)*pauVar42 = auVar57._0_8_;
                      ppppplVar21 = (long *****)((long)ppppplVar21 - 1);
                      pauVar42 = pauVar42 + 1;
                    } while (ppppplVar21 != (long *****)0x0);
                  }
                }
                if (uStack_488 != (long *)0x0) {
                  plStack_480 = uStack_488;
                  __ZdlPv();
                }
                uStack_488 = &lStack_680;
                FUN_10a0426d8(&uStack_488);
                uStack_488 = &lStack_6a0;
                FUN_10a0426d8(&uStack_488);
                uStack_488 = &lStack_6b8;
                FUN_10a0426d8(&uStack_488);
                _fclose(lVar43);
                if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
                  return;
                }
                ___stack_chk_fail();
LAB_10a127808:
                uVar20 = 0x10;
                ___cxa_allocate_exception(0x10);
                __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                          (&pppppppuStack_518,&UNK_10f63de13,&uStack_4d0);
                FUN_10a012db0(&ppppplStack_500,&pppppppuStack_518,&DAT_10f638984);
                __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                          (uVar20,&ppppplStack_500);
                ___cxa_throw(uVar20,PTR___ZTISt13runtime_error_110346a40,
                             PTR___ZNSt13runtime_errorD1Ev_1103461d8);
              }
              else {
                uVar20 = 0x10;
                ___cxa_allocate_exception(0x10);
                __ZNSt13runtime_errorC1EPKc();
                ___cxa_throw(uVar20,PTR___ZTISt13runtime_error_110346a40,
                             PTR___ZNSt13runtime_errorD1Ev_1103461d8);
              }
            }
            else {
              uVar20 = 0x10;
              ___cxa_allocate_exception(0x10);
              __ZNSt13runtime_errorC1EPKc();
              ___cxa_throw(uVar20,PTR___ZTISt13runtime_error_110346a40,
                           PTR___ZNSt13runtime_errorD1Ev_1103461d8);
            }
            goto LAB_10a12789c;
          }
          ppppppppuStack_628 = (undefined ********)0x0;
          uStack_620 = 0;
          uStack_618 = (undefined **)0x0;
          if (lStack_678 != lStack_680) {
            lVar43 = 0;
            uVar46 = 0;
            do {
              if (uVar46 != 0) {
                __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                          (&ppppppppuStack_628,&DAT_10f68f19e,2);
              }
              uVar28 = (lStack_678 - lStack_680 >> 3) * -0x5555555555555555;
              if (uVar28 < uVar46 || uVar28 - uVar46 == 0) goto LAB_10a12789c;
              plVar49 = (long *)(lStack_680 + lVar43);
              uVar28 = plVar49[1];
              plVar19 = (long *)*plVar49;
              if (-1 < (char)*(byte *)((long)plVar49 + 0x17)) {
                uVar28 = (ulong)*(byte *)((long)plVar49 + 0x17);
                plVar19 = plVar49;
              }
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                        (&ppppppppuStack_628,plVar19,uVar28);
              uVar46 = uVar46 + 1;
              lVar43 = lVar43 + 0x18;
            } while (uVar46 < (ulong)((lStack_678 - lStack_680 >> 3) * -0x5555555555555555));
          }
          uVar20 = 0x10;
          ___cxa_allocate_exception(0x10);
          __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
                    (&ppppplStack_500,&UNK_10f63df4f,&uStack_488);
          FUN_10a012db0(&ppppplStack_4e8,&ppppplStack_500,&UNK_10f63df7b);
          __ZNSt3__19to_stringEm(&pppppppuStack_518,ppppplVar21);
          pppppppuVar50 = pppppppuStack_518;
          if (-1 < (char)bStack_501) {
            uStack_510 = (ulong)bStack_501;
            pppppppuVar50 = &pppppppuStack_518;
          }
          ppppplVar21 = (long *****)&ppppplStack_4e8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (ppppplVar21,pppppppuVar50,uStack_510);
          uStack_4d0 = *ppppplVar21;
          pppplStack_4c8 = ppppplVar21[1];
          uStack_4c0 = ppppplVar21[2];
          ppppplVar21[1] = (long ****)0x0;
          ppppplVar21[2] = (long ****)0x0;
          *ppppplVar21 = (long ****)0x0;
          FUN_10a012db0(&ppppppplStack_4b8,&uStack_4d0,&UNK_10f63df8a);
          uVar46 = uStack_620;
          ppppppppuVar24 = ppppppppuStack_628;
          if (-1 < (long)uStack_618) {
            uVar46 = (ulong)uStack_618 >> 0x38;
            ppppppppuVar24 = (undefined ********)&ppppppppuStack_628;
          }
          ppppppplVar22 = (long *******)&ppppppplStack_4b8;
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                    (ppppppplVar22,ppppppppuVar24,uVar46);
          pppppplStack_4a0 = *ppppppplVar22;
          pppppplStack_498 = ppppppplVar22[1];
          uStack_490 = ppppppplVar22[2];
          ppppppplVar22[1] = (long ******)0x0;
          ppppppplVar22[2] = (long ******)0x0;
          *ppppppplVar22 = (long ******)0x0;
          FUN_10a012db0(&ppppplStack_660,&pppppplStack_4a0,&DAT_10f62a9ea);
          __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
                    (uVar20,&ppppplStack_660);
          ___cxa_throw(uVar20,PTR___ZTISt13runtime_error_110346a40,
                       PTR___ZNSt13runtime_errorD1Ev_1103461d8);
          goto LAB_10a12789c;
        }
      }
    }
  }
  uVar20 = 0x10;
  ___cxa_allocate_exception(0x10);
  __ZNSt3__19to_stringEm
            (&ppppppplStack_4b8,((long)pppppplVar48 - (long)pppppplVar44 >> 4) * -0x5555555555555555
            );
  FUN_109feb280(&ppppplStack_660,&UNK_10f63dec3,&ppppppplStack_4b8);
  FUN_10a012db0(&ppppppppuStack_628,&ppppplStack_660,&UNK_10f63def9);
  __ZNSt13runtime_errorC1ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
            (uVar20,&ppppppppuStack_628);
  ___cxa_throw(uVar20,PTR___ZTISt13runtime_error_110346a40,PTR___ZNSt13runtime_errorD1Ev_1103461d8);
  goto LAB_10a12789c;
}



/* Entry: 10a127d2c; end: 10a127d9b;  */

long * FUN_10a127d2c(long *param_1)

{
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    __ZdlPv(param_1[0xc]);
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  if (param_1[6] != 0) {
    param_1[7] = param_1[6];
    __ZdlPv();
  }
  if (param_1[3] != 0) {
    param_1[4] = param_1[3];
    __ZdlPv();
  }
  if (*param_1 != 0) {
    param_1[1] = *param_1;
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10a127d9c; end: 10a127e77;  */

long FUN_10a127d9c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,int param_5
                  )

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010a144a9c();
  func_0x00010a144b00(lVar1 + 0x20,param_3);
  *(undefined4 *)(param_1 + 0x40) = param_4;
  FUN_10a1335ec(param_1 + 0x48,(long)param_5);
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  return param_1;
}



/* Entry: 10a127e78; end: 10a127f2b;  */

long * FUN_10a127e78(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plStack_28;
  
  plStack_28 = param_1 + 0x16;
  func_0x00010a133758(&plStack_28);
  plStack_28 = param_1 + 0x13;
  func_0x00010a1337c8(&plStack_28);
  FUN_10a144bbc(param_1 + 0xd);
  plStack_28 = param_1 + 9;
  func_0x00010a1336e8(&plStack_28);
  plVar1 = (long *)param_1[7];
  if (plVar1 == param_1 + 4) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) goto LAB_10a127ef0;
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
LAB_10a127ef0:
  plVar1 = (long *)param_1[3];
  if (plVar1 == param_1) {
    lVar2 = 0x20;
  }
  else {
    if (plVar1 == (long *)0x0) {
      return param_1;
    }
    lVar2 = 0x28;
  }
  (**(code **)(*plVar1 + lVar2))();
  return param_1;
}



/* Entry: 10a127f2c; end: 10a128523;  */

/* WARNING: Removing unreachable block (ram,0x00010a1287d0) */
/* WARNING: Removing unreachable block (ram,0x00010a1287d4) */
/* WARNING: Removing unreachable block (ram,0x00010a1287dc) */
/* WARNING: Removing unreachable block (ram,0x00010a1287e4) */
/* WARNING: Removing unreachable block (ram,0x00010a1287e8) */

void FUN_10a127f2c(undefined8 *param_1,long param_2,undefined **param_3,undefined **param_4)

{
  bool bVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined8 *puVar4;
  int *piVar5;
  undefined8 uVar6;
  char cVar7;
  code *pcVar8;
  bool bVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  int iVar12;
  undefined **ppuVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  long *plVar24;
  undefined8 *puVar25;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 uStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long *plStack_58;
  
  puVar18 = &uStack_70;
  puVar25 = &uStack_70;
  iVar12 = (int)param_3;
  uVar26 = (ulong)iVar12;
  if ((ulong)(*(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x48) >> 4) <= uVar26)
  goto LAB_10a12851c;
  puVar4 = (undefined8 *)(*(long *)(param_2 + 0x48) + uVar26 * 0x10);
  plVar24 = (long *)*puVar4;
  ppuVar13 = param_4;
  if (plVar24 == (long *)0x0) {
    puVar10 = (undefined8 *)0x38;
    __Znwm();
    puVar10[1] = 0;
    puVar10[2] = 0;
    *puVar10 = &PTR_FUN_110ba75a8;
    puVar10[6] = 0;
    puVar10[5] = 0;
    puVar10[4] = 0;
    puVar10[3] = 0;
    plVar24 = (long *)puVar4[1];
    *puVar4 = puVar10 + 3;
    puVar4[1] = puVar10;
    if (plVar24 != (long *)0x0) {
      plVar14 = plVar24 + 1;
      do {
        lVar15 = *plVar14;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar9) {
          *plVar14 = lVar15 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
      }
    }
    *(int *)(param_2 + 0x60) = *(int *)(param_2 + 0x60) + 1;
    plVar24 = (long *)*puVar4;
  }
  lVar15 = *plVar24;
  if (lVar15 != 0) {
    param_3 = &PTR_DAT_110ba75e8;
    if ((int)param_4 == 0) {
      ppuVar13 = &PTR_DAT_110ba75f8;
      ___dynamic_cast();
      if (lVar15 == 0) goto LAB_10a12808c;
      plVar24 = (long *)plVar24[1];
      if (plVar24 != (long *)0x0) {
        plVar14 = plVar24 + 1;
        do {
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar9) {
            *plVar14 = *plVar14 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        do {
          lVar15 = *plVar14;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar9) {
            *plVar14 = lVar15 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        goto joined_r0x00010a1280f0;
      }
    }
    else {
      ppuVar13 = &PTR_DAT_110ba7610;
      ___dynamic_cast();
      if (lVar15 == 0) {
LAB_10a12808c:
        if (plVar24[2] == 0) {
LAB_10a1280a8:
          if ((plVar24[1] == 0) || (*(long *)(plVar24[1] + 8) < 1)) {
LAB_10a1280bc:
            param_3 = *(undefined ***)*puVar4;
            ppuVar13 = (undefined **)((undefined8 *)*puVar4)[1];
            FUN_10a128524(param_2);
          }
        }
        else if (((uint)*(undefined8 *)(plVar24[2] + 0x10) >> 1 & 1) != 0) {
          if (*plVar24 != 0) goto LAB_10a1280a8;
          goto LAB_10a1280bc;
        }
        puVar10 = (undefined8 *)*puVar4;
        plVar24 = (long *)puVar10[1];
        *puVar10 = 0;
        puVar10[1] = 0;
        if (plVar24 == (long *)0x0) goto LAB_10a12810c;
        plVar14 = plVar24 + 1;
        do {
          lVar15 = *plVar14;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar9) {
            *plVar14 = lVar15 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
      else {
        plVar24 = (long *)plVar24[1];
        if (plVar24 == (long *)0x0) goto LAB_10a12810c;
        plVar14 = plVar24 + 1;
        do {
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar9) {
            *plVar14 = *plVar14 + 1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        do {
          lVar15 = *plVar14;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar9) {
            *plVar14 = lVar15 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
      }
joined_r0x00010a1280f0:
      if (lVar15 == 0) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
      }
    }
  }
LAB_10a12810c:
  lVar15 = *(long *)*puVar4;
  if (lVar15 == 0) {
    if ((int)param_4 == 0) {
      lVar15 = *(long *)(param_2 + 0xa0);
      if (*(long *)(param_2 + 0x98) == lVar15) {
        if (*(long **)(param_2 + 0x18) == (long *)0x0) goto LAB_10a128520;
        pcVar8 = *(code **)(**(long **)(param_2 + 0x18) + 0x30);
        goto LAB_10a1281c0;
      }
      plStack_68 = *(long **)(lVar15 + -8);
      uStack_70 = *(undefined8 *)(lVar15 + -0x10);
      *(undefined8 *)(lVar15 + -0x10) = 0;
      *(undefined8 *)(lVar15 + -8) = 0;
      if (*(long *)(param_2 + 0x98) == *(long *)(param_2 + 0xa0)) goto LAB_10a12851c;
      lVar15 = *(long *)(param_2 + 0xa0) + -0x10;
      FUN_10a1449ec();
      *(long *)(param_2 + 0xa0) = lVar15;
    }
    else {
      lVar15 = *(long *)(param_2 + 0xb8);
      if (*(long *)(param_2 + 0xb0) == lVar15) {
        if (*(long **)(param_2 + 0x38) == (long *)0x0) {
LAB_10a128520:
          lVar15 = 0;
          FUN_10a06186c();
          if (param_3 != (undefined **)0x0) {
            ppuVar11 = param_3;
            ___dynamic_cast(param_3,&PTR_DAT_110ba75e8,&PTR_DAT_110ba75f8,0);
            if (ppuVar11 == (undefined **)0x0) {
              ___dynamic_cast(param_3,&PTR_DAT_110ba75e8,&PTR_DAT_110ba7610,0);
              if (param_3 == (undefined **)0x0) {
                return;
              }
              if (ppuVar13 != (undefined **)0x0) {
                ppuVar11 = ppuVar13 + 1;
                do {
                  cVar7 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(ppuVar11,0x10);
                  if (bVar9) {
                    *ppuVar11 = *ppuVar11 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
              }
              *(undefined4 *)(param_3 + 1) = 0xffffffff;
              *(undefined2 *)((long)param_3 + 0x49) = 0;
              param_3[2] = (undefined *)0x0;
              param_3[3] = (undefined *)0x0;
              *(undefined1 *)(param_3 + 4) = 0;
              *(undefined8 *)((long)param_3 + 0x54) = 0xff7fffff00000000;
              *(undefined8 *)((long)param_3 + 0x4c) = 0;
              *(undefined8 *)((long)param_3 + 0x5c) = 0xff7fffffff7fffff;
              plVar24 = (long *)param_3[0x18];
              param_3[0x17] = (undefined *)0x0;
              param_3[0x18] = (undefined *)0x0;
              if (plVar24 != (long *)0x0) {
                plVar14 = plVar24 + 1;
                do {
                  lVar23 = *plVar14;
                  cVar7 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
                  if (bVar9) {
                    *plVar14 = lVar23 + -1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
                if (lVar23 == 0) {
                  (**(code **)(*plVar24 + 0x10))(plVar24);
                  __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
                }
              }
              puVar18 = *(undefined8 **)(lVar15 + 0xb8);
              if (puVar18 < *(undefined8 **)(lVar15 + 0xc0)) {
                puVar25 = puVar18 + 2;
                puVar18[1] = ppuVar13;
                *puVar18 = param_3;
              }
              else {
                lVar23 = *(long *)(lVar15 + 0xb0);
                lVar22 = (long)puVar18 - lVar23;
                uVar26 = (lVar22 >> 4) + 1;
                if (uVar26 >> 0x3c != 0) {
                  func_0x00010a13384c();
                  goto LAB_10a128820;
                }
                uVar21 = (long)*(undefined8 **)(lVar15 + 0xc0) - lVar23;
                uVar16 = (long)uVar21 >> 3;
                if (uVar16 <= uVar26) {
                  uVar16 = uVar26;
                }
                if (0x7fffffffffffffef < uVar21) {
                  uVar16 = 0xfffffffffffffff;
                }
                if (uVar16 >> 0x3c != 0) {
                  func_0x000109ffded8();
                  goto LAB_10a128820;
                }
                lVar19 = uVar16 << 4;
                __Znwm();
                puVar18 = (undefined8 *)(lVar19 + lVar22);
                puVar25 = puVar18 + 2;
                puVar18[1] = ppuVar13;
                *puVar18 = param_3;
                _memcpy(puVar18 + (lVar22 >> 4) * -2,lVar23,lVar22);
                *(undefined8 **)(lVar15 + 0xb0) = puVar18 + (lVar22 >> 4) * -2;
                *(undefined8 **)(lVar15 + 0xb8) = puVar25;
                *(ulong *)(lVar15 + 0xc0) = lVar19 + uVar16 * 0x10;
                if (lVar23 != 0) {
                  __ZdlPv(lVar23);
                }
              }
              *(undefined8 **)(lVar15 + 0xb8) = puVar25;
            }
            else {
              if (ppuVar13 != (undefined **)0x0) {
                ppuVar3 = ppuVar13 + 1;
                do {
                  cVar7 = '\x01';
                  bVar9 = (bool)ExclusiveMonitorPass(ppuVar3,0x10);
                  if (bVar9) {
                    *ppuVar3 = *ppuVar3 + 1;
                    cVar7 = ExclusiveMonitorsStatus();
                  }
                } while (cVar7 != '\0');
              }
              *(undefined4 *)(ppuVar11 + 1) = 0xffffffff;
              *(undefined2 *)((long)ppuVar11 + 0x49) = 0;
              ppuVar11[2] = (undefined *)0x0;
              ppuVar11[3] = (undefined *)0x0;
              *(undefined1 *)(ppuVar11 + 4) = 0;
              *(undefined8 *)((long)ppuVar11 + 0x54) = 0xff7fffff00000000;
              *(undefined8 *)((long)ppuVar11 + 0x4c) = 0;
              *(undefined8 *)((long)ppuVar11 + 0x5c) = 0xff7fffffff7fffff;
              puVar18 = *(undefined8 **)(lVar15 + 0xa0);
              if (puVar18 < *(undefined8 **)(lVar15 + 0xa8)) {
                *puVar18 = ppuVar11;
                puVar18[1] = ppuVar13;
                puVar18 = puVar18 + 2;
              }
              else {
                lVar23 = *(long *)(lVar15 + 0x98);
                lVar22 = (long)puVar18 - lVar23;
                uVar26 = (lVar22 >> 4) + 1;
                if (uVar26 >> 0x3c != 0) {
                  FUN_10a133838();
LAB_10a128820:
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a128824);
                  (*pcVar8)();
                }
                uVar21 = (long)*(undefined8 **)(lVar15 + 0xa8) - lVar23;
                uVar16 = (long)uVar21 >> 3;
                if (uVar16 <= uVar26) {
                  uVar16 = uVar26;
                }
                if (0x7fffffffffffffef < uVar21) {
                  uVar16 = 0xfffffffffffffff;
                }
                if (uVar16 >> 0x3c != 0) {
                  func_0x000109ffded8();
                  goto LAB_10a128820;
                }
                lVar19 = uVar16 << 4;
                __Znwm();
                puVar25 = (undefined8 *)(lVar19 + lVar22);
                *puVar25 = ppuVar11;
                puVar25[1] = ppuVar13;
                puVar18 = puVar25 + 2;
                _memcpy(puVar25 + (lVar22 >> 4) * -2,lVar23,lVar22);
                *(undefined8 **)(lVar15 + 0x98) = puVar25 + (lVar22 >> 4) * -2;
                *(undefined8 **)(lVar15 + 0xa0) = puVar18;
                *(ulong *)(lVar15 + 0xa8) = lVar19 + uVar16 * 0x10;
                if (lVar23 != 0) {
                  __ZdlPv(lVar23);
                }
              }
              *(undefined8 **)(lVar15 + 0xa0) = puVar18;
            }
          }
          return;
        }
        pcVar8 = *(code **)(**(long **)(param_2 + 0x38) + 0x30);
        puVar18 = &uStack_60;
LAB_10a1281c0:
        (*pcVar8)(puVar18);
        puVar25 = puVar18;
      }
      else {
        plStack_58 = *(long **)(lVar15 + -8);
        uStack_60 = *(undefined8 *)(lVar15 + -0x10);
        *(undefined8 *)(lVar15 + -0x10) = 0;
        *(undefined8 *)(lVar15 + -8) = 0;
        if (*(long *)(param_2 + 0xb0) == *(long *)(param_2 + 0xb8)) goto LAB_10a12851c;
        lVar15 = *(long *)(param_2 + 0xb8) + -0x10;
        func_0x00010a144ca0();
        *(long *)(param_2 + 0xb8) = lVar15;
        puVar25 = &uStack_60;
      }
    }
    uVar27 = *puVar25;
    uVar6 = puVar25[1];
    *puVar25 = 0;
    puVar25[1] = 0;
    puVar18 = (undefined8 *)*puVar4;
    plVar24 = (long *)puVar18[1];
    *puVar18 = uVar27;
    puVar18[1] = uVar6;
    if (plVar24 == (long *)0x0) {
LAB_10a1281f4:
      if (((ulong)param_4 & 1) != 0) goto LAB_10a1281f8;
LAB_10a128234:
      if (plStack_68 != (long *)0x0) {
        plVar24 = plStack_68 + 1;
        do {
          lVar15 = *plVar24;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar9) {
            *plVar24 = lVar15 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          plVar14 = plStack_68;
        } while (cVar7 != '\0');
        goto LAB_10a128250;
      }
    }
    else {
      plVar14 = plVar24 + 1;
      do {
        lVar15 = *plVar14;
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar9) {
          *plVar14 = lVar15 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar15 != 0) goto LAB_10a1281f4;
      (**(code **)(*plVar24 + 0x10))(plVar24);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar24);
      if (((ulong)param_4 & 1) == 0) goto LAB_10a128234;
LAB_10a1281f8:
      if (plStack_58 != (long *)0x0) {
        plVar24 = plStack_58 + 1;
        do {
          lVar15 = *plVar24;
          cVar7 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar24,0x10);
          if (bVar9) {
            *plVar24 = lVar15 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
          plVar14 = plStack_58;
        } while (cVar7 != '\0');
LAB_10a128250:
        if (lVar15 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar14);
        }
      }
    }
    lVar15 = *(long *)*puVar4;
  }
  *(int *)(lVar15 + 8) = iVar12;
  lVar15 = *(long *)(param_2 + 0x48);
  lVar23 = *(long *)(param_2 + 0x50);
  if (uVar26 < (ulong)(lVar23 - lVar15 >> 4)) {
    lVar22 = *(long *)(lVar15 + uVar26 * 0x10);
    if (lVar22 != 0) {
      lVar19 = *(long *)(param_2 + 0x70);
      lVar20 = *(long *)(param_2 + 0x78);
      iVar2 = *(int *)(param_2 + 100) + 1;
      *(int *)(param_2 + 100) = iVar2;
      *(int *)(lVar22 + 0x18) = iVar2;
      uVar26 = 0;
      if (lVar20 != lVar19) {
        uVar26 = (lVar20 - lVar19) * 0x40 - 1;
      }
      lVar20 = *(long *)(param_2 + 0x90);
      uVar16 = lVar20 + *(long *)(param_2 + 0x88);
      if (uVar26 == uVar16) {
        FUN_10a144da8(param_2 + 0x68);
        lVar20 = *(long *)(param_2 + 0x90);
        lVar19 = *(long *)(param_2 + 0x70);
        uVar16 = *(long *)(param_2 + 0x88) + lVar20;
        lVar15 = *(long *)(param_2 + 0x48);
        lVar23 = *(long *)(param_2 + 0x50);
      }
      piVar5 = (int *)(*(long *)(lVar19 + (uVar16 >> 9) * 8) + (uVar16 & 0x1ff) * 8);
      *piVar5 = iVar12;
      piVar5[1] = *(int *)(lVar22 + 0x18);
      *(ulong *)(param_2 + 0x90) = lVar20 + 1U;
      lVar23 = lVar23 - lVar15;
      if ((lVar23 != 0) && ((ulong)(lVar23 >> 3) < lVar20 + 1U)) {
        lVar23 = lVar23 >> 4;
        do {
          if (*(long *)(param_2 + 0x90) == 0) break;
          uVar26 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x70) +
                                       (*(ulong *)(param_2 + 0x88) >> 9) * 8) +
                             (*(ulong *)(param_2 + 0x88) & 0x1ff) * 8);
          FUN_10a128ba0(param_2 + 0x68);
          if (-1 < (int)uVar26) {
            uVar16 = *(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x48) >> 4;
            if ((int)uVar26 < (int)uVar16) {
              if (uVar16 <= (uVar26 & 0x7fffffff)) goto LAB_10a12851c;
              lVar15 = *(long *)(*(long *)(param_2 + 0x48) + (uVar26 & 0x7fffffff) * 0x10);
              if ((lVar15 != 0) && (*(int *)(lVar15 + 0x18) == (int)(uVar26 >> 0x20))) {
                FUN_10a128c04(param_2 + 0x68,uVar26);
              }
            }
          }
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
      }
    }
    iVar12 = *(int *)(param_2 + 0x60);
LAB_10a1283a0:
    if ((*(int *)(param_2 + 0x40) < iVar12) && (uVar26 = *(ulong *)(param_2 + 0x90), uVar26 != 0)) {
      uVar16 = 1;
      bVar9 = true;
      do {
        uVar21 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x70) +
                                     (*(ulong *)(param_2 + 0x88) >> 9) * 8) +
                           (*(ulong *)(param_2 + 0x88) & 0x1ff) * 8);
        FUN_10a128ba0(param_2 + 0x68);
        if (-1 < (int)uVar21) {
          uVar17 = *(long *)(param_2 + 0x50) - *(long *)(param_2 + 0x48) >> 4;
          if ((int)uVar21 < (int)uVar17) {
            if (uVar17 <= (uVar21 & 0x7fffffff)) goto LAB_10a12851c;
            plVar24 = (long *)(*(long *)(param_2 + 0x48) + (uVar21 & 0x7fffffff) * 0x10);
            plVar14 = (long *)*plVar24;
            if ((plVar14 != (long *)0x0) && ((int)plVar14[3] == (int)(uVar21 >> 0x20))) {
              bVar1 = false;
              if (plVar24[1] != 0) {
                bVar1 = 0 < *(long *)(plVar24[1] + 8);
              }
              if ((plVar14[2] == 0) || (((uint)*(undefined8 *)(plVar14[2] + 0x10) >> 1 & 1) != 0)) {
                if ((*plVar14 == 0) || (plVar14[1] == 0)) {
                  if (!bVar1) goto LAB_10a12849c;
                }
                else if (*(long *)(plVar14[1] + 8) < 1 && !bVar1) goto LAB_10a12849c;
              }
              FUN_10a128c04(param_2 + 0x68,uVar21);
            }
          }
        }
        if (uVar26 == uVar16) break;
        bVar9 = uVar16 < uVar26;
        uVar16 = uVar16 + 1;
        if (*(long *)(param_2 + 0x90) == 0) goto LAB_10a12851c;
      } while( true );
    }
    goto LAB_10a1284dc;
  }
LAB_10a12851c:
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x10a128520);
  (*pcVar8)();
LAB_10a12849c:
  puVar18 = (undefined8 *)*plVar24;
  if (*(int *)(puVar18 + 3) == *(int *)(param_2 + 100)) goto LAB_10a1284dc;
  FUN_10a128524(param_2,*puVar18,puVar18[1]);
  *(undefined4 *)(*plVar24 + 0x18) = 0;
  FUN_10a128c88(plVar24);
  iVar12 = *(int *)(param_2 + 0x60) + -1;
  *(int *)(param_2 + 0x60) = iVar12;
  if (!bVar9) {
LAB_10a1284dc:
    lVar15 = puVar4[1];
    uVar27 = *puVar4;
    param_1[1] = puVar4[1];
    *param_1 = uVar27;
    if (lVar15 != 0) {
      plVar24 = (long *)(lVar15 + 8);
      do {
        cVar7 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar9) {
          *plVar24 = *plVar24 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
    return;
  }
  goto LAB_10a1283a0;
}



/* Entry: 10a128524; end: 10a128847;  */

/* WARNING: Removing unreachable block (ram,0x00010a1287d0) */
/* WARNING: Removing unreachable block (ram,0x00010a1287d4) */
/* WARNING: Removing unreachable block (ram,0x00010a1287dc) */
/* WARNING: Removing unreachable block (ram,0x00010a1287e4) */
/* WARNING: Removing unreachable block (ram,0x00010a1287e8) */

void FUN_10a128524(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  
  if (param_2 != 0) {
    lVar7 = param_2;
    ___dynamic_cast(param_2,&PTR_DAT_110ba75e8,&PTR_DAT_110ba75f8,0);
    if (lVar7 == 0) {
      ___dynamic_cast(param_2,&PTR_DAT_110ba75e8,&PTR_DAT_110ba7610,0);
      if (param_2 == 0) {
        return;
      }
      if (param_3 != 0) {
        plVar9 = (long *)(param_3 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(undefined4 *)(param_2 + 8) = 0xffffffff;
      *(undefined2 *)(param_2 + 0x49) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined1 *)(param_2 + 0x20) = 0;
      *(undefined8 *)(param_2 + 0x54) = 0xff7fffff00000000;
      *(undefined8 *)(param_2 + 0x4c) = 0;
      *(undefined8 *)(param_2 + 0x5c) = 0xff7fffffff7fffff;
      plVar9 = *(long **)(param_2 + 0xc0);
      *(undefined8 *)(param_2 + 0xb8) = 0;
      *(undefined8 *)(param_2 + 0xc0) = 0;
      if (plVar9 != (long *)0x0) {
        plVar12 = plVar9 + 1;
        do {
          lVar7 = *plVar12;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar7 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          __ZNSt3__119__shared_weak_count14__release_weakEv(plVar9);
        }
      }
      plVar9 = *(long **)(param_1 + 0xb8);
      if (plVar9 < *(long **)(param_1 + 0xc0)) {
        plVar12 = plVar9 + 2;
        plVar9[1] = param_3;
        *plVar9 = param_2;
      }
      else {
        lVar7 = *(long *)(param_1 + 0xb0);
        lVar10 = (long)plVar9 - lVar7;
        uVar1 = (lVar10 >> 4) + 1;
        if (uVar1 >> 0x3c != 0) {
          func_0x00010a13384c();
          goto LAB_10a128820;
        }
        uVar6 = (long)*(long **)(param_1 + 0xc0) - lVar7;
        uVar8 = (long)uVar6 >> 3;
        if (uVar8 <= uVar1) {
          uVar8 = uVar1;
        }
        if (0x7fffffffffffffef < uVar6) {
          uVar8 = 0xfffffffffffffff;
        }
        if (uVar8 >> 0x3c != 0) {
          func_0x000109ffded8();
          goto LAB_10a128820;
        }
        lVar11 = uVar8 << 4;
        __Znwm();
        plVar9 = (long *)(lVar11 + lVar10);
        plVar12 = plVar9 + 2;
        plVar9[1] = param_3;
        *plVar9 = param_2;
        _memcpy(plVar9 + (lVar10 >> 4) * -2,lVar7,lVar10);
        *(long **)(param_1 + 0xb0) = plVar9 + (lVar10 >> 4) * -2;
        *(long **)(param_1 + 0xb8) = plVar12;
        *(ulong *)(param_1 + 0xc0) = lVar11 + uVar8 * 0x10;
        if (lVar7 != 0) {
          __ZdlPv(lVar7);
        }
      }
      *(long **)(param_1 + 0xb8) = plVar12;
    }
    else {
      if (param_3 != 0) {
        plVar9 = (long *)(param_3 + 8);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = *plVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      *(undefined4 *)(lVar7 + 8) = 0xffffffff;
      *(undefined2 *)(lVar7 + 0x49) = 0;
      *(undefined8 *)(lVar7 + 0x10) = 0;
      *(undefined8 *)(lVar7 + 0x18) = 0;
      *(undefined1 *)(lVar7 + 0x20) = 0;
      *(undefined8 *)(lVar7 + 0x54) = 0xff7fffff00000000;
      *(undefined8 *)(lVar7 + 0x4c) = 0;
      *(undefined8 *)(lVar7 + 0x5c) = 0xff7fffffff7fffff;
      plVar9 = *(long **)(param_1 + 0xa0);
      if (plVar9 < *(long **)(param_1 + 0xa8)) {
        *plVar9 = lVar7;
        plVar9[1] = param_3;
        plVar9 = plVar9 + 2;
      }
      else {
        lVar10 = *(long *)(param_1 + 0x98);
        lVar11 = (long)plVar9 - lVar10;
        uVar1 = (lVar11 >> 4) + 1;
        if (uVar1 >> 0x3c != 0) {
          FUN_10a133838();
LAB_10a128820:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10a128824);
          (*pcVar4)();
        }
        uVar6 = (long)*(long **)(param_1 + 0xa8) - lVar10;
        uVar8 = (long)uVar6 >> 3;
        if (uVar8 <= uVar1) {
          uVar8 = uVar1;
        }
        if (0x7fffffffffffffef < uVar6) {
          uVar8 = 0xfffffffffffffff;
        }
        if (uVar8 >> 0x3c != 0) {
          func_0x000109ffded8();
          goto LAB_10a128820;
        }
        lVar5 = uVar8 << 4;
        __Znwm();
        plVar12 = (long *)(lVar5 + lVar11);
        *plVar12 = lVar7;
        plVar12[1] = param_3;
        plVar9 = plVar12 + 2;
        _memcpy(plVar12 + (lVar11 >> 4) * -2,lVar10,lVar11);
        *(long **)(param_1 + 0x98) = plVar12 + (lVar11 >> 4) * -2;
        *(long **)(param_1 + 0xa0) = plVar9;
        *(ulong *)(param_1 + 0xa8) = lVar5 + uVar8 * 0x10;
        if (lVar10 != 0) {
          __ZdlPv(lVar10);
        }
      }
      *(long **)(param_1 + 0xa0) = plVar9;
    }
  }
  return;
}



/* Entry: 10a128848; end: 10a128b9f;  */

void FUN_10a128848(undefined8 param_1,long param_2)

{
  undefined **ppuVar1;
  undefined8 ****ppppuVar2;
  undefined ***pppuVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 ***pppuStack_298;
  ulong uStack_290;
  byte bStack_281;
  undefined **ppuStack_280;
  undefined **ppuStack_278;
  undefined1 auStack_270 [56];
  undefined8 uStack_238;
  char cStack_221;
  undefined **appuStack_210 [19];
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined1 auStack_168 [56];
  undefined8 uStack_130;
  char cStack_119;
  undefined **appuStack_108 [19];
  undefined1 auStack_69 [9];
  
  FUN_109fed7e0(&ppuStack_178);
  FUN_109fed7e0(&ppuStack_280);
  lVar8 = *(long *)(param_2 + 0x48);
  if (*(long *)(param_2 + 0x50) != lVar8) {
    lVar7 = 0;
    uVar6 = 0;
    uVar5 = 1;
    do {
      if (*(long *)(lVar8 + lVar7) != 0) {
        if ((uVar5 & 1) == 0) {
          FUN_10a002568(&ppuStack_280,&DAT_10f68e8ee,1);
        }
        __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm(&ppuStack_280,uVar6);
        if ((*(int *)(**(long **)(lVar8 + lVar7) + 8) < 0) ||
           (pcVar4 = "+", (*(byte *)(**(long **)(lVar8 + lVar7) + 0x4a) & 1) == 0)) {
          pcVar4 = "*";
        }
        FUN_10a002568(&ppuStack_280,pcVar4,1);
        uVar5 = *(ulong *)(*(long *)(lVar8 + lVar7) + 0x10);
        if (uVar5 != 0) {
          if (((uint)*(undefined8 *)(uVar5 + 0x10) >> 1 & 1) == 0) {
            FUN_10a002568(&ppuStack_280,"B",1);
            uVar5 = 0;
          }
          else {
            uVar5 = 0;
          }
        }
      }
      uVar6 = uVar6 + 1;
      lVar8 = *(long *)(param_2 + 0x48);
      lVar7 = lVar7 + 0x10;
    } while (uVar6 < (ulong)(*(long *)(param_2 + 0x50) - lVar8 >> 4));
  }
  FUN_10a002568(&ppuStack_178,&UNK_10f63e019,8);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEj();
  pppuVar3 = &ppuStack_178;
  FUN_10a002568(pppuVar3,&UNK_10f63e022,0xc);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  FUN_10a002568();
  func_0x00010a002480(&pppuStack_298,&ppuStack_278,auStack_69);
  ppppuVar2 = (undefined8 ****)pppuStack_298;
  if (-1 < (char)bStack_281) {
    uStack_290 = (ulong)bStack_281;
    ppppuVar2 = &pppuStack_298;
  }
  FUN_10a002568(pppuVar3,ppppuVar2,uStack_290);
  FUN_10a002568();
  if ((char)bStack_281 < '\0') {
    __ZdlPv(pppuStack_298);
  }
  FUN_10a002568(&ppuStack_178,&UNK_10f63e033,9);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEi();
  FUN_10a002568(&ppuStack_178,&UNK_10f63e03d,10);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
  FUN_10a002568();
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEElsEm();
  FUN_10a002568();
  func_0x00010a002480(param_1,&ppuStack_170,&pppuStack_298);
  appuStack_210[0] = &PTR_DAT_11088d708;
  ppuStack_280 = &PTR_DAT_11088d6e0;
  ppuStack_278 = &PTR_DAT_11088d7b0;
  if (cStack_221 < '\0') {
    __ZdlPv(uStack_238);
  }
  ppuVar1 = (undefined **)
            (PTR___ZTVNSt3__115basic_streambufIcNS_11char_traitsIcEEEE_110346b20 + 0x10);
  ppuStack_278 = ppuVar1;
  __ZNSt3__16localeD1Ev(auStack_270);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_280,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_210);
  appuStack_108[0] = &PTR_DAT_11088d708;
  ppuStack_178 = &PTR_DAT_11088d6e0;
  ppuStack_170 = &PTR_DAT_11088d7b0;
  if (cStack_119 < '\0') {
    __ZdlPv(uStack_130);
  }
  ppuStack_170 = ppuVar1;
  __ZNSt3__16localeD1Ev(auStack_168);
  __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_178,&PTR_PTR_11088d720);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_108);
  return;
}



/* Entry: 10a128ba0; end: 10a128c03;  */

void FUN_10a128ba0(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar1 = *(long *)(param_1 + 0x20) + 1;
    *(ulong *)(param_1 + 0x20) = uVar1;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
    if (0x3ff < uVar1) {
      __ZdlPv(**(undefined8 **)(param_1 + 8));
      *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 8;
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -0x200;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10a128c04);
  (*pcVar2)();
}



/* Entry: 10a128c04; end: 10a128c87;  */

void FUN_10a128c04(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  
  lVar3 = *(long *)(param_1 + 8);
  uVar2 = 0;
  if (*(long *)(param_1 + 0x10) != lVar3) {
    uVar2 = (*(long *)(param_1 + 0x10) - lVar3) * 0x40 - 1;
  }
  lVar4 = *(long *)(param_1 + 0x28);
  uVar5 = lVar4 + *(long *)(param_1 + 0x20);
  if (uVar2 == uVar5) {
    FUN_10a144da8(param_1);
    lVar4 = *(long *)(param_1 + 0x28);
    lVar3 = *(long *)(param_1 + 8);
    uVar5 = *(long *)(param_1 + 0x20) + lVar4;
  }
  puVar1 = (undefined4 *)(*(long *)(lVar3 + (uVar5 >> 9) * 8) + (uVar5 & 0x1ff) * 8);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(long *)(param_1 + 0x28) = lVar4 + 1;
  return;
}



/* Entry: 10a128c88; end: 10a128e1b;  */

void FUN_10a128c88(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(plVar5);
      return;
    }
  }
  return;
}



/* Entry: 10a128e1c; end: 10a1293cb;  */

/* WARNING: Removing unreachable block (ram,0x00010a129088) */

undefined * FUN_10a128e1c(undefined *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  ulong *puVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  undefined *puVar11;
  int iVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  undefined *puVar20;
  undefined *puStack_918;
  undefined8 uStack_910;
  undefined1 uStack_908;
  undefined *puStack_900;
  undefined8 uStack_8f8;
  undefined1 uStack_8f0;
  undefined **ppuStack_8e8;
  undefined *puStack_8e0;
  undefined *puStack_8d8;
  ulong uStack_8d0;
  ulong uStack_8c8;
  ulong uStack_8c0;
  undefined4 uStack_8b8;
  undefined **ppuStack_8b0;
  undefined *puStack_8a8;
  undefined8 uStack_8a0;
  undefined1 uStack_898;
  undefined *puStack_890;
  undefined8 uStack_888;
  undefined1 uStack_880;
  int iStack_878;
  undefined1 auStack_870 [1024];
  undefined1 auStack_470 [992];
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  long lStack_70;
  long *plStack_68;
  
  if ((((long *)*param_2)[2] == 0) &&
     ((lVar15 = *(long *)*param_2, *(int *)(lVar15 + 8) < 0 || ((*(byte *)(lVar15 + 0x4a) & 1) == 0)
      ))) {
    if ((*(long *)(*param_2 + 0x10) == 0) ||
       (((uint)*(undefined8 *)(*(long *)(*param_2 + 0x10) + 0x10) >> 1 & 1) != 0)) {
      puVar11 = *(undefined **)(param_1 + 0xc0);
      puStack_88 = *(undefined **)(param_1 + 0xc0);
      uStack_90 = *(undefined8 *)(param_1 + 0xb8);
      if (puVar11 != (undefined *)0x0) {
        plVar9 = (long *)(puVar11 + 0x10);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = *plVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      lStack_80 = *(long *)*param_2;
      puVar18 = (undefined *)((long *)*param_2)[1];
      lVar15 = lStack_80;
      if (puVar18 != (undefined *)0x0) {
        plVar9 = (long *)(puVar18 + 0x10);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = *plVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        lVar15 = *(long *)*param_2;
      }
      uVar3 = *(undefined4 *)(lVar15 + 8);
      if (puVar11 != (undefined *)0x0) {
        plVar9 = (long *)(puVar11 + 0x10);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = *plVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      if (puVar18 != (undefined *)0x0) {
        plVar9 = (long *)(puVar18 + 0x10);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = *plVar9 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      lStack_70 = CONCAT44(lStack_70._4_4_,uVar3);
      plStack_68 = (long *)*param_3;
      if (plStack_68 != (long *)0x0) {
        plVar9 = (long *)((long)plStack_68 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = *plVar9 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar7 = (undefined8 *)0x98;
      puStack_78 = puVar18;
      __Znwm();
      *puVar7 = FUN_10a14862c;
      puVar7[1] = FUN_10a1488e0;
      func_0x0001092ba17c(puVar7 + 2);
      plVar9 = plStack_68;
      lVar15 = puVar7[7];
      if (lVar15 != 0) {
        plVar1 = (long *)(lVar15 + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = *plVar1 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      puVar7[10] = puStack_88;
      puVar7[9] = uStack_90;
      uStack_90 = 0;
      puStack_88 = (undefined *)0x0;
      puVar7[0xc] = puStack_78;
      puVar7[0xb] = lStack_80;
      lStack_80 = 0;
      puStack_78 = (undefined *)0x0;
      *(undefined4 *)(puVar7 + 0xd) = (undefined4)lStack_70;
      plStack_68 = (long *)0x0;
      puVar7[0xe] = plVar9;
      puVar7[0xf] = param_1;
      *(undefined1 *)(puVar7 + 0x10) = 0;
      *(undefined1 *)(puVar7 + 0x12) = 0;
      puVar8 = puVar7 + 0xf;
      func_0x0001092ba064(puVar8,puVar7);
      if (((ulong)puVar8 & 1) == 0) {
        FUN_10a133860(puVar7 + 0x11,puVar7 + 9);
        puVar7[0xf] = puVar7[0x11];
        plVar9 = (long *)(puVar7[0x11] + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar5) {
            *plVar9 = *plVar9 + 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (((uint)*(undefined8 *)(puVar7[0xf] + 0x10) >> 1 & 1) == 0) {
          *(undefined1 *)(puVar7 + 0x12) = 1;
          lVar19 = puVar7[0xf];
          plVar9 = (long *)(lVar19 + 0x10);
          do {
            lVar17 = *plVar9;
            if (lVar17 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar5) {
                *plVar9 = 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                func_0x000109d1b588(lVar19 + 0x18,&stack0xffffffffffffffa8);
                *(undefined8 *)(lVar19 + 0x10) = 0;
                goto LAB_10a1291d8;
              }
            }
            else {
              ClearExclusiveLocal();
            }
          } while (((uint)lVar17 >> 1 & 1) == 0);
        }
        plVar9 = (long *)puVar7[0xf];
        if (((uint)*(undefined8 *)(puVar7[0xf] + 0x10) >> 5 & 1) != 0) {
          func_0x0001092af97c(plVar9 + 0x12);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10a1292c0);
          (*pcVar6)();
        }
        if (plVar9 != (long *)0x0) {
          puVar2 = (ulong *)(plVar9 + 1);
          do {
            uVar16 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar16 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar16 & 0x1fffffffc) == 4) {
            do {
              uVar16 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar16 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar16 - 1 == 0) {
              (**(code **)(*plVar9 + 8))();
            }
          }
        }
        plVar9 = (long *)puVar7[0x11];
        if (plVar9 != (long *)0x0) {
          puVar2 = (ulong *)(plVar9 + 1);
          do {
            uVar16 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar16 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar16 & 0x1fffffffc) == 4) {
            do {
              uVar16 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar16 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar16 - 1 == 0) {
              (**(code **)(*plVar9 + 8))();
            }
          }
        }
        func_0x0001092ba100(puVar7 + 2);
        plVar9 = (long *)puVar7[0xe];
        if (plVar9 != (long *)0x0) {
          puVar2 = (ulong *)(plVar9 + 1);
          do {
            uVar16 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar16 - 4;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if ((uVar16 & 0x1fffffffc) == 4) {
            do {
              uVar16 = *puVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar16 - 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (uVar16 - 1 == 0) {
              (**(code **)(*plVar9 + 8))();
            }
          }
        }
        if (puVar7[0xc] != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        if (puVar7[10] != 0) {
          __ZNSt3__119__shared_weak_count14__release_weakEv();
        }
        func_0x000109d1a1d0(puVar7 + 2);
        __ZdlPv(puVar7);
      }
LAB_10a1291d8:
      lVar19 = *param_2;
      plVar9 = *(long **)(lVar19 + 0x10);
      if (plVar9 != (long *)0x0) {
        puVar2 = (ulong *)(plVar9 + 1);
        do {
          uVar16 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar16 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar16 & 0x1fffffffc) == 4) {
          do {
            uVar16 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar16 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar16 - 1 == 0) {
            (**(code **)(*plVar9 + 8))();
          }
        }
      }
      *(long *)(lVar19 + 0x10) = lVar15;
      if (plStack_68 != (long *)0x0) {
        puVar2 = (ulong *)(plStack_68 + 1);
        do {
          uVar16 = *puVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar5) {
            *puVar2 = uVar16 - 4;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if ((uVar16 & 0x1fffffffc) == 4) {
          do {
            uVar16 = *puVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar16 - 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (uVar16 - 1 == 0) {
            (**(code **)(*plStack_68 + 8))();
          }
        }
      }
      if (puStack_78 != (undefined *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      param_1 = puStack_88;
      if (puStack_88 != (undefined *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv();
      }
      if (puVar18 != (undefined *)0x0) {
        __ZNSt3__119__shared_weak_count14__release_weakEv(puVar18);
        param_1 = puVar18;
      }
      if (puVar11 != (undefined *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)(puVar11);
        return puVar11;
      }
    }
    else if (param_1[200] == '\x01') {
      func_0x00010ae02ecc(0,*(undefined4 *)(*(long *)*param_2 + 8));
      ppuVar14 = &PTR_PTR_1132fff80;
      ppuVar13 = ppuVar14;
      FUN_10ae079a0();
      func_0x00010ae02edc();
      lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar11 = (undefined *)0x0;
      if (ppuVar13 != (undefined **)0x0) {
        FUN_10ae03188(&puStack_8a8,auStack_470,0x400,auStack_870,0x400,ppuVar13[0x13],ppuVar13[0xf],
                      ppuVar13 + 0x14,0x400);
        puStack_918 = puStack_890;
        uStack_910 = uStack_888;
        puStack_900 = puStack_8a8;
        uStack_8f8 = uStack_8a0;
        uStack_908 = uStack_880;
        if (iStack_878 != 0) {
          puStack_918 = &UNK_10f6c352e;
          uStack_910 = 0x10;
          puStack_900 = &UNK_10f6c352e;
          uStack_8f8 = 0x10;
          uStack_908 = 0;
          uStack_898 = 0;
        }
        puVar20 = ppuVar13[0x12];
        puVar18 = ppuVar13[0xb];
        uVar10 = 0;
        _clock_gettime_nsec_np();
        uVar16 = uVar10;
        _pthread_self();
        _pthread_mach_thread_np();
        ppuStack_8e8 = ppuVar13 + 1;
        uStack_8b8 = *(undefined4 *)(ppuVar13 + 0xe);
        uStack_8c0 = uVar16 & 0xffffffff;
        ppuStack_8b0 = ppuVar13 + 0x10;
        puVar11 = *ppuVar13;
        ppuVar14 = (undefined **)&ppuStack_8e8;
        uStack_8f0 = uStack_898;
        puStack_8e0 = puVar18;
        puStack_8d8 = puVar20;
        uStack_8d0 = (ulong)(puVar20 != (undefined *)0x0);
        uStack_8c8 = uVar10;
        FUN_10ae0784c(puVar11,ppuVar14,&puStack_900,&puStack_918);
      }
      iVar12 = (int)ppuVar14;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
        return puVar11;
      }
      ___stack_chk_fail();
      if (iVar12 == 0) {
        __Unwind_Resume();
      }
      func_0x000104bd46a0();
      func_0x00010ae087bc();
      FUN_10ae07e54(puVar11);
      return puVar11;
    }
  }
  return param_1;
}



/* Entry: 10a1293cc; end: 10a12952b;  */

long FUN_10a1293cc(long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 != (long *)0x0) {
    puVar1 = (ulong *)(plVar4 + 1);
    do {
      uVar5 = *puVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = uVar5 - 4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((uVar5 & 0x1fffffffc) == 4) {
      do {
        uVar5 = *puVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar5 - 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (uVar5 - 1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(long *)(param_1 + 8) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10a12952c; end: 10a12960b;  */

void FUN_10a12952c(long *param_1,undefined8 *param_2,int param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  plVar5 = (long *)*param_2;
  if ((plVar5 != (long *)0x0) && (lVar4 = *plVar5, lVar4 != 0)) {
    if ((param_3 != 0) && (plVar1 = plVar5 + 2, *plVar1 != 0)) {
      plVar5 = (long *)*param_2;
      if (((uint)*(undefined8 *)(*plVar1 + 0x10) >> 1 & 1) == 0) {
        FUN_109d1a244(plVar5 + 2);
        plVar5 = (long *)*param_2;
      }
      if ((plVar5 == (long *)0x0) || (lVar4 = *plVar5, lVar4 == 0)) goto LAB_10a1295f8;
    }
    if (plVar5[2] != 0) {
      if (((uint)*(undefined8 *)(plVar5[2] + 0x10) >> 1 & 1) == 0) goto LAB_10a1295f8;
      plVar5 = (long *)*param_2;
      lVar4 = *plVar5;
    }
    if (((*(long *)(lVar4 + 0x30) - *(long *)(lVar4 + 0x28) & 0xffffffff0U) != 0) &&
       (-1 < *(int *)(lVar4 + 8))) {
      (**(code **)(*(long *)*plVar5 + 0x18))();
      lVar4 = plVar5[1];
      lVar6 = *plVar5;
      param_1[1] = plVar5[1];
      *param_1 = lVar6;
      if (lVar4 == 0) {
        return;
      }
      plVar5 = (long *)(lVar4 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      return;
    }
  }
LAB_10a1295f8:
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a12960c; end: 10a12967f;  */

void FUN_10a12960c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = (long *)*param_1;
  if ((plVar2 != (long *)0x0) && (plVar1 = (long *)*plVar2, plVar1 != (long *)0x0)) {
    if (plVar2[2] != 0) {
      if (((uint)*(undefined8 *)(plVar2[2] + 0x10) >> 1 & 1) == 0) {
        return;
      }
      plVar1 = *(long **)*param_1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010a129648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1);
    return;
  }
  return;
}



/* Entry: 10a129680; end: 10a1296fb;  */

void FUN_10a129680(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = (int)param_1[3];
  if (iVar5 != param_2) {
    lVar1 = *param_1;
    lVar2 = param_1[1];
    do {
      if ((ulong)(param_1[1] - *param_1 >> 4) <= (ulong)(long)iVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10a1296fc);
        (*pcVar4)();
      }
      FUN_10a128c88(*param_1 + (long)iVar5 * 0x10);
      iVar5 = (int)param_1[3] + 1;
      iVar3 = 0;
      iVar6 = (int)((ulong)(lVar2 - lVar1) >> 4);
      if (iVar6 != 0) {
        iVar3 = iVar5 / iVar6;
      }
      iVar5 = iVar5 - iVar3 * iVar6;
      *(int *)(param_1 + 3) = iVar5;
    } while (iVar5 != param_2);
  }
  return;
}



/* Entry: 10a1296fc; end: 10a12978b;  */

uint FUN_10a1296fc(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  
  iVar1 = *(int *)((long)param_1 + 0x1c) + 1;
  uVar6 = param_1[1] - *param_1;
  iVar4 = 0;
  iVar7 = (int)(uVar6 >> 4);
  if (iVar7 != 0) {
    iVar4 = iVar1 / iVar7;
  }
  uVar8 = iVar1 - iVar4 * iVar7;
  uVar3 = uVar8;
  if (uVar8 == *(uint *)(param_1 + 3) && -1 < *(int *)((long)param_1 + 0x1c)) {
    uVar3 = 0xffffffff;
  }
  if ((int)uVar3 < 0) {
    uVar8 = 0xffffffff;
  }
  else {
    if ((ulong)((long)uVar6 >> 4) <= (ulong)uVar3) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10a12978c);
      (*pcVar5)();
    }
    lVar2 = *param_1 + (ulong)uVar3 * 0x10;
    FUN_10a128c88(lVar2);
    FUN_10a133fa0(lVar2,param_2);
    *(uint *)((long)param_1 + 0x1c) = uVar3;
  }
  return uVar8;
}



/* Entry: 10a12978c; end: 10a129827;  */

int FUN_10a12978c(long *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  
  iVar1 = (int)param_1[3];
  if (iVar1 != *(int *)((long)param_1 + 0x1c)) {
    lVar5 = *param_1;
    lVar6 = param_1[1];
    do {
      if ((ulong)(lVar6 - lVar5 >> 4) <= (ulong)(long)iVar1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10a129810);
        (*pcVar2)();
      }
      plVar4 = *(long **)(lVar5 + (long)iVar1 * 0x10);
      if ((plVar4 == (long *)0x0) || (lVar5 = *plVar4, lVar5 == 0)) {
        iVar3 = -1;
      }
      else {
        iVar3 = *(int *)(lVar5 + 8);
      }
      if (iVar3 == param_2) {
        return iVar1;
      }
      lVar5 = *param_1;
      lVar6 = param_1[1];
      iVar3 = 0;
      iVar7 = (int)((ulong)(lVar6 - lVar5) >> 4);
      if (iVar7 != 0) {
        iVar3 = (iVar1 + 1) / iVar7;
      }
      iVar1 = (iVar1 + 1) - iVar3 * iVar7;
    } while (iVar1 != *(int *)((long)param_1 + 0x1c));
  }
  return -1;
}



/* Entry: 10a129828; end: 10a129887;  */

undefined8 * FUN_10a129828(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a129888; end: 10a12988b;  */

undefined8 * FUN_10a129888(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  param_1[0x11] = &PTR_DAT_110ba6200;
  param_1[0x23] = &PTR_FUN_110ba6278;
  func_0x00010a004e5c(param_1 + 0x14);
  func_0x00010a004e04(param_1 + 0x12);
  *param_1 = &PTR_FUN_110ba63b0;
  puVar2 = (undefined8 *)param_1[0xd];
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
    if ((undefined8 *)param_1[0xe] != puVar2) {
      puVar1 = (undefined8 *)param_1[0xe] + -7;
      do {
        puVar3 = puVar1 + -2;
        (**(code **)*puVar1)(puVar1);
        puVar1 = puVar1 + -9;
      } while (puVar3 != puVar2);
      puVar1 = (undefined8 *)param_1[0xd];
    }
    param_1[0xe] = puVar2;
    __ZdlPv(puVar1);
  }
  __ZNSt3__15mutexD1Ev(param_1 + 5);
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a12988c; end: 10a12989f;  */

void FUN_10a12988c(void)

{
  func_0x00010a13401c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1298a0; end: 10a1298a7;  */

undefined8 * FUN_10a1298a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = param_1 + -0x11;
  *param_1 = &PTR_DAT_110ba6200;
  param_1[0x12] = &PTR_FUN_110ba6278;
  func_0x00010a004e5c(param_1 + 3);
  func_0x00010a004e04(param_1 + 1);
  *puVar2 = &PTR_FUN_110ba63b0;
  puVar3 = (undefined8 *)param_1[-4];
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = puVar3;
    if ((undefined8 *)param_1[-3] != puVar3) {
      puVar1 = (undefined8 *)param_1[-3] + -7;
      do {
        puVar4 = puVar1 + -2;
        (**(code **)*puVar1)(puVar1);
        puVar1 = puVar1 + -9;
      } while (puVar4 != puVar3);
      puVar1 = (undefined8 *)param_1[-4];
    }
    param_1[-3] = puVar3;
    __ZdlPv(puVar1);
  }
  __ZNSt3__15mutexD1Ev(param_1 + -0xc);
  if (param_1[-0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar2 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x10);
  return puVar2;
}



/* Entry: 10a1298a8; end: 10a1298bf;  */

void FUN_10a1298a8(long param_1)

{
  func_0x00010a13401c(param_1 + -0x88);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1298c0; end: 10a1298cf;  */

undefined8 * FUN_10a1298c0(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  puVar1[0x11] = &PTR_DAT_110ba6200;
  puVar1[0x23] = &PTR_FUN_110ba6278;
  func_0x00010a004e5c(puVar1 + 0x14);
  func_0x00010a004e04(puVar1 + 0x12);
  *puVar1 = &PTR_FUN_110ba63b0;
  puVar3 = (undefined8 *)puVar1[0xd];
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = puVar3;
    if ((undefined8 *)puVar1[0xe] != puVar3) {
      puVar2 = (undefined8 *)puVar1[0xe] + -7;
      do {
        puVar4 = puVar2 + -2;
        (**(code **)*puVar2)(puVar2);
        puVar2 = puVar2 + -9;
      } while (puVar4 != puVar3);
      puVar2 = (undefined8 *)puVar1[0xd];
    }
    puVar1[0xe] = puVar3;
    __ZdlPv(puVar2);
  }
  __ZNSt3__15mutexD1Ev(puVar1 + 5);
  if (puVar1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *puVar1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(puVar1 + 1);
  return puVar1;
}



/* Entry: 10a1298d0; end: 10a12995f;  */

void FUN_10a1298d0(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + -0x18);
  func_0x00010a13401c((long)param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((long)param_1 + lVar1);
  return;
}



/* Entry: 10a129960; end: 10a129963;  */

undefined8 * FUN_10a129960(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_110ba63b0;
  puVar2 = (undefined8 *)param_1[0xd];
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
    if ((undefined8 *)param_1[0xe] != puVar2) {
      puVar1 = (undefined8 *)param_1[0xe] + -7;
      do {
        puVar3 = puVar1 + -2;
        (**(code **)*puVar1)(puVar1);
        puVar1 = puVar1 + -9;
      } while (puVar3 != puVar2);
      puVar1 = (undefined8 *)param_1[0xd];
    }
    param_1[0xe] = puVar2;
    __ZdlPv(puVar1);
  }
  __ZNSt3__15mutexD1Ev(param_1 + 5);
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a129964; end: 10a129977;  */

void FUN_10a129964(void)

{
  FUN_10a110190();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a129978; end: 10a12997f;  */

void FUN_10a129978(void)

{
  return;
}



/* Entry: 10a129980; end: 10a129993;  */

void FUN_10a129980(void)

{
  func_0x00010a0520b4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a129994; end: 10a129997;  */

undefined8 * FUN_10a129994(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba77b8;
  if (*(char *)(param_1 + 0xf) == '\x01') {
    FUN_10a11114c(param_1 + 0xc);
  }
  func_0x00010a138d68(param_1 + 10);
  if (param_1[9] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110ba7760;
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    __ZdlPv(param_1[5]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a129998; end: 10a1299ab;  */

void FUN_10a129998(void)

{
  func_0x00010a134060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a1299ac; end: 10a129a23;  */

undefined8 * FUN_10a1299ac(undefined8 *param_1)

{
  FUN_109d2f478(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a129a24; end: 10a129a47;  */

long FUN_10a129a24(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  
  FUN_109d2f478();
  *(undefined ***)(param_1 + -0x18) = &PTR_DAT_110b17898;
  plVar5 = *(long **)(param_1 + -8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
    }
  }
  return param_1 + -0x10;
}



/* Entry: 10a129a48; end: 10a129a53;  */

void FUN_10a129a48(long param_1)

{
  FUN_109d2f478(param_1);
  *(undefined8 *)(param_1 + -0x18) = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)((undefined8 *)(param_1 + -0x18));
  return;
}



/* Entry: 10a129a54; end: 10a129a67;  */

void FUN_10a129a54(void)

{
  func_0x00010aa71c88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a129a68; end: 10a129a6f;  */

undefined8 * FUN_10a129a68(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_110c3ec18;
  *param_1 = &PTR_DAT_110c3ecb8;
  param_1[5] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x18);
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a129a70; end: 10a129a87;  */

void FUN_10a129a70(long param_1)

{
  func_0x00010aa71c88(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a129a88; end: 10a129a8f;  */

undefined8 * FUN_10a129a88(undefined8 *param_1)

{
  param_1[-7] = &PTR_FUN_110c3ec18;
  param_1[-5] = &PTR_DAT_110c3ecb8;
  *param_1 = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x13);
  if (param_1[0x12] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 9);
  if (param_1[8] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a129a90; end: 10a129aa7;  */

void FUN_10a129a90(long param_1)

{
  func_0x00010aa71c88(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a129aa8; end: 10a129b47;  */

undefined8 * FUN_10a129aa8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba5be0;
  func_0x00010a1340b4(param_1 + 0xb);
  func_0x00010a12d2c4(param_1 + 6);
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    __ZdlPv(param_1[3]);
  }
  FUN_10a13cacc(param_1 + 1);
  return param_1;
}



/* Entry: 10a129b48; end: 10a129b57;  */

void FUN_10a129b48(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 10a129b58; end: 10a129c0f;  */

undefined8 * FUN_10a129b58(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110ba64e0;
  func_0x00010a1400c0(param_1 + 0x10);
  func_0x00010a140068(param_1 + 6);
  func_0x00010a140010(param_1 + 4);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a129c10; end: 10a129c13;  */

undefined8 * FUN_10a129c10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a129c14; end: 10a129c27;  */

void FUN_10a129c14(void)

{
  func_0x00010aa71c88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a129c28; end: 10a129c2f;  */

undefined8 * FUN_10a129c28(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_110c3ec18;
  *param_1 = &PTR_DAT_110c3ecb8;
  param_1[5] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x18);
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a129c30; end: 10a129c47;  */

void FUN_10a129c30(long param_1)

{
  func_0x00010aa71c88(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a129c48; end: 10a129c4f;  */

undefined8 * FUN_10a129c48(undefined8 *param_1)

{
  param_1[-7] = &PTR_FUN_110c3ec18;
  param_1[-5] = &PTR_DAT_110c3ecb8;
  *param_1 = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x13);
  if (param_1[0x12] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 9);
  if (param_1[8] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a129c50; end: 10a129c67;  */

void FUN_10a129c50(long param_1)

{
  func_0x00010aa71c88(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a129c68; end: 10a129c6b;  */

undefined8 * FUN_10a129c68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a129c6c; end: 10a129c7f;  */

void FUN_10a129c6c(void)

{
  func_0x00010aa71c88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a129c80; end: 10a129c87;  */

undefined8 * FUN_10a129c80(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_110c3ec18;
  *param_1 = &PTR_DAT_110c3ecb8;
  param_1[5] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x18);
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a129c88; end: 10a129c9f;  */

void FUN_10a129c88(long param_1)

{
  func_0x00010aa71c88(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a129ca0; end: 10a129ca7;  */

undefined8 * FUN_10a129ca0(undefined8 *param_1)

{
  param_1[-7] = &PTR_FUN_110c3ec18;
  param_1[-5] = &PTR_DAT_110c3ecb8;
  *param_1 = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x13);
  if (param_1[0x12] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 9);
  if (param_1[8] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a129ca8; end: 10a129cbf;  */

void FUN_10a129ca8(long param_1)

{
  func_0x00010aa71c88(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a129cc0; end: 10a129cc3;  */

undefined8 * FUN_10a129cc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110c3ec18;
  param_1[2] = &PTR_DAT_110c3ecb8;
  param_1[7] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x1a);
  if (param_1[0x19] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x10);
  if (param_1[0xf] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    __ZdlPv(param_1[0xb]);
  }
  if (param_1[6] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[2] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 3);
  return param_1;
}



/* Entry: 10a129cc4; end: 10a129cd7;  */

void FUN_10a129cc4(void)

{
  func_0x00010aa71c88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a129cd8; end: 10a129cdf;  */

undefined8 * FUN_10a129cd8(undefined8 *param_1)

{
  param_1[-2] = &PTR_FUN_110c3ec18;
  *param_1 = &PTR_DAT_110c3ecb8;
  param_1[5] = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x18);
  if (param_1[0x17] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0xe);
  if (param_1[0xd] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (param_1[4] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1 + -2;
}



/* Entry: 10a129ce0; end: 10a129cf7;  */

void FUN_10a129ce0(long param_1)

{
  func_0x00010aa71c88(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a129cf8; end: 10a129cff;  */

undefined8 * FUN_10a129cf8(undefined8 *param_1)

{
  param_1[-7] = &PTR_FUN_110c3ec18;
  param_1[-5] = &PTR_DAT_110c3ecb8;
  *param_1 = &PTR_DAT_110c3ed10;
  func_0x00010aa92258(param_1 + 0x13);
  if (param_1[0x12] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 9);
  if (param_1[8] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  if (param_1[-1] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  param_1[-5] = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + -4);
  return param_1 + -7;
}



/* Entry: 10a129d00; end: 10a129d17;  */

void FUN_10a129d00(long param_1)

{
  func_0x00010aa71c88(param_1 + -0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10a129d18; end: 10a129d9f;  */

undefined8 * FUN_10a129d18(undefined8 *param_1)

{
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    __ZdlPv(param_1[4]);
  }
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a129da0; end: 10a129daf;  */

ulong * FUN_10a129da0(ulong *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (ulong *)&UNK_10f63e22e;
  func_0x000107c613d0();
  if ((ulong *)0x7ffffffffffffff7 < puVar2) {
    func_0x000107c2b040();
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar2 = (ulong *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar2 != 0) {
        puVar4 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar4;
        puVar4[1] = 0x434948504152475f;
        *puVar4 = 0x45524f43534e454c;
        puVar4[3] = 0x525f595a414c5f54;
        puVar4[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar4 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar4 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar4 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        puVar2 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar2;
      }
    }
    return puVar2;
  }
  if (puVar2 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar2;
    puVar3 = param_1;
    if (puVar2 == (ulong *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar1 = (ulong *)0x19;
    if (((ulong)puVar2 | 7) != 0x17) {
      puVar1 = (ulong *)(((ulong)puVar2 | 7) + 1);
    }
    puVar3 = puVar1;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar2;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  func_0x000107c610b8(puVar3,&UNK_10f63e22e,puVar2);
code_r0x0001000537e0:
  *(undefined1 *)((long)puVar3 + (long)puVar2) = 0;
  return param_1;
}



/* Entry: 10a129db0; end: 10a129e0f;  */

undefined8 * FUN_10a129db0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a129e10; end: 10a129e1f;  */

ulong * FUN_10a129e10(ulong *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (ulong *)&UNK_10f63e23d;
  func_0x000107c613d0();
  if ((ulong *)0x7ffffffffffffff7 < puVar2) {
    func_0x000107c2b040();
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar2 = (ulong *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar2 != 0) {
        puVar4 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar4;
        puVar4[1] = 0x434948504152475f;
        *puVar4 = 0x45524f43534e454c;
        puVar4[3] = 0x525f595a414c5f54;
        puVar4[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar4 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar4 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar4 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        puVar2 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar2;
      }
    }
    return puVar2;
  }
  if (puVar2 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar2;
    puVar3 = param_1;
    if (puVar2 == (ulong *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar1 = (ulong *)0x19;
    if (((ulong)puVar2 | 7) != 0x17) {
      puVar1 = (ulong *)(((ulong)puVar2 | 7) + 1);
    }
    puVar3 = puVar1;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar2;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  func_0x000107c610b8(puVar3,&UNK_10f63e23d,puVar2);
code_r0x0001000537e0:
  *(undefined1 *)((long)puVar3 + (long)puVar2) = 0;
  return param_1;
}



/* Entry: 10a129e20; end: 10a129e97;  */

undefined8 * FUN_10a129e20(undefined8 *param_1)

{
  func_0x00010a142dd4(param_1 + 3);
  *param_1 = &PTR_DAT_110b17898;
  func_0x00010a004dac(param_1 + 1);
  return param_1;
}



/* Entry: 10a129e98; end: 10a129ea7;  */

ulong * FUN_10a129e98(ulong *param_1)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  
  puVar2 = (ulong *)&UNK_10f63e247;
  func_0x000107c613d0();
  if ((ulong *)0x7ffffffffffffff7 < puVar2) {
    func_0x000107c2b040();
    if ((bRam00000001132ffc88 & 1) == 0) {
      puVar2 = (ulong *)0x1132ffc88;
      func_0x000107c60e48();
      if ((int)puVar2 != 0) {
        puVar4 = (undefined8 *)0x30;
        func_0x000107c60e20();
        uRam00000001132ffc38 = 0x8000000000000030;
        uRam00000001132ffc30 = 0x2c;
        puRam00000001132ffc28 = puVar4;
        puVar4[1] = 0x434948504152475f;
        *puVar4 = 0x45524f43534e454c;
        puVar4[3] = 0x525f595a414c5f54;
        puVar4[2] = 0x5845544e4f435f53;
        *(undefined8 *)((long)puVar4 + 0x24) = 0x54494e495f454352;
        *(undefined8 *)((long)puVar4 + 0x1c) = 0x554f5345525f595a;
        *(undefined1 *)((long)puVar4 + 0x2c) = 0;
        uRam00000001132ffc40 = 0;
        pcRam00000001132ffc48 = FUN_10a09e854;
        ppuRam00000001132ffc50 = &PTR_DAT_110ba0fe0;
        func_0x000107c60e34(0x10a08e670,0x1132ffc28,0x100000000);
        puVar2 = (ulong *)0x1132ffc88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR____cxa_guard_release_110346be8)(0x1132ffc88);
        return puVar2;
      }
    }
    return puVar2;
  }
  if (puVar2 < (ulong *)0x17) {
    *(char *)((long)param_1 + 0x17) = (char)puVar2;
    puVar3 = param_1;
    if (puVar2 == (ulong *)0x0) goto code_r0x0001000537e0;
  }
  else {
    puVar1 = (ulong *)0x19;
    if (((ulong)puVar2 | 7) != 0x17) {
      puVar1 = (ulong *)(((ulong)puVar2 | 7) + 1);
    }
    puVar3 = puVar1;
    func_0x000107c60e20();
    param_1[1] = (ulong)puVar2;
    param_1[2] = (ulong)puVar1 | 0x8000000000000000;
    *param_1 = (ulong)puVar3;
  }
  func_0x000107c610b8(puVar3,&UNK_10f63e247,puVar2);
code_r0x0001000537e0:
  *(undefined1 *)((long)puVar3 + (long)puVar2) = 0;
  return param_1;
}


