/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109265f98; end: 109265fab;  */

void FUN_109265f98(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  uVar1 = *(uint *)(plVar2 + 1);
  puVar4 = (ulong *)*plVar2;
  puVar5 = puVar4;
  if (uVar1 != 0) {
    uVar3 = (ulong)(0x40 - uVar1);
    uVar6 = uVar3;
    if (param_2 <= uVar3) {
      uVar6 = param_2;
    }
    puVar5 = puVar4 + 1;
    *puVar4 = *puVar4 | 0xffffffffffffffffU >> (uVar3 - uVar6 & 0x3f) & -1L << ((ulong)uVar1 & 0x3f)
    ;
    param_2 = param_2 - uVar6;
    *plVar2 = (long)puVar5;
  }
  uVar6 = param_2 >> 6;
  if (0x3f < param_2) {
    _memset(puVar5,0xff,uVar6 << 3);
  }
  if ((param_2 & 0x3f) != 0) {
    *plVar2 = (long)(puVar5 + uVar6);
    puVar5[uVar6] = puVar5[uVar6] | 0xffffffffffffffffU >> (-(param_2 & 0x3f) & 0x3f);
  }
  return;
}



/* Entry: 109265fac; end: 109265fdf;  */

void FUN_109265fac(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104c4f740();
  uVar1 = *(uint *)(param_1 + 1);
  puVar3 = (ulong *)*param_1;
  puVar4 = puVar3;
  if (uVar1 != 0) {
    uVar2 = (ulong)(0x40 - uVar1);
    uVar5 = uVar2;
    if (param_2 <= uVar2) {
      uVar5 = param_2;
    }
    puVar4 = puVar3 + 1;
    *puVar3 = *puVar3 | 0xffffffffffffffffU >> (uVar2 - uVar5 & 0x3f) & -1L << ((ulong)uVar1 & 0x3f)
    ;
    param_2 = param_2 - uVar5;
    *param_1 = (long)puVar4;
  }
  uVar5 = param_2 >> 6;
  if (0x3f < param_2) {
    _memset(puVar4,0xff,uVar5 << 3);
  }
  if ((param_2 & 0x3f) != 0) {
    *param_1 = (long)(puVar4 + uVar5);
    puVar4[uVar5] = puVar4[uVar5] | 0xffffffffffffffffU >> (-(param_2 & 0x3f) & 0x3f);
  }
  return;
}



/* Entry: 109265fe0; end: 10926613b;  */

void FUN_109265fe0(long *param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  puVar3 = (ulong *)*param_1;
  puVar4 = puVar3;
  if (uVar1 != 0) {
    uVar2 = (ulong)(0x40 - uVar1);
    uVar5 = uVar2;
    if (param_2 <= uVar2) {
      uVar5 = param_2;
    }
    puVar4 = puVar3 + 1;
    *puVar3 = *puVar3 | 0xffffffffffffffffU >> (uVar2 - uVar5 & 0x3f) & -1L << ((ulong)uVar1 & 0x3f)
    ;
    param_2 = param_2 - uVar5;
    *param_1 = (long)puVar4;
  }
  uVar5 = param_2 >> 6;
  if (0x3f < param_2) {
    _memset(puVar4,0xff,uVar5 << 3);
  }
  if ((param_2 & 0x3f) != 0) {
    *param_1 = (long)(puVar4 + uVar5);
    puVar4[uVar5] = puVar4[uVar5] | 0xffffffffffffffffU >> (-(param_2 & 0x3f) & 0x3f);
  }
  return;
}



/* Entry: 10926613c; end: 1092661e7;  */

long * FUN_10926613c(long *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = param_2;
  param_1[1] = param_2 + 0x930;
  param_1[2] = param_2 + 0x810;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  FUN_109268558(param_1 + 6);
  lVar1 = 0;
  *(undefined8 *)((long)param_1 + 0x484) = 0;
  *(undefined8 *)((long)param_1 + 0x47c) = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  do {
    *(undefined2 *)((long)param_1 + lVar1 + 0x468) = 0xff;
    lVar1 = lVar1 + 2;
  } while (lVar1 != 0x24);
  *(undefined8 *)((long)param_1 + 0x49c) = 0;
  *(undefined8 *)((long)param_1 + 0x494) = 0;
  *(undefined8 *)((long)param_1 + 0x48c) = 0;
  FUN_109261628(param_1 + 0x95,param_2);
  return param_1;
}



/* Entry: 1092661e8; end: 109266273;  */

void FUN_1092661e8(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  iVar1 = *param_2;
  iVar3 = param_2[1];
  iVar2 = param_2[2];
  iVar4 = param_2[3];
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 != 0) {
    if ((((*(char *)(lVar5 + 0x1b4) == '\x01') && (*(int *)(lVar5 + 0x1a4) == iVar1)) &&
        (*(int *)(lVar5 + 0x1a8) == iVar3)) &&
       ((*(int *)(lVar5 + 0x1ac) == iVar2 && (*(int *)(lVar5 + 0x1b0) == iVar4))))
    goto LAB_109266264;
    *(undefined1 *)(lVar5 + 0x1b4) = 1;
    *(int *)(lVar5 + 0x1a4) = iVar1;
    *(int *)(lVar5 + 0x1a8) = iVar3;
    *(int *)(lVar5 + 0x1ac) = iVar2;
    *(int *)(lVar5 + 0x1b0) = iVar4;
  }
  _glViewport();
LAB_109266264:
                    /* WARNING: Could not recover jumptable at 0x00010bdbe714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glDepthRangef_11034b508)(param_2[4],param_2[5]);
  return;
}



/* Entry: 109266274; end: 1092662eb;  */

void FUN_109266274(long param_1,float *param_2)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (param_2[2] == 0.0) {
    fVar4 = *param_2;
    fVar3 = param_2[1];
    lVar2 = *(long *)(param_1 + 0x18);
    if (lVar2 != 0) {
      if (((*(char *)(lVar2 + 0x278) == '\x01') && (ABS(*(float *)(lVar2 + 0x270) - fVar3) <= 1e-06)
          ) && (ABS(*(float *)(lVar2 + 0x274) - fVar4) <= 1e-06)) {
        return;
      }
      *(undefined1 *)(lVar2 + 0x278) = 1;
      *(float *)(lVar2 + 0x270) = fVar3;
      *(float *)(lVar2 + 0x274) = fVar4;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbea68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__glPolygonOffset_11034b740)();
    return;
  }
  puVar1 = &UNK_10f561969;
  FUN_109244fe8();
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  lVar2 = *(long *)(puVar1 + 0x18);
  if (lVar2 != 0) {
    if (((*(char *)(lVar2 + 0x1a0) == '\x01') && (ABS(*(float *)(lVar2 + 400) - fVar3) <= 1e-06)) &&
       ((ABS(*(float *)(lVar2 + 0x194) - fVar4) <= 1e-06 &&
        ((ABS(*(float *)(lVar2 + 0x198) - fVar5) <= 1e-06 &&
         (ABS(*(float *)(lVar2 + 0x19c) - fVar6) <= 1e-06)))))) {
      return;
    }
    *(undefined1 *)(lVar2 + 0x1a0) = 1;
    *(float *)(lVar2 + 400) = fVar3;
    *(float *)(lVar2 + 0x194) = fVar4;
    *(float *)(lVar2 + 0x198) = fVar5;
    *(float *)(lVar2 + 0x19c) = fVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glBlendColor_11034b3a0)();
  return;
}



/* Entry: 1092662ec; end: 10926636f;  */

void FUN_1092662ec(long param_1,float *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  fVar5 = param_2[3];
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if ((((*(char *)(lVar1 + 0x1a0) == '\x01') && (ABS(*(float *)(lVar1 + 400) - fVar2) <= 1e-06))
        && (ABS(*(float *)(lVar1 + 0x194) - fVar3) <= 1e-06)) &&
       ((ABS(*(float *)(lVar1 + 0x198) - fVar4) <= 1e-06 &&
        (ABS(*(float *)(lVar1 + 0x19c) - fVar5) <= 1e-06)))) {
      return;
    }
    *(undefined1 *)(lVar1 + 0x1a0) = 1;
    *(float *)(lVar1 + 400) = fVar2;
    *(float *)(lVar1 + 0x194) = fVar3;
    *(float *)(lVar1 + 0x198) = fVar4;
    *(float *)(lVar1 + 0x19c) = fVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__glBlendColor_11034b3a0)();
  return;
}



/* Entry: 109266370; end: 10926640b;  */

void FUN_109266370(long param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x340) & 1) == 0) {
    lVar2 = param_1;
    FUN_109266650();
    *(int *)(param_1 + 0x338) = (int)lVar2;
    *(undefined1 *)(param_1 + 0x340) = 1;
  }
  lVar2 = *(long *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(long **)(*param_2 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(*param_2 + 0x18) + 0x30))();
    if (lVar2 != 0) {
      FUN_10925aabc(lVar2 + 0xd0);
      *(long *)(param_1 + 0x18) = lVar2;
    }
    return;
  }
  func_0x000104c501e4();
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1092663ec);
  (*pcVar1)();
}



/* Entry: 10926640c; end: 10926659b;  */

void FUN_10926640c(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  
  FUN_10925eb5c(*(long *)(param_1 + 0x368) + 0x590,*(undefined8 *)(param_1 + 0x18));
  lVar4 = *(long *)(param_1 + 0x368);
  uVar2 = *(ulong *)(lVar4 + 0x448);
  if (uVar2 != 0) {
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 1;
    do {
      lVar3 = *(long *)(param_1 + 0x400 + uVar6 * 8);
      if (lVar3 != *(long *)(lVar4 + 0x17a0 + uVar6 * 8)) {
        FUN_1092486c8(*(undefined8 *)(param_1 + 8),lVar4 + 0x348,*(undefined8 *)(param_1 + 0x18));
        uVar5 = uVar5 + 1;
        lVar3 = *(long *)(lVar4 + 0x17a0 + uVar6 * 8);
        uVar2 = *(ulong *)(lVar4 + 0x448);
      }
      *(long *)(param_1 + 0x400 + uVar6 * 8) = lVar3;
      bVar1 = uVar7 < uVar2;
      uVar6 = uVar7;
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (bVar1);
    if (uVar2 != uVar5) goto LAB_1092664b4;
  }
  if ((*(uint *)(param_1 + 0x33c) >> 0xe & 1) != 0) {
    *(uint *)(param_1 + 0x33c) = *(uint *)(param_1 + 0x33c) & 0xffffbfff;
  }
LAB_1092664b4:
  if (*(long *)(param_1 + 0x440) != *(long *)(lVar4 + 0x17e0)) {
    FUN_1092480b4(*(undefined8 *)(param_1 + 8),lVar4 + 0x308,*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x440) = *(undefined8 *)(lVar4 + 0x17e0);
    if ((*(uint *)(param_1 + 0x33c) >> 8 & 1) != 0) {
      *(uint *)(param_1 + 0x33c) = *(uint *)(param_1 + 0x33c) & 0xfffffeff;
    }
  }
  FUN_109248164(*(undefined8 *)(param_1 + 8),lVar4 + 0x308,param_1 + 0x370,
                *(undefined8 *)(param_1 + 0x18));
  if ((*(uint *)(param_1 + 0x33c) >> 10 & 1) != 0) {
    *(uint *)(param_1 + 0x33c) = *(uint *)(param_1 + 0x33c) & 0xfffffbff;
  }
  FUN_109287c70(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x368));
  if (*(long *)(param_1 + 0x448) != *(long *)(lVar4 + 0x17e8)) {
    FUN_109248d60(*(undefined8 *)(param_1 + 8),lVar4 + 0x2e4,*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x448) = *(undefined8 *)(lVar4 + 0x17e8);
  }
  if (*(long *)(param_1 + 0x450) != *(long *)(lVar4 + 0x17f0)) {
    FUN_109248634(*(undefined8 *)(param_1 + 8),lVar4 + 0x300,*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x450) = *(undefined8 *)(lVar4 + 0x17f0);
  }
  if (*(long *)(param_1 + 0x458) != *(long *)(lVar4 + 0x17f8)) {
    *(long *)(param_1 + 0x458) = *(long *)(lVar4 + 0x17f8);
  }
  return;
}



/* Entry: 10926659c; end: 1092665ff;  */

void FUN_10926659c(long param_1,int *param_2)

{
  ulong uVar1;
  
  if (param_2[1] != 0) {
    uVar1 = 0;
    do {
      FUN_109288eb8(param_1 + 0x378,(int)uVar1 + *param_2,*(undefined8 *)(param_2 + uVar1 * 2 + 2),
                    param_2[uVar1 + 0x12]);
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)param_2[1]);
  }
  return;
}



/* Entry: 109266600; end: 10926664f;  */

/* WARNING: Removing unreachable block (ram,0x000109266fec) */
/* WARNING: Type propagation algorithm not settling */

long * FUN_109266600(int param_1,long *param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  undefined4 uVar12;
  long *plVar13;
  undefined *puVar14;
  ulong uVar15;
  int *piVar16;
  undefined4 *puVar17;
  ulong uVar18;
  ulong uVar19;
  bool bVar20;
  undefined8 uVar21;
  undefined *puVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  undefined *puVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  undefined8 uVar32;
  uint uVar33;
  ulong unaff_x26;
  long lVar34;
  int aiStack_360 [12];
  ulong uStack_330;
  long *plStack_328;
  undefined *puStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  undefined *puStack_300;
  long *plStack_2f8;
  undefined1 **ppuStack_2f0;
  code *pcStack_2e8;
  ulong uStack_2e0;
  uint uStack_2d4;
  ulong uStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined4 uStack_2b4;
  long lStack_2b0;
  int iStack_2a8;
  undefined1 auStack_2a4 [8];
  undefined4 uStack_29c;
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
  undefined8 uStack_1f8;
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
  uint uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  int iStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 *puStack_20;
  code *pcStack_18;
  
  if (param_1 < 2) {
    if (param_1 == 0) {
      return param_2;
    }
    if (param_1 == 1) {
      return (long *)0x0;
    }
  }
  else {
    if (param_1 == 3) {
      return (long *)0x0;
    }
    if (param_1 == 2) {
      return (long *)0x1;
    }
  }
  puVar22 = &UNK_10f5619ca;
  FUN_109243bf8();
  puStack_20 = &stack0xfffffffffffffff0;
  pcStack_18 = FUN_109266650;
  uStack_2d0 = *(ulong *)(puVar22 + 0x18);
  lVar30 = *(long *)(uStack_2d0 + 0x18);
  uStack_2b8 = 0;
  uStack_2c0 = 0;
  _iStack_2a8 = 0;
  lStack_2b0 = 0;
  uStack_298 = 0;
  stack0xfffffffffffffd60 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_140 = 0;
  iStack_120 = 0;
  uStack_11c = 0;
  uStack_128 = 0;
  uStack_110 = 0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_130 = 0;
  uStack_138 = 0;
  iVar11 = *(int *)(puVar22 + 0x4c);
  puStack_2c8 = puVar22;
  if (*(long *)(puVar22 + 0x290) != 0) {
    uVar27 = 0;
    uVar19 = 1;
    do {
      plVar13 = (long *)(puVar22 + uVar27 * 0x48 + 0x50);
      lVar29 = *plVar13;
      if ((*(char *)(lVar30 + 0x8c) != '\x01' || *(uint *)(lVar29 + 0x2c) < 2) ||
         (uVar26 = *(uint *)(plVar13 + 8), *(char *)((long)plVar13 + 0x44) != '\x01' || uVar26 < 2))
      {
        uVar26 = *(uint *)(lVar29 + 0x3c);
      }
      lVar34 = plVar13[1];
      uVar32 = *(undefined8 *)(lVar29 + 0xb8);
      uVar12 = *(undefined4 *)(lVar29 + 0xb0);
      FUN_10926dea0(lVar29,uStack_2d0);
      uVar33 = (uint)uVar19;
      uVar3 = *(undefined4 *)(lVar29 + 0xac);
      uVar21 = *(undefined8 *)(lVar29 + 0x24);
      uVar4 = *(undefined4 *)(lVar29 + 0x2c);
      uVar5 = *(undefined4 *)(lVar29 + 0x40);
      uStack_140 = uVar33;
      uVar27 = (ulong)(uVar33 - 1);
      (&uStack_2c0)[uVar27 * 6] = uVar32;
      *(undefined4 *)(&stack0xfffffffffffffd48 + uVar27 * 6) = uVar12;
      (&uStack_2b4)[uVar27 * 0xc] = uVar3;
      (&lStack_2b0)[uVar27 * 6] = lVar34;
      (&iStack_2a8)[uVar27 * 0xc] = iVar11;
      *(undefined8 *)(auStack_2a4 + uVar27 * 0x30) = uVar21;
      (&uStack_29c)[uVar27 * 0xc] = uVar4;
      *(undefined4 *)(&uStack_298 + uVar27 * 6) = uVar5;
      uVar18 = *(ulong *)(puStack_2c8 + 0x290);
      unaff_x26 = (ulong)(uVar33 + 1);
      *(uint *)((long)&uStack_298 + uVar27 * 0x30 + 4) = uVar26;
      bVar20 = uVar19 < uVar18;
      uVar27 = uVar19;
      uVar19 = unaff_x26;
    } while (bVar20);
  }
  lVar29 = *(long *)(puStack_2c8 + 0x298);
  if (lVar29 == 0) {
LAB_109266854:
    lVar30 = *(long *)(puStack_2c8 + 0x2e0);
    if (lVar30 != 0) {
      uStack_2e0 = (ulong)*(uint *)(lVar30 + 0x40);
      ppuVar2 = &PTR_DAT_110ae4700 + uStack_2e0 * 4;
      if (0x56 < *(uint *)(lVar30 + 0x40)) {
        ppuVar2 = &PTR_DAT_110ae4700;
      }
      if (*(int *)((long)ppuVar2 + 0x14) == 0) {
        FUN_109231308(&uStack_b0,&UNK_10f5619e1);
        FUN_109268640(&uStack_b0);
LAB_109266fc8:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x109266fcc);
        (*pcVar6)();
      }
      uVar12 = *(undefined4 *)(lVar30 + 0x3c);
      uVar32 = *(undefined8 *)(puStack_2c8 + 0x2e8);
      uVar21 = *(undefined8 *)(lVar30 + 0xb8);
      uVar3 = *(undefined4 *)(lVar30 + 0xb0);
      FUN_10926dea0(lVar30,uStack_2d0);
      uStack_138 = uVar21;
      uStack_130 = CONCAT44(*(undefined4 *)(lVar30 + 0xac),uVar3);
      uStack_128 = uVar32;
      iStack_120 = iVar11;
      uStack_11c = (undefined4)*(undefined8 *)(lVar30 + 0x24);
      uStack_118 = (undefined4)((ulong)*(undefined8 *)(lVar30 + 0x24) >> 0x20);
      uStack_114 = *(undefined4 *)(lVar30 + 0x2c);
      uStack_110 = CONCAT44(uVar12,*(undefined4 *)(lVar30 + 0x40));
    }
  }
  else {
    if ((((*(char *)(lVar30 + 0x8c) != '\x01') || (*(uint *)(lVar29 + 0x2c) < 2)) ||
        (puStack_2c8[0x2dc] != '\x01')) || (uVar26 = *(uint *)(puStack_2c8 + 0x2d8), uVar26 < 2)) {
      uVar26 = *(uint *)(lVar29 + 0x3c);
    }
    uStack_2e0 = (ulong)*(uint *)(lVar29 + 0x40);
    ppuVar2 = &PTR_DAT_110ae4700 + uStack_2e0 * 4;
    if (0x56 < *(uint *)(lVar29 + 0x40)) {
      ppuVar2 = &PTR_DAT_110ae4700;
    }
    if (*(int *)((long)ppuVar2 + 0x14) == 0) {
      FUN_109231308(&uStack_b0,&UNK_10f5619e1);
      FUN_109268640(&uStack_b0);
      goto LAB_109266fc8;
    }
    uVar21 = *(undefined8 *)(puStack_2c8 + 0x2a0);
    uStack_138 = *(undefined8 *)(lVar29 + 0xb8);
    uStack_130 = CONCAT44(uStack_130._4_4_,*(undefined4 *)(lVar29 + 0xb0));
    FUN_10926dea0(lVar29,uStack_2d0);
    uStack_130 = CONCAT44(*(int *)(lVar29 + 0xac),(undefined4)uStack_130);
    uStack_128 = uVar21;
    iStack_120 = iVar11;
    uStack_11c = (undefined4)*(undefined8 *)(lVar29 + 0x24);
    uStack_118 = (undefined4)((ulong)*(undefined8 *)(lVar29 + 0x24) >> 0x20);
    uStack_114 = *(undefined4 *)(lVar29 + 0x2c);
    uStack_110 = CONCAT44(uVar26,*(undefined4 *)(lVar29 + 0x40));
    if (*(int *)(lVar29 + 0xac) == 0) goto LAB_109266854;
  }
  puVar22 = puStack_2c8;
  if (uStack_140 != 0) {
    lVar30 = (ulong)uStack_140 * 0x30;
    piVar16 = &iStack_2a8;
    do {
      if (*piVar16 != 0) goto LAB_109266908;
      lVar30 = lVar30 + -0x30;
      piVar16 = piVar16 + 0xc;
    } while (lVar30 != 0);
  }
  if (iStack_120 == 0) {
    uVar12 = 0x8d40;
  }
  else {
LAB_109266908:
    uVar12 = 0x8ca9;
  }
  *(undefined4 *)(puStack_2c8 + 0x360) = uVar12;
  plVar13 = *(long **)(puStack_2c8 + 0x18);
  FUN_1092536b0(plVar13,uVar12,&uStack_2c0);
  puVar14 = *(undefined **)(puVar22 + 0x290);
  lVar34 = *(long *)(puVar22 + 0x350);
  lVar30 = *(long *)(puVar22 + 0x348);
  lVar29 = lVar34 - lVar30;
  puVar28 = (undefined *)(lVar29 >> 2);
  if (puVar28 < puVar14) {
    uVar27 = (long)puVar14 - (long)puVar28;
    if ((ulong)(*(long *)(puVar22 + 0x358) - lVar34 >> 2) < uVar27) {
      plVar8 = plVar13;
      if ((ulong)puVar14 >> 0x3e == 0) {
        uVar19 = *(long *)(puVar22 + 0x358) - lVar30;
        puVar22 = (undefined *)((long)uVar19 >> 1);
        if (puVar22 <= puVar14) {
          puVar22 = puVar14;
        }
        if (0x7ffffffffffffffb < uVar19) {
          puVar22 = (undefined *)0x3fffffffffffffff;
        }
        if ((ulong)puVar22 >> 0x3e == 0) {
          lVar7 = (long)puVar22 << 2;
          __Znwm();
          lVar1 = lVar7 + lVar29;
          lVar34 = (long)puVar22 * 4;
          _bzero(lVar1,uVar27 * 4);
          lVar31 = lVar1 + (long)puVar28 * -4;
          _memcpy(lVar31,lVar30,lVar29);
          puVar22 = puStack_2c8;
          *(long *)(puStack_2c8 + 0x348) = lVar31;
          *(ulong *)(puStack_2c8 + 0x350) = lVar1 + uVar27 * 4;
          *(long *)(puStack_2c8 + 0x358) = lVar7 + lVar34;
          if (lVar30 != 0) {
            __ZdlPv(lVar30);
          }
          goto LAB_109266a10;
        }
      }
      else {
        func_0x0001092686b0();
      }
      func_0x000104c4f740();
      func_0x000104bd46a0();
      plVar9 = plVar8;
      __Unwind_Resume();
      func_0x000104bd46a0();
      pcStack_2e8 = FUN_109267000;
      uVar27 = plVar9[0x52];
      plVar10 = plVar9;
      uStack_330 = unaff_x26;
      plStack_328 = plVar13;
      puStack_320 = puVar22;
      lStack_318 = lVar34;
      lStack_310 = lVar29;
      lStack_308 = lVar30;
      puStack_300 = puVar28;
      plStack_2f8 = plVar8;
      ppuStack_2f0 = &puStack_20;
      if (uVar27 == 0) {
        bVar20 = false;
        uVar19 = 0;
      }
      else {
        uVar19 = 0;
        uVar18 = 0;
        bVar20 = false;
        do {
          plVar13 = plVar9 + uVar18 * 9 + 10;
          if ((*plVar13 != 0) && (plVar13[2] != 0)) {
            if (bVar20) {
LAB_109267070:
              bVar20 = true;
            }
            else {
              if (*(int *)(*plVar9 + 0x920) == 1) {
                _glFlush();
                goto LAB_109267070;
              }
              bVar20 = false;
            }
            plVar10 = (long *)plVar9[3];
            FUN_109288134(plVar10,plVar9[0x6d],plVar13,plVar13 + 2,0x4000,0,0,0x2600);
            uVar27 = plVar9[0x52];
            uVar19 = uVar18;
          }
          uVar18 = (ulong)((int)uVar18 + 1);
        } while (uVar18 < uVar27);
      }
      lVar30 = plVar9[0x53];
      if ((lVar30 == 0) || (lVar29 = plVar9[0x55], lVar29 == 0)) {
        uVar26 = 0;
      }
      else {
        if ((plVar9[0x5c] == lVar30) && (plVar9[0x5e] == lVar29)) {
          ppuVar2 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(lVar30 + 0x40) * 4;
          if (0x56 < *(uint *)(lVar30 + 0x40)) {
            ppuVar2 = &PTR_DAT_110ae4700;
          }
          uVar12 = 0x100;
          if ((*(byte *)((long)ppuVar2 + 0x14) >> 1 & 1) == 0) {
            uVar26 = 0;
          }
          else {
            ppuVar2 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(lVar29 + 0x40) * 4;
            if (0x56 < *(uint *)(lVar29 + 0x40)) {
              ppuVar2 = &PTR_DAT_110ae4700;
            }
            uVar33 = *(uint *)((long)ppuVar2 + 0x14) & 2;
            uVar26 = uVar33 >> 1;
            uVar12 = 0x500;
            if (uVar33 == 0) {
              uVar12 = 0x100;
            }
          }
        }
        else {
          uVar26 = 0;
          uVar12 = 0x100;
        }
        if (bVar20) {
LAB_109267114:
          bVar20 = true;
        }
        else {
          if (*(int *)(*plVar9 + 0x920) == 1) {
            _glFlush();
            goto LAB_109267114;
          }
          bVar20 = false;
        }
        plVar10 = (long *)plVar9[3];
        FUN_109288134(plVar10,plVar9[0x6d],plVar9 + 0x53,plVar9 + 0x55,uVar12,
                      plVar9[uVar19 * 9 + 10],(plVar9 + uVar19 * 9 + 10)[2],0x2600);
      }
      if ((plVar9[0x5c] != 0) && (uVar26 == 0 && plVar9[0x5e] != 0)) {
        if ((!bVar20) && (*(int *)(*plVar9 + 0x920) == 1)) {
          _glFlush();
        }
        plVar10 = (long *)plVar9[3];
        FUN_109288134(plVar10,plVar9[0x6d],plVar9 + 0x5c,plVar9 + 0x5e,0x400,plVar9[uVar19 * 9 + 10]
                      ,(plVar9 + uVar19 * 9 + 10)[2],0x2600);
      }
      aiStack_360[8] = 0;
      aiStack_360[9] = 0;
      aiStack_360[2] = 0;
      aiStack_360[3] = 0;
      aiStack_360[0] = 0;
      aiStack_360[1] = 0;
      aiStack_360[6] = 0;
      aiStack_360[7] = 0;
      aiStack_360[4] = 0;
      aiStack_360[5] = 0;
      uVar27 = plVar9[0x52];
      if (uVar27 == 0) {
        uVar18 = 0;
        uVar19 = 0;
      }
      else {
        uVar18 = 0;
        uVar15 = 0;
        uVar23 = 1;
        uVar25 = 0;
        do {
          uVar24 = uVar23;
          iVar11 = *(int *)((long)plVar9 + uVar25 * 0x48 + 0x74);
          uVar19 = uVar15;
          if (1 < iVar11 - 1U) {
            if (iVar11 != 0) {
              FUN_109243bf8(&UNK_10f561a19);
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10926749c);
              (*pcVar6)();
            }
            uVar19 = (ulong)((int)uVar15 + 1);
            aiStack_360[uVar15] = ((int)uVar24 - 1U & 0xff) + 0x8ce0;
            uVar18 = uVar19;
          }
          uVar15 = uVar19;
          uVar23 = (ulong)((int)uVar24 + 1);
          uVar25 = uVar24;
        } while (uVar24 < uVar27);
      }
      uVar26 = (uint)uVar19;
      lVar30 = plVar9[0x53];
      if (lVar30 != 0) {
        uVar33 = *(uint *)(lVar30 + 0x40);
        ppuVar2 = &PTR_DAT_110ae4700 + (ulong)uVar33 * 4;
        if (0x56 < uVar33) {
          ppuVar2 = &PTR_DAT_110ae4700;
        }
        if (((*(byte *)((long)ppuVar2 + 0x14) & 1) != 0) && (*(int *)((long)plVar9 + 700) == 0)) {
          uVar26 = uVar26 + 1;
          uVar18 = (ulong)uVar26;
          aiStack_360[uVar19] = 0x8d00;
        }
      }
      lVar30 = plVar9[0x5c];
      if (lVar30 != 0) {
        uVar33 = *(uint *)(lVar30 + 0x40);
        ppuVar2 = &PTR_DAT_110ae4700 + (ulong)uVar33 * 4;
        if (0x56 < uVar33) {
          ppuVar2 = &PTR_DAT_110ae4700;
        }
        if (((*(byte *)((long)ppuVar2 + 0x14) >> 1 & 1) != 0) &&
           (*(int *)((long)plVar9 + 0x304) == 0)) {
          uVar18 = (ulong)(uVar26 + 1);
          aiStack_360[uVar26] = 0x8d20;
        }
      }
      if ((int)uVar18 != 0) {
        uVar26 = *(uint *)(plVar9 + 0x6c);
        plVar10 = (long *)(ulong)uVar26;
        iVar11 = (int)plVar9[0x67];
        lVar30 = plVar9[3];
        if (lVar30 == 0) goto LAB_109267364;
        if (uVar26 == 0x8ca8) {
          if (*(int *)(lVar30 + 0x108) != iVar11) {
            piVar16 = (int *)(lVar30 + 0x108);
            goto LAB_109267360;
          }
        }
        else {
          if (uVar26 == 0x8ca9) {
LAB_1092672fc:
            if (*(int *)(lVar30 + 0x10c) == iVar11) goto LAB_10926736c;
LAB_10926735c:
            piVar16 = (int *)(lVar30 + 0x10c);
LAB_109267360:
            *piVar16 = iVar11;
          }
          else if (uVar26 == 0x8d40) {
            if (*(int *)(lVar30 + 0x108) == iVar11) goto LAB_1092672fc;
            *(int *)(lVar30 + 0x108) = iVar11;
            if (*(int *)(lVar30 + 0x10c) == iVar11) goto LAB_109267364;
            goto LAB_10926735c;
          }
LAB_109267364:
          _glBindFramebuffer();
          iVar11 = (int)plVar9[0x67];
        }
LAB_10926736c:
        if (iVar11 != 0) {
          uVar27 = plVar9[0x6a] - plVar9[0x69];
          lVar30 = 0;
          if (uVar27 != 0) {
            lVar30 = plVar9[0x69];
          }
          (**(code **)(plVar9[1] + 0x750))(uVar27 >> 2,lVar30);
          plVar10 = (long *)0x0;
          (**(code **)(plVar9[1] + 0x758))(0);
        }
        if (*(char *)(plVar9[1] + 0x4c) == '\x01') {
          plVar10 = (long *)(ulong)*(uint *)(plVar9 + 0x6c);
          (**(code **)(plVar9[1] + 0x808))(plVar10,uVar18,aiStack_360);
        }
      }
      if (*(int *)(*plVar9 + 0x914) != 1) goto LAB_109267444;
      uVar26 = *(uint *)(plVar9 + 0x6c);
      plVar10 = (long *)(ulong)uVar26;
      lVar30 = plVar9[3];
      if (lVar30 == 0) goto LAB_10926743c;
      if (uVar26 == 0x8ca8) {
        if (*(int *)(lVar30 + 0x108) == 0) goto LAB_109267444;
        puVar17 = (undefined4 *)(lVar30 + 0x108);
LAB_109267438:
        *puVar17 = 0;
      }
      else {
        if (uVar26 == 0x8ca9) {
LAB_10926741c:
          if (*(int *)(lVar30 + 0x10c) == 0) goto LAB_109267444;
LAB_109267424:
          puVar17 = (undefined4 *)(lVar30 + 0x10c);
          goto LAB_109267438;
        }
        if (uVar26 == 0x8d40) {
          if (*(int *)(lVar30 + 0x108) == 0) goto LAB_10926741c;
          *(undefined4 *)(lVar30 + 0x108) = 0;
          if (*(int *)(lVar30 + 0x10c) == 0) goto LAB_10926743c;
          goto LAB_109267424;
        }
      }
LAB_10926743c:
      _glBindFramebuffer(plVar10,0);
LAB_109267444:
      *(undefined4 *)(plVar9 + 0x6c) = 0;
      return plVar10;
    }
    _bzero(lVar34,uVar27 * 4);
    *(ulong *)(puVar22 + 0x350) = lVar34 + uVar27 * 4;
  }
  else if (puVar14 < puVar28) {
    *(long *)(puVar22 + 0x350) = lVar30 + (long)puVar14 * 4;
  }
