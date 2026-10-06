/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109543cf0; end: 109543db7;  */

undefined8 * FUN_109543cf0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  *param_1 = 0;
  param_1[1] = 0xffffffffffffffff;
  lVar3 = *(long *)(*param_2 + 0x10);
  lVar4 = *(long *)(param_2[1] + 0x10);
  puVar5 = param_1 + 2;
  *puVar5 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (lVar3 != 0 && lVar4 != 0) {
    lVar1 = 0;
    if (lVar4 != 0) {
      lVar1 = 0x7fffffffffffffff / lVar4;
    }
    if (lVar1 < lVar3) {
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x109543da0);
      (*pcVar2)();
    }
  }
  FUN_1093c3d54(puVar5,lVar4 * lVar3);
  *param_1 = param_1[2];
  param_1[1] = param_1[3];
  FUN_109543494(puVar5,param_2,param_2[1]);
  return param_1;
}



/* Entry: 109543db8; end: 109543e2b;  */

uint FUN_109543db8(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar2 = 0;
  if (lVar3 != *(long *)(param_1 + 8)) {
    lVar2 = (lVar3 - *(long *)(param_1 + 8) >> 3) * 0x55 + -1;
  }
  uVar4 = lVar2 - (*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20));
  if (uVar4 < 0x55) {
    param_2 = 1;
  }
  uVar1 = 0;
  if (uVar4 < 0xaa) {
    uVar1 = param_2;
  }
  if ((uVar1 & 1) == 0) {
    __ZdlPv(*(undefined8 *)(lVar3 + -8));
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -8;
  }
  return uVar1 ^ 1;
}



/* Entry: 109543e2c; end: 109544cff;  */

/* WARNING: Removing unreachable block (ram,0x000109544a20) */
/* WARNING: Removing unreachable block (ram,0x000109544a24) */
/* WARNING: Removing unreachable block (ram,0x000109544a40) */

void FUN_109543e2c(undefined8 *param_1,int *param_2,undefined8 param_3,long param_4)

{
  ulong *puVar1;
  long lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int *piVar7;
  code *pcVar8;
  long **pplVar9;
  ulong *puVar10;
  long ***ppplVar11;
  int iVar12;
  ulong uVar13;
  long **pplVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long **pplVar18;
  long *plVar19;
  int *piVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  undefined8 *puVar24;
  long lVar25;
  long *plVar26;
  undefined8 uVar27;
  long ***ppplVar28;
  ulong *puVar29;
  undefined **ppuStack_330;
  long *plStack_328;
  ulong uStack_320;
  int *piStack_318;
  undefined8 uStack_310;
  undefined4 uStack_308;
  long *plStack_300;
  long *plStack_2f8;
  undefined8 uStack_2f0;
  undefined **ppuStack_2e0;
  undefined8 uStack_2d8;
  ulong uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined4 uStack_2b8;
  undefined **ppuStack_2b0;
  undefined8 uStack_2a8;
  ulong uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined4 uStack_288;
  long *plStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  long *plStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  long **pplStack_250;
  long **pplStack_248;
  long **pplStack_240;
  undefined8 uStack_238;
  long *plStack_230;
  undefined4 uStack_228;
  long *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long **pplStack_200;
  long **pplStack_1f8;
  undefined8 uStack_1f0;
  long *plStack_1e8;
  long *plStack_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined8 uStack_1bc;
  undefined8 uStack_1b4;
  undefined8 uStack_1ac;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 uStack_198;
  undefined4 *puStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 uStack_13c;
  undefined4 uStack_134;
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
  long *plStack_d0;
  long *plStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  long *plStack_b0;
  ulong uStack_a8;
  int *piStack_a0;
  int *piStack_98;
  
  plVar26 = (long *)(param_2 + 2);
  plVar21 = (long *)*plVar26;
  plVar19 = *(long **)(param_2 + 4);
  iVar12 = *(int *)(param_4 + 0x18);
  if (plVar19 == plVar21) {
    if (0 < iVar12) {
      lVar25 = 0;
      lVar22 = 8;
      do {
        uVar15 = *(ulong *)(param_4 + 0x10);
        puVar1 = (ulong *)(param_4 + 0x10);
        if ((uVar15 & 1) != 0) {
          puVar1 = (ulong *)(uVar15 + lVar22 + -1);
        }
        uVar15 = *(ulong *)(*puVar1 + 0x18);
        puVar29 = (ulong *)(*puVar1 + 0x18);
        if ((uVar15 & 1) != 0) {
          puVar29 = (ulong *)(uVar15 + 7);
        }
        if (*(float *)(*(long *)(param_2 + 10) + 0x3c) < *(float *)(*puVar29 + 0x1c)) {
          uStack_134 = *(undefined4 *)(*(long *)(param_2 + 10) + 0x38);
          pplStack_200 = pplRam000000011382a400;
          pplStack_1f8 = (long **)&PTR_FUN_110af0d50;
          uStack_1f0 = 0;
          plStack_1e8 = (long *)&DAT_11383d918;
          plStack_1e0 = (long *)0x0;
          uStack_1d8 = 0;
          uStack_1d0 = 0x42ff0000;
          uStack_198 = 0;
          uStack_19c = 0;
          uStack_1a4 = 0;
          uStack_1a0 = 0;
          uStack_1ac = 0;
          uStack_1b4 = 0;
          uStack_1bc = 0;
          uStack_1c4 = 0;
          uStack_1c0 = 0;
          uStack_1cc = 0;
          uStack_1c8 = 0;
          uStack_140 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
          uStack_168 = 0;
          uStack_170 = 0;
          uStack_13c = 1;
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          pplRam000000011382a400 = (long **)((long)pplRam000000011382a400 + 1);
          puStack_190 = &uStack_1c8;
          puStack_188 = &uStack_180;
          FUN_10953bf24(&pplStack_200,param_3,*puVar1,*param_2);
          ppplVar11 = &pplStack_200;
          FUN_1095474a8(&pplStack_250);
          plVar21 = *(long **)(param_2 + 4);
          if (plVar21 < *(long **)(param_2 + 6)) {
            plVar19 = plVar21 + 2;
            plVar21[1] = (long)pplStack_248;
            *plVar21 = (long)pplStack_250;
          }
          else {
            lVar23 = (long)plVar21 - *plVar26;
            uVar15 = (lVar23 >> 4) + 1;
            if (uVar15 >> 0x3c != 0) {
              FUN_109545000();
              goto LAB_109544bd0;
            }
            uVar13 = (long)*(long **)(param_2 + 6) - *plVar26;
            uVar16 = (long)uVar13 >> 3;
            if (uVar16 <= uVar15) {
              uVar16 = uVar15;
            }
            if (0x7fffffffffffffef < uVar13) {
              uVar16 = 0xfffffffffffffff;
            }
            plStack_b0 = plVar26;
            FUN_109545014();
            lVar2 = *(long *)(param_2 + 2);
            plVar21 = (long *)(uVar16 + lVar23);
            lVar23 = (long)plVar21 - (*(long *)(param_2 + 4) - lVar2);
            plVar19 = plVar21 + 2;
            plVar21[1] = (long)pplStack_248;
            *plVar21 = (long)pplStack_250;
            _memcpy(lVar23,lVar2);
            plStack_d0 = *(long **)(param_2 + 2);
            *(long *)(param_2 + 2) = lVar23;
            *(long **)(param_2 + 4) = plVar19;
            plStack_b8 = *(long **)(param_2 + 6);
            *(ulong *)(param_2 + 6) = uVar16 + (long)ppplVar11 * 0x10;
            plStack_c8 = plStack_d0;
            plStack_c0 = plStack_d0;
            func_0x000109545048(&plStack_d0);
          }
          *(long **)(param_2 + 4) = plVar19;
          FUN_109545094(&pplStack_200);
          iVar12 = *(int *)(param_4 + 0x18);
        }
        lVar25 = lVar25 + 1;
        lVar22 = lVar22 + 8;
      } while (lVar25 < iVar12);
    }
  }
  else if (iVar12 != 0) {
    plStack_268 = (long *)0x0;
    uStack_260 = 0;
    uStack_258 = 0;
    plStack_280 = (long *)0x0;
    uStack_278 = 0;
    uStack_270 = 0;
    do {
      lVar25 = *plVar21;
      if (*(uint *)(lVar25 + 0xc0) == 0) {
        pplVar9 = &plStack_280;
LAB_109543ec0:
        FUN_109544d00(pplVar9,plVar21);
      }
      else if (*(uint *)(lVar25 + 0xc0) < 3) {
        iVar12 = (int)lVar25 + 0xd0;
        FUN_10953c4d4();
        if (iVar12 != 0) {
          FUN_10953c314(lVar25);
        }
        pplVar9 = &plStack_268;
        goto LAB_109543ec0;
      }
      plVar21 = plVar21 + 2;
    } while (plVar21 != plVar19);
    ppuStack_2b0 = &PTR_FUN_110af16c8;
    uStack_2a8 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    uStack_2a0 = 0;
    uStack_288 = 0;
    ppuStack_2e0 = &PTR_FUN_110af16c8;
    uStack_2d8 = 0;
    uStack_2c8 = 0;
    uStack_2c0 = 0;
    uStack_2d0 = 0;
    uStack_2b8 = 0;
    if (0 < *(int *)(param_4 + 0x18)) {
      lVar25 = 0;
      puVar1 = (ulong *)(param_4 + 0x10);
      lVar22 = 8;
      do {
        puVar29 = puVar1;
        if ((*puVar1 & 1) != 0) {
          puVar29 = (ulong *)(*puVar1 + lVar22 + -1);
        }
        uVar15 = *(ulong *)(*puVar29 + 0x18);
        puVar29 = (ulong *)(*puVar29 + 0x18);
        if ((uVar15 & 1) != 0) {
          puVar29 = (ulong *)(uVar15 + 7);
        }
        if (*(float *)(*puVar29 + 0x1c) <= *(float *)(*(long *)(param_2 + 10) + 0x40)) {
          if (*(float *)(*(long *)(param_2 + 10) + 0x44) < *(float *)(*puVar29 + 0x1c)) {
            puVar10 = &uStack_2d0;
            func_0x000107c303b0(&uStack_2d0,FUN_10935032c);
            puVar29 = puVar1;
            if ((*puVar1 & 1) != 0) {
              puVar29 = (ulong *)(*puVar1 + lVar22 + -1);
            }
            puVar29 = (ulong *)*puVar29;
            if (puVar29 != puVar10) {
              FUN_10934fa58(puVar10);
              FUN_10934fe10(puVar10,puVar29);
            }
          }
        }
        else {
          puVar10 = &uStack_2a0;
          func_0x000107c303b0(&uStack_2a0,FUN_10935032c);
          puVar29 = puVar1;
          if ((*puVar1 & 1) != 0) {
            puVar29 = (ulong *)(*puVar1 + lVar22 + -1);
          }
          puVar29 = (ulong *)*puVar29;
          if (puVar29 != puVar10) {
            FUN_10934fa58(puVar10);
            FUN_10934fe10(puVar10,puVar29);
          }
        }
        lVar25 = lVar25 + 1;
        lVar22 = lVar22 + 8;
      } while (lVar25 < *(int *)(param_4 + 0x18));
    }
    plStack_300 = (long *)0x0;
    plStack_2f8 = (long *)0x0;
    uStack_2f0 = 0;
    ppuStack_330 = &PTR_FUN_110af16c8;
    plStack_328 = (long *)0x0;
    piStack_318 = (int *)0x0;
    uStack_310 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    FUN_109545160(0x3dcccccd,&pplStack_200,&plStack_268,&ppuStack_2b0,param_2 + 8,1);
    pplVar14 = pplStack_1f8;
    plVar21 = plStack_1e8;
    plVar19 = plStack_1e0;
    for (pplVar9 = pplStack_200; plStack_1e8 = plVar21, plStack_1e0 = plVar19, pplVar9 != pplVar14;
        pplVar9 = pplVar9 + 2) {
      lVar25 = plStack_268[(long)*pplVar9 * 2];
      puVar1 = &uStack_2a0;
      if ((uStack_2a0 & 1) != 0) {
        puVar1 = (ulong *)(uStack_2a0 + (long)*(int *)(pplVar9 + 1) * 8 + 7);
      }
      uVar15 = *puVar1;
      if (*(int *)(lVar25 + 0xc0) == 2) {
        *(undefined4 *)(lVar25 + 0xc0) = 4;
      }
      *(int *)(lVar25 + 0xc4) = *(int *)(lVar25 + 0xc4) + 1;
      *(undefined4 *)(lVar25 + 200) = 0;
      FUN_10953c780(lVar25,uVar15,*param_2);
      if ((*(int *)(lVar25 + 0xc0) == 0) &&
         (*(int *)(*(long *)(param_2 + 10) + 0x20) <= *(int *)(lVar25 + 0xc4))) {
        *(undefined4 *)(lVar25 + 0xc0) = 1;
      }
      plVar21 = plStack_1e8;
      plVar19 = plStack_1e0;
    }
    plStack_220 = (long *)0x0;
    uStack_218 = 0;
    uStack_210 = 0;
    for (; plVar21 != plVar19; plVar21 = plVar21 + 1) {
      lVar25 = plStack_268[*plVar21 * 2];
      iVar12 = *(int *)(lVar25 + 200);
      if (iVar12 == 0) {
        FUN_109544d00(&plStack_220);
      }
      else {
        *(undefined4 *)(*(long *)(lVar25 + 0xd8) + 0x1c) = 0;
        *(int *)(lVar25 + 200) = iVar12 + 1;
      }
    }
    pplStack_250 = (long **)&PTR_FUN_110af16c8;
    pplStack_248 = (long **)0x0;
    uStack_238 = 0;
    plStack_230 = (long *)0x0;
    pplStack_240 = (long **)0x0;
    uStack_228 = 0;
    puVar24 = (undefined8 *)CONCAT44(uStack_1c4,uStack_1c8);
    plStack_d0 = plStack_220;
    plStack_c8 = (long *)uStack_218;
    plStack_c0 = (long *)uStack_210;
    for (puVar3 = (undefined8 *)CONCAT44(uStack_1cc,uStack_1d0); puVar3 != puVar24;
        puVar3 = puVar3 + 1) {
      uVar27 = *puVar3;
      ppplVar11 = &pplStack_240;
      plStack_220 = plStack_d0;
      uStack_218 = plStack_c8;
      uStack_210 = plStack_c0;
      func_0x000107c303b0(ppplVar11,FUN_10935032c);
      puVar1 = &uStack_2a0;
      if ((uStack_2a0 & 1) != 0) {
        puVar1 = (ulong *)(uStack_2a0 + (long)(int)uVar27 * 8 + 7);
      }
      ppplVar28 = (long ***)*puVar1;
      if (ppplVar28 != ppplVar11) {
        FUN_10934fa58(ppplVar11);
        FUN_10934fe10(ppplVar11,ppplVar28);
      }
      plStack_d0 = plStack_220;
      plStack_c8 = (long *)uStack_218;
      plStack_c0 = (long *)uStack_210;
    }
    uStack_218 = 0;
    uStack_210 = 0;
    plStack_220 = (long *)0x0;
    FUN_1095472b8(&plStack_b8,0,&pplStack_250);
    FUN_10934ffa0(&pplStack_250);
    pplStack_250 = &plStack_220;
    FUN_10954737c(&pplStack_250);
    if (CONCAT44(uStack_1cc,uStack_1d0) != 0) {
      uStack_1c8 = uStack_1d0;
      uStack_1c4 = uStack_1cc;
      __ZdlPv();
    }
    if (plStack_1e8 != (long *)0x0) {
      plStack_1e0 = plStack_1e8;
      __ZdlPv();
    }
    if (pplStack_200 != (long **)0x0) {
      pplStack_1f8 = pplStack_200;
      __ZdlPv();
    }
    plVar19 = plStack_300;
    plVar21 = plStack_2f8;
    if (plStack_300 != (long *)0x0) {
      while (plVar21 != plVar19) {
        plVar21 = plVar21 + -2;
        func_0x000109547450();
      }
      plStack_2f8 = plVar19;
      __ZdlPv(plStack_300);
    }
    piVar20 = piStack_318;
    uVar15 = uStack_320;
    plVar21 = plStack_328;
    plStack_2f8 = plStack_c8;
    plStack_300 = plStack_d0;
    uStack_2f0 = plStack_c0;
    plStack_c8 = (long *)0x0;
    plStack_c0 = (long *)0x0;
    plStack_d0 = (long *)0x0;
    plVar19 = plStack_328;
    if (((ulong)plStack_328 & 1) != 0) {
      plVar19 = *(long **)((ulong)plStack_328 & 0xfffffffffffffffe);
    }
    plVar17 = plStack_b0;
    if (((ulong)plStack_b0 & 1) != 0) {
      plVar17 = *(long **)((ulong)plStack_b0 & 0xfffffffffffffffe);
    }
    if (plVar19 == plVar17) {
      plStack_328 = plStack_b0;
      plStack_b0 = plVar21;
      piStack_318 = piStack_a0;
      uStack_320 = uStack_a8;
      piStack_a0 = piVar20;
      uStack_a8 = uVar15;
    }
    else {
      FUN_10934fff8(&ppuStack_330);
      FUN_109350260(&ppuStack_330,&plStack_b8);
    }
    FUN_10934ffa0(&plStack_b8);
    pplStack_200 = &plStack_d0;
    FUN_10954737c(&pplStack_200);
    FUN_109545160(0x3e99999a,&plStack_d0,&plStack_280,&ppuStack_330,param_2 + 8,1);
    plVar19 = plStack_c8;
    piVar20 = piStack_a0;
    piVar7 = piStack_98;
    for (plVar21 = plStack_d0; piStack_a0 = piVar20, piStack_98 = piVar7, plVar21 != plVar19;
        plVar21 = plVar21 + 2) {
      lVar25 = plStack_280[*plVar21 * 2];
      puVar1 = &uStack_320;
      if ((uStack_320 & 1) != 0) {
        puVar1 = (ulong *)(uStack_320 + (long)(int)plVar21[1] * 8 + 7);
      }
      uVar15 = *puVar1;
      if (*(int *)(lVar25 + 0xc0) == 2) {
        *(undefined4 *)(lVar25 + 0xc0) = 4;
      }
      *(int *)(lVar25 + 0xc4) = *(int *)(lVar25 + 0xc4) + 1;
      *(undefined4 *)(lVar25 + 200) = 0;
      FUN_10953c780(lVar25,uVar15,*param_2);
      if ((*(int *)(lVar25 + 0xc0) == 0) &&
         (*(int *)(*(long *)(param_2 + 10) + 0x20) <= *(int *)(lVar25 + 0xc4))) {
        *(undefined4 *)(lVar25 + 0xc0) = 1;
      }
      piVar20 = piStack_a0;
      piVar7 = piStack_98;
    }
    plVar21 = plStack_b8;
    if (piVar20 != piVar7) {
      do {
        puVar1 = &uStack_320;
        if ((uStack_320 & 1) != 0) {
          puVar1 = (ulong *)(uStack_320 + (long)*piVar20 * 8 + 7);
        }
        puVar29 = (ulong *)(*puVar1 + 0x18);
        uVar15 = *puVar29;
        if ((uVar15 & 1) != 0) {
          puVar29 = (ulong *)(uVar15 + 7);
        }
        if (*(float *)(*(long *)(param_2 + 10) + 0x3c) < *(float *)(*puVar29 + 0x1c)) {
          uStack_134 = *(undefined4 *)(*(long *)(param_2 + 10) + 0x38);
          pplStack_200 = pplRam000000011382a400;
          pplStack_1f8 = (long **)&PTR_FUN_110af0d50;
          uStack_1f0 = 0;
          plStack_1e8 = (long *)&DAT_11383d918;
          plStack_1e0 = (long *)0x0;
          uStack_1d8 = 0;
          uStack_1d0 = 0x42ff0000;
          uStack_198 = 0;
          uStack_19c = 0;
          uStack_1a4 = 0;
          uStack_1a0 = 0;
          uStack_1ac = 0;
          uStack_1b4 = 0;
          uStack_1bc = 0;
          uStack_1c4 = 0;
          uStack_1c0 = 0;
          uStack_1cc = 0;
          uStack_1c8 = 0;
          uStack_140 = 0;
          uStack_158 = 0;
          uStack_160 = 0;
          uStack_148 = 0;
          uStack_150 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
          uStack_168 = 0;
          uStack_170 = 0;
          uStack_13c = 1;
          uStack_e8 = 0;
          uStack_f0 = 0;
          uStack_d8 = 0;
          uStack_e0 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          uStack_120 = 0;
          pplRam000000011382a400 = (long **)((long)pplRam000000011382a400 + 1);
          puStack_190 = &uStack_1c8;
          puStack_188 = &uStack_180;
          FUN_10953bf24(&pplStack_200,param_3,*puVar1,*param_2);
          ppplVar11 = &pplStack_200;
          FUN_1095474a8(&plStack_220);
          puVar3 = *(undefined8 **)(param_2 + 4);
          if (puVar3 < *(undefined8 **)(param_2 + 6)) {
            puVar24 = puVar3 + 2;
            puVar3[1] = uStack_218;
            *puVar3 = plStack_220;
          }
          else {
            lVar25 = (long)puVar3 - *plVar26;
            uVar15 = (lVar25 >> 4) + 1;
            if (uVar15 >> 0x3c != 0) {
              FUN_109545000();
LAB_109544bd0:
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x109544bd4);
              (*pcVar8)();
            }
            uVar13 = (long)*(undefined8 **)(param_2 + 6) - *plVar26;
            uVar16 = (long)uVar13 >> 3;
            if (uVar16 <= uVar15) {
              uVar16 = uVar15;
            }
            if (0x7fffffffffffffef < uVar13) {
              uVar16 = 0xfffffffffffffff;
            }
            plStack_230 = plVar26;
            FUN_109545014();
            lVar22 = *(long *)(param_2 + 2);
            puVar3 = (undefined8 *)(uVar16 + lVar25);
            lVar25 = (long)puVar3 - (*(long *)(param_2 + 4) - lVar22);
            puVar24 = puVar3 + 2;
            puVar3[1] = uStack_218;
            *puVar3 = plStack_220;
            _memcpy(lVar25,lVar22);
            pplStack_250 = *(long ***)(param_2 + 2);
            *(long *)(param_2 + 2) = lVar25;
            *(undefined8 **)(param_2 + 4) = puVar24;
            uStack_238 = *(undefined8 *)(param_2 + 6);
            *(ulong *)(param_2 + 6) = uVar16 + (long)ppplVar11 * 0x10;
            pplStack_248 = pplStack_250;
            pplStack_240 = pplStack_250;
            func_0x000109545048(&pplStack_250);
          }
          *(undefined8 **)(param_2 + 4) = puVar24;
          FUN_109545094(&pplStack_200);
        }
        piVar20 = piVar20 + 2;
        plVar21 = plStack_b8;
      } while (piVar20 != piVar7);
    }
    for (; plVar21 != plStack_b0; plVar21 = plVar21 + 1) {
      *(undefined4 *)(plStack_280[*plVar21 * 2] + 0xc0) = 3;
    }
    if (piStack_a0 != (int *)0x0) {
      piStack_98 = piStack_a0;
      __ZdlPv(piStack_a0);
    }
    if (plStack_b8 != (long *)0x0) {
      plStack_b0 = plStack_b8;
      __ZdlPv();
    }
    if (plStack_d0 != (long *)0x0) {
      plStack_c8 = plStack_d0;
      __ZdlPv();
    }
    FUN_109545160(0x3f000000,&pplStack_200,&plStack_300,&ppuStack_2e0,param_2 + 8,0);
    pplVar14 = pplStack_1f8;
    for (pplVar9 = pplStack_200; plVar21 = plStack_1e8, pplVar9 != pplVar14; pplVar9 = pplVar9 + 2)
    {
      lVar25 = plStack_300[(long)*pplVar9 * 2];
      puVar1 = &uStack_2d0;
      if ((uStack_2d0 & 1) != 0) {
        puVar1 = (ulong *)(uStack_2d0 + (long)*(int *)(pplVar9 + 1) * 8 + 7);
      }
      uVar15 = *puVar1;
      if (*(int *)(lVar25 + 0xc0) == 2) {
        *(undefined4 *)(lVar25 + 0xc0) = 4;
      }
      *(int *)(lVar25 + 0xc4) = *(int *)(lVar25 + 0xc4) + 1;
      *(undefined4 *)(lVar25 + 200) = 0;
      FUN_10953c780(lVar25,uVar15,*param_2);
      if ((*(int *)(lVar25 + 0xc0) == 0) &&
         (*(int *)(*(long *)(param_2 + 10) + 0x20) <= *(int *)(lVar25 + 0xc4))) {
        *(undefined4 *)(lVar25 + 0xc0) = 1;
      }
    }
    for (; plVar21 != plStack_1e0; plVar21 = plVar21 + 1) {
      lVar25 = plStack_300[*plVar21 * 2];
      *(undefined4 *)(*(long *)(lVar25 + 0xd8) + 0x1c) = 0;
      *(int *)(lVar25 + 200) = *(int *)(lVar25 + 200) + 1;
      *(undefined4 *)(lVar25 + 0xc0) = 2;
    }
    if (CONCAT44(uStack_1cc,uStack_1d0) != 0) {
      uStack_1c8 = uStack_1d0;
      uStack_1c4 = uStack_1cc;
      __ZdlPv(CONCAT44(uStack_1cc,uStack_1d0));
    }
    if (plStack_1e8 != (long *)0x0) {
      plStack_1e0 = plStack_1e8;
      __ZdlPv();
    }
    if (pplStack_200 != (long **)0x0) {
      pplStack_1f8 = pplStack_200;
      __ZdlPv();
    }
    FUN_10934ffa0(&ppuStack_330);
    pplStack_200 = &plStack_300;
    FUN_10954737c(&pplStack_200);
    FUN_10934ffa0(&ppuStack_2e0);
    FUN_10934ffa0(&ppuStack_2b0);
    pplStack_200 = &plStack_280;
    FUN_10954737c(&pplStack_200);
    pplStack_200 = &plStack_268;
    FUN_10954737c(&pplStack_200);
  }
  plVar26 = *(long **)(param_2 + 2);
  plVar19 = *(long **)(param_2 + 4);
  plVar21 = plVar26;
  if (plVar26 == plVar19) {
LAB_109544a10:
    if (plVar21 != plVar19) {
      while (plVar19 != plVar21) {
        plVar19 = plVar19 + -2;
        func_0x000109547450(plVar19);
      }
      *(long **)(param_2 + 4) = plVar21;
      plVar26 = *(long **)(param_2 + 2);
      plVar19 = plVar21;
    }
  }
  else {
    do {
      iVar12 = *(int *)(*plVar21 + 0xc0);
      iVar4 = *(int *)(*plVar21 + 200);
      if (((iVar12 == 0 && iVar4 != 0) && (iVar12 != 0 || -1 < iVar4)) ||
         (iVar12 == 3 || *(int *)(*(long *)(param_2 + 10) + 0x24) <= iVar4)) {
        if ((plVar21 != plVar19) && (plVar17 = plVar21 + 2, plVar17 != plVar19)) {
          do {
            iVar12 = *(int *)(*plVar17 + 0xc0);
            iVar4 = *(int *)(*plVar17 + 200);
            if ((iVar12 != 0 || iVar4 < 1) &&
               (iVar12 != 3 && iVar4 < *(int *)(*(long *)(param_2 + 10) + 0x24))) {
              func_0x0001095473ec(plVar21,plVar17);
              plVar21 = plVar21 + 2;
            }
            plVar17 = plVar17 + 2;
          } while (plVar17 != plVar19);
          plVar26 = *(long **)(param_2 + 2);
          plVar19 = *(long **)(param_2 + 4);
        }
        goto LAB_109544a10;
      }
      plVar21 = plVar21 + 2;
    } while (plVar21 != plVar19);
  }
  *param_2 = *param_2 + 1;
  ppplVar11 = (long ***)(param_1 + 2);
  *ppplVar11 = (long **)0x0;
  *param_1 = &PTR_FUN_110af3f88;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (plVar26 != plVar19) {
    do {
      if (*(int *)(*plVar26 + 0xc0) - 1U < 2) {
        FUN_109594d3c(&pplStack_200);
        ppplVar28 = ppplVar11;
        func_0x000107c303b0(ppplVar11,0x1093657f0);
        if (ppplVar28 != &pplStack_200) {
          pplVar14 = ppplVar28[1];
          pplVar9 = pplVar14;
          if (((ulong)pplVar14 & 1) != 0) {
            pplVar9 = *(long ***)((ulong)pplVar14 & 0xfffffffffffffffe);
          }
          pplVar18 = pplStack_1f8;
          if (((ulong)pplStack_1f8 & 1) != 0) {
            pplVar18 = *(long ***)((ulong)pplStack_1f8 & 0xfffffffffffffffe);
          }
          if (pplVar9 == pplVar18) {
            lVar25 = 0;
            ppplVar28[1] = pplStack_1f8;
            pplStack_1f8 = pplVar14;
            uVar5 = *(undefined4 *)(ppplVar28 + 2);
            *(undefined4 *)(ppplVar28 + 2) = (undefined4)uStack_1f0;
            uStack_1f0 = CONCAT44(uStack_1f0._4_4_,uVar5);
            do {
              uVar6 = *(undefined1 *)((long)ppplVar28 + lVar25 + 0x18);
              *(undefined1 *)((long)ppplVar28 + lVar25 + 0x18) =
                   *(undefined1 *)((long)&plStack_1e8 + lVar25);
              *(undefined1 *)((long)&plStack_1e8 + lVar25) = uVar6;
              lVar25 = lVar25 + 1;
            } while (lVar25 != 0x34);
          }
          else {
            FUN_109364d34(ppplVar28);
            FUN_1093651c0(ppplVar28,&pplStack_200);
          }
        }
        func_0x000109364c48(&pplStack_200);
      }
      plVar26 = plVar26 + 2;
    } while (plVar26 != plVar19);
  }
  return;
}



/* Entry: 109544d00; end: 109544e13;  */

void FUN_109544d00(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 auStack_c0 [48];
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long *plStack_38;
  
  puVar10 = (undefined8 *)param_1[1];
  if (puVar10 < (undefined8 *)param_1[2]) {
    lVar7 = param_2[1];
    uVar11 = *param_2;
    puVar10[1] = param_2[1];
    *puVar10 = uVar11;
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar10 = puVar10 + 2;
  }
  else {
    lVar7 = (long)puVar10 - *param_1;
    uVar2 = (lVar7 >> 4) + 1;
    if (uVar2 >> 0x3c != 0) {
      FUN_109545000();
      FUN_10959560c(auStack_c0,param_3);
      FUN_109543e2c(extraout_x8,param_1,param_2,auStack_c0);
      FUN_10934ffa0(auStack_c0);
      return;
    }
    uVar8 = param_1[2] - *param_1;
    uVar9 = (long)uVar8 >> 3;
    if (uVar9 <= uVar2) {
      uVar9 = uVar2;
    }
    if (0x7fffffffffffffef < uVar8) {
      uVar9 = 0xfffffffffffffff;
    }
    puVar6 = param_2;
    plStack_38 = param_1;
    FUN_109545014();
    puVar3 = (undefined8 *)(uVar9 + lVar7);
    lVar7 = param_2[1];
    uVar11 = *param_2;
    puVar3[1] = param_2[1];
    *puVar3 = uVar11;
    if (lVar7 != 0) {
      plVar1 = (long *)(lVar7 + 8);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *plVar1 = *plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    puVar10 = puVar3 + 2;
    lVar7 = (long)puVar3 - (param_1[1] - *param_1);
    _memcpy(lVar7);
    lStack_58 = *param_1;
    *param_1 = lVar7;
    param_1[1] = (long)puVar10;
    lStack_40 = param_1[2];
    param_1[2] = uVar9 + (long)puVar6 * 0x10;
    lStack_50 = lStack_58;
    lStack_48 = lStack_58;
    func_0x000109545048(&lStack_58);
  }
  param_1[1] = (long)puVar10;
  return;
}



/* Entry: 109544e14; end: 109544e83;  */

void FUN_109544e14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_60 [48];
  
  FUN_10959560c(auStack_60,param_4);
  FUN_109543e2c(param_1,param_2,param_3,auStack_60);
  FUN_10934ffa0(auStack_60);
  return;
}



/* Entry: 109544e84; end: 109544fb3;  */

