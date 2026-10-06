/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108403030; end: 108403033;  */

undefined8 * FUN_108403030(undefined8 *param_1)

{
  undefined1 uVar1;
  
  if (param_1[2] != 0) {
    uVar1 = *(char *)(param_1 + 6) == '\x01';
    if ((bool)uVar1) {
      FUN_1083fcf3c(param_1 + 4);
      FUN_1083f9178(param_1[2] + 0x30,*(undefined4 *)(param_1 + 7));
      func_0x000108403a14(param_1[4]);
      if (!(bool)uVar1) {
        func_0x000108403c80();
      }
    }
  }
  FUN_10840251c(param_1 + 4);
  *param_1 = &PTR_DAT_110a474d0;
  FUN_1083c8734(param_1 + 1);
  return param_1;
}



/* Entry: 108403034; end: 108403047;  */

void FUN_108403034(void)

{
  FUN_108403130();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108403048; end: 10840305b;  */

undefined8 FUN_108403048(void)

{
  return 0;
}



/* Entry: 10840305c; end: 10840312b;  */

void FUN_10840305c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  undefined1 in_ZR;
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    puVar2 = (undefined8 *)(param_1 + 0x10);
    *puVar2 = param_2;
    FUN_10840226c(param_1 + 0x20,puVar2);
    FUN_1083fcf3c(param_1 + 0x20);
    uVar1 = *puVar2;
    func_0x00010840371c(uVar1,*(undefined8 *)(param_1 + 0x18));
    if ((int)uVar1 == 0) {
      return;
    }
    func_0x000108403a14(*(undefined8 *)(param_1 + 0x20));
    if (!(bool)in_ZR) {
      func_0x000108403c80();
    }
  }
  if (param_4 == 0) {
    func_0x0001083f9eb4(*(long *)(param_1 + 0x20) + 0x30,param_3,*(undefined4 *)(param_1 + 0x28),
                        *(undefined4 *)(param_1 + 0x38));
  }
  else {
    FUN_1083f9f3c(*(long *)(param_1 + 0x20) + 0x30,param_3,*(undefined4 *)(param_4 + 8),
                  *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x38));
  }
  if (param_6 != 0) {
    func_0x000108403750();
  }
  return;
}



/* Entry: 10840312c; end: 10840312f;  */

undefined8 FUN_10840312c(void)

{
  return 0;
}



/* Entry: 108403130; end: 108403197;  */

undefined8 * FUN_108403130(undefined8 *param_1)

{
  undefined1 uVar1;
  
  if (param_1[2] != 0) {
    uVar1 = *(char *)(param_1 + 6) == '\x01';
    if ((bool)uVar1) {
      FUN_1083fcf3c(param_1 + 4);
      FUN_1083f9178(param_1[2] + 0x30,*(undefined4 *)(param_1 + 7));
      func_0x000108403a14(param_1[4]);
      if (!(bool)uVar1) {
        func_0x000108403c80();
      }
    }
  }
  FUN_10840251c(param_1 + 4);
  *param_1 = &PTR_DAT_110a474d0;
  FUN_1083c8734(param_1 + 1);
  return param_1;
}



/* Entry: 108403198; end: 1084031a3;  */

ulong * FUN_108403198(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x000108403d10();
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (long)(int)param_1[1] * 8;
    do {
      func_0x0001084028c8();
      uVar2 = uVar2 + 8;
    } while (uVar2 < uVar1);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    func_0x000108403a2c();
  }
  return param_1;
}



/* Entry: 1084031a4; end: 1084031eb;  */

ulong * FUN_1084031a4(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((int)param_1[1] != 0) {
    uVar2 = *param_1;
    uVar1 = uVar2 + (long)(int)param_1[1] * 8;
    do {
      func_0x0001084028c8();
      uVar2 = uVar2 + 8;
    } while (uVar2 < uVar1);
  }
  if ((*(byte *)((long)param_1 + 0xc) & 1) != 0) {
    func_0x000108403a2c();
  }
  return param_1;
}



/* Entry: 1084031ec; end: 10840326b;  */

undefined1 * FUN_1084031ec(undefined1 *param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 uStack_51;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)((*(uint *)(param_1 + 0xc) >> 1) - uVar2) < param_2) {
    if ((int)(uVar2 ^ 0x7fffffff) < param_2) {
      func_0x00010bdb1a68();
      pcStack_48 = FUN_10840326c;
      puVar4 = &uStack_51;
      puStack_50 = &stack0xfffffffffffffff0;
      func_0x00010831e648(puVar4,param_1);
      uVar2 = (uint)puVar4;
      if (uVar2 < 2) {
        uVar2 = 1;
      }
      return (undefined1 *)(ulong)uVar2;
    }
    uStack_38 = 0x7fffffff;
    uStack_40 = 8;
    FUN_10840fe24(&uStack_40,uVar2 + param_2);
    if (*(int *)(param_1 + 8) != 0) {
      func_0x000108403c04();
    }
    pbVar1 = param_1 + 0xc;
    param_1 = (undefined1 *)puVar3;
    if ((*pbVar1 & 1) != 0) {
      func_0x000108403a2c();
      param_1 = (undefined1 *)puVar3;
    }
    func_0x0001084039f0();
  }
  return param_1;
}



/* Entry: 10840326c; end: 108403297;  */

uint FUN_10840326c(undefined8 param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 uStack_11;
  
  puVar2 = &uStack_11;
  func_0x00010831e648(puVar2,param_1);
  uVar1 = (uint)puVar2;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 108403298; end: 10840335b;  */

void FUN_108403298(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  int extraout_w8;
  undefined8 *extraout_x9;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x19;
  int unaff_w20;
  uint unaff_w21;
  ulong uVar5;
  long lStack_38;
  
  func_0x000108403e64();
  lStack_38 = *(long *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  uVar5 = (ulong)param_2;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar5;
  func_0x000108403af4(SUB168(auVar1 * ZEXT816(0x18),8));
  puVar2 = extraout_x9;
  if (extraout_w8 != 0) {
    puVar2 = (undefined8 *)0xffffffffffffffff;
  }
  __Znam();
  *puVar2 = 0x18;
  puVar2[1] = uVar5;
  if (unaff_w20 != 0) {
    lVar3 = uVar5 * 0x18;
    puVar4 = puVar2 + 2;
    do {
      *(undefined4 *)puVar4 = 0;
      lVar3 = lVar3 + -0x18;
      puVar4 = puVar4 + 3;
    } while (lVar3 != 0);
  }
  *(undefined8 **)(unaff_x19 + 8) = puVar2 + 2;
  for (lVar3 = 0; (ulong)(unaff_w21 & ((int)unaff_w21 >> 0x1f ^ 0xffffffffU)) * 0x18 - lVar3 != 0;
      lVar3 = lVar3 + 0x18) {
    if (*(int *)(lStack_38 + lVar3) != 0) {
      FUN_10840335c();
    }
  }
  FUN_1084027e0(&lStack_38);
  return;
}



/* Entry: 10840335c; end: 108403463;  */

undefined8 FUN_10840335c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  int extraout_w11;
  int iVar2;
  int extraout_w11_00;
  undefined4 *extraout_x13;
  int extraout_w14;
  
  func_0x00010840389c();
  FUN_10840326c();
  func_0x0001084037b8();
  iVar2 = extraout_w11;
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    func_0x000108403cac();
    if (extraout_w14 == 0) break;
    bVar1 = (int)param_2 == extraout_w14;
    if ((bVar1) && (func_0x000108403cf0(), bVar1)) {
      *extraout_x13 = 0;
      func_0x0001084037a8(extraout_x13 + 2);
      return extraout_x8_00;
    }
    func_0x00010840369c();
    iVar2 = extraout_w11_00;
  }
  func_0x000108403724();
  return extraout_x8;
}



/* Entry: 108403464; end: 10840348f;  */

uint FUN_108403464(undefined8 param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 uStack_11;
  
  puVar2 = &uStack_11;
  FUN_108156ba4(puVar2,param_1);
  uVar1 = (uint)puVar2;
  if (uVar1 < 2) {
    uVar1 = 1;
  }
  return uVar1;
}



/* Entry: 108403490; end: 1084034d3;  */

undefined4 * FUN_108403490(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  FUN_108402744();
  param_1[2] = *param_2;
  FUN_1084034d4(param_1 + 4,param_2 + 2);
  *param_1 = param_3;
  return param_1;
}



/* Entry: 1084034d4; end: 10840351b;  */

undefined8 * FUN_1084034d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_1 != param_2) {
    *param_1 = *param_2;
    uVar1 = param_2[1];
    param_2[1] = 0;
    FUN_10831bde8(param_1 + 1,uVar1);
    *param_2 = 0;
  }
  return param_1;
}



/* Entry: 10840351c; end: 108403557;  */

void FUN_10840351c(long param_1)

{
  long unaff_x19;
  
  func_0x0001084038d8();
  if (*(int *)(param_1 + 8) != 0) {
    func_0x000108403c04();
  }
  if ((*(byte *)(unaff_x19 + 0xc) & 1) != 0) {
    func_0x000108403a2c();
  }
  func_0x0001084039f0();
  return;
}



/* Entry: 108403558; end: 10840359b;  */

void FUN_108403558(uint param_1,int param_2)

{
  long unaff_x20;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_2 <= (int)(param_1 ^ 0x7fffffff)) {
    uStack_18 = 0x7fffffff;
    uStack_20 = 8;
    FUN_10840fe24(&uStack_20,param_2 + param_1);
    return;
  }
  func_0x00010bdb1a68();
                    /* WARNING: Could not recover jumptable at 0x0001084035a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(unaff_x20 + 0x10) + 0x80))();
  return;
}



/* Entry: 10840359c; end: 108403f87;  */

void FUN_10840359c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001084035a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(unaff_x20 + 0x10) + 0x80))();
  return;
}



/* Entry: 108403f88; end: 1084040cf;  */

void FUN_108403f88(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined5 uStack_88;
  undefined3 uStack_83;
  undefined5 uStack_80;
  undefined8 uStack_7b;
  undefined8 uStack_70;
  
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_7b = 0;
  uStack_83 = 0;
  uStack_80 = 0;
  puVar9 = (undefined8 *)*param_2;
  puVar10 = puVar9 + param_2[1] * 0xc;
  for (; puVar9 != puVar10; puVar9 = puVar9 + 0xc) {
    if (puVar9[8] == 0) {
      if (puVar9[4] == 0) {
        puVar4 = &uStack_a0;
        func_0x0001083a82a0(&uStack_a0,puVar9 + 9,*(undefined4 *)(puVar9 + 2));
        uVar8 = *puVar4;
        uVar11 = puVar4[1];
      }
      else {
        puVar4 = &uStack_a0;
        func_0x0001083a82f8(&uStack_a0,puVar9 + 9,*(undefined4 *)(puVar9 + 2),puVar9[4],0);
        uVar8 = *puVar4;
        uVar11 = puVar4[1];
        uVar3 = puVar4[3];
        _memcpy(puVar4[2],puVar9[3],puVar9[4]);
        _memcpy(uVar3,puVar9[5],puVar9[6] << 2);
      }
      _memcpy(uVar11,puVar9[1],puVar9[2] << 3);
      lVar5 = puVar9[2];
    }
    else {
      puVar4 = &uStack_a0;
      func_0x0001083a82cc(&uStack_a0,puVar9 + 9,*(undefined4 *)(puVar9 + 2));
      uVar8 = *puVar4;
      lVar2 = puVar4[1];
      lVar1 = puVar9[1];
      lVar5 = puVar9[2];
      lVar7 = puVar9[7];
      for (lVar6 = 0; lVar5 != lVar6; lVar6 = lVar6 + 1) {
        uVar11 = *(undefined8 *)(lVar7 + lVar6 * 8);
        puVar4 = (undefined8 *)(lVar2 + lVar6 * 0x10);
        puVar4[1] = *(undefined8 *)(lVar1 + lVar6 * 8);
        *puVar4 = uVar11;
      }
    }
    _memcpy(uVar8,*puVar9,lVar5 << 1);
  }
  FUN_1083a7a38(param_1,&uStack_a0);
  FUN_1083a79f4(&uStack_a0);
  return;
}



/* Entry: 1084040d0; end: 108404157;  */

void FUN_1084040d0(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,long param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_58 = param_7[1];
  uVar1 = *param_7;
  uStack_50 = param_7[2];
  uVar2 = param_3;
  uStack_60 = uVar1;
  FUN_108404158(param_7 + 9,param_8,&uStack_60,param_7[7],param_7[8]);
  *param_1 = (long)param_7;
  param_1[1] = 1;
  param_1[2] = 0;
  *(int *)(param_1 + 3) = (int)uVar1;
  *(undefined4 *)((long)param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 4) = param_4;
  *(undefined4 *)((long)param_1 + 0x24) = param_5;
  *(undefined4 *)(param_1 + 5) = param_2;
  *(undefined4 *)((long)param_1 + 0x2c) = param_3;
  param_1[6] = param_6;
  return;
}



/* Entry: 108404158; end: 10840441b;  */

void FUN_108404158(ulong param_1,ulong param_2,ulong param_3,ulong param_4,int *param_5,
                  undefined8 param_6,long *param_7,float *param_8,long param_9)

{
  float *pfVar1;
  bool bVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  float *pfVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  float fStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  float fStack_218;
  float fStack_214;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  int iStack_1d0;
  float fStack_1cc;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  int iStack_110;
  float fStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  float fStack_70;
  undefined8 uStack_68;
  
  uStack_68 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  piVar4 = param_5;
  uVar17 = param_6;
  plVar8 = param_7;
  FUN_108350a34();
  iVar7 = (int)plVar8;
  iVar5 = (int)uVar17;
  fVar15 = (float)param_1;
  fVar19 = (float)param_2;
  fVar14 = (float)param_3;
  fVar18 = (float)param_4;
  lVar6 = param_7[1];
  lVar11 = param_7[2];
  bVar2 = false;
  uVar3 = false;
  if (fVar15 < fVar14) {
    bVar2 = false;
    uVar3 = false;
    if (!NAN(fVar19) && !NAN(fVar18)) {
      bVar2 = fVar19 < fVar18;
      uVar3 = fVar19 == fVar18;
    }
  }
  fStack_1f0 = fVar15;
  fStack_1ec = fVar19;
  fStack_1e8 = fVar14;
  fStack_1e4 = fVar18;
  if (bVar2) {
    if (param_9 == 0) {
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      piVar4 = (int *)&uStack_1e0;
      FUN_10838eb84();
      iVar7 = (int)lVar11;
      iVar5 = (int)lVar6;
      uStack_1e0 = CONCAT44(fVar19 + (float)(uStack_1e0 >> 0x20),fVar15 + (float)uStack_1e0);
      uStack_1d8 = CONCAT44(fVar18 + (float)(uStack_1d8 >> 0x20),fVar14 + (float)uStack_1d8);
    }
    else {
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      pfVar12 = (float *)(lVar6 + 4);
      for (; lVar11 != 0; lVar11 = lVar11 + -1) {
        uVar16 = *(ulong *)param_8;
        uVar17 = 0;
        fStack_1cc = -*pfVar12;
        iStack_1d0 = (int)*(undefined8 *)(pfVar12 + -1);
        iVar13 = iStack_1d0;
        fVar15 = fStack_1cc;
        func_0x000108404a80();
        uStack_1b8 = 0;
        uStack_1b0 = 0xc03f800000;
        iVar7 = 1;
        uStack_1c8 = uVar16;
        uStack_1c0 = uVar17;
        func_0x000108142084(&iStack_1d0,&fStack_1f0);
        uStack_108 = (undefined4)uVar16;
        uStack_104 = (undefined4)param_4;
        piVar4 = (int *)&uStack_1e0;
        iVar5 = (int)&iStack_110;
        iStack_110 = iVar13;
        fStack_10c = fVar15;
        func_0x00010838ed50();
        pfVar12 = pfVar12 + 2;
        param_8 = param_8 + 2;
      }
    }
  }
  else {
    pfVar12 = (float *)*param_7;
    FUN_1083a27f8(&iStack_110,param_5,param_6);
    FUN_1083a2c80(&iStack_1d0,&iStack_110);
    piVar4 = &iStack_1d0;
    lVar9 = lVar11;
    FUN_1083a2cd4();
    iVar7 = (int)lVar9;
    iVar5 = (int)pfVar12;
    if (param_9 == 0) {
      param_8 = (float *)(lVar6 + 4);
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      for (; lVar11 != 0; lVar11 = lVar11 + -1) {
        FUN_10835060c(*(undefined8 *)piVar4);
        bVar2 = false;
        uVar3 = false;
        fVar15 = (float)param_2;
        fVar19 = (float)param_4;
        if ((float)param_1 < (float)param_3) {
          bVar2 = false;
          uVar3 = false;
          if (!NAN(fVar15) && !NAN(fVar19)) {
            bVar2 = fVar15 < fVar19;
            uVar3 = fVar15 == fVar19;
          }
        }
        if (bVar2) {
          fStack_218 = param_8[-1] + fStack_70 * (float)param_1;
          param_1 = (ulong)(uint)fStack_218;
          fStack_214 = *param_8 + fStack_70 * fVar15;
          param_2 = (ulong)(uint)fStack_214;
          fVar15 = param_8[-1] + fStack_70 * (float)param_3;
          param_3 = (ulong)(uint)fVar15;
          fVar19 = *param_8 + fStack_70 * fVar19;
          param_4 = (ulong)(uint)fVar19;
          uStack_210 = CONCAT44(fVar19,fVar15);
          pfVar12 = &fStack_218;
          func_0x00010838ed50(&uStack_1e0);
        }
        iVar7 = (int)lVar9;
        iVar5 = (int)pfVar12;
        param_8 = param_8 + 2;
        piVar4 = piVar4 + 2;
      }
    }
    else {
      uStack_1e0 = 0;
      uStack_1d8 = 0;
      pfVar1 = (float *)(lVar6 + 4);
      for (; lVar11 != 0; lVar11 = lVar11 + -1) {
        FUN_10835060c(*(undefined8 *)piVar4);
        bVar2 = false;
        uVar3 = false;
        if ((float)param_1 < (float)param_3) {
          bVar2 = false;
          uVar3 = false;
          fVar15 = (float)param_2;
          fVar19 = (float)param_4;
          if (!NAN(fVar15) && !NAN(fVar19)) {
            bVar2 = fVar15 < fVar19;
            uVar3 = fVar15 == fVar19;
          }
        }
        if (bVar2) {
          param_3 = *(ulong *)param_8;
          uVar17 = 0;
          fStack_214 = -*pfVar1;
          fStack_218 = (float)*(undefined8 *)(pfVar1 + -1);
          func_0x000108404a80();
          uStack_200 = 0;
          uStack_1f8 = 0x3f800000;
          uStack_1f4 = 0xc0;
          param_1 = (ulong)(uint)fStack_70;
          param_2 = param_1;
          uStack_210 = param_3;
          uStack_208 = uVar17;
          func_0x000108363fe4(&fStack_218);
          FUN_10835060c(*(undefined8 *)piVar4);
          uStack_238 = (undefined4)param_1;
          uStack_234 = (undefined4)param_2;
          uStack_230 = (undefined4)param_3;
          uStack_22c = (undefined4)param_4;
          lVar9 = 1;
          func_0x000108142084(&fStack_218,&uStack_238);
          fStack_228 = (float)param_1;
          uStack_224 = (undefined4)param_2;
          uStack_220 = (undefined4)param_3;
          uStack_21c = (undefined4)param_4;
          pfVar12 = &fStack_228;
          func_0x00010838ed50(&uStack_1e0);
        }
        iVar7 = (int)lVar9;
        iVar5 = (int)pfVar12;
        pfVar1 = pfVar1 + 2;
        param_8 = param_8 + 2;
        piVar4 = piVar4 + 2;
      }
    }
    FUN_1083a2cb4(&iStack_1d0);
    piVar4 = &iStack_110;
    func_0x0001083a261c();
  }
  func_0x000108404a6c(uStack_68,uStack_1e0 & 0xffffffff,uStack_1e0._4_4_,uStack_1d8 & 0xffffffff,
                      uStack_1d8._4_4_);
  if ((bool)uVar3) {
    return;
  }
  ___stack_chk_fail();
  FUN_1083a2cb4(&iStack_1d0);
  piVar10 = &iStack_110;
  func_0x0001083a261c();
  func_0x000108404a58();
  if (*piVar10 < iVar5) {
    *piVar10 = iVar5;
    FUN_1084049cc(piVar10 + 2,(long)iVar5);
  }
  if (piVar10[4] < iVar7) {
    piVar10[4] = iVar7;
    FUN_1084049cc(piVar10 + 6,(long)iVar7);
  }
  piVar10 = piVar10 + 8;
  func_0x000108341d9c(piVar10,*(undefined8 *)piVar10);
  for (piVar10 = *(int **)(piVar10 + 2); piVar10 != piVar4; piVar10 = piVar10 + -0x18) {
    func_0x0001081298a0(piVar10 + -6);
  }
  *(int **)(param_8 + 2) = piVar4;
  return;
}



