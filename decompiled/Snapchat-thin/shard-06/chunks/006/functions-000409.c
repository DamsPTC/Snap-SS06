/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104bc932c; end: 104bc9d4f;  */

void FUN_104bc932c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104bc937c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104bc9380)();
  return;
}



/* Entry: 104bc9d50; end: 104bcc097;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_104bc9d50(void)

{
  ulong uVar1;
  long lVar2;
  long alStack_68 [2];
  undefined1 uStack_51;
  undefined8 uStack_50;
  long *plStack_48;
  long *plStack_40;
  undefined1 *puStack_38;
  undefined8 *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
DAT_104bc9d90:
  lVar2 = 1;
  _calloc(1,0x18);
  uVar1 = 2;
  if (lVar2 != 0) {
    uVar1 = 3;
  }
  switch(uVar1) {
  default:
    goto DAT_104bc9dc4;
  case 1:
    goto DAT_104bc9d90;
  case 2:
    _abort();
    break;
  case 3:
    plStack_48 = alStack_68;
    alStack_68[1] = 0x400;
    plStack_40 = alStack_68 + 1;
    uStack_51 = 0xc9;
    puStack_38 = &uStack_51;
    uStack_50 = 0x22c6df29bdfb489f;
    puStack_30 = &uStack_50;
    alStack_68[0] = lVar2;
    FUN_104bcda0c(0xbb0b926ea7bd30d3,alStack_68 + 1,&plStack_48);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
      return lVar2;
    }
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000104bc9ea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104bc9eac)();
  return lVar2;
DAT_104bc9dc4:
  do {
  } while( true );
}



/* Entry: 104bcc098; end: 104bcda0b;  */

void FUN_104bcc098(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104bcc118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104bcc11c)();
  return;
}



/* Entry: 104bcda0c; end: 104bcfb4f;  */

void FUN_104bcda0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104bcda70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104bcda74)();
  return;
}



/* Entry: 104bcfb50; end: 104bd0e7f;  */

/* WARNING: Removing unreachable block (ram,0x000104bd029c) */
/* WARNING: Removing unreachable block (ram,0x000104bd0134) */
/* WARNING: Removing unreachable block (ram,0x000104bcffc4) */
/* WARNING: Removing unreachable block (ram,0x000104bcfda8) */
/* WARNING: Removing unreachable block (ram,0x000104bcfcf0) */
/* WARNING: Removing unreachable block (ram,0x000104bcfb78) */
/* WARNING: Removing unreachable block (ram,0x000104bcfc38) */
/* WARNING: Removing unreachable block (ram,0x000104bcff18) */
/* WARNING: Removing unreachable block (ram,0x000104bd007c) */
/* WARNING: Removing unreachable block (ram,0x000104bd01ec) */
/* WARNING: Removing unreachable block (ram,0x000104bd04a8) */

void FUN_104bcfb50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint *puVar4;
  undefined8 **ppuVar5;
  undefined1 **ppuVar6;
  ulong **ppuVar7;
  ulong **ppuVar8;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined1 uStack_3d5;
  undefined1 uStack_3d4;
  undefined1 uStack_3d3;
  undefined1 uStack_3d2;
  undefined1 uStack_3d1;
  undefined1 uStack_3d0;
  undefined1 uStack_3cf;
  undefined1 uStack_3ce;
  undefined1 uStack_3cd;
  undefined1 uStack_3cc;
  undefined1 uStack_3cb;
  undefined1 uStack_3ca;
  undefined1 uStack_3c9;
  long lStack_3c8;
  undefined8 uStack_390;
  ulong uStack_388;
  ulong *puStack_380;
  long lStack_378;
  undefined8 ***pppuStack_370;
  undefined8 uStack_368;
  undefined8 uStack_358;
  uint uStack_34c;
  ulong uStack_348;
  uint *puStack_340;
  ulong **ppuStack_338;
  ulong *puStack_330;
  uint **ppuStack_328;
  undefined8 ***pppuStack_320;
  long lStack_318;
  undefined8 ***pppuStack_310;
  undefined8 uStack_308;
  undefined8 uStack_2f8;
  uint uStack_2ec;
  ulong uStack_2e8;
  uint *puStack_2e0;
  ulong **ppuStack_2d8;
  ulong *puStack_2d0;
  uint **ppuStack_2c8;
  undefined8 ***pppuStack_2c0;
  long lStack_2b8;
  undefined8 ***pppuStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_298;
  uint uStack_28c;
  ulong uStack_288;
  uint *puStack_280;
  undefined1 uStack_271;
  ulong *puStack_270;
  uint **ppuStack_268;
  undefined1 *puStack_260;
  long lStack_258;
  undefined8 ***pppuStack_250;
  undefined8 uStack_248;
  undefined8 uStack_238;
  uint uStack_22c;
  ulong uStack_228;
  uint *puStack_220;
  ulong *puStack_218;
  uint **ppuStack_210;
  long lStack_208;
  undefined8 ***pppuStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1e8;
  uint uStack_1dc;
  ulong uStack_1d8;
  uint *puStack_1d0;
  ulong **ppuStack_1c8;
  ulong *puStack_1c0;
  uint **ppuStack_1b8;
  undefined8 ***pppuStack_1b0;
  long lStack_1a8;
  undefined8 ***pppuStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_188;
  uint uStack_17c;
  ulong uStack_178;
  uint *puStack_170;
  undefined4 uStack_164;
  ulong *puStack_160;
  uint **ppuStack_158;
  undefined4 *puStack_150;
  long lStack_148;
  undefined1 ***pppuStack_140;
  undefined8 uStack_138;
  undefined8 uStack_128;
  uint uStack_11c;
  ulong uStack_118;
  uint *puStack_110;
  undefined1 **ppuStack_108;
  ulong *puStack_100;
  uint **ppuStack_f8;
  undefined1 ***pppuStack_f0;
  long lStack_e8;
  undefined1 **ppuStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  uint uStack_bc;
  undefined1 auStack_b8 [8];
  undefined1 *puStack_b0;
  undefined8 **ppuStack_a8;
  undefined1 *puStack_a0;
  undefined1 **ppuStack_98;
  undefined8 ***pppuStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_39;
  undefined8 *puStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  undefined1 *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = 0;
  puStack_38 = &uStack_58;
  puStack_30 = &uStack_50;
  puStack_28 = &uStack_48;
  puStack_20 = &uStack_39;
  puVar1 = auStack_60;
  ppuVar5 = &puStack_38;
  uStack_58 = param_1;
  uStack_50 = param_2;
  uStack_48 = param_3;
  uStack_39 = param_4;
  FUN_104bd1b0c(0x504c057eeaaa0457);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  uStack_78 = 0x104bcfc10;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_c8 = 0;
  puStack_a0 = auStack_b8;
  ppuStack_98 = &puStack_b0;
  pppuStack_90 = &ppuStack_a8;
  puVar3 = &uStack_bc;
  ppuVar6 = &puStack_a0;
  puStack_b0 = puVar1;
  ppuStack_a8 = ppuVar5;
  puStack_80 = &stack0xfffffffffffffff0;
  FUN_104bd0e80(0x46cb308f487db5e9);
  uStack_118 = (ulong)uStack_bc;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  uStack_d8 = 0x104bcfcc8;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_128 = 0;
  puStack_100 = &uStack_118;
  ppuStack_f8 = &puStack_110;
  pppuStack_f0 = &ppuStack_108;
  puVar4 = &uStack_11c;
  uStack_164 = SUB84(&puStack_100,0);
  puStack_110 = puVar3;
  ppuStack_108 = ppuVar6;
  ppuStack_e0 = &puStack_80;
  FUN_104bd1b0c(0x2ea13299237898b);
  uStack_178 = (ulong)uStack_11c;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  uStack_138 = 0x104bcfd80;
  lStack_148 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_188 = 0;
  puStack_160 = &uStack_178;
  ppuStack_158 = &puStack_170;
  puStack_150 = &uStack_164;
  puVar3 = &uStack_17c;
  ppuVar7 = &puStack_160;
  puStack_170 = puVar4;
  pppuStack_140 = &ppuStack_e0;
  FUN_104bd1b0c(0x5c5626a9cea7388a);
  uStack_1d8 = (ulong)uStack_17c;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_148) {
    return;
  }
  ___stack_chk_fail();
  uStack_198 = 0x104bcfe38;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_1e8 = 1;
  puStack_1c0 = &uStack_1d8;
  ppuStack_1b8 = &puStack_1d0;
  pppuStack_1b0 = &ppuStack_1c8;
  puVar4 = &uStack_1dc;
  puStack_1d0 = puVar3;
  ppuStack_1c8 = ppuVar7;
  pppuStack_1a0 = &pppuStack_140;
  FUN_104bd0e80(0xff6bcf0bc9af93dc,puVar4,&puStack_1c0);
  uStack_228 = (ulong)uStack_1dc;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  ___stack_chk_fail();
  uStack_1f8 = 0x104bcfef0;
  lStack_208 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_238 = 0;
  puStack_218 = &uStack_228;
  ppuStack_210 = &puStack_220;
  puVar3 = &uStack_22c;
  uStack_271 = SUB81(&puStack_218,0);
  puStack_220 = puVar4;
  pppuStack_200 = &pppuStack_1a0;
  FUN_104bd0e80(0x9d40df16ba50d1b1);
  uStack_288 = (ulong)uStack_22c;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_208) {
    return;
  }
  ___stack_chk_fail();
  uStack_248 = 0x104bcff9c;
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_298 = 0;
  puStack_270 = &uStack_288;
  ppuStack_268 = &puStack_280;
  puStack_260 = &uStack_271;
  puVar4 = &uStack_28c;
  ppuVar7 = &puStack_270;
  puStack_280 = puVar3;
  pppuStack_250 = &pppuStack_200;
  FUN_104bd1b0c(0xd7e7d7eb65a75241);
  uStack_2e8 = (ulong)uStack_28c;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return;
  }
  ___stack_chk_fail();
  uStack_2a8 = 0x104bd0054;
  lStack_2b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_2f8 = 0;
  puStack_2d0 = &uStack_2e8;
  ppuStack_2c8 = &puStack_2e0;
  pppuStack_2c0 = &ppuStack_2d8;
  puVar3 = &uStack_2ec;
  ppuVar8 = &puStack_2d0;
  puStack_2e0 = puVar4;
  ppuStack_2d8 = ppuVar7;
  pppuStack_2b0 = &pppuStack_250;
  FUN_104bd0e80(0x7f14a9841e734e98);
  uStack_348 = (ulong)uStack_2ec;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2b8) {
    ___stack_chk_fail();
    uStack_308 = 0x104bd010c;
    lStack_318 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_358 = 0;
    puStack_330 = &uStack_348;
    ppuStack_328 = &puStack_340;
    pppuStack_320 = &ppuStack_338;
    puStack_340 = puVar3;
    ppuStack_338 = ppuVar8;
    pppuStack_310 = &pppuStack_2b0;
    FUN_104bd0e80(0x2d00c053f22e53b3,&uStack_34c,&puStack_330);
    uStack_388 = (ulong)uStack_34c;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_318) {
      return;
    }
    ___stack_chk_fail();
    uStack_368 = 0x104bd01c4;
    lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_380 = &uStack_388;
    pppuStack_370 = &pppuStack_310;
    FUN_104bd1b0c(0x7000e48b2bbadfc1,&uStack_390,&puStack_380);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_378) {
      ___stack_chk_fail(uStack_390);
      lStack_3c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      puVar1 = &uStack_3d5;
      FUN_104bc1984(puVar1,1);
      uStack_3d4 = uStack_3d5;
      if ((int)puVar1 != 0) {
        uStack_3d4 = 0;
      }
      puVar1 = &uStack_3d5;
      FUN_104bc1984(puVar1,1);
      uStack_3d3 = uStack_3d5;
      if ((int)puVar1 != 0) {
        uStack_3d3 = 0;
      }
      puVar1 = &uStack_3d5;
      FUN_104bc1984(puVar1,1);
      uStack_3d2 = uStack_3d5;
      if ((int)puVar1 != 0) {
        uStack_3d2 = 0;
      }
      puVar1 = &uStack_3d5;
      FUN_104bc1984(puVar1,1);
      uStack_3d1 = uStack_3d5;
      if ((int)puVar1 != 0) {
        uStack_3d1 = 0;
      }
      puVar1 = &uStack_3d5;
      FUN_104bc1984(puVar1,1);
      uStack_3d0 = uStack_3d5;
      if ((int)puVar1 != 0) {
        uStack_3d0 = 0;
      }
      puVar1 = &uStack_3d5;
      FUN_104bc1984(puVar1,1);
      uStack_3cf = uStack_3d5;
      if ((int)puVar1 != 0) {
        uStack_3cf = 0;
      }
      puVar1 = &uStack_3d5;
      FUN_104bc1984(puVar1,1);
      uStack_3ce = uStack_3d5;
      if ((int)puVar1 != 0) {
        uStack_3ce = 0;
      }
      puVar1 = &uStack_3d5;
      FUN_104bc1984(puVar1,1);
      uStack_3cd = uStack_3d5;
      if ((int)puVar1 != 0) {
        uStack_3cd = 0;
      }
      puVar1 = &uStack_3d5;
      FUN_104bc1984(puVar1,1);
      uStack_3cc = uStack_3d5;
      if ((int)puVar1 != 0) {
        uStack_3cc = 0;
      }
      puVar1 = &uStack_3d5;
      FUN_104bc1984(puVar1,1);
      uStack_3cb = uStack_3d5;
      if ((int)puVar1 != 0) {
        uStack_3cb = 0;
      }
      puVar1 = &uStack_3d5;
      FUN_104bc1984(puVar1,1);
      uStack_3ca = uStack_3d5;
      if ((int)puVar1 != 0) {
        uStack_3ca = 0;
      }
      puVar1 = &uStack_3d5;
      FUN_104bc1984(puVar1,1);
      uStack_3c9 = uStack_3d5;
      if ((int)puVar1 != 0) {
        uStack_3c9 = 0;
      }
      __Znwm();
      FUN_104bc06ec();
      puVar2 = (undefined8 *)0x28;
      __Znwm();
      FUN_104bcfb50();
      *puVar2 = &PTR_DAT_1107e2698;
      *extraout_x8 = puVar2;
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3c8) {
        return;
      }
      ___stack_chk_fail();
      puVar2 = (undefined8 *)0x28;
      __Znwm();
      puVar2[2] = 0;
      puVar2[1] = 0;
      puVar2[4] = 0;
      puVar2[3] = 0;
      *puVar2 = &PTR_DAT_1107e2698;
      *extraout_x8_00 = puVar2;
      return;
    }
    return;
  }
  return;
}