long * FUN_109544e84(long *param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  puVar3 = (undefined8 *)param_1[1];
  puVar4 = puVar3;
  if ((undefined8 *)param_1[2] != puVar3) {
    uVar2 = param_1[4];
    plVar5 = puVar3 + uVar2 / 0x55;
    lVar1 = *plVar5 + (uVar2 % 0x55) * 0x30;
    lVar6 = puVar3[(param_1[5] + uVar2) / 0x55] + ((param_1[5] + uVar2) % 0x55) * 0x30;
    puVar4 = (undefined8 *)param_1[2];
    if (lVar1 != lVar6) {
      do {
        FUN_1093644a0();
        lVar1 = lVar1 + 0x30;
        if (lVar1 - *plVar5 == 0xff0) {
          plVar5 = plVar5 + 1;
          lVar1 = *plVar5;
        }
      } while (lVar1 != lVar6);
      puVar3 = (undefined8 *)param_1[1];
      puVar4 = (undefined8 *)param_1[2];
    }
  }
  param_1[5] = 0;
  lVar1 = (long)puVar4 - (long)puVar3;
  while (uVar2 = lVar1 >> 3, 2 < uVar2) {
    __ZdlPv(*puVar3);
    puVar4 = (undefined8 *)param_1[2];
    puVar3 = (undefined8 *)(param_1[1] + 8);
    param_1[1] = (long)puVar3;
    lVar1 = (long)puVar4 - (long)puVar3;
  }
  if (uVar2 == 1) {
    lVar1 = 0x2a;
  }
  else {
    if (uVar2 != 2) goto LAB_109544f94;
    lVar1 = 0x55;
  }
  param_1[4] = lVar1;
LAB_109544f94:
  for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
    __ZdlPv(*puVar3);
  }
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109544fb4; end: 109544fff;  */

long * FUN_109544fb4(long *param_1)

{
  long lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 != param_1[1]) {
    param_1[2] = lVar1 + ((param_1[1] - lVar1) + 7U & 0xfffffffffffffff8);
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109545000; end: 109545013;  */

undefined1  [16] FUN_109545000(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if ((ulong)plVar1 >> 0x3c == 0) {
    lVar2 = (long)plVar1 << 4;
    __Znwm(lVar2);
    auVar4._8_8_ = plVar1;
    auVar4._0_8_ = lVar2;
    return auVar4;
  }
  func_0x000104c4f740();
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  while (lVar3 != lVar2) {
    plVar1[2] = lVar3 + -0x10;
    func_0x000109547450();
    lVar3 = plVar1[2];
  }
  if (*plVar1 != 0) {
    __ZdlPv();
  }
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = plVar1;
  return auVar5;
}



/* Entry: 109545014; end: 109545093;  */

undefined1  [16] FUN_109545014(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3c == 0) {
    lVar1 = (long)param_1 << 4;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x10;
    func_0x000109547450();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 109545094; end: 10954515f;  */

long FUN_109545094(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  _free(*(undefined8 *)(param_1 + 0x118));
  _free(*(undefined8 *)(param_1 + 0x100));
  _free(*(undefined8 *)(param_1 + 0xe8));
  _free(*(undefined8 *)(param_1 + 0xd8));
  FUN_109544e84(param_1 + 0x90);
  if (*(long *)(param_1 + 0x68) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x68) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x30);
    }
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x70);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x34));
  }
  lVar5 = *(long *)(param_1 + 0x78);
  if (lVar5 != param_1 + 0x80 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  FUN_109349e70(param_1 + 8);
  return param_1;
}



/* Entry: 109545160; end: 1095455ab;  */

void FUN_109545160(float param_1,ulong *param_2,long *param_3,long param_4,long *param_5,
                  undefined4 param_6)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  float fVar17;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  param_2[8] = 0;
  uVar5 = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  iVar1 = *(int *)(param_4 + 0x18);
  uVar11 = (ulong)iVar1;
  if (param_3[1] - *param_3 == 0) {
    func_0x0001073bf8d4(param_2 + 6,uVar11);
    if (iVar1 != 0) {
      uVar5 = 0;
      do {
        uStack_c0 = uVar5;
        FUN_109484b50(param_2 + 6,&uStack_c0);
        uVar5 = uVar5 + 1;
      } while (uVar11 != uVar5);
    }
  }
  else {
    uVar12 = param_3[1] - *param_3 >> 4;
    if (iVar1 == 0) {
      func_0x0001073bf8d4(param_2 + 3,uVar12);
      uVar11 = 0;
      do {
        uStack_c0 = uVar11;
        FUN_109484b50(param_2 + 3,&uStack_c0);
        uVar11 = uVar11 + 1;
      } while (uVar12 != uVar11);
    }
    else {
      plVar3 = (long *)*param_5;
      FUN_1095455fc(plVar3,uVar12,uVar11);
      lVar16 = *param_3;
      lVar10 = param_3[1];
      if (lVar10 != lVar16) {
        lVar13 = 0;
        uVar11 = 0;
        uVar12 = (ulong)*(uint *)(param_4 + 0x18);
        do {
          if (0 < (int)uVar12) {
            lVar16 = 0;
            lVar10 = 8;
            do {
              fVar17 = (float)uVar5;
              uVar5 = *(ulong *)(param_4 + 0x10);
              puVar6 = (ulong *)(param_4 + 0x10);
              if ((uVar5 & 1) != 0) {
                puVar6 = (ulong *)(uVar5 + lVar10 + -1);
              }
              FUN_1095457c8(*puVar6,*(undefined8 *)(*param_3 + uVar11 * 0x10),0);
              uVar5 = (ulong)(uint)(1.0 - fVar17);
              *(float *)(*plVar3 + lVar13 * plVar3[2] + lVar16 * 4) = 1.0 - fVar17;
              lVar16 = lVar16 + 1;
              uVar12 = (ulong)*(int *)(param_4 + 0x18);
              lVar10 = lVar10 + 8;
            } while (lVar16 < (long)uVar12);
            lVar16 = *param_3;
            lVar10 = param_3[1];
          }
          uVar11 = uVar11 + 1;
          lVar13 = lVar13 + 4;
        } while (uVar11 < (ulong)(lVar10 - lVar16 >> 4));
      }
      FUN_109545694(&uStack_c0,*param_5);
      if (*param_2 != 0) {
        param_2[1] = *param_2;
        __ZdlPv();
      }
      param_2[1] = uStack_b8;
      *param_2 = uStack_c0;
      param_2[2] = uStack_b0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      puVar6 = param_2 + 3;
      uStack_c0 = 0;
      if (*puVar6 != 0) {
        param_2[4] = *puVar6;
        __ZdlPv();
      }
      puVar8 = param_2 + 6;
      param_2[4] = uStack_a0;
      param_2[3] = uStack_a8;
      param_2[5] = uStack_98;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_a8 = 0;
      if (*puVar8 != 0) {
        param_2[7] = *puVar8;
        __ZdlPv();
      }
      uVar11 = uStack_90;
      param_2[7] = uStack_88;
      param_2[6] = uStack_90;
      param_2[8] = uStack_80;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_90 = 0;
      if (uStack_a8 != 0) {
        uStack_a0 = uStack_a8;
        __ZdlPv();
      }
      if (uStack_c0 != 0) {
        uStack_b8 = uStack_c0;
        __ZdlPv();
      }
      plVar3 = (long *)*param_2;
      plVar15 = (long *)param_2[1];
      if (plVar3 < plVar15) {
        do {
          lVar16 = *plVar3;
          lVar10 = plVar3[1];
          uVar5 = *(ulong *)(param_4 + 0x10);
          puVar4 = (ulong *)(param_4 + 0x10);
          if ((uVar5 & 1) != 0) {
            puVar4 = (ulong *)(uVar5 + (long)(int)lVar10 * 8 + 7);
          }
          FUN_1095457c8(*puVar4,*(undefined8 *)(*param_3 + lVar16 * 0x10),param_6);
          if (param_1 <= (float)uVar11) {
            plVar3 = plVar3 + 2;
          }
          else {
            plVar14 = (long *)param_2[4];
            if (plVar14 < (long *)param_2[5]) {
              plVar9 = plVar14 + 1;
              *plVar14 = lVar16;
            }
            else {
              lVar13 = (long)plVar14 - *puVar6;
              uVar5 = (lVar13 >> 3) + 1;
              if (uVar5 >> 0x3d != 0) goto LAB_109545570;
              uVar7 = (long)param_2[5] - *puVar6;
              uVar12 = (long)uVar7 >> 2;
              if (uVar12 <= uVar5) {
                uVar12 = uVar5;
              }
              if (0x7ffffffffffffff7 < uVar7) {
                uVar12 = 0x1fffffffffffffff;
              }
              puVar4 = puVar6;
              FUN_109265fac();
              uVar5 = param_2[3];
              plVar14 = (long *)((long)puVar4 + lVar13);
              uVar7 = (long)plVar14 - (param_2[4] - uVar5);
              plVar9 = plVar14 + 1;
              *plVar14 = lVar16;
              _memcpy(uVar7,uVar5);
              uVar5 = param_2[3];
              param_2[3] = uVar7;
              param_2[4] = (ulong)plVar9;
              param_2[5] = (ulong)(puVar4 + uVar12);
              if (uVar5 != 0) {
                __ZdlPv();
              }
            }
            param_2[4] = (ulong)plVar9;
            plVar14 = (long *)param_2[7];
            if (plVar14 < (long *)param_2[8]) {
              plVar9 = plVar14 + 1;
              *plVar14 = lVar10;
            }
            else {
              lVar16 = (long)plVar14 - *puVar8;
              uVar5 = (lVar16 >> 3) + 1;
              if (uVar5 >> 0x3d != 0) {
LAB_109545570:
                FUN_1094008f0();
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x109545578);
                (*pcVar2)();
              }
              uVar7 = (long)param_2[8] - *puVar8;
              uVar12 = (long)uVar7 >> 2;
              if (uVar12 <= uVar5) {
                uVar12 = uVar5;
              }
              if (0x7ffffffffffffff7 < uVar7) {
                uVar12 = 0x1fffffffffffffff;
              }
              puVar4 = puVar8;
              FUN_109265fac();
              uVar5 = param_2[6];
              plVar14 = (long *)((long)puVar4 + lVar16);
              uVar7 = (long)plVar14 - (param_2[7] - uVar5);
              plVar9 = plVar14 + 1;
              *plVar14 = lVar10;
              _memcpy(uVar7,uVar5);
              uVar5 = param_2[6];
              param_2[6] = uVar7;
              param_2[7] = (ulong)plVar9;
              param_2[8] = (ulong)(puVar4 + uVar12);
              if (uVar5 != 0) {
                __ZdlPv();
              }
            }
            param_2[7] = (ulong)plVar9;
            lVar16 = *plVar3;
            plVar14 = plVar15 + -2;
            *plVar3 = *plVar14;
            *plVar14 = lVar16;
            lVar16 = plVar3[1];
            plVar3[1] = plVar15[-1];
            plVar15[-1] = lVar16;
            plVar15 = plVar14;
          }
        } while (plVar3 < plVar15);
        plVar3 = (long *)*param_2;
      }
      FUN_109545950(param_2,(long)plVar15 - (long)plVar3 >> 4);
    }
  }
  return;
}



/* Entry: 1095455ac; end: 1095455fb;  */

long * FUN_1095455ac(long *param_1)