/* Entry: 10840441c; end: 108404477;  */

void FUN_10840441c(int *param_1,int param_2,int param_3)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  if (*param_1 < param_2) {
    *param_1 = param_2;
    FUN_1084049cc(param_1 + 2,(long)param_2);
  }
  if (param_1[4] < param_3) {
    param_1[4] = param_3;
    FUN_1084049cc(param_1 + 6,(long)param_3);
  }
  param_1 = param_1 + 8;
  func_0x000108341d9c(param_1,*(undefined8 *)param_1);
  for (lVar1 = *(long *)(param_1 + 2); lVar1 != unaff_x19; lVar1 = lVar1 + -0x60) {
    func_0x0001081298a0(lVar1 + -0x18);
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 108404478; end: 10840456f;  */

undefined1  [16]
FUN_108404478(undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  int *piVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined1 in_ZR;
  long *plVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined4 uVar21;
  undefined8 uVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  long alStack_198 [24];
  undefined1 auStack_d8 [160];
  undefined8 uStack_38;
  
  uStack_38 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = param_6;
  FUN_1083a2a5c(auStack_d8,param_3,0);
  FUN_1083a2c80(alStack_198,auStack_d8);
  plVar8 = alStack_198;
  puVar11 = param_5;
  FUN_1083a2cd4();
  uVar22 = CONCAT44((int)param_2,param_1);
  uVar24 = uVar22;
  puVar7 = param_6;
  for (lVar13 = param_4 << 3; lVar13 != 0; lVar13 = lVar13 + -8) {
    lVar15 = *plVar8;
    *puVar7 = uVar24;
    uVar22 = *(undefined8 *)(lVar15 + 0x20);
    uVar24 = CONCAT44((float)((ulong)uVar24 >> 0x20) + (float)((ulong)uVar22 >> 0x20),
                      (float)uVar24 + (float)uVar22);
    plVar8 = plVar8 + 1;
    puVar7 = puVar7 + 1;
    param_2 = uVar24;
  }
  uVar23 = (undefined4)param_2;
  uVar21 = (undefined4)uVar22;
  FUN_1083a2cb4(alStack_198);
  func_0x0001083a261c();
  func_0x000108404a6c(uStack_38);
  if ((bool)in_ZR) {
    auVar25._8_8_ = param_5;
    auVar25._0_8_ = param_6;
    return auVar25;
  }
  ___stack_chk_fail();
  FUN_1083a2cb4(alStack_198);
  puVar9 = auStack_d8;
  func_0x0001083a261c();
  func_0x000108404a58();
  puVar10 = puVar9;
  if (puVar12 != (undefined8 *)0x0) {
    uVar2 = *(ulong *)(puVar9 + 0x28);
    if (uVar2 < *(ulong *)(puVar9 + 0x30)) {
      func_0x000108404a30();
      lVar13 = uVar2 + 0x60;
    }
    else {
      lVar13 = uVar2 - *(long *)(puVar9 + 0x20);
      uVar2 = lVar13 / 0x60 + 1;
      if (0x2aaaaaaaaaaaaaa < uVar2) {
        FUN_108404a1c();
LAB_10840472c:
        func_0x000104bd35f4();
        *(long *)(puVar9 + 0x40) = (*(long *)(puVar9 + 0x28) - *(long *)(puVar9 + 0x20)) / 0x60;
        *(long *)(puVar9 + 0x48) = param_4;
        uVar22 = *puVar11;
        *(undefined8 *)(puVar9 + 0x58) = puVar11[1];
        *(undefined8 *)(puVar9 + 0x50) = uVar22;
        *(undefined4 *)(puVar9 + 0x60) = uVar21;
        *(undefined4 *)(puVar9 + 100) = uVar23;
        *(undefined1 **)(puVar9 + 0x68) = puVar9;
        puVar9[0x70] = 1;
        auVar27._0_8_ = (long *)(puVar9 + 0x38);
        *auVar27._0_8_ = *(long *)(puVar9 + 0x20);
        auVar27._8_8_ = param_4;
        return auVar27;
      }
      uVar4 = (long)(*(ulong *)(puVar9 + 0x30) - *(long *)(puVar9 + 0x20)) / 0x60;
      uVar16 = uVar4 * 2;
      if (uVar16 < uVar2 || uVar16 - uVar2 == 0) {
        uVar16 = uVar2;
      }
      if (0x155555555555554 < uVar4) {
        uVar16 = 0x2aaaaaaaaaaaaaa;
      }
      if (uVar16 == 0) {
        lVar15 = 0;
      }
      else {
        if (0x2aaaaaaaaaaaaaa < uVar16) goto LAB_10840472c;
        lVar15 = uVar16 * 0x60;
        __Znwm();
      }
      lVar13 = lVar15 + lVar13;
      func_0x000108404a30();
      lVar20 = *(long *)(puVar9 + 0x20);
      lVar3 = *(long *)(puVar9 + 0x28);
      lVar19 = lVar13 + ((lVar3 - lVar20) / -0x60) * 0x60;
      lVar17 = lVar19;
      for (lVar18 = lVar20; lVar18 != lVar3; lVar18 = lVar18 + 0x60) {
        func_0x000108404a60();
        _memcpy();
        lVar14 = *(long *)(lVar18 + 0x48);
        if (lVar14 != 0) {
          piVar1 = (int *)(lVar14 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = *piVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        *(long *)(lVar17 + 0x48) = lVar14;
        uVar22 = *(undefined8 *)(lVar18 + 0x50);
        *(undefined8 *)(lVar17 + 0x57) = *(undefined8 *)(lVar18 + 0x57);
        *(undefined8 *)(lVar17 + 0x50) = uVar22;
        lVar17 = lVar17 + 0x60;
      }
      for (; lVar20 != lVar3; lVar20 = lVar20 + 0x60) {
        func_0x0001081298a0(lVar20 + 0x48);
      }
      lVar13 = lVar13 + 0x60;
      puVar10 = *(undefined1 **)(puVar9 + 0x20);
      *(long *)(puVar9 + 0x20) = lVar19;
      *(long *)(puVar9 + 0x28) = lVar13;
      *(ulong *)(puVar9 + 0x30) = lVar15 + uVar16 * 0x60;
      if (puVar10 != (undefined1 *)0x0) {
        __ZdlPv();
      }
    }
    *(long *)(puVar9 + 0x28) = lVar13;
  }
  auVar26._8_8_ = param_4;
  auVar26._0_8_ = puVar10;
  return auVar26;
}



/* Entry: 108404570; end: 10840472f;  */

void FUN_108404570(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                  undefined8 *param_5,long param_6)

{
  int *piVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  if (param_6 != 0) {
    uVar2 = *(ulong *)(param_3 + 0x28);
    if (uVar2 < *(ulong *)(param_3 + 0x30)) {
      FUN_108404a30();
      lVar12 = uVar2 + 0x60;
    }
    else {
      lVar12 = uVar2 - *(long *)(param_3 + 0x20);
      uVar2 = lVar12 / 0x60 + 1;
      if (0x2aaaaaaaaaaaaaa < uVar2) {
        FUN_108404a1c();
LAB_10840472c:
        func_0x000104bd35f4();
        *(long *)(param_3 + 0x40) = (*(long *)(param_3 + 0x28) - *(long *)(param_3 + 0x20)) / 0x60;
        *(undefined8 *)(param_3 + 0x48) = param_4;
        uVar10 = *param_5;
        *(undefined8 *)(param_3 + 0x58) = param_5[1];
        *(undefined8 *)(param_3 + 0x50) = uVar10;
        *(undefined4 *)(param_3 + 0x60) = param_1;
        *(undefined4 *)(param_3 + 100) = param_2;
        *(long *)(param_3 + 0x68) = param_3;
        *(undefined1 *)(param_3 + 0x70) = 1;
        *(long *)(param_3 + 0x38) = *(long *)(param_3 + 0x20);
        return;
      }
      uVar4 = (long)(*(ulong *)(param_3 + 0x30) - *(long *)(param_3 + 0x20)) / 0x60;
      uVar11 = uVar4 * 2;
      if (uVar11 < uVar2 || uVar11 - uVar2 == 0) {
        uVar11 = uVar2;
      }
      if (0x155555555555554 < uVar4) {
        uVar11 = 0x2aaaaaaaaaaaaaa;
      }
      if (uVar11 == 0) {
        lVar7 = 0;
      }
      else {
        if (0x2aaaaaaaaaaaaaa < uVar11) goto LAB_10840472c;
        lVar7 = uVar11 * 0x60;
        __Znwm();
      }
      lVar12 = lVar7 + lVar12;
      FUN_108404a30();
      lVar15 = *(long *)(param_3 + 0x20);
      lVar3 = *(long *)(param_3 + 0x28);
      lVar14 = lVar12 + ((lVar3 - lVar15) / -0x60) * 0x60;
      lVar13 = lVar14;
      for (lVar8 = lVar15; lVar8 != lVar3; lVar8 = lVar8 + 0x60) {
        func_0x000108404a60();
        _memcpy();
        lVar9 = *(long *)(lVar8 + 0x48);
        if (lVar9 != 0) {
          piVar1 = (int *)(lVar9 + 8);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = *piVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        *(long *)(lVar13 + 0x48) = lVar9;
        uVar10 = *(undefined8 *)(lVar8 + 0x50);
        *(undefined8 *)(lVar13 + 0x57) = *(undefined8 *)(lVar8 + 0x57);
        *(undefined8 *)(lVar13 + 0x50) = uVar10;
        lVar13 = lVar13 + 0x60;
      }
      for (; lVar15 != lVar3; lVar15 = lVar15 + 0x60) {
        func_0x0001081298a0(lVar15 + 0x48);
      }
      lVar12 = lVar12 + 0x60;
      lVar8 = *(long *)(param_3 + 0x20);
      *(long *)(param_3 + 0x20) = lVar14;
      *(long *)(param_3 + 0x28) = lVar12;
      *(ulong *)(param_3 + 0x30) = lVar7 + uVar11 * 0x60;
      if (lVar8 != 0) {
        __ZdlPv();
      }
    }
    *(long *)(param_3 + 0x28) = lVar12;
  }
  return;
}



/* Entry: 108404730; end: 108404763;  */

void FUN_108404730(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  
  *(long *)(param_3 + 0x40) = (*(long *)(param_3 + 0x28) - *(long *)(param_3 + 0x20)) / 0x60;
  *(undefined8 *)(param_3 + 0x48) = param_4;
  uVar1 = *param_5;
  *(undefined8 *)(param_3 + 0x58) = param_5[1];
  *(undefined8 *)(param_3 + 0x50) = uVar1;
  *(undefined4 *)(param_3 + 0x60) = param_1;
  *(undefined4 *)(param_3 + 100) = param_2;
  *(long *)(param_3 + 0x68) = param_3;
  *(undefined1 *)(param_3 + 0x70) = 1;
  *(long *)(param_3 + 0x38) = *(long *)(param_3 + 0x20);
  return;
}



/* Entry: 108404764; end: 1084049cb;  */

void FUN_108404764(undefined4 param_1,undefined4 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 *puStack_88;
  undefined8 *puStack_78;
  
  iVar13 = 0;
  iVar15 = 0;
  puStack_78 = (undefined8 *)(param_4 + 0x28U);
  while (puStack_78 != (undefined8 *)0x0) {
    uVar2 = *(uint *)((long)puStack_78 + 0x24) & 3;
    if (uVar2 != 2) {
      iVar4 = *(int *)(puStack_78 + 3);
      iVar13 = iVar4 + iVar13;
      if (uVar2 != 3) {
        iVar4 = 0;
      }
      iVar15 = iVar4 + iVar15;
    }
    FUN_1083a79c8(&puStack_78);
  }
  FUN_10840441c(param_3,iVar13,iVar15);
  puStack_88 = *(undefined8 **)(param_3 + 0x18);
  puVar5 = (undefined8 *)(param_4 + 0x28U);
  puVar17 = *(undefined8 **)(param_3 + 8);
  while (puVar5 != (undefined8 *)0x0) {
    puVar14 = (undefined8 *)(ulong)*(uint *)(puVar5 + 3);
    puVar16 = puVar17;
    puStack_78 = puVar5;
    if ((*(uint *)(puVar5 + 3) != 0) &&
       (!NAN((*(float *)(puVar5 + 1) - *(float *)(puVar5 + 1)) * *(float *)((long)puVar5 + 0xc) *
             *(float *)(puVar5 + 2)))) {
      puVar1 = puVar5 + 5;
      lVar9 = (long)puVar14 * 2;
      puVar8 = puVar14;
      puVar3 = puStack_88;
      switch(*(uint *)((long)puVar5 + 0x24) & 3) {
      case 0:
        puVar10 = puVar5;
        puVar8 = puVar1;
        FUN_108404478(*(undefined4 *)((long)puVar5 + 0x1c),*(undefined4 *)(puVar5 + 4),puVar5,puVar1
                      ,puVar14,puVar17);
        puVar16 = puVar17 + (long)puVar8;
        puVar12 = (undefined8 *)0x0;
        puVar17 = puVar10;
        puVar18 = (undefined8 *)0x0;
        break;
      case 1:
        puVar10 = (undefined8 *)((long)puVar14 << 2);
        puVar6 = (undefined4 *)((long)puVar1 + (lVar9 + 3U & 0x3fffffffc));
        puVar11 = puVar14;
        while (puVar11 != (undefined8 *)0x0) {
          uVar19 = *(undefined4 *)(puVar5 + 4);
          *(undefined4 *)puVar16 = *puVar6;
          *(undefined4 *)((long)puVar16 + 4) = uVar19;
          puVar10 = (undefined8 *)((long)puVar10 - 4);
          puVar6 = puVar6 + 1;
          puVar16 = puVar16 + 1;
          puVar11 = puVar10;
        }
        puVar12 = (undefined8 *)0x0;
        puVar18 = (undefined8 *)0x0;
        break;
      case 2:
        puVar12 = (undefined8 *)0x0;
        puVar17 = (undefined8 *)((long)puVar1 + (lVar9 + 3U & 0x3fffffffc));
        puVar18 = (undefined8 *)0x0;
        break;
      case 3:
        puVar11 = (undefined8 *)((long)puVar14 << 4);
        puVar10 = (undefined8 *)((long)puVar1 + (lVar9 + 3U & 0x3fffffffc));
        puVar7 = puVar14;
        while (puVar12 = puStack_88, puVar18 = puVar14, puVar7 != (undefined8 *)0x0) {
          *puVar16 = puVar10[1];
          *puVar3 = *puVar10;
          puVar11 = puVar11 + -2;
          puVar10 = puVar10 + 2;
          puVar16 = puVar16 + 1;
          puVar3 = puVar3 + 1;
          puVar7 = puVar11;
        }
      }
      puStack_88 = puVar3;
      puVar10 = puVar5;
      FUN_1083a827c();
      puVar11 = puVar5;
      FUN_1083a824c(puVar5);
      puVar7 = puVar5;
      FUN_1083a78ac(puVar5);
      puVar3 = (undefined8 *)0x0;
      if (puVar10 != (undefined8 *)0x0) {
        puVar3 = puVar14;
      }
      FUN_108404570(param_3,puVar5,puVar1,puVar14,puVar17,puVar8,puVar11,(ulong)puVar7 & 0xffffffff,
                    puVar10,puVar3,puVar12,puVar18);
    }
    FUN_1083a79c8(&puStack_78);
    puVar5 = puStack_78;
    puVar17 = puVar16;
  }
  *(long *)(param_3 + 0x40) = (*(long *)(param_3 + 0x28) - *(long *)(param_3 + 0x20)) / 0x60;
  *(long *)(param_3 + 0x48) = param_4;
  uVar20 = *(undefined8 *)(param_4 + 4);
  *(undefined8 *)(param_3 + 0x58) = *(undefined8 *)(param_4 + 0xc);
  *(undefined8 *)(param_3 + 0x50) = uVar20;
  *(undefined4 *)(param_3 + 0x60) = param_1;
  *(undefined4 *)(param_3 + 100) = param_2;
  *(long *)(param_3 + 0x68) = param_3;
  *(undefined1 *)(param_3 + 0x70) = 1;
  *(long *)(param_3 + 0x38) = *(long *)(param_3 + 0x20);
  return;
}



/* Entry: 1084049cc; end: 1084049ff;  */

void FUN_1084049cc(long *param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    FUN_10840ffdc(param_2,8);
  }
  lVar1 = *param_1;
  *param_1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 108404a00; end: 108404a1b;  */

void FUN_108404a00(undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = param_5;
  param_1[1] = param_3;
  param_1[2] = param_6;
  param_1[3] = param_7;
  param_1[4] = param_8;
  param_1[6] = param_10;
  param_1[5] = param_9;
  param_1[7] = param_11;
  param_1[8] = param_12;
  lVar4 = *param_2;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  param_1[9] = lVar4;
  lVar4 = param_2[1];
  *(undefined8 *)((long)param_1 + 0x57) = *(undefined8 *)((long)param_2 + 0xf);
  param_1[10] = lVar4;
  return;
}



/* Entry: 108404a1c; end: 108404a2f;  */

void FUN_108404a1c(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 in_x7;
  long lVar4;
  undefined8 extraout_x12;
  undefined8 extraout_x13;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long *unaff_x28;
  
  func_0x000104bd47e8(&DAT_10f62a4d8);
  *unaff_x20 = unaff_x26;
  unaff_x20[1] = unaff_x27;
  unaff_x20[2] = unaff_x23;
  unaff_x20[3] = unaff_x22;
  unaff_x20[4] = in_x7;
  unaff_x20[6] = extraout_x13;
  unaff_x20[5] = extraout_x12;
  unaff_x20[7] = unaff_x21;
  unaff_x20[8] = unaff_x25;
  lVar4 = *unaff_x28;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  unaff_x20[9] = lVar4;
  lVar4 = unaff_x28[1];
  *(undefined8 *)((long)unaff_x20 + 0x57) = *(undefined8 *)((long)unaff_x28 + 0xf);
  unaff_x20[10] = lVar4;
  return;
}



/* Entry: 108404a30; end: 108404a93;  */

void FUN_108404a30(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 in_x7;
  long lVar4;
  undefined8 in_x12;
  undefined8 in_x13;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x27;
  long *unaff_x28;
  
  *unaff_x20 = unaff_x26;
  unaff_x20[1] = unaff_x27;
  unaff_x20[2] = unaff_x23;
  unaff_x20[3] = unaff_x22;
  unaff_x20[4] = in_x7;
  unaff_x20[6] = in_x13;
  unaff_x20[5] = in_x12;
  unaff_x20[7] = unaff_x21;
  unaff_x20[8] = unaff_x25;
  lVar4 = *unaff_x28;
  if (lVar4 != 0) {
    piVar1 = (int *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  unaff_x20[9] = lVar4;
  lVar4 = unaff_x28[1];
  *(undefined8 *)((long)unaff_x20 + 0x57) = *(undefined8 *)((long)unaff_x28 + 0xf);
  unaff_x20[10] = lVar4;
  return;
}



/* Entry: 108404a94; end: 108404b2b;  */

undefined8 FUN_108404a94(undefined8 *param_1)

{
  undefined8 uStack_30;
  undefined1 auStack_28 [8];
  
  if (*(int *)(param_1 + 1) == 1) {
    FUN_108404d40(param_1);
    uStack_30 = 0;
    FUN_108404b2c(auStack_28);
    FUN_1083a1940();
    FUN_1083a19c4(&uStack_30);
    FUN_108404da8(param_1,&uStack_30);
    FUN_1083145d8(&uStack_30);
    func_0x000108404dd8();
  }
  func_0x000108404d5c();
  return *param_1;
}



/* Entry: 108404b2c; end: 108404b3f;  */

void FUN_108404b2c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_2 = 0;
  *param_1 = lVar1;
  lVar1 = *param_2;
  *param_2 = 0;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      func_0x0001083a261c(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 108404b40; end: 108404b83;  */

void FUN_108404b40(undefined8 param_1)

{
  undefined8 uStack_28;
  
  uStack_28 = 0;
  FUN_108404da8(param_1,&uStack_28);
  FUN_1083145d8(&uStack_28);
  return;
}



/* Entry: 108404b84; end: 108404bbb;  */

undefined8 FUN_108404b84(long *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] == 1) {
    func_0x000108404d74();
    puVar1 = (undefined8 *)*param_1;
  }
  else {
    func_0x000108404d90();
    puVar1 = (undefined8 *)(*param_1 + 0x68);
  }
  return *puVar1;
}



/* Entry: 108404bbc; end: 108404bef;  */

void FUN_108404bbc(long param_1,long *param_2)

{
  FUN_108404b84();
                    /* WARNING: Could not recover jumptable at 0x000108404bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,param_1,*(undefined4 *)(param_1 + 4));
  return;
}



/* Entry: 108404bf0; end: 108404c1f;  */

undefined8 * FUN_108404bf0(undefined8 *param_1)

{
  (**(code **)(*(long *)*param_1 + 0x20))();
  return param_1;
}



/* Entry: 108404c20; end: 108404c5f;  */

undefined1 * FUN_108404c20(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  FUN_108404c60();
  return param_1;
}



/* Entry: 108404c60; end: 108404cbf;  */

void FUN_108404c60(long param_1,long param_2)

{
  uint uVar1;
  long lStack_38;
  
  FUN_108314574();
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 != 0xffffffff) {
    lStack_38 = param_1;
    (*(code *)(&PTR_FUN_110a47780)[uVar1])(&lStack_38,param_2);
    *(uint *)(param_1 + 8) = uVar1;
  }
  return;
}



/* Entry: 108404cc0; end: 108404cc7;  */

void FUN_108404cc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = *param_2;
  *param_2 = 0;
  *param_1 = uVar1;
  return;
}



/* Entry: 108404cc8; end: 108404cff;  */

undefined1 * FUN_108404cc8(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    puVar1 = &stack0xffffffffffffffe0;
    FUN_108404d00(&stack0xffffffffffffffe0);
    return puVar1;
  }
  uVar2 = *param_3;
  *param_3 = 0;
  func_0x0001083a216c(param_2,uVar2);
  return param_2;
}



/* Entry: 108404d00; end: 108404d0b;  */

undefined8 * FUN_108404d00(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  FUN_108314574();
  uVar3 = *puVar2;
  *puVar2 = 0;
  *puVar1 = uVar3;
  *(undefined4 *)(puVar1 + 1) = 0;
  return puVar1;
}



/* Entry: 108404d0c; end: 108404d3f;  */

undefined8 * FUN_108404d0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_108314574();
  uVar1 = *param_2;
  *param_2 = 0;
  *param_1 = uVar1;
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}



/* Entry: 108404d40; end: 108404da7;  */

undefined1 * FUN_108404d40(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 8) == 1) {
    return param_1;
  }
  func_0x00010563ab98();
  if (*(int *)(param_1 + 8) == 0) {
    return param_1;
  }
  func_0x00010563ab98();
  if (*(int *)(param_1 + 8) == 1) {
    return param_1;
  }
  func_0x00010563ab98();
  if (*(int *)(param_1 + 8) == 0) {
    return param_1;
  }
  func_0x00010563ab98();
  if (*(int *)(param_1 + 8) != 0) {
    puVar1 = &stack0xffffffffffffffa0;
    FUN_108404d00(&stack0xffffffffffffffa0);
    return puVar1;
  }
  uVar2 = *param_2;
  *param_2 = 0;
  func_0x0001083a216c(param_1,uVar2);
  return param_1;
}