LAB_109266a10:
  uVar27 = *(ulong *)(puVar22 + 0x290);
  if (uVar27 != 0) {
    uVar19 = 0;
    lVar30 = *(long *)(puVar22 + 0x348);
    do {
      *(uint *)(lVar30 + uVar19 * 4) = ((uint)uVar19 & 0xff) + 0x8ce0;
      uVar19 = uVar19 + 1;
    } while ((uVar19 & 0xffffffff) < uVar27);
  }
  if ((int)plVar13 != 0) {
    uVar27 = *(long *)(puVar22 + 0x350) - *(long *)(puVar22 + 0x348);
    lVar30 = 0;
    if (uVar27 != 0) {
      lVar30 = *(long *)(puVar22 + 0x348);
    }
    (**(code **)(*(long *)(puVar22 + 8) + 0x750))(uVar27 >> 2,lVar30);
    (**(code **)(*(long *)(puVar22 + 8) + 0x758))(0);
  }
  *(undefined4 *)(puVar22 + 0x33c) = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (*(int *)(**(long **)(puVar22 + 8) + 0x91c) == 2) {
    uStack_c0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uVar27 = *(ulong *)(puVar22 + 0x290);
    if (uVar27 == 0) {
      uVar19 = 0;
      uVar18 = 0;
    }
    else {
      uVar19 = 0;
      uVar23 = 0;
      uVar15 = 0;
      piVar16 = (int *)(puVar22 + 0x70);
      do {
        uVar18 = uVar15;
        if (*piVar16 == 0) {
          uVar18 = (ulong)((int)uVar15 + 1);
          *(uint *)((long)&uStack_e0 + uVar15 * 4) = ((uint)uVar23 & 0xff) + 0x8ce0;
          uVar19 = uVar18;
        }
        uVar23 = (ulong)((uint)uVar23 + 1);
        uVar15 = uVar18;
        piVar16 = piVar16 + 0x12;
      } while (uVar23 < uVar27);
    }
    uVar26 = (uint)uVar18;
    if (*(long *)(puVar22 + 0x298) != 0) {
      uVar33 = *(uint *)(*(long *)(puVar22 + 0x298) + 0x40);
      ppuVar2 = &PTR_DAT_110ae4700 + (ulong)uVar33 * 4;
      if (0x56 < uVar33) {
        ppuVar2 = &PTR_DAT_110ae4700;
      }
      if (((*(byte *)((long)ppuVar2 + 0x14) & 1) != 0) && (*(int *)(puVar22 + 0x2b8) == 0)) {
        uVar26 = uVar26 + 1;
        uVar19 = (ulong)uVar26;
        *(undefined4 *)((long)&uStack_e0 + uVar18 * 4) = 0x8d00;
      }
    }
    if (*(long *)(puVar22 + 0x2e0) != 0) {
      uVar33 = *(uint *)(*(long *)(puVar22 + 0x2e0) + 0x40);
      ppuVar2 = &PTR_DAT_110ae4700 + (ulong)uVar33 * 4;
      if (0x56 < uVar33) {
        ppuVar2 = &PTR_DAT_110ae4700;
      }
      if (((*(byte *)((long)ppuVar2 + 0x14) >> 1 & 1) != 0) && (*(int *)(puVar22 + 0x300) == 0)) {
        uVar19 = (ulong)(uVar26 + 1);
        *(undefined4 *)((long)&uStack_e0 + (ulong)uVar26 * 4) = 0x8d20;
      }
    }
    uVar21 = 0;
    uStack_a8 = uStack_d8;
    uStack_b0 = uStack_e0;
    uStack_98 = uStack_c8;
    uStack_a0 = uStack_d0;
    uStack_90 = uStack_c0;
  }
  else if (*(int *)(**(long **)(puVar22 + 8) + 0x91c) == 1) {
    uVar19 = 0;
    uVar21 = 1;
  }
  else {
    uVar19 = 0;
    uVar21 = 0;
  }
  if (*(long *)(puVar22 + 0x298) == 0) {
LAB_109266bd4:
    uVar26 = 0;
  }
  else {
    iVar11 = *(int *)(puVar22 + 0x2b8);
    FUN_109266600(iVar11,uVar21);
    if (iVar11 == 0) goto LAB_109266bd4;
    *(uint *)(puVar22 + 0x33c) = *(uint *)(puVar22 + 0x33c) | 0x100;
    _glClearDepthf(*(undefined4 *)(puVar22 + 0x2c8));
    uVar26 = 0x100;
  }
  if (*(long *)(puVar22 + 0x2e0) != 0) {
    iVar11 = *(int *)(puVar22 + 0x300);
    FUN_109266600(iVar11,uVar21);
    if (iVar11 != 0) {
      uVar26 = uVar26 | 0x400;
      *(uint *)(puVar22 + 0x33c) = *(uint *)(puVar22 + 0x33c) | 0x400;
      _glClearStencil(*(undefined4 *)(puVar22 + 0x314));
    }
  }
  if (*(long *)(puVar22 + 0x290) == 1) {
    lVar30 = *(long *)(puVar22 + 0x50);
    iVar11 = *(int *)(puVar22 + 0x70);
    FUN_109266600(iVar11,uVar21);
    puVar22 = puStack_2c8;
    if (iVar11 == 0) goto LAB_109266c58;
    ppuVar2 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(lVar30 + 0x40) * 4;
    if (0x56 < *(uint *)(lVar30 + 0x40)) {
      ppuVar2 = &PTR_DAT_110ae4700;
    }
    if (*(byte *)(ppuVar2 + 2) - 3 < 2) goto LAB_109266c58;
    uVar26 = uVar26 | 0x4000;
    *(uint *)(puStack_2c8 + 0x33c) = *(uint *)(puStack_2c8 + 0x33c) | 0x4000;
    _glClearColor(*(undefined4 *)(puStack_2c8 + 0x80),*(undefined4 *)(puStack_2c8 + 0x84),
                  *(undefined4 *)(puStack_2c8 + 0x88),*(undefined4 *)(puStack_2c8 + 0x8c));
  }
  else {
LAB_109266c58:
    uStack_2d0 = CONCAT44(uStack_2d0._4_4_,(int)uVar19);
    puStack_2c8 = (undefined *)CONCAT44(puStack_2c8._4_4_,(int)plVar13);
    uStack_2d4 = uVar26;
    if (*(long *)(puVar22 + 0x290) != 0) {
      uVar27 = 0;
      do {
        plVar13 = (long *)(puVar22 + uVar27 * 0x48 + 0x50);
        lVar30 = *plVar13;
        iVar11 = (int)plVar13[4];
        FUN_109266600(iVar11,uVar21);
        if (iVar11 != 0) {
          if ((*(uint *)(puVar22 + 0x33c) >> 0xe & 1) == 0) {
            *(uint *)(puVar22 + 0x33c) = *(uint *)(puVar22 + 0x33c) | 0x4000;
            lVar29 = *(long *)(puVar22 + 0x18);
            if (lVar29 == 0) {
LAB_109266d40:
              _glColorMask(1,1,1,1);
            }
            else {
              lVar34 = *(long *)(lVar29 + 600);
              lVar29 = *(long *)(lVar29 + 0x260);
              if (lVar34 != lVar29) {
                bVar20 = true;
                do {
                  while ((((*(char *)(lVar34 + 6) != '\x01' || (*(char *)(lVar34 + 2) != '\x01')) ||
                          (*(char *)(lVar34 + 3) != '\x01')) ||
                         ((*(char *)(lVar34 + 4) != '\x01' || (*(char *)(lVar34 + 5) != '\x01')))))
                  {
                    bVar20 = false;
                    *(undefined1 *)(lVar34 + 6) = 1;
                    *(undefined4 *)(lVar34 + 2) = 0x1010101;
                    lVar34 = lVar34 + 0x28;
                    if (lVar34 == lVar29) goto LAB_109266d40;
                  }
                  *(undefined1 *)(lVar34 + 6) = 1;
                  *(undefined4 *)(lVar34 + 2) = 0x1010101;
                  lVar34 = lVar34 + 0x28;
                } while (lVar34 != lVar29);
                if (!bVar20) goto LAB_109266d40;
              }
            }
          }
          ppuVar2 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(lVar30 + 0x40) * 4;
          if (0x56 < *(uint *)(lVar30 + 0x40)) {
            ppuVar2 = &PTR_DAT_110ae4700;
          }
          lVar30 = 0x878;
          if (*(char *)(ppuVar2 + 2) != '\x03') {
            lVar30 = 0x880;
          }
          lVar29 = 0x870;
          if (*(char *)(ppuVar2 + 2) != '\x04') {
            lVar29 = lVar30;
          }
          (**(code **)(*(long *)(puVar22 + 8) + lVar29))(0x1800,uVar27,plVar13 + 6);
        }
        uVar27 = (ulong)((int)uVar27 + 1);
      } while (uVar27 < *(ulong *)(puVar22 + 0x290));
    }
    plVar13 = (long *)((ulong)puStack_2c8 & 0xffffffff);
    uVar19 = uStack_2d0 & 0xffffffff;
    uVar26 = uStack_2d4;
    if (uStack_2d4 == 0) goto LAB_109266f14;
  }
  if ((uVar26 >> 8 & 1) != 0) {
    _glDepthMask(1);
  }
  if ((uVar26 >> 10 & 1) != 0) {
    lVar30 = *(long *)(puVar22 + 0x18);
    if (lVar30 != 0) {
      if (*(char *)(lVar30 + 0x1c4) == '\x01' && *(int *)(lVar30 + 0x1c0) == -1) {
        if ((*(char *)(lVar30 + 0x1cc) == '\x01') && (*(int *)(lVar30 + 0x1c8) == -1))
        goto LAB_109266e5c;
      }
      else {
        *(undefined1 *)(lVar30 + 0x1c4) = 1;
        *(undefined4 *)(lVar30 + 0x1c0) = 0xffffffff;
        if ((*(char *)(lVar30 + 0x1cc) == '\x01') && (*(int *)(lVar30 + 0x1c8) == -1))
        goto LAB_109266e50;
      }
      *(undefined1 *)(lVar30 + 0x1cc) = 1;
      *(undefined4 *)(lVar30 + 0x1c8) = 0xffffffff;
    }
LAB_109266e50:
    _glStencilMaskSeparate(0x408,0xffffffff);
  }
LAB_109266e5c:
  if ((uVar26 >> 0xe & 1) != 0) {
    lVar30 = *(long *)(puVar22 + 0x18);
    if (lVar30 == 0) {
LAB_109266ef8:
      _glColorMask(1,1,1,1);
    }
    else {
      lVar29 = *(long *)(lVar30 + 600);
      lVar30 = *(long *)(lVar30 + 0x260);
      if (lVar29 != lVar30) {
        bVar20 = true;
        do {
          while ((((*(char *)(lVar29 + 6) != '\x01' || (*(char *)(lVar29 + 2) != '\x01')) ||
                  (*(char *)(lVar29 + 3) != '\x01')) ||
                 ((*(char *)(lVar29 + 4) != '\x01' || (*(char *)(lVar29 + 5) != '\x01'))))) {
            bVar20 = false;
            *(undefined1 *)(lVar29 + 6) = 1;
            *(undefined4 *)(lVar29 + 2) = 0x1010101;
            lVar29 = lVar29 + 0x28;
            if (lVar29 == lVar30) goto LAB_109266ef8;
          }
          *(undefined1 *)(lVar29 + 6) = 1;
          *(undefined4 *)(lVar29 + 2) = 0x1010101;
          lVar29 = lVar29 + 0x28;
        } while (lVar29 != lVar30);
        if (!bVar20) goto LAB_109266ef8;
      }
    }
  }
  _glClear(uVar26);
LAB_109266f14:
  if (((int)uVar19 != 0) && (*(char *)(*(long *)(puVar22 + 8) + 0x4c) == '\x01')) {
    (**(code **)(*(long *)(puVar22 + 8) + 0x808))
              (*(undefined4 *)(puVar22 + 0x360),uVar19,&uStack_b0);
  }
  return plVar13;
}



/* Entry: 109266650; end: 109266fff;  */

/* WARNING: Removing unreachable block (ram,0x000109266fec) */
/* WARNING: Type propagation algorithm not settling */

long * FUN_109266650(ulong param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  undefined4 uVar12;
  long *plVar13;
  ulong uVar14;
  int *piVar15;
  undefined4 *puVar16;
  ulong uVar17;
  ulong uVar18;
  bool bVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  uint uVar30;
  ulong unaff_x26;
  long lVar31;
  int aiStack_350 [12];
  ulong uStack_320;
  long *plStack_318;
  ulong uStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  ulong uStack_2f0;
  long *plStack_2e8;
  undefined1 *puStack_2e0;
  code *pcStack_2d8;
  ulong uStack_2d0;
  uint uStack_2c4;
  ulong uStack_2c0;
  ulong uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined4 uStack_2a4;
  long lStack_2a0;
  int iStack_298;
  undefined1 auStack_294 [8];
  undefined4 uStack_28c;
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
  undefined8 uStack_1f8;
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
  undefined8 uStack_138;
  uint uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  int iStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uStack_2c0 = *(ulong *)(param_1 + 0x18);
  lVar27 = *(long *)(uStack_2c0 + 0x18);
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  _iStack_298 = 0;
  lStack_2a0 = 0;
  uStack_288 = 0;
  stack0xfffffffffffffd70 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_130 = 0;
  iStack_110 = 0;
  uStack_10c = 0;
  uStack_118 = 0;
  uStack_100 = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_120 = 0;
  uStack_128 = 0;
  iVar11 = *(int *)(param_1 + 0x4c);
  uStack_2b8 = param_1;
  if (*(long *)(param_1 + 0x290) != 0) {
    uVar21 = 0;
    uVar14 = 1;
    do {
      plVar13 = (long *)(param_1 + 0x50 + uVar21 * 0x48);
      lVar26 = *plVar13;
      if ((*(char *)(lVar27 + 0x8c) != '\x01' || *(uint *)(lVar26 + 0x2c) < 2) ||
         (uVar24 = *(uint *)(plVar13 + 8), *(char *)((long)plVar13 + 0x44) != '\x01' || uVar24 < 2))
      {
        uVar24 = *(uint *)(lVar26 + 0x3c);
      }
      lVar31 = plVar13[1];
      uVar29 = *(undefined8 *)(lVar26 + 0xb8);
      uVar12 = *(undefined4 *)(lVar26 + 0xb0);
      FUN_10926dea0(lVar26,uStack_2c0);
      uVar30 = (uint)uVar14;
      uVar3 = *(undefined4 *)(lVar26 + 0xac);
      uVar20 = *(undefined8 *)(lVar26 + 0x24);
      uVar4 = *(undefined4 *)(lVar26 + 0x2c);
      uVar5 = *(undefined4 *)(lVar26 + 0x40);
      uStack_130 = uVar30;
      uVar21 = (ulong)(uVar30 - 1);
      (&uStack_2b0)[uVar21 * 6] = uVar29;
      *(undefined4 *)(&stack0xfffffffffffffd58 + uVar21 * 6) = uVar12;
      (&uStack_2a4)[uVar21 * 0xc] = uVar3;
      (&lStack_2a0)[uVar21 * 6] = lVar31;
      (&iStack_298)[uVar21 * 0xc] = iVar11;
      *(undefined8 *)(auStack_294 + uVar21 * 0x30) = uVar20;
      (&uStack_28c)[uVar21 * 0xc] = uVar4;
      *(undefined4 *)(&uStack_288 + uVar21 * 6) = uVar5;
      uVar17 = *(ulong *)(uStack_2b8 + 0x290);
      unaff_x26 = (ulong)(uVar30 + 1);
      *(uint *)((long)&uStack_288 + uVar21 * 0x30 + 4) = uVar24;
      bVar19 = uVar14 < uVar17;
      uVar21 = uVar14;
      uVar14 = unaff_x26;
    } while (bVar19);
  }
  lVar26 = *(long *)(uStack_2b8 + 0x298);
  if (lVar26 == 0) {
LAB_109266854:
    lVar27 = *(long *)(uStack_2b8 + 0x2e0);
    if (lVar27 != 0) {
      uStack_2d0 = (ulong)*(uint *)(lVar27 + 0x40);
      ppuVar2 = &PTR_DAT_110ae4700 + uStack_2d0 * 4;
      if (0x56 < *(uint *)(lVar27 + 0x40)) {
        ppuVar2 = &PTR_DAT_110ae4700;
      }
      if (*(int *)((long)ppuVar2 + 0x14) == 0) {
        FUN_109231308(&uStack_a0,&UNK_10f5619e1);
        FUN_109268640(&uStack_a0);
LAB_109266fc8:
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x109266fcc);
        (*pcVar6)();
      }
      uVar12 = *(undefined4 *)(lVar27 + 0x3c);
      uVar29 = *(undefined8 *)(uStack_2b8 + 0x2e8);
      uVar20 = *(undefined8 *)(lVar27 + 0xb8);
      uVar3 = *(undefined4 *)(lVar27 + 0xb0);
      FUN_10926dea0(lVar27,uStack_2c0);
      uStack_128 = uVar20;
      uStack_120 = CONCAT44(*(undefined4 *)(lVar27 + 0xac),uVar3);
      uStack_118 = uVar29;
      iStack_110 = iVar11;
      uStack_10c = (undefined4)*(undefined8 *)(lVar27 + 0x24);
      uStack_108 = (undefined4)((ulong)*(undefined8 *)(lVar27 + 0x24) >> 0x20);
      uStack_104 = *(undefined4 *)(lVar27 + 0x2c);
      uStack_100 = CONCAT44(uVar12,*(undefined4 *)(lVar27 + 0x40));
    }
  }
  else {
    if ((((*(char *)(lVar27 + 0x8c) != '\x01') || (*(uint *)(lVar26 + 0x2c) < 2)) ||
        (*(char *)(uStack_2b8 + 0x2dc) != '\x01')) ||
       (uVar24 = *(uint *)(uStack_2b8 + 0x2d8), uVar24 < 2)) {
      uVar24 = *(uint *)(lVar26 + 0x3c);
    }
    uStack_2d0 = (ulong)*(uint *)(lVar26 + 0x40);
    ppuVar2 = &PTR_DAT_110ae4700 + uStack_2d0 * 4;
    if (0x56 < *(uint *)(lVar26 + 0x40)) {
      ppuVar2 = &PTR_DAT_110ae4700;
    }
    if (*(int *)((long)ppuVar2 + 0x14) == 0) {
      FUN_109231308(&uStack_a0,&UNK_10f5619e1);
      FUN_109268640(&uStack_a0);
      goto LAB_109266fc8;
    }
    uVar20 = *(undefined8 *)(uStack_2b8 + 0x2a0);
    uStack_128 = *(undefined8 *)(lVar26 + 0xb8);
    uStack_120 = CONCAT44(uStack_120._4_4_,*(undefined4 *)(lVar26 + 0xb0));
    FUN_10926dea0(lVar26,uStack_2c0);
    uStack_120 = CONCAT44(*(int *)(lVar26 + 0xac),(undefined4)uStack_120);
    uStack_118 = uVar20;
    iStack_110 = iVar11;
    uStack_10c = (undefined4)*(undefined8 *)(lVar26 + 0x24);
    uStack_108 = (undefined4)((ulong)*(undefined8 *)(lVar26 + 0x24) >> 0x20);
    uStack_104 = *(undefined4 *)(lVar26 + 0x2c);
    uStack_100 = CONCAT44(uVar24,*(undefined4 *)(lVar26 + 0x40));
    if (*(int *)(lVar26 + 0xac) == 0) goto LAB_109266854;
  }
  uVar21 = uStack_2b8;
  if (uStack_130 != 0) {
    lVar27 = (ulong)uStack_130 * 0x30;
    piVar15 = &iStack_298;
    do {
      if (*piVar15 != 0) goto LAB_109266908;
      lVar27 = lVar27 + -0x30;
      piVar15 = piVar15 + 0xc;
    } while (lVar27 != 0);
  }
  if (iStack_110 == 0) {
    uVar12 = 0x8d40;
  }
  else {
LAB_109266908:
    uVar12 = 0x8ca9;
  }
  *(undefined4 *)(uStack_2b8 + 0x360) = uVar12;
  plVar13 = *(long **)(uStack_2b8 + 0x18);
  FUN_1092536b0(plVar13,uVar12,&uStack_2b0);
  uVar14 = *(ulong *)(uVar21 + 0x290);
  lVar31 = *(long *)(uVar21 + 0x350);
  lVar27 = *(long *)(uVar21 + 0x348);
  lVar26 = lVar31 - lVar27;
  uVar17 = lVar26 >> 2;
  if (uVar17 < uVar14) {
    uVar25 = uVar14 - uVar17;
    if ((ulong)(*(long *)(uVar21 + 0x358) - lVar31 >> 2) < uVar25) {
      plVar8 = plVar13;
      if (uVar14 >> 0x3e == 0) {
        uVar18 = *(long *)(uVar21 + 0x358) - lVar27;
        uVar21 = (long)uVar18 >> 1;
        if (uVar21 <= uVar14) {
          uVar21 = uVar14;
        }
        if (0x7ffffffffffffffb < uVar18) {
          uVar21 = 0x3fffffffffffffff;
        }
        if (uVar21 >> 0x3e == 0) {
          lVar7 = uVar21 << 2;
          __Znwm();
          lVar1 = lVar7 + lVar26;
          lVar31 = uVar21 * 4;
          _bzero(lVar1,uVar25 * 4);
          lVar28 = lVar1 + uVar17 * -4;
          _memcpy(lVar28,lVar27,lVar26);
          uVar21 = uStack_2b8;
          *(long *)(uStack_2b8 + 0x348) = lVar28;
          *(ulong *)(uStack_2b8 + 0x350) = lVar1 + uVar25 * 4;
          *(long *)(uStack_2b8 + 0x358) = lVar7 + lVar31;
          if (lVar27 != 0) {
            __ZdlPv(lVar27);
          }
          goto LAB_109266a10;
        }
      }
      else {
        func_0x0001092686b0();
      }
      func_0x000104c4f740();
      func_0x000104bd46a0();
      plVar9 = plVar8;
      __Unwind_Resume();
      func_0x000104bd46a0();
      pcStack_2d8 = FUN_109267000;
      uVar14 = plVar9[0x52];
      plVar10 = plVar9;
      uStack_320 = unaff_x26;
      plStack_318 = plVar13;
      uStack_310 = uVar21;
      lStack_308 = lVar31;
      lStack_300 = lVar26;
      lStack_2f8 = lVar27;
      uStack_2f0 = uVar17;
      plStack_2e8 = plVar8;
      puStack_2e0 = &stack0xfffffffffffffff0;
      if (uVar14 == 0) {
        bVar19 = false;
        uVar21 = 0;
      }
      else {
        uVar21 = 0;
        uVar17 = 0;
        bVar19 = false;
        do {
          plVar13 = plVar9 + uVar17 * 9 + 10;
          if ((*plVar13 != 0) && (plVar13[2] != 0)) {
            if (bVar19) {
LAB_109267070:
              bVar19 = true;
            }
            else {
              if (*(int *)(*plVar9 + 0x920) == 1) {
                _glFlush();
                goto LAB_109267070;
              }
              bVar19 = false;
            }
            plVar10 = (long *)plVar9[3];
            FUN_109288134(plVar10,plVar9[0x6d],plVar13,plVar13 + 2,0x4000,0,0,0x2600);
            uVar14 = plVar9[0x52];
            uVar21 = uVar17;
          }
          uVar17 = (ulong)((int)uVar17 + 1);
        } while (uVar17 < uVar14);
      }
      lVar27 = plVar9[0x53];
      if ((lVar27 == 0) || (lVar26 = plVar9[0x55], lVar26 == 0)) {
        uVar24 = 0;
      }
      else {
        if ((plVar9[0x5c] == lVar27) && (plVar9[0x5e] == lVar26)) {
          ppuVar2 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(lVar27 + 0x40) * 4;
          if (0x56 < *(uint *)(lVar27 + 0x40)) {
            ppuVar2 = &PTR_DAT_110ae4700;
          }
          uVar12 = 0x100;
          if ((*(byte *)((long)ppuVar2 + 0x14) >> 1 & 1) == 0) {
            uVar24 = 0;
          }
          else {
            ppuVar2 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(lVar26 + 0x40) * 4;
            if (0x56 < *(uint *)(lVar26 + 0x40)) {
              ppuVar2 = &PTR_DAT_110ae4700;
            }
            uVar30 = *(uint *)((long)ppuVar2 + 0x14) & 2;
            uVar24 = uVar30 >> 1;
            uVar12 = 0x500;
            if (uVar30 == 0) {
              uVar12 = 0x100;
            }
          }
        }
        else {
          uVar24 = 0;
          uVar12 = 0x100;
        }
        if (bVar19) {
LAB_109267114:
          bVar19 = true;
        }
        else {
          if (*(int *)(*plVar9 + 0x920) == 1) {
            _glFlush();
            goto LAB_109267114;
          }
          bVar19 = false;
        }
        plVar10 = (long *)plVar9[3];
        FUN_109288134(plVar10,plVar9[0x6d],plVar9 + 0x53,plVar9 + 0x55,uVar12,
                      plVar9[uVar21 * 9 + 10],(plVar9 + uVar21 * 9 + 10)[2],0x2600);
      }
      if ((plVar9[0x5c] != 0) && (uVar24 == 0 && plVar9[0x5e] != 0)) {
        if ((!bVar19) && (*(int *)(*plVar9 + 0x920) == 1)) {
          _glFlush();
        }
        plVar10 = (long *)plVar9[3];
        FUN_109288134(plVar10,plVar9[0x6d],plVar9 + 0x5c,plVar9 + 0x5e,0x400,plVar9[uVar21 * 9 + 10]
                      ,(plVar9 + uVar21 * 9 + 10)[2],0x2600);
      }
      aiStack_350[8] = 0;
      aiStack_350[9] = 0;
      aiStack_350[2] = 0;
      aiStack_350[3] = 0;
      aiStack_350[0] = 0;
      aiStack_350[1] = 0;
      aiStack_350[6] = 0;
      aiStack_350[7] = 0;
      aiStack_350[4] = 0;
      aiStack_350[5] = 0;
      uVar21 = plVar9[0x52];
      if (uVar21 == 0) {
        uVar17 = 0;
        uVar14 = 0;
      }
      else {
        uVar17 = 0;
        uVar25 = 0;
        uVar18 = 1;
        uVar22 = 0;
        do {
          uVar23 = uVar18;
          iVar11 = *(int *)((long)plVar9 + uVar22 * 0x48 + 0x74);
          uVar14 = uVar25;
          if (1 < iVar11 - 1U) {
            if (iVar11 != 0) {
              FUN_109243bf8(&UNK_10f561a19);
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10926749c);
              (*pcVar6)();
            }
            uVar14 = (ulong)((int)uVar25 + 1);
            aiStack_350[uVar25] = ((int)uVar23 - 1U & 0xff) + 0x8ce0;
            uVar17 = uVar14;
          }
          uVar25 = uVar14;
          uVar18 = (ulong)((int)uVar23 + 1);
          uVar22 = uVar23;
        } while (uVar23 < uVar21);
      }
      uVar24 = (uint)uVar14;
      lVar27 = plVar9[0x53];
      if (lVar27 != 0) {
        uVar30 = *(uint *)(lVar27 + 0x40);
        ppuVar2 = &PTR_DAT_110ae4700 + (ulong)uVar30 * 4;
        if (0x56 < uVar30) {
          ppuVar2 = &PTR_DAT_110ae4700;
        }
        if (((*(byte *)((long)ppuVar2 + 0x14) & 1) != 0) && (*(int *)((long)plVar9 + 700) == 0)) {
          uVar24 = uVar24 + 1;
          uVar17 = (ulong)uVar24;
          aiStack_350[uVar14] = 0x8d00;
        }
      }
      lVar27 = plVar9[0x5c];
      if (lVar27 != 0) {
        uVar30 = *(uint *)(lVar27 + 0x40);
        ppuVar2 = &PTR_DAT_110ae4700 + (ulong)uVar30 * 4;
        if (0x56 < uVar30) {
          ppuVar2 = &PTR_DAT_110ae4700;
        }
        if (((*(byte *)((long)ppuVar2 + 0x14) >> 1 & 1) != 0) &&
           (*(int *)((long)plVar9 + 0x304) == 0)) {
          uVar17 = (ulong)(uVar24 + 1);
          aiStack_350[uVar24] = 0x8d20;
        }
      }
      if ((int)uVar17 != 0) {
        uVar24 = *(uint *)(plVar9 + 0x6c);
        plVar10 = (long *)(ulong)uVar24;
        iVar11 = (int)plVar9[0x67];
        lVar27 = plVar9[3];
        if (lVar27 == 0) goto LAB_109267364;
        if (uVar24 == 0x8ca8) {
          if (*(int *)(lVar27 + 0x108) != iVar11) {
            piVar15 = (int *)(lVar27 + 0x108);
            goto LAB_109267360;
          }
        }
        else {
          if (uVar24 == 0x8ca9) {
LAB_1092672fc:
            if (*(int *)(lVar27 + 0x10c) == iVar11) goto LAB_10926736c;
LAB_10926735c:
            piVar15 = (int *)(lVar27 + 0x10c);
LAB_109267360:
            *piVar15 = iVar11;
          }
          else if (uVar24 == 0x8d40) {
            if (*(int *)(lVar27 + 0x108) == iVar11) goto LAB_1092672fc;
            *(int *)(lVar27 + 0x108) = iVar11;
            if (*(int *)(lVar27 + 0x10c) == iVar11) goto LAB_109267364;
            goto LAB_10926735c;
          }
LAB_109267364:
          _glBindFramebuffer();
          iVar11 = (int)plVar9[0x67];
        }
LAB_10926736c:
        if (iVar11 != 0) {
          uVar21 = plVar9[0x6a] - plVar9[0x69];
          lVar27 = 0;
          if (uVar21 != 0) {
            lVar27 = plVar9[0x69];
          }
          (**(code **)(plVar9[1] + 0x750))(uVar21 >> 2,lVar27);
          plVar10 = (long *)0x0;
          (**(code **)(plVar9[1] + 0x758))(0);
        }
        if (*(char *)(plVar9[1] + 0x4c) == '\x01') {
          plVar10 = (long *)(ulong)*(uint *)(plVar9 + 0x6c);
          (**(code **)(plVar9[1] + 0x808))(plVar10,uVar17,aiStack_350);
        }
      }
      if (*(int *)(*plVar9 + 0x914) != 1) goto LAB_109267444;
      uVar24 = *(uint *)(plVar9 + 0x6c);
      plVar10 = (long *)(ulong)uVar24;
      lVar27 = plVar9[3];
      if (lVar27 == 0) goto LAB_10926743c;
      if (uVar24 == 0x8ca8) {
        if (*(int *)(lVar27 + 0x108) == 0) goto LAB_109267444;
        puVar16 = (undefined4 *)(lVar27 + 0x108);
LAB_109267438:
        *puVar16 = 0;
      }
      else {
        if (uVar24 == 0x8ca9) {
LAB_10926741c:
          if (*(int *)(lVar27 + 0x10c) == 0) goto LAB_109267444;
LAB_109267424:
          puVar16 = (undefined4 *)(lVar27 + 0x10c);
          goto LAB_109267438;
        }
        if (uVar24 == 0x8d40) {
          if (*(int *)(lVar27 + 0x108) == 0) goto LAB_10926741c;
          *(undefined4 *)(lVar27 + 0x108) = 0;
          if (*(int *)(lVar27 + 0x10c) == 0) goto LAB_10926743c;
          goto LAB_109267424;
        }
      }
LAB_10926743c:
      _glBindFramebuffer(plVar10,0);
LAB_109267444:
      *(undefined4 *)(plVar9 + 0x6c) = 0;
      return plVar10;
    }
    _bzero(lVar31,uVar25 * 4);
    *(ulong *)(uVar21 + 0x350) = lVar31 + uVar25 * 4;
  }
  else if (uVar14 < uVar17) {
    *(ulong *)(uVar21 + 0x350) = lVar27 + uVar14 * 4;
  }