/* Entry: 104bd0e80; end: 104bd1b0b;  */

void FUN_104bd0e80(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104bd0ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104bd0ed0)();
  return;
}



/* Entry: 104bd1b0c; end: 104bd2c3b;  */

void FUN_104bd1b0c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104bd1b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104bd1b70)();
  return;
}



/* Entry: 104bd2c3c; end: 104bd3083;  */

void FUN_104bd2c3c(void)

{
                    /* WARNING: Could not recover jumptable at 0x000104bd2c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(undefined *)0x104bd2c84)();
  return;
}



/* Entry: 104bd3084; end: 104bd35f3;  */

float FUN_104bd3084(float param_1,float param_2,float param_3,float param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  
  bVar3 = true;
  if ((ABS(param_4) <= ABS(param_3)) && (bVar3 = true, !NAN(param_3))) {
    bVar3 = false;
  }
  fVar8 = ABS(param_4);
  if (!bVar3) {
    fVar8 = ABS(param_3);
  }
  iVar4 = (((uint)((int)fVar8 << (ulong)((int)LZCOUNT(fVar8) - 8U & 0x1f)) >> 0x17 & 0xff) -
          (int)LZCOUNT(fVar8)) + -0x77;
  if (0x7fffff < (uint)fVar8) {
    iVar4 = ((uint)fVar8 >> 0x17) - 0x7f;
  }
  fVar6 = -INFINITY;
  if (fVar8 != 0.0) {
    fVar6 = (float)iVar4;
  }
  if ((uint)fVar8 >> 0x17 != 0xff) {
    fVar8 = fVar6;
  }
  if ((uint)ABS(fVar8) < 0x7f800000) {
    iVar4 = (int)fVar8;
    iVar1 = -iVar4;
    if ((param_3 != 0.0) && (uVar11 = (uint)param_3 >> 0x17 & 0xff, uVar11 != 0xff)) {
      uVar10 = (uint)param_3 & 0x7fffff;
      if (uVar11 == 0) {
        iVar2 = 9 - (int)LZCOUNT(uVar10);
        uVar10 = uVar10 << (ulong)((int)LZCOUNT(uVar10) - 8U & 0x1f) & 0xff7fffff;
        uVar11 = iVar2 + iVar1;
        uVar5 = (int)uVar11 >> 0x1f ^ 0x80000000;
        if (!SCARRY4(iVar2,iVar1)) {
          uVar5 = uVar11;
        }
      }
      else {
        uVar5 = (int)(uVar11 + iVar1) >> 0x1f ^ 0x80000000;
        if (!SCARRY4(uVar11,iVar1)) {
          uVar5 = uVar11 + iVar1;
        }
      }
      if ((int)uVar5 < 0xff) {
        if ((int)uVar5 < 1) {
          if ((int)uVar5 < -0x7c) {
            uVar5 = 0xffffff83;
          }
          param_3 = (float)(uVar10 | (uint)param_3 & 0x80000000 | 0x800000) *
                    (float)(uVar5 * 0x800000 + 0x3f000000);
        }
        else {
          param_3 = (float)((uint)param_3 & 0x80000000 | uVar5 << 0x17 | uVar10);
        }
      }
      else {
        param_3 = (float)((uint)param_3 ^ ((uint)param_3 ^ 0x7f000000) & 0x7fffffff);
        param_3 = param_3 + param_3;
      }
    }
    if ((param_4 != 0.0) && (uVar11 = (uint)param_4 >> 0x17 & 0xff, uVar11 != 0xff)) {
      uVar10 = (uint)param_4 & 0x7fffff;
      if (uVar11 == 0) {
        iVar2 = 9 - (int)LZCOUNT(uVar10);
        uVar10 = uVar10 << (ulong)((int)LZCOUNT(uVar10) - 8U & 0x1f) & 0xff7fffff;
        uVar11 = iVar2 + iVar1;
        uVar5 = (int)uVar11 >> 0x1f ^ 0x80000000;
        if (!SCARRY4(iVar2,iVar1)) {
          uVar5 = uVar11;
        }
      }
      else {
        uVar5 = (int)(uVar11 + iVar1) >> 0x1f ^ 0x80000000;
        if (!SCARRY4(uVar11,iVar1)) {
          uVar5 = uVar11 + iVar1;
        }
      }
      if ((int)uVar5 < 0xff) {
        if ((int)uVar5 < 1) {
          if ((int)uVar5 < -0x7c) {
            uVar5 = 0xffffff83;
          }
          param_4 = (float)(uVar10 | (uint)param_4 & 0x80000000 | 0x800000) *
                    (float)(uVar5 * 0x800000 + 0x3f000000);
        }
        else {
          param_4 = (float)((uint)param_4 & 0x80000000 | uVar5 << 0x17 | uVar10);
        }
      }
      else {
        param_4 = (float)((uint)param_4 ^ ((uint)param_4 ^ 0x7f000000) & 0x7fffffff);
        param_4 = param_4 + param_4;
      }
    }
  }
  else {
    iVar4 = 0;
  }
  fVar9 = param_4 * param_4 + param_3 * param_3;
  fVar6 = (param_2 * param_4 + param_3 * param_1) / fVar9;
  iVar4 = -iVar4;
  if ((fVar6 != 0.0) && (uVar11 = (uint)fVar6 >> 0x17 & 0xff, uVar11 != 0xff)) {
    uVar10 = (uint)fVar6 & 0x7fffff;
    if (uVar11 == 0) {
      uVar11 = 9 - (int)LZCOUNT(uVar10);
      uVar10 = uVar10 << (ulong)((int)LZCOUNT(uVar10) - 8U & 0x1f) & 0xff7fffff;
    }
    uVar5 = (int)(uVar11 + iVar4) >> 0x1f ^ 0x80000000;
    if (!SCARRY4(uVar11,iVar4)) {
      uVar5 = uVar11 + iVar4;
    }
    if (0xfe < (int)uVar5) {
      fVar6 = (float)((uint)fVar6 ^ ((uint)fVar6 ^ 0x7f000000) & 0x7fffffff);
      fVar6 = fVar6 + fVar6;
      fVar7 = -(param_4 * param_1) + param_3 * param_2;
      goto joined_r0x000104bd3370;
    }
    if ((int)uVar5 < 1) {
      if ((int)uVar5 < -0x7c) {
        uVar5 = 0xffffff83;
      }
      fVar6 = (float)(uVar10 | (uint)fVar6 & 0x80000000 | 0x800000) *
              (float)(uVar5 * 0x800000 + 0x3f000000);
      fVar7 = -(param_4 * param_1) + param_3 * param_2;
      goto joined_r0x000104bd3370;
    }
    fVar6 = (float)((uint)fVar6 & 0x80000000 | uVar5 << 0x17 | uVar10);
  }
  fVar7 = -(param_4 * param_1) + param_3 * param_2;
joined_r0x000104bd3370:
  fVar7 = fVar7 / fVar9;
  if ((fVar7 != 0.0) && (uVar11 = (uint)fVar7 >> 0x17 & 0xff, uVar11 != 0xff)) {
    uVar10 = (uint)fVar7 & 0x7fffff;
    if (uVar11 == 0) {
      uVar11 = 9 - (int)LZCOUNT(uVar10);
      uVar10 = uVar10 << (ulong)((int)LZCOUNT(uVar10) - 8U & 0x1f) & 0xff7fffff;
    }
    uVar5 = (int)(uVar11 + iVar4) >> 0x1f ^ 0x80000000;
    if (!SCARRY4(uVar11,iVar4)) {
      uVar5 = uVar11 + iVar4;
    }
    if (0xfe < (int)uVar5) {
      return fVar6;
    }
    if ((int)uVar5 < 1) {
      if ((int)uVar5 < -0x7c) {
        uVar5 = 0xffffff83;
      }
      fVar7 = (float)(uVar10 | (uint)fVar7 & 0x80000000 | 0x800000) *
              (float)(uVar5 * 0x800000 + 0x3f000000);
    }
    else {
      fVar7 = (float)((uint)fVar7 & 0x80000000 | uVar5 << 0x17 | uVar10);
    }
  }
  bVar3 = false;
  if ((NAN(fVar6)) && (bVar3 = true, !NAN(fVar7))) {
    bVar3 = false;
  }
  if (bVar3) {
    if ((fVar9 == 0.0) && ((!NAN(param_1) || (!NAN(param_2))))) {
      return param_1 * (float)((uint)param_3 ^ ((uint)param_3 ^ 0x7f800000) & 0x7fffffff);
    }
    if (((ABS(param_2) == INFINITY || ABS(param_1) == INFINITY) && ((uint)ABS(param_3) < 0x7f800000)
        ) && ((uint)ABS(param_4) < 0x7f800000)) {
      uVar11 = 0x3f800000;
      if (ABS(param_1) != INFINITY) {
        uVar11 = 0;
      }
      uVar10 = 0x3f800000;
      if (ABS(param_2) != INFINITY) {
        uVar10 = 0;
      }
      return ((float)((uint)param_2 ^ ((uint)param_2 ^ uVar10) & 0x7fffffff) * param_4 +
             param_3 * (float)((uint)param_1 ^ ((uint)param_1 ^ uVar11) & 0x7fffffff)) * INFINITY;
    }
    if (((uint)ABS(param_2) < 0x7f800000) && ((uint)ABS(param_1) < 0x7f800000)) {
      uVar11 = 0x3f800000;
      if (ABS(param_3) != INFINITY) {
        uVar11 = 0;
      }
      uVar10 = 0x3f800000;
      if (ABS(param_4) != INFINITY) {
        uVar10 = 0;
      }
      if (fVar8 == INFINITY) {
        fVar6 = (param_2 * (float)((uint)param_4 ^ ((uint)param_4 ^ uVar10) & 0x7fffffff) +
                (float)((uint)param_3 ^ ((uint)param_3 ^ uVar11) & 0x7fffffff) * param_1) * 0.0;
      }
      return fVar6;
    }
  }
  return fVar6;
}



/* Entry: 104bd35f4; end: 104bd361b;  */

void FUN_104bd35f4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)0x8;
  ___cxa_allocate_exception();
  __ZNSt20bad_array_new_lengthC1Ev();
  ___cxa_throw();
  *puVar1 = &PTR_FUN_1107e2df8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bd361c; end: 104bd361f;  */