/* Entry: 108404da8; end: 108404e4f;  */

undefined1 * FUN_108404da8(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 8) != 0) {
    puVar1 = &stack0xffffffffffffffe0;
    FUN_108404d00(&stack0xffffffffffffffe0);
    return puVar1;
  }
  uVar2 = *param_2;
  *param_2 = 0;
  func_0x0001083a216c(param_1,uVar2);
  return param_1;
}



/* Entry: 108404e50; end: 108404e97;  */

long FUN_108404e50(long *param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if ((ulong)((param_1[1] - lVar1) / 0x30) <= (param_2 & 0xffffffff)) {
    FUN_108404e98(param_1,(param_2 & 0xffffffff) + 1);
    lVar1 = *param_1;
  }
  return lVar1 + (param_2 & 0xffffffff) * 0x30;
}



/* Entry: 108404e98; end: 108404ecb;  */

void FUN_108404e98(long *param_1,ulong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lStack_78;
  undefined8 *puStack_70;
  ulong uStack_68;
  long lStack_60;
  long *plStack_58;
  
  uVar4 = (param_1[1] - *param_1) / 0x30;
  uVar8 = param_2 - uVar4;
  if (param_2 < uVar4 || uVar8 == 0) {
    if (param_2 < uVar4) {
      lVar9 = *param_1 + param_2 * 0x30;
      lVar15 = param_1[1];
      while (lVar15 != lVar9) {
        lVar15 = lVar15 + -0x30;
        func_0x00010815b52c();
      }
      param_1[1] = lVar9;
      return;
    }
    return;
  }
  plVar10 = param_1 + 2;
  puVar14 = (undefined8 *)param_1[1];
  if ((ulong)((*plVar10 - (long)puVar14) / 0x30) < uVar8) {
    lVar15 = (long)puVar14 - *param_1;
    uVar4 = lVar15 / 0x30 + uVar8;
    if (0x555555555555555 < uVar4) {
      func_0x0001084056ec();
LAB_1084056a4:
      func_0x000104bd35f4();
      uStack_68 = uVar8;
      FUN_108405700(&lStack_78);
      __Unwind_Resume();
      func_0x000108376ad8();
      param_1[2] = 0;
      param_1[3] = 0;
      *(undefined4 *)(param_1 + 5) = 0;
      param_1[4] = 0;
      return;
    }
    uVar5 = (*plVar10 - *param_1) / 0x30;
    uVar13 = uVar5 * 2;
    if (uVar13 < uVar4 || uVar13 - uVar4 == 0) {
      uVar13 = uVar4;
    }
    if (0x2aaaaaaaaaaaaa9 < uVar5) {
      uVar13 = 0x555555555555555;
    }
    plStack_58 = plVar10;
    if (uVar13 == 0) {
      lVar9 = 0;
    }
    else {
      if (0x555555555555555 < uVar13) goto LAB_1084056a4;
      lVar9 = uVar13 * 0x30;
      __Znwm();
    }
    puVar2 = (undefined8 *)(lVar9 + lVar15);
    lVar16 = lVar9 + uVar13 * 0x30;
    puVar14 = puVar2;
    puStack_70 = puVar2;
    lStack_60 = lVar16;
    lStack_78 = lVar9;
    for (lVar15 = uVar8 * 0x30; lVar15 != 0; lVar15 = lVar15 + -0x30) {
      puVar14[3] = 0;
      puVar14[2] = 0;
      puVar14[5] = 0;
      puVar14[4] = 0;
      puVar14[1] = 0;
      *puVar14 = 0;
      FUN_1084056cc(puVar14);
      puVar14 = puVar14 + 6;
    }
    lVar9 = *param_1;
    lVar3 = param_1[1];
    lVar11 = lVar3 - lVar9;
    puVar14 = puVar2 + (lVar11 / -0x30) * 6;
    for (lVar15 = lVar9; lVar15 != lVar3; lVar15 = lVar15 + 0x30) {
      func_0x000108376b14(puVar14,lVar15);
      lVar12 = *(long *)(lVar15 + 0x10);
      if (lVar12 != 0) {
        piVar1 = (int *)(lVar12 + 8);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = *piVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      puVar14[2] = lVar12;
      uVar18 = *(undefined8 *)(lVar15 + 0x20);
      uVar17 = *(undefined8 *)(lVar15 + 0x18);
      *(undefined4 *)(puVar14 + 5) = *(undefined4 *)(lVar15 + 0x28);
      puVar14[4] = uVar18;
      puVar14[3] = uVar17;
      puVar14 = puVar14 + 6;
    }
    for (; lVar9 != lVar3; lVar9 = lVar9 + 0x30) {
      func_0x00010815b52c(lVar9);
    }
    lStack_78 = *param_1;
    *param_1 = (long)(puVar2 + (lVar11 / -0x30) * 6);
    param_1[1] = (long)(puVar2 + uVar8 * 6);
    lStack_60 = param_1[2];
    param_1[2] = lVar16;
    puStack_70 = (undefined8 *)lStack_78;
    uStack_68 = lStack_78;
    FUN_108405700(&lStack_78);
  }
  else {
    puVar2 = puVar14 + uVar8 * 6;
    for (lVar15 = uVar8 * 0x30; lVar15 != 0; lVar15 = lVar15 + -0x30) {
      puVar14[3] = 0;
      puVar14[2] = 0;
      puVar14[5] = 0;
      puVar14[4] = 0;
      puVar14[1] = 0;
      *puVar14 = 0;
      FUN_1084056cc(puVar14);
      puVar14 = puVar14 + 6;
    }
    param_1[1] = (long)puVar2;
  }
  return;
}



/* Entry: 108404ecc; end: 108404f0b;  */

void FUN_108404ecc(undefined4 param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  FUN_108404e50();
  *(undefined4 *)(param_2 + 0x28) = param_1;
  FUN_108376b90();
  plVar5 = *(long **)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001083540d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x10))();
      return;
    }
  }
  return;
}



/* Entry: 108404f0c; end: 108404fdf;  */

void FUN_108404f0c(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_2[1];
  if (*param_2 == lVar1) {
    *param_1 = 0;
  }
  else {
    uStack_38 = 0xff7fffffff7fffff;
    uStack_40 = 0x7f7fffff7f7fffff;
    for (lVar5 = *param_2 + 0x18; lVar2 = lVar5 + -0x18, lVar2 != lVar1; lVar5 = lVar5 + 0x30) {
      lVar4 = lVar5;
      if (*(long *)(lVar5 + -8) == 0) {
        func_0x0001083773e0(lVar2,lVar5);
        lVar4 = lVar2;
      }
      func_0x00010838ed50(&uStack_40,lVar4);
    }
    *(undefined4 *)((long)param_2 + 0x1c) = uStack_40._4_4_;
    *(undefined4 *)(param_2 + 5) = uStack_38._4_4_;
    *(undefined4 *)(param_2 + 7) = (undefined4)uStack_40;
    *(undefined4 *)((long)param_2 + 0x3c) = (undefined4)uStack_38;
    uVar3 = 0x88;
    __Znwm();
    FUN_108404fe0();
    uStack_48 = 0;
    *param_1 = uVar3;
    FUN_108405464(&uStack_48);
  }
  return;
}