LAB_109266a10:
  uVar14 = *(ulong *)(uVar21 + 0x290);
  if (uVar14 != 0) {
    uVar17 = 0;
    lVar27 = *(long *)(uVar21 + 0x348);
    do {
      *(uint *)(lVar27 + uVar17 * 4) = ((uint)uVar17 & 0xff) + 0x8ce0;
      uVar17 = uVar17 + 1;
    } while ((uVar17 & 0xffffffff) < uVar14);
  }
  if ((int)plVar13 != 0) {
    uVar14 = *(long *)(uVar21 + 0x350) - *(long *)(uVar21 + 0x348);
    lVar27 = 0;
    if (uVar14 != 0) {
      lVar27 = *(long *)(uVar21 + 0x348);
    }
    (**(code **)(*(long *)(uVar21 + 8) + 0x750))(uVar14 >> 2,lVar27);
    (**(code **)(*(long *)(uVar21 + 8) + 0x758))(0);
  }
  *(undefined4 *)(uVar21 + 0x33c) = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  iVar11 = *(int *)(**(long **)(uVar21 + 8) + 0x91c);
  if (iVar11 == 2) {
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uVar14 = *(ulong *)(uVar21 + 0x290);
    if (uVar14 == 0) {
      uVar17 = 0;
      uVar25 = 0;
    }
    else {
      uVar17 = 0;
      uVar22 = 0;
      uVar18 = 0;
      piVar15 = (int *)(uVar21 + 0x70);
      do {
        uVar25 = uVar18;
        if (*piVar15 == 0) {
          uVar25 = (ulong)((int)uVar18 + 1);
          *(uint *)((long)&uStack_d0 + uVar18 * 4) = ((uint)uVar22 & 0xff) + 0x8ce0;
          uVar17 = uVar25;
        }
        uVar22 = (ulong)((uint)uVar22 + 1);
        uVar18 = uVar25;
        piVar15 = piVar15 + 0x12;
      } while (uVar22 < uVar14);
    }
    uVar24 = (uint)uVar25;
    if (*(long *)(uVar21 + 0x298) != 0) {
      uVar30 = *(uint *)(*(long *)(uVar21 + 0x298) + 0x40);
      ppuVar2 = &PTR_DAT_110ae4700 + (ulong)uVar30 * 4;
      if (0x56 < uVar30) {
        ppuVar2 = &PTR_DAT_110ae4700;
      }
      if (((*(byte *)((long)ppuVar2 + 0x14) & 1) != 0) && (*(int *)(uVar21 + 0x2b8) == 0)) {
        uVar24 = uVar24 + 1;
        uVar17 = (ulong)uVar24;
        *(undefined4 *)((long)&uStack_d0 + uVar25 * 4) = 0x8d00;
      }
    }
    if (*(long *)(uVar21 + 0x2e0) != 0) {
      uVar30 = *(uint *)(*(long *)(uVar21 + 0x2e0) + 0x40);
      ppuVar2 = &PTR_DAT_110ae4700 + (ulong)uVar30 * 4;
      if (0x56 < uVar30) {
        ppuVar2 = &PTR_DAT_110ae4700;
      }
      if (((*(byte *)((long)ppuVar2 + 0x14) >> 1 & 1) != 0) && (*(int *)(uVar21 + 0x300) == 0)) {
        uVar17 = (ulong)(uVar24 + 1);
        *(undefined4 *)((long)&uStack_d0 + (ulong)uVar24 * 4) = 0x8d20;
      }
    }
    uVar20 = 0;
    uStack_98 = uStack_c8;
    uStack_a0 = uStack_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    uStack_80 = uStack_b0;
  }
  else if (iVar11 == 1) {
    uVar17 = 0;
    uVar20 = 1;
  }
  else {
    uVar17 = 0;
    uVar20 = 0;
  }
  if (*(long *)(uVar21 + 0x298) == 0) {
LAB_109266bd4:
    uVar24 = 0;
  }
  else {
    iVar11 = *(int *)(uVar21 + 0x2b8);
    FUN_109266600(iVar11,uVar20);
    if (iVar11 == 0) goto LAB_109266bd4;
    *(uint *)(uVar21 + 0x33c) = *(uint *)(uVar21 + 0x33c) | 0x100;
    _glClearDepthf(*(undefined4 *)(uVar21 + 0x2c8));
    uVar24 = 0x100;
  }
  if (*(long *)(uVar21 + 0x2e0) != 0) {
    iVar11 = *(int *)(uVar21 + 0x300);
    FUN_109266600(iVar11,uVar20);
    if (iVar11 != 0) {
      uVar24 = uVar24 | 0x400;
      *(uint *)(uVar21 + 0x33c) = *(uint *)(uVar21 + 0x33c) | 0x400;
      _glClearStencil(*(undefined4 *)(uVar21 + 0x314));
    }
  }
  if (*(long *)(uVar21 + 0x290) == 1) {
    lVar27 = *(long *)(uVar21 + 0x50);
    iVar11 = *(int *)(uVar21 + 0x70);
    FUN_109266600(iVar11,uVar20);
    uVar21 = uStack_2b8;
    if (iVar11 == 0) goto LAB_109266c58;
    uVar30 = *(uint *)(lVar27 + 0x40);
    ppuVar2 = &PTR_DAT_110ae4700 + (ulong)uVar30 * 4;
    if (0x56 < uVar30) {
      ppuVar2 = &PTR_DAT_110ae4700;
    }
    if (*(byte *)(ppuVar2 + 2) - 3 < 2) goto LAB_109266c58;
    uVar24 = uVar24 | 0x4000;
    *(uint *)(uStack_2b8 + 0x33c) = *(uint *)(uStack_2b8 + 0x33c) | 0x4000;
    _glClearColor(*(undefined4 *)(uStack_2b8 + 0x80),*(undefined4 *)(uStack_2b8 + 0x84),
                  *(undefined4 *)(uStack_2b8 + 0x88),*(undefined4 *)(uStack_2b8 + 0x8c));
  }
  else {
LAB_109266c58:
    uStack_2c0 = CONCAT44(uStack_2c0._4_4_,(int)uVar17);
    uStack_2b8 = CONCAT44(uStack_2b8._4_4_,(int)plVar13);
    uStack_2c4 = uVar24;
    if (*(long *)(uVar21 + 0x290) != 0) {
      uVar14 = 0;
      do {
        plVar13 = (long *)(uVar21 + 0x50 + uVar14 * 0x48);
        lVar27 = *plVar13;
        iVar11 = (int)plVar13[4];
        FUN_109266600(iVar11,uVar20);
        if (iVar11 != 0) {
          if ((*(uint *)(uVar21 + 0x33c) >> 0xe & 1) == 0) {
            *(uint *)(uVar21 + 0x33c) = *(uint *)(uVar21 + 0x33c) | 0x4000;
            lVar26 = *(long *)(uVar21 + 0x18);
            if (lVar26 != 0) {
              lVar31 = *(long *)(lVar26 + 600);
              lVar26 = *(long *)(lVar26 + 0x260);
              if (lVar31 == lVar26) goto LAB_109266d54;
              bVar19 = true;
              do {
                while ((((*(char *)(lVar31 + 6) == '\x01' && (*(char *)(lVar31 + 2) == '\x01')) &&
                        (*(char *)(lVar31 + 3) == '\x01')) &&
                       ((*(char *)(lVar31 + 4) == '\x01' && (*(char *)(lVar31 + 5) == '\x01'))))) {
                  *(undefined1 *)(lVar31 + 6) = 1;
                  *(undefined4 *)(lVar31 + 2) = 0x1010101;
                  lVar31 = lVar31 + 0x28;
                  if (lVar31 == lVar26) {
                    if (bVar19) goto LAB_109266d54;
                    goto LAB_109266d40;
                  }
                }
                bVar19 = false;
                *(undefined1 *)(lVar31 + 6) = 1;
                *(undefined4 *)(lVar31 + 2) = 0x1010101;
                lVar31 = lVar31 + 0x28;
              } while (lVar31 != lVar26);
            }
LAB_109266d40:
            _glColorMask(1,1,1,1);
          }
LAB_109266d54:
          ppuVar2 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(lVar27 + 0x40) * 4;
          if (0x56 < *(uint *)(lVar27 + 0x40)) {
            ppuVar2 = &PTR_DAT_110ae4700;
          }
          lVar27 = 0x878;
          if (*(char *)(ppuVar2 + 2) != '\x03') {
            lVar27 = 0x880;
          }
          lVar26 = 0x870;
          if (*(char *)(ppuVar2 + 2) != '\x04') {
            lVar26 = lVar27;
          }
          (**(code **)(*(long *)(uVar21 + 8) + lVar26))(0x1800,uVar14,plVar13 + 6);
        }
        uVar14 = (ulong)((int)uVar14 + 1);
      } while (uVar14 < *(ulong *)(uVar21 + 0x290));
    }
    plVar13 = (long *)(uStack_2b8 & 0xffffffff);
    uVar17 = uStack_2c0 & 0xffffffff;
    uVar24 = uStack_2c4;
    if (uStack_2c4 == 0) goto LAB_109266f14;
  }
  if ((uVar24 >> 8 & 1) != 0) {
    _glDepthMask(1);
  }
  if ((uVar24 >> 10 & 1) != 0) {
    lVar27 = *(long *)(uVar21 + 0x18);
    if (lVar27 != 0) {
      if (*(char *)(lVar27 + 0x1c4) == '\x01' && *(int *)(lVar27 + 0x1c0) == -1) {
        if ((*(char *)(lVar27 + 0x1cc) == '\x01') && (*(int *)(lVar27 + 0x1c8) == -1))
        goto LAB_109266e5c;
      }
      else {
        *(undefined1 *)(lVar27 + 0x1c4) = 1;
        *(undefined4 *)(lVar27 + 0x1c0) = 0xffffffff;
        if ((*(char *)(lVar27 + 0x1cc) == '\x01') && (*(int *)(lVar27 + 0x1c8) == -1))
        goto LAB_109266e50;
      }
      *(undefined1 *)(lVar27 + 0x1cc) = 1;
      *(undefined4 *)(lVar27 + 0x1c8) = 0xffffffff;
    }
LAB_109266e50:
    _glStencilMaskSeparate(0x408,0xffffffff);
  }
LAB_109266e5c:
  if ((uVar24 >> 0xe & 1) != 0) {
    lVar27 = *(long *)(uVar21 + 0x18);
    if (lVar27 != 0) {
      lVar26 = *(long *)(lVar27 + 600);
      lVar27 = *(long *)(lVar27 + 0x260);
      if (lVar26 == lVar27) goto LAB_109266f0c;
      bVar19 = true;
      do {
        while ((((*(char *)(lVar26 + 6) == '\x01' && (*(char *)(lVar26 + 2) == '\x01')) &&
                (*(char *)(lVar26 + 3) == '\x01')) &&
               ((*(char *)(lVar26 + 4) == '\x01' && (*(char *)(lVar26 + 5) == '\x01'))))) {
          *(undefined1 *)(lVar26 + 6) = 1;
          *(undefined4 *)(lVar26 + 2) = 0x1010101;
          lVar26 = lVar26 + 0x28;
          if (lVar26 == lVar27) {
            if (bVar19) goto LAB_109266f0c;
            goto LAB_109266ef8;
          }
        }
        bVar19 = false;
        *(undefined1 *)(lVar26 + 6) = 1;
        *(undefined4 *)(lVar26 + 2) = 0x1010101;
        lVar26 = lVar26 + 0x28;
      } while (lVar26 != lVar27);
    }
LAB_109266ef8:
    _glColorMask(1,1,1,1);
  }
LAB_109266f0c:
  _glClear(uVar24);
LAB_109266f14:
  if (((int)uVar17 != 0) && (*(char *)(*(long *)(uVar21 + 8) + 0x4c) == '\x01')) {
    (**(code **)(*(long *)(uVar21 + 8) + 0x808))(*(undefined4 *)(uVar21 + 0x360),uVar17,&uStack_a0);
  }
  return plVar13;
}



/* Entry: 109267000; end: 1092674ab;  */

void FUN_109267000(long *param_1)

{
  undefined **ppuVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  ulong uVar5;
  code *pcVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  undefined4 *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  uint uVar20;
  int aiStack_80 [12];
  
  uVar9 = param_1[0x52];
  if (uVar9 == 0) {
    bVar4 = false;
    uVar14 = 0;
  }
  else {
    uVar14 = 0;
    uVar19 = 0;
    bVar4 = false;
    do {
      plVar18 = param_1 + uVar19 * 9 + 10;
      if ((*plVar18 != 0) && (plVar18[2] != 0)) {
        if (bVar4) {
LAB_109267070:
          bVar4 = true;
        }
        else {
          if (*(int *)(*param_1 + 0x920) == 1) {
            _glFlush();
            goto LAB_109267070;
          }
          bVar4 = false;
        }
        FUN_109288134(param_1[3],param_1[0x6d],plVar18,plVar18 + 2,0x4000,0,0,0x2600);
        uVar9 = param_1[0x52];
        uVar14 = uVar19;
      }
      uVar19 = (ulong)((int)uVar19 + 1);
    } while (uVar19 < uVar9);
  }
  lVar15 = param_1[0x53];
  if ((lVar15 == 0) || (lVar10 = param_1[0x55], lVar10 == 0)) {
    uVar20 = 0;
  }
  else {
    if ((param_1[0x5c] == lVar15) && (param_1[0x5e] == lVar10)) {
      ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(lVar15 + 0x40) * 4;
      if (0x56 < *(uint *)(lVar15 + 0x40)) {
        ppuVar1 = &PTR_DAT_110ae4700;
      }
      uVar8 = 0x100;
      if ((*(byte *)((long)ppuVar1 + 0x14) >> 1 & 1) == 0) {
        uVar20 = 0;
      }
      else {
        ppuVar1 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(lVar10 + 0x40) * 4;
        if (0x56 < *(uint *)(lVar10 + 0x40)) {
          ppuVar1 = &PTR_DAT_110ae4700;
        }
        uVar2 = *(uint *)((long)ppuVar1 + 0x14) & 2;
        uVar20 = uVar2 >> 1;
        uVar8 = 0x500;
        if (uVar2 == 0) {
          uVar8 = 0x100;
        }
      }
    }
    else {
      uVar20 = 0;
      uVar8 = 0x100;
    }
    if (bVar4) {
LAB_109267114:
      bVar4 = true;
    }
    else {
      if (*(int *)(*param_1 + 0x920) == 1) {
        _glFlush();
        goto LAB_109267114;
      }
      bVar4 = false;
    }
    FUN_109288134(param_1[3],param_1[0x6d],param_1 + 0x53,param_1 + 0x55,uVar8,
                  param_1[uVar14 * 9 + 10],(param_1 + uVar14 * 9 + 10)[2],0x2600);
  }
  if ((param_1[0x5c] != 0) && (uVar20 == 0 && param_1[0x5e] != 0)) {
    if ((!bVar4) && (*(int *)(*param_1 + 0x920) == 1)) {
      _glFlush();
    }
    FUN_109288134(param_1[3],param_1[0x6d],param_1 + 0x5c,param_1 + 0x5e,0x400,
                  param_1[uVar14 * 9 + 10],(param_1 + uVar14 * 9 + 10)[2],0x2600);
  }
  aiStack_80[8] = 0;
  aiStack_80[9] = 0;
  aiStack_80[2] = 0;
  aiStack_80[3] = 0;
  aiStack_80[0] = 0;
  aiStack_80[1] = 0;
  aiStack_80[6] = 0;
  aiStack_80[7] = 0;
  aiStack_80[4] = 0;
  aiStack_80[5] = 0;
  uVar9 = param_1[0x52];
  if (uVar9 == 0) {
    uVar19 = 0;
    uVar14 = 0;
  }
  else {
    uVar19 = 0;
    uVar11 = 0;
    uVar5 = 1;
    uVar17 = 0;
    do {
      uVar16 = uVar5;
      iVar3 = *(int *)((long)param_1 + uVar17 * 0x48 + 0x74);
      uVar14 = uVar11;
      if (1 < iVar3 - 1U) {
        if (iVar3 != 0) {
          FUN_109243bf8(&UNK_10f561a19);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10926749c);
          (*pcVar6)();
        }
        uVar14 = (ulong)((int)uVar11 + 1);
        aiStack_80[uVar11] = ((int)uVar16 - 1U & 0xff) + 0x8ce0;
        uVar19 = uVar14;
      }
      uVar11 = uVar14;
      uVar5 = (ulong)((int)uVar16 + 1);
      uVar17 = uVar16;
    } while (uVar16 < uVar9);
  }
  uVar20 = (uint)uVar14;
  lVar15 = param_1[0x53];
  if (lVar15 != 0) {
    uVar2 = *(uint *)(lVar15 + 0x40);
    ppuVar1 = &PTR_DAT_110ae4700 + (ulong)uVar2 * 4;
    if (0x56 < uVar2) {
      ppuVar1 = &PTR_DAT_110ae4700;
    }
    if (((*(byte *)((long)ppuVar1 + 0x14) & 1) != 0) && (*(int *)((long)param_1 + 700) == 0)) {
      uVar20 = uVar20 + 1;
      uVar19 = (ulong)uVar20;
      aiStack_80[uVar14] = 0x8d00;
    }
  }
  lVar15 = param_1[0x5c];
  if (lVar15 != 0) {
    uVar2 = *(uint *)(lVar15 + 0x40);
    ppuVar1 = &PTR_DAT_110ae4700 + (ulong)uVar2 * 4;
    if (0x56 < uVar2) {
      ppuVar1 = &PTR_DAT_110ae4700;
    }
    if (((*(byte *)((long)ppuVar1 + 0x14) >> 1 & 1) != 0) && (*(int *)((long)param_1 + 0x304) == 0))
    {
      uVar19 = (ulong)(uVar20 + 1);
      aiStack_80[uVar20] = 0x8d20;
    }
  }
  if ((int)uVar19 != 0) {
    iVar3 = (int)param_1[0x6c];
    iVar7 = (int)param_1[0x67];
    lVar15 = param_1[3];
    if (lVar15 == 0) goto LAB_109267364;
    if (iVar3 == 0x8ca8) {
      if (*(int *)(lVar15 + 0x108) != iVar7) {
        piVar12 = (int *)(lVar15 + 0x108);
        goto LAB_109267360;
      }
    }
    else {
      if (iVar3 == 0x8ca9) {
LAB_1092672fc:
        if (*(int *)(lVar15 + 0x10c) == iVar7) goto LAB_10926736c;
LAB_10926735c:
        piVar12 = (int *)(lVar15 + 0x10c);
LAB_109267360:
        *piVar12 = iVar7;
      }
      else if (iVar3 == 0x8d40) {
        if (*(int *)(lVar15 + 0x108) == iVar7) goto LAB_1092672fc;
        *(int *)(lVar15 + 0x108) = iVar7;
        if (*(int *)(lVar15 + 0x10c) == iVar7) goto LAB_109267364;
        goto LAB_10926735c;
      }
LAB_109267364:
      _glBindFramebuffer();
      iVar7 = (int)param_1[0x67];
    }
LAB_10926736c:
    if (iVar7 != 0) {
      uVar9 = param_1[0x6a] - param_1[0x69];
      lVar15 = 0;
      if (uVar9 != 0) {
        lVar15 = param_1[0x69];
      }
      (**(code **)(param_1[1] + 0x750))(uVar9 >> 2,lVar15);
      (**(code **)(param_1[1] + 0x758))(0);
    }
    if (*(char *)(param_1[1] + 0x4c) == '\x01') {
      (**(code **)(param_1[1] + 0x808))((int)param_1[0x6c],uVar19,aiStack_80);
    }
  }
  if (*(int *)(*param_1 + 0x914) != 1) goto LAB_109267444;
  iVar3 = (int)param_1[0x6c];
  lVar15 = param_1[3];
  if (lVar15 == 0) goto LAB_10926743c;
  if (iVar3 == 0x8ca8) {
    if (*(int *)(lVar15 + 0x108) == 0) goto LAB_109267444;
    puVar13 = (undefined4 *)(lVar15 + 0x108);
LAB_109267438:
    *puVar13 = 0;
  }
  else {
    if (iVar3 == 0x8ca9) {
LAB_10926741c:
      if (*(int *)(lVar15 + 0x10c) == 0) goto LAB_109267444;
LAB_109267424:
      puVar13 = (undefined4 *)(lVar15 + 0x10c);
      goto LAB_109267438;
    }
    if (iVar3 == 0x8d40) {
      if (*(int *)(lVar15 + 0x108) == 0) goto LAB_10926741c;
      *(undefined4 *)(lVar15 + 0x108) = 0;
      if (*(int *)(lVar15 + 0x10c) == 0) goto LAB_10926743c;
      goto LAB_109267424;
    }
  }
LAB_10926743c:
  _glBindFramebuffer(iVar3,0);
LAB_109267444:
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return;
}



/* Entry: 1092674ac; end: 10926762b;  */

void FUN_1092674ac(long param_1,undefined8 *param_2)

{
  uint *puVar1;
  byte *pbVar2;
  undefined **ppuVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  undefined8 *puVar8;
  uint *puVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  uint *extraout_x8;
  ulong uVar17;
  uint *puVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  undefined8 uVar23;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  uint uStack_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
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
  long lStack_38;
  
  lVar16 = 0;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_318 = 0;
  uStack_320 = 0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_328 = 0;
  uStack_330 = 0;
  do {
    *(undefined2 *)((long)&uStack_328 + lVar16) = 0xff;
    lVar16 = lVar16 + 2;
  } while (lVar16 != 0x24);
  uStack_304 = 0;
  uStack_300 = 0;
  uStack_2f4 = 0;
  uStack_2f0 = 0;
  uStack_2fc = 0;
  uStack_2f8 = 0;
  *(undefined8 *)(param_1 + 0x478) = uStack_318;
  *(undefined8 *)(param_1 + 0x470) = uStack_320;
  *(undefined8 *)(param_1 + 0x468) = uStack_328;
  *(undefined8 *)(param_1 + 0x460) = 0;
  *(ulong *)(param_1 + 0x488) = (ulong)uStack_308;
  *(undefined8 *)(param_1 + 0x480) = uStack_310;
  *(undefined8 *)(param_1 + 0x498) = 0;
  *(undefined8 *)(param_1 + 0x490) = 0;
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  lVar16 = param_2[1];
  if (*(ulong *)(lVar16 + 0x6d0) < 2) {
    *(undefined1 *)(param_1 + 0x20) = 1;
    *(undefined1 *)(param_1 + 0x340) = 0;
    puVar13 = (undefined8 *)0x0;
    if (*(long *)(param_1 + 0x460) != 0) {
      puVar13 = (undefined8 *)(param_1 + 0x468);
    }
  }
  else {
    *(undefined8 **)(param_1 + 0x460) = param_2;
    func_0x000109fce054(&uStack_330,lVar16 + 0x28);
    *(undefined8 *)(param_1 + 0x470) = uStack_328;
    *(undefined8 *)(param_1 + 0x468) = uStack_330;
    *(undefined8 *)(param_1 + 0x480) = uStack_318;
    *(undefined8 *)(param_1 + 0x478) = uStack_320;
    *(ulong *)(param_1 + 0x490) = CONCAT44(uStack_304,uStack_308);
    *(undefined8 *)(param_1 + 0x488) = uStack_310;
    *(ulong *)(param_1 + 0x498) = CONCAT44(uStack_2fc,uStack_300);
    lVar16 = param_2[1];
    *(undefined1 *)(param_1 + 0x20) = 1;
    *(undefined1 *)(param_1 + 0x340) = 0;
    puVar13 = (undefined8 *)(param_1 + 0x468);
  }
  puVar10 = param_2 + 2;
  uVar12 = 0;
  FUN_10926762c(&uStack_330,*param_2,lVar16,puVar10,*(undefined4 *)(param_2 + 0x26));
  *(undefined8 *)(param_1 + 0x48) = uStack_330;
  lVar16 = param_1 + 0x50;
  puVar8 = &uStack_328;
  FUN_109267c80();
  *(undefined8 *)(param_1 + 0x300) = uStack_78;
  *(undefined8 *)(param_1 + 0x2f8) = uStack_80;
  *(undefined8 *)(param_1 + 0x310) = uStack_68;
  *(undefined8 *)(param_1 + 0x308) = uStack_70;
  *(undefined8 *)(param_1 + 800) = uStack_58;
  *(undefined8 *)(param_1 + 0x318) = uStack_60;
  *(undefined8 *)(param_1 + 0x330) = uStack_48;
  *(undefined8 *)(param_1 + 0x328) = uStack_50;
  *(undefined8 *)(param_1 + 0x2c0) = uStack_b8;
  *(undefined8 *)(param_1 + 0x2b8) = uStack_c0;
  *(undefined8 *)(param_1 + 0x2d0) = uStack_a8;
  *(undefined8 *)(param_1 + 0x2c8) = uStack_b0;
  *(undefined8 *)(param_1 + 0x2e0) = uStack_98;
  *(undefined8 *)(param_1 + 0x2d8) = uStack_a0;
  *(undefined8 *)(param_1 + 0x2f0) = uStack_88;
  *(undefined8 *)(param_1 + 0x2e8) = uStack_90;
  *(undefined8 *)(param_1 + 0x2a0) = uStack_d8;
  *(undefined8 *)(param_1 + 0x298) = uStack_e0;
  *(undefined8 *)(param_1 + 0x2b0) = uStack_c8;
  *(undefined8 *)(param_1 + 0x2a8) = uStack_d0;
  *(undefined4 *)(param_1 + 0x338) = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  *extraout_x8 = 1;
  *(undefined1 *)(extraout_x8 + 0xa5) = 0;
  lVar16 = lVar16 + 0x30;
  *(undefined1 *)(extraout_x8 + 0xb7) = 0;
  puVar18 = extraout_x8 + 2;
  extraout_x8[0xb8] = 0;
  extraout_x8[0xb9] = 0;
  puVar1 = extraout_x8 + 0xa6;
  _bzero(extraout_x8 + 1,0x28d);
  *(undefined1 *)(extraout_x8 + 0xb6) = 0;
  extraout_x8[0xb0] = 0;
  extraout_x8[0xb1] = 0;
  extraout_x8[0xae] = 0;
  extraout_x8[0xaf] = 0;
  extraout_x8[0xb4] = 0;
  extraout_x8[0xb5] = 0;
  extraout_x8[0xb2] = 0;
  extraout_x8[0xb3] = 0;
  extraout_x8[0xa8] = 0;
  extraout_x8[0xa9] = 0;
  puVar1[0] = 0;
  puVar1[1] = 0;
  extraout_x8[0xac] = 0;
  extraout_x8[0xad] = 0;
  extraout_x8[0xaa] = 0;
  extraout_x8[0xab] = 0;
  extraout_x8[0xba] = 0xffffffff;
  extraout_x8[0xbb] = 0xffffffff;
  uVar6 = uVar12 & 0xffffffff;
  uVar4 = *(uint *)(puVar8 + uVar6 * 0x1a + 0x8b);
  FUN_1092686c4(puVar18,puVar8[uVar6 * 0x1a + 0x7f]);
  uVar17 = puVar8[uVar6 * 0x1a + 0x7f];
  uVar22 = (uint)uVar12;
  if (uVar17 == 0) {
    uVar15 = 0;
  }
  else {
    lVar19 = puVar8[uVar6 * 0x1a + 0x88];
    uVar12 = 1;
    uVar21 = 0;
    uVar14 = 0;
    do {
      uVar20 = uVar12;
      uVar12 = (ulong)*(uint *)(puVar8 + uVar6 * 0x1a + uVar21 + 0x77);
      lVar11 = *(long *)(lVar16 + uVar12 * 8);
      uVar15 = *(uint *)(lVar11 + 0x2c);
      if (uVar15 <= uVar14) {
        uVar15 = uVar14;
      }
      puVar7 = (uint *)(puVar8 + uVar12 * 6 + 5);
      uVar14 = puVar7[1];
      if (puVar13 == (undefined8 *)0x0) {
        puVar9 = puVar18 + uVar21 * 0x12;
        puVar9[9] = uVar14;
LAB_109267750:
        uVar14 = *puVar7;
        puVar18[uVar21 * 0x12 + 8] = uVar14;
        if (uVar14 == 2) {
          uVar23 = puVar10[uVar12 * 2];
          *(undefined8 *)(puVar18 + uVar21 * 0x12 + 0xe) = (puVar10 + uVar12 * 2)[1];
          *(undefined8 *)(puVar18 + uVar21 * 0x12 + 0xc) = uVar23;
        }
      }
      else {
        pbVar2 = (byte *)((long)puVar13 + uVar12 * 2);
        if (uVar22 != pbVar2[1]) {
          uVar14 = 1;
        }
        puVar9 = puVar18 + uVar21 * 0x12;
        puVar9[9] = uVar14;
        if (uVar22 == *pbVar2) goto LAB_109267750;
        puVar9[8] = 1;
      }
      *(long *)puVar9 = lVar11;
      *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar7 + 8);
      if (lVar19 != 0) {
        uVar14 = *(uint *)(puVar8 + uVar6 * 0x1a + uVar21 + 0x80);
        if (uVar14 == 0xffffffff) {
          if ((char)puVar7[7] == '\x01') {
            puVar9[0x10] = puVar7[6];
            *(undefined1 *)(puVar9 + 0x11) = 1;
          }
        }
        else {
          *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(lVar16 + (ulong)uVar14 * 8);
          *(undefined8 *)(puVar9 + 6) = puVar8[(ulong)uVar14 * 6 + 9];
        }
      }
      uVar12 = (ulong)((int)uVar20 + 1);
      uVar21 = uVar20;
      uVar14 = uVar15;
    } while (uVar20 < uVar17);
  }
  uVar5 = *(uint *)(puVar8 + uVar6 * 0x1a + 0x89);
  uVar12 = (ulong)uVar5;
  uVar14 = uVar15;
  if (uVar5 == 0xffffffff) goto LAB_109267954;
  lVar19 = *(long *)(lVar16 + uVar12 * 8);
  uVar14 = *(uint *)(lVar19 + 0x2c);
  if (*(uint *)(lVar19 + 0x2c) <= uVar15) {
    uVar14 = uVar15;
  }
  puVar18 = (uint *)(puVar8 + (ulong)uVar5 * 6 + 5);
  *(long *)(extraout_x8 + 0x94) = lVar19;
  *(undefined8 *)(extraout_x8 + 0x96) = *(undefined8 *)(puVar18 + 8);
  uVar15 = puVar18[1];
  if (puVar13 == (undefined8 *)0x0) {
    extraout_x8[0x9d] = uVar15;
LAB_109267838:
    uVar15 = *puVar18;
    extraout_x8[0x9c] = uVar15;
    if (uVar15 == 2) {
      uVar23 = puVar10[uVar12 * 2];
      *(undefined8 *)(extraout_x8 + 0xa2) = (puVar10 + uVar12 * 2)[1];
      *(undefined8 *)(extraout_x8 + 0xa0) = uVar23;
    }
  }
  else {
    pbVar2 = (byte *)((long)puVar13 + uVar12 * 2);
    if (uVar22 != pbVar2[1]) {
      uVar15 = 1;
    }
    extraout_x8[0x9d] = uVar15;
    if (uVar22 == *pbVar2) goto LAB_109267838;
    extraout_x8[0x9c] = 1;
  }
  ppuVar3 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(lVar19 + 0x40) * 4;
  if (0x56 < *(uint *)(lVar19 + 0x40)) {
    ppuVar3 = &PTR_DAT_110ae4700;
  }
  if ((*(byte *)((long)ppuVar3 + 0x14) >> 1 & 1) != 0) {
    *(undefined8 *)(extraout_x8 + 0xa8) = *(undefined8 *)(extraout_x8 + 0x96);
    *(undefined8 *)puVar1 = *(undefined8 *)(extraout_x8 + 0x94);
    uVar15 = puVar18[3];
    if (puVar13 == (undefined8 *)0x0) {
      extraout_x8[0xaf] = uVar15;
    }
    else {
      pbVar2 = (byte *)((long)puVar13 + uVar12 * 2);
      if (uVar22 != pbVar2[1]) {
        uVar15 = 1;
      }
      extraout_x8[0xaf] = uVar15;
      if (uVar22 != *pbVar2) {
        extraout_x8[0xae] = 1;
        goto LAB_1092678d0;
      }
    }
    uVar22 = puVar18[2];
    extraout_x8[0xae] = uVar22;
    if (uVar22 == 2) {
      uVar23 = puVar10[uVar12 * 2];
      *(undefined8 *)(extraout_x8 + 0xb4) = (puVar10 + uVar12 * 2)[1];
      *(undefined8 *)(extraout_x8 + 0xb2) = uVar23;
    }
  }
LAB_1092678d0:
  uVar22 = *(uint *)(puVar8 + uVar6 * 0x1a + 0x8a);
  if (uVar22 == 0xffffffff) {
    if ((char)puVar18[7] == '\x01') {
      uVar22 = puVar18[6];
      extraout_x8[0xa4] = uVar22;
      *(undefined1 *)(extraout_x8 + 0xa5) = 1;
      ppuVar3 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(lVar19 + 0x40) * 4;
      if (0x56 < *(uint *)(lVar19 + 0x40)) {
        ppuVar3 = &PTR_DAT_110ae4700;
      }
      if ((*(byte *)((long)ppuVar3 + 0x14) >> 1 & 1) != 0) {
        extraout_x8[0xb6] = uVar22;
        *(undefined1 *)(extraout_x8 + 0xb7) = 1;
      }
    }
  }
  else {
    lVar16 = *(long *)(lVar16 + (ulong)uVar22 * 8);
    *(long *)(extraout_x8 + 0x98) = lVar16;
    *(undefined8 *)(extraout_x8 + 0x9a) = puVar8[(ulong)uVar22 * 6 + 9];
    uVar22 = *(uint *)(lVar16 + 0x40);
    ppuVar3 = &PTR_DAT_110ae4700 + (ulong)uVar22 * 4;
    if (0x56 < uVar22) {
      ppuVar3 = &PTR_DAT_110ae4700;
    }
    if ((*(byte *)((long)ppuVar3 + 0x14) >> 1 & 1) != 0) {
      *(undefined8 *)(extraout_x8 + 0xac) = *(undefined8 *)(extraout_x8 + 0x9a);
      *(undefined8 *)(extraout_x8 + 0xaa) = *(undefined8 *)(extraout_x8 + 0x98);
    }
  }
LAB_109267954:
  *extraout_x8 = uVar14;
  extraout_x8[1] = uVar4;
  return;
}



/* Entry: 10926762c; end: 10926797f;  */

void FUN_10926762c(uint *param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  uint param_6,long param_7)

{
  long lVar1;
  uint *puVar2;
  byte *pbVar3;
  undefined **ppuVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  
  *param_1 = 1;
  *(undefined1 *)(param_1 + 0xa5) = 0;
  param_2 = param_2 + 0x30;
  *(undefined1 *)(param_1 + 0xb7) = 0;
  lVar1 = param_3 + 0x28;
  puVar15 = param_1 + 2;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  puVar2 = param_1 + 0xa6;
  _bzero(param_1 + 1,0x28d);
  *(undefined1 *)(param_1 + 0xb6) = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  puVar2[0] = 0;
  puVar2[1] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xba] = 0xffffffff;
  param_1[0xbb] = 0xffffffff;
  lVar19 = param_3 + (ulong)param_6 * 0xd0;
  uVar5 = *(uint *)(lVar19 + 0x458);
  FUN_1092686c4(puVar15,*(undefined8 *)(lVar19 + 0x3f8));
  uVar14 = *(ulong *)(lVar19 + 0x3f8);
  if (uVar14 == 0) {
    uVar13 = 0;
  }
  else {
    lVar16 = *(long *)(lVar19 + 0x440);
    uVar11 = 1;
    uVar18 = 0;
    uVar12 = 0;
    do {
      uVar17 = uVar11;
      uVar11 = (ulong)*(uint *)(lVar19 + 0x3b8 + uVar18 * 8);
      lVar10 = *(long *)(param_2 + uVar11 * 8);
      uVar13 = *(uint *)(lVar10 + 0x2c);
      if (uVar13 <= uVar12) {
        uVar13 = uVar12;
      }
      puVar8 = (uint *)(lVar1 + uVar11 * 0x30);
      uVar12 = puVar8[1];
      if (param_7 == 0) {
        puVar9 = puVar15 + uVar18 * 0x12;
        puVar9[9] = uVar12;
LAB_109267750:
        uVar12 = *puVar8;
        puVar15[uVar18 * 0x12 + 8] = uVar12;
        if (uVar12 == 2) {
          puVar7 = (undefined8 *)(param_4 + uVar11 * 0x10);
          uVar20 = *puVar7;
          *(undefined8 *)(puVar15 + uVar18 * 0x12 + 0xe) = puVar7[1];
          *(undefined8 *)(puVar15 + uVar18 * 0x12 + 0xc) = uVar20;
        }
      }
      else {
        pbVar3 = (byte *)(param_7 + uVar11 * 2);
        if (param_6 != pbVar3[1]) {
          uVar12 = 1;
        }
        puVar9 = puVar15 + uVar18 * 0x12;
        puVar9[9] = uVar12;
        if (param_6 == *pbVar3) goto LAB_109267750;
        puVar9[8] = 1;
      }
      *(long *)puVar9 = lVar10;
      *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(puVar8 + 8);
      if (lVar16 != 0) {
        uVar12 = *(uint *)(lVar19 + 0x400 + uVar18 * 8);
        if (uVar12 == 0xffffffff) {
          if ((char)puVar8[7] == '\x01') {
            puVar9[0x10] = puVar8[6];
            *(undefined1 *)(puVar9 + 0x11) = 1;
          }
        }
        else {
          *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(param_2 + (ulong)uVar12 * 8);
          *(undefined8 *)(puVar9 + 6) = *(undefined8 *)(param_3 + 0x48 + (ulong)uVar12 * 0x30);
        }
      }
      uVar11 = (ulong)((int)uVar17 + 1);
      uVar18 = uVar17;
      uVar12 = uVar13;
    } while (uVar17 < uVar14);
  }
  uVar6 = *(uint *)(lVar19 + 0x448);
  uVar14 = (ulong)uVar6;
  uVar12 = uVar13;
  if (uVar6 == 0xffffffff) goto LAB_109267954;
  lVar16 = *(long *)(param_2 + uVar14 * 8);
  uVar12 = *(uint *)(lVar16 + 0x2c);
  if (*(uint *)(lVar16 + 0x2c) <= uVar13) {
    uVar12 = uVar13;
  }
  puVar15 = (uint *)(lVar1 + (ulong)uVar6 * 0x30);
  *(long *)(param_1 + 0x94) = lVar16;
  *(undefined8 *)(param_1 + 0x96) = *(undefined8 *)(puVar15 + 8);
  uVar13 = puVar15[1];
  if (param_7 == 0) {
    param_1[0x9d] = uVar13;
LAB_109267838:
    uVar13 = *puVar15;
    param_1[0x9c] = uVar13;
    if (uVar13 == 2) {
      puVar7 = (undefined8 *)(param_4 + uVar14 * 0x10);
      uVar20 = *puVar7;
      *(undefined8 *)(param_1 + 0xa2) = puVar7[1];
      *(undefined8 *)(param_1 + 0xa0) = uVar20;
    }
  }
  else {
    pbVar3 = (byte *)(param_7 + uVar14 * 2);
    if (param_6 != pbVar3[1]) {
      uVar13 = 1;
    }
    param_1[0x9d] = uVar13;
    if (param_6 == *pbVar3) goto LAB_109267838;
    param_1[0x9c] = 1;
  }
  ppuVar4 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(lVar16 + 0x40) * 4;
  if (0x56 < *(uint *)(lVar16 + 0x40)) {
    ppuVar4 = &PTR_DAT_110ae4700;
  }
  if ((*(byte *)((long)ppuVar4 + 0x14) >> 1 & 1) != 0) {
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0x96);
    *(undefined8 *)puVar2 = *(undefined8 *)(param_1 + 0x94);
    uVar13 = puVar15[3];
    if (param_7 == 0) {
      param_1[0xaf] = uVar13;
    }
    else {
      pbVar3 = (byte *)(param_7 + uVar14 * 2);
      if (param_6 != pbVar3[1]) {
        uVar13 = 1;
      }
      param_1[0xaf] = uVar13;
      if (param_6 != *pbVar3) {
        param_1[0xae] = 1;
        goto LAB_1092678d0;
      }
    }
    uVar13 = puVar15[2];
    param_1[0xae] = uVar13;
    if (uVar13 == 2) {
      puVar7 = (undefined8 *)(param_4 + uVar14 * 0x10);
      uVar20 = *puVar7;
      *(undefined8 *)(param_1 + 0xb4) = puVar7[1];
      *(undefined8 *)(param_1 + 0xb2) = uVar20;
    }
  }
