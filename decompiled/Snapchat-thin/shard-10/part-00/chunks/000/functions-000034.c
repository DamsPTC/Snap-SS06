/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107386ed4; end: 107386efb;  */

long FUN_107386ed4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107386efc; end: 107386f07;  */

void FUN_107386efc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a7de8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107386f08; end: 107386f1b;  */

void FUN_107386f08(void)

{
  FUN_107386efc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107386f1c; end: 107386f4b;  */

long FUN_107386f1c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN_10735a250(param_1 + 0x148);
  FUN_1073847cc(param_1 + 0x130);
  plVar2 = *(long **)(param_1 + 0x118);
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 3);
    plVar2 = (long *)*plVar2;
    func_0x00010735ce54(lVar1);
    func_0x00010738aac0();
  }
  lVar1 = *(long *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x000107276ba4(param_1 + 0x60);
  FUN_10735eed0(param_1 + 0x30);
  func_0x000107386354(param_1 + 0x20);
  return param_1 + 0x18;
}



/* Entry: 107386f4c; end: 107386f4f;  */

void FUN_107386f4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107386f50; end: 107386fd3;  */

undefined4 *
FUN_107386f50(undefined4 *param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4,
             undefined2 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  uVar1 = *param_3;
  *(undefined8 *)(param_1 + 4) = param_3[1];
  *(undefined8 *)(param_1 + 2) = uVar1;
  *param_3 = 0;
  param_3[1] = 0;
  FUN_10735f468(param_1 + 6,param_4);
  *(undefined2 *)(param_1 + 0xe) = param_5;
  *(undefined8 *)(param_1 + 0x10) = param_6;
  __ZNSt3__119__shared_mutex_baseC1Ev(param_1 + 0x12);
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  param_1[0x44] = 0x3f800000;
  return param_1;
}



/* Entry: 107386fd4; end: 10738703b;  */

long FUN_107386fd4(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x100);
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 3);
    plVar2 = (long *)*plVar2;
    func_0x00010735ce54(lVar1);
    func_0x00010738aac0();
  }
  lVar1 = *(long *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x000107276ba4(param_1 + 0x48);
  FUN_10735eed0(param_1 + 0x18);
  func_0x000107386354(param_1 + 8);
  return param_1;
}



/* Entry: 10738703c; end: 107387067;  */

undefined8 * FUN_10738703c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a7e38;
  func_0x000107382638(param_1 + 2);
  return param_1;
}



/* Entry: 107387068; end: 10738707b;  */

void FUN_107387068(void)