{
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



/* Entry: 1095455fc; end: 109545693;  */

long FUN_1095455fc(long param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  long *extraout_x8;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong *puVar16;
  
  if ((*(ulong *)(param_1 + 0x18) < param_2) || (*(ulong *)(param_1 + 0x20) < param_3)) {
    if ((param_2 != 0) && (param_3 != 0)) {
      lVar2 = 0;
      if (param_3 != 0) {
        lVar2 = 0x7fffffffffffffff / (long)param_3;
      }
      if (lVar2 < (long)param_2) {
        lVar2 = 8;
        ___cxa_allocate_exception();
        __ZNSt9bad_allocC1Ev();
        ___cxa_throw();
        if (*(long *)(lVar2 + 0x20) * *(long *)(lVar2 + 0x18) == 0) {
          extraout_x8[8] = 0;
          extraout_x8[5] = 0;
          extraout_x8[4] = 0;
          extraout_x8[7] = 0;
          extraout_x8[6] = 0;
          extraout_x8[1] = 0;
          *extraout_x8 = 0;
          extraout_x8[3] = 0;
          extraout_x8[2] = 0;
          return lVar2;
        }
        FUN_109545980();
        if (*(int *)(lVar2 + 0xa0) != 0) {
          FUN_109545e94(lVar2 + 0x88);
          *(undefined4 *)(lVar2 + 0xa0) = 0;
        }
        iVar4 = 0;
        do {
          if (iVar4 < 4) {
            if (iVar4 < 2) {
              if (iVar4 == 0) {
                FUN_109545f18(lVar2 + 0x88,lVar2);
              }
              else if (iVar4 == 1) {
                FUN_1095465d8(lVar2 + 0x88,lVar2);
              }
            }
            else if (iVar4 == 2) {
              func_0x000109546794(lVar2 + 0x88,lVar2);
            }
            else if (iVar4 == 3) {
              FUN_109546858(lVar2 + 0x88,lVar2);
            }
          }
          else if (iVar4 < 6) {
            if (iVar4 == 4) {
              FUN_109546934(lVar2 + 0x88,lVar2);
            }
            else if (iVar4 == 5) {
              func_0x000109546c24(lVar2 + 0x88,lVar2);
            }
          }
          else if (iVar4 == 6) {
            FUN_109546e50(lVar2 + 0x88,lVar2);
          }
          else if (iVar4 == 7) goto FUN_1095459f8;
          iVar4 = *(int *)(lVar2 + 0xa0);
        } while( true );
      }
    }
    FUN_1093d98c8(param_1,param_3 * param_2,param_2,param_3);
  }
  *(ulong *)(param_1 + 0x18) = param_2;
  *(ulong *)(param_1 + 0x20) = param_3;
  return param_1;
FUN_1095459f8:
  extraout_x8[8] = 0;
  extraout_x8[5] = 0;
  extraout_x8[4] = 0;
  extraout_x8[7] = 0;
  extraout_x8[6] = 0;
  extraout_x8[1] = 0;
  *extraout_x8 = 0;
  extraout_x8[3] = 0;
  extraout_x8[2] = 0;
  uVar5 = *(ulong *)(lVar2 + 0x20);
  lVar10 = lVar2;
  if (uVar5 != 0) {
    lVar12 = 0;
    uVar13 = 0;
    do {
      if ((*(ulong *)(*(long *)(lVar2 + 0x58) + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) == 0) {
        puVar16 = (ulong *)extraout_x8[7];
        if (puVar16 < (ulong *)extraout_x8[8]) {
          puVar14 = puVar16 + 1;
          *puVar16 = uVar13;
        }
        else {
          lVar10 = (long)puVar16 - extraout_x8[6];
          uVar5 = (lVar10 >> 3) + 1;
          if (uVar5 >> 0x3d != 0) {
            FUN_1094008f0();
            goto LAB_109545cdc;
          }
          uVar7 = extraout_x8[8] - extraout_x8[6];
          uVar15 = (long)uVar7 >> 2;
          if (uVar15 <= uVar5) {
            uVar15 = uVar5;
          }
          if (0x7ffffffffffffff7 < uVar7) {
            uVar15 = 0x1fffffffffffffff;
          }
          plVar3 = extraout_x8 + 6;
          FUN_109265fac();
          lVar11 = extraout_x8[6];
          puVar16 = (ulong *)((long)plVar3 + lVar10);
          lVar9 = (long)puVar16 - (extraout_x8[7] - lVar11);
          puVar14 = puVar16 + 1;
          *puVar16 = uVar13;
          _memcpy(lVar9,lVar11);
          lVar10 = extraout_x8[6];
          extraout_x8[6] = lVar9;
          extraout_x8[7] = (long)puVar14;
          extraout_x8[8] = (long)(plVar3 + uVar15);
          if (lVar10 != 0) {
            __ZdlPv();
          }
        }
        extraout_x8[7] = (long)puVar14;
      }
      else if (*(ulong *)(lVar2 + 0x18) != 0) {
        uVar15 = 0;
        piVar8 = (int *)(*(long *)(lVar2 + 0x28) + lVar12);
        do {
          if (*piVar8 == 1) {
            puVar16 = (ulong *)extraout_x8[1];
            if (puVar16 < (ulong *)extraout_x8[2]) {
              *puVar16 = uVar15;
              puVar16[1] = uVar13;
              puVar16 = puVar16 + 2;
            }
            else {
              lVar10 = (long)puVar16 - *extraout_x8;
              uVar5 = (lVar10 >> 4) + 1;
              if (uVar5 >> 0x3c != 0) {
                FUN_1092b7928();
                goto LAB_109545cdc;
              }
              uVar6 = extraout_x8[2] - *extraout_x8;
              uVar7 = (long)uVar6 >> 3;
              if (uVar7 <= uVar5) {
                uVar7 = uVar5;
              }
              if (0x7fffffffffffffef < uVar6) {
                uVar7 = 0xfffffffffffffff;
              }
              plVar3 = extraout_x8;
              FUN_1092b793c();
              lVar11 = *extraout_x8;
              lVar9 = extraout_x8[1];
              puVar14 = (ulong *)((long)plVar3 + lVar10);
              *puVar14 = uVar15;
              puVar14[1] = uVar13;
              puVar16 = puVar14 + 2;
              lVar9 = (long)puVar14 - (lVar9 - lVar11);
              _memcpy(lVar9,lVar11);
              lVar10 = *extraout_x8;
              *extraout_x8 = lVar9;
              extraout_x8[1] = (long)puVar16;
              extraout_x8[2] = (long)(plVar3 + uVar7 * 2);
              if (lVar10 != 0) {
                __ZdlPv();
              }
            }
            extraout_x8[1] = (long)puVar16;
            uVar5 = uVar15 >> 3 & 0x1ffffffffffffff8;
            *(ulong *)(*(long *)(lVar2 + 0x40) + uVar5) =
                 *(ulong *)(*(long *)(lVar2 + 0x40) + uVar5) | 1L << (uVar15 & 0x3f);
            break;
          }
          piVar8 = piVar8 + uVar5;
          uVar15 = uVar15 + 1;
        } while (*(ulong *)(lVar2 + 0x18) != uVar15);
      }
      uVar13 = uVar13 + 1;
      uVar5 = *(ulong *)(lVar2 + 0x20);
      lVar12 = lVar12 + 4;
    } while (uVar13 < uVar5);
  }
  uVar5 = *(ulong *)(lVar2 + 0x18);
  if (uVar5 != 0) {
    uVar13 = 0;
    do {
      if ((*(ulong *)(*(long *)(lVar2 + 0x40) + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) == 0) {
        puVar16 = (ulong *)extraout_x8[4];
        if (puVar16 < (ulong *)extraout_x8[5]) {
          puVar14 = puVar16 + 1;
          *puVar16 = uVar13;
        }
        else {
          lVar10 = (long)puVar16 - extraout_x8[3];
          uVar5 = (lVar10 >> 3) + 1;
          if (uVar5 >> 0x3d != 0) {
            FUN_1094008f0();
LAB_109545cdc:
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x109545ce0);
            (*pcVar1)();
          }
          uVar7 = extraout_x8[5] - extraout_x8[3];
          uVar15 = (long)uVar7 >> 2;
          if (uVar15 <= uVar5) {
            uVar15 = uVar5;
          }
          if (0x7ffffffffffffff7 < uVar7) {
            uVar15 = 0x1fffffffffffffff;
          }
          plVar3 = extraout_x8 + 3;
          FUN_109265fac();
          lVar12 = extraout_x8[3];
          puVar16 = (ulong *)((long)plVar3 + lVar10);
          lVar11 = (long)puVar16 - (extraout_x8[4] - lVar12);
          puVar14 = puVar16 + 1;
          *puVar16 = uVar13;
          _memcpy(lVar11,lVar12);
          lVar10 = extraout_x8[3];
          extraout_x8[3] = lVar11;
          extraout_x8[4] = (long)puVar14;
          extraout_x8[5] = (long)(plVar3 + uVar15);
          if (lVar10 != 0) {
            __ZdlPv();
          }
        }
        extraout_x8[4] = (long)puVar14;
        uVar5 = *(ulong *)(lVar2 + 0x18);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar5);
  }
  return lVar10;
}



/* Entry: 109545694; end: 1095457c7;  */

void FUN_109545694(long *param_1,long param_2)

{
  code *pcVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong *puVar15;
  
  if (*(long *)(param_2 + 0x20) * *(long *)(param_2 + 0x18) == 0) {
    param_1[8] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    return;
  }
  FUN_109545980();
  if (*(int *)(param_2 + 0xa0) != 0) {
    FUN_109545e94(param_2 + 0x88);
    *(undefined4 *)(param_2 + 0xa0) = 0;
  }
  iVar3 = 0;
  do {
    if (iVar3 < 4) {
      if (iVar3 < 2) {
        if (iVar3 == 0) {
          FUN_109545f18(param_2 + 0x88,param_2);
        }
        else if (iVar3 == 1) {
          FUN_1095465d8(param_2 + 0x88,param_2);
        }
      }
      else if (iVar3 == 2) {
        func_0x000109546794(param_2 + 0x88,param_2);
      }
      else if (iVar3 == 3) {
        FUN_109546858(param_2 + 0x88,param_2);
      }
    }
    else if (iVar3 < 6) {
      if (iVar3 == 4) {
        FUN_109546934(param_2 + 0x88,param_2);
      }
      else if (iVar3 == 5) {
        func_0x000109546c24(param_2 + 0x88,param_2);
      }
    }
    else if (iVar3 == 6) {
      FUN_109546e50(param_2 + 0x88,param_2);
    }
    else if (iVar3 == 7) break;
    iVar3 = *(int *)(param_2 + 0xa0);
  } while( true );
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar4 = *(ulong *)(param_2 + 0x20);
  if (uVar4 != 0) {
    lVar11 = 0;
    uVar12 = 0;
    do {
      if ((*(ulong *)(*(long *)(param_2 + 0x58) + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) == 0) {
        puVar15 = (ulong *)param_1[7];
        if (puVar15 < (ulong *)param_1[8]) {
          puVar13 = puVar15 + 1;
          *puVar15 = uVar12;
        }
        else {
          lVar8 = (long)puVar15 - param_1[6];
          uVar4 = (lVar8 >> 3) + 1;
          if (uVar4 >> 0x3d != 0) {
            FUN_1094008f0();
            goto LAB_109545cdc;
          }
          uVar6 = param_1[8] - param_1[6];
          uVar14 = (long)uVar6 >> 2;
          if (uVar14 <= uVar4) {
            uVar14 = uVar4;
          }
          if (0x7ffffffffffffff7 < uVar6) {
            uVar14 = 0x1fffffffffffffff;
          }
          plVar2 = param_1 + 6;
          FUN_109265fac();
          lVar10 = param_1[6];
          puVar15 = (ulong *)((long)plVar2 + lVar8);
          lVar9 = (long)puVar15 - (param_1[7] - lVar10);
          puVar13 = puVar15 + 1;
          *puVar15 = uVar12;
          _memcpy(lVar9,lVar10);
          lVar8 = param_1[6];
          param_1[6] = lVar9;
          param_1[7] = (long)puVar13;
          param_1[8] = (long)(plVar2 + uVar14);
          if (lVar8 != 0) {
            __ZdlPv();
          }
        }
        param_1[7] = (long)puVar13;
      }
      else if (*(ulong *)(param_2 + 0x18) != 0) {
        uVar14 = 0;
        piVar7 = (int *)(*(long *)(param_2 + 0x28) + lVar11);
        do {
          if (*piVar7 == 1) {
            puVar15 = (ulong *)param_1[1];
            if (puVar15 < (ulong *)param_1[2]) {
              *puVar15 = uVar14;
              puVar15[1] = uVar12;
              puVar15 = puVar15 + 2;
            }
            else {
              lVar8 = (long)puVar15 - *param_1;
              uVar4 = (lVar8 >> 4) + 1;
              if (uVar4 >> 0x3c != 0) {
                FUN_1092b7928();
                goto LAB_109545cdc;
              }
              uVar5 = param_1[2] - *param_1;
              uVar6 = (long)uVar5 >> 3;
              if (uVar6 <= uVar4) {
                uVar6 = uVar4;
              }
              if (0x7fffffffffffffef < uVar5) {
                uVar6 = 0xfffffffffffffff;
              }
              plVar2 = param_1;
              FUN_1092b793c();
              lVar10 = *param_1;
              lVar9 = param_1[1];
              puVar13 = (ulong *)((long)plVar2 + lVar8);
              *puVar13 = uVar14;
              puVar13[1] = uVar12;
              puVar15 = puVar13 + 2;
              lVar9 = (long)puVar13 - (lVar9 - lVar10);
              _memcpy(lVar9,lVar10);
              lVar8 = *param_1;
              *param_1 = lVar9;
              param_1[1] = (long)puVar15;
              param_1[2] = (long)(plVar2 + uVar6 * 2);
              if (lVar8 != 0) {
                __ZdlPv();
              }
            }
            param_1[1] = (long)puVar15;
            uVar4 = uVar14 >> 3 & 0x1ffffffffffffff8;
            *(ulong *)(*(long *)(param_2 + 0x40) + uVar4) =
                 *(ulong *)(*(long *)(param_2 + 0x40) + uVar4) | 1L << (uVar14 & 0x3f);
            break;
          }
          piVar7 = piVar7 + uVar4;
          uVar14 = uVar14 + 1;
        } while (*(ulong *)(param_2 + 0x18) != uVar14);
      }
      uVar12 = uVar12 + 1;
      uVar4 = *(ulong *)(param_2 + 0x20);
      lVar11 = lVar11 + 4;
    } while (uVar12 < uVar4);
  }
  uVar4 = *(ulong *)(param_2 + 0x18);
  if (uVar4 != 0) {
    uVar12 = 0;
    do {
      if ((*(ulong *)(*(long *)(param_2 + 0x40) + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) == 0) {
        puVar15 = (ulong *)param_1[4];
        if (puVar15 < (ulong *)param_1[5]) {
          puVar13 = puVar15 + 1;
          *puVar15 = uVar12;
        }
        else {
          lVar11 = (long)puVar15 - param_1[3];
          uVar4 = (lVar11 >> 3) + 1;
          if (uVar4 >> 0x3d != 0) {
            FUN_1094008f0();
LAB_109545cdc:
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x109545ce0);
            (*pcVar1)();
          }
          uVar6 = param_1[5] - param_1[3];
          uVar14 = (long)uVar6 >> 2;
          if (uVar14 <= uVar4) {
            uVar14 = uVar4;
          }
          if (0x7ffffffffffffff7 < uVar6) {
            uVar14 = 0x1fffffffffffffff;
          }
          plVar2 = param_1 + 3;
          FUN_109265fac();
          lVar8 = param_1[3];
          puVar15 = (ulong *)((long)plVar2 + lVar11);
          lVar10 = (long)puVar15 - (param_1[4] - lVar8);
          puVar13 = puVar15 + 1;
          *puVar15 = uVar12;
          _memcpy(lVar10,lVar8);
          lVar11 = param_1[3];
          param_1[3] = lVar10;
          param_1[4] = (long)puVar13;
          param_1[5] = (long)(plVar2 + uVar14);
          if (lVar11 != 0) {
            __ZdlPv();
          }
        }
        param_1[4] = (long)puVar13;
        uVar4 = *(ulong *)(param_2 + 0x18);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar4);
  }
  return;
}



/* Entry: 1095457c8; end: 10954594f;  */

float FUN_1095457c8(long param_1,long param_2,ulong param_3)

{
  undefined **ppuVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  undefined **ppuStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  float fStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  
  puVar3 = *(undefined8 **)(param_2 + 0xd8);
  ppuStack_78 = &PTR_FUN_110af0b68;
  uStack_70 = 0;
  uStack_58 = 0;
  fVar6 = *(float *)(puVar3 + 1) * *(float *)((long)puVar3 + 0xc) * 0.5;
  fVar8 = *(float *)((long)puVar3 + 0xc) * 0.5;
  fVar9 = (float)*puVar3;
  fVar7 = (float)((ulong)*puVar3 >> 0x20);
  uVar10 = NEON_scvtf(*(undefined8 *)(param_2 + 0xd0),4);
  fStack_60 = (fVar9 - fVar6) / (float)uVar10;
  fVar11 = (float)((ulong)uVar10 >> 0x20);
  fStack_5c = (fVar7 - fVar8) / fVar11;
  uStack_68 = CONCAT44(fStack_5c,fStack_60);
  fStack_60 = (fVar9 + fVar6) / (float)uVar10 - fStack_60;
  fStack_5c = (fVar7 + fVar8) / fVar11 - fStack_5c;
  ppuVar1 = &PTR_PTR_1132da178;
  if (*(undefined ***)(param_1 + 0x30) != (undefined **)0x0) {
    ppuVar1 = *(undefined ***)(param_1 + 0x30);
  }
  fVar9 = fStack_60;
  FUN_109547188(&ppuStack_78,ppuVar1);
  fVar8 = fStack_5c;
  fVar6 = fStack_60;
  if ((uStack_70 & 1) != 0) {
    func_0x0001053936ac(&uStack_70);
  }
  puVar5 = (ulong *)(param_1 + 0x18);
  uVar4 = *puVar5;
  if ((param_3 & 1) == 0) {
    fVar7 = 1.0;
  }
  else {
    puVar2 = puVar5;
    if ((uVar4 & 1) != 0) {
      puVar2 = (ulong *)(uVar4 + 7);
    }
    fVar7 = *(float *)(*puVar2 + 0x1c);
  }
  fVar6 = (fVar6 * fVar8 + fVar6 * fVar8) - fVar9;
  fVar9 = fVar9 / fVar6;
  if (fVar6 <= 0.0) {
    fVar9 = 0.0;
  }
  if ((uVar4 & 1) != 0) {
    puVar5 = (ulong *)(uVar4 + 7);
  }
  fVar6 = *(float *)(*puVar5 + 0x18);
  FUN_109349df0(&ppuStack_78,0,param_2 + 8);
  fVar8 = 1.0;
  if (fVar6 != fStack_60) {
    fVar8 = 0.0;
  }
  FUN_109349e70(&ppuStack_78);
  return fVar8 * fVar7 * fVar9;
}



/* Entry: 109545950; end: 10954597f;  */

long * FUN_109545950(long *param_1,ulong param_2,long *param_3)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  uVar6 = param_1[1] - *param_1 >> 4;
  if (param_2 <= uVar6) {
    if (param_2 < uVar6) {
      param_1[1] = *param_1 + param_2 * 0x10;
    }
    return param_1;
  }
  param_2 = param_2 - uVar6;
  plVar3 = (long *)param_1[1];
  if ((ulong)(param_1[2] - (long)plVar3 >> 4) < param_2) {
    lVar9 = (long)plVar3 - *param_1;
    uVar6 = param_2 + (lVar9 >> 4);
    if (uVar6 >> 0x3c != 0) {
      FUN_1092b7928();
      *param_1 = (long)&PTR_FUN_110af16c8;
      param_1[1] = param_2;
      plVar3 = param_1 + 2;
      *plVar3 = 0;
      param_1[3] = 0;
      param_1[4] = param_2;
      *(undefined4 *)(param_1 + 5) = 0;
      if (param_1 != param_3) {
        uVar6 = param_2;
        if ((param_2 & 1) != 0) {
          uVar6 = *(ulong *)(param_2 & 0xfffffffffffffffe);
        }
        uVar5 = param_3[1];
        uVar7 = uVar5;
        if ((uVar5 & 1) != 0) {
          uVar7 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
        }
        if (uVar6 == uVar7) {
          lVar9 = 0;
          param_1[1] = uVar5;
          param_3[1] = param_2;
          do {
            uVar1 = *(undefined1 *)((long)plVar3 + lVar9);
            *(undefined1 *)((long)plVar3 + lVar9) = *(undefined1 *)((long)param_3 + lVar9 + 0x10);
            *(undefined1 *)((long)param_3 + lVar9 + 0x10) = uVar1;
            lVar9 = lVar9 + 1;
          } while (lVar9 != 0x10);
        }
        else {
          FUN_10934fff8(param_1);
          FUN_109350260(param_1,param_3);
        }
      }
      return param_1;
    }
    uVar5 = param_1[2] - *param_1;
    uVar7 = (long)uVar5 >> 3;
    if (uVar7 <= uVar6) {
      uVar7 = uVar6;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar7 = 0xfffffffffffffff;
    }
    if (uVar7 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_1092b793c();
    }
    lVar9 = (long)plVar3 + lVar9;
    _bzero(lVar9,param_2 * 0x10);
    lVar8 = lVar9 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    plVar4 = (long *)*param_1;
    *param_1 = lVar8;
    param_1[1] = lVar9 + param_2 * 0x10;
    param_1[2] = (long)(plVar3 + uVar7 * 2);
    plVar2 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar4;
    }
  }
  else {
    plVar2 = param_1;
    if (param_2 != 0) {
      plVar2 = plVar3;
      _bzero(plVar3,param_2 * 0x10);
      plVar3 = plVar3 + param_2 * 2;
    }
    param_1[1] = (long)plVar3;
  }
  return plVar2;
}



/* Entry: 109545980; end: 1095459f7;  */

void FUN_109545980(long param_1)

{
  undefined4 uStack_2c;
  undefined1 uStack_26;
  undefined1 uStack_25;
  undefined4 uStack_24;
  
  uStack_24 = 0;
  FUN_109545d08(param_1 + 0x28,*(long *)(param_1 + 0x20) * *(long *)(param_1 + 0x18),&uStack_24);
  uStack_25 = 0;
  func_0x000108adee10(param_1 + 0x40,*(undefined8 *)(param_1 + 0x18),&uStack_25);
  uStack_26 = 0;
  func_0x000108adee10(param_1 + 0x58,*(undefined8 *)(param_1 + 0x20),&uStack_26);
  uStack_2c = 0;
  func_0x00010742638c(param_1 + 0x70,*(undefined8 *)(param_1 + 0x20),&uStack_2c);
  return;
}



/* Entry: 1095459f8; end: 109545d07;  */

void FUN_1095459f8(long *param_1,long param_2)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong *puVar14;
  
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  uVar3 = *(ulong *)(param_2 + 0x20);
  if (uVar3 != 0) {
    lVar10 = 0;
    uVar11 = 0;
    do {
      if ((*(ulong *)(*(long *)(param_2 + 0x58) + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) == 0) {
        puVar14 = (ulong *)param_1[7];
        if (puVar14 < (ulong *)param_1[8]) {
          puVar12 = puVar14 + 1;
          *puVar14 = uVar11;
        }
        else {
          lVar7 = (long)puVar14 - param_1[6];
          uVar3 = (lVar7 >> 3) + 1;
          if (uVar3 >> 0x3d != 0) {
            FUN_1094008f0();
            goto LAB_109545cdc;
          }
          uVar5 = param_1[8] - param_1[6];
          uVar13 = (long)uVar5 >> 2;
          if (uVar13 <= uVar3) {
            uVar13 = uVar3;
          }
          if (0x7ffffffffffffff7 < uVar5) {
            uVar13 = 0x1fffffffffffffff;
          }
          plVar2 = param_1 + 6;
          FUN_109265fac();
          lVar9 = param_1[6];
          puVar14 = (ulong *)((long)plVar2 + lVar7);
          lVar8 = (long)puVar14 - (param_1[7] - lVar9);
          puVar12 = puVar14 + 1;
          *puVar14 = uVar11;
          _memcpy(lVar8,lVar9);
          lVar7 = param_1[6];
          param_1[6] = lVar8;
          param_1[7] = (long)puVar12;
          param_1[8] = (long)(plVar2 + uVar13);
          if (lVar7 != 0) {
            __ZdlPv();
          }
        }
        param_1[7] = (long)puVar12;
      }
      else if (*(ulong *)(param_2 + 0x18) != 0) {
        uVar13 = 0;
        piVar6 = (int *)(*(long *)(param_2 + 0x28) + lVar10);
        do {
          if (*piVar6 == 1) {
            puVar14 = (ulong *)param_1[1];
            if (puVar14 < (ulong *)param_1[2]) {
              *puVar14 = uVar13;
              puVar14[1] = uVar11;
              puVar14 = puVar14 + 2;
            }
            else {
              lVar7 = (long)puVar14 - *param_1;
              uVar3 = (lVar7 >> 4) + 1;
              if (uVar3 >> 0x3c != 0) {
                FUN_1092b7928();
                goto LAB_109545cdc;
              }
              uVar4 = param_1[2] - *param_1;
              uVar5 = (long)uVar4 >> 3;
              if (uVar5 <= uVar3) {
                uVar5 = uVar3;
              }
              if (0x7fffffffffffffef < uVar4) {
                uVar5 = 0xfffffffffffffff;
              }
              plVar2 = param_1;
              FUN_1092b793c();
              lVar9 = *param_1;
              lVar8 = param_1[1];
              puVar12 = (ulong *)((long)plVar2 + lVar7);
              *puVar12 = uVar13;
              puVar12[1] = uVar11;
              puVar14 = puVar12 + 2;
              lVar8 = (long)puVar12 - (lVar8 - lVar9);
              _memcpy(lVar8,lVar9);
              lVar7 = *param_1;
              *param_1 = lVar8;
              param_1[1] = (long)puVar14;
              param_1[2] = (long)(plVar2 + uVar5 * 2);
              if (lVar7 != 0) {
                __ZdlPv();
              }
            }
            param_1[1] = (long)puVar14;
            uVar3 = uVar13 >> 3 & 0x1ffffffffffffff8;
            *(ulong *)(*(long *)(param_2 + 0x40) + uVar3) =
                 *(ulong *)(*(long *)(param_2 + 0x40) + uVar3) | 1L << (uVar13 & 0x3f);
            break;
          }
          piVar6 = piVar6 + uVar3;
          uVar13 = uVar13 + 1;
        } while (*(ulong *)(param_2 + 0x18) != uVar13);
      }
      uVar11 = uVar11 + 1;
      uVar3 = *(ulong *)(param_2 + 0x20);
      lVar10 = lVar10 + 4;
    } while (uVar11 < uVar3);
  }
  uVar3 = *(ulong *)(param_2 + 0x18);
  if (uVar3 != 0) {
    uVar11 = 0;
    do {
      if ((*(ulong *)(*(long *)(param_2 + 0x40) + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) == 0) {
        puVar14 = (ulong *)param_1[4];
        if (puVar14 < (ulong *)param_1[5]) {
          puVar12 = puVar14 + 1;
          *puVar14 = uVar11;
        }
        else {
          lVar10 = (long)puVar14 - param_1[3];
          uVar3 = (lVar10 >> 3) + 1;
          if (uVar3 >> 0x3d != 0) {
            FUN_1094008f0();
LAB_109545cdc:
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x109545ce0);
            (*pcVar1)();
          }
          uVar5 = param_1[5] - param_1[3];
          uVar13 = (long)uVar5 >> 2;
          if (uVar13 <= uVar3) {
            uVar13 = uVar3;
          }
          if (0x7ffffffffffffff7 < uVar5) {
            uVar13 = 0x1fffffffffffffff;
          }
          plVar2 = param_1 + 3;
          FUN_109265fac();
          lVar7 = param_1[3];
          puVar14 = (ulong *)((long)plVar2 + lVar10);
          lVar9 = (long)puVar14 - (param_1[4] - lVar7);
          puVar12 = puVar14 + 1;
          *puVar14 = uVar11;
          _memcpy(lVar9,lVar7);
          lVar10 = param_1[3];
          param_1[3] = lVar9;
          param_1[4] = (long)puVar12;
          param_1[5] = (long)(plVar2 + uVar13);
          if (lVar10 != 0) {
            __ZdlPv();
          }
        }
        param_1[4] = (long)puVar12;
        uVar3 = *(ulong *)(param_2 + 0x18);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar3);
  }
  return;
}



/* Entry: 109545d08; end: 109545e13;  */

void FUN_109545d08(undefined8 *param_1,ulong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined1 uStack_a1;
  ulong uStack_a0;
  undefined8 *puStack_98;
  undefined1 **ppuStack_90;
  code *pcStack_88;
  ulong uStack_80;
  undefined8 *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined1 **ppuStack_60;
  code *pcStack_58;
  ulong uStack_50;
  undefined8 *puStack_48;
  undefined1 *puStack_40;
  code *pcStack_38;
  
  uVar5 = param_1[2];
  puVar2 = (undefined8 *)*param_1;
  if ((ulong)((long)(uVar5 - (long)puVar2) >> 2) < param_2) {
    uVar8 = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      param_1[1] = puVar2;
      __ZdlPv();
      uVar5 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (param_2 >> 0x3e != 0) {
      FUN_109545e4c();
      pcStack_38 = FUN_109545e14;
      ppuStack_60 = &puStack_40;
      uStack_50 = param_2;
      puStack_48 = param_1;
      puStack_40 = &stack0xfffffffffffffff0;
      if (uVar8 >> 0x3e == 0) {
        puVar3 = puVar2;
        FUN_109545e60();
        *puVar2 = puVar3;
        puVar2[1] = puVar3;
        puVar2[2] = (undefined4 *)((long)puVar3 + uVar8 * 4);
        return;
      }
      FUN_109545e4c();
      pcStack_58 = FUN_109545e4c;
      puVar4 = &DAT_10f62a4d8;
      func_0x000104c4f6cc();
      pcStack_68 = FUN_109545e60;
      ppuStack_90 = &puStack_70;
      uStack_80 = param_2;
      puStack_78 = param_1;
      if (uVar8 >> 0x3e == 0) {
        puStack_70 = (undefined1 *)&ppuStack_60;
        __Znwm(uVar8 << 2);
        return;
      }
      puStack_70 = (undefined1 *)&ppuStack_60;
      func_0x000104c4f740();
      pcStack_88 = FUN_109545e94;
      if (*(uint *)(puVar4 + 0x18) != 0xffffffff) {
        uStack_a0 = param_2;
        puStack_98 = param_1;
        (*(code *)(&PTR_FUN_110afbc08)[*(uint *)(puVar4 + 0x18)])(&uStack_a1,puVar4);
      }
      *(undefined4 *)(puVar4 + 0x18) = 0xffffffff;
      return;
    }
    uVar8 = (long)uVar5 >> 1;
    if ((ulong)((long)uVar5 >> 1) <= param_2) {
      uVar8 = param_2;
    }
    if (0x7ffffffffffffffb < uVar5) {
      uVar8 = 0x3fffffffffffffff;
    }
    FUN_109545e14(param_1,uVar8);
    puVar6 = (undefined4 *)param_1[1];
    lVar9 = param_2 << 2;
    uVar1 = *param_3;
    puVar7 = puVar6;
    do {
      *puVar7 = uVar1;
      lVar9 = lVar9 + -4;
      puVar7 = puVar7 + 1;
    } while (lVar9 != 0);
    param_1[1] = puVar6 + param_2;
  }
  else {
    puVar7 = (undefined4 *)param_1[1];
    uVar8 = (long)puVar7 - (long)puVar2 >> 2;
    uVar5 = uVar8;
    if (param_2 <= uVar8) {
      uVar5 = param_2;
    }
    if (uVar5 != 0) {
      uVar1 = *param_3;
      puVar3 = puVar2;
      do {
        *(undefined4 *)puVar3 = uVar1;
        uVar5 = uVar5 - 1;
        puVar3 = (undefined8 *)((long)puVar3 + 4);
      } while (uVar5 != 0);
    }
    if (param_2 < uVar8 || param_2 - uVar8 == 0) {
      param_1[1] = (undefined4 *)((long)puVar2 + param_2 * 4);
    }
    else {
      uVar1 = *param_3;
      lVar9 = param_2 * 4 + uVar8 * -4;
      puVar6 = puVar7;
      do {
        *puVar6 = uVar1;
        lVar9 = lVar9 + -4;
        puVar6 = puVar6 + 1;
      } while (lVar9 != 0);
      param_1[1] = puVar7 + (param_2 - uVar8);
    }
  }
  return;
}



/* Entry: 109545e14; end: 109545e4b;  */

void FUN_109545e14(long *param_1,ulong param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined1 uStack_71;
  
  if (param_2 >> 0x3e == 0) {
    plVar1 = param_1;
    FUN_109545e60();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)plVar1 + param_2 * 4;
    return;
  }
  FUN_109545e4c();
  puVar2 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104c4f740();
  if (*(uint *)(puVar2 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110afbc08)[*(uint *)(puVar2 + 0x18)])(&uStack_71,puVar2);
  }
  *(undefined4 *)(puVar2 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 109545e4c; end: 109545e5f;  */

void FUN_109545e4c(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined1 uStack_51;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104c4f6cc();
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104c4f740();
  if (*(uint *)(puVar1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110afbc08)[*(uint *)(puVar1 + 0x18)])(&uStack_51,puVar1);
  }
  *(undefined4 *)(puVar1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 109545e60; end: 109545e93;  */

void FUN_109545e60(long param_1,ulong param_2)

{
  undefined1 uStack_41;
  
  if (param_2 >> 0x3e == 0) {
    __Znwm(param_2 << 2);
    return;
  }
  func_0x000104c4f740();
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110afbc08)[*(uint *)(param_1 + 0x18)])(&uStack_41,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 109545e94; end: 109545ee7;  */

void FUN_109545e94(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x18) != 0xffffffff) {
    (*(code *)(&PTR_FUN_110afbc08)[*(uint *)(param_1 + 0x18)])(&uStack_21,param_1);
  }
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  return;
}



/* Entry: 109545ee8; end: 109545f17;  */

void FUN_109545ee8(void)

{
  return;
}



/* Entry: 109545f18; end: 109546007;  */

long * FUN_109545f18(undefined8 param_1,long *param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  bool bVar4;
  long *plVar5;
  float *pfVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined1 (*pauVar10) [16];
  long lVar11;
  long lVar12;
  float *pfVar13;
  ulong uVar14;
  float *pfVar15;
  ulong uVar16;
  undefined1 *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  undefined1 (*pauVar22) [16];
  ulong unaff_x23;
  float *unaff_x24;
  ulong unaff_x25;
  long unaff_x28;
  float fVar23;
  undefined4 uVar24;
  long lVar25;
  long extraout_var;
  undefined1 auVar26 [16];
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_2d8;
  undefined1 ***pppuStack_2d0;
  code *pcStack_2c8;
  long *plStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  long lStack_2a8;
  undefined1 uStack_291;
  undefined8 uStack_290;
  undefined8 uStack_288;
  long lStack_280;
  ulong auStack_270 [2];
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long lStack_220;
  undefined8 uStack_218;
  long lStack_210;
  ulong auStack_208 [2];
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  ulong uStack_1c8;
  float *pfStack_1c0;
  ulong uStack_1b8;
  long *plStack_1b0;
  ulong *puStack_1a8;
  ulong *puStack_1a0;
  float *pfStack_198;
  undefined1 **ppuStack_190;
  code *pcStack_188;
  ulong uStack_180;
  long *plStack_178;
  undefined1 uStack_169;
  float *pfStack_168;
  ulong uStack_160;
  float *pfStack_158;
  ulong *puStack_148;
  long alStack_140 [2];
  undefined8 uStack_130;
  long lStack_128;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  long lStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 uStack_79;
  long lStack_78;
  ulong uStack_70;
  ulong uStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_b0 = param_2[3];
  uStack_a8 = param_2[4];
  plStack_a0 = param_2;
  uStack_70 = uStack_b0;
  uStack_68 = uStack_a8;
  plStack_60 = param_2;
  if (uStack_a8 < uStack_b0) {
    lStack_b8 = *param_2;
    lStack_88 = param_2[2];
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    plVar5 = &lStack_b8;
    plVar7 = &lStack_78;
    lStack_78 = lStack_b8;
    lStack_48 = lStack_88;
    FUN_109546008();
  }
  else {
    lStack_b8 = *param_2;
    lStack_88 = param_2[2];
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    plVar5 = &lStack_b8;
    plVar7 = &lStack_78;
    param_3 = (ulong *)&uStack_79;
    lStack_78 = lStack_b8;
    lStack_48 = lStack_88;
    uStack_30 = uStack_a8;
    FUN_1095461ec();
  }
  if ((int)param_2[0x14] != 1) {
    plVar5 = param_2 + 0x11;
    FUN_109545e94();
    *(undefined4 *)(param_2 + 0x14) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return plVar5;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  puStack_d0 = &stack0xfffffffffffffff0;
  pcStack_c8 = FUN_109546008;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *plVar7;
  puVar2 = (ulong *)plVar7[1];
  puVar1 = (ulong *)plVar7[2];
  lVar11 = plVar7[3];
  pfStack_168 = (float *)0x0;
  uStack_160 = 0;
  if (puVar1 != (ulong *)0x0) {
    plVar7 = (long *)0x1;
    param_3 = puVar1;
    plStack_178 = plVar5;
    FUN_109540370(&pfStack_168);
    unaff_x23 = uStack_160;
    pfVar13 = pfStack_168;
    uStack_180 = uStack_160 + 3;
    if (-1 < (long)uStack_160) {
      uStack_180 = uStack_160;
    }
    unaff_x25 = uStack_180 & 0xfffffffffffffffc;
    if (3 < (long)uStack_160) {
      unaff_x28 = 0;
      lVar12 = lVar8;
      pfVar6 = pfStack_168;
      do {
        uStack_130 = *(undefined8 *)(lVar11 + 0x10);
        plVar7 = (long *)&uStack_169;
        param_3 = puVar2;
        alStack_140[0] = lVar12;
        lVar25 = FUN_109546520(alStack_140);
        unaff_x24 = pfVar6 + 4;
        *(long *)(pfVar6 + 2) = extraout_var;
        *(long *)pfVar6 = lVar25;
        unaff_x28 = unaff_x28 + 4;
        lVar12 = lVar12 + 0x10;
        pfVar6 = unaff_x24;
      } while (unaff_x28 < (long)unaff_x25);
    }
    plVar5 = plStack_178;
    if ((long)unaff_x25 < (long)unaff_x23) {
      lVar12 = *(long *)(lVar11 + 0x10);
      pfVar6 = (float *)(lVar8 + ((long)uStack_180 >> 2) * 0x10 + lVar12 * 4);
      do {
        fVar23 = *(float *)(lVar8 + unaff_x25 * 4);
        pfVar15 = pfVar6;
        puVar17 = (undefined1 *)((long)puVar2 + -1);
        fVar27 = fVar23;
        if (1 < (long)puVar2) {
          do {
            fVar23 = *pfVar15;
            if (fVar27 <= *pfVar15) {
              fVar23 = fVar27;
            }
            puVar17 = puVar17 + -1;
            pfVar15 = pfVar15 + lVar12;
            fVar27 = fVar23;
          } while (puVar17 != (undefined1 *)0x0);
        }
        pfVar13[unaff_x25] = fVar23;
        unaff_x25 = unaff_x25 + 1;
        pfVar6 = pfVar6 + 1;
      } while (unaff_x25 != unaff_x23);
    }
  }
  pfStack_158 = pfStack_168;
  puStack_148 = puVar1;
  lVar12 = plVar5[1];
  if (0 < lVar12) {
    lVar25 = 0;
    pfVar13 = (float *)*plVar5;
    lVar19 = plVar5[2];
    lVar18 = *(long *)(plVar5[3] + 0x10);
    do {
      pfVar6 = pfVar13;
      pfVar15 = pfStack_168;
      lVar21 = lVar19;
      if (0 < lVar19) {
        do {
          *pfVar6 = *pfVar6 - *pfVar15;
          lVar21 = lVar21 + -1;
          pfVar6 = pfVar6 + 1;
          pfVar15 = pfVar15 + 1;
        } while (lVar21 != 0);
      }
      lVar25 = lVar25 + 1;
      pfVar13 = pfVar13 + lVar18;
    } while (lVar25 != lVar12);
  }
  pfVar13 = pfStack_168;
  _free();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return plVar5;
  }
  ___stack_chk_fail();
  _free(pfStack_168);
  pfVar6 = pfVar13;
  __Unwind_Resume();
  lStack_1e0 = unaff_x28;
  lStack_1d8 = lVar8;
  lStack_1d0 = lVar11;
  uStack_1c8 = unaff_x25;
  pfStack_1c0 = unaff_x24;
  uStack_1b8 = unaff_x23;
  plStack_1b0 = plVar5;
  puStack_1a8 = puVar2;
  puStack_1a0 = puVar1;
  pfStack_198 = pfVar13;
  ppuStack_190 = &puStack_d0;
  pcStack_188 = FUN_1095461ec;
  lStack_1f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_2c0 = (long *)0x0;
  lStack_2b8 = 0;
  lVar8 = *plVar7;
  lVar12 = plVar7[1];
  lVar11 = plVar7[2];
  lVar25 = plVar7[3];
  uStack_288 = SUB168(*(undefined1 (*) [16])(plVar7 + 4),8);
  uStack_290 = SUB168(*(undefined1 (*) [16])(plVar7 + 4),0);
  lStack_280 = plVar7[6];
  if (lVar12 != 0) {
    param_3 = (ulong *)0x1;
    FUN_1093c61bc(&plStack_2c0,lVar12);
    lVar19 = lStack_2b8;
    plVar5 = plStack_2c0;
    if (0 < lStack_2b8) {
      lVar18 = 0;
      do {
        lStack_210 = *(long *)(lVar25 + 0x10);
        auStack_270[0] = lVar8 + lStack_210 * lVar18 * 4;
        uStack_230 = uStack_288;
        uStack_238 = uStack_290;
        lStack_228 = lStack_280;
        uStack_218 = 0;
        param_3 = auStack_270;
        lStack_260 = lVar11;
        lStack_258 = lVar8;
        lStack_250 = lVar12;
        lStack_248 = lVar11;
        lStack_240 = lVar25;
        lStack_220 = lVar18;
        auStack_208[0] = auStack_270[0];
        lStack_1f8 = lStack_210;
        uVar24 = FUN_10954638c(auStack_208,&uStack_291);
        *(undefined4 *)((long)plVar5 + lVar18 * 4) = uVar24;
        lVar18 = lVar18 + 1;
      } while (lVar19 != lVar18);
    }
  }
  lStack_2a8 = plVar7[1];
  lVar8 = *(long *)(pfVar6 + 2);
  if (0 < lVar8) {
    lVar11 = 0;
    pfVar13 = *(float **)pfVar6;
    lVar12 = *(long *)(pfVar6 + 4);
    lVar25 = *(long *)(*(long *)(pfVar6 + 6) + 0x10);
    do {
      pfVar6 = pfVar13;
      lVar19 = lVar12;
      if (0 < lVar12) {
        do {
          *pfVar6 = *pfVar6 - *(float *)((long)plStack_2c0 + lVar11 * 4);
          lVar19 = lVar19 + -1;
          pfVar6 = pfVar6 + 1;
        } while (lVar19 != 0);
      }
      lVar11 = lVar11 + 1;
      pfVar13 = pfVar13 + lVar25;
    } while (lVar11 != lVar8);
  }
  plVar5 = plStack_2c0;
  plStack_2b0 = plStack_2c0;
  _free();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f0) {
    return plVar5;
  }
  ___stack_chk_fail();
  _free(plStack_2c0);
  __Unwind_Resume();
  pppuStack_2d0 = &ppuStack_190;
  pcStack_2c8 = FUN_10954638c;
  lStack_2d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = param_3[2];
  uVar14 = (ulong)-((uint)*param_3 >> 2) & 3;
  if ((long)uVar9 <= (long)uVar14) {
    uVar14 = uVar9;
  }
  uVar16 = uVar9;
  if ((*param_3 & 3) == 0) {
    uVar16 = uVar14;
  }
  uVar20 = uVar9 - uVar16;
  uVar14 = uVar20 + 3;
  uVar3 = uVar20 + 7;
  if ((long)uVar16 <= (long)uVar9) {
    uVar14 = uVar20;
    uVar3 = uVar20;
  }
  pfVar13 = (float *)*plVar5;
  if (uVar20 + 3 < 7) {
    if (1 < (long)uVar9) {
      lVar8 = uVar9 - 1;
      fVar23 = *pfVar13;
      do {
        pfVar13 = pfVar13 + 1;
        fVar27 = *pfVar13;
        if (fVar23 <= *pfVar13) {
          fVar27 = fVar23;
        }
        lVar8 = lVar8 + -1;
        fVar23 = fVar27;
      } while (lVar8 != 0);
    }
  }
  else {
    lVar8 = (uVar14 & 0xfffffffffffffffc) + uVar16;
    pauVar10 = (undefined1 (*) [16])(pfVar13 + uVar16);
    auVar26 = *pauVar10;
    if (7 < (long)uVar20) {
      lVar11 = (uVar3 & 0xfffffffffffffff8) + uVar16;
      auVar28 = pauVar10[1];
      if (0xf < uVar20) {
        lVar12 = uVar16 + 8;
        pauVar10 = pauVar10 + 3;
        do {
          auVar26 = NEON_fmin(auVar26,pauVar10[-1],4);
          auVar28 = NEON_fmin(auVar28,*pauVar10,4);
          lVar12 = lVar12 + 8;
          pauVar10 = pauVar10 + 2;
        } while (lVar12 < lVar11);
      }
      auVar26 = NEON_fmin(auVar26,auVar28,4);
      if ((long)(uVar3 & 0xfffffffffffffff8) < (long)(uVar14 & 0xfffffffffffffffc)) {
        auVar26 = NEON_fmin(auVar26,*(undefined1 (*) [16])(pfVar13 + lVar11),4);
      }
    }
    uStack_2e8 = auVar26._8_8_;
    uStack_2f0 = auVar26._0_8_;
    uVar14 = 2;
    do {
      uVar20 = 0;
      do {
        fVar23 = *(float *)((long)&uStack_2f0 + uVar20 * 4 + uVar14 * 4);
        fVar27 = *(float *)((long)&uStack_2f0 + uVar20 * 4);
        if (fVar27 <= fVar23) {
          fVar23 = fVar27;
        }
        *(float *)((long)&uStack_2f0 + uVar20 * 4) = fVar23;
        uVar20 = uVar20 + 1;
      } while (uVar14 != uVar20);
      bVar4 = 1 < uVar14;
      uVar14 = uVar14 >> 1;
    } while (bVar4);
    pfVar6 = pfVar13;
    fVar23 = (float)uStack_2f0;
    fVar27 = (float)uStack_2f0;
    if (0 < (long)uVar16) {
      do {
        fVar23 = *pfVar6;
        if (fVar27 <= *pfVar6) {
          fVar23 = fVar27;
        }
        uVar16 = uVar16 - 1;
        pfVar6 = pfVar6 + 1;
        fVar27 = fVar23;
      } while (uVar16 != 0);
    }
    for (; lVar8 < (long)uVar9; lVar8 = lVar8 + 1) {
      fVar27 = pfVar13[lVar8];
      if (fVar23 <= pfVar13[lVar8]) {
        fVar27 = fVar23;
      }
      fVar23 = fVar27;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2d8) {
    ___stack_chk_fail();
    if (param_3 == (ulong *)0x0) {
      return plVar5;
    }
    pauVar10 = (undefined1 (*) [16])*plVar5;
    auVar26 = *pauVar10;
    if ((long)param_3 < 5) {
      lVar8 = 1;
    }
    else {
      uVar14 = (ulong)((long)param_3 + -1) & 0xfffffffffffffffc;
      lVar11 = plVar5[2];
      lVar8 = 1;
      pauVar22 = pauVar10;
      do {
        auVar28 = NEON_fmin(*(undefined1 (*) [16])(*pauVar22 + lVar11 * 4),
                            *(undefined1 (*) [16])(*pauVar22 + lVar11 * 8),4);
        puVar17 = *pauVar22;
        pauVar22 = pauVar22 + lVar11;
        auVar29 = NEON_fmin(*(undefined1 (*) [16])(puVar17 + lVar11 * 0xc),*pauVar22,4);
        auVar28 = NEON_fmin(auVar28,auVar29,4);
        auVar26 = NEON_fmin(auVar26,auVar28,4);
        lVar8 = lVar8 + 4;
      } while (lVar8 < (long)uVar14);
      lVar8 = uVar14 + 1;
    }
    lVar11 = (long)param_3 - lVar8;
    if (lVar11 != 0 && lVar8 <= (long)param_3) {
      pauVar10 = (undefined1 (*) [16])(*pauVar10 + lVar8 * plVar5[2] * 4);
      do {
        auVar26 = NEON_fmin(auVar26,*pauVar10,4);
        pauVar10 = (undefined1 (*) [16])(*pauVar10 + plVar5[2] * 4);
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    return plVar5;
  }
  return plVar5;
}



/* Entry: 109546008; end: 1095461eb;  */

long * FUN_109546008(long *param_1,long *param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  bool bVar5;
  float *pfVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined1 (*pauVar10) [16];
  long lVar11;
  long lVar12;
  float *pfVar13;
  ulong uVar14;
  float *pfVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  undefined1 (*pauVar21) [16];
  ulong unaff_x23;
  float *unaff_x24;
  ulong unaff_x25;
  long unaff_x28;
  float fVar22;
  undefined4 uVar23;
  long lVar24;
  long extraout_var;
  undefined1 auVar25 [16];
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_218;
  undefined1 **ppuStack_210;
  code *pcStack_208;
  long *plStack_200;
  long lStack_1f8;
  long *plStack_1f0;
  long lStack_1e8;
  undefined1 uStack_1d1;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long lStack_1c0;
  ulong auStack_1b0 [2];
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 uStack_158;
  long lStack_150;
  ulong auStack_148 [2];
  long lStack_138;
  long lStack_130;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  ulong uStack_108;
  float *pfStack_100;
  ulong uStack_f8;
  long *plStack_f0;
  ulong *puStack_e8;
  ulong *puStack_e0;
  float *pfStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  ulong uStack_c0;
  long *plStack_b8;
  undefined1 uStack_a9;
  float *pfStack_a8;
  ulong uStack_a0;
  float *pfStack_98;
  ulong *puStack_88;
  long alStack_80 [2];
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar8 = *param_2;
  puVar2 = (ulong *)param_2[1];
  puVar1 = (ulong *)param_2[2];
  lVar11 = param_2[3];
  pfStack_a8 = (float *)0x0;
  uStack_a0 = 0;
  if (puVar1 != (ulong *)0x0) {
    param_2 = (long *)0x1;
    param_3 = puVar1;
    plStack_b8 = param_1;
    FUN_109540370(&pfStack_a8);
    unaff_x23 = uStack_a0;
    pfVar13 = pfStack_a8;
    uStack_c0 = uStack_a0 + 3;
    if (-1 < (long)uStack_a0) {
      uStack_c0 = uStack_a0;
    }
    unaff_x25 = uStack_c0 & 0xfffffffffffffffc;
    if (3 < (long)uStack_a0) {
      unaff_x28 = 0;
      lVar12 = lVar8;
      pfVar6 = pfStack_a8;
      do {
        uStack_70 = *(undefined8 *)(lVar11 + 0x10);
        param_2 = (long *)&uStack_a9;
        param_3 = puVar2;
        alStack_80[0] = lVar12;
        lVar24 = FUN_109546520(alStack_80);
        unaff_x24 = pfVar6 + 4;
        *(long *)(pfVar6 + 2) = extraout_var;
        *(long *)pfVar6 = lVar24;
        unaff_x28 = unaff_x28 + 4;
        lVar12 = lVar12 + 0x10;
        pfVar6 = unaff_x24;
      } while (unaff_x28 < (long)unaff_x25);
    }
    param_1 = plStack_b8;
    if ((long)unaff_x25 < (long)unaff_x23) {
      lVar12 = *(long *)(lVar11 + 0x10);
      pfVar6 = (float *)(lVar8 + ((long)uStack_c0 >> 2) * 0x10 + lVar12 * 4);
      do {
        fVar22 = *(float *)(lVar8 + unaff_x25 * 4);
        pfVar15 = pfVar6;
        lVar24 = (long)puVar2 + -1;
        fVar26 = fVar22;
        if (1 < (long)puVar2) {
          do {
            fVar22 = *pfVar15;
            if (fVar26 <= *pfVar15) {
              fVar22 = fVar26;
            }
            lVar24 = lVar24 + -1;
            pfVar15 = pfVar15 + lVar12;
            fVar26 = fVar22;
          } while (lVar24 != 0);
        }
        pfVar13[unaff_x25] = fVar22;
        unaff_x25 = unaff_x25 + 1;
        pfVar6 = pfVar6 + 1;
      } while (unaff_x25 != unaff_x23);
    }
  }
  pfStack_98 = pfStack_a8;
  lVar12 = param_1[1];
  if (0 < lVar12) {
    lVar24 = 0;
    pfVar13 = (float *)*param_1;
    lVar18 = param_1[2];
    lVar17 = *(long *)(param_1[3] + 0x10);
    do {
      pfVar6 = pfVar13;
      pfVar15 = pfStack_a8;
      lVar20 = lVar18;
      if (0 < lVar18) {
        do {
          *pfVar6 = *pfVar6 - *pfVar15;
          lVar20 = lVar20 + -1;
          pfVar6 = pfVar6 + 1;
          pfVar15 = pfVar15 + 1;
        } while (lVar20 != 0);
      }
      lVar24 = lVar24 + 1;
      pfVar13 = pfVar13 + lVar17;
    } while (lVar24 != lVar12);
  }
  pfVar13 = pfStack_a8;
  puStack_88 = puVar1;
  _free();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  _free(pfStack_a8);
  pfVar6 = pfVar13;
  __Unwind_Resume();
  lStack_120 = unaff_x28;
  lStack_118 = lVar8;
  lStack_110 = lVar11;
  uStack_108 = unaff_x25;
  pfStack_100 = unaff_x24;
  uStack_f8 = unaff_x23;
  plStack_f0 = param_1;
  puStack_e8 = puVar2;
  puStack_e0 = puVar1;
  pfStack_d8 = pfVar13;
  puStack_d0 = &stack0xfffffffffffffff0;
  pcStack_c8 = FUN_1095461ec;
  lStack_130 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plStack_200 = (long *)0x0;
  lStack_1f8 = 0;
  lVar8 = *param_2;
  lVar12 = param_2[1];
  lVar11 = param_2[2];
  lVar24 = param_2[3];
  uStack_1c8 = SUB168(*(undefined1 (*) [16])(param_2 + 4),8);
  uStack_1d0 = SUB168(*(undefined1 (*) [16])(param_2 + 4),0);
  lStack_1c0 = param_2[6];
  if (lVar12 != 0) {
    param_3 = (ulong *)0x1;
    FUN_1093c61bc(&plStack_200,lVar12);
    lVar18 = lStack_1f8;
    plVar7 = plStack_200;
    if (0 < lStack_1f8) {
      lVar17 = 0;
      do {
        lStack_150 = *(long *)(lVar24 + 0x10);
        auStack_1b0[0] = lVar8 + lStack_150 * lVar17 * 4;
        uStack_170 = uStack_1c8;
        uStack_178 = uStack_1d0;
        lStack_168 = lStack_1c0;
        uStack_158 = 0;
        param_3 = auStack_1b0;
        lStack_1a0 = lVar11;
        lStack_198 = lVar8;
        lStack_190 = lVar12;
        lStack_188 = lVar11;
        lStack_180 = lVar24;
        lStack_160 = lVar17;
        auStack_148[0] = auStack_1b0[0];
        lStack_138 = lStack_150;
        uVar23 = FUN_10954638c(auStack_148,&uStack_1d1);
        *(undefined4 *)((long)plVar7 + lVar17 * 4) = uVar23;
        lVar17 = lVar17 + 1;
      } while (lVar18 != lVar17);
    }
  }
  lStack_1e8 = param_2[1];
  lVar8 = *(long *)(pfVar6 + 2);
  if (0 < lVar8) {
    lVar11 = 0;
    pfVar13 = *(float **)pfVar6;
    lVar12 = *(long *)(pfVar6 + 4);
    lVar24 = *(long *)(*(long *)(pfVar6 + 6) + 0x10);
    do {
      pfVar6 = pfVar13;
      lVar18 = lVar12;
      if (0 < lVar12) {
        do {
          *pfVar6 = *pfVar6 - *(float *)((long)plStack_200 + lVar11 * 4);
          lVar18 = lVar18 + -1;
          pfVar6 = pfVar6 + 1;
        } while (lVar18 != 0);
      }
      lVar11 = lVar11 + 1;
      pfVar13 = pfVar13 + lVar24;
    } while (lVar11 != lVar8);
  }
  plVar7 = plStack_200;
  plStack_1f0 = plStack_200;
  _free();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_130) {
    return plVar7;
  }
  ___stack_chk_fail();
  _free(plStack_200);
  __Unwind_Resume();
  ppuStack_210 = &puStack_d0;
  pcStack_208 = FUN_10954638c;
  lStack_218 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = param_3[2];
  uVar14 = (ulong)-((uint)*param_3 >> 2) & 3;
  if ((long)uVar9 <= (long)uVar14) {
    uVar14 = uVar9;
  }
  uVar16 = uVar9;
  if ((*param_3 & 3) == 0) {
    uVar16 = uVar14;
  }
  uVar19 = uVar9 - uVar16;
  uVar14 = uVar19 + 3;
  uVar3 = uVar19 + 7;
  if ((long)uVar16 <= (long)uVar9) {
    uVar14 = uVar19;
    uVar3 = uVar19;
  }
  pfVar13 = (float *)*plVar7;
  if (uVar19 + 3 < 7) {
    if (1 < (long)uVar9) {
      lVar8 = uVar9 - 1;
      fVar22 = *pfVar13;
      do {
        pfVar13 = pfVar13 + 1;
        fVar26 = *pfVar13;
        if (fVar22 <= *pfVar13) {
          fVar26 = fVar22;
        }
        lVar8 = lVar8 + -1;
        fVar22 = fVar26;
      } while (lVar8 != 0);
    }
  }
  else {
    lVar8 = (uVar14 & 0xfffffffffffffffc) + uVar16;
    pauVar10 = (undefined1 (*) [16])(pfVar13 + uVar16);
    auVar25 = *pauVar10;
    if (7 < (long)uVar19) {
      lVar11 = (uVar3 & 0xfffffffffffffff8) + uVar16;
      auVar27 = pauVar10[1];
      if (0xf < uVar19) {
        lVar12 = uVar16 + 8;
        pauVar10 = pauVar10 + 3;
        do {
          auVar25 = NEON_fmin(auVar25,pauVar10[-1],4);
          auVar27 = NEON_fmin(auVar27,*pauVar10,4);
          lVar12 = lVar12 + 8;
          pauVar10 = pauVar10 + 2;
        } while (lVar12 < lVar11);
      }
      auVar25 = NEON_fmin(auVar25,auVar27,4);
      if ((long)(uVar3 & 0xfffffffffffffff8) < (long)(uVar14 & 0xfffffffffffffffc)) {
        auVar25 = NEON_fmin(auVar25,*(undefined1 (*) [16])(pfVar13 + lVar11),4);
      }
    }
    uStack_228 = auVar25._8_8_;
    uStack_230 = auVar25._0_8_;
    uVar14 = 2;
    do {
      uVar19 = 0;
      do {
        fVar22 = *(float *)((long)&uStack_230 + uVar19 * 4 + uVar14 * 4);
        fVar26 = *(float *)((long)&uStack_230 + uVar19 * 4);
        if (fVar26 <= fVar22) {
          fVar22 = fVar26;
        }
        *(float *)((long)&uStack_230 + uVar19 * 4) = fVar22;
        uVar19 = uVar19 + 1;
      } while (uVar14 != uVar19);
      bVar5 = 1 < uVar14;
      uVar14 = uVar14 >> 1;
    } while (bVar5);
    pfVar6 = pfVar13;
    fVar22 = (float)uStack_230;
    fVar26 = (float)uStack_230;
    if (0 < (long)uVar16) {
      do {
        fVar22 = *pfVar6;
        if (fVar26 <= *pfVar6) {
          fVar22 = fVar26;
        }
        uVar16 = uVar16 - 1;
        pfVar6 = pfVar6 + 1;
        fVar26 = fVar22;
      } while (uVar16 != 0);
    }
    for (; lVar8 < (long)uVar9; lVar8 = lVar8 + 1) {
      fVar26 = pfVar13[lVar8];
      if (fVar22 <= pfVar13[lVar8]) {
        fVar26 = fVar22;
      }
      fVar22 = fVar26;
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_218) {
    ___stack_chk_fail();
    if (param_3 == (ulong *)0x0) {
      return plVar7;
    }
    pauVar10 = (undefined1 (*) [16])*plVar7;
    auVar25 = *pauVar10;
    if ((long)param_3 < 5) {
      lVar8 = 1;
    }
    else {
      uVar14 = (long)param_3 - 1U & 0xfffffffffffffffc;
      lVar11 = plVar7[2];
      lVar8 = 1;
      pauVar21 = pauVar10;
      do {
        auVar27 = NEON_fmin(*(undefined1 (*) [16])(*pauVar21 + lVar11 * 4),
                            *(undefined1 (*) [16])(*pauVar21 + lVar11 * 8),4);
        puVar4 = *pauVar21;
        pauVar21 = pauVar21 + lVar11;
        auVar28 = NEON_fmin(*(undefined1 (*) [16])(puVar4 + lVar11 * 0xc),*pauVar21,4);
        auVar27 = NEON_fmin(auVar27,auVar28,4);
        auVar25 = NEON_fmin(auVar25,auVar27,4);
        lVar8 = lVar8 + 4;
      } while (lVar8 < (long)uVar14);
      lVar8 = uVar14 + 1;
    }
    lVar11 = (long)param_3 - lVar8;
    if (lVar11 != 0 && lVar8 <= (long)param_3) {
      pauVar10 = (undefined1 (*) [16])(*pauVar10 + lVar8 * plVar7[2] * 4);
      do {
        auVar25 = NEON_fmin(auVar25,*pauVar10,4);
        pauVar10 = (undefined1 (*) [16])(*pauVar10 + plVar7[2] * 4);
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    return plVar7;
  }
  return plVar7;
}



/* Entry: 1095461ec; end: 10954638b;  */

ulong FUN_1095461ec(long *param_1,long *param_2,ulong *param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined1 (*pauVar7) [16];
  long lVar8;
  float *pfVar9;
  ulong uVar10;
  long lVar11;
  float *pfVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined1 (*pauVar16) [16];
  long lVar17;
  undefined4 uVar18;
  float fVar19;
  ulong uVar20;
  undefined1 auVar21 [16];
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 uStack_170;
  undefined8 uStack_168;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 *puStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  long lStack_128;
  undefined1 uStack_111;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  ulong auStack_f0 [2];
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  ulong auStack_88 [2];
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_140 = (undefined8 *)0x0;
  lStack_138 = 0;
  lVar5 = *param_2;
  lVar15 = param_2[1];
  lVar8 = param_2[2];
  lVar11 = param_2[3];
  uStack_108 = SUB168(*(undefined1 (*) [16])(param_2 + 4),8);
  uStack_110 = SUB168(*(undefined1 (*) [16])(param_2 + 4),0);
  lStack_100 = param_2[6];
  if (lVar15 != 0) {
    param_3 = (ulong *)0x1;
    FUN_1093c61bc(&puStack_140,lVar15);
    lVar13 = lStack_138;
    puVar4 = puStack_140;
    if (0 < lStack_138) {
      lVar17 = 0;
      do {
        lStack_90 = *(long *)(lVar11 + 0x10);
        auStack_f0[0] = lVar5 + lStack_90 * lVar17 * 4;
        uStack_b0 = uStack_108;
        uStack_b8 = uStack_110;
        lStack_a8 = lStack_100;
        uStack_98 = 0;
        param_3 = auStack_f0;
        lStack_e0 = lVar8;
        lStack_d8 = lVar5;
        lStack_d0 = lVar15;
        lStack_c8 = lVar8;
        lStack_c0 = lVar11;
        lStack_a0 = lVar17;
        auStack_88[0] = auStack_f0[0];
        lStack_78 = lStack_90;
        uVar18 = FUN_10954638c(auStack_88,&uStack_111);
        *(undefined4 *)((long)puVar4 + lVar17 * 4) = uVar18;
        lVar17 = lVar17 + 1;
      } while (lVar13 != lVar17);
    }
  }
  lStack_128 = param_2[1];
  lVar5 = param_1[1];
  if (0 < lVar5) {
    lVar8 = 0;
    pfVar9 = (float *)*param_1;
    lVar15 = param_1[2];
    lVar11 = *(long *)(param_1[3] + 0x10);
    do {
      pfVar12 = pfVar9;
      lVar13 = lVar15;
      if (0 < lVar15) {
        do {
          *pfVar12 = *pfVar12 - *(float *)((long)puStack_140 + lVar8 * 4);
          lVar13 = lVar13 + -1;
          pfVar12 = pfVar12 + 1;
        } while (lVar13 != 0);
      }
      lVar8 = lVar8 + 1;
      pfVar9 = pfVar9 + lVar11;
    } while (lVar8 != lVar5);
  }
  puVar4 = puStack_140;
  puStack_130 = puStack_140;
  uVar20 = _free();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar20;
  }
  ___stack_chk_fail();
  _free(puStack_140);
  __Unwind_Resume();
  puStack_150 = &stack0xfffffffffffffff0;
  pcStack_148 = FUN_10954638c;
  lStack_158 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar6 = param_3[2];
  uVar20 = (ulong)-((uint)*param_3 >> 2) & 3;
  if ((long)uVar6 <= (long)uVar20) {
    uVar20 = uVar6;
  }
  uVar10 = uVar6;
  if ((*param_3 & 3) == 0) {
    uVar10 = uVar20;
  }
  uVar14 = uVar6 - uVar10;
  uVar20 = uVar14 + 3;
  uVar1 = uVar14 + 7;
  if ((long)uVar10 <= (long)uVar6) {
    uVar20 = uVar14;
    uVar1 = uVar14;
  }
  pfVar9 = (float *)*puVar4;
  if (uVar14 + 3 < 7) {
    uVar20 = (ulong)(uint)*pfVar9;
    if (1 < (long)uVar6) {
      lVar5 = uVar6 - 1;
      fVar19 = *pfVar9;
      do {
        pfVar9 = pfVar9 + 1;
        fVar22 = *pfVar9;
        if (fVar19 <= *pfVar9) {
          fVar22 = fVar19;
        }
        uVar20 = (ulong)(uint)fVar22;
        lVar5 = lVar5 + -1;
        fVar19 = fVar22;
      } while (lVar5 != 0);
    }
  }
  else {
    lVar5 = (uVar20 & 0xfffffffffffffffc) + uVar10;
    pauVar7 = (undefined1 (*) [16])(pfVar9 + uVar10);
    auVar21 = *pauVar7;
    if (7 < (long)uVar14) {
      lVar8 = (uVar1 & 0xfffffffffffffff8) + uVar10;
      auVar23 = pauVar7[1];
      if (0xf < uVar14) {
        lVar15 = uVar10 + 8;
        pauVar7 = pauVar7 + 3;
        do {
          auVar21 = NEON_fmin(auVar21,pauVar7[-1],4);
          auVar23 = NEON_fmin(auVar23,*pauVar7,4);
          lVar15 = lVar15 + 8;
          pauVar7 = pauVar7 + 2;
        } while (lVar15 < lVar8);
      }
      auVar21 = NEON_fmin(auVar21,auVar23,4);
      if ((long)(uVar1 & 0xfffffffffffffff8) < (long)(uVar20 & 0xfffffffffffffffc)) {
        auVar21 = NEON_fmin(auVar21,*(undefined1 (*) [16])(pfVar9 + lVar8),4);
      }
    }
    uStack_168 = auVar21._8_8_;
    uStack_170 = auVar21._0_8_;
    uVar20 = 2;
    do {
      uVar14 = 0;
      do {
        fVar19 = *(float *)((long)&uStack_170 + uVar14 * 4 + uVar20 * 4);
        fVar22 = *(float *)((long)&uStack_170 + uVar14 * 4);
        if (fVar22 <= fVar19) {
          fVar19 = fVar22;
        }
        *(float *)((long)&uStack_170 + uVar14 * 4) = fVar19;
        uVar14 = uVar14 + 1;
      } while (uVar20 != uVar14);
      bVar3 = 1 < uVar20;
      uVar20 = uVar20 >> 1;
    } while (bVar3);
    auVar21 = ZEXT416((uint)uStack_170);
    pfVar12 = pfVar9;
    if (0 < (long)uVar10) {
      do {
        fVar19 = *pfVar12;
        if (auVar21._0_4_ <= *pfVar12) {
          fVar19 = auVar21._0_4_;
        }
        auVar21 = ZEXT416((uint)fVar19);
        uVar10 = uVar10 - 1;
        pfVar12 = pfVar12 + 1;
      } while (uVar10 != 0);
    }
    for (; uVar20 = auVar21._0_8_, lVar5 < (long)uVar6; lVar5 = lVar5 + 1) {
      fVar19 = pfVar9[lVar5];
      if (auVar21._0_4_ <= pfVar9[lVar5]) {
        fVar19 = auVar21._0_4_;
      }
      auVar21 = ZEXT416((uint)fVar19);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_158) {
    ___stack_chk_fail();
    if (param_3 == (ulong *)0x0) {
      return 0;
    }
    pauVar7 = (undefined1 (*) [16])*puVar4;
    auVar21 = *pauVar7;
    if ((long)param_3 < 5) {
      lVar5 = 1;
    }
    else {
      uVar20 = (long)param_3 - 1U & 0xfffffffffffffffc;
      lVar8 = puVar4[2];
      lVar5 = 1;
      pauVar16 = pauVar7;
      do {
        auVar23 = NEON_fmin(*(undefined1 (*) [16])(*pauVar16 + lVar8 * 4),
                            *(undefined1 (*) [16])(*pauVar16 + lVar8 * 8),4);
        puVar2 = *pauVar16;
        pauVar16 = pauVar16 + lVar8;
        auVar24 = NEON_fmin(*(undefined1 (*) [16])(puVar2 + lVar8 * 0xc),*pauVar16,4);
        auVar23 = NEON_fmin(auVar23,auVar24,4);
        auVar21 = NEON_fmin(auVar21,auVar23,4);
        lVar5 = lVar5 + 4;
      } while (lVar5 < (long)uVar20);
      lVar5 = uVar20 + 1;
    }
    uVar20 = auVar21._0_8_;
    lVar8 = (long)param_3 - lVar5;
    if (lVar8 != 0 && lVar5 <= (long)param_3) {
      pauVar7 = (undefined1 (*) [16])(*pauVar7 + lVar5 * puVar4[2] * 4);
      do {
        auVar21 = NEON_fmin(auVar21,*pauVar7,4);
        uVar20 = auVar21._0_8_;
        pauVar7 = (undefined1 (*) [16])(*pauVar7 + puVar4[2] * 4);
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    return uVar20;
  }
  return uVar20;
}



/* Entry: 10954638c; end: 10954651f;  */

ulong FUN_10954638c(undefined8 *param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  undefined1 (*pauVar6) [16];
  float *pfVar7;
  ulong uVar8;
  ulong uVar9;
  float *pfVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined1 (*pauVar14) [16];
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = param_3[2];
  uVar8 = (ulong)-((uint)*param_3 >> 2) & 3;
  if ((long)uVar4 <= (long)uVar8) {
    uVar8 = uVar4;
  }
  uVar9 = uVar4;
  if ((*param_3 & 3) == 0) {
    uVar9 = uVar8;
  }
  uVar12 = uVar4 - uVar9;
  uVar8 = uVar12 + 3;
  uVar1 = uVar12 + 7;
  if ((long)uVar9 <= (long)uVar4) {
    uVar8 = uVar12;
    uVar1 = uVar12;
  }
  pfVar7 = (float *)*param_1;
  if (uVar12 + 3 < 7) {
    uVar8 = (ulong)(uint)*pfVar7;
    if (1 < (long)uVar4) {
      lVar5 = uVar4 - 1;
      fVar15 = *pfVar7;
      do {
        pfVar7 = pfVar7 + 1;
        fVar17 = *pfVar7;
        if (fVar15 <= *pfVar7) {
          fVar17 = fVar15;
        }
        uVar8 = (ulong)(uint)fVar17;
        lVar5 = lVar5 + -1;
        fVar15 = fVar17;
      } while (lVar5 != 0);
    }
  }
  else {
    lVar5 = (uVar8 & 0xfffffffffffffffc) + uVar9;
    pauVar6 = (undefined1 (*) [16])(pfVar7 + uVar9);
    auVar16 = *pauVar6;
    if (7 < (long)uVar12) {
      lVar11 = (uVar1 & 0xfffffffffffffff8) + uVar9;
      auVar18 = pauVar6[1];
      if (0xf < uVar12) {
        lVar13 = uVar9 + 8;
        pauVar6 = pauVar6 + 3;
        do {
          auVar16 = NEON_fmin(auVar16,pauVar6[-1],4);
          auVar18 = NEON_fmin(auVar18,*pauVar6,4);
          lVar13 = lVar13 + 8;
          pauVar6 = pauVar6 + 2;
        } while (lVar13 < lVar11);
      }
      auVar16 = NEON_fmin(auVar16,auVar18,4);
      if ((long)(uVar1 & 0xfffffffffffffff8) < (long)(uVar8 & 0xfffffffffffffffc)) {
        auVar16 = NEON_fmin(auVar16,*(undefined1 (*) [16])(pfVar7 + lVar11),4);
      }
    }
    uStack_28 = auVar16._8_8_;
    uStack_30 = auVar16._0_8_;
    uVar8 = 2;
    do {
      uVar12 = 0;
      do {
        fVar15 = *(float *)((long)&uStack_30 + uVar12 * 4 + uVar8 * 4);
        fVar17 = *(float *)((long)&uStack_30 + uVar12 * 4);
        if (fVar17 <= fVar15) {
          fVar15 = fVar17;
        }
        *(float *)((long)&uStack_30 + uVar12 * 4) = fVar15;
        uVar12 = uVar12 + 1;
      } while (uVar8 != uVar12);
      bVar3 = 1 < uVar8;
      uVar8 = uVar8 >> 1;
    } while (bVar3);
    auVar16 = ZEXT416((uint)uStack_30);
    pfVar10 = pfVar7;
    if (0 < (long)uVar9) {
      do {
        fVar15 = *pfVar10;
        if (auVar16._0_4_ <= *pfVar10) {
          fVar15 = auVar16._0_4_;
        }
        auVar16 = ZEXT416((uint)fVar15);
        uVar9 = uVar9 - 1;
        pfVar10 = pfVar10 + 1;
      } while (uVar9 != 0);
    }
    for (; uVar8 = auVar16._0_8_, lVar5 < (long)uVar4; lVar5 = lVar5 + 1) {
      fVar15 = pfVar7[lVar5];
      if (auVar16._0_4_ <= pfVar7[lVar5]) {
        fVar15 = auVar16._0_4_;
      }
      auVar16 = ZEXT416((uint)fVar15);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_18) {
    ___stack_chk_fail();
    if (param_3 == (ulong *)0x0) {
      return 0;
    }
    pauVar6 = (undefined1 (*) [16])*param_1;
    auVar16 = *pauVar6;
    if ((long)param_3 < 5) {
      lVar5 = 1;
    }
    else {
      uVar8 = (long)param_3 - 1U & 0xfffffffffffffffc;
      lVar11 = param_1[2];
      lVar5 = 1;
      pauVar14 = pauVar6;
      do {
        auVar18 = NEON_fmin(*(undefined1 (*) [16])(*pauVar14 + lVar11 * 4),
                            *(undefined1 (*) [16])(*pauVar14 + lVar11 * 8),4);
        puVar2 = *pauVar14;
        pauVar14 = pauVar14 + lVar11;
        auVar19 = NEON_fmin(*(undefined1 (*) [16])(puVar2 + lVar11 * 0xc),*pauVar14,4);
        auVar18 = NEON_fmin(auVar18,auVar19,4);
        auVar16 = NEON_fmin(auVar16,auVar18,4);
        lVar5 = lVar5 + 4;
      } while (lVar5 < (long)uVar8);
      lVar5 = uVar8 + 1;
    }
    uVar8 = auVar16._0_8_;
    lVar11 = (long)param_3 - lVar5;
    if (lVar11 != 0 && lVar5 <= (long)param_3) {
      pauVar6 = (undefined1 (*) [16])(*pauVar6 + lVar5 * param_1[2] * 4);
      do {
        auVar16 = NEON_fmin(auVar16,*pauVar6,4);
        uVar8 = auVar16._0_8_;
        pauVar6 = (undefined1 (*) [16])(*pauVar6 + param_1[2] * 4);
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    return uVar8;
  }
  return uVar8;
}



/* Entry: 109546520; end: 1095465d7;  */

undefined8 FUN_109546520(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 (*pauVar2) [16];
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 (*pauVar6) [16];
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (param_3 != 0) {
    pauVar2 = (undefined1 (*) [16])*param_1;
    auVar8 = *pauVar2;
    if (param_3 < 5) {
      lVar5 = 1;
    }
    else {
      uVar3 = param_3 - 1U & 0xfffffffffffffffc;
      lVar4 = param_1[2];
      lVar5 = 1;
      pauVar6 = pauVar2;
      do {
        auVar9 = NEON_fmin(*(undefined1 (*) [16])(*pauVar6 + lVar4 * 4),
                           *(undefined1 (*) [16])(*pauVar6 + lVar4 * 8),4);
        puVar1 = *pauVar6;
        pauVar6 = pauVar6 + lVar4;
        auVar10 = NEON_fmin(*(undefined1 (*) [16])(puVar1 + lVar4 * 0xc),*pauVar6,4);
        auVar9 = NEON_fmin(auVar9,auVar10,4);
        auVar8 = NEON_fmin(auVar8,auVar9,4);
        lVar5 = lVar5 + 4;
      } while (lVar5 < (long)uVar3);
      lVar5 = uVar3 + 1;
    }
    uVar7 = auVar8._0_8_;
    lVar4 = param_3 - lVar5;
    if (lVar4 != 0 && lVar5 <= param_3) {
      pauVar2 = (undefined1 (*) [16])(*pauVar2 + lVar5 * param_1[2] * 4);
      do {
        auVar8 = NEON_fmin(auVar8,*pauVar2,4);
        uVar7 = auVar8._0_8_;
        pauVar2 = (undefined1 (*) [16])(*pauVar2 + param_1[2] * 4);
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    return uVar7;
  }
  return 0;
}



/* Entry: 1095465d8; end: 109546857;  */

void FUN_1095465d8(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  float *pfVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lStack_30;
  undefined4 uStack_28;
  
  uVar3 = param_2[3];
  uVar5 = param_2[4];
  if (uVar5 < uVar3) {
    if (uVar5 != 0) {
      lVar2 = 0;
      uVar3 = 0;
      do {
        if (param_2[3] != 0) {
          uVar4 = 0;
          pfVar6 = (float *)(*param_2 + lVar2);
          do {
            if (*pfVar6 == 0.0) {
              lVar7 = param_2[8];
              uVar8 = uVar4 >> 6;
              uVar1 = 1L << (uVar4 & 0x3f);
              if ((*(ulong *)(lVar7 + uVar8 * 8) & uVar1) == 0) {
                uVar5 = uVar3 >> 3 & 0x1ffffffffffffff8;
                *(ulong *)(param_2[0xb] + uVar5) =
                     *(ulong *)(param_2[0xb] + uVar5) | 1L << (uVar3 & 0x3f);
                *(ulong *)(lVar7 + uVar8 * 8) = *(ulong *)(lVar7 + uVar8 * 8) | uVar1;
                uVar5 = param_2[4];
                lVar7 = param_2[5];
                *(int *)(param_2[0xe] + uVar3 * 4) = *(int *)(param_2[0xe] + uVar3 * 4) + 1;
                *(undefined4 *)(lVar7 + uVar5 * uVar4 * 4 + uVar3 * 4) = 1;
                break;
              }
            }
            pfVar6 = pfVar6 + param_2[2];
            uVar4 = uVar4 + 1;
          } while (param_2[3] != uVar4);
        }
        uVar3 = uVar3 + 1;
        lVar2 = lVar2 + 4;
      } while (uVar3 < uVar5);
    }
    if (0 < param_2[9]) {
      lStack_30 = param_2[8];
      uStack_28 = 0;
      func_0x000109266090(&lStack_30);
    }
  }
  else if (uVar3 != 0) {
    lVar2 = 0;
    uVar4 = 0;
    do {
      if (uVar5 != 0) {
        uVar1 = 0;
        do {
          if (*(float *)(*param_2 + param_2[2] * lVar2 + uVar1 * 4) == 0.0) {
            uVar9 = 1L << (uVar1 & 0x3f);
            uVar8 = *(ulong *)(param_2[0xb] + (uVar1 >> 6) * 8);
            if ((uVar8 & uVar9) == 0) {
              *(ulong *)(param_2[0xb] + (uVar1 >> 6) * 8) = uVar8 | uVar9;
              *(int *)(param_2[0xe] + uVar1 * 4) = *(int *)(param_2[0xe] + uVar1 * 4) + 1;
              uVar5 = param_2[4];
              uVar3 = param_2[3];
              *(undefined4 *)(param_2[5] + uVar5 * lVar2 + uVar1 * 4) = 1;
              break;
            }
          }
          uVar1 = uVar1 + 1;
        } while (uVar5 != uVar1);
      }
      uVar4 = uVar4 + 1;
      lVar2 = lVar2 + 4;
    } while (uVar4 < uVar3);
  }
  if ((int)param_2[0x14] != 2) {
    FUN_109545e94(param_2 + 0x11);
    *(undefined4 *)(param_2 + 0x14) = 2;
  }
  return;
}



/* Entry: 109546858; end: 109546933;  */

void FUN_109546858(undefined8 param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (param_2[3] != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      if (((*(ulong *)(param_2[8] + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) == 0) &&
         (param_2[4] != 0)) {
        uVar3 = 0;
        do {
          if (((*(ulong *)(param_2[0xb] + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) == 0) &&
             (*(float *)(*param_2 + lVar1 * param_2[2] + uVar3 * 4) == 0.0)) {
            if ((int)param_2[0x14] != 4) {
              FUN_109545e94(param_2 + 0x11);
              *(undefined4 *)(param_2 + 0x14) = 4;
            }
            param_2[0x11] = uVar2;
            param_2[0x12] = uVar3;
            return;
          }
          uVar3 = uVar3 + 1;
        } while (param_2[4] != uVar3);
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 4;
    } while (uVar2 != param_2[3]);
  }
  if ((int)param_2[0x14] != 5) {
    FUN_109545e94(param_2 + 0x11);
    *(undefined4 *)(param_2 + 0x14) = 5;
  }
  return;
}



/* Entry: 109546934; end: 109546a17;  */

void FUN_109546934(ulong *param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  uVar5 = *param_1;
  uVar8 = param_1[1];
  uVar7 = *(ulong *)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 0x28) + uVar7 * uVar5 * 4;
  if (*(int *)(lVar1 + uVar8 * 4) == 1) {
    *(int *)(*(long *)(param_2 + 0x70) + uVar8 * 4) =
         *(int *)(*(long *)(param_2 + 0x70) + uVar8 * 4) + -1;
  }
  *(undefined4 *)(lVar1 + uVar8 * 4) = 2;
  if (uVar7 != 0) {
    uVar8 = 0;
    do {
      if (*(int *)(lVar1 + uVar8 * 4) == 1) {
        uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(*(long *)(param_2 + 0x40) + uVar7) =
             *(ulong *)(*(long *)(param_2 + 0x40) + uVar7) | 1L << (uVar5 & 0x3f);
        uVar7 = uVar8 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(*(long *)(param_2 + 0x58) + uVar7) =
             *(ulong *)(*(long *)(param_2 + 0x58) + uVar7) &
             (1L << (uVar8 & 0x3f) ^ 0xffffffffffffffffU);
        if (*(int *)(param_2 + 0xa0) != 3) {
          FUN_109545e94(param_2 + 0x88);
          *(undefined4 *)(param_2 + 0xa0) = 3;
        }
        return;
      }
      uVar8 = uVar8 + 1;
    } while (uVar7 != uVar8);
  }
  plVar3 = &lStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = *param_1;
  uStack_30 = param_1[1];
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_50 = 0;
  lVar4 = 1;
  FUN_109546ac0(&lStack_50,&uStack_38,&lStack_28);
  puVar2 = (undefined8 *)(param_2 + 0x88);
  func_0x000109546b68(param_2 + 0x88);
  lVar1 = lStack_50;
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar2 != 0) {
    func_0x000104bd46a0();
  }
  __Unwind_Resume();
  if (lVar4 != 0) {
    func_0x000109546b30();
    puVar6 = *(undefined8 **)(lVar1 + 8);
    for (; puVar2 != plVar3; puVar2 = puVar2 + 2) {
      uVar9 = *puVar2;
      puVar6[1] = puVar2[1];
      *puVar6 = uVar9;
      puVar6 = puVar6 + 2;
    }
    *(undefined8 **)(lVar1 + 8) = puVar6;
  }
  return;
}



/* Entry: 109546a18; end: 109546abf;  */

void FUN_109546a18(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  plVar3 = &lStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_38 = *param_2;
  uStack_30 = *param_3;
  lStack_48 = 0;
  uStack_40 = 0;
  lStack_50 = 0;
  lVar4 = 1;
  FUN_109546ac0(&lStack_50,&uStack_38,&lStack_28);
  puVar2 = (undefined8 *)(param_1 + 0x88);
  func_0x000109546b68(param_1 + 0x88);
  lVar1 = lStack_50;
  if (lStack_50 != 0) {
    lStack_48 = lStack_50;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  if ((int)puVar2 != 0) {
    func_0x000104bd46a0();
  }
  __Unwind_Resume();
  if (lVar4 != 0) {
    func_0x000109546b30();
    puVar5 = *(undefined8 **)(lVar1 + 8);
    for (; puVar2 != plVar3; puVar2 = puVar2 + 2) {
      uVar6 = *puVar2;
      puVar5[1] = puVar2[1];
      *puVar5 = uVar6;
      puVar5 = puVar5 + 2;
    }
    *(undefined8 **)(lVar1 + 8) = puVar5;
  }
  return;
}



/* Entry: 109546ac0; end: 109546b2f;  */

void FUN_109546ac0(long param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_4 != 0) {
    FUN_109546b30(param_1,param_4);
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (; param_2 != param_3; param_2 = param_2 + 2) {
      uVar2 = *param_2;
      puVar1[1] = param_2[1];
      *puVar1 = uVar2;
      puVar1 = puVar1 + 2;
    }
    *(undefined8 **)(param_1 + 8) = puVar1;
  }
  return;
}



/* Entry: 109546b30; end: 109546e4f;  */

void FUN_109546b30(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  
  if ((ulong)param_2 >> 0x3c == 0) {
    plVar1 = param_1;
    FUN_1092b793c();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + (long)param_2 * 2);
    return;
  }
  FUN_1092b7928();
  if ((int)param_1[3] == 6) {
    if (*param_2 != 0) {
      param_2[1] = *param_2;
      __ZdlPv();
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
    }
    lVar2 = *param_3;
    param_2[1] = param_3[1];
    *param_2 = lVar2;
    param_2[2] = param_3[2];
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    return;
  }
  FUN_109545e94();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  lVar2 = *param_3;
  param_1[1] = param_3[1];
  *param_1 = lVar2;
  param_1[2] = param_3[2];
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined4 *)(param_1 + 3) = 6;
  return;
}



/* Entry: 109546e50; end: 109547147;  */

ulong FUN_109546e50(undefined8 param_1,long *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  long lVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  undefined8 uStack_70;
  undefined4 uStack_68;
  ulong *puVar11;
  
  uVar21 = (undefined4)((ulong)param_1 >> 0x20);
  fVar20 = (float)param_1;
  puVar17 = (ulong *)param_2[1];
  uVar18 = puVar17[-1];
  lVar6 = *(long *)(param_3 + 0x70);
  iVar1 = *(int *)(lVar6 + uVar18 * 4);
  plVar5 = param_2;
  do {
    if (iVar1 < 1) {
      if ((ulong *)*param_2 != puVar17) {
        lVar13 = *(long *)(param_3 + 0x20);
        lVar12 = *(long *)(param_3 + 0x28);
        puVar10 = (ulong *)*param_2;
        do {
          puVar11 = puVar10 + 2;
          uVar18 = puVar10[1];
          lVar14 = lVar12 + *puVar10 * lVar13 * 4;
          iVar2 = *(int *)(lVar6 + uVar18 * 4);
          iVar1 = iVar2 + -1;
          bVar3 = *(int *)(lVar14 + uVar18 * 4) != 1;
          if (bVar3) {
            iVar1 = iVar2 + 1;
          }
          *(int *)(lVar6 + uVar18 * 4) = iVar1;
          *(uint *)(lVar14 + uVar18 * 4) = (uint)bVar3;
          puVar10 = puVar11;
        } while (puVar11 != puVar17);
      }
      if (0 < *(long *)(param_3 + 0x48)) {
        uStack_70 = *(undefined8 *)(param_3 + 0x40);
        uStack_68 = 0;
        func_0x000109266090(&uStack_70);
      }
      if (0 < *(long *)(param_3 + 0x60)) {
        uStack_70 = *(undefined8 *)(param_3 + 0x58);
        uStack_68 = 0;
        func_0x000109266090(&uStack_70);
      }
      lVar6 = *(long *)(param_3 + 0x18);
      if (lVar6 != 0) {
        lVar12 = 0;
        lVar13 = 0;
        lVar14 = *(long *)(param_3 + 0x20);
        do {
          if (lVar14 != 0) {
            piVar15 = (int *)(*(long *)(param_3 + 0x28) + lVar12);
            lVar16 = lVar14;
            do {
              if (*piVar15 == 2) {
                *piVar15 = 0;
              }
              piVar15 = piVar15 + 1;
              lVar16 = lVar16 + -1;
            } while (lVar16 != 0);
          }
          lVar13 = lVar13 + 1;
          lVar12 = lVar12 + lVar14 * 4;
        } while (lVar13 != lVar6);
      }
      if (*(int *)(param_3 + 0xa0) != 2) {
        FUN_109545e94(param_3 + 0x88);
        *(undefined4 *)(param_3 + 0xa0) = 2;
      }
      return CONCAT44(uVar21,fVar20);
    }
    uVar7 = *(ulong *)(param_3 + 0x18);
    if (uVar7 != 0) {
      uVar19 = 0;
      puVar10 = puVar17;
      do {
        puVar17 = puVar10;
        if (*(int *)(*(long *)(param_3 + 0x28) + *(long *)(param_3 + 0x20) * uVar19 * 4 + uVar18 * 4
                    ) == 1) {
          if (puVar10 < (ulong *)param_2[2]) {
            puVar17 = puVar10 + 2;
            *puVar10 = uVar19;
            puVar10[1] = uVar18;
          }
          else {
            lVar6 = (long)puVar10 - *param_2;
            uVar7 = (lVar6 >> 4) + 1;
            if (uVar7 >> 0x3c != 0) goto LAB_109547144;
            uVar8 = param_2[2] - *param_2;
            uVar9 = (long)uVar8 >> 3;
            if (uVar9 <= uVar7) {
              uVar9 = uVar7;
            }
            if (0x7fffffffffffffef < uVar8) {
              uVar9 = 0xfffffffffffffff;
            }
            plVar4 = param_2;
            FUN_1092b793c();
            lVar13 = *param_2;
            lVar12 = param_2[1];
            puVar10 = (ulong *)((long)plVar4 + lVar6);
            *puVar10 = uVar19;
            puVar10[1] = uVar18;
            puVar17 = puVar10 + 2;
            lVar6 = (long)puVar10 - (lVar12 - lVar13);
            _memcpy(lVar6,lVar13);
            plVar5 = (long *)*param_2;
            *param_2 = lVar6;
            param_2[1] = (long)puVar17;
            param_2[2] = (long)(plVar4 + uVar9 * 2);
            if (plVar5 != (long *)0x0) {
              __ZdlPv();
            }
          }
          param_2[1] = (long)puVar17;
          uVar7 = *(ulong *)(param_3 + 0x18);
        }
        uVar19 = uVar19 + 1;
        puVar10 = puVar17;
      } while (uVar19 < uVar7);
    }
    uVar18 = *(ulong *)(param_3 + 0x20);
    if (uVar18 != 0) {
      uVar7 = 0;
      uVar19 = puVar17[-2];
      puVar10 = puVar17;
      do {
        puVar17 = puVar10;
        if (*(int *)(*(long *)(param_3 + 0x28) + uVar18 * uVar19 * 4 + uVar7 * 4) == 2) {
          if (puVar10 < (ulong *)param_2[2]) {
            puVar17 = puVar10 + 2;
            *puVar10 = uVar19;
            puVar10[1] = uVar7;
          }
          else {
            lVar6 = (long)puVar10 - *param_2;
            uVar18 = (lVar6 >> 4) + 1;
            if (uVar18 >> 0x3c != 0) {
LAB_109547144:
              FUN_1092b7928();
              FUN_109547188();
              fVar22 = *(float *)(plVar5 + 3) * *(float *)((long)plVar5 + 0x1c);
              fVar22 = (fVar22 + fVar22) - fVar20;
              fVar20 = fVar20 / fVar22;
              if (fVar22 <= 0.0) {
                fVar20 = 0.0;
              }
              return (ulong)(uint)fVar20;
            }
            uVar8 = param_2[2] - *param_2;
            uVar9 = (long)uVar8 >> 3;
            if (uVar9 <= uVar18) {
              uVar9 = uVar18;
            }
            if (0x7fffffffffffffef < uVar8) {
              uVar9 = 0xfffffffffffffff;
            }
            plVar4 = param_2;
            FUN_1092b793c();
            lVar13 = *param_2;
            lVar12 = param_2[1];
            puVar10 = (ulong *)((long)plVar4 + lVar6);
            *puVar10 = uVar19;
            puVar10[1] = uVar7;
            puVar17 = puVar10 + 2;
            lVar6 = (long)puVar10 - (lVar12 - lVar13);
            _memcpy(lVar6,lVar13);
            plVar5 = (long *)*param_2;
            *param_2 = lVar6;
            param_2[1] = (long)puVar17;
            param_2[2] = (long)(plVar4 + uVar9 * 2);
            if (plVar5 != (long *)0x0) {
              __ZdlPv();
            }
          }
          param_2[1] = (long)puVar17;
          uVar18 = *(ulong *)(param_3 + 0x20);
        }
        uVar7 = uVar7 + 1;
        puVar10 = puVar17;
      } while (uVar7 < uVar18);
    }
    uVar18 = puVar17[-1];
    lVar6 = *(long *)(param_3 + 0x70);
    iVar1 = *(int *)(lVar6 + uVar18 * 4);
  } while( true );
}



/* Entry: 109547148; end: 109547187;  */

float FUN_109547148(float param_1,long param_2)

{
  float fVar1;
  
  FUN_109547188();
  fVar1 = *(float *)(param_2 + 0x18) * *(float *)(param_2 + 0x1c);
  fVar1 = (fVar1 + fVar1) - param_1;
  param_1 = param_1 / fVar1;
  if (fVar1 <= 0.0) {
    param_1 = 0.0;
  }
  return param_1;
}



/* Entry: 109547188; end: 1095471bb;  */

float FUN_109547188(long param_1,long param_2)

{
  float fVar1;
  ulong uVar2;
  float fVar3;
  int iVar4;
  float fVar6;
  ulong uVar5;
  int iVar7;
  ulong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  fVar3 = (float)uVar2 + (float)*(undefined8 *)(param_1 + 0x18);
  fVar1 = (float)(uVar2 >> 0x20);
  fVar6 = fVar1 + (float)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
  uVar5 = CONCAT44(fVar6,fVar3);
  uVar8 = *(ulong *)(param_2 + 0x10);
  fVar10 = (float)uVar8 + (float)*(undefined8 *)(param_2 + 0x18);
  fVar9 = (float)(uVar8 >> 0x20);
  fVar11 = fVar9 + (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20);
  uVar5 = uVar5 ^ (uVar5 ^ CONCAT44(fVar11,fVar10)) &
                  CONCAT44(-(uint)(fVar11 < fVar6),-(uint)(fVar10 < fVar3));
  uVar2 = uVar2 ^ (uVar2 ^ uVar8) &
                  CONCAT44(-(uint)(fVar1 < fVar9),-(uint)((float)uVar2 < (float)uVar8));
  fVar1 = (float)uVar5 - (float)uVar2;
  fVar3 = (float)(uVar5 >> 0x20) - (float)(uVar2 >> 0x20);
  iVar4 = -(uint)(fVar1 < 0.0);
  iVar7 = -(uint)(fVar3 < 0.0);
  fVar1 = (float)CONCAT13((byte)((uint)fVar1 >> 0x18) & ~(byte)((uint)iVar4 >> 0x18),
                          CONCAT12((byte)((uint)fVar1 >> 0x10) & ~(byte)((uint)iVar4 >> 0x10),
                                   CONCAT11((byte)((uint)fVar1 >> 8) & ~(byte)((uint)iVar4 >> 8),
                                            SUB41(fVar1,0) & ~(byte)iVar4)));
  return fVar1 * (float)(CONCAT17((byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18),
                                  CONCAT16((byte)((uint)fVar3 >> 0x10) &
                                           ~(byte)((uint)iVar7 >> 0x10),
                                           CONCAT15((byte)((uint)fVar3 >> 8) &
                                                    ~(byte)((uint)iVar7 >> 8),
                                                    CONCAT14(SUB41(fVar3,0) & ~(byte)iVar7,fVar1))))
                        >> 0x20);
}



/* Entry: 1095471bc; end: 1095472b7;  */

long * FUN_1095471bc(long *param_1,ulong param_2,long *param_3)

{
  undefined1 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  plVar3 = (long *)param_1[1];
  if ((ulong)(param_1[2] - (long)plVar3 >> 4) < param_2) {
    lVar9 = (long)plVar3 - *param_1;
    uVar6 = param_2 + (lVar9 >> 4);
    if (uVar6 >> 0x3c != 0) {
      FUN_1092b7928();
      *param_1 = (long)&PTR_FUN_110af16c8;
      param_1[1] = param_2;
      plVar3 = param_1 + 2;
      *plVar3 = 0;
      param_1[3] = 0;
      param_1[4] = param_2;
      *(undefined4 *)(param_1 + 5) = 0;
      if (param_1 != param_3) {
        uVar6 = param_2;
        if ((param_2 & 1) != 0) {
          uVar6 = *(ulong *)(param_2 & 0xfffffffffffffffe);
        }
        uVar5 = param_3[1];
        uVar7 = uVar5;
        if ((uVar5 & 1) != 0) {
          uVar7 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
        }
        if (uVar6 == uVar7) {
          lVar9 = 0;
          param_1[1] = uVar5;
          param_3[1] = param_2;
          do {
            uVar1 = *(undefined1 *)((long)plVar3 + lVar9);
            *(undefined1 *)((long)plVar3 + lVar9) = *(undefined1 *)((long)param_3 + lVar9 + 0x10);
            *(undefined1 *)((long)param_3 + lVar9 + 0x10) = uVar1;
            lVar9 = lVar9 + 1;
          } while (lVar9 != 0x10);
        }
        else {
          FUN_10934fff8(param_1);
          FUN_109350260(param_1,param_3);
        }
      }
      return param_1;
    }
    uVar5 = param_1[2] - *param_1;
    uVar7 = (long)uVar5 >> 3;
    if (uVar7 <= uVar6) {
      uVar7 = uVar6;
    }
    if (0x7fffffffffffffef < uVar5) {
      uVar7 = 0xfffffffffffffff;
    }
    if (uVar7 == 0) {
      plVar3 = (long *)0x0;
    }
    else {
      plVar3 = param_1;
      FUN_1092b793c();
    }
    lVar9 = (long)plVar3 + lVar9;
    _bzero(lVar9,param_2 << 4);
    lVar8 = lVar9 - (param_1[1] - *param_1);
    _memcpy(lVar8);
    plVar4 = (long *)*param_1;
    *param_1 = lVar8;
    param_1[1] = lVar9 + param_2 * 0x10;
    param_1[2] = (long)(plVar3 + uVar7 * 2);
    plVar2 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR___ZdlPv_110352258)();
      return plVar4;
    }
  }
  else {
    plVar2 = param_1;
    if (param_2 != 0) {
      plVar2 = plVar3;
      _bzero(plVar3,param_2 << 4);
      plVar3 = plVar3 + param_2 * 2;
    }
    param_1[1] = (long)plVar3;
  }
  return plVar2;
}



/* Entry: 1095472b8; end: 10954737b;  */

undefined8 * FUN_1095472b8(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  *param_1 = &PTR_FUN_110af16c8;
  param_1[1] = param_2;
  puVar2 = param_1 + 2;
  *puVar2 = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  *(undefined4 *)(param_1 + 5) = 0;
  if (param_1 != param_3) {
    uVar4 = param_2;
    if ((param_2 & 1) != 0) {
      uVar4 = *(ulong *)(param_2 & 0xfffffffffffffffe);
    }
    uVar5 = param_3[1];
    uVar6 = uVar5;
    if ((uVar5 & 1) != 0) {
      uVar6 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    if (uVar4 == uVar6) {
      lVar3 = 0;
      param_1[1] = uVar5;
      param_3[1] = param_2;
      do {
        uVar1 = *(undefined1 *)((long)puVar2 + lVar3);
        *(undefined1 *)((long)puVar2 + lVar3) = *(undefined1 *)((long)param_3 + lVar3 + 0x10);
        *(undefined1 *)((long)param_3 + lVar3 + 0x10) = uVar1;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x10);
    }
    else {
      FUN_10934fff8(param_1);
      FUN_109350260(param_1,param_3);
    }
  }
  return param_1;
}



/* Entry: 10954737c; end: 1095473eb;  */

void FUN_10954737c(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  lVar4 = *plVar3;
  if (lVar4 != 0) {
    lVar1 = plVar3[1];
    lVar2 = lVar4;
    if (lVar1 != lVar4) {
      do {
        lVar1 = lVar1 + -0x10;
        func_0x000109547450();
      } while (lVar1 != lVar4);
      lVar2 = *(long *)*param_1;
    }
    plVar3[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 1095473ec; end: 1095474a7;  */

undefined8 * FUN_1095473ec(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = param_2[1];
  uVar6 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = (long *)param_1[1];
  param_1[1] = uVar7;
  *param_1 = uVar6;
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
  return param_1;
}



/* Entry: 1095474a8; end: 109547613;  */

void FUN_1095474a8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar2 = (undefined8 *)0x148;
  __Znwm();
  puVar2[1] = 0;
  puVar2[2] = 0;
  *puVar2 = &PTR_FUN_110afbc58;
  puVar2[3] = *param_2;
  FUN_109547650(puVar2 + 4,0,param_2 + 1);
  piVar3 = (int *)((long)param_2 + 0x34);
  iVar1 = *piVar3;
  uVar5 = param_2[6];
  puVar2[10] = param_2[7];
  puVar2[9] = uVar5;
  uVar5 = param_2[8];
  puVar2[0xc] = param_2[9];
  puVar2[0xb] = uVar5;
  uVar5 = param_2[10];
  puVar2[0xe] = param_2[0xb];
  puVar2[0xd] = uVar5;
  uVar6 = param_2[0xd];
  uVar5 = param_2[0xc];
  puVar2[0x13] = 0;
  puVar2[0x10] = uVar6;
  puVar2[0xf] = uVar5;
  puVar2[0x11] = puVar2 + 10;
  puVar2[0x12] = puVar2 + 0x13;
  puVar2[0x14] = 0;
  puVar4 = (undefined8 *)param_2[0xf];
  if (iVar1 < 3) {
    puVar2[0x13] = *puVar4;
    puVar2[0x14] = puVar4[1];
  }
  else {
    puVar2[0x11] = param_2[0xe];
    puVar2[0x12] = puVar4;
    param_2[0xe] = param_2 + 7;
    param_2[0xf] = param_2 + 0x10;
  }
  *(undefined4 *)(param_2 + 6) = 0x42ff0000;
  uVar5 = param_2[0x12];
  uVar7 = param_2[0x15];
  uVar6 = param_2[0x14];
  puVar2[0x16] = param_2[0x13];
  puVar2[0x15] = uVar5;
  *(undefined8 *)((long)param_2 + 0x3c) = 0;
  piVar3[0] = 0;
  piVar3[1] = 0;
  *(undefined8 *)((long)param_2 + 0x4c) = 0;
  *(undefined8 *)((long)param_2 + 0x44) = 0;
  *(undefined8 *)((long)param_2 + 0x5c) = 0;
  *(undefined8 *)((long)param_2 + 0x54) = 0;
  param_2[0xd] = 0;
  param_2[0xc] = 0;
  puVar2[0x18] = uVar7;
  puVar2[0x17] = uVar6;
  param_2[0x13] = 0;
  param_2[0x12] = 0;
  param_2[0x15] = 0;
  param_2[0x14] = 0;
  uVar5 = param_2[0x16];
  uVar7 = param_2[0x19];
  uVar6 = param_2[0x18];
  puVar2[0x1a] = param_2[0x17];
  puVar2[0x19] = uVar5;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  puVar2[0x1c] = uVar7;
  puVar2[0x1b] = uVar6;
  uVar5 = param_2[0x1b];
  puVar2[0x1d] = param_2[0x1a];
  puVar2[0x1e] = uVar5;
  uVar5 = param_2[0x1c];
  uVar6 = param_2[0x1d];
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  puVar2[0x1f] = uVar5;
  puVar2[0x20] = uVar6;
  uVar5 = param_2[0x1e];
  puVar2[0x22] = param_2[0x1f];
  puVar2[0x21] = uVar5;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  puVar2[0x23] = param_2[0x20];
  uVar5 = param_2[0x21];
  puVar2[0x25] = param_2[0x22];
  puVar2[0x24] = uVar5;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  puVar2[0x26] = param_2[0x23];
  uVar5 = param_2[0x24];
  puVar2[0x28] = param_2[0x25];
  puVar2[0x27] = uVar5;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x23] = 0;
  *param_1 = puVar2 + 3;
  param_1[1] = puVar2;
  return;
}



/* Entry: 109547614; end: 109547623;  */

void FUN_109547614(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afbc58;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 109547624; end: 109547643;  */

void FUN_109547624(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110afbc58;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109547644; end: 10954764f;  */

long FUN_109547644(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  
  _free(*(undefined8 *)(param_1 + 0x130));
  _free(*(undefined8 *)(param_1 + 0x118));
  _free(*(undefined8 *)(param_1 + 0x100));
  _free(*(undefined8 *)(param_1 + 0xf0));
  FUN_109544e84(param_1 + 0xa8);
  if (*(long *)(param_1 + 0x80) != 0) {
    piVar1 = (int *)(*(long *)(param_1 + 0x80) + 0x14);
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
      func_0x000109a848d4(param_1 + 0x48);
    }
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    lVar5 = 0;
    lVar6 = *(long *)(param_1 + 0x88);
    do {
      *(undefined4 *)(lVar6 + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(param_1 + 0x4c));
  }
  lVar5 = *(long *)(param_1 + 0x90);
  if (lVar5 != param_1 + 0x98 && lVar5 != 0) {
    _free(*(undefined8 *)(lVar5 + -8));
  }
  FUN_109349e70(param_1 + 0x20);
  return param_1 + 0x18;
}



/* Entry: 109547650; end: 109547727;  */

undefined8 * FUN_109547650(undefined8 *param_1,ulong param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  *param_1 = &PTR_FUN_110af0d50;
  param_1[1] = param_2;
  param_1[2] = &DAT_11383d918;
  *(undefined4 *)(param_1 + 4) = 0;
  puVar2 = param_1 + 3;
  *puVar2 = 0;
  if (param_1 != param_3) {
    uVar4 = param_2;
    if ((param_2 & 1) != 0) {
      uVar4 = *(ulong *)(param_2 & 0xfffffffffffffffe);
    }
    uVar5 = param_3[1];
    uVar6 = uVar5;
    if ((uVar5 & 1) != 0) {
      uVar6 = *(ulong *)(uVar5 & 0xfffffffffffffffe);
    }
    if (uVar4 == uVar6) {
      lVar3 = 0;
      uVar7 = param_3[2];
      param_3[2] = &DAT_11383d918;
      param_1[1] = uVar5;
      param_3[1] = param_2;
      param_1[2] = uVar7;
      do {
        uVar1 = *(undefined1 *)((long)puVar2 + lVar3);
        *(undefined1 *)((long)puVar2 + lVar3) = *(undefined1 *)((long)param_3 + lVar3 + 0x18);
        *(undefined1 *)((long)param_3 + lVar3 + 0x18) = uVar1;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 8);
    }
    else {
      func_0x000109349ec8(param_1);
      FUN_10934a194(param_1,param_3);
    }
  }
  return param_1;
}



/* Entry: 109547728; end: 10954789b; -[MLArrayFeatureProvider initWithInputs::] */

undefined1 * FUN_109547728(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar3 = &uStack_60;
  puStack_58 = PTR_PTR_112701248;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  *(long **)((long)puVar3 + 8) = param_4;
  *(undefined8 *)((long)puVar3 + 0x10) = param_3;
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  plVar8 = (long *)*param_4;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
  while (PTR__OBJC_CLASS___NSString_1126ae4d0 = puVar5, PTR__OBJC_CLASS___NSSet_1126ae870 = puVar6,
        plVar8 != param_4 + 1) {
    func_0x00010bf68f00(puVar5);
    func_0x00010c25d8e0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar4);
    _objc_release(puVar5);
    plVar1 = (long *)plVar8[1];
    plVar9 = plVar8;
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
    if ((long *)plVar8[1] == (long *)0x0) {
      do {
        plVar8 = (long *)plVar9[2];
        bVar2 = (long *)*plVar8 != plVar9;
        plVar9 = plVar8;
      } while (bVar2);
    }
    else {
      do {
        plVar8 = plVar1;
        plVar1 = (long *)*plVar8;
      } while ((long *)*plVar8 != (long *)0x0);
    }
  }
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)((long)puVar3 + 0x18);
  *(undefined **)((long)puVar3 + 0x18) = puVar6;
  _objc_release(uVar7);
  _objc_release(puVar4);
  return (undefined1 *)puVar3;
}



/* Entry: 10954789c; end: 1095478c3; -[MLArrayFeatureProvider featureNames] */

void FUN_10954789c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1095478c4; end: 109547a27; -[MLArrayFeatureProvider featureValueForName:] */

/* WARNING: Removing unreachable block (ram,0x000109547994) */

void FUN_1095478c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 auStack_58 [2];
  char cStack_41;
  undefined1 uStack_39;
  undefined8 *puStack_38;
  
  _objc_retain(param_3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  uVar1 = param_3;
  _objc_retainAutorelease(param_3);
  func_0x00010bf260e0();
  func_0x000107c31940(auStack_58,uVar1);
  puStack_38 = auStack_58;
  FUN_10954a938(uVar4,auStack_58,&UNK_10dd5b8f9,&puStack_38,&uStack_39);
  if (cStack_41 < '\0') {
    __ZdlPv(auStack_58[0]);
  }
  puVar2 = PTR__OBJC_CLASS___MLMultiArray_1126ddfa8;
  _objc_alloc(PTR__OBJC_CLASS___MLMultiArray_1126ddfa8);
  func_0x00010c008aa0();
  _objc_retain(0);
  puVar3 = PTR__OBJC_CLASS___MLFeatureValue_1126bcac0;
  func_0x00010bfa3040(PTR__OBJC_CLASS___MLFeatureValue_1126bcac0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 109547a28; end: 109547a2b;  */

void FUN_109547a28(void)

{
  return;
}



/* Entry: 109547a2c; end: 109547a37; -[MLArrayFeatureProvider .cxx_destruct] */

void FUN_109547a2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 109547a38; end: 109549057;  */

/* WARNING: Removing unreachable block (ram,0x000109548954) */
/* WARNING: Removing unreachable block (ram,0x0001095489e0) */
/* WARNING: Removing unreachable block (ram,0x0001095489e8) */
/* WARNING: Type propagation algorithm not settling */

long * FUN_109547a38(long *param_1,long param_2)

{
  undefined8 ******ppppppuVar1;
  ulong *****pppppuVar2;
  char cVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong *puVar6;
  ulong *******pppppppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 *******pppppppuVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******pppppppuVar15;
  long lVar16;
  ulong *******pppppppuVar17;
  undefined8 ******ppppppuVar18;
  long lVar19;
  undefined **ppuVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  ulong ******ppppppuVar25;
  ulong *******pppppppuVar26;
  ulong uVar27;
  long *plVar28;
  long lVar29;
  ulong *******pppppppuVar30;
  undefined8 *puVar31;
  long lVar32;
  uint uVar33;
  undefined8 *******pppppppuVar34;
  undefined8 uVar35;
  undefined8 ******ppppppuStack_488;
  undefined8 uStack_480;
  code *pcStack_478;
  undefined *puStack_470;
  ulong *******pppppppuStack_468;
  long lStack_460;
  undefined8 *******pppppppuStack_458;
  undefined8 ******ppppppuStack_450;
  undefined8 ******ppppppuStack_448;
  undefined8 ******ppppppuStack_440;
  undefined8 *******pppppppuStack_430;
  ulong *****pppppuStack_428;
  ulong uStack_420;
  undefined8 ******ppppppuStack_410;
  undefined7 uStack_408;
  undefined1 uStack_401;
  undefined7 uStack_400;
  char cStack_3f9;
  undefined8 *******pppppppuStack_3f0;
  long lStack_3e8;
  long *plStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  ulong uStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  long lStack_390;
  long *plStack_388;
  undefined8 *******pppppppuStack_380;
  ulong ******ppppppuStack_378;
  ulong ******ppppppuStack_370;
  uint auStack_360 [96];
  undefined **appuStack_1e0 [20];
  ulong *******pppppppuStack_140;
  undefined8 ******ppppppuStack_138;
  undefined8 ******ppppppuStack_130;
  ulong *******pppppppuStack_128;
  ulong *puStack_120;
  undefined7 uStack_c0;
  undefined1 uStack_b9;
  undefined7 uStack_b8;
  undefined1 uStack_b1;
  long *plStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *param_1 = 0;
  puVar5 = (undefined8 *)0x88;
  __Znwm();
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  puVar5[9] = 0;
  puVar5[8] = 0;
  puVar5[0xb] = 0;
  puVar5[10] = 0;
  puVar5[0xd] = 0;
  puVar5[0xc] = 0;
  puVar5[0xf] = 0;
  puVar5[0xe] = 0;
  puVar5[0x10] = 0;
  puVar5[1] = 0;
  *puVar5 = 0;
  puVar5[3] = 0;
  puVar5[2] = 0;
  puVar5[2] = puVar5 + 3;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[5] = 0;
  puVar5[10] = 0;
  puVar5[9] = 0;
  puVar5[8] = puVar5 + 9;
  puVar5[0xc] = 0;
  puVar5[0xb] = 0;
  puVar5[0xe] = 0;
  puVar5[0xd] = 0;
  *(undefined8 *)((long)puVar5 + 0x79) = 0;
  *(undefined8 *)((long)puVar5 + 0x71) = 0;
  FUN_10954aaf8(param_1);
  ppuVar20 = &PTR_PTR_1132db508;
  if (*(undefined ***)(param_2 + 0x60) != (undefined **)0x0) {
    ppuVar20 = *(undefined ***)(param_2 + 0x60);
  }
  if (*(int *)((long)ppuVar20 + 0x1c) == 3) {
    ppuVar20 = (undefined **)ppuVar20[2];
  }
  else {
    ppuVar20 = &PTR_PTR_1132db4e8;
  }
  *(undefined *)(*param_1 + 0x80) = *(undefined *)((long)ppuVar20 + 0x14);
  puVar5 = (undefined8 *)(*(ulong *)(param_2 + 0x48) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar5 + 0x17) < '\0') {
    func_0x000107c3192c(&ppppppuStack_410,*puVar5,puVar5[1]);
  }
  else {
    ppppppuStack_410 = (undefined8 ******)*puVar5;
    uStack_400 = (undefined7)puVar5[2];
    cStack_3f9 = (char)((ulong)puVar5[2] >> 0x38);
    uStack_408 = (undefined7)puVar5[1];
    uStack_401 = (undefined1)((ulong)puVar5[1] >> 0x38);
  }
  pppppuStack_428 = (ulong *****)0x0;
  uStack_420 = 0;
  pppppppuStack_430 = (undefined8 *******)0x0;
  puVar6 = (ulong *)(*(ulong *)(param_2 + 0x50) & 0xfffffffffffffffc);
  if (*(char *)((long)puVar6 + 0x17) < '\0') {
    if (puVar6[1] != 0) {
      puVar6 = (ulong *)*puVar6;
      goto LAB_109547b64;
    }
LAB_109547b74:
    FUN_109549100(*(ulong *)(param_2 + 0x48) & 0xfffffffffffffffc);
    __ZNSt3__19to_stringEy(&pppppppuStack_380);
  }
  else {
    if (*(char *)((long)puVar6 + 0x17) == '\0') goto LAB_109547b74;
LAB_109547b64:
    FUN_109549058(puVar6);
    __ZNSt3__19to_stringEy(&pppppppuStack_380);
  }
  if ((long)uStack_420 < 0) {
    __ZdlPv(pppppppuStack_430);
  }
  pppppuStack_428 = (ulong *****)ppppppuStack_378;
  pppppppuStack_430 = pppppppuStack_380;
  uStack_420 = (ulong)ppppppuStack_370;
  puVar5 = (undefined8 *)(*(ulong *)(param_2 + 0x58) & 0xfffffffffffffffc);
  uVar27 = puVar5[1];
  if (-1 < (char)*(byte *)((long)puVar5 + 0x17)) {
    uVar27 = (ulong)*(byte *)((long)puVar5 + 0x17);
  }
  func_0x000104c4f768(&pppppppuStack_140,uVar27 + 1,&uStack_c0);
  pppppppuVar7 = pppppppuStack_140;
  if (-1 < (long)ppppppuStack_130) {
    pppppppuVar7 = (ulong *******)&pppppppuStack_140;
  }
  if (uVar27 != 0) {
    puVar31 = (undefined8 *)*puVar5;
    if (-1 < *(char *)((long)puVar5 + 0x17)) {
      puVar31 = puVar5;
    }
    _memmove(pppppppuVar7,puVar31,uVar27);
  }
  *(undefined2 *)((long)pppppppuVar7 + uVar27) = 0x2f;
  pppppuVar2 = pppppuStack_428;
  pppppppuVar12 = pppppppuStack_430;
  if (-1 < (long)uStack_420) {
    pppppuVar2 = (ulong *****)(uStack_420 >> 0x38);
    pppppppuVar12 = &pppppppuStack_430;
  }
  pppppppuVar7 = (ulong *******)&pppppppuStack_140;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppppuVar7,pppppppuVar12,pppppuVar2);
  ppppppuStack_378 = pppppppuVar7[1];
  pppppppuStack_380 = (undefined8 *******)*pppppppuVar7;
  ppppppuStack_370 = pppppppuVar7[2];
  pppppppuVar7[1] = (ulong ******)0x0;
  pppppppuVar7[2] = (ulong ******)0x0;
  *pppppppuVar7 = (ulong ******)0x0;
  pppppppuVar12 = &pppppppuStack_380;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (pppppppuVar12,&UNK_10f573352,9);
  ppppppuStack_448 = pppppppuVar12[1];
  ppppppuStack_450 = *pppppppuVar12;
  ppppppuStack_440 = pppppppuVar12[2];
  pppppppuVar12[1] = (undefined8 ******)0x0;
  pppppppuVar12[2] = (undefined8 ******)0x0;
  *pppppppuVar12 = (undefined8 ******)0x0;
  if ((long)ppppppuStack_370 < 0) {
    __ZdlPv(pppppppuStack_380);
  }
  if ((long)ppppppuStack_130 < 0) {
    __ZdlPv(pppppppuStack_140);
  }
  pppppppuVar7 = (ulong *******)PTR__OBJC_CLASS___NSURL_1126ae598;
  ppuVar20 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfad300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  pppppppuVar30 = pppppppuVar7;
  func_0x00010c0f5800(pppppppuVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010bfacbe0();
  _objc_release(pppppppuVar30);
  _objc_release(puVar8);
  if ((int)puVar9 == 0) {
    uVar27 = *(ulong *)(param_2 + 0x50) & 0xfffffffffffffffc;
    lVar21 = (long)*(char *)(uVar27 + 0x17);
    if (lVar21 < 0) {
      lVar21 = *(long *)(uVar27 + 8);
    }
    if (lVar21 != 0) {
      puVar8 = PTR__OBJC_CLASS___NSUUID_1126b0270;
      func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bdc3580();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      puVar5 = (undefined8 *)(*(ulong *)(param_2 + 0x58) & 0xfffffffffffffffc);
      uVar27 = puVar5[1];
      if (-1 < (char)*(byte *)((long)puVar5 + 0x17)) {
        uVar27 = (ulong)*(byte *)((long)puVar5 + 0x17);
      }
      func_0x000104c4f768(&pppppppuStack_140,uVar27 + 1,&pppppppuStack_3f0);
      pppppppuVar30 = pppppppuStack_140;
      if (-1 < (long)ppppppuStack_130) {
        pppppppuVar30 = (ulong *******)&pppppppuStack_140;
      }
      if (uVar27 != 0) {
        puVar31 = (undefined8 *)*puVar5;
        if (-1 < *(char *)((long)puVar5 + 0x17)) {
          puVar31 = puVar5;
        }
        _memmove(pppppppuVar30,puVar31,uVar27);
      }
      *(undefined2 *)((long)pppppppuVar30 + uVar27) = 0x2f;
      _objc_retainAutorelease(puVar9);
      puVar8 = puVar9;
      func_0x00010bdc3520(puVar9);
      puVar10 = puVar8;
      _strlen();
      pppppppuVar30 = (ulong *******)&pppppppuStack_140;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar30,puVar8,puVar10);
      ppppppuStack_378 = pppppppuVar30[1];
      pppppppuStack_380 = (undefined8 *******)*pppppppuVar30;
      ppppppuStack_370 = pppppppuVar30[2];
      pppppppuVar30[1] = (ulong ******)0x0;
      pppppppuVar30[2] = (ulong ******)0x0;
      *pppppppuVar30 = (ulong ******)0x0;
      pppppppuVar12 = &pppppppuStack_380;
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (pppppppuVar12,&UNK_10f57335c,8);
      ppppppuVar1 = *pppppppuVar12;
      uStack_c0 = SUB87(pppppppuVar12[1],0);
      uStack_b9 = (undefined1)*(undefined8 *)((long)pppppppuVar12 + 0xf);
      uStack_b8 = (undefined7)((ulong)*(undefined8 *)((long)pppppppuVar12 + 0xf) >> 8);
      cVar3 = *(char *)((long)pppppppuVar12 + 0x17);
      pppppppuVar12[1] = (undefined8 ******)0x0;
      pppppppuVar12[2] = (undefined8 ******)0x0;
      *pppppppuVar12 = (undefined8 ******)0x0;
      if (cStack_3f9 < '\0') {
        __ZdlPv(ppppppuStack_410);
      }
      uStack_408 = uStack_c0;
      uStack_401 = uStack_b9;
      uStack_400 = uStack_b8;
      ppppppuStack_410 = ppppppuVar1;
      cStack_3f9 = cVar3;
      if ((long)ppppppuStack_370 < 0) {
        __ZdlPv(pppppppuStack_380);
      }
      if ((long)ppppppuStack_130 < 0) {
        __ZdlPv(pppppppuStack_140);
      }
      func_0x000107c2800c(&pppppppuStack_380,&ppppppuStack_410,4);
      puVar5 = (undefined8 *)(*(ulong *)(param_2 + 0x50) & 0xfffffffffffffffc);
      lVar16 = (long)*(char *)((long)puVar5 + 0x17);
      if (lVar16 < 0) {
        lVar16 = puVar5[1];
        puVar5 = (undefined8 *)*puVar5;
      }
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEE5writeEPKcl(&pppppppuStack_380,puVar5,lVar16);
      ppppppuVar25 = (ulong ******)&ppppppuStack_378;
      func_0x000107c27ffc();
      if (ppppppuVar25 == (ulong ******)0x0) {
        __ZNSt3__18ios_base5clearEj
                  ((long)&pppppppuStack_380 + (long)pppppppuStack_380[-3],
                   *(uint *)((long)auStack_360 + (long)pppppppuStack_380[-3]) | 4);
      }
      pppppppuStack_380 = (undefined8 *******)&PTR_DAT_11087cb40;
      appuStack_1e0[0] = &PTR_DAT_11087cb68;
      func_0x000107c28018(&ppppppuStack_378);
      __ZNSt3__113basic_ostreamIcNS_11char_traitsIcEEED2Ev(&pppppppuStack_380,&PTR_PTR_11087cb80);
      __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev(appuStack_1e0);
      _objc_release(puVar9);
    }
    pppppppuVar30 = (ulong *******)PTR__OBJC_CLASS___NSURL_1126ae598;
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfad300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    pppppppuStack_458 = (undefined8 *******)0x0;
    pppppppuVar17 = (ulong *******)PTR__OBJC_CLASS___MLModel_1126ddfb0;
    func_0x00010bf436a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar20 = (undefined **)pppppppuStack_458;
    _objc_retain(pppppppuStack_458);
    if ((pppppppuVar17 != (ulong *******)0x0) &&
       ((undefined8 *******)ppuVar20 == (undefined8 *******)0x0)) {
      pppppppuVar26 = pppppppuVar17;
      if (pppppppuVar7 != (ulong *******)0x0) {
        puVar8 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
        func_0x00010bf69bc0();
        _objc_retainAutoreleasedReturnValue();
        lStack_460 = 0;
        puVar9 = puVar8;
        func_0x00010c130ee0();
        lVar16 = lStack_460;
        _objc_retain(lStack_460);
        _objc_release(puVar8);
        uVar33 = 0;
        if (lVar16 == 0) {
          uVar33 = (uint)puVar9;
        }
        pppppppuVar26 = pppppppuVar7;
        if ((uVar33 & 1) == 0) {
          func_0x00010c0f5800();
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          pppppppuVar30 = pppppppuVar7;
          func_0x00010bdc3520();
          lVar21 = lVar16;
          pppppppuStack_140 = pppppppuVar30;
          func_0x00010c09e4e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          lVar29 = lVar21;
          func_0x00010bdc3520();
          uStack_c0 = (undefined7)lVar29;
          uStack_b9 = (undefined1)((ulong)lVar29 >> 0x38);
          FUN_109521f04(&pppppppuStack_380,&UNK_10f573424,&pppppppuStack_140,&uStack_c0);
          FUN_109388c6c(1,&UNK_10f573365,&UNK_10f5733de,0xbd,&pppppppuStack_380);
          if ((long)ppppppuStack_370 < 0) {
            __ZdlPv(pppppppuStack_380);
          }
          _objc_release(lVar21);
          _objc_release(pppppppuVar7);
          func_0x00010c09e4e0(lVar16);
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          func_0x00010bdc3520(lVar16);
          func_0x000105688514();
          goto LAB_109548bf0;
        }
      }
      ppuVar20 = (undefined **)(ulong)(lVar21 == 0);
      puVar6 = (ulong *)*param_1;
      _objc_retain(pppppppuVar26);
      uVar27 = *puVar6;
      *puVar6 = (ulong)pppppppuVar26;
      _objc_release(uVar27);
      if (lVar21 != 0) {
        uVar11 = 0x11;
        _dispatch_get_global_queue(0x11,0);
        _objc_retainAutoreleasedReturnValue();
        ppppppuStack_488 = (undefined8 ******)PTR___NSConcreteStackBlock_11034bd00;
        uStack_480 = 0xc2000000;
        pcStack_478 = FUN_1095492d0;
        puStack_470 = &UNK_11087bb00;
        ppuVar20 = (undefined **)&ppppppuStack_488;
        _objc_retain(pppppppuVar30);
        pppppppuStack_468 = pppppppuVar30;
        func_0x000107c27d8c(uVar11,&ppppppuStack_488);
        _objc_release(uVar11);
        _objc_release(pppppppuStack_468);
      }
      _objc_release(pppppppuVar17);
      goto LAB_109548100;
    }
  }
  else {
    puVar6 = (ulong *)*param_1;
    _objc_retain(pppppppuVar7);
    pppppppuVar30 = (ulong *******)*puVar6;
    *puVar6 = (ulong)pppppppuVar7;
LAB_109548100:
    _objc_release(pppppppuVar30);
    puVar8 = PTR__OBJC_CLASS___MLModelConfiguration_1126ddfb8;
    _objc_alloc(PTR__OBJC_CLASS___MLModelConfiguration_1126ddfb8);
    func_0x00010c1806c0(puVar8);
    puVar9 = PTR__OBJC_CLASS___MLModel_1126ddfb0;
    func_0x00010c0d0120();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    uVar11 = *(undefined8 *)(*param_1 + 8);
    *(undefined **)(*param_1 + 8) = puVar9;
    _objc_release(uVar11);
    _objc_release(puVar8);
    if ((*(byte *)(*param_1 + 0x80) & 1) == 0) {
      pppppppuVar12 = *(undefined8 ********)(*param_1 + 8);
      func_0x00010c0cfe80();
      _objc_retainAutoreleasedReturnValue();
      pppppppuVar13 = pppppppuVar12;
      func_0x00010c065940();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(pppppppuVar12);
      pppppppuVar12 = pppppppuVar13;
      func_0x00010bf529e0();
      lVar21 = *param_1;
      plVar28 = (long *)(lVar21 + 0x28);
      if ((undefined8 *******)((*(long *)(lVar21 + 0x38) - *plVar28 >> 3) * -0x3333333333333333) <
          pppppppuVar12) {
        if ((undefined8 *******)0x666666666666666 < pppppppuVar12) {
          FUN_10954a548();
          goto LAB_109548bf0;
        }
        FUN_10954a55c(&pppppppuStack_380,pppppppuVar12,
                      (*(long *)(lVar21 + 0x30) - *plVar28 >> 3) * -0x3333333333333333,plVar28);
        pppppppuVar12 = &pppppppuStack_380;
        FUN_10954a5d4(plVar28);
        FUN_10954a6ac(&pppppppuStack_380);
      }
      if (*(int *)(param_2 + 0x20) == 0) {
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_b8 = 0;
        uStack_b1 = 0;
        uStack_c0 = 0;
        uStack_b9 = 0;
        uStack_a8 = 0;
        plStack_b0 = (long *)0x0;
        _objc_retain(pppppppuVar13);
        pppppppuVar14 = pppppppuVar13;
        func_0x00010bf52a60();
        if (pppppppuVar14 != (undefined8 *******)0x0) {
          lVar21 = *plStack_b0;
          do {
            pppppppuVar34 = (undefined8 *******)0x0;
            do {
              if (*plStack_b0 != lVar21) {
                _objc_enumerationMutation(pppppppuVar13);
              }
              pppppppuVar12 =
                   *(undefined8 ********)(CONCAT17(uStack_b1,uStack_b8) + (long)pppppppuVar34 * 8);
              pppppppuVar15 = pppppppuVar13;
              func_0x00010c0e00e0(pppppppuVar13);
              _objc_retainAutoreleasedReturnValue();
              FUN_109549ca4(param_1,pppppppuVar12,pppppppuVar15);
              _objc_release(pppppppuVar15);
              pppppppuVar34 = (undefined8 *******)((long)pppppppuVar34 + 1);
            } while (pppppppuVar14 != pppppppuVar34);
            pppppppuVar14 = pppppppuVar13;
            func_0x00010bf52a60();
          } while (pppppppuVar14 != (undefined8 *******)0x0);
        }
        ppuVar20 = (undefined **)0x0;
        _objc_release(pppppppuVar13);
      }
      else {
        uVar27 = *(ulong *)(param_2 + 0x18);
        puVar6 = (ulong *)(param_2 + 0x18);
        if ((uVar27 & 1) != 0) {
          puVar6 = (ulong *)(uVar27 + 7);
        }
        lVar21 = (long)*(int *)(param_2 + 0x20) << 3;
        do {
          uVar27 = *puVar6;
          ppuVar20 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80();
          _objc_retainAutoreleasedReturnValue();
          pppppppuVar14 = pppppppuVar13;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (pppppppuVar14 == (undefined8 *******)0x0) {
            func_0x000107c31940(&pppppppuStack_140,&UNK_10f5734c1);
            if (*(int *)(uVar27 + 0x1c) == 1) {
              puVar5 = (undefined8 *)(*(ulong *)(uVar27 + 0x10) & 0xfffffffffffffffc);
            }
            else {
              puVar5 = (undefined8 *)&DAT_11383d918;
            }
            uVar27 = puVar5[1];
            puVar31 = (undefined8 *)*puVar5;
            if (-1 < (char)*(byte *)((long)puVar5 + 0x17)) {
              uVar27 = (ulong)*(byte *)((long)puVar5 + 0x17);
              puVar31 = puVar5;
            }
            pppppppuVar7 = (ulong *******)&pppppppuStack_140;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (pppppppuVar7,puVar31,uVar27);
            ppppppuStack_378 = pppppppuVar7[1];
            pppppppuStack_380 = (undefined8 *******)*pppppppuVar7;
            ppppppuStack_370 = pppppppuVar7[2];
            pppppppuVar7[1] = (ulong ******)0x0;
            pppppppuVar7[2] = (ulong ******)0x0;
            *pppppppuVar7 = (ulong ******)0x0;
            func_0x000105687ee0(&pppppppuStack_380);
            goto LAB_109548bf0;
          }
          pppppppuVar12 = (undefined8 *******)ppuVar20;
          FUN_109549ca4(param_1,ppuVar20,pppppppuVar14);
          _objc_release(pppppppuVar14);
          _objc_release(ppuVar20);
          puVar6 = puVar6 + 1;
          lVar21 = lVar21 + -8;
        } while (lVar21 != 0);
      }
      lVar16 = *(long *)(*param_1 + 8);
      func_0x00010c0cfe80();
      _objc_retainAutoreleasedReturnValue();
      lVar21 = lVar16;
      func_0x00010c0eeca0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar16);
      lVar16 = *param_1;
      uVar33 = *(uint *)(param_2 + 0x38);
      puVar6 = (ulong *)(lVar16 + 0x58);
      pppppppuVar30 = (ulong *******)*puVar6;
      pppppppuVar17 = (ulong *******)(long)(int)uVar33;
      if ((ulong *******)(*(long *)(lVar16 + 0x68) - (long)pppppppuVar30 >> 3) < pppppppuVar17) {
        if ((int)uVar33 < 0) {
          FUN_10954a7f4();
          goto LAB_109548bf0;
        }
        lVar16 = *(long *)(lVar16 + 0x60);
        puStack_120 = puVar6;
        FUN_10954a8b4();
        ppppppuStack_138 = (undefined8 ******)((long)pppppppuVar17 + (lVar16 - (long)pppppppuVar30))
        ;
        pppppppuStack_128 = pppppppuVar17 + (long)pppppppuVar12;
        pppppppuStack_140 = pppppppuVar17;
        ppppppuStack_130 = ppppppuStack_138;
        FUN_10954a808(puVar6,&pppppppuStack_140);
        func_0x00010954a8e8(&pppppppuStack_140);
        uVar33 = *(uint *)(param_2 + 0x38);
      }
      if (uVar33 == 0) {
        uStack_3c8 = 0;
        uStack_3d0 = 0;
        uStack_3b8 = 0;
        uStack_3c0 = 0;
        lStack_3e8 = 0;
        pppppppuStack_3f0 = (undefined8 *******)0x0;
        uStack_3d8 = 0;
        plStack_3e0 = (long *)0x0;
        _objc_retain(lVar21);
        lVar16 = lVar21;
        func_0x00010bf52a60();
        if (lVar16 != 0) {
          lVar29 = *plStack_3e0;
          pppppppuVar30 = (ulong *******)0x7ffffffffffffff8;
          ppuVar20 = (undefined **)0x1fffffffffffffff;
          do {
            lVar22 = 0;
            do {
              if (*plStack_3e0 != lVar29) {
                _objc_enumerationMutation(lVar21);
              }
              uVar11 = *(undefined8 *)(lStack_3e8 + lVar22 * 8);
              lVar19 = *param_1;
              _objc_retainAutorelease(uVar11);
              func_0x00010bdc3520();
              func_0x000107c31940(&uStack_3a8,uVar11);
              puVar6 = &uStack_3a8;
              FUN_10954b184(lVar19 + 0x40,puVar6,&uStack_3a8,
                            *(long *)(*param_1 + 0x60) - *(long *)(*param_1 + 0x58) >> 3);
              if ((long)puStack_398 < 0) {
                __ZdlPv(uStack_3a8);
              }
              lVar19 = *param_1;
              puVar5 = *(undefined8 **)(lVar19 + 0x60);
              if (puVar5 < *(undefined8 **)(lVar19 + 0x68)) {
                puVar31 = puVar5 + 1;
                *puVar5 = 0;
                *(undefined8 **)(lVar19 + 0x60) = puVar31;
              }
              else {
                plVar28 = (long *)(lVar19 + 0x58);
                lVar32 = (long)puVar5 - *plVar28;
                uVar27 = (lVar32 >> 3) + 1;
                if (uVar27 >> 0x3d != 0) {
                  FUN_10954a7f4();
                  goto LAB_109548bf0;
                }
                uVar24 = (long)*(undefined8 **)(lVar19 + 0x68) - *plVar28;
                uVar23 = (long)uVar24 >> 2;
                if (uVar23 <= uVar27) {
                  uVar23 = uVar27;
                }
                if (0x7ffffffffffffff7 < uVar24) {
                  uVar23 = 0x1fffffffffffffff;
                }
                plStack_388 = plVar28;
                if (uVar23 == 0) {
                  puVar6 = (ulong *)0x0;
                }
                else {
                  FUN_10954a8b4();
                }
                puStack_3a0 = (undefined8 *)(uVar23 + lVar32);
                lStack_390 = uVar23 + (long)puVar6 * 8;
                puStack_398 = puStack_3a0 + 1;
                *puStack_3a0 = 0;
                uStack_3a8 = uVar23;
                FUN_10954a808(plVar28,&uStack_3a8);
                puVar31 = *(undefined8 **)(lVar19 + 0x60);
                func_0x00010954a8e8(&uStack_3a8);
              }
              *(undefined8 **)(lVar19 + 0x60) = puVar31;
              lVar22 = lVar22 + 1;
            } while (lVar16 != lVar22);
            lVar16 = lVar21;
            func_0x00010bf52a60();
          } while (lVar16 != 0);
        }
        _objc_release(lVar21);
      }
      else {
        ppppppuVar25 = *(ulong *******)(param_2 + 0x30U);
        pppppppuVar30 = (ulong *******)(param_2 + 0x30U);
        if (((ulong)ppppppuVar25 & 1) != 0) {
          pppppppuVar30 = (ulong *******)((long)ppppppuVar25 + 7);
        }
        uVar27 = -(ulong)(uVar33 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar33 << 3;
        do {
          puVar5 = (undefined8 *)&DAT_11383d918;
          ppppppuVar25 = *pppppppuVar30;
          puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c25da80();
          _objc_retainAutoreleasedReturnValue();
          lVar16 = lVar21;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (lVar16 == 0) {
            func_0x000107c31940(&pppppppuStack_3f0,&UNK_10f5734ec);
            if (*(int *)((long)ppppppuVar25 + 0x1c) == 1) {
              puVar5 = (undefined8 *)((ulong)ppppppuVar25[2] & 0xfffffffffffffffc);
            }
            else {
              puVar5 = (undefined8 *)&DAT_11383d918;
            }
            uVar27 = puVar5[1];
            puVar31 = (undefined8 *)*puVar5;
            if (-1 < (char)*(byte *)((long)puVar5 + 0x17)) {
              uVar27 = (ulong)*(byte *)((long)puVar5 + 0x17);
              puVar31 = puVar5;
            }
            pppppppuVar12 = &pppppppuStack_3f0;
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                      (pppppppuVar12,puVar31,uVar27);
            ppppppuStack_138 = pppppppuVar12[1];
            pppppppuStack_140 = (ulong *******)*pppppppuVar12;
            ppppppuStack_130 = pppppppuVar12[2];
            pppppppuVar12[1] = (undefined8 ******)0x0;
            pppppppuVar12[2] = (undefined8 ******)0x0;
            *pppppppuVar12 = (undefined8 ******)0x0;
            func_0x000105687ee0(&pppppppuStack_140);
            goto LAB_109548bf0;
          }
          if (*(int *)((long)ppppppuVar25 + 0x1c) == 1) {
            puVar5 = (undefined8 *)((ulong)ppppppuVar25[2] & 0xfffffffffffffffc);
          }
          lVar22 = *param_1;
          ppppppuVar1 = (undefined8 ******)(lVar22 + 0x40);
          lVar29 = *(long *)(lVar22 + 0x58);
          lVar22 = *(long *)(lVar22 + 0x60);
          pppppppuVar12 = &pppppppuStack_3f0;
          ppppppuVar18 = ppppppuVar1;
          func_0x00010954a9d0(ppppppuVar1,pppppppuVar12,puVar5);
          if (*ppppppuVar18 == (undefined8 *****)0x0) {
            lVar19 = 0x40;
            __Znwm();
            ppppppuStack_130 = (undefined8 ******)0x0;
            ppppppuStack_138 = ppppppuVar1;
            if (*(char *)((long)puVar5 + 0x17) < '\0') {
              func_0x000107c3192c(lVar19 + 0x20,*puVar5,puVar5[1]);
            }
            else {
              uVar35 = puVar5[1];
              uVar11 = *puVar5;
              *(undefined8 *)(lVar19 + 0x30) = puVar5[2];
              *(undefined8 *)(lVar19 + 0x28) = uVar35;
              *(undefined8 *)(lVar19 + 0x20) = uVar11;
            }
            *(int *)(lVar19 + 0x38) = (int)((ulong)(lVar22 - lVar29) >> 3);
            pppppppuVar12 = pppppppuStack_3f0;
            FUN_10954aa54(ppppppuVar1,pppppppuStack_3f0,ppppppuVar18,lVar19);
          }
          lVar29 = *param_1;
          puVar5 = *(undefined8 **)(lVar29 + 0x60);
          if (puVar5 < *(undefined8 **)(lVar29 + 0x68)) {
            puVar31 = puVar5 + 1;
            *puVar5 = 0;
            *(undefined8 **)(lVar29 + 0x60) = puVar31;
          }
          else {
            puVar6 = (ulong *)(lVar29 + 0x58);
            lVar22 = (long)puVar5 - *puVar6;
            pppppppuVar17 = (ulong *******)((lVar22 >> 3) + 1);
            if ((ulong)pppppppuVar17 >> 0x3d != 0) {
              FUN_10954a7f4();
              goto LAB_109548bf0;
            }
            uVar23 = (long)*(undefined8 **)(lVar29 + 0x68) - *puVar6;
            pppppppuVar26 = (ulong *******)((long)uVar23 >> 2);
            if (pppppppuVar26 <= pppppppuVar17) {
              pppppppuVar26 = pppppppuVar17;
            }
            if (0x7ffffffffffffff7 < uVar23) {
              pppppppuVar26 = (ulong *******)0x1fffffffffffffff;
            }
            puStack_120 = puVar6;
            if (pppppppuVar26 == (ulong *******)0x0) {
              pppppppuVar12 = (undefined8 *******)0x0;
            }
            else {
              FUN_10954a8b4();
            }
            ppppppuStack_138 = (undefined8 ******)((long)pppppppuVar26 + lVar22);
            pppppppuStack_128 = pppppppuVar26 + (long)pppppppuVar12;
            ppppppuStack_130 = ppppppuStack_138 + 1;
            *ppppppuStack_138 = (undefined8 *****)0x0;
            pppppppuStack_140 = pppppppuVar26;
            FUN_10954a808(puVar6,&pppppppuStack_140);
            puVar31 = *(undefined8 **)(lVar29 + 0x60);
            func_0x00010954a8e8(&pppppppuStack_140);
          }
          *(undefined8 **)(lVar29 + 0x60) = puVar31;
          _objc_release(lVar16);
          _objc_release(puVar8);
          pppppppuVar30 = pppppppuVar30 + 1;
          uVar27 = uVar27 - 8;
        } while (uVar27 != 0);
        ppuVar20 = (undefined **)0x0;
      }
      _objc_release(lVar21);
      _objc_release(pppppppuVar13);
    }
    _objc_release(pppppppuVar7);
    if ((long)ppppppuStack_440 < 0) {
      __ZdlPv(ppppppuStack_450);
    }
    if ((long)uStack_420 < 0) {
      __ZdlPv(pppppppuStack_430);
    }
    if (cStack_3f9 < '\0') {
      __ZdlPv(ppppppuStack_410);
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
      return param_1;
    }
    ___stack_chk_fail();
  }
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  pppppppuVar7 = pppppppuVar30;
  func_0x00010bdc3520();
  pppppppuVar12 = (undefined8 *******)ppuVar20;
  pppppppuStack_140 = pppppppuVar7;
  func_0x00010c09e4e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  pppppppuVar13 = pppppppuVar12;
  func_0x00010bdc3520();
  uStack_c0 = SUB87(pppppppuVar13,0);
  uStack_b9 = (undefined1)((ulong)pppppppuVar13 >> 0x38);
  FUN_109521f04(&pppppppuStack_380,&UNK_10f5733ec,&pppppppuStack_140,&uStack_c0);
  FUN_109388c6c(1,&UNK_10f573365,&UNK_10f5733de,0xad,&pppppppuStack_380);
  if ((long)ppppppuStack_370 < 0) {
    __ZdlPv(pppppppuStack_380);
  }
  _objc_release(pppppppuVar12);
  _objc_release(pppppppuVar30);
  func_0x00010c09e4e0(ppuVar20);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc3520(ppuVar20);
  func_0x000105688514();
LAB_109548bf0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x109548bf4);
  (*pcVar4)();
}



/* Entry: 109549058; end: 1095490ff;  */

ulong FUN_109549058(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lStack_28;
  
  if (param_2 < 8) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    uVar1 = param_2 >> 3;
    plVar2 = param_1;
    do {
      uVar3 = uVar3 * 0x40 + 0x9e3779b9 + (uVar3 >> 2) + *plVar2 ^ uVar3;
      uVar1 = uVar1 - 1;
      plVar2 = plVar2 + 1;
    } while (uVar1 != 0);
  }
  if ((param_2 & 7) != 0) {
    lStack_28 = 0;
    _memcpy(&lStack_28,(long)param_1 + (param_2 & 0xfffffffffffffff8),param_2 & 7);
    uVar3 = (uVar3 >> 2) + uVar3 * 0x40 + lStack_28 + 0x9e3779b9 ^ uVar3;
    uVar3 = lStack_28 + 0x9e3779b9 + uVar3 * 0x40 + (uVar3 >> 2) ^ uVar3;
  }
  return uVar3;
}



/* Entry: 109549100; end: 1095492cf;  */

undefined * FUN_109549100(long *param_1)

{
  code *pcVar1;
  undefined ***pppuVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuStack_688;
  long lStack_680;
  undefined1 auStack_678 [120];
  long lStack_600;
  undefined **ppuStack_4e0;
  long alStack_448 [2];
  char cStack_431;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar3 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar3 = param_1;
  }
  func_0x000107c31940(alStack_448,plVar3);
  func_0x000109d14e6c(&ppuStack_688,alStack_448,0xc);
  if (cStack_431 < '\0') {
    __ZdlPv(alStack_448[0]);
  }
  if (lStack_600 == 0) {
    FUN_10954ac34(&UNK_10f57355b,&UNK_10f573561,param_1);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109549294);
    (*pcVar1)();
  }
  puVar6 = (undefined *)0x0;
  while( true ) {
    pppuVar2 = &ppuStack_688;
    __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEE4readEPcl(pppuVar2,alStack_448,0x400);
    if ((*(byte *)((long)pppuVar2 + (long)((*pppuVar2)[-3] + 0x20)) & 5) != 0) break;
    lVar5 = 0;
    uVar4 = 0;
    do {
      uVar4 = uVar4 * 0x40 + 0x9e3779b9 + (uVar4 >> 2) + *(long *)((long)alStack_448 + lVar5) ^
              uVar4;
      lVar5 = lVar5 + 8;
    } while (lVar5 != 0x400);
    puVar6 = (undefined *)
             ((long)puVar6 * 0x40 + 0x9e3779b9 + ((ulong)puVar6 >> 2) + uVar4 ^ (ulong)puVar6);
  }
  if (lStack_680 != 0) {
    plVar3 = alStack_448;
    FUN_109549058(plVar3);
    puVar6 = (undefined *)
             ((long)puVar6 * 0x40 + 0x9e3779b9 + ((ulong)puVar6 >> 2) + (long)plVar3 ^ (ulong)puVar6
             );
  }
  ppuStack_688 = &PTR_DAT_11087cf48;
  ppuStack_4e0 = &PTR_DAT_11087cf70;
  func_0x000107c28018(auStack_678);
  __ZNSt3__113basic_istreamIcNS_11char_traitsIcEEED2Ev(&ppuStack_688,&PTR_PTR_11087cf88);
  __ZNSt3__19basic_iosIcNS_11char_traitsIcEEED2Ev();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar6;
  }
  ___stack_chk_fail();
  if (cStack_431 < '\0') {
    __ZdlPv(alStack_448[0]);
  }
  __Unwind_Resume();
  puVar6 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return puVar6;
}



/* Entry: 1095492d0; end: 109549327;  */

void FUN_1095492d0(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cc60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 109549328; end: 10954940b;  */

void FUN_109549328(undefined8 *param_1,long *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  puVar4 = (undefined8 *)(*(long *)(*param_2 + 0x28) + (long)param_3 * 0x28);
  uVar1 = puVar4[3];
  func_0x00010bf529e0(uVar1);
  FUN_10925b8c4(&lStack_48,uVar1);
  if (lStack_40 != lStack_48) {
    uVar3 = 0;
    do {
      uVar2 = puVar4[3];
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar2;
      func_0x00010c067ec0();
      *(int *)(lStack_48 + uVar3 * 4) = (int)uVar1;
      _objc_release(uVar2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulong)(lStack_40 - lStack_48 >> 2));
  }
  *param_1 = *puVar4;
  param_1[1] = lStack_48;
  param_1[2] = lStack_40;
  param_1[3] = uStack_38;
  *(undefined4 *)(param_1 + 4) = 4;
  return;
}



/* Entry: 10954940c; end: 1095494e3;  */

void FUN_10954940c(long *param_1,ulong param_2)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  ulong *extraout_x8;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar11 = *param_1;
  if ((ulong)((param_1[2] - lVar11 >> 3) * -0x3333333333333333) < param_2) {
    if (0x666666666666666 < param_2) {
      FUN_10954a160();
      iVar9 = (int)param_2;
      func_0x00010954a2f4(&plStack_58);
      __Unwind_Resume();
      uVar13 = *(ulong *)(*(long *)(*param_1 + 0x58) + (long)iVar9 * 8);
      _objc_retain(uVar13);
      uVar3 = uVar13;
      func_0x00010c0d1be0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar3 == 0) {
        func_0x000105688514(&UNK_10f57351f);
LAB_109549660:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x109549664);
        (*pcVar1)();
      }
      uVar4 = uVar3;
      func_0x00010c22a600();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = uVar4;
      func_0x00010bf529e0();
      FUN_10925b8c4(&uStack_c0,uVar14);
      for (uVar14 = 0; uVar5 = uVar4, func_0x00010bf529e0(), uVar14 < uVar5; uVar14 = uVar14 + 1) {
        uVar5 = uVar4;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c067ec0();
        *(int *)(uStack_c0 + uVar14 * 4) = (int)uVar6;
        _objc_release(uVar5);
      }
      uVar7 = uVar3;
      _objc_retainAutorelease();
      func_0x00010bf64040();
      uVar6 = uStack_b0;
      uVar5 = uStack_b8;
      uVar14 = uStack_c0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_c0 = 0;
      uVar8 = uVar3;
      func_0x00010bf64880();
      if (uVar8 == 0x10020) {
        uVar10 = 0;
      }
      else {
        if (uVar8 != 0x20020) {
          func_0x000105688514(&UNK_10f573129);
          goto LAB_109549660;
        }
        uVar10 = 2;
      }
      *extraout_x8 = uVar7;
      extraout_x8[2] = uVar5;
      extraout_x8[1] = uVar14;
      extraout_x8[3] = uVar6;
      *(undefined4 *)(extraout_x8 + 4) = uVar10;
      if (uStack_c0 != 0) {
        uStack_b8 = uStack_c0;
        __ZdlPv();
      }
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar13);
      return;
    }
    lVar12 = param_1[1];
    plVar2 = param_1;
    plStack_38 = param_1;
    FUN_10954a174();
    lVar11 = (long)plVar2 + (lVar12 - lVar11);
    lVar12 = lVar11 + (*param_1 - param_1[1]);
    plStack_58 = plVar2;
    plStack_50 = (long *)lVar11;
    plStack_48 = (long *)lVar11;
    plStack_40 = plVar2 + param_2 * 5;
    func_0x00010954a1b8(param_1,*param_1,param_1[1],lVar12);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar12;
    param_1[1] = lVar11;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar2 + param_2 * 5);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    func_0x00010954a2f4(&plStack_58);
  }
  return;
}



/* Entry: 1095494e4; end: 1095496df;  */

void FUN_1095494e4(ulong *param_1,long *param_2,int param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  
  uVar9 = *(ulong *)(*(long *)(*param_2 + 0x58) + (long)param_3 * 8);
  _objc_retain(uVar9);
  uVar2 = uVar9;
  func_0x00010c0d1be0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 == 0) {
    func_0x000105688514(&UNK_10f57351f);
LAB_109549660:
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x109549664);
    (*pcVar1)();
  }
  uVar3 = uVar2;
  func_0x00010c22a600();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010bf529e0();
  FUN_10925b8c4(&uStack_60,uVar10);
  for (uVar10 = 0; uVar4 = uVar3, func_0x00010bf529e0(), uVar10 < uVar4; uVar10 = uVar10 + 1) {
    uVar4 = uVar3;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c067ec0();
    *(int *)(uStack_60 + uVar10 * 4) = (int)uVar5;
    _objc_release(uVar4);
  }
  uVar6 = uVar2;
  _objc_retainAutorelease();
  func_0x00010bf64040();
  uVar5 = uStack_50;
  uVar4 = uStack_58;
  uVar10 = uStack_60;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  uVar7 = uVar2;
  func_0x00010bf64880();
  if (uVar7 == 0x10020) {
    uVar8 = 0;
  }
  else {
    if (uVar7 != 0x20020) {
      func_0x000105688514(&UNK_10f573129);
      goto LAB_109549660;
    }
    uVar8 = 2;
  }
  *param_1 = uVar6;
  param_1[2] = uVar4;
  param_1[1] = uVar10;
  param_1[3] = uVar5;
  *(undefined4 *)(param_1 + 4) = uVar8;
  if (uStack_60 != 0) {
    uStack_58 = uStack_60;
    __ZdlPv();
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar9);
  return;
}



/* Entry: 1095496e0; end: 109549803;  */

void FUN_1095496e0(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  uVar3 = *(long *)(*param_2 + 0x60) - *(long *)(*param_2 + 0x58);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  FUN_10954940c(param_1,(long)uVar3 >> 3);
  iVar4 = (int)(uVar3 >> 3);
  if (0 < iVar4) {
    iVar2 = 0;
    puVar5 = (undefined8 *)((ulong)&uStack_70 | 8);
    do {
      FUN_1095494e4(&uStack_70,param_2,iVar2);
      puVar1 = (undefined8 *)param_1[1];
      if (puVar1 < (undefined8 *)param_1[2]) {
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[1] = lStack_68;
        *puVar1 = uStack_70;
        puVar1[3] = uStack_58;
        puVar1[2] = lStack_60;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        *(undefined4 *)(puVar1 + 4) = uStack_50;
        param_1[1] = puVar1 + 5;
      }
      else {
        puVar1 = param_1;
        FUN_10954a380(param_1,&uStack_70);
        param_1[1] = puVar1;
        if (lStack_68 != 0) {
          lStack_60 = lStack_68;
          __ZdlPv();
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar4 != iVar2);
  }
  return;
}



/* Entry: 109549804; end: 1095498ef;  */

void FUN_109549804(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auStack_58 [8];
  long lStack_50;
  long lStack_48;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_1 + 1;
  lVar3 = *param_2;
  plVar4 = *(long **)(lVar3 + 0x10);
  while (plVar4 != (long *)(lVar3 + 0x18)) {
    FUN_109549328(auStack_58,param_2,(int)plVar4[7]);
    FUN_10954aef4(param_1,plVar4 + 4,plVar4 + 4,auStack_58);
    if (lStack_50 != 0) {
      lStack_48 = lStack_50;
      __ZdlPv();
    }
    plVar1 = (long *)plVar4[1];
    plVar5 = plVar4;
    if ((long *)plVar4[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar5[2];
        bVar2 = (long *)*plVar4 != plVar5;
        plVar5 = plVar4;
      } while (bVar2);
    }
    else {
      do {
        plVar4 = plVar1;
        plVar1 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 1095498f0; end: 1095499db;  */

void FUN_1095498f0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auStack_58 [8];
  long lStack_50;
  long lStack_48;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = param_1 + 1;
  lVar3 = *param_2;
  plVar4 = *(long **)(lVar3 + 0x40);
  while (plVar4 != (long *)(lVar3 + 0x48)) {
    FUN_1095494e4(auStack_58,param_2,(int)plVar4[7]);
    FUN_10954aef4(param_1,plVar4 + 4,plVar4 + 4,auStack_58);
    if (lStack_50 != 0) {
      lStack_48 = lStack_50;
      __ZdlPv();
    }
    plVar1 = (long *)plVar4[1];
    plVar5 = plVar4;
    if ((long *)plVar4[1] == (long *)0x0) {
      do {
        plVar4 = (long *)plVar5[2];
        bVar2 = (long *)*plVar4 != plVar5;
        plVar5 = plVar4;
      } while (bVar2);
    }
    else {
      do {
        plVar4 = plVar1;
        plVar1 = (long *)*plVar4;
      } while ((long *)*plVar4 != (long *)0x0);
    }
  }
  return;
}



/* Entry: 1095499dc; end: 109549ca3;  */

void FUN_1095499dc(long *param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long lStack_68;
  
  plVar4 = param_1;
  _objc_autoreleasePoolPush();
  puVar13 = *(undefined **)(*param_1 + 0x70);
  if (puVar13 == (undefined *)0x0) {
    puVar13 = PTR_PTR_1126ddfc0;
    _objc_alloc();
    func_0x00010c01e260();
  }
  else {
    _objc_retain(puVar13);
  }
  puVar5 = PTR__OBJC_CLASS___MLPredictionOptions_1126ddfc8;
  _objc_alloc_init();
  uVar6 = *(undefined8 *)(*param_1 + 8);
  lStack_68 = 0;
  func_0x00010c106620(uVar6,param_2,puVar13,puVar5,&lStack_68);
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lStack_68;
  _objc_retain(lStack_68);
  if (lVar12 == 0) {
    if ((*(byte *)(*param_1 + 0x80) & 1) == 0) {
      uVar7 = uVar6;
      func_0x00010bfa2900(uVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = *param_1;
      plVar15 = *(long **)(lVar12 + 0x40);
      puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      while (PTR__OBJC_CLASS___NSString_1126ae4d0 = puVar9, plVar15 != (long *)(lVar12 + 0x48)) {
        plVar17 = plVar15 + 4;
        if (*(char *)((long)plVar15 + 0x37) < '\0') {
          plVar17 = (long *)*plVar17;
        }
        lVar1 = plVar15[7];
        lVar14 = *(long *)(*param_1 + 0x58);
        puVar8 = puVar9;
        func_0x00010bf68f00(puVar9);
        func_0x00010c25d8e0(puVar9,param_2,plVar17,puVar8);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = uVar7;
        func_0x00010c0c7760(uVar7,param_2,puVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar6;
        func_0x00010bfa3000(uVar6,param_2,uVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar11);
        uVar11 = *(undefined8 *)(lVar14 + (long)(int)lVar1 * 8);
        *(undefined8 *)(lVar14 + (long)(int)lVar1 * 8) = uVar10;
        _objc_release(uVar11);
        _objc_release(puVar9);
        plVar17 = (long *)plVar15[1];
        plVar16 = plVar15;
        puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        if ((long *)plVar15[1] == (long *)0x0) {
          do {
            plVar15 = (long *)plVar16[2];
            bVar3 = (long *)*plVar15 != plVar16;
            plVar16 = plVar15;
          } while (bVar3);
        }
        else {
          do {
            plVar15 = plVar17;
            plVar17 = (long *)*plVar15;
          } while ((long *)*plVar15 != (long *)0x0);
        }
      }
      _objc_release(uVar7);
    }
    else {
      _objc_retain(uVar6);
      *(undefined8 *)(*param_1 + 0x78) = uVar6;
    }
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(puVar13);
    _objc_autoreleasePoolPop(plVar4);
    return;
  }
  func_0x00010c09e4e0(lVar12);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc3520();
  func_0x000105688514();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x109549c20);
  (*pcVar2)();
}



/* Entry: 109549ca4; end: 10954a15f;  */

void FUN_109549ca4(long *param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  ulong uStack_b8;
  undefined *puStack_b0;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 auStack_88 [2];
  long *plStack_78;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar4 = param_3;
  func_0x00010c0d1ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c22a600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar5;
  func_0x00010bf529e0();
  lStack_a0 = 0;
  lStack_98 = 0;
  lStack_90 = 0;
  if (uVar4 == 0) {
    _objc_release(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2430);
    lVar7 = 0;
    lVar14 = -1;
LAB_109549dac:
    iVar13 = 1;
    puVar11 = (undefined8 *)(lVar7 + uVar4 * 8 + -0x10);
    do {
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c067ec0(puVar11[1]);
      uVar4 = uVar5;
      func_0x00010c0dfd40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      func_0x00010c0df760();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *puVar11;
      *puVar11 = puVar6;
      _objc_release(uVar8);
      _objc_release(uVar4);
      uVar4 = uVar5;
      func_0x00010c0dfd40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar4;
      func_0x00010c067ec0();
      iVar13 = (int)uVar10 * iVar13;
      _objc_release(uVar4);
      lVar14 = lVar14 + -1;
      puVar11 = puVar11 + -1;
    } while (lVar14 != 0);
  }
  else {
    if (uVar4 >> 0x3d != 0) {
      FUN_10954a77c();
      goto LAB_10954a088;
    }
    lVar7 = uVar4 * 8;
    __Znwm();
    lVar14 = 0;
    lVar9 = lVar7 + uVar4 * 8;
    lStack_a0 = lVar7;
    lStack_90 = lVar9;
    do {
      _objc_retain(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2430);
      *(undefined ***)(lVar7 + lVar14) = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2430;
      lVar14 = lVar14 + 8;
    } while (uVar4 * 8 - lVar14 != 0);
    lStack_98 = lVar9;
    _objc_release(&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110d2430);
    lVar14 = uVar4 - 1;
    if (lVar14 != 0) goto LAB_109549dac;
    iVar13 = 1;
  }
  uVar4 = uVar5;
  func_0x00010c0dfd40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar4;
  func_0x00010c067ec0();
  _objc_release(uVar4);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = *param_1;
  uVar8 = param_2;
  _objc_retainAutorelease(param_2);
  func_0x00010bdc3520();
  func_0x000107c31940(auStack_88,uVar8);
  FUN_10954b184(lVar14 + 0x10,auStack_88,auStack_88,
                (*(long *)(*param_1 + 0x30) - *(long *)(*param_1 + 0x28) >> 3) * -0x3333333333333333
               );
  uVar1 = (int)uVar10 * iVar13;
  if ((long)plStack_78 < 0) {
    __ZdlPv(auStack_88[0]);
  }
  lVar14 = *param_1;
  FUN_109246310(&lStack_d0,-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
  _objc_retain(uVar5);
  uStack_b8 = uVar5;
  _objc_retain(puVar6);
  uVar4 = uStack_b8;
  plVar12 = *(long **)(lVar14 + 0x30);
  if (plVar12 < *(long **)(lVar14 + 0x38)) {
    *plVar12 = 0;
    plVar12[1] = 0;
    plVar12[2] = 0;
    plVar12[1] = lStack_c8;
    *plVar12 = lStack_d0;
    plVar12[2] = lStack_c0;
    lStack_d0 = 0;
    lStack_c8 = 0;
    lStack_c0 = 0;
    uStack_b8 = 0;
    puStack_b0 = (undefined *)0x0;
    plVar12[4] = (long)puVar6;
    plVar12[3] = uVar4;
    plVar12 = plVar12 + 5;
  }
  else {
    lVar7 = ((long)plVar12 - *(long *)(lVar14 + 0x28) >> 3) * -0x3333333333333333;
    uVar4 = lVar7 + 1;
    puStack_b0 = puVar6;
    if (0x666666666666666 < uVar4) {
      FUN_10954a548();
LAB_10954a088:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10954a08c);
      (*pcVar3)();
    }
    lVar9 = (long)*(long **)(lVar14 + 0x38) - *(long *)(lVar14 + 0x28) >> 3;
    uVar10 = lVar9 * -0x6666666666666666;
    if (uVar10 < uVar4 || uVar10 - uVar4 == 0) {
      uVar10 = uVar4;
    }
    if (0x333333333333332 < (ulong)(lVar9 * -0x3333333333333333)) {
      uVar10 = 0x666666666666666;
    }
    FUN_10954a55c(auStack_88,uVar10,lVar7,lVar14 + 0x28);
    puVar2 = puStack_b0;
    uVar4 = uStack_b8;
    plStack_78[1] = 0;
    plStack_78[2] = 0;
    *plStack_78 = 0;
    plStack_78[1] = lStack_c8;
    *plStack_78 = lStack_d0;
    plStack_78[2] = lStack_c0;
    lStack_d0 = 0;
    lStack_c8 = 0;
    uStack_b8 = 0;
    puStack_b0 = (undefined *)0x0;
    lStack_c0 = 0;
    plStack_78[4] = (long)puVar2;
    plStack_78[3] = uVar4;
    plStack_78 = plStack_78 + 5;
    FUN_10954a5d4(lVar14 + 0x28,auStack_88);
    plVar12 = *(long **)(lVar14 + 0x30);
    FUN_10954a6ac(auStack_88);
  }
  *(long **)(lVar14 + 0x30) = plVar12;
  _objc_release(puStack_b0);
  _objc_release(uStack_b8);
  if (lStack_d0 != 0) {
    lStack_c8 = lStack_d0;
    __ZdlPv();
  }
  _objc_release(puVar6);
  FUN_10954a790(&lStack_a0);
  _objc_release(uVar5);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10954a160; end: 10954a173;  */

void FUN_10954a160(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 **ppuStack_78;
  undefined8 **ppuStack_70;
  undefined1 uStack_68;
  undefined8 *puStack_60;
  undefined8 *puStack_58;
  
  puVar1 = &UNK_10f573518;
  func_0x000104c4f6cc();
  if ((undefined8 *)0x666666666666666 < param_2) {
    func_0x000104c4f740();
    ppuStack_78 = &puStack_60;
    ppuStack_70 = &puStack_58;
    puStack_58 = param_4;
    puVar2 = param_2;
    puStack_80 = puVar1;
    puStack_60 = param_4;
    if (param_2 == param_3) {
      uStack_68 = 1;
    }
    else {
      do {
        *puStack_58 = *puVar2;
        puStack_58[1] = 0;
        puStack_58[2] = 0;
        puStack_58[3] = 0;
        uVar3 = puVar2[1];
        puStack_58[2] = puVar2[2];
        puStack_58[1] = uVar3;
        puStack_58[3] = puVar2[3];
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *(undefined4 *)(puStack_58 + 4) = *(undefined4 *)(puVar2 + 4);
        puVar2 = puVar2 + 5;
        puStack_58 = puStack_58 + 5;
      } while (puVar2 != param_3);
      uStack_68 = 1;
      do {
        if (param_2[1] != 0) {
          param_2[2] = param_2[1];
          __ZdlPv();
        }
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    FUN_10954a27c(&puStack_80);
    return;
  }
  __Znwm((long)param_2 * 0x28);
  return;
}



/* Entry: 10954a174; end: 10954a27b;  */

void FUN_10954a174(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined8 **ppuStack_68;
  undefined8 **ppuStack_60;
  undefined1 uStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  
  if ((undefined8 *)0x666666666666666 < param_2) {
    func_0x000104c4f740();
    ppuStack_68 = &puStack_50;
    ppuStack_60 = &puStack_48;
    puStack_48 = param_4;
    puVar1 = param_2;
    uStack_70 = param_1;
    puStack_50 = param_4;
    if (param_2 == param_3) {
      uStack_58 = 1;
    }
    else {
      do {
        *puStack_48 = *puVar1;
        puStack_48[1] = 0;
        puStack_48[2] = 0;
        puStack_48[3] = 0;
        uVar2 = puVar1[1];
        puStack_48[2] = puVar1[2];
        puStack_48[1] = uVar2;
        puStack_48[3] = puVar1[3];
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        *(undefined4 *)(puStack_48 + 4) = *(undefined4 *)(puVar1 + 4);
        puVar1 = puVar1 + 5;
        puStack_48 = puStack_48 + 5;
      } while (puVar1 != param_3);
      uStack_58 = 1;
      do {
        if (param_2[1] != 0) {
          param_2[2] = param_2[1];
          __ZdlPv();
        }
        param_2 = param_2 + 5;
      } while (param_2 != param_3);
    }
    FUN_10954a27c(&uStack_70);
    return;
  }
  __Znwm((long)param_2 * 0x28);
  return;
}



/* Entry: 10954a27c; end: 10954a2af;  */

long FUN_10954a27c(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10954a2b0(param_1);
  }
  return param_1;
}



/* Entry: 10954a2b0; end: 10954a37f;  */

void FUN_10954a2b0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = **(long **)(param_1 + 8);
  for (lVar1 = **(long **)(param_1 + 0x10); lVar1 != lVar2; lVar1 = lVar1 + -0x28) {
    if (*(long *)(lVar1 + -0x20) != 0) {
      *(long *)(lVar1 + -0x18) = *(long *)(lVar1 + -0x20);
      __ZdlPv();
    }
  }
  return;
}



/* Entry: 10954a380; end: 10954a4bb;  */

long * FUN_10954a380(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plStack_58;
  long *plStack_50;
  long *plStack_48;
  long *plStack_40;
  long *plStack_38;
  
  lVar6 = param_1[1] - *param_1;
  uVar4 = (lVar6 >> 3) * -0x3333333333333333 + 1;
  if (uVar4 < 0x666666666666667) {
    lVar3 = param_1[2] - *param_1 >> 3;
    uVar5 = lVar3 * -0x6666666666666666;
    if (uVar5 < uVar4 || uVar5 - uVar4 == 0) {
      uVar5 = uVar4;
    }
    if (0x333333333333332 < (ulong)(lVar3 * -0x3333333333333333)) {
      uVar5 = 0x666666666666666;
    }
    plStack_38 = param_1;
    if (uVar5 == 0) {
      plVar2 = (long *)0x0;
    }
    else {
      plVar2 = param_1;
      FUN_10954a174();
    }
    plStack_50 = (long *)((long)plVar2 + lVar6);
    *plStack_50 = *param_2;
    plStack_50[1] = 0;
    plStack_50[2] = 0;
    plStack_50[3] = 0;
    uVar7 = param_2[1];
    plStack_50[2] = param_2[2];
    plStack_50[1] = uVar7;
    plStack_50[3] = param_2[3];
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[1] = 0;
    *(undefined4 *)(plStack_50 + 4) = *(undefined4 *)(param_2 + 4);
    plVar1 = plStack_50 + 5;
    lVar6 = (long)plStack_50 + (*param_1 - param_1[1]);
    plStack_58 = plVar2;
    plStack_48 = plVar1;
    plStack_40 = plVar2 + uVar5 * 5;
    func_0x00010954a1b8(param_1,*param_1,param_1[1],lVar6);
    plStack_58 = (long *)*param_1;
    *param_1 = lVar6;
    param_1[1] = (long)plVar1;
    plStack_40 = (long *)param_1[2];
    param_1[2] = (long)(plVar2 + uVar5 * 5);
    plStack_50 = plStack_58;
    plStack_48 = plStack_58;
    func_0x00010954a2f4(&plStack_58);
    return plVar1;
  }
  FUN_10954a160();
  func_0x00010954a2f4(&plStack_58);
  __Unwind_Resume();
  if (*(long *)*param_1 != 0) {
    FUN_10954a4fc();
    plVar2 = *(long **)*param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(plVar2);
    return plVar2;
  }
  return (long *)*param_1;
}



/* Entry: 10954a4bc; end: 10954a4fb;  */

void FUN_10954a4bc(undefined8 *param_1)

{
  if (*(long *)*param_1 != 0) {
    FUN_10954a4fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(*(undefined8 *)*param_1);
    return;
  }
  return;
}



/* Entry: 10954a4fc; end: 10954a547;  */

void FUN_10954a4fc(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = param_1[1]; lVar2 != lVar1; lVar2 = lVar2 + -0x28) {
    if (*(long *)(lVar2 + -0x20) != 0) {
      *(long *)(lVar2 + -0x18) = *(long *)(lVar2 + -0x20);
      __ZdlPv();
    }
  }
  param_1[1] = lVar1;
  return;
}



/* Entry: 10954a548; end: 10954a55b;  */

long * FUN_10954a548(undefined8 param_1,undefined8 *param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  plVar3 = (long *)&UNK_10f573518;
  func_0x000104c4f6cc();
  plVar3[3] = 0;
  plVar3[4] = param_4;
  if (param_2 == (undefined8 *)0x0) {
    lVar4 = 0;
  }
  else {
    if ((undefined8 *)0x666666666666666 < param_2) {
      func_0x000104c4f740();
      plVar9 = (long *)*plVar3;
      plVar2 = (long *)plVar3[1];
      plVar1 = (long *)((long)plVar9 + (param_2[1] - (long)plVar2));
      plVar5 = plVar3;
      plVar6 = plVar9;
      plVar8 = plVar1;
      if (plVar2 != plVar9) {
        do {
          *plVar8 = 0;
          plVar8[1] = 0;
          plVar8[2] = 0;
          lVar4 = *plVar6;
          plVar8[1] = plVar6[1];
          *plVar8 = lVar4;
          plVar8[2] = plVar6[2];
          *plVar6 = 0;
          plVar6[1] = 0;
          lVar7 = plVar6[4];
          lVar4 = plVar6[3];
          plVar6[2] = 0;
          plVar6[3] = 0;
          plVar6[4] = 0;
          plVar8[4] = lVar7;
          plVar8[3] = lVar4;
          plVar6 = plVar6 + 5;
          plVar8 = plVar8 + 5;
        } while (plVar6 != plVar2);
        do {
          plVar5 = plVar9;
          func_0x00010954a6f8(plVar9);
          plVar9 = plVar9 + 5;
        } while (plVar9 != plVar2);
        plVar9 = (long *)*plVar3;
      }
      param_2[1] = plVar1;
      *plVar3 = (long)plVar1;
      plVar3[1] = (long)plVar9;
      param_2[1] = plVar9;
      lVar4 = plVar3[1];
      plVar3[1] = param_2[2];
      param_2[2] = lVar4;
      lVar4 = plVar3[2];
      plVar3[2] = param_2[3];
      param_2[3] = lVar4;
      *param_2 = param_2[1];
      return plVar5;
    }
    lVar4 = (long)param_2 * 0x28;
    __Znwm();
  }
  lVar7 = lVar4 + param_3 * 0x28;
  *plVar3 = lVar4;
  plVar3[1] = lVar7;
  plVar3[2] = lVar7;
  plVar3[3] = lVar4 + (long)param_2 * 0x28;
  return plVar3;
}



/* Entry: 10954a55c; end: 10954a5d3;  */

long * FUN_10954a55c(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == (undefined8 *)0x0) {
    lVar3 = 0;
  }
  else {
    if ((undefined8 *)0x666666666666666 < param_2) {
      func_0x000104c4f740();
      plVar8 = (long *)*param_1;
      plVar2 = (long *)param_1[1];
      plVar1 = (long *)((long)plVar8 + (param_2[1] - (long)plVar2));
      plVar4 = param_1;
      plVar5 = plVar8;
      plVar7 = plVar1;
      if (plVar2 != plVar8) {
        do {
          *plVar7 = 0;
          plVar7[1] = 0;
          plVar7[2] = 0;
          lVar3 = *plVar5;
          plVar7[1] = plVar5[1];
          *plVar7 = lVar3;
          plVar7[2] = plVar5[2];
          *plVar5 = 0;
          plVar5[1] = 0;
          lVar6 = plVar5[4];
          lVar3 = plVar5[3];
          plVar5[2] = 0;
          plVar5[3] = 0;
          plVar5[4] = 0;
          plVar7[4] = lVar6;
          plVar7[3] = lVar3;
          plVar5 = plVar5 + 5;
          plVar7 = plVar7 + 5;
        } while (plVar5 != plVar2);
        do {
          plVar4 = plVar8;
          func_0x00010954a6f8(plVar8);
          plVar8 = plVar8 + 5;
        } while (plVar8 != plVar2);
        plVar8 = (long *)*param_1;
      }
      param_2[1] = plVar1;
      *param_1 = (long)plVar1;
      param_1[1] = (long)plVar8;
      param_2[1] = plVar8;
      lVar3 = param_1[1];
      param_1[1] = param_2[2];
      param_2[2] = lVar3;
      lVar3 = param_1[2];
      param_1[2] = param_2[3];
      param_2[3] = lVar3;
      *param_2 = param_2[1];
      return plVar4;
    }
    lVar3 = (long)param_2 * 0x28;
    __Znwm();
  }
  lVar6 = lVar3 + param_3 * 0x28;
  *param_1 = lVar3;
  param_1[1] = lVar6;
  param_1[2] = lVar6;
  param_1[3] = lVar3 + (long)param_2 * 0x28;
  return param_1;
}



/* Entry: 10954a5d4; end: 10954a6ab;  */

void FUN_10954a5d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar6 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar6 + (param_2[1] - (long)puVar2));
  puVar3 = puVar6;
  puVar5 = puVar1;
  if (puVar2 != puVar6) {
    do {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      uVar4 = *puVar3;
      puVar5[1] = puVar3[1];
      *puVar5 = uVar4;
      puVar5[2] = puVar3[2];
      *puVar3 = 0;
      puVar3[1] = 0;
      uVar7 = puVar3[4];
      uVar4 = puVar3[3];
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar5[4] = uVar7;
      puVar5[3] = uVar4;
      puVar3 = puVar3 + 5;
      puVar5 = puVar5 + 5;
    } while (puVar3 != puVar2);
    do {
      func_0x00010954a6f8(puVar6);
      puVar6 = puVar6 + 5;
    } while (puVar6 != puVar2);
    puVar6 = (undefined8 *)*param_1;
  }
  param_2[1] = puVar1;
  *param_1 = puVar1;
  param_1[1] = puVar6;
  param_2[1] = puVar6;
  uVar4 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = uVar4;
  uVar4 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = uVar4;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10954a6ac; end: 10954a77b;  */

long * FUN_10954a6ac(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -0x28;
    func_0x00010954a6f8();
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10954a77c; end: 10954a78f;  */

void FUN_10954a77c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = (undefined8 *)&UNK_10f573518;
  func_0x000104c4f6cc();
  puVar3 = (undefined8 *)*puVar1;
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)puVar1[1];
    puVar2 = puVar3;
    if (puVar4 != puVar3) {
      do {
        puVar4 = puVar4 + -1;
        _objc_release(*puVar4);
      } while (puVar4 != puVar3);
      puVar2 = (undefined8 *)*puVar1;
    }
    puVar1[1] = puVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar2);
    return;
  }
  return;
}



/* Entry: 10954a790; end: 10954a7f3;  */

void FUN_10954a790(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)*param_1;
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)param_1[1];
    puVar1 = puVar2;
    if (puVar3 != puVar2) {
      do {
        puVar3 = puVar3 + -1;
        _objc_release(*puVar3);
      } while (puVar3 != puVar2);
      puVar1 = (undefined8 *)*param_1;
    }
    param_1[1] = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(puVar1);
    return;
  }
  return;
}