void FUN_104bd361c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e2df8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bd3620; end: 104bd3633;  */

void FUN_104bd3620(void)

{
  func_0x000104bd5808();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bd3634; end: 104bd363f;  */

void FUN_104bd3634(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104bd581c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bd3640; end: 104bd3653;  */

void FUN_104bd3640(void)

{
  FUN_104bd4628();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bd3654; end: 104bd4627;  */

long * FUN_104bd3654(long *param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long **pplVar10;
  long **pplVar11;
  long **pplVar12;
  long **pplVar13;
  undefined8 extraout_x8;
  undefined8 *puVar14;
  undefined8 *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 *extraout_x8_03;
  long *extraout_x8_04;
  long *extraout_x8_05;
  long extraout_x8_06;
  long lVar15;
  undefined8 *extraout_x8_07;
  int extraout_w10;
  int extraout_w10_00;
  int extraout_w10_01;
  int extraout_w10_02;
  int extraout_w10_03;
  int extraout_w10_04;
  int extraout_w10_05;
  int extraout_w10_06;
  int extraout_w10_07;
  int extraout_w10_08;
  int extraout_w10_09;
  int extraout_w10_10;
  int extraout_w10_11;
  int extraout_w10_12;
  int extraout_w10_13;
  int extraout_w10_14;
  int extraout_w10_15;
  int extraout_w11;
  int extraout_w11_00;
  int extraout_w11_01;
  int extraout_w11_02;
  int extraout_w11_03;
  int extraout_w11_04;
  int extraout_w11_05;
  int extraout_w11_06;
  int extraout_w11_07;
  undefined8 uVar16;
  long lVar17;
  long *plVar18;
  long *unaff_x30;
  long *plStack_3d0;
  long *plStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  long *plStack_3b0;
  long *plStack_3a8;
  long *aplStack_3a0 [5];
  undefined1 auStack_378 [8];
  undefined1 auStack_370 [24];
  long lStack_358;
  long *plStack_350;
  long *plStack_348;
  long *plStack_340;
  long *plStack_338;
  undefined8 *puStack_330;
  undefined1 auStack_2f8 [24];
  undefined1 auStack_2e0 [72];
  undefined1 auStack_298 [48];
  undefined1 auStack_268 [48];
  undefined1 auStack_238 [48];
  undefined1 auStack_208 [48];
  undefined1 auStack_1d8 [48];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [48];
  undefined1 auStack_160 [72];
  undefined1 auStack_118 [48];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  
  pplVar10 = &plStack_3d0;
  pplVar11 = &plStack_3d0;
  pplVar12 = &plStack_3d0;
  pplVar13 = &plStack_3d0;
  func_0x00010090b5cc();
  uStack_68 = extraout_x8;
  FUN_104bd4648(&lStack_358,param_3);
  lVar15 = lStack_358;
  FUN_104bd89d0(&plStack_340,*(undefined8 *)(lStack_358 + 0xf8));
  func_0x00010b946b64(lVar15,&plStack_340);
  FUN_104bd46e0(&plStack_340);
  lVar15 = lStack_358;
  plVar7 = (long *)0x10;
  __Znwm();
  plVar7[1] = 1;
  *plVar7 = (long)&PTR_DAT_1107e6540;
  aplStack_3a0[0] = plVar7;
  do {
    func_0x000104bd5940();
  } while (extraout_w10 != 0);
  plStack_340 = plVar7;
  func_0x00010b946900(lVar15,&plStack_340);
  FUN_104bd4728(&plStack_340);
  FUN_104bd4770(aplStack_3a0);
  uVar6 = 0xa3;
  func_0x00010011bfd4("COMPOSER_DJINNI_ONE_WAY_CALLS",0x1d,0);
  uRam00000001138286d0 = uVar6;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  (**(code **)(**(long **)(lStack_358 + 0x110) + 0x58))(&plStack_340);
  func_0x00010b9a2460(auStack_370,&plStack_340);
  func_0x0001000e30f4(&plStack_340);
  lVar15 = lStack_358;
  do {
    func_0x000104bd5860();
  } while (extraout_w11 != 0);
  FUN_104bd47ac(&plStack_340,"VALDI_ENABLE_ACCESSIBILITY_TRAITS",
                "COMPOSER_ENABLE_ACCESSIBILITY_TRAITS");
  func_0x000104bd58c0();
  func_0x00010002b838(auStack_2f8,"COMPOSER_ENABLE_DEFERRED_GC");
  FUN_104bd485c(auStack_2e0,"VALDI_ENABLE_COMMONJS_MODULE_LOADER",
                "COMPOSER_ENABLE_COMMONJS_MODULE_LOADER");
  func_0x000104bd58c0();
  func_0x00010002b838(auStack_298,"COMPOSER_DISABLE_HOTRELOADER_LAZY_DENYLIST");
  func_0x000104bd58c0();
  func_0x00010002b838(auStack_268,"COMPOSER_DISABLE_SYNC_CALLS_IN_CALLING_THREAD");
  func_0x000104bd58c0();
  func_0x00010002b838(auStack_238,"COMPOSER_ENABLE_TSN");
  func_0x000104bd58c0();
  func_0x00010002b838(auStack_208,"COMPOSER_ENABLE_JSTHREAD_NUDGE");
  func_0x000104bd58c0();
  func_0x00010002b838(auStack_1d8,"COMPOSER_ENABLE_CRASH_ON_ANR");
  func_0x000104bd58c0();
  func_0x00010002b838(auStack_1a8,"COMPOSER_DISABLE_ANIMATION_REMOVE_ON_COMPLETE_IOS");
  FUN_104bd47ac(auStack_190,"VALDI_ENABLE_MMAP_MODULE_ARCHIVES",
                "COMPOSER_ENABLE_MMAP_MODULE_ARCHIVES");
  FUN_104bd485c(auStack_160,"VALDI_MMAP_MODULE_ARCHIVES_DENYLIST",
                "COMPOSER_MMAP_MODULE_ARCHIVES_DENYLIST");
  func_0x000104bd58c0();
  func_0x00010002b838(auStack_118,"COMPOSER_MANAGES_CHILD_FRAME_PADDING_ENABLED");
  func_0x000104bd58c0();
  func_0x00010002b838(auStack_e8,"COMPOSER_ENABLE_RESOLUTION_TEARDOWN_DEGRADE");
  FUN_104bd47ac(auStack_d0,"VALDI_USE_COOPERATIVE_TERMINATION",
                "COMPOSER_USE_COOPERATIVE_TERMINATION");
  func_0x000104bd58c0();
  func_0x00010002b838(auStack_88,"COMPOSER_JOIN_JS_THREAD_ON_TEARDOWN");
  FUN_104bd4884(aplStack_3a0,&plStack_340,0xf);
  lVar17 = 0x2a0;
  do {
    func_0x0001002aa0bc((long)&plStack_340 + lVar17);
    lVar3 = lStack_358;
    lVar17 = lVar17 + -0x30;
  } while (lVar17 != -0x30);
  plVar8 = (long *)0xd0;
  __Znwm();
  plVar18 = plVar8 + 1;
  *plVar18 = 0;
  plVar8[2] = 0;
  *plVar8 = (long)&PTR_FUN_1107e2e98;
  plVar7 = plVar8 + 3;
  FUN_104bd8ac8(plVar7,auStack_378,lVar3 + 0x108,aplStack_3a0);
  if ((plVar8[5] == 0) || (*(long *)(plVar8[5] + 8) == -1)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar2) {
        *plVar18 = *plVar18 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plStack_340 = plVar7;
    plStack_338 = plVar8;
    func_0x0001003a8180(plVar8 + 4,&plStack_340);
    func_0x000104bd5918();
  }
  plStack_3b0 = plVar7;
  plStack_350 = plVar7;
  if (plVar8[4] == 0) {
    plVar8 = (long *)plVar8[5];
    plStack_3a8 = plVar8;
    if (plVar8 != (long *)0x0) {
      do {
        func_0x0001003a8170();
      } while (extraout_w10_01 != 0);
    }
  }
  else {
    func_0x0001003ae9f0(&plStack_340,plVar8 + 4);
    plVar8 = plStack_338;
    if (plStack_340 == (long *)0x0) {
      plVar8 = (long *)0x0;
      plVar7 = (long *)0x0;
      plStack_3b0 = (long *)0x0;
      plStack_3a8 = (long *)0x0;
    }
    else {
      plStack_3a8 = plStack_338;
      if (plStack_338 != (long *)0x0) {
        do {
          func_0x0001003a8170();
        } while (extraout_w10_00 != 0);
      }
    }
    func_0x000104bd5918();
  }
  FUN_104bd4978(&plStack_350);
  uStack_3b8 = *(undefined8 *)(param_2 + 0x10);
  uStack_3c0 = *(undefined8 *)(param_2 + 8);
  if (*(long *)(param_2 + 0x10) != 0) {
    do {
      func_0x0001003a8170();
    } while (extraout_w10_02 != 0);
  }
  puVar9 = (undefined8 *)0x30;
  __Znwm();
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_1107e2ee8;
  plVar18 = puVar9 + 3;
  *plVar18 = (long)&PTR_FUN_1107e6458;
  plStack_3d0 = plVar18;
  plStack_3c8 = puVar9;
  plStack_350 = plVar18;
  plStack_348 = puVar9;
  do {
    func_0x0001003a8170();
  } while (extraout_w10_03 != 0);
  do {
    func_0x0001003a8170();
  } while (extraout_w10_04 != 0);
  plStack_340 = (long *)0x0;
  plStack_338 = (long *)0x0;
  puVar9[4] = plVar18;
  puVar9[5] = puVar9;
  FUN_104bd4bb0(&plStack_340);
  func_0x000104bd4bd4(&plStack_350);
  puVar14 = (undefined8 *)param_1[1];
  uVar5 = (undefined8 *)param_1[2] <= puVar14;
  uVar6 = puVar14 == (undefined8 *)param_1[2];
  if ((bool)uVar5) {
    func_0x000104bd5870();
    func_0x000104bd582c();
    func_0x000104bd5850();
    func_0x000104bd5838();
    *puStack_330 = plVar18;
    puStack_330[1] = puVar9;
    plStack_3d0 = (long *)0x0;
    plStack_3c8 = (long *)0x0;
    puStack_330 = puStack_330 + 2;
    func_0x000104bd5844();
    puVar14 = (undefined8 *)param_1[1];
    func_0x000104bd5898();
  }
  else {
    *puVar14 = plVar18;
    puVar14[1] = puVar9;
    puVar14 = puVar14 + 2;
    plStack_3d0 = (long *)0x0;
    plStack_3c8 = (long *)0x0;
  }
  param_1[1] = (long)puVar14;
  func_0x000104bd4bd4(&plStack_3d0);
  puVar9 = (undefined8 *)0x20;
  __Znwm();
  puVar9[1] = 0;
  puVar9[2] = 0;
  plVar18 = puVar9 + 3;
  *plVar18 = (long)&PTR_FUN_1107e67a8;
  *puVar9 = &PTR_FUN_1107e2f38;
  plStack_350 = plVar18;
  plStack_348 = puVar9;
  func_0x000104bd5934();
  if ((bool)uVar5) {
    func_0x000104bd5870();
    func_0x000104bd582c();
    func_0x000104bd5850();
    func_0x000104bd5838();
    *puStack_330 = plVar18;
    puStack_330[1] = puVar9;
    plStack_350 = (long *)0x0;
    plStack_348 = (undefined8 *)0x0;
    puStack_330 = puStack_330 + 2;
    func_0x000104bd5844();
    puVar9 = (undefined8 *)param_1[1];
    func_0x000104bd5898();
  }
  else {
    *extraout_x8_00 = plVar18;
    extraout_x8_00[1] = puVar9;
    puVar9 = extraout_x8_00 + 2;
    plStack_350 = (long *)0x0;
    plStack_348 = (undefined8 *)0x0;
  }
  param_1[1] = (long)puVar9;
  FUN_104bd4c24(&plStack_350);
  func_0x000104bd5934();
  if ((bool)uVar5) {
    func_0x000104bd5870();
    func_0x000104bd582c();
    func_0x000104bd5850();
    func_0x000104bd5838();
    func_0x000104bd5a44(puStack_330);
    puVar9 = extraout_x8_03;
    if (plVar8 != (long *)0x0) {
      do {
        func_0x0001003a8170();
        puVar9 = puStack_330;
      } while (extraout_w10_05 != 0);
    }
    puStack_330 = puVar9 + 2;
    func_0x000104bd5844();
    func_0x000104bd5880();
  }
  else {
    func_0x000104bd5a44();
    lVar17 = extraout_x8_01;
    if (plVar8 != (long *)0x0) {
      do {
        func_0x000104bd5908();
        lVar17 = extraout_x8_02;
      } while (extraout_w11_00 != 0);
    }
    plVar7 = (long *)(lVar17 + 0x10);
  }
  param_1[1] = (long)plVar7;
  puVar9 = (undefined8 *)0xd8;
  __Znwm();
  plVar18 = puVar9 + 1;
  *plVar18 = 0;
  puVar9[2] = 0;
  plVar7 = puVar9 + 3;
  *puVar9 = &PTR_FUN_1107e2f88;
  func_0x000105273c20(plVar7,auStack_370,lVar15 + 0x218);
  plStack_3c8 = puVar9;
  plStack_3d0 = plVar7;
  if ((puVar9[5] == 0) || (func_0x000104bd5a38(), (bool)uVar6)) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar2) {
        *plVar18 = *plVar18 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
      plStack_350 = plVar7;
      plStack_348 = puVar9;
    } while (cVar1 != '\0');
    do {
      func_0x000104bd5908();
    } while (extraout_w11_01 != 0);
    plStack_340 = (long *)puVar9[4];
    puVar9[4] = plVar7;
    puVar9[5] = puVar9;
    plStack_338 = extraout_x8_04;
    FUN_104bd4c74(&plStack_340);
    func_0x000104bd4c98(&plStack_350);
  }
  puVar9 = (undefined8 *)param_1[1];
  uVar6 = (undefined8 *)param_1[2] <= puVar9;
  if ((bool)uVar6) {
    func_0x000104bd582c((long)puVar9 - *param_1 >> 4);
    func_0x000104bd5850();
    func_0x000104bd5838();
    puStack_330[1] = plStack_3c8;
    *puStack_330 = plStack_3d0;
    plStack_3d0 = (long *)0x0;
    plStack_3c8 = (long *)0x0;
    puStack_330 = puStack_330 + 2;
    func_0x000104bd5844();
    func_0x000104bd5880();
  }
  else {
    puVar9[1] = plStack_3c8;
    *puVar9 = plStack_3d0;
    plStack_3d0 = (long *)0x0;
    plStack_3c8 = (long *)0x0;
    puVar9 = puVar9 + 2;
  }
  param_1[1] = (long)puVar9;
  func_0x000104bd4c98();
  func_0x000104bd597c();
  pplVar10[1] = (long *)0x0;
  pplVar10[2] = (long *)0x0;
  *pplVar10 = (long *)&PTR_FUN_1107e2fd8;
  func_0x000104bd5960();
  func_0x000104bd598c("Crypto");
  pplVar10[7] = (long *)0x0;
  pplVar10[8] = (long *)0x0;
  pplVar10[6] = (long *)&PTR_FUN_1107e3108;
  if (plStack_340 != (long *)0x0) {
    do {
      func_0x000104bd58f8();
    } while (extraout_w11_02 != 0);
  }
  func_0x000104bd58ec();
  func_0x000104bd59c4(&PTR_DAT_1107e3028);
  plStack_3d0 = plVar8;
  if (pplVar10[4] == (long *)0x0) {
    plVar7 = pplVar10[5];
    plStack_350 = plVar8;
    plStack_348 = plVar7;
    if (plVar7 != (long *)0x0) {
      do {
        func_0x0001003a8170();
      } while (extraout_w10_07 != 0);
    }
  }
  else {
    func_0x000104bd5920();
    plVar7 = plStack_338;
    if (plStack_340 == (long *)0x0) {
      plVar7 = (long *)0x0;
      plVar8 = (long *)0x0;
      plStack_350 = (long *)0x0;
      plStack_348 = (long *)0x0;
    }
    else {
      plStack_348 = plStack_338;
      plStack_350 = plVar8;
      if (plStack_338 != (long *)0x0) {
        do {
          func_0x0001003a8170();
        } while (extraout_w10_06 != 0);
      }
    }
    func_0x000104bd5918();
  }
  func_0x000104bd5934();
  if ((bool)uVar6) {
    func_0x000104bd5870();
    func_0x000104bd582c();
    func_0x000104bd5850();
    func_0x000104bd5838();
    func_0x000104bd58dc(puStack_330);
    func_0x000104bd59a4();
    func_0x000104bd5844();
    func_0x000104bd5880();
  }
  else {
    func_0x000104bd58dc();
    func_0x000104bd59b4();
  }
  param_1[1] = (long)plVar7;
  FUN_104bd4e94(&plStack_350);
  func_0x000104bd4eb8();
  func_0x000104bd597c();
  pplVar11[1] = (long *)0x0;
  pplVar11[2] = (long *)0x0;
  *pplVar11 = (long *)&PTR_FUN_1107e3138;
  func_0x000104bd5960();
  func_0x000104bd598c("MessagingClient");
  pplVar11[7] = (long *)0x0;
  pplVar11[8] = (long *)0x0;
  pplVar11[6] = (long *)&PTR_FUN_1107e3268;
  if (plStack_340 != (long *)0x0) {
    do {
      func_0x000104bd58f8();
    } while (extraout_w11_03 != 0);
  }
  func_0x000104bd58ec();
  func_0x000104bd59c4(&PTR_DAT_1107e3188);
  plStack_3d0 = plVar8;
  if (pplVar11[4] == (long *)0x0) {
    plVar7 = pplVar11[5];
    plStack_350 = plVar8;
    plStack_348 = plVar7;
    if (plVar7 != (long *)0x0) {
      do {
        func_0x0001003a8170();
      } while (extraout_w10_09 != 0);
    }
  }
  else {
    func_0x000104bd5920();
    plVar7 = plStack_338;
    if (plStack_340 == (long *)0x0) {
      plVar7 = (long *)0x0;
      plStack_350 = (long *)0x0;
      plStack_348 = (long *)0x0;
    }
    else {
      plStack_348 = plStack_338;
      plStack_350 = plVar8;
      if (plStack_338 != (long *)0x0) {
        do {
          func_0x0001003a8170();
        } while (extraout_w10_08 != 0);
      }
    }
    func_0x000104bd5918();
  }
  func_0x000104bd5934();
  if ((bool)uVar6) {
    func_0x000104bd5870();
    func_0x000104bd582c();
    func_0x000104bd5850();
    func_0x000104bd5838();
    func_0x000104bd58dc(puStack_330);
    func_0x000104bd59a4();
    func_0x000104bd5844();
    func_0x000104bd5880();
  }
  else {
    func_0x000104bd58dc();
    func_0x000104bd59b4();
  }
  param_1[1] = (long)plVar7;
  FUN_104bd5020(&plStack_350);
  func_0x000104bd5044();
  func_0x000104bd597c();
  pplVar12[1] = (long *)0x0;
  pplVar12[2] = (long *)0x0;
  *pplVar12 = (long *)&PTR_FUN_1107e3298;
  plVar7 = (long *)(pplVar12 + 3);
  *plVar7 = (long)&PTR_DAT_110d7ead0;
  pplVar12[4] = (long *)0x0;
  pplVar12[5] = (long *)0x0;
  func_0x000104bd598c("Profiling");
  pplVar12[7] = (long *)0x0;
  pplVar12[8] = (long *)0x0;
  pplVar12[6] = (long *)&PTR_FUN_1107e33c8;
  if (plStack_340 != (long *)0x0) {
    do {
      func_0x000104bd58f8();
    } while (extraout_w11_04 != 0);
  }
  func_0x000104bd58ec();
  func_0x000104bd59c4(&PTR_DAT_1107e32e8);
  plStack_3d0 = plVar7;
  if (pplVar12[4] == (long *)0x0) {
    plVar8 = pplVar12[5];
    plStack_350 = plVar7;
    plStack_348 = plVar8;
    if (plVar8 != (long *)0x0) {
      do {
        func_0x0001003a8170();
      } while (extraout_w10_11 != 0);
    }
  }
  else {
    func_0x000104bd5920();
    plVar8 = plStack_338;
    if (plStack_340 == (long *)0x0) {
      plVar8 = (long *)0x0;
      plVar7 = (long *)0x0;
      plStack_350 = (long *)0x0;
      plStack_348 = (long *)0x0;
    }
    else {
      plStack_348 = plStack_338;
      plStack_350 = plVar7;
      if (plStack_338 != (long *)0x0) {
        do {
          func_0x0001003a8170();
        } while (extraout_w10_10 != 0);
      }
    }
    func_0x000104bd5918();
  }
  func_0x000104bd5934();
  if ((bool)uVar6) {
    func_0x000104bd5870();
    func_0x000104bd582c();
    func_0x000104bd5850();
    func_0x000104bd5838();
    uVar5 = 1;
    uVar6 = plVar7 == (long *)0x0;
    func_0x000104bd59a4(puStack_330);
    func_0x000104bd5844();
    func_0x000104bd5880();
  }
  else {
    uVar5 = 1;
    uVar6 = plVar7 == (long *)0x0;
    func_0x000104bd59b4();
  }
  param_1[1] = (long)plVar8;
  FUN_104bd51ac(&plStack_350);
  func_0x000104bd51d0();
  plVar18 = *(long **)(lStack_358 + 0x108);
  func_0x000104bd597c();
  plVar8 = (long *)pplVar13;
  func_0x000104bd5994();
  *plVar8 = (long)&PTR_FUN_1107e33f8;
  plVar8 = plVar8 + 3;
  if ((plVar18 != (long *)0x0) && (plVar18[2] != 0)) {
    do {
      func_0x0001003a8170();
    } while (extraout_w10_12 != 0);
  }
  plStack_340 = plVar18;
  func_0x00010527c304(plVar8,&uStack_3c0,&plStack_340);
  FUN_104bd5214(&plStack_340);
  plStack_3d0 = plVar8;
  plStack_3c8 = (long *)pplVar13;
  if ((pplVar13[5] == (long *)0x0) || (func_0x000104bd5a38(), (bool)uVar6)) {
    plStack_350 = plVar8;
    plStack_348 = (long *)pplVar13;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      func_0x000104bd5908();
    } while (extraout_w11_05 != 0);
    func_0x000104bd5a24();
    FUN_104bd5244();
    func_0x000104bd5268(&plStack_350);
  }
  func_0x000104bd5934();
  if ((bool)uVar5) {
    func_0x000104bd5870();
    func_0x000104bd582c();
    func_0x000104bd5850();
    func_0x000104bd5838();
    func_0x000104bd5a10();
    func_0x000104bd5844();
    func_0x000104bd5880();
  }
  else {
    *extraout_x8_05 = (long)plVar8;
    extraout_x8_05[1] = (long)pplVar13;
    pplVar13 = (long **)(extraout_x8_05 + 2);
    plStack_3d0 = (long *)0x0;
    plStack_3c8 = (long *)0x0;
  }
  param_1[1] = (long)pplVar13;
  func_0x000104bd5268(&plStack_3d0);
  plVar18 = (long *)0x38;
  __Znwm();
  plVar8 = plVar18;
  func_0x000104bd5994();
  *plVar8 = (long)&PTR_FUN_1107e3448;
  func_0x000104bd598c("NativeClient");
  plVar8 = plVar18 + 3;
  *plVar8 = (long)&PTR_FUN_1107e3528;
  plVar18[4] = 0;
  plVar18[5] = 0;
  lVar15 = 0;
  if (plStack_340 != (long *)0x0) {
    do {
      func_0x000104bd58f8();
      lVar15 = extraout_x8_06;
    } while (extraout_w11_06 != 0);
  }
  plVar18[6] = lVar15;
  func_0x0001003a8c94(&plStack_340);
  plVar18[3] = (long)&PTR_DAT_1107e3498;
  plStack_3d0 = plVar8;
  plStack_3c8 = plVar18;
  if ((plVar18[5] == 0) || (func_0x000104bd5a38(), (bool)uVar6)) {
    plStack_350 = plVar8;
    plStack_348 = plVar18;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    do {
      func_0x000104bd5908();
    } while (extraout_w11_07 != 0);
    func_0x000104bd5a24();
    func_0x000104bd53e8();
    FUN_104bd5418(&plStack_350);
  }
  func_0x000104bd5934();
  if ((bool)uVar5) {
    func_0x000104bd5870();
    func_0x000104bd582c();
    func_0x000104bd5850();
    func_0x000104bd5838();
    func_0x000104bd5a10();
    func_0x000104bd5844();
    puVar9 = (undefined8 *)param_1[1];
    func_0x000104bd5898();
  }
  else {
    *extraout_x8_07 = plVar8;
    extraout_x8_07[1] = plVar18;
    puVar9 = extraout_x8_07 + 2;
    plStack_3d0 = (long *)0x0;
    plStack_3c8 = (long *)0x0;
  }
  param_1[1] = (long)puVar9;
  FUN_104bd5418(&plStack_3d0);
  uVar6 = plStack_3b0 == (long *)0x0;
  plStack_340 = (long *)0x0;
  if (!(bool)uVar6) {
    plStack_340 = plStack_3b0 + 4;
  }
  plStack_338 = plStack_3a8;
  if (plStack_3a8 != (long *)0x0) {
    do {
      func_0x0001003a8170();
    } while (extraout_w10_13 != 0);
  }
  func_0x00010b946940();
  func_0x000104bd543c(&plStack_340);
  if (*(long *)(param_2 + 0x18) == 0) goto LAB_104bd4344;
  uVar16 = *(undefined8 *)(lStack_358 + 0xe8);
  plVar18 = (long *)0x58;
  __Znwm();
  plVar8 = plVar18;
  func_0x000104bd5994();
  *plVar8 = (long)&PTR_FUN_1107e3558;
  plVar8 = plVar8 + 3;
  FUN_104bfde80(plVar8,(long *)(param_2 + 0x18));
  if ((plVar18[5] == 0) || (func_0x000104bd5a38(), plVar4 = plVar8, (bool)uVar6)) {
    plStack_340 = plVar8;
    plStack_338 = plVar18;
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    func_0x0001003a8180(plVar18 + 4,&plStack_340);
    func_0x000104bd5918();
    plStack_3d0 = plVar8;
    plVar4 = plVar8;
    if (plVar18[5] != 0) goto LAB_104bd431c;
  }
  else {
LAB_104bd431c:
    do {
      plStack_3d0 = plVar4;
      func_0x0001003a8170();
      plVar4 = plStack_3d0;
    } while (extraout_w10_14 != 0);
  }
  plStack_350 = plVar8;
  func_0x00010b9247ac(uVar16,&plStack_350);
  FUN_104bd548c(&plStack_350);
  FUN_104bd54bc(&plStack_3d0);
LAB_104bd4344:
  plVar7 = (long *)0x10;
  __Znwm();
  plVar7[1] = 1;
  *plVar7 = (long)&PTR_FUN_1107e35a8;
  plStack_350 = plVar7;
  do {
    func_0x000104bd5940();
  } while (extraout_w10_15 != 0);
  plStack_340 = plVar7;
  func_0x00010b946bbc(lStack_358,&plStack_340);
  FUN_104bd564c(&plStack_340);
  FUN_104bd5694(&plStack_350);
  func_0x00010048b850(&uStack_3c0);
  func_0x000104bd56d0(&plStack_3b0);
  func_0x00010028ad98(aplStack_3a0);
  FUN_104bd56f4(auStack_378);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_370);
  FUN_104bd57d8(&lStack_358);
  func_0x00010090b7c4(uStack_68);
  if ((bool)uVar6) {
    func_0x0001000df194(unaff_x30);
    return unaff_x30;
  }
  ___stack_chk_fail();
  func_0x000104bd5820();
  FUN_104bd5418(&plStack_3d0);
  func_0x00010048b850(&uStack_3c0);
  func_0x000104bd56d0(&plStack_3b0);
  func_0x00010028ad98(aplStack_3a0);
  FUN_104bd56f4(auStack_378);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_370);
  FUN_104bd573c(param_1);
  FUN_104bd57d8(&lStack_358);
  func_0x000104bd58c8();
  func_0x00010090b704();
  func_0x00010090b808();
  return param_1;
}