{
  FUN_10738703c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10738707c; end: 10738709b;  */

void FUN_10738707c(undefined8 *param_1)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  undefined8 uVar2;
  
  func_0x00010738a40c();
  *param_1 = &PTR_FUN_1109a7e38;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(unaff_x19 + 8);
  lVar1 = *(long *)(unaff_x19 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x10);
  param_1[3] = *(undefined8 *)(unaff_x19 + 0x18);
  param_1[2] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010738a4c4();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 10738709c; end: 1073870bf;  */

void FUN_10738709c(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_1109a7e38;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010738a4c4();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1073870c0; end: 107387313;  */

void FUN_1073870c0(long param_1)

{
  byte bVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 extraout_x8;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_328 [96];
  undefined4 auStack_2c8 [6];
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 auStack_278 [56];
  undefined1 auStack_240 [24];
  undefined8 *puStack_228;
  undefined1 uStack_208;
  undefined8 uStack_200;
  undefined1 auStack_1f8 [400];
  undefined8 uStack_68;
  
  func_0x00010738a2c0();
  plVar4 = (long *)(param_1 + 0x10);
  bVar1 = *(byte *)(param_1 + 8);
  uVar5 = (ulong)bVar1;
  fVar7 = (float)uVar5;
  uStack_68 = extraout_x8;
  func_0x0001077512dc(fVar7,auStack_1f8);
  fVar8 = **(float **)(*plVar4 + 8);
  auStack_240[0] = 0;
  uStack_208 = 0;
  uStack_200 = 0;
  func_0x0001073837dc(*(float **)(*plVar4 + 8) + 0x2e,auStack_1f8,auStack_240,&UNK_10de5bd9c);
  func_0x00010738aa4c();
  lVar6 = *(long *)(*plVar4 + 8);
  auStack_240[0] = 0;
  uStack_208 = 0;
  uStack_200 = 0;
  func_0x00010738aba4();
  func_0x000100060b18(auStack_2c8);
  func_0x0001072625b4(&uStack_2b0,auStack_2c8);
  FUN_10738380c(auStack_278,lVar6 + 0xf0,auStack_1f8,auStack_240,&uStack_2b0);
  puVar2 = auStack_278;
  FUN_1073873d8(puVar2);
  func_0x000104c2f714(auStack_278);
  func_0x000104c2f714(&uStack_2b0);
  puVar3 = (undefined8 *)auStack_2c8;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
  func_0x00010738aa4c();
  lVar6 = *plVar4;
  auStack_2c8[0] = 0;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  uStack_2a0 = 0;
  func_0x00010738a4ec();
  *puVar3 = &PTR_DAT_1109a7ea8;
  puVar3[1] = lVar6 + 0x48;
  puVar3[2] = plVar4;
  puVar3[3] = auStack_2c8;
  puStack_228 = puVar3;
  FUN_107387470(fVar8 * fVar7,auStack_278,uVar5,&uStack_2b0,lVar6 + 0x118,puVar2,auStack_240);
  FUN_10736c7e8(auStack_328,uVar5 | ((ulong)(bVar1 + 1) & 0xff) << 8,auStack_278,*plVar4 + 0x130);
  func_0x00010735c6e4(auStack_278);
  func_0x000107389964(auStack_240);
  func_0x00010735c6e4(&uStack_2b0);
  FUN_107388318(*(undefined8 *)(*plVar4 + 0x40),auStack_328,auStack_2c8[0]);
  func_0x000107267da8(auStack_1f8);
  func_0x0001001e7b20();
  FUN_107387384();
  func_0x00010735c754(auStack_328);
  func_0x00010738a280(uStack_68);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010738a56c();
  func_0x00010735c754();
  do {
    func_0x00010738a3dc();
  } while( true );
}



/* Entry: 107387314; end: 10738733b;  */

void FUN_107387314(undefined8 param_1)

{
  func_0x00010738a75c();
  func_0x00010738a598(param_1,&PTR_DAT_1109a7fb8);
  func_0x00010738a36c();
  return;
}



/* Entry: 10738733c; end: 107387383;  */

undefined ** FUN_10738733c(void)

{
  return &PTR_DAT_1109a7fb8;
}



/* Entry: 107387384; end: 1073873d7;  */

void FUN_107387384(void)

{
  undefined4 *unaff_x19;
  undefined1 auStack_88 [96];
  undefined2 uStack_28;
  undefined4 uStack_24;
  
  func_0x00010738a56c();
  FUN_10735f3c8();
  uStack_28 = *(undefined2 *)(unaff_x19 + 0xe);
  uStack_24 = *unaff_x19;
  FUN_10735f634(unaff_x19 + 6,auStack_88);
  func_0x00010735c754(auStack_88);
  return;
}



/* Entry: 1073873d8; end: 10738746f;  */

undefined4 FUN_1073873d8(ulong param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = param_1;
  func_0x000107278530(param_1,&DAT_10f40b077,0xf);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x000107278530(param_1,&UNK_10f40b0c6,9);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x000107278530(param_1,&UNK_10f40b0d0,0xd);
      if ((uVar1 & 1) == 0) {
        func_0x000107278530(param_1,&UNK_10f40b0de,0xc);
        uVar2 = 3;
        if ((int)param_1 == 0) {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Entry: 107387470; end: 107388317;  */

void FUN_107387470(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  long *param_5,long *param_6,undefined1 param_7,long param_8)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  ulong **ppuVar14;
  ulong *puVar15;
  long *plVar16;
  ulong *puVar17;
  undefined8 **ppuVar18;
  int *piVar19;
  undefined8 extraout_x8;
  long lVar20;
  long *plVar21;
  undefined8 extraout_x8_00;
  ulong extraout_x8_01;
  undefined8 extraout_x8_02;
  ulong uVar22;
  undefined8 extraout_x9;
  undefined8 extraout_x9_00;
  int extraout_w10;
  long *plVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined4 uVar26;
  ulong uVar27;
  ulong uVar28;
  uint uVar29;
  long *plVar30;
  long lVar31;
  ulong *puVar32;
  ulong *puVar33;
  ulong *puVar34;
  long *unaff_x27;
  float fVar35;
  ulong **ppuVar36;
  double dVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  int aiStack_480 [4];
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined4 uStack_460;
  long alStack_450 [4];
  undefined4 uStack_430;
  int aiStack_420 [2];
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  float fStack_400;
  ulong *puStack_3f0;
  ulong *puStack_3e8;
  undefined8 uStack_3e0;
  long *plStack_3d8;
  long *plStack_3d0;
  undefined8 uStack_3c8;
  ulong uStack_3c0;
  long *plStack_3b8;
  ulong *puStack_3b0;
  long lStack_3a8;
  float fStack_3a0;
  long *plStack_350;
  long *plStack_348;
  long lStack_340;
  long *plStack_338;
  undefined1 uStack_330;
  undefined7 uStack_32f;
  undefined8 *puStack_320;
  ulong *puStack_318;
  ulong *puStack_310;
  long lStack_308;
  float fStack_300;
  long lStack_2f0;
  ulong uStack_2e8;
  undefined8 uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong *puStack_2c8;
  ulong **ppuStack_2c0;
  long **pplStack_2b8;
  undefined4 uStack_2b0;
  undefined1 uStack_2a8;
  long lStack_2a0;
  ulong uStack_298;
  undefined8 uStack_290;
  undefined1 auStack_288 [208];
  undefined1 auStack_1b8 [256];
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined4 uStack_a0;
  undefined8 uStack_98;
  
  uVar40 = (undefined4)((ulong)param_2 >> 0x20);
  fVar38 = (float)param_2;
  func_0x00010738a2c0();
  plStack_350 = (long *)0x0;
  plStack_348 = (long *)0x0;
  lStack_340 = 0;
  uStack_98 = extraout_x8;
  func_0x00010738a534(0x166);
  func_0x00010738a88c(&puStack_2c8,&uStack_3c0);
  func_0x00010738aad0();
  func_0x000107288cd8(&puStack_2c8);
  func_0x00010738aa70();
  uVar26 = (undefined4)param_4;
  func_0x0001072df7b4(auStack_1b8,"z",param_4);
  plStack_3d8 = (long *)0x0;
  plStack_3d0 = (long *)0x0;
  uStack_3c8 = 0;
  puStack_3f0 = (ulong *)0x0;
  puStack_3e8 = (ulong *)0x0;
  uStack_3e0 = 0;
  uStack_3c0 = CONCAT71(uStack_3c0._1_7_,param_7);
  func_0x00010738a3f8();
  FUN_107388494(&plStack_3d8);
  func_0x00010738a3f8();
  ppuVar14 = &puStack_3f0;
  FUN_107388494();
  lVar31 = *param_6;
  lVar24 = param_6[1];
  puStack_2c8 = &uStack_3c0;
  ppuStack_2c0 = &puStack_3f0;
  pplStack_2b8 = &plStack_3d8;
  for (; iVar12 = (int)ppuVar14, lVar31 != lVar24; lVar31 = lVar31 + 0x60) {
    lVar20 = 0x10;
    switch(uStack_3c0 & 0xff) {
    case 0:
      func_0x00010738aaa0();
      lVar20 = 0x10;
      if (iVar12 == 0) {
        lVar20 = 8;
      }
      break;
    case 1:
      func_0x00010738aaa0();
      if (((ulong)ppuVar14 & 1) == 0) {
        lVar20 = 8;
        break;
      }
      goto LAB_1073875c4;
    case 2:
      break;
    case 3:
      func_0x00010738aaa0();
      if (((ulong)ppuVar14 & 1) == 0) {
        FUN_107388510(&puStack_3f0,lVar31);
      }
      lVar20 = 0x10;
      break;
    default:
      goto LAB_1073875c4;
    }
    ppuVar14 = *(ulong ***)((long)&puStack_2c8 + lVar20);
    FUN_107388510(ppuVar14,lVar31);
LAB_1073875c4:
  }
  uStack_418 = 0;
  aiStack_420[0] = 0;
  aiStack_420[1] = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  fStack_400 = 1.0;
  func_0x00010016854c(aiStack_420,(long)(float)(ulong)((param_6[1] - *param_6) / 0x60));
  alStack_450[1] = 0;
  alStack_450[0] = 0;
  alStack_450[3] = 0;
  alStack_450[2] = 0;
  uStack_430 = 0x3f800000;
  func_0x00010738a3f8();
  FUN_1073885d8(alStack_450);
  aiStack_480[2] = 0;
  aiStack_480[3] = 0;
  aiStack_480[0] = 0;
  aiStack_480[1] = 0;
  uStack_468 = 0;
  uStack_470 = 0;
  uStack_460 = 0x3f800000;
  func_0x00010738a3f8();
  FUN_1073885d8(aiStack_480);
  lVar31 = *param_5;
  lVar24 = param_5[1];
  if ((ulong)(lStack_340 - (long)plStack_350) < (ulong)(lVar24 - lVar31)) {
    uVar27 = (lVar24 - lVar31) / 0x78;
    if (0x222222222222222 < uVar27) goto LAB_107388164;
    FUN_10738884c(&puStack_2c8,uVar27,((long)plStack_348 - (long)plStack_350) / 0x78,&lStack_340);
    FUN_10738877c(&plStack_350,&puStack_2c8);
    func_0x000107388898(&puStack_2c8);
    lVar31 = *param_5;
    lVar24 = param_5[1];
  }
  iVar12 = 0;
  for (; uVar8 = lVar31 - lVar24 < 0, lVar31 != lVar24; lVar31 = lVar31 + 0x78) {
    FUN_107388aec(&plStack_350,lVar31);
    iVar13 = (int)lVar31 + 0x40;
    func_0x000104c2d614();
    if (iVar13 == 0) {
      func_0x00010724ef84(&puStack_2c8,lVar31 + 0x40);
      piVar19 = aiStack_420;
      FUN_1073888e0(piVar19,&puStack_2c8);
      *piVar19 = iVar12;
      func_0x00010738a740();
    }
    else {
      lVar2 = *(long *)(lVar31 + 0x30);
      for (lVar20 = *(long *)(lVar31 + 0x28); lVar20 != lVar2; lVar20 = lVar20 + 0x20) {
        piVar19 = aiStack_480;
        FUN_107388bcc(piVar19,lVar20);
        *piVar19 = iVar12;
      }
    }
    iVar12 = iVar12 + 1;
  }
  plStack_3b8 = (long *)0x0;
  uStack_3c0 = 0;
  lStack_3a8 = 0;
  puStack_3b0 = (ulong *)0x0;
  fStack_3a0 = fStack_400;
  puVar33 = &uStack_3c0;
  func_0x00010016854c(&uStack_3c0,uStack_418);
  puVar25 = &uStack_410;
LAB_107387744:
  puVar15 = puStack_3e8;
  puVar25 = (undefined8 *)*puVar25;
  if (puVar25 != (undefined8 *)0x0) {
    plVar23 = &lStack_3a8;
    func_0x000100102e7c(plVar23,puVar25 + 2);
    plVar16 = plStack_3b8;
    if (plStack_3b8 != (long *)0x0) {
      uVar27 = (long)plStack_3b8 - 1;
      if (((ulong)plStack_3b8 & uVar27) == 0) {
        unaff_x27 = (long *)(uVar27 & (ulong)plVar23);
        uVar8 = false;
      }
      else {
        uVar8 = (long)plVar23 - (long)plStack_3b8 < 0;
        unaff_x27 = plVar23;
        if (plStack_3b8 <= plVar23) {
          uVar28 = 0;
          if (plStack_3b8 != (long *)0x0) {
            uVar28 = (ulong)plVar23 / (ulong)plStack_3b8;
          }
          unaff_x27 = (long *)((long)plVar23 - uVar28 * (long)plStack_3b8);
        }
      }
      plVar30 = *(long **)(uStack_3c0 + (long)unaff_x27 * 8);
      if (plVar30 != (long *)0x0) {
        do {
          while( true ) {
            plVar30 = (long *)*plVar30;
            if (plVar30 == (long *)0x0) goto LAB_1073877e8;
            plVar21 = (long *)plVar30[1];
            uVar8 = (long)plVar21 - (long)plVar23 < 0;
            if (plVar21 != plVar23) break;
            uVar28 = (ulong)(plVar30 + 2);
            func_0x0001000e107c(uVar28,puVar25 + 2);
            if ((uVar28 & 1) != 0) goto LAB_107387744;
          }
          if (((ulong)plVar16 & uVar27) == 0) {
            plVar21 = (long *)((ulong)plVar21 & uVar27);
          }
          else if (plVar16 <= plVar21) {
            uVar28 = 0;
            if (plVar16 != (long *)0x0) {
              uVar28 = (ulong)plVar21 / (ulong)plVar16;
            }
            plVar21 = (long *)((long)plVar21 - uVar28 * (long)plVar16);
          }
          uVar8 = (long)plVar21 - (long)unaff_x27 < 0;
        } while (plVar21 == unaff_x27);
      }
    }
LAB_1073877e8:
    puVar15 = (ulong *)0x30;
    __Znwm();
    pplStack_2b8 = (long **)0x0;
    *puVar15 = 0;
    puVar15[1] = (ulong)plVar23;
    puStack_2c8 = puVar15;
    ppuStack_2c0 = &puStack_3b0;
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
              (puVar15 + 2,puVar25 + 2);
    *(undefined4 *)(puVar15 + 5) = *(undefined4 *)(puVar25 + 5);
    pplStack_2b8 = (long **)CONCAT71(pplStack_2b8._1_7_,1);
    uVar40 = 0;
    fVar38 = fStack_3a0;
    if (plVar16 == (long *)0x0) {
LAB_107387834:
      bVar7 = (long *)0x2 < plVar16;
      bVar11 = plVar16 == (long *)0x3;
      func_0x00010738a348((long)plVar16 << 1);
      uVar1 = extraout_x8_00;
      if (!bVar7 || bVar11) {
        uVar1 = extraout_x9;
      }
      func_0x00010016854c(&uStack_3c0,uVar1);
      plVar16 = plStack_3b8;
      if (((ulong)plStack_3b8 & (long)plStack_3b8 - 1U) == 0) {
        bVar11 = false;
        unaff_x27 = (long *)((long)plStack_3b8 - 1U & (ulong)plVar23);
      }
      else {
        bVar11 = (long)plVar23 - (long)plStack_3b8 < 0;
        unaff_x27 = plVar23;
        if (plStack_3b8 <= plVar23) {
          uVar27 = 0;
          if (plStack_3b8 != (long *)0x0) {
            uVar27 = (ulong)plVar23 / (ulong)plStack_3b8;
          }
          unaff_x27 = (long *)((long)plVar23 - uVar27 * (long)plStack_3b8);
        }
      }
    }
    else {
      func_0x00010738a860((float)(lStack_3a8 + 1),fStack_3a0,(float)plVar16);
      bVar11 = false;
      if ((bool)uVar8) goto LAB_107387834;
    }
    uVar8 = bVar11;
    puVar15 = *(ulong **)(uStack_3c0 + (long)unaff_x27 * 8);
    if (puVar15 == (ulong *)0x0) {
      *puStack_2c8 = (ulong)puStack_3b0;
      puStack_3b0 = puStack_2c8;
      *(ulong ***)(uStack_3c0 + (long)unaff_x27 * 8) = &puStack_3b0;
      if (*puStack_2c8 != 0) {
        plVar23 = *(long **)(*puStack_2c8 + 8);
        if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
          plVar23 = (long *)((ulong)plVar23 & (long)plVar16 - 1U);
          uVar8 = false;
        }
        else {
          uVar8 = (long)plVar23 - (long)plVar16 < 0;
          if (plVar16 <= plVar23) {
            uVar27 = 0;
            if (plVar16 != (long *)0x0) {
              uVar27 = (ulong)plVar23 / (ulong)plVar16;
            }
            plVar23 = (long *)((long)plVar23 - uVar27 * (long)plVar16);
          }
        }
        *(ulong **)(uStack_3c0 + (long)plVar23 * 8) = puStack_2c8;
      }
    }
    else {
      *puStack_2c8 = *puVar15;
      *puVar15 = (ulong)puStack_2c8;
    }
    puStack_2c8 = (ulong *)0x0;
    lStack_3a8 = lStack_3a8 + 1;
    func_0x000100168724(&puStack_2c8);
    goto LAB_107387744;
  }
  puVar32 = puStack_3f0;
  while( true ) {
    uVar9 = (long)puVar32 - (long)puVar15 < 0;
    uVar8 = puVar32 == puVar15;
    if ((bool)uVar8) break;
    func_0x00010738a748();
    plVar23 = plStack_3b8;
    puVar33 = (ulong *)0x0;
    if ((plStack_3b8 != (long *)0x0) && (lStack_3a8 != 0)) {
      plVar16 = &lStack_3a8;
      func_0x000100102e7c(plVar16,&puStack_2c8);
      uVar27 = (long)plVar23 - 1;
      if (((ulong)plVar23 & uVar27) == 0) {
        plVar30 = (long *)((ulong)plVar16 & uVar27);
      }
      else {
        plVar30 = plVar16;
        if (plVar23 <= plVar16) {
          uVar28 = 0;
          if (plVar23 != (long *)0x0) {
            uVar28 = (ulong)plVar16 / (ulong)plVar23;
          }
          plVar30 = (long *)((long)plVar16 - uVar28 * (long)plVar23);
        }
      }
      puVar34 = *(ulong **)(uStack_3c0 + (long)plVar30 * 8);
      puVar33 = (ulong *)0x0;
      if (puVar34 != (ulong *)0x0) {
        do {
          while( true ) {
            puVar33 = (ulong *)*puVar34;
            if (puVar33 == (ulong *)0x0) goto LAB_1073879e4;
            plVar21 = (long *)puVar33[1];
            puVar34 = puVar33;
            if (plVar21 != plVar16) break;
            puVar17 = puVar33 + 2;
            func_0x0001000e107c(puVar17,&puStack_2c8);
            if ((int)puVar17 != 0) goto LAB_1073879e4;
          }
          if (((ulong)plVar23 & uVar27) == 0) {
            plVar21 = (long *)((ulong)plVar21 & uVar27);
          }
          else if (plVar23 <= plVar21) {
            uVar28 = 0;
            if (plVar23 != (long *)0x0) {
              uVar28 = (ulong)plVar21 / (ulong)plVar23;
            }
            plVar21 = (long *)((long)plVar21 - uVar28 * (long)plVar23);
          }
        } while (plVar21 == plVar30);
        puVar33 = (ulong *)0x0;
      }
    }
LAB_1073879e4:
    func_0x00010738a740();
    if (puVar33 == (ulong *)0x0) {
      puStack_2c8 = (ulong *)0x0;
      ppuStack_2c0 = (ulong **)0x0;
      uStack_b8 = puVar32[2];
      uStack_a8 = puVar32[1];
      uStack_b0 = *puVar32;
      if (puVar32[1] != 0) {
        do {
          func_0x00010738a4c4();
        } while (extraout_w10 != 0);
      }
      uStack_a0 = (undefined4)puVar32[0xb];
      uStack_2e8 = 0;
      uStack_2e0 = 0;
      lStack_2f0 = 0;
      plStack_338 = &lStack_2f0;
      uStack_330 = 0;
      FUN_10735c004(&lStack_2f0,1);
      uStack_2d8 = uStack_2e8;
      puStack_318 = &uStack_2d8;
      puStack_310 = &uStack_2d0;
      uVar27 = uStack_2e8;
      puStack_320 = &uStack_2e0;
      for (lVar31 = 0; uStack_2d0 = uVar27, lVar31 != 0x20; lVar31 = lVar31 + 0x20) {
        FUN_10735c118(uVar27,(long)&uStack_b8 + lVar31);
        uVar27 = uStack_2d0 + 0x20;
      }
      lStack_308 = CONCAT71(lStack_308._1_7_,1);
      FUN_10735c150(&puStack_320);
      uStack_330 = 1;
      uStack_2e8 = uVar27;
      func_0x00010735c1c0(&plStack_338);
      pplStack_2b8 = (long **)((ulong)pplStack_2b8 & 0xffffffffffffff00);
      uStack_2a8 = 0;
      uStack_298 = uStack_2e8;
      lStack_2a0 = lStack_2f0;
      uStack_290 = uStack_2e0;
      lStack_2f0 = 0;
      uStack_2e8 = 0;
      uStack_2e0 = 0;
      func_0x000104c2fe00(auStack_288,puVar32 + 3);
      func_0x00010738aa94();
      FUN_10735a18c(&puStack_2c8);
      plVar23 = &lStack_2f0;
      func_0x00010735a1b8();
      func_0x00010738a990();
      plVar30 = plStack_348;
      plVar16 = plStack_350;
      func_0x00010738a748();
      func_0x00010738aa78();
      *(int *)plVar23 = (int)(((long)plVar30 - (long)plVar16) / 0x78) + -1;
      func_0x00010738a740();
    }
    else {
      puStack_2c8 = (ulong *)0x0;
      ppuStack_2c0 = (ulong **)0x0;
      FUN_10736b46c(plStack_350 + (ulong)(uint)puVar33[5] * 0xf,&puStack_2c8);
      func_0x00010738a8a4();
      uVar27 = puVar33[5];
      puStack_2c8 = (ulong *)puVar32[2];
      pplStack_2b8 = (long **)puVar32[1];
      ppuStack_2c0 = (ulong **)*puVar32;
      if (puVar32[1] != 0) {
        plVar23 = (long *)(puVar32[1] + 0x10);
        do {
          cVar4 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar23,0x10);
          if (bVar11) {
            *plVar23 = *plVar23 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      uStack_2b0 = (undefined4)puVar32[0xb];
      func_0x00010738aa38(plStack_350 + (ulong)(uint)uVar27 * 0xf);
      func_0x000107358a58(&ppuStack_2c0);
      uVar27 = puVar33[5];
      plVar23 = alStack_450;
      FUN_107388bcc(plVar23,puVar32 + 2);
      *(int *)plVar23 = (int)uVar27;
    }
    func_0x00010738a748();
    func_0x00010738aa78();
    lVar31 = *plVar23;
    plVar23 = alStack_450;
    FUN_107388bcc(plVar23,puVar32 + 2);
    *(int *)plVar23 = (int)lVar31;
    func_0x00010738a740();
    puVar32 = puVar32 + 0xc;
  }
  func_0x00010726e3b0(&uStack_3c0);
  plStack_3b8 = (long *)0x0;
  uStack_3c0 = 0;
  lStack_3a8 = 0;
  puStack_3b0 = (ulong *)0x0;
  fStack_3a0 = 1.0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  FUN_107388e3c(&uStack_b8,
                ((long)plStack_348 - (long)plStack_350) / 0x78 +
                ((long)plStack_3d0 - (long)plStack_3d8) / 0x60);
  lStack_2f0 = 0;
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  puVar25 = &uStack_470;
  puStack_318 = (ulong *)0x0;
  puStack_320 = (undefined8 *)0x0;
  lStack_308 = 0;
  puStack_310 = (ulong *)0x0;
  fStack_300 = 1.0;
  ppuVar14 = (ulong **)0x0;
  while (plVar23 = plStack_3d0, puVar25 = (undefined8 *)*puVar25, puVar25 != (undefined8 *)0x0) {
    puStack_2c8 = (ulong *)(ulong)*(uint *)(puVar25 + 3);
    ppuVar18 = &puStack_320;
    FUN_107388eb4(ppuVar18,&puStack_2c8);
    puVar15 = puStack_318;
    if (((ulong)ppuVar18 & 1) == 0) {
      uVar3 = *(uint *)(puVar25 + 3);
      puVar32 = (ulong *)(ulong)uVar3;
      if (puStack_318 != (ulong *)0x0) {
        func_0x00010738ab5c();
        uVar29 = (uint)puVar15;
        if ((bool)uVar8) {
          puVar33 = (ulong *)(ulong)(uVar29 - 1 & uVar3);
          uVar8 = true;
        }
        else {
          uVar9 = (long)puVar15 - (long)puVar32 < 0;
          uVar8 = puVar15 == puVar32;
          puVar33 = puVar32;
          if (puVar15 <= puVar32) {
            uVar5 = 0;
            if (uVar29 != 0) {
              uVar5 = uVar3 / uVar29;
            }
            puVar33 = (ulong *)(ulong)(uVar3 - uVar5 * uVar29);
          }
        }
        plVar23 = (long *)puStack_320[(long)puVar33];
        if (plVar23 != (long *)0x0) {
          do {
            while( true ) {
              plVar23 = (long *)*plVar23;
              if (plVar23 == (long *)0x0) goto LAB_107387ce0;
              puVar34 = (ulong *)plVar23[1];
              if (puVar34 != puVar32) break;
              uVar9 = plVar23[2] - (long)puVar32 < 0;
              uVar8 = (ulong *)plVar23[2] == puVar32;
              if ((bool)uVar8) goto LAB_107387df0;
            }
            if (((ulong)puVar15 & extraout_x8_01) == 0) {
              puVar34 = (ulong *)((ulong)puVar34 & extraout_x8_01);
            }
            else if (puVar15 <= puVar34) {
              uVar27 = 0;
              if (puVar15 != (ulong *)0x0) {
                uVar27 = (ulong)puVar34 / (ulong)puVar15;
              }
              puVar34 = (ulong *)((long)puVar34 - uVar27 * (long)puVar15);
            }
            uVar9 = (long)puVar34 - (long)puVar33 < 0;
            uVar8 = puVar34 == puVar33;
          } while ((bool)uVar8);
        }
      }
LAB_107387ce0:
      puVar34 = (ulong *)0x18;
      __Znwm();
      pplStack_2b8 = (long **)0x1;
      *puVar34 = 0;
      puVar34[1] = (ulong)puVar32;
      puVar34[2] = (ulong)puVar32;
      ppuVar14 = (ulong **)(ulong)(uint)(float)(lStack_308 + 1);
      uVar40 = 0;
      fVar38 = fStack_300;
      puStack_2c8 = puVar34;
      ppuStack_2c0 = &puStack_310;
      if (puVar15 == (ulong *)0x0) {
LAB_107387d18:
        bVar11 = (ulong *)0x2 < puVar15;
        uVar10 = (long)puVar15 + -3 < 0;
        uVar8 = puVar15 == (ulong *)0x3;
        func_0x00010738a348((long)puVar15 << 1);
        uVar1 = extraout_x8_02;
        if (!bVar11 || (bool)uVar8) {
          uVar1 = extraout_x9_00;
        }
        func_0x0001072a8578(&puStack_320,uVar1);
        puVar15 = puStack_318;
        func_0x00010738ab5c();
        if ((bool)uVar8) {
          uVar8 = 1;
          puVar33 = (ulong *)(ulong)((int)puVar15 - 1U & uVar3);
        }
        else {
          uVar10 = (long)puVar15 - (long)puVar32 < 0;
          uVar8 = puVar15 == puVar32;
          puVar33 = puVar32;
          if (puVar15 <= puVar32) {
            uVar27 = 0;
            if (puVar15 != (ulong *)0x0) {
              uVar27 = (ulong)puVar32 / (ulong)puVar15;
            }
            puVar33 = (ulong *)((long)puVar32 - uVar27 * (long)puVar15);
          }
        }
      }
      else {
        func_0x00010738a860(ppuVar14,fStack_300,(float)puVar15);
        uVar10 = 0;
        if ((bool)uVar9) goto LAB_107387d18;
      }
      puVar32 = (ulong *)puStack_320[(long)puVar33];
      if (puVar32 == (ulong *)0x0) {
        *puStack_2c8 = (ulong)puStack_310;
        puStack_310 = puStack_2c8;
        puStack_320[(long)puVar33] = &puStack_310;
        if (*puStack_2c8 != 0) {
          puVar32 = *(ulong **)(*puStack_2c8 + 8);
          if (((ulong)puVar15 & (long)puVar15 - 1U) == 0) {
            puVar32 = (ulong *)((ulong)puVar32 & (long)puVar15 - 1U);
            uVar8 = true;
            uVar10 = false;
          }
          else {
            uVar10 = (long)puVar32 - (long)puVar15 < 0;
            uVar8 = puVar32 == puVar15;
            if (puVar15 <= puVar32) {
              uVar27 = 0;
              if (puVar15 != (ulong *)0x0) {
                uVar27 = (ulong)puVar32 / (ulong)puVar15;
              }
              puVar32 = (ulong *)((long)puVar32 - uVar27 * (long)puVar15);
            }
          }
          puStack_320[(long)puVar32] = puStack_2c8;
        }
      }
      else {
        *puStack_2c8 = *puVar32;
        *puVar32 = (ulong)puStack_2c8;
      }
      puStack_2c8 = (ulong *)0x0;
      lStack_308 = lStack_308 + 1;
      func_0x0001072a86d0(&puStack_2c8);
      puVar32 = (ulong *)(ulong)*(uint *)(puVar25 + 3);
      uVar9 = uVar10;
LAB_107387df0:
      puStack_2c8 = puVar32;
      func_0x0001057f9264(&lStack_2f0,&puStack_2c8);
      FUN_10736c0f0(plStack_350 + (ulong)*(uint *)(puVar25 + 3) * 0xf + 2);
      dVar37 = (double)CONCAT44(uVar40,fVar38);
      puStack_2c8 = (ulong *)CONCAT44(puStack_2c8._4_4_,6);
      pplStack_2b8 = (long **)CONCAT44(uVar40,fVar38);
      ppuStack_2c0 = ppuVar14;
      func_0x000107383898(&puStack_2c8);
      ppuVar36 = ppuVar14;
      fVar39 = fVar38;
      FUN_10738904c(&uStack_3c0,(int)dVar37,uVar26);
      fVar35 = SUB84(ppuVar36,0);
      func_0x000104c3365c(&puStack_2c8);
      FUN_107388ed0(&uStack_b8,CONCAT44(fVar38 / fVar35,SUB84(ppuVar14,0) / fVar35));
      ppuVar14 = ppuVar36;
      fVar38 = fVar39;
    }
  }
  uVar27 = (long)(uStack_2e8 - lStack_2f0) >> 3;
  for (plVar16 = plStack_3d8; plVar16 != plVar23; plVar16 = plVar16 + 0xc) {
    lVar31 = *plVar16;
    FUN_10736cc38();
    dVar37 = *(double *)(lVar31 + 8);
    FUN_10738904c(&uStack_3c0,(int)dVar37,uVar26);
    FUN_107388ed0(&uStack_b8,
                  CONCAT44(*(float *)((long)plVar16 + 0x54) / SUB84(dVar37,0),
                           *(float *)(plVar16 + 10) / SUB84(dVar37,0)));
  }
  FUN_10737f4b8(&plStack_338,param_1,uStack_b8,(long)(uStack_b0 - uStack_b8) >> 3);
  plVar16 = (long *)CONCAT71(uStack_32f,uStack_330);
  for (plVar23 = plStack_338; plVar23 != plVar16; plVar23 = plVar23 + 3) {
    uStack_2a8 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    lStack_2a0 = 0;
    puStack_2c8 = (ulong *)0x0;
    ppuStack_2c0 = (ulong **)0x0;
    pplStack_2b8 = (long **)((ulong)pplStack_2b8 & 0xffffffffffffff00);
    func_0x000104c2fe00(auStack_288,0x1138369c0);
    func_0x00010738aa94();
    FUN_10735a18c(&puStack_2c8);
    uVar28 = ((long)plStack_348 - (long)plStack_350) / 0x78 - 1;
    puVar15 = (ulong *)plVar23[1];
    for (puVar33 = (ulong *)*plVar23; puVar33 != puVar15; puVar33 = puVar33 + 1) {
      uVar22 = *puVar33;
      if (uVar22 < uVar27) {
        uVar28 = *(ulong *)(lStack_2f0 + uVar22 * 8);
        func_0x00010738a830();
      }
      else {
        plVar30 = plStack_3d8 + (uVar22 - uVar27) * 0xc;
        piVar19 = aiStack_480;
        FUN_10736beac(piVar19,plVar30 + 2);
        if (piVar19 == (int *)0x0) {
          puStack_2c8 = (ulong *)0x0;
          ppuStack_2c0 = (ulong **)0x0;
          FUN_10736b46c(plStack_350 + ((uVar28 & 0xffffffff) * 0x10 - (uVar28 & 0xffffffff)),
                        &puStack_2c8);
          func_0x00010738a8a4();
          puStack_2c8 = (ulong *)plVar30[2];
          pplStack_2b8 = (long **)plVar30[1];
          ppuStack_2c0 = (ulong **)*plVar30;
          if (plVar30[1] != 0) {
            plVar21 = (long *)(plVar30[1] + 0x10);
            do {
              cVar4 = '\x01';
              bVar11 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar11) {
                *plVar21 = *plVar21 + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          }
          uStack_2b0 = (undefined4)plVar30[0xb];
          func_0x00010738aa38(plStack_350 + ((uVar28 & 0xffffffff) * 0x10 - (uVar28 & 0xffffffff)));
          func_0x000107358a58(&ppuStack_2c0);
          piVar19 = aiStack_480;
          FUN_107388bcc(piVar19,plVar30 + 2);
          *piVar19 = (int)uVar28;
        }
        else {
          uVar28 = (ulong)(uint)piVar19[6];
          func_0x00010738a830();
        }
      }
    }
  }
  func_0x00010737fe64(&plStack_338);
  func_0x0001072a8888(&puStack_320);
  func_0x0001057f951c(&lStack_2f0);
  func_0x0001072a7938(&uStack_b8);
  FUN_1073894c8(&uStack_3c0);
  FUN_10736b4ac(alStack_450,aiStack_480,&plStack_350);
  func_0x00010738950c(aiStack_480);
  func_0x00010738950c(alStack_450);
  func_0x00010726e3b0(aiStack_420);
  FUN_1073847cc(&puStack_3f0);
  FUN_1073847cc(&plStack_3d8);
  func_0x00010738aac8();
  func_0x00010738a534(0x167);
  func_0x00010738a88c(&puStack_2c8,&uStack_3c0);
  func_0x00010738aad0();
  func_0x000107288cd8(&puStack_2c8);
  func_0x00010738aa70();
  func_0x0001072df7b4(auStack_1b8,"z",uVar26);
  plVar16 = plStack_348;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  for (plVar23 = plStack_350; uVar8 = plVar23 == plVar16, !(bool)uVar8; plVar23 = plVar23 + 0xf) {
    if (*plVar23 == 0) {
      if (0x20 < (ulong)(plVar23[6] - plVar23[5])) {
        plVar30 = *(long **)(param_8 + 0x18);
        if (plVar30 == (long *)0x0) {
          func_0x000104bfeb48();
          goto LAB_107388168;
        }
        (**(code **)(*plVar30 + 0x30))(&puStack_2c8,plVar30,plVar23 + 2);
        FUN_10736b46c(plVar23,&puStack_2c8);
        func_0x00010738a8a4();
        if (*plVar23 != 0) goto LAB_1073880d8;
      }
    }
    else {
LAB_1073880d8:
      FUN_107388dc8(param_3,plVar23);
    }
  }
  func_0x00010738aac8();
  func_0x00010735c6e4(&plStack_350);
  func_0x00010738a280(uStack_98);
  if ((bool)uVar8) {
    return;
  }
  ___stack_chk_fail();
LAB_107388164:
  FUN_10735be24();
LAB_107388168:
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10738816c);
  (*pcVar6)();
}



/* Entry: 107388318; end: 107388493;  */

void FUN_107388318(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  long lVar2;
  undefined1 auStack_118 [8];
  long lStack_110;
  long lStack_108;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 auStack_d0 [2];
  undefined4 uStack_c8;
  undefined4 auStack_c0 [6];
  undefined4 uStack_a8;
  undefined **ppuStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_78;
  undefined1 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  FUN_10736c90c(auStack_118,param_2);
  func_0x00010738a60c(param_1,0x160);
  for (lVar2 = lStack_110; lVar2 != lStack_108; lVar2 = lVar2 + 8) {
    func_0x00010738a60c(param_1,0x162);
  }
  func_0x00010738a60c(param_1,0x163);
  func_0x00010738a60c(param_1,0x164);
  func_0x00010738a60c(param_1,0x165);
  func_0x00010738a60c(param_1,0x161);
  auStack_c0[0] = 0x161;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  ppuStack_a0 = &PTR_DAT_110996720;
  uStack_98 = 0;
  uStack_80 = 0x161;
  uStack_78 = 0;
  uStack_74 = 1;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  puVar1 = auStack_c0;
  func_0x0001072df7b4(puVar1,&DAT_10f34b835,auStack_118[0]);
  uStack_c8 = 1;
  uStack_e0 = *param_1;
  uStack_d8 = 3;
  auStack_d0[0] = param_3;
  FUN_10743fa9c(param_1,puVar1,auStack_d0,&uStack_e0,7);
  func_0x000107262330(auStack_c0);
  func_0x0001057f951c(&lStack_110);
  return;
}



/* Entry: 107388494; end: 10738850f;  */

void FUN_107388494(long *param_1,ulong param_2)

{
  ulong uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_48 [40];
  
  if ((ulong)((param_1[2] - *param_1) / 0x60) < param_2) {
    if (0x2aaaaaaaaaaaaaa < param_2) {
      FUN_107383c74();
      func_0x00010738a388();
      uVar1 = *(ulong *)(unaff_x21 + -8);
      if (uVar1 < extraout_x8) {
        FUN_10738857c();
        unaff_x20 = uVar1 + 0x60;
      }
      else {
        func_0x00010738a5b0();
        func_0x00010738a32c();
        FUN_107383c80();
        FUN_10738857c();
        func_0x0001001e7b20();
        FUN_107383bf0();
        func_0x00010738a970();
      }
      *(long *)(unaff_x19 + 8) = unaff_x20;
      return;
    }
    FUN_107383c80(auStack_48,param_2,(param_1[1] - *param_1) / 0x60);
    func_0x0001001e7b20();
    FUN_107383bf0();
    FUN_107383cec(auStack_48);
  }
  return;
}



/* Entry: 107388510; end: 10738857b;  */

void FUN_107388510(void)

{
  ulong uVar1;
  ulong extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010738a388();
  uVar1 = *(ulong *)(unaff_x21 + -8);
  if (uVar1 < extraout_x8) {
    FUN_10738857c();
    unaff_x20 = uVar1 + 0x60;
  }
  else {
    func_0x00010738a5b0();
    func_0x00010738a32c();
    FUN_107383c80();
    FUN_10738857c();
    func_0x0001001e7b20();
    FUN_107383bf0();
    func_0x00010738a970();
  }
  *(long *)(unaff_x19 + 8) = unaff_x20;
  return;
}



/* Entry: 10738857c; end: 1073885d7;  */

void FUN_10738857c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  int extraout_w10;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001001e7a38();
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010738a4c4();
    } while (extraout_w10 != 0);
  }
  *(undefined8 *)(unaff_x19 + 0x10) = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000104c2fe00(unaff_x19 + 0x18,unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined4 *)(unaff_x19 + 0x58) = *(undefined4 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x19 + 0x50) = uVar2;
  return;
}



/* Entry: 1073885d8; end: 1073885eb;  */

void FUN_1073885d8(long *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long *plVar4;
  long *extraout_x9;
  ulong uVar5;
  ulong extraout_x10;
  long *plVar6;
  long *extraout_x11;
  long *plVar7;
  long *plVar8;
  
  plVar3 = (long *)(long)((float)param_2 / *(float *)(param_1 + 4));
  plVar4 = param_1;
  plVar6 = plVar3;
  if ((long)plVar3 - 1U == 0) {
    plVar3 = (long *)0x2;
  }
  else if (((ulong)plVar3 & (long)plVar3 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar4 = plVar3;
  }
  plVar8 = (long *)param_1[1];
  if (plVar8 > plVar3 || plVar3 == plVar8) {
    if (plVar8 <= plVar3) {
      return;
    }
    plVar4 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar8 < (long *)0x3) || (((ulong)plVar8 & (long)plVar8 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010738a3bc();
    }
    if (plVar3 <= plVar4) {
      plVar3 = plVar4;
    }
    if (plVar8 <= plVar3) {
      return;
    }
    if (plVar3 == (long *)0x0) {
      FUN_107388764(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)plVar3 >> 0x3d == 0) {
    lVar2 = (long)plVar3 << 3;
    __Znwm(lVar2);
    FUN_107388764(param_1,lVar2);
    param_1[1] = (long)plVar3;
    lVar2 = *param_1;
    for (plVar4 = (long *)0x0; plVar3 != plVar4; plVar4 = (long *)((long)plVar4 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar4 * 8) = 0;
    }
    plVar4 = (long *)param_1[2];
    if (plVar4 != (long *)0x0) {
      plVar6 = (long *)plVar4[1];
      uVar5 = (long)plVar3 - 1;
      uVar1 = 0;
      if (plVar3 != (long *)0x0) {
        uVar1 = (ulong)plVar6 / (ulong)plVar3;
      }
      plVar8 = plVar6;
      if (plVar3 <= plVar6) {
        plVar8 = (long *)((long)plVar6 - uVar1 * (long)plVar3);
      }
      if (((ulong)plVar3 & uVar5) == 0) {
        plVar8 = (long *)((ulong)plVar6 & uVar5);
      }
      *(long **)(lVar2 + (long)plVar8 * 8) = param_1 + 2;
      while (plVar6 = plVar4, plVar4 = (long *)*plVar6, plVar4 != (long *)0x0) {
        plVar7 = (long *)plVar4[1];
        if (((ulong)plVar3 & uVar5) == 0) {
          plVar7 = (long *)((ulong)plVar7 & uVar5);
        }
        else if (plVar3 <= plVar7) {
          uVar1 = 0;
          if (plVar3 != (long *)0x0) {
            uVar1 = (ulong)plVar7 / (ulong)plVar3;
          }
          plVar7 = (long *)((long)plVar7 - uVar1 * (long)plVar3);
        }
        if (plVar7 != plVar8) {
          if (*(long *)(lVar2 + (long)plVar7 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar7 * 8) = plVar6;
            plVar8 = plVar7;
          }
          else {
            *plVar6 = *plVar4;
            func_0x00010738a44c();
            lVar2 = extraout_x8;
            plVar4 = extraout_x9;
            uVar5 = extraout_x10;
            plVar8 = extraout_x11;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *plVar4;
  *plVar4 = (long)plVar6;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1073885ec; end: 107388763;  */

void FUN_1073885ec(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long extraout_x8;
  long *plVar3;
  long *extraout_x9;
  ulong uVar4;
  ulong extraout_x10;
  long *plVar5;
  long *extraout_x11;
  long *plVar6;
  long *plVar7;
  
  plVar3 = param_1;
  plVar5 = param_2;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar7 = (long *)param_1[1];
  if (plVar7 > param_2 || param_2 == plVar7) {
    if (plVar7 <= param_2) {
      return;
    }
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar7 < (long *)0x3) || (((ulong)plVar7 & (long)plVar7 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010738a3bc();
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (plVar7 <= param_2) {
      return;
    }
    if (param_2 == (long *)0x0) {
      FUN_107388764(param_1,0);
      param_1[1] = 0;
      return;
    }
  }
  if ((ulong)param_2 >> 0x3d == 0) {
    lVar2 = (long)param_2 << 3;
    __Znwm(lVar2);
    FUN_107388764(param_1,lVar2);
    param_1[1] = (long)param_2;
    lVar2 = *param_1;
    for (plVar3 = (long *)0x0; param_2 != plVar3; plVar3 = (long *)((long)plVar3 + 1)) {
      *(undefined8 *)(lVar2 + (long)plVar3 * 8) = 0;
    }
    plVar3 = (long *)param_1[2];
    if (plVar3 != (long *)0x0) {
      plVar5 = (long *)plVar3[1];
      uVar4 = (long)param_2 - 1;
      uVar1 = 0;
      if (param_2 != (long *)0x0) {
        uVar1 = (ulong)plVar5 / (ulong)param_2;
      }
      plVar7 = plVar5;
      if (param_2 <= plVar5) {
        plVar7 = (long *)((long)plVar5 - uVar1 * (long)param_2);
      }
      if (((ulong)param_2 & uVar4) == 0) {
        plVar7 = (long *)((ulong)plVar5 & uVar4);
      }
      *(long **)(lVar2 + (long)plVar7 * 8) = param_1 + 2;
      while (plVar5 = plVar3, plVar3 = (long *)*plVar5, plVar3 != (long *)0x0) {
        plVar6 = (long *)plVar3[1];
        if (((ulong)param_2 & uVar4) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar4);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        if (plVar6 != plVar7) {
          if (*(long *)(lVar2 + (long)plVar6 * 8) == 0) {
            *(long **)(lVar2 + (long)plVar6 * 8) = plVar5;
            plVar7 = plVar6;
          }
          else {
            *plVar5 = *plVar3;
            func_0x00010738a44c();
            lVar2 = extraout_x8;
            plVar3 = extraout_x9;
            uVar4 = extraout_x10;
            plVar7 = extraout_x11;
          }
        }
      }
    }
    return;
  }
  func_0x000104bd35f4();
  lVar2 = *plVar3;
  *plVar3 = (long)plVar5;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107388764; end: 10738877b;  */

void FUN_107388764(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10738877c; end: 10738884b;  */

void FUN_10738877c(long *param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plStack_70;
  long *plStack_68;
  long *plStack_60;
  undefined1 uStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x00010738a440();
  lVar2 = *param_1;
  lVar1 = param_1[1];
  lVar4 = *(long *)(param_2 + 8) + ((lVar1 - lVar2) / -0x78) * 0x78;
  plStack_70 = param_1 + 2;
  plStack_68 = &lStack_50;
  plStack_60 = &lStack_48;
  lStack_48 = lVar4;
  lStack_50 = lVar4;
  for (lVar3 = lVar2; lVar3 != lVar1; lVar3 = lVar3 + 0x78) {
    FUN_10736d598(lStack_48,lVar3);
    lStack_48 = lStack_48 + 0x78;
  }
  uStack_58 = 1;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x78) {
    FUN_10735a18c(lVar2);
  }
  FUN_10735c1e8(&plStack_70);
  *(long *)(unaff_x19 + 8) = lVar4;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010738a2f0();
  return;
}



/* Entry: 10738884c; end: 1073888df;  */

long * FUN_10738884c(long *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  param_1[3] = 0;
  param_1[4] = param_4;
  if (param_2 == 0) {
    param_4 = 0;
  }
  else {
    FUN_10735be30();
  }
  lVar1 = param_4 + param_3 * 0x78;
  *param_1 = param_4;
  param_1[1] = lVar1;
  param_1[2] = lVar1;
  param_1[3] = param_4 + param_2 * 0x78;
  return param_1;
}



/* Entry: 1073888e0; end: 107388aeb;  */

long * FUN_1073888e0(long param_1)

{
  ulong uVar1;
  undefined1 in_NG;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *unaff_x19;
  long *unaff_x21;
  ulong uVar7;
  ulong unaff_x23;
  long *plVar8;
  ulong uVar9;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  func_0x00010738ac0c();
  uVar6 = param_1 + 0x18;
  func_0x000100102e7c();
  uVar7 = unaff_x19[1];
  if (uVar7 != 0) {
    uVar9 = uVar7 - 1;
    if ((uVar7 & uVar9) == 0) {
      unaff_x23 = uVar9 & uVar6;
      in_NG = false;
    }
    else {
      in_NG = (long)(uVar6 - uVar7) < 0;
      unaff_x23 = uVar6;
      if (uVar7 <= uVar6) {
        uVar3 = 0;
        if (uVar7 != 0) {
          uVar3 = uVar6 / uVar7;
        }
        unaff_x23 = uVar6 - uVar3 * uVar7;
      }
    }
    plVar8 = *(long **)(*unaff_x19 + unaff_x23 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_10738899c;
          uVar3 = plVar8[1];
          in_NG = (long)(uVar3 - uVar6) < 0;
          if (uVar3 != uVar6) break;
          plVar2 = plVar8 + 2;
          func_0x0001000e107c();
          if (((ulong)plVar2 & 1) != 0) goto LAB_107388ac0;
        }
        if ((uVar7 & uVar9) == 0) {
          uVar3 = uVar3 & uVar9;
        }
        else if (uVar7 <= uVar3) {
          uVar1 = 0;
          if (uVar7 != 0) {
            uVar1 = uVar3 / uVar7;
          }
          uVar3 = uVar3 - uVar1 * uVar7;
        }
        in_NG = (long)(uVar3 - unaff_x23) < 0;
      } while (uVar3 == unaff_x23);
    }
  }
LAB_10738899c:
  plVar2 = unaff_x19 + 2;
  plVar8 = (long *)0x30;
  __Znwm();
  uStack_58 = 1;
  *plVar8 = 0;
  plVar8[1] = uVar6;
  lVar4 = *unaff_x21;
  plVar8[3] = unaff_x21[1];
  plVar8[2] = lVar4;
  plVar8[4] = unaff_x21[2];
  *unaff_x21 = 0;
  unaff_x21[1] = 0;
  unaff_x21[2] = 0;
  *(undefined4 *)(plVar8 + 5) = 0;
  plStack_68 = plVar8;
  plStack_60 = plVar2;
  func_0x00010738a72c();
  if ((uVar7 == 0) || (func_0x00010738a860(), (bool)in_NG)) {
    func_0x00010738a348(uVar7 << 1);
    func_0x00010016854c();
    uVar7 = unaff_x19[1];
    if ((uVar7 & uVar7 - 1) == 0) {
      unaff_x23 = uVar7 - 1 & uVar6;
    }
    else {
      unaff_x23 = uVar6;
      if (uVar7 <= uVar6) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar6 / uVar7;
        }
        unaff_x23 = uVar6 - uVar9 * uVar7;
      }
    }
  }
  plVar8 = plStack_68;
  lVar4 = *unaff_x19;
  plVar5 = *(long **)(lVar4 + unaff_x23 * 8);
  if (plVar5 == (long *)0x0) {
    *plStack_68 = *plVar2;
    *plVar2 = (long)plStack_68;
    *(long **)(lVar4 + unaff_x23 * 8) = plVar2;
    if (*plStack_68 != 0) {
      uVar6 = *(ulong *)(*plStack_68 + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar6 = uVar6 & uVar7 - 1;
      }
      else if (uVar7 <= uVar6) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar6 / uVar7;
        }
        uVar6 = uVar6 - uVar9 * uVar7;
      }
      *(long **)(lVar4 + uVar6 * 8) = plStack_68;
    }
  }
  else {
    *plStack_68 = *plVar5;
    *plVar5 = (long)plStack_68;
  }
  plStack_68 = (long *)0x0;
  unaff_x19[3] = unaff_x19[3] + 1;
  func_0x000100168724(&plStack_68);
LAB_107388ac0:
  return plVar8 + 5;
}



/* Entry: 107388aec; end: 107388b83;  */

void FUN_107388aec(void)

{
  ulong extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  ulong uVar1;
  
  func_0x00010738a388();
  uVar1 = *(ulong *)(unaff_x21 + -8);
  if (uVar1 < extraout_x8) {
    FUN_10735befc(uVar1);
    unaff_x20 = uVar1 + 0x78;
    unaff_x19[1] = unaff_x20;
  }
  else {
    func_0x00010738a7c0(uVar1 - *unaff_x19);
    func_0x00010738a32c();
    FUN_10738884c();
    FUN_10735befc();
    func_0x0001001e7b20();
    FUN_10738877c();
    func_0x00010738a97c();
  }
  unaff_x19[1] = unaff_x20;
  return;
}



/* Entry: 107388b84; end: 107388bcb;  */

ulong * FUN_107388b84(undefined8 param_1,undefined8 param_2,long *param_3,ulong *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  long lVar8;
  ulong uVar9;
  undefined8 extraout_x9;
  long *plVar10;
  ulong *puVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong unaff_x23;
  
  uVar5 = (long)((long)param_4 + 0xfddddddddddddddeU) < 0;
  if (param_4 < (ulong *)0x222222222222223) {
    uVar13 = (param_3[2] - *param_3) / 0x78;
    puVar11 = (ulong *)(uVar13 * 2);
    if (puVar11 < param_4 || (long)puVar11 - (long)param_4 == 0) {
      puVar11 = param_4;
    }
    if (0x111111111111110 < uVar13) {
      puVar11 = (ulong *)0x222222222222222;
    }
    return puVar11;
  }
  FUN_10735be24();
  uVar14 = *param_4;
  uVar13 = param_3[1];
  if (uVar13 != 0) {
    uVar7 = uVar13 - 1;
    if ((uVar13 & uVar7) == 0) {
      unaff_x23 = uVar7 & uVar14;
      uVar5 = false;
    }
    else {
      uVar5 = (long)(uVar14 - uVar13) < 0;
      unaff_x23 = uVar14;
      if (uVar13 <= uVar14) {
        uVar9 = 0;
        if (uVar13 != 0) {
          uVar9 = uVar14 / uVar13;
        }
        unaff_x23 = uVar14 - uVar9 * uVar13;
      }
    }
    plVar12 = *(long **)(*param_3 + unaff_x23 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_107388c78;
          uVar9 = plVar12[1];
          if (uVar9 != uVar14) break;
          uVar5 = (long)(plVar12[2] - uVar14) < 0;
          if (plVar12[2] == uVar14) goto LAB_107388d74;
        }
        if ((uVar13 & uVar7) == 0) {
          uVar9 = uVar9 & uVar7;
        }
        else if (uVar13 <= uVar9) {
          uVar3 = 0;
          if (uVar13 != 0) {
            uVar3 = uVar9 / uVar13;
          }
          uVar9 = uVar9 - uVar3 * uVar13;
        }
        uVar5 = (long)(uVar9 - unaff_x23) < 0;
      } while (uVar9 == unaff_x23);
    }
  }
LAB_107388c78:
  plVar1 = param_3 + 2;
  plVar12 = param_3;
  func_0x00010738a4ec();
  *plVar12 = 0;
  plVar12[1] = uVar14;
  plVar12[2] = uVar14;
  *(undefined4 *)(plVar12 + 3) = 0;
  func_0x00010738a72c();
  if ((uVar13 == 0) || (func_0x00010738a860(param_1,param_2,(float)uVar13), (bool)uVar5)) {
    bVar4 = 2 < uVar13;
    bVar6 = uVar13 == 3;
    func_0x00010738a348(uVar13 << 1);
    uVar2 = extraout_x8;
    if (!bVar4 || bVar6) {
      uVar2 = extraout_x9;
    }
    FUN_1073885ec(param_3,uVar2);
    uVar13 = param_3[1];
    if ((uVar13 & uVar13 - 1) == 0) {
      unaff_x23 = uVar13 - 1 & uVar14;
    }
    else {
      unaff_x23 = uVar14;
      if (uVar13 <= uVar14) {
        uVar7 = 0;
        if (uVar13 != 0) {
          uVar7 = uVar14 / uVar13;
        }
        unaff_x23 = uVar14 - uVar7 * uVar13;
      }
    }
  }
  lVar8 = *param_3;
  plVar10 = *(long **)(lVar8 + unaff_x23 * 8);
  if (plVar10 == (long *)0x0) {
    *plVar12 = *plVar1;
    *plVar1 = (long)plVar12;
    *(long **)(lVar8 + unaff_x23 * 8) = plVar1;
    if (*plVar12 != 0) {
      uVar14 = *(ulong *)(*plVar12 + 8);
      if ((uVar13 & uVar13 - 1) == 0) {
        uVar14 = uVar14 & uVar13 - 1;
      }
      else if (uVar13 <= uVar14) {
        uVar7 = 0;
        if (uVar13 != 0) {
          uVar7 = uVar14 / uVar13;
        }
        uVar14 = uVar14 - uVar7 * uVar13;
      }
      *(long **)(lVar8 + uVar14 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar10;
    *plVar10 = (long)plVar12;
  }
  func_0x00010738a930();
  FUN_107388d9c();
LAB_107388d74:
  return (ulong *)(plVar12 + 3);
}



/* Entry: 107388bcc; end: 107388d9b;  */

long * FUN_107388bcc(undefined8 param_1,undefined8 param_2,long *param_3,ulong *param_4)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 in_NG;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 extraout_x8;
  long lVar7;
  ulong uVar8;
  undefined8 extraout_x9;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong unaff_x23;
  
  uVar12 = *param_4;
  uVar11 = param_3[1];
  if (uVar11 != 0) {
    uVar6 = uVar11 - 1;
    if ((uVar11 & uVar6) == 0) {
      unaff_x23 = uVar6 & uVar12;
      in_NG = false;
    }
    else {
      in_NG = (long)(uVar12 - uVar11) < 0;
      unaff_x23 = uVar12;
      if (uVar11 <= uVar12) {
        uVar8 = 0;
        if (uVar11 != 0) {
          uVar8 = uVar12 / uVar11;
        }
        unaff_x23 = uVar12 - uVar8 * uVar11;
      }
    }
    plVar10 = *(long **)(*param_3 + unaff_x23 * 8);
    if (plVar10 != (long *)0x0) {
      do {
        while( true ) {
          plVar10 = (long *)*plVar10;
          if (plVar10 == (long *)0x0) goto LAB_107388c78;
          uVar8 = plVar10[1];
          if (uVar8 != uVar12) break;
          in_NG = (long)(plVar10[2] - uVar12) < 0;
          if (plVar10[2] == uVar12) goto LAB_107388d74;
        }
        if ((uVar11 & uVar6) == 0) {
          uVar8 = uVar8 & uVar6;
        }
        else if (uVar11 <= uVar8) {
          uVar3 = 0;
          if (uVar11 != 0) {
            uVar3 = uVar8 / uVar11;
          }
          uVar8 = uVar8 - uVar3 * uVar11;
        }
        in_NG = (long)(uVar8 - unaff_x23) < 0;
      } while (uVar8 == unaff_x23);
    }
  }
LAB_107388c78:
  plVar1 = param_3 + 2;
  plVar10 = param_3;
  func_0x00010738a4ec();
  *plVar10 = 0;
  plVar10[1] = uVar12;
  plVar10[2] = uVar12;
  *(undefined4 *)(plVar10 + 3) = 0;
  func_0x00010738a72c();
  if ((uVar11 == 0) || (func_0x00010738a860(param_1,param_2,(float)uVar11), (bool)in_NG)) {
    bVar4 = 2 < uVar11;
    bVar5 = uVar11 == 3;
    func_0x00010738a348(uVar11 << 1);
    uVar2 = extraout_x8;
    if (!bVar4 || bVar5) {
      uVar2 = extraout_x9;
    }
    FUN_1073885ec(param_3,uVar2);
    uVar11 = param_3[1];
    if ((uVar11 & uVar11 - 1) == 0) {
      unaff_x23 = uVar11 - 1 & uVar12;
    }
    else {
      unaff_x23 = uVar12;
      if (uVar11 <= uVar12) {
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar12 / uVar11;
        }
        unaff_x23 = uVar12 - uVar6 * uVar11;
      }
    }
  }
  lVar7 = *param_3;
  plVar9 = *(long **)(lVar7 + unaff_x23 * 8);
  if (plVar9 == (long *)0x0) {
    *plVar10 = *plVar1;
    *plVar1 = (long)plVar10;
    *(long **)(lVar7 + unaff_x23 * 8) = plVar1;
    if (*plVar10 != 0) {
      uVar12 = *(ulong *)(*plVar10 + 8);
      if ((uVar11 & uVar11 - 1) == 0) {
        uVar12 = uVar12 & uVar11 - 1;
      }
      else if (uVar11 <= uVar12) {
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = uVar12 / uVar11;
        }
        uVar12 = uVar12 - uVar6 * uVar11;
      }
      *(long **)(lVar7 + uVar12 * 8) = plVar10;
    }
  }
  else {
    *plVar10 = *plVar9;
    *plVar9 = (long)plVar10;
  }
  func_0x00010738a930();
  FUN_107388d9c();
LAB_107388d74:
  return plVar10 + 3;
}



/* Entry: 107388d9c; end: 107388dc7;  */

long * FUN_107388d9c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107388dc8; end: 107388e3b;  */

void FUN_107388dc8(void)

{
  ulong uVar1;
  ulong extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010738a388();
  uVar1 = *(ulong *)(unaff_x21 + -8);
  if (uVar1 < extraout_x8) {
    FUN_10736d598();
    unaff_x20 = uVar1 + 0x78;
  }
  else {
    func_0x00010738a7c0(uVar1 - *unaff_x19);
    func_0x00010738a32c();
    FUN_10738884c();
    FUN_10736d598();
    func_0x0001001e7b20();
    FUN_10738877c();
    func_0x00010738a97c();
  }
  unaff_x19[1] = unaff_x20;
  return;
}



/* Entry: 107388e3c; end: 107388eb3;  */

long *** FUN_107388e3c(long *param_1,ulong param_2)

{
  long ***ppplVar1;
  long lVar2;
  long lVar3;
  long **pplStack_48;
  long lStack_40;
  long lStack_38;
  long **pplStack_30;
  long **pplStack_28;
  
  ppplVar1 = (long ***)(param_1 + 2);
  lVar2 = *param_1;
  if ((ulong)((long)*ppplVar1 - lVar2 >> 3) < param_2) {
    if (param_2 >> 0x3d != 0) {
      func_0x0001072a78b4();
      func_0x00010738a56c();
      FUN_107388ffc();
      func_0x00010738a3dc();
      func_0x0001072ac294();
      return (long ***)(ulong)(ppplVar1 != (long ***)0x0);
    }
    lVar3 = param_1[1];
    pplStack_28 = (long **)ppplVar1;
    func_0x0001072a78c0();
    lStack_40 = (long)ppplVar1 + (lVar3 - lVar2);
    pplStack_30 = (long **)(ppplVar1 + param_2);
    pplStack_48 = (long **)ppplVar1;
    lStack_38 = lStack_40;
    func_0x0001001e7b20();
    FUN_107388fb0();
    ppplVar1 = &pplStack_48;
    FUN_107388ffc(ppplVar1);
  }
  return ppplVar1;
}



/* Entry: 107388eb4; end: 107388ecf;  */

bool FUN_107388eb4(long param_1)

{
  func_0x0001072ac294();
  return param_1 != 0;
}



/* Entry: 107388ed0; end: 107388f73;  */

void FUN_107388ed0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *extraout_x8;
  long *unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  long lStack_40;
  
  func_0x00010738a388();
  puVar4 = *(undefined8 **)(unaff_x21 + -8);
  if (puVar4 < extraout_x8) {
    puVar5 = puVar4 + 1;
    *puVar4 = unaff_x20;
  }
  else {
    plVar3 = unaff_x19;
    FUN_107389488();
    lVar1 = *unaff_x19;
    lVar2 = unaff_x19[1];
    lStack_58 = 0;
    if (plVar3 != (long *)0x0) {
      func_0x0001072a78c0();
      lStack_58 = unaff_x21;
    }
    puStack_50 = (undefined8 *)(lStack_58 + (lVar2 - lVar1));
    lStack_40 = lStack_58 + (long)plVar3 * 8;
    puStack_48 = puStack_50 + 1;
    *puStack_50 = unaff_x20;
    func_0x0001001e7b20();
    FUN_107388fb0();
    puVar5 = (undefined8 *)unaff_x19[1];
    FUN_107388ffc(&lStack_58);
  }
  unaff_x19[1] = (long)puVar5;
  return;
}



/* Entry: 107388f74; end: 107388faf;  */

long FUN_107388f74(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)param_1;
  if (*(long *)(*param_4 + param_1 * 0x78) != 0) {
    uVar1 = (undefined4)param_2;
    param_2 = param_1;
  }
  FUN_10736b3b8(uVar1,param_2);
  return param_2;
}



/* Entry: 107388fb0; end: 107388ffb;  */

void FUN_107388fb0(long *param_1,long param_2)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar1;
  
  func_0x00010738a440();
  lVar1 = *(long *)(param_2 + 8) - (param_1[1] - *param_1);
  _memcpy(lVar1);
  *(long *)(unaff_x19 + 8) = lVar1;
  unaff_x20[1] = *unaff_x20;
  *unaff_x20 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010738a2f0();
  return;
}