LAB_1092678d0:
  uVar13 = *(uint *)(lVar19 + 0x450);
  if (uVar13 == 0xffffffff) {
    if ((char)puVar15[7] == '\x01') {
      uVar13 = puVar15[6];
      param_1[0xa4] = uVar13;
      *(undefined1 *)(param_1 + 0xa5) = 1;
      ppuVar4 = &PTR_DAT_110ae4700 + (ulong)*(uint *)(lVar16 + 0x40) * 4;
      if (0x56 < *(uint *)(lVar16 + 0x40)) {
        ppuVar4 = &PTR_DAT_110ae4700;
      }
      if ((*(byte *)((long)ppuVar4 + 0x14) >> 1 & 1) != 0) {
        param_1[0xb6] = uVar13;
        *(undefined1 *)(param_1 + 0xb7) = 1;
      }
    }
  }
  else {
    lVar19 = *(long *)(param_2 + (ulong)uVar13 * 8);
    *(long *)(param_1 + 0x98) = lVar19;
    *(undefined8 *)(param_1 + 0x9a) = *(undefined8 *)(lVar1 + (ulong)uVar13 * 0x30 + 0x20);
    uVar13 = *(uint *)(lVar19 + 0x40);
    ppuVar4 = &PTR_DAT_110ae4700 + (ulong)uVar13 * 4;
    if (0x56 < uVar13) {
      ppuVar4 = &PTR_DAT_110ae4700;
    }
    if ((*(byte *)((long)ppuVar4 + 0x14) >> 1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0xac) = *(undefined8 *)(param_1 + 0x9a);
      *(undefined8 *)(param_1 + 0xaa) = *(undefined8 *)(param_1 + 0x98);
    }
  }
LAB_109267954:
  *param_1 = uVar12;
  param_1[1] = uVar5;
  return;
}



/* Entry: 109267980; end: 109267acb;  */

long FUN_109267980(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 auStack_5b0 [73];
  long lStack_368;
  undefined8 uStack_328;
  undefined8 auStack_320 [73];
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
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  if (*(long *)(param_1 + 0x460) != 0) {
    if ((*(byte *)(param_1 + 0x340) & 1) == 0) {
      FUN_109266650();
      *(int *)(param_1 + 0x338) = (int)lVar2;
      *(undefined1 *)(param_1 + 0x340) = 1;
    }
    FUN_109267000(param_1);
    puVar6 = *(undefined8 **)(param_1 + 0x460);
    iVar1 = *(int *)(param_1 + 0x4a0) + 1;
    *(int *)(param_1 + 0x4a0) = iVar1;
    FUN_10926762c(&uStack_328,*puVar6,puVar6[1],puVar6 + 2,*(undefined4 *)(puVar6 + 0x26),iVar1,
                  param_1 + 0x468);
    *(undefined8 *)(param_1 + 0x48) = uStack_328;
    lVar2 = param_1 + 0x50;
    param_2 = auStack_320;
    FUN_109267c80();
    *(undefined8 *)(param_1 + 0x300) = uStack_70;
    *(undefined8 *)(param_1 + 0x2f8) = uStack_78;
    *(undefined8 *)(param_1 + 0x310) = uStack_60;
    *(undefined8 *)(param_1 + 0x308) = uStack_68;
    *(undefined8 *)(param_1 + 800) = uStack_50;
    *(undefined8 *)(param_1 + 0x318) = uStack_58;
    *(undefined8 *)(param_1 + 0x330) = uStack_40;
    *(undefined8 *)(param_1 + 0x328) = uStack_48;
    *(undefined8 *)(param_1 + 0x2c0) = uStack_b0;
    *(undefined8 *)(param_1 + 0x2b8) = uStack_b8;
    *(undefined8 *)(param_1 + 0x2d0) = uStack_a0;
    *(undefined8 *)(param_1 + 0x2c8) = uStack_a8;
    *(undefined8 *)(param_1 + 0x2e0) = uStack_90;
    *(undefined8 *)(param_1 + 0x2d8) = uStack_98;
    *(undefined8 *)(param_1 + 0x2f0) = uStack_80;
    *(undefined8 *)(param_1 + 0x2e8) = uStack_88;
    *(undefined8 *)(param_1 + 0x2a0) = uStack_d0;
    *(undefined8 *)(param_1 + 0x298) = uStack_d8;
    *(undefined8 *)(param_1 + 0x2b0) = uStack_c0;
    *(undefined8 *)(param_1 + 0x2a8) = uStack_c8;
    *(undefined4 *)(param_1 + 0x338) = 0;
    *(undefined1 *)(param_1 + 0x340) = 0;
    *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_1 + 0x348);
    *(undefined4 *)(param_1 + 0x360) = 0;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return lVar2;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puVar6 = auStack_5b0;
  lStack_368 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(lVar2 + 0x20) = 1;
  *(undefined1 *)(lVar2 + 0x340) = 0;
  puVar5 = param_2 + (ulong)*(uint *)(param_2 + 0x49) * 9 + 1;
  FUN_109267bac(auStack_5b0);
  lVar3 = lVar2 + 0x50;
  FUN_109267c80();
  uVar4 = param_2[0x4a];
  *(undefined8 *)(lVar2 + 0x2a0) = param_2[0x4b];
  *(undefined8 *)(lVar2 + 0x298) = uVar4;
  uVar7 = param_2[0x4d];
  uVar4 = param_2[0x4c];
  uVar9 = param_2[0x4f];
  uVar8 = param_2[0x4e];
  uVar11 = param_2[0x51];
  uVar10 = param_2[0x50];
  *(undefined8 *)(lVar2 + 0x2d8) = param_2[0x52];
  *(undefined8 *)(lVar2 + 0x2c0) = uVar9;
  *(undefined8 *)(lVar2 + 0x2b8) = uVar8;
  *(undefined8 *)(lVar2 + 0x2d0) = uVar11;
  *(undefined8 *)(lVar2 + 0x2c8) = uVar10;
  *(undefined8 *)(lVar2 + 0x2b0) = uVar7;
  *(undefined8 *)(lVar2 + 0x2a8) = uVar4;
  uVar7 = param_2[0x56];
  uVar4 = param_2[0x55];
  uVar9 = param_2[0x58];
  uVar8 = param_2[0x57];
  uVar11 = param_2[0x5a];
  uVar10 = param_2[0x59];
  *(undefined8 *)(lVar2 + 800) = param_2[0x5b];
  *(undefined8 *)(lVar2 + 0x308) = uVar9;
  *(undefined8 *)(lVar2 + 0x300) = uVar8;
  *(undefined8 *)(lVar2 + 0x318) = uVar11;
  *(undefined8 *)(lVar2 + 0x310) = uVar10;
  *(undefined8 *)(lVar2 + 0x2f8) = uVar7;
  *(undefined8 *)(lVar2 + 0x2f0) = uVar4;
  uVar4 = param_2[0x53];
  *(undefined8 *)(lVar2 + 0x2e8) = param_2[0x54];
  *(undefined8 *)(lVar2 + 0x2e0) = uVar4;
  *(undefined8 *)(lVar2 + 0x48) = *param_2;
  *(undefined4 *)(lVar2 + 0x338) = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_368) {
    return lVar3;
  }
  ___stack_chk_fail();
  _bzero();
  if (0x240 < (long)puVar5 - (long)puVar6) goto LAB_109267c4c;
  while( true ) {
    if (puVar6 == puVar5) {
      return lVar3;
    }
    if (7 < *(ulong *)(lVar3 + 0x240)) break;
    FUN_109268768(lVar3,puVar6);
    puVar6 = puVar6 + 9;
  }
  *(undefined8 *)(lVar3 + 0x240) = 0;
  uVar4 = 0x10;
  ___cxa_allocate_exception(0x10);
  func_0x000104c4f71c();
  do {
    ___cxa_throw(uVar4,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
LAB_109267c4c:
    uVar4 = 0x10;
    ___cxa_allocate_exception();
    func_0x000104c4f71c();
  } while( true );
}



/* Entry: 109267acc; end: 109267bab;  */

long FUN_109267acc(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 auStack_280 [73];
  long lStack_38;
  
  puVar3 = auStack_280;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined1 *)(param_1 + 0x340) = 0;
  puVar4 = param_2 + (ulong)*(uint *)(param_2 + 0x49) * 9 + 1;
  FUN_109267bac(auStack_280);
  lVar1 = param_1 + 0x50;
  FUN_109267c80();
  uVar2 = param_2[0x4a];
  *(undefined8 *)(param_1 + 0x2a0) = param_2[0x4b];
  *(undefined8 *)(param_1 + 0x298) = uVar2;
  uVar5 = param_2[0x4d];
  uVar2 = param_2[0x4c];
  uVar7 = param_2[0x4f];
  uVar6 = param_2[0x4e];
  uVar9 = param_2[0x51];
  uVar8 = param_2[0x50];
  *(undefined8 *)(param_1 + 0x2d8) = param_2[0x52];
  *(undefined8 *)(param_1 + 0x2c0) = uVar7;
  *(undefined8 *)(param_1 + 0x2b8) = uVar6;
  *(undefined8 *)(param_1 + 0x2d0) = uVar9;
  *(undefined8 *)(param_1 + 0x2c8) = uVar8;
  *(undefined8 *)(param_1 + 0x2b0) = uVar5;
  *(undefined8 *)(param_1 + 0x2a8) = uVar2;
  uVar5 = param_2[0x56];
  uVar2 = param_2[0x55];
  uVar7 = param_2[0x58];
  uVar6 = param_2[0x57];
  uVar9 = param_2[0x5a];
  uVar8 = param_2[0x59];
  *(undefined8 *)(param_1 + 800) = param_2[0x5b];
  *(undefined8 *)(param_1 + 0x308) = uVar7;
  *(undefined8 *)(param_1 + 0x300) = uVar6;
  *(undefined8 *)(param_1 + 0x318) = uVar9;
  *(undefined8 *)(param_1 + 0x310) = uVar8;
  *(undefined8 *)(param_1 + 0x2f8) = uVar5;
  *(undefined8 *)(param_1 + 0x2f0) = uVar2;
  uVar2 = param_2[0x53];
  *(undefined8 *)(param_1 + 0x2e8) = param_2[0x54];
  *(undefined8 *)(param_1 + 0x2e0) = uVar2;
  *(undefined8 *)(param_1 + 0x48) = *param_2;
  *(undefined4 *)(param_1 + 0x338) = 0;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return lVar1;
  }
  ___stack_chk_fail();
  _bzero();
  if (0x240 < (long)puVar4 - (long)puVar3) goto LAB_109267c4c;
  while( true ) {
    if (puVar3 == puVar4) {
      return lVar1;
    }
    if (7 < *(ulong *)(lVar1 + 0x240)) break;
    FUN_109268768(lVar1,puVar3);
    puVar3 = puVar3 + 9;
  }
  *(undefined8 *)(lVar1 + 0x240) = 0;
  uVar2 = 0x10;
  ___cxa_allocate_exception(0x10);
  func_0x000104c4f71c();
  do {
    ___cxa_throw(uVar2,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
LAB_109267c4c:
    uVar2 = 0x10;
    ___cxa_allocate_exception();
    func_0x000104c4f71c();
  } while( true );
}



/* Entry: 109267bac; end: 109267c7f;  */

long FUN_109267bac(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  _bzero(param_1,0x248);
  if (0x240 < param_3 - param_2) goto LAB_109267c4c;
  while( true ) {
    if (param_2 == param_3) {
      return param_1;
    }
    if (7 < *(ulong *)(param_1 + 0x240)) break;
    FUN_109268768(param_1,param_2);
    param_2 = param_2 + 0x48;
  }
  *(undefined8 *)(param_1 + 0x240) = 0;
  uVar1 = 0x10;
  ___cxa_allocate_exception(0x10);
  func_0x000104c4f71c();
  do {
    ___cxa_throw(uVar1,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
LAB_109267c4c:
    uVar1 = 0x10;
    ___cxa_allocate_exception();
    func_0x000104c4f71c();
  } while( true );
}



/* Entry: 109267c80; end: 109267ceb;  */

long FUN_109267c80(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != param_2) {
    *(undefined8 *)(param_1 + 0x240) = 0;
    if (*(long *)(param_2 + 0x240) != 0) {
      lVar2 = *(long *)(param_2 + 0x240) * 0x48;
      lVar1 = param_2;
      do {
        FUN_109268808(param_1,lVar1);
        lVar1 = lVar1 + 0x48;
        lVar2 = lVar2 + -0x48;
      } while (lVar2 != 0);
    }
    *(undefined8 *)(param_2 + 0x240) = 0;
  }
  return param_1;
}



/* Entry: 109267cec; end: 109267d6f;  */

void FUN_109267cec(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x340) & 1) == 0) {
    lVar1 = param_1;
    FUN_109266650();
    *(int *)(param_1 + 0x338) = (int)lVar1;
    *(undefined1 *)(param_1 + 0x340) = 1;
  }
  FUN_109267000(param_1);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x0001092683fc(param_1 + 0x30);
    FUN_109261878(param_1 + 0x4a8);
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



/* Entry: 109267d70; end: 109267e13;  */

void FUN_109267d70(long param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar5 = *param_2;
  lVar2 = *(long *)(param_1 + 0x18);
  lVar4 = *(long *)(lVar5 + 0x58);
  if (lVar4 == 0) {
    iVar3 = 0;
  }
  else {
    uStack_40 = *(undefined8 *)(lVar4 + 0x50);
    uStack_38 = *(undefined8 *)(lVar4 + 0x18);
    FUN_10925bdc8(lVar4,lVar2,&uStack_40);
    iVar3 = *(int *)(lVar4 + 0x2c);
    lVar2 = *(long *)(param_1 + 0x18);
  }
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x128) == iVar3) goto LAB_109267de8;
    *(int *)(lVar2 + 0x128) = iVar3;
  }
  _glBindBuffer(0x8893,iVar3);
LAB_109267de8:
  *(long *)(param_1 + 0x38) = lVar5;
  uVar1 = *(undefined4 *)((long)param_2 + 0xc);
  func_0x000109248088();
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(int *)(param_1 + 0x40) = (int)param_2[1];
  return;
}



/* Entry: 109267e14; end: 109267f4f;  */

void FUN_109267e14(long param_1,undefined8 param_2)

{
  ulong uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  bool bVar13;
  long lVar14;
  
  if (*(long *)(param_1 + 0x368) != *(long *)(param_1 + 0x28)) {
    *(long *)(param_1 + 0x368) = *(long *)(param_1 + 0x28);
    FUN_10926640c(param_1);
    uVar8 = *(undefined4 *)(*(long *)(param_1 + 0x368) + 0x2e0);
    func_0x00010924805c();
    *(undefined4 *)(param_1 + 0x30) = uVar8;
    FUN_109288f18(param_1 + 0x378,*(undefined8 *)(param_1 + 0x368));
    lVar9 = 0;
    if (*(long *)(param_1 + 0x368) != 0) {
      lVar9 = *(long *)(param_1 + 0x368) + 0x590;
    }
    if (*(long *)(param_1 + 0x630) != lVar9) {
      if (*(long *)(param_1 + 0x4640) != lVar9) {
        *(long *)(param_1 + 0x4640) = lVar9;
        *(undefined1 *)(param_1 + 0x4a08) = 1;
      }
      *(long *)(param_1 + 0x4a18) = lVar9;
      *(long *)(param_1 + 0x4b08) = lVar9;
      *(long *)(param_1 + 0x5778) = lVar9;
    }
    *(long *)(param_1 + 0x630) = lVar9;
  }
  FUN_109288f5c(param_1 + 0x378,*(undefined8 *)(param_1 + 0x18),param_2);
  FUN_109261b80(param_1 + 0x4a8,*(undefined8 *)(param_1 + 0x18));
  if ((*(byte *)(param_1 + 0x340) & 1) == 0) {
    lVar9 = param_1;
    FUN_109266650();
    *(int *)(param_1 + 0x338) = (int)lVar9;
    *(undefined1 *)(param_1 + 0x340) = 1;
  }
  lVar9 = *(long *)(param_1 + 0x18);
  lVar10 = *(long *)(param_1 + 0x368);
  puVar2 = (uint *)(param_1 + 0x33c);
  if (((lVar9 != 0) && (lVar10 != 0)) && (uVar11 = *puVar2, uVar11 != 0)) {
    lVar14 = *(long *)(lVar9 + 0x38);
    if ((uVar11 >> 8 & 1) != 0) {
      _glDepthMask(*(undefined1 *)(lVar10 + 0x309));
      uVar11 = *puVar2;
    }
    if ((uVar11 >> 10 & 1) != 0) {
      iVar3 = *(int *)(lVar10 + 0x328);
      if ((*(char *)(lVar9 + 0x1c4) != '\x01') || (*(int *)(lVar9 + 0x1c0) != iVar3)) {
        *(undefined1 *)(lVar9 + 0x1c4) = 1;
        *(int *)(lVar9 + 0x1c0) = iVar3;
        _glStencilMaskSeparate(0x404);
      }
      iVar3 = *(int *)(lVar10 + 0x340);
      if ((*(char *)(lVar9 + 0x1cc) != '\x01') || (*(int *)(lVar9 + 0x1c8) != iVar3)) {
        *(undefined1 *)(lVar9 + 0x1cc) = 1;
        *(int *)(lVar9 + 0x1c8) = iVar3;
        _glStencilMaskSeparate(0x405);
      }
    }
    if ((*(byte *)(param_1 + 0x33d) >> 6 & 1) != 0) {
      if (*(char *)(lVar14 + 0x29) == '\x01') {
        if (*(long *)(lVar10 + 0x448) != 0) {
          uVar12 = 0;
          uVar11 = 1;
          do {
            uVar4 = *(uint *)(lVar10 + 0x364 + uVar12 * 0x20);
            FUN_109248cd8(lVar14,uVar11 - 1,uVar4 & 1,uVar4 >> 1 & 1,uVar4 >> 2 & 1,uVar4 >> 3 & 1,
                          lVar9);
            uVar12 = (ulong)uVar11;
            uVar1 = (ulong)uVar11;
            uVar11 = uVar11 + 1;
          } while (uVar1 < *(ulong *)(lVar10 + 0x448));
        }
      }
      else if (*(long *)(lVar10 + 0x448) != 0) {
        lVar14 = *(long *)(lVar9 + 600);
        lVar9 = *(long *)(lVar9 + 0x260);
        if (lVar14 != lVar9) {
          uVar4 = *(uint *)(lVar10 + 0x364);
          uVar5 = uVar4 >> 1 & 1;
          uVar6 = uVar4 >> 2 & 1;
          uVar7 = uVar4 >> 3 & 1;
          uVar11 = uVar6 << 0x10 | uVar7 << 0x18 | uVar5 << 8 | uVar4 & 1;
          bVar13 = true;
          do {
            while ((((*(char *)(lVar14 + 6) != '\x01' ||
                     ((uint)*(byte *)(lVar14 + 2) != (uVar4 & 1))) ||
                    (*(byte *)(lVar14 + 3) != uVar5)) ||
                   ((*(byte *)(lVar14 + 4) != uVar6 || (*(byte *)(lVar14 + 5) != uVar7))))) {
              bVar13 = false;
              *(undefined1 *)(lVar14 + 6) = 1;
              *(uint *)(lVar14 + 2) = uVar11;
              lVar14 = lVar14 + 0x28;
              if (lVar14 == lVar9) goto LAB_109287e34;
            }
            *(undefined1 *)(lVar14 + 6) = 1;
            *(uint *)(lVar14 + 2) = uVar11;
            lVar14 = lVar14 + 0x28;
          } while (lVar14 != lVar9);
          if (!bVar13) {
LAB_109287e34:
            _glColorMask();
          }
        }
      }
    }
  }
  *puVar2 = 0;
  return;
}



/* Entry: 109267f50; end: 10926809b;  */

long * FUN_109267f50(long param_1,int *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_40;
  undefined8 uStack_38;
  
  plVar1 = &lStack_40;
  FUN_109267e14(param_1,param_2[3]);
  iVar3 = *(int *)(param_1 + 0x34);
  if (iVar3 == 0x1401) {
    iVar3 = 1;
  }
  else if (iVar3 == 0x1405) {
    iVar3 = 4;
  }
  else {
    if (iVar3 != 0x1403) {
      plVar1 = (long *)&UNK_10f55ec2d;
      FUN_109243bf8();
      FUN_10926809c(&lStack_40);
      __Unwind_Resume();
      func_0x000104bd46a0();
      lVar5 = *plVar1;
      lVar2 = *(long *)(lVar5 + 0x38);
      lVar6 = *(long *)(lVar2 + 0x58);
      if (lVar6 != 0) {
        uStack_80 = *(undefined8 *)(lVar6 + 0x50);
        uStack_78 = *(undefined8 *)(lVar6 + 0x18);
        FUN_10925bdc8(lVar6,*(undefined8 *)(lVar5 + 0x18),&uStack_80);
        if (*(int *)(lVar6 + 0x2c) != 0) {
          return plVar1;
        }
        lVar2 = *(long *)(lVar5 + 0x38);
      }
      if ((*(long *)(lVar2 + 0x50) == 0) && (*(long *)(lVar2 + 0x58) != 0)) {
        FUN_10925c194(*(long *)(lVar2 + 0x58),*(undefined8 *)(lVar5 + 0x18));
      }
      return plVar1;
    }
    iVar3 = 2;
  }
  uVar4 = (ulong)(uint)(*(int *)(param_1 + 0x40) + iVar3 * *param_2);
  lVar2 = *(long *)(param_1 + 0x38);
  lVar6 = *(long *)(lVar2 + 0x58);
  if (lVar6 != 0) {
    lStack_40 = *(long *)(lVar6 + 0x50);
    uStack_38 = *(undefined8 *)(lVar6 + 0x18);
    FUN_10925bdc8(lVar6,*(undefined8 *)(param_1 + 0x18),&lStack_40);
    if (*(int *)(lVar6 + 0x2c) != 0) goto LAB_109268020;
    lVar2 = *(long *)(param_1 + 0x38);
  }
  if (*(long *)(lVar2 + 0x50) == 0) {
    lVar2 = *(long *)(lVar2 + 0x58);
    if (lVar2 != 0) {
      FUN_10925ca24(lVar2,1,0,0,*(undefined8 *)(param_1 + 0x18));
    }
  }
  else {
    lVar2 = *(long *)(*(long *)(lVar2 + 0x50) + 0x10);
  }
  uVar4 = lVar2 + uVar4;
LAB_109268020:
  lStack_40 = param_1;
  if ((uint)param_2[2] < 2) {
    _glDrawElements(*(undefined4 *)(param_1 + 0x30),param_2[1],*(undefined4 *)(param_1 + 0x34),uVar4
                   );
  }
  else {
    (**(code **)(*(long *)(param_1 + 8) + 0x8c0))
              (*(undefined4 *)(param_1 + 0x30),param_2[1],*(undefined4 *)(param_1 + 0x34),uVar4);
  }
  FUN_10926809c(&lStack_40);
  return plVar1;
}



/* Entry: 10926809c; end: 109268557;  */

long * FUN_10926809c(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(lVar3 + 0x38);
  lVar2 = *(long *)(lVar1 + 0x58);
  if (lVar2 != 0) {
    uStack_40 = *(undefined8 *)(lVar2 + 0x50);
    uStack_38 = *(undefined8 *)(lVar2 + 0x18);
    FUN_10925bdc8(lVar2,*(undefined8 *)(lVar3 + 0x18),&uStack_40);
    if (*(int *)(lVar2 + 0x2c) != 0) {
      return param_1;
    }
    lVar1 = *(long *)(lVar3 + 0x38);
  }
  if ((*(long *)(lVar1 + 0x50) == 0) && (*(long *)(lVar1 + 0x58) != 0)) {
    FUN_10925c194(*(long *)(lVar1 + 0x58),*(undefined8 *)(lVar3 + 0x18));
  }
  return param_1;
}



/* Entry: 109268558; end: 10926863f;  */

undefined8 * FUN_109268558(undefined8 *param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[1] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 3) = 1;
  *(undefined1 *)((long)param_1 + 0x2ac) = 0;
  *(undefined1 *)((long)param_1 + 0x2f4) = 0;
  param_1[0x5f] = 0;
  _bzero((long)param_1 + 0x1c,0x28d);
  *(undefined1 *)(param_1 + 0x5e) = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  param_1[0x57] = 0;
  param_1[0x56] = 0;
  param_1[0x59] = 0;
  param_1[0x58] = 0;
  param_1[0x60] = 0xffffffffffffffff;
  param_1[0x61] = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  param_1[99] = 0;
  param_1[0x65] = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x68] = 0;
  param_1[0x67] = 0;
  param_1[0x69] = param_2;
  param_1[0x76] = 0;
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  FUN_109288e38(param_1 + 0x69);
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  param_1[0x7f] = 0;
  param_1[0x7e] = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x7d] = 0;
  param_1[0x7c] = 0;
  func_0x0001092683fc(param_1);
  return param_1;
}



/* Entry: 109268640; end: 10926868f;  */

void FUN_109268640(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)0x10;
  ___cxa_allocate_exception();
  FUN_109268690();
  puVar2 = puVar1;
  ___cxa_throw(puVar1,&PTR_DAT_110ae5518,FUN_10924969c);
  ___cxa_free_exception(puVar1);
  __Unwind_Resume();
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  *puVar2 = &PTR_FUN_110ae5540;
  return;
}



/* Entry: 109268690; end: 1092686c3;  */

void FUN_109268690(undefined8 *param_1)

{
  __ZNSt13runtime_errorC2ERKNSt3__112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE();
  *param_1 = &PTR_FUN_110ae5540;
  return;
}



/* Entry: 1092686c4; end: 109268767;  */

/* WARNING: Possible PIC construction at 0x000109268958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109268994: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001092689bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109268998) */
/* WARNING: Removing unreachable block (ram,0x0001092689a4) */
/* WARNING: Removing unreachable block (ram,0x0001092689b8) */