/* Entry: 104bd4628; end: 104bd4647;  */

void FUN_104bd4628(void)

{
  func_0x00010090b704();
  func_0x00010090b808();
  return;
}



/* Entry: 104bd4648; end: 104bd469f;  */

void FUN_104bd4648(long *param_1,long *param_2)

{
  long lVar1;
  
  if (*(char *)((long)param_2 + 9) == '\x01') {
    lVar1 = *param_2;
    if (lVar1 != 0) {
      ___dynamic_cast(lVar1,&PTR_DAT_1107e3600,&PTR_DAT_110d78728,0);
    }
    FUN_104bd46b0();
  }
  else {
    lVar1 = 0;
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 104bd46a0; end: 104bd46af;  */

ulong FUN_104bd46a0(ulong param_1)

{
  ulong uVar1;
  
  ___cxa_begin_catch();
  __ZSt9terminatev();
  if ((param_1 != 0) && (uVar1 = param_1, func_0x00010b9a5818(), (uVar1 & 1) == 0)) {
    func_0x00010b9a5890();
    func_0x00010007e5d0();
    FUN_104bd4704();
  }
  return param_1;
}



/* Entry: 104bd46b0; end: 104bd46df;  */

ulong FUN_104bd46b0(ulong param_1)

{
  ulong uVar1;
  
  if ((param_1 != 0) && (uVar1 = param_1, func_0x00010b9a5818(), (uVar1 & 1) == 0)) {
    func_0x00010b9a5890();
    func_0x00010007e5d0();
    FUN_104bd4704();
  }
  return param_1;
}



/* Entry: 104bd46e0; end: 104bd4703;  */

void FUN_104bd46e0(void)

{
  func_0x00010007e5d0();
  FUN_104bd4704();
  return;
}



/* Entry: 104bd4704; end: 104bd4727;  */

void FUN_104bd4704(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000104bd5894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 104bd4728; end: 104bd474b;  */

void FUN_104bd4728(void)

{
  func_0x00010007e5d0();
  FUN_104bd474c();
  return;
}



/* Entry: 104bd474c; end: 104bd476f;  */

void FUN_104bd474c(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000104bd5894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 104bd4770; end: 104bd47ab;  */

void FUN_104bd4770(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  func_0x00010007e5d0();
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + 8);
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
      func_0x000104bd5a04();
    }
  }
  return;
}



/* Entry: 104bd47ac; end: 104bd47d3;  */

void FUN_104bd47ac(void)

{
  func_0x000104bd59f8();
  func_0x000104bd59ec();
  return;
}



/* Entry: 104bd47d4; end: 104bd47e7;  */

void FUN_104bd47d4(void)

{
  long *plVar1;
  
  FUN_104bd47e8("basic_string");
  plVar1 = (long *)0x10;
  ___cxa_allocate_exception();
  FUN_104bd4834();
  ___cxa_throw(plVar1,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception();
  func_0x000104bd58c8();
  __ZNSt11logic_errorC2EPKc();
  *plVar1 = (long)(PTR___ZTVSt12length_error_110346b58 + 0x10);
  return;
}



/* Entry: 104bd47e8; end: 104bd4833;  */

void FUN_104bd47e8(void)

{
  long *plVar1;
  
  plVar1 = (long *)0x10;
  ___cxa_allocate_exception();
  FUN_104bd4834();
  ___cxa_throw(plVar1,PTR___ZTISt12length_error_110352238,PTR___ZNSt12length_errorD1Ev_110346170);
  ___cxa_free_exception();
  func_0x000104bd58c8();
  __ZNSt11logic_errorC2EPKc();
  *plVar1 = (long)(PTR___ZTVSt12length_error_110346b58 + 0x10);
  return;
}



/* Entry: 104bd4834; end: 104bd4837;  */

void FUN_104bd4834(long *param_1)

{
  __ZNSt11logic_errorC2EPKc();
  *param_1 = (long)(PTR___ZTVSt12length_error_110346b58 + 0x10);
  return;
}



/* Entry: 104bd4838; end: 104bd485b;  */

void FUN_104bd4838(long *param_1)

{
  __ZNSt11logic_errorC2EPKc();
  *param_1 = (long)(PTR___ZTVSt12length_error_110346b58 + 0x10);
  return;
}



/* Entry: 104bd485c; end: 104bd4883;  */

void FUN_104bd485c(void)

{
  func_0x000104bd59f8();
  func_0x000104bd59ec();
  return;
}



/* Entry: 104bd4884; end: 104bd48cb;  */

undefined8 * FUN_104bd4884(undefined8 *param_1,long param_2,long param_3)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  FUN_104bd48cc(param_1,param_2,param_2 + param_3 * 0x30);
  return param_1;
}



/* Entry: 104bd48cc; end: 104bd490b;  */

void FUN_104bd48cc(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x30) {
    func_0x0001002aa318(param_1,param_2);
  }
  return;
}