/* Entry: 107388ffc; end: 107389027;  */

long * FUN_107388ffc(long *param_1)

{
  FUN_107389028();
  if (*param_1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107389028; end: 10738904b;  */

void FUN_107389028(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  while (lVar1 != *(long *)(param_1 + 8)) {
    lVar1 = lVar1 + -8;
    *(long *)(param_1 + 0x10) = lVar1;
  }
  return;
}



/* Entry: 10738904c; end: 107389443;  */

float FUN_10738904c(long *param_1,int param_2,uint param_3)

{
  long *plVar1;
  code *pcVar2;
  undefined1 in_NG;
  undefined1 in_ZR;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  long lVar6;
  ulong uVar7;
  ulong extraout_x8;
  ulong extraout_x8_00;
  long extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar8;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  long *extraout_x10;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  ulong extraout_x11;
  ulong uVar15;
  ulong uVar16;
  ulong unaff_x25;
  double dVar17;
  
  uVar7 = param_1[1];
  uVar16 = (ulong)param_2;
  if ((uVar7 != 0) && (param_1[3] != 0)) {
    uVar8 = uVar7 - 1;
    if ((uVar7 & uVar8) == 0) {
      uVar9 = uVar8 & uVar16;
      in_ZR = true;
      in_NG = false;
    }
    else {
      in_NG = (long)(uVar7 - uVar16) < 0;
      in_ZR = uVar7 == uVar16;
      uVar9 = uVar16;
      if (uVar7 <= uVar16) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar16 / uVar7;
        }
        uVar9 = uVar16 - uVar9 * uVar7;
      }
    }
    plVar12 = *(long **)(*param_1 + uVar9 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_107389108;
          uVar15 = plVar12[1];
          if (uVar15 != uVar16) break;
          in_NG = *(int *)(plVar12 + 2) - param_2 < 0;
          in_ZR = false;
          if (*(int *)(plVar12 + 2) == param_2) {
            return *(float *)((long)plVar12 + 0x14);
          }
        }
        if ((uVar7 & uVar8) == 0) {
          uVar15 = uVar15 & uVar8;
        }
        else if (uVar7 <= uVar15) {
          uVar13 = 0;
          if (uVar7 != 0) {
            uVar13 = uVar15 / uVar7;
          }
          uVar15 = uVar15 - uVar13 * uVar7;
        }
        in_NG = (long)(uVar15 - uVar9) < 0;
        in_ZR = uVar15 == uVar9;
      } while ((bool)in_ZR);
    }
  }
LAB_107389108:
  dVar17 = (double)param_2;
  func_0x000107246334(dVar17,(double)param_3,0,0x4039800000000000);
  uVar7 = param_1[1];
  if (uVar7 != 0) {
    func_0x00010738ab5c();
    if ((bool)in_ZR) {
      unaff_x25 = extraout_x8 & uVar16;
    }
    else {
      in_NG = (long)(uVar7 - uVar16) < 0;
      unaff_x25 = uVar16;
      if (uVar7 <= uVar16) {
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = uVar16 / uVar7;
        }
        unaff_x25 = uVar16 - uVar8 * uVar7;
      }
    }
    plVar12 = *(long **)(*param_1 + unaff_x25 * 8);
    if (plVar12 != (long *)0x0) {
      do {
        while( true ) {
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_1073891ac;
          uVar8 = plVar12[1];
          if (uVar8 != uVar16) break;
          in_NG = (int)plVar12[2] - param_2 < 0;
          if ((int)plVar12[2] == param_2) goto LAB_107389408;
        }
        if ((uVar7 & extraout_x8) == 0) {
          uVar8 = uVar8 & extraout_x8;
        }
        else if (uVar7 <= uVar8) {
          uVar9 = 0;
          if (uVar7 != 0) {
            uVar9 = uVar8 / uVar7;
          }
          uVar8 = uVar8 - uVar9 * uVar7;
        }
        in_NG = (long)(uVar8 - unaff_x25) < 0;
      } while (uVar8 == unaff_x25);
    }
  }
LAB_1073891ac:
  plVar1 = param_1 + 2;
  plVar12 = (long *)0x18;
  __Znwm();
  *plVar12 = 0;
  plVar12[1] = uVar16;
  *(int *)(plVar12 + 2) = param_2;
  *(undefined4 *)((long)plVar12 + 0x14) = 0;
  func_0x00010738a72c();
  if ((uVar7 != 0) && (func_0x00010738a860(), !(bool)in_NG)) goto LAB_1073893a0;
  bVar3 = 2 < uVar7;
  bVar4 = uVar7 == 3;
  func_0x00010738a348(uVar7 << 1);
  uVar8 = extraout_x8_00;
  if (!bVar3 || bVar4) {
    uVar8 = extraout_x9;
  }
  if (uVar8 - 1 == 0) {
    uVar8 = 2;
  }
  else if ((uVar8 & uVar8 - 1) != 0) {
    __ZNSt3__112__next_primeEm();
    uVar7 = param_1[1];
  }
  uVar5 = uVar8 == uVar7;
  if (uVar7 < uVar8) {
LAB_107389238:
    if (uVar8 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x107389438);
      (*pcVar2)();
    }
    lVar6 = uVar8 << 3;
    __Znwm(lVar6);
    FUN_107389444(param_1,lVar6);
    param_1[1] = uVar8;
    lVar6 = *param_1;
    for (uVar7 = 0; uVar5 = uVar8 == uVar7, !(bool)uVar5; uVar7 = uVar7 + 1) {
      *(undefined8 *)(lVar6 + uVar7 * 8) = 0;
    }
    plVar10 = (long *)*plVar1;
    uVar7 = uVar8;
    if (plVar10 != (long *)0x0) {
      uVar13 = plVar10[1];
      uVar15 = uVar8 - 1;
      uVar9 = 0;
      if (uVar8 != 0) {
        uVar9 = uVar13 / uVar8;
      }
      uVar14 = uVar13;
      if (uVar8 <= uVar13) {
        uVar14 = uVar13 - uVar9 * uVar8;
      }
      uVar5 = (uVar8 & uVar15) == 0;
      if ((bool)uVar5) {
        uVar14 = uVar13 & uVar15;
      }
      *(long **)(lVar6 + uVar14 * 8) = plVar1;
      while (plVar11 = plVar10, plVar10 = (long *)*plVar11, plVar10 != (long *)0x0) {
        uVar9 = plVar10[1];
        if ((uVar8 & uVar15) == 0) {
          uVar9 = uVar9 & uVar15;
        }
        else if (uVar8 <= uVar9) {
          uVar13 = 0;
          if (uVar8 != 0) {
            uVar13 = uVar9 / uVar8;
          }
          uVar9 = uVar9 - uVar13 * uVar8;
        }
        uVar5 = uVar9 == uVar14;
        if (!(bool)uVar5) {
          if (*(long *)(lVar6 + uVar9 * 8) == 0) {
            *(long **)(lVar6 + uVar9 * 8) = plVar11;
            uVar14 = uVar9;
          }
          else {
            *plVar11 = *plVar10;
            func_0x00010738a44c();
            lVar6 = extraout_x8_01;
            uVar15 = extraout_x9_00;
            plVar10 = extraout_x10;
            uVar14 = extraout_x11;
          }
        }
      }
    }
  }
  else if (uVar8 < uVar7) {
    uVar9 = (ulong)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((uVar7 < 3) || ((uVar7 & uVar7 - 1) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010738a3bc();
    }
    if (uVar8 <= uVar9) {
      uVar8 = uVar9;
    }
    uVar5 = uVar8 == uVar7;
    if (uVar8 < uVar7) {
      if (uVar8 != 0) goto LAB_107389238;
      FUN_107389444(param_1,0);
      param_1[1] = 0;
      uVar7 = 0;
    }
    else {
      uVar7 = param_1[1];
    }
  }
  func_0x00010738ab5c();
  if ((bool)uVar5) {
    unaff_x25 = extraout_x8_02 & uVar16;
  }
  else {
    unaff_x25 = uVar16;
    if (uVar7 <= uVar16) {
      uVar8 = 0;
      if (uVar7 != 0) {
        uVar8 = uVar16 / uVar7;
      }
      unaff_x25 = uVar16 - uVar8 * uVar7;
    }
  }
LAB_1073893a0:
  lVar6 = *param_1;
  plVar10 = *(long **)(lVar6 + unaff_x25 * 8);
  if (plVar10 == (long *)0x0) {
    *plVar12 = *plVar1;
    *plVar1 = (long)plVar12;
    *(long **)(lVar6 + unaff_x25 * 8) = plVar1;
    if (*plVar12 != 0) {
      uVar16 = *(ulong *)(*plVar12 + 8);
      if ((uVar7 & uVar7 - 1) == 0) {
        uVar16 = uVar16 & uVar7 - 1;
      }
      else if (uVar7 <= uVar16) {
        uVar8 = 0;
        if (uVar7 != 0) {
          uVar8 = uVar16 / uVar7;
        }
        uVar16 = uVar16 - uVar8 * uVar7;
      }
      *(long **)(lVar6 + uVar16 * 8) = plVar12;
    }
  }
  else {
    *plVar12 = *plVar10;
    *plVar10 = (long)plVar12;
  }
  func_0x00010738a930();
  FUN_10738945c();
LAB_107389408:
  *(float *)((long)plVar12 + 0x14) = (float)dVar17;
  return (float)dVar17;
}



/* Entry: 107389444; end: 10738945b;  */

void FUN_107389444(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10738945c; end: 107389487;  */

long * FUN_10738945c(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107389488; end: 1073894c7;  */

long * FUN_107389488(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  
  if ((ulong)param_2 >> 0x3d != 0) {
    func_0x0001072a78b4();
    plVar2 = (long *)param_1[2];
    while (plVar2 != (long *)0x0) {
      plVar2 = (long *)*plVar2;
      __ZdlPv();
    }
    lVar1 = *param_1;
    *param_1 = 0;
    if (lVar1 != 0) {
      __ZdlPv();
    }
    return param_1;
  }
  plVar2 = (long *)(param_1[2] - *param_1 >> 2);
  if (plVar2 <= param_2) {
    plVar2 = param_2;
  }
  if (0x7ffffffffffffff7 < (ulong)(param_1[2] - *param_1)) {
    plVar2 = (long *)0x1fffffffffffffff;
  }
  return plVar2;
}



/* Entry: 1073894c8; end: 107389587;  */

long * FUN_1073894c8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    plVar1 = (long *)*plVar1;
    __ZdlPv();
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107389588; end: 1073895a7;  */

void FUN_107389588(long *param_1)

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



/* Entry: 1073895a8; end: 1073895d3;  */

void FUN_1073895a8(long param_1)

{
  long unaff_x19;
  
  func_0x00010738a40c();
  func_0x00010738a464(&PTR_DAT_1109a7ea8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 1073895d4; end: 1073895ef;  */

void FUN_1073895d4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_1109a7ea8;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 1073895f0; end: 10738967b;  */

void FUN_1073895f0(long param_1)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  undefined1 uStack_89;
  
  func_0x00010738a2c0();
  func_0x00010738a9c8();
  func_0x00010738ab68(*(undefined8 *)(param_1 + 0x10));
  func_0x00010738a848();
  func_0x00010738a874();
  uVar1 = uStack_89 == '\x01';
  if ((bool)uVar1) {
    func_0x00010738abd0();
  }
  func_0x00010738a858();
  func_0x00010738a280(extraout_x8);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010738a874();
  func_0x00010738a858();
  func_0x00010738a3dc();
  func_0x00010738a75c();
  func_0x00010738a598();
  func_0x00010738a36c();
  return;
}



/* Entry: 10738967c; end: 1073896a3;  */

void FUN_10738967c(undefined8 param_1)

{
  func_0x00010738a75c();
  func_0x00010738a598(param_1,&PTR_DAT_1109a7fa8);
  func_0x00010738a36c();
  return;
}



/* Entry: 1073896a4; end: 1073896af;  */

undefined ** FUN_1073896a4(void)

{
  return &PTR_DAT_1109a7fa8;
}



/* Entry: 1073896b0; end: 10738980f;  */

undefined1 *
FUN_1073896b0(undefined8 param_1,ulong param_2,long param_3,long param_4,long param_5,
             undefined1 *param_6)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  int extraout_w10;
  int extraout_w10_00;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x19;
  long unaff_x21;
  long lVar10;
  long lStack_48;
  
  puVar3 = param_6;
  func_0x00010738ac0c();
  func_0x00010738a710();
  *puVar3 = 0;
  for (; param_3 != param_4; param_3 = param_3 + 0x20) {
  }
  lStack_48 = CONCAT71(lStack_48._1_7_,1);
  lVar2 = unaff_x21;
  func_0x00010724e404();
  func_0x00010738a9bc();
  if (lVar2 != 0) {
    lVar5 = *(long *)(lVar2 + 0x20);
    lVar10 = *(long *)(lVar2 + 0x18);
    unaff_x19[1] = *(long *)(lVar2 + 0x20);
    *unaff_x19 = lVar10;
    if (lVar5 != 0) {
      do {
        func_0x00010738a4c4();
      } while (extraout_w10 != 0);
    }
    puVar3 = &stack0xffffffffffffffb0;
    func_0x00010724e49c(puVar3);
    return puVar3;
  }
  func_0x00010724e49c(&stack0xffffffffffffffb0);
  if (*(long **)(param_5 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_5 + 0x18) + 0x30))(&stack0xffffffffffffffb0);
    lVar2 = unaff_x21;
    func_0x000107279a5c();
    func_0x00010738a9bc();
    if (lVar2 == 0) {
      func_0x000107279ee0(&stack0xffffffffffffffa0);
      *param_6 = 1;
      unaff_x19[1] = lStack_48;
      *unaff_x19 = unaff_x21;
    }
    else {
      lVar5 = *(long *)(lVar2 + 0x20);
      lVar10 = *(long *)(lVar2 + 0x18);
      unaff_x19[1] = *(long *)(lVar2 + 0x20);
      *unaff_x19 = lVar10;
      if (lVar5 != 0) {
        do {
          func_0x00010738a4c4();
        } while (extraout_w10_00 != 0);
      }
      func_0x000107279ee0(&stack0xffffffffffffffa0);
    }
    puVar3 = &stack0xffffffffffffffb0;
    func_0x00010735ce54(puVar3);
    return puVar3;
  }
  func_0x000104bfeb48();
  plVar4 = (long *)&stack0xffffffffffffffb0;
  func_0x00010735ce54();
  func_0x00010738a3dc();
  uVar6 = plVar4[1];
  if ((uVar6 != 0) && (plVar4[3] != 0)) {
    uVar7 = uVar6 - 1;
    if ((uVar6 & uVar7) == 0) {
      uVar8 = uVar7 & param_2;
    }
    else {
      uVar8 = param_2;
      if (uVar6 <= param_2) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = param_2 / uVar6;
        }
        uVar8 = param_2 - uVar8 * uVar6;
      }
    }
    plVar4 = *(long **)(*plVar4 + uVar8 * 8);
    if (plVar4 == (long *)0x0) {
      return (undefined1 *)0x0;
    }
    do {
      while( true ) {
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          return (undefined1 *)0x0;
        }
        uVar9 = plVar4[1];
        if (uVar9 != param_2) break;
        if (plVar4[2] == param_2) {
          return (undefined1 *)plVar4;
        }
      }
      if ((uVar6 & uVar7) == 0) {
        uVar9 = uVar9 & uVar7;
      }
      else if (uVar6 <= uVar9) {
        uVar1 = 0;
        if (uVar6 != 0) {
          uVar1 = uVar9 / uVar6;
        }
        uVar9 = uVar9 - uVar1 * uVar6;
      }
    } while (uVar9 == uVar8);
  }
  return (undefined1 *)0x0;
}