long * FUN_1092686c4(long *param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 ***pppuVar19;
  code *pcVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 **ppuStack_70;
  code *pcStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 **ppuStack_50;
  code *pcStack_48;
  long lStack_40;
  long lStack_38;
  undefined1 *puStack_30;
  code *pcStack_28;
  
  if (param_2 < 9) {
    uVar17 = param_1[0x48];
    if (uVar17 < param_2) {
      do {
        plVar3 = param_1 + uVar17 * 9;
        plVar3[8] = 0;
        plVar3[5] = 0;
        plVar3[4] = 0;
        plVar3[7] = 0;
        plVar3[6] = 0;
        plVar3[1] = 0;
        *plVar3 = 0;
        plVar3[3] = 0;
        plVar3[2] = 0;
        uVar17 = param_1[0x48] + 1;
        param_1[0x48] = uVar17;
      } while (uVar17 < param_2);
    }
    else {
      param_1[0x48] = param_2;
    }
    return param_1;
  }
  lVar4 = 0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  lVar15 = lVar4;
  puVar11 = (undefined8 *)PTR___ZTISt12length_error_110352238;
  ___cxa_throw(lVar4,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(lVar4);
  lVar13 = lVar15;
  __Unwind_Resume();
  pcStack_28 = FUN_109268768;
  ppuStack_50 = &puStack_30;
  if (*(ulong *)(lVar13 + 0x240) < 8) {
    puVar14 = (undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x240) * 0x48);
    uVar16 = *puVar11;
    puVar14[1] = puVar11[1];
    *puVar14 = uVar16;
    uVar21 = puVar11[3];
    uVar16 = puVar11[2];
    uVar23 = puVar11[5];
    uVar22 = puVar11[4];
    uVar25 = puVar11[7];
    uVar24 = puVar11[6];
    puVar14[8] = puVar11[8];
    puVar14[5] = uVar23;
    puVar14[4] = uVar22;
    puVar14[7] = uVar25;
    puVar14[6] = uVar24;
    puVar14[3] = uVar21;
    puVar14[2] = uVar16;
    lVar15 = *(long *)(lVar13 + 0x240);
    *(long *)(lVar13 + 0x240) = lVar15 + 1;
    return (long *)(lVar13 + lVar15 * 0x48);
  }
  lVar5 = 0x10;
  lStack_40 = lVar15;
  lStack_38 = lVar4;
  puStack_30 = &stack0xfffffffffffffff0;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  lVar15 = lVar5;
  puVar11 = (undefined8 *)PTR___ZTISt12length_error_110352238;
  ___cxa_throw(lVar5,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(lVar5);
  lVar13 = lVar15;
  __Unwind_Resume();
  pcStack_48 = FUN_109268808;
  ppuStack_70 = &ppuStack_50;
  if (*(ulong *)(lVar13 + 0x240) < 8) {
    puVar14 = (undefined8 *)(lVar13 + *(ulong *)(lVar13 + 0x240) * 0x48);
    uVar16 = *puVar11;
    puVar14[1] = puVar11[1];
    *puVar14 = uVar16;
    uVar21 = puVar11[3];
    uVar16 = puVar11[2];
    uVar23 = puVar11[5];
    uVar22 = puVar11[4];
    uVar25 = puVar11[7];
    uVar24 = puVar11[6];
    puVar14[8] = puVar11[8];
    puVar14[5] = uVar23;
    puVar14[4] = uVar22;
    puVar14[7] = uVar25;
    puVar14[6] = uVar24;
    puVar14[3] = uVar21;
    puVar14[2] = uVar16;
    lVar15 = *(long *)(lVar13 + 0x240);
    *(long *)(lVar13 + 0x240) = lVar15 + 1;
    return (long *)(lVar13 + lVar15 * 0x48);
  }
  plVar6 = (long *)0x10;
  lStack_60 = lVar15;
  lStack_58 = lVar5;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  plVar7 = plVar6;
  plVar12 = (long *)PTR___ZTISt12length_error_110352238;
  ___cxa_throw(plVar6,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(plVar6);
  plVar8 = plVar7;
  __Unwind_Resume();
  plVar3 = (long *)&stack0xffffffffffffff60;
  pcStack_68 = FUN_1092688a8;
  lVar15 = plVar12[0x27];
  plVar8[0xc] = plVar12[0x28];
  plVar8[0xb] = lVar15;
  FUN_109247160();
  uVar16 = *(undefined8 *)(*plVar12 + 0x6d0);
  *(undefined4 *)(plVar8 + 0xd) = 0;
  *(int *)((long)plVar8 + 0x6c) = (int)uVar16;
  plVar9 = (long *)plVar8[8];
  FUN_1092460e0(plVar9,7,0x138,8);
  if (plVar9 != (long *)0x0) {
    *(undefined4 *)(plVar9 + 0x26) = 0;
    plVar9[0x23] = 0;
    plVar9[0x22] = 0;
    plVar9[0x25] = 0;
    plVar9[0x24] = 0;
    plVar9[0x1f] = 0;
    plVar9[0x1e] = 0;
    plVar9[0x21] = 0;
    plVar9[0x20] = 0;
    plVar9[0x1b] = 0;
    plVar9[0x1a] = 0;
    plVar9[0x1d] = 0;
    plVar9[0x1c] = 0;
    plVar9[0x17] = 0;
    plVar9[0x16] = 0;
    plVar9[0x19] = 0;
    plVar9[0x18] = 0;
    plVar9[0x13] = 0;
    plVar9[0x12] = 0;
    plVar9[0x15] = 0;
    plVar9[0x14] = 0;
    plVar9[0xf] = 0;
    plVar9[0xe] = 0;
    plVar9[0x11] = 0;
    plVar9[0x10] = 0;
    plVar9[0xb] = 0;
    plVar9[10] = 0;
    plVar9[0xd] = 0;
    plVar9[0xc] = 0;
    plVar9[7] = 0;
    plVar9[6] = 0;
    plVar9[9] = 0;
    plVar9[8] = 0;
    plVar9[3] = 0;
    plVar9[2] = 0;
    plVar9[5] = 0;
    plVar9[4] = 0;
    plVar9[1] = 0;
    *plVar9 = 0;
  }
  lVar15 = *plVar12;
  lVar13 = plVar12[1];
  *plVar9 = lVar13;
  plVar9[1] = lVar15;
  pppuVar19 = &ppuStack_70;
  if (*(long *)(lVar13 + 0xc0) != 0) {
    lVar15 = *(long *)(lVar13 + 0xc0) << 3;
    plVar18 = (long *)(lVar13 + 0x30);
    do {
      lVar13 = *plVar18;
      if ((lVar13 != 0) && (plVar10 = (long *)plVar8[10], (int)plVar10[4] == 0)) {
        plVar3 = (long *)&stack0xffffffffffffff60;
        plVar6 = plVar8;
        plVar7 = plVar12;
        pcVar20 = (code *)0x10926895c;
        goto code_r0x000109fccc60;
      }
      plVar18 = plVar18 + 1;
      lVar15 = lVar15 + -8;
    } while (lVar15 != 0);
  }
  lVar15 = plVar12[0x26];
  *(int *)(plVar9 + 0x26) = (int)lVar15;
  if (lVar15 != 0) {
    _memmove(plVar9 + 2,plVar12 + 2,lVar15 << 4);
  }
  plVar10 = (long *)plVar8[10];
  if ((int)plVar10[4] == 0) {
    lVar13 = plVar12[1];
    plVar6 = plVar8;
    plVar7 = plVar12;
    pcVar20 = (code *)0x109268998;
  }
  else {
    lVar13 = plVar8[0xb];
    if ((lVar13 == 0) || (lVar15 = plVar8[0xc], (int)lVar15 == -1)) {
      return plVar10;
    }
    plVar3 = (long *)plVar8[8];
    FUN_1092460e0(plVar3,0x22,0x10,8);
    *plVar3 = lVar13;
    *(int *)(plVar3 + 1) = (int)lVar15;
    *(undefined1 *)((long)plVar3 + 0xc) = 0;
    plVar10 = (long *)plVar8[10];
    if ((int)plVar10[4] != 0) {
      return plVar10;
    }
    plVar3 = &lStack_60;
    pppuVar19 = (undefined8 ***)ppuStack_70;
    pcVar20 = pcStack_68;
  }
code_r0x000109fccc60:
  *(long **)((long)plVar3 + -0x20) = plVar7;
  *(long **)((long)plVar3 + -0x18) = plVar6;
  *(undefined8 ****)((long)plVar3 + -0x10) = pppuVar19;
  *(code **)((long)plVar3 + -8) = pcVar20;
  plVar7 = plVar10 + 1;
  if ((*plVar7 == plVar10[2]) || (*(long *)(plVar10[2] + -0x10) != lVar13)) {
    plVar10 = (long *)*plVar10;
    FUN_10922d97c((undefined1 *)((long)plVar3 + -0x30),plVar10);
    if (*(long *)((long)plVar3 + -0x30) != 0) {
      FUN_10925df7c(plVar7,(undefined1 *)((long)plVar3 + -0x30));
      plVar10 = plVar7;
    }
    plVar3 = *(long **)((long)plVar3 + -0x28);
    if (plVar3 != (long *)0x0) {
      plVar7 = plVar3 + 1;
      do {
        lVar15 = *plVar7;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar2) {
          *plVar7 = lVar15 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar15 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        plVar10 = plVar3;
      }
    }
  }
  return plVar10;
}



/* Entry: 109268768; end: 109268807;  */

/* WARNING: Possible PIC construction at 0x000109268958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109268994: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001092689bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109268998) */
/* WARNING: Removing unreachable block (ram,0x0001092689a4) */
/* WARNING: Removing unreachable block (ram,0x0001092689b8) */

long * FUN_109268768(long param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 ***pppuVar17;
  code *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 **ppuStack_50;
  code *pcStack_48;
  long lStack_40;
  long lStack_38;
  undefined8 *puStack_30;
  code *pcStack_28;
  
  if (*(ulong *)(param_1 + 0x240) < 8) {
    puVar12 = (undefined8 *)(param_1 + *(ulong *)(param_1 + 0x240) * 0x48);
    uVar15 = *param_2;
    puVar12[1] = param_2[1];
    *puVar12 = uVar15;
    uVar19 = param_2[3];
    uVar15 = param_2[2];
    uVar21 = param_2[5];
    uVar20 = param_2[4];
    uVar23 = param_2[7];
    uVar22 = param_2[6];
    puVar12[8] = param_2[8];
    puVar12[5] = uVar21;
    puVar12[4] = uVar20;
    puVar12[7] = uVar23;
    puVar12[6] = uVar22;
    puVar12[3] = uVar19;
    puVar12[2] = uVar15;
    lVar13 = *(long *)(param_1 + 0x240);
    *(long *)(param_1 + 0x240) = lVar13 + 1;
    return (long *)(param_1 + lVar13 * 0x48);
  }
  lVar4 = 0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  lVar13 = lVar4;
  puVar12 = (undefined8 *)PTR___ZTISt12length_error_110352238;
  ___cxa_throw(lVar4,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(lVar4);
  lVar11 = lVar13;
  __Unwind_Resume();
  pcStack_28 = FUN_109268808;
  ppuStack_50 = &puStack_30;
  if (*(ulong *)(lVar11 + 0x240) < 8) {
    puVar14 = (undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x240) * 0x48);
    uVar15 = *puVar12;
    puVar14[1] = puVar12[1];
    *puVar14 = uVar15;
    uVar19 = puVar12[3];
    uVar15 = puVar12[2];
    uVar21 = puVar12[5];
    uVar20 = puVar12[4];
    uVar23 = puVar12[7];
    uVar22 = puVar12[6];
    puVar14[8] = puVar12[8];
    puVar14[5] = uVar21;
    puVar14[4] = uVar20;
    puVar14[7] = uVar23;
    puVar14[6] = uVar22;
    puVar14[3] = uVar19;
    puVar14[2] = uVar15;
    lVar13 = *(long *)(lVar11 + 0x240);
    *(long *)(lVar11 + 0x240) = lVar13 + 1;
    return (long *)(lVar11 + lVar13 * 0x48);
  }
  plVar5 = (long *)0x10;
  lStack_40 = lVar13;
  lStack_38 = lVar4;
  puStack_30 = (undefined8 *)&stack0xfffffffffffffff0;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  plVar6 = plVar5;
  plVar10 = (long *)PTR___ZTISt12length_error_110352238;
  ___cxa_throw(plVar5,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(plVar5);
  plVar7 = plVar6;
  __Unwind_Resume();
  plVar3 = (long *)&stack0xffffffffffffff80;
  pcStack_48 = FUN_1092688a8;
  lVar13 = plVar10[0x27];
  plVar7[0xc] = plVar10[0x28];
  plVar7[0xb] = lVar13;
  FUN_109247160();
  uVar15 = *(undefined8 *)(*plVar10 + 0x6d0);
  *(undefined4 *)(plVar7 + 0xd) = 0;
  *(int *)((long)plVar7 + 0x6c) = (int)uVar15;
  plVar8 = (long *)plVar7[8];
  FUN_1092460e0(plVar8,7,0x138,8);
  if (plVar8 != (long *)0x0) {
    *(undefined4 *)(plVar8 + 0x26) = 0;
    plVar8[0x23] = 0;
    plVar8[0x22] = 0;
    plVar8[0x25] = 0;
    plVar8[0x24] = 0;
    plVar8[0x1f] = 0;
    plVar8[0x1e] = 0;
    plVar8[0x21] = 0;
    plVar8[0x20] = 0;
    plVar8[0x1b] = 0;
    plVar8[0x1a] = 0;
    plVar8[0x1d] = 0;
    plVar8[0x1c] = 0;
    plVar8[0x17] = 0;
    plVar8[0x16] = 0;
    plVar8[0x19] = 0;
    plVar8[0x18] = 0;
    plVar8[0x13] = 0;
    plVar8[0x12] = 0;
    plVar8[0x15] = 0;
    plVar8[0x14] = 0;
    plVar8[0xf] = 0;
    plVar8[0xe] = 0;
    plVar8[0x11] = 0;
    plVar8[0x10] = 0;
    plVar8[0xb] = 0;
    plVar8[10] = 0;
    plVar8[0xd] = 0;
    plVar8[0xc] = 0;
    plVar8[7] = 0;
    plVar8[6] = 0;
    plVar8[9] = 0;
    plVar8[8] = 0;
    plVar8[3] = 0;
    plVar8[2] = 0;
    plVar8[5] = 0;
    plVar8[4] = 0;
    plVar8[1] = 0;
    *plVar8 = 0;
  }
  lVar13 = *plVar10;
  lVar11 = plVar10[1];
  *plVar8 = lVar11;
  plVar8[1] = lVar13;
  pppuVar17 = &ppuStack_50;
  if (*(long *)(lVar11 + 0xc0) != 0) {
    lVar13 = *(long *)(lVar11 + 0xc0) << 3;
    plVar16 = (long *)(lVar11 + 0x30);
    do {
      lVar11 = *plVar16;
      if ((lVar11 != 0) && (plVar9 = (long *)plVar7[10], (int)plVar9[4] == 0)) {
        plVar3 = (long *)&stack0xffffffffffffff80;
        plVar5 = plVar7;
        plVar6 = plVar10;
        pcVar18 = (code *)0x10926895c;
        goto code_r0x000109fccc60;
      }
      plVar16 = plVar16 + 1;
      lVar13 = lVar13 + -8;
    } while (lVar13 != 0);
  }
  lVar13 = plVar10[0x26];
  *(int *)(plVar8 + 0x26) = (int)lVar13;
  if (lVar13 != 0) {
    _memmove(plVar8 + 2,plVar10 + 2,lVar13 << 4);
  }
  plVar9 = (long *)plVar7[10];
  if ((int)plVar9[4] == 0) {
    lVar11 = plVar10[1];
    plVar5 = plVar7;
    plVar6 = plVar10;
    pcVar18 = (code *)0x109268998;
  }
  else {
    lVar11 = plVar7[0xb];
    if ((lVar11 == 0) || (lVar13 = plVar7[0xc], (int)lVar13 == -1)) {
      return plVar9;
    }
    plVar3 = (long *)plVar7[8];
    FUN_1092460e0(plVar3,0x22,0x10,8);
    *plVar3 = lVar11;
    *(int *)(plVar3 + 1) = (int)lVar13;
    *(undefined1 *)((long)plVar3 + 0xc) = 0;
    plVar9 = (long *)plVar7[10];
    if ((int)plVar9[4] != 0) {
      return plVar9;
    }
    plVar3 = &lStack_40;
    pppuVar17 = (undefined8 ***)ppuStack_50;
    pcVar18 = pcStack_48;
  }
code_r0x000109fccc60:
  *(long **)((long)plVar3 + -0x20) = plVar6;
  *(long **)((long)plVar3 + -0x18) = plVar5;
  *(undefined8 ****)((long)plVar3 + -0x10) = pppuVar17;
  *(code **)((long)plVar3 + -8) = pcVar18;
  plVar6 = plVar9 + 1;
  if ((*plVar6 == plVar9[2]) || (*(long *)(plVar9[2] + -0x10) != lVar11)) {
    plVar9 = (long *)*plVar9;
    FUN_10922d97c((undefined1 *)((long)plVar3 + -0x30),plVar9);
    if (*(long *)((long)plVar3 + -0x30) != 0) {
      FUN_10925df7c(plVar6,(undefined1 *)((long)plVar3 + -0x30));
      plVar9 = plVar6;
    }
    plVar3 = *(long **)((long)plVar3 + -0x28);
    if (plVar3 != (long *)0x0) {
      plVar6 = plVar3 + 1;
      do {
        lVar13 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar13 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar13 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar3);
        plVar9 = plVar3;
      }
    }
  }
  return plVar9;
}



/* Entry: 109268808; end: 1092688a7;  */

/* WARNING: Possible PIC construction at 0x000109268958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109268994: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001092689bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109268998) */
/* WARNING: Removing unreachable block (ram,0x0001092689a4) */
/* WARNING: Removing unreachable block (ram,0x0001092689b8) */

long * FUN_109268808(long param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  undefined8 ***pppuVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 **ppuStack_30;
  code *pcStack_28;
  
  if (*(ulong *)(param_1 + 0x240) < 8) {
    puVar10 = (undefined8 *)(param_1 + *(ulong *)(param_1 + 0x240) * 0x48);
    uVar12 = *param_2;
    puVar10[1] = param_2[1];
    *puVar10 = uVar12;
    uVar17 = param_2[3];
    uVar12 = param_2[2];
    uVar19 = param_2[5];
    uVar18 = param_2[4];
    uVar21 = param_2[7];
    uVar20 = param_2[6];
    puVar10[8] = param_2[8];
    puVar10[5] = uVar19;
    puVar10[4] = uVar18;
    puVar10[7] = uVar21;
    puVar10[6] = uVar20;
    puVar10[3] = uVar17;
    puVar10[2] = uVar12;
    lVar11 = *(long *)(param_1 + 0x240);
    *(long *)(param_1 + 0x240) = lVar11 + 1;
    return (long *)(param_1 + lVar11 * 0x48);
  }
  plVar5 = (long *)0x10;
  ___cxa_allocate_exception();
  func_0x000104c4f71c();
  plVar13 = plVar5;
  plVar4 = (long *)PTR___ZTISt12length_error_110352238;
  ___cxa_throw(plVar5,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception(plVar5);
  plVar6 = plVar13;
  __Unwind_Resume();
  puVar3 = &stack0xffffffffffffffa0;
  pcStack_28 = FUN_1092688a8;
  lVar11 = plVar4[0x27];
  plVar6[0xc] = plVar4[0x28];
  plVar6[0xb] = lVar11;
  ppuStack_30 = (undefined8 **)&stack0xfffffffffffffff0;
  FUN_109247160();
  uVar12 = *(undefined8 *)(*plVar4 + 0x6d0);
  *(undefined4 *)(plVar6 + 0xd) = 0;
  *(int *)((long)plVar6 + 0x6c) = (int)uVar12;
  plVar7 = (long *)plVar6[8];
  FUN_1092460e0(plVar7,7,0x138,8);
  if (plVar7 != (long *)0x0) {
    *(undefined4 *)(plVar7 + 0x26) = 0;
    plVar7[0x23] = 0;
    plVar7[0x22] = 0;
    plVar7[0x25] = 0;
    plVar7[0x24] = 0;
    plVar7[0x1f] = 0;
    plVar7[0x1e] = 0;
    plVar7[0x21] = 0;
    plVar7[0x20] = 0;
    plVar7[0x1b] = 0;
    plVar7[0x1a] = 0;
    plVar7[0x1d] = 0;
    plVar7[0x1c] = 0;
    plVar7[0x17] = 0;
    plVar7[0x16] = 0;
    plVar7[0x19] = 0;
    plVar7[0x18] = 0;
    plVar7[0x13] = 0;
    plVar7[0x12] = 0;
    plVar7[0x15] = 0;
    plVar7[0x14] = 0;
    plVar7[0xf] = 0;
    plVar7[0xe] = 0;
    plVar7[0x11] = 0;
    plVar7[0x10] = 0;
    plVar7[0xb] = 0;
    plVar7[10] = 0;
    plVar7[0xd] = 0;
    plVar7[0xc] = 0;
    plVar7[7] = 0;
    plVar7[6] = 0;
    plVar7[9] = 0;
    plVar7[8] = 0;
    plVar7[3] = 0;
    plVar7[2] = 0;
    plVar7[5] = 0;
    plVar7[4] = 0;
    plVar7[1] = 0;
    *plVar7 = 0;
  }
  lVar11 = *plVar4;
  lVar9 = plVar4[1];
  *plVar7 = lVar9;
  plVar7[1] = lVar11;
  pppuVar15 = &ppuStack_30;
  if (*(long *)(lVar9 + 0xc0) != 0) {
    lVar11 = *(long *)(lVar9 + 0xc0) << 3;
    plVar14 = (long *)(lVar9 + 0x30);
    do {
      lVar9 = *plVar14;
      if ((lVar9 != 0) && (plVar8 = (long *)plVar6[10], (int)plVar8[4] == 0)) {
        puVar3 = &stack0xffffffffffffffa0;
        plVar5 = plVar6;
        plVar13 = plVar4;
        pcVar16 = (code *)0x10926895c;
        goto code_r0x000109fccc60;
      }
      plVar14 = plVar14 + 1;
      lVar11 = lVar11 + -8;
    } while (lVar11 != 0);
  }
  lVar11 = plVar4[0x26];
  *(int *)(plVar7 + 0x26) = (int)lVar11;
  if (lVar11 != 0) {
    _memmove(plVar7 + 2,plVar4 + 2,lVar11 << 4);
  }
  plVar8 = (long *)plVar6[10];
  if ((int)plVar8[4] == 0) {
    lVar9 = plVar4[1];
    plVar5 = plVar6;
    plVar13 = plVar4;
    pcVar16 = (code *)0x109268998;
  }
  else {
    lVar9 = plVar6[0xb];
    if ((lVar9 == 0) || (lVar11 = plVar6[0xc], (int)lVar11 == -1)) {
      return plVar8;
    }
    plVar4 = (long *)plVar6[8];
    FUN_1092460e0(plVar4,0x22,0x10,8);
    *plVar4 = lVar9;
    *(int *)(plVar4 + 1) = (int)lVar11;
    *(undefined1 *)((long)plVar4 + 0xc) = 0;
    plVar8 = (long *)plVar6[10];
    if ((int)plVar8[4] != 0) {
      return plVar8;
    }
    puVar3 = &stack0xffffffffffffffe0;
    pppuVar15 = (undefined8 ***)ppuStack_30;
    pcVar16 = pcStack_28;
  }
code_r0x000109fccc60:
  *(long **)(puVar3 + -0x20) = plVar13;
  *(long **)(puVar3 + -0x18) = plVar5;
  *(undefined8 ****)(puVar3 + -0x10) = pppuVar15;
  *(code **)(puVar3 + -8) = pcVar16;
  plVar13 = plVar8 + 1;
  if ((*plVar13 == plVar8[2]) || (*(long *)(plVar8[2] + -0x10) != lVar9)) {
    plVar8 = (long *)*plVar8;
    FUN_10922d97c(puVar3 + -0x30,plVar8);
    if (*(long *)(puVar3 + -0x30) != 0) {
      FUN_10925df7c(plVar13,puVar3 + -0x30);
      plVar8 = plVar13;
    }
    plVar13 = *(long **)(puVar3 + -0x28);
    if (plVar13 != (long *)0x0) {
      plVar6 = plVar13 + 1;
      do {
        lVar11 = *plVar6;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar11 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar13);
        plVar8 = plVar13;
      }
    }
  }
  return plVar8;
}



/* Entry: 1092688a8; end: 109268c2b;  */

/* WARNING: Possible PIC construction at 0x000109268958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000109268994: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001092689bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000109268998) */
/* WARNING: Removing unreachable block (ram,0x0001092689a4) */
/* WARNING: Removing unreachable block (ram,0x0001092689b8) */

void FUN_1092688a8(long param_1,long *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x19;
  long *unaff_x20;
  long lVar9;
  long *plVar10;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  lVar9 = param_2[0x27];
  *(long *)(param_1 + 0x60) = param_2[0x28];
  *(long *)(param_1 + 0x58) = lVar9;
  FUN_109247160();
  uVar8 = *(undefined8 *)(*param_2 + 0x6d0);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(int *)(param_1 + 0x6c) = (int)uVar8;
  plVar5 = *(long **)(param_1 + 0x40);
  FUN_1092460e0(plVar5,7,0x138,8);
  if (plVar5 != (long *)0x0) {
    *(undefined4 *)(plVar5 + 0x26) = 0;
    plVar5[0x23] = 0;
    plVar5[0x22] = 0;
    plVar5[0x25] = 0;
    plVar5[0x24] = 0;
    plVar5[0x1f] = 0;
    plVar5[0x1e] = 0;
    plVar5[0x21] = 0;
    plVar5[0x20] = 0;
    plVar5[0x1b] = 0;
    plVar5[0x1a] = 0;
    plVar5[0x1d] = 0;
    plVar5[0x1c] = 0;
    plVar5[0x17] = 0;
    plVar5[0x16] = 0;
    plVar5[0x19] = 0;
    plVar5[0x18] = 0;
    plVar5[0x13] = 0;
    plVar5[0x12] = 0;
    plVar5[0x15] = 0;
    plVar5[0x14] = 0;
    plVar5[0xf] = 0;
    plVar5[0xe] = 0;
    plVar5[0x11] = 0;
    plVar5[0x10] = 0;
    plVar5[0xb] = 0;
    plVar5[10] = 0;
    plVar5[0xd] = 0;
    plVar5[0xc] = 0;
    plVar5[7] = 0;
    plVar5[6] = 0;
    plVar5[9] = 0;
    plVar5[8] = 0;
    plVar5[3] = 0;
    plVar5[2] = 0;
    plVar5[5] = 0;
    plVar5[4] = 0;
    plVar5[1] = 0;
    *plVar5 = 0;
  }
  lVar9 = *param_2;
  lVar7 = param_2[1];
  *plVar5 = lVar7;
  plVar5[1] = lVar9;
  if (*(long *)(lVar7 + 0xc0) != 0) {
    lVar9 = *(long *)(lVar7 + 0xc0) << 3;
    plVar10 = (long *)(lVar7 + 0x30);
    do {
      lVar7 = *plVar10;
      if ((lVar7 != 0) && (puVar6 = *(undefined8 **)(param_1 + 0x50), *(int *)(puVar6 + 4) == 0)) {
        unaff_x30 = 0x10926895c;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
        unaff_x19 = param_1;
        unaff_x20 = param_2;
        unaff_x29 = puVar1;
        goto code_r0x000109fccc60;
      }
      plVar10 = plVar10 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
  }
  lVar9 = param_2[0x26];
  *(int *)(plVar5 + 0x26) = (int)lVar9;
  if (lVar9 != 0) {
    _memmove(plVar5 + 2,param_2 + 2,lVar9 << 4);
  }
  puVar6 = *(undefined8 **)(param_1 + 0x50);
  if (*(int *)(puVar6 + 4) == 0) {
    lVar7 = param_2[1];
    unaff_x30 = 0x109268998;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffc0;
    unaff_x19 = param_1;
    unaff_x20 = param_2;
    unaff_x29 = puVar1;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x58);
    if ((lVar7 == 0) || (iVar2 = *(int *)(param_1 + 0x60), iVar2 == -1)) {
      return;
    }
    plVar5 = *(long **)(param_1 + 0x40);
    FUN_1092460e0(plVar5,0x22,0x10,8);
    *plVar5 = lVar7;
    *(int *)(plVar5 + 1) = iVar2;
    *(undefined1 *)((long)plVar5 + 0xc) = 0;
    puVar6 = *(undefined8 **)(param_1 + 0x50);
    if (*(int *)(puVar6 + 4) != 0) {
      return;
    }
  }
code_r0x000109fccc60:
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
  if ((puVar6[1] == puVar6[2]) || (*(long *)(puVar6[2] + -0x10) != lVar7)) {
    FUN_10922d97c((undefined1 *)((long)register0x00000008 + -0x30),*puVar6);
    if (*(long *)((long)register0x00000008 + -0x30) != 0) {
      FUN_10925df7c(puVar6 + 1,(undefined1 *)((long)register0x00000008 + -0x30));
    }
    plVar5 = *(long **)((long)register0x00000008 + -0x28);
    if (plVar5 != (long *)0x0) {
      plVar10 = plVar5 + 1;
      do {
        lVar9 = *plVar10;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        __ZNSt3__119__shared_weak_count14__release_weakEv(plVar5);
      }
    }
  }
  return;
}



/* Entry: 109268c2c; end: 109268c57;  */

void FUN_109268c2c(long param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(int *)(param_1 + 0x68) + 1;
  if (uVar1 < *(uint *)(param_1 + 0x6c)) {
    *(uint *)(param_1 + 0x68) = uVar1;
    lVar3 = *(long *)(param_1 + 0x40);
    puVar2 = *(undefined4 **)(lVar3 + 8);
    uVar4 = *(long *)(lVar3 + 0x10) - (long)puVar2;
    while (uVar4 < 0x15) {
      func_0x000109246168(lVar3,0x15);
      puVar2 = *(undefined4 **)(lVar3 + 8);
      uVar4 = *(long *)(lVar3 + 0x10) - (long)puVar2;
    }
    *puVar2 = 9;
    *(ulong *)(lVar3 + 8) = (ulong)(puVar2 + 2) & 0xfffffffffffffffc;
    return;
  }
  return;
}



/* Entry: 109268c58; end: 109268cfb;  */

void FUN_109268c58(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  FUN_1092460e0(puVar1,0xb,0x18,4);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0x3f80000000000000;
  }
  uVar3 = param_2[1];
  uVar2 = *param_2;
  puVar1[2] = param_2[2];
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  return;
}



/* Entry: 109268cfc; end: 109268e5b;  */

void FUN_109268cfc(long param_1,undefined4 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  long *plVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lStack_48;
  
  puVar3 = *(undefined4 **)(param_1 + 0x40);
  FUN_1092460e0(puVar3,1,0x38,8);
  if (puVar3 != (undefined4 *)0x0) {
    *(undefined8 *)(puVar3 + 6) = 0;
    *(undefined8 *)(puVar3 + 4) = 0;
    *(undefined8 *)(puVar3 + 10) = 0;
    *(undefined8 *)(puVar3 + 8) = 0;
  }
  *puVar3 = param_2;
  *(long *)(puVar3 + 2) = param_4;
  puVar3[0xc] = (int)param_6;
  if (param_6 != 0) {
    _memmove(puVar3 + 4,param_5,param_6 << 2);
  }
  lVar7 = *(long *)(param_1 + 0x38);
  if ((*(byte *)(lVar7 + 0x98) & 1) == 0) {
    uVar4 = *(ulong *)(param_4 + 0x850);
    if (uVar4 != 0) {
      lVar8 = 0;
      uVar9 = 0;
      do {
        if ((*(long *)(*(long *)(param_4 + 0x848) + lVar8) != 0) && (*(int *)(lVar7 + 0x88) == 0)) {
          func_0x000109fccc60(lVar7 + 0x68);
          uVar4 = *(ulong *)(param_4 + 0x850);
        }
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0x20;
      } while (uVar9 < uVar4);
    }
    if (*(int *)(lVar7 + 0x88) == 0) {
      func_0x000109fccc60(lVar7 + 0x68,param_4);
    }
    if (*(int *)(lVar7 + 0x60) == 0) {
      func_0x000109fccc60(lVar7 + 0x40,*(undefined8 *)(param_4 + 0x30));
    }
  }
  if (*(long *)(param_4 + 0x8a8) != 0) {
    lVar7 = *(long *)(param_1 + 0x38);
    plVar6 = *(long **)(param_4 + 0x8a0);
    plVar1 = plVar6 + *(long *)(param_4 + 0x8a8);
    do {
      lStack_48 = *plVar6;
      plVar5 = *(long **)(lVar7 + 0xb0);
      plVar2 = *(long **)(lVar7 + 0xb8);
      if (plVar5 == plVar2) {
LAB_109268e20:
        if (plVar5 == plVar2) goto LAB_109268e28;
      }
      else {
        do {
          if (*plVar5 == lStack_48) goto LAB_109268e20;
          plVar5 = plVar5 + 1;
        } while (plVar5 != plVar2);
LAB_109268e28:
        FUN_109249b14(lVar7 + 0xb0,&lStack_48);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
  }
  return;
}



/* Entry: 109268e5c; end: 109268efb;  */

void FUN_109268e5c(undefined8 param_1,ulong param_2,long param_3,undefined8 *param_4,long param_5)

{
  if (param_5 != 0) {
    param_2 = param_2 & 0xffffffff;
    do {
      func_0x000109fd0a20(*(undefined8 *)(*(long *)(param_3 + 0x60) + param_2 * 8),*param_4);
      FUN_109268cfc(param_1,param_2);
      param_2 = param_2 + 1;
      param_5 = param_5 + -1;
      param_4 = param_4 + 1;
    } while (param_5 != 0);
  }
  return;
}



/* Entry: 109268efc; end: 109268fbb;  */

void FUN_109268efc(long param_1,undefined4 param_2,undefined8 param_3,long param_4,ulong param_5,
                  long param_6)

{
  bool bVar1;
  undefined4 *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar2 = *(undefined4 **)(param_1 + 0x40);
  FUN_1092460e0(puVar2,0xc,0x68,8);
  if (puVar2 != (undefined4 *)0x0) {
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)(puVar2 + 0x16) = 0;
    *(undefined8 *)(puVar2 + 0x14) = 0;
    *(undefined8 *)(puVar2 + 0x12) = 0;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 0xe) = 0;
    *(undefined8 *)(puVar2 + 0xc) = 0;
    *(undefined8 *)(puVar2 + 10) = 0;
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined8 *)(puVar2 + 6) = 0;
    *(undefined8 *)(puVar2 + 4) = 0;
    *(undefined8 *)(puVar2 + 2) = 0;
  }
  *puVar2 = param_2;
  puVar2[1] = (int)param_5;
  if (param_5 != 0) {
    uVar3 = 0;
    uVar4 = 1;
    do {
      *(undefined8 *)(puVar2 + uVar3 * 2 + 2) = *(undefined8 *)(param_4 + uVar3 * 8);
      puVar2[uVar3 + 0x12] = *(undefined4 *)(param_6 + uVar3 * 4);
      if (*(int *)(*(long *)(param_1 + 0x50) + 0x20) == 0) {
        func_0x000109fccc60();
      }
      bVar1 = uVar4 < param_5;
      uVar3 = uVar4;
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (bVar1);
  }
  return;
}



/* Entry: 109268fbc; end: 10926928f;  */

void FUN_109268fbc(long param_1,undefined4 param_2,undefined8 param_3,long param_4,
                  undefined4 param_5)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long *unaff_x21;
  long unaff_x22;
  
  puVar4 = *(undefined4 **)(param_1 + 0x40);
  FUN_1092460e0(puVar4,0xd,0x18,8);
  *puVar4 = param_2;
  *(long *)(puVar4 + 2) = param_4;
  puVar4[4] = param_5;
  puVar5 = *(undefined8 **)(param_1 + 0x50);
  if (*(int *)(puVar5 + 4) != 0) {
    return;
  }
  if ((puVar5[1] == puVar5[2]) || (*(long *)(puVar5[2] + -0x10) != param_4)) {
    FUN_10922d97c(&stack0xffffffffffffffd0,*puVar5);
    if (unaff_x22 != 0) {
      FUN_10925df7c(puVar5 + 1,&stack0xffffffffffffffd0);
    }
    if (unaff_x21 != (long *)0x0) {
      plVar1 = unaff_x21 + 1;
      do {
        lVar6 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
      }
    }
  }
  return;
}



/* Entry: 109269290; end: 10926941f;  */

void FUN_109269290(long param_1,long param_2,long param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long *unaff_x21;
  long unaff_x22;
  
  if ((*(byte *)(*(long *)(param_1 + 0x18) + 0x6c) & 1) == 0) {
    func_0x000109fd19d0(*(undefined8 *)(param_1 + 0x48),6,0x10,&UNK_10f561dc1,0xa1);
  }
  if ((*(byte *)(param_2 + 0x31) & 1) == 0) {
    func_0x000109fd19d0(*(undefined8 *)(param_1 + 0x48),6,0x10,&UNK_10f561e63,0xf2);
  }
  plVar3 = *(long **)(param_1 + 0x40);
  FUN_1092460e0(plVar3,0x17,0x18,8);
  *plVar3 = param_2;
  plVar3[1] = param_3;
  *(undefined4 *)(plVar3 + 2) = param_4;
  *(undefined4 *)((long)plVar3 + 0x14) = param_5;
  puVar4 = *(undefined8 **)(param_1 + 0x50);
  if (*(int *)(puVar4 + 4) != 0) {
    return;
  }
  if ((puVar4[1] == puVar4[2]) || (*(long *)(puVar4[2] + -0x10) != param_2)) {
    FUN_10922d97c(&stack0xffffffffffffffd0,*puVar4);
    if (unaff_x22 != 0) {
      FUN_10925df7c(puVar4 + 1,&stack0xffffffffffffffd0);
    }
    if (unaff_x21 != (long *)0x0) {
      plVar3 = unaff_x21 + 1;
      do {
        lVar5 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar5 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar5 == 0) {
        (**(code **)(*unaff_x21 + 0x10))(unaff_x21);
        __ZNSt3__119__shared_weak_count14__release_weakEv(unaff_x21);
      }
    }
  }
  return;
}



/* Entry: 109269420; end: 109269467;  */

void FUN_109269420(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_4 + 0x40);
  FUN_1092460e0(puVar1,0xf,0xc,4);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  return;
}



/* Entry: 109269468; end: 10926949f;  */

void FUN_109269468(long param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x40);
  FUN_1092460e0(puVar1,0x10,8,4);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return;
}



/* Entry: 1092694a0; end: 1092694eb;  */

void FUN_1092694a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  long param_5)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_5 + 0x40);
  FUN_1092460e0(puVar1,0x11,0x10,4);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 1092694ec; end: 1092695bf;  */

void FUN_1092694ec(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  FUN_1092460e0(puVar1,0x12,8,8);
  *puVar1 = param_2;
  return;
}



/* Entry: 1092695c0; end: 1092695d7;  */

void FUN_1092695c0(long param_1)

{
  if (*(long *)(param_1 + -0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZNSt3__119__shared_weak_count14__release_weakEv_110346648)();
    return;
  }
  return;
}