/* Entry: 104bd490c; end: 104bd494b;  */

void FUN_104bd490c(long param_1,long param_2)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    func_0x0001002aa0bc(param_2 + 0x10);
  }
  else if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_2);
  return;
}



/* Entry: 104bd494c; end: 104bd494f;  */

void FUN_104bd494c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e2e98;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bd4950; end: 104bd4963;  */

void FUN_104bd4950(void)

{
  func_0x000104bd496c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bd4964; end: 104bd4977;  */

void FUN_104bd4964(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104bd581c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bd4978; end: 104bd499b;  */

void FUN_104bd4978(void)

{
  func_0x00010007e5d0();
  FUN_104bd499c();
  return;
}



/* Entry: 104bd499c; end: 104bd49a7;  */

void FUN_104bd499c(long param_1)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (param_1 != 0) {
    uStack_18 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 8);
    func_0x0001003a90c4(&uStack_20);
    return;
  }
  return;
}



/* Entry: 104bd49a8; end: 104bd49e7;  */

ulong FUN_104bd49a8(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  ulong uVar3;
  
  if (param_2 >> 0x3c == 0) {
    uVar2 = param_1[2] - *param_1 >> 3;
    if (uVar2 <= param_2) {
      uVar2 = param_2;
    }
    if (0x7fffffffffffffef < (ulong)(param_1[2] - *param_1)) {
      uVar2 = 0xfffffffffffffff;
    }
    return uVar2;
  }
  FUN_104bd4a5c();
  func_0x00010002b82c();
  uVar3 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  uVar2 = uVar3;
  _memcpy(uVar3);
  unaff_x19[1] = uVar3;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return uVar2;
}