/* Entry: 108404fe0; end: 108404fe7;  */

void FUN_108404fe0(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  param_1[1] = 0x100000001;
  do {
    iVar3 = iRam0000000113255f5c;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(0x113255f5c,0x10);
    if (bVar2) {
      cVar1 = ExclusiveMonitorsStatus();
      iRam0000000113255f5c = iRam0000000113255f5c + 1;
    }
  } while (cVar1 != '\0');
  *(int *)(param_1 + 2) = iVar3;
  *(undefined4 *)((long)param_1 + 0x14) = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_110a477a0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = 0;
  uVar4 = *param_4;
  param_1[7] = param_4[1];
  param_1[6] = uVar4;
  param_1[8] = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  uVar5 = param_3[1];
  uVar4 = *param_3;
  uVar7 = param_3[3];
  uVar6 = param_3[2];
  uVar9 = param_3[5];
  uVar8 = param_3[4];
  uVar10 = param_3[6];
  param_1[0x10] = param_3[7];
  param_1[0xf] = uVar10;
  param_1[0xe] = uVar9;
  param_1[0xd] = uVar8;
  param_1[0xc] = uVar7;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  param_1[9] = uVar4;
  return;
}



/* Entry: 108404fe8; end: 108405017;  */

void FUN_108404fe8(undefined8 param_1,long param_2)

{
  FUN_1083970cc(param_2);
  *(ushort *)(param_2 + 0x36) = *(ushort *)(param_2 + 0x36) & 0xfe7f;
  return;
}



/* Entry: 108405018; end: 1084050bb;  */

void FUN_108405018(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = (ulong)(int)((*(long *)(param_1 + 0x38) - *(long *)(param_1 + 0x30)) / 0x30);
  for (uVar1 = 0; (uVar2 & ((long)uVar2 >> 0x3f ^ 0xffffffffffffffffU)) != uVar1; uVar1 = uVar1 + 1)
  {
    *(int *)(param_2 + uVar1 * 4) = (int)uVar1;
  }
  return;
}



/* Entry: 1084050bc; end: 108405163;  */

void FUN_1084050bc(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0xa8;
  __Znwm();
  FUN_1083955f4();
  *puVar1 = &PTR_FUN_110a478c8;
  FUN_10810c9b4(puVar1 + 0x10);
  FUN_108396d58(puVar1 + 1,puVar1 + 0x10);
  *(undefined1 *)(puVar1 + 0xb) = 1;
  *param_1 = puVar1;
  return;
}



/* Entry: 108405164; end: 108405317;  */

void FUN_108405164(undefined8 param_1,long *param_2,undefined4 *param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_78;
  uint uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_64;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuStack_60 = &PTR_FUN_110a403f8;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  FUN_1083a034c(&ppuStack_60,&UNK_10df2680f,0x10);
  FUN_1083a034c(&ppuStack_60,param_2 + 9,0x40);
  plVar2 = param_2;
  (**(code **)(*param_2 + 0x28))();
  uStack_64 = SUB84(plVar2,0);
  FUN_1083a034c(&ppuStack_60,&uStack_64,4);
  uStack_70 = (uint)((param_2[7] - param_2[6]) / 0x30);
  func_0x000108405b60(ppuStack_60[2]);
  lVar1 = param_2[7];
  for (lVar3 = param_2[6] + 0x18; lVar3 + -0x18 != lVar1; lVar3 = lVar3 + 0x30) {
    uStack_70 = (uint)(*(long *)(lVar3 + -8) != 0);
    func_0x000108405b60(ppuStack_60[2]);
    uStack_70 = *(uint *)(lVar3 + 0x10);
    func_0x000108405b60(ppuStack_60[2]);
    FUN_1083a034c(&ppuStack_60,lVar3,0x10);
    if (*(long *)(lVar3 + -8) == 0) {
      FUN_10837f3d8(&uStack_70,lVar3 + -0x18);
    }
    else {
      FUN_108350064(&uStack_70,*(long *)(lVar3 + -8),0);
    }
    uVar4 = *(undefined8 *)(CONCAT44(uStack_6c,uStack_70) + 0x20);
    uStack_78 = uVar4;
    FUN_1083a034c(&ppuStack_60,&uStack_78,8);
    FUN_1083a034c(&ppuStack_60,*(undefined8 *)(CONCAT44(uStack_6c,uStack_70) + 0x18),uVar4);
    func_0x0001078bddf8(&uStack_70);
  }
  *param_3 = 0;
  FUN_1083a0608(param_1,&ppuStack_60);
  FUN_1083a02a4(&ppuStack_60);
  return;
}



/* Entry: 108405318; end: 108405353;  */

void FUN_108405318(void)

{
  func_0x000108405ba8();
  return;
}



/* Entry: 108405354; end: 108405393;  */