/* Entry: 1092695d8; end: 10926979f;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_1092695d8(undefined8 *param_1,long param_2,uint *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uStack_bd0;
  undefined8 auStack_bc8 [68];
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined4 uStack_918;
  undefined1 uStack_914;
  undefined5 uStack_910;
  undefined3 uStack_90b;
  undefined5 uStack_908;
  undefined8 uStack_900;
  undefined4 uStack_8f8;
  undefined2 uStack_8f4;
  undefined2 uStack_8f0;
  undefined4 uStack_8ec;
  undefined1 uStack_8e8;
  undefined8 uStack_8e4;
  undefined8 uStack_8dc;
  undefined8 uStack_8d4;
  undefined8 uStack_8cc;
  undefined4 uStack_8c4;
  undefined8 uStack_8c0;
  undefined4 uStack_8b8;
  undefined1 auStack_8b0 [4];
  undefined1 auStack_8ac [8];
  undefined1 auStack_8a4 [8];
  undefined1 auStack_89c [8];
  undefined4 uStack_894;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined4 uStack_7a0;
  undefined4 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined1 auStack_6f0 [72];
  undefined1 uStack_6a8;
  undefined1 *puStack_6a0;
  undefined1 *puStack_698;
  ulong uStack_690;
  undefined8 uStack_688;
  uint *puStack_680;
  long lStack_678;
  undefined8 *puStack_670;
  undefined8 *puStack_668;
  undefined1 *puStack_660;
  code *pcStack_658;
  long *plStack_650;
  undefined8 uStack_648;
  undefined1 auStack_640 [520];
  undefined1 auStack_438 [136];
  undefined8 auStack_3b0 [10];
  undefined1 auStack_360 [8];
  undefined1 auStack_358 [736];
  undefined4 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x000109fc9df8();
  *puVar1 = &PTR_FUN_110ae7000;
  puVar1[0xb2] = &PTR_FUN_110ae7050;
  plStack_650 = puVar1 + 6;
  if (puVar1[9] != 0) {
    lVar6 = puVar1[9] << 3;
    plVar7 = plStack_650;
    do {
      if ((*plVar7 != 0) && ((*(byte *)(*plVar7 + 0x188) & 1) != 0)) {
        uVar8 = 1;
        goto LAB_10926966c;
      }
      plVar7 = plVar7 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  uVar8 = 0;
LAB_10926966c:
  uVar9 = (ulong)*param_3;
  FUN_10925ec38(auStack_640,param_3 + 10);
  func_0x00010925ecf4(auStack_438,param_3 + 0x8c);
  FUN_10925ee60(auStack_3b0,param_3 + 0x138);
  FUN_10925f208(auStack_358,auStack_640);
  uStack_78 = 2;
  uStack_648 = param_1[9];
  lVar6 = 0;
  if (*(long *)(param_3 + 0x132) != 0) {
    lVar6 = *(long *)(param_3 + 0x132) + 0x590;
  }
  lVar3 = param_2;
  uVar4 = uVar9;
  uVar5 = uVar8;
  FUN_10925d11c(param_1 + 0xb2,param_2,uVar9,uVar8,auStack_360,&plStack_650,lVar6,
                *(undefined8 *)(param_3 + 0x134));
  FUN_10924a120(auStack_358);
  puVar1 = auStack_3b0;
  FUN_109234a54();
  *param_1 = &PTR_FUN_110ae7000;
  param_1[0xb2] = &PTR_FUN_110ae7050;
  param_1[0x2f3] = param_2 + 0x930;
  uVar11 = param_4[1];
  uVar10 = *param_4;
  uVar12 = param_4[2];
  param_1[0x2f7] = param_4[3];
  param_1[0x2f6] = uVar12;
  param_1[0x2f5] = uVar11;
  param_1[0x2f4] = uVar10;
  uVar11 = param_4[5];
  uVar10 = param_4[4];
  uVar13 = param_4[7];
  uVar12 = param_4[6];
  uVar15 = param_4[9];
  uVar14 = param_4[8];
  uVar16 = param_4[10];
  param_1[0x2ff] = param_4[0xb];
  param_1[0x2fe] = uVar16;
  param_1[0x2fd] = uVar15;
  param_1[0x2fc] = uVar14;
  param_1[0x2fb] = uVar13;
  param_1[0x2fa] = uVar12;
  param_1[0x2f9] = uVar11;
  param_1[0x2f8] = uVar10;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  FUN_10924a120(auStack_358);
  FUN_109234a54(auStack_3b0);
  FUN_109234930(param_1);
  puVar2 = puVar1;
  __Unwind_Resume();
  pcStack_658 = FUN_1092697a0;
  uStack_bd0._0_4_ = 0;
  puStack_6a0 = auStack_360;
  puStack_698 = auStack_640;
  uStack_690 = uVar9;
  uStack_688 = uVar8;
  puStack_680 = param_3;
  lStack_678 = param_2;
  puStack_670 = puVar1;
  puStack_668 = param_1;
  puStack_660 = &stack0xfffffffffffffff0;
  _bzero(auStack_bc8,0x220);
  lVar6 = 0x28;
  do {
    *(undefined8 *)((long)auStack_bc8 + lVar6 + 0x20U) = 0;
    *(undefined8 *)((long)auStack_bc8 + lVar6 + 0x18U) = 0xffffffff;
    *(undefined8 *)((long)auStack_bc8 + lVar6 + 0x30U) = 0;
    *(undefined8 *)((long)auStack_bc8 + lVar6 + 0x28U) = 0xffffffff;
    *(undefined8 *)((long)auStack_bc8 + lVar6) = 0;
    *(undefined8 *)((long)&uStack_bd0 + lVar6) = 0xffffffff;
    *(undefined8 *)((long)auStack_bc8 + lVar6 + 0x10U) = 0;
    *(undefined8 *)((long)auStack_bc8 + lVar6 + 8U) = 0xffffffff;
    lVar6 = lVar6 + 0x40;
  } while (lVar6 != 0x228);
  lVar6 = 0;
  uStack_9a8 = 0;
  uStack_920 = 0;
  uStack_908 = 0;
  uStack_8f8 = 1;
  uStack_8ec = 7;
  uStack_978 = 0xffffffff;
  uStack_980 = 0x100000000;
  uStack_968 = 0xffffffff;
  uStack_970 = 0x100000000;
  uStack_998 = 0xffffffff;
  uStack_9a0 = 0x100000000;
  uStack_988 = 0xffffffff;
  uStack_990 = 0x100000000;
  uStack_938 = 0xffffffff;
  uStack_940 = 0x100000000;
  uStack_928 = 0xffffffff;
  uStack_930 = 0x100000000;
  uStack_958 = 0xffffffff;
  uStack_960 = 0x100000000;
  uStack_948 = 0xffffffff;
  uStack_950 = 0x100000000;
  uStack_918 = 0;
  uStack_914 = 0;
  uStack_900 = 0;
  uStack_910 = 0;
  uStack_90b = 0;
  uStack_8f4 = 0;
  uStack_8f0 = 0;
  uStack_8e8 = 0;
  uStack_8dc = 0x700000000;
  uStack_8e4 = 0;
  uStack_8cc = 0;
  uStack_8d4 = 0;
  uStack_8c4 = 0;
  uStack_8c0 = 7;
  uStack_8b8 = 0;
  stack0xfffffffffffff758 = 0;
  _auStack_8b0 = 0;
  stack0xfffffffffffff768 = 0;
  stack0xfffffffffffff760 = 0;
  uStack_888 = 0;
  uStack_890 = 0;
  uStack_878 = 0;
  uStack_880 = 0;
  uStack_868 = 0;
  uStack_870 = 0;
  uStack_858 = 0;
  uStack_860 = 0;
  uStack_848 = 0;
  uStack_850 = 0;
  uStack_838 = 0;
  uStack_840 = 0;
  uStack_828 = 0;
  uStack_830 = 0;
  uStack_818 = 0;
  uStack_820 = 0;
  uStack_808 = 0;
  uStack_810 = 0;
  uStack_7f8 = 0;
  uStack_800 = 0;
  uStack_7e8 = 0;
  uStack_7f0 = 0;
  uStack_7d8 = 0;
  uStack_7e0 = 0;
  uStack_7c8 = 0;
  uStack_7d0 = 0;
  uStack_7b8 = 0;
  uStack_7c0 = 0;
  do {
    auStack_8b0[lVar6] = 0;
    *(undefined8 *)(auStack_8a4 + lVar6) = 0x100000000;
    *(undefined8 *)(auStack_8b0 + lVar6 + 4) = 1;
    *(undefined8 *)(auStack_89c + lVar6) = 0;
    *(undefined4 *)((long)&uStack_894 + lVar6) = 0;
    lVar6 = lVar6 + 0x20;
  } while (lVar6 != 0x100);
  uStack_798 = 0;
  uStack_7a0 = 0;
  uStack_7a8 = 0;
  uStack_7b0 = 0;
  uStack_788 = 0;
  uStack_790 = 0;
  uStack_778 = 0;
  uStack_780 = 0;
  uStack_768 = 0;
  uStack_770 = 0;
  uStack_758 = 0;
  uStack_760 = 0;
  uStack_748 = 0;
  uStack_750 = 0;
  uStack_740 = 0;
  uStack_738 = 0xffffffffffffffff;
  uStack_6a8 = 0;
  uStack_728 = 0;
  uStack_730 = 0;
  uStack_718 = 0;
  uStack_720 = 0;
  uStack_708 = 0;
  uStack_710 = 0;
  uStack_6f8 = 0;
  uStack_700 = 0;
  auStack_6f0[0] = 0;
  func_0x000109fc9df8(puVar2,lVar3,&uStack_bd0);
  FUN_109234a54(auStack_6f0);
  FUN_10925d5e8(puVar2 + 0xb2,lVar3,uVar4,uVar5);
  *puVar2 = &PTR_FUN_110ae7000;
  puVar2[0xb2] = &PTR_FUN_110ae7050;
  puVar2[0x2f3] = lVar3 + 0x930;
  puVar2[0x2f5] = 0;
  puVar2[0x2f4] = 0;
  puVar2[0x2f7] = 0;
  puVar2[0x2f6] = 0;
  puVar2[0x2f9] = 0;
  puVar2[0x2f8] = 0;
  puVar2[0x2fb] = 0;
  puVar2[0x2fa] = 0;
  puVar2[0x2fd] = 0;
  puVar2[0x2fc] = 0;
  puVar2[0x2ff] = 0;
  puVar2[0x2fe] = 0;
  return puVar2;
}



/* Entry: 1092697a0; end: 1092699fb;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_1092697a0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uStack_580;
  undefined8 auStack_578 [68];
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
  undefined4 uStack_2c8;
  undefined1 uStack_2c4;
  undefined5 uStack_2c0;
  undefined3 uStack_2bb;
  undefined5 uStack_2b8;
  undefined8 uStack_2b0;
  undefined4 uStack_2a8;
  undefined2 uStack_2a4;
  undefined2 uStack_2a0;
  undefined4 uStack_29c;
  undefined1 uStack_298;
  undefined8 uStack_294;
  undefined8 uStack_28c;
  undefined8 uStack_284;
  undefined8 uStack_27c;
  undefined4 uStack_274;
  undefined8 uStack_270;
  undefined4 uStack_268;
  undefined1 auStack_260 [4];
  undefined1 auStack_25c [8];
  undefined1 auStack_254 [8];
  undefined1 auStack_24c [8];
  undefined4 uStack_244;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
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
  undefined4 uStack_150;
  undefined4 uStack_148;
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
  undefined1 auStack_a0 [72];
  undefined1 uStack_58;
  
  uStack_580._0_4_ = 0;
  _bzero(auStack_578,0x220);
  lVar1 = 0x28;
  do {
    *(undefined8 *)((long)auStack_578 + lVar1 + 0x20U) = 0;
    *(undefined8 *)((long)auStack_578 + lVar1 + 0x18U) = 0xffffffff;
    *(undefined8 *)((long)auStack_578 + lVar1 + 0x30U) = 0;
    *(undefined8 *)((long)auStack_578 + lVar1 + 0x28U) = 0xffffffff;
    *(undefined8 *)((long)auStack_578 + lVar1) = 0;
    *(undefined8 *)((long)&uStack_580 + lVar1) = 0xffffffff;
    *(undefined8 *)((long)auStack_578 + lVar1 + 0x10U) = 0;
    *(undefined8 *)((long)auStack_578 + lVar1 + 8U) = 0xffffffff;
    lVar1 = lVar1 + 0x40;
  } while (lVar1 != 0x228);
  lVar1 = 0;
  uStack_358 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  uStack_2a8 = 1;
  uStack_29c = 7;
  uStack_328 = 0xffffffff;
  uStack_330 = 0x100000000;
  uStack_318 = 0xffffffff;
  uStack_320 = 0x100000000;
  uStack_348 = 0xffffffff;
  uStack_350 = 0x100000000;
  uStack_338 = 0xffffffff;
  uStack_340 = 0x100000000;
  uStack_2e8 = 0xffffffff;
  uStack_2f0 = 0x100000000;
  uStack_2d8 = 0xffffffff;
  uStack_2e0 = 0x100000000;
  uStack_308 = 0xffffffff;
  uStack_310 = 0x100000000;
  uStack_2f8 = 0xffffffff;
  uStack_300 = 0x100000000;
  uStack_2c8 = 0;
  uStack_2c4 = 0;
  uStack_2b0 = 0;
  uStack_2c0 = 0;
  uStack_2bb = 0;
  uStack_2a4 = 0;
  uStack_2a0 = 0;
  uStack_298 = 0;
  uStack_28c = 0x700000000;
  uStack_294 = 0;
  uStack_27c = 0;
  uStack_284 = 0;
  uStack_274 = 0;
  uStack_270 = 7;
  uStack_268 = 0;
  stack0xfffffffffffffda8 = 0;
  _auStack_260 = 0;
  stack0xfffffffffffffdb8 = 0;
  stack0xfffffffffffffdb0 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  do {
    auStack_260[lVar1] = 0;
    *(undefined8 *)(auStack_254 + lVar1) = 0x100000000;
    *(undefined8 *)(auStack_260 + lVar1 + 4) = 1;
    *(undefined8 *)(auStack_24c + lVar1) = 0;
    *(undefined4 *)((long)&uStack_244 + lVar1) = 0;
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x100);
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0xffffffffffffffff;
  uStack_58 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  auStack_a0[0] = 0;
  func_0x000109fc9df8(param_1,param_2,&uStack_580);
  FUN_109234a54(auStack_a0);
  FUN_10925d5e8(param_1 + 0xb2,param_2,param_3,param_4);
  *param_1 = &PTR_FUN_110ae7000;
  param_1[0xb2] = &PTR_FUN_110ae7050;
  param_1[0x2f3] = param_2 + 0x930;
  param_1[0x2f5] = 0;
  param_1[0x2f4] = 0;
  param_1[0x2f7] = 0;
  param_1[0x2f6] = 0;
  param_1[0x2f9] = 0;
  param_1[0x2f8] = 0;
  param_1[0x2fb] = 0;
  param_1[0x2fa] = 0;
  param_1[0x2fd] = 0;
  param_1[0x2fc] = 0;
  param_1[0x2ff] = 0;
  param_1[0x2fe] = 0;
  return param_1;
}



/* Entry: 1092699fc; end: 109269ad3;  */

void FUN_1092699fc(long param_1)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  FUN_10925e1ec(param_1 + 0x590);
  if (*(int *)(*(long *)(param_1 + 0x5a8) + 0x10) != 0) {
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_10924a188(&uStack_68,*(long *)(param_1 + 0x8d0),*(long *)(param_1 + 0x8d8),
                  *(long *)(param_1 + 0x8d8) - *(long *)(param_1 + 0x8d0) >> 7);
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    FUN_109269c38(&uStack_50,*(long *)(param_1 + 0x8b8),*(long *)(param_1 + 0x8c0),
                  *(long *)(param_1 + 0x8c0) - *(long *)(param_1 + 0x8b8) >> 5);
    FUN_109269ad4(param_1 + 0x558,&uStack_68);
    puStack_38 = &uStack_50;
    func_0x0001092349c8(&puStack_38);
    puStack_38 = &uStack_68;
    FUN_10922dc0c(&puStack_38);
  }
  return;
}



/* Entry: 109269ad4; end: 109269b8f;  */

undefined8 * FUN_109269ad4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 6) == '\x01') {
    func_0x00010923fd80(param_1);
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    FUN_10923fde4(param_1 + 3);
    uVar1 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar1;
    param_1[5] = param_2[5];
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar1 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar1;
    param_1[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    uVar1 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar1;
    param_1[5] = param_2[5];
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  return param_1;
}



/* Entry: 109269b90; end: 109269b97;  */

void FUN_109269b90(long param_1)

{
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  
  FUN_10925e1ec(param_1);
  if (*(int *)(*(long *)(param_1 + 0x18) + 0x10) != 0) {
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    FUN_10924a188(&uStack_68,*(long *)(param_1 + 0x340),*(long *)(param_1 + 0x348),
                  *(long *)(param_1 + 0x348) - *(long *)(param_1 + 0x340) >> 7);
    uStack_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    FUN_109269c38(&uStack_50,*(long *)(param_1 + 0x328),*(long *)(param_1 + 0x330),
                  *(long *)(param_1 + 0x330) - *(long *)(param_1 + 0x328) >> 5);
    FUN_109269ad4(param_1 + -0x38,&uStack_68);
    puStack_38 = &uStack_50;
    func_0x0001092349c8(&puStack_38);
    puStack_38 = &uStack_68;
    FUN_10922dc0c(&puStack_38);
  }
  return;
}



/* Entry: 109269b98; end: 109269bdf;  */

long FUN_109269b98(long param_1)

{
  if ((*(byte *)(param_1 + 0x8b0) & 1) == 0) {
    FUN_10925e060(param_1 + 0x590);
    (*(code *)**(undefined8 **)(param_1 + 0x590))(param_1 + 0x590);
    *(undefined1 *)(param_1 + 0x8b0) = 1;
  }
  return param_1 + 0x558;
}



/* Entry: 109269be0; end: 109269be3;  */

void FUN_109269be0(void)

{
  return;
}



/* Entry: 109269be4; end: 109269c37;  */

undefined8 * FUN_109269be4(undefined8 *param_1)

{
  FUN_10925da08(param_1 + 0xb2);
  *param_1 = &PTR_DAT_110b97e88;
  func_0x000109234978(param_1 + 0xab);
  FUN_109234a54(param_1 + 0xa1);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 109269c38; end: 109269cbb;  */

void FUN_109269c38(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    FUN_1092415f8(param_1,param_4);
    lVar1 = param_1;
    FUN_109241630(param_1,param_2,param_3,*(undefined8 *)(param_1 + 8));
    *(long *)(param_1 + 8) = lVar1;
  }
  return;
}



/* Entry: 109269cbc; end: 109269d97;  */

void FUN_109269cbc(undefined8 *param_1,long param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  __ZNSt3__15mutex4lockEv();
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if (*(long *)(param_3 + 0x420) != 0) {
    uVar3 = 0;
    uVar4 = 1;
    do {
      lVar2 = param_2 + 0x40;
      FUN_109269d98(lVar2,param_3 + 800 + uVar3 * 0x20);
      param_1[uVar3] = lVar2;
      bVar1 = uVar4 < *(ulong *)(param_3 + 0x420);
      uVar3 = uVar4;
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (bVar1);
  }
  lVar2 = param_2 + 0x70;
  func_0x000109269e10(lVar2,param_3 + 0x2e0);
  param_1[8] = lVar2;
  lVar2 = param_2 + 0xa0;
  func_0x000109269e88(lVar2,param_3 + 0x2d8);
  param_1[10] = lVar2;
  lVar2 = param_2 + 0xd0;
  func_0x000109269f00(lVar2,param_3 + 700);
  param_1[9] = lVar2;
  lVar2 = param_2 + 0x100;
  func_0x000109269f78(lVar2,param_3 + 0x2b8);
  param_1[0xb] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_2);
  return;
}



/* Entry: 109269d98; end: 109269fef;  */

long FUN_109269d98(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 uStack_39;
  undefined8 uStack_38;
  
  lVar1 = param_1;
  FUN_109269ff0();
  if (lVar1 == 0) {
    plVar2 = (long *)(param_1 + 0x28);
    lVar1 = *plVar2;
    *plVar2 = lVar1 + 1;
    uStack_38 = param_2;
    FUN_10926a204(param_1,param_2,&UNK_10dd5b8f9,&uStack_38,&uStack_39);
    *(long *)(param_1 + 0x30) = lVar1 + 1;
  }
  else {
    plVar2 = (long *)(lVar1 + 0x30);
  }
  return *plVar2;
}



/* Entry: 109269ff0; end: 10926a0cb;  */

long FUN_109269ff0(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar2 = param_2;
  FUN_10926a0cc();
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar6 = uVar5 - 1;
    if ((uVar5 & uVar6) == 0) {
      uVar7 = uVar6 & uVar2;
    }
    else {
      uVar7 = uVar2;
      if (uVar5 <= uVar2) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar2 / uVar5;
        }
        uVar7 = uVar2 - uVar7 * uVar5;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar4 = plVar3[1];
        if (uVar4 == uVar2) {
          uVar4 = (ulong)(plVar3 + 2);
          func_0x00010926a1b4(uVar4,param_2);
          if ((uVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if ((uVar5 & uVar6) == 0) {
            uVar4 = uVar4 & uVar6;
          }
          else if (uVar5 <= uVar4) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar4 / uVar5;
            }
            uVar4 = uVar4 - uVar1 * uVar5;
          }
          if (uVar4 != uVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10926a0cc; end: 10926a0ff;  */

void FUN_10926a0cc(long param_1)

{
  FUN_10926a100(param_1,param_1 + 4,param_1 + 8,param_1 + 0xc,param_1 + 0x10,param_1 + 0x14,
                param_1 + 0x18,param_1 + 0x1c);
  return;
}



/* Entry: 10926a100; end: 10926a203;  */

ulong FUN_10926a100(byte *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5,
                   uint *param_6,uint *param_7,uint *param_8)

{
  ulong uVar1;
  
  uVar1 = (ulong)*param_2 + ((ulong)*param_1 + 0x9e3779b97f4a7c15) * 0x40 + 0xc5c55827df1d1b1a ^
          (ulong)*param_1 + 0x9e3779b97f4a7c15;
  uVar1 = (ulong)*param_3 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_4 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_5 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_6 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_7 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  return (ulong)*param_8 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
}



/* Entry: 10926a204; end: 10926a5db;  */

undefined1  [16] FUN_10926a204(long *param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong unaff_x25;
  ulong uVar16;
  long lVar17;
  undefined1 auVar18 [16];
  
  uVar10 = param_2;
  FUN_10926a0cc();
  uVar15 = param_1[1];
  if (uVar15 != 0) {
    uVar16 = uVar15 - 1;
    if ((uVar15 & uVar16) == 0) {
      unaff_x25 = uVar16 & uVar10;
    }
    else {
      unaff_x25 = uVar10;
      if (uVar15 <= uVar10) {
        uVar7 = 0;
        if (uVar15 != 0) {
          uVar7 = uVar10 / uVar15;
        }
        unaff_x25 = uVar10 - uVar7 * uVar15;
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + unaff_x25 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar14 = (long *)*puVar6; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
        uVar7 = plVar14[1];
        if (uVar7 == uVar10) {
          plVar8 = plVar14 + 2;
          func_0x00010926a1b4(plVar8,param_2);
          if (((ulong)plVar8 & 1) != 0) {
            uVar5 = 0;
            goto LAB_10926a560;
          }
        }
        else {
          if ((uVar15 & uVar16) == 0) {
            uVar7 = uVar7 & uVar16;
          }
          else if (uVar15 <= uVar7) {
            uVar9 = 0;
            if (uVar15 != 0) {
              uVar9 = uVar7 / uVar15;
            }
            uVar7 = uVar7 - uVar9 * uVar15;
          }
          if (uVar7 != unaff_x25) break;
        }
      }
    }
  }
  plVar14 = (long *)0x38;
  __Znwm();
  *plVar14 = 0;
  plVar14[1] = uVar10;
  plVar8 = (long *)*param_4;
  lVar3 = *plVar8;
  lVar17 = plVar8[3];
  lVar4 = plVar8[2];
  plVar14[3] = plVar8[1];
  plVar14[2] = lVar3;
  plVar14[5] = lVar17;
  plVar14[4] = lVar4;
  plVar14[6] = 0;
  if ((uVar15 == 0) || (*(float *)(param_1 + 4) * (float)uVar15 < (float)(param_1[3] + 1))) {
    uVar16 = 1;
    if (2 < uVar15) {
      uVar16 = (ulong)((uVar15 & uVar15 - 1) != 0);
    }
    uVar16 = uVar16 | uVar15 << 1;
    uVar15 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar16 <= uVar15) {
      uVar16 = uVar15;
    }
    if (uVar16 - 1 == 0) {
      uVar16 = 2;
    }
    else if ((uVar16 & uVar16 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    uVar15 = param_1[1];
    if (uVar15 < uVar16) {
LAB_10926a370:
      if (uVar16 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10926a5c8);
        (*pcVar2)();
      }
      lVar3 = uVar16 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar15 = 0;
      param_1[1] = uVar16;
      do {
        *(undefined8 *)(*param_1 + uVar15 * 8) = 0;
        uVar15 = uVar15 + 1;
      } while (uVar16 != uVar15);
      plVar8 = (long *)param_1[2];
      uVar15 = uVar16;
      if (plVar8 != (long *)0x0) {
        uVar7 = plVar8[1];
        uVar9 = uVar16 - 1;
        if ((uVar16 & uVar9) == 0) {
          uVar7 = uVar7 & uVar9;
        }
        else if (uVar16 <= uVar7) {
          uVar13 = 0;
          if (uVar16 != 0) {
            uVar13 = uVar7 / uVar16;
          }
          uVar7 = uVar7 - uVar13 * uVar16;
        }
        *(long **)(*param_1 + uVar7 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar8;
        while (plVar11 != (long *)0x0) {
          uVar13 = plVar11[1];
          if ((uVar16 & uVar9) == 0) {
            uVar13 = uVar13 & uVar9;
          }
          else if (uVar16 <= uVar13) {
            uVar1 = 0;
            if (uVar16 != 0) {
              uVar1 = uVar13 / uVar16;
            }
            uVar13 = uVar13 - uVar1 * uVar16;
          }
          plVar12 = plVar11;
          if (uVar13 != uVar7) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar13 * 8) == 0) {
              *(long **)(lVar3 + uVar13 * 8) = plVar8;
              uVar7 = uVar13;
            }
            else {
              *plVar8 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar3 + uVar13 * 8);
              **(long **)(lVar3 + uVar13 * 8) = (long)plVar11;
              plVar12 = plVar8;
            }
          }
          plVar8 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    else if (uVar16 < uVar15) {
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar15 < 3) || ((uVar15 & uVar15 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar7) {
        uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
      }
      if (uVar16 <= uVar7) {
        uVar16 = uVar7;
      }
      if (uVar16 < uVar15) {
        if (uVar16 != 0) goto LAB_10926a370;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar15 = 0;
      }
      else {
        uVar15 = param_1[1];
      }
    }
    if ((uVar15 & uVar15 - 1) == 0) {
      unaff_x25 = uVar15 - 1 & uVar10;
    }
    else {
      unaff_x25 = uVar10;
      if (uVar15 <= uVar10) {
        uVar16 = 0;
        if (uVar15 != 0) {
          uVar16 = uVar10 / uVar15;
        }
        unaff_x25 = uVar10 - uVar16 * uVar15;
      }
    }
  }
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar14 = *plVar8;
    *plVar8 = (long)plVar14;
    *(long **)(lVar3 + unaff_x25 * 8) = plVar8;
    if (*plVar14 == 0) goto LAB_10926a550;
    uVar10 = *(ulong *)(*plVar14 + 8);
    if ((uVar15 & uVar15 - 1) == 0) {
      uVar10 = uVar10 & uVar15 - 1;
    }
    else if (uVar15 <= uVar10) {
      uVar16 = 0;
      if (uVar15 != 0) {
        uVar16 = uVar10 / uVar15;
      }
      uVar10 = uVar10 - uVar16 * uVar15;
    }
    plVar8 = (long *)(*param_1 + uVar10 * 8);
  }
  else {
    *plVar14 = *plVar8;
  }
  *plVar8 = (long)plVar14;
LAB_10926a550:
  param_1[3] = param_1[3] + 1;
  uVar5 = 1;
LAB_10926a560:
  auVar18._8_8_ = uVar5;
  auVar18._0_8_ = plVar14;
  return auVar18;
}



/* Entry: 10926a5dc; end: 10926a6b3;  */

long FUN_10926a5dc(long *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  plVar1 = param_1;
  FUN_10926a6b4();
  plVar5 = (long *)param_1[1];
  if (plVar5 != (long *)0x0) {
    uVar6 = (long)plVar5 - 1;
    if (((ulong)plVar5 & uVar6) == 0) {
      plVar7 = (long *)(uVar6 & (ulong)plVar1);
    }
    else {
      plVar7 = plVar1;
      if (plVar5 <= plVar1) {
        uVar2 = 0;
        if (plVar5 != (long *)0x0) {
          uVar2 = (ulong)plVar1 / (ulong)plVar5;
        }
        plVar7 = (long *)((long)plVar1 - uVar2 * (long)plVar5);
      }
    }
    plVar3 = *(long **)(*param_1 + (long)plVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        plVar4 = (long *)plVar3[1];
        if (plVar4 == plVar1) {
          uVar2 = (ulong)(plVar3 + 2);
          FUN_10926a840(uVar2,param_2);
          if ((uVar2 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if (((ulong)plVar5 & uVar6) == 0) {
            plVar4 = (long *)((ulong)plVar4 & uVar6);
          }
          else if (plVar5 <= plVar4) {
            uVar2 = 0;
            if (plVar5 != (long *)0x0) {
              uVar2 = (ulong)plVar4 / (ulong)plVar5;
            }
            plVar4 = (long *)((long)plVar4 - uVar2 * (long)plVar5);
          }
          if (plVar4 != plVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10926a6b4; end: 10926a733;  */

void FUN_10926a6b4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_2 + 0xc;
  func_0x00010926a7c0(lVar1,param_2 + 0x10,param_2 + 0x14,param_2 + 0x18,param_2 + 0x1c,
                      param_2 + 0x20);
  lVar2 = param_2 + 0x24;
  lStack_28 = lVar1;
  func_0x00010926a7c0(lVar2,param_2 + 0x28,param_2 + 0x2c,param_2 + 0x30,param_2 + 0x34,
                      param_2 + 0x38);
  lStack_30 = lVar2;
  func_0x00010926a734(param_2,param_2 + 1,param_2 + 4,param_2 + 8,&lStack_28,&lStack_30);
  return;
}



/* Entry: 10926a734; end: 10926a83f;  */

ulong FUN_10926a734(byte *param_1,byte *param_2,uint *param_3,byte *param_4,long *param_5,
                   long *param_6)

{
  ulong uVar1;
  
  uVar1 = ((ulong)*param_2 | ((ulong)*param_1 + 0x9e3779b97f4a7c15) * 0x40) + 0xc5c55827df1d1b1a ^
          (ulong)*param_1 + 0x9e3779b97f4a7c15;
  uVar1 = (ulong)*param_3 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = ((ulong)*param_4 | uVar1 << 6) + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = *param_5 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  return *param_6 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
}



/* Entry: 10926a840; end: 10926a8c7;  */

bool FUN_10926a840(char *param_1,char *param_2)

{
  char *pcVar1;
  
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) &&
      (*(int *)(param_1 + 4) == *(int *)(param_2 + 4))) && (param_1[8] == param_2[8])) {
    pcVar1 = param_1 + 0xc;
    FUN_10926a8c8(pcVar1,param_2 + 0xc);
    if ((int)pcVar1 != 0) {
      return (*(long *)(param_1 + 0x24) == *(long *)(param_2 + 0x24) &&
             *(long *)(param_1 + 0x2c) == *(long *)(param_2 + 0x2c)) &&
             *(long *)(param_1 + 0x34) == *(long *)(param_2 + 0x34);
    }
  }
  return false;
}



/* Entry: 10926a8c8; end: 10926a8eb;  */

bool FUN_10926a8c8(long *param_1,long *param_2)

{
  return (*param_1 == *param_2 && param_1[1] == param_2[1]) && param_1[2] == param_2[2];
}



/* Entry: 10926a8ec; end: 10926accf;  */

undefined1  [16]
FUN_10926a8ec(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *unaff_x25;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined1 auVar21 [16];
  
  plVar8 = param_1;
  FUN_10926a6b4();
  plVar15 = (long *)param_1[1];
  if (plVar15 != (long *)0x0) {
    uVar16 = (long)plVar15 - 1;
    if (((ulong)plVar15 & uVar16) == 0) {
      unaff_x25 = (long *)(uVar16 & (ulong)plVar8);
    }
    else {
      unaff_x25 = plVar8;
      if (plVar15 <= plVar8) {
        uVar1 = 0;
        if (plVar15 != (long *)0x0) {
          uVar1 = (ulong)plVar8 / (ulong)plVar15;
        }
        unaff_x25 = (long *)((long)plVar8 - uVar1 * (long)plVar15);
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + (long)unaff_x25 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar14 = (long *)*puVar6; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
        plVar7 = (long *)plVar14[1];
        if (plVar7 == plVar8) {
          plVar7 = plVar14 + 2;
          FUN_10926a840(plVar7,param_2);
          if (((ulong)plVar7 & 1) != 0) {
            uVar5 = 0;
            goto LAB_10926ac54;
          }
        }
        else {
          if (((ulong)plVar15 & uVar16) == 0) {
            plVar7 = (long *)((ulong)plVar7 & uVar16);
          }
          else if (plVar15 <= plVar7) {
            uVar1 = 0;
            if (plVar15 != (long *)0x0) {
              uVar1 = (ulong)plVar7 / (ulong)plVar15;
            }
            plVar7 = (long *)((long)plVar7 - uVar1 * (long)plVar15);
          }
          if (plVar7 != unaff_x25) break;
        }
      }
    }
  }
  plVar14 = (long *)0x58;
  __Znwm();
  *plVar14 = 0;
  plVar14[1] = (long)plVar8;
  plVar7 = (long *)*param_4;
  lVar20 = plVar7[3];
  lVar19 = plVar7[2];
  lVar4 = plVar7[5];
  lVar3 = plVar7[4];
  lVar18 = plVar7[1];
  lVar17 = *plVar7;
  uVar5 = *(undefined8 *)((long)plVar7 + 0x2c);
  *(undefined8 *)((long)plVar14 + 0x44) = *(undefined8 *)((long)plVar7 + 0x34);
  *(undefined8 *)((long)plVar14 + 0x3c) = uVar5;
  plVar14[5] = lVar20;
  plVar14[4] = lVar19;
  plVar14[7] = lVar4;
  plVar14[6] = lVar3;
  plVar14[3] = lVar18;
  plVar14[2] = lVar17;
  plVar14[10] = 0;
  if ((plVar15 == (long *)0x0) ||
     (*(float *)(param_1 + 4) * (float)plVar15 < (float)(param_1[3] + 1))) {
    uVar16 = 1;
    if ((long *)0x2 < plVar15) {
      uVar16 = (ulong)(((ulong)plVar15 & (long)plVar15 - 1U) != 0);
    }
    plVar7 = (long *)(uVar16 | (long)plVar15 << 1);
    plVar15 = (long *)(long)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (plVar7 <= plVar15) {
      plVar7 = plVar15;
    }
    if ((long)plVar7 - 1U == 0) {
      plVar7 = (long *)0x2;
    }
    else if (((ulong)plVar7 & (long)plVar7 - 1U) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    plVar15 = (long *)param_1[1];
    if (plVar15 < plVar7) {
LAB_10926aa64:
      if ((ulong)plVar7 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10926acbc);
        (*pcVar2)();
      }
      lVar3 = (long)plVar7 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      plVar15 = (long *)0x0;
      param_1[1] = (long)plVar7;
      do {
        *(undefined8 *)(*param_1 + (long)plVar15 * 8) = 0;
        plVar15 = (long *)((long)plVar15 + 1);
      } while (plVar7 != plVar15);
      plVar9 = (long *)param_1[2];
      plVar15 = plVar7;
      if (plVar9 != (long *)0x0) {
        plVar10 = (long *)plVar9[1];
        uVar16 = (long)plVar7 - 1;
        if (((ulong)plVar7 & uVar16) == 0) {
          plVar10 = (long *)((ulong)plVar10 & uVar16);
        }
        else if (plVar7 <= plVar10) {
          uVar1 = 0;
          if (plVar7 != (long *)0x0) {
            uVar1 = (ulong)plVar10 / (ulong)plVar7;
          }
          plVar10 = (long *)((long)plVar10 - uVar1 * (long)plVar7);
        }
        *(long **)(*param_1 + (long)plVar10 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar9;
        while (plVar11 != (long *)0x0) {
          plVar13 = (long *)plVar11[1];
          if (((ulong)plVar7 & uVar16) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar16);
          }
          else if (plVar7 <= plVar13) {
            uVar1 = 0;
            if (plVar7 != (long *)0x0) {
              uVar1 = (ulong)plVar13 / (ulong)plVar7;
            }
            plVar13 = (long *)((long)plVar13 - uVar1 * (long)plVar7);
          }
          plVar12 = plVar11;
          if (plVar13 != plVar10) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + (long)plVar13 * 8) == 0) {
              *(long **)(lVar3 + (long)plVar13 * 8) = plVar9;
              plVar10 = plVar13;
            }
            else {
              *plVar9 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar3 + (long)plVar13 * 8);
              **(long **)(lVar3 + (long)plVar13 * 8) = (long)plVar11;
              plVar12 = plVar9;
            }
          }
          plVar9 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    else if (plVar7 < plVar15) {
      plVar9 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((plVar15 < (long *)0x3) || (((ulong)plVar15 & (long)plVar15 - 1U) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if ((long *)0x1 < plVar9) {
        plVar9 = (long *)(1L << (-LZCOUNT((long)plVar9 + -1) & 0x3fU));
      }
      if (plVar7 <= plVar9) {
        plVar7 = plVar9;
      }
      if (plVar7 < plVar15) {
        if (plVar7 != (long *)0x0) goto LAB_10926aa64;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        plVar15 = (long *)0x0;
      }
      else {
        plVar15 = (long *)param_1[1];
      }
    }
    if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar15 - 1U & (ulong)plVar8);
    }
    else {
      unaff_x25 = plVar8;
      if (plVar15 <= plVar8) {
        uVar16 = 0;
        if (plVar15 != (long *)0x0) {
          uVar16 = (ulong)plVar8 / (ulong)plVar15;
        }
        unaff_x25 = (long *)((long)plVar8 - uVar16 * (long)plVar15);
      }
    }
  }
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + (long)unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar14 = *plVar8;
    *plVar8 = (long)plVar14;
    *(long **)(lVar3 + (long)unaff_x25 * 8) = plVar8;
    if (*plVar14 == 0) goto LAB_10926ac44;
    plVar8 = *(long **)(*plVar14 + 8);
    if (((ulong)plVar15 & (long)plVar15 - 1U) == 0) {
      plVar8 = (long *)((ulong)plVar8 & (long)plVar15 - 1U);
    }
    else if (plVar15 <= plVar8) {
      uVar16 = 0;
      if (plVar15 != (long *)0x0) {
        uVar16 = (ulong)plVar8 / (ulong)plVar15;
      }
      plVar8 = (long *)((long)plVar8 - uVar16 * (long)plVar15);
    }
    plVar8 = (long *)(*param_1 + (long)plVar8 * 8);
  }
  else {
    *plVar14 = *plVar8;
  }
  *plVar8 = (long)plVar14;
LAB_10926ac44:
  param_1[3] = param_1[3] + 1;
  uVar5 = 1;
LAB_10926ac54:
  auVar21._8_8_ = uVar5;
  auVar21._0_8_ = plVar14;
  return auVar21;
}



/* Entry: 10926acd0; end: 10926adc3;  */

long * FUN_10926acd0(long *param_1,uint *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = (ulong)*param_2 + 0x9e3779b97f4a7c15;
    uVar3 = ((ulong)(byte)param_2[1] | uVar3 * 0x40) + (uVar3 >> 2) + 0x9e3779b97f4a7c15 ^ uVar3;
    uVar3 = ((ulong)*(byte *)((long)param_2 + 5) | uVar3 << 6) + (uVar3 >> 2) + 0x9e3779b97f4a7c15 ^
            uVar3;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar3 & uVar4;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (((*(uint *)(plVar6 + 2) == *param_2) &&
              (*(byte *)((long)plVar6 + 0x14) == (byte)param_2[1])) &&
             (*(byte *)((long)plVar6 + 0x15) == *(byte *)((long)param_2 + 5))) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10926adc4; end: 10926b1d3;  */

undefined1  [16] FUN_10926adc4(long *param_1,uint *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  ulong uVar16;
  ulong unaff_x24;
  undefined1 auVar17 [16];
  
  uVar11 = (ulong)*param_2 + 0x9e3779b97f4a7c15;
  uVar11 = ((ulong)(byte)param_2[1] | uVar11 * 0x40) + (uVar11 >> 2) + 0x9e3779b97f4a7c15 ^ uVar11;
  uVar11 = ((ulong)*(byte *)((long)param_2 + 5) | uVar11 << 6) + (uVar11 >> 2) + 0x9e3779b97f4a7c15
           ^ uVar11;
  uVar16 = param_1[1];
  if (uVar16 != 0) {
    uVar8 = uVar16 - 1;
    if ((uVar16 & uVar8) == 0) {
      unaff_x24 = uVar11 & uVar8;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar16 <= uVar11) {
        uVar13 = 0;
        if (uVar16 != 0) {
          uVar13 = uVar11 / uVar16;
        }
        unaff_x24 = uVar11 - uVar13 * uVar16;
      }
    }
    puVar12 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar12 != (undefined8 *)0x0) {
      for (plVar15 = (long *)*puVar12; plVar15 != (long *)0x0; plVar15 = (long *)*plVar15) {
        uVar13 = plVar15[1];
        if (uVar13 == uVar11) {
          if (((*(uint *)(plVar15 + 2) == *param_2) &&
              (*(byte *)((long)plVar15 + 0x14) == (byte)param_2[1])) &&
             (*(byte *)((long)plVar15 + 0x15) == *(byte *)((long)param_2 + 5))) {
            uVar5 = 0;
            goto LAB_10926b15c;
          }
        }
        else {
          if ((uVar16 & uVar8) == 0) {
            uVar13 = uVar13 & uVar8;
          }
          else if (uVar16 <= uVar13) {
            uVar6 = 0;
            if (uVar16 != 0) {
              uVar6 = uVar13 / uVar16;
            }
            uVar13 = uVar13 - uVar6 * uVar16;
          }
          if (uVar13 != unaff_x24) break;
        }
      }
    }
  }
  plVar15 = (long *)0x20;
  __Znwm();
  *plVar15 = 0;
  plVar15[1] = uVar11;
  plVar15[2] = *(long *)*param_4;
  plVar15[3] = 0;
  if ((uVar16 == 0) || (*(float *)(param_1 + 4) * (float)uVar16 < (float)(param_1[3] + 1))) {
    uVar8 = 1;
    if (2 < uVar16) {
      uVar8 = (ulong)((uVar16 & uVar16 - 1) != 0);
    }
    uVar8 = uVar8 | uVar16 << 1;
    uVar13 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar8 <= uVar13) {
      uVar8 = uVar13;
    }
    if (uVar8 - 1 == 0) {
      uVar8 = 2;
    }
    else if ((uVar8 & uVar8 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar16 = param_1[1];
    }
    if (uVar16 < uVar8) {
LAB_10926af6c:
      if (uVar8 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10926b1c0);
        (*pcVar2)();
      }
      lVar3 = uVar8 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar16 = 0;
      param_1[1] = uVar8;
      do {
        *(undefined8 *)(*param_1 + uVar16 * 8) = 0;
        uVar16 = uVar16 + 1;
      } while (uVar8 != uVar16);
      plVar7 = (long *)param_1[2];
      uVar16 = uVar8;
      if (plVar7 != (long *)0x0) {
        uVar13 = plVar7[1];
        uVar6 = uVar8 - 1;
        if ((uVar8 & uVar6) == 0) {
          uVar13 = uVar13 & uVar6;
        }
        else if (uVar8 <= uVar13) {
          uVar14 = 0;
          if (uVar8 != 0) {
            uVar14 = uVar13 / uVar8;
          }
          uVar13 = uVar13 - uVar14 * uVar8;
        }
        *(long **)(*param_1 + uVar13 * 8) = param_1 + 2;
        plVar9 = (long *)*plVar7;
        while (plVar9 != (long *)0x0) {
          uVar14 = plVar9[1];
          if ((uVar8 & uVar6) == 0) {
            uVar14 = uVar14 & uVar6;
          }
          else if (uVar8 <= uVar14) {
            uVar1 = 0;
            if (uVar8 != 0) {
              uVar1 = uVar14 / uVar8;
            }
            uVar14 = uVar14 - uVar1 * uVar8;
          }
          plVar10 = plVar9;
          if (uVar14 != uVar13) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar14 * 8) == 0) {
              *(long **)(lVar3 + uVar14 * 8) = plVar7;
              uVar13 = uVar14;
            }
            else {
              *plVar7 = *plVar9;
              *plVar9 = **(undefined8 **)(lVar3 + uVar14 * 8);
              **(long **)(lVar3 + uVar14 * 8) = (long)plVar9;
              plVar10 = plVar7;
            }
          }
          plVar7 = plVar10;
          plVar9 = (long *)*plVar10;
        }
      }
    }
    else if (uVar8 < uVar16) {
      uVar13 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar13) {
        uVar13 = 1L << (-LZCOUNT(uVar13 - 1) & 0x3fU);
      }
      if (uVar8 <= uVar13) {
        uVar8 = uVar13;
      }
      if (uVar8 < uVar16) {
        if (uVar8 != 0) goto LAB_10926af6c;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar16 = 0;
      }
      else {
        uVar16 = param_1[1];
      }
    }
    if ((uVar16 & uVar16 - 1) == 0) {
      unaff_x24 = uVar16 - 1 & uVar11;
    }
    else {
      unaff_x24 = uVar11;
      if (uVar16 <= uVar11) {
        uVar8 = 0;
        if (uVar16 != 0) {
          uVar8 = uVar11 / uVar16;
        }
        unaff_x24 = uVar11 - uVar8 * uVar16;
      }
    }
  }
  lVar3 = *param_1;
  plVar7 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar7 == (long *)0x0) {
    plVar7 = param_1 + 2;
    *plVar15 = *plVar7;
    *plVar7 = (long)plVar15;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar7;
    if (*plVar15 == 0) goto LAB_10926b14c;
    uVar11 = *(ulong *)(*plVar15 + 8);
    if ((uVar16 & uVar16 - 1) == 0) {
      uVar11 = uVar11 & uVar16 - 1;
    }
    else if (uVar16 <= uVar11) {
      uVar8 = 0;
      if (uVar16 != 0) {
        uVar8 = uVar11 / uVar16;
      }
      uVar11 = uVar11 - uVar8 * uVar16;
    }
    plVar7 = (long *)(*param_1 + uVar11 * 8);
  }
  else {
    *plVar15 = *plVar7;
  }
  *plVar7 = (long)plVar15;