/* Entry: 104bd49e8; end: 104bd4a5b;  */

void FUN_104bd49e8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  
  func_0x00010002b82c();
  lVar2 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(lVar2);
  unaff_x19[1] = lVar2;
  uVar1 = *unaff_x20;
  unaff_x20[1] = uVar1;
  *unaff_x20 = unaff_x19[1];
  unaff_x19[1] = uVar1;
  uVar1 = unaff_x20[1];
  unaff_x20[1] = unaff_x19[2];
  unaff_x19[2] = uVar1;
  uVar1 = unaff_x20[2];
  unaff_x20[2] = unaff_x19[3];
  unaff_x19[3] = uVar1;
  *unaff_x19 = unaff_x19[1];
  return;
}



/* Entry: 104bd4a5c; end: 104bd4a6f;  */

long * FUN_104bd4a5c(undefined8 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)&DAT_10f62a4d8;
  FUN_104bd47e8();
  plVar2[3] = 0;
  plVar2[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000104bd4ab8();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *plVar2 = param_4;
  plVar2[1] = lVar1;
  plVar2[2] = lVar1;
  plVar2[3] = param_4 + param_2 * 0x10;
  return plVar2;
}



/* Entry: 104bd4a70; end: 104bd4adb;  */

long * FUN_104bd4a70(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000104bd4ab8();
  }
  lVar1 = param_4 + param_3 * 0x10;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x10;
  return param_1;
}