/* Entry: 10954a7f4; end: 10954a807;  */

void FUN_10954a7f4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  plVar3 = (long *)&UNK_10f573518;
  func_0x000104c4f6cc();
  puVar9 = (undefined8 *)*plVar3;
  puVar2 = (undefined8 *)plVar3[1];
  puVar1 = (undefined8 *)((long)puVar9 + (param_2[1] - (long)puVar2));
  puVar4 = puVar9;
  puVar7 = puVar1;
  if (puVar2 != puVar9) {
    do {
      uVar8 = *puVar4;
      puVar5 = puVar4 + 1;
      *puVar4 = 0;
      *puVar7 = uVar8;
      puVar4 = puVar5;
      puVar7 = puVar7 + 1;
    } while (puVar5 != puVar2);
    do {
      puVar4 = puVar9 + 1;
      _objc_release(*puVar9);
      puVar9 = puVar4;
    } while (puVar4 != puVar2);
    puVar9 = (undefined8 *)*plVar3;
  }
  param_2[1] = puVar1;
  *plVar3 = (long)puVar1;
  plVar3[1] = (long)puVar9;
  param_2[1] = puVar9;
  lVar6 = plVar3[1];
  plVar3[1] = param_2[2];
  param_2[2] = lVar6;
  lVar6 = plVar3[2];
  plVar3[2] = param_2[3];
  param_2[3] = lVar6;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10954a808; end: 10954a8b3;  */