LAB_10926b14c:
  param_1[3] = param_1[3] + 1;
  uVar5 = 1;
LAB_10926b15c:
  auVar17._8_8_ = uVar5;
  auVar17._0_8_ = plVar15;
  return auVar17;
}



/* Entry: 10926b1d4; end: 10926b2c7;  */

long FUN_10926b1d4(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar2 = param_2;
  FUN_10926b2c8(param_2,param_2 + 4,param_2 + 8,param_2 + 0xc,param_2 + 0x10,param_2 + 0x14,
                param_2 + 0x18);
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar6 = uVar5 - 1;
    if ((uVar5 & uVar6) == 0) {
      uVar7 = uVar6 & uVar2;
    }
    else {
      uVar7 = uVar2;
      if (uVar5 <= uVar2) {
        uVar7 = 0;
        if (uVar5 != 0) {
          uVar7 = uVar2 / uVar5;
        }
        uVar7 = uVar2 - uVar7 * uVar5;
      }
    }
    plVar3 = *(long **)(*param_1 + uVar7 * 8);
    if (plVar3 != (long *)0x0) {
      plVar3 = (long *)*plVar3;
      do {
        if (plVar3 == (long *)0x0) {
          return 0;
        }
        uVar4 = plVar3[1];
        if (uVar4 == uVar2) {
          uVar4 = (ulong)(plVar3 + 2);
          func_0x00010926b368(uVar4,param_2);
          if ((uVar4 & 1) != 0) {
            return (long)plVar3;
          }
        }
        else {
          if ((uVar5 & uVar6) == 0) {
            uVar4 = uVar4 & uVar6;
          }
          else if (uVar5 <= uVar4) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar4 / uVar5;
            }
            uVar4 = uVar4 - uVar1 * uVar5;
          }
          if (uVar4 != uVar7) {
            return 0;
          }
        }
        plVar3 = (long *)*plVar3;
      } while( true );
    }
  }
  return 0;
}



/* Entry: 10926b2c8; end: 10926b3af;  */

ulong FUN_10926b2c8(byte *param_1,uint *param_2,uint *param_3,uint *param_4,byte *param_5,
                   uint *param_6,uint *param_7)

{
  ulong uVar1;
  
  uVar1 = (ulong)*param_2 + ((ulong)*param_1 + 0x9e3779b97f4a7c15) * 0x40 + 0xc5c55827df1d1b1a ^
          (ulong)*param_1 + 0x9e3779b97f4a7c15;
  uVar1 = (ulong)*param_3 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_4 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = ((ulong)*param_5 | uVar1 << 6) + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  uVar1 = (ulong)*param_6 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
  return (ulong)*param_7 + uVar1 * 0x40 + (uVar1 >> 2) + 0x9e3779b97f4a7c15 ^ uVar1;
}



/* Entry: 10926b3b0; end: 10926b7a7;  */

undefined1  [16] FUN_10926b3b0(long *param_1,ulong param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong unaff_x25;
  ulong uVar16;
  undefined1 auVar17 [16];
  
  uVar10 = param_2;
  FUN_10926b2c8(param_2,param_2 + 4,param_2 + 8,param_2 + 0xc,param_2 + 0x10,param_2 + 0x14,
                param_2 + 0x18);
  uVar15 = param_1[1];
  if (uVar15 != 0) {
    uVar16 = uVar15 - 1;
    if ((uVar15 & uVar16) == 0) {
      unaff_x25 = uVar16 & uVar10;
    }
    else {
      unaff_x25 = uVar10;
      if (uVar15 <= uVar10) {
        uVar7 = 0;
        if (uVar15 != 0) {
          uVar7 = uVar10 / uVar15;
        }
        unaff_x25 = uVar10 - uVar7 * uVar15;
      }
    }
    puVar6 = *(undefined8 **)(*param_1 + unaff_x25 * 8);
    if (puVar6 != (undefined8 *)0x0) {
      for (plVar14 = (long *)*puVar6; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
        uVar7 = plVar14[1];
        if (uVar7 == uVar10) {
          plVar8 = plVar14 + 2;
          func_0x00010926b368(plVar8,param_2);
          if (((ulong)plVar8 & 1) != 0) {
            uVar5 = 0;
            goto LAB_10926b72c;
          }
        }
        else {
          if ((uVar15 & uVar16) == 0) {
            uVar7 = uVar7 & uVar16;
          }
          else if (uVar15 <= uVar7) {
            uVar9 = 0;
            if (uVar15 != 0) {
              uVar9 = uVar7 / uVar15;
            }
            uVar7 = uVar7 - uVar9 * uVar15;
          }
          if (uVar7 != unaff_x25) break;
        }
      }
    }
  }
  plVar14 = (long *)0x38;
  __Znwm();
  *plVar14 = 0;
  plVar14[1] = uVar10;
  plVar8 = (long *)*param_4;
  lVar4 = plVar8[1];
  lVar3 = *plVar8;
  uVar5 = *(undefined8 *)((long)plVar8 + 0xc);
  *(undefined8 *)((long)plVar14 + 0x24) = *(undefined8 *)((long)plVar8 + 0x14);
  *(undefined8 *)((long)plVar14 + 0x1c) = uVar5;
  plVar14[3] = lVar4;
  plVar14[2] = lVar3;
  plVar14[6] = 0;
  if ((uVar15 == 0) || (*(float *)(param_1 + 4) * (float)uVar15 < (float)(param_1[3] + 1))) {
    uVar16 = 1;
    if (2 < uVar15) {
      uVar16 = (ulong)((uVar15 & uVar15 - 1) != 0);
    }
    uVar16 = uVar16 | uVar15 << 1;
    uVar15 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar16 <= uVar15) {
      uVar16 = uVar15;
    }
    if (uVar16 - 1 == 0) {
      uVar16 = 2;
    }
    else if ((uVar16 & uVar16 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
    }
    uVar15 = param_1[1];
    if (uVar15 < uVar16) {
LAB_10926b53c:
      if (uVar16 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10926b794);
        (*pcVar2)();
      }
      lVar3 = uVar16 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar15 = 0;
      param_1[1] = uVar16;
      do {
        *(undefined8 *)(*param_1 + uVar15 * 8) = 0;
        uVar15 = uVar15 + 1;
      } while (uVar16 != uVar15);
      plVar8 = (long *)param_1[2];
      uVar15 = uVar16;
      if (plVar8 != (long *)0x0) {
        uVar7 = plVar8[1];
        uVar9 = uVar16 - 1;
        if ((uVar16 & uVar9) == 0) {
          uVar7 = uVar7 & uVar9;
        }
        else if (uVar16 <= uVar7) {
          uVar13 = 0;
          if (uVar16 != 0) {
            uVar13 = uVar7 / uVar16;
          }
          uVar7 = uVar7 - uVar13 * uVar16;
        }
        *(long **)(*param_1 + uVar7 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar8;
        while (plVar11 != (long *)0x0) {
          uVar13 = plVar11[1];
          if ((uVar16 & uVar9) == 0) {
            uVar13 = uVar13 & uVar9;
          }
          else if (uVar16 <= uVar13) {
            uVar1 = 0;
            if (uVar16 != 0) {
              uVar1 = uVar13 / uVar16;
            }
            uVar13 = uVar13 - uVar1 * uVar16;
          }
          plVar12 = plVar11;
          if (uVar13 != uVar7) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar13 * 8) == 0) {
              *(long **)(lVar3 + uVar13 * 8) = plVar8;
              uVar7 = uVar13;
            }
            else {
              *plVar8 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar3 + uVar13 * 8);
              **(long **)(lVar3 + uVar13 * 8) = (long)plVar11;
              plVar12 = plVar8;
            }
          }
          plVar8 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    else if (uVar16 < uVar15) {
      uVar7 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar15 < 3) || ((uVar15 & uVar15 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar7) {
        uVar7 = 1L << (-LZCOUNT(uVar7 - 1) & 0x3fU);
      }
      if (uVar16 <= uVar7) {
        uVar16 = uVar7;
      }
      if (uVar16 < uVar15) {
        if (uVar16 != 0) goto LAB_10926b53c;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar15 = 0;
      }
      else {
        uVar15 = param_1[1];
      }
    }
    if ((uVar15 & uVar15 - 1) == 0) {
      unaff_x25 = uVar15 - 1 & uVar10;
    }
    else {
      unaff_x25 = uVar10;
      if (uVar15 <= uVar10) {
        uVar16 = 0;
        if (uVar15 != 0) {
          uVar16 = uVar10 / uVar15;
        }
        unaff_x25 = uVar10 - uVar16 * uVar15;
      }
    }
  }
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + unaff_x25 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar14 = *plVar8;
    *plVar8 = (long)plVar14;
    *(long **)(lVar3 + unaff_x25 * 8) = plVar8;
    if (*plVar14 == 0) goto LAB_10926b71c;
    uVar10 = *(ulong *)(*plVar14 + 8);
    if ((uVar15 & uVar15 - 1) == 0) {
      uVar10 = uVar10 & uVar15 - 1;
    }
    else if (uVar15 <= uVar10) {
      uVar16 = 0;
      if (uVar15 != 0) {
        uVar16 = uVar10 / uVar15;
      }
      uVar10 = uVar10 - uVar16 * uVar15;
    }
    plVar8 = (long *)(*param_1 + uVar10 * 8);
  }
  else {
    *plVar14 = *plVar8;
  }
  *plVar8 = (long)plVar14;
LAB_10926b71c:
  param_1[3] = param_1[3] + 1;
  uVar5 = 1;
LAB_10926b72c:
  auVar17._8_8_ = uVar5;
  auVar17._0_8_ = plVar14;
  return auVar17;
}



/* Entry: 10926b7a8; end: 10926b86f;  */

long * FUN_10926b7a8(long *param_1,uint *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    uVar3 = (ulong)*param_2 + 0x53a3c687b1bc205a ^ 0x9e3779b97f4a7c15;
    uVar4 = uVar2 - 1;
    if ((uVar2 & uVar4) == 0) {
      uVar5 = uVar3 & uVar4;
    }
    else {
      uVar5 = uVar3;
      if (uVar2 <= uVar3) {
        uVar5 = 0;
        if (uVar2 != 0) {
          uVar5 = uVar3 / uVar2;
        }
        uVar5 = uVar3 - uVar5 * uVar2;
      }
    }
    plVar6 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar6 != (long *)0x0) {
      plVar6 = (long *)*plVar6;
      do {
        if (plVar6 == (long *)0x0) {
          return (long *)0x0;
        }
        uVar7 = plVar6[1];
        if (uVar7 == uVar3) {
          if (*(uint *)(plVar6 + 2) == *param_2) {
            return plVar6;
          }
        }
        else {
          if ((uVar2 & uVar4) == 0) {
            uVar7 = uVar7 & uVar4;
          }
          else if (uVar2 <= uVar7) {
            uVar1 = 0;
            if (uVar2 != 0) {
              uVar1 = uVar7 / uVar2;
            }
            uVar7 = uVar7 - uVar1 * uVar2;
          }
          if (uVar7 != uVar5) {
            return (long *)0x0;
          }
        }
        plVar6 = (long *)*plVar6;
      } while( true );
    }
  }
  return (long *)0x0;
}



/* Entry: 10926b870; end: 10926bc57;  */

undefined1  [16] FUN_10926b870(long *param_1,uint *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_x24;
  undefined1 auVar17 [16];
  
  uVar15 = (ulong)*param_2 + 0x53a3c687b1bc205a ^ 0x9e3779b97f4a7c15;
  uVar16 = param_1[1];
  if (uVar16 != 0) {
    uVar7 = uVar16 - 1;
    if ((uVar16 & uVar7) == 0) {
      unaff_x24 = uVar15 & uVar7;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar16 <= uVar15) {
        uVar10 = 0;
        if (uVar16 != 0) {
          uVar10 = uVar15 / uVar16;
        }
        unaff_x24 = uVar15 - uVar10 * uVar16;
      }
    }
    puVar9 = *(undefined8 **)(*param_1 + unaff_x24 * 8);
    if (puVar9 != (undefined8 *)0x0) {
      for (plVar14 = (long *)*puVar9; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
        uVar10 = plVar14[1];
        if (uVar10 == uVar15) {
          if (*(uint *)(plVar14 + 2) == *param_2) {
            uVar5 = 0;
            goto LAB_10926bbe0;
          }
        }
        else {
          if ((uVar16 & uVar7) == 0) {
            uVar10 = uVar10 & uVar7;
          }
          else if (uVar16 <= uVar10) {
            uVar6 = 0;
            if (uVar16 != 0) {
              uVar6 = uVar10 / uVar16;
            }
            uVar10 = uVar10 - uVar6 * uVar16;
          }
          if (uVar10 != unaff_x24) break;
        }
      }
    }
  }
  plVar14 = (long *)0x20;
  __Znwm();
  *plVar14 = 0;
  plVar14[1] = uVar15;
  *(undefined4 *)(plVar14 + 2) = *(undefined4 *)*param_4;
  plVar14[3] = 0;
  if ((uVar16 == 0) || (*(float *)(param_1 + 4) * (float)uVar16 < (float)(param_1[3] + 1))) {
    uVar7 = 1;
    if (2 < uVar16) {
      uVar7 = (ulong)((uVar16 & uVar16 - 1) != 0);
    }
    uVar7 = uVar7 | uVar16 << 1;
    uVar10 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar7 <= uVar10) {
      uVar7 = uVar10;
    }
    if (uVar7 - 1 == 0) {
      uVar7 = 2;
    }
    else if ((uVar7 & uVar7 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar16 = param_1[1];
    }
    if (uVar16 < uVar7) {
LAB_10926b9f0:
      if (uVar7 >> 0x3d != 0) {
        func_0x000104c4f740();
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10926bc44);
        (*pcVar2)();
      }
      lVar3 = uVar7 << 3;
      __Znwm();
      lVar4 = *param_1;
      *param_1 = lVar3;
      if (lVar4 != 0) {
        __ZdlPv();
      }
      uVar16 = 0;
      param_1[1] = uVar7;
      do {
        *(undefined8 *)(*param_1 + uVar16 * 8) = 0;
        uVar16 = uVar16 + 1;
      } while (uVar7 != uVar16);
      plVar8 = (long *)param_1[2];
      uVar16 = uVar7;
      if (plVar8 != (long *)0x0) {
        uVar10 = plVar8[1];
        uVar6 = uVar7 - 1;
        if ((uVar7 & uVar6) == 0) {
          uVar10 = uVar10 & uVar6;
        }
        else if (uVar7 <= uVar10) {
          uVar13 = 0;
          if (uVar7 != 0) {
            uVar13 = uVar10 / uVar7;
          }
          uVar10 = uVar10 - uVar13 * uVar7;
        }
        *(long **)(*param_1 + uVar10 * 8) = param_1 + 2;
        plVar11 = (long *)*plVar8;
        while (plVar11 != (long *)0x0) {
          uVar13 = plVar11[1];
          if ((uVar7 & uVar6) == 0) {
            uVar13 = uVar13 & uVar6;
          }
          else if (uVar7 <= uVar13) {
            uVar1 = 0;
            if (uVar7 != 0) {
              uVar1 = uVar13 / uVar7;
            }
            uVar13 = uVar13 - uVar1 * uVar7;
          }
          plVar12 = plVar11;
          if (uVar13 != uVar10) {
            lVar3 = *param_1;
            if (*(long *)(lVar3 + uVar13 * 8) == 0) {
              *(long **)(lVar3 + uVar13 * 8) = plVar8;
              uVar10 = uVar13;
            }
            else {
              *plVar8 = *plVar11;
              *plVar11 = **(undefined8 **)(lVar3 + uVar13 * 8);
              **(long **)(lVar3 + uVar13 * 8) = (long)plVar11;
              plVar12 = plVar8;
            }
          }
          plVar8 = plVar12;
          plVar11 = (long *)*plVar12;
        }
      }
    }
    else if (uVar7 < uVar16) {
      uVar10 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
      if ((uVar16 < 3) || ((uVar16 & uVar16 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar10) {
        uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
      }
      if (uVar7 <= uVar10) {
        uVar7 = uVar10;
      }
      if (uVar7 < uVar16) {
        if (uVar7 != 0) goto LAB_10926b9f0;
        lVar3 = *param_1;
        *param_1 = 0;
        if (lVar3 != 0) {
          __ZdlPv();
        }
        param_1[1] = 0;
        uVar16 = 0;
      }
      else {
        uVar16 = param_1[1];
      }
    }
    if ((uVar16 & uVar16 - 1) == 0) {
      unaff_x24 = uVar16 - 1 & uVar15;
    }
    else {
      unaff_x24 = uVar15;
      if (uVar16 <= uVar15) {
        uVar7 = 0;
        if (uVar16 != 0) {
          uVar7 = uVar15 / uVar16;
        }
        unaff_x24 = uVar15 - uVar7 * uVar16;
      }
    }
  }
  lVar3 = *param_1;
  plVar8 = *(long **)(lVar3 + unaff_x24 * 8);
  if (plVar8 == (long *)0x0) {
    plVar8 = param_1 + 2;
    *plVar14 = *plVar8;
    *plVar8 = (long)plVar14;
    *(long **)(lVar3 + unaff_x24 * 8) = plVar8;
    if (*plVar14 == 0) goto LAB_10926bbd0;
    uVar15 = *(ulong *)(*plVar14 + 8);
    if ((uVar16 & uVar16 - 1) == 0) {
      uVar15 = uVar15 & uVar16 - 1;
    }
    else if (uVar16 <= uVar15) {
      uVar7 = 0;
      if (uVar16 != 0) {
        uVar7 = uVar15 / uVar16;
      }
      uVar15 = uVar15 - uVar7 * uVar16;
    }
    plVar8 = (long *)(*param_1 + uVar15 * 8);
  }
  else {
    *plVar14 = *plVar8;
  }
  *plVar8 = (long)plVar14;
LAB_10926bbd0:
  param_1[3] = param_1[3] + 1;
  uVar5 = 1;
LAB_10926bbe0:
  auVar17._8_8_ = uVar5;
  auVar17._0_8_ = plVar14;
  return auVar17;
}



/* Entry: 10926bc58; end: 10926bcf7;  */

undefined8 * FUN_10926bc58(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 0xb;
  *param_1 = &PTR_DAT_110b97ee8;
  param_1[1] = 0;
  uVar3 = param_3[1];
  uVar2 = *param_3;
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  uVar7 = param_3[5];
  uVar6 = param_3[4];
  *(undefined8 *)((long)param_1 + 0x54) = param_3[6];
  *(undefined8 *)((long)param_1 + 0x4c) = uVar7;
  *(undefined8 *)((long)param_1 + 0x44) = uVar6;
  *(undefined8 *)((long)param_1 + 0x3c) = uVar5;
  *(undefined8 *)((long)param_1 + 0x34) = uVar4;
  *(undefined8 *)((long)param_1 + 0x2c) = uVar3;
  *(undefined8 *)((long)param_1 + 0x24) = uVar2;
  *param_1 = &PTR_FUN_110ae70a0;
  param_1[0xc] = param_2 + 0x930;
  *(undefined4 *)(param_1 + 0xd) = 0;
  puVar1 = param_1;
  FUN_109374fe0();
  if ((puVar1 != (undefined8 *)0x0) || ((*(byte *)(param_2 + 0x90c) & 1) == 0)) {
    FUN_10926bcf8(param_1);
  }
  return param_1;
}



/* Entry: 10926bcf8; end: 10926bf73;  */