/* Entry: 107389810; end: 1073898af;  */

long FUN_107389810(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = param_1[1];
  if ((uVar3 != 0) && (param_1[3] != 0)) {
    uVar4 = uVar3 - 1;
    if ((uVar3 & uVar4) == 0) {
      uVar5 = uVar4 & param_2;
    }
    else {
      uVar5 = param_2;
      if (uVar3 <= param_2) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = param_2 / uVar3;
        }
        uVar5 = param_2 - uVar5 * uVar3;
      }
    }
    plVar2 = *(long **)(*param_1 + uVar5 * 8);
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
          return 0;
        }
        uVar6 = plVar2[1];
        if (uVar6 != param_2) break;
        if (plVar2[2] == param_2) {
          return (long)plVar2;
        }
      }
      if ((uVar3 & uVar4) == 0) {
        uVar6 = uVar6 & uVar4;
      }
      else if (uVar3 <= uVar6) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = uVar6 / uVar3;
        }
        uVar6 = uVar6 - uVar1 * uVar3;
      }
    } while (uVar6 == uVar5);
  }
  return 0;
}



/* Entry: 1073898b0; end: 1073898d3;  */

void FUN_1073898b0(void)

{
  func_0x00010738a62c();
  func_0x00010738a464(&PTR_DAT_1109a7f28);
  return;
}



/* Entry: 1073898d4; end: 1073898f3;  */

void FUN_1073898d4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109a7f28;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 1073898f4; end: 10738991b;  */

void FUN_1073898f4(undefined8 param_1)

{
  func_0x00010738a75c();
  func_0x00010738a598(param_1,&PTR_DAT_1109a7f98);
  func_0x00010738a36c();
  return;
}



/* Entry: 10738991c; end: 107389927;  */

undefined ** FUN_10738991c(void)

{
  return &PTR_DAT_1109a7f98;
}



/* Entry: 107389928; end: 10738999f;  */

long FUN_107389928(long param_1)

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
  func_0x00010738a9f4(uVar1);
  return param_1;
}



/* Entry: 1073899a0; end: 107389a17;  */

void FUN_1073899a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined1 auStack_90 [112];
  
  func_0x00010738a4fc();
  puVar1 = auStack_90;
  func_0x0001072df7b4(puVar1,&DAT_10f34b835);
  uStack_98 = 3;
  uStack_b0 = *param_1;
  uStack_a8 = 3;
  uStack_a0 = param_4;
  FUN_10743fa44(param_1,puVar1,&uStack_a0,&uStack_b0,7);
  func_0x00010738a828();
  return;
}



/* Entry: 107389a18; end: 107389a3f;  */

long FUN_107389a18(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107389a40; end: 107389a4b;  */

void FUN_107389a40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a7fd8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 107389a4c; end: 107389a5f;  */

void FUN_107389a4c(void)

{
  FUN_107389a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107389a60; end: 107389a8f;  */

long FUN_107389a60(long param_1)

{
  long lVar1;
  long *plVar2;
  
  func_0x000107261dac(param_1 + 0x150);
  FUN_10735ab80(param_1 + 0x130);
  plVar2 = *(long **)(param_1 + 0x118);
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 3);
    plVar2 = (long *)*plVar2;
    func_0x00010735ce54(lVar1);
    func_0x00010738aac0();
  }
  lVar1 = *(long *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + 0x108) = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x000107276ba4(param_1 + 0x60);
  FUN_10735eed0(param_1 + 0x30);
  func_0x000107386354(param_1 + 0x20);
  return param_1 + 0x18;
}



/* Entry: 107389a90; end: 107389a93;  */

void FUN_107389a90(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107389a94; end: 107389abf;  */

undefined8 * FUN_107389a94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a8028;
  func_0x000107382bfc(param_1 + 2);
  return param_1;
}



/* Entry: 107389ac0; end: 107389ad3;  */

void FUN_107389ac0(void)

{
  FUN_107389a94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107389ad4; end: 107389af3;  */

void FUN_107389ad4(undefined8 *param_1)

{
  long lVar1;
  int extraout_w10;
  long unaff_x19;
  undefined8 uVar2;
  
  func_0x00010738a40c();
  *param_1 = &PTR_FUN_1109a8028;
  uVar2 = *(undefined8 *)(unaff_x19 + 8);
  param_1[2] = *(undefined8 *)(unaff_x19 + 0x10);
  param_1[1] = uVar2;
  lVar1 = *(long *)(unaff_x19 + 0x18);
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x00010738a4c4();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107389af4; end: 107389b17;  */

void FUN_107389af4(long param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  *param_2 = &PTR_FUN_1109a8028;
  uVar2 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar2;
  lVar1 = *(long *)(param_1 + 0x18);
  param_2[3] = lVar1;
  if (lVar1 != 0) {
    do {
      func_0x00010738a4c4();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 107389b18; end: 10738a06b;  */

void FUN_107389b18(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined1 uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 extraout_x8;
  long *plVar9;
  ulong *puVar10;
  bool bVar11;
  float *pfVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  ulong *puVar16;
  uint uVar17;
  ulong *unaff_x25;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined1 auStack_380 [96];
  ulong uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  ulong *puStack_308;
  ulong *puStack_300;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  ulong uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  ulong uStack_290;
  undefined8 uStack_288;
  long lStack_280;
  long lStack_278;
  undefined4 uStack_270;
  ulong uStack_258;
  ulong *puStack_250;
  undefined1 uStack_220;
  undefined8 uStack_218;
  ulong uStack_210;
  ulong *puStack_208;
  undefined8 uStack_200;
  ulong *puStack_1f8;
  undefined8 uStack_80;
  
  func_0x00010738a8c4();
  func_0x00010738a2c0();
  plVar9 = (long *)(param_1 + 0x10);
  lVar15 = *plVar9;
  puVar10 = *(ulong **)(param_1 + 8);
  pfVar12 = *(float **)(lVar15 + 8);
  fVar20 = *pfVar12;
  fVar18 = (float)NEON_ucvtf((uint)(byte)*puVar10);
  uStack_80 = extraout_x8;
  func_0x0001077512dc(fVar18,&uStack_210);
  uStack_258 = uStack_258 & 0xffffffffffffff00;
  uStack_220 = 0;
  uStack_218 = 0;
  func_0x0001073837dc(pfVar12 + 0x2e,&uStack_210,&uStack_258,&UNK_10de5bd9c);
  func_0x00010738a95c();
  func_0x00010738aa24();
  lVar13 = *(long *)(*plVar9 + 8);
  uVar19 = NEON_ucvtf((uint)(byte)*puVar10);
  func_0x0001077512dc(uVar19,&uStack_210);
  uStack_258 = uStack_258 & 0xffffffffffffff00;
  uStack_220 = 0;
  uStack_218 = 0;
  func_0x00010738aba4();
  func_0x000100060b18(&uStack_2f0);
  func_0x0001072625b4(&uStack_2c8,&uStack_2f0);
  puVar7 = &uStack_210;
  FUN_10738380c(&uStack_290,lVar13 + 0xf0,puVar7,&uStack_258,&uStack_2c8);
  puVar4 = &uStack_290;
  FUN_1073873d8(puVar4);
  func_0x000104c2f714(&uStack_290);
  func_0x000104c2f714(&uStack_2c8);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&uStack_2f0);
  func_0x00010738a95c();
  func_0x00010738aa24();
  uStack_2c8 = 0;
  uStack_2c0 = 0;
  uStack_2b8 = 0;
  uStack_2f0 = 0;
  uStack_2e8 = 0;
  uStack_2e0 = 0;
  uVar5 = *plVar9 + 0x118;
  FUN_107352fb8();
  uStack_210 = uVar5;
  puVar6 = puVar7;
  while (puStack_208 = puVar6, uStack_210 != 0) {
    puVar7 = puVar6 + 7;
    FUN_10735c91c(&uStack_2c8);
    func_0x00010738aa18(*plVar9,puVar6 + 7);
    FUN_107352fe0(&uStack_210);
    puVar6 = puStack_208;
  }
  puVar6 = puVar10;
  FUN_10736c7f0(&puStack_308);
  uStack_320 = 0;
  uStack_318 = 0;
  uStack_310 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  lStack_278 = 0;
  lStack_280 = 0;
  uStack_270 = 0x3f800000;
  for (puVar16 = puStack_308; uVar3 = puVar16 == puStack_300, !(bool)uVar3; puVar16 = puVar16 + 0x10
      ) {
    if ((int)puVar16[0xf] == 0) {
      func_0x00010738a418();
      func_0x00010738a35c();
      func_0x00010738a7d4();
      func_0x00010738a614(*plVar9);
      puVar8 = puVar6;
      func_0x00010738a620(*plVar9);
      uVar17 = (uint)puVar6;
      if (puVar8 != (ulong *)0x0) {
        uVar17 = 1;
      }
      if ((uVar17 & 1) == 0) {
        FUN_10735c91c(&uStack_2c8,puVar16);
        puVar7 = (ulong *)(*plVar9 + 8);
        puVar8 = puVar16;
        FUN_1073823b4(puVar16,puVar7,&uStack_2f0);
      }
      func_0x00010738a5a8();
      unaff_x25 = puVar6;
    }
    else {
      puVar8 = (ulong *)puVar16[6];
      bVar11 = true;
      puVar7 = (ulong *)puVar16[5];
      while (puVar7 != puVar8) {
        func_0x00010738a818();
        if (CONCAT44(uStack_2d4,uStack_2d8) == 0) {
          bVar11 = false;
        }
        else {
          func_0x00010738a418();
          func_0x00010738a35c();
          func_0x00010738a7d4();
          func_0x00010738a614(*plVar9);
          puVar7 = puVar6;
          func_0x00010738a620(*plVar9);
          uVar17 = (uint)puVar6;
          if (puVar7 != (ulong *)0x0) {
            uVar17 = 1;
          }
          if ((uVar17 & 1) == 0) {
            puVar6 = &uStack_2c8;
            FUN_10735c91c(puVar6,&uStack_2d8);
          }
          else {
            bVar11 = false;
            puVar6 = puVar7;
          }
          func_0x00010738a5a8();
        }
        func_0x00010738aa54();
        puVar7 = unaff_x25 + 3;
      }
      if (bVar11) {
        puVar8 = &uStack_320;
        puVar7 = puVar16;
        FUN_107388aec();
      }
      else {
        func_0x00010738a418();
        func_0x00010738a35c();
        puVar8 = &uStack_290;
        puVar7 = &uStack_258;
        func_0x0001072eaeb4();
        func_0x00010738a5a8();
        func_0x00010738a7d4();
        puVar1 = (ulong *)puVar16[6];
        puVar6 = (ulong *)puVar16[5];
        while (puVar6 != puVar1) {
          func_0x00010738a818();
          if (CONCAT44(uStack_2d4,uStack_2d8) != 0) {
            func_0x00010738a418();
            func_0x00010738a35c();
            func_0x00010738a7d4();
            func_0x00010738a614(*plVar9);
            puVar6 = puVar8;
            func_0x00010738a620(*plVar9);
            uVar17 = (uint)puVar8;
            if (puVar6 != (ulong *)0x0) {
              uVar17 = 1;
            }
            puVar8 = puVar6;
            if ((uVar17 & 1) == 0) {
              puVar8 = (ulong *)&uStack_2d8;
              func_0x00010738aa18(*plVar9);
            }
            func_0x00010738a5a8();
          }
          func_0x00010738aa54();
          puVar6 = unaff_x25 + 3;
        }
      }
    }
    puVar6 = puVar8;
  }
  if (lStack_278 != 0) {
    uStack_210 = 0;
    puStack_208 = (ulong *)0x0;
    uStack_200 = 0;
    for (plVar14 = (long *)lStack_280; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
      uVar5 = (ulong)(plVar14 + 2);
      func_0x000107264c5c();
      puVar6 = &uStack_258;
      uStack_258 = uVar5;
      puStack_250 = puVar7;
      func_0x000107264c84(&uStack_210);
      puVar7 = puVar6;
    }
    puVar6 = &uStack_210;
    func_0x000107264ef0();
  }
  lVar13 = *plVar9;
  uStack_2d8 = 0;
  uVar5 = *puVar10;
  uVar2 = *puVar10;
  func_0x00010738a4ec();
  *puVar6 = (ulong)&PTR_DAT_1109a8098;
  puVar6[1] = lVar13 + 0x48;
  puVar6[2] = (ulong)plVar9;
  puVar6[3] = (ulong)&uStack_2d8;
  puStack_1f8 = puVar6;
  FUN_107387470(fVar20 * fVar18,&uStack_258,(char)uVar5,&uStack_320,&uStack_2f0,puVar4,&uStack_210);
  FUN_10736c7e8(auStack_380,(short)uVar2,&uStack_258,&uStack_2c8);
  func_0x00010735c6e4(&uStack_258);
  func_0x000107389964(&uStack_210);
  FUN_10736c90c(&uStack_210,auStack_380);
  FUN_107388318(*(undefined8 *)(*plVar9 + 0x40),auStack_380,uStack_2d8);
  func_0x00010738a9d4();
  func_0x00010726ea70(&uStack_290);
  func_0x00010735c6e4(&uStack_320);
  FUN_10735a0a0(&puStack_308);
  FUN_1073847cc(&uStack_2f0);
  FUN_10735a250(&uStack_2c8);
  FUN_107387384(lVar15,auStack_380);
  func_0x00010738a9a0();
  func_0x00010738a280(uStack_80);
  if (!(bool)uVar3) {
    ___stack_chk_fail();
    func_0x00010738a9a0();
    func_0x00010738a3dc();
    func_0x00010738a75c();
    func_0x00010738a598();
    func_0x00010738a36c();
    return;
  }
  return;
}



/* Entry: 10738a06c; end: 10738a093;  */

void FUN_10738a06c(undefined8 param_1)

{
  func_0x00010738a75c();
  func_0x00010738a598(param_1,&PTR_DAT_1109a8188);
  func_0x00010738a36c();
  return;
}



/* Entry: 10738a094; end: 10738a0df;  */

undefined ** FUN_10738a094(void)

{
  return &PTR_DAT_1109a8188;
}



/* Entry: 10738a0e0; end: 10738a10b;  */

void FUN_10738a0e0(long param_1)

{
  long unaff_x19;
  
  func_0x00010738a40c();
  func_0x00010738a464(&PTR_DAT_1109a8098);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(unaff_x19 + 0x18);
  return;
}



/* Entry: 10738a10c; end: 10738a127;  */

void FUN_10738a10c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = &PTR_DAT_1109a8098;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  param_2[2] = uVar2;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10738a128; end: 10738a1b3;  */

void FUN_10738a128(long param_1)

{
  undefined1 uVar1;
  undefined8 extraout_x8;
  undefined1 uStack_89;
  
  func_0x00010738a2c0();
  func_0x00010738a9c8();
  func_0x00010738ab68(*(undefined8 *)(param_1 + 0x10));
  func_0x00010738a848();
  func_0x00010738a874();
  uVar1 = uStack_89 == '\x01';
  if ((bool)uVar1) {
    func_0x00010738abd0();
  }
  func_0x00010738a858();
  func_0x00010738a280(extraout_x8);
  if ((bool)uVar1) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010738a874();
  func_0x00010738a858();
  func_0x00010738a3dc();
  func_0x00010738a75c();
  func_0x00010738a598();
  func_0x00010738a36c();
  return;
}



/* Entry: 10738a1b4; end: 10738a1db;  */

void FUN_10738a1b4(undefined8 param_1)

{
  func_0x00010738a75c();
  func_0x00010738a598(param_1,&PTR_DAT_1109a8178);
  func_0x00010738a36c();
  return;
}



/* Entry: 10738a1dc; end: 10738a1ef;  */

undefined ** FUN_10738a1dc(void)

{
  return &PTR_DAT_1109a8178;
}



/* Entry: 10738a1f0; end: 10738a213;  */

void FUN_10738a1f0(void)

{
  func_0x00010738a62c();
  func_0x00010738a464(&PTR_DAT_1109a8108);
  return;
}



/* Entry: 10738a214; end: 10738a233;  */

void FUN_10738a214(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_DAT_1109a8108;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 10738a234; end: 10738a25b;  */

void FUN_10738a234(undefined8 param_1)

{
  func_0x00010738a75c();
  func_0x00010738a598(param_1,&PTR_DAT_1109a8168);
  func_0x00010738a36c();
  return;
}



/* Entry: 10738a25c; end: 10738ac17;  */

undefined ** FUN_10738a25c(void)

{
  return &PTR_DAT_1109a8168;
}



/* Entry: 10738ac18; end: 10738acbb;  */

undefined8 * FUN_10738ac18(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_1109a81a8;
  FUN_10738cd50(param_1 + 1);
  func_0x000107262e9c(param_1 + 0x1d,param_2);
  param_1[0x24] = param_3;
  *(undefined2 *)(param_1 + 0x25) = 0x1000;
  param_1[0x27] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0x32aaaba7;
  param_1[0x2f] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x30] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = 0;
  param_1[0x35] = 0;
  param_1[0x34] = 0;
  param_1[0x37] = 0;
  param_1[0x36] = 0;
  param_1[0x38] = 0;
  *(undefined4 *)(param_1 + 0x39) = 0x3f800000;
  return param_1;
}



/* Entry: 10738acbc; end: 10738acbf;  */

undefined8 * FUN_10738acbc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a8220;
  func_0x00010738cde0(param_1 + 0x16);
  func_0x000107276ba4(param_1 + 1);
  return param_1;
}



/* Entry: 10738acc0; end: 10738ad63;  */

undefined8 * FUN_10738acc0(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_1109a81a8;
  plVar2 = (long *)param_1[0x37];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 3);
    plVar2 = (long *)*plVar2;
    FUN_107377684(lVar1);
    func_0x00010738d7bc();
  }
  lVar1 = param_1[0x35];
  param_1[0x35] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x2d);
  plVar2 = (long *)param_1[0x29];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    FUN_10738ca2c(lVar1);
    func_0x00010738d7bc();
  }
  lVar1 = param_1[0x27];
  param_1[0x27] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x000104c2f714(param_1 + 0x1d);
  FUN_10738cda4(param_1 + 1);
  return param_1;
}



/* Entry: 10738ad64; end: 10738ad67;  */

undefined8 * FUN_10738ad64(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_1109a81a8;
  plVar2 = (long *)param_1[0x37];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 3);
    plVar2 = (long *)*plVar2;
    FUN_107377684(lVar1);
    func_0x00010738d7bc();
  }
  lVar1 = param_1[0x35];
  param_1[0x35] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  __ZNSt3__15mutexD1Ev(param_1 + 0x2d);
  plVar2 = (long *)param_1[0x29];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    FUN_10738ca2c(lVar1);
    func_0x00010738d7bc();
  }
  lVar1 = param_1[0x27];
  param_1[0x27] = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  func_0x000104c2f714(param_1 + 0x1d);
  FUN_10738cda4(param_1 + 1);
  return param_1;
}



/* Entry: 10738ad68; end: 10738ad7b;  */

void FUN_10738ad68(void)