void FUN_10954a808(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)*param_1;
  puVar2 = (undefined8 *)param_1[1];
  puVar1 = (undefined8 *)((long)puVar8 + (param_2[1] - (long)puVar2));
  puVar3 = puVar8;
  puVar6 = puVar1;
  if (puVar2 != puVar8) {
    do {
      uVar7 = *puVar3;
      puVar4 = puVar3 + 1;
      *puVar3 = 0;
      *puVar6 = uVar7;
      puVar3 = puVar4;
      puVar6 = puVar6 + 1;
    } while (puVar4 != puVar2);
    do {
      puVar3 = puVar8 + 1;
      _objc_release(*puVar8);
      puVar8 = puVar3;
    } while (puVar3 != puVar2);
    puVar8 = (undefined8 *)*param_1;
  }
  param_2[1] = puVar1;
  *param_1 = (long)puVar1;
  param_1[1] = (long)puVar8;
  param_2[1] = puVar8;
  lVar5 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar5;
  lVar5 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar5;
  *param_2 = param_2[1];
  return;
}



/* Entry: 10954a8b4; end: 10954a937;  */

undefined1  [16] FUN_10954a8b4(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if ((ulong)param_1 >> 0x3d == 0) {
    lVar1 = (long)param_1 << 3;
    __Znwm(lVar1);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = lVar1;
    return auVar3;
  }
  func_0x000104c4f740();
  lVar1 = param_1[1];
  lVar2 = param_1[2];
  while (lVar2 != lVar1) {
    param_1[2] = lVar2 + -8;
    _objc_release(*(undefined8 *)(lVar2 + -8));
    lVar2 = param_1[2];
  }
  if (*param_1 != 0) {
    __ZdlPv();
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 10954a938; end: 10954aa53;  */

undefined1  [16]
FUN_10954a938(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  func_0x00010954a9d0(param_1,&uStack_38,param_2);
  lVar4 = *plVar2;
  bVar1 = lVar4 == 0;
  if (bVar1) {
    lVar4 = 0x40;
    __Znwm();
    param_4 = (undefined8 *)*param_4;
    uVar3 = param_4[2];
    uVar5 = *param_4;
    *(undefined8 *)(lVar4 + 0x28) = param_4[1];
    *(undefined8 *)(lVar4 + 0x20) = uVar5;
    *(undefined8 *)(lVar4 + 0x30) = uVar3;
    param_4[1] = 0;
    param_4[2] = 0;
    *param_4 = 0;
    *(undefined4 *)(lVar4 + 0x38) = 0;
    FUN_10954aa54(param_1,uStack_38,plVar2,lVar4);
  }
  auVar6[8] = bVar1;
  auVar6._0_8_ = lVar4;
  auVar6._9_7_ = 0;
  return auVar6;
}



/* Entry: 10954aa54; end: 10954aaf7;  */

void FUN_10954aa54(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c27d40(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10954aaf8; end: 10954ab1f;  */

void FUN_10954aaf8(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    FUN_10954ab20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10954ab20; end: 10954ac33;  */

undefined8 * FUN_10954ab20(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puStack_38;
  
  _objc_release(param_1[0xe]);
  puStack_38 = param_1 + 0xb;
  func_0x00010954abc8(&puStack_38);
  func_0x00010951ec08(param_1 + 8,param_1[9]);
  lVar3 = param_1[5];
  if (lVar3 != 0) {
    lVar2 = param_1[6];
    lVar1 = lVar3;
    if (lVar2 != lVar3) {
      do {
        lVar2 = lVar2 + -0x28;
        func_0x00010954a6f8(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = param_1[5];
    }
    param_1[6] = lVar3;
    __ZdlPv(lVar1);
  }
  func_0x00010951ec08(param_1 + 2,param_1[3]);
  _objc_release(param_1[1]);
  _objc_release(*param_1);
  return param_1;
}



/* Entry: 10954ac34; end: 10954ad07;  */

void FUN_10954ac34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar2 = 0x10;
  ___cxa_allocate_exception(0x10);
  func_0x000107c31940(auStack_48,param_1);
  func_0x000107c31940(auStack_60,param_2);
  FUN_10954ad0c(uVar2,auStack_48,auStack_60,param_3);
  ___cxa_throw(uVar2,&PTR_DAT_110afbcf0,FUN_10954ad08);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10954acb0);
  (*pcVar1)();
}



/* Entry: 10954ad08; end: 10954ad0b;  */

void FUN_10954ad08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10954ad0c; end: 10954ada3;  */

undefined8 *
FUN_10954ad0c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 auStack_48 [2];
  char cStack_31;
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_48,&UNK_10f639f0c,param_4);
  FUN_10954ada4(param_1,param_2,param_3,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  *param_1 = &PTR_FUN_110afbd18;
  return param_1;
}



/* Entry: 10954ada4; end: 10954ae3b;  */

undefined8 *
FUN_10954ada4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 auStack_48 [2];
  char cStack_31;
  
  __ZNSt3__1plIcNS_11char_traitsIcEENS_9allocatorIcEEEENS_12basic_stringIT_T0_T1_EEPKS6_RKS9_
            (auStack_48,&UNK_10f639f0c,param_4);
  FUN_10952d1c4(param_1,param_2,param_3,auStack_48);
  if (cStack_31 < '\0') {
    __ZdlPv(auStack_48[0]);
  }
  *param_1 = &PTR_FUN_110afbd40;
  return param_1;
}



/* Entry: 10954ae3c; end: 10954ae4f;  */

void FUN_10954ae3c(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10954ae50; end: 10954ae53;  */

void FUN_10954ae50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbcc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt13runtime_errorD2Ev_1103461e0)();
  return;
}



/* Entry: 10954ae54; end: 10954ae67;  */

void FUN_10954ae54(void)

{
  __ZNSt13runtime_errorD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10954ae68; end: 10954aef3;  */

void FUN_10954ae68(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10954ae68(param_1,*param_2);
    FUN_10954ae68(param_1,param_2[1]);
    func_0x00010954aeb0(param_2 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10954aef4; end: 10954affb;  */

undefined1  [16]
FUN_10954aef4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long alStack_50 [3];
  undefined8 uStack_38;
  
  plVar2 = param_1;
  func_0x00010954af78(param_1,&uStack_38,param_2);
  lVar3 = *plVar2;
  bVar1 = lVar3 == 0;
  if (bVar1) {
    FUN_10954affc(alStack_50,param_1,param_3,param_4);
    FUN_10954b06c(param_1,uStack_38,plVar2,alStack_50[0]);
    lVar3 = alStack_50[0];
  }
  auVar4[8] = bVar1;
  auVar4._0_8_ = lVar3;
  auVar4._9_7_ = 0;
  return auVar4;
}



/* Entry: 10954affc; end: 10954b06b;  */

void FUN_10954affc(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = 0x60;
  __Znwm();
  *param_1 = lVar1;
  param_1[1] = param_2;
  param_1[2] = 0;
  func_0x00010954b0c0(lVar1 + 0x20,param_3,param_4);
  *(undefined1 *)(param_1 + 2) = 1;
  return;
}



/* Entry: 10954b06c; end: 10954b183;  */

void FUN_10954b06c(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  func_0x000107c27d40(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10954b184; end: 10954b207;  */

void FUN_10954b184(long *param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_38;
  
  plVar1 = param_1;
  func_0x00010954a9d0(param_1,&uStack_38,param_2);
  if (*plVar1 == 0) {
    lVar2 = 0x40;
    __Znwm();
    uVar3 = *param_3;
    *(undefined8 *)(lVar2 + 0x28) = param_3[1];
    *(undefined8 *)(lVar2 + 0x20) = uVar3;
    *(undefined8 *)(lVar2 + 0x30) = param_3[2];
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    *(undefined4 *)(lVar2 + 0x38) = param_4;
    FUN_10954aa54(param_1,uStack_38,plVar1,lVar2);
  }
  return;
}



/* Entry: 10954b208; end: 10954bcab;  */

long * FUN_10954b208(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  ulong uVar9;
  code *pcVar10;
  undefined4 **ppuVar11;
  long lVar12;
  float *pfVar13;
  ulong uVar14;
  int iVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  float *pfVar19;
  long lVar20;
  float *pfVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  long *plVar25;
  undefined4 *puVar26;
  ulong uVar27;
  uint uVar28;
  int *piVar29;
  long lVar30;
  ulong uVar31;
  float fVar32;
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  long lStack_d0;
  ulong uStack_c8;
  undefined4 *puStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  undefined4 *puStack_a8;
  float *pfStack_a0;
  float *pfStack_98;
  long lStack_88;
  
  lVar17 = 0;
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar12;
  *param_2 = 0;
  param_2[1] = 0;
  lVar12 = *param_3;
  plVar25 = param_1 + 2;
  param_1[3] = param_3[1];
  *plVar25 = lVar12;
  *param_3 = 0;
  param_3[1] = 0;
  do {
    *(undefined8 *)((long)param_1 + lVar17 + 0x20) = 0;
    *(undefined8 *)((long)param_1 + lVar17 + 0x28) = 0;
    *(undefined4 *)((long)param_1 + lVar17 + 0x30) = 1;
    lVar17 = lVar17 + 0x18;
  } while (lVar17 != 0x198);
  plVar2 = param_1 + 0x37;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  *plVar2 = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x1ec) = 0;
  *(undefined8 *)((long)param_1 + 0x1e4) = 0;
  param_1[0x41] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  fVar35 = *(float *)(*param_1 + 0x44);
  pfStack_a0 = (float *)0x0;
  pfStack_98 = (float *)0x0;
  puStack_a8 = (undefined4 *)0x0;
  iVar1 = *(int *)(*param_1 + 0x4c) / 2;
  uVar28 = -iVar1;
  if ((int)uVar28 <= iVar1) {
    do {
      pfVar13 = pfStack_a0;
      fVar34 = 1.0 - fVar35;
      if (-1 < (int)uVar28) {
        fVar34 = 1.0;
      }
      fVar32 = fVar35 + fVar34;
      if ((int)uVar28 < 1) {
        fVar32 = fVar34;
      }
      uVar3 = -uVar28;
      if (-1 < (int)uVar28) {
        uVar3 = uVar28;
      }
      _powf(fVar32,(float)uVar3);
      if (pfVar13 < pfStack_98) {
        pfVar21 = pfVar13 + 1;
        *pfVar13 = fVar32;
      }
      else {
        lVar17 = (long)pfVar13 - (long)puStack_a8;
        uVar27 = (lVar17 >> 2) + 1;
        if (uVar27 >> 0x3e != 0) {
          FUN_1092cc18c();
          goto LAB_10954bc10;
        }
        uVar31 = (long)pfStack_98 - (long)puStack_a8 >> 1;
        if (uVar31 <= uVar27) {
          uVar31 = uVar27;
        }
        if (0x7ffffffffffffffb < (ulong)((long)pfStack_98 - (long)puStack_a8)) {
          uVar31 = 0x3fffffffffffffff;
        }
        ppuVar11 = &puStack_a8;
        FUN_1092cc1a0();
        puVar22 = puStack_a8;
        pfVar13 = (float *)((long)ppuVar11 + lVar17);
        pfVar19 = (float *)((long)ppuVar11 + uVar31 * 4);
        puVar26 = (undefined4 *)((long)pfVar13 - ((long)pfStack_a0 - (long)puStack_a8));
        pfVar21 = pfVar13 + 1;
        *pfVar13 = fVar32;
        _memcpy(puVar26,puVar22);
        bVar8 = puStack_a8 != (undefined4 *)0x0;
        puStack_a8 = puVar26;
        pfStack_98 = pfVar19;
        if (bVar8) {
          pfStack_a0 = pfVar21;
          __ZdlPv();
        }
      }
      uVar28 = uVar28 + 1;
      pfStack_a0 = pfVar21;
    } while (iVar1 + 1U != uVar28);
    if (*plVar2 != 0) {
      param_1[0x38] = *plVar2;
      __ZdlPv();
      *plVar2 = 0;
      param_1[0x38] = 0;
      param_1[0x39] = 0;
    }
  }
  param_1[0x37] = (long)puStack_a8;
  param_1[0x38] = (long)pfStack_a0;
  param_1[0x39] = (long)pfStack_98;
  lVar17 = *param_1;
  iVar1 = *(int *)(lVar17 + 0x3c);
  *(int *)(param_1 + 0x3a) = iVar1;
  if (*(char *)(lVar17 + 0x40) == '\x01') {
    *(int *)(param_1 + 0x3a) = iVar1 + 2;
  }
  if (*plVar25 == 0) {
    FUN_10954bcac(&puStack_a8,lVar17);
    func_0x00010954bd4c(plVar25,&puStack_a8);
    pfVar13 = pfStack_a0;
    if (pfStack_a0 != (float *)0x0) {
      pfVar19 = pfStack_a0 + 2;
      do {
        lVar17 = *(long *)pfVar19;
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(pfVar19,0x10);
        if (bVar8) {
          *(long *)pfVar19 = lVar17 + -1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      if (lVar17 == 0) {
        (**(code **)(*(long *)pfStack_a0 + 0x10))(pfStack_a0);
        __ZNSt3__119__shared_weak_count14__release_weakEv(pfVar13);
      }
    }
    lVar17 = *param_1;
  }
  iVar15 = *(int *)(lVar17 + 0x58);
  *(int *)((long)param_1 + 0x1d4) = iVar15;
  iVar4 = *(int *)(lVar17 + 0x5c);
  *(int *)(param_1 + 0x3b) = iVar4;
  param_1[10] = 0;
  *(int *)(param_1 + 0xb) = iVar15;
  *(int *)((long)param_1 + 0x5c) = iVar4;
  *(undefined4 *)(param_1 + 0xc) = 1;
  iVar6 = iVar4 * iVar15;
  iVar1 = iVar6 * 2;
  lVar30 = (long)iVar1;
  param_1[0xd] = lVar30;
  *(int *)(param_1 + 0xe) = iVar15;
  *(int *)((long)param_1 + 0x74) = iVar4;
  *(undefined4 *)(param_1 + 0xf) = 1;
  lVar20 = (long)iVar6;
  param_1[0x10] = lVar30 + iVar6;
  *(int *)(param_1 + 0x11) = iVar15;
  *(int *)((long)param_1 + 0x8c) = iVar4;
  *(undefined4 *)(param_1 + 0x12) = 10;
  lVar12 = lVar30 + iVar6 + (long)(iVar6 * 10);
  iVar5 = *(int *)(lVar17 + 0x3c);
  param_1[0x13] = lVar12;
  *(int *)(param_1 + 0x14) = iVar15;
  *(int *)((long)param_1 + 0xa4) = iVar4;
  *(int *)(param_1 + 0x15) = iVar5;
  lVar12 = lVar12 + iVar5 * iVar6;
  if (*(char *)(lVar17 + 0x40) == '\x01') {
    param_1[0x16] = lVar12;
    *(int *)(param_1 + 0x17) = iVar15;
    *(int *)((long)param_1 + 0xbc) = iVar4;
    *(undefined4 *)(param_1 + 0x18) = 2;
    lVar12 = lVar12 + lVar30;
  }
  param_1[0x19] = lVar12;
  *(int *)(param_1 + 0x1a) = iVar6;
  *(undefined8 *)((long)param_1 + 0xd4) = 0x10000000a;
  lVar12 = lVar12 + iVar6 * 10;
  param_1[0x1c] = lVar12;
  param_1[0x1d] = 0xa0000000a;
  *(undefined4 *)(param_1 + 0x1e) = 1;
  lVar12 = lVar12 + 100;
  iVar5 = *(int *)(lVar17 + 0x3c);
  param_1[0x1f] = lVar12;
  *(int *)(param_1 + 0x20) = iVar6;
  *(int *)((long)param_1 + 0x104) = iVar5;
  *(undefined4 *)(param_1 + 0x21) = 1;
  lVar12 = lVar12 + iVar5 * iVar6;
  param_1[0x22] = lVar12;
  *(int *)(param_1 + 0x23) = iVar15;
  *(int *)((long)param_1 + 0x11c) = iVar4;
  *(int *)(param_1 + 0x24) = (int)param_1[0x3a];
  lVar12 = lVar12 + (int)param_1[0x3a] * iVar1;
  param_1[0x25] = lVar12;
  *(int *)(param_1 + 0x26) = iVar15;
  *(int *)((long)param_1 + 0x134) = iVar4;
  *(undefined4 *)(param_1 + 0x27) = 1;
  lVar12 = lVar12 + lVar20;
  param_1[0x28] = lVar12;
  *(int *)(param_1 + 0x29) = iVar15;
  *(int *)((long)param_1 + 0x14c) = iVar4;
  *(undefined4 *)(param_1 + 0x2a) = 1;
  lVar12 = lVar12 + lVar30;
  param_1[0x2b] = lVar12;
  *(int *)(param_1 + 0x2c) = iVar15;
  *(int *)((long)param_1 + 0x164) = iVar4;
  *(undefined4 *)(param_1 + 0x2d) = 1;
  lVar12 = lVar12 + lVar20;
  param_1[0x2e] = lVar12;
  *(int *)(param_1 + 0x2f) = iVar15;
  *(int *)((long)param_1 + 0x17c) = iVar4;
  *(undefined4 *)(param_1 + 0x30) = 1;
  lVar12 = lVar12 + lVar30;
  param_1[0x31] = lVar12;
  *(int *)(param_1 + 0x32) = iVar15;
  *(int *)((long)param_1 + 0x194) = iVar4;
  *(undefined4 *)(param_1 + 0x33) = 1;
  lVar12 = lVar12 + lVar20;
  param_1[0x34] = lVar12;
  *(int *)(param_1 + 0x35) = iVar15;
  *(int *)((long)param_1 + 0x1ac) = iVar4;
  *(undefined4 *)(param_1 + 0x36) = 1;
  uVar27 = *(ulong *)(lVar17 + 0x20);
  if ((*(uint *)(lVar17 + 0x10) >> 1 & 1) == 0) {
    *(uint *)(lVar17 + 0x10) = *(uint *)(lVar17 + 0x10) | 2;
    if (uVar27 == 0) {
      uVar27 = *(ulong *)(lVar17 + 8);
      if ((uVar27 & 1) != 0) {
        uVar27 = *(ulong *)(uVar27 & 0xfffffffffffffffe);
      }
      FUN_10934f79c();
      *(ulong *)(lVar17 + 0x20) = uVar27;
    }
LAB_10954b5fc:
    piVar29 = (int *)(uVar27 + 0x10);
    iVar15 = *piVar29;
    iVar1 = iVar1 + (int)lVar12;
    if (iVar15 < iVar1) {
      if (*(int *)(uVar27 + 0x14) < iVar1) {
        FUN_109311970(piVar29,iVar15,iVar1);
        iVar15 = *piVar29;
      }
      *(int *)(uVar27 + 0x10) = iVar1;
      if (iVar15 != iVar1) {
        _bzero(*(long *)(uVar27 + 0x18) + (long)iVar15 * 4,((long)iVar1 - (long)iVar15) * 4);
      }
    }
    else if (iVar1 < iVar15) {
      *piVar29 = iVar1;
    }
    lVar17 = *param_1;
    *(uint *)(lVar17 + 0x10) = *(uint *)(lVar17 + 0x10) | 2;
    uVar27 = *(ulong *)(lVar17 + 0x20);
    if (uVar27 == 0) {
      uVar27 = *(ulong *)(lVar17 + 8);
      if ((uVar27 & 1) != 0) {
        uVar27 = *(ulong *)(uVar27 & 0xfffffffffffffffe);
      }
      FUN_10934f79c();
      *(ulong *)(lVar17 + 0x20) = uVar27;
    }
    *(undefined1 *)(uVar27 + 0x20) = 1;
    FUN_10954d8e4(&puStack_a8,param_1,2,0);
    iVar1 = *(int *)((long)param_1 + 0x1d4);
    uVar27 = (ulong)iVar1;
    if (0 < iVar1) {
      lVar17 = uVar27 << 2;
      _malloc();
      if (lVar17 != 0) goto LAB_10954b6c4;
LAB_10954b89c:
      ___cxa_allocate_exception(8);
      __ZNSt9bad_allocC1Ev();
      ___cxa_throw();
      goto LAB_10954bc10;
    }
    lVar17 = 0;
LAB_10954b6c4:
    lStack_d0 = 0;
    iVar15 = (int)param_1[0x3b];
    uVar31 = (ulong)iVar15;
    lVar12 = lStack_d0;
    if (iVar15 != 0) {
      if (iVar15 < 1) {
        lVar12 = 0;
      }
      else {
        lVar12 = uVar31 << 2;
        _malloc();
        if (lVar12 == 0) {
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_10954bc10;
        }
      }
    }
    lStack_d0 = lVar12;
    lVar12 = lStack_d0;
    fVar35 = SQRT((float)(iVar15 * iVar1)) * *(float *)(*param_1 + 0x2c);
    fVar35 = -0.5 / (fVar35 * fVar35);
    if (0 < iVar1) {
      uVar18 = 0;
      do {
        fVar34 = ((float)(uVar18 & 0xffffffff) + 0.5) - (float)uVar27 / 2.0;
        *(float *)(lVar17 + uVar18 * 4) = fVar34 * fVar35 * fVar34;
        uVar18 = uVar18 + 1;
      } while (uVar27 != uVar18);
    }
    if (0 < iVar15) {
      uVar18 = 0;
      do {
        fVar34 = ((float)(uVar18 & 0xffffffff) + 0.5) - (float)uVar31 / 2.0;
        *(float *)(lStack_d0 + uVar18 * 4) = fVar34 * fVar35 * fVar34;
        uVar18 = uVar18 + 1;
      } while (uVar31 != uVar18);
    }
    puStack_c0 = (undefined4 *)0x0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_c8 = uVar31;
    if (iVar1 == 0 || iVar15 == 0) {
LAB_10954b7e4:
      FUN_1093d98c8(&puStack_c0,(long)iVar15 * (long)iVar1,uVar27,uVar31);
      if ((uStack_b8 != uVar27) || (uStack_b0 != uVar31)) {
        if (iVar1 != 0 && iVar15 != 0) {
          lVar20 = 0;
          if (uVar31 != 0) {
            lVar20 = 0x7fffffffffffffff / (long)uVar31;
          }
          if (lVar20 < (long)uVar27) goto LAB_10954bbcc;
        }
        FUN_1093d98c8(&puStack_c0,(long)iVar15 * (long)iVar1,uVar27,uVar31);
      }
      FUN_109551300(&puStack_c0,lVar17,&lStack_d0);
      FUN_109553ed0(*(undefined8 *)param_1[2],puStack_c0,puStack_a8,
                    *(undefined4 *)((long)param_1 + 0x1d4),(int)param_1[0x3b]);
      _free(puStack_c0);
      _free(lVar12);
      _free(lVar17);
      iVar1 = *(int *)((long)param_1 + 0x1d4);
      uVar27 = (ulong)iVar1;
      if (iVar1 < 1) {
        pfVar13 = (float *)0x0;
      }
      else {
        pfVar13 = (float *)(uVar27 << 2);
        _malloc();
        if (pfVar13 == (float *)0x0) goto LAB_10954b89c;
      }
      iVar15 = (int)param_1[0x3b];
      uVar31 = (ulong)iVar15;
      if (iVar15 < 1) {
        lVar17 = 0;
      }
      else {
        lVar17 = uVar31 << 2;
        _malloc();
        if (lVar17 == 0) {
          ___cxa_allocate_exception(8);
          __ZNSt9bad_allocC1Ev();
          ___cxa_throw();
          goto LAB_10954bc10;
        }
      }
      if (0 < iVar1) {
        uVar18 = 0;
        do {
          fVar35 = (float)(6.283185307179586 / (double)(long)(uVar27 - 1)) *
                   (float)(uVar18 & 0xffffffff);
          _cosf();
          pfVar13[uVar18] = (1.0 - fVar35) * 0.5;
          uVar18 = uVar18 + 1;
        } while (uVar27 != uVar18);
      }
      if (0 < iVar15) {
        uVar18 = 0;
        do {
          fVar35 = (float)(6.283185307179586 / (double)(long)(uVar31 - 1)) *
                   (float)(uVar18 & 0xffffffff);
          _cosf();
          *(float *)(lVar17 + uVar18 * 4) = (1.0 - fVar35) * 0.5;
          uVar18 = uVar18 + 1;
        } while (uVar31 != uVar18);
      }
      func_0x00010954d990(&puStack_a8,param_1,3,0);
      puStack_c0 = (undefined4 *)0x0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      if (iVar15 != 0 || iVar1 != 0) {
        if ((iVar1 != 0) && (iVar15 != 0)) {
          lVar12 = 0;
          if (uVar31 != 0) {
            lVar12 = 0x7fffffffffffffff / (long)uVar31;
          }
          if (lVar12 < (long)uVar27) {
            ___cxa_allocate_exception(8);
            __ZNSt9bad_allocC1Ev();
            ___cxa_throw();
            goto LAB_10954bc10;
          }
        }
        FUN_1093c3d54(&puStack_c0,(long)iVar15 * (long)iVar1,uVar27,uVar31);
        if (0 < (long)uStack_b0) {
          lVar12 = 0;
          uVar27 = 0;
          do {
            uVar31 = uStack_b8;
            if ((((ulong)(puStack_c0 + uStack_b8 * uVar27) & 3) == 0) &&
               (uVar31 = (ulong)-((uint)(puStack_c0 + uStack_b8 * uVar27) >> 2) & 3,
               (long)uStack_b8 <= (long)uVar31)) {
              uVar31 = uStack_b8;
            }
            fVar35 = *(float *)(lVar17 + uVar27 * 4);
            uVar9 = uStack_b8 - uVar31;
            uVar18 = uVar9 + 3;
            if ((long)uVar31 <= (long)uStack_b8) {
              uVar18 = uVar9;
            }
            if (0 < (long)uVar31) {
              uVar14 = uVar31;
              pfVar19 = (float *)((long)puStack_c0 + uStack_b8 * lVar12);
              pfVar21 = pfVar13;
              do {
                *pfVar19 = fVar35 * *pfVar21;
                uVar14 = uVar14 - 1;
                pfVar19 = pfVar19 + 1;
                pfVar21 = pfVar21 + 1;
              } while (uVar14 != 0);
            }
            lVar20 = (uVar18 & 0xfffffffffffffffc) + uVar31;
            if (3 < (long)uVar9) {
              pfVar19 = pfVar13 + uVar31;
              puVar16 = (undefined8 *)((long)puStack_c0 + uStack_b8 * lVar12 + uVar31 * 4);
              uVar14 = uVar31;
              do {
                uVar33 = *(undefined8 *)pfVar19;
                puVar16[1] = CONCAT44((float)((ulong)*(undefined8 *)(pfVar19 + 2) >> 0x20) * fVar35,
                                      (float)*(undefined8 *)(pfVar19 + 2) * fVar35);
                *puVar16 = CONCAT44((float)((ulong)uVar33 >> 0x20) * fVar35,(float)uVar33 * fVar35);
                uVar14 = uVar14 + 4;
                pfVar19 = pfVar19 + 4;
                puVar16 = puVar16 + 2;
              } while ((long)uVar14 < lVar20);
            }
            if (lVar20 < (long)uStack_b8) {
              lVar20 = uVar9 - (uVar18 & 0xfffffffffffffffc);
              pfVar19 = (float *)((long)puStack_c0 +
                                 ((long)uVar18 >> 2) * 0x10 + uVar31 * 4 + uStack_b8 * lVar12);
              pfVar21 = pfVar13 + uVar31 + ((long)uVar18 >> 2) * 4;
              do {
                *pfVar19 = fVar35 * *pfVar21;
                lVar20 = lVar20 + -1;
                pfVar19 = pfVar19 + 1;
                pfVar21 = pfVar21 + 1;
              } while (lVar20 != 0);
            }
            uVar27 = uVar27 + 1;
            lVar12 = lVar12 + 4;
          } while (uVar27 != uStack_b0);
        }
      }
      if (0 < (long)pfStack_a0) {
        pfVar19 = (float *)0x0;
        puVar26 = puStack_a8;
        puVar22 = puStack_c0;
        do {
          puVar23 = puVar26;
          puVar24 = puVar22;
          pfVar21 = pfStack_98;
          if (0 < (long)pfStack_98) {
            do {
              *puVar23 = *puVar24;
              puVar24 = puVar24 + uStack_b8;
              pfVar21 = (float *)((long)pfVar21 + -1);
              puVar23 = puVar23 + 1;
            } while (pfVar21 != (float *)0x0);
          }
          pfVar19 = (float *)((long)pfVar19 + 1);
          puVar22 = puVar22 + 1;
          puVar26 = puVar26 + (long)pfStack_98;
        } while (pfVar19 != pfStack_a0);
      }
      _free();
      _free(lVar17);
      _free(pfVar13);
      goto LAB_10954bb64;
    }
    lVar20 = 0;
    if (uVar31 != 0) {
      lVar20 = 0x7fffffffffffffff / (long)uVar31;
    }
    if ((long)uVar27 <= lVar20) goto LAB_10954b7e4;
  }
  else {
    if ((*(byte *)(uVar27 + 0x20) & 1) == 0) goto LAB_10954b5fc;
LAB_10954bb64:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
      return param_1;
    }
    ___stack_chk_fail();
  }
LAB_10954bbcc:
  ___cxa_allocate_exception(8);
  __ZNSt9bad_allocC1Ev();
  ___cxa_throw();
LAB_10954bc10:
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x10954bc14);
  (*pcVar10)();
}



/* Entry: 10954bcac; end: 10954bdaf;  */

void FUN_10954bcac(undefined8 param_1,long param_2)

{
  double dVar1;
  undefined4 uStack_30;
  int iStack_2c;
  int iStack_28;
  undefined1 uStack_21;
  
  dVar1 = (double)*(int *)(param_2 + 0x58);
  _log2();
  iStack_28 = (int)dVar1;
  dVar1 = (double)*(int *)(param_2 + 0x5c);
  _log2();
  iStack_2c = (int)dVar1;
  if (*(int *)(param_2 + 0x50) == 1) {
    uStack_30 = 1;
  }
  else {
    if (*(int *)(param_2 + 0x50) != 0) {
      uStack_30 = 2;
      FUN_109553d7c(param_1,&uStack_21,&uStack_30,&iStack_28,&iStack_2c);
      return;
    }
    uStack_30 = 0;
  }
  FUN_109553c90(param_1,&uStack_21,&uStack_30);
  return;
}



/* Entry: 10954bdb0; end: 10954be37;  */

bool FUN_10954bdb0(float param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10954be38(param_3,param_4);
  if (1.0 <= param_1) {
    *(undefined8 *)(param_2 + 0x1dc) = 0x3f80000000000000;
    func_0x00010954be80(param_2,param_4);
    FUN_10954bed8(param_2);
    FUN_10954bf40(0x3f800000,param_2,param_3);
  }
  return 1.0 <= param_1;
}



/* Entry: 10954be38; end: 10954bed7;  */

float FUN_10954be38(long param_1,long param_2)

{
  float fVar1;
  undefined8 uVar2;
  ulong uVar3;
  float fVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  undefined8 uVar8;
  
  uVar2 = NEON_scvtf(CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) + -1,
                              (int)*(undefined8 *)(param_1 + 8) + -1),4);
  uVar3 = NEON_rev64(uVar2,4);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar8 = NEON_scvtf(uVar2,4);
  uVar6 = NEON_scvtf(CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20) +
                              (int)((ulong)uVar2 >> 0x20),
                              (int)*(undefined8 *)(param_2 + 0x18) + (int)uVar2),4);
  uVar3 = uVar3 ^ (uVar3 ^ uVar6) &
                  CONCAT44(-(uint)((float)(uVar6 >> 0x20) < (float)(uVar3 >> 0x20)),
                           -(uint)((float)uVar6 < (float)uVar3));
  uVar2 = NEON_fmaxnm(uVar8,0,4);
  fVar1 = (float)uVar3 - (float)uVar2;
  fVar4 = (float)(uVar3 >> 0x20) - (float)((ulong)uVar2 >> 0x20);
  iVar5 = -(uint)(fVar1 < 0.0);
  iVar7 = -(uint)(fVar4 < 0.0);
  fVar1 = (float)CONCAT13((byte)((uint)fVar1 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18),
                          CONCAT12((byte)((uint)fVar1 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10),
                                   CONCAT11((byte)((uint)fVar1 >> 8) & ~(byte)((uint)iVar5 >> 8),
                                            SUB41(fVar1,0) & ~(byte)iVar5)));
  return fVar1 * (float)(CONCAT17((byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18),
                                  CONCAT16((byte)((uint)fVar4 >> 0x10) &
                                           ~(byte)((uint)iVar7 >> 0x10),
                                           CONCAT15((byte)((uint)fVar4 >> 8) &
                                                    ~(byte)((uint)iVar7 >> 8),
                                                    CONCAT14(SUB41(fVar4,0) & ~(byte)iVar7,fVar1))))
                        >> 0x20);
}