/* Entry: 104bd4adc; end: 104bd4af7;  */

long * FUN_104bd4adc(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 >> 0x3c == 0) {
    plVar1 = (long *)(param_2 << 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(plVar1);
    return plVar1;
  }
  FUN_104bd35f4();
  FUN_104bd4b24();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104bd4af8; end: 104bd4b23;  */

long * FUN_104bd4af8(long *param_1)

{
  FUN_104bd4b24();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 104bd4b24; end: 104bd4b2b;  */

void FUN_104bd4b24(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010002b82c(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x000104bd4b60();
  }
  return;
}



/* Entry: 104bd4b2c; end: 104bd4b83;  */

void FUN_104bd4b2c(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010002b82c();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x10;
    func_0x000104bd4b60();
  }
  return;
}



/* Entry: 104bd4b84; end: 104bd4b87;  */

void FUN_104bd4b84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e2ee8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bd4b88; end: 104bd4b9b;  */

void FUN_104bd4b88(void)

{
  func_0x000104bd4ba4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bd4b9c; end: 104bd4baf;  */

void FUN_104bd4b9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104bd581c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bd4bb0; end: 104bd4bf7;  */

void FUN_104bd4bb0(long param_1)

{
  func_0x0001003a81cc();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 104bd4bf8; end: 104bd4bfb;  */

void FUN_104bd4bf8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e2f38;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bd4bfc; end: 104bd4c0f;  */

void FUN_104bd4bfc(void)

{
  func_0x000104bd4c18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bd4c10; end: 104bd4c23;  */

void FUN_104bd4c10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104bd581c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bd4c24; end: 104bd4c47;  */

void FUN_104bd4c24(long param_1)

{
  func_0x0001003a81cc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bd4c48; end: 104bd4c4b;  */

void FUN_104bd4c48(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e2f88;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bd4c4c; end: 104bd4c5f;  */

void FUN_104bd4c4c(void)

{
  func_0x000104bd4c68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bd4c60; end: 104bd4c73;  */

void FUN_104bd4c60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104bd581c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bd4c74; end: 104bd4cbb;  */

void FUN_104bd4c74(long param_1)

{
  func_0x0001003a81cc();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 104bd4cbc; end: 104bd4cbf;  */

void FUN_104bd4cbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e2fd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bd4cc0; end: 104bd4cd3;  */

void FUN_104bd4cc0(void)

{
  func_0x000104bd4e88();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bd4cd4; end: 104bd4cdf;  */

void FUN_104bd4cd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104bd581c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bd4ce0; end: 104bd4cf3;  */

void FUN_104bd4ce0(void)

{
  func_0x000104bd4dd0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bd4cf4; end: 104bd4d23;  */

void FUN_104bd4cf4(long param_1)

{
  func_0x0001002aa0b0(param_1 + -0x18);
  FUN_104bd4d9c();
  func_0x000104bd59d4();
  return;
}



/* Entry: 104bd4d24; end: 104bd4d83;  */

void FUN_104bd4d24(void)

{
  undefined8 extraout_x8;
  int extraout_w11;
  int extraout_w11_00;
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x000104bd58ac();
  if (lStack_30 == 0) {
    uStack_28 = 0;
  }
  else {
    do {
      func_0x000104bd5860();
    } while (extraout_w11 != 0);
    do {
      func_0x000104bd5860();
      uStack_28 = extraout_x8;
    } while (extraout_w11_00 != 0);
  }
  FUN_104bdbaf4(&uStack_28);
  func_0x000104bd5950();
  func_0x000104bd5984();
  func_0x000104bd58a0();
  func_0x000104bd5958();
  return;
}



/* Entry: 104bd4d84; end: 104bd4d87;  */

long FUN_104bd4d84(long param_1)

{
  func_0x000104bd59dc(&PTR_FUN_1107e3108);
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 104bd4d88; end: 104bd4d9b;  */

void FUN_104bd4d88(void)

{
  FUN_104bd4d9c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bd4d9c; end: 104bd4e3f;  */

long FUN_104bd4d9c(long param_1)

{
  func_0x000104bd59dc(&PTR_FUN_1107e3108);
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 104bd4e40; end: 104bd4e63;  */

void FUN_104bd4e40(void)

{
  func_0x00010007e5d0();
  FUN_104bd4e64();
  return;
}



/* Entry: 104bd4e64; end: 104bd4e93;  */

void FUN_104bd4e64(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1 != (long *)0x0) {
    plVar1 = param_1 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000104bd5894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))();
      return;
    }
  }
  return;
}



/* Entry: 104bd4e94; end: 104bd4edb;  */

void FUN_104bd4e94(long param_1)

{
  func_0x0001003a81cc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bd4edc; end: 104bd4edf;  */

void FUN_104bd4edc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e3138;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bd4ee0; end: 104bd4ef3;  */

void FUN_104bd4ee0(void)

{
  FUN_104bd5014();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bd4ef4; end: 104bd4eff;  */

void FUN_104bd4ef4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104bd581c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bd4f00; end: 104bd4f13;  */

void FUN_104bd4f00(void)

{
  func_0x000104bd4ff0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bd4f14; end: 104bd4f43;  */

void FUN_104bd4f14(long param_1)

{
  func_0x0001002aa0b0(param_1 + -0x18);
  FUN_104bd4fbc();
  func_0x000104bd59d4();
  return;
}



/* Entry: 104bd4f44; end: 104bd4fa3;  */

void FUN_104bd4f44(void)

{
  undefined8 extraout_x8;
  int extraout_w11;
  int extraout_w11_00;
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x000104bd58ac();
  if (lStack_30 == 0) {
    uStack_28 = 0;
  }
  else {
    do {
      func_0x000104bd5860();
    } while (extraout_w11 != 0);
    do {
      func_0x000104bd5860();
      uStack_28 = extraout_x8;
    } while (extraout_w11_00 != 0);
  }
  FUN_104bf75ec(&uStack_28);
  func_0x000104bd5950();
  func_0x000104bd5984();
  func_0x000104bd58a0();
  func_0x000104bd5958();
  return;
}



/* Entry: 104bd4fa4; end: 104bd4fa7;  */

long FUN_104bd4fa4(long param_1)

{
  func_0x000104bd59dc(&PTR_FUN_1107e3268);
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 104bd4fa8; end: 104bd4fbb;  */

void FUN_104bd4fa8(void)

{
  FUN_104bd4fbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bd4fbc; end: 104bd5013;  */

long FUN_104bd4fbc(long param_1)

{
  func_0x000104bd59dc(&PTR_FUN_1107e3268);
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 104bd5014; end: 104bd501f;  */

void FUN_104bd5014(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e3138;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bd5020; end: 104bd5067;  */

void FUN_104bd5020(long param_1)

{
  func_0x0001003a81cc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bd5068; end: 104bd506b;  */

void FUN_104bd5068(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e3298;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bd506c; end: 104bd507f;  */

void FUN_104bd506c(void)

{
  FUN_104bd51a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bd5080; end: 104bd508b;  */

void FUN_104bd5080(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104bd581c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bd508c; end: 104bd509f;  */

void FUN_104bd508c(void)

{
  func_0x000104bd517c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bd50a0; end: 104bd50cf;  */

void FUN_104bd50a0(long param_1)

{
  func_0x0001002aa0b0(param_1 + -0x18);
  FUN_104bd5148();
  func_0x000104bd59d4();
  return;
}



/* Entry: 104bd50d0; end: 104bd512f;  */

void FUN_104bd50d0(void)

{
  undefined8 extraout_x8;
  int extraout_w11;
  int extraout_w11_00;
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x000104bd58ac();
  if (lStack_30 == 0) {
    uStack_28 = 0;
  }
  else {
    do {
      func_0x000104bd5860();
    } while (extraout_w11 != 0);
    do {
      func_0x000104bd5860();
      uStack_28 = extraout_x8;
    } while (extraout_w11_00 != 0);
  }
  FUN_104bfc66c(&uStack_28);
  func_0x000104bd5950();
  func_0x000104bd5984();
  func_0x000104bd58a0();
  func_0x000104bd5958();
  return;
}



/* Entry: 104bd5130; end: 104bd5133;  */

long FUN_104bd5130(long param_1)

{
  func_0x000104bd59dc(&PTR_FUN_1107e33c8);
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 104bd5134; end: 104bd5147;  */

void FUN_104bd5134(void)

{
  FUN_104bd5148();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bd5148; end: 104bd519f;  */

long FUN_104bd5148(long param_1)

{
  func_0x000104bd59dc(&PTR_FUN_1107e33c8);
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return param_1;
}



/* Entry: 104bd51a0; end: 104bd51ab;  */

void FUN_104bd51a0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e3298;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bd51ac; end: 104bd51f3;  */

void FUN_104bd51ac(long param_1)

{
  func_0x0001003a81cc();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 104bd51f4; end: 104bd51f7;  */

void FUN_104bd51f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e33f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bd51f8; end: 104bd520b;  */

void FUN_104bd51f8(void)

{
  FUN_104bd5238();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 104bd520c; end: 104bd5213;  */

void FUN_104bd520c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104bd581c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(param_1 + 0x18))();
  return;
}



/* Entry: 104bd5214; end: 104bd5237;  */

void FUN_104bd5214(void)

{
  func_0x00010007e5d0();
  func_0x0001003acbf4();
  return;
}



/* Entry: 104bd5238; end: 104bd5243;  */

void FUN_104bd5238(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e33f8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bd5244; end: 104bd528b;  */

void FUN_104bd5244(long param_1)

{
  func_0x0001003a81cc();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 104bd528c; end: 104bd528f;  */

void FUN_104bd528c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1107e3448;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 104bd5290; end: 104bd52a3;  */

void FUN_104bd5290(void)

{
  FUN_104bd540c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