{
  FUN_10738acc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10738ad7c; end: 10738ae0b;  */

void FUN_10738ad7c(void)

{
  long *plVar1;
  code *pcVar2;
  undefined1 in_ZR;
  bool bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  byte *pbVar16;
  byte *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong extraout_x8_05;
  byte *extraout_x9;
  byte *extraout_x9_00;
  byte *extraout_x9_01;
  byte *extraout_x9_02;
  long *plVar17;
  long *extraout_x10;
  byte *extraout_x11;
  byte *extraout_x11_00;
  long *extraout_x12;
  long *unaff_x19;
  undefined8 *puVar18;
  undefined8 uVar19;
  uint uVar20;
  byte *unaff_x22;
  byte *unaff_x23;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  undefined1 auStack_2bc [4];
  undefined1 auStack_2b8 [16];
  undefined8 uStack_2a8;
  byte *pbStack_2a0;
  byte *pbStack_298;
  byte *pbStack_290;
  long *plStack_288;
  undefined8 *puStack_280;
  undefined1 auStack_258 [24];
  ulong uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  long lStack_208;
  undefined1 auStack_200 [24];
  byte *pbStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [32];
  long lStack_1a8;
  undefined1 uStack_1a0;
  undefined2 auStack_198 [4];
  undefined1 auStack_190 [8];
  byte *pbStack_188;
  long lStack_170;
  undefined1 uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_128;
  undefined1 auStack_a8 [16];
  undefined8 auStack_98 [14];
  undefined8 uStack_28;
  
  func_0x00010738d6f4();
  uStack_28 = extraout_x8;
  func_0x00010726933c(auStack_98);
  puVar13 = auStack_98;
  func_0x0001072c00d0(auStack_a8,puVar13,1);
  func_0x00010738d85c(*(undefined8 *)(*unaff_x19 + 0x18));
  func_0x00010726dd08(auStack_a8);
  func_0x000107269394(auStack_98);
  func_0x00010738d6ac(uStack_28);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010738d838();
  func_0x00010726dd08();
  puVar18 = auStack_98;
  func_0x000107269394();
  func_0x00010738d734();
  func_0x00010738d6f4();
  uVar19 = puVar18[0x24];
  uStack_128 = extraout_x8_00;
  func_0x00010738d73c(0x15c);
  func_0x00010724ef84(auStack_200,puVar18 + 0x1d);
  puVar14 = (undefined8 *)auStack_198;
  func_0x00010726e300(puVar14,&DAT_10f68f148,auStack_200);
  func_0x00010738d808();
  uStack_218 = CONCAT44(uStack_218._4_4_,3);
  pbVar15 = (byte *)&uStack_1d0;
  FUN_10743fa9c(uVar19);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_200);
  func_0x00010738d7f0();
  pbVar21 = (byte *)0x0;
  puStack_220 = &UNK_10e52b660;
  uStack_218 = 0;
  uStack_210 = 0;
  lStack_208 = 0;
  puVar18 = *(undefined8 **)*puVar13;
  puVar13 = (undefined8 *)((undefined8 *)*puVar13)[1];
  plVar1 = unaff_x19 + 0x29;
  do {
    uVar4 = (long)puVar18 - (long)puVar13 < 0;
    uVar5 = puVar18 == puVar13;
    if ((bool)uVar5) {
      if ((int)pbVar21 != 0) {
        unaff_x19[0x26] = unaff_x19[0x26] + 1;
        puVar18 = (undefined8 *)unaff_x19[0x24];
        func_0x00010738d73c(0x15d);
        func_0x00010724ef84(auStack_258,unaff_x19 + 0x1d);
        puVar14 = (undefined8 *)auStack_198;
        func_0x00010726e300(puVar14,&DAT_10f68f148,auStack_258);
        func_0x00010738d808();
        uStack_238 = CONCAT44(uStack_238._4_4_,3);
        pbVar15 = (byte *)&uStack_1d0;
        uStack_240 = extraout_x8_05;
        FUN_10743fa9c(puVar18);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_258);
        func_0x00010738d7f0();
      }
      if (lStack_208 != 0) {
        uStack_1d0._0_2_ = (undefined2)unaff_x19[0x25];
        puVar18 = &uStack_1d0;
        FUN_10731e330(auStack_1c8,&puStack_220);
        lStack_1a8 = unaff_x19[0x26];
        uStack_1a0 = (undefined1)unaff_x19[0x2c];
        auStack_198[0] = (undefined2)uStack_1d0;
        FUN_10731e330(auStack_190,auStack_1c8);
        lStack_170 = lStack_1a8;
        uStack_168 = uStack_1a0;
        uStack_160 = uStack_160 & 0xffffffff00000000;
        puVar14 = (undefined8 *)auStack_198;
        FUN_10738b698(unaff_x19 + 1,puVar14);
        FUN_10738ccf4(auStack_198);
        func_0x00010731e248(auStack_1c8);
      }
      func_0x00010731e248(&puStack_220);
      func_0x00010738d6ac(uStack_128);
      if (!(bool)uVar5) {
        ___stack_chk_fail();
        func_0x00010738d838();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        func_0x00010738d7f0();
        ppuVar11 = &puStack_220;
        func_0x00010731e248();
        func_0x00010738d734();
        pbStack_2a0 = pbVar21;
        pbStack_298 = unaff_x23;
        pbStack_290 = unaff_x22;
        plStack_288 = plVar1;
        puStack_280 = puVar18;
        ppuVar11[1] = (undefined *)0x0;
        *ppuVar11 = (undefined *)0x0;
        ppuVar11[3] = (undefined *)0x0;
        ppuVar11[2] = (undefined *)0x0;
        *(undefined4 *)(ppuVar11 + 4) = 0x3f800000;
        for (uVar20 = (uint)*pbVar15; uVar20 < pbVar15[1]; uVar20 = uVar20 + 1) {
          func_0x00010787da4c(&uStack_2a8,puVar14,uVar20,1);
          while (uVar19 = uStack_2a8, uVar12 = uStack_2a8, func_0x000107882368(), (int)uVar12 != 0)
          {
            func_0x0001078823ac(auStack_2bc,uVar19);
            FUN_10738ca84(ppuVar11,auStack_2b8);
          }
          func_0x000107880dc4(&uStack_2a8);
        }
        return;
      }
      return;
    }
    func_0x00010726236c(auStack_198,puVar18 + 6);
    func_0x000107262398(&uStack_1d0,auStack_198,0x1138369c0);
    func_0x00010724b3d8(auStack_198);
    pbVar24 = (byte *)unaff_x19[0x28];
    if ((pbVar24 != (byte *)0x0) && (unaff_x19[0x2a] != 0)) {
      unaff_x23 = (byte *)(unaff_x19 + 0x2a);
      func_0x00010726364c(unaff_x23,&uStack_1d0);
      pbVar22 = pbVar24 + -1;
      if (((ulong)pbVar24 & (ulong)pbVar22) == 0) {
        pbVar23 = (byte *)((ulong)unaff_x23 & (ulong)pbVar22);
        uVar4 = false;
      }
      else {
        uVar4 = (long)unaff_x23 - (long)pbVar24 < 0;
        pbVar23 = unaff_x23;
        if (pbVar24 <= unaff_x23) {
          uVar9 = 0;
          if (pbVar24 != (byte *)0x0) {
            uVar9 = (ulong)unaff_x23 / (ulong)pbVar24;
          }
          pbVar23 = unaff_x23 + -(uVar9 * (long)pbVar24);
        }
      }
      unaff_x22 = *(byte **)(unaff_x19[0x27] + (long)pbVar23 * 8);
      if (unaff_x22 != (byte *)0x0) {
LAB_10738af48:
        while (unaff_x22 = *(byte **)unaff_x22, unaff_x22 != (byte *)0x0) {
          pbVar16 = *(byte **)(unaff_x22 + 8);
          uVar4 = (long)pbVar16 - (long)unaff_x23 < 0;
          if (pbVar16 != unaff_x23) goto LAB_10738af70;
          pbVar16 = unaff_x22 + 0x10;
          func_0x000104c32db4(pbVar16,&uStack_1d0);
          if (((ulong)pbVar16 & 1) != 0) {
            uVar9 = puVar18[4];
            FUN_10737d77c(uVar9,*(undefined8 *)(*(long *)(unaff_x22 + 0x48) + 0x20));
            if ((uVar9 & 1) == 0) {
              FUN_10738b5c4(auStack_198,*(undefined8 *)(unaff_x22 + 0x48),unaff_x19 + 0x25);
              pbVar15 = pbStack_188;
              while (pbVar15 != (byte *)0x0) {
                unaff_x23 = *(byte **)pbVar15;
                func_0x00010738d868();
                func_0x00010738d7e0();
                func_0x00010738d874();
                pbVar15 = unaff_x23;
              }
              func_0x00010738d8a4();
              goto LAB_10738b344;
            }
            goto LAB_10738b348;
          }
        }
      }
    }
LAB_10738af98:
    FUN_10735347c(&uStack_240,puVar18);
    pbVar15 = (byte *)0x12;
    func_0x0001078e364c(&uStack_230,8);
    func_0x000104c2fe00(auStack_198,&uStack_1d0);
    uStack_158 = uStack_238;
    uStack_160 = uStack_240;
    uStack_240 = 0;
    uStack_238 = 0;
    uStack_148 = uStack_228;
    uStack_150 = uStack_230;
    uStack_230 = 0;
    uStack_228 = 0;
    unaff_x23 = (byte *)(unaff_x19 + 0x2a);
    func_0x00010726364c(unaff_x23,auStack_198);
    pbVar24 = (byte *)unaff_x19[0x28];
    if (pbVar24 != (byte *)0x0) {
      pbVar22 = pbVar24 + -1;
      if (((ulong)pbVar24 & (ulong)pbVar22) == 0) {
        pbVar21 = (byte *)((ulong)pbVar22 & (ulong)unaff_x23);
        uVar4 = false;
      }
      else {
        uVar4 = (long)unaff_x23 - (long)pbVar24 < 0;
        pbVar21 = unaff_x23;
        if (pbVar24 <= unaff_x23) {
          uVar9 = 0;
          if (pbVar24 != (byte *)0x0) {
            uVar9 = (ulong)unaff_x23 / (ulong)pbVar24;
          }
          pbVar21 = unaff_x23 + -(uVar9 * (long)pbVar24);
        }
      }
      unaff_x22 = *(byte **)(unaff_x19[0x27] + (long)pbVar21 * 8);
      if (unaff_x22 != (byte *)0x0) {
        do {
          while( true ) {
            unaff_x22 = *(byte **)unaff_x22;
            if (unaff_x22 == (byte *)0x0) goto LAB_10738b074;
            pbVar23 = *(byte **)(unaff_x22 + 8);
            uVar4 = (long)pbVar23 - (long)unaff_x23 < 0;
            if (pbVar23 != unaff_x23) break;
            pbVar23 = unaff_x22 + 0x10;
            func_0x000104c32db4(pbVar23,auStack_198);
            if (((ulong)pbVar23 & 1) != 0) goto LAB_10738b334;
          }
          if (((ulong)pbVar24 & (ulong)pbVar22) == 0) {
            pbVar23 = (byte *)((ulong)pbVar23 & (ulong)pbVar22);
          }
          else if (pbVar24 <= pbVar23) {
            uVar9 = 0;
            if (pbVar24 != (byte *)0x0) {
              uVar9 = (ulong)pbVar23 / (ulong)pbVar24;
            }
            pbVar23 = pbVar23 + -(uVar9 * (long)pbVar24);
          }
          uVar4 = (long)pbVar23 - (long)pbVar21 < 0;
        } while (pbVar23 == pbVar21);
      }
    }
LAB_10738b074:
    unaff_x22 = (byte *)0x68;
    __Znwm();
    uStack_1d8 = 1;
    pbVar22 = unaff_x22 + 0x10;
    unaff_x22[0] = 0;
    unaff_x22[1] = 0;
    unaff_x22[2] = 0;
    unaff_x22[3] = 0;
    unaff_x22[4] = 0;
    unaff_x22[5] = 0;
    unaff_x22[6] = 0;
    unaff_x22[7] = 0;
    *(byte **)(unaff_x22 + 8) = unaff_x23;
    pbStack_1e8 = unaff_x22;
    plStack_1e0 = plVar1;
    func_0x000104c2fe00(pbVar22,auStack_198);
    *(undefined8 *)(unaff_x22 + 0x50) = uStack_158;
    *(ulong *)(unaff_x22 + 0x48) = uStack_160;
    uStack_160 = 0;
    uStack_158 = 0;
    *(undefined8 *)(unaff_x22 + 0x60) = uStack_148;
    *(undefined8 *)(unaff_x22 + 0x58) = uStack_150;
    uStack_150 = 0;
    uStack_148 = 0;
    func_0x00010738d850(unaff_x19[0x2a]);
    if ((pbVar24 == (byte *)0x0) || (func_0x00010738d844(), (bool)uVar4)) {
      bVar3 = (byte *)0x2 < pbVar24;
      bVar6 = pbVar24 == (byte *)0x3;
      func_0x00010738d6e0((long)pbVar24 << 1);
      pbVar21 = extraout_x8_01;
      if (!bVar3 || bVar6) {
        pbVar21 = extraout_x9;
      }
      if (pbVar21 + -1 == (byte *)0x0) {
        pbVar21 = (byte *)0x2;
      }
      else if (((ulong)pbVar21 & (ulong)(pbVar21 + -1)) != 0) {
        __ZNSt3__112__next_primeEm();
        pbVar22 = pbVar21;
      }
      pbVar24 = (byte *)unaff_x19[0x28];
      if (pbVar24 < pbVar21) {
LAB_10738b124:
        if ((ulong)pbVar21 >> 0x3d != 0) {
          func_0x000104bd35f4();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10738b4d8);
          (*pcVar2)();
        }
        lVar8 = (long)pbVar21 << 3;
        __Znwm(lVar8);
        func_0x00010738ce80(unaff_x19 + 0x27,lVar8);
        pbVar24 = (byte *)0x0;
        unaff_x19[0x28] = (long)pbVar21;
        lVar8 = unaff_x19[0x27];
        while (pbVar21 != pbVar24) {
          func_0x00010738d8e4();
          lVar8 = extraout_x8_02;
          pbVar24 = extraout_x9_00;
        }
        plVar17 = (long *)*plVar1;
        pbVar24 = pbVar21;
        if (plVar17 != (long *)0x0) {
          pbVar23 = (byte *)plVar17[1];
          pbVar22 = pbVar21 + -1;
          uVar9 = 0;
          if (pbVar21 != (byte *)0x0) {
            uVar9 = (ulong)pbVar23 / (ulong)pbVar21;
          }
          pbVar16 = pbVar23;
          if (pbVar21 <= pbVar23) {
            pbVar16 = pbVar23 + -(uVar9 * (long)pbVar21);
          }
          if (((ulong)pbVar21 & (ulong)pbVar22) == 0) {
            pbVar16 = (byte *)((ulong)pbVar23 & (ulong)pbVar22);
          }
          *(long **)(lVar8 + (long)pbVar16 * 8) = plVar1;
          while (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0) {
            pbVar23 = (byte *)plVar17[1];
            if (((ulong)pbVar21 & (ulong)pbVar22) == 0) {
              pbVar23 = (byte *)((ulong)pbVar23 & (ulong)pbVar22);
            }
            else if (pbVar21 <= pbVar23) {
              uVar9 = 0;
              if (pbVar21 != (byte *)0x0) {
                uVar9 = (ulong)pbVar23 / (ulong)pbVar21;
              }
              pbVar23 = pbVar23 + -(uVar9 * (long)pbVar21);
            }
            if (pbVar23 != pbVar16) {
              if (*(long *)(lVar8 + (long)pbVar23 * 8) == 0) {
                func_0x00010738d8c4();
                lVar8 = extraout_x8_04;
                pbVar22 = extraout_x9_02;
                plVar17 = extraout_x12;
                pbVar16 = extraout_x11_00;
              }
              else {
                func_0x00010738d708();
                lVar8 = extraout_x8_03;
                pbVar22 = extraout_x9_01;
                plVar17 = extraout_x10;
                pbVar16 = extraout_x11;
              }
            }
          }
        }
      }
      else if (pbVar21 < pbVar24) {
        func_0x00010738d8fc((float)(ulong)unaff_x19[0x2a],(int)unaff_x19[0x2b]);
        if ((pbVar24 < (byte *)0x3) || (((ulong)pbVar24 & (ulong)(pbVar24 + -1)) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else {
          func_0x00010738d6c0();
        }
        if (pbVar21 <= pbVar22) {
          pbVar21 = pbVar22;
        }
        if (pbVar21 < pbVar24) {
          if (pbVar21 != (byte *)0x0) goto LAB_10738b124;
          func_0x00010738ce80(unaff_x19 + 0x27,0);
          unaff_x19[0x28] = 0;
          pbVar24 = (byte *)0x0;
        }
        else {
          pbVar24 = (byte *)unaff_x19[0x28];
        }
      }
      if (((ulong)pbVar24 & (ulong)(pbVar24 + -1)) == 0) {
        pbVar21 = (byte *)((ulong)(pbVar24 + -1) & (ulong)unaff_x23);
      }
      else {
        pbVar21 = unaff_x23;
        if (pbVar24 <= unaff_x23) {
          uVar9 = 0;
          if (pbVar24 != (byte *)0x0) {
            uVar9 = (ulong)unaff_x23 / (ulong)pbVar24;
          }
          pbVar21 = unaff_x23 + -(uVar9 * (long)pbVar24);
        }
      }
    }
    lVar8 = unaff_x19[0x27];
    if (*(long *)(lVar8 + (long)pbVar21 * 8) == 0) {
      *(long *)unaff_x22 = *plVar1;
      *plVar1 = (long)unaff_x22;
      *(long **)(lVar8 + (long)pbVar21 * 8) = plVar1;
      if (*(long *)unaff_x22 != 0) {
        pbVar21 = *(byte **)(*(long *)unaff_x22 + 8);
        if (((ulong)pbVar24 & (ulong)(pbVar24 + -1)) == 0) {
          pbVar21 = (byte *)((ulong)pbVar21 & (ulong)(pbVar24 + -1));
        }
        else if (pbVar24 <= pbVar21) {
          uVar9 = 0;
          if (pbVar24 != (byte *)0x0) {
            uVar9 = (ulong)pbVar21 / (ulong)pbVar24;
          }
          pbVar21 = pbVar21 + -(uVar9 * (long)pbVar24);
        }
        *(byte **)(lVar8 + (long)pbVar21 * 8) = unaff_x22;
      }
    }
    else {
      func_0x00010738d77c();
    }
    pbStack_1e8 = (byte *)0x0;
    unaff_x19[0x2a] = unaff_x19[0x2a] + 1;
    FUN_10738ce98(&pbStack_1e8);
LAB_10738b334:
    FUN_10738ca2c(auStack_198);
    func_0x00010738ca58(&uStack_240);
LAB_10738b344:
    pbVar21 = (byte *)0x1;
LAB_10738b348:
    puVar10 = puVar18;
    func_0x000104c2d3c0();
    iVar7 = (int)unaff_x22 + 0x58;
    puVar14 = (undefined8 *)0x0;
    func_0x0001078e36b0(*puVar10,puVar10[1],0);
    if (iVar7 != 0) {
      puVar14 = puVar18;
      FUN_10738b5c4(auStack_198,puVar18,unaff_x19 + 0x25);
      pbVar15 = pbStack_188;
      while (pbVar15 != (byte *)0x0) {
        unaff_x22 = *(byte **)pbVar15;
        func_0x00010738d868();
        func_0x00010738d7e0();
        func_0x00010738d874();
        pbVar15 = unaff_x22;
      }
      func_0x00010738d8a4();
      pbVar21 = (byte *)0x1;
    }
    func_0x000104c2f714(&uStack_1d0);
    puVar18 = puVar18 + 0xe;
  } while( true );
LAB_10738af70:
  if (((ulong)pbVar24 & (ulong)pbVar22) == 0) {
    pbVar16 = (byte *)((ulong)pbVar16 & (ulong)pbVar22);
  }
  else if (pbVar24 <= pbVar16) {
    uVar9 = 0;
    if (pbVar24 != (byte *)0x0) {
      uVar9 = (ulong)pbVar16 / (ulong)pbVar24;
    }
    pbVar16 = pbVar16 + -(uVar9 * (long)pbVar24);
  }
  uVar4 = (long)pbVar16 - (long)pbVar23 < 0;
  if (pbVar16 != pbVar23) goto LAB_10738af98;
  goto LAB_10738af48;
}



/* Entry: 10738ae0c; end: 10738b5c3;  */

void FUN_10738ae0c(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  undefined8 extraout_x8;
  byte *pbVar16;
  byte *extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong extraout_x8_04;
  byte *extraout_x9;
  byte *extraout_x9_00;
  byte *extraout_x9_01;
  byte *extraout_x9_02;
  long *plVar17;
  long *extraout_x10;
  byte *extraout_x11;
  byte *extraout_x11_00;
  long *extraout_x12;
  long unaff_x19;
  undefined8 *puVar18;
  undefined8 uVar19;
  uint uVar20;
  byte *unaff_x22;
  byte *unaff_x23;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  undefined1 auStack_20c [4];
  undefined1 auStack_208 [16];
  undefined8 uStack_1f8;
  byte *pbStack_1f0;
  byte *pbStack_1e8;
  byte *pbStack_1e0;
  long *plStack_1d8;
  undefined8 *puStack_1d0;
  undefined1 auStack_1a8 [24];
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  undefined1 auStack_150 [24];
  byte *pbStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 auStack_118 [32];
  undefined8 uStack_f8;
  undefined1 uStack_f0;
  undefined2 auStack_e8 [4];
  undefined1 auStack_e0 [8];
  byte *pbStack_d8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_78;
  
  func_0x00010738d6f4();
  uVar19 = *(undefined8 *)(param_1 + 0x120);
  uStack_78 = extraout_x8;
  func_0x00010738d73c(0x15c);
  func_0x00010724ef84(auStack_150,param_1 + 0xe8);
  puVar14 = (undefined8 *)auStack_e8;
  func_0x00010726e300(puVar14,&DAT_10f68f148,auStack_150);
  func_0x00010738d808();
  uStack_168 = CONCAT44(uStack_168._4_4_,3);
  pbVar15 = (byte *)&uStack_120;
  FUN_10743fa9c(uVar19);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_150);
  func_0x00010738d7f0();
  pbVar21 = (byte *)0x0;
  puStack_170 = &UNK_10e52b660;
  uStack_168 = 0;
  uStack_160 = 0;
  lStack_158 = 0;
  puVar18 = *(undefined8 **)*param_2;
  puVar2 = (undefined8 *)((undefined8 *)*param_2)[1];
  plVar1 = (long *)(unaff_x19 + 0x148);
  do {
    uVar5 = (long)puVar18 - (long)puVar2 < 0;
    uVar6 = puVar18 == puVar2;
    if ((bool)uVar6) {
      if ((int)pbVar21 != 0) {
        *(long *)(unaff_x19 + 0x130) = *(long *)(unaff_x19 + 0x130) + 1;
        puVar18 = *(undefined8 **)(unaff_x19 + 0x120);
        func_0x00010738d73c(0x15d);
        func_0x00010724ef84(auStack_1a8,unaff_x19 + 0xe8);
        puVar14 = (undefined8 *)auStack_e8;
        func_0x00010726e300(puVar14,&DAT_10f68f148,auStack_1a8);
        func_0x00010738d808();
        uStack_188 = CONCAT44(uStack_188._4_4_,3);
        pbVar15 = (byte *)&uStack_120;
        uStack_190 = extraout_x8_04;
        FUN_10743fa9c(puVar18);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1a8);
        func_0x00010738d7f0();
      }
      if (lStack_158 != 0) {
        uStack_120._0_2_ = *(undefined2 *)(unaff_x19 + 0x128);
        puVar18 = &uStack_120;
        FUN_10731e330(auStack_118,&puStack_170);
        uStack_f8 = *(undefined8 *)(unaff_x19 + 0x130);
        uStack_f0 = *(undefined1 *)(unaff_x19 + 0x160);
        auStack_e8[0] = (undefined2)uStack_120;
        FUN_10731e330(auStack_e0,auStack_118);
        uStack_c0 = uStack_f8;
        uStack_b8 = uStack_f0;
        uStack_b0 = uStack_b0 & 0xffffffff00000000;
        puVar14 = (undefined8 *)auStack_e8;
        FUN_10738b698(unaff_x19 + 8,puVar14);
        FUN_10738ccf4(auStack_e8);
        func_0x00010731e248(auStack_118);
      }
      func_0x00010731e248(&puStack_170);
      func_0x00010738d6ac(uStack_78);
      if (!(bool)uVar6) {
        ___stack_chk_fail();
        func_0x00010738d838();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev();
        func_0x00010738d7f0();
        ppuVar12 = &puStack_170;
        func_0x00010731e248();
        func_0x00010738d734();
        pbStack_1f0 = pbVar21;
        pbStack_1e8 = unaff_x23;
        pbStack_1e0 = unaff_x22;
        plStack_1d8 = plVar1;
        puStack_1d0 = puVar18;
        ppuVar12[1] = (undefined *)0x0;
        *ppuVar12 = (undefined *)0x0;
        ppuVar12[3] = (undefined *)0x0;
        ppuVar12[2] = (undefined *)0x0;
        *(undefined4 *)(ppuVar12 + 4) = 0x3f800000;
        for (uVar20 = (uint)*pbVar15; uVar20 < pbVar15[1]; uVar20 = uVar20 + 1) {
          func_0x00010787da4c(&uStack_1f8,puVar14,uVar20,1);
          while (uVar19 = uStack_1f8, uVar13 = uStack_1f8, func_0x000107882368(), (int)uVar13 != 0)
          {
            func_0x0001078823ac(auStack_20c,uVar19);
            FUN_10738ca84(ppuVar12,auStack_208);
          }
          func_0x000107880dc4(&uStack_1f8);
        }
        return;
      }
      return;
    }
    func_0x00010726236c(auStack_e8,puVar18 + 6);
    func_0x000107262398(&uStack_120,auStack_e8,0x1138369c0);
    func_0x00010724b3d8(auStack_e8);
    pbVar24 = *(byte **)(unaff_x19 + 0x140);
    if ((pbVar24 != (byte *)0x0) && (*(long *)(unaff_x19 + 0x150) != 0)) {
      unaff_x23 = (byte *)(unaff_x19 + 0x150);
      func_0x00010726364c(unaff_x23,&uStack_120);
      pbVar22 = pbVar24 + -1;
      if (((ulong)pbVar24 & (ulong)pbVar22) == 0) {
        pbVar23 = (byte *)((ulong)unaff_x23 & (ulong)pbVar22);
        uVar5 = false;
      }
      else {
        uVar5 = (long)unaff_x23 - (long)pbVar24 < 0;
        pbVar23 = unaff_x23;
        if (pbVar24 <= unaff_x23) {
          uVar10 = 0;
          if (pbVar24 != (byte *)0x0) {
            uVar10 = (ulong)unaff_x23 / (ulong)pbVar24;
          }
          pbVar23 = unaff_x23 + -(uVar10 * (long)pbVar24);
        }
      }
      unaff_x22 = *(byte **)(*(long *)(unaff_x19 + 0x138) + (long)pbVar23 * 8);
      if (unaff_x22 != (byte *)0x0) {
LAB_10738af48:
        while (unaff_x22 = *(byte **)unaff_x22, unaff_x22 != (byte *)0x0) {
          pbVar16 = *(byte **)(unaff_x22 + 8);
          uVar5 = (long)pbVar16 - (long)unaff_x23 < 0;
          if (pbVar16 != unaff_x23) goto LAB_10738af70;
          pbVar16 = unaff_x22 + 0x10;
          func_0x000104c32db4(pbVar16,&uStack_120);
          if (((ulong)pbVar16 & 1) != 0) {
            uVar10 = puVar18[4];
            FUN_10737d77c(uVar10,*(undefined8 *)(*(long *)(unaff_x22 + 0x48) + 0x20));
            if ((uVar10 & 1) == 0) {
              FUN_10738b5c4(auStack_e8,*(undefined8 *)(unaff_x22 + 0x48),unaff_x19 + 0x128);
              pbVar15 = pbStack_d8;
              while (pbVar15 != (byte *)0x0) {
                unaff_x23 = *(byte **)pbVar15;
                func_0x00010738d868();
                func_0x00010738d7e0();
                func_0x00010738d874();
                pbVar15 = unaff_x23;
              }
              func_0x00010738d8a4();
              goto LAB_10738b344;
            }
            goto LAB_10738b348;
          }
        }
      }
    }
LAB_10738af98:
    FUN_10735347c(&uStack_190,puVar18);
    pbVar15 = (byte *)0x12;
    func_0x0001078e364c(&uStack_180,8);
    func_0x000104c2fe00(auStack_e8,&uStack_120);
    uStack_a8 = uStack_188;
    uStack_b0 = uStack_190;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_98 = uStack_178;
    uStack_a0 = uStack_180;
    uStack_180 = 0;
    uStack_178 = 0;
    unaff_x23 = (byte *)(unaff_x19 + 0x150);
    func_0x00010726364c(unaff_x23,auStack_e8);
    pbVar24 = *(byte **)(unaff_x19 + 0x140);
    if (pbVar24 != (byte *)0x0) {
      pbVar22 = pbVar24 + -1;
      if (((ulong)pbVar24 & (ulong)pbVar22) == 0) {
        pbVar21 = (byte *)((ulong)pbVar22 & (ulong)unaff_x23);
        uVar5 = false;
      }
      else {
        uVar5 = (long)unaff_x23 - (long)pbVar24 < 0;
        pbVar21 = unaff_x23;
        if (pbVar24 <= unaff_x23) {
          uVar10 = 0;
          if (pbVar24 != (byte *)0x0) {
            uVar10 = (ulong)unaff_x23 / (ulong)pbVar24;
          }
          pbVar21 = unaff_x23 + -(uVar10 * (long)pbVar24);
        }
      }
      unaff_x22 = *(byte **)(*(long *)(unaff_x19 + 0x138) + (long)pbVar21 * 8);
      if (unaff_x22 != (byte *)0x0) {
        do {
          while( true ) {
            unaff_x22 = *(byte **)unaff_x22;
            if (unaff_x22 == (byte *)0x0) goto LAB_10738b074;
            pbVar23 = *(byte **)(unaff_x22 + 8);
            uVar5 = (long)pbVar23 - (long)unaff_x23 < 0;
            if (pbVar23 != unaff_x23) break;
            pbVar23 = unaff_x22 + 0x10;
            func_0x000104c32db4(pbVar23,auStack_e8);
            if (((ulong)pbVar23 & 1) != 0) goto LAB_10738b334;
          }
          if (((ulong)pbVar24 & (ulong)pbVar22) == 0) {
            pbVar23 = (byte *)((ulong)pbVar23 & (ulong)pbVar22);
          }
          else if (pbVar24 <= pbVar23) {
            uVar10 = 0;
            if (pbVar24 != (byte *)0x0) {
              uVar10 = (ulong)pbVar23 / (ulong)pbVar24;
            }
            pbVar23 = pbVar23 + -(uVar10 * (long)pbVar24);
          }
          uVar5 = (long)pbVar23 - (long)pbVar21 < 0;
        } while (pbVar23 == pbVar21);
      }
    }