void FUN_108405354(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uStack_18;
  
  if (param_2 != 0) {
    piVar1 = (int *)(param_2 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uStack_18 = 0;
  *param_1 = param_2;
  FUN_108405464(&uStack_18);
  return;
}



/* Entry: 108405394; end: 108405463;  */

void FUN_108405394(void)

{
  return;
}



/* Entry: 108405464; end: 1084054af;  */

long * FUN_108405464(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  plVar5 = (long *)*param_1;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  return param_1;
}



/* Entry: 1084054b0; end: 1084056cb;  */

void FUN_1084054b0(long *param_1,ulong param_2)

{
  int *piVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lStack_78;
  undefined8 *puStack_70;
  ulong uStack_68;
  long lStack_60;
  long *plStack_58;
  
  plVar9 = param_1 + 2;
  puVar13 = (undefined8 *)param_1[1];
  if ((ulong)((*plVar9 - (long)puVar13) / 0x30) < param_2) {
    lVar14 = (long)puVar13 - *param_1;
    uVar2 = lVar14 / 0x30 + param_2;
    if (0x555555555555555 < uVar2) {
      func_0x0001084056ec();
LAB_1084056a4:
      func_0x000104bd35f4();
      uStack_68 = param_2;
      FUN_108405700(&lStack_78);
      __Unwind_Resume();
      func_0x000108376ad8();
      param_1[2] = 0;
      param_1[3] = 0;
      *(undefined4 *)(param_1 + 5) = 0;
      param_1[4] = 0;
      return;
    }
    uVar5 = (*plVar9 - *param_1) / 0x30;
    uVar12 = uVar5 * 2;
    if (uVar12 < uVar2 || uVar12 - uVar2 == 0) {
      uVar12 = uVar2;
    }
    if (0x2aaaaaaaaaaaaa9 < uVar5) {
      uVar12 = 0x555555555555555;
    }
    plStack_58 = plVar9;
    if (uVar12 == 0) {
      lVar8 = 0;
    }
    else {
      if (0x555555555555555 < uVar12) goto LAB_1084056a4;
      lVar8 = uVar12 * 0x30;
      __Znwm();
    }
    puVar3 = (undefined8 *)(lVar8 + lVar14);
    lVar15 = lVar8 + uVar12 * 0x30;
    puVar13 = puVar3;
    puStack_70 = puVar3;
    lStack_60 = lVar15;
    lStack_78 = lVar8;
    for (lVar14 = param_2 * 0x30; lVar14 != 0; lVar14 = lVar14 + -0x30) {
      puVar13[3] = 0;
      puVar13[2] = 0;
      puVar13[5] = 0;
      puVar13[4] = 0;
      puVar13[1] = 0;
      *puVar13 = 0;
      FUN_1084056cc(puVar13);
      puVar13 = puVar13 + 6;
    }
    lVar8 = *param_1;
    lVar4 = param_1[1];
    lVar10 = lVar4 - lVar8;
    puVar13 = puVar3 + (lVar10 / -0x30) * 6;
    for (lVar14 = lVar8; lVar14 != lVar4; lVar14 = lVar14 + 0x30) {
      func_0x000108376b14(puVar13,lVar14);
      lVar11 = *(long *)(lVar14 + 0x10);
      if (lVar11 != 0) {
        piVar1 = (int *)(lVar11 + 8);
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = *piVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      puVar13[2] = lVar11;
      uVar17 = *(undefined8 *)(lVar14 + 0x20);
      uVar16 = *(undefined8 *)(lVar14 + 0x18);
      *(undefined4 *)(puVar13 + 5) = *(undefined4 *)(lVar14 + 0x28);
      puVar13[4] = uVar17;
      puVar13[3] = uVar16;
      puVar13 = puVar13 + 6;
    }
    for (; lVar8 != lVar4; lVar8 = lVar8 + 0x30) {
      func_0x00010815b52c(lVar8);
    }
    lStack_78 = *param_1;
    *param_1 = (long)(puVar3 + (lVar10 / -0x30) * 6);
    param_1[1] = (long)(puVar3 + param_2 * 6);
    lStack_60 = param_1[2];
    param_1[2] = lVar15;
    puStack_70 = (undefined8 *)lStack_78;
    uStack_68 = lStack_78;
    FUN_108405700(&lStack_78);
  }
  else {
    puVar3 = puVar13 + param_2 * 6;
    for (lVar14 = param_2 * 0x30; lVar14 != 0; lVar14 = lVar14 + -0x30) {
      puVar13[3] = 0;
      puVar13[2] = 0;
      puVar13[5] = 0;
      puVar13[4] = 0;
      puVar13[1] = 0;
      *puVar13 = 0;
      FUN_1084056cc(puVar13);
      puVar13 = puVar13 + 6;
    }
    param_1[1] = (long)puVar3;
  }
  return;
}



/* Entry: 1084056cc; end: 1084056ff;  */

void FUN_1084056cc(long param_1)

{
  FUN_108376ad8();
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



/* Entry: 108405700; end: 108405747;  */

long * FUN_108405700(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[1];
  while (lVar1 != param_1[2]) {
    param_1[2] = param_1[2] + -0x30;
    func_0x00010815b52c();
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 108405748; end: 10840574b;  */

undefined8 * FUN_108405748(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110a3fce0;
  FUN_10839775c(param_1 + 0xc);
  FUN_10810c718(param_1 + 10);
  func_0x000108115b70(param_1 + 9);
  return param_1;
}



/* Entry: 10840574c; end: 10840575f;  */

void FUN_10840574c(void)

{
  FUN_108395738();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 108405760; end: 10840584b;  */

void FUN_108405760(float *param_1,undefined8 param_2,undefined8 param_3,float param_4,float param_5,
                  long param_6,long param_7)

{
  undefined1 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = *(undefined1 *)(param_7 + 0x28);
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  *(undefined1 *)(param_1 + 6) = uVar1;
  *(undefined4 *)((long)param_1 + 0x1a) = 0;
  lVar2 = *(long *)(*(long *)(param_6 + 0x40) + 0x30);
  if ((ulong)(ushort)(*(uint *)(param_7 + 0x2c) >> 2) <
      (ulong)((*(long *)(*(long *)(param_6 + 0x40) + 0x38) - lVar2) / 0x30)) {
    lVar2 = lVar2 + ((ulong)(*(uint *)(param_7 + 0x2c) >> 2) & 0xffff) * 0x30;
    fVar3 = *(float *)(lVar2 + 0x28);
    fVar4 = 0.0;
    FUN_1082d24d0(param_6 + 0x80);
    *param_1 = fVar3;
    param_1[1] = fVar4;
    if (*(long *)(lVar2 + 0x10) == 0) {
      return;
    }
    *(undefined1 *)(param_1 + 6) = 3;
    func_0x000108142084(param_6 + 0x80,lVar2 + 0x18,1);
    fVar5 = (float)((*(uint *)(param_7 + 0x2c) & 3) << 0xe) / 65536.0;
    fVar6 = (float)(*(uint *)(param_7 + 0x2c) >> 4 & 0xc000) / 65536.0;
    param_1[2] = (float)(int)(fVar3 + fVar5);
    param_1[3] = (float)(int)(fVar4 + fVar6);
    param_1[4] = (float)(int)(param_4 + fVar5);
    param_1[5] = (float)(int)(param_5 + fVar6);
  }
  *(undefined1 *)(param_1 + 7) = 1;
  return;
}



/* Entry: 10840584c; end: 10840597f;  */

void FUN_10840584c(long param_1,undefined2 *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 *puVar4;
  long lVar5;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  uVar1 = *(uint *)(param_2 + 0x16);
  lVar5 = *(long *)(*(long *)(param_1 + 0x40) + 0x30);
  uVar2 = *param_2;
  uVar3 = param_2[1];
  puVar4 = param_2;
  FUN_10835399c(param_2);
  FUN_10835c77c(auStack_68,uVar2,uVar3);
  FUN_10834109c(&lStack_70,auStack_68,param_3,puVar4,0);
  FUN_10810a400(auStack_68);
  func_0x0001081436a0(lStack_70,0);
  FUN_10833e1e4((float)-(int)(short)param_2[3],(float)-(int)(short)param_2[2],lStack_70);
  FUN_10833e1e4((float)((*(uint *)(param_2 + 0x16) & 3) << 0xe) / 65536.0,
                (float)(*(uint *)(param_2 + 0x16) >> 4 & 0xc000) / 65536.0,lStack_70);
  FUN_108340730(lStack_70,*(undefined8 *)(lVar5 + ((ulong)(uVar1 >> 2) & 0xffff) * 0x30 + 0x10),
                param_1 + 0x80);
  lVar5 = lStack_70;
  lStack_70 = 0;
  if (lVar5 != 0) {
    func_0x000108405bb4();
  }
  return;
}



/* Entry: 108405980; end: 1084059a7;  */

undefined8 FUN_108405980(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 extraout_x8;
  
  func_0x000108405b80();
  FUN_1083796e4(extraout_x8,param_1 + 0x80,param_3,1);
  return 1;
}



/* Entry: 1084059a8; end: 108405a47;  */

void FUN_1084059a8(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x000108405b80();
  lVar5 = *(long *)(extraout_x8 + 0x10);
  if (lVar5 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)0x40;
    __Znwm();
    piVar1 = (int *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar4[1] = 1;
    *puVar4 = &PTR_DAT_110a47928;
    puVar4[2] = lVar5;
    uVar6 = *(undefined8 *)(param_2 + 0x80);
    uVar8 = *(undefined8 *)(param_2 + 0x98);
    uVar7 = *(undefined8 *)(param_2 + 0x90);
    puVar4[4] = *(undefined8 *)(param_2 + 0x88);
    puVar4[3] = uVar6;
    puVar4[6] = uVar8;
    puVar4[5] = uVar7;
    puVar4[7] = *(undefined8 *)(param_2 + 0xa0);
    func_0x000108405bc8();
  }
  *param_1 = puVar4;
  return;
}



/* Entry: 108405a48; end: 108405b27;  */

void FUN_108405a48(long param_1,undefined8 *param_2)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1082d24d0(0x3f800000,0x3f800000,param_1 + 0x80);
  func_0x000108404de0(&uStack_60,*(long *)(param_1 + 0x40) + 0x48);
  param_2[1] = uStack_58;
  *param_2 = uStack_60;
  param_2[3] = uStack_48;
  param_2[2] = uStack_50;
  param_2[5] = uStack_38;
  param_2[4] = uStack_40;
  param_2[7] = uStack_28;
  param_2[6] = uStack_30;
  return;
}



/* Entry: 108405b28; end: 108405b4b;  */

long * FUN_108405b28(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  (**(code **)(*plVar1 + 0x40))();
  return plVar1 + 8;
}



/* Entry: 108405b4c; end: 108405bcf;  */

void FUN_108405b4c(long param_1,undefined8 param_2)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  
  lVar1 = param_1 + 0x18;
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  func_0x000108341c9c(param_2);
  if (lVar1 != 0) {
    func_0x0001081420b8();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*unaff_x20 + 0x158);
  func_0x000108341e90();
                    /* WARNING: Could not recover jumptable at 0x000108341fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 108405bd0; end: 108405cc7;  */

void FUN_108405bd0(ulong param_1,float *param_2,uint param_3,float *param_4,undefined4 *param_5,
                  float *param_6,undefined4 *param_7)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar3 = (ulong)(param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU));
  fVar5 = 0.0;
  for (lVar1 = 0; uVar3 << 2 != lVar1; lVar1 = lVar1 + 4) {
    fVar5 = fVar5 + *(float *)((long)param_2 + lVar1);
  }
  *param_6 = fVar5;
  if (param_7 != (undefined4 *)0x0) {
    fVar6 = (float)param_1;
    if (0.0 <= fVar6) {
      if (fVar5 <= fVar6) {
        func_0x000108406578();
      }
    }
    else {
      fVar6 = -fVar6;
      fVar4 = fVar6;
      func_0x000108406578();
      if (fVar6 <= fVar5) {
        fVar4 = fVar6;
      }
      param_1 = (ulong)(uint)(fVar5 - fVar4);
      if (fVar5 - fVar4 == fVar5) {
        param_1 = 0;
      }
    }
    *param_7 = (int)param_1;
  }
  uVar2 = 0;
  do {
    if (uVar3 == uVar2) {
      *param_5 = 0;
      fVar5 = *param_2;
LAB_108405cac:
      *param_4 = fVar5;
      return;
    }
    fVar5 = param_2[uVar2];
    fVar6 = (float)param_1;
    if ((fVar6 <= fVar5) && ((fVar6 != fVar5 || (fVar5 == 0.0)))) {
      *param_5 = (int)uVar2;
      fVar5 = fVar5 - fVar6;
      goto LAB_108405cac;
    }
    param_1 = (ulong)(uint)(fVar6 - fVar5);
    uVar2 = uVar2 + 1;
  } while( true );
}



/* Entry: 108405cc8; end: 108406367;  */

bool FUN_108405cc8(float param_1,undefined8 param_2,float **param_3,float **param_4,float *param_5,
                  undefined8 *param_6,long param_7,uint param_8,uint param_9,int param_10)

{
  long lVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  undefined8 *puVar9;
  float **ppfVar10;
  float **ppfVar11;
  uint uVar12;
  float *pfVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  double dVar33;
  float *apfStack_130 [2];
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined2 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  long lStack_b0;
  ulong uVar26;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pfVar13 = param_5;
  ppfVar11 = param_4;
  func_0x0001083a630c();
  uVar15 = (uint)ppfVar11;
  if (((ulong)pfVar13 & 1) != 0) {
    bVar6 = false;
    goto LAB_108406214;
  }
  iVar8 = (int)apfStack_130;
  FUN_108376ad8();
  fVar19 = (float)param_2;
  ppfVar11 = param_4;
  if (param_6 == (undefined8 *)0x0) {
    func_0x000108406554();
    if (iVar8 != 0) {
      bVar6 = false;
      if (((float)uStack_108 == (float)uStack_100) &&
         (bVar6 = false, !NAN(uStack_108._4_4_) && !NAN(uStack_100._4_4_))) {
        bVar6 = uStack_108._4_4_ == uStack_100._4_4_;
      }
      if (bVar6) {
        uVar17 = func_0x0001084065a4(uStack_100 & 0xffffffff,0x3f8020c5);
        uStack_100 = CONCAT44(uStack_100._4_4_,uVar17);
        func_0x000108406560();
        func_0x000108406514();
        goto LAB_108405ee8;
      }
    }
  }
  else {
    uStack_120 = *param_6;
    lStack_118 = param_6[1];
    fVar18 = 1.0;
    if (param_5[1] * 0.5 != 0.0) {
      fVar18 = param_5[1] * 0.5;
    }
    fVar24 = param_5[2] * fVar18;
    if (*(char *)((long)param_5 + 0xe) != '\0') {
      fVar24 = fVar18;
    }
    puVar9 = &uStack_120;
    func_0x00010816882c(fVar24,fVar24);
    func_0x000108406554();
    if ((int)puVar9 == 0) {
      func_0x000108406520();
      if (((ulong)puVar9 & 1) != 0) {
        pfVar13 = *param_4;
        uStack_108 = *(undefined8 *)(pfVar13 + 10);
        uStack_100 = *(ulong *)(pfVar13 + 0x10);
        lStack_f8 = uStack_100 + (long)(int)pfVar13[0x12];
        uStack_f0 = 0;
        if (*(long *)(pfVar13 + 0x16) != 0) {
          uStack_f0 = *(long *)(pfVar13 + 0x16) + -4;
        }
        uStack_e8 = 0;
        uStack_e0 = 0;
        uStack_d8 = 0;
        func_0x000108406580();
        dVar33 = 0.0;
        while( true ) {
          iVar8 = (int)puVar9;
          func_0x000108406580();
          if (iVar8 != 1) break;
          fVar27 = (float)uStack_c8;
          fVar25 = uStack_c8._4_4_;
          fVar18 = (float)uStack_d0;
          fVar24 = uStack_d0._4_4_;
          dVar20 = (double)_fmod(dVar33,(double)fVar19);
          puVar9 = &uStack_d0;
          FUN_1084063c4(param_2,(float)dVar20,puVar9,&uStack_120);
          if ((int)puVar9 != 0) {
            if ((int)apfStack_130[0][0xc] < 1) {
LAB_108405eb4:
              func_0x00010840656c();
            }
            else {
              lVar1 = *(long *)(apfStack_130[0] + 10) + (ulong)(uint)apfStack_130[0][0xc] * 8;
              fVar23 = *(float *)(lVar1 + -4);
              bVar6 = false;
              if ((*(float *)(lVar1 + -8) == (float)uStack_d0) &&
                 (bVar6 = false, !NAN(fVar23) && !NAN(uStack_d0._4_4_))) {
                bVar6 = fVar23 == uStack_d0._4_4_;
              }
              if (!bVar6) goto LAB_108405eb4;
            }
            func_0x000108406514();
          }
          dVar33 = dVar33 + (double)ABS((fVar27 - fVar18) + (fVar25 - fVar24));
        }
        if (apfStack_130[0][0x12] != 0.0) goto LAB_108405ee8;
      }
    }
    else {
      puVar9 = &uStack_108;
      FUN_1084063c4(param_2,0,puVar9,&uStack_120);
      iVar8 = (int)puVar9;
      if (iVar8 != 0) {
        func_0x000108406560();
        func_0x000108406514();
LAB_108405ee8:
        func_0x000108406520();
        if (iVar8 != 0) {
          ppfVar10 = param_4;
          FUN_108377324();
          ppfVar11 = apfStack_130;
          if (((param_9 & 1) != 0) || ((int)ppfVar10 == 0)) goto LAB_108406020;
          FUN_10837dd94(&uStack_108,param_4,0);
          FUN_10837de14(&uStack_108);
          fVar18 = (float)func_0x000108406578();
          uVar14 = 0;
          do {
            fVar24 = *(float *)(param_7 + uVar14 * 4);
            uVar26 = (ulong)(uint)fVar24;
            if (fVar18 <= fVar24) {
              if ((((uint)(fVar18 <= 0.0) ^ (uint)uVar14) & 1) == 0) goto LAB_108405f80;
              goto LAB_10840601c;
            }
            uVar14 = uVar14 + 1;
            fVar18 = fVar18 - fVar24;
          } while (param_8 != uVar14);
          if ((param_8 & 1) != 0) {
LAB_108405f80:
            fVar18 = (float)FUN_108377828(param_4,0);
            fVar24 = (float)uVar26;
            uStack_108 = CONCAT44(fVar24,fVar18);
            do {
              fVar27 = (float)func_0x00010840658c();
              bVar6 = false;
              if (fVar18 == fVar27) {
                bVar6 = false;
                if (!NAN(fVar24) && !NAN((float)uVar26)) {
                  bVar6 = fVar24 == (float)uVar26;
                }
              }
            } while (bVar6);
            do {
              fVar27 = (float)func_0x000108406598();
              bVar6 = false;
              if (fVar18 == fVar27) {
                bVar6 = false;
                if (!NAN(fVar24) && !NAN((float)uVar26)) {
                  bVar6 = fVar24 == (float)uVar26;
                }
              }
            } while (bVar6);
            func_0x00010840658c();
            uVar21 = func_0x00010840653c();
            uStack_d0 = (float *)CONCAT44(fVar24 + (float)((ulong)uVar21 >> 0x20),
                                          fVar18 + (float)uVar21);
            func_0x00010840656c();
            func_0x0001081f7a64(apfStack_130,&uStack_108);
            func_0x000108406598();
            fVar18 = (float)uStack_108;
            fVar24 = (float)((ulong)uStack_108 >> 0x20);
            uVar21 = func_0x00010840653c();
            uStack_d0 = (float *)CONCAT44(fVar24 + (float)((ulong)uVar21 >> 0x20),
                                          fVar18 + (float)uVar21);
            func_0x0001081f7a64(apfStack_130,&uStack_d0);
          }
        }
LAB_10840601c:
        ppfVar11 = apfStack_130;
      }
    }
  }
LAB_108406020:
  if ((((param_10 == 1) && (pfVar13 = param_5, FUN_10828782c(), ((ulong)pfVar13 & 1) == 0)) &&
      (ppfVar10 = ppfVar11, func_0x000108377358(ppfVar11,&uStack_108), (int)ppfVar10 != 0)) &&
     (*(short *)(param_5 + 3) == 0)) {
    fVar18 = (float)func_0x00010816bfdc(&uStack_108,&uStack_100);
    fVar24 = (float)uStack_100 - (float)uStack_108;
    fVar27 = (float)(uStack_100 >> 0x20) - (float)((ulong)uStack_108 >> 0x20);
    lStack_f8 = CONCAT44(fVar27,fVar24);
    if ((fVar24 == 0.0) && (fVar27 == 0.0)) goto LAB_108406084;
    uStack_e8 = CONCAT44(uStack_e8._4_4_,fVar18);
    fVar24 = fVar24 * (1.0 / fVar18);
    fVar27 = fVar27 * (1.0 / fVar18);
    lStack_f8 = CONCAT44(fVar27,fVar24);
    if (NAN((fVar24 - fVar24) * fVar27)) goto LAB_108406084;
    uStack_f0 = CONCAT44(-(fVar24 * param_5[1] * 0.5),fVar27 * param_5[1] * 0.5);
    fVar24 = (fVar18 * (float)((int)param_8 >> 1)) / fVar19;
    fVar18 = 1e+06;
    if (fVar24 <= 1e+06) {
      fVar18 = fVar24;
    }
    if (NAN(fVar18)) goto LAB_108406084;
    fVar18 = (float)NEON_fminnm((int)fVar18,0x4effffff);
    if (fVar18 <= -2.1474835e+09) {
      fVar18 = -2.1474835e+09;
    }
    FUN_108377c50(param_3,(int)fVar18 << 2,0,0);
    param_5[1] = -1.0;
    param_5[3] = ABS(param_5[3]);
    bVar4 = true;
  }
  else {
LAB_108406084:
    bVar4 = false;
  }
  FUN_10837dd94(&uStack_120,ppfVar11,0);
  iVar8 = 0;
  fVar18 = 0.0;
  bVar5 = true;
  bVar7 = false;
  if ((param_9 & 1) == 0) {
    bVar5 = false;
    bVar7 = true;
    if (!NAN(param_1)) {
      bVar5 = param_1 < 0.0;
      bVar7 = false;
    }
  }
  do {
    uVar15 = (uint)ppfVar11;
    if (lStack_118 == 0) {
      uVar12 = 0;
      fVar24 = 0.0;
    }
    else {
      uVar12 = (uint)*(byte *)(lStack_118 + 0x44);
      fVar24 = *(float *)(lStack_118 + 0x40);
    }
    fVar18 = fVar18 + (fVar24 * (float)((int)param_8 >> 1)) / fVar19;
    bVar6 = fVar18 <= 1e+06;
    if (1e+06 < fVar18) {
      FUN_108376d4c(param_3);
      goto LAB_108406204;
    }
    uVar15 = 1;
    fVar25 = param_1;
    fVar27 = 0.0;
    uVar16 = param_9;
    while (fVar27 < fVar24) {
      uVar15 = uVar16 | uVar12;
      fVar23 = fVar27 + fVar25;
      if ((uVar15 & 1) == 0) {
        iVar8 = iVar8 + 1;
        if (bVar4) {
          fVar25 = (float)uStack_e8;
          if (fVar23 <= (float)uStack_e8) {
            fVar25 = fVar23;
          }
          fVar31 = (float)((ulong)uStack_108 >> 0x20);
          fVar32 = (float)((ulong)lStack_f8 >> 0x20);
          fVar28 = (float)uStack_108 + fVar27 * (float)lStack_f8;
          fVar29 = fVar31 + fVar27 * fVar32;
          fVar30 = (float)uStack_108 + fVar25 * (float)lStack_f8;
          fVar31 = fVar31 + fVar25 * fVar32;
          auVar22._4_4_ = fVar29;
          auVar22._0_4_ = fVar28;
          auVar22._8_4_ = fVar30;
          auVar22._12_4_ = fVar31;
          auVar3._4_4_ = fVar29;
          auVar3._0_4_ = fVar28;
          auVar3._8_4_ = fVar30;
          auVar3._12_4_ = fVar31;
          auVar22 = NEON_ext(auVar22,auVar3,8,1);
          fVar27 = (float)uStack_f0;
          fVar25 = (float)((ulong)uStack_f0 >> 0x20);
          fStack_c0 = auVar22._0_4_ - fVar27;
          fStack_bc = auVar22._4_4_ - fVar25;
          fStack_b8 = auVar22._8_4_ - fVar27;
          fStack_b4 = auVar22._12_4_ - fVar25;
          uStack_c8 = CONCAT44(fVar31 + fVar25,fVar30 + fVar27);
          uStack_d0 = (float *)CONCAT44(fVar29 + fVar25,fVar28 + fVar27);
          ppfVar11 = (float **)&uStack_d0;
          FUN_108378060(param_3,ppfVar11,4,0);
        }
        else {
          ppfVar11 = param_3;
          func_0x00010837de5c(&uStack_120,param_3,1);
        }
      }
      uVar12 = 0;
      uVar2 = 0;
      if (uVar16 + 1 != param_8) {
        uVar2 = uVar16 + 1;
      }
      fVar25 = *(float *)(param_7 + (long)(int)uVar2 * 4);
      fVar27 = fVar23;
      uVar16 = uVar2;
    }
    if ((lStack_118 != 0) && ((bVar5 == bVar7 & *(byte *)(lStack_118 + 0x44)) != 0)) {
      ppfVar11 = param_3;
      func_0x00010837de5c(&uStack_120,param_3,uVar15 & 1);
      iVar8 = iVar8 + 1;
    }
    uVar14 = 0;
    FUN_10837de6c();
    uVar15 = (uint)ppfVar11;
  } while ((uVar14 & 1) != 0);
  if (1 < iVar8) {
    *(undefined1 *)((long)param_3 + 0xc) = 1;
  }
LAB_108406204:
  FUN_10837de14(&uStack_120);
  pfVar13 = apfStack_130[0];
  FUN_10837ca5c();
LAB_108406214:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return bVar6;
  }
  ___stack_chk_fail();
  FUN_10837ca5c(apfStack_130[0]);
  fVar19 = (float)__Unwind_Resume();
  bVar6 = false;
  if ((1 < (int)uVar15) && ((uVar15 & 1) == 0)) {
    fVar18 = 0.0;
    for (uVar14 = (ulong)uVar15; uVar14 != 0; uVar14 = uVar14 - 1) {
      if (*pfVar13 < 0.0) goto LAB_1084063b8;
      fVar18 = fVar18 + *pfVar13;
      pfVar13 = pfVar13 + 1;
    }
    if (fVar18 <= 0.0) {
LAB_1084063b8:
      bVar6 = false;
    }
    else {
      bVar6 = !NAN((fVar19 - fVar19) * fVar18);
    }
  }
  return bVar6;
}



/* Entry: 108406368; end: 1084063c3;  */

bool FUN_108406368(float param_1,float *param_2,uint param_3)

{
  bool bVar1;
  ulong uVar2;
  float fVar3;
  
  bVar1 = false;
  if ((1 < (int)param_3) && ((param_3 & 1) == 0)) {
    fVar3 = 0.0;
    for (uVar2 = (ulong)param_3; uVar2 != 0; uVar2 = uVar2 - 1) {
      if (*param_2 < 0.0) goto LAB_1084063b8;
      fVar3 = fVar3 + *param_2;
      param_2 = param_2 + 1;
    }
    if (fVar3 <= 0.0) {
LAB_1084063b8:
      bVar1 = false;
    }
    else {
      bVar1 = !NAN((param_1 - param_1) * fVar3);
    }
  }
  return bVar1;
}



/* Entry: 1084063c4; end: 108406513;  */

undefined8 FUN_1084063c4(undefined8 param_1,float param_2,float *param_3,long param_4)

{
  float *pfVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float *pfVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  pfVar5 = param_3 + 2;
  if ((*pfVar5 - *param_3 != 0.0) && (param_3[3] - param_3[1] != 0.0)) {
    return 0;
  }
  uVar6 = (ulong)(param_3[3] - param_3[1] != 0.0);
  fVar10 = param_3[uVar6];
  fVar11 = pfVar5[uVar6];
  fVar9 = fVar10;
  fVar7 = fVar11;
  if (fVar10 <= fVar11) {
    fVar9 = fVar11;
    fVar7 = fVar10;
  }
  pfVar1 = (float *)(param_4 + uVar6 * 4);
  fVar13 = *pfVar1;
  fVar12 = pfVar1[2];
  bVar2 = false;
  bVar3 = false;
  bVar4 = false;
  if (fVar13 <= fVar9) {
    bVar2 = false;
    bVar3 = false;
    bVar4 = true;
    if (!NAN(fVar7) && !NAN(fVar12)) {
      bVar2 = fVar7 < fVar12;
      bVar3 = fVar7 == fVar12;
      bVar4 = false;
    }
  }
  if (!bVar3 && bVar2 == bVar4) {
    return 0;
  }
  fVar8 = fVar11;
  if (fVar13 <= fVar7) {
    if (fVar9 <= fVar12) goto LAB_1084064d0;
    fVar9 = fVar9 - fVar12;
    func_0x000108406534();
    fVar8 = fVar12 + fVar9;
    if (fVar10 <= fVar11) goto LAB_1084064d0;
  }
  else {
    fVar7 = fVar13 - fVar7;
    func_0x000108406534();
    fVar13 = fVar13 - fVar7;
    if (fVar10 <= fVar11) {
      fVar10 = fVar13 - param_2;
      if (fVar12 < fVar11) {
        fVar11 = fVar11 - fVar12;
        func_0x000108406534();
        fVar8 = fVar12 + fVar11;
      }
      goto LAB_1084064d0;
    }
    fVar8 = fVar13;
    if (fVar10 <= fVar12) goto LAB_1084064d0;
    fVar10 = fVar10 - fVar12;
    func_0x000108406534();
    fVar8 = fVar12 + fVar10;
    fVar11 = fVar13;
  }
  fVar10 = param_2 + fVar8;
  fVar8 = fVar11;
LAB_1084064d0:
  param_3[uVar6] = fVar10;
  pfVar5[uVar6] = fVar8;
  if (fVar10 == fVar8) {
    fVar7 = *pfVar5;
    func_0x0001084065a4(fVar7,0x3f8020c5);
    *pfVar5 = fVar7;
  }
  return 1;
}



/* Entry: 108406514; end: 108406657;  */

undefined1 * FUN_108406514(void)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  long unaff_x26;
  undefined4 unaff_s8;
  undefined4 unaff_s9;
  undefined4 auStack_38 [2];
  
  puVar1 = &stack0x00000020;
  func_0x00010837cf24(*(undefined4 *)(unaff_x26 + 8),*(undefined4 *)(unaff_x26 + 0xc),puVar1);
  FUN_108377cd4();
  puVar2 = auStack_38;
  func_0x00010837ca9c();
  func_0x00010837cee4();
  FUN_10837e8b4();
  *puVar2 = unaff_s9;
  puVar2[1] = unaff_s8;
  func_0x00010837cb1c();
  return puVar1;
}



/* Entry: 108406658; end: 1084066eb;  */

undefined8 FUN_108406658(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined1 auStack_28 [8];
  
  if (param_2 != 0) {
    func_0x0001084066f4();
    if (param_2 != 0) {
      unaff_x20 = param_2 + 1;
    }
    lVar1 = unaff_x20;
    func_0x0001083a3dfc(param_1);
    if (lVar1 != 0) {
      _strlen(unaff_x20);
    }
    FUN_1083a322c(auStack_28,unaff_x20);
    func_0x0001083a3cec();
    return unaff_x19;
  }
  *param_1 = 0x1138270b0;
  return 0;
}



/* Entry: 1084066ec; end: 1084066ff;  */

void FUN_1084066ec(void)

{
  return;
}



/* Entry: 108406700; end: 108406797;  */

char * FUN_108406700(char *param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  FUN_108406798();
  cVar1 = *param_1;
  iVar5 = (int)cVar1;
  func_0x0001084067b0();
  if (-1 < iVar5) {
    uVar4 = 0;
    iVar5 = -8;
    while( true ) {
      uVar2 = (uint)cVar1;
      uVar3 = uVar2;
      func_0x0001084067b0();
      if ((int)uVar3 < 0) break;
      if (iVar5 == 0) {
        return (char *)0x0;
      }
      uVar4 = uVar3 | uVar4 << 4;
      param_1 = param_1 + 1;
      cVar1 = *param_1;
      iVar5 = iVar5 + 1;
    }
    if ((uVar2 == 0) || (uVar2 - 1 < 0x20)) {
      if (param_2 != (uint *)0x0) {
        *param_2 = uVar4;
        return param_1;
      }
      return param_1;
    }
  }
  return (char *)0x0;
}



/* Entry: 108406798; end: 1084067d3;  */

void FUN_108406798(long param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + -1);
  do {
    pcVar1 = pcVar1 + 1;
  } while ((int)*pcVar1 - 1U < 0x20);
  return;
}



/* Entry: 1084067d4; end: 10840693f;  */

char * FUN_1084067d4(char *param_1,undefined4 *param_2)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  char cVar4;
  ulong uVar5;
  
  FUN_108406798();
  cVar3 = *param_1;
  if (cVar3 == '-') {
    param_1 = param_1 + 1;
  }
  lVar1 = 0x7fffffff;
  if (cVar3 == '-') {
    lVar1 = 0x80000000;
  }
  cVar4 = *param_1;
  if ((int)cVar4 - 0x30U < 10) {
    uVar5 = 0;
    while ((int)cVar4 - 0x30U < 10) {
      uVar5 = (uVar5 * 10 + (long)cVar4) - 0x30;
      if (lVar1 < (long)uVar5) goto LAB_108406848;
      param_1 = param_1 + 1;
      cVar4 = *param_1;
    }
    if (param_2 != (undefined4 *)0x0) {
      uVar2 = (ulong)(uint)-(int)uVar5;
      if (cVar3 != '-') {
        uVar2 = uVar5;
      }
      *param_2 = (int)uVar2;
    }
  }
  else {
LAB_108406848:
    param_1 = (char *)0x0;
  }
  return param_1;
}