undefined * FUN_10926bcf8(undefined *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  uint uVar9;
  undefined8 uVar10;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar11;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  undefined4 uVar15;
  
  if ((*(int *)(param_1 + 0x68) != 0) || (*(char *)(*(long *)(param_1 + 0x60) + 0x27) != '\x01')) {
    return param_1;
  }
  (**(code **)(*(long *)(param_1 + 0x60) + 0x810))(1);
  lVar14 = *(long *)(param_1 + 0x60);
  puVar11 = (undefined *)(ulong)*(uint *)(param_1 + 0x68);
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar10 = 0x2600;
LAB_10926bd80:
    (**(code **)(lVar14 + 0x830))(puVar11,0x2800,uVar10);
    iVar2 = *(int *)(param_1 + 0x24);
    iVar3 = *(int *)(param_1 + 0x2c);
    if (iVar3 == 2) {
      if (iVar2 == 0) {
        uVar10 = 0x2702;
      }
      else {
        if (iVar2 != 1) goto LAB_10926bf44;
        uVar10 = 0x2703;
      }
    }
    else if (iVar3 == 1) {
      if (iVar2 == 0) {
        uVar10 = 0x2700;
      }
      else {
        if (iVar2 != 1) goto LAB_10926bf44;
        uVar10 = 0x2701;
      }
    }
    else {
      if (iVar3 != 0) goto LAB_10926bf68;
      if (iVar2 == 0) {
        uVar10 = 0x2600;
      }
      else {
        if (iVar2 != 1) goto LAB_10926bf44;
        uVar10 = 0x2601;
      }
    }
    (**(code **)(lVar14 + 0x830))(puVar11,0x2801,uVar10);
    uVar9 = *(uint *)(param_1 + 0x30);
    uVar6 = (ulong)uVar9;
    uVar1 = *(uint *)(param_1 + 0x34);
    uVar7 = (ulong)uVar1;
    uVar4 = *(uint *)(param_1 + 0x38);
    uVar13 = (ulong)uVar4;
    uVar5 = *(uint *)(param_1 + 0x54);
    FUN_10926c3f8(uVar6);
    (**(code **)(lVar14 + 0x830))(puVar11,0x2802,uVar6);
    FUN_10926c3f8(uVar7);
    (**(code **)(lVar14 + 0x830))(puVar11,0x2803,uVar7);
    FUN_10926c3f8(uVar13);
    (**(code **)(lVar14 + 0x830))(puVar11,0x8072,uVar13);
    if (((uVar9 == 3) || (uVar1 == 3)) || (uVar4 == 3)) {
      if (2 < uVar5) goto LAB_10926bf50;
      (**(code **)(lVar14 + 0x838))(puVar11,0x1004,(&PTR_DAT_110ae70e8)[uVar5]);
    }
    uVar15 = *(undefined4 *)(param_1 + 0x50);
    (**(code **)(lVar14 + 0x828))(*(undefined4 *)(param_1 + 0x4c),puVar11,0x813a);
    (**(code **)(lVar14 + 0x828))(uVar15,puVar11,0x813b);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar14 + 0x830);
    if (param_1[0x44] != '\x01') {
      uVar10 = 0x884c;
      uVar9 = 0;
LAB_10926bf1c:
                    /* WARNING: Could not recover jumptable at 0x00010926bf34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(puVar11,uVar10,uVar9);
      return puVar11;
    }
    uVar9 = *(uint *)(param_1 + 0x48);
    (*UNRECOVERED_JUMPTABLE)(puVar11,0x884c,0x884e);
    if (uVar9 < 8) {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar14 + 0x830);
      uVar9 = uVar9 | 0x200;
      uVar10 = 0x884d;
      goto LAB_10926bf1c;
    }
  }
  else {
    if (*(int *)(param_1 + 0x28) == 1) {
      uVar10 = 0x2601;
      goto LAB_10926bd80;
    }
    FUN_109243bf8(&UNK_10f562212);
LAB_10926bf44:
    FUN_109243bf8(&UNK_10f562224);
LAB_10926bf50:
    FUN_109243bf8(&UNK_10f562259);
  }
  FUN_109243bf8(&UNK_10f56227e);
LAB_10926bf68:
  puVar11 = &UNK_10f562240;
  FUN_109243bf8();
  lVar14 = *(long *)(puVar11 + 0x18);
  puVar8 = puVar11;
  FUN_109374fe0();
  if (puVar8 == (undefined *)0x0) {
    func_0x000109fd19d0(lVar14 + 0x810,6,2,&UNK_10f5620fb,0x4a);
  }
  piVar12 = (int *)(puVar11 + 0x68);
  if (*piVar12 != 0) {
    (**(code **)(*(long *)(puVar11 + 0x60) + 0x818))(1,piVar12);
  }
  *piVar12 = 0;
  if (*(long *)(puVar11 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return puVar11;
}



/* Entry: 10926bf74; end: 10926c043;  */

long FUN_10926bf74(long param_1)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  
  lVar2 = *(long *)(param_1 + 0x18);
  lVar1 = param_1;
  FUN_109374fe0();
  if (lVar1 == 0) {
    func_0x000109fd19d0(lVar2 + 0x810,6,2,&UNK_10f5620fb,0x4a);
  }
  piVar3 = (int *)(param_1 + 0x68);
  if (*piVar3 != 0) {
    (**(code **)(*(long *)(param_1 + 0x60) + 0x818))(1,piVar3);
  }
  *piVar3 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10926c044; end: 10926c047;  */

long FUN_10926c044(long param_1)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  
  lVar2 = *(long *)(param_1 + 0x18);
  lVar1 = param_1;
  FUN_109374fe0();
  if (lVar1 == 0) {
    func_0x000109fd19d0(lVar2 + 0x810,6,2,&UNK_10f5620fb,0x4a);
  }
  piVar3 = (int *)(param_1 + 0x68);
  if (*piVar3 != 0) {
    (**(code **)(*(long *)(param_1 + 0x60) + 0x818))(1,piVar3);
  }
  *piVar3 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10926c048; end: 10926c05b;  */

void FUN_10926c048(void)

{
  FUN_10926bf74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10926c05c; end: 10926c3f3;  */

void FUN_10926c05c(long param_1,ulong param_2,long param_3,undefined8 param_4,long param_5)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  undefined4 uVar9;
  
  FUN_10926bcf8();
  iVar3 = (int)param_2 + 0x84c0;
  if (param_5 == 0) {
LAB_10926c0bc:
    _glActiveTexture();
    FUN_10926dea0(param_3,param_5);
    iVar3 = *(int *)(param_3 + 0xac);
    if (param_5 != 0) goto LAB_10926c0d4;
LAB_10926c1d0:
    _glBindTexture(param_4);
    iVar3 = *(int *)(param_1 + 0x68);
    if (iVar3 == 0) {
LAB_10926c21c:
      iVar7 = *(int *)(param_3 + 0x34);
      plVar8 = *(long **)(param_1 + 0x60);
      iVar3 = *(int *)(param_1 + 0x2c);
      iVar1 = *(int *)(param_1 + 0x24);
      if (*(int *)(param_1 + 0x28) == 0) {
        uVar4 = 0x2600;
LAB_10926c244:
        _glTexParameteri(param_4,0x2800,uVar4);
        if (iVar3 == 2) {
          if (iVar1 == 0) {
            uVar4 = 0x2702;
          }
          else {
            if (iVar1 != 1) goto LAB_10926c3d0;
            uVar4 = 0x2703;
          }
        }
        else if (iVar3 == 1) {
          if (iVar1 == 0) {
            uVar4 = 0x2700;
          }
          else {
            if (iVar1 != 1) goto LAB_10926c3d0;
            uVar4 = 0x2701;
          }
        }
        else {
          if (iVar3 != 0) goto LAB_10926c3e8;
          if (iVar1 == 0) {
            uVar4 = 0x2600;
          }
          else {
            if (iVar1 != 1) goto LAB_10926c3d0;
            uVar4 = 0x2601;
          }
        }
        _glTexParameteri(param_4,0x2801,uVar4);
        uVar2 = (ulong)*(uint *)(param_1 + 0x30);
        FUN_10926c3f8(uVar2);
        _glTexParameteri(param_4,0x2802,uVar2);
        uVar2 = (ulong)*(uint *)(param_1 + 0x34);
        FUN_10926c3f8(uVar2);
        _glTexParameteri(param_4,0x2803,uVar2);
        if (iVar7 == 1) {
          uVar2 = (ulong)*(uint *)(param_1 + 0x38);
          FUN_10926c3f8(uVar2);
          _glTexParameteri(param_4,0x8072,uVar2);
        }
        if (((*(int *)(param_1 + 0x30) != 3) && (*(int *)(param_1 + 0x34) != 3)) &&
           (*(int *)(param_1 + 0x38) != 3)) {
LAB_10926c358:
          if (*(char *)(*plVar8 + 0x3e) != '\x01') {
            return;
          }
          uVar9 = *(undefined4 *)(param_1 + 0x50);
          _glTexParameterf(*(undefined4 *)(param_1 + 0x4c),param_4,0x813a);
          _glTexParameterf(uVar9,param_4,0x813b);
                    /* WARNING: Could not recover jumptable at 0x00010bdbeb64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__glTexParameterf_11034b7e8)(uVar9,param_4,0x813d);
          return;
        }
        if (*(uint *)(param_1 + 0x54) < 3) {
          _glTexParameterfv(param_4,0x1004,(&PTR_DAT_110ae7100)[*(uint *)(param_1 + 0x54)]);
          goto LAB_10926c358;
        }
      }
      else {
        if (*(int *)(param_1 + 0x28) == 1) {
          uVar4 = 0x2601;
          goto LAB_10926c244;
        }
        FUN_109243bf8(&UNK_10f56227e);
LAB_10926c3d0:
        FUN_109243bf8(&UNK_10f562224);
      }
      FUN_109243bf8(&UNK_10f56228f);
LAB_10926c3e8:
      FUN_109243bf8(&UNK_10f562240);
      return;
    }
    lVar6 = *(long *)(param_1 + 0x60);
    if (param_5 == 0) goto LAB_10926c1fc;
  }
  else {
    if (*(int *)(param_5 + 0x150) != iVar3) {
      *(int *)(param_5 + 0x150) = iVar3;
      goto LAB_10926c0bc;
    }
    FUN_10926dea0(param_3,param_5);
    iVar3 = *(int *)(param_3 + 0xac);
LAB_10926c0d4:
    if (*(int *)(param_5 + 0x150) == -1) goto LAB_10926c1d0;
    iVar7 = (int)param_4;
    if (iVar7 < 0x8c2a) {
      if (iVar7 < 0x8513) {
        if (iVar7 == 0xde1) {
          lVar6 = 1;
        }
        else {
          if (iVar7 != 0x806f) goto LAB_10926c1d0;
          lVar6 = 4;
        }
      }
      else if (iVar7 == 0x8513) {
        lVar6 = 6;
      }
      else {
        if (iVar7 != 0x8c1a) goto LAB_10926c1d0;
        lVar6 = 5;
      }
    }
    else if (iVar7 < 0x9100) {
      if (iVar7 == 0x8c2a) {
        lVar6 = 8;
      }
      else {
        if (iVar7 != 0x9009) goto LAB_10926c1d0;
        lVar6 = 7;
      }
    }
    else if (iVar7 == 0x9102) {
      lVar6 = 3;
    }
    else {
      if (iVar7 != 0x9100) goto LAB_10926c1d0;
      lVar6 = 2;
    }
    lVar5 = *(long *)(param_5 + 0x138) + (ulong)(*(int *)(param_5 + 0x150) - 0x84c0) * 0x24;
    if (*(int *)(lVar5 + lVar6 * 4) != iVar3) {
      *(int *)(lVar5 + lVar6 * 4) = iVar3;
      goto LAB_10926c1d0;
    }
    iVar3 = *(int *)(param_1 + 0x68);
    if (iVar3 == 0) goto LAB_10926c21c;
    lVar6 = *(long *)(param_1 + 0x60);
  }
  if (*(int *)(*(long *)(param_5 + 0xe8) + (param_2 & 0xffffffff) * 4) == iVar3) {
    return;
  }
  *(int *)(*(long *)(param_5 + 0xe8) + (param_2 & 0xffffffff) * 4) = iVar3;
LAB_10926c1fc:
                    /* WARNING: Could not recover jumptable at 0x00010926c218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x820))(param_2);
  return;
}



/* Entry: 10926c3f4; end: 10926c3f7;  */

void FUN_10926c3f4(void)

{
  return;
}



/* Entry: 10926c3f8; end: 10926c423;  */

undefined8 * FUN_10926c3f8(uint param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  if (param_1 < 4) {
    return (undefined8 *)(ulong)*(uint *)(&UNK_10dfbfd30 + (ulong)param_1 * 4);
  }
  puVar1 = (undefined8 *)&UNK_10f56227e;
  FUN_109243bf8();
  *puVar1 = &PTR_FUN_110ae7128;
  lVar3 = puVar1[3];
  puVar2 = puVar1;
  FUN_109374fe0();
  if (puVar2 == (undefined8 *)0x0) {
    func_0x000109fd19d0(lVar3 + 0x810,6,2,&UNK_10f5622b2,0x4e);
  }
  if ((puVar1[6] != 0) && (*(char *)(puVar1[5] + 0x4d) == '\x01')) {
    (**(code **)(puVar1[5] + 0x7e8))();
  }
  puVar1[6] = 0;
  __ZNSt3__118condition_variableD1Ev(puVar1 + 0xf);
  __ZNSt3__15mutexD1Ev(puVar1 + 7);
  if (puVar1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return puVar1;
}



/* Entry: 10926c424; end: 10926c50f;  */

undefined8 * FUN_10926c424(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110ae7128;
  lVar2 = param_1[3];
  puVar1 = param_1;
  FUN_109374fe0();
  if (puVar1 == (undefined8 *)0x0) {
    func_0x000109fd19d0(lVar2 + 0x810,6,2,&UNK_10f5622b2,0x4e);
  }
  if ((param_1[6] != 0) && (*(char *)(param_1[5] + 0x4d) == '\x01')) {
    (**(code **)(param_1[5] + 0x7e8))();
  }
  param_1[6] = 0;
  __ZNSt3__118condition_variableD1Ev(param_1 + 0xf);
  __ZNSt3__15mutexD1Ev(param_1 + 7);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10926c510; end: 10926c513;  */

undefined8 * FUN_10926c510(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_110ae7128;
  lVar2 = param_1[3];
  puVar1 = param_1;
  FUN_109374fe0();
  if (puVar1 == (undefined8 *)0x0) {
    func_0x000109fd19d0(lVar2 + 0x810,6,2,&UNK_10f5622b2,0x4e);
  }
  if ((param_1[6] != 0) && (*(char *)(param_1[5] + 0x4d) == '\x01')) {
    (**(code **)(param_1[5] + 0x7e8))();
  }
  param_1[6] = 0;
  __ZNSt3__118condition_variableD1Ev(param_1 + 0xf);
  __ZNSt3__15mutexD1Ev(param_1 + 7);
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10926c514; end: 10926c527;  */

void FUN_10926c514(void)

{
  FUN_10926c424();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10926c528; end: 10926c5f3;  */

void FUN_10926c528(long param_1)

{
  long lStack_30;
  char cStack_28;
  
  lStack_30 = param_1 + 0x38;
  cStack_28 = '\x01';
  __ZNSt3__15mutex4lockEv();
  while (*(long *)(param_1 + 0x30) == 0) {
    __ZNSt3__118condition_variable4waitERNS_11unique_lockINS_5mutexEEE(param_1 + 0x78,&lStack_30);
  }
  if (*(char *)(*(long *)(param_1 + 0x28) + 0x4e) == '\x01') {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x7d8))(*(long *)(param_1 + 0x30),0,0xffffffffffffffff)
    ;
  }
  else {
    _glFinish();
  }
  if (*(char *)(*(long *)(param_1 + 0x28) + 0x4d) == '\x01') {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x7e8))(*(undefined8 *)(param_1 + 0x30));
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (cStack_28 == '\x01') {
    __ZNSt3__15mutex6unlockEv(lStack_30);
  }
  return;
}



/* Entry: 10926c5f4; end: 10926c66b;  */

void FUN_10926c5f4(long param_1)

{
  undefined8 uVar1;
  
  __ZNSt3__15mutex4lockEv(param_1 + 0x38);
  if (*(char *)(*(long *)(param_1 + 0x28) + 0x4d) == '\x01') {
    uVar1 = 0x9117;
    (**(code **)(*(long *)(param_1 + 0x28) + 2000))(0x9117,0);
  }
  else {
    _glFinish();
    uVar1 = 0;
  }
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  _glFlush();
  __ZNSt3__15mutex6unlockEv(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__118condition_variable10notify_oneEv_1103465f0)(param_1 + 0x78);
  return;
}



/* Entry: 10926c66c; end: 10926c66f;  */

void FUN_10926c66c(void)

{
  return;
}



/* Entry: 10926c670; end: 10926c71b;  */

undefined8 * FUN_10926c670(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 0xc;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = &PTR_FUN_110ae7180;
  param_1[1] = 0;
  puVar1 = param_1 + 9;
  *puVar1 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  func_0x000104c54c8c(&uStack_48,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(*puVar1);
  }
  param_1[10] = uStack_40;
  *puVar1 = uStack_48;
  param_1[0xb] = uStack_38;
  return param_1;
}



/* Entry: 10926c71c; end: 10926c71f;  */

undefined8 * FUN_10926c71c(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  *param_1 = &PTR_FUN_110ae3a88;
  if (*(char *)(param_1 + 8) == '\x01') {
    puStack_28 = param_1 + 5;
    FUN_109234cac(&puStack_28);
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10926c720; end: 10926c733;  */

void FUN_10926c720(void)

{
  FUN_10926c734();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10926c734; end: 10926c763;  */

undefined8 * FUN_10926c734(undefined8 *param_1)

{
  undefined8 *puStack_28;
  
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  *param_1 = &PTR_FUN_110ae3a88;
  if (*(char *)(param_1 + 8) == '\x01') {
    puStack_28 = param_1 + 5;
    FUN_109234cac(&puStack_28);
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10926c764; end: 10926ccd7;  */

undefined8 * FUN_10926c764(undefined8 *param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 ****ppppuVar5;
  ulong *puVar6;
  undefined8 ****ppppuVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  undefined8 **ppuStack_d0;
  undefined8 **ppuStack_c8;
  undefined8 **ppuStack_c0;
  undefined8 ***pppuStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined1 uStack_90;
  char cStack_81;
  undefined8 ***pppuStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  
  puVar4 = param_1;
  func_0x000109fc9ed0();
  *puVar4 = &PTR_FUN_110ae71d8;
  puVar4[0x1e] = param_2 + 0x930;
  puVar14 = puVar4 + 0x1f;
  puVar4[0x20] = 0;
  *puVar14 = 0;
  *(undefined4 *)(puVar4 + 0x2c) = 0;
  *(undefined4 *)(puVar4 + 0x2f) = 0;
  puVar4[0x30] = 0;
  *(undefined1 *)(puVar4 + 0x31) = 0;
  *(undefined1 *)(puVar4 + 0x2b) = 0;
  puVar4[0x22] = 0;
  puVar4[0x21] = 0;
  puVar4[0x24] = 0;
  puVar4[0x23] = 0;
  puVar4[0x26] = 0;
  puVar4[0x25] = 0;
  puVar4[0x28] = 0;
  puVar4[0x27] = 0;
  puVar4[0x2a] = 0;
  puVar4[0x29] = 0;
  func_0x000107c31940(&pppuStack_80,"");
  lVar13 = 0xf8;
  do {
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              ((long)param_1 + lVar13,&pppuStack_80);
    lVar13 = lVar13 + 0x18;
  } while (lVar13 != 0x158);
  if ((long)uStack_70 < 0) {
    __ZdlPv(pppuStack_80);
  }
  lVar13 = *(long *)(param_3 + 0x38);
  uVar2 = *(undefined8 *)(param_3 + 8);
  uVar12 = *(ulong *)(param_3 + 0x10);
  cStack_81 = '\b';
  uStack_98 = 0x20656e6966656423;
  uStack_90 = 0;
  if (0x7ffffffffffffff7 < uVar12) {
    func_0x000104c4f6b8();
    goto LAB_10926cc14;
  }
  if (uVar12 < 0x17) {
    uStack_a0 = CONCAT17((char)uVar12,(undefined7)uStack_a0);
    ppppuVar5 = &pppuStack_b0;
    if (uVar12 != 0) goto LAB_10926c888;
  }
  else {
    ppppuVar7 = (undefined8 ****)0x19;
    if ((uVar12 | 7) != 0x17) {
      ppppuVar7 = (undefined8 ****)((uVar12 | 7) + 1);
    }
    ppppuVar5 = ppppuVar7;
    __Znwm();
    uStack_a0 = (ulong)ppppuVar7 | 0x8000000000000000;
    pppuStack_b0 = ppppuVar5;
    uStack_a8 = uVar12;
LAB_10926c888:
    _memmove(ppppuVar5,uVar2,uVar12);
  }
  *(undefined1 *)((long)ppppuVar5 + uVar12) = 0;
  uVar12 = uStack_a8;
  ppppuVar7 = (undefined8 ****)pppuStack_b0;
  if (-1 < (long)uStack_a0) {
    uVar12 = uStack_a0 >> 0x38;
    ppppuVar7 = &pppuStack_b0;
  }
  puVar6 = &uStack_98;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (puVar6,ppppuVar7,uVar12);
  uStack_78 = puVar6[1];
  pppuStack_80 = (undefined8 ***)*puVar6;
  uStack_70 = puVar6[2];
  puVar6[1] = 0;
  puVar6[2] = 0;
  *puVar6 = 0;
  ppppuVar7 = &pppuStack_80;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (ppppuVar7,&UNK_10f560154,2);
  ppuStack_c8 = ppppuVar7[1];
  ppuStack_d0 = *ppppuVar7;
  ppuStack_c0 = ppppuVar7[2];
  ppppuVar7[1] = (undefined8 ***)0x0;
  ppppuVar7[2] = (undefined8 ***)0x0;
  *ppppuVar7 = (undefined8 ***)0x0;
  if ((long)uStack_70 < 0) {
    __ZdlPv(pppuStack_80);
  }
  if ((long)uStack_a0 < 0) {
    __ZdlPv(pppuStack_b0);
  }
  if (cStack_81 < '\0') {
    __ZdlPv(uStack_98);
  }
  uVar12 = *(ulong *)(lVar13 + 0x50);
  plVar9 = *(long **)(lVar13 + 0x48);
  if (-1 < (char)*(byte *)(lVar13 + 0x5f)) {
    uVar12 = (ulong)*(byte *)(lVar13 + 0x5f);
    plVar9 = (long *)(lVar13 + 0x48);
  }
  if (7 < (long)uVar12) {
    plVar1 = (long *)((long)plVar9 + uVar12);
    plVar8 = plVar9;
    uVar11 = uVar12;
    while (_memchr(plVar8,0x23,uVar11 - 7), plVar8 != (long *)0x0) {
      if (*plVar8 == 0x6e6f697372657623) {
        if ((((plVar8 != plVar1) &&
             (uVar11 = (long)plVar8 - (long)plVar9, uVar11 != 0xffffffffffffffff)) &&
            (uVar11 <= uVar12)) && (0 < (long)(uVar12 - uVar11))) {
          plVar8 = (long *)((long)plVar9 + uVar11);
          goto LAB_10926c9cc;
        }
        break;
      }
      plVar8 = (long *)((long)plVar8 + 1);
      uVar11 = (long)plVar1 - (long)plVar8;
      if ((long)uVar11 < 8) break;
    }
  }
LAB_10926ca20:
  uVar11 = *(ulong *)(param_2 + 0xa18);
  plVar8 = plVar9;
  plVar9 = *(long **)(param_2 + 0xa10);
LAB_10926ca28:
  if (0x7ffffffffffffff7 < uVar11) {
    func_0x000104c4f6b8();
    goto LAB_10926cc14;
  }
  if (uVar11 < 0x17) {
    uStack_70 = CONCAT17((char)uVar11,(undefined7)uStack_70);
    ppppuVar5 = &pppuStack_80;
    if (uVar11 != 0) goto LAB_10926ca78;
  }
  else {
    ppppuVar7 = (undefined8 ****)0x19;
    if ((uVar11 | 7) != 0x17) {
      ppppuVar7 = (undefined8 ****)((uVar11 | 7) + 1);
    }
    ppppuVar5 = ppppuVar7;
    __Znwm();
    uStack_70 = (ulong)ppppuVar7 | 0x8000000000000000;
    pppuStack_80 = ppppuVar5;
    uStack_78 = uVar11;
LAB_10926ca78:
    _memmove(ppppuVar5,plVar9,uVar11);
  }
  *(undefined1 *)((long)ppppuVar5 + uVar11) = 0;
  if (*(char *)((long)param_1 + 0x10f) < '\0') {
    __ZdlPv(*puVar14);
  }
  puVar4[0x20] = uStack_78;
  *puVar14 = (ulong)pppuStack_80;
  puVar4[0x21] = uStack_70;
  FUN_10926d560(&pppuStack_80,param_3 + 0x18,param_3 + 0x40);
  if (*(char *)((long)param_1 + 0x127) < '\0') {
    __ZdlPv(param_1[0x22]);
  }
  param_1[0x23] = uStack_78;
  param_1[0x22] = pppuStack_80;
  param_1[0x24] = uStack_70;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
            (param_1 + 0x25,&ppuStack_d0);
  if (0x7ffffffffffffff7 < uVar12) {
    func_0x000104c4f6b8();
LAB_10926cc14:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10926cc18);
    (*pcVar3)();
  }
  if (uVar12 < 0x17) {
    uStack_70 = CONCAT17((char)uVar12,(undefined7)uStack_70);
    ppppuVar5 = &pppuStack_80;
    if (uVar12 == 0) goto LAB_10926cb40;
  }
  else {
    ppppuVar7 = (undefined8 ****)0x19;
    if ((uVar12 | 7) != 0x17) {
      ppppuVar7 = (undefined8 ****)((uVar12 | 7) + 1);
    }
    ppppuVar5 = ppppuVar7;
    __Znwm();
    uStack_70 = (ulong)ppppuVar7 | 0x8000000000000000;
    pppuStack_80 = ppppuVar5;
    uStack_78 = uVar12;
  }
  _memmove(ppppuVar5,plVar8,uVar12);
LAB_10926cb40:
  *(undefined1 *)((long)ppppuVar5 + uVar12) = 0;
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    __ZdlPv(param_1[0x28]);
  }
  uVar12 = 0;
  lVar13 = 0;
  param_1[0x29] = uStack_78;
  param_1[0x28] = pppuStack_80;
  param_1[0x2a] = uStack_70;
  do {
    plVar9 = (long *)((long)param_1 + lVar13 + 0xf8);
    lVar10 = (long)*(char *)((long)param_1 + lVar13 + 0x10f);
    if (lVar10 < 0) {
      plVar9 = (long *)*plVar9;
      lVar10 = *(long *)((long)param_1 + lVar13 + 0x100);
    }
    FUN_10925adac(plVar9,lVar10);
    uVar12 = uVar12 * 0x40 + (uVar12 >> 2) + 0x9e3779b9 + (long)plVar9 ^ uVar12;
    lVar13 = lVar13 + 0x18;
  } while (lVar13 != 0x60);
  param_1[0x30] = uVar12;
  FUN_109374fe0();
  if ((plVar9 != (long *)0x0) || ((*(byte *)(param_2 + 0x90c) & 1) == 0)) {
    FUN_10926ccd8(param_1);
  }
  if ((long)ppuStack_c0 < 0) {
    __ZdlPv(ppuStack_d0);
  }
  return param_1;
LAB_10926c9cc:
  _memchr(plVar8,10);
  if (plVar8 == (long *)0x0) goto LAB_10926ca20;
  if ((char)*plVar8 == '\n') {
    if ((plVar8 != plVar1) && ((long)plVar8 - (long)plVar9 != -1)) {
      uVar11 = ((long)plVar8 - (long)plVar9) + 1;
      plVar8 = (long *)((long)plVar9 + uVar11);
      uVar12 = uVar12 - uVar11;
      goto LAB_10926ca28;
    }
    goto LAB_10926ca20;
  }
  plVar8 = (long *)((long)plVar8 + 1);
  if ((long)plVar1 - (long)plVar8 < 1) goto LAB_10926ca20;
  goto LAB_10926c9cc;
}



/* Entry: 10926ccd8; end: 10926cdef;  */

void FUN_10926ccd8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  
  if ((*(int *)(param_1 + 0x178) != 1) &&
     ((*(int *)(param_1 + 0x178) != 0 || (*(int *)(param_1 + 0x160) == 0)))) {
    FUN_10926d208(&lStack_48,4);
    lVar3 = 0;
    lVar4 = 8;
    do {
      lVar1 = param_1 + lVar3;
      plVar5 = (long *)(lVar1 + 0xf8);
      lVar6 = (long)*(char *)(lVar1 + 0x10f);
      if (lVar6 < 0) {
        plVar5 = (long *)*plVar5;
        lVar6 = *(long *)(lVar1 + 0x100);
      }
      ((long *)(lStack_48 + lVar4))[-1] = (long)plVar5;
      *(long *)(lStack_48 + lVar4) = lVar6;
      lVar4 = lVar4 + 0x10;
      lVar3 = lVar3 + 0x18;
    } while (lVar4 != 0x48);
    uVar2 = *(undefined8 *)(param_1 + 0xf0);
    lStack_50 = lStack_40 - lStack_48 >> 4;
    lStack_58 = lStack_48;
    FUN_10926d2fc(uVar2,&lStack_58,*(undefined4 *)(param_1 + 0x94));
    if (*(int *)(param_1 + 0x178) != 0) {
      FUN_10925f5f8((int *)(param_1 + 0x160));
      *(undefined4 *)(param_1 + 0x178) = 0;
    }
    *(int *)(param_1 + 0x160) = (int)uVar2;
    *(undefined1 *)(param_1 + 0x158) = 0;
    if (*(int *)(**(long **)(param_1 + 0xf0) + 0x908) == 0) {
      FUN_10926d054(param_1);
    }
    if (lStack_48 != 0) {
      lStack_40 = lStack_48;
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10926cdf0; end: 10926d053;  */

undefined8 *
FUN_10926cdf0(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 ****param_4,
             ulong param_5,undefined1 param_6)

{
  code *pcVar1;
  undefined8 ******ppppppuVar2;
  undefined8 uVar3;
  undefined8 ******ppppppuVar4;
  long lVar5;
  undefined8 *****pppppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 ***pppuStack_60;
  ulong uStack_58;
  
  param_1[2] = 0;
  param_1[3] = param_2;
  *(undefined4 *)(param_1 + 4) = 0xd;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(int *)((long)param_1 + 0x94) = (int)param_3;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  *param_1 = &PTR_FUN_110ae71d8;
  param_1[1] = 0;
  param_1[0x1e] = param_2 + 0x930;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x29] = 0;
  *(undefined1 *)(param_1 + 0x31) = param_6;
  pppuStack_60 = param_4;
  uStack_58 = param_5;
  func_0x000107c31940(&pppppuStack_78,"");
  lVar5 = 0xf8;
  do {
    ppppppuVar2 = (undefined8 ******)((long)param_1 + lVar5);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSERKS5_
              (ppppppuVar2,&pppppuStack_78);
    lVar5 = lVar5 + 0x18;
  } while (lVar5 != 0x158);
  if ((long)uStack_68 < 0) {
    ppppppuVar2 = (undefined8 ******)pppppuStack_78;
    __ZdlPv();
  }
  param_1[0x30] = 0;
  FUN_109374fe0();
  if ((ppppppuVar2 != (undefined8 ******)0x0) || ((*(byte *)(param_2 + 0x90c) & 1) == 0)) {
    uVar3 = param_1[0x1e];
    pppppuStack_78 = (undefined8 *****)&pppuStack_60;
    uStack_70 = 1;
    FUN_10926d2fc(uVar3,&pppppuStack_78,param_3);
    if (*(int *)(param_1 + 0x2f) != 0) {
      FUN_10925f5f8(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x2f) = 0;
    }
    *(int *)(param_1 + 0x2c) = (int)uVar3;
    if (*(int *)(param_2 + 0x908) != 0) {
      return param_1;
    }
    FUN_10926d054(param_1);
    return param_1;
  }
  if (0x7ffffffffffffff7 < param_5) {
    func_0x000104c4f6b8();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10926cfec);
    (*pcVar1)();
  }
  if (param_5 < 0x17) {
    uStack_68 = CONCAT17((char)param_5,(undefined7)uStack_68);
    ppppppuVar4 = &pppppuStack_78;
    if (param_5 == 0) goto LAB_10926cfa0;
  }
  else {
    ppppppuVar2 = (undefined8 ******)0x19;
    if ((param_5 | 7) != 0x17) {
      ppppppuVar2 = (undefined8 ******)((param_5 | 7) + 1);
    }
    ppppppuVar4 = ppppppuVar2;
    __Znwm();
    uStack_68 = (ulong)ppppppuVar2 | 0x8000000000000000;
    pppppuStack_78 = ppppppuVar4;
    uStack_70 = param_5;
  }
  _memmove(ppppppuVar4,param_4,param_5);
LAB_10926cfa0:
  *(undefined1 *)((long)ppppppuVar4 + param_5) = 0;
  if (*(char *)((long)param_1 + 0x157) < '\0') {
    __ZdlPv(param_1[0x28]);
  }
  param_1[0x29] = uStack_70;
  param_1[0x28] = pppppuStack_78;
  param_1[0x2a] = uStack_68;
  return param_1;
}



/* Entry: 10926d054; end: 10926d0d3;  */

void FUN_10926d054(long param_1)

{
  undefined1 auStack_48 [36];
  int iStack_24;
  
  if ((*(byte *)(param_1 + 0x158) & 1) == 0) {
    if (*(int *)(param_1 + 0x178) == 0) {
      iStack_24 = *(int *)(param_1 + 0x160);
      if (iStack_24 != 0) {
        FUN_10926d40c(auStack_48,*(undefined8 *)(param_1 + 0xf0),&iStack_24);
        FUN_10925f59c((int *)(param_1 + 0x160),auStack_48);
        FUN_10925f5f8(auStack_48);
      }
    }
    *(undefined1 *)(param_1 + 0x158) = 1;
  }
  return;
}



/* Entry: 10926d0d4; end: 10926d1eb;  */

undefined8 * FUN_10926d0d4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puStack_28;
  
  lVar2 = param_1[3];
  puVar1 = param_1;
  FUN_109374fe0();
  if (puVar1 == (undefined8 *)0x0) {
    func_0x000109fd19d0(lVar2 + 0x810,6,2,&UNK_10f5623d5,0x51);
  }
  if (*(int *)(param_1 + 0x2f) == 0) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      *(undefined1 *)(param_1 + 0x2b) = 0;
      goto LAB_10926d12c;
    }
    _glDeleteShader();
    *(undefined1 *)(param_1 + 0x2b) = 0;
    if (*(int *)(param_1 + 0x2f) == 0) goto LAB_10926d12c;
  }
  else {
    *(undefined1 *)(param_1 + 0x2b) = 0;
  }
  FUN_10925f5f8(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2f) = 0;
LAB_10926d12c:
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x30] = 0;
  FUN_10925f5f8(param_1 + 0x2c);
  lVar2 = 0;
  do {
    if (*(char *)((long)param_1 + lVar2 + 0x157) < '\0') {
      __ZdlPv(*(undefined8 *)((long)param_1 + lVar2 + 0x140));
    }
    lVar2 = lVar2 + -0x18;
  } while (lVar2 != -0x60);
  *param_1 = &PTR_DAT_110b97f28;
  if (*(char *)(param_1 + 0x1d) == '\x01') {
    puStack_28 = param_1 + 0x1a;
    FUN_109234fc8(&puStack_28);
  }
  if (param_1[0xf] != 0) {
    param_1[0x10] = param_1[0xf];
    __ZdlPv();
  }
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    puStack_28 = param_1 + 5;
    func_0x0001092349c8(&puStack_28);
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10926d1ec; end: 10926d1ef;  */

undefined8 * FUN_10926d1ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puStack_28;
  
  lVar2 = param_1[3];
  puVar1 = param_1;
  FUN_109374fe0();
  if (puVar1 == (undefined8 *)0x0) {
    func_0x000109fd19d0(lVar2 + 0x810,6,2,&UNK_10f5623d5,0x51);
  }
  if (*(int *)(param_1 + 0x2f) == 0) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      *(undefined1 *)(param_1 + 0x2b) = 0;
      goto LAB_10926d12c;
    }
    _glDeleteShader();
    *(undefined1 *)(param_1 + 0x2b) = 0;
    if (*(int *)(param_1 + 0x2f) == 0) goto LAB_10926d12c;
  }
  else {
    *(undefined1 *)(param_1 + 0x2b) = 0;
  }
  FUN_10925f5f8(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x2f) = 0;
LAB_10926d12c:
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x30] = 0;
  FUN_10925f5f8(param_1 + 0x2c);
  lVar2 = 0;
  do {
    if (*(char *)((long)param_1 + lVar2 + 0x157) < '\0') {
      __ZdlPv(*(undefined8 *)((long)param_1 + lVar2 + 0x140));
    }
    lVar2 = lVar2 + -0x18;
  } while (lVar2 != -0x60);
  *param_1 = &PTR_DAT_110b97f28;
  if (*(char *)(param_1 + 0x1d) == '\x01') {
    puStack_28 = param_1 + 0x1a;
    FUN_109234fc8(&puStack_28);
  }
  if (param_1[0xf] != 0) {
    param_1[0x10] = param_1[0xf];
    __ZdlPv();
  }
  if (param_1[0xc] != 0) {
    param_1[0xd] = param_1[0xc];
    __ZdlPv();
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    __ZdlPv(param_1[9]);
  }
  if (*(char *)(param_1 + 8) == '\x01') {
    puStack_28 = param_1 + 5;
    func_0x0001092349c8(&puStack_28);
  }
  if (param_1[2] != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 10926d1f0; end: 10926d203;  */

void FUN_10926d1f0(void)

{
  FUN_10926d0d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10926d204; end: 10926d207;  */

void FUN_10926d204(void)

{
  return;
}



/* Entry: 10926d208; end: 10926d27b;  */

undefined8 * FUN_10926d208(undefined8 *param_1,long param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    FUN_10926d27c(param_1);
    lVar1 = param_1[1];
    _bzero(lVar1,param_2 << 4);
    param_1[1] = lVar1 + param_2 * 0x10;
  }
  return param_1;
}



/* Entry: 10926d27c; end: 10926d2b3;  */

undefined1  [16] FUN_10926d27c(long *param_1,long *param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  long lStack_a0;
  long lStack_98;
  long lStack_88;
  long lStack_80;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar1 = param_1;
    FUN_10926d2c8();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 2);
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = plVar1;
    return auVar8;
  }
  FUN_10926d2b4();
  func_0x000104c4f6cc(&UNK_10f562506);
  if ((ulong)param_2 >> 0x3c == 0) {
    lVar2 = (long)param_2 << 4;
    __Znwm(lVar2);
    auVar9._8_8_ = param_2;
    auVar9._0_8_ = lVar2;
    return auVar9;
  }
  func_0x000104c4f740();
  FUN_10926da5c(&lStack_88,param_2[1]);
  FUN_10925b8c4(&lStack_a0,param_2[1]);
  lVar2 = param_2[1];
  if (lVar2 != 0) {
    lVar5 = 0;
    lVar6 = 0;
    lVar7 = *param_2;
    do {
      *(undefined8 *)(lStack_88 + lVar6 * 8) = *(undefined8 *)(lVar7 + lVar5);
      lVar7 = *param_2;
      *(int *)(lStack_a0 + lVar6 * 4) = (int)*(undefined8 *)(lVar7 + lVar5 + 8);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar2 != lVar6);
  }
  uVar3 = (ulong)*(uint *)(&UNK_10dfbfdd0 + (ulong)(param_3 & 0xff) * 4);
  _glCreateShader(uVar3);
  uVar4 = (ulong)(lStack_80 - lStack_88) >> 3;
  _glShaderSource();
  _glCompileShader(uVar3);
  if (lStack_a0 != 0) {
    lStack_98 = lStack_a0;
    __ZdlPv();
  }
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  auVar10._8_8_ = uVar4;
  auVar10._0_8_ = uVar3;
  return auVar10;
}



/* Entry: 10926d2b4; end: 10926d2c7;  */

undefined1  [16] FUN_10926d2b4(undefined8 param_1,long *param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lStack_80;
  long lStack_78;
  long lStack_68;
  long lStack_60;
  
  func_0x000104c4f6cc(&UNK_10f562506);
  if ((ulong)param_2 >> 0x3c == 0) {
    lVar1 = (long)param_2 << 4;
    __Znwm(lVar1);
    auVar7._8_8_ = param_2;
    auVar7._0_8_ = lVar1;
    return auVar7;
  }
  func_0x000104c4f740();
  FUN_10926da5c(&lStack_68,param_2[1]);
  FUN_10925b8c4(&lStack_80,param_2[1]);
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    lVar4 = 0;
    lVar5 = 0;
    lVar6 = *param_2;
    do {
      *(undefined8 *)(lStack_68 + lVar5 * 8) = *(undefined8 *)(lVar6 + lVar4);
      lVar6 = *param_2;
      *(int *)(lStack_80 + lVar5 * 4) = (int)*(undefined8 *)(lVar6 + lVar4 + 8);
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x10;
    } while (lVar1 != lVar5);
  }
  uVar2 = (ulong)*(uint *)(&UNK_10dfbfdd0 + (ulong)(param_3 & 0xff) * 4);
  _glCreateShader(uVar2);
  uVar3 = (ulong)(lStack_60 - lStack_68) >> 3;
  _glShaderSource();
  _glCompileShader(uVar2);
  if (lStack_80 != 0) {
    lStack_78 = lStack_80;
    __ZdlPv();
  }
  if (lStack_68 != 0) {
    lStack_60 = lStack_68;
    __ZdlPv();
  }
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = uVar2;
  return auVar8;
}