LAB_10738b074:
    unaff_x22 = (byte *)0x68;
    __Znwm();
    uStack_128 = 1;
    pbVar22 = unaff_x22 + 0x10;
    unaff_x22[0] = 0;
    unaff_x22[1] = 0;
    unaff_x22[2] = 0;
    unaff_x22[3] = 0;
    unaff_x22[4] = 0;
    unaff_x22[5] = 0;
    unaff_x22[6] = 0;
    unaff_x22[7] = 0;
    *(byte **)(unaff_x22 + 8) = unaff_x23;
    pbStack_138 = unaff_x22;
    plStack_130 = plVar1;
    func_0x000104c2fe00(pbVar22,auStack_e8);
    *(undefined8 *)(unaff_x22 + 0x50) = uStack_a8;
    *(ulong *)(unaff_x22 + 0x48) = uStack_b0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    *(undefined8 *)(unaff_x22 + 0x60) = uStack_98;
    *(undefined8 *)(unaff_x22 + 0x58) = uStack_a0;
    uStack_a0 = 0;
    uStack_98 = 0;
    func_0x00010738d850(*(undefined8 *)(unaff_x19 + 0x150));
    if ((pbVar24 == (byte *)0x0) || (func_0x00010738d844(), (bool)uVar5)) {
      bVar4 = (byte *)0x2 < pbVar24;
      bVar7 = pbVar24 == (byte *)0x3;
      func_0x00010738d6e0((long)pbVar24 << 1);
      pbVar21 = extraout_x8_00;
      if (!bVar4 || bVar7) {
        pbVar21 = extraout_x9;
      }
      if (pbVar21 + -1 == (byte *)0x0) {
        pbVar21 = (byte *)0x2;
      }
      else if (((ulong)pbVar21 & (ulong)(pbVar21 + -1)) != 0) {
        __ZNSt3__112__next_primeEm();
        pbVar22 = pbVar21;
      }
      pbVar24 = *(byte **)(unaff_x19 + 0x140);
      if (pbVar24 < pbVar21) {
LAB_10738b124:
        if ((ulong)pbVar21 >> 0x3d != 0) {
          func_0x000104bd35f4();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10738b4d8);
          (*pcVar3)();
        }
        lVar9 = (long)pbVar21 << 3;
        __Znwm(lVar9);
        func_0x00010738ce80(unaff_x19 + 0x138,lVar9);
        pbVar24 = (byte *)0x0;
        *(byte **)(unaff_x19 + 0x140) = pbVar21;
        lVar9 = *(long *)(unaff_x19 + 0x138);
        while (pbVar21 != pbVar24) {
          func_0x00010738d8e4();
          lVar9 = extraout_x8_01;
          pbVar24 = extraout_x9_00;
        }
        plVar17 = (long *)*plVar1;
        pbVar24 = pbVar21;
        if (plVar17 != (long *)0x0) {
          pbVar23 = (byte *)plVar17[1];
          pbVar22 = pbVar21 + -1;
          uVar10 = 0;
          if (pbVar21 != (byte *)0x0) {
            uVar10 = (ulong)pbVar23 / (ulong)pbVar21;
          }
          pbVar16 = pbVar23;
          if (pbVar21 <= pbVar23) {
            pbVar16 = pbVar23 + -(uVar10 * (long)pbVar21);
          }
          if (((ulong)pbVar21 & (ulong)pbVar22) == 0) {
            pbVar16 = (byte *)((ulong)pbVar23 & (ulong)pbVar22);
          }
          *(long **)(lVar9 + (long)pbVar16 * 8) = plVar1;
          while (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0) {
            pbVar23 = (byte *)plVar17[1];
            if (((ulong)pbVar21 & (ulong)pbVar22) == 0) {
              pbVar23 = (byte *)((ulong)pbVar23 & (ulong)pbVar22);
            }
            else if (pbVar21 <= pbVar23) {
              uVar10 = 0;
              if (pbVar21 != (byte *)0x0) {
                uVar10 = (ulong)pbVar23 / (ulong)pbVar21;
              }
              pbVar23 = pbVar23 + -(uVar10 * (long)pbVar21);
            }
            if (pbVar23 != pbVar16) {
              if (*(long *)(lVar9 + (long)pbVar23 * 8) == 0) {
                func_0x00010738d8c4();
                lVar9 = extraout_x8_03;
                pbVar22 = extraout_x9_02;
                plVar17 = extraout_x12;
                pbVar16 = extraout_x11_00;
              }
              else {
                func_0x00010738d708();
                lVar9 = extraout_x8_02;
                pbVar22 = extraout_x9_01;
                plVar17 = extraout_x10;
                pbVar16 = extraout_x11;
              }
            }
          }
        }
      }
      else if (pbVar21 < pbVar24) {
        func_0x00010738d8fc((float)*(ulong *)(unaff_x19 + 0x150),*(undefined4 *)(unaff_x19 + 0x158))
        ;
        if ((pbVar24 < (byte *)0x3) || (((ulong)pbVar24 & (ulong)(pbVar24 + -1)) != 0)) {
          __ZNSt3__112__next_primeEm();
        }
        else {
          func_0x00010738d6c0();
        }
        if (pbVar21 <= pbVar22) {
          pbVar21 = pbVar22;
        }
        if (pbVar21 < pbVar24) {
          if (pbVar21 != (byte *)0x0) goto LAB_10738b124;
          func_0x00010738ce80(unaff_x19 + 0x138,0);
          *(undefined8 *)(unaff_x19 + 0x140) = 0;
          pbVar24 = (byte *)0x0;
        }
        else {
          pbVar24 = *(byte **)(unaff_x19 + 0x140);
        }
      }
      if (((ulong)pbVar24 & (ulong)(pbVar24 + -1)) == 0) {
        pbVar21 = (byte *)((ulong)(pbVar24 + -1) & (ulong)unaff_x23);
      }
      else {
        pbVar21 = unaff_x23;
        if (pbVar24 <= unaff_x23) {
          uVar10 = 0;
          if (pbVar24 != (byte *)0x0) {
            uVar10 = (ulong)unaff_x23 / (ulong)pbVar24;
          }
          pbVar21 = unaff_x23 + -(uVar10 * (long)pbVar24);
        }
      }
    }
    lVar9 = *(long *)(unaff_x19 + 0x138);
    if (*(long *)(lVar9 + (long)pbVar21 * 8) == 0) {
      *(long *)unaff_x22 = *plVar1;
      *plVar1 = (long)unaff_x22;
      *(long **)(lVar9 + (long)pbVar21 * 8) = plVar1;
      if (*(long *)unaff_x22 != 0) {
        pbVar21 = *(byte **)(*(long *)unaff_x22 + 8);
        if (((ulong)pbVar24 & (ulong)(pbVar24 + -1)) == 0) {
          pbVar21 = (byte *)((ulong)pbVar21 & (ulong)(pbVar24 + -1));
        }
        else if (pbVar24 <= pbVar21) {
          uVar10 = 0;
          if (pbVar24 != (byte *)0x0) {
            uVar10 = (ulong)pbVar21 / (ulong)pbVar24;
          }
          pbVar21 = pbVar21 + -(uVar10 * (long)pbVar24);
        }
        *(byte **)(lVar9 + (long)pbVar21 * 8) = unaff_x22;
      }
    }
    else {
      func_0x00010738d77c();
    }
    pbStack_138 = (byte *)0x0;
    *(long *)(unaff_x19 + 0x150) = *(long *)(unaff_x19 + 0x150) + 1;
    FUN_10738ce98(&pbStack_138);
LAB_10738b334:
    FUN_10738ca2c(auStack_e8);
    func_0x00010738ca58(&uStack_190);
LAB_10738b344:
    pbVar21 = (byte *)0x1;
LAB_10738b348:
    puVar11 = puVar18;
    func_0x000104c2d3c0();
    iVar8 = (int)unaff_x22 + 0x58;
    puVar14 = (undefined8 *)0x0;
    func_0x0001078e36b0(*puVar11,puVar11[1],0);
    if (iVar8 != 0) {
      puVar14 = puVar18;
      FUN_10738b5c4(auStack_e8,puVar18,unaff_x19 + 0x128);
      pbVar15 = pbStack_d8;
      while (pbVar15 != (byte *)0x0) {
        unaff_x22 = *(byte **)pbVar15;
        func_0x00010738d868();
        func_0x00010738d7e0();
        func_0x00010738d874();
        pbVar15 = unaff_x22;
      }
      func_0x00010738d8a4();
      pbVar21 = (byte *)0x1;
    }
    func_0x000104c2f714(&uStack_120);
    puVar18 = puVar18 + 0xe;
  } while( true );
LAB_10738af70:
  if (((ulong)pbVar24 & (ulong)pbVar22) == 0) {
    pbVar16 = (byte *)((ulong)pbVar16 & (ulong)pbVar22);
  }
  else if (pbVar24 <= pbVar16) {
    uVar10 = 0;
    if (pbVar24 != (byte *)0x0) {
      uVar10 = (ulong)pbVar16 / (ulong)pbVar24;
    }
    pbVar16 = pbVar16 + -(uVar10 * (long)pbVar24);
  }
  uVar5 = (long)pbVar16 - (long)pbVar23 < 0;
  if (pbVar16 != pbVar23) goto LAB_10738af98;
  goto LAB_10738af48;
}



/* Entry: 10738b5c4; end: 10738b697;  */

void FUN_10738b5c4(undefined8 *param_1,undefined8 param_2,byte *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  uVar3 = (uint)*param_3;
  while( true ) {
    if (param_3[1] <= uVar3) break;
    func_0x00010787da4c(&uStack_48,param_2,uVar3,1);
    while( true ) {
      uVar1 = uStack_48;
      uVar2 = uStack_48;
      func_0x000107882368();
      if ((int)uVar2 == 0) break;
      func_0x0001078823ac(auStack_5c,uVar1);
      FUN_10738ca84(param_1,auStack_58);
    }
    func_0x000107880dc4(&uStack_48);
    uVar3 = uVar3 + 1;
  }
  return;
}



/* Entry: 10738b698; end: 10738b863;  */

void FUN_10738b698(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lStack_90;
  undefined1 uStack_88;
  undefined8 *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 *puStack_58;
  long *plStack_50;
  undefined8 uStack_48;
  
  lStack_78 = 0;
  puStack_80 = (undefined8 *)0x0;
  uStack_68 = 0;
  lStack_70 = 0;
  uStack_60 = 0x3f800000;
  lStack_90 = param_1 + 8;
  uStack_88 = 1;
  func_0x00010724e404();
  plVar6 = (long *)lStack_70;
  if (&puStack_80 != (undefined8 **)(param_1 + 0xb0)) {
    uStack_60 = *(undefined4 *)(param_1 + 0xd0);
    plVar4 = *(long **)(param_1 + 0xc0);
    puVar3 = puStack_80;
    lVar1 = lStack_78;
    if (lStack_78 != 0) {
      for (; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      lStack_70 = 0;
      uStack_68 = 0;
      for (plVar5 = plVar4;
          (plVar4 = plVar5, plVar6 != (long *)0x0 && (plVar4 = (long *)0x0, plVar5 != (long *)0x0));
          plVar5 = (long *)*plVar5) {
        *(undefined4 *)(plVar6 + 2) = *(undefined4 *)(plVar5 + 2);
        FUN_10738d3b8(plVar6 + 3,plVar5 + 3);
        plVar6 = (long *)*plVar6;
        func_0x00010738d8b8();
      }
      func_0x00010738d8ac();
    }
    for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      puVar3 = (undefined8 *)0x38;
      __Znwm();
      uStack_48 = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(plVar4 + 2);
      puStack_58 = puVar3;
      plStack_50 = &lStack_70;
      FUN_10738d4f8(puVar3 + 3,plVar4 + 3);
      uStack_48 = CONCAT71(uStack_48._1_7_,1);
      puVar3[1] = (ulong)*(uint *)(puVar3 + 2);
      func_0x00010738d8b8();
      puStack_58 = (undefined8 *)0x0;
      FUN_10738d584(&puStack_58);
    }
  }
  func_0x00010724e49c(&lStack_90);
  plVar6 = (long *)lStack_70;
  while( true ) {
    if (plVar6 == (long *)0x0) {
      func_0x00010738cde0(&puStack_80);
      return;
    }
    if ((long *)plVar6[6] == (long *)0x0) break;
    func_0x00010738d7c4(*(undefined8 *)(*(long *)plVar6[6] + 0x30));
    plVar6 = (long *)*plVar6;
  }
  func_0x000104bfeb48();
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10738b81c);
  (*pcVar2)();
}



/* Entry: 10738b864; end: 10738b927;  */

/* WARNING: Type propagation algorithm not settling */