/* Entry: 108406940; end: 108406a37;  */

undefined * FUN_108406940(long param_1,undefined8 param_2,uint *param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = 0x8c;
  ppuVar4 = &PTR_DAT_110a479a8;
  do {
    uVar6 = uVar5 >> 1;
    puVar2 = ppuVar4[uVar6];
    _strcmp(puVar2,param_1);
    ppuVar1 = ppuVar4 + uVar6 + 1;
    uVar5 = uVar5 + (uVar5 >> 1 ^ 0xffffffffffffffff);
    if (-1 < (int)puVar2) {
      ppuVar1 = ppuVar4;
      uVar5 = uVar6;
    }
    ppuVar4 = ppuVar1;
  } while (uVar5 != 0);
  if (ppuVar1 != &PTR_FUN_110a47e08) {
    puVar2 = *ppuVar1;
    lVar3 = param_1;
    _strcmp(param_1,puVar2);
    if ((int)lVar3 == 0) {
      if (param_3 != (uint *)0x0) {
        lVar3 = ((long)(ppuVar1 + -0x22148f35) * 0x20000000 >> 0x20) * 2 +
                (long)(int)((ulong)(ppuVar1 + -0x22148f35) >> 3);
        *param_3 = (uint)(byte)(&UNK_10df26899)[lVar3] << 8 |
                   (uint)(byte)(&UNK_10df26898)[lVar3] << 0x10 | (uint)(byte)(&UNK_10df2689a)[lVar3]
                   | 0xff000000;
      }
      _strlen(puVar2);
      return puVar2 + param_1;
    }
  }
  return (undefined *)0x0;
}



/* Entry: 108406a38; end: 108406e7f;  */

char * FUN_108406a38(byte *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  byte *pbVar5;
  byte *pbVar6;
  float fVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  byte bStack_ca;
  undefined1 uStack_c9;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  long alStack_b0 [2];
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar5 = (byte *)alStack_b0;
  FUN_108376ad8();
  uVar11 = 0;
  bVar4 = false;
  uStack_b8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uVar15 = 0;
  uVar13 = 0;
  uStack_90 = 0;
  uStack_bc = 0;
  uVar14 = 0;
  pcVar8 = (char *)0x0;
  uVar9 = 0;
  if (param_1 != (byte *)0x0) {
    while( true ) {
      do {
        pbVar6 = param_1;
        param_1 = pbVar6 + 1;
        uVar2 = (uint)(char)*pbVar6;
      } while (uVar2 - 1 < 0x20);
      if (uVar2 == 0) break;
      uVar12 = uVar11;
      if ((uVar2 - 0x30 < 10) || (uVar1 = (uint)*pbVar6, uVar1 - 0x2d < 2)) {
LAB_108406b00:
        pcVar8 = (char *)0x0;
        if (((uVar11 & 0xff) == 0) || (param_1 = pbVar5, (uVar11 & 0xff) == 0x5a))
        goto LAB_108406e10;
      }
      else if (uVar1 == 0x2c) {
        FUN_108406e80();
        param_1 = pbVar6;
      }
      else {
        if (uVar1 == 0x2b) goto LAB_108406b00;
        FUN_108406e80();
        bVar4 = uVar2 - 0x61 < 0x1a;
        pbVar6 = param_1;
        uVar12 = uVar2 - 0x20;
        if (!bVar4) {
          uVar12 = uVar2;
        }
      }
      pcVar8 = (char *)0x0;
      fVar16 = (float)(uVar15 >> 0x20);
      switch(uVar12 & 0xff) {
      case 0x41:
        FUN_108406ea0(pbVar6,&uStack_c4,1,0,0);
        pbVar5 = pbVar6;
        if (pbVar6 != (byte *)0x0) {
          FUN_108406e80();
          FUN_108406efc(0);
          pbVar5 = pbVar6;
          if (pbVar6 != (byte *)0x0) {
            FUN_108406e80();
            func_0x000108406f50();
            pbVar5 = pbVar6;
            if (pbVar6 != (byte *)0x0) {
              FUN_108406e80();
              func_0x000108406f50();
              pbVar5 = pbVar6;
              if (pbVar6 != (byte *)0x0) {
                FUN_108406e80();
                FUN_108406ea0();
                pbVar5 = pbVar6;
                if (pbVar6 != (byte *)0x0) {
                  pbVar5 = (byte *)alStack_b0;
                  FUN_108378b74(uStack_c4,uStack_c0,uStack_c8,(undefined4)uStack_a0,uStack_a0._4_4_,
                                pbVar5,uStack_c9,bStack_ca ^ 1);
                  if ((int)*(uint *)(alStack_b0[0] + 0x30) < 1) {
                    uStack_b8 = 0;
                  }
                  else {
                    uStack_b8 = *(ulong *)(*(long *)(alStack_b0[0] + 0x28) +
                                           (ulong)*(uint *)(alStack_b0[0] + 0x30) * 8 + -8);
                  }
                }
                break;
              }
            }
          }
        }
        pbVar6 = (byte *)0x0;
        break;
      case 0x42:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4e:
      case 0x4f:
      case 0x50:
      case 0x52:
      case 0x55:
        goto LAB_108406e10;
      case 0x43:
        func_0x000108406f8c();
        FUN_108406ea0();
        goto code_r0x000108406ce0;
      case 0x48:
        FUN_108406efc(uVar13,pbVar6,&uStack_bc,bVar4);
        uVar3 = uStack_bc;
        pbVar5 = (byte *)alStack_b0;
        FUN_108377c8c(uStack_bc,uStack_b8._4_4_);
        uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar3);
        break;
      case 0x4c:
        func_0x000108406f78();
        pbVar5 = param_1;
        func_0x000108406f9c();
        func_0x0001081f7a64();
        pbVar6 = param_1;
        uStack_b8 = uStack_a0;
        break;
      case 0x4d:
        func_0x000108406f78();
        pbVar5 = param_1;
        func_0x000108406f9c();
        func_0x00010817abbc();
        uStack_b8 = uStack_a0;
        pbVar6 = param_1;
        uVar10 = uStack_a0;
        uVar11 = 0x4c;
        goto code_r0x000108406dd4;
      case 0x51:
        func_0x000108406f8c();
        FUN_108406ea0();
        goto code_r0x000108406db0;
      case 0x53:
        func_0x000108406f8c();
        FUN_108406ea0();
        uStack_a0 = uStack_b8;
        if ((uVar11 & 0xef) == 0x43) {
          fVar7 = (float)(uStack_b8 >> 0x20);
          uStack_a0 = CONCAT44(fVar7 - (fVar16 - fVar7),
                               (float)uStack_b8 - ((float)uVar15 - (float)uStack_b8));
        }
code_r0x000108406ce0:
        pbVar5 = param_1;
        func_0x000108406f9c();
        func_0x00010817abc4();
        pbVar6 = param_1;
        uVar15 = uStack_98;
        uStack_b8 = uStack_90;
        break;
      case 0x54:
        func_0x000108406f78();
        uStack_a0 = uStack_b8;
        if (((uVar11 & 0xff) == 0x54) || ((uVar11 & 0xff) == 0x51)) {
          fVar7 = (float)(uStack_b8 >> 0x20);
          uStack_a0 = CONCAT44(fVar7 - (fVar16 - fVar7),
                               (float)uStack_b8 - ((float)uVar15 - (float)uStack_b8));
        }
code_r0x000108406db0:
        pbVar5 = param_1;
        func_0x000108406f9c();
        FUN_1081f7aa0();
        pbVar6 = param_1;
        uVar15 = uStack_a0;
        uStack_b8 = uStack_98;
        break;
      case 0x56:
        FUN_108406efc(uVar14,pbVar6,&uStack_bc,bVar4);
        uVar3 = uStack_bc;
        pbVar5 = (byte *)alStack_b0;
        FUN_108377c8c(uStack_b8 & 0xffffffff,uStack_bc);
        uStack_b8 = CONCAT44(uVar3,(undefined4)uStack_b8);
        break;
      default:
        if ((uVar12 & 0xff) != 0x5a) goto LAB_108406e10;
        pbVar5 = (byte *)alStack_b0;
        FUN_108377ec8();
        uStack_b8 = uVar9;
      }
      uVar2 = uVar11 & 0xff;
      uVar10 = uStack_b8;
      uVar11 = uVar12;
      if (uVar2 != 0) {
        uVar10 = uVar9;
      }
code_r0x000108406dd4:
      uVar14 = uStack_b8 >> 0x20;
      uVar13 = uStack_b8 & 0xffffffff;
      pcVar8 = (char *)0x0;
      param_1 = pbVar6;
      uVar9 = uVar10;
      if (pbVar6 == (byte *)0x0) goto LAB_108406e10;
    }
    func_0x000108376c1c(param_2,alStack_b0);
    pcVar8 = (char *)0x1;
  }
LAB_108406e10:
  FUN_10837ca5c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_88) {
    ___stack_chk_fail();
    __Unwind_Resume();
    pcVar8 = (char *)(alStack_b0[0] + -1);
    do {
      do {
        pcVar8 = pcVar8 + 1;
      } while (*pcVar8 == 0x2c);
    } while ((int)*pcVar8 - 1U < 0x20);
    return pcVar8;
  }
  return pcVar8;
}



/* Entry: 108406e80; end: 108406e9f;  */

void FUN_108406e80(long param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + -1);
  do {
    do {
      pcVar1 = pcVar1 + 1;
    } while (*pcVar1 == 0x2c);
  } while ((int)*pcVar1 - 1U < 0x20);
  return;
}



/* Entry: 108406ea0; end: 108406efb;  */

void FUN_108406ea0(undefined8 param_1,undefined8 *param_2,uint param_3,int param_4,
                  undefined8 *param_5)

{
  ulong uVar1;
  
  func_0x0001084068c4(param_1,param_2,param_3 << 1);
  if (param_4 != 0) {
    for (uVar1 = (ulong)param_3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *param_2 = CONCAT44((float)((ulong)*param_5 >> 0x20) + (float)((ulong)*param_2 >> 0x20),
                          (float)*param_5 + (float)*param_2);
      param_2 = param_2 + 1;
    }
  }
  return;
}



/* Entry: 108406efc; end: 108406f4f;  */

void FUN_108406efc(float param_1,long param_2,float *param_3,int param_4)

{
  char *pcVar1;
  
  func_0x000108406870();
  if (param_2 != 0) {
    if (param_4 != 0) {
      *param_3 = param_1 + *param_3;
    }
    pcVar1 = (char *)(param_2 + -1);
    do {
      do {
        pcVar1 = pcVar1 + 1;
      } while (*pcVar1 == 0x2c);
    } while ((int)*pcVar1 - 1U < 0x20);
    return;
  }
  return;
}



/* Entry: 108406f50; end: 108406fa7;  */

byte * FUN_108406f50(byte *param_1,undefined8 param_2)

{
  if ((*param_1 & 0xfe) == 0x30) {
    *(bool *)param_2 = *param_1 != 0x30;
    do {
      do {
        param_1 = param_1 + 1;
      } while ((char)*param_1 == 0x2c);
    } while ((int)(char)*param_1 - 1U < 0x20);
    return param_1;
  }
  return (byte *)0x0;
}



/* Entry: 108406fa8; end: 1084070cb;  */