long ** FUN_10738b864(undefined8 param_1,byte *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  long **pplVar7;
  long *plVar8;
  ulong uVar9;
  long **pplVar10;
  long **pplVar11;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 extraout_x8_01;
  long extraout_x8_02;
  ulong *extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  ulong *puVar12;
  ulong *extraout_x9;
  ulong *extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  long *extraout_x10;
  long *extraout_x10_00;
  ulong *extraout_x11;
  ulong *extraout_x11_00;
  ulong *extraout_x11_01;
  long extraout_x12;
  long *plVar13;
  long *extraout_x12_00;
  ulong *puVar14;
  uint uVar15;
  long **unaff_x19;
  long *plVar16;
  long lVar17;
  long *plVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong unaff_x25;
  uint uVar21;
  long *unaff_x26;
  undefined4 *puVar22;
  ulong *puVar23;
  ulong *unaff_x27;
  long *plStack_408;
  long **pplStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  ulong *puStack_3e8;
  long *plStack_3e0;
  ulong uStack_3d8;
  long *plStack_3d0;
  long *plStack_3c8;
  undefined8 uStack_3c0;
  long *plStack_3b8;
  long *plStack_3b0;
  long **pplStack_3a8;
  undefined1 **ppuStack_3a0;
  code *pcStack_398;
  long **pplStack_370;
  undefined *puStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long *plStack_340;
  undefined8 uStack_338;
  long lStack_330;
  ulong uStack_328;
  ulong auStack_320 [2];
  long *aplStack_310 [2];
  long *aplStack_300 [2];
  undefined1 auStack_2f0 [16];
  undefined1 auStack_2e0 [72];
  undefined1 auStack_298 [24];
  long *plStack_280;
  undefined8 uStack_278;
  long *plStack_270;
  ulong uStack_268;
  long lStack_260;
  long alStack_258 [8];
  long *plStack_218;
  long *plStack_210;
  long *plStack_208;
  undefined1 uStack_200;
  undefined1 auStack_1e0 [64];
  undefined8 uStack_1a0;
  long lStack_198;
  ulong uStack_190;
  long *plStack_180;
  ulong uStack_178;
  undefined4 uStack_170;
  undefined8 uStack_130;
  long lStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  long *aplStack_98 [14];
  undefined8 uStack_28;
  
  func_0x00010738d6f4();
  uVar5 = *(int *)param_2 == 1;
  uStack_28 = extraout_x8;
  if ((bool)uVar5) {
    FUN_107352d48();
    UNRECOVERED_JUMPTABLE = (code *)(*unaff_x19)[2];
LAB_10738b8ac:
    func_0x00010738d6ac(uStack_28);
    if ((bool)uVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010738b8cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return unaff_x19;
    }
  }
  else {
    if (*(int *)param_2 == 0) {
      func_0x0001072bf8d0();
      UNRECOVERED_JUMPTABLE = (code *)(*unaff_x19)[3];
      goto LAB_10738b8ac;
    }
    FUN_107352d84();
    func_0x0001072c0094(aplStack_98);
    func_0x00010738d85c((*unaff_x19)[2]);
    pplVar7 = aplStack_98;
    func_0x000107269394(pplVar7);
    func_0x00010738d6ac(uStack_28);
    if ((bool)uVar5) {
      return pplVar7;
    }
  }
  uVar5 = 0;
  ___stack_chk_fail();
  func_0x00010738d838();
  func_0x000107269394();
  func_0x00010738d734();
  pcStack_a8 = FUN_10738b928;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x00010738d6f4();
  uStack_110 = extraout_x8_01;
  func_0x0001072c8f9c(&plStack_280);
  pplStack_370 = unaff_x19 + 0x29;
  while (pplStack_370 = (long **)*pplStack_370, pplStack_370 != (long **)0x0) {
    unaff_x25 = (ulong)*param_2;
    unaff_x26 = (long *)(ulong)*(uint *)(param_2 + 4);
    unaff_x27 = (ulong *)(ulong)*(uint *)(param_2 + 8);
    func_0x00010002b838(&plStack_218,&UNK_10f40b0eb);
    func_0x0001078e3b9c(auStack_298,0x4004000000000000,0x3ff8000000000000,pplStack_370 + 0xb,
                        unaff_x25,unaff_x26,unaff_x27,&plStack_218,0x1000,0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_218);
    func_0x000107262718(auStack_2f0,auStack_298);
    plStack_218 = (long *)0x0;
    plStack_210 = (long *)0x0;
    plStack_208 = (long *)0x0;
    FUN_10732be90(auStack_2e0,auStack_2f0,&plStack_218,0x2000);
    func_0x0001072c9240(&plStack_218);
    func_0x000104c33970(auStack_2f0);
    func_0x000100060964(&plStack_218,&UNK_10f40b0eb);
    func_0x0001078507f8(aplStack_300,auStack_2e0,&plStack_218);
    func_0x000104c2f714(&plStack_218);
    if (aplStack_300[0] != (long *)0x0) {
      plVar16 = (long *)0x0;
      while( true ) {
        plVar18 = aplStack_300[0];
        (**(code **)(*aplStack_300[0] + 0x10))();
        uVar5 = plVar16 == plVar18;
        if (plVar18 <= plVar16) break;
        (**(code **)(*aplStack_300[0] + 0x18))(aplStack_310,aplStack_300[0],plVar16);
        plVar18 = aplStack_310[0];
        (**(code **)(*aplStack_310[0] + 0x10))();
        if ((int)plVar18 == 3) {
          lStack_330 = 0;
          uStack_328 = 0;
          auStack_320[0] = 0;
          (**(code **)(*aplStack_310[0] + 0x38))(&plStack_218);
          pplVar7 = &plStack_218;
          FUN_107330078();
          plVar13 = pplVar7[1];
          for (plVar18 = *pplVar7; plVar18 != plVar13; plVar18 = plVar18 + 3) {
            uStack_1a0 = 0;
            lStack_198 = 0;
            uStack_190 = 0;
            puVar1 = (undefined4 *)plVar18[1];
            for (puVar22 = (undefined4 *)*plVar18; puVar22 != puVar1; puVar22 = puVar22 + 1) {
              plStack_218 = (long *)CONCAT44(plStack_218._4_4_,*puVar22);
              func_0x0001072c7768(&uStack_1a0,&plStack_218);
            }
            lStack_128 = lStack_198;
            uStack_130 = uStack_1a0;
            uStack_120 = uStack_190;
            uStack_1a0 = 0;
            lStack_198 = 0;
            uStack_190 = 0;
            alStack_258[2] = 0;
            alStack_258[3] = 0;
            alStack_258[1] = 0;
            uStack_268 = uStack_268 & 0xffffffffffffff00;
            plStack_270 = alStack_258 + 1;
            func_0x0001072c6194(alStack_258 + 1,1);
            lStack_260 = alStack_258[2];
            alStack_258[0] = alStack_258[2];
            uStack_200 = 0;
            plStack_218 = alStack_258 + 3;
            plStack_210 = &lStack_260;
            plStack_208 = alStack_258;
            func_0x000107297530(alStack_258[2],&uStack_130);
            lVar17 = alStack_258[0] + 0x18;
            uStack_200 = 1;
            alStack_258[0] = lVar17;
            func_0x0001072c62a8(&plStack_218);
            uStack_268 = CONCAT71(uStack_268._1_7_,1);
            alStack_258[2] = lVar17;
            func_0x0001072c630c(&plStack_270);
            if (uStack_328 < auStack_320[0]) {
              func_0x00010738d78c();
              unaff_x25 = extraout_x8_02 + 0x18;
            }
            else {
              plVar8 = &lStack_330;
              func_0x0001072c8bb0(plVar8,(long)(uStack_328 - lStack_330) / 0x18 + 1);
              func_0x0001072c89f8(&plStack_218,plVar8,(long)(uStack_328 - lStack_330) / 0x18,
                                  auStack_320);
              func_0x00010738d78c(plStack_208);
              plStack_208 = plStack_208 + 3;
              func_0x0001072c89d0(&lStack_330,&plStack_218);
              unaff_x25 = uStack_328;
              func_0x0001072c8aa0(&plStack_218);
            }
            uStack_328 = unaff_x25;
            func_0x0001072c6820(alStack_258 + 1);
            func_0x000104c336c8(&uStack_130);
            func_0x000104c336c8(&uStack_1a0);
          }
          uStack_130 = CONCAT44(uStack_130._4_4_,1);
          uStack_120 = uStack_328;
          lStack_128 = lStack_330;
          uStack_118 = auStack_320[0];
          lStack_330 = 0;
          uStack_328 = 0;
          auStack_320[0] = 0;
          func_0x000100060964(alStack_258 + 1,&UNK_10f40acdb);
          func_0x000104c318bc(&plStack_218,alStack_258 + 1);
          func_0x00010724ae4c(auStack_1e0,&DAT_10f34b957);
          func_0x000107268084(&plStack_270,&plStack_218,1);
          func_0x0001072c6f80(&uStack_1a0,&uStack_130);
          uStack_178 = uStack_268;
          plStack_180 = plStack_270;
          plStack_270 = (long *)0x0;
          uStack_268 = 0;
          uStack_170 = 4;
          func_0x000104c335c0(&plStack_270);
          func_0x0001072684c8(&plStack_218);
          func_0x000104c2f714(alStack_258 + 1);
          func_0x0001072c5cdc(&plStack_280);
          unaff_x26 = plStack_280;
          uVar9 = plStack_280[1];
          unaff_x27 = (ulong *)(plStack_280 + 2);
          if (uVar9 < *unaff_x27) {
            func_0x0001072c6f48(uVar9,&uStack_1a0);
            lVar17 = uVar9 + 0x70;
            unaff_x26[1] = lVar17;
          }
          else {
            plVar18 = plStack_280;
            func_0x0001072c7268(plStack_280,(long)(uVar9 - *plStack_280) / 0x70 + 1);
            func_0x0001072c6e84(&plStack_218,plVar18,(unaff_x26[1] - *unaff_x26) / 0x70,unaff_x27);
            func_0x0001072c6f48(plStack_208,&uStack_1a0);
            plStack_208 = plStack_208 + 0xe;
            func_0x0001072c6e50(unaff_x26,&plStack_218);
            lVar17 = unaff_x26[1];
            func_0x0001072c7020(&plStack_218);
          }
          unaff_x26[1] = lVar17;
          func_0x0001072c6ccc(&uStack_1a0);
          func_0x0001072c6b38(&uStack_130);
          func_0x0001072c6c1c(&lStack_330);
        }
        FUN_107330fdc(aplStack_310);
        plVar16 = (long *)((long)plVar16 + 1);
      }
    }
    func_0x000107331000(aplStack_300);
    func_0x00010732becc(auStack_2e0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_298);
  }
  plVar16 = unaff_x19[0x26];
  uStack_338 = uStack_278;
  plStack_340 = plStack_280;
  plStack_280 = (long *)0x0;
  uStack_278 = 0;
  puStack_360 = &UNK_10e52b660;
  uStack_358 = 0;
  uStack_350 = 0;
  uStack_348 = 0;
  FUN_10735a3e4(extraout_x8_00,unaff_x19 + 0x1d,plVar16,&plStack_340,&puStack_360);
  func_0x000107261dac(&puStack_360);
  func_0x0001072c8f3c(&plStack_340);
  pplVar7 = &plStack_280;
  func_0x0001072c8f3c();
  func_0x00010738d6ac(uStack_110);
  if ((bool)uVar5) {
    return pplVar7;
  }
  ___stack_chk_fail();
  func_0x000107261dac(&puStack_360);
  func_0x0001072c8f3c(&plStack_340);
  pplVar10 = &plStack_280;
  func_0x0001072c8f3c();
  func_0x00010738d734();
  uStack_3f0 = 0x18;
  uStack_3c0 = 1;
  pcStack_398 = FUN_10738bf54;
  pplVar11 = pplVar10 + 1;
  puStack_3e8 = unaff_x27;
  plStack_3e0 = unaff_x26;
  uStack_3d8 = unaff_x25;
  plStack_3d0 = alStack_258;
  plStack_3c8 = &lStack_260;
  plStack_3b8 = alStack_258 + 1;
  plStack_3b0 = alStack_258 + 3;
  pplStack_3a8 = pplVar7;
  ppuStack_3a0 = &puStack_b0;
  FUN_10738c344();
  uVar5 = (int)(*(byte *)(plVar16 + 0xe) - 1) < 0;
  if (*(byte *)(plVar16 + 0xe) != 1) {
    return pplVar11;
  }
  func_0x0001072ab574();
  if ((*(byte *)(plVar16 + 0xe) & 1) == 0) {
    func_0x000104bdc2c8();
    goto LAB_10738c310;
  }
  puVar20 = (ulong *)((ulong)pplVar11 & 0xffffffff);
  puVar23 = (ulong *)pplVar10[0x36];
  uVar15 = (uint)pplVar11;
  if (puVar23 != (ulong *)0x0) {
    uVar9 = (long)puVar23 - 1;
    uVar21 = (uint)puVar23;
    if (((ulong)puVar23 & uVar9) == 0) {
      unaff_x27 = (ulong *)((ulong)(uVar21 - 1) & (ulong)puVar20);
      uVar5 = false;
    }
    else {
      uVar5 = (long)puVar23 - (long)puVar20 < 0;
      unaff_x27 = puVar20;
      if (puVar23 <= puVar20) {
        uVar2 = 0;
        if (uVar21 != 0) {
          uVar2 = uVar15 / uVar21;
        }
        unaff_x27 = (ulong *)(ulong)(uVar15 - uVar2 * uVar21);
      }
    }
    plVar18 = (long *)pplVar10[0x35][(long)unaff_x27];
    if (plVar18 != (long *)0x0) {
      do {
        while( true ) {
          plVar18 = (long *)*plVar18;
          if (plVar18 == (long *)0x0) goto LAB_10738c040;
          puVar12 = (ulong *)plVar18[1];
          if (puVar12 != puVar20) break;
          uVar5 = (int)(*(uint *)(plVar18 + 2) - uVar15) < 0;
          if (*(uint *)(plVar18 + 2) == uVar15) goto LAB_10738c2c4;
        }
        if (((ulong)puVar23 & uVar9) == 0) {
          puVar12 = (ulong *)((ulong)puVar12 & uVar9);
        }
        else if (puVar23 <= puVar12) {
          uVar3 = 0;
          if (puVar23 != (ulong *)0x0) {
            uVar3 = (ulong)puVar12 / (ulong)puVar23;
          }
          puVar12 = (ulong *)((long)puVar12 - uVar3 * (long)puVar23);
        }
        uVar5 = (long)puVar12 - (long)unaff_x27 < 0;
      } while (puVar12 == unaff_x27);
    }
  }
LAB_10738c040:
  plVar18 = (long *)0x88;
  __Znwm();
  pplVar7 = pplVar10 + 0x37;
  uStack_3f8 = 0;
  *plVar18 = 0;
  plVar18[1] = (long)puVar20;
  *(uint *)(plVar18 + 2) = uVar15;
  plVar18[4] = 0;
  plVar18[3] = 0;
  plVar18[6] = 0;
  plVar18[5] = 0;
  plVar18[8] = 0;
  plVar18[7] = 0;
  plVar18[10] = 0;
  plVar18[9] = 0;
  plVar18[0xc] = 0;
  plVar18[0xb] = 0;
  plVar18[0xe] = 0;
  plVar18[0xd] = 0;
  plVar18[0x10] = 0;
  plVar18[0xf] = 0;
  plStack_408 = plVar18;
  pplStack_400 = pplVar7;
  func_0x000104c2f64c(plVar18 + 3);
  puVar12 = (ulong *)(plVar18 + 10);
  func_0x000104c2f64c();
  uStack_3f8 = CONCAT71(uStack_3f8._1_7_,1);
  func_0x00010738d850(pplVar10[0x38]);
  if ((puVar23 != (ulong *)0x0) && (func_0x00010738d844(), !(bool)uVar5)) goto LAB_10738c254;
  bVar4 = (ulong *)0x2 < puVar23;
  bVar6 = puVar23 == (ulong *)0x3;
  func_0x00010738d6e0((long)puVar23 << 1);
  puVar19 = extraout_x8_03;
  if (!bVar4 || bVar6) {
    puVar19 = extraout_x9;
  }
  if ((long)puVar19 - 1U == 0) {
    puVar19 = (ulong *)0x2;
  }
  else if (((ulong)puVar19 & (long)puVar19 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    puVar12 = puVar19;
  }
  puVar23 = (ulong *)pplVar10[0x36];
  if (puVar23 < puVar19) {
LAB_10738c10c:
    if ((ulong)puVar19 >> 0x3d != 0) {
      func_0x000104bd35f4();
LAB_10738c310:
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x10738c314);
      (*UNRECOVERED_JUMPTABLE)();
    }
    lVar17 = (long)puVar19 << 3;
    __Znwm(lVar17);
    FUN_10738d5bc(pplVar10 + 0x35,lVar17);
    puVar23 = (ulong *)0x0;
    pplVar10[0x36] = (long *)puVar19;
    while (bVar6 = puVar23 <= puVar19, puVar19 != puVar23) {
      func_0x00010738d8e4();
      puVar23 = extraout_x9_00;
    }
    puVar23 = puVar19;
    if (*pplVar7 != (long *)0x0) {
      func_0x00010738d8d0();
      puVar12 = extraout_x11;
      if (bVar6) {
        puVar12 = (ulong *)((long)extraout_x11 - extraout_x12 * (long)puVar19);
      }
      if (((ulong)puVar19 & extraout_x9_01) == 0) {
        puVar12 = (ulong *)((ulong)extraout_x11 & extraout_x9_01);
      }
      *(long ***)(extraout_x8_04 + (long)puVar12 * 8) = pplVar7;
      lVar17 = extraout_x8_04;
      uVar9 = extraout_x9_01;
      plVar13 = extraout_x10;
      while (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0) {
        puVar14 = (ulong *)plVar13[1];
        if (((ulong)puVar19 & uVar9) == 0) {
          puVar14 = (ulong *)((ulong)puVar14 & uVar9);
        }
        else if (puVar19 <= puVar14) {
          uVar3 = 0;
          if (puVar19 != (ulong *)0x0) {
            uVar3 = (ulong)puVar14 / (ulong)puVar19;
          }
          puVar14 = (ulong *)((long)puVar14 - uVar3 * (long)puVar19);
        }
        if (puVar14 != puVar12) {
          if (*(long *)(lVar17 + (long)puVar14 * 8) == 0) {
            func_0x00010738d8c4();
            lVar17 = extraout_x8_06;
            uVar9 = extraout_x9_03;
            plVar13 = extraout_x12_00;
            puVar12 = extraout_x11_01;
          }
          else {
            func_0x00010738d708();
            lVar17 = extraout_x8_05;
            uVar9 = extraout_x9_02;
            plVar13 = extraout_x10_00;
            puVar12 = extraout_x11_00;
          }
        }
      }
    }
  }
  else if (puVar19 < puVar23) {
    func_0x00010738d8fc((float)pplVar10[0x38],*(undefined4 *)(pplVar10 + 0x39));
    if ((puVar23 < (ulong *)0x3) || (((ulong)puVar23 & (long)puVar23 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010738d6c0();
    }
    if (puVar19 <= puVar12) {
      puVar19 = puVar12;
    }
    if (puVar19 < puVar23) {
      if (puVar19 != (ulong *)0x0) goto LAB_10738c10c;
      FUN_10738d5bc(pplVar10 + 0x35,0);
      pplVar10[0x36] = (long *)0x0;
      puVar23 = (ulong *)0x0;
    }
    else {
      puVar23 = (ulong *)pplVar10[0x36];
    }
  }
  if (((ulong)puVar23 & (long)puVar23 - 1U) == 0) {
    unaff_x27 = (ulong *)((ulong)((int)puVar23 - 1) & (ulong)puVar20);
  }
  else {
    unaff_x27 = puVar20;
    if (puVar23 <= puVar20) {
      uVar9 = 0;
      if (puVar23 != (ulong *)0x0) {
        uVar9 = (ulong)puVar20 / (ulong)puVar23;
      }
      unaff_x27 = (ulong *)((long)puVar20 - uVar9 * (long)puVar23);
    }
  }
LAB_10738c254:
  plVar13 = pplVar10[0x35];
  if (plVar13[(long)unaff_x27] == 0) {
    *plVar18 = (long)*pplVar7;
    *pplVar7 = plVar18;
    plVar13[(long)unaff_x27] = (long)pplVar7;
    if (*plVar18 != 0) {
      puVar20 = *(ulong **)(*plVar18 + 8);
      if (((ulong)puVar23 & (long)puVar23 - 1U) == 0) {
        puVar20 = (ulong *)((ulong)puVar20 & (long)puVar23 - 1U);
      }
      else if (puVar23 <= puVar20) {
        uVar9 = 0;
        if (puVar23 != (ulong *)0x0) {
          uVar9 = (ulong)puVar20 / (ulong)puVar23;
        }
        puVar20 = (ulong *)((long)puVar20 - uVar9 * (long)puVar23);
      }
      plVar13[(long)puVar20] = (long)plVar18;
    }
  }
  else {
    func_0x00010738d77c();
  }
  plStack_408 = (long *)0x0;
  pplVar10[0x38] = (long *)((long)pplVar10[0x38] + 1);
  FUN_10738d5d4(&plStack_408);
LAB_10738c2c4:
  func_0x000107262f3c(plVar18 + 3,plVar16);
  func_0x000107262f3c(plVar18 + 10,plVar16 + 7);
  func_0x00010738d87c();
  return pplVar11;
}



/* Entry: 10738b928; end: 10738bf53;  */

/* WARNING: Type propagation algorithm not settling */

long ** FUN_10738b928(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  long *plVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined1 in_ZR;
  bool bVar6;
  undefined1 uVar7;
  bool bVar8;
  long *plVar9;
  ulong uVar10;
  long **pplVar11;
  long **pplVar12;
  long **pplVar13;
  long lVar14;
  undefined8 extraout_x8;
  long extraout_x8_00;
  ulong *extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong *puVar15;
  ulong *extraout_x9;
  ulong *extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  long *extraout_x10;
  long *extraout_x10_00;
  ulong *extraout_x11;
  ulong *extraout_x11_00;
  ulong *extraout_x11_01;
  long extraout_x12;
  long *plVar16;
  long *extraout_x12_00;
  ulong *puVar17;
  uint uVar18;
  long unaff_x19;
  long *plVar19;
  long lVar20;
  ulong *puVar21;
  ulong *puVar22;
  ulong unaff_x25;
  uint uVar23;
  long *unaff_x26;
  undefined4 *puVar24;
  ulong *puVar25;
  ulong *unaff_x27;
  long *plStack_368;
  long **pplStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  ulong *puStack_348;
  long *plStack_340;
  ulong uStack_338;
  long *plStack_330;
  long *plStack_328;
  undefined8 uStack_320;
  long *plStack_318;
  long *plStack_310;
  long **pplStack_308;
  undefined1 *puStack_300;
  code *pcStack_2f8;
  long *plStack_2d0;
  undefined *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  long lStack_290;
  ulong uStack_288;
  ulong auStack_280 [2];
  long *aplStack_270 [2];
  long *aplStack_260 [2];
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [72];
  undefined1 auStack_1f8 [24];
  long *plStack_1e0;
  undefined8 uStack_1d8;
  long *plStack_1d0;
  ulong uStack_1c8;
  long lStack_1c0;
  long alStack_1b8 [8];
  long *plStack_178;
  long *plStack_170;
  long *plStack_168;
  undefined1 uStack_160;
  undefined1 auStack_140 [64];
  undefined8 uStack_100;
  long lStack_f8;
  ulong uStack_f0;
  long *plStack_e0;
  ulong uStack_d8;
  undefined4 uStack_d0;
  undefined8 uStack_90;
  long lStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  
  func_0x00010738d6f4();
  uStack_70 = extraout_x8;
  func_0x0001072c8f9c(&plStack_1e0);
  plStack_2d0 = (long *)(unaff_x19 + 0x148);
  while (plStack_2d0 = (long *)*plStack_2d0, plStack_2d0 != (long *)0x0) {
    unaff_x25 = (ulong)*param_3;
    unaff_x26 = (long *)(ulong)*(uint *)(param_3 + 4);
    unaff_x27 = (ulong *)(ulong)*(uint *)(param_3 + 8);
    func_0x00010002b838(&plStack_178,&UNK_10f40b0eb);
    func_0x0001078e3b9c(auStack_1f8,0x4004000000000000,0x3ff8000000000000,plStack_2d0 + 0xb,
                        unaff_x25,unaff_x26,unaff_x27,&plStack_178,0x1000,0);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(&plStack_178);
    func_0x000107262718(auStack_250,auStack_1f8);
    plStack_178 = (long *)0x0;
    plStack_170 = (long *)0x0;
    plStack_168 = (long *)0x0;
    FUN_10732be90(auStack_240,auStack_250,&plStack_178,0x2000);
    func_0x0001072c9240(&plStack_178);
    func_0x000104c33970(auStack_250);
    func_0x000100060964(&plStack_178,&UNK_10f40b0eb);
    func_0x0001078507f8(aplStack_260,auStack_240,&plStack_178);
    func_0x000104c2f714(&plStack_178);
    if (aplStack_260[0] != (long *)0x0) {
      plVar19 = (long *)0x0;
      while( true ) {
        plVar16 = aplStack_260[0];
        (**(code **)(*aplStack_260[0] + 0x10))();
        in_ZR = plVar19 == plVar16;
        if (plVar16 <= plVar19) break;
        (**(code **)(*aplStack_260[0] + 0x18))(aplStack_270,aplStack_260[0],plVar19);
        plVar16 = aplStack_270[0];
        (**(code **)(*aplStack_270[0] + 0x10))();
        if ((int)plVar16 == 3) {
          lStack_290 = 0;
          uStack_288 = 0;
          auStack_280[0] = 0;
          (**(code **)(*aplStack_270[0] + 0x38))(&plStack_178);
          pplVar11 = &plStack_178;
          FUN_107330078();
          plVar1 = pplVar11[1];
          for (plVar16 = *pplVar11; plVar16 != plVar1; plVar16 = plVar16 + 3) {
            uStack_100 = 0;
            lStack_f8 = 0;
            uStack_f0 = 0;
            puVar2 = (undefined4 *)plVar16[1];
            for (puVar24 = (undefined4 *)*plVar16; puVar24 != puVar2; puVar24 = puVar24 + 1) {
              plStack_178 = (long *)CONCAT44(plStack_178._4_4_,*puVar24);
              func_0x0001072c7768(&uStack_100,&plStack_178);
            }
            lStack_88 = lStack_f8;
            uStack_90 = uStack_100;
            uStack_80 = uStack_f0;
            uStack_100 = 0;
            lStack_f8 = 0;
            uStack_f0 = 0;
            alStack_1b8[2] = 0;
            alStack_1b8[3] = 0;
            alStack_1b8[1] = 0;
            uStack_1c8 = uStack_1c8 & 0xffffffffffffff00;
            plStack_1d0 = alStack_1b8 + 1;
            func_0x0001072c6194(alStack_1b8 + 1,1);
            lStack_1c0 = alStack_1b8[2];
            alStack_1b8[0] = alStack_1b8[2];
            uStack_160 = 0;
            plStack_178 = alStack_1b8 + 3;
            plStack_170 = &lStack_1c0;
            plStack_168 = alStack_1b8;
            func_0x000107297530(alStack_1b8[2],&uStack_90);
            lVar20 = alStack_1b8[0] + 0x18;
            uStack_160 = 1;
            alStack_1b8[0] = lVar20;
            func_0x0001072c62a8(&plStack_178);
            uStack_1c8 = CONCAT71(uStack_1c8._1_7_,1);
            alStack_1b8[2] = lVar20;
            func_0x0001072c630c(&plStack_1d0);
            if (uStack_288 < auStack_280[0]) {
              func_0x00010738d78c();
              unaff_x25 = extraout_x8_00 + 0x18;
            }
            else {
              plVar9 = &lStack_290;
              func_0x0001072c8bb0(plVar9,(long)(uStack_288 - lStack_290) / 0x18 + 1);
              func_0x0001072c89f8(&plStack_178,plVar9,(long)(uStack_288 - lStack_290) / 0x18,
                                  auStack_280);
              func_0x00010738d78c(plStack_168);
              plStack_168 = plStack_168 + 3;
              func_0x0001072c89d0(&lStack_290,&plStack_178);
              unaff_x25 = uStack_288;
              func_0x0001072c8aa0(&plStack_178);
            }
            uStack_288 = unaff_x25;
            func_0x0001072c6820(alStack_1b8 + 1);
            func_0x000104c336c8(&uStack_90);
            func_0x000104c336c8(&uStack_100);
          }
          uStack_90 = CONCAT44(uStack_90._4_4_,1);
          uStack_80 = uStack_288;
          lStack_88 = lStack_290;
          uStack_78 = auStack_280[0];
          lStack_290 = 0;
          uStack_288 = 0;
          auStack_280[0] = 0;
          func_0x000100060964(alStack_1b8 + 1,&UNK_10f40acdb);
          func_0x000104c318bc(&plStack_178,alStack_1b8 + 1);
          func_0x00010724ae4c(auStack_140,&DAT_10f34b957);
          func_0x000107268084(&plStack_1d0,&plStack_178,1);
          func_0x0001072c6f80(&uStack_100,&uStack_90);
          uStack_d8 = uStack_1c8;
          plStack_e0 = plStack_1d0;
          plStack_1d0 = (long *)0x0;
          uStack_1c8 = 0;
          uStack_d0 = 4;
          func_0x000104c335c0(&plStack_1d0);
          func_0x0001072684c8(&plStack_178);
          func_0x000104c2f714(alStack_1b8 + 1);
          func_0x0001072c5cdc(&plStack_1e0);
          unaff_x26 = plStack_1e0;
          uVar10 = plStack_1e0[1];
          unaff_x27 = (ulong *)(plStack_1e0 + 2);
          if (uVar10 < *unaff_x27) {
            func_0x0001072c6f48(uVar10,&uStack_100);
            lVar20 = uVar10 + 0x70;
            unaff_x26[1] = lVar20;
          }
          else {
            plVar16 = plStack_1e0;
            func_0x0001072c7268(plStack_1e0,(long)(uVar10 - *plStack_1e0) / 0x70 + 1);
            func_0x0001072c6e84(&plStack_178,plVar16,(unaff_x26[1] - *unaff_x26) / 0x70,unaff_x27);
            func_0x0001072c6f48(plStack_168,&uStack_100);
            plStack_168 = plStack_168 + 0xe;
            func_0x0001072c6e50(unaff_x26,&plStack_178);
            lVar20 = unaff_x26[1];
            func_0x0001072c7020(&plStack_178);
          }
          unaff_x26[1] = lVar20;
          func_0x0001072c6ccc(&uStack_100);
          func_0x0001072c6b38(&uStack_90);
          func_0x0001072c6c1c(&lStack_290);
        }
        FUN_107330fdc(aplStack_270);
        plVar19 = (long *)((long)plVar19 + 1);
      }
    }
    func_0x000107331000(aplStack_260);
    func_0x00010732becc(auStack_240);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1f8);
  }
  lVar20 = *(long *)(unaff_x19 + 0x130);
  uStack_298 = uStack_1d8;
  plStack_2a0 = plStack_1e0;
  plStack_1e0 = (long *)0x0;
  uStack_1d8 = 0;
  puStack_2c0 = &UNK_10e52b660;
  uStack_2b8 = 0;
  uStack_2b0 = 0;
  uStack_2a8 = 0;
  FUN_10735a3e4(param_1,unaff_x19 + 0xe8,lVar20,&plStack_2a0,&puStack_2c0);
  func_0x000107261dac(&puStack_2c0);
  func_0x0001072c8f3c(&plStack_2a0);
  pplVar11 = &plStack_1e0;
  func_0x0001072c8f3c();
  func_0x00010738d6ac(uStack_70);
  if ((bool)in_ZR) {
    return pplVar11;
  }
  ___stack_chk_fail();
  func_0x000107261dac(&puStack_2c0);
  func_0x0001072c8f3c(&plStack_2a0);
  pplVar12 = &plStack_1e0;
  func_0x0001072c8f3c();
  func_0x00010738d734();
  uStack_350 = 0x18;
  uStack_320 = 1;
  pcStack_2f8 = FUN_10738bf54;
  pplVar13 = pplVar12 + 1;
  puStack_348 = unaff_x27;
  plStack_340 = unaff_x26;
  uStack_338 = unaff_x25;
  plStack_330 = alStack_1b8;
  plStack_328 = &lStack_1c0;
  plStack_318 = alStack_1b8 + 1;
  plStack_310 = alStack_1b8 + 3;
  pplStack_308 = pplVar11;
  puStack_300 = &stack0xfffffffffffffff0;
  FUN_10738c344();
  uVar7 = (int)(*(byte *)(lVar20 + 0x70) - 1) < 0;
  if (*(byte *)(lVar20 + 0x70) != 1) {
    return pplVar13;
  }
  func_0x0001072ab574();
  if ((*(byte *)(lVar20 + 0x70) & 1) == 0) {
    func_0x000104bdc2c8();
    goto LAB_10738c310;
  }
  puVar22 = (ulong *)((ulong)pplVar13 & 0xffffffff);
  puVar25 = (ulong *)pplVar12[0x36];
  uVar18 = (uint)pplVar13;
  if (puVar25 != (ulong *)0x0) {
    uVar10 = (long)puVar25 - 1;
    uVar23 = (uint)puVar25;
    if (((ulong)puVar25 & uVar10) == 0) {
      unaff_x27 = (ulong *)((ulong)(uVar23 - 1) & (ulong)puVar22);
      uVar7 = false;
    }
    else {
      uVar7 = (long)puVar25 - (long)puVar22 < 0;
      unaff_x27 = puVar22;
      if (puVar25 <= puVar22) {
        uVar3 = 0;
        if (uVar23 != 0) {
          uVar3 = uVar18 / uVar23;
        }
        unaff_x27 = (ulong *)(ulong)(uVar18 - uVar3 * uVar23);
      }
    }
    plVar19 = (long *)pplVar12[0x35][(long)unaff_x27];
    if (plVar19 != (long *)0x0) {
      do {
        while( true ) {
          plVar19 = (long *)*plVar19;
          if (plVar19 == (long *)0x0) goto LAB_10738c040;
          puVar15 = (ulong *)plVar19[1];
          if (puVar15 != puVar22) break;
          uVar7 = (int)(*(uint *)(plVar19 + 2) - uVar18) < 0;
          if (*(uint *)(plVar19 + 2) == uVar18) goto LAB_10738c2c4;
        }
        if (((ulong)puVar25 & uVar10) == 0) {
          puVar15 = (ulong *)((ulong)puVar15 & uVar10);
        }
        else if (puVar25 <= puVar15) {
          uVar4 = 0;
          if (puVar25 != (ulong *)0x0) {
            uVar4 = (ulong)puVar15 / (ulong)puVar25;
          }
          puVar15 = (ulong *)((long)puVar15 - uVar4 * (long)puVar25);
        }
        uVar7 = (long)puVar15 - (long)unaff_x27 < 0;
      } while (puVar15 == unaff_x27);
    }
  }
LAB_10738c040:
  plVar19 = (long *)0x88;
  __Znwm();
  pplVar11 = pplVar12 + 0x37;
  uStack_358 = 0;
  *plVar19 = 0;
  plVar19[1] = (long)puVar22;
  *(uint *)(plVar19 + 2) = uVar18;
  plVar19[4] = 0;
  plVar19[3] = 0;
  plVar19[6] = 0;
  plVar19[5] = 0;
  plVar19[8] = 0;
  plVar19[7] = 0;
  plVar19[10] = 0;
  plVar19[9] = 0;
  plVar19[0xc] = 0;
  plVar19[0xb] = 0;
  plVar19[0xe] = 0;
  plVar19[0xd] = 0;
  plVar19[0x10] = 0;
  plVar19[0xf] = 0;
  plStack_368 = plVar19;
  pplStack_360 = pplVar11;
  func_0x000104c2f64c(plVar19 + 3);
  puVar15 = (ulong *)(plVar19 + 10);
  func_0x000104c2f64c();
  uStack_358 = CONCAT71(uStack_358._1_7_,1);
  func_0x00010738d850(pplVar12[0x38]);
  if ((puVar25 != (ulong *)0x0) && (func_0x00010738d844(), !(bool)uVar7)) goto LAB_10738c254;
  bVar6 = (ulong *)0x2 < puVar25;
  bVar8 = puVar25 == (ulong *)0x3;
  func_0x00010738d6e0((long)puVar25 << 1);
  puVar21 = extraout_x8_01;
  if (!bVar6 || bVar8) {
    puVar21 = extraout_x9;
  }
  if ((long)puVar21 - 1U == 0) {
    puVar21 = (ulong *)0x2;
  }
  else if (((ulong)puVar21 & (long)puVar21 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    puVar15 = puVar21;
  }
  puVar25 = (ulong *)pplVar12[0x36];
  if (puVar25 < puVar21) {
LAB_10738c10c:
    if ((ulong)puVar21 >> 0x3d != 0) {
      func_0x000104bd35f4();
LAB_10738c310:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10738c314);
      (*pcVar5)();
    }
    lVar14 = (long)puVar21 << 3;
    __Znwm(lVar14);
    FUN_10738d5bc(pplVar12 + 0x35,lVar14);
    puVar25 = (ulong *)0x0;
    pplVar12[0x36] = (long *)puVar21;
    while (bVar8 = puVar25 <= puVar21, puVar21 != puVar25) {
      func_0x00010738d8e4();
      puVar25 = extraout_x9_00;
    }
    puVar25 = puVar21;
    if (*pplVar11 != (long *)0x0) {
      func_0x00010738d8d0();
      puVar15 = extraout_x11;
      if (bVar8) {
        puVar15 = (ulong *)((long)extraout_x11 - extraout_x12 * (long)puVar21);
      }
      if (((ulong)puVar21 & extraout_x9_01) == 0) {
        puVar15 = (ulong *)((ulong)extraout_x11 & extraout_x9_01);
      }
      *(long ***)(extraout_x8_02 + (long)puVar15 * 8) = pplVar11;
      lVar14 = extraout_x8_02;
      uVar10 = extraout_x9_01;
      plVar16 = extraout_x10;
      while (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0) {
        puVar17 = (ulong *)plVar16[1];
        if (((ulong)puVar21 & uVar10) == 0) {
          puVar17 = (ulong *)((ulong)puVar17 & uVar10);
        }
        else if (puVar21 <= puVar17) {
          uVar4 = 0;
          if (puVar21 != (ulong *)0x0) {
            uVar4 = (ulong)puVar17 / (ulong)puVar21;
          }
          puVar17 = (ulong *)((long)puVar17 - uVar4 * (long)puVar21);
        }
        if (puVar17 != puVar15) {
          if (*(long *)(lVar14 + (long)puVar17 * 8) == 0) {
            func_0x00010738d8c4();
            lVar14 = extraout_x8_04;
            uVar10 = extraout_x9_03;
            plVar16 = extraout_x12_00;
            puVar15 = extraout_x11_01;
          }
          else {
            func_0x00010738d708();
            lVar14 = extraout_x8_03;
            uVar10 = extraout_x9_02;
            plVar16 = extraout_x10_00;
            puVar15 = extraout_x11_00;
          }
        }
      }
    }
  }
  else if (puVar21 < puVar25) {
    func_0x00010738d8fc((float)pplVar12[0x38],*(undefined4 *)(pplVar12 + 0x39));
    if ((puVar25 < (ulong *)0x3) || (((ulong)puVar25 & (long)puVar25 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010738d6c0();
    }
    if (puVar21 <= puVar15) {
      puVar21 = puVar15;
    }
    if (puVar21 < puVar25) {
      if (puVar21 != (ulong *)0x0) goto LAB_10738c10c;
      FUN_10738d5bc(pplVar12 + 0x35,0);
      pplVar12[0x36] = (long *)0x0;
      puVar25 = (ulong *)0x0;
    }
    else {
      puVar25 = (ulong *)pplVar12[0x36];
    }
  }
  if (((ulong)puVar25 & (long)puVar25 - 1U) == 0) {
    unaff_x27 = (ulong *)((ulong)((int)puVar25 - 1) & (ulong)puVar22);
  }
  else {
    unaff_x27 = puVar22;
    if (puVar25 <= puVar22) {
      uVar10 = 0;
      if (puVar25 != (ulong *)0x0) {
        uVar10 = (ulong)puVar22 / (ulong)puVar25;
      }
      unaff_x27 = (ulong *)((long)puVar22 - uVar10 * (long)puVar25);
    }
  }
LAB_10738c254:
  plVar16 = pplVar12[0x35];
  if (plVar16[(long)unaff_x27] == 0) {
    *plVar19 = (long)*pplVar11;
    *pplVar11 = plVar19;
    plVar16[(long)unaff_x27] = (long)pplVar11;
    if (*plVar19 != 0) {
      puVar22 = *(ulong **)(*plVar19 + 8);
      if (((ulong)puVar25 & (long)puVar25 - 1U) == 0) {
        puVar22 = (ulong *)((ulong)puVar22 & (long)puVar25 - 1U);
      }
      else if (puVar25 <= puVar22) {
        uVar10 = 0;
        if (puVar25 != (ulong *)0x0) {
          uVar10 = (ulong)puVar22 / (ulong)puVar25;
        }
        puVar22 = (ulong *)((long)puVar22 - uVar10 * (long)puVar25);
      }
      plVar16[(long)puVar22] = (long)plVar19;
    }
  }
  else {
    func_0x00010738d77c();
  }
  plStack_368 = (long *)0x0;
  pplVar12[0x38] = (long *)((long)pplVar12[0x38] + 1);
  FUN_10738d5d4(&plStack_368);
LAB_10738c2c4:
  func_0x000107262f3c(plVar19 + 3,lVar20);
  func_0x000107262f3c(plVar19 + 10,lVar20 + 0x38);
  func_0x00010738d87c();
  return pplVar13;
}



/* Entry: 10738bf54; end: 10738c343;  */

/* WARNING: Heritage AFTER dead removal. Example location: d0 : 0x00010738c0b0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_10738bf54(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long *plVar11;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *extraout_x11_01;
  long extraout_x12;
  long *plVar12;
  long *extraout_x12_00;
  long *plVar13;
  uint uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  uint uVar18;
  long *plVar19;
  long *unaff_x27;
  long *plStack_78;
  long *plStack_70;
  undefined8 uStack_68;
  
  uVar7 = param_2 + 8;
  FUN_10738c344();
  uVar5 = (int)(*(byte *)(param_4 + 0x70) - 1) < 0;
  if (*(byte *)(param_4 + 0x70) != 1) {
    return uVar7;
  }
  func_0x0001072ab574();
  if ((*(byte *)(param_4 + 0x70) & 1) == 0) {
    func_0x000104bdc2c8();
    goto LAB_10738c310;
  }
  uVar14 = (uint)uVar7;
  plVar17 = (long *)(uVar7 & 0xffffffff);
  plVar19 = *(long **)(param_2 + 0x1b0);
  if (plVar19 != (long *)0x0) {
    uVar10 = (long)plVar19 - 1;
    uVar18 = (uint)plVar19;
    if (((ulong)plVar19 & uVar10) == 0) {
      unaff_x27 = (long *)((ulong)(uVar18 - 1) & (ulong)plVar17);
      uVar5 = false;
    }
    else {
      uVar5 = (long)plVar19 - (long)plVar17 < 0;
      unaff_x27 = plVar17;
      if (plVar19 <= plVar17) {
        uVar1 = 0;
        if (uVar18 != 0) {
          uVar1 = uVar14 / uVar18;
        }
        unaff_x27 = (long *)(ulong)(uVar14 - uVar1 * uVar18);
      }
    }
    plVar15 = *(long **)(*(long *)(param_2 + 0x1a8) + (long)unaff_x27 * 8);
    if (plVar15 != (long *)0x0) {
      do {
        while( true ) {
          plVar15 = (long *)*plVar15;
          if (plVar15 == (long *)0x0) goto LAB_10738c040;
          plVar11 = (long *)plVar15[1];
          if (plVar11 != plVar17) break;
          uVar5 = (int)(*(uint *)(plVar15 + 2) - uVar14) < 0;
          if (*(uint *)(plVar15 + 2) == uVar14) goto LAB_10738c2c4;
        }
        if (((ulong)plVar19 & uVar10) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar10);
        }
        else if (plVar19 <= plVar11) {
          uVar2 = 0;
          if (plVar19 != (long *)0x0) {
            uVar2 = (ulong)plVar11 / (ulong)plVar19;
          }
          plVar11 = (long *)((long)plVar11 - uVar2 * (long)plVar19);
        }
        uVar5 = (long)plVar11 - (long)unaff_x27 < 0;
      } while (plVar11 == unaff_x27);
    }
  }
LAB_10738c040:
  plVar15 = (long *)0x88;
  __Znwm();
  plVar11 = (long *)(param_2 + 0x1b8);
  uStack_68 = 0;
  *plVar15 = 0;
  plVar15[1] = (long)plVar17;
  *(uint *)(plVar15 + 2) = uVar14;
  plVar15[4] = 0;
  plVar15[3] = 0;
  plVar15[6] = 0;
  plVar15[5] = 0;
  plVar15[8] = 0;
  plVar15[7] = 0;
  plVar15[10] = 0;
  plVar15[9] = 0;
  plVar15[0xc] = 0;
  plVar15[0xb] = 0;
  plVar15[0xe] = 0;
  plVar15[0xd] = 0;
  plVar15[0x10] = 0;
  plVar15[0xf] = 0;
  plStack_78 = plVar15;
  plStack_70 = plVar11;
  func_0x000104c2f64c(plVar15 + 3);
  plVar8 = plVar15 + 10;
  func_0x000104c2f64c();
  uStack_68 = CONCAT71(uStack_68._1_7_,1);
  func_0x00010738d850(*(undefined8 *)(param_2 + 0x1c0));
  if ((plVar19 != (long *)0x0) &&
     (func_0x00010738d844(param_1,*(undefined4 *)(param_2 + 0x1c8),(float)plVar19), !(bool)uVar5))
  goto LAB_10738c254;
  bVar4 = (long *)0x2 < plVar19;
  bVar6 = plVar19 == (long *)0x3;
  func_0x00010738d6e0((long)plVar19 << 1);
  plVar16 = extraout_x8;
  if (!bVar4 || bVar6) {
    plVar16 = extraout_x9;
  }
  if ((long)plVar16 - 1U == 0) {
    plVar16 = (long *)0x2;
  }
  else if (((ulong)plVar16 & (long)plVar16 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar8 = plVar16;
  }
  plVar19 = *(long **)(param_2 + 0x1b0);
  if (plVar19 < plVar16) {
LAB_10738c10c:
    if ((ulong)plVar16 >> 0x3d != 0) {
      func_0x000104bd35f4();
LAB_10738c310:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10738c314);
      (*pcVar3)();
    }
    lVar9 = (long)plVar16 << 3;
    __Znwm(lVar9);
    FUN_10738d5bc(param_2 + 0x1a8,lVar9);
    plVar19 = (long *)0x0;
    *(long **)(param_2 + 0x1b0) = plVar16;
    while (bVar6 = plVar19 <= plVar16, plVar16 != plVar19) {
      func_0x00010738d8e4();
      plVar19 = extraout_x9_00;
    }
    plVar19 = plVar16;
    if (*plVar11 != 0) {
      func_0x00010738d8d0();
      plVar8 = extraout_x11;
      if (bVar6) {
        plVar8 = (long *)((long)extraout_x11 - extraout_x12 * (long)plVar16);
      }
      if (((ulong)plVar16 & extraout_x9_01) == 0) {
        plVar8 = (long *)((ulong)extraout_x11 & extraout_x9_01);
      }
      *(long **)(extraout_x8_00 + (long)plVar8 * 8) = plVar11;
      lVar9 = extraout_x8_00;
      uVar10 = extraout_x9_01;
      plVar12 = extraout_x10;
      while (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0) {
        plVar13 = (long *)plVar12[1];
        if (((ulong)plVar16 & uVar10) == 0) {
          plVar13 = (long *)((ulong)plVar13 & uVar10);
        }
        else if (plVar16 <= plVar13) {
          uVar2 = 0;
          if (plVar16 != (long *)0x0) {
            uVar2 = (ulong)plVar13 / (ulong)plVar16;
          }
          plVar13 = (long *)((long)plVar13 - uVar2 * (long)plVar16);
        }
        if (plVar13 != plVar8) {
          if (*(long *)(lVar9 + (long)plVar13 * 8) == 0) {
            func_0x00010738d8c4();
            lVar9 = extraout_x8_02;
            uVar10 = extraout_x9_03;
            plVar12 = extraout_x12_00;
            plVar8 = extraout_x11_01;
          }
          else {
            func_0x00010738d708();
            lVar9 = extraout_x8_01;
            uVar10 = extraout_x9_02;
            plVar12 = extraout_x10_00;
            plVar8 = extraout_x11_00;
          }
        }
      }
    }
  }
  else if (plVar16 < plVar19) {
    func_0x00010738d8fc(param_1,*(undefined4 *)(param_2 + 0x1c8));
    if ((plVar19 < (long *)0x3) || (((ulong)plVar19 & (long)plVar19 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010738d6c0();
    }
    if (plVar16 <= plVar8) {
      plVar16 = plVar8;
    }
    if (plVar16 < plVar19) {
      if (plVar16 != (long *)0x0) goto LAB_10738c10c;
      FUN_10738d5bc(param_2 + 0x1a8,0);
      *(undefined8 *)(param_2 + 0x1b0) = 0;
      plVar19 = (long *)0x0;
    }
    else {
      plVar19 = *(long **)(param_2 + 0x1b0);
    }
  }
  if (((ulong)plVar19 & (long)plVar19 - 1U) == 0) {
    unaff_x27 = (long *)((ulong)((int)plVar19 - 1) & (ulong)plVar17);
  }
  else {
    unaff_x27 = plVar17;
    if (plVar19 <= plVar17) {
      uVar10 = 0;
      if (plVar19 != (long *)0x0) {
        uVar10 = (ulong)plVar17 / (ulong)plVar19;
      }
      unaff_x27 = (long *)((long)plVar17 - uVar10 * (long)plVar19);
    }
  }
LAB_10738c254:
  lVar9 = *(long *)(param_2 + 0x1a8);
  if (*(long *)(lVar9 + (long)unaff_x27 * 8) == 0) {
    *plVar15 = *plVar11;
    *plVar11 = (long)plVar15;
    *(long **)(lVar9 + (long)unaff_x27 * 8) = plVar11;
    if (*plVar15 != 0) {
      plVar17 = *(long **)(*plVar15 + 8);
      if (((ulong)plVar19 & (long)plVar19 - 1U) == 0) {
        plVar17 = (long *)((ulong)plVar17 & (long)plVar19 - 1U);
      }
      else if (plVar19 <= plVar17) {
        uVar10 = 0;
        if (plVar19 != (long *)0x0) {
          uVar10 = (ulong)plVar17 / (ulong)plVar19;
        }
        plVar17 = (long *)((long)plVar17 - uVar10 * (long)plVar19);
      }
      *(long **)(lVar9 + (long)plVar17 * 8) = plVar15;
    }
  }
  else {
    func_0x00010738d77c();
  }
  plStack_78 = (long *)0x0;
  *(long *)(param_2 + 0x1c0) = *(long *)(param_2 + 0x1c0) + 1;
  FUN_10738d5d4(&plStack_78);
LAB_10738c2c4:
  func_0x000107262f3c(plVar15 + 3,param_4);
  func_0x000107262f3c(plVar15 + 10,param_4 + 0x38);
  func_0x00010738d87c();
  return uVar7;
}



/* Entry: 10738c344; end: 10738c69b;  */

long * FUN_10738c344(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 in_NG;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  long *extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar8;
  long *plVar9;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong extraout_x9_03;
  long *extraout_x10;
  long *extraout_x10_00;
  long *extraout_x11;
  long *extraout_x11_00;
  long *extraout_x11_01;
  long extraout_x12;
  long *plVar10;
  long *extraout_x12_00;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *unaff_x23;
  long *plVar14;
  uint uVar15;
  long *plVar16;
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  func_0x00010738d7cc();
  uVar1 = *(uint *)(param_1 + 0xd8);
  plVar12 = (long *)(ulong)uVar1;
  *(uint *)(param_1 + 0xd8) = uVar1 + 1;
  plVar16 = *(long **)(param_1 + 0xb8);
  if (plVar16 != (long *)0x0) {
    uVar7 = (long)plVar16 - 1;
    uVar15 = (uint)plVar16;
    if (((ulong)plVar16 & uVar7) == 0) {
      unaff_x23 = (long *)(ulong)(uVar15 - 1 & uVar1);
      in_NG = false;
    }
    else {
      in_NG = (long)plVar16 - (long)plVar12 < 0;
      unaff_x23 = plVar12;
      if (plVar16 <= plVar12) {
        uVar2 = 0;
        if (uVar15 != 0) {
          uVar2 = uVar1 / uVar15;
        }
        unaff_x23 = (long *)(ulong)(uVar1 - uVar2 * uVar15);
      }
    }
    plVar13 = *(long **)(*(long *)(param_1 + 0xb0) + (long)unaff_x23 * 8);
    if (plVar13 != (long *)0x0) {
      do {
        while( true ) {
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) goto LAB_10738c408;
          plVar9 = (long *)plVar13[1];
          if (plVar9 != plVar12) break;
          in_NG = (int)(*(uint *)(plVar13 + 2) - uVar1) < 0;
          if (*(uint *)(plVar13 + 2) == uVar1) goto LAB_10738c650;
        }
        if (((ulong)plVar16 & uVar7) == 0) {
          plVar9 = (long *)((ulong)plVar9 & uVar7);
        }
        else if (plVar16 <= plVar9) {
          uVar3 = 0;
          if (plVar16 != (long *)0x0) {
            uVar3 = (ulong)plVar9 / (ulong)plVar16;
          }
          plVar9 = (long *)((long)plVar9 - uVar3 * (long)plVar16);
        }
        in_NG = (long)plVar9 - (long)unaff_x23 < 0;
      } while (plVar9 == unaff_x23);
    }
  }
LAB_10738c408:
  plVar13 = (long *)0x38;
  __Znwm();
  plVar9 = (long *)(param_1 + 0xc0);
  uStack_58 = 1;
  *plVar13 = 0;
  plVar13[1] = (long)plVar12;
  *(uint *)(plVar13 + 2) = uVar1;
  plVar13[6] = 0;
  plVar6 = plVar13;
  plStack_68 = plVar13;
  plStack_60 = plVar9;
  func_0x00010738d850(*(undefined8 *)(param_1 + 200));
  if ((plVar16 != (long *)0x0) && (func_0x00010738d844(), !(bool)in_NG)) goto LAB_10738c5e0;
  bVar4 = (long *)0x2 < plVar16;
  bVar5 = plVar16 == (long *)0x3;
  func_0x00010738d6e0((long)plVar16 << 1);
  plVar14 = extraout_x8;
  if (!bVar4 || bVar5) {
    plVar14 = extraout_x9;
  }
  if ((long)plVar14 - 1U == 0) {
    plVar14 = (long *)0x2;
  }
  else if (((ulong)plVar14 & (long)plVar14 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar16 = *(long **)(param_1 + 0xb8);
    plVar6 = plVar14;
  }
  if (plVar16 < plVar14) {
LAB_10738c4a0:
    plVar16 = plVar14;
    FUN_10738d568(plVar14);
    FUN_10738d550(param_1 + 0xb0,plVar16);
    plVar16 = (long *)0x0;
    *(long **)(param_1 + 0xb8) = plVar14;
    while (bVar5 = plVar16 <= plVar14, plVar14 != plVar16) {
      func_0x00010738d8e4();
      plVar16 = extraout_x9_00;
    }
    plVar16 = plVar14;
    if (*plVar9 != 0) {
      func_0x00010738d8d0();
      plVar6 = extraout_x11;
      if (bVar5) {
        plVar6 = (long *)((long)extraout_x11 - extraout_x12 * (long)plVar14);
      }
      if (((ulong)plVar14 & extraout_x9_01) == 0) {
        plVar6 = (long *)((ulong)extraout_x11 & extraout_x9_01);
      }
      *(long **)(extraout_x8_00 + (long)plVar6 * 8) = plVar9;
      lVar8 = extraout_x8_00;
      uVar7 = extraout_x9_01;
      plVar10 = extraout_x10;
      while (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0) {
        plVar11 = (long *)plVar10[1];
        if (((ulong)plVar14 & uVar7) == 0) {
          plVar11 = (long *)((ulong)plVar11 & uVar7);
        }
        else if (plVar14 <= plVar11) {
          uVar3 = 0;
          if (plVar14 != (long *)0x0) {
            uVar3 = (ulong)plVar11 / (ulong)plVar14;
          }
          plVar11 = (long *)((long)plVar11 - uVar3 * (long)plVar14);
        }
        if (plVar11 != plVar6) {
          if (*(long *)(lVar8 + (long)plVar11 * 8) == 0) {
            func_0x00010738d8c4();
            lVar8 = extraout_x8_02;
            uVar7 = extraout_x9_03;
            plVar10 = extraout_x12_00;
            plVar6 = extraout_x11_01;
          }
          else {
            func_0x00010738d708();
            lVar8 = extraout_x8_01;
            uVar7 = extraout_x9_02;
            plVar10 = extraout_x10_00;
            plVar6 = extraout_x11_00;
          }
        }
      }
    }
  }
  else if (plVar14 < plVar16) {
    func_0x00010738d8fc((float)*(ulong *)(param_1 + 200),*(undefined4 *)(param_1 + 0xd0));
    if ((plVar16 < (long *)0x3) || (((ulong)plVar16 & (long)plVar16 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else {
      func_0x00010738d6c0();
    }
    if (plVar14 <= plVar6) {
      plVar14 = plVar6;
    }
    if (plVar14 < plVar16) {
      if (plVar14 != (long *)0x0) goto LAB_10738c4a0;
      FUN_10738d550(param_1 + 0xb0,0);
      *(undefined8 *)(param_1 + 0xb8) = 0;
      plVar16 = (long *)0x0;
    }
    else {
      plVar16 = *(long **)(param_1 + 0xb8);
    }
  }
  if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
    unaff_x23 = (long *)(ulong)((int)plVar16 - 1U & uVar1);
  }
  else {
    unaff_x23 = plVar12;
    if (plVar16 <= plVar12) {
      uVar7 = 0;
      if (plVar16 != (long *)0x0) {
        uVar7 = (ulong)plVar12 / (ulong)plVar16;
      }
      unaff_x23 = (long *)((long)plVar12 - uVar7 * (long)plVar16);
    }
  }
LAB_10738c5e0:
  lVar8 = *(long *)(param_1 + 0xb0);
  if (*(long *)(lVar8 + (long)unaff_x23 * 8) == 0) {
    *plVar13 = *plVar9;
    *plVar9 = (long)plVar13;
    *(long **)(lVar8 + (long)unaff_x23 * 8) = plVar9;
    if (*plVar13 != 0) {
      plVar9 = *(long **)(*plVar13 + 8);
      if (((ulong)plVar16 & (long)plVar16 - 1U) == 0) {
        plVar9 = (long *)((ulong)plVar9 & (long)plVar16 - 1U);
      }
      else if (plVar16 <= plVar9) {
        uVar7 = 0;
        if (plVar16 != (long *)0x0) {
          uVar7 = (ulong)plVar9 / (ulong)plVar16;
        }
        plVar9 = (long *)((long)plVar9 - uVar7 * (long)plVar16);
      }
      *(long **)(lVar8 + (long)plVar9 * 8) = plVar13;
    }
  }
  else {
    func_0x00010738d77c();
  }
  plStack_68 = (long *)0x0;
  *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
  FUN_10738d584(&plStack_68);
LAB_10738c650:
  FUN_10738d3b8(plVar13 + 3,param_2);
  func_0x00010738d884();
  return plVar12;
}



/* Entry: 10738c69c; end: 10738c9bf;  */

void FUN_10738c69c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  func_0x00010738c7fc(param_1 + 8);
  func_0x0001072ab574();
  plVar2 = (long *)(param_1 + 0x1a8);
  FUN_10738d60c(plVar2,param_2);
  if (plVar2 == (long *)0x0) goto LAB_10738c7f0;
  uVar5 = *(ulong *)(param_1 + 0x1b0);
  lVar3 = *plVar2;
  uVar4 = plVar2[1];
  uVar7 = uVar5 - 1;
  if ((uVar5 & uVar7) == 0) {
    uVar4 = uVar7 & uVar4;
  }
  else if (uVar5 <= uVar4) {
    uVar9 = 0;
    if (uVar5 != 0) {
      uVar9 = uVar4 / uVar5;
    }
    uVar4 = uVar4 - uVar9 * uVar5;
  }
  lVar8 = *(long *)(param_1 + 0x1a8);
  plVar1 = *(long **)(lVar8 + uVar4 * 8);
  do {
    plVar6 = plVar1;
    plVar1 = (long *)*plVar6;
  } while ((long *)*plVar6 != plVar2);
  if (plVar6 == (long *)(param_1 + 0x1b8)) {
LAB_10738c75c:
    if (lVar3 == 0) {
LAB_10738c790:
      *(undefined8 *)(lVar8 + uVar4 * 8) = 0;
      lVar3 = *plVar2;
      goto LAB_10738c798;
    }
    uVar9 = *(ulong *)(lVar3 + 8);
    if ((uVar5 & uVar7) == 0) {
      uVar10 = uVar9 & uVar7;
    }
    else {
      uVar10 = uVar9;
      if (uVar5 <= uVar9) {
        uVar10 = 0;
        if (uVar5 != 0) {
          uVar10 = uVar9 / uVar5;
        }
        uVar10 = uVar9 - uVar10 * uVar5;
      }
    }
    if (uVar10 != uVar4) goto LAB_10738c790;
LAB_10738c7a0:
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar7 * uVar5;
    }
    if (uVar9 != uVar4) {
      *(long **)(lVar8 + uVar9 * 8) = plVar6;
      lVar3 = *plVar2;
    }
  }
  else {
    uVar9 = plVar6[1];
    if ((uVar5 & uVar7) == 0) {
      uVar9 = uVar9 & uVar7;
    }
    else if (uVar5 <= uVar9) {
      uVar10 = 0;
      if (uVar5 != 0) {
        uVar10 = uVar9 / uVar5;
      }
      uVar9 = uVar9 - uVar10 * uVar5;
    }
    if (uVar9 != uVar4) goto LAB_10738c75c;
LAB_10738c798:
    if (lVar3 != 0) {
      uVar9 = *(ulong *)(lVar3 + 8);
      goto LAB_10738c7a0;
    }
  }
  *plVar6 = lVar3;
  *plVar2 = 0;
  *(long *)(param_1 + 0x1c0) = *(long *)(param_1 + 0x1c0) + -1;
  func_0x00010738d820();
  FUN_10738d5d4();
LAB_10738c7f0:
  func_0x00010738d87c();
  return;
}



/* Entry: 10738c9c0; end: 10738ca2b;  */

undefined8 * FUN_10738c9c0(long param_1)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 auStack_68 [7];
  undefined4 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  auStack_68[0] = 0;
  uStack_30 = 1;
  FUN_10738b698(param_1 + 8,auStack_68);
  puVar1 = auStack_68;
  FUN_10738ccf4(puVar1);
  func_0x00010738d6ac(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  func_0x00010738d838();
  FUN_10738ccf4();
  func_0x00010738d734();
  func_0x00010738ca58(puVar1 + 7);
  func_0x000104c2f714(puVar1);
  return puVar1;
}



/* Entry: 10738ca2c; end: 10738ca83;  */

long FUN_10738ca2c(long param_1)

{
  func_0x00010738ca58(param_1 + 0x38);
  func_0x000104c2f714(param_1);
  return param_1;
}



/* Entry: 10738ca84; end: 10738cacf;  */

void FUN_10738ca84(void)

{
  func_0x00010738ca9c();
  return;
}



/* Entry: 10738cad0; end: 10738ccf3;  */

undefined1  [16] FUN_10738cad0(undefined8 param_1,long *param_2,undefined8 param_3,long *param_4)

{
  ulong uVar1;
  undefined1 in_NG;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 extraout_x8;
  long lVar6;
  undefined8 extraout_x9;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *unaff_x25;
  ulong uVar10;
  undefined1 auVar11 [16];
  long *plStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  
  plVar7 = param_2 + 3;
  func_0x00010784b234();
  plVar9 = (long *)param_2[1];
  if (plVar9 != (long *)0x0) {
    uVar10 = (long)plVar9 - 1;
    if (((ulong)plVar9 & uVar10) == 0) {
      unaff_x25 = (long *)((long)plVar9 + 0x7fffffffffffffffU & (ulong)plVar7);
      in_NG = false;
    }
    else {
      in_NG = (long)plVar7 - (long)plVar9 < 0;
      unaff_x25 = plVar7;
      if (plVar9 <= plVar7) {
        uVar1 = 0;
        if (plVar9 != (long *)0x0) {
          uVar1 = (ulong)plVar7 / (ulong)plVar9;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar1 * (long)plVar9);
      }
    }
    plVar8 = *(long **)(*param_2 + (long)unaff_x25 * 8);
    if (plVar8 != (long *)0x0) {
      do {
        while( true ) {
          plVar8 = (long *)*plVar8;
          if (plVar8 == (long *)0x0) goto LAB_10738cb9c;
          plVar5 = (long *)plVar8[1];
          in_NG = (long)plVar5 - (long)plVar7 < 0;
          if (plVar5 != plVar7) break;
          plVar5 = plVar8 + 2;
          func_0x00010726b840(plVar5,param_3);
          if (((ulong)plVar5 & 1) != 0) {
            uVar4 = 0;
            goto LAB_10738ccc8;
          }
        }
        if (((ulong)plVar9 & uVar10) == 0) {
          plVar5 = (long *)((ulong)plVar5 & uVar10);
        }
        else if (plVar9 <= plVar5) {
          uVar1 = 0;
          if (plVar9 != (long *)0x0) {
            uVar1 = (ulong)plVar5 / (ulong)plVar9;
          }
          plVar5 = (long *)((long)plVar5 - uVar1 * (long)plVar9);
        }
        in_NG = (long)plVar5 - (long)unaff_x25 < 0;
      } while (plVar5 == unaff_x25);
    }
  }
LAB_10738cb9c:
  plVar5 = param_2 + 2;
  plVar8 = (long *)0x20;
  __Znwm();
  uStack_58 = 1;
  *plVar8 = 0;
  plVar8[1] = (long)plVar7;
  plVar8[2] = *param_4;
  *(int *)(plVar8 + 3) = (int)param_4[1];
  plStack_68 = plVar8;
  plStack_60 = plVar5;
  func_0x00010738d850(param_2[3]);
  if ((plVar9 == (long *)0x0) ||
     (func_0x00010738d844(param_1,(int)param_2[4],(float)plVar9), (bool)in_NG)) {
    bVar2 = (long *)0x2 < plVar9;
    bVar3 = plVar9 == (long *)0x3;
    func_0x00010738d6e0((long)plVar9 << 1);
    uVar4 = extraout_x8;
    if (!bVar2 || bVar3) {
      uVar4 = extraout_x9;
    }
    func_0x00010726b878(param_2,uVar4);
    plVar9 = (long *)param_2[1];
    if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
      unaff_x25 = (long *)((long)plVar9 + 0x7fffffffffffffffU & (ulong)plVar7);
    }
    else {
      unaff_x25 = plVar7;
      if (plVar9 <= plVar7) {
        uVar10 = 0;
        if (plVar9 != (long *)0x0) {
          uVar10 = (ulong)plVar7 / (ulong)plVar9;
        }
        unaff_x25 = (long *)((long)plVar7 - uVar10 * (long)plVar9);
      }
    }
  }
  plVar8 = plStack_68;
  lVar6 = *param_2;
  if (*(long *)(lVar6 + (long)unaff_x25 * 8) == 0) {
    *plStack_68 = *plVar5;
    *plVar5 = (long)plStack_68;
    *(long **)(lVar6 + (long)unaff_x25 * 8) = plVar5;
    if (*plStack_68 != 0) {
      plVar7 = *(long **)(*plStack_68 + 8);
      if (((ulong)plVar9 & (long)plVar9 - 1U) == 0) {
        plVar7 = (long *)((ulong)plVar7 & (long)plVar9 - 1U);
      }
      else if (plVar9 <= plVar7) {
        uVar10 = 0;
        if (plVar9 != (long *)0x0) {
          uVar10 = (ulong)plVar7 / (ulong)plVar9;
        }
        plVar7 = (long *)((long)plVar7 - uVar10 * (long)plVar9);
      }
      *(long **)(lVar6 + (long)plVar7 * 8) = plStack_68;
    }
  }
  else {
    func_0x00010738d77c();
  }
  plStack_68 = (long *)0x0;
  param_2[3] = param_2[3] + 1;
  func_0x00010726b9d0(&plStack_68);
  uVar4 = 1;
LAB_10738ccc8:
  auVar11._8_8_ = uVar4;
  auVar11._0_8_ = plVar8;
  return auVar11;
}



/* Entry: 10738ccf4; end: 10738cd43;  */

void FUN_10738ccf4(long param_1)

{
  undefined1 uStack_21;
  
  if (*(uint *)(param_1 + 0x38) != 0xffffffff) {
    func_0x00010738d7c4((&PTR_FUN_1109a8200)[*(uint *)(param_1 + 0x38)],&uStack_21);
  }
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  return;
}



/* Entry: 10738cd44; end: 10738cd4f;  */

void FUN_10738cd44(undefined8 param_1,long param_2)

{
  long extraout_x8;
  
  func_0x00010731e900(param_2 + 8);
  if (extraout_x8 != 0) {
    func_0x00010731e8c0();
  }
  return;
}



/* Entry: 10738cd50; end: 10738cd8f;  */

undefined8 * FUN_10738cd50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109a8220;
  __ZNSt3__119__shared_mutex_baseC1Ev(param_1 + 1);
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  return param_1;
}