void FUN_108406fa8(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar4 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010840799c();
  fVar7 = (float)func_0x0001084079bc();
  NEON_ext(*(undefined1 (*) [16])(param_1 + 0x40),*(undefined1 (*) [16])(param_1 + 0x40),8,1);
  NEON_ext(*(undefined1 (*) [16])(param_1 + 0x30),*(undefined1 (*) [16])(param_1 + 0x30),8,1);
  func_0x00010840799c();
  fVar8 = (float)func_0x0001084079bc();
  NEON_ext(*(undefined1 (*) [16])(param_1 + 0x50),*(undefined1 (*) [16])(param_1 + 0x50),8,1);
  func_0x00010840799c();
  fVar9 = (float)func_0x0001084079bc();
  func_0x00010840799c();
  fVar10 = (float)func_0x0001084079bc();
  uVar2 = 0;
  bVar1 = fVar7 == 0.0;
  if ((((0.0 <= fVar7) && (bVar1 = fVar8 == 0.0, 0.0 <= fVar8)) &&
      (bVar1 = fVar9 == 0.0, 0.0 <= fVar9)) && (bVar1 = fVar10 == 0.0, 0.0 <= fVar10)) {
    if (fVar8 <= fVar7) {
      fVar8 = fVar7;
    }
    iVar3 = (int)(fVar8 / 10.0);
    if (fVar10 <= fVar9) {
      fVar10 = fVar9;
    }
    iVar5 = (int)(fVar10 / 10.0);
    if (iVar3 < 9) {
      iVar3 = 8;
    }
    bVar1 = iVar5 == 8;
    if (iVar5 < 9) {
      iVar5 = 8;
    }
    uVar2 = CONCAT44(iVar5,iVar3);
  }
  func_0x0001084079d8(uVar4,uVar2);
  if (!bVar1) {
    ___stack_chk_fail();
    lVar6 = 3;
    do {
      func_0x00010816bfdc();
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    return;
  }
  return;
}



/* Entry: 1084070cc; end: 108407123;  */

float FUN_1084070cc(float param_1,long param_2)

{
  long lVar1;
  float fVar2;
  
  fVar2 = 0.0;
  lVar1 = 3;
  do {
    func_0x00010816bfdc(param_2,param_2 + 8);
    fVar2 = fVar2 + param_1;
    lVar1 = lVar1 + -1;
    param_2 = param_2 + 8;
  } while (lVar1 != 0);
  if (NAN(fVar2 - fVar2)) {
    fVar2 = -1.0;
  }
  return fVar2;
}



/* Entry: 108407124; end: 108407867;  */

void FUN_108407124(undefined8 *param_1,long *param_2,long param_3,undefined8 *param_4,uint param_5,
                  ulong param_6,long *param_7)

{
  undefined1 uVar1;
  short sVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  float *pfVar6;
  short sVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 in_ZR;
  uint uVar13;
  undefined1 uVar14;
  ulong uVar15;
  long lVar16;
  short *psVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  undefined8 *puVar24;
  long lVar25;
  ulong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  ulong uVar37;
  undefined1 auVar38 [16];
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  ulong uVar43;
  undefined8 uVar44;
  float fVar45;
  undefined8 uVar46;
  float fVar47;
  ulong uVar48;
  float fVar49;
  float fVar50;
  undefined8 *puStack_c08;
  short *psStack_bc8;
  ulong uStack_bc0;
  long lStack_bb8;
  long lStack_bb0;
  long lStack_ba8;
  undefined8 uStack_b70;
  undefined8 uStack_b50;
  undefined8 auStack_b00 [14];
  undefined8 auStack_a90 [14];
  long *plStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_9d4;
  undefined8 uStack_9bc;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_964;
  undefined8 uStack_94c;
  long lStack_940;
  long lStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  ulong uStack_918;
  undefined8 uStack_910;
  long *plStack_908;
  undefined8 uStack_900;
  ulong uStack_8f8;
  long lStack_8f0;
  long lStack_8e8;
  long lStack_8e0;
  long lStack_8d8;
  undefined1 auStack_8c8 [2048];
  undefined8 auStack_c8 [4];
  undefined8 uStack_a8;
  
  uStack_a8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  if (param_2 != (long *)0x0) {
    uVar13 = (uint)param_6;
    in_ZR = (int)param_5 < 1 || uVar13 == 0;
    if (((int)param_5 >= 1 && 0 < (int)uVar13) &&
       (uVar20 = (ulong)(uVar13 + 1) * (ulong)(param_5 + 1), uVar20 >> 0x1f == 0)) {
      if (param_7 == (long *)0x0) {
        param_7 = param_2;
        FUN_108343afc();
      }
      if ((200 < uVar13) || (200 < param_5 || 10000 < uVar20)) {
        uVar13 = uVar13 + param_5;
        param_5 = (uint)(((float)param_5 / (float)uVar13) * 200.0);
        if ((int)param_5 < 2) {
          param_5 = 1;
        }
        uVar13 = (uint)(((float)(param_6 & 0xffffffff) / (float)uVar13) * 200.0);
        if ((int)uVar13 < 2) {
          uVar13 = 1;
        }
        param_6 = (ulong)uVar13;
        uVar20 = (ulong)(uVar13 + 1 + (uVar13 + 1) * param_5);
      }
      uVar14 = 2;
      if (param_4 != (undefined8 *)0x0) {
        uVar14 = 3;
      }
      uVar1 = param_4 != (undefined8 *)0x0;
      if (param_3 != 0) {
        uVar1 = uVar14;
      }
      FUN_1082cd5d8(auStack_8c8,0x800);
      if (param_3 == 0) {
        puVar24 = (undefined8 *)0x0;
        puStack_c08 = (undefined8 *)0x0;
      }
      else {
        puVar24 = auStack_c8;
        FUN_10834c90c(puVar24,4);
        puStack_c08 = auStack_c8;
        FUN_10834c90c(puStack_c08,uVar20 & 0xffffffff);
      }
      FUN_1083a9268(&lStack_940,0,uVar20,(int)param_6 * param_5 * 6,uVar1);
      if (lStack_940 == 0) {
        lStack_bb0 = 0;
        lStack_ba8 = 0;
        lVar16 = 0;
      }
      else {
        lStack_ba8 = *(long *)(lStack_940 + 8);
        lStack_bb0 = *(long *)(lStack_940 + 0x18);
        lVar16 = lStack_938;
        if (lStack_938 == 0) {
          lVar16 = *(long *)(lStack_940 + 0x10);
        }
      }
      if (puVar24 != (undefined8 *)0x0) {
        FUN_108343a94(auStack_a90);
        uStack_9b0 = auStack_a90[0];
        auStack_a90[0] = 0;
        uStack_9a0 = 0x100000004;
        uStack_9a8 = 0x300000006;
        FUN_10810a400(auStack_a90);
        if (param_7 != (long *)0x0) {
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(param_7,0x10);
            if (bVar5) {
              *(int *)param_7 = (int)*param_7 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        auStack_b00[0] = 0;
        uStack_a10 = 0x100000004;
        uStack_a18 = 0x200000012;
        plStack_a20 = param_7;
        FUN_10810a400(auStack_b00);
        FUN_108345950(&plStack_a20,puVar24,0,&uStack_9b0,param_3,0);
        FUN_10810a400(&plStack_a20);
        FUN_10810a400(&uStack_9b0);
      }
      lVar18 = param_2[9];
      auVar38 = NEON_ext(*(undefined1 (*) [16])(param_2 + 7),*(undefined1 (*) [16])(param_2 + 7),8,1
                        );
      lStack_8e0 = auVar38._8_8_;
      lStack_8e8 = auVar38._0_8_;
      lVar21 = param_2[6];
      lStack_8f0 = lVar18;
      lStack_8d8 = lVar21;
      func_0x0001084079c4(&uStack_9b0);
      lStack_8f0 = *param_2;
      lStack_8e8 = param_2[1];
      lStack_8d8 = param_2[3];
      lStack_8e0 = param_2[2];
      lVar22 = *param_2;
      lVar25 = param_2[3];
      func_0x0001084079c4(&plStack_a20);
      auVar38 = NEON_ext(*(undefined1 (*) [16])(param_2 + 10),*(undefined1 (*) [16])(param_2 + 10),8
                         ,1);
      lStack_8e0 = auVar38._8_8_;
      lStack_8e8 = auVar38._0_8_;
      lStack_8f0 = lVar22;
      lStack_8d8 = lVar18;
      func_0x0001084079c4(auStack_a90);
      lStack_8e8 = param_2[4];
      lStack_8e0 = param_2[5];
      lStack_8f0 = lVar25;
      lStack_8d8 = lVar21;
      func_0x0001084079c4(auStack_b00);
      uVar8 = (ulong)param_5;
      FUN_108407868(&uStack_9b0,uVar8);
      FUN_108407868(&plStack_a20,uVar8);
      lVar18 = 0;
      uVar15 = (ulong)((int)param_6 + 1);
      psStack_bc8 = (short *)(lVar16 + 6);
      lStack_bb8 = lStack_bb0;
      uVar43 = 0;
      puVar19 = puStack_c08;
      uVar26 = 0;
      uStack_bc0 = uVar15;
      while (in_ZR = uVar26 == uVar8 + 1, !(bool)in_ZR) {
        uVar37 = uVar43;
        fVar27 = (float)func_0x0001084078d8(&uStack_9b0);
        fVar34 = fVar41;
        fVar28 = (float)func_0x0001084078d8(&plStack_a20);
        FUN_108407868(auStack_a90,param_6);
        FUN_108407868(auStack_b00,param_6);
        fVar47 = (float)uVar43;
        fVar49 = 1.0 - fVar47;
        fVar39 = (float)uStack_9bc;
        uVar9 = (ulong)uStack_9bc >> 0x20;
        fVar45 = (float)uStack_94c;
        uVar10 = (ulong)uStack_94c >> 0x20;
        fVar29 = (float)uStack_9d4;
        uVar11 = (ulong)uStack_9d4 >> 0x20;
        fVar40 = (float)uStack_964;
        uVar12 = (ulong)uStack_964 >> 0x20;
        fVar41 = (float)uVar37;
        fVar33 = 0.0;
        psVar17 = psStack_bc8;
        uVar48 = uVar43;
        for (uVar23 = 0; fVar32 = (float)uVar37, (param_6 & 0xffffffff) + 1 != uVar23;
            uVar23 = uVar23 + 1) {
          fVar30 = (float)func_0x0001084078d8(auStack_a90);
          fVar42 = fVar32;
          fVar31 = (float)func_0x0001084078d8(auStack_b00);
          fVar50 = 1.0 - fVar33;
          uVar37 = CONCAT44(fVar32,fVar30);
          *(ulong *)(lStack_ba8 + uVar23 * 8) =
               CONCAT44((fVar41 * fVar33 + fVar34 * fVar50 + fVar42 * fVar47 + fVar32 * fVar49) -
                        (((float)uVar10 * fVar47 + (float)uVar12 * fVar49) * fVar33 +
                        ((float)uVar9 * fVar47 + (float)uVar11 * fVar49) * fVar50),
                        (fVar27 * fVar33 + fVar28 * fVar50 + fVar31 * fVar47 + fVar30 * fVar49) -
                        ((fVar45 * fVar47 + fVar40 * fVar49) * fVar33 +
                        (fVar39 * fVar47 + fVar29 * fVar49) * fVar50));
          uVar48 = uVar43;
          fVar32 = fVar49;
          if (puVar24 != (undefined8 *)0x0) {
            uVar36 = puVar24[2];
            uVar44 = puVar24[4];
            uVar46 = puVar24[6];
            func_0x000108407988(*puVar24,fVar49);
            uVar35 = func_0x0001084079ac();
            func_0x000108407988(uVar36,uVar43);
            uVar36 = func_0x0001084079ac();
            uStack_b70 = CONCAT44((float)((ulong)uVar35 >> 0x20) + (float)((ulong)uVar36 >> 0x20),
                                  (float)uVar35 + (float)uVar36);
            func_0x000108407988(uVar46,fVar49);
            uVar35 = func_0x0001084079ac();
            func_0x000108407988(uVar44,uVar43);
            uVar36 = func_0x0001084079ac();
            uStack_b50 = CONCAT44((float)((ulong)uVar35 >> 0x20) + (float)((ulong)uVar36 >> 0x20),
                                  (float)uVar35 + (float)uVar36);
            func_0x000108407988(uStack_b70,fVar50);
            uVar37 = func_0x0001084079ac();
            func_0x000108407988(uStack_b50,fVar33);
            uVar35 = func_0x0001084079ac();
            pfVar6 = (float *)(puVar19 + uVar23 * 2);
            pfVar6[2] = (float)extraout_var + (float)extraout_var_00;
            pfVar6[3] = (float)((ulong)extraout_var >> 0x20) +
                        (float)((ulong)extraout_var_00 >> 0x20);
            *pfVar6 = (float)uVar37 + (float)uVar35;
            pfVar6[1] = (float)(uVar37 >> 0x20) + (float)((ulong)uVar35 >> 0x20);
          }
          if (lStack_bb0 != 0) {
            fVar31 = (float)uVar48;
            fVar42 = (float)param_4[1] * fVar31 + (float)*param_4 * fVar32;
            fVar30 = (float)((ulong)param_4[1] >> 0x20) * fVar31 +
                     (float)((ulong)*param_4 >> 0x20) * fVar32;
            uVar37 = CONCAT44(fVar30,fVar42);
            *(ulong *)(lStack_bb8 + uVar23 * 8) =
                 CONCAT44(((float)((ulong)param_4[2] >> 0x20) * fVar31 +
                          (float)((ulong)param_4[3] >> 0x20) * fVar32) * fVar33 + fVar30 * fVar50,
                          ((float)param_4[2] * fVar31 + (float)param_4[3] * fVar32) * fVar33 +
                          fVar42 * fVar50);
          }
          if (uVar26 < uVar8 && uVar23 < (param_6 & 0xffffffff)) {
            sVar7 = (short)uVar23;
            sVar2 = (short)lVar18 + sVar7;
            psVar17[-3] = sVar2;
            psVar17[-2] = (short)lVar18 + sVar7 + 1;
            sVar7 = (short)uStack_bc0 + sVar7;
            sVar3 = sVar7 + 1;
            psVar17[-1] = sVar3;
            *psVar17 = sVar2;
            psVar17[1] = sVar3;
            psVar17[2] = sVar7;
          }
          fVar32 = 1.0 / (float)(param_6 & 0xffffffff) + fVar33;
          fVar33 = 1.0;
          if (fVar32 <= 1.0) {
            fVar33 = fVar32;
          }
          if (fVar33 <= 0.0) {
            fVar33 = 0.0;
          }
          psVar17 = psVar17 + 6;
        }
        fVar34 = 1.0 / (float)uVar8 + (float)uVar48;
        fVar33 = 1.0;
        if (fVar34 <= 1.0) {
          fVar33 = fVar34;
        }
        lStack_ba8 = lStack_ba8 + uVar15 * 8;
        puVar19 = puVar19 + uVar15 * 2;
        lStack_bb8 = lStack_bb8 + uVar15 * 8;
        if (fVar33 <= 0.0) {
          fVar33 = 0.0;
        }
        uVar43 = (ulong)(uint)fVar33;
        lVar18 = lVar18 + uVar15;
        psStack_bc8 = psStack_bc8 + ((param_6 & 0xffffffff) * 2 + (param_6 & 0xffffffff)) * 2;
        uStack_bc0 = uStack_bc0 + uVar15;
        uVar26 = uVar26 + 1;
      }
      if (puStack_c08 != (undefined8 *)0x0) {
        if (lStack_940 == 0) {
          uVar35 = 0;
        }
        else {
          uVar35 = *(undefined8 *)(lStack_940 + 0x20);
        }
        if (param_7 != (long *)0x0) {
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(param_7,0x10);
            if (bVar5) {
              *(int *)param_7 = (int)*param_7 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        uStack_910 = 0;
        uVar20 = uVar20 & 0xffffffff | 0x100000000;
        uStack_900 = 0x200000012;
        plStack_908 = param_7;
        uStack_8f8 = uVar20;
        FUN_10810a400(&uStack_910);
        FUN_108343a94(&uStack_930);
        uStack_928 = uStack_930;
        uStack_930 = 0;
        uStack_920 = 0x300000006;
        uStack_918 = uVar20;
        FUN_10810a400(&uStack_930);
        FUN_108345950(&uStack_928,uVar35,0,&plStack_908,puStack_c08,0);
        FUN_10810a400(&uStack_928);
        FUN_10810a400(&plStack_908);
      }
      FUN_1083a93b8(param_1,&lStack_940);
      param_2 = &lStack_940;
      FUN_10834845c(param_2);
      func_0x0001084079cc();
      goto LAB_1084077c4;
    }
  }
  *param_1 = 0;
LAB_1084077c4:
  func_0x0001084079d8(uStack_a8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  FUN_10810a400(&uStack_928);
  FUN_10810a400(&plStack_908);
  FUN_10834845c(&lStack_940);
  func_0x0001084079cc();
  do {
    __Unwind_Resume(param_2);
  } while( true );
}



/* Entry: 108407868; end: 10840790b;  */

void FUN_108407868(undefined8 *param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(uint *)(param_1 + 5) = param_2;
  fVar1 = 1.0 / (float)param_2;
  fVar2 = fVar1 * fVar1;
  *(uint *)(param_1 + 4) = param_2 + 1;
  uVar4 = NEON_fmov(0x40c00000,4);
  fVar6 = (float)*param_1;
  fVar7 = (float)((ulong)*param_1 >> 0x20);
  fVar3 = fVar1 * fVar2 * fVar6 * (float)uVar4;
  fVar5 = fVar1 * fVar2 * fVar7 * (float)((ulong)uVar4 >> 0x20);
  *(ulong *)((long)param_1 + 0x44) = CONCAT44(fVar5,fVar3);
  fVar8 = (float)param_1[1];
  fVar9 = (float)((ulong)param_1[1] >> 0x20);
  *(ulong *)((long)param_1 + 0x3c) =
       CONCAT44(fVar5 + fVar2 * (fVar9 + fVar9),fVar3 + fVar2 * (fVar8 + fVar8));
  *(ulong *)((long)param_1 + 0x34) =
       CONCAT44(fVar1 * fVar2 * fVar7 + fVar9 * fVar2 + fVar1 * (float)((ulong)param_1[2] >> 0x20),
                fVar1 * fVar2 * fVar6 + fVar8 * fVar2 + fVar1 * (float)param_1[2]);
  *(undefined8 *)((long)param_1 + 0x2c) = param_1[3];
  return;
}



/* Entry: 10840790c; end: 108407987;  */

undefined8 * FUN_10840790c(undefined8 *param_1,undefined8 *param_2)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar2 = *param_2;
  uVar8 = param_2[3];
  fVar4 = (float)param_2[1];
  fVar6 = (float)param_2[2];
  fVar5 = (float)((ulong)param_2[1] >> 0x20);
  fVar7 = (float)((ulong)param_2[2] >> 0x20);
  uVar10 = NEON_fmov(0x40400000,4);
  fVar9 = (float)uVar10;
  fVar11 = (float)((ulong)uVar10 >> 0x20);
  fVar1 = (float)uVar2;
  fVar3 = (float)((ulong)uVar2 >> 0x20);
  param_1[1] = CONCAT44((fVar3 + (fVar7 - (fVar5 + fVar5))) * fVar11,
                        (fVar1 + (fVar6 - (fVar4 + fVar4))) * fVar9);
  *param_1 = CONCAT44(((float)((ulong)uVar8 >> 0x20) + (fVar5 - fVar7) * fVar11) - fVar3,
                      ((float)uVar8 + (fVar4 - fVar6) * fVar9) - fVar1);
  param_1[2] = CONCAT44((fVar5 - fVar3) * fVar11,(fVar4 - fVar1) * fVar9);
  param_1[3] = uVar2;
  uVar8 = param_2[1];
  uVar2 = *param_2;
  uVar10 = param_2[2];
  *(undefined8 *)((long)param_1 + 100) = param_2[3];
  *(undefined8 *)((long)param_1 + 0x5c) = uVar10;
  *(undefined8 *)((long)param_1 + 0x54) = uVar8;
  *(undefined8 *)((long)param_1 + 0x4c) = uVar2;
  FUN_108407868(param_1,1);
  return param_1;
}



/* Entry: 108407988; end: 1084079eb;  */

float FUN_108407988(float param_1,float param_2)

{
  return param_1 * param_2;
}



/* Entry: 1084079ec; end: 108407db3;  */

void FUN_1084079ec(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined1 in_OV;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 in_s3;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  byte bStack_1e2;
  float fStack_1a4;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined8 uStack_118;
  undefined4 uStack_110;
  undefined8 uStack_108;
  float fStack_100;
  undefined1 auStack_f8 [72];
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  
  puVar4 = param_3;
  func_0x000108407dd4(*(undefined4 *)((long)param_3 + 0xc),*(undefined4 *)(param_3 + 2),
                      *(undefined4 *)((long)param_3 + 0x14));
  if (((!(bool)in_OV) &&
      (func_0x000108407dd4(*(undefined4 *)puVar4,*(undefined4 *)((long)puVar4 + 4),
                           *(undefined4 *)(puVar4 + 1)), !(bool)in_OV)) &&
     (!NAN(*(float *)(puVar4 + 3) - *(float *)(puVar4 + 3)))) {
    lStack_a8 = param_1[0x20];
    lStack_b0 = param_1[0x1f];
    lStack_90 = param_1[0x23];
    lStack_98 = param_1[0x22];
    lStack_a0 = param_1[0x21];
    lStack_168 = 0;
    uStack_170 = 0x3f800000;
    uStack_158 = 0;
    uStack_160 = 0x3f80000000000000;
    uStack_148 = 0x3f800000;
    uStack_150 = 0;
    uStack_138 = 0x3f80000000000000;
    uStack_140 = 0;
    func_0x000108407dbc(auStack_f8);
    uVar1 = *(uint *)((long)puVar4 + 0x24);
    uStack_108 = *puVar4;
    fStack_100 = *(float *)(puVar4 + 1);
    uStack_118 = *(undefined8 *)((long)param_3 + 0xc);
    uStack_110 = *(undefined4 *)((long)param_3 + 0x14);
    if ((uVar1 >> 2 & 1) == 0) {
      func_0x00010827a0cc(&lStack_b0,&uStack_118,1);
    }
    uVar10 = *(undefined4 *)(puVar4 + 3);
    if (*(char *)((long)puVar4 + 0x1f) != '\0') {
      FUN_108376ad8(&uStack_1f0);
      FUN_1083796e4(param_2,&lStack_b0,&uStack_1f0,1);
      bStack_1e2 = bStack_1e2 | 4;
      fVar5 = fStack_100 * 0.0078125;
      fVar7 = 150.0;
      if (fVar5 * 64.0 <= 150.0) {
        fVar7 = fVar5 * 64.0;
      }
      fVar11 = 0.0;
      if (0.0 <= fVar5) {
        fVar11 = fVar5;
      }
      fVar5 = fVar7 * 0.5;
      fVar11 = (fVar11 + 1.0) * fVar5;
      fVar12 = (fVar7 - fVar11) * 0.5;
      uStack_158 = 0;
      uStack_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      lStack_168 = 0;
      uStack_170 = 0;
      uVar9 = 0;
      uStack_130 = 0x4080000000000000;
      FUN_108343500(*(undefined4 *)((long)puVar4 + 0x1c));
      uStack_140 = CONCAT44(fVar7,uVar9);
      uStack_138 = CONCAT44(in_s3,fVar5);
      if (0.0 <= fVar12) {
        uStack_130 = CONCAT44(uStack_130._4_4_,fVar12);
      }
      uStack_128 = 0x80;
      fVar7 = fVar11 * 0.57735 + 0.5;
      if (fVar11 <= 0.0) {
        fVar7 = 0.0;
      }
      func_0x000108407dc8(&uStack_178,fVar7);
      uStack_160 = uStack_178;
      uStack_178 = 0;
      FUN_108376540(0);
      FUN_10810c718(&uStack_178);
      (**(code **)(*param_1 + 0x130))(param_1,&uStack_1f0,&uStack_170,1);
      func_0x000108407db4();
      FUN_10837ca5c(uStack_1f0);
    }
    if (*(char *)((long)puVar4 + 0x23) != '\0') {
      uStack_198 = 0;
      uStack_1a0 = 0x3f800000;
      uStack_188 = 0;
      uStack_190 = 0x3f800000;
      lStack_180 = 0x103f800000;
      uVar2 = param_2;
      func_0x0001083773e0(param_2);
      puVar3 = &uStack_118;
      FUN_10834acf4(uVar10,puVar3,&lStack_b0,&uStack_108,uVar2,uVar1 >> 2 & 1,&uStack_1a0,
                    &fStack_1a4);
      if (((ulong)puVar3 & 1) != 0) {
        uStack_170 = CONCAT44(uStack_198._4_4_,(int)uStack_1a0);
        lStack_168 = uStack_188 << 0x20;
        uStack_160 = CONCAT44((undefined4)uStack_190,uStack_1a0._4_4_);
        uStack_148 = 0x3f800000;
        uStack_150 = 0;
        uStack_158 = uStack_188 & 0xffffffff00000000;
        uStack_140 = CONCAT44(uStack_190._4_4_,(undefined4)uStack_198);
        uStack_138 = lStack_180 << 0x20;
        uVar10 = (undefined4)uStack_198;
        uVar9 = uStack_198._4_4_;
        uVar8 = uStack_1a0._4_4_;
        func_0x000108407dbc(&uStack_1f0);
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        lStack_168 = 0;
        uStack_170 = 0;
        uVar6 = 0;
        uStack_130 = 0x4080000000000000;
        uStack_128 = 0;
        FUN_108343500(*(undefined4 *)(puVar4 + 4));
        uStack_140 = CONCAT44(uVar8,uVar6);
        uStack_138 = CONCAT44(uVar9,uVar10);
        fVar7 = fStack_1a4 * 0.57735 + 0.5;
        if (fStack_1a4 <= 0.0) {
          fVar7 = 0.0;
        }
        func_0x000108407dc8(&uStack_1f8,fVar7);
        uStack_160 = uStack_1f8;
        uStack_1f8 = 0;
        FUN_108376540(0);
        FUN_10810c718(&uStack_1f8);
        (**(code **)(*param_1 + 0x130))(param_1,param_2,&uStack_170,0);
        func_0x000108407db4();
        FUN_1083418fc(&uStack_1f0);
      }
    }
    FUN_1083418fc(auStack_f8);
  }
  return;
}



/* Entry: 108407db4; end: 108407de7;  */

undefined8 * FUN_108407db4(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long in_stack_00000090;
  
  FUN_108154c6c(&stack0x000000b8);
  FUN_10811e834(&stack0x000000b0);
  FUN_108115b2c(&stack0x000000a8);
  FUN_10810c718(&stack0x000000a0);
  func_0x000106f47224(&stack0x00000098);
  if (in_stack_00000090 != 0) {
    piVar1 = (int *)(in_stack_00000090 + 8);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      func_0x000108115bc4();
    }
  }
  return &stack0x00000090;
}



/* Entry: 108407de8; end: 108407e33;  */

int FUN_108407de8(float param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = 0;
  if ((param_1 <= 0.0) || (iVar1 = 0x3f800000, param_1 == 1.0)) {
    return iVar1;
  }
  func_0x000108407edc();
  param_2 = param_2 * param_1;
  if (param_2 <= 128.0) {
    if (param_2 < -127.0) {
      return 0;
    }
    fVar3 = (float)(int)param_2;
    fVar2 = fVar3 + -1.0;
    if (fVar3 <= param_2) {
      fVar2 = fVar3;
    }
    fVar2 = (param_2 + 121.274055 + (param_2 - fVar2) * -1.4901291 +
            27.728024 / (4.8425255 - (param_2 - fVar2))) * 8388608.0;
    if (fVar2 < 2.1474836e+09) {
      if (0.0 <= fVar2) {
        return (int)fVar2;
      }
      return 0;
    }
  }
  return 0x7f800000;
}



/* Entry: 108407e34; end: 108408033;  */

int FUN_108407e34(float param_1)

{
  float fVar1;
  float fVar2;
  
  if (param_1 <= 128.0) {
    if (param_1 < -127.0) {
      return 0;
    }
    fVar2 = (float)(int)param_1;
    fVar1 = fVar2 + -1.0;
    if (fVar2 <= param_1) {
      fVar1 = fVar2;
    }
    fVar1 = (param_1 + 121.274055 + (param_1 - fVar1) * -1.4901291 +
            27.728024 / (4.8425255 - (param_1 - fVar1))) * 8388608.0;
    if (fVar1 < 2.1474836e+09) {
      if (0.0 <= fVar1) {
        return (int)fVar1;
      }
      return 0;
    }
  }
  return 0x7f800000;
}



/* Entry: 108408034; end: 108408087;  */

bool FUN_108408034(int param_1)

{
  func_0x00010840a8fc();
  return param_1 == 1;
}



/* Entry: 108408088; end: 108408217;  */

float FUN_108408088(float param_1,undefined4 *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  
  iVar1 = (int)param_2;
  fVar2 = -1.0;
  if (0.0 <= param_1) {
    fVar2 = 1.0;
  }
  func_0x000108407f34(iVar1,&fStack_58,&fStack_70);
  if (iVar1 - 1U < 4) {
    param_1 = param_1 * fVar2;
    switch(iVar1) {
    case 1:
      if ((float)param_2[4] <= param_1) {
        param_1 = (float)param_2[2] + param_1 * (float)param_2[1];
        FUN_108407de8(param_1,*param_2);
        param_1 = param_1 + (float)param_2[5];
      }
      else {
        param_1 = (float)param_2[6] + param_1 * (float)param_2[3];
      }
      break;
    case 2:
      FUN_108407de8(param_1,uStack_50);
      param_1 = (fStack_58 + param_1 * fStack_54) / (fStack_4c + param_1 * fStack_48);
      FUN_108407de8(param_1,uStack_44);
      break;
    case 3:
      fVar3 = param_1 * fStack_70;
      if (fVar3 <= 1.0) {
        FUN_108407de8(fVar3,uStack_6c);
      }
      else {
        fVar3 = (param_1 - fStack_60) * fStack_68 * 1.442695;
        func_0x000108407e34(fVar3);
        fVar3 = fVar3 + fStack_64;
      }
      return fVar2 * (fStack_5c + 1.0) * fVar3;
    case 4:
      param_1 = param_1 / (fStack_5c + 1.0);
      if (param_1 <= 1.0) {
        FUN_108407de8(param_1,uStack_6c);
        param_1 = fStack_70 * param_1;
      }
      else {
        param_1 = param_1 - fStack_64;
        func_0x000108407edc(param_1);
        param_1 = fStack_60 + param_1 * 0.6931472 * fStack_68;
      }
    }
    fVar2 = fVar2 * param_1;
  }
  else {
    fVar2 = 0.0;
  }
  return fVar2;
}



/* Entry: 108408218; end: 1084082bf;  */

float FUN_108408218(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar2 = 0;
  uVar1 = *param_1;
  if (uVar1 < 0x101) {
    uVar1 = 0x100;
  }
  fVar4 = 0.0;
  for (; uVar1 != uVar2; uVar2 = uVar2 + 1) {
    fVar5 = (1.0 / (float)(uVar1 - 1)) * (float)uVar2;
    fVar3 = fVar5;
    FUN_1084082c0(param_1);
    FUN_108408088(param_2);
    fVar5 = fVar5 - fVar3;
    fVar3 = -fVar5;
    if (0.0 <= fVar5) {
      fVar3 = fVar5;
    }
    if (fVar4 <= fVar3) {
      fVar4 = fVar3;
    }
  }
  return fVar4;
}



/* Entry: 1084082c0; end: 10840837b;  */

float FUN_1084082c0(float param_1,int *param_2)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  int *piVar4;
  int iVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  
  if (*param_2 == 0) {
    piVar1 = param_2 + 1;
    fVar8 = -1.0;
    if (0.0 <= param_1) {
      fVar8 = 1.0;
    }
    piVar4 = piVar1;
    func_0x000108407f34(piVar1,&fStack_58,&fStack_70);
    if ((int)piVar4 - 1U < 4) {
      param_1 = param_1 * fVar8;
      switch((int)piVar4) {
      case 1:
        if ((float)param_2[5] <= param_1) {
          param_1 = (float)param_2[3] + param_1 * (float)param_2[2];
          FUN_108407de8(param_1,*piVar1);
          param_1 = param_1 + (float)param_2[6];
        }
        else {
          param_1 = (float)param_2[7] + param_1 * (float)param_2[4];
        }
        break;
      case 2:
        FUN_108407de8(param_1,uStack_50);
        param_1 = (fStack_58 + param_1 * fStack_54) / (fStack_4c + param_1 * fStack_48);
        FUN_108407de8(param_1,uStack_44);
        break;
      case 3:
        fVar7 = param_1 * fStack_70;
        if (fVar7 <= 1.0) {
          FUN_108407de8(fVar7,uStack_6c);
        }
        else {
          fVar7 = (param_1 - fStack_60) * fStack_68 * 1.442695;
          func_0x000108407e34(fVar7);
          fVar7 = fVar7 + fStack_64;
        }
        return fVar8 * (fStack_5c + 1.0) * fVar7;
      case 4:
        param_1 = param_1 / (fStack_5c + 1.0);
        if (param_1 <= 1.0) {
          FUN_108407de8(param_1,uStack_6c);
          param_1 = fStack_70 * param_1;
        }
        else {
          param_1 = param_1 - fStack_64;
          func_0x000108407edc(param_1);
          param_1 = fStack_60 + param_1 * 0.6931472 * fStack_68;
        }
      }
      fVar8 = fVar8 * param_1;
    }
    else {
      fVar8 = 0.0;
    }
    return fVar8;
  }
  fVar7 = (float)NEON_fminnm(param_1,0x3f800000);
  fVar8 = 0.0;
  if (0.0 <= fVar7) {
    fVar8 = fVar7;
  }
  fVar8 = fVar8 * (float)(*param_2 - 1);
  iVar5 = (int)(float)((int)(fVar8 + 1.0) + -1);
  lVar6 = *(long *)(param_2 + 2);
  if (lVar6 == 0) {
    uVar2 = *(ushort *)(*(long *)(param_2 + 4) + (long)(int)fVar8 * 2);
    uVar3 = *(ushort *)(*(long *)(param_2 + 4) + (long)iVar5 * 2);
    fVar9 = 1.5259022e-05;
    fVar7 = (float)(ushort)(uVar2 >> 8 | uVar2 << 8) * 1.5259022e-05;
    fVar10 = (float)(ushort)(uVar3 >> 8 | uVar3 << 8);
  }
  else {
    fVar7 = (float)NEON_ucvtf((uint)*(byte *)(lVar6 + (int)fVar8));
    fVar9 = 0.003921569;
    fVar7 = fVar7 * 0.003921569;
    fVar10 = (float)NEON_ucvtf((uint)*(byte *)(lVar6 + iVar5));
  }
  return fVar7 + (fVar8 - (float)(int)fVar8) * (fVar10 * fVar9 - fVar7);
}



/* Entry: 10840837c; end: 10840839b;  */

bool FUN_10840837c(float param_1)

{
  FUN_108408218();
  return param_1 < 0.001953125;
}


